#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00459BB0
// Address: 0x459bb0 - 0x45a3d0
void sub_00459BB0_0x459bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459BB0_0x459bb0");
#endif

    switch (ctx->pc) {
        case 0x459bb0u: goto label_459bb0;
        case 0x459bb4u: goto label_459bb4;
        case 0x459bb8u: goto label_459bb8;
        case 0x459bbcu: goto label_459bbc;
        case 0x459bc0u: goto label_459bc0;
        case 0x459bc4u: goto label_459bc4;
        case 0x459bc8u: goto label_459bc8;
        case 0x459bccu: goto label_459bcc;
        case 0x459bd0u: goto label_459bd0;
        case 0x459bd4u: goto label_459bd4;
        case 0x459bd8u: goto label_459bd8;
        case 0x459bdcu: goto label_459bdc;
        case 0x459be0u: goto label_459be0;
        case 0x459be4u: goto label_459be4;
        case 0x459be8u: goto label_459be8;
        case 0x459becu: goto label_459bec;
        case 0x459bf0u: goto label_459bf0;
        case 0x459bf4u: goto label_459bf4;
        case 0x459bf8u: goto label_459bf8;
        case 0x459bfcu: goto label_459bfc;
        case 0x459c00u: goto label_459c00;
        case 0x459c04u: goto label_459c04;
        case 0x459c08u: goto label_459c08;
        case 0x459c0cu: goto label_459c0c;
        case 0x459c10u: goto label_459c10;
        case 0x459c14u: goto label_459c14;
        case 0x459c18u: goto label_459c18;
        case 0x459c1cu: goto label_459c1c;
        case 0x459c20u: goto label_459c20;
        case 0x459c24u: goto label_459c24;
        case 0x459c28u: goto label_459c28;
        case 0x459c2cu: goto label_459c2c;
        case 0x459c30u: goto label_459c30;
        case 0x459c34u: goto label_459c34;
        case 0x459c38u: goto label_459c38;
        case 0x459c3cu: goto label_459c3c;
        case 0x459c40u: goto label_459c40;
        case 0x459c44u: goto label_459c44;
        case 0x459c48u: goto label_459c48;
        case 0x459c4cu: goto label_459c4c;
        case 0x459c50u: goto label_459c50;
        case 0x459c54u: goto label_459c54;
        case 0x459c58u: goto label_459c58;
        case 0x459c5cu: goto label_459c5c;
        case 0x459c60u: goto label_459c60;
        case 0x459c64u: goto label_459c64;
        case 0x459c68u: goto label_459c68;
        case 0x459c6cu: goto label_459c6c;
        case 0x459c70u: goto label_459c70;
        case 0x459c74u: goto label_459c74;
        case 0x459c78u: goto label_459c78;
        case 0x459c7cu: goto label_459c7c;
        case 0x459c80u: goto label_459c80;
        case 0x459c84u: goto label_459c84;
        case 0x459c88u: goto label_459c88;
        case 0x459c8cu: goto label_459c8c;
        case 0x459c90u: goto label_459c90;
        case 0x459c94u: goto label_459c94;
        case 0x459c98u: goto label_459c98;
        case 0x459c9cu: goto label_459c9c;
        case 0x459ca0u: goto label_459ca0;
        case 0x459ca4u: goto label_459ca4;
        case 0x459ca8u: goto label_459ca8;
        case 0x459cacu: goto label_459cac;
        case 0x459cb0u: goto label_459cb0;
        case 0x459cb4u: goto label_459cb4;
        case 0x459cb8u: goto label_459cb8;
        case 0x459cbcu: goto label_459cbc;
        case 0x459cc0u: goto label_459cc0;
        case 0x459cc4u: goto label_459cc4;
        case 0x459cc8u: goto label_459cc8;
        case 0x459cccu: goto label_459ccc;
        case 0x459cd0u: goto label_459cd0;
        case 0x459cd4u: goto label_459cd4;
        case 0x459cd8u: goto label_459cd8;
        case 0x459cdcu: goto label_459cdc;
        case 0x459ce0u: goto label_459ce0;
        case 0x459ce4u: goto label_459ce4;
        case 0x459ce8u: goto label_459ce8;
        case 0x459cecu: goto label_459cec;
        case 0x459cf0u: goto label_459cf0;
        case 0x459cf4u: goto label_459cf4;
        case 0x459cf8u: goto label_459cf8;
        case 0x459cfcu: goto label_459cfc;
        case 0x459d00u: goto label_459d00;
        case 0x459d04u: goto label_459d04;
        case 0x459d08u: goto label_459d08;
        case 0x459d0cu: goto label_459d0c;
        case 0x459d10u: goto label_459d10;
        case 0x459d14u: goto label_459d14;
        case 0x459d18u: goto label_459d18;
        case 0x459d1cu: goto label_459d1c;
        case 0x459d20u: goto label_459d20;
        case 0x459d24u: goto label_459d24;
        case 0x459d28u: goto label_459d28;
        case 0x459d2cu: goto label_459d2c;
        case 0x459d30u: goto label_459d30;
        case 0x459d34u: goto label_459d34;
        case 0x459d38u: goto label_459d38;
        case 0x459d3cu: goto label_459d3c;
        case 0x459d40u: goto label_459d40;
        case 0x459d44u: goto label_459d44;
        case 0x459d48u: goto label_459d48;
        case 0x459d4cu: goto label_459d4c;
        case 0x459d50u: goto label_459d50;
        case 0x459d54u: goto label_459d54;
        case 0x459d58u: goto label_459d58;
        case 0x459d5cu: goto label_459d5c;
        case 0x459d60u: goto label_459d60;
        case 0x459d64u: goto label_459d64;
        case 0x459d68u: goto label_459d68;
        case 0x459d6cu: goto label_459d6c;
        case 0x459d70u: goto label_459d70;
        case 0x459d74u: goto label_459d74;
        case 0x459d78u: goto label_459d78;
        case 0x459d7cu: goto label_459d7c;
        case 0x459d80u: goto label_459d80;
        case 0x459d84u: goto label_459d84;
        case 0x459d88u: goto label_459d88;
        case 0x459d8cu: goto label_459d8c;
        case 0x459d90u: goto label_459d90;
        case 0x459d94u: goto label_459d94;
        case 0x459d98u: goto label_459d98;
        case 0x459d9cu: goto label_459d9c;
        case 0x459da0u: goto label_459da0;
        case 0x459da4u: goto label_459da4;
        case 0x459da8u: goto label_459da8;
        case 0x459dacu: goto label_459dac;
        case 0x459db0u: goto label_459db0;
        case 0x459db4u: goto label_459db4;
        case 0x459db8u: goto label_459db8;
        case 0x459dbcu: goto label_459dbc;
        case 0x459dc0u: goto label_459dc0;
        case 0x459dc4u: goto label_459dc4;
        case 0x459dc8u: goto label_459dc8;
        case 0x459dccu: goto label_459dcc;
        case 0x459dd0u: goto label_459dd0;
        case 0x459dd4u: goto label_459dd4;
        case 0x459dd8u: goto label_459dd8;
        case 0x459ddcu: goto label_459ddc;
        case 0x459de0u: goto label_459de0;
        case 0x459de4u: goto label_459de4;
        case 0x459de8u: goto label_459de8;
        case 0x459decu: goto label_459dec;
        case 0x459df0u: goto label_459df0;
        case 0x459df4u: goto label_459df4;
        case 0x459df8u: goto label_459df8;
        case 0x459dfcu: goto label_459dfc;
        case 0x459e00u: goto label_459e00;
        case 0x459e04u: goto label_459e04;
        case 0x459e08u: goto label_459e08;
        case 0x459e0cu: goto label_459e0c;
        case 0x459e10u: goto label_459e10;
        case 0x459e14u: goto label_459e14;
        case 0x459e18u: goto label_459e18;
        case 0x459e1cu: goto label_459e1c;
        case 0x459e20u: goto label_459e20;
        case 0x459e24u: goto label_459e24;
        case 0x459e28u: goto label_459e28;
        case 0x459e2cu: goto label_459e2c;
        case 0x459e30u: goto label_459e30;
        case 0x459e34u: goto label_459e34;
        case 0x459e38u: goto label_459e38;
        case 0x459e3cu: goto label_459e3c;
        case 0x459e40u: goto label_459e40;
        case 0x459e44u: goto label_459e44;
        case 0x459e48u: goto label_459e48;
        case 0x459e4cu: goto label_459e4c;
        case 0x459e50u: goto label_459e50;
        case 0x459e54u: goto label_459e54;
        case 0x459e58u: goto label_459e58;
        case 0x459e5cu: goto label_459e5c;
        case 0x459e60u: goto label_459e60;
        case 0x459e64u: goto label_459e64;
        case 0x459e68u: goto label_459e68;
        case 0x459e6cu: goto label_459e6c;
        case 0x459e70u: goto label_459e70;
        case 0x459e74u: goto label_459e74;
        case 0x459e78u: goto label_459e78;
        case 0x459e7cu: goto label_459e7c;
        case 0x459e80u: goto label_459e80;
        case 0x459e84u: goto label_459e84;
        case 0x459e88u: goto label_459e88;
        case 0x459e8cu: goto label_459e8c;
        case 0x459e90u: goto label_459e90;
        case 0x459e94u: goto label_459e94;
        case 0x459e98u: goto label_459e98;
        case 0x459e9cu: goto label_459e9c;
        case 0x459ea0u: goto label_459ea0;
        case 0x459ea4u: goto label_459ea4;
        case 0x459ea8u: goto label_459ea8;
        case 0x459eacu: goto label_459eac;
        case 0x459eb0u: goto label_459eb0;
        case 0x459eb4u: goto label_459eb4;
        case 0x459eb8u: goto label_459eb8;
        case 0x459ebcu: goto label_459ebc;
        case 0x459ec0u: goto label_459ec0;
        case 0x459ec4u: goto label_459ec4;
        case 0x459ec8u: goto label_459ec8;
        case 0x459eccu: goto label_459ecc;
        case 0x459ed0u: goto label_459ed0;
        case 0x459ed4u: goto label_459ed4;
        case 0x459ed8u: goto label_459ed8;
        case 0x459edcu: goto label_459edc;
        case 0x459ee0u: goto label_459ee0;
        case 0x459ee4u: goto label_459ee4;
        case 0x459ee8u: goto label_459ee8;
        case 0x459eecu: goto label_459eec;
        case 0x459ef0u: goto label_459ef0;
        case 0x459ef4u: goto label_459ef4;
        case 0x459ef8u: goto label_459ef8;
        case 0x459efcu: goto label_459efc;
        case 0x459f00u: goto label_459f00;
        case 0x459f04u: goto label_459f04;
        case 0x459f08u: goto label_459f08;
        case 0x459f0cu: goto label_459f0c;
        case 0x459f10u: goto label_459f10;
        case 0x459f14u: goto label_459f14;
        case 0x459f18u: goto label_459f18;
        case 0x459f1cu: goto label_459f1c;
        case 0x459f20u: goto label_459f20;
        case 0x459f24u: goto label_459f24;
        case 0x459f28u: goto label_459f28;
        case 0x459f2cu: goto label_459f2c;
        case 0x459f30u: goto label_459f30;
        case 0x459f34u: goto label_459f34;
        case 0x459f38u: goto label_459f38;
        case 0x459f3cu: goto label_459f3c;
        case 0x459f40u: goto label_459f40;
        case 0x459f44u: goto label_459f44;
        case 0x459f48u: goto label_459f48;
        case 0x459f4cu: goto label_459f4c;
        case 0x459f50u: goto label_459f50;
        case 0x459f54u: goto label_459f54;
        case 0x459f58u: goto label_459f58;
        case 0x459f5cu: goto label_459f5c;
        case 0x459f60u: goto label_459f60;
        case 0x459f64u: goto label_459f64;
        case 0x459f68u: goto label_459f68;
        case 0x459f6cu: goto label_459f6c;
        case 0x459f70u: goto label_459f70;
        case 0x459f74u: goto label_459f74;
        case 0x459f78u: goto label_459f78;
        case 0x459f7cu: goto label_459f7c;
        case 0x459f80u: goto label_459f80;
        case 0x459f84u: goto label_459f84;
        case 0x459f88u: goto label_459f88;
        case 0x459f8cu: goto label_459f8c;
        case 0x459f90u: goto label_459f90;
        case 0x459f94u: goto label_459f94;
        case 0x459f98u: goto label_459f98;
        case 0x459f9cu: goto label_459f9c;
        case 0x459fa0u: goto label_459fa0;
        case 0x459fa4u: goto label_459fa4;
        case 0x459fa8u: goto label_459fa8;
        case 0x459facu: goto label_459fac;
        case 0x459fb0u: goto label_459fb0;
        case 0x459fb4u: goto label_459fb4;
        case 0x459fb8u: goto label_459fb8;
        case 0x459fbcu: goto label_459fbc;
        case 0x459fc0u: goto label_459fc0;
        case 0x459fc4u: goto label_459fc4;
        case 0x459fc8u: goto label_459fc8;
        case 0x459fccu: goto label_459fcc;
        case 0x459fd0u: goto label_459fd0;
        case 0x459fd4u: goto label_459fd4;
        case 0x459fd8u: goto label_459fd8;
        case 0x459fdcu: goto label_459fdc;
        case 0x459fe0u: goto label_459fe0;
        case 0x459fe4u: goto label_459fe4;
        case 0x459fe8u: goto label_459fe8;
        case 0x459fecu: goto label_459fec;
        case 0x459ff0u: goto label_459ff0;
        case 0x459ff4u: goto label_459ff4;
        case 0x459ff8u: goto label_459ff8;
        case 0x459ffcu: goto label_459ffc;
        case 0x45a000u: goto label_45a000;
        case 0x45a004u: goto label_45a004;
        case 0x45a008u: goto label_45a008;
        case 0x45a00cu: goto label_45a00c;
        case 0x45a010u: goto label_45a010;
        case 0x45a014u: goto label_45a014;
        case 0x45a018u: goto label_45a018;
        case 0x45a01cu: goto label_45a01c;
        case 0x45a020u: goto label_45a020;
        case 0x45a024u: goto label_45a024;
        case 0x45a028u: goto label_45a028;
        case 0x45a02cu: goto label_45a02c;
        case 0x45a030u: goto label_45a030;
        case 0x45a034u: goto label_45a034;
        case 0x45a038u: goto label_45a038;
        case 0x45a03cu: goto label_45a03c;
        case 0x45a040u: goto label_45a040;
        case 0x45a044u: goto label_45a044;
        case 0x45a048u: goto label_45a048;
        case 0x45a04cu: goto label_45a04c;
        case 0x45a050u: goto label_45a050;
        case 0x45a054u: goto label_45a054;
        case 0x45a058u: goto label_45a058;
        case 0x45a05cu: goto label_45a05c;
        case 0x45a060u: goto label_45a060;
        case 0x45a064u: goto label_45a064;
        case 0x45a068u: goto label_45a068;
        case 0x45a06cu: goto label_45a06c;
        case 0x45a070u: goto label_45a070;
        case 0x45a074u: goto label_45a074;
        case 0x45a078u: goto label_45a078;
        case 0x45a07cu: goto label_45a07c;
        case 0x45a080u: goto label_45a080;
        case 0x45a084u: goto label_45a084;
        case 0x45a088u: goto label_45a088;
        case 0x45a08cu: goto label_45a08c;
        case 0x45a090u: goto label_45a090;
        case 0x45a094u: goto label_45a094;
        case 0x45a098u: goto label_45a098;
        case 0x45a09cu: goto label_45a09c;
        case 0x45a0a0u: goto label_45a0a0;
        case 0x45a0a4u: goto label_45a0a4;
        case 0x45a0a8u: goto label_45a0a8;
        case 0x45a0acu: goto label_45a0ac;
        case 0x45a0b0u: goto label_45a0b0;
        case 0x45a0b4u: goto label_45a0b4;
        case 0x45a0b8u: goto label_45a0b8;
        case 0x45a0bcu: goto label_45a0bc;
        case 0x45a0c0u: goto label_45a0c0;
        case 0x45a0c4u: goto label_45a0c4;
        case 0x45a0c8u: goto label_45a0c8;
        case 0x45a0ccu: goto label_45a0cc;
        case 0x45a0d0u: goto label_45a0d0;
        case 0x45a0d4u: goto label_45a0d4;
        case 0x45a0d8u: goto label_45a0d8;
        case 0x45a0dcu: goto label_45a0dc;
        case 0x45a0e0u: goto label_45a0e0;
        case 0x45a0e4u: goto label_45a0e4;
        case 0x45a0e8u: goto label_45a0e8;
        case 0x45a0ecu: goto label_45a0ec;
        case 0x45a0f0u: goto label_45a0f0;
        case 0x45a0f4u: goto label_45a0f4;
        case 0x45a0f8u: goto label_45a0f8;
        case 0x45a0fcu: goto label_45a0fc;
        case 0x45a100u: goto label_45a100;
        case 0x45a104u: goto label_45a104;
        case 0x45a108u: goto label_45a108;
        case 0x45a10cu: goto label_45a10c;
        case 0x45a110u: goto label_45a110;
        case 0x45a114u: goto label_45a114;
        case 0x45a118u: goto label_45a118;
        case 0x45a11cu: goto label_45a11c;
        case 0x45a120u: goto label_45a120;
        case 0x45a124u: goto label_45a124;
        case 0x45a128u: goto label_45a128;
        case 0x45a12cu: goto label_45a12c;
        case 0x45a130u: goto label_45a130;
        case 0x45a134u: goto label_45a134;
        case 0x45a138u: goto label_45a138;
        case 0x45a13cu: goto label_45a13c;
        case 0x45a140u: goto label_45a140;
        case 0x45a144u: goto label_45a144;
        case 0x45a148u: goto label_45a148;
        case 0x45a14cu: goto label_45a14c;
        case 0x45a150u: goto label_45a150;
        case 0x45a154u: goto label_45a154;
        case 0x45a158u: goto label_45a158;
        case 0x45a15cu: goto label_45a15c;
        case 0x45a160u: goto label_45a160;
        case 0x45a164u: goto label_45a164;
        case 0x45a168u: goto label_45a168;
        case 0x45a16cu: goto label_45a16c;
        case 0x45a170u: goto label_45a170;
        case 0x45a174u: goto label_45a174;
        case 0x45a178u: goto label_45a178;
        case 0x45a17cu: goto label_45a17c;
        case 0x45a180u: goto label_45a180;
        case 0x45a184u: goto label_45a184;
        case 0x45a188u: goto label_45a188;
        case 0x45a18cu: goto label_45a18c;
        case 0x45a190u: goto label_45a190;
        case 0x45a194u: goto label_45a194;
        case 0x45a198u: goto label_45a198;
        case 0x45a19cu: goto label_45a19c;
        case 0x45a1a0u: goto label_45a1a0;
        case 0x45a1a4u: goto label_45a1a4;
        case 0x45a1a8u: goto label_45a1a8;
        case 0x45a1acu: goto label_45a1ac;
        case 0x45a1b0u: goto label_45a1b0;
        case 0x45a1b4u: goto label_45a1b4;
        case 0x45a1b8u: goto label_45a1b8;
        case 0x45a1bcu: goto label_45a1bc;
        case 0x45a1c0u: goto label_45a1c0;
        case 0x45a1c4u: goto label_45a1c4;
        case 0x45a1c8u: goto label_45a1c8;
        case 0x45a1ccu: goto label_45a1cc;
        case 0x45a1d0u: goto label_45a1d0;
        case 0x45a1d4u: goto label_45a1d4;
        case 0x45a1d8u: goto label_45a1d8;
        case 0x45a1dcu: goto label_45a1dc;
        case 0x45a1e0u: goto label_45a1e0;
        case 0x45a1e4u: goto label_45a1e4;
        case 0x45a1e8u: goto label_45a1e8;
        case 0x45a1ecu: goto label_45a1ec;
        case 0x45a1f0u: goto label_45a1f0;
        case 0x45a1f4u: goto label_45a1f4;
        case 0x45a1f8u: goto label_45a1f8;
        case 0x45a1fcu: goto label_45a1fc;
        case 0x45a200u: goto label_45a200;
        case 0x45a204u: goto label_45a204;
        case 0x45a208u: goto label_45a208;
        case 0x45a20cu: goto label_45a20c;
        case 0x45a210u: goto label_45a210;
        case 0x45a214u: goto label_45a214;
        case 0x45a218u: goto label_45a218;
        case 0x45a21cu: goto label_45a21c;
        case 0x45a220u: goto label_45a220;
        case 0x45a224u: goto label_45a224;
        case 0x45a228u: goto label_45a228;
        case 0x45a22cu: goto label_45a22c;
        case 0x45a230u: goto label_45a230;
        case 0x45a234u: goto label_45a234;
        case 0x45a238u: goto label_45a238;
        case 0x45a23cu: goto label_45a23c;
        case 0x45a240u: goto label_45a240;
        case 0x45a244u: goto label_45a244;
        case 0x45a248u: goto label_45a248;
        case 0x45a24cu: goto label_45a24c;
        case 0x45a250u: goto label_45a250;
        case 0x45a254u: goto label_45a254;
        case 0x45a258u: goto label_45a258;
        case 0x45a25cu: goto label_45a25c;
        case 0x45a260u: goto label_45a260;
        case 0x45a264u: goto label_45a264;
        case 0x45a268u: goto label_45a268;
        case 0x45a26cu: goto label_45a26c;
        case 0x45a270u: goto label_45a270;
        case 0x45a274u: goto label_45a274;
        case 0x45a278u: goto label_45a278;
        case 0x45a27cu: goto label_45a27c;
        case 0x45a280u: goto label_45a280;
        case 0x45a284u: goto label_45a284;
        case 0x45a288u: goto label_45a288;
        case 0x45a28cu: goto label_45a28c;
        case 0x45a290u: goto label_45a290;
        case 0x45a294u: goto label_45a294;
        case 0x45a298u: goto label_45a298;
        case 0x45a29cu: goto label_45a29c;
        case 0x45a2a0u: goto label_45a2a0;
        case 0x45a2a4u: goto label_45a2a4;
        case 0x45a2a8u: goto label_45a2a8;
        case 0x45a2acu: goto label_45a2ac;
        case 0x45a2b0u: goto label_45a2b0;
        case 0x45a2b4u: goto label_45a2b4;
        case 0x45a2b8u: goto label_45a2b8;
        case 0x45a2bcu: goto label_45a2bc;
        case 0x45a2c0u: goto label_45a2c0;
        case 0x45a2c4u: goto label_45a2c4;
        case 0x45a2c8u: goto label_45a2c8;
        case 0x45a2ccu: goto label_45a2cc;
        case 0x45a2d0u: goto label_45a2d0;
        case 0x45a2d4u: goto label_45a2d4;
        case 0x45a2d8u: goto label_45a2d8;
        case 0x45a2dcu: goto label_45a2dc;
        case 0x45a2e0u: goto label_45a2e0;
        case 0x45a2e4u: goto label_45a2e4;
        case 0x45a2e8u: goto label_45a2e8;
        case 0x45a2ecu: goto label_45a2ec;
        case 0x45a2f0u: goto label_45a2f0;
        case 0x45a2f4u: goto label_45a2f4;
        case 0x45a2f8u: goto label_45a2f8;
        case 0x45a2fcu: goto label_45a2fc;
        case 0x45a300u: goto label_45a300;
        case 0x45a304u: goto label_45a304;
        case 0x45a308u: goto label_45a308;
        case 0x45a30cu: goto label_45a30c;
        case 0x45a310u: goto label_45a310;
        case 0x45a314u: goto label_45a314;
        case 0x45a318u: goto label_45a318;
        case 0x45a31cu: goto label_45a31c;
        case 0x45a320u: goto label_45a320;
        case 0x45a324u: goto label_45a324;
        case 0x45a328u: goto label_45a328;
        case 0x45a32cu: goto label_45a32c;
        case 0x45a330u: goto label_45a330;
        case 0x45a334u: goto label_45a334;
        case 0x45a338u: goto label_45a338;
        case 0x45a33cu: goto label_45a33c;
        case 0x45a340u: goto label_45a340;
        case 0x45a344u: goto label_45a344;
        case 0x45a348u: goto label_45a348;
        case 0x45a34cu: goto label_45a34c;
        case 0x45a350u: goto label_45a350;
        case 0x45a354u: goto label_45a354;
        case 0x45a358u: goto label_45a358;
        case 0x45a35cu: goto label_45a35c;
        case 0x45a360u: goto label_45a360;
        case 0x45a364u: goto label_45a364;
        case 0x45a368u: goto label_45a368;
        case 0x45a36cu: goto label_45a36c;
        case 0x45a370u: goto label_45a370;
        case 0x45a374u: goto label_45a374;
        case 0x45a378u: goto label_45a378;
        case 0x45a37cu: goto label_45a37c;
        case 0x45a380u: goto label_45a380;
        case 0x45a384u: goto label_45a384;
        case 0x45a388u: goto label_45a388;
        case 0x45a38cu: goto label_45a38c;
        case 0x45a390u: goto label_45a390;
        case 0x45a394u: goto label_45a394;
        case 0x45a398u: goto label_45a398;
        case 0x45a39cu: goto label_45a39c;
        case 0x45a3a0u: goto label_45a3a0;
        case 0x45a3a4u: goto label_45a3a4;
        case 0x45a3a8u: goto label_45a3a8;
        case 0x45a3acu: goto label_45a3ac;
        case 0x45a3b0u: goto label_45a3b0;
        case 0x45a3b4u: goto label_45a3b4;
        case 0x45a3b8u: goto label_45a3b8;
        case 0x45a3bcu: goto label_45a3bc;
        case 0x45a3c0u: goto label_45a3c0;
        case 0x45a3c4u: goto label_45a3c4;
        case 0x45a3c8u: goto label_45a3c8;
        case 0x45a3ccu: goto label_45a3cc;
        default: break;
    }

    ctx->pc = 0x459bb0u;

