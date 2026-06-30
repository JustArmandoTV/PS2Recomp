#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00522B50
// Address: 0x522b50 - 0x523350
void sub_00522B50_0x522b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00522B50_0x522b50");
#endif

    switch (ctx->pc) {
        case 0x522b50u: goto label_522b50;
        case 0x522b54u: goto label_522b54;
        case 0x522b58u: goto label_522b58;
        case 0x522b5cu: goto label_522b5c;
        case 0x522b60u: goto label_522b60;
        case 0x522b64u: goto label_522b64;
        case 0x522b68u: goto label_522b68;
        case 0x522b6cu: goto label_522b6c;
        case 0x522b70u: goto label_522b70;
        case 0x522b74u: goto label_522b74;
        case 0x522b78u: goto label_522b78;
        case 0x522b7cu: goto label_522b7c;
        case 0x522b80u: goto label_522b80;
        case 0x522b84u: goto label_522b84;
        case 0x522b88u: goto label_522b88;
        case 0x522b8cu: goto label_522b8c;
        case 0x522b90u: goto label_522b90;
        case 0x522b94u: goto label_522b94;
        case 0x522b98u: goto label_522b98;
        case 0x522b9cu: goto label_522b9c;
        case 0x522ba0u: goto label_522ba0;
        case 0x522ba4u: goto label_522ba4;
        case 0x522ba8u: goto label_522ba8;
        case 0x522bacu: goto label_522bac;
        case 0x522bb0u: goto label_522bb0;
        case 0x522bb4u: goto label_522bb4;
        case 0x522bb8u: goto label_522bb8;
        case 0x522bbcu: goto label_522bbc;
        case 0x522bc0u: goto label_522bc0;
        case 0x522bc4u: goto label_522bc4;
        case 0x522bc8u: goto label_522bc8;
        case 0x522bccu: goto label_522bcc;
        case 0x522bd0u: goto label_522bd0;
        case 0x522bd4u: goto label_522bd4;
        case 0x522bd8u: goto label_522bd8;
        case 0x522bdcu: goto label_522bdc;
        case 0x522be0u: goto label_522be0;
        case 0x522be4u: goto label_522be4;
        case 0x522be8u: goto label_522be8;
        case 0x522becu: goto label_522bec;
        case 0x522bf0u: goto label_522bf0;
        case 0x522bf4u: goto label_522bf4;
        case 0x522bf8u: goto label_522bf8;
        case 0x522bfcu: goto label_522bfc;
        case 0x522c00u: goto label_522c00;
        case 0x522c04u: goto label_522c04;
        case 0x522c08u: goto label_522c08;
        case 0x522c0cu: goto label_522c0c;
        case 0x522c10u: goto label_522c10;
        case 0x522c14u: goto label_522c14;
        case 0x522c18u: goto label_522c18;
        case 0x522c1cu: goto label_522c1c;
        case 0x522c20u: goto label_522c20;
        case 0x522c24u: goto label_522c24;
        case 0x522c28u: goto label_522c28;
        case 0x522c2cu: goto label_522c2c;
        case 0x522c30u: goto label_522c30;
        case 0x522c34u: goto label_522c34;
        case 0x522c38u: goto label_522c38;
        case 0x522c3cu: goto label_522c3c;
        case 0x522c40u: goto label_522c40;
        case 0x522c44u: goto label_522c44;
        case 0x522c48u: goto label_522c48;
        case 0x522c4cu: goto label_522c4c;
        case 0x522c50u: goto label_522c50;
        case 0x522c54u: goto label_522c54;
        case 0x522c58u: goto label_522c58;
        case 0x522c5cu: goto label_522c5c;
        case 0x522c60u: goto label_522c60;
        case 0x522c64u: goto label_522c64;
        case 0x522c68u: goto label_522c68;
        case 0x522c6cu: goto label_522c6c;
        case 0x522c70u: goto label_522c70;
        case 0x522c74u: goto label_522c74;
        case 0x522c78u: goto label_522c78;
        case 0x522c7cu: goto label_522c7c;
        case 0x522c80u: goto label_522c80;
        case 0x522c84u: goto label_522c84;
        case 0x522c88u: goto label_522c88;
        case 0x522c8cu: goto label_522c8c;
        case 0x522c90u: goto label_522c90;
        case 0x522c94u: goto label_522c94;
        case 0x522c98u: goto label_522c98;
        case 0x522c9cu: goto label_522c9c;
        case 0x522ca0u: goto label_522ca0;
        case 0x522ca4u: goto label_522ca4;
        case 0x522ca8u: goto label_522ca8;
        case 0x522cacu: goto label_522cac;
        case 0x522cb0u: goto label_522cb0;
        case 0x522cb4u: goto label_522cb4;
        case 0x522cb8u: goto label_522cb8;
        case 0x522cbcu: goto label_522cbc;
        case 0x522cc0u: goto label_522cc0;
        case 0x522cc4u: goto label_522cc4;
        case 0x522cc8u: goto label_522cc8;
        case 0x522cccu: goto label_522ccc;
        case 0x522cd0u: goto label_522cd0;
        case 0x522cd4u: goto label_522cd4;
        case 0x522cd8u: goto label_522cd8;
        case 0x522cdcu: goto label_522cdc;
        case 0x522ce0u: goto label_522ce0;
        case 0x522ce4u: goto label_522ce4;
        case 0x522ce8u: goto label_522ce8;
        case 0x522cecu: goto label_522cec;
        case 0x522cf0u: goto label_522cf0;
        case 0x522cf4u: goto label_522cf4;
        case 0x522cf8u: goto label_522cf8;
        case 0x522cfcu: goto label_522cfc;
        case 0x522d00u: goto label_522d00;
        case 0x522d04u: goto label_522d04;
        case 0x522d08u: goto label_522d08;
        case 0x522d0cu: goto label_522d0c;
        case 0x522d10u: goto label_522d10;
        case 0x522d14u: goto label_522d14;
        case 0x522d18u: goto label_522d18;
        case 0x522d1cu: goto label_522d1c;
        case 0x522d20u: goto label_522d20;
        case 0x522d24u: goto label_522d24;
        case 0x522d28u: goto label_522d28;
        case 0x522d2cu: goto label_522d2c;
        case 0x522d30u: goto label_522d30;
        case 0x522d34u: goto label_522d34;
        case 0x522d38u: goto label_522d38;
        case 0x522d3cu: goto label_522d3c;
        case 0x522d40u: goto label_522d40;
        case 0x522d44u: goto label_522d44;
        case 0x522d48u: goto label_522d48;
        case 0x522d4cu: goto label_522d4c;
        case 0x522d50u: goto label_522d50;
        case 0x522d54u: goto label_522d54;
        case 0x522d58u: goto label_522d58;
        case 0x522d5cu: goto label_522d5c;
        case 0x522d60u: goto label_522d60;
        case 0x522d64u: goto label_522d64;
        case 0x522d68u: goto label_522d68;
        case 0x522d6cu: goto label_522d6c;
        case 0x522d70u: goto label_522d70;
        case 0x522d74u: goto label_522d74;
        case 0x522d78u: goto label_522d78;
        case 0x522d7cu: goto label_522d7c;
        case 0x522d80u: goto label_522d80;
        case 0x522d84u: goto label_522d84;
        case 0x522d88u: goto label_522d88;
        case 0x522d8cu: goto label_522d8c;
        case 0x522d90u: goto label_522d90;
        case 0x522d94u: goto label_522d94;
        case 0x522d98u: goto label_522d98;
        case 0x522d9cu: goto label_522d9c;
        case 0x522da0u: goto label_522da0;
        case 0x522da4u: goto label_522da4;
        case 0x522da8u: goto label_522da8;
        case 0x522dacu: goto label_522dac;
        case 0x522db0u: goto label_522db0;
        case 0x522db4u: goto label_522db4;
        case 0x522db8u: goto label_522db8;
        case 0x522dbcu: goto label_522dbc;
        case 0x522dc0u: goto label_522dc0;
        case 0x522dc4u: goto label_522dc4;
        case 0x522dc8u: goto label_522dc8;
        case 0x522dccu: goto label_522dcc;
        case 0x522dd0u: goto label_522dd0;
        case 0x522dd4u: goto label_522dd4;
        case 0x522dd8u: goto label_522dd8;
        case 0x522ddcu: goto label_522ddc;
        case 0x522de0u: goto label_522de0;
        case 0x522de4u: goto label_522de4;
        case 0x522de8u: goto label_522de8;
        case 0x522decu: goto label_522dec;
        case 0x522df0u: goto label_522df0;
        case 0x522df4u: goto label_522df4;
        case 0x522df8u: goto label_522df8;
        case 0x522dfcu: goto label_522dfc;
        case 0x522e00u: goto label_522e00;
        case 0x522e04u: goto label_522e04;
        case 0x522e08u: goto label_522e08;
        case 0x522e0cu: goto label_522e0c;
        case 0x522e10u: goto label_522e10;
        case 0x522e14u: goto label_522e14;
        case 0x522e18u: goto label_522e18;
        case 0x522e1cu: goto label_522e1c;
        case 0x522e20u: goto label_522e20;
        case 0x522e24u: goto label_522e24;
        case 0x522e28u: goto label_522e28;
        case 0x522e2cu: goto label_522e2c;
        case 0x522e30u: goto label_522e30;
        case 0x522e34u: goto label_522e34;
        case 0x522e38u: goto label_522e38;
        case 0x522e3cu: goto label_522e3c;
        case 0x522e40u: goto label_522e40;
        case 0x522e44u: goto label_522e44;
        case 0x522e48u: goto label_522e48;
        case 0x522e4cu: goto label_522e4c;
        case 0x522e50u: goto label_522e50;
        case 0x522e54u: goto label_522e54;
        case 0x522e58u: goto label_522e58;
        case 0x522e5cu: goto label_522e5c;
        case 0x522e60u: goto label_522e60;
        case 0x522e64u: goto label_522e64;
        case 0x522e68u: goto label_522e68;
        case 0x522e6cu: goto label_522e6c;
        case 0x522e70u: goto label_522e70;
        case 0x522e74u: goto label_522e74;
        case 0x522e78u: goto label_522e78;
        case 0x522e7cu: goto label_522e7c;
        case 0x522e80u: goto label_522e80;
        case 0x522e84u: goto label_522e84;
        case 0x522e88u: goto label_522e88;
        case 0x522e8cu: goto label_522e8c;
        case 0x522e90u: goto label_522e90;
        case 0x522e94u: goto label_522e94;
        case 0x522e98u: goto label_522e98;
        case 0x522e9cu: goto label_522e9c;
        case 0x522ea0u: goto label_522ea0;
        case 0x522ea4u: goto label_522ea4;
        case 0x522ea8u: goto label_522ea8;
        case 0x522eacu: goto label_522eac;
        case 0x522eb0u: goto label_522eb0;
        case 0x522eb4u: goto label_522eb4;
        case 0x522eb8u: goto label_522eb8;
        case 0x522ebcu: goto label_522ebc;
        case 0x522ec0u: goto label_522ec0;
        case 0x522ec4u: goto label_522ec4;
        case 0x522ec8u: goto label_522ec8;
        case 0x522eccu: goto label_522ecc;
        case 0x522ed0u: goto label_522ed0;
        case 0x522ed4u: goto label_522ed4;
        case 0x522ed8u: goto label_522ed8;
        case 0x522edcu: goto label_522edc;
        case 0x522ee0u: goto label_522ee0;
        case 0x522ee4u: goto label_522ee4;
        case 0x522ee8u: goto label_522ee8;
        case 0x522eecu: goto label_522eec;
        case 0x522ef0u: goto label_522ef0;
        case 0x522ef4u: goto label_522ef4;
        case 0x522ef8u: goto label_522ef8;
        case 0x522efcu: goto label_522efc;
        case 0x522f00u: goto label_522f00;
        case 0x522f04u: goto label_522f04;
        case 0x522f08u: goto label_522f08;
        case 0x522f0cu: goto label_522f0c;
        case 0x522f10u: goto label_522f10;
        case 0x522f14u: goto label_522f14;
        case 0x522f18u: goto label_522f18;
        case 0x522f1cu: goto label_522f1c;
        case 0x522f20u: goto label_522f20;
        case 0x522f24u: goto label_522f24;
        case 0x522f28u: goto label_522f28;
        case 0x522f2cu: goto label_522f2c;
        case 0x522f30u: goto label_522f30;
        case 0x522f34u: goto label_522f34;
        case 0x522f38u: goto label_522f38;
        case 0x522f3cu: goto label_522f3c;
        case 0x522f40u: goto label_522f40;
        case 0x522f44u: goto label_522f44;
        case 0x522f48u: goto label_522f48;
        case 0x522f4cu: goto label_522f4c;
        case 0x522f50u: goto label_522f50;
        case 0x522f54u: goto label_522f54;
        case 0x522f58u: goto label_522f58;
        case 0x522f5cu: goto label_522f5c;
        case 0x522f60u: goto label_522f60;
        case 0x522f64u: goto label_522f64;
        case 0x522f68u: goto label_522f68;
        case 0x522f6cu: goto label_522f6c;
        case 0x522f70u: goto label_522f70;
        case 0x522f74u: goto label_522f74;
        case 0x522f78u: goto label_522f78;
        case 0x522f7cu: goto label_522f7c;
        case 0x522f80u: goto label_522f80;
        case 0x522f84u: goto label_522f84;
        case 0x522f88u: goto label_522f88;
        case 0x522f8cu: goto label_522f8c;
        case 0x522f90u: goto label_522f90;
        case 0x522f94u: goto label_522f94;
        case 0x522f98u: goto label_522f98;
        case 0x522f9cu: goto label_522f9c;
        case 0x522fa0u: goto label_522fa0;
        case 0x522fa4u: goto label_522fa4;
        case 0x522fa8u: goto label_522fa8;
        case 0x522facu: goto label_522fac;
        case 0x522fb0u: goto label_522fb0;
        case 0x522fb4u: goto label_522fb4;
        case 0x522fb8u: goto label_522fb8;
        case 0x522fbcu: goto label_522fbc;
        case 0x522fc0u: goto label_522fc0;
        case 0x522fc4u: goto label_522fc4;
        case 0x522fc8u: goto label_522fc8;
        case 0x522fccu: goto label_522fcc;
        case 0x522fd0u: goto label_522fd0;
        case 0x522fd4u: goto label_522fd4;
        case 0x522fd8u: goto label_522fd8;
        case 0x522fdcu: goto label_522fdc;
        case 0x522fe0u: goto label_522fe0;
        case 0x522fe4u: goto label_522fe4;
        case 0x522fe8u: goto label_522fe8;
        case 0x522fecu: goto label_522fec;
        case 0x522ff0u: goto label_522ff0;
        case 0x522ff4u: goto label_522ff4;
        case 0x522ff8u: goto label_522ff8;
        case 0x522ffcu: goto label_522ffc;
        case 0x523000u: goto label_523000;
        case 0x523004u: goto label_523004;
        case 0x523008u: goto label_523008;
        case 0x52300cu: goto label_52300c;
        case 0x523010u: goto label_523010;
        case 0x523014u: goto label_523014;
        case 0x523018u: goto label_523018;
        case 0x52301cu: goto label_52301c;
        case 0x523020u: goto label_523020;
        case 0x523024u: goto label_523024;
        case 0x523028u: goto label_523028;
        case 0x52302cu: goto label_52302c;
        case 0x523030u: goto label_523030;
        case 0x523034u: goto label_523034;
        case 0x523038u: goto label_523038;
        case 0x52303cu: goto label_52303c;
        case 0x523040u: goto label_523040;
        case 0x523044u: goto label_523044;
        case 0x523048u: goto label_523048;
        case 0x52304cu: goto label_52304c;
        case 0x523050u: goto label_523050;
        case 0x523054u: goto label_523054;
        case 0x523058u: goto label_523058;
        case 0x52305cu: goto label_52305c;
        case 0x523060u: goto label_523060;
        case 0x523064u: goto label_523064;
        case 0x523068u: goto label_523068;
        case 0x52306cu: goto label_52306c;
        case 0x523070u: goto label_523070;
        case 0x523074u: goto label_523074;
        case 0x523078u: goto label_523078;
        case 0x52307cu: goto label_52307c;
        case 0x523080u: goto label_523080;
        case 0x523084u: goto label_523084;
        case 0x523088u: goto label_523088;
        case 0x52308cu: goto label_52308c;
        case 0x523090u: goto label_523090;
        case 0x523094u: goto label_523094;
        case 0x523098u: goto label_523098;
        case 0x52309cu: goto label_52309c;
        case 0x5230a0u: goto label_5230a0;
        case 0x5230a4u: goto label_5230a4;
        case 0x5230a8u: goto label_5230a8;
        case 0x5230acu: goto label_5230ac;
        case 0x5230b0u: goto label_5230b0;
        case 0x5230b4u: goto label_5230b4;
        case 0x5230b8u: goto label_5230b8;
        case 0x5230bcu: goto label_5230bc;
        case 0x5230c0u: goto label_5230c0;
        case 0x5230c4u: goto label_5230c4;
        case 0x5230c8u: goto label_5230c8;
        case 0x5230ccu: goto label_5230cc;
        case 0x5230d0u: goto label_5230d0;
        case 0x5230d4u: goto label_5230d4;
        case 0x5230d8u: goto label_5230d8;
        case 0x5230dcu: goto label_5230dc;
        case 0x5230e0u: goto label_5230e0;
        case 0x5230e4u: goto label_5230e4;
        case 0x5230e8u: goto label_5230e8;
        case 0x5230ecu: goto label_5230ec;
        case 0x5230f0u: goto label_5230f0;
        case 0x5230f4u: goto label_5230f4;
        case 0x5230f8u: goto label_5230f8;
        case 0x5230fcu: goto label_5230fc;
        case 0x523100u: goto label_523100;
        case 0x523104u: goto label_523104;
        case 0x523108u: goto label_523108;
        case 0x52310cu: goto label_52310c;
        case 0x523110u: goto label_523110;
        case 0x523114u: goto label_523114;
        case 0x523118u: goto label_523118;
        case 0x52311cu: goto label_52311c;
        case 0x523120u: goto label_523120;
        case 0x523124u: goto label_523124;
        case 0x523128u: goto label_523128;
        case 0x52312cu: goto label_52312c;
        case 0x523130u: goto label_523130;
        case 0x523134u: goto label_523134;
        case 0x523138u: goto label_523138;
        case 0x52313cu: goto label_52313c;
        case 0x523140u: goto label_523140;
        case 0x523144u: goto label_523144;
        case 0x523148u: goto label_523148;
        case 0x52314cu: goto label_52314c;
        case 0x523150u: goto label_523150;
        case 0x523154u: goto label_523154;
        case 0x523158u: goto label_523158;
        case 0x52315cu: goto label_52315c;
        case 0x523160u: goto label_523160;
        case 0x523164u: goto label_523164;
        case 0x523168u: goto label_523168;
        case 0x52316cu: goto label_52316c;
        case 0x523170u: goto label_523170;
        case 0x523174u: goto label_523174;
        case 0x523178u: goto label_523178;
        case 0x52317cu: goto label_52317c;
        case 0x523180u: goto label_523180;
        case 0x523184u: goto label_523184;
        case 0x523188u: goto label_523188;
        case 0x52318cu: goto label_52318c;
        case 0x523190u: goto label_523190;
        case 0x523194u: goto label_523194;
        case 0x523198u: goto label_523198;
        case 0x52319cu: goto label_52319c;
        case 0x5231a0u: goto label_5231a0;
        case 0x5231a4u: goto label_5231a4;
        case 0x5231a8u: goto label_5231a8;
        case 0x5231acu: goto label_5231ac;
        case 0x5231b0u: goto label_5231b0;
        case 0x5231b4u: goto label_5231b4;
        case 0x5231b8u: goto label_5231b8;
        case 0x5231bcu: goto label_5231bc;
        case 0x5231c0u: goto label_5231c0;
        case 0x5231c4u: goto label_5231c4;
        case 0x5231c8u: goto label_5231c8;
        case 0x5231ccu: goto label_5231cc;
        case 0x5231d0u: goto label_5231d0;
        case 0x5231d4u: goto label_5231d4;
        case 0x5231d8u: goto label_5231d8;
        case 0x5231dcu: goto label_5231dc;
        case 0x5231e0u: goto label_5231e0;
        case 0x5231e4u: goto label_5231e4;
        case 0x5231e8u: goto label_5231e8;
        case 0x5231ecu: goto label_5231ec;
        case 0x5231f0u: goto label_5231f0;
        case 0x5231f4u: goto label_5231f4;
        case 0x5231f8u: goto label_5231f8;
        case 0x5231fcu: goto label_5231fc;
        case 0x523200u: goto label_523200;
        case 0x523204u: goto label_523204;
        case 0x523208u: goto label_523208;
        case 0x52320cu: goto label_52320c;
        case 0x523210u: goto label_523210;
        case 0x523214u: goto label_523214;
        case 0x523218u: goto label_523218;
        case 0x52321cu: goto label_52321c;
        case 0x523220u: goto label_523220;
        case 0x523224u: goto label_523224;
        case 0x523228u: goto label_523228;
        case 0x52322cu: goto label_52322c;
        case 0x523230u: goto label_523230;
        case 0x523234u: goto label_523234;
        case 0x523238u: goto label_523238;
        case 0x52323cu: goto label_52323c;
        case 0x523240u: goto label_523240;
        case 0x523244u: goto label_523244;
        case 0x523248u: goto label_523248;
        case 0x52324cu: goto label_52324c;
        case 0x523250u: goto label_523250;
        case 0x523254u: goto label_523254;
        case 0x523258u: goto label_523258;
        case 0x52325cu: goto label_52325c;
        case 0x523260u: goto label_523260;
        case 0x523264u: goto label_523264;
        case 0x523268u: goto label_523268;
        case 0x52326cu: goto label_52326c;
        case 0x523270u: goto label_523270;
        case 0x523274u: goto label_523274;
        case 0x523278u: goto label_523278;
        case 0x52327cu: goto label_52327c;
        case 0x523280u: goto label_523280;
        case 0x523284u: goto label_523284;
        case 0x523288u: goto label_523288;
        case 0x52328cu: goto label_52328c;
        case 0x523290u: goto label_523290;
        case 0x523294u: goto label_523294;
        case 0x523298u: goto label_523298;
        case 0x52329cu: goto label_52329c;
        case 0x5232a0u: goto label_5232a0;
        case 0x5232a4u: goto label_5232a4;
        case 0x5232a8u: goto label_5232a8;
        case 0x5232acu: goto label_5232ac;
        case 0x5232b0u: goto label_5232b0;
        case 0x5232b4u: goto label_5232b4;
        case 0x5232b8u: goto label_5232b8;
        case 0x5232bcu: goto label_5232bc;
        case 0x5232c0u: goto label_5232c0;
        case 0x5232c4u: goto label_5232c4;
        case 0x5232c8u: goto label_5232c8;
        case 0x5232ccu: goto label_5232cc;
        case 0x5232d0u: goto label_5232d0;
        case 0x5232d4u: goto label_5232d4;
        case 0x5232d8u: goto label_5232d8;
        case 0x5232dcu: goto label_5232dc;
        case 0x5232e0u: goto label_5232e0;
        case 0x5232e4u: goto label_5232e4;
        case 0x5232e8u: goto label_5232e8;
        case 0x5232ecu: goto label_5232ec;
        case 0x5232f0u: goto label_5232f0;
        case 0x5232f4u: goto label_5232f4;
        case 0x5232f8u: goto label_5232f8;
        case 0x5232fcu: goto label_5232fc;
        case 0x523300u: goto label_523300;
        case 0x523304u: goto label_523304;
        case 0x523308u: goto label_523308;
        case 0x52330cu: goto label_52330c;
        case 0x523310u: goto label_523310;
        case 0x523314u: goto label_523314;
        case 0x523318u: goto label_523318;
        case 0x52331cu: goto label_52331c;
        case 0x523320u: goto label_523320;
        case 0x523324u: goto label_523324;
        case 0x523328u: goto label_523328;
        case 0x52332cu: goto label_52332c;
        case 0x523330u: goto label_523330;
        case 0x523334u: goto label_523334;
        case 0x523338u: goto label_523338;
        case 0x52333cu: goto label_52333c;
        case 0x523340u: goto label_523340;
        case 0x523344u: goto label_523344;
        case 0x523348u: goto label_523348;
        case 0x52334cu: goto label_52334c;
        default: break;
    }

    ctx->pc = 0x522b50u;