label_459bb0:
    // 0x459bb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x459bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_459bb4:
    // 0x459bb4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x459bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_459bb8:
    // 0x459bb8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x459bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_459bbc:
    // 0x459bbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x459bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_459bc0:
    // 0x459bc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x459bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_459bc4:
    // 0x459bc4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x459bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459bc8:
    // 0x459bc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459bcc:
    // 0x459bcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459bd0:
    // 0x459bd0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x459bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_459bd4:
    // 0x459bd4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x459bd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_459bd8:
    // 0x459bd8: 0xc10ca68  jal         func_4329A0
label_459bdc:
    if (ctx->pc == 0x459BDCu) {
        ctx->pc = 0x459BDCu;
            // 0x459bdc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x459BE0u;
        goto label_459be0;
    }
    ctx->pc = 0x459BD8u;
    SET_GPR_U32(ctx, 31, 0x459BE0u);
    ctx->pc = 0x459BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459BD8u;
            // 0x459bdc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459BE0u; }
        if (ctx->pc != 0x459BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459BE0u; }
        if (ctx->pc != 0x459BE0u) { return; }
    }
    ctx->pc = 0x459BE0u;
label_459be0:
    // 0x459be0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x459be0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_459be4:
    // 0x459be4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x459be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_459be8:
    // 0x459be8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x459be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_459bec:
    // 0x459bec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x459becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_459bf0:
    // 0x459bf0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x459bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_459bf4:
    // 0x459bf4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x459bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_459bf8:
    // 0x459bf8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x459bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_459bfc:
    // 0x459bfc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x459bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_459c00:
    // 0x459c00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x459c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_459c04:
    // 0x459c04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x459c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_459c08:
    // 0x459c08: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x459c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_459c0c:
    // 0x459c0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x459c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_459c10:
    // 0x459c10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x459c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_459c14:
    // 0x459c14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x459c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_459c18:
    // 0x459c18: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x459c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_459c1c:
    // 0x459c1c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x459c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_459c20:
    // 0x459c20: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x459c20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_459c24:
    // 0x459c24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x459c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_459c28:
    // 0x459c28: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x459c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_459c2c:
    // 0x459c2c: 0xc0582cc  jal         func_160B30