label_522b50:
    // 0x522b50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x522b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_522b54:
    // 0x522b54: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x522b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_522b58:
    // 0x522b58: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x522b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_522b5c:
    // 0x522b5c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x522b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_522b60:
    // 0x522b60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x522b60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_522b64:
    // 0x522b64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x522b64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_522b68:
    // 0x522b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_522b6c:
    // 0x522b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522b70:
    // 0x522b70: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x522b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_522b74:
    // 0x522b74: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x522b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_522b78:
    // 0x522b78: 0xc10ca68  jal         func_4329A0
label_522b7c:
    if (ctx->pc == 0x522B7Cu) {
        ctx->pc = 0x522B7Cu;
            // 0x522b7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x522B80u;
        goto label_522b80;
    }
    ctx->pc = 0x522B78u;
    SET_GPR_U32(ctx, 31, 0x522B80u);
    ctx->pc = 0x522B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522B78u;
            // 0x522b7c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B80u; }
        if (ctx->pc != 0x522B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522B80u; }
        if (ctx->pc != 0x522B80u) { return; }
    }
    ctx->pc = 0x522B80u;
label_522b80:
    // 0x522b80: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x522b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_522b84:
    // 0x522b84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x522b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_522b88:
    // 0x522b88: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x522b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_522b8c:
    // 0x522b8c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x522b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_522b90:
    // 0x522b90: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x522b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_522b94:
    // 0x522b94: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x522b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_522b98:
    // 0x522b98: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x522b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_522b9c:
    // 0x522b9c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x522b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_522ba0:
    // 0x522ba0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x522ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_522ba4:
    // 0x522ba4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x522ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_522ba8:
    // 0x522ba8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x522ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_522bac:
    // 0x522bac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x522bacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_522bb0:
    // 0x522bb0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x522bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_522bb4:
    // 0x522bb4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x522bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_522bb8:
    // 0x522bb8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x522bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_522bbc:
    // 0x522bbc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x522bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_522bc0:
    // 0x522bc0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x522bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_522bc4:
    // 0x522bc4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x522bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_522bc8:
    // 0x522bc8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x522bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_522bcc:
    // 0x522bcc: 0xc0582cc  jal         func_160B30
label_522bd0:
    if (ctx->pc == 0x522BD0u) {
        ctx->pc = 0x522BD0u;
            // 0x522bd0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x522BD4u;
        goto label_522bd4;
    }
    ctx->pc = 0x522BCCu;
    SET_GPR_U32(ctx, 31, 0x522BD4u);
    ctx->pc = 0x522BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522BCCu;
            // 0x522bd0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522BD4u; }
        if (ctx->pc != 0x522BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522BD4u; }
        if (ctx->pc != 0x522BD4u) { return; }
    }
    ctx->pc = 0x522BD4u;
label_522bd4:
    // 0x522bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x522bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522bd8:
    // 0x522bd8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x522bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_522bdc:
    // 0x522bdc: 0x24635fa8  addiu       $v1, $v1, 0x5FA8
    ctx->pc = 0x522bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24488));
label_522be0:
    // 0x522be0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x522be0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_522be4:
    // 0x522be4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x522be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_522be8:
    // 0x522be8: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x522be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_522bec:
    // 0x522bec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x522becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522bf0:
    // 0x522bf0: 0xac44ab50  sw          $a0, -0x54B0($v0)
    ctx->pc = 0x522bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945616), GPR_U32(ctx, 4));
label_522bf4:
    // 0x522bf4: 0x24635fc0  addiu       $v1, $v1, 0x5FC0
    ctx->pc = 0x522bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24512));
label_522bf8:
    // 0x522bf8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_522bfc:
    // 0x522bfc: 0x24425ff8  addiu       $v0, $v0, 0x5FF8
    ctx->pc = 0x522bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24568));
label_522c00:
    // 0x522c00: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x522c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_522c04:
    // 0x522c04: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x522c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_522c08:
    // 0x522c08: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x522c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_522c0c:
    // 0x522c0c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x522c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_522c10:
    // 0x522c10: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x522c10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_522c14:
    // 0x522c14: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x522c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_522c18:
    // 0x522c18: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x522c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_522c1c:
    // 0x522c1c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x522c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_522c20:
    // 0x522c20: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x522c20u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_522c24:
    // 0x522c24: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x522c24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_522c28:
    // 0x522c28: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x522c28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_522c2c:
    // 0x522c2c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x522c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_522c30:
    // 0x522c30: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x522c30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_522c34:
    // 0x522c34: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_522c38:
    if (ctx->pc == 0x522C38u) {
        ctx->pc = 0x522C3Cu;
        goto label_522c3c;
    }
    ctx->pc = 0x522C34u;
    {
        const bool branch_taken_0x522c34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x522c34) {
            ctx->pc = 0x522CC8u;
            goto label_522cc8;
        }
    }
    ctx->pc = 0x522C3Cu;
label_522c3c:
    // 0x522c3c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x522c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_522c40:
    // 0x522c40: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x522c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_522c44:
    // 0x522c44: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x522c44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_522c48:
    // 0x522c48: 0xc040138  jal         func_1004E0
label_522c4c:
    if (ctx->pc == 0x522C4Cu) {
        ctx->pc = 0x522C4Cu;
            // 0x522c4c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x522C50u;
        goto label_522c50;
    }
    ctx->pc = 0x522C48u;
    SET_GPR_U32(ctx, 31, 0x522C50u);
    ctx->pc = 0x522C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522C48u;
            // 0x522c4c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C50u; }
        if (ctx->pc != 0x522C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C50u; }
        if (ctx->pc != 0x522C50u) { return; }
    }
    ctx->pc = 0x522C50u;
label_522c50:
    // 0x522c50: 0x3c050052  lui         $a1, 0x52
    ctx->pc = 0x522c50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)82 << 16));
label_522c54:
    // 0x522c54: 0x3c060052  lui         $a2, 0x52
    ctx->pc = 0x522c54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)82 << 16));