label_459c30:
    if (ctx->pc == 0x459C30u) {
        ctx->pc = 0x459C30u;
            // 0x459c30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x459C34u;
        goto label_459c34;
    }
    ctx->pc = 0x459C2Cu;
    SET_GPR_U32(ctx, 31, 0x459C34u);
    ctx->pc = 0x459C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459C2Cu;
            // 0x459c30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459C34u; }
        if (ctx->pc != 0x459C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459C34u; }
        if (ctx->pc != 0x459C34u) { return; }
    }
    ctx->pc = 0x459C34u;
label_459c34:
    // 0x459c34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x459c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_459c38:
    // 0x459c38: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x459c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_459c3c:
    // 0x459c3c: 0x2463e330  addiu       $v1, $v1, -0x1CD0
    ctx->pc = 0x459c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959920));
label_459c40:
    // 0x459c40: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x459c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_459c44:
    // 0x459c44: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x459c44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_459c48:
    // 0x459c48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x459c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_459c4c:
    // 0x459c4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x459c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_459c50:
    // 0x459c50: 0xac4475c0  sw          $a0, 0x75C0($v0)
    ctx->pc = 0x459c50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30144), GPR_U32(ctx, 4));
label_459c54:
    // 0x459c54: 0x2463e340  addiu       $v1, $v1, -0x1CC0
    ctx->pc = 0x459c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959936));
label_459c58:
    // 0x459c58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x459c58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459c5c:
    // 0x459c5c: 0x2442e378  addiu       $v0, $v0, -0x1C88
    ctx->pc = 0x459c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959992));
label_459c60:
    // 0x459c60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x459c60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_459c64:
    // 0x459c64: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x459c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_459c68:
    // 0x459c68: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x459c68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_459c6c:
    // 0x459c6c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x459c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_459c70:
    // 0x459c70: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x459c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_459c74:
    // 0x459c74: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x459c74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_459c78:
    // 0x459c78: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x459c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_459c7c:
    // 0x459c7c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x459c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_459c80:
    // 0x459c80: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x459c80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_459c84:
    // 0x459c84: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x459c84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_459c88:
    // 0x459c88: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x459c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_459c8c:
    // 0x459c8c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x459c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_459c90:
    // 0x459c90: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x459c90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_459c94:
    // 0x459c94: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x459c94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_459c98:
    // 0x459c98: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x459c98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_459c9c:
    // 0x459c9c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x459c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_459ca0:
    // 0x459ca0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x459ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_459ca4:
    // 0x459ca4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x459ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_459ca8:
    // 0x459ca8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x459ca8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_459cac:
    // 0x459cac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_459cb0:
    if (ctx->pc == 0x459CB0u) {
        ctx->pc = 0x459CB4u;
        goto label_459cb4;
    }
    ctx->pc = 0x459CACu;
    {
        const bool branch_taken_0x459cac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x459cac) {
            ctx->pc = 0x459D40u;
            goto label_459d40;
        }
    }
    ctx->pc = 0x459CB4u;
label_459cb4:
    // 0x459cb4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x459cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_459cb8:
    // 0x459cb8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x459cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_459cbc:
    // 0x459cbc: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x459cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_459cc0:
    // 0x459cc0: 0xc040138  jal         func_1004E0
label_459cc4:
    if (ctx->pc == 0x459CC4u) {
        ctx->pc = 0x459CC4u;
            // 0x459cc4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x459CC8u;
        goto label_459cc8;
    }
    ctx->pc = 0x459CC0u;
    SET_GPR_U32(ctx, 31, 0x459CC8u);
    ctx->pc = 0x459CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459CC0u;
            // 0x459cc4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CC8u; }
        if (ctx->pc != 0x459CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CC8u; }
        if (ctx->pc != 0x459CC8u) { return; }
    }
    ctx->pc = 0x459CC8u;
label_459cc8:
    // 0x459cc8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x459cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_459ccc:
    // 0x459ccc: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x459cccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_459cd0:
    // 0x459cd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x459cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459cd4:
    // 0x459cd4: 0x24a59d60  addiu       $a1, $a1, -0x62A0
    ctx->pc = 0x459cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942048));
label_459cd8:
    // 0x459cd8: 0x24c68cc0  addiu       $a2, $a2, -0x7340
    ctx->pc = 0x459cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937792));
label_459cdc:
    // 0x459cdc: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x459cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_459ce0:
    // 0x459ce0: 0xc040840  jal         func_102100
label_459ce4:
    if (ctx->pc == 0x459CE4u) {
        ctx->pc = 0x459CE4u;
            // 0x459ce4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459CE8u;
        goto label_459ce8;
    }
    ctx->pc = 0x459CE0u;
    SET_GPR_U32(ctx, 31, 0x459CE8u);
    ctx->pc = 0x459CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459CE0u;
            // 0x459ce4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CE8u; }
        if (ctx->pc != 0x459CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CE8u; }
        if (ctx->pc != 0x459CE8u) { return; }
    }
    ctx->pc = 0x459CE8u;
label_459ce8:
    // 0x459ce8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x459ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_459cec:
    // 0x459cec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x459cecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459cf0:
    // 0x459cf0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x459cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_459cf4:
    // 0x459cf4: 0xc0788fc  jal         func_1E23F0
label_459cf8:
    if (ctx->pc == 0x459CF8u) {
        ctx->pc = 0x459CF8u;
            // 0x459cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459CFCu;
        goto label_459cfc;
    }
    ctx->pc = 0x459CF4u;
    SET_GPR_U32(ctx, 31, 0x459CFCu);
    ctx->pc = 0x459CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459CF4u;
            // 0x459cf8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CFCu; }
        if (ctx->pc != 0x459CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459CFCu; }
        if (ctx->pc != 0x459CFCu) { return; }
    }
    ctx->pc = 0x459CFCu;
label_459cfc:
    // 0x459cfc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x459cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_459d00:
    // 0x459d00: 0xc0788fc  jal         func_1E23F0
label_459d04:
    if (ctx->pc == 0x459D04u) {
        ctx->pc = 0x459D04u;
            // 0x459d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459D08u;
        goto label_459d08;
    }
    ctx->pc = 0x459D00u;
    SET_GPR_U32(ctx, 31, 0x459D08u);
    ctx->pc = 0x459D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D00u;
            // 0x459d04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D08u; }
        if (ctx->pc != 0x459D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D08u; }
        if (ctx->pc != 0x459D08u) { return; }
    }
    ctx->pc = 0x459D08u;
label_459d08:
    // 0x459d08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x459d08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_459d0c:
    // 0x459d0c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x459d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_459d10:
    // 0x459d10: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x459d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_459d14:
    // 0x459d14: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x459d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_459d18:
    // 0x459d18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x459d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459d1c:
    // 0x459d1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x459d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_459d20:
    // 0x459d20: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x459d20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_459d24:
    // 0x459d24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x459d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_459d28:
    // 0x459d28: 0xc0a997c  jal         func_2A65F0
label_459d2c:
    if (ctx->pc == 0x459D2Cu) {
        ctx->pc = 0x459D2Cu;
            // 0x459d2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x459D30u;
        goto label_459d30;
    }
    ctx->pc = 0x459D28u;
    SET_GPR_U32(ctx, 31, 0x459D30u);
    ctx->pc = 0x459D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D28u;
            // 0x459d2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D30u; }
        if (ctx->pc != 0x459D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D30u; }
        if (ctx->pc != 0x459D30u) { return; }
    }
    ctx->pc = 0x459D30u;
label_459d30:
    // 0x459d30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x459d30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_459d34:
    // 0x459d34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x459d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_459d38:
    // 0x459d38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_459d3c:
    if (ctx->pc == 0x459D3Cu) {
        ctx->pc = 0x459D3Cu;
            // 0x459d3c: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x459D40u;
        goto label_459d40;
    }
    ctx->pc = 0x459D38u;
    {
        const bool branch_taken_0x459d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x459D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459D38u;
            // 0x459d3c: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459d38) {
            ctx->pc = 0x459D0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_459d0c;
        }
    }
    ctx->pc = 0x459D40u;
label_459d40:
    // 0x459d40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x459d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_459d44:
    // 0x459d44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x459d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_459d48:
    // 0x459d48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x459d48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_459d4c:
    // 0x459d4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x459d4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_459d50:
    // 0x459d50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459d50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_459d54:
    // 0x459d54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459d54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459d58:
    // 0x459d58: 0x3e00008  jr          $ra
label_459d5c:
    if (ctx->pc == 0x459D5Cu) {
        ctx->pc = 0x459D5Cu;
            // 0x459d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x459D60u;
        goto label_459d60;
    }
    ctx->pc = 0x459D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459D58u;
            // 0x459d5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459D60u;
label_459d60:
    // 0x459d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_459d64:
    // 0x459d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x459d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_459d68:
    // 0x459d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459d6c:
    // 0x459d6c: 0xc0aeebc  jal         func_2BBAF0
label_459d70:
    if (ctx->pc == 0x459D70u) {
        ctx->pc = 0x459D70u;
            // 0x459d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459D74u;
        goto label_459d74;
    }
    ctx->pc = 0x459D6Cu;
    SET_GPR_U32(ctx, 31, 0x459D74u);
    ctx->pc = 0x459D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D6Cu;
            // 0x459d70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D74u; }
        if (ctx->pc != 0x459D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D74u; }
        if (ctx->pc != 0x459D74u) { return; }
    }
    ctx->pc = 0x459D74u;
label_459d74:
    // 0x459d74: 0xc0aeeb4  jal         func_2BBAD0
label_459d78:
    if (ctx->pc == 0x459D78u) {
        ctx->pc = 0x459D78u;
            // 0x459d78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x459D7Cu;
        goto label_459d7c;
    }
    ctx->pc = 0x459D74u;
    SET_GPR_U32(ctx, 31, 0x459D7Cu);
    ctx->pc = 0x459D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D74u;
            // 0x459d78: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D7Cu; }
        if (ctx->pc != 0x459D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D7Cu; }
        if (ctx->pc != 0x459D7Cu) { return; }
    }
    ctx->pc = 0x459D7Cu;
label_459d7c:
    // 0x459d7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x459d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_459d80:
    // 0x459d80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x459d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_459d84:
    // 0x459d84: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x459d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_459d88:
    // 0x459d88: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x459d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_459d8c:
    // 0x459d8c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x459d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_459d90:
    // 0x459d90: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x459d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_459d94:
    // 0x459d94: 0xc0aeea4  jal         func_2BBA90
label_459d98:
    if (ctx->pc == 0x459D98u) {
        ctx->pc = 0x459D98u;
            // 0x459d98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x459D9Cu;
        goto label_459d9c;
    }
    ctx->pc = 0x459D94u;
    SET_GPR_U32(ctx, 31, 0x459D9Cu);
    ctx->pc = 0x459D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D94u;
            // 0x459d98: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D9Cu; }
        if (ctx->pc != 0x459D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459D9Cu; }
        if (ctx->pc != 0x459D9Cu) { return; }
    }
    ctx->pc = 0x459D9Cu;
label_459d9c:
    // 0x459d9c: 0xc0aee8c  jal         func_2BBA30
label_459da0:
    if (ctx->pc == 0x459DA0u) {
        ctx->pc = 0x459DA0u;
            // 0x459da0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x459DA4u;
        goto label_459da4;
    }
    ctx->pc = 0x459D9Cu;
    SET_GPR_U32(ctx, 31, 0x459DA4u);
    ctx->pc = 0x459DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459D9Cu;
            // 0x459da0: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DA4u; }
        if (ctx->pc != 0x459DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DA4u; }
        if (ctx->pc != 0x459DA4u) { return; }
    }
    ctx->pc = 0x459DA4u;
label_459da4:
    // 0x459da4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x459da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_459da8:
    // 0x459da8: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x459da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_459dac:
    // 0x459dac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x459dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_459db0:
    // 0x459db0: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x459db0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_459db4:
    // 0x459db4: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x459db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_459db8:
    // 0x459db8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x459db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459dbc:
    // 0x459dbc: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x459dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_459dc0:
    // 0x459dc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x459dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_459dc4:
    // 0x459dc4: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x459dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_459dc8:
    // 0x459dc8: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x459dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_459dcc:
    // 0x459dcc: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x459dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_459dd0:
    // 0x459dd0: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x459dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_459dd4:
    // 0x459dd4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x459dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_459dd8:
    // 0x459dd8: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x459dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_459ddc:
    // 0x459ddc: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x459ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_459de0:
    // 0x459de0: 0xc0775b8  jal         func_1DD6E0
label_459de4:
    if (ctx->pc == 0x459DE4u) {
        ctx->pc = 0x459DE4u;
            // 0x459de4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x459DE8u;
        goto label_459de8;
    }
    ctx->pc = 0x459DE0u;
    SET_GPR_U32(ctx, 31, 0x459DE8u);
    ctx->pc = 0x459DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459DE0u;
            // 0x459de4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DE8u; }
        if (ctx->pc != 0x459DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DE8u; }
        if (ctx->pc != 0x459DE8u) { return; }
    }
    ctx->pc = 0x459DE8u;
label_459de8:
    // 0x459de8: 0xc077314  jal         func_1DCC50
label_459dec:
    if (ctx->pc == 0x459DECu) {
        ctx->pc = 0x459DECu;
            // 0x459dec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x459DF0u;
        goto label_459df0;
    }
    ctx->pc = 0x459DE8u;
    SET_GPR_U32(ctx, 31, 0x459DF0u);
    ctx->pc = 0x459DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459DE8u;
            // 0x459dec: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DF0u; }
        if (ctx->pc != 0x459DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459DF0u; }
        if (ctx->pc != 0x459DF0u) { return; }
    }
    ctx->pc = 0x459DF0u;
label_459df0:
    // 0x459df0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x459df0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_459df4:
    // 0x459df4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x459df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_459df8:
    // 0x459df8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x459df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_459dfc:
    // 0x459dfc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x459dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_459e00:
    // 0x459e00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x459e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_459e04:
    // 0x459e04: 0x2484e290  addiu       $a0, $a0, -0x1D70
    ctx->pc = 0x459e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959760));
label_459e08:
    // 0x459e08: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x459e08u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_459e0c:
    // 0x459e0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x459e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_459e10:
    // 0x459e10: 0x2463e2d0  addiu       $v1, $v1, -0x1D30
    ctx->pc = 0x459e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959824));
label_459e14:
    // 0x459e14: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x459e14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_459e18:
    // 0x459e18: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x459e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_459e1c:
    // 0x459e1c: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x459e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_459e20:
    // 0x459e20: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x459e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_459e24:
    // 0x459e24: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x459e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_459e28:
    // 0x459e28: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x459e28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_459e2c:
    // 0x459e2c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x459e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_459e30:
    // 0x459e30: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x459e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_459e34:
    // 0x459e34: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x459e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_459e38:
    // 0x459e38: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x459e38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_459e3c:
    // 0x459e3c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x459e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_459e40:
    // 0x459e40: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459e40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459e44:
    // 0x459e44: 0x3e00008  jr          $ra
label_459e48:
    if (ctx->pc == 0x459E48u) {
        ctx->pc = 0x459E48u;
            // 0x459e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x459E4Cu;
        goto label_459e4c;
    }
    ctx->pc = 0x459E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459E44u;
            // 0x459e48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459E4Cu;
label_459e4c:
    // 0x459e4c: 0x0  nop
    ctx->pc = 0x459e4cu;
    // NOP
label_459e50:
    // 0x459e50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x459e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_459e54:
    // 0x459e54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x459e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_459e58:
    // 0x459e58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459e5c:
    // 0x459e5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x459e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459e60:
    // 0x459e60: 0x8c8400d4  lw          $a0, 0xD4($a0)
    ctx->pc = 0x459e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 212)));