label_522c58:
    // 0x522c58: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x522c58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_522c5c:
    // 0x522c5c: 0x24a52cf0  addiu       $a1, $a1, 0x2CF0
    ctx->pc = 0x522c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11504));
label_522c60:
    // 0x522c60: 0x24c62560  addiu       $a2, $a2, 0x2560
    ctx->pc = 0x522c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9568));
label_522c64:
    // 0x522c64: 0x24070180  addiu       $a3, $zero, 0x180
    ctx->pc = 0x522c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_522c68:
    // 0x522c68: 0xc040840  jal         func_102100
label_522c6c:
    if (ctx->pc == 0x522C6Cu) {
        ctx->pc = 0x522C6Cu;
            // 0x522c6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522C70u;
        goto label_522c70;
    }
    ctx->pc = 0x522C68u;
    SET_GPR_U32(ctx, 31, 0x522C70u);
    ctx->pc = 0x522C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522C68u;
            // 0x522c6c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C70u; }
        if (ctx->pc != 0x522C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C70u; }
        if (ctx->pc != 0x522C70u) { return; }
    }
    ctx->pc = 0x522C70u;
label_522c70:
    // 0x522c70: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x522c70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_522c74:
    // 0x522c74: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x522c74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_522c78:
    // 0x522c78: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x522c78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_522c7c:
    // 0x522c7c: 0xc0788fc  jal         func_1E23F0
label_522c80:
    if (ctx->pc == 0x522C80u) {
        ctx->pc = 0x522C80u;
            // 0x522c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522C84u;
        goto label_522c84;
    }
    ctx->pc = 0x522C7Cu;
    SET_GPR_U32(ctx, 31, 0x522C84u);
    ctx->pc = 0x522C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522C7Cu;
            // 0x522c80: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C84u; }
        if (ctx->pc != 0x522C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C84u; }
        if (ctx->pc != 0x522C84u) { return; }
    }
    ctx->pc = 0x522C84u;
label_522c84:
    // 0x522c84: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x522c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_522c88:
    // 0x522c88: 0xc0788fc  jal         func_1E23F0
label_522c8c:
    if (ctx->pc == 0x522C8Cu) {
        ctx->pc = 0x522C8Cu;
            // 0x522c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522C90u;
        goto label_522c90;
    }
    ctx->pc = 0x522C88u;
    SET_GPR_U32(ctx, 31, 0x522C90u);
    ctx->pc = 0x522C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522C88u;
            // 0x522c8c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C90u; }
        if (ctx->pc != 0x522C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522C90u; }
        if (ctx->pc != 0x522C90u) { return; }
    }
    ctx->pc = 0x522C90u;
label_522c90:
    // 0x522c90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x522c90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522c94:
    // 0x522c94: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x522c94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_522c98:
    // 0x522c98: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x522c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_522c9c:
    // 0x522c9c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x522c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_522ca0:
    // 0x522ca0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x522ca0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_522ca4:
    // 0x522ca4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x522ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_522ca8:
    // 0x522ca8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x522ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_522cac:
    // 0x522cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x522cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_522cb0:
    // 0x522cb0: 0xc0a997c  jal         func_2A65F0
label_522cb4:
    if (ctx->pc == 0x522CB4u) {
        ctx->pc = 0x522CB4u;
            // 0x522cb4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x522CB8u;
        goto label_522cb8;
    }
    ctx->pc = 0x522CB0u;
    SET_GPR_U32(ctx, 31, 0x522CB8u);
    ctx->pc = 0x522CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522CB0u;
            // 0x522cb4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522CB8u; }
        if (ctx->pc != 0x522CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522CB8u; }
        if (ctx->pc != 0x522CB8u) { return; }
    }
    ctx->pc = 0x522CB8u;
label_522cb8:
    // 0x522cb8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x522cb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_522cbc:
    // 0x522cbc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x522cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_522cc0:
    // 0x522cc0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_522cc4:
    if (ctx->pc == 0x522CC4u) {
        ctx->pc = 0x522CC4u;
            // 0x522cc4: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->pc = 0x522CC8u;
        goto label_522cc8;
    }
    ctx->pc = 0x522CC0u;
    {
        const bool branch_taken_0x522cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x522CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522CC0u;
            // 0x522cc4: 0x26520180  addiu       $s2, $s2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x522cc0) {
            ctx->pc = 0x522C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_522c94;
        }
    }
    ctx->pc = 0x522CC8u;
label_522cc8:
    // 0x522cc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x522cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_522ccc:
    // 0x522ccc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x522cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_522cd0:
    // 0x522cd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x522cd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_522cd4:
    // 0x522cd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x522cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_522cd8:
    // 0x522cd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522cd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522cdc:
    // 0x522cdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522cdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522ce0:
    // 0x522ce0: 0x3e00008  jr          $ra
label_522ce4:
    if (ctx->pc == 0x522CE4u) {
        ctx->pc = 0x522CE4u;
            // 0x522ce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x522CE8u;
        goto label_522ce8;
    }
    ctx->pc = 0x522CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522CE0u;
            // 0x522ce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522CE8u;
label_522ce8:
    // 0x522ce8: 0x0  nop
    ctx->pc = 0x522ce8u;
    // NOP
label_522cec:
    // 0x522cec: 0x0  nop
    ctx->pc = 0x522cecu;
    // NOP
label_522cf0:
    // 0x522cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x522cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_522cf4:
    // 0x522cf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x522cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_522cf8:
    // 0x522cf8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522cfc:
    // 0x522cfc: 0xc12e6bc  jal         func_4B9AF0
label_522d00:
    if (ctx->pc == 0x522D00u) {
        ctx->pc = 0x522D00u;
            // 0x522d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522D04u;
        goto label_522d04;
    }
    ctx->pc = 0x522CFCu;
    SET_GPR_U32(ctx, 31, 0x522D04u);
    ctx->pc = 0x522D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522CFCu;
            // 0x522d00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9AF0u;
    if (runtime->hasFunction(0x4B9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x4B9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522D04u; }
        if (ctx->pc != 0x522D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9AF0_0x4b9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522D04u; }
        if (ctx->pc != 0x522D04u) { return; }
    }
    ctx->pc = 0x522D04u;
label_522d04:
    // 0x522d04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x522d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522d08:
    // 0x522d08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x522d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_522d0c:
    // 0x522d0c: 0x24632510  addiu       $v1, $v1, 0x2510
    ctx->pc = 0x522d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9488));
label_522d10:
    // 0x522d10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x522d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_522d14:
    // 0x522d14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x522d14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_522d18:
    // 0x522d18: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x522d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
label_522d1c:
    // 0x522d1c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x522d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_522d20:
    // 0x522d20: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x522d20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_522d24:
    // 0x522d24: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x522d24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
label_522d28:
    // 0x522d28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x522d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_522d2c:
    // 0x522d2c: 0xae000164  sw          $zero, 0x164($s0)
    ctx->pc = 0x522d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 0));
label_522d30:
    // 0x522d30: 0x24846060  addiu       $a0, $a0, 0x6060
    ctx->pc = 0x522d30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24672));
label_522d34:
    // 0x522d34: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x522d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_522d38:
    // 0x522d38: 0x246360a0  addiu       $v1, $v1, 0x60A0
    ctx->pc = 0x522d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24736));
label_522d3c:
    // 0x522d3c: 0xa2050170  sb          $a1, 0x170($s0)
    ctx->pc = 0x522d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 5));
label_522d40:
    // 0x522d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x522d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_522d44:
    // 0x522d44: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x522d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_522d48:
    // 0x522d48: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x522d48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_522d4c:
    // 0x522d4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x522d4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_522d50:
    // 0x522d50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522d50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522d54:
    // 0x522d54: 0x3e00008  jr          $ra
label_522d58:
    if (ctx->pc == 0x522D58u) {
        ctx->pc = 0x522D58u;
            // 0x522d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x522D5Cu;
        goto label_522d5c;
    }
    ctx->pc = 0x522D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522D54u;
            // 0x522d58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522D5Cu;
label_522d5c:
    // 0x522d5c: 0x0  nop
    ctx->pc = 0x522d5cu;
    // NOP
label_522d60:
    // 0x522d60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_522d64:
    // 0x522d64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_522d68:
    // 0x522d68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_522d6c:
    // 0x522d6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522d70:
    // 0x522d70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x522d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_522d74:
    // 0x522d74: 0xc0e34b0  jal         func_38D2C0
label_522d78:
    if (ctx->pc == 0x522D78u) {
        ctx->pc = 0x522D78u;
            // 0x522d78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522D7Cu;
        goto label_522d7c;
    }
    ctx->pc = 0x522D74u;
    SET_GPR_U32(ctx, 31, 0x522D7Cu);
    ctx->pc = 0x522D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522D74u;
            // 0x522d78: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522D7Cu; }
        if (ctx->pc != 0x522D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522D7Cu; }
        if (ctx->pc != 0x522D7Cu) { return; }
    }
    ctx->pc = 0x522D7Cu;
label_522d7c:
    // 0x522d7c: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x522d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_522d80:
    // 0x522d80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x522d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_522d84:
    // 0x522d84: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
label_522d88:
    if (ctx->pc == 0x522D88u) {
        ctx->pc = 0x522D88u;
            // 0x522d88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x522D8Cu;
        goto label_522d8c;
    }
    ctx->pc = 0x522D84u;
    {
        const bool branch_taken_0x522d84 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x522d84) {
            ctx->pc = 0x522D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522D84u;
            // 0x522d88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522DB4u;
            goto label_522db4;
        }
    }
    ctx->pc = 0x522D8Cu;
label_522d8c:
    // 0x522d8c: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x522d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_522d90:
    // 0x522d90: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x522d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_522d94:
    // 0x522d94: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x522d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_522d98:
    // 0x522d98: 0x8c660020  lw          $a2, 0x20($v1)
    ctx->pc = 0x522d98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_522d9c:
    // 0x522d9c: 0xc13b750  jal         func_4EDD40
label_522da0:
    if (ctx->pc == 0x522DA0u) {
        ctx->pc = 0x522DA0u;
            // 0x522da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522DA4u;
        goto label_522da4;
    }
    ctx->pc = 0x522D9Cu;
    SET_GPR_U32(ctx, 31, 0x522DA4u);
    ctx->pc = 0x522DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522D9Cu;
            // 0x522da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4EDD40u;
    if (runtime->hasFunction(0x4EDD40u)) {
        auto targetFn = runtime->lookupFunction(0x4EDD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DA4u; }
        if (ctx->pc != 0x522DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004EDD40_0x4edd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DA4u; }
        if (ctx->pc != 0x522DA4u) { return; }
    }
    ctx->pc = 0x522DA4u;