label_459e64:
    // 0x459e64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_459e68:
    if (ctx->pc == 0x459E68u) {
        ctx->pc = 0x459E68u;
            // 0x459e68: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x459E6Cu;
        goto label_459e6c;
    }
    ctx->pc = 0x459E64u;
    {
        const bool branch_taken_0x459e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x459e64) {
            ctx->pc = 0x459E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459E64u;
            // 0x459e68: 0xae0000d4  sw          $zero, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459E80u;
            goto label_459e80;
        }
    }
    ctx->pc = 0x459E6Cu;
label_459e6c:
    // 0x459e6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x459e6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_459e70:
    // 0x459e70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459e70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_459e74:
    // 0x459e74: 0x320f809  jalr        $t9
label_459e78:
    if (ctx->pc == 0x459E78u) {
        ctx->pc = 0x459E78u;
            // 0x459e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459E7Cu;
        goto label_459e7c;
    }
    ctx->pc = 0x459E74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459E7Cu);
        ctx->pc = 0x459E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459E74u;
            // 0x459e78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459E7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459E7Cu; }
            if (ctx->pc != 0x459E7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x459E7Cu;
label_459e7c:
    // 0x459e7c: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x459e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_459e80:
    // 0x459e80: 0x8e0400d8  lw          $a0, 0xD8($s0)
    ctx->pc = 0x459e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
label_459e84:
    // 0x459e84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_459e88:
    if (ctx->pc == 0x459E88u) {
        ctx->pc = 0x459E88u;
            // 0x459e88: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->pc = 0x459E8Cu;
        goto label_459e8c;
    }
    ctx->pc = 0x459E84u;
    {
        const bool branch_taken_0x459e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x459e84) {
            ctx->pc = 0x459E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459E84u;
            // 0x459e88: 0xae0000d8  sw          $zero, 0xD8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459EA0u;
            goto label_459ea0;
        }
    }
    ctx->pc = 0x459E8Cu;
label_459e8c:
    // 0x459e8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x459e8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_459e90:
    // 0x459e90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459e90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_459e94:
    // 0x459e94: 0x320f809  jalr        $t9
label_459e98:
    if (ctx->pc == 0x459E98u) {
        ctx->pc = 0x459E98u;
            // 0x459e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459E9Cu;
        goto label_459e9c;
    }
    ctx->pc = 0x459E94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459E9Cu);
        ctx->pc = 0x459E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459E94u;
            // 0x459e98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459E9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459E9Cu; }
            if (ctx->pc != 0x459E9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x459E9Cu;
label_459e9c:
    // 0x459e9c: 0xae0000d8  sw          $zero, 0xD8($s0)
    ctx->pc = 0x459e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 216), GPR_U32(ctx, 0));
label_459ea0:
    // 0x459ea0: 0x8e040170  lw          $a0, 0x170($s0)
    ctx->pc = 0x459ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 368)));
label_459ea4:
    // 0x459ea4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_459ea8:
    if (ctx->pc == 0x459EA8u) {
        ctx->pc = 0x459EA8u;
            // 0x459ea8: 0xae000170  sw          $zero, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
        ctx->pc = 0x459EACu;
        goto label_459eac;
    }
    ctx->pc = 0x459EA4u;
    {
        const bool branch_taken_0x459ea4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x459ea4) {
            ctx->pc = 0x459EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459EA4u;
            // 0x459ea8: 0xae000170  sw          $zero, 0x170($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459EC0u;
            goto label_459ec0;
        }
    }
    ctx->pc = 0x459EACu;
label_459eac:
    // 0x459eac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x459eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_459eb0:
    // 0x459eb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_459eb4:
    // 0x459eb4: 0x320f809  jalr        $t9
label_459eb8:
    if (ctx->pc == 0x459EB8u) {
        ctx->pc = 0x459EB8u;
            // 0x459eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459EBCu;
        goto label_459ebc;
    }
    ctx->pc = 0x459EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459EBCu);
        ctx->pc = 0x459EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459EB4u;
            // 0x459eb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459EBCu; }
            if (ctx->pc != 0x459EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x459EBCu;
label_459ebc:
    // 0x459ebc: 0xae000170  sw          $zero, 0x170($s0)
    ctx->pc = 0x459ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 368), GPR_U32(ctx, 0));
label_459ec0:
    // 0x459ec0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x459ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_459ec4:
    // 0x459ec4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_459ec8:
    if (ctx->pc == 0x459EC8u) {
        ctx->pc = 0x459EC8u;
            // 0x459ec8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x459ECCu;
        goto label_459ecc;
    }
    ctx->pc = 0x459EC4u;
    {
        const bool branch_taken_0x459ec4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x459ec4) {
            ctx->pc = 0x459EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459EC4u;
            // 0x459ec8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459EE0u;
            goto label_459ee0;
        }
    }
    ctx->pc = 0x459ECCu;
label_459ecc:
    // 0x459ecc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x459eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_459ed0:
    // 0x459ed0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x459ed0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_459ed4:
    // 0x459ed4: 0x320f809  jalr        $t9
label_459ed8:
    if (ctx->pc == 0x459ED8u) {
        ctx->pc = 0x459ED8u;
            // 0x459ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x459EDCu;
        goto label_459edc;
    }
    ctx->pc = 0x459ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x459EDCu);
        ctx->pc = 0x459ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459ED4u;
            // 0x459ed8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x459EDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x459EDCu; }
            if (ctx->pc != 0x459EDCu) { return; }
        }
        }
    }
    ctx->pc = 0x459EDCu;
label_459edc:
    // 0x459edc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x459edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_459ee0:
    // 0x459ee0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x459ee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_459ee4:
    // 0x459ee4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459ee8:
    // 0x459ee8: 0x3e00008  jr          $ra
label_459eec:
    if (ctx->pc == 0x459EECu) {
        ctx->pc = 0x459EECu;
            // 0x459eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x459EF0u;
        goto label_459ef0;
    }
    ctx->pc = 0x459EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459EE8u;
            // 0x459eec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459EF0u;
label_459ef0:
    // 0x459ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x459ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_459ef4:
    // 0x459ef4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x459ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_459ef8:
    // 0x459ef8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459efc:
    // 0x459efc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459f00:
    // 0x459f00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x459f00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459f04:
    // 0x459f04: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_459f08:
    if (ctx->pc == 0x459F08u) {
        ctx->pc = 0x459F08u;
            // 0x459f08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459F0Cu;
        goto label_459f0c;
    }
    ctx->pc = 0x459F04u;
    {
        const bool branch_taken_0x459f04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x459F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459F04u;
            // 0x459f08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459f04) {
            ctx->pc = 0x459F68u;
            goto label_459f68;
        }
    }
    ctx->pc = 0x459F0Cu;
label_459f0c:
    // 0x459f0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x459f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_459f10:
    // 0x459f10: 0x2442e3e0  addiu       $v0, $v0, -0x1C20
    ctx->pc = 0x459f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960096));
label_459f14:
    // 0x459f14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_459f18:
    if (ctx->pc == 0x459F18u) {
        ctx->pc = 0x459F18u;
            // 0x459f18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x459F1Cu;
        goto label_459f1c;
    }
    ctx->pc = 0x459F14u;
    {
        const bool branch_taken_0x459f14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x459F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459F14u;
            // 0x459f18: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459f14) {
            ctx->pc = 0x459F50u;
            goto label_459f50;
        }
    }
    ctx->pc = 0x459F1Cu;
label_459f1c:
    // 0x459f1c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x459f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_459f20:
    // 0x459f20: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x459f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_459f24:
    // 0x459f24: 0xc0d37dc  jal         func_34DF70
label_459f28:
    if (ctx->pc == 0x459F28u) {
        ctx->pc = 0x459F28u;
            // 0x459f28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x459F2Cu;
        goto label_459f2c;
    }
    ctx->pc = 0x459F24u;
    SET_GPR_U32(ctx, 31, 0x459F2Cu);
    ctx->pc = 0x459F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459F24u;
            // 0x459f28: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459F2Cu; }
        if (ctx->pc != 0x459F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459F2Cu; }
        if (ctx->pc != 0x459F2Cu) { return; }
    }
    ctx->pc = 0x459F2Cu;
label_459f2c:
    // 0x459f2c: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_459f30:
    if (ctx->pc == 0x459F30u) {
        ctx->pc = 0x459F30u;
            // 0x459f30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x459F34u;
        goto label_459f34;
    }
    ctx->pc = 0x459F2Cu;
    {
        const bool branch_taken_0x459f2c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x459f2c) {
            ctx->pc = 0x459F30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459F2Cu;
            // 0x459f30: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459F54u;
            goto label_459f54;
        }
    }
    ctx->pc = 0x459F34u;
label_459f34:
    // 0x459f34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x459f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_459f38:
    // 0x459f38: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x459f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_459f3c:
    // 0x459f3c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_459f40:
    if (ctx->pc == 0x459F40u) {
        ctx->pc = 0x459F40u;
            // 0x459f40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x459F44u;
        goto label_459f44;
    }
    ctx->pc = 0x459F3Cu;
    {
        const bool branch_taken_0x459f3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x459F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459F3Cu;
            // 0x459f40: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x459f3c) {
            ctx->pc = 0x459F50u;
            goto label_459f50;
        }
    }
    ctx->pc = 0x459F44u;
label_459f44:
    // 0x459f44: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x459f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_459f48:
    // 0x459f48: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x459f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_459f4c:
    // 0x459f4c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x459f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_459f50:
    // 0x459f50: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x459f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_459f54:
    // 0x459f54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x459f54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_459f58:
    // 0x459f58: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_459f5c:
    if (ctx->pc == 0x459F5Cu) {
        ctx->pc = 0x459F5Cu;
            // 0x459f5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459F60u;
        goto label_459f60;
    }
    ctx->pc = 0x459F58u;
    {
        const bool branch_taken_0x459f58 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x459f58) {
            ctx->pc = 0x459F5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x459F58u;
            // 0x459f5c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x459F6Cu;
            goto label_459f6c;
        }
    }
    ctx->pc = 0x459F60u;
label_459f60:
    // 0x459f60: 0xc0400a8  jal         func_1002A0
label_459f64:
    if (ctx->pc == 0x459F64u) {
        ctx->pc = 0x459F64u;
            // 0x459f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x459F68u;
        goto label_459f68;
    }
    ctx->pc = 0x459F60u;
    SET_GPR_U32(ctx, 31, 0x459F68u);
    ctx->pc = 0x459F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459F60u;
            // 0x459f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459F68u; }
        if (ctx->pc != 0x459F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459F68u; }
        if (ctx->pc != 0x459F68u) { return; }
    }
    ctx->pc = 0x459F68u;
label_459f68:
    // 0x459f68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x459f68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_459f6c:
    // 0x459f6c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x459f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_459f70:
    // 0x459f70: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459f70u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_459f74:
    // 0x459f74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459f74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_459f78:
    // 0x459f78: 0x3e00008  jr          $ra
label_459f7c:
    if (ctx->pc == 0x459F7Cu) {
        ctx->pc = 0x459F7Cu;
            // 0x459f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x459F80u;
        goto label_459f80;
    }
    ctx->pc = 0x459F78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x459F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x459F78u;
            // 0x459f7c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x459F80u;
label_459f80:
    // 0x459f80: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x459f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_459f84:
    // 0x459f84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x459f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_459f88:
    // 0x459f88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x459f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_459f8c:
    // 0x459f8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_459f90:
    // 0x459f90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x459f90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_459f94:
    // 0x459f94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_459f98:
    // 0x459f98: 0xc0892d0  jal         func_224B40
label_459f9c:
    if (ctx->pc == 0x459F9Cu) {
        ctx->pc = 0x459F9Cu;
            // 0x459f9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x459FA0u;
        goto label_459fa0;
    }
    ctx->pc = 0x459F98u;
    SET_GPR_U32(ctx, 31, 0x459FA0u);
    ctx->pc = 0x459F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459F98u;
            // 0x459f9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FA0u; }
        if (ctx->pc != 0x459FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FA0u; }
        if (ctx->pc != 0x459FA0u) { return; }
    }
    ctx->pc = 0x459FA0u;
label_459fa0:
    // 0x459fa0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x459fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_459fa4:
    // 0x459fa4: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x459fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_459fa8:
    // 0x459fa8: 0xc0b6e68  jal         func_2DB9A0
label_459fac:
    if (ctx->pc == 0x459FACu) {
        ctx->pc = 0x459FACu;
            // 0x459fac: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x459FB0u;
        goto label_459fb0;
    }
    ctx->pc = 0x459FA8u;
    SET_GPR_U32(ctx, 31, 0x459FB0u);
    ctx->pc = 0x459FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459FA8u;
            // 0x459fac: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FB0u; }
        if (ctx->pc != 0x459FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FB0u; }
        if (ctx->pc != 0x459FB0u) { return; }
    }
    ctx->pc = 0x459FB0u;
label_459fb0:
    // 0x459fb0: 0xc0b6dac  jal         func_2DB6B0
label_459fb4:
    if (ctx->pc == 0x459FB4u) {
        ctx->pc = 0x459FB4u;
            // 0x459fb4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x459FB8u;
        goto label_459fb8;
    }
    ctx->pc = 0x459FB0u;
    SET_GPR_U32(ctx, 31, 0x459FB8u);
    ctx->pc = 0x459FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459FB0u;
            // 0x459fb4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FB8u; }
        if (ctx->pc != 0x459FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FB8u; }
        if (ctx->pc != 0x459FB8u) { return; }
    }
    ctx->pc = 0x459FB8u;
label_459fb8:
    // 0x459fb8: 0xc0cac94  jal         func_32B250
label_459fbc:
    if (ctx->pc == 0x459FBCu) {
        ctx->pc = 0x459FBCu;
            // 0x459fbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x459FC0u;
        goto label_459fc0;
    }
    ctx->pc = 0x459FB8u;
    SET_GPR_U32(ctx, 31, 0x459FC0u);
    ctx->pc = 0x459FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459FB8u;
            // 0x459fbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FC0u; }
        if (ctx->pc != 0x459FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FC0u; }
        if (ctx->pc != 0x459FC0u) { return; }
    }
    ctx->pc = 0x459FC0u;
label_459fc0:
    // 0x459fc0: 0xc0cac84  jal         func_32B210
label_459fc4:
    if (ctx->pc == 0x459FC4u) {
        ctx->pc = 0x459FC4u;
            // 0x459fc4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x459FC8u;
        goto label_459fc8;
    }
    ctx->pc = 0x459FC0u;
    SET_GPR_U32(ctx, 31, 0x459FC8u);
    ctx->pc = 0x459FC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459FC0u;
            // 0x459fc4: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FC8u; }
        if (ctx->pc != 0x459FC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FC8u; }
        if (ctx->pc != 0x459FC8u) { return; }
    }
    ctx->pc = 0x459FC8u;
label_459fc8:
    // 0x459fc8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x459fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_459fcc:
    // 0x459fcc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x459fccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_459fd0:
    // 0x459fd0: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x459fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_459fd4:
    // 0x459fd4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x459fd4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_459fd8:
    // 0x459fd8: 0xc0a562c  jal         func_2958B0
label_459fdc:
    if (ctx->pc == 0x459FDCu) {
        ctx->pc = 0x459FDCu;
            // 0x459fdc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x459FE0u;
        goto label_459fe0;
    }
    ctx->pc = 0x459FD8u;
    SET_GPR_U32(ctx, 31, 0x459FE0u);
    ctx->pc = 0x459FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x459FD8u;
            // 0x459fdc: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FE0u; }
        if (ctx->pc != 0x459FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x459FE0u; }
        if (ctx->pc != 0x459FE0u) { return; }
    }
    ctx->pc = 0x459FE0u;
label_459fe0:
    // 0x459fe0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x459fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_459fe4:
    // 0x459fe4: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x459fe4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_459fe8:
    // 0x459fe8: 0x8c4375c0  lw          $v1, 0x75C0($v0)
    ctx->pc = 0x459fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30144)));
label_459fec:
    // 0x459fec: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x459fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_459ff0:
    // 0x459ff0: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x459ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_459ff4:
    // 0x459ff4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x459ff4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_459ff8:
    // 0x459ff8: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x459ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_459ffc:
    // 0x459ffc: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x459ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45a000:
    // 0x45a000: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x45a000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_45a004:
    // 0x45a004: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x45a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_45a008:
    // 0x45a008: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x45a008u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_45a00c:
    // 0x45a00c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x45a00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_45a010:
    // 0x45a010: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x45a010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_45a014:
    // 0x45a014: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x45a014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_45a018:
    // 0x45a018: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x45a018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_45a01c:
    // 0x45a01c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x45a01cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_45a020:
    // 0x45a020: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x45a020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_45a024:
    // 0x45a024: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a028:
    // 0x45a028: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x45a028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_45a02c:
    // 0x45a02c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45a02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_45a030:
    // 0x45a030: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x45a030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_45a034:
    // 0x45a034: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x45a034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_45a038:
    // 0x45a038: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x45a038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_45a03c:
    // 0x45a03c: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x45a03cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_45a040:
    // 0x45a040: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x45a040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_45a044:
    // 0x45a044: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x45a044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_45a048:
    // 0x45a048: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x45a048u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_45a04c:
    // 0x45a04c: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x45a04cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_45a050:
    // 0x45a050: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x45a050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_45a054:
    // 0x45a054: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x45a054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a058:
    // 0x45a058: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x45a058u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_45a05c:
    // 0x45a05c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x45a05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a060:
    // 0x45a060: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x45a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_45a064:
    // 0x45a064: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x45a064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a068:
    // 0x45a068: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x45a068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_45a06c:
    // 0x45a06c: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x45a06cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_45a070:
    // 0x45a070: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x45a070u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_45a074:
    // 0x45a074: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x45a074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_45a078:
    // 0x45a078: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x45a078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a07c:
    // 0x45a07c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x45a07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a080:
    // 0x45a080: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x45a080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a084:
    // 0x45a084: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x45a084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_45a088:
    // 0x45a088: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x45a088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_45a08c:
    // 0x45a08c: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x45a08cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_45a090:
    // 0x45a090: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x45a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_45a094:
    // 0x45a094: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x45a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_45a098:
    // 0x45a098: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x45a098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a09c:
    // 0x45a09c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x45a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a0a0:
    // 0x45a0a0: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x45a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a0a4:
    // 0x45a0a4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x45a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a0a8:
    // 0x45a0a8: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x45a0a8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_45a0ac:
    // 0x45a0ac: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x45a0acu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_45a0b0:
    // 0x45a0b0: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x45a0b0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_45a0b4:
    // 0x45a0b4: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x45a0b4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_45a0b8:
    // 0x45a0b8: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x45a0b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_45a0bc:
    // 0x45a0bc: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x45a0bcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_45a0c0:
    // 0x45a0c0: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x45a0c0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_45a0c4:
    // 0x45a0c4: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x45a0c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_45a0c8:
    // 0x45a0c8: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x45a0c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_45a0cc:
    // 0x45a0cc: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x45a0ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_45a0d0:
    // 0x45a0d0: 0xc0a7a88  jal         func_29EA20
label_45a0d4:
    if (ctx->pc == 0x45A0D4u) {
        ctx->pc = 0x45A0D4u;
            // 0x45a0d4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x45A0D8u;
        goto label_45a0d8;
    }
    ctx->pc = 0x45A0D0u;
    SET_GPR_U32(ctx, 31, 0x45A0D8u);
    ctx->pc = 0x45A0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A0D0u;
            // 0x45a0d4: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A0D8u; }
        if (ctx->pc != 0x45A0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A0D8u; }
        if (ctx->pc != 0x45A0D8u) { return; }
    }
    ctx->pc = 0x45A0D8u;
label_45a0d8:
    // 0x45a0d8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x45a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_45a0dc:
    // 0x45a0dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45a0dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a0e0:
    // 0x45a0e0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_45a0e4:
    if (ctx->pc == 0x45A0E4u) {
        ctx->pc = 0x45A0E4u;
            // 0x45a0e4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45A0E8u;
        goto label_45a0e8;
    }
    ctx->pc = 0x45A0E0u;
    {
        const bool branch_taken_0x45a0e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A0E0u;
            // 0x45a0e4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a0e0) {
            ctx->pc = 0x45A130u;
            goto label_45a130;
        }
    }
    ctx->pc = 0x45A0E8u;
label_45a0e8:
    // 0x45a0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a0ec:
    // 0x45a0ec: 0xc088ef4  jal         func_223BD0
label_45a0f0:
    if (ctx->pc == 0x45A0F0u) {
        ctx->pc = 0x45A0F0u;
            // 0x45a0f0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x45A0F4u;
        goto label_45a0f4;
    }
    ctx->pc = 0x45A0ECu;
    SET_GPR_U32(ctx, 31, 0x45A0F4u);
    ctx->pc = 0x45A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A0ECu;
            // 0x45a0f0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A0F4u; }
        if (ctx->pc != 0x45A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A0F4u; }
        if (ctx->pc != 0x45A0F4u) { return; }
    }
    ctx->pc = 0x45A0F4u;
label_45a0f4:
    // 0x45a0f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_45a0f8:
    // 0x45a0f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x45a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_45a0fc:
    // 0x45a0fc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x45a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_45a100:
    // 0x45a100: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x45a100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_45a104:
    // 0x45a104: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x45a104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_45a108:
    // 0x45a108: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x45a108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_45a10c:
    // 0x45a10c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a110:
    // 0x45a110: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45a110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_45a114:
    // 0x45a114: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x45a114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_45a118:
    // 0x45a118: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x45a118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_45a11c:
    // 0x45a11c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x45a11cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_45a120:
    // 0x45a120: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x45a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_45a124:
    // 0x45a124: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x45a124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_45a128:
    // 0x45a128: 0xc088b38  jal         func_222CE0
label_45a12c:
    if (ctx->pc == 0x45A12Cu) {
        ctx->pc = 0x45A12Cu;
            // 0x45a12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A130u;
        goto label_45a130;
    }
    ctx->pc = 0x45A128u;
    SET_GPR_U32(ctx, 31, 0x45A130u);
    ctx->pc = 0x45A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A128u;
            // 0x45a12c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A130u; }
        if (ctx->pc != 0x45A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A130u; }
        if (ctx->pc != 0x45A130u) { return; }
    }
    ctx->pc = 0x45A130u;