label_522da4:
    // 0x522da4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x522da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_522da8:
    // 0x522da8: 0xc073234  jal         func_1CC8D0
label_522dac:
    if (ctx->pc == 0x522DACu) {
        ctx->pc = 0x522DACu;
            // 0x522dac: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x522DB0u;
        goto label_522db0;
    }
    ctx->pc = 0x522DA8u;
    SET_GPR_U32(ctx, 31, 0x522DB0u);
    ctx->pc = 0x522DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522DA8u;
            // 0x522dac: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DB0u; }
        if (ctx->pc != 0x522DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DB0u; }
        if (ctx->pc != 0x522DB0u) { return; }
    }
    ctx->pc = 0x522DB0u;
label_522db0:
    // 0x522db0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x522db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_522db4:
    // 0x522db4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522db4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522db8:
    // 0x522db8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522db8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522dbc:
    // 0x522dbc: 0x3e00008  jr          $ra
label_522dc0:
    if (ctx->pc == 0x522DC0u) {
        ctx->pc = 0x522DC0u;
            // 0x522dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x522DC4u;
        goto label_522dc4;
    }
    ctx->pc = 0x522DBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522DBCu;
            // 0x522dc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522DC4u;
label_522dc4:
    // 0x522dc4: 0x0  nop
    ctx->pc = 0x522dc4u;
    // NOP
label_522dc8:
    // 0x522dc8: 0x0  nop
    ctx->pc = 0x522dc8u;
    // NOP
label_522dcc:
    // 0x522dcc: 0x0  nop
    ctx->pc = 0x522dccu;
    // NOP
label_522dd0:
    // 0x522dd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x522dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_522dd4:
    // 0x522dd4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x522dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
label_522dd8:
    // 0x522dd8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x522dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_522ddc:
    // 0x522ddc: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x522ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_522de0:
    // 0x522de0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x522de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_522de4:
    // 0x522de4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x522de4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_522de8:
    // 0x522de8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522dec:
    // 0x522dec: 0x8c42ab50  lw          $v0, -0x54B0($v0)
    ctx->pc = 0x522decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945616)));
label_522df0:
    // 0x522df0: 0x8c450060  lw          $a1, 0x60($v0)
    ctx->pc = 0x522df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_522df4:
    // 0x522df4: 0xc12e608  jal         func_4B9820
label_522df8:
    if (ctx->pc == 0x522DF8u) {
        ctx->pc = 0x522DF8u;
            // 0x522df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522DFCu;
        goto label_522dfc;
    }
    ctx->pc = 0x522DF4u;
    SET_GPR_U32(ctx, 31, 0x522DFCu);
    ctx->pc = 0x522DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522DF4u;
            // 0x522df8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9820u;
    if (runtime->hasFunction(0x4B9820u)) {
        auto targetFn = runtime->lookupFunction(0x4B9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DFCu; }
        if (ctx->pc != 0x522DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B9820_0x4b9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522DFCu; }
        if (ctx->pc != 0x522DFCu) { return; }
    }
    ctx->pc = 0x522DFCu;
label_522dfc:
    // 0x522dfc: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x522dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_522e00:
    // 0x522e00: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x522e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_522e04:
    // 0x522e04: 0x34430101  ori         $v1, $v0, 0x101
    ctx->pc = 0x522e04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
label_522e08:
    // 0x522e08: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x522e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522e0c:
    // 0x522e0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x522e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_522e10:
    // 0x522e10: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x522e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_522e14:
    // 0x522e14: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x522e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_522e18:
    // 0x522e18: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x522e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_522e1c:
    // 0x522e1c: 0xc08bff0  jal         func_22FFC0
label_522e20:
    if (ctx->pc == 0x522E20u) {
        ctx->pc = 0x522E20u;
            // 0x522e20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522E24u;
        goto label_522e24;
    }
    ctx->pc = 0x522E1Cu;
    SET_GPR_U32(ctx, 31, 0x522E24u);
    ctx->pc = 0x522E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522E1Cu;
            // 0x522e20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522E24u; }
        if (ctx->pc != 0x522E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522E24u; }
        if (ctx->pc != 0x522E24u) { return; }
    }
    ctx->pc = 0x522E24u;
label_522e24:
    // 0x522e24: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x522e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_522e28:
    // 0x522e28: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x522e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_522e2c:
    // 0x522e2c: 0x3445cccd  ori         $a1, $v0, 0xCCCD
    ctx->pc = 0x522e2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_522e30:
    // 0x522e30: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x522e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_522e34:
    // 0x522e34: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x522e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_522e38:
    // 0x522e38: 0xac65015c  sw          $a1, 0x15C($v1)
    ctx->pc = 0x522e38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 348), GPR_U32(ctx, 5));
label_522e3c:
    // 0x522e3c: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x522e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_522e40:
    // 0x522e40: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x522e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_522e44:
    // 0x522e44: 0xae0200b0  sw          $v0, 0xB0($s0)
    ctx->pc = 0x522e44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 2));
label_522e48:
    // 0x522e48: 0xc040180  jal         func_100600
label_522e4c:
    if (ctx->pc == 0x522E4Cu) {
        ctx->pc = 0x522E4Cu;
            // 0x522e4c: 0xa20000d1  sb          $zero, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x522E50u;
        goto label_522e50;
    }
    ctx->pc = 0x522E48u;
    SET_GPR_U32(ctx, 31, 0x522E50u);
    ctx->pc = 0x522E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522E48u;
            // 0x522e4c: 0xa20000d1  sb          $zero, 0xD1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 209), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522E50u; }
        if (ctx->pc != 0x522E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522E50u; }
        if (ctx->pc != 0x522E50u) { return; }
    }
    ctx->pc = 0x522E50u;
label_522e50:
    // 0x522e50: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_522e54:
    if (ctx->pc == 0x522E54u) {
        ctx->pc = 0x522E54u;
            // 0x522e54: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x522E58u;
        goto label_522e58;
    }
    ctx->pc = 0x522E50u;
    {
        const bool branch_taken_0x522e50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x522e50) {
            ctx->pc = 0x522E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522E50u;
            // 0x522e54: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522EA0u;
            goto label_522ea0;
        }
    }
    ctx->pc = 0x522E58u;
label_522e58:
    // 0x522e58: 0x8e060050  lw          $a2, 0x50($s0)
    ctx->pc = 0x522e58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_522e5c:
    // 0x522e5c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x522e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_522e60:
    // 0x522e60: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x522e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_522e64:
    // 0x522e64: 0x3c030067  lui         $v1, 0x67
    ctx->pc = 0x522e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)103 << 16));
label_522e68:
    // 0x522e68: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x522e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_522e6c:
    // 0x522e6c: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x522e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
label_522e70:
    // 0x522e70: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x522e70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_522e74:
    // 0x522e74: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x522e74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_522e78:
    // 0x522e78: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x522e78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_522e7c:
    // 0x522e7c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x522e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_522e80:
    // 0x522e80: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x522e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_522e84:
    // 0x522e84: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x522e84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_522e88:
    // 0x522e88: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x522e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_522e8c:
    // 0x522e8c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x522e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_522e90:
    // 0x522e90: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x522e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_522e94:
    // 0x522e94: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x522e94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_522e98:
    // 0x522e98: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x522e98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_522e9c:
    // 0x522e9c: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x522e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_522ea0:
    // 0x522ea0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x522ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_522ea4:
    // 0x522ea4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x522ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_522ea8:
    // 0x522ea8: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x522ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_522eac:
    // 0x522eac: 0x3c054140  lui         $a1, 0x4140
    ctx->pc = 0x522eacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16704 << 16));
label_522eb0:
    // 0x522eb0: 0x3c094396  lui         $t1, 0x4396
    ctx->pc = 0x522eb0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17302 << 16));
label_522eb4:
    // 0x522eb4: 0x3c084334  lui         $t0, 0x4334
    ctx->pc = 0x522eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17204 << 16));
label_522eb8:
    // 0x522eb8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x522eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_522ebc:
    // 0x522ebc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x522ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_522ec0:
    // 0x522ec0: 0x3c064270  lui         $a2, 0x4270
    ctx->pc = 0x522ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17008 << 16));
label_522ec4:
    // 0x522ec4: 0x34430004  ori         $v1, $v0, 0x4
    ctx->pc = 0x522ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_522ec8:
    // 0x522ec8: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x522ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_522ecc:
    // 0x522ecc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x522eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_522ed0:
    // 0x522ed0: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x522ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_522ed4:
    // 0x522ed4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x522ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_522ed8:
    // 0x522ed8: 0xae050070  sw          $a1, 0x70($s0)
    ctx->pc = 0x522ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 5));
label_522edc:
    // 0x522edc: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x522edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_522ee0:
    // 0x522ee0: 0xae090078  sw          $t1, 0x78($s0)
    ctx->pc = 0x522ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 9));
label_522ee4:
    // 0x522ee4: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x522ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
label_522ee8:
    // 0x522ee8: 0xae080080  sw          $t0, 0x80($s0)
    ctx->pc = 0x522ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 8));
label_522eec:
    // 0x522eec: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x522eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_522ef0:
    // 0x522ef0: 0xa20700cc  sb          $a3, 0xCC($s0)
    ctx->pc = 0x522ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 7));
label_522ef4:
    // 0x522ef4: 0xae0600c4  sw          $a2, 0xC4($s0)
    ctx->pc = 0x522ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 6));
label_522ef8:
    // 0x522ef8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x522ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_522efc:
    // 0x522efc: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x522efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_522f00:
    // 0x522f00: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x522f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_522f04:
    // 0x522f04: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x522f04u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_522f08:
    // 0x522f08: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x522f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_522f0c:
    // 0x522f0c: 0xc04c720  jal         func_131C80
label_522f10:
    if (ctx->pc == 0x522F10u) {
        ctx->pc = 0x522F10u;
            // 0x522f10: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x522F14u;
        goto label_522f14;
    }
    ctx->pc = 0x522F0Cu;
    SET_GPR_U32(ctx, 31, 0x522F14u);
    ctx->pc = 0x522F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522F0Cu;
            // 0x522f10: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F14u; }
        if (ctx->pc != 0x522F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F14u; }
        if (ctx->pc != 0x522F14u) { return; }
    }
    ctx->pc = 0x522F14u;
label_522f14:
    // 0x522f14: 0xc040180  jal         func_100600
label_522f18:
    if (ctx->pc == 0x522F18u) {
        ctx->pc = 0x522F18u;
            // 0x522f18: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x522F1Cu;
        goto label_522f1c;
    }
    ctx->pc = 0x522F14u;
    SET_GPR_U32(ctx, 31, 0x522F1Cu);
    ctx->pc = 0x522F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522F14u;
            // 0x522f18: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F1Cu; }
        if (ctx->pc != 0x522F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F1Cu; }
        if (ctx->pc != 0x522F1Cu) { return; }
    }
    ctx->pc = 0x522F1Cu;
label_522f1c:
    // 0x522f1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x522f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_522f20:
    // 0x522f20: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_522f24:
    if (ctx->pc == 0x522F24u) {
        ctx->pc = 0x522F24u;
            // 0x522f24: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x522F28u;
        goto label_522f28;
    }
    ctx->pc = 0x522F20u;
    {
        const bool branch_taken_0x522f20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x522f20) {
            ctx->pc = 0x522F24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x522F20u;
            // 0x522f24: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x522F60u;
            goto label_522f60;
        }
    }
    ctx->pc = 0x522F28u;
label_522f28:
    // 0x522f28: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x522f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_522f2c:
    // 0x522f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x522f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_522f30:
    // 0x522f30: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x522f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_522f34:
    // 0x522f34: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x522f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_522f38:
    // 0x522f38: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x522f38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_522f3c:
    // 0x522f3c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x522f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_522f40:
    // 0x522f40: 0xc040138  jal         func_1004E0
label_522f44:
    if (ctx->pc == 0x522F44u) {
        ctx->pc = 0x522F44u;
            // 0x522f44: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x522F48u;
        goto label_522f48;
    }
    ctx->pc = 0x522F40u;
    SET_GPR_U32(ctx, 31, 0x522F48u);
    ctx->pc = 0x522F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522F40u;
            // 0x522f44: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F48u; }
        if (ctx->pc != 0x522F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F48u; }
        if (ctx->pc != 0x522F48u) { return; }
    }
    ctx->pc = 0x522F48u;
label_522f48:
    // 0x522f48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x522f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_522f4c:
    // 0x522f4c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x522f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_522f50:
    // 0x522f50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x522f50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522f54:
    // 0x522f54: 0xc04a576  jal         func_1295D8
label_522f58:
    if (ctx->pc == 0x522F58u) {
        ctx->pc = 0x522F58u;
            // 0x522f58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x522F5Cu;
        goto label_522f5c;
    }
    ctx->pc = 0x522F54u;
    SET_GPR_U32(ctx, 31, 0x522F5Cu);
    ctx->pc = 0x522F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522F54u;
            // 0x522f58: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F5Cu; }
        if (ctx->pc != 0x522F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F5Cu; }
        if (ctx->pc != 0x522F5Cu) { return; }
    }
    ctx->pc = 0x522F5Cu;
label_522f5c:
    // 0x522f5c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x522f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_522f60:
    // 0x522f60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x522f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_522f64:
    // 0x522f64: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x522f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_522f68:
    // 0x522f68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x522f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_522f6c:
    // 0x522f6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x522f6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522f70:
    // 0x522f70: 0x240610ae  addiu       $a2, $zero, 0x10AE
    ctx->pc = 0x522f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4270));
label_522f74:
    // 0x522f74: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x522f74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_522f78:
    // 0x522f78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x522f78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_522f7c:
    // 0x522f7c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x522f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_522f80:
    // 0x522f80: 0xc122cd8  jal         func_48B360
label_522f84:
    if (ctx->pc == 0x522F84u) {
        ctx->pc = 0x522F84u;
            // 0x522f84: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
        ctx->pc = 0x522F88u;
        goto label_522f88;
    }
    ctx->pc = 0x522F80u;
    SET_GPR_U32(ctx, 31, 0x522F88u);
    ctx->pc = 0x522F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522F80u;
            // 0x522f84: 0xae110164  sw          $s1, 0x164($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 356), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F88u; }
        if (ctx->pc != 0x522F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522F88u; }
        if (ctx->pc != 0x522F88u) { return; }
    }
    ctx->pc = 0x522F88u;
label_522f88:
    // 0x522f88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x522f88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_522f8c:
    // 0x522f8c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x522f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_522f90:
    // 0x522f90: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x522f90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_522f94:
    // 0x522f94: 0x8e040164  lw          $a0, 0x164($s0)
    ctx->pc = 0x522f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 356)));
label_522f98:
    // 0x522f98: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x522f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_522f9c:
    // 0x522f9c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x522f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_522fa0:
    // 0x522fa0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x522fa0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_522fa4:
    // 0x522fa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x522fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_522fa8:
    // 0x522fa8: 0x344610ae  ori         $a2, $v0, 0x10AE
    ctx->pc = 0x522fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4270);
label_522fac:
    // 0x522fac: 0xc122cd8  jal         func_48B360
label_522fb0:
    if (ctx->pc == 0x522FB0u) {
        ctx->pc = 0x522FB0u;
            // 0x522fb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522FB4u;
        goto label_522fb4;
    }
    ctx->pc = 0x522FACu;
    SET_GPR_U32(ctx, 31, 0x522FB4u);
    ctx->pc = 0x522FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522FACu;
            // 0x522fb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522FB4u; }
        if (ctx->pc != 0x522FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522FB4u; }
        if (ctx->pc != 0x522FB4u) { return; }
    }
    ctx->pc = 0x522FB4u;
label_522fb4:
    // 0x522fb4: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x522fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_522fb8:
    // 0x522fb8: 0x2403efff  addiu       $v1, $zero, -0x1001
    ctx->pc = 0x522fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
label_522fbc:
    // 0x522fbc: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x522fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_522fc0:
    // 0x522fc0: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x522fc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
label_522fc4:
    // 0x522fc4: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x522fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_522fc8:
    // 0x522fc8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x522fc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_522fcc:
    // 0x522fcc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x522fccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_522fd0:
    // 0x522fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x522fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_522fd4:
    // 0x522fd4: 0x3e00008  jr          $ra
label_522fd8:
    if (ctx->pc == 0x522FD8u) {
        ctx->pc = 0x522FD8u;
            // 0x522fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x522FDCu;
        goto label_522fdc;
    }
    ctx->pc = 0x522FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x522FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x522FD4u;
            // 0x522fd8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x522FDCu;
label_522fdc:
    // 0x522fdc: 0x0  nop
    ctx->pc = 0x522fdcu;
    // NOP
label_522fe0:
    // 0x522fe0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x522fe0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_522fe4:
    // 0x522fe4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x522fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_522fe8:
    // 0x522fe8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x522fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_522fec:
    // 0x522fec: 0xc135370  jal         func_4D4DC0
label_522ff0:
    if (ctx->pc == 0x522FF0u) {
        ctx->pc = 0x522FF0u;
            // 0x522ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x522FF4u;
        goto label_522ff4;
    }
    ctx->pc = 0x522FECu;
    SET_GPR_U32(ctx, 31, 0x522FF4u);
    ctx->pc = 0x522FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x522FECu;
            // 0x522ff0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4D4DC0u;
    if (runtime->hasFunction(0x4D4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x4D4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522FF4u; }
        if (ctx->pc != 0x522FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004D4DC0_0x4d4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x522FF4u; }
        if (ctx->pc != 0x522FF4u) { return; }
    }
    ctx->pc = 0x522FF4u;
label_522ff4:
    // 0x522ff4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x522ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_522ff8:
    // 0x522ff8: 0x3c034140  lui         $v1, 0x4140
    ctx->pc = 0x522ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16704 << 16));
label_522ffc:
    // 0x522ffc: 0xae04008c  sw          $a0, 0x8C($s0)
    ctx->pc = 0x522ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 4));
label_523000:
    // 0x523000: 0xae030070  sw          $v1, 0x70($s0)
    ctx->pc = 0x523000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 3));
label_523004:
    // 0x523004: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x523004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
label_523008:
    // 0x523008: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x523008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_52300c:
    // 0x52300c: 0xae040078  sw          $a0, 0x78($s0)
    ctx->pc = 0x52300cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 4));
label_523010:
    // 0x523010: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x523010u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
label_523014:
    // 0x523014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_523018:
    // 0x523018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_52301c:
    // 0x52301c: 0x3e00008  jr          $ra
label_523020:
    if (ctx->pc == 0x523020u) {
        ctx->pc = 0x523020u;
            // 0x523020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x523024u;
        goto label_523024;
    }
    ctx->pc = 0x52301Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x52301Cu;
            // 0x523020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523024u;
label_523024:
    // 0x523024: 0x0  nop
    ctx->pc = 0x523024u;
    // NOP
label_523028:
    // 0x523028: 0x0  nop
    ctx->pc = 0x523028u;
    // NOP
label_52302c:
    // 0x52302c: 0x0  nop
    ctx->pc = 0x52302cu;
    // NOP
label_523030:
    // 0x523030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x523030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_523034:
    // 0x523034: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x523034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_523038:
    // 0x523038: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x523038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_52303c:
    // 0x52303c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x52303cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_523040:
    // 0x523040: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x523040u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_523044:
    // 0x523044: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x523044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_523048:
    // 0x523048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x523048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_52304c:
    // 0x52304c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x52304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_523050:
    // 0x523050: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x523050u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_523054:
    // 0x523054: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_523058:
    if (ctx->pc == 0x523058u) {
        ctx->pc = 0x523058u;
            // 0x523058: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x52305Cu;
        goto label_52305c;
    }
    ctx->pc = 0x523054u;
    {
        const bool branch_taken_0x523054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x523058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523054u;
            // 0x523058: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523054) {
            ctx->pc = 0x523098u;
            goto label_523098;
        }
    }
    ctx->pc = 0x52305Cu;