label_45a130:
    // 0x45a130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a134:
    // 0x45a134: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45a134u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45a138:
    // 0x45a138: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x45a138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a13c:
    // 0x45a13c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45a13cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a140:
    // 0x45a140: 0xc08914c  jal         func_224530
label_45a144:
    if (ctx->pc == 0x45A144u) {
        ctx->pc = 0x45A144u;
            // 0x45a144: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x45A148u;
        goto label_45a148;
    }
    ctx->pc = 0x45A140u;
    SET_GPR_U32(ctx, 31, 0x45A148u);
    ctx->pc = 0x45A144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A140u;
            // 0x45a144: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A148u; }
        if (ctx->pc != 0x45A148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A148u; }
        if (ctx->pc != 0x45A148u) { return; }
    }
    ctx->pc = 0x45A148u;
label_45a148:
    // 0x45a148: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x45a148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a14c:
    // 0x45a14c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a14cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a150:
    // 0x45a150: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x45a150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a154:
    // 0x45a154: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x45a154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_45a158:
    // 0x45a158: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x45a158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a15c:
    // 0x45a15c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x45a15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_45a160:
    // 0x45a160: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x45a160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_45a164:
    // 0x45a164: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x45a164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_45a168:
    // 0x45a168: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x45a168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_45a16c:
    // 0x45a16c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x45a16cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_45a170:
    // 0x45a170: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x45a170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45a174:
    // 0x45a174: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x45a174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_45a178:
    // 0x45a178: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x45a178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45a17c:
    // 0x45a17c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x45a17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45a180:
    // 0x45a180: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x45a180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_45a184:
    // 0x45a184: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x45a184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_45a188:
    // 0x45a188: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x45a188u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_45a18c:
    // 0x45a18c: 0xc0892b0  jal         func_224AC0
label_45a190:
    if (ctx->pc == 0x45A190u) {
        ctx->pc = 0x45A190u;
            // 0x45a190: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x45A194u;
        goto label_45a194;
    }
    ctx->pc = 0x45A18Cu;
    SET_GPR_U32(ctx, 31, 0x45A194u);
    ctx->pc = 0x45A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A18Cu;
            // 0x45a190: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A194u; }
        if (ctx->pc != 0x45A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A194u; }
        if (ctx->pc != 0x45A194u) { return; }
    }
    ctx->pc = 0x45A194u;
label_45a194:
    // 0x45a194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a198:
    // 0x45a198: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x45a198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_45a19c:
    // 0x45a19c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x45a19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_45a1a0:
    // 0x45a1a0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x45a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_45a1a4:
    // 0x45a1a4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x45a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_45a1a8:
    // 0x45a1a8: 0xc0891d8  jal         func_224760
label_45a1ac:
    if (ctx->pc == 0x45A1ACu) {
        ctx->pc = 0x45A1ACu;
            // 0x45a1ac: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x45A1B0u;
        goto label_45a1b0;
    }
    ctx->pc = 0x45A1A8u;
    SET_GPR_U32(ctx, 31, 0x45A1B0u);
    ctx->pc = 0x45A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A1A8u;
            // 0x45a1ac: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1B0u; }
        if (ctx->pc != 0x45A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1B0u; }
        if (ctx->pc != 0x45A1B0u) { return; }
    }
    ctx->pc = 0x45A1B0u;
label_45a1b0:
    // 0x45a1b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a1b4:
    // 0x45a1b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a1b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a1b8:
    // 0x45a1b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x45a1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_45a1bc:
    // 0x45a1bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45a1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45a1c0:
    // 0x45a1c0: 0xc08c164  jal         func_230590
label_45a1c4:
    if (ctx->pc == 0x45A1C4u) {
        ctx->pc = 0x45A1C4u;
            // 0x45a1c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x45A1C8u;
        goto label_45a1c8;
    }
    ctx->pc = 0x45A1C0u;
    SET_GPR_U32(ctx, 31, 0x45A1C8u);
    ctx->pc = 0x45A1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A1C0u;
            // 0x45a1c4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1C8u; }
        if (ctx->pc != 0x45A1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1C8u; }
        if (ctx->pc != 0x45A1C8u) { return; }
    }
    ctx->pc = 0x45A1C8u;
label_45a1c8:
    // 0x45a1c8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x45a1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_45a1cc:
    // 0x45a1cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a1d0:
    // 0x45a1d0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_45a1d4:
    // 0x45a1d4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x45a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_45a1d8:
    // 0x45a1d8: 0xc0a7a88  jal         func_29EA20
label_45a1dc:
    if (ctx->pc == 0x45A1DCu) {
        ctx->pc = 0x45A1DCu;
            // 0x45a1dc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x45A1E0u;
        goto label_45a1e0;
    }
    ctx->pc = 0x45A1D8u;
    SET_GPR_U32(ctx, 31, 0x45A1E0u);
    ctx->pc = 0x45A1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A1D8u;
            // 0x45a1dc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1E0u; }
        if (ctx->pc != 0x45A1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A1E0u; }
        if (ctx->pc != 0x45A1E0u) { return; }
    }
    ctx->pc = 0x45A1E0u;
label_45a1e0:
    // 0x45a1e0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x45a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_45a1e4:
    // 0x45a1e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x45a1e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a1e8:
    // 0x45a1e8: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_45a1ec:
    if (ctx->pc == 0x45A1ECu) {
        ctx->pc = 0x45A1ECu;
            // 0x45a1ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45A1F0u;
        goto label_45a1f0;
    }
    ctx->pc = 0x45A1E8u;
    {
        const bool branch_taken_0x45a1e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A1E8u;
            // 0x45a1ec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a1e8) {
            ctx->pc = 0x45A20Cu;
            goto label_45a20c;
        }
    }
    ctx->pc = 0x45A1F0u;
label_45a1f0:
    // 0x45a1f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45a1f4:
    // 0x45a1f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x45a1f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a1f8:
    // 0x45a1f8: 0xc0869d0  jal         func_21A740
label_45a1fc:
    if (ctx->pc == 0x45A1FCu) {
        ctx->pc = 0x45A1FCu;
            // 0x45a1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A200u;
        goto label_45a200;
    }
    ctx->pc = 0x45A1F8u;
    SET_GPR_U32(ctx, 31, 0x45A200u);
    ctx->pc = 0x45A1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A1F8u;
            // 0x45a1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A200u; }
        if (ctx->pc != 0x45A200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A200u; }
        if (ctx->pc != 0x45A200u) { return; }
    }
    ctx->pc = 0x45A200u;
label_45a200:
    // 0x45a200: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x45a200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_45a204:
    // 0x45a204: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x45a204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_45a208:
    // 0x45a208: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x45a208u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_45a20c:
    // 0x45a20c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x45a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_45a210:
    // 0x45a210: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a214:
    // 0x45a214: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x45a214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_45a218:
    // 0x45a218: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45a218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_45a21c:
    // 0x45a21c: 0xc08c650  jal         func_231940
label_45a220:
    if (ctx->pc == 0x45A220u) {
        ctx->pc = 0x45A220u;
            // 0x45a220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A224u;
        goto label_45a224;
    }
    ctx->pc = 0x45A21Cu;
    SET_GPR_U32(ctx, 31, 0x45A224u);
    ctx->pc = 0x45A220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A21Cu;
            // 0x45a220: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A224u; }
        if (ctx->pc != 0x45A224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A224u; }
        if (ctx->pc != 0x45A224u) { return; }
    }
    ctx->pc = 0x45A224u;
label_45a224:
    // 0x45a224: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45a224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45a228:
    // 0x45a228: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x45a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_45a22c:
    // 0x45a22c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x45a22cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_45a230:
    // 0x45a230: 0xc0a7a88  jal         func_29EA20
label_45a234:
    if (ctx->pc == 0x45A234u) {
        ctx->pc = 0x45A234u;
            // 0x45a234: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x45A238u;
        goto label_45a238;
    }
    ctx->pc = 0x45A230u;
    SET_GPR_U32(ctx, 31, 0x45A238u);
    ctx->pc = 0x45A234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A230u;
            // 0x45a234: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A238u; }
        if (ctx->pc != 0x45A238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A238u; }
        if (ctx->pc != 0x45A238u) { return; }
    }
    ctx->pc = 0x45A238u;
label_45a238:
    // 0x45a238: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x45a238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_45a23c:
    // 0x45a23c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45a23cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a240:
    // 0x45a240: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_45a244:
    if (ctx->pc == 0x45A244u) {
        ctx->pc = 0x45A244u;
            // 0x45a244: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x45A248u;
        goto label_45a248;
    }
    ctx->pc = 0x45A240u;
    {
        const bool branch_taken_0x45a240 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x45A244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A240u;
            // 0x45a244: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45a240) {
            ctx->pc = 0x45A25Cu;
            goto label_45a25c;
        }
    }
    ctx->pc = 0x45A248u;
label_45a248:
    // 0x45a248: 0x3c024291  lui         $v0, 0x4291
    ctx->pc = 0x45a248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17041 << 16));
label_45a24c:
    // 0x45a24c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45a24cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45a250:
    // 0x45a250: 0xc0827ac  jal         func_209EB0
label_45a254:
    if (ctx->pc == 0x45A254u) {
        ctx->pc = 0x45A258u;
        goto label_45a258;
    }
    ctx->pc = 0x45A250u;
    SET_GPR_U32(ctx, 31, 0x45A258u);
    ctx->pc = 0x209EB0u;
    if (runtime->hasFunction(0x209EB0u)) {
        auto targetFn = runtime->lookupFunction(0x209EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A258u; }
        if (ctx->pc != 0x45A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00209EB0_0x209eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A258u; }
        if (ctx->pc != 0x45A258u) { return; }
    }
    ctx->pc = 0x45A258u;
label_45a258:
    // 0x45a258: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45a258u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a25c:
    // 0x45a25c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x45a25cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_45a260:
    // 0x45a260: 0xc040180  jal         func_100600
label_45a264:
    if (ctx->pc == 0x45A264u) {
        ctx->pc = 0x45A264u;
            // 0x45a264: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x45A268u;
        goto label_45a268;
    }
    ctx->pc = 0x45A260u;
    SET_GPR_U32(ctx, 31, 0x45A268u);
    ctx->pc = 0x45A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A260u;
            // 0x45a264: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A268u; }
        if (ctx->pc != 0x45A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A268u; }
        if (ctx->pc != 0x45A268u) { return; }
    }
    ctx->pc = 0x45A268u;
label_45a268:
    // 0x45a268: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_45a26c:
    if (ctx->pc == 0x45A26Cu) {
        ctx->pc = 0x45A26Cu;
            // 0x45a26c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->pc = 0x45A270u;
        goto label_45a270;
    }
    ctx->pc = 0x45A268u;
    {
        const bool branch_taken_0x45a268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a268) {
            ctx->pc = 0x45A26Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A268u;
            // 0x45a26c: 0xae2200d4  sw          $v0, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A2ACu;
            goto label_45a2ac;
        }
    }
    ctx->pc = 0x45A270u;