label_52305c:
    // 0x52305c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x52305cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523060:
    // 0x523060: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x523060u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523064:
    // 0x523064: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x523064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523068:
    // 0x523068: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x523068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_52306c:
    // 0x52306c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x52306cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_523070:
    // 0x523070: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x523070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_523074:
    // 0x523074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x523074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_523078:
    // 0x523078: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x523078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_52307c:
    // 0x52307c: 0x320f809  jalr        $t9
label_523080:
    if (ctx->pc == 0x523080u) {
        ctx->pc = 0x523084u;
        goto label_523084;
    }
    ctx->pc = 0x52307Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x523084u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x523084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x523084u; }
            if (ctx->pc != 0x523084u) { return; }
        }
        }
    }
    ctx->pc = 0x523084u;
label_523084:
    // 0x523084: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x523084u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_523088:
    // 0x523088: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x523088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_52308c:
    // 0x52308c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x52308cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_523090:
    // 0x523090: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_523094:
    if (ctx->pc == 0x523094u) {
        ctx->pc = 0x523094u;
            // 0x523094: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x523098u;
        goto label_523098;
    }
    ctx->pc = 0x523090u;
    {
        const bool branch_taken_0x523090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x523094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523090u;
            // 0x523094: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523090) {
            ctx->pc = 0x523068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_523068;
        }
    }
    ctx->pc = 0x523098u;
label_523098:
    // 0x523098: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x523098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_52309c:
    // 0x52309c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x52309cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_5230a0:
    // 0x5230a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5230a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5230a4:
    // 0x5230a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5230a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5230a8:
    // 0x5230a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5230a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5230ac:
    // 0x5230ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5230acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5230b0:
    // 0x5230b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5230b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5230b4:
    // 0x5230b4: 0x3e00008  jr          $ra
label_5230b8:
    if (ctx->pc == 0x5230B8u) {
        ctx->pc = 0x5230B8u;
            // 0x5230b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x5230BCu;
        goto label_5230bc;
    }
    ctx->pc = 0x5230B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5230B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5230B4u;
            // 0x5230b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5230BCu;
label_5230bc:
    // 0x5230bc: 0x0  nop
    ctx->pc = 0x5230bcu;
    // NOP
label_5230c0:
    // 0x5230c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5230c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5230c4:
    // 0x5230c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x5230c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5230c8:
    // 0x5230c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5230c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5230cc:
    // 0x5230cc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x5230ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_5230d0:
    // 0x5230d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5230d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5230d4:
    // 0x5230d4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x5230d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_5230d8:
    // 0x5230d8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5230d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5230dc:
    // 0x5230dc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x5230dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_5230e0:
    // 0x5230e0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5230e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5230e4:
    // 0x5230e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5230e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5230e8:
    // 0x5230e8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x5230e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_5230ec:
    // 0x5230ec: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x5230ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5230f0:
    // 0x5230f0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x5230f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_5230f4:
    // 0x5230f4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x5230f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_5230f8:
    // 0x5230f8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x5230f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_5230fc:
    // 0x5230fc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x5230fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_523100:
    // 0x523100: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x523100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_523104:
    // 0x523104: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x523104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_523108:
    // 0x523108: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x523108u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_52310c:
    // 0x52310c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x52310cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_523110:
    // 0x523110: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x523110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_523114:
    // 0x523114: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x523114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_523118:
    // 0x523118: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x523118u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_52311c:
    // 0x52311c: 0xc0a997c  jal         func_2A65F0
label_523120:
    if (ctx->pc == 0x523120u) {
        ctx->pc = 0x523120u;
            // 0x523120: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x523124u;
        goto label_523124;
    }
    ctx->pc = 0x52311Cu;
    SET_GPR_U32(ctx, 31, 0x523124u);
    ctx->pc = 0x523120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x52311Cu;
            // 0x523120: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523124u; }
        if (ctx->pc != 0x523124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523124u; }
        if (ctx->pc != 0x523124u) { return; }
    }
    ctx->pc = 0x523124u;
label_523124:
    // 0x523124: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x523124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_523128:
    // 0x523128: 0xc0d879c  jal         func_361E70
label_52312c:
    if (ctx->pc == 0x52312Cu) {
        ctx->pc = 0x52312Cu;
            // 0x52312c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523130u;
        goto label_523130;
    }
    ctx->pc = 0x523128u;
    SET_GPR_U32(ctx, 31, 0x523130u);
    ctx->pc = 0x52312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523128u;
            // 0x52312c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523130u; }
        if (ctx->pc != 0x523130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523130u; }
        if (ctx->pc != 0x523130u) { return; }
    }
    ctx->pc = 0x523130u;
label_523130:
    // 0x523130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_523134:
    // 0x523134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523138:
    // 0x523138: 0x3e00008  jr          $ra
label_52313c:
    if (ctx->pc == 0x52313Cu) {
        ctx->pc = 0x52313Cu;
            // 0x52313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x523140u;
        goto label_523140;
    }
    ctx->pc = 0x523138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52313Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523138u;
            // 0x52313c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523140u;
label_523140:
    // 0x523140: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x523140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_523144:
    // 0x523144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x523144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_523148:
    // 0x523148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x523148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_52314c:
    // 0x52314c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x52314cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_523150:
    // 0x523150: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_523154:
    if (ctx->pc == 0x523154u) {
        ctx->pc = 0x523154u;
            // 0x523154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523158u;
        goto label_523158;
    }
    ctx->pc = 0x523150u;
    {
        const bool branch_taken_0x523150 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x523154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523150u;
            // 0x523154: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523150) {
            ctx->pc = 0x523270u;
            goto label_523270;
        }
    }
    ctx->pc = 0x523158u;
label_523158:
    // 0x523158: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x523158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_52315c:
    // 0x52315c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x52315cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_523160:
    // 0x523160: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x523160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_523164:
    // 0x523164: 0xc075128  jal         func_1D44A0
label_523168:
    if (ctx->pc == 0x523168u) {
        ctx->pc = 0x523168u;
            // 0x523168: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x52316Cu;
        goto label_52316c;
    }
    ctx->pc = 0x523164u;
    SET_GPR_U32(ctx, 31, 0x52316Cu);
    ctx->pc = 0x523168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523164u;
            // 0x523168: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52316Cu; }
        if (ctx->pc != 0x52316Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x52316Cu; }
        if (ctx->pc != 0x52316Cu) { return; }
    }
    ctx->pc = 0x52316Cu;
label_52316c:
    // 0x52316c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x52316cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_523170:
    // 0x523170: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_523174:
    // 0x523174: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x523174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_523178:
    // 0x523178: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x523178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_52317c:
    // 0x52317c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x52317cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_523180:
    // 0x523180: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_523184:
    if (ctx->pc == 0x523184u) {
        ctx->pc = 0x523184u;
            // 0x523184: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x523188u;
        goto label_523188;
    }
    ctx->pc = 0x523180u;
    {
        const bool branch_taken_0x523180 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x523184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523180u;
            // 0x523184: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x523180) {
            ctx->pc = 0x523190u;
            goto label_523190;
        }
    }
    ctx->pc = 0x523188u;
label_523188:
    // 0x523188: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_52318c:
    // 0x52318c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x52318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_523190:
    // 0x523190: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x523190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_523194:
    // 0x523194: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x523194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_523198:
    // 0x523198: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x523198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_52319c:
    // 0x52319c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x52319cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_5231a0:
    // 0x5231a0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5231a0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5231a4:
    // 0x5231a4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5231a8:
    if (ctx->pc == 0x5231A8u) {
        ctx->pc = 0x5231A8u;
            // 0x5231a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x5231ACu;
        goto label_5231ac;
    }
    ctx->pc = 0x5231A4u;
    {
        const bool branch_taken_0x5231a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5231a4) {
            ctx->pc = 0x5231A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5231A4u;
            // 0x5231a8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5231B8u;
            goto label_5231b8;
        }
    }
    ctx->pc = 0x5231ACu;
label_5231ac:
    // 0x5231ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5231acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5231b0:
    // 0x5231b0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x5231b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_5231b4:
    // 0x5231b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5231b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5231b8:
    // 0x5231b8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5231b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5231bc:
    // 0x5231bc: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x5231bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_5231c0:
    // 0x5231c0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x5231c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_5231c4:
    // 0x5231c4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x5231c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_5231c8:
    // 0x5231c8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_5231cc:
    if (ctx->pc == 0x5231CCu) {
        ctx->pc = 0x5231CCu;
            // 0x5231cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5231D0u;
        goto label_5231d0;
    }
    ctx->pc = 0x5231C8u;
    {
        const bool branch_taken_0x5231c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x5231c8) {
            ctx->pc = 0x5231CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5231C8u;
            // 0x5231cc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5231DCu;
            goto label_5231dc;
        }
    }
    ctx->pc = 0x5231D0u;
label_5231d0:
    // 0x5231d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5231d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5231d4:
    // 0x5231d4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x5231d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_5231d8:
    // 0x5231d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5231d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5231dc:
    // 0x5231dc: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x5231dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_5231e0:
    // 0x5231e0: 0x320f809  jalr        $t9
label_5231e4:
    if (ctx->pc == 0x5231E4u) {
        ctx->pc = 0x5231E4u;
            // 0x5231e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5231E8u;
        goto label_5231e8;
    }
    ctx->pc = 0x5231E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5231E8u);
        ctx->pc = 0x5231E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5231E0u;
            // 0x5231e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5231E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5231E8u; }
            if (ctx->pc != 0x5231E8u) { return; }
        }
        }
    }
    ctx->pc = 0x5231E8u;
label_5231e8:
    // 0x5231e8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x5231e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_5231ec:
    // 0x5231ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x5231ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_5231f0:
    // 0x5231f0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x5231f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_5231f4:
    // 0x5231f4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x5231f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_5231f8:
    // 0x5231f8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x5231f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5231fc:
    // 0x5231fc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x5231fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_523200:
    // 0x523200: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_523204:
    if (ctx->pc == 0x523204u) {
        ctx->pc = 0x523204u;
            // 0x523204: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x523208u;
        goto label_523208;
    }
    ctx->pc = 0x523200u;
    {
        const bool branch_taken_0x523200 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x523200) {
            ctx->pc = 0x523204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523200u;
            // 0x523204: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523214u;
            goto label_523214;
        }
    }
    ctx->pc = 0x523208u;
label_523208:
    // 0x523208: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523208u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52320c:
    // 0x52320c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x52320cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_523210:
    // 0x523210: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x523210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_523214:
    // 0x523214: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_523218:
    // 0x523218: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x523218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_52321c:
    // 0x52321c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x52321cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_523220:
    // 0x523220: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x523220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_523224:
    // 0x523224: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x523224u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_523228:
    // 0x523228: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_52322c:
    if (ctx->pc == 0x52322Cu) {
        ctx->pc = 0x523230u;
        goto label_523230;
    }
    ctx->pc = 0x523228u;
    {
        const bool branch_taken_0x523228 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x523228) {
            ctx->pc = 0x523238u;
            goto label_523238;
        }
    }
    ctx->pc = 0x523230u;
label_523230:
    // 0x523230: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_523234:
    // 0x523234: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x523234u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_523238:
    // 0x523238: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52323c:
    // 0x52323c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x52323cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_523240:
    // 0x523240: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x523240u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_523244:
    // 0x523244: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_523248:
    if (ctx->pc == 0x523248u) {
        ctx->pc = 0x52324Cu;
        goto label_52324c;
    }
    ctx->pc = 0x523244u;
    {
        const bool branch_taken_0x523244 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x523244) {
            ctx->pc = 0x523254u;
            goto label_523254;
        }
    }
    ctx->pc = 0x52324Cu;
label_52324c:
    // 0x52324c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x52324cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_523250:
    // 0x523250: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x523250u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_523254:
    // 0x523254: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_523258:
    // 0x523258: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x523258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_52325c:
    // 0x52325c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x52325cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_523260:
    // 0x523260: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_523264:
    if (ctx->pc == 0x523264u) {
        ctx->pc = 0x523264u;
            // 0x523264: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x523268u;
        goto label_523268;
    }
    ctx->pc = 0x523260u;
    {
        const bool branch_taken_0x523260 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x523260) {
            ctx->pc = 0x523264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523260u;
            // 0x523264: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523274u;
            goto label_523274;
        }
    }
    ctx->pc = 0x523268u;
label_523268:
    // 0x523268: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x523268u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_52326c:
    // 0x52326c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x52326cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_523270:
    // 0x523270: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x523270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_523274:
    // 0x523274: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x523274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523278:
    // 0x523278: 0x3e00008  jr          $ra
label_52327c:
    if (ctx->pc == 0x52327Cu) {
        ctx->pc = 0x52327Cu;
            // 0x52327c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x523280u;
        goto label_523280;
    }
    ctx->pc = 0x523278u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x52327Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523278u;
            // 0x52327c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523280u;
label_523280:
    // 0x523280: 0x8148958  j           func_522560
label_523284:
    if (ctx->pc == 0x523284u) {
        ctx->pc = 0x523284u;
            // 0x523284: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x523288u;
        goto label_523288;
    }
    ctx->pc = 0x523280u;
    ctx->pc = 0x523284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523280u;
            // 0x523284: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522560u;
    {
        auto targetFn = runtime->lookupFunction(0x522560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x523288u;
label_523288:
    // 0x523288: 0x0  nop
    ctx->pc = 0x523288u;
    // NOP
label_52328c:
    // 0x52328c: 0x0  nop
    ctx->pc = 0x52328cu;
    // NOP
label_523290:
    // 0x523290: 0x8148a68  j           func_5229A0
label_523294:
    if (ctx->pc == 0x523294u) {
        ctx->pc = 0x523294u;
            // 0x523294: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x523298u;
        goto label_523298;
    }
    ctx->pc = 0x523290u;
    ctx->pc = 0x523294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523290u;
            // 0x523294: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5229A0u;
    {
        auto targetFn = runtime->lookupFunction(0x5229A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x523298u;
label_523298:
    // 0x523298: 0x0  nop
    ctx->pc = 0x523298u;
    // NOP
label_52329c:
    // 0x52329c: 0x0  nop
    ctx->pc = 0x52329cu;
    // NOP
label_5232a0:
    // 0x5232a0: 0x8148900  j           func_522400
label_5232a4:
    if (ctx->pc == 0x5232A4u) {
        ctx->pc = 0x5232A4u;
            // 0x5232a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5232A8u;
        goto label_5232a8;
    }
    ctx->pc = 0x5232A0u;
    ctx->pc = 0x5232A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5232A0u;
            // 0x5232a4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522400u;
    if (runtime->hasFunction(0x522400u)) {
        auto targetFn = runtime->lookupFunction(0x522400u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00522400_0x522400(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x5232A8u;
label_5232a8:
    // 0x5232a8: 0x0  nop
    ctx->pc = 0x5232a8u;
    // NOP
label_5232ac:
    // 0x5232ac: 0x0  nop
    ctx->pc = 0x5232acu;
    // NOP
label_5232b0:
    // 0x5232b0: 0x81488dc  j           func_522370
label_5232b4:
    if (ctx->pc == 0x5232B4u) {
        ctx->pc = 0x5232B4u;
            // 0x5232b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x5232B8u;
        goto label_5232b8;
    }
    ctx->pc = 0x5232B0u;
    ctx->pc = 0x5232B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5232B0u;
            // 0x5232b4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522370u;
    {
        auto targetFn = runtime->lookupFunction(0x522370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x5232B8u;
label_5232b8:
    // 0x5232b8: 0x0  nop
    ctx->pc = 0x5232b8u;
    // NOP
label_5232bc:
    // 0x5232bc: 0x0  nop
    ctx->pc = 0x5232bcu;
    // NOP
label_5232c0:
    // 0x5232c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5232c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5232c4:
    // 0x5232c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x5232c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_5232c8:
    // 0x5232c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5232c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5232cc:
    // 0x5232cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5232ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5232d0:
    // 0x5232d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5232d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5232d4:
    // 0x5232d4: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_5232d8:
    if (ctx->pc == 0x5232D8u) {
        ctx->pc = 0x5232D8u;
            // 0x5232d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5232DCu;
        goto label_5232dc;
    }
    ctx->pc = 0x5232D4u;
    {
        const bool branch_taken_0x5232d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5232D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5232D4u;
            // 0x5232d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5232d4) {
            ctx->pc = 0x523330u;
            goto label_523330;
        }
    }
    ctx->pc = 0x5232DCu;
label_5232dc:
    // 0x5232dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5232dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5232e0:
    // 0x5232e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5232e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5232e4:
    // 0x5232e4: 0x24636100  addiu       $v1, $v1, 0x6100
    ctx->pc = 0x5232e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
label_5232e8:
    // 0x5232e8: 0x24426138  addiu       $v0, $v0, 0x6138
    ctx->pc = 0x5232e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24888));
label_5232ec:
    // 0x5232ec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5232ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5232f0:
    // 0x5232f0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_5232f4:
    if (ctx->pc == 0x5232F4u) {
        ctx->pc = 0x5232F4u;
            // 0x5232f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5232F8u;
        goto label_5232f8;
    }
    ctx->pc = 0x5232F0u;
    {
        const bool branch_taken_0x5232f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5232F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5232F0u;
            // 0x5232f4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5232f0) {
            ctx->pc = 0x523318u;
            goto label_523318;
        }
    }
    ctx->pc = 0x5232F8u;
label_5232f8:
    // 0x5232f8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5232f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5232fc:
    // 0x5232fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5232fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_523300:
    // 0x523300: 0x246361b0  addiu       $v1, $v1, 0x61B0
    ctx->pc = 0x523300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25008));
label_523304:
    // 0x523304: 0x244261e8  addiu       $v0, $v0, 0x61E8
    ctx->pc = 0x523304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25064));
label_523308:
    // 0x523308: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x523308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_52330c:
    // 0x52330c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x52330cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_523310:
    // 0x523310: 0xc148cd4  jal         func_523350
label_523314:
    if (ctx->pc == 0x523314u) {
        ctx->pc = 0x523314u;
            // 0x523314: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x523318u;
        goto label_523318;
    }
    ctx->pc = 0x523310u;
    SET_GPR_U32(ctx, 31, 0x523318u);
    ctx->pc = 0x523314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523310u;
            // 0x523314: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x523350u;
    if (runtime->hasFunction(0x523350u)) {
        auto targetFn = runtime->lookupFunction(0x523350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523318u; }
        if (ctx->pc != 0x523318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00523350_0x523350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523318u; }
        if (ctx->pc != 0x523318u) { return; }
    }
    ctx->pc = 0x523318u;
label_523318:
    // 0x523318: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x523318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_52331c:
    // 0x52331c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x52331cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_523320:
    // 0x523320: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_523324:
    if (ctx->pc == 0x523324u) {
        ctx->pc = 0x523324u;
            // 0x523324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523328u;
        goto label_523328;
    }
    ctx->pc = 0x523320u;
    {
        const bool branch_taken_0x523320 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x523320) {
            ctx->pc = 0x523324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x523320u;
            // 0x523324: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x523334u;
            goto label_523334;
        }
    }
    ctx->pc = 0x523328u;
label_523328:
    // 0x523328: 0xc0400a8  jal         func_1002A0
label_52332c:
    if (ctx->pc == 0x52332Cu) {
        ctx->pc = 0x52332Cu;
            // 0x52332c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x523330u;
        goto label_523330;
    }
    ctx->pc = 0x523328u;
    SET_GPR_U32(ctx, 31, 0x523330u);
    ctx->pc = 0x52332Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x523328u;
            // 0x52332c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523330u; }
        if (ctx->pc != 0x523330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x523330u; }
        if (ctx->pc != 0x523330u) { return; }
    }
    ctx->pc = 0x523330u;
label_523330:
    // 0x523330: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x523330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_523334:
    // 0x523334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x523334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_523338:
    // 0x523338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x523338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_52333c:
    // 0x52333c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x52333cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_523340:
    // 0x523340: 0x3e00008  jr          $ra
label_523344:
    if (ctx->pc == 0x523344u) {
        ctx->pc = 0x523344u;
            // 0x523344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x523348u;
        goto label_523348;
    }
    ctx->pc = 0x523340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x523344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x523340u;
            // 0x523344: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x523348u;
label_523348:
    // 0x523348: 0x0  nop
    ctx->pc = 0x523348u;
    // NOP
label_52334c:
    // 0x52334c: 0x0  nop
    ctx->pc = 0x52334cu;
    // NOP
}