label_45a270:
    // 0x45a270: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x45a270u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_45a274:
    // 0x45a274: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x45a274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_45a278:
    // 0x45a278: 0x2484cfe0  addiu       $a0, $a0, -0x3020
    ctx->pc = 0x45a278u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954976));
label_45a27c:
    // 0x45a27c: 0x246324a0  addiu       $v1, $v1, 0x24A0
    ctx->pc = 0x45a27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9376));
label_45a280:
    // 0x45a280: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x45a280u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_45a284:
    // 0x45a284: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x45a284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_45a288:
    // 0x45a288: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a288u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_45a28c:
    // 0x45a28c: 0x24842460  addiu       $a0, $a0, 0x2460
    ctx->pc = 0x45a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9312));
label_45a290:
    // 0x45a290: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45a290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_45a294:
    // 0x45a294: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x45a294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_45a298:
    // 0x45a298: 0x2463e3e0  addiu       $v1, $v1, -0x1C20
    ctx->pc = 0x45a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960096));
label_45a29c:
    // 0x45a29c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x45a29cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_45a2a0:
    // 0x45a2a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x45a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_45a2a4:
    // 0x45a2a4: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x45a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_45a2a8:
    // 0x45a2a8: 0xae2200d4  sw          $v0, 0xD4($s1)
    ctx->pc = 0x45a2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 2));
label_45a2ac:
    // 0x45a2ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45a2acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a2b0:
    // 0x45a2b0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x45a2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_45a2b4:
    // 0x45a2b4: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x45a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_45a2b8:
    // 0x45a2b8: 0xc0d37ec  jal         func_34DFB0
label_45a2bc:
    if (ctx->pc == 0x45A2BCu) {
        ctx->pc = 0x45A2BCu;
            // 0x45a2bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A2C0u;
        goto label_45a2c0;
    }
    ctx->pc = 0x45A2B8u;
    SET_GPR_U32(ctx, 31, 0x45A2C0u);
    ctx->pc = 0x45A2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A2B8u;
            // 0x45a2bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A2C0u; }
        if (ctx->pc != 0x45A2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A2C0u; }
        if (ctx->pc != 0x45A2C0u) { return; }
    }
    ctx->pc = 0x45A2C0u;
label_45a2c0:
    // 0x45a2c0: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x45a2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_45a2c4:
    // 0x45a2c4: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x45a2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_45a2c8:
    // 0x45a2c8: 0xc04c720  jal         func_131C80
label_45a2cc:
    if (ctx->pc == 0x45A2CCu) {
        ctx->pc = 0x45A2CCu;
            // 0x45a2cc: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->pc = 0x45A2D0u;
        goto label_45a2d0;
    }
    ctx->pc = 0x45A2C8u;
    SET_GPR_U32(ctx, 31, 0x45A2D0u);
    ctx->pc = 0x45A2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A2C8u;
            // 0x45a2cc: 0xae3000d8  sw          $s0, 0xD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 216), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A2D0u; }
        if (ctx->pc != 0x45A2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A2D0u; }
        if (ctx->pc != 0x45A2D0u) { return; }
    }
    ctx->pc = 0x45A2D0u;
label_45a2d0:
    // 0x45a2d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a2d4:
    // 0x45a2d4: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x45a2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_45a2d8:
    // 0x45a2d8: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x45a2d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_45a2dc:
    // 0x45a2dc: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x45a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_45a2e0:
    // 0x45a2e0: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x45a2e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_45a2e4:
    // 0x45a2e4: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x45a2e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_45a2e8:
    // 0x45a2e8: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x45a2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_45a2ec:
    // 0x45a2ec: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x45a2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_45a2f0:
    // 0x45a2f0: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x45a2f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_45a2f4:
    // 0x45a2f4: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x45a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_45a2f8:
    // 0x45a2f8: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x45a2f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_45a2fc:
    // 0x45a2fc: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x45a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_45a300:
    // 0x45a300: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45a300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_45a304:
    // 0x45a304: 0xc040180  jal         func_100600
label_45a308:
    if (ctx->pc == 0x45A308u) {
        ctx->pc = 0x45A308u;
            // 0x45a308: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x45A30Cu;
        goto label_45a30c;
    }
    ctx->pc = 0x45A304u;
    SET_GPR_U32(ctx, 31, 0x45A30Cu);
    ctx->pc = 0x45A308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A304u;
            // 0x45a308: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A30Cu; }
        if (ctx->pc != 0x45A30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A30Cu; }
        if (ctx->pc != 0x45A30Cu) { return; }
    }
    ctx->pc = 0x45A30Cu;
label_45a30c:
    // 0x45a30c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x45a30cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45a310:
    // 0x45a310: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_45a314:
    if (ctx->pc == 0x45A314u) {
        ctx->pc = 0x45A314u;
            // 0x45a314: 0x3c0347af  lui         $v1, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
        ctx->pc = 0x45A318u;
        goto label_45a318;
    }
    ctx->pc = 0x45A310u;
    {
        const bool branch_taken_0x45a310 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x45a310) {
            ctx->pc = 0x45A314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45A310u;
            // 0x45a314: 0x3c0347af  lui         $v1, 0x47AF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45A350u;
            goto label_45a350;
        }
    }
    ctx->pc = 0x45A318u;
label_45a318:
    // 0x45a318: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x45a318u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_45a31c:
    // 0x45a31c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x45a31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a320:
    // 0x45a320: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x45a320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_45a324:
    // 0x45a324: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x45a324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_45a328:
    // 0x45a328: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x45a328u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_45a32c:
    // 0x45a32c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x45a32cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_45a330:
    // 0x45a330: 0xc040138  jal         func_1004E0
label_45a334:
    if (ctx->pc == 0x45A334u) {
        ctx->pc = 0x45A334u;
            // 0x45a334: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x45A338u;
        goto label_45a338;
    }
    ctx->pc = 0x45A330u;
    SET_GPR_U32(ctx, 31, 0x45A338u);
    ctx->pc = 0x45A334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A330u;
            // 0x45a334: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A338u; }
        if (ctx->pc != 0x45A338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A338u; }
        if (ctx->pc != 0x45A338u) { return; }
    }
    ctx->pc = 0x45A338u;
label_45a338:
    // 0x45a338: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x45a338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_45a33c:
    // 0x45a33c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x45a33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_45a340:
    // 0x45a340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45a340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a344:
    // 0x45a344: 0xc04a576  jal         func_1295D8
label_45a348:
    if (ctx->pc == 0x45A348u) {
        ctx->pc = 0x45A348u;
            // 0x45a348: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x45A34Cu;
        goto label_45a34c;
    }
    ctx->pc = 0x45A344u;
    SET_GPR_U32(ctx, 31, 0x45A34Cu);
    ctx->pc = 0x45A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A344u;
            // 0x45a348: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A34Cu; }
        if (ctx->pc != 0x45A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A34Cu; }
        if (ctx->pc != 0x45A34Cu) { return; }
    }
    ctx->pc = 0x45A34Cu;
label_45a34c:
    // 0x45a34c: 0x3c0347af  lui         $v1, 0x47AF
    ctx->pc = 0x45a34cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18351 << 16));
label_45a350:
    // 0x45a350: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x45a350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_45a354:
    // 0x45a354: 0x3463c800  ori         $v1, $v1, 0xC800
    ctx->pc = 0x45a354u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)51200);
label_45a358:
    // 0x45a358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x45a358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45a35c:
    // 0x45a35c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x45a35cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45a360:
    // 0x45a360: 0x240616ae  addiu       $a2, $zero, 0x16AE
    ctx->pc = 0x45a360u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5806));
label_45a364:
    // 0x45a364: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x45a364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45a368:
    // 0x45a368: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x45a368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a36c:
    // 0x45a36c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x45a36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_45a370:
    // 0x45a370: 0xc122cd8  jal         func_48B360
label_45a374:
    if (ctx->pc == 0x45A374u) {
        ctx->pc = 0x45A374u;
            // 0x45a374: 0xae300170  sw          $s0, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 16));
        ctx->pc = 0x45A378u;
        goto label_45a378;
    }
    ctx->pc = 0x45A370u;
    SET_GPR_U32(ctx, 31, 0x45A378u);
    ctx->pc = 0x45A374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A370u;
            // 0x45a374: 0xae300170  sw          $s0, 0x170($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 368), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A378u; }
        if (ctx->pc != 0x45A378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A378u; }
        if (ctx->pc != 0x45A378u) { return; }
    }
    ctx->pc = 0x45A378u;
label_45a378:
    // 0x45a378: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x45a378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_45a37c:
    // 0x45a37c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x45a37cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45a380:
    // 0x45a380: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45a380u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_45a384:
    // 0x45a384: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a384u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45a388:
    // 0x45a388: 0x3e00008  jr          $ra
label_45a38c:
    if (ctx->pc == 0x45A38Cu) {
        ctx->pc = 0x45A38Cu;
            // 0x45a38c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x45A390u;
        goto label_45a390;
    }
    ctx->pc = 0x45A388u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45A38Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A388u;
            // 0x45a38c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45A390u;
label_45a390:
    // 0x45a390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x45a390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_45a394:
    // 0x45a394: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x45a394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45a398:
    // 0x45a398: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45a398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45a39c:
    // 0x45a39c: 0xc0e3580  jal         func_38D600
label_45a3a0:
    if (ctx->pc == 0x45A3A0u) {
        ctx->pc = 0x45A3A0u;
            // 0x45a3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45A3A4u;
        goto label_45a3a4;
    }
    ctx->pc = 0x45A39Cu;
    SET_GPR_U32(ctx, 31, 0x45A3A4u);
    ctx->pc = 0x45A3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45A39Cu;
            // 0x45a3a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A3A4u; }
        if (ctx->pc != 0x45A3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45A3A4u; }
        if (ctx->pc != 0x45A3A4u) { return; }
    }
    ctx->pc = 0x45A3A4u;
label_45a3a4:
    // 0x45a3a4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x45a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45a3a8:
    // 0x45a3a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x45a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_45a3ac:
    // 0x45a3ac: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x45a3acu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_45a3b0:
    // 0x45a3b0: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x45a3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_45a3b4:
    // 0x45a3b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x45a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45a3b8:
    // 0x45a3b8: 0xa2040068  sb          $a0, 0x68($s0)
    ctx->pc = 0x45a3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 4));
label_45a3bc:
    // 0x45a3bc: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x45a3bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_45a3c0:
    // 0x45a3c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45a3c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_45a3c4:
    // 0x45a3c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x45a3c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_45a3c8:
    // 0x45a3c8: 0x3e00008  jr          $ra
label_45a3cc:
    if (ctx->pc == 0x45A3CCu) {
        ctx->pc = 0x45A3CCu;
            // 0x45a3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45A3D0u;
        goto label_fallthrough_0x45a3c8;
    }
    ctx->pc = 0x45A3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45A3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45A3C8u;
            // 0x45a3cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x45a3c8:
    ctx->pc = 0x45A3D0u;
}
