#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00536B10
// Address: 0x536b10 - 0x537540
void sub_00536B10_0x536b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00536B10_0x536b10");
#endif

    switch (ctx->pc) {
        case 0x536b10u: goto label_536b10;
        case 0x536b14u: goto label_536b14;
        case 0x536b18u: goto label_536b18;
        case 0x536b1cu: goto label_536b1c;
        case 0x536b20u: goto label_536b20;
        case 0x536b24u: goto label_536b24;
        case 0x536b28u: goto label_536b28;
        case 0x536b2cu: goto label_536b2c;
        case 0x536b30u: goto label_536b30;
        case 0x536b34u: goto label_536b34;
        case 0x536b38u: goto label_536b38;
        case 0x536b3cu: goto label_536b3c;
        case 0x536b40u: goto label_536b40;
        case 0x536b44u: goto label_536b44;
        case 0x536b48u: goto label_536b48;
        case 0x536b4cu: goto label_536b4c;
        case 0x536b50u: goto label_536b50;
        case 0x536b54u: goto label_536b54;
        case 0x536b58u: goto label_536b58;
        case 0x536b5cu: goto label_536b5c;
        case 0x536b60u: goto label_536b60;
        case 0x536b64u: goto label_536b64;
        case 0x536b68u: goto label_536b68;
        case 0x536b6cu: goto label_536b6c;
        case 0x536b70u: goto label_536b70;
        case 0x536b74u: goto label_536b74;
        case 0x536b78u: goto label_536b78;
        case 0x536b7cu: goto label_536b7c;
        case 0x536b80u: goto label_536b80;
        case 0x536b84u: goto label_536b84;
        case 0x536b88u: goto label_536b88;
        case 0x536b8cu: goto label_536b8c;
        case 0x536b90u: goto label_536b90;
        case 0x536b94u: goto label_536b94;
        case 0x536b98u: goto label_536b98;
        case 0x536b9cu: goto label_536b9c;
        case 0x536ba0u: goto label_536ba0;
        case 0x536ba4u: goto label_536ba4;
        case 0x536ba8u: goto label_536ba8;
        case 0x536bacu: goto label_536bac;
        case 0x536bb0u: goto label_536bb0;
        case 0x536bb4u: goto label_536bb4;
        case 0x536bb8u: goto label_536bb8;
        case 0x536bbcu: goto label_536bbc;
        case 0x536bc0u: goto label_536bc0;
        case 0x536bc4u: goto label_536bc4;
        case 0x536bc8u: goto label_536bc8;
        case 0x536bccu: goto label_536bcc;
        case 0x536bd0u: goto label_536bd0;
        case 0x536bd4u: goto label_536bd4;
        case 0x536bd8u: goto label_536bd8;
        case 0x536bdcu: goto label_536bdc;
        case 0x536be0u: goto label_536be0;
        case 0x536be4u: goto label_536be4;
        case 0x536be8u: goto label_536be8;
        case 0x536becu: goto label_536bec;
        case 0x536bf0u: goto label_536bf0;
        case 0x536bf4u: goto label_536bf4;
        case 0x536bf8u: goto label_536bf8;
        case 0x536bfcu: goto label_536bfc;
        case 0x536c00u: goto label_536c00;
        case 0x536c04u: goto label_536c04;
        case 0x536c08u: goto label_536c08;
        case 0x536c0cu: goto label_536c0c;
        case 0x536c10u: goto label_536c10;
        case 0x536c14u: goto label_536c14;
        case 0x536c18u: goto label_536c18;
        case 0x536c1cu: goto label_536c1c;
        case 0x536c20u: goto label_536c20;
        case 0x536c24u: goto label_536c24;
        case 0x536c28u: goto label_536c28;
        case 0x536c2cu: goto label_536c2c;
        case 0x536c30u: goto label_536c30;
        case 0x536c34u: goto label_536c34;
        case 0x536c38u: goto label_536c38;
        case 0x536c3cu: goto label_536c3c;
        case 0x536c40u: goto label_536c40;
        case 0x536c44u: goto label_536c44;
        case 0x536c48u: goto label_536c48;
        case 0x536c4cu: goto label_536c4c;
        case 0x536c50u: goto label_536c50;
        case 0x536c54u: goto label_536c54;
        case 0x536c58u: goto label_536c58;
        case 0x536c5cu: goto label_536c5c;
        case 0x536c60u: goto label_536c60;
        case 0x536c64u: goto label_536c64;
        case 0x536c68u: goto label_536c68;
        case 0x536c6cu: goto label_536c6c;
        case 0x536c70u: goto label_536c70;
        case 0x536c74u: goto label_536c74;
        case 0x536c78u: goto label_536c78;
        case 0x536c7cu: goto label_536c7c;
        case 0x536c80u: goto label_536c80;
        case 0x536c84u: goto label_536c84;
        case 0x536c88u: goto label_536c88;
        case 0x536c8cu: goto label_536c8c;
        case 0x536c90u: goto label_536c90;
        case 0x536c94u: goto label_536c94;
        case 0x536c98u: goto label_536c98;
        case 0x536c9cu: goto label_536c9c;
        case 0x536ca0u: goto label_536ca0;
        case 0x536ca4u: goto label_536ca4;
        case 0x536ca8u: goto label_536ca8;
        case 0x536cacu: goto label_536cac;
        case 0x536cb0u: goto label_536cb0;
        case 0x536cb4u: goto label_536cb4;
        case 0x536cb8u: goto label_536cb8;
        case 0x536cbcu: goto label_536cbc;
        case 0x536cc0u: goto label_536cc0;
        case 0x536cc4u: goto label_536cc4;
        case 0x536cc8u: goto label_536cc8;
        case 0x536cccu: goto label_536ccc;
        case 0x536cd0u: goto label_536cd0;
        case 0x536cd4u: goto label_536cd4;
        case 0x536cd8u: goto label_536cd8;
        case 0x536cdcu: goto label_536cdc;
        case 0x536ce0u: goto label_536ce0;
        case 0x536ce4u: goto label_536ce4;
        case 0x536ce8u: goto label_536ce8;
        case 0x536cecu: goto label_536cec;
        case 0x536cf0u: goto label_536cf0;
        case 0x536cf4u: goto label_536cf4;
        case 0x536cf8u: goto label_536cf8;
        case 0x536cfcu: goto label_536cfc;
        case 0x536d00u: goto label_536d00;
        case 0x536d04u: goto label_536d04;
        case 0x536d08u: goto label_536d08;
        case 0x536d0cu: goto label_536d0c;
        case 0x536d10u: goto label_536d10;
        case 0x536d14u: goto label_536d14;
        case 0x536d18u: goto label_536d18;
        case 0x536d1cu: goto label_536d1c;
        case 0x536d20u: goto label_536d20;
        case 0x536d24u: goto label_536d24;
        case 0x536d28u: goto label_536d28;
        case 0x536d2cu: goto label_536d2c;
        case 0x536d30u: goto label_536d30;
        case 0x536d34u: goto label_536d34;
        case 0x536d38u: goto label_536d38;
        case 0x536d3cu: goto label_536d3c;
        case 0x536d40u: goto label_536d40;
        case 0x536d44u: goto label_536d44;
        case 0x536d48u: goto label_536d48;
        case 0x536d4cu: goto label_536d4c;
        case 0x536d50u: goto label_536d50;
        case 0x536d54u: goto label_536d54;
        case 0x536d58u: goto label_536d58;
        case 0x536d5cu: goto label_536d5c;
        case 0x536d60u: goto label_536d60;
        case 0x536d64u: goto label_536d64;
        case 0x536d68u: goto label_536d68;
        case 0x536d6cu: goto label_536d6c;
        case 0x536d70u: goto label_536d70;
        case 0x536d74u: goto label_536d74;
        case 0x536d78u: goto label_536d78;
        case 0x536d7cu: goto label_536d7c;
        case 0x536d80u: goto label_536d80;
        case 0x536d84u: goto label_536d84;
        case 0x536d88u: goto label_536d88;
        case 0x536d8cu: goto label_536d8c;
        case 0x536d90u: goto label_536d90;
        case 0x536d94u: goto label_536d94;
        case 0x536d98u: goto label_536d98;
        case 0x536d9cu: goto label_536d9c;
        case 0x536da0u: goto label_536da0;
        case 0x536da4u: goto label_536da4;
        case 0x536da8u: goto label_536da8;
        case 0x536dacu: goto label_536dac;
        case 0x536db0u: goto label_536db0;
        case 0x536db4u: goto label_536db4;
        case 0x536db8u: goto label_536db8;
        case 0x536dbcu: goto label_536dbc;
        case 0x536dc0u: goto label_536dc0;
        case 0x536dc4u: goto label_536dc4;
        case 0x536dc8u: goto label_536dc8;
        case 0x536dccu: goto label_536dcc;
        case 0x536dd0u: goto label_536dd0;
        case 0x536dd4u: goto label_536dd4;
        case 0x536dd8u: goto label_536dd8;
        case 0x536ddcu: goto label_536ddc;
        case 0x536de0u: goto label_536de0;
        case 0x536de4u: goto label_536de4;
        case 0x536de8u: goto label_536de8;
        case 0x536decu: goto label_536dec;
        case 0x536df0u: goto label_536df0;
        case 0x536df4u: goto label_536df4;
        case 0x536df8u: goto label_536df8;
        case 0x536dfcu: goto label_536dfc;
        case 0x536e00u: goto label_536e00;
        case 0x536e04u: goto label_536e04;
        case 0x536e08u: goto label_536e08;
        case 0x536e0cu: goto label_536e0c;
        case 0x536e10u: goto label_536e10;
        case 0x536e14u: goto label_536e14;
        case 0x536e18u: goto label_536e18;
        case 0x536e1cu: goto label_536e1c;
        case 0x536e20u: goto label_536e20;
        case 0x536e24u: goto label_536e24;
        case 0x536e28u: goto label_536e28;
        case 0x536e2cu: goto label_536e2c;
        case 0x536e30u: goto label_536e30;
        case 0x536e34u: goto label_536e34;
        case 0x536e38u: goto label_536e38;
        case 0x536e3cu: goto label_536e3c;
        case 0x536e40u: goto label_536e40;
        case 0x536e44u: goto label_536e44;
        case 0x536e48u: goto label_536e48;
        case 0x536e4cu: goto label_536e4c;
        case 0x536e50u: goto label_536e50;
        case 0x536e54u: goto label_536e54;
        case 0x536e58u: goto label_536e58;
        case 0x536e5cu: goto label_536e5c;
        case 0x536e60u: goto label_536e60;
        case 0x536e64u: goto label_536e64;
        case 0x536e68u: goto label_536e68;
        case 0x536e6cu: goto label_536e6c;
        case 0x536e70u: goto label_536e70;
        case 0x536e74u: goto label_536e74;
        case 0x536e78u: goto label_536e78;
        case 0x536e7cu: goto label_536e7c;
        case 0x536e80u: goto label_536e80;
        case 0x536e84u: goto label_536e84;
        case 0x536e88u: goto label_536e88;
        case 0x536e8cu: goto label_536e8c;
        case 0x536e90u: goto label_536e90;
        case 0x536e94u: goto label_536e94;
        case 0x536e98u: goto label_536e98;
        case 0x536e9cu: goto label_536e9c;
        case 0x536ea0u: goto label_536ea0;
        case 0x536ea4u: goto label_536ea4;
        case 0x536ea8u: goto label_536ea8;
        case 0x536eacu: goto label_536eac;
        case 0x536eb0u: goto label_536eb0;
        case 0x536eb4u: goto label_536eb4;
        case 0x536eb8u: goto label_536eb8;
        case 0x536ebcu: goto label_536ebc;
        case 0x536ec0u: goto label_536ec0;
        case 0x536ec4u: goto label_536ec4;
        case 0x536ec8u: goto label_536ec8;
        case 0x536eccu: goto label_536ecc;
        case 0x536ed0u: goto label_536ed0;
        case 0x536ed4u: goto label_536ed4;
        case 0x536ed8u: goto label_536ed8;
        case 0x536edcu: goto label_536edc;
        case 0x536ee0u: goto label_536ee0;
        case 0x536ee4u: goto label_536ee4;
        case 0x536ee8u: goto label_536ee8;
        case 0x536eecu: goto label_536eec;
        case 0x536ef0u: goto label_536ef0;
        case 0x536ef4u: goto label_536ef4;
        case 0x536ef8u: goto label_536ef8;
        case 0x536efcu: goto label_536efc;
        case 0x536f00u: goto label_536f00;
        case 0x536f04u: goto label_536f04;
        case 0x536f08u: goto label_536f08;
        case 0x536f0cu: goto label_536f0c;
        case 0x536f10u: goto label_536f10;
        case 0x536f14u: goto label_536f14;
        case 0x536f18u: goto label_536f18;
        case 0x536f1cu: goto label_536f1c;
        case 0x536f20u: goto label_536f20;
        case 0x536f24u: goto label_536f24;
        case 0x536f28u: goto label_536f28;
        case 0x536f2cu: goto label_536f2c;
        case 0x536f30u: goto label_536f30;
        case 0x536f34u: goto label_536f34;
        case 0x536f38u: goto label_536f38;
        case 0x536f3cu: goto label_536f3c;
        case 0x536f40u: goto label_536f40;
        case 0x536f44u: goto label_536f44;
        case 0x536f48u: goto label_536f48;
        case 0x536f4cu: goto label_536f4c;
        case 0x536f50u: goto label_536f50;
        case 0x536f54u: goto label_536f54;
        case 0x536f58u: goto label_536f58;
        case 0x536f5cu: goto label_536f5c;
        case 0x536f60u: goto label_536f60;
        case 0x536f64u: goto label_536f64;
        case 0x536f68u: goto label_536f68;
        case 0x536f6cu: goto label_536f6c;
        case 0x536f70u: goto label_536f70;
        case 0x536f74u: goto label_536f74;
        case 0x536f78u: goto label_536f78;
        case 0x536f7cu: goto label_536f7c;
        case 0x536f80u: goto label_536f80;
        case 0x536f84u: goto label_536f84;
        case 0x536f88u: goto label_536f88;
        case 0x536f8cu: goto label_536f8c;
        case 0x536f90u: goto label_536f90;
        case 0x536f94u: goto label_536f94;
        case 0x536f98u: goto label_536f98;
        case 0x536f9cu: goto label_536f9c;
        case 0x536fa0u: goto label_536fa0;
        case 0x536fa4u: goto label_536fa4;
        case 0x536fa8u: goto label_536fa8;
        case 0x536facu: goto label_536fac;
        case 0x536fb0u: goto label_536fb0;
        case 0x536fb4u: goto label_536fb4;
        case 0x536fb8u: goto label_536fb8;
        case 0x536fbcu: goto label_536fbc;
        case 0x536fc0u: goto label_536fc0;
        case 0x536fc4u: goto label_536fc4;
        case 0x536fc8u: goto label_536fc8;
        case 0x536fccu: goto label_536fcc;
        case 0x536fd0u: goto label_536fd0;
        case 0x536fd4u: goto label_536fd4;
        case 0x536fd8u: goto label_536fd8;
        case 0x536fdcu: goto label_536fdc;
        case 0x536fe0u: goto label_536fe0;
        case 0x536fe4u: goto label_536fe4;
        case 0x536fe8u: goto label_536fe8;
        case 0x536fecu: goto label_536fec;
        case 0x536ff0u: goto label_536ff0;
        case 0x536ff4u: goto label_536ff4;
        case 0x536ff8u: goto label_536ff8;
        case 0x536ffcu: goto label_536ffc;
        case 0x537000u: goto label_537000;
        case 0x537004u: goto label_537004;
        case 0x537008u: goto label_537008;
        case 0x53700cu: goto label_53700c;
        case 0x537010u: goto label_537010;
        case 0x537014u: goto label_537014;
        case 0x537018u: goto label_537018;
        case 0x53701cu: goto label_53701c;
        case 0x537020u: goto label_537020;
        case 0x537024u: goto label_537024;
        case 0x537028u: goto label_537028;
        case 0x53702cu: goto label_53702c;
        case 0x537030u: goto label_537030;
        case 0x537034u: goto label_537034;
        case 0x537038u: goto label_537038;
        case 0x53703cu: goto label_53703c;
        case 0x537040u: goto label_537040;
        case 0x537044u: goto label_537044;
        case 0x537048u: goto label_537048;
        case 0x53704cu: goto label_53704c;
        case 0x537050u: goto label_537050;
        case 0x537054u: goto label_537054;
        case 0x537058u: goto label_537058;
        case 0x53705cu: goto label_53705c;
        case 0x537060u: goto label_537060;
        case 0x537064u: goto label_537064;
        case 0x537068u: goto label_537068;
        case 0x53706cu: goto label_53706c;
        case 0x537070u: goto label_537070;
        case 0x537074u: goto label_537074;
        case 0x537078u: goto label_537078;
        case 0x53707cu: goto label_53707c;
        case 0x537080u: goto label_537080;
        case 0x537084u: goto label_537084;
        case 0x537088u: goto label_537088;
        case 0x53708cu: goto label_53708c;
        case 0x537090u: goto label_537090;
        case 0x537094u: goto label_537094;
        case 0x537098u: goto label_537098;
        case 0x53709cu: goto label_53709c;
        case 0x5370a0u: goto label_5370a0;
        case 0x5370a4u: goto label_5370a4;
        case 0x5370a8u: goto label_5370a8;
        case 0x5370acu: goto label_5370ac;
        case 0x5370b0u: goto label_5370b0;
        case 0x5370b4u: goto label_5370b4;
        case 0x5370b8u: goto label_5370b8;
        case 0x5370bcu: goto label_5370bc;
        case 0x5370c0u: goto label_5370c0;
        case 0x5370c4u: goto label_5370c4;
        case 0x5370c8u: goto label_5370c8;
        case 0x5370ccu: goto label_5370cc;
        case 0x5370d0u: goto label_5370d0;
        case 0x5370d4u: goto label_5370d4;
        case 0x5370d8u: goto label_5370d8;
        case 0x5370dcu: goto label_5370dc;
        case 0x5370e0u: goto label_5370e0;
        case 0x5370e4u: goto label_5370e4;
        case 0x5370e8u: goto label_5370e8;
        case 0x5370ecu: goto label_5370ec;
        case 0x5370f0u: goto label_5370f0;
        case 0x5370f4u: goto label_5370f4;
        case 0x5370f8u: goto label_5370f8;
        case 0x5370fcu: goto label_5370fc;
        case 0x537100u: goto label_537100;
        case 0x537104u: goto label_537104;
        case 0x537108u: goto label_537108;
        case 0x53710cu: goto label_53710c;
        case 0x537110u: goto label_537110;
        case 0x537114u: goto label_537114;
        case 0x537118u: goto label_537118;
        case 0x53711cu: goto label_53711c;
        case 0x537120u: goto label_537120;
        case 0x537124u: goto label_537124;
        case 0x537128u: goto label_537128;
        case 0x53712cu: goto label_53712c;
        case 0x537130u: goto label_537130;
        case 0x537134u: goto label_537134;
        case 0x537138u: goto label_537138;
        case 0x53713cu: goto label_53713c;
        case 0x537140u: goto label_537140;
        case 0x537144u: goto label_537144;
        case 0x537148u: goto label_537148;
        case 0x53714cu: goto label_53714c;
        case 0x537150u: goto label_537150;
        case 0x537154u: goto label_537154;
        case 0x537158u: goto label_537158;
        case 0x53715cu: goto label_53715c;
        case 0x537160u: goto label_537160;
        case 0x537164u: goto label_537164;
        case 0x537168u: goto label_537168;
        case 0x53716cu: goto label_53716c;
        case 0x537170u: goto label_537170;
        case 0x537174u: goto label_537174;
        case 0x537178u: goto label_537178;
        case 0x53717cu: goto label_53717c;
        case 0x537180u: goto label_537180;
        case 0x537184u: goto label_537184;
        case 0x537188u: goto label_537188;
        case 0x53718cu: goto label_53718c;
        case 0x537190u: goto label_537190;
        case 0x537194u: goto label_537194;
        case 0x537198u: goto label_537198;
        case 0x53719cu: goto label_53719c;
        case 0x5371a0u: goto label_5371a0;
        case 0x5371a4u: goto label_5371a4;
        case 0x5371a8u: goto label_5371a8;
        case 0x5371acu: goto label_5371ac;
        case 0x5371b0u: goto label_5371b0;
        case 0x5371b4u: goto label_5371b4;
        case 0x5371b8u: goto label_5371b8;
        case 0x5371bcu: goto label_5371bc;
        case 0x5371c0u: goto label_5371c0;
        case 0x5371c4u: goto label_5371c4;
        case 0x5371c8u: goto label_5371c8;
        case 0x5371ccu: goto label_5371cc;
        case 0x5371d0u: goto label_5371d0;
        case 0x5371d4u: goto label_5371d4;
        case 0x5371d8u: goto label_5371d8;
        case 0x5371dcu: goto label_5371dc;
        case 0x5371e0u: goto label_5371e0;
        case 0x5371e4u: goto label_5371e4;
        case 0x5371e8u: goto label_5371e8;
        case 0x5371ecu: goto label_5371ec;
        case 0x5371f0u: goto label_5371f0;
        case 0x5371f4u: goto label_5371f4;
        case 0x5371f8u: goto label_5371f8;
        case 0x5371fcu: goto label_5371fc;
        case 0x537200u: goto label_537200;
        case 0x537204u: goto label_537204;
        case 0x537208u: goto label_537208;
        case 0x53720cu: goto label_53720c;
        case 0x537210u: goto label_537210;
        case 0x537214u: goto label_537214;
        case 0x537218u: goto label_537218;
        case 0x53721cu: goto label_53721c;
        case 0x537220u: goto label_537220;
        case 0x537224u: goto label_537224;
        case 0x537228u: goto label_537228;
        case 0x53722cu: goto label_53722c;
        case 0x537230u: goto label_537230;
        case 0x537234u: goto label_537234;
        case 0x537238u: goto label_537238;
        case 0x53723cu: goto label_53723c;
        case 0x537240u: goto label_537240;
        case 0x537244u: goto label_537244;
        case 0x537248u: goto label_537248;
        case 0x53724cu: goto label_53724c;
        case 0x537250u: goto label_537250;
        case 0x537254u: goto label_537254;
        case 0x537258u: goto label_537258;
        case 0x53725cu: goto label_53725c;
        case 0x537260u: goto label_537260;
        case 0x537264u: goto label_537264;
        case 0x537268u: goto label_537268;
        case 0x53726cu: goto label_53726c;
        case 0x537270u: goto label_537270;
        case 0x537274u: goto label_537274;
        case 0x537278u: goto label_537278;
        case 0x53727cu: goto label_53727c;
        case 0x537280u: goto label_537280;
        case 0x537284u: goto label_537284;
        case 0x537288u: goto label_537288;
        case 0x53728cu: goto label_53728c;
        case 0x537290u: goto label_537290;
        case 0x537294u: goto label_537294;
        case 0x537298u: goto label_537298;
        case 0x53729cu: goto label_53729c;
        case 0x5372a0u: goto label_5372a0;
        case 0x5372a4u: goto label_5372a4;
        case 0x5372a8u: goto label_5372a8;
        case 0x5372acu: goto label_5372ac;
        case 0x5372b0u: goto label_5372b0;
        case 0x5372b4u: goto label_5372b4;
        case 0x5372b8u: goto label_5372b8;
        case 0x5372bcu: goto label_5372bc;
        case 0x5372c0u: goto label_5372c0;
        case 0x5372c4u: goto label_5372c4;
        case 0x5372c8u: goto label_5372c8;
        case 0x5372ccu: goto label_5372cc;
        case 0x5372d0u: goto label_5372d0;
        case 0x5372d4u: goto label_5372d4;
        case 0x5372d8u: goto label_5372d8;
        case 0x5372dcu: goto label_5372dc;
        case 0x5372e0u: goto label_5372e0;
        case 0x5372e4u: goto label_5372e4;
        case 0x5372e8u: goto label_5372e8;
        case 0x5372ecu: goto label_5372ec;
        case 0x5372f0u: goto label_5372f0;
        case 0x5372f4u: goto label_5372f4;
        case 0x5372f8u: goto label_5372f8;
        case 0x5372fcu: goto label_5372fc;
        case 0x537300u: goto label_537300;
        case 0x537304u: goto label_537304;
        case 0x537308u: goto label_537308;
        case 0x53730cu: goto label_53730c;
        case 0x537310u: goto label_537310;
        case 0x537314u: goto label_537314;
        case 0x537318u: goto label_537318;
        case 0x53731cu: goto label_53731c;
        case 0x537320u: goto label_537320;
        case 0x537324u: goto label_537324;
        case 0x537328u: goto label_537328;
        case 0x53732cu: goto label_53732c;
        case 0x537330u: goto label_537330;
        case 0x537334u: goto label_537334;
        case 0x537338u: goto label_537338;
        case 0x53733cu: goto label_53733c;
        case 0x537340u: goto label_537340;
        case 0x537344u: goto label_537344;
        case 0x537348u: goto label_537348;
        case 0x53734cu: goto label_53734c;
        case 0x537350u: goto label_537350;
        case 0x537354u: goto label_537354;
        case 0x537358u: goto label_537358;
        case 0x53735cu: goto label_53735c;
        case 0x537360u: goto label_537360;
        case 0x537364u: goto label_537364;
        case 0x537368u: goto label_537368;
        case 0x53736cu: goto label_53736c;
        case 0x537370u: goto label_537370;
        case 0x537374u: goto label_537374;
        case 0x537378u: goto label_537378;
        case 0x53737cu: goto label_53737c;
        case 0x537380u: goto label_537380;
        case 0x537384u: goto label_537384;
        case 0x537388u: goto label_537388;
        case 0x53738cu: goto label_53738c;
        case 0x537390u: goto label_537390;
        case 0x537394u: goto label_537394;
        case 0x537398u: goto label_537398;
        case 0x53739cu: goto label_53739c;
        case 0x5373a0u: goto label_5373a0;
        case 0x5373a4u: goto label_5373a4;
        case 0x5373a8u: goto label_5373a8;
        case 0x5373acu: goto label_5373ac;
        case 0x5373b0u: goto label_5373b0;
        case 0x5373b4u: goto label_5373b4;
        case 0x5373b8u: goto label_5373b8;
        case 0x5373bcu: goto label_5373bc;
        case 0x5373c0u: goto label_5373c0;
        case 0x5373c4u: goto label_5373c4;
        case 0x5373c8u: goto label_5373c8;
        case 0x5373ccu: goto label_5373cc;
        case 0x5373d0u: goto label_5373d0;
        case 0x5373d4u: goto label_5373d4;
        case 0x5373d8u: goto label_5373d8;
        case 0x5373dcu: goto label_5373dc;
        case 0x5373e0u: goto label_5373e0;
        case 0x5373e4u: goto label_5373e4;
        case 0x5373e8u: goto label_5373e8;
        case 0x5373ecu: goto label_5373ec;
        case 0x5373f0u: goto label_5373f0;
        case 0x5373f4u: goto label_5373f4;
        case 0x5373f8u: goto label_5373f8;
        case 0x5373fcu: goto label_5373fc;
        case 0x537400u: goto label_537400;
        case 0x537404u: goto label_537404;
        case 0x537408u: goto label_537408;
        case 0x53740cu: goto label_53740c;
        case 0x537410u: goto label_537410;
        case 0x537414u: goto label_537414;
        case 0x537418u: goto label_537418;
        case 0x53741cu: goto label_53741c;
        case 0x537420u: goto label_537420;
        case 0x537424u: goto label_537424;
        case 0x537428u: goto label_537428;
        case 0x53742cu: goto label_53742c;
        case 0x537430u: goto label_537430;
        case 0x537434u: goto label_537434;
        case 0x537438u: goto label_537438;
        case 0x53743cu: goto label_53743c;
        case 0x537440u: goto label_537440;
        case 0x537444u: goto label_537444;
        case 0x537448u: goto label_537448;
        case 0x53744cu: goto label_53744c;
        case 0x537450u: goto label_537450;
        case 0x537454u: goto label_537454;
        case 0x537458u: goto label_537458;
        case 0x53745cu: goto label_53745c;
        case 0x537460u: goto label_537460;
        case 0x537464u: goto label_537464;
        case 0x537468u: goto label_537468;
        case 0x53746cu: goto label_53746c;
        case 0x537470u: goto label_537470;
        case 0x537474u: goto label_537474;
        case 0x537478u: goto label_537478;
        case 0x53747cu: goto label_53747c;
        case 0x537480u: goto label_537480;
        case 0x537484u: goto label_537484;
        case 0x537488u: goto label_537488;
        case 0x53748cu: goto label_53748c;
        case 0x537490u: goto label_537490;
        case 0x537494u: goto label_537494;
        case 0x537498u: goto label_537498;
        case 0x53749cu: goto label_53749c;
        case 0x5374a0u: goto label_5374a0;
        case 0x5374a4u: goto label_5374a4;
        case 0x5374a8u: goto label_5374a8;
        case 0x5374acu: goto label_5374ac;
        case 0x5374b0u: goto label_5374b0;
        case 0x5374b4u: goto label_5374b4;
        case 0x5374b8u: goto label_5374b8;
        case 0x5374bcu: goto label_5374bc;
        case 0x5374c0u: goto label_5374c0;
        case 0x5374c4u: goto label_5374c4;
        case 0x5374c8u: goto label_5374c8;
        case 0x5374ccu: goto label_5374cc;
        case 0x5374d0u: goto label_5374d0;
        case 0x5374d4u: goto label_5374d4;
        case 0x5374d8u: goto label_5374d8;
        case 0x5374dcu: goto label_5374dc;
        case 0x5374e0u: goto label_5374e0;
        case 0x5374e4u: goto label_5374e4;
        case 0x5374e8u: goto label_5374e8;
        case 0x5374ecu: goto label_5374ec;
        case 0x5374f0u: goto label_5374f0;
        case 0x5374f4u: goto label_5374f4;
        case 0x5374f8u: goto label_5374f8;
        case 0x5374fcu: goto label_5374fc;
        case 0x537500u: goto label_537500;
        case 0x537504u: goto label_537504;
        case 0x537508u: goto label_537508;
        case 0x53750cu: goto label_53750c;
        case 0x537510u: goto label_537510;
        case 0x537514u: goto label_537514;
        case 0x537518u: goto label_537518;
        case 0x53751cu: goto label_53751c;
        case 0x537520u: goto label_537520;
        case 0x537524u: goto label_537524;
        case 0x537528u: goto label_537528;
        case 0x53752cu: goto label_53752c;
        case 0x537530u: goto label_537530;
        case 0x537534u: goto label_537534;
        case 0x537538u: goto label_537538;
        case 0x53753cu: goto label_53753c;
        default: break;
    }

    ctx->pc = 0x536b10u;

label_536b10:
    // 0x536b10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x536b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_536b14:
    // 0x536b14: 0x2485ff9c  addiu       $a1, $a0, -0x64
    ctx->pc = 0x536b14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
label_536b18:
    // 0x536b18: 0x24426f10  addiu       $v0, $v0, 0x6F10
    ctx->pc = 0x536b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28432));
label_536b1c:
    // 0x536b1c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x536b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_536b20:
    // 0x536b20: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x536b20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_536b24:
    // 0x536b24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x536b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536b28:
    // 0x536b28: 0x3e00008  jr          $ra
label_536b2c:
    if (ctx->pc == 0x536B2Cu) {
        ctx->pc = 0x536B2Cu;
            // 0x536b2c: 0xac65b640  sw          $a1, -0x49C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948416), GPR_U32(ctx, 5));
        ctx->pc = 0x536B30u;
        goto label_536b30;
    }
    ctx->pc = 0x536B28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536B28u;
            // 0x536b2c: 0xac65b640  sw          $a1, -0x49C0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294948416), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536B30u;
label_536b30:
    // 0x536b30: 0x80d37dc  j           func_34DF70
label_536b34:
    if (ctx->pc == 0x536B34u) {
        ctx->pc = 0x536B38u;
        goto label_536b38;
    }
    ctx->pc = 0x536B30u;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0034DF70_0x34df70(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x536B38u;
label_536b38:
    // 0x536b38: 0x0  nop
    ctx->pc = 0x536b38u;
    // NOP
label_536b3c:
    // 0x536b3c: 0x0  nop
    ctx->pc = 0x536b3cu;
    // NOP
label_536b40:
    // 0x536b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x536b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_536b44:
    // 0x536b44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x536b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_536b48:
    // 0x536b48: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536b4c:
    // 0x536b4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x536b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_536b50:
    // 0x536b50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536b54:
    // 0x536b54: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x536b54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536b58:
    // 0x536b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536b5c:
    // 0x536b5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x536b5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_536b60:
    // 0x536b60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536b64:
    // 0x536b64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x536b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_536b68:
    // 0x536b68: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x536b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_536b6c:
    // 0x536b6c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x536b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_536b70:
    // 0x536b70: 0xc4840048  lwc1        $f4, 0x48($a0)
    ctx->pc = 0x536b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_536b74:
    // 0x536b74: 0xc4830044  lwc1        $f3, 0x44($a0)
    ctx->pc = 0x536b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_536b78:
    // 0x536b78: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x536b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_536b7c:
    // 0x536b7c: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x536b7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_536b80:
    // 0x536b80: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x536b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_536b84:
    // 0x536b84: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x536b84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_536b88:
    // 0x536b88: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x536b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_536b8c:
    // 0x536b8c: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x536b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_536b90:
    // 0x536b90: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x536b90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_536b94:
    // 0x536b94: 0x46021842  mul.s       $f1, $f3, $f2
    ctx->pc = 0x536b94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_536b98:
    // 0x536b98: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x536b98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_536b9c:
    // 0x536b9c: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x536b9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_536ba0:
    // 0x536ba0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x536ba0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_536ba4:
    // 0x536ba4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x536ba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_536ba8:
    // 0x536ba8: 0xc0a7a88  jal         func_29EA20
label_536bac:
    if (ctx->pc == 0x536BACu) {
        ctx->pc = 0x536BACu;
            // 0x536bac: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x536BB0u;
        goto label_536bb0;
    }
    ctx->pc = 0x536BA8u;
    SET_GPR_U32(ctx, 31, 0x536BB0u);
    ctx->pc = 0x536BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536BA8u;
            // 0x536bac: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BB0u; }
        if (ctx->pc != 0x536BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BB0u; }
        if (ctx->pc != 0x536BB0u) { return; }
    }
    ctx->pc = 0x536BB0u;
label_536bb0:
    // 0x536bb0: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x536bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_536bb4:
    // 0x536bb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x536bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_536bb8:
    // 0x536bb8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_536bbc:
    if (ctx->pc == 0x536BBCu) {
        ctx->pc = 0x536BBCu;
            // 0x536bbc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x536BC0u;
        goto label_536bc0;
    }
    ctx->pc = 0x536BB8u;
    {
        const bool branch_taken_0x536bb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x536BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536BB8u;
            // 0x536bbc: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536bb8) {
            ctx->pc = 0x536BD8u;
            goto label_536bd8;
        }
    }
    ctx->pc = 0x536BC0u;
label_536bc0:
    // 0x536bc0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x536bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_536bc4:
    // 0x536bc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x536bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536bc8:
    // 0x536bc8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x536bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_536bcc:
    // 0x536bcc: 0xc0804bc  jal         func_2012F0
label_536bd0:
    if (ctx->pc == 0x536BD0u) {
        ctx->pc = 0x536BD0u;
            // 0x536bd0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536BD4u;
        goto label_536bd4;
    }
    ctx->pc = 0x536BCCu;
    SET_GPR_U32(ctx, 31, 0x536BD4u);
    ctx->pc = 0x536BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536BCCu;
            // 0x536bd0: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BD4u; }
        if (ctx->pc != 0x536BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BD4u; }
        if (ctx->pc != 0x536BD4u) { return; }
    }
    ctx->pc = 0x536BD4u;
label_536bd4:
    // 0x536bd4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x536bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_536bd8:
    // 0x536bd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x536bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536bdc:
    // 0x536bdc: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x536bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_536be0:
    // 0x536be0: 0x26260030  addiu       $a2, $s1, 0x30
    ctx->pc = 0x536be0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_536be4:
    // 0x536be4: 0xc0d37ec  jal         func_34DFB0
label_536be8:
    if (ctx->pc == 0x536BE8u) {
        ctx->pc = 0x536BE8u;
            // 0x536be8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536BECu;
        goto label_536bec;
    }
    ctx->pc = 0x536BE4u;
    SET_GPR_U32(ctx, 31, 0x536BECu);
    ctx->pc = 0x536BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536BE4u;
            // 0x536be8: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DFB0u;
    if (runtime->hasFunction(0x34DFB0u)) {
        auto targetFn = runtime->lookupFunction(0x34DFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BECu; }
        if (ctx->pc != 0x536BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DFB0_0x34dfb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536BECu; }
        if (ctx->pc != 0x536BECu) { return; }
    }
    ctx->pc = 0x536BECu;
label_536bec:
    // 0x536bec: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x536becu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_536bf0:
    // 0x536bf0: 0x50600010  beql        $v1, $zero, . + 4 + (0x10 << 2)
label_536bf4:
    if (ctx->pc == 0x536BF4u) {
        ctx->pc = 0x536BF4u;
            // 0x536bf4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x536BF8u;
        goto label_536bf8;
    }
    ctx->pc = 0x536BF0u;
    {
        const bool branch_taken_0x536bf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x536bf0) {
            ctx->pc = 0x536BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536BF0u;
            // 0x536bf4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536C34u;
            goto label_536c34;
        }
    }
    ctx->pc = 0x536BF8u;
label_536bf8:
    // 0x536bf8: 0x86030006  lh          $v1, 0x6($s0)
    ctx->pc = 0x536bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_536bfc:
    // 0x536bfc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x536bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_536c00:
    // 0x536c00: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x536c00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
label_536c04:
    // 0x536c04: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x536c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
label_536c08:
    // 0x536c08: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x536c08u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_536c0c:
    // 0x536c0c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_536c10:
    if (ctx->pc == 0x536C10u) {
        ctx->pc = 0x536C14u;
        goto label_536c14;
    }
    ctx->pc = 0x536C0Cu;
    {
        const bool branch_taken_0x536c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x536c0c) {
            ctx->pc = 0x536C30u;
            goto label_536c30;
        }
    }
    ctx->pc = 0x536C14u;
label_536c14:
    // 0x536c14: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_536c18:
    if (ctx->pc == 0x536C18u) {
        ctx->pc = 0x536C1Cu;
        goto label_536c1c;
    }
    ctx->pc = 0x536C14u;
    {
        const bool branch_taken_0x536c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x536c14) {
            ctx->pc = 0x536C30u;
            goto label_536c30;
        }
    }
    ctx->pc = 0x536C1Cu;
label_536c1c:
    // 0x536c1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x536c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_536c20:
    // 0x536c20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x536c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536c24:
    // 0x536c24: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x536c24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_536c28:
    // 0x536c28: 0x320f809  jalr        $t9
label_536c2c:
    if (ctx->pc == 0x536C2Cu) {
        ctx->pc = 0x536C2Cu;
            // 0x536c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x536C30u;
        goto label_536c30;
    }
    ctx->pc = 0x536C28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536C30u);
        ctx->pc = 0x536C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536C28u;
            // 0x536c2c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536C30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536C30u; }
            if (ctx->pc != 0x536C30u) { return; }
        }
        }
    }
    ctx->pc = 0x536C30u;
label_536c30:
    // 0x536c30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536c30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536c34:
    // 0x536c34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536c38:
    // 0x536c38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536c38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536c3c:
    // 0x536c3c: 0x3e00008  jr          $ra
label_536c40:
    if (ctx->pc == 0x536C40u) {
        ctx->pc = 0x536C40u;
            // 0x536c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x536C44u;
        goto label_536c44;
    }
    ctx->pc = 0x536C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536C3Cu;
            // 0x536c40: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536C44u;
label_536c44:
    // 0x536c44: 0x0  nop
    ctx->pc = 0x536c44u;
    // NOP
label_536c48:
    // 0x536c48: 0x0  nop
    ctx->pc = 0x536c48u;
    // NOP
label_536c4c:
    // 0x536c4c: 0x0  nop
    ctx->pc = 0x536c4cu;
    // NOP
label_536c50:
    // 0x536c50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536c54:
    // 0x536c54: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x536c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_536c58:
    // 0x536c58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536c5c:
    // 0x536c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536c60:
    // 0x536c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536c64:
    // 0x536c64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536c64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536c68:
    // 0x536c68: 0x8ca40db0  lw          $a0, 0xDB0($a1)
    ctx->pc = 0x536c68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3504)));
label_536c6c:
    // 0x536c6c: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_536c70:
    if (ctx->pc == 0x536C70u) {
        ctx->pc = 0x536C70u;
            // 0x536c70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536C74u;
        goto label_536c74;
    }
    ctx->pc = 0x536C6Cu;
    {
        const bool branch_taken_0x536c6c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x536C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536C6Cu;
            // 0x536c70: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536c6c) {
            ctx->pc = 0x536CACu;
            goto label_536cac;
        }
    }
    ctx->pc = 0x536C74u;
label_536c74:
    // 0x536c74: 0xc0754b4  jal         func_1D52D0
label_536c78:
    if (ctx->pc == 0x536C78u) {
        ctx->pc = 0x536C78u;
            // 0x536c78: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x536C7Cu;
        goto label_536c7c;
    }
    ctx->pc = 0x536C74u;
    SET_GPR_U32(ctx, 31, 0x536C7Cu);
    ctx->pc = 0x536C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536C74u;
            // 0x536c78: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536C7Cu; }
        if (ctx->pc != 0x536C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536C7Cu; }
        if (ctx->pc != 0x536C7Cu) { return; }
    }
    ctx->pc = 0x536C7Cu;
label_536c7c:
    // 0x536c7c: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x536c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_536c80:
    // 0x536c80: 0x30630010  andi        $v1, $v1, 0x10
    ctx->pc = 0x536c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_536c84:
    // 0x536c84: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
label_536c88:
    if (ctx->pc == 0x536C88u) {
        ctx->pc = 0x536C88u;
            // 0x536c88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x536C8Cu;
        goto label_536c8c;
    }
    ctx->pc = 0x536C84u;
    {
        const bool branch_taken_0x536c84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x536c84) {
            ctx->pc = 0x536C88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536C84u;
            // 0x536c88: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536CB0u;
            goto label_536cb0;
        }
    }
    ctx->pc = 0x536C8Cu;
label_536c8c:
    // 0x536c8c: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x536c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_536c90:
    // 0x536c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x536c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536c94:
    // 0x536c94: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x536c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_536c98:
    // 0x536c98: 0xae021224  sw          $v0, 0x1224($s0)
    ctx->pc = 0x536c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4644), GPR_U32(ctx, 2));
label_536c9c:
    // 0x536c9c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x536c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_536ca0:
    // 0x536ca0: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x536ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_536ca4:
    // 0x536ca4: 0x320f809  jalr        $t9
label_536ca8:
    if (ctx->pc == 0x536CA8u) {
        ctx->pc = 0x536CA8u;
            // 0x536ca8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x536CACu;
        goto label_536cac;
    }
    ctx->pc = 0x536CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536CACu);
        ctx->pc = 0x536CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536CA4u;
            // 0x536ca8: 0x2405001d  addiu       $a1, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536CACu; }
            if (ctx->pc != 0x536CACu) { return; }
        }
        }
    }
    ctx->pc = 0x536CACu;
label_536cac:
    // 0x536cac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536cacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536cb0:
    // 0x536cb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536cb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536cb4:
    // 0x536cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536cb8:
    // 0x536cb8: 0x3e00008  jr          $ra
label_536cbc:
    if (ctx->pc == 0x536CBCu) {
        ctx->pc = 0x536CBCu;
            // 0x536cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536CC0u;
        goto label_536cc0;
    }
    ctx->pc = 0x536CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536CB8u;
            // 0x536cbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536CC0u;
label_536cc0:
    // 0x536cc0: 0x3e00008  jr          $ra
label_536cc4:
    if (ctx->pc == 0x536CC4u) {
        ctx->pc = 0x536CC8u;
        goto label_536cc8;
    }
    ctx->pc = 0x536CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536CC8u;
label_536cc8:
    // 0x536cc8: 0x0  nop
    ctx->pc = 0x536cc8u;
    // NOP
label_536ccc:
    // 0x536ccc: 0x0  nop
    ctx->pc = 0x536cccu;
    // NOP
label_536cd0:
    // 0x536cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536cd4:
    // 0x536cd4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x536cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_536cd8:
    // 0x536cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x536cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_536cdc:
    // 0x536cdc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x536cdcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_536ce0:
    // 0x536ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536ce4:
    // 0x536ce4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x536ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_536ce8:
    // 0x536ce8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x536ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_536cec:
    // 0x536cec: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x536cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_536cf0:
    // 0x536cf0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x536cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_536cf4:
    // 0x536cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x536cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_536cf8:
    // 0x536cf8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x536cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_536cfc:
    // 0x536cfc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x536cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_536d00:
    // 0x536d00: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x536d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_536d04:
    // 0x536d04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x536d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_536d08:
    // 0x536d08: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x536d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_536d0c:
    // 0x536d0c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x536d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_536d10:
    // 0x536d10: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x536d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_536d14:
    // 0x536d14: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x536d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_536d18:
    // 0x536d18: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x536d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_536d1c:
    // 0x536d1c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x536d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_536d20:
    // 0x536d20: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x536d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_536d24:
    // 0x536d24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x536d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_536d28:
    // 0x536d28: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x536d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_536d2c:
    // 0x536d2c: 0xc0a997c  jal         func_2A65F0
label_536d30:
    if (ctx->pc == 0x536D30u) {
        ctx->pc = 0x536D30u;
            // 0x536d30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x536D34u;
        goto label_536d34;
    }
    ctx->pc = 0x536D2Cu;
    SET_GPR_U32(ctx, 31, 0x536D34u);
    ctx->pc = 0x536D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D2Cu;
            // 0x536d30: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536D34u; }
        if (ctx->pc != 0x536D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536D34u; }
        if (ctx->pc != 0x536D34u) { return; }
    }
    ctx->pc = 0x536D34u;
label_536d34:
    // 0x536d34: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x536d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_536d38:
    // 0x536d38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x536d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_536d3c:
    // 0x536d3c: 0xc0d879c  jal         func_361E70
label_536d40:
    if (ctx->pc == 0x536D40u) {
        ctx->pc = 0x536D40u;
            // 0x536d40: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x536D44u;
        goto label_536d44;
    }
    ctx->pc = 0x536D3Cu;
    SET_GPR_U32(ctx, 31, 0x536D44u);
    ctx->pc = 0x536D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D3Cu;
            // 0x536d40: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536D44u; }
        if (ctx->pc != 0x536D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536D44u; }
        if (ctx->pc != 0x536D44u) { return; }
    }
    ctx->pc = 0x536D44u;
label_536d44:
    // 0x536d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x536d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_536d48:
    // 0x536d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536d4c:
    // 0x536d4c: 0x3e00008  jr          $ra
label_536d50:
    if (ctx->pc == 0x536D50u) {
        ctx->pc = 0x536D50u;
            // 0x536d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536D54u;
        goto label_536d54;
    }
    ctx->pc = 0x536D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536D4Cu;
            // 0x536d50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536D54u;
label_536d54:
    // 0x536d54: 0x0  nop
    ctx->pc = 0x536d54u;
    // NOP
label_536d58:
    // 0x536d58: 0x0  nop
    ctx->pc = 0x536d58u;
    // NOP
label_536d5c:
    // 0x536d5c: 0x0  nop
    ctx->pc = 0x536d5cu;
    // NOP
label_536d60:
    // 0x536d60: 0x814da24  j           func_536890
label_536d64:
    if (ctx->pc == 0x536D64u) {
        ctx->pc = 0x536D64u;
            // 0x536d64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x536D68u;
        goto label_536d68;
    }
    ctx->pc = 0x536D60u;
    ctx->pc = 0x536D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D60u;
            // 0x536d64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536890u;
    {
        auto targetFn = runtime->lookupFunction(0x536890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x536D68u;
label_536d68:
    // 0x536d68: 0x0  nop
    ctx->pc = 0x536d68u;
    // NOP
label_536d6c:
    // 0x536d6c: 0x0  nop
    ctx->pc = 0x536d6cu;
    // NOP
label_536d70:
    // 0x536d70: 0x814dacc  j           func_536B30
label_536d74:
    if (ctx->pc == 0x536D74u) {
        ctx->pc = 0x536D74u;
            // 0x536d74: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x536D78u;
        goto label_536d78;
    }
    ctx->pc = 0x536D70u;
    ctx->pc = 0x536D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D70u;
            // 0x536d74: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536B30u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_536b30;
    ctx->pc = 0x536D78u;
label_536d78:
    // 0x536d78: 0x0  nop
    ctx->pc = 0x536d78u;
    // NOP
label_536d7c:
    // 0x536d7c: 0x0  nop
    ctx->pc = 0x536d7cu;
    // NOP
label_536d80:
    // 0x536d80: 0x814dad0  j           func_536B40
label_536d84:
    if (ctx->pc == 0x536D84u) {
        ctx->pc = 0x536D84u;
            // 0x536d84: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x536D88u;
        goto label_536d88;
    }
    ctx->pc = 0x536D80u;
    ctx->pc = 0x536D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D80u;
            // 0x536d84: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536B40u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_536b40;
    ctx->pc = 0x536D88u;
label_536d88:
    // 0x536d88: 0x0  nop
    ctx->pc = 0x536d88u;
    // NOP
label_536d8c:
    // 0x536d8c: 0x0  nop
    ctx->pc = 0x536d8cu;
    // NOP
label_536d90:
    // 0x536d90: 0x814d954  j           func_536550
label_536d94:
    if (ctx->pc == 0x536D94u) {
        ctx->pc = 0x536D94u;
            // 0x536d94: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->pc = 0x536D98u;
        goto label_536d98;
    }
    ctx->pc = 0x536D90u;
    ctx->pc = 0x536D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536D90u;
            // 0x536d94: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x536550u;
    {
        auto targetFn = runtime->lookupFunction(0x536550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x536D98u;
label_536d98:
    // 0x536d98: 0x0  nop
    ctx->pc = 0x536d98u;
    // NOP
label_536d9c:
    // 0x536d9c: 0x0  nop
    ctx->pc = 0x536d9cu;
    // NOP
label_536da0:
    // 0x536da0: 0x814d8ec  j           func_5363B0
label_536da4:
    if (ctx->pc == 0x536DA4u) {
        ctx->pc = 0x536DA4u;
            // 0x536da4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x536DA8u;
        goto label_536da8;
    }
    ctx->pc = 0x536DA0u;
    ctx->pc = 0x536DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536DA0u;
            // 0x536da4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5363B0u;
    {
        auto targetFn = runtime->lookupFunction(0x5363B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x536DA8u;
label_536da8:
    // 0x536da8: 0x0  nop
    ctx->pc = 0x536da8u;
    // NOP
label_536dac:
    // 0x536dac: 0x0  nop
    ctx->pc = 0x536dacu;
    // NOP
label_536db0:
    // 0x536db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536db4:
    // 0x536db4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536db8:
    // 0x536db8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536dbc:
    // 0x536dbc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536dc0:
    // 0x536dc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536dc4:
    // 0x536dc4: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_536dc8:
    if (ctx->pc == 0x536DC8u) {
        ctx->pc = 0x536DC8u;
            // 0x536dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536DCCu;
        goto label_536dcc;
    }
    ctx->pc = 0x536DC4u;
    {
        const bool branch_taken_0x536dc4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x536DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536DC4u;
            // 0x536dc8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536dc4) {
            ctx->pc = 0x536DF8u;
            goto label_536df8;
        }
    }
    ctx->pc = 0x536DCCu;
label_536dcc:
    // 0x536dcc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x536dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_536dd0:
    // 0x536dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x536dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536dd4:
    // 0x536dd4: 0x24426f70  addiu       $v0, $v0, 0x6F70
    ctx->pc = 0x536dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28528));
label_536dd8:
    // 0x536dd8: 0xc0e9fc8  jal         func_3A7F20
label_536ddc:
    if (ctx->pc == 0x536DDCu) {
        ctx->pc = 0x536DDCu;
            // 0x536ddc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x536DE0u;
        goto label_536de0;
    }
    ctx->pc = 0x536DD8u;
    SET_GPR_U32(ctx, 31, 0x536DE0u);
    ctx->pc = 0x536DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536DD8u;
            // 0x536ddc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F20u;
    if (runtime->hasFunction(0x3A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536DE0u; }
        if (ctx->pc != 0x536DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F20_0x3a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536DE0u; }
        if (ctx->pc != 0x536DE0u) { return; }
    }
    ctx->pc = 0x536DE0u;
label_536de0:
    // 0x536de0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x536de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_536de4:
    // 0x536de4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x536de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_536de8:
    // 0x536de8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_536dec:
    if (ctx->pc == 0x536DECu) {
        ctx->pc = 0x536DECu;
            // 0x536dec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536DF0u;
        goto label_536df0;
    }
    ctx->pc = 0x536DE8u;
    {
        const bool branch_taken_0x536de8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x536de8) {
            ctx->pc = 0x536DECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536DE8u;
            // 0x536dec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536DFCu;
            goto label_536dfc;
        }
    }
    ctx->pc = 0x536DF0u;
label_536df0:
    // 0x536df0: 0xc0400a8  jal         func_1002A0
label_536df4:
    if (ctx->pc == 0x536DF4u) {
        ctx->pc = 0x536DF4u;
            // 0x536df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536DF8u;
        goto label_536df8;
    }
    ctx->pc = 0x536DF0u;
    SET_GPR_U32(ctx, 31, 0x536DF8u);
    ctx->pc = 0x536DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536DF0u;
            // 0x536df4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536DF8u; }
        if (ctx->pc != 0x536DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536DF8u; }
        if (ctx->pc != 0x536DF8u) { return; }
    }
    ctx->pc = 0x536DF8u;
label_536df8:
    // 0x536df8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536dfc:
    // 0x536dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536e00:
    // 0x536e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536e04:
    // 0x536e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536e08:
    // 0x536e08: 0x3e00008  jr          $ra
label_536e0c:
    if (ctx->pc == 0x536E0Cu) {
        ctx->pc = 0x536E0Cu;
            // 0x536e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536E10u;
        goto label_536e10;
    }
    ctx->pc = 0x536E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536E08u;
            // 0x536e0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536E10u;
label_536e10:
    // 0x536e10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x536e10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_536e14:
    // 0x536e14: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x536e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_536e18:
    // 0x536e18: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x536e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_536e1c:
    // 0x536e1c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x536e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_536e20:
    // 0x536e20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x536e20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_536e24:
    // 0x536e24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x536e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_536e28:
    // 0x536e28: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x536e28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_536e2c:
    // 0x536e2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536e30:
    // 0x536e30: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x536e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_536e34:
    // 0x536e34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536e38:
    // 0x536e38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x536e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536e3c:
    // 0x536e3c: 0x8c7189e0  lw          $s1, -0x7620($v1)
    ctx->pc = 0x536e3cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_536e40:
    // 0x536e40: 0x8c44b648  lw          $a0, -0x49B8($v0)
    ctx->pc = 0x536e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948424)));
label_536e44:
    // 0x536e44: 0xc0506ac  jal         func_141AB0
label_536e48:
    if (ctx->pc == 0x536E48u) {
        ctx->pc = 0x536E48u;
            // 0x536e48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536E4Cu;
        goto label_536e4c;
    }
    ctx->pc = 0x536E44u;
    SET_GPR_U32(ctx, 31, 0x536E4Cu);
    ctx->pc = 0x536E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536E44u;
            // 0x536e48: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536E4Cu; }
        if (ctx->pc != 0x536E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536E4Cu; }
        if (ctx->pc != 0x536E4Cu) { return; }
    }
    ctx->pc = 0x536E4Cu;
label_536e4c:
    // 0x536e4c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x536e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_536e50:
    // 0x536e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x536e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536e54:
    // 0x536e54: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x536e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_536e58:
    // 0x536e58: 0x320f809  jalr        $t9
label_536e5c:
    if (ctx->pc == 0x536E5Cu) {
        ctx->pc = 0x536E5Cu;
            // 0x536e5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x536E60u;
        goto label_536e60;
    }
    ctx->pc = 0x536E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536E60u);
        ctx->pc = 0x536E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536E58u;
            // 0x536e5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536E60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536E60u; }
            if (ctx->pc != 0x536E60u) { return; }
        }
        }
    }
    ctx->pc = 0x536E60u;
label_536e60:
    // 0x536e60: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x536e60u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536e64:
    // 0x536e64: 0x3c074280  lui         $a3, 0x4280
    ctx->pc = 0x536e64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17024 << 16));
label_536e68:
    // 0x536e68: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x536e68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_536e6c:
    // 0x536e6c: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x536e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_536e70:
    // 0x536e70: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x536e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_536e74:
    // 0x536e74: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x536e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_536e78:
    // 0x536e78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x536e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_536e7c:
    // 0x536e7c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x536e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_536e80:
    // 0x536e80: 0x24a5cfa0  addiu       $a1, $a1, -0x3060
    ctx->pc = 0x536e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954912));
label_536e84:
    // 0x536e84: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x536e84u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536e88:
    // 0x536e88: 0x0  nop
    ctx->pc = 0x536e88u;
    // NOP
label_536e8c:
    // 0x536e8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x536e8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_536e90:
    // 0x536e90: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x536e90u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_536e94:
    // 0x536e94: 0x0  nop
    ctx->pc = 0x536e94u;
    // NOP
label_536e98:
    // 0x536e98: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x536e98u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_536e9c:
    // 0x536e9c: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x536e9cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_536ea0:
    // 0x536ea0: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x536ea0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_536ea4:
    // 0x536ea4: 0xc0bc21c  jal         func_2F0870
label_536ea8:
    if (ctx->pc == 0x536EA8u) {
        ctx->pc = 0x536EA8u;
            // 0x536ea8: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x536EACu;
        goto label_536eac;
    }
    ctx->pc = 0x536EA4u;
    SET_GPR_U32(ctx, 31, 0x536EACu);
    ctx->pc = 0x536EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536EA4u;
            // 0x536ea8: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0870u;
    if (runtime->hasFunction(0x2F0870u)) {
        auto targetFn = runtime->lookupFunction(0x2F0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536EACu; }
        if (ctx->pc != 0x536EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0870_0x2f0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536EACu; }
        if (ctx->pc != 0x536EACu) { return; }
    }
    ctx->pc = 0x536EACu;
label_536eac:
    // 0x536eac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x536eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_536eb0:
    // 0x536eb0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x536eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_536eb4:
    // 0x536eb4: 0x320f809  jalr        $t9
label_536eb8:
    if (ctx->pc == 0x536EB8u) {
        ctx->pc = 0x536EB8u;
            // 0x536eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536EBCu;
        goto label_536ebc;
    }
    ctx->pc = 0x536EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x536EBCu);
        ctx->pc = 0x536EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536EB4u;
            // 0x536eb8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x536EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x536EBCu; }
            if (ctx->pc != 0x536EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x536EBCu;
label_536ebc:
    // 0x536ebc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x536ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_536ec0:
    // 0x536ec0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x536ec0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_536ec4:
    // 0x536ec4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x536ec4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_536ec8:
    // 0x536ec8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536ec8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536ecc:
    // 0x536ecc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536eccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536ed0:
    // 0x536ed0: 0x3e00008  jr          $ra
label_536ed4:
    if (ctx->pc == 0x536ED4u) {
        ctx->pc = 0x536ED4u;
            // 0x536ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x536ED8u;
        goto label_536ed8;
    }
    ctx->pc = 0x536ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536ED0u;
            // 0x536ed4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536ED8u;
label_536ed8:
    // 0x536ed8: 0x0  nop
    ctx->pc = 0x536ed8u;
    // NOP
label_536edc:
    // 0x536edc: 0x0  nop
    ctx->pc = 0x536edcu;
    // NOP
label_536ee0:
    // 0x536ee0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x536ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_536ee4:
    // 0x536ee4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x536ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_536ee8:
    // 0x536ee8: 0x8c670e80  lw          $a3, 0xE80($v1)
    ctx->pc = 0x536ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_536eec:
    // 0x536eec: 0x24c6d1a0  addiu       $a2, $a2, -0x2E60
    ctx->pc = 0x536eecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294955424));
label_536ef0:
    // 0x536ef0: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x536ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_536ef4:
    // 0x536ef4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x536ef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_536ef8:
    // 0x536ef8: 0x84830004  lh          $v1, 0x4($a0)
    ctx->pc = 0x536ef8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_536efc:
    // 0x536efc: 0x8ce70968  lw          $a3, 0x968($a3)
    ctx->pc = 0x536efcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2408)));
label_536f00:
    // 0x536f00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x536f00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536f04:
    // 0x536f04: 0x0  nop
    ctx->pc = 0x536f04u;
    // NOP
label_536f08:
    // 0x536f08: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x536f08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_536f0c:
    // 0x536f0c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x536f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_536f10:
    // 0x536f10: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x536f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_536f14:
    // 0x536f14: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x536f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_536f18:
    // 0x536f18: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x536f18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_536f1c:
    // 0x536f1c: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x536f1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_536f20:
    // 0x536f20: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x536f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_536f24:
    // 0x536f24: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x536f24u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_536f28:
    // 0x536f28: 0x0  nop
    ctx->pc = 0x536f28u;
    // NOP
label_536f2c:
    // 0x536f2c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x536f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_536f30:
    // 0x536f30: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x536f30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_536f34:
    // 0x536f34: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x536f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_536f38:
    // 0x536f38: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x536f38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_536f3c:
    // 0x536f3c: 0x0  nop
    ctx->pc = 0x536f3cu;
    // NOP
label_536f40:
    // 0x536f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x536f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_536f44:
    // 0x536f44: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x536f44u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_536f48:
    // 0x536f48: 0x4603081c  madd.s      $f0, $f1, $f3
    ctx->pc = 0x536f48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[3]));
label_536f4c:
    // 0x536f4c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x536f4cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_536f50:
    // 0x536f50: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x536f50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_536f54:
    // 0x536f54: 0x3e00008  jr          $ra
label_536f58:
    if (ctx->pc == 0x536F58u) {
        ctx->pc = 0x536F58u;
            // 0x536f58: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x536F5Cu;
        goto label_536f5c;
    }
    ctx->pc = 0x536F54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536F54u;
            // 0x536f58: 0xa4a30002  sh          $v1, 0x2($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536F5Cu;
label_536f5c:
    // 0x536f5c: 0x0  nop
    ctx->pc = 0x536f5cu;
    // NOP
label_536f60:
    // 0x536f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x536f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_536f64:
    // 0x536f64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x536f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_536f68:
    // 0x536f68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x536f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_536f6c:
    // 0x536f6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_536f70:
    // 0x536f70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x536f70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_536f74:
    // 0x536f74: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_536f78:
    if (ctx->pc == 0x536F78u) {
        ctx->pc = 0x536F78u;
            // 0x536f78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536F7Cu;
        goto label_536f7c;
    }
    ctx->pc = 0x536F74u;
    {
        const bool branch_taken_0x536f74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x536F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536F74u;
            // 0x536f78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536f74) {
            ctx->pc = 0x536FD0u;
            goto label_536fd0;
        }
    }
    ctx->pc = 0x536F7Cu;
label_536f7c:
    // 0x536f7c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x536f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_536f80:
    // 0x536f80: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x536f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_536f84:
    // 0x536f84: 0x24636f90  addiu       $v1, $v1, 0x6F90
    ctx->pc = 0x536f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28560));
label_536f88:
    // 0x536f88: 0x2442b650  addiu       $v0, $v0, -0x49B0
    ctx->pc = 0x536f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948432));
label_536f8c:
    // 0x536f8c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x536f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_536f90:
    // 0x536f90: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x536f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_536f94:
    // 0x536f94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x536f94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_536f98:
    // 0x536f98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x536f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_536f9c:
    // 0x536f9c: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_536fa0:
    if (ctx->pc == 0x536FA0u) {
        ctx->pc = 0x536FA0u;
            // 0x536fa0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x536FA4u;
        goto label_536fa4;
    }
    ctx->pc = 0x536F9Cu;
    {
        const bool branch_taken_0x536f9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x536FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536F9Cu;
            // 0x536fa0: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x536f9c) {
            ctx->pc = 0x536FB8u;
            goto label_536fb8;
        }
    }
    ctx->pc = 0x536FA4u;
label_536fa4:
    // 0x536fa4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x536fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_536fa8:
    // 0x536fa8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x536fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_536fac:
    // 0x536fac: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x536facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_536fb0:
    // 0x536fb0: 0xc057a68  jal         func_15E9A0
label_536fb4:
    if (ctx->pc == 0x536FB4u) {
        ctx->pc = 0x536FB4u;
            // 0x536fb4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x536FB8u;
        goto label_536fb8;
    }
    ctx->pc = 0x536FB0u;
    SET_GPR_U32(ctx, 31, 0x536FB8u);
    ctx->pc = 0x536FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536FB0u;
            // 0x536fb4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536FB8u; }
        if (ctx->pc != 0x536FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536FB8u; }
        if (ctx->pc != 0x536FB8u) { return; }
    }
    ctx->pc = 0x536FB8u;
label_536fb8:
    // 0x536fb8: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x536fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_536fbc:
    // 0x536fbc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x536fbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_536fc0:
    // 0x536fc0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_536fc4:
    if (ctx->pc == 0x536FC4u) {
        ctx->pc = 0x536FC4u;
            // 0x536fc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536FC8u;
        goto label_536fc8;
    }
    ctx->pc = 0x536FC0u;
    {
        const bool branch_taken_0x536fc0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x536fc0) {
            ctx->pc = 0x536FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x536FC0u;
            // 0x536fc4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x536FD4u;
            goto label_536fd4;
        }
    }
    ctx->pc = 0x536FC8u;
label_536fc8:
    // 0x536fc8: 0xc0400a8  jal         func_1002A0
label_536fcc:
    if (ctx->pc == 0x536FCCu) {
        ctx->pc = 0x536FCCu;
            // 0x536fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x536FD0u;
        goto label_536fd0;
    }
    ctx->pc = 0x536FC8u;
    SET_GPR_U32(ctx, 31, 0x536FD0u);
    ctx->pc = 0x536FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x536FC8u;
            // 0x536fcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536FD0u; }
        if (ctx->pc != 0x536FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x536FD0u; }
        if (ctx->pc != 0x536FD0u) { return; }
    }
    ctx->pc = 0x536FD0u;
label_536fd0:
    // 0x536fd0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x536fd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_536fd4:
    // 0x536fd4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x536fd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_536fd8:
    // 0x536fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x536fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_536fdc:
    // 0x536fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x536fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_536fe0:
    // 0x536fe0: 0x3e00008  jr          $ra
label_536fe4:
    if (ctx->pc == 0x536FE4u) {
        ctx->pc = 0x536FE4u;
            // 0x536fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x536FE8u;
        goto label_536fe8;
    }
    ctx->pc = 0x536FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x536FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x536FE0u;
            // 0x536fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x536FE8u;
label_536fe8:
    // 0x536fe8: 0x0  nop
    ctx->pc = 0x536fe8u;
    // NOP
label_536fec:
    // 0x536fec: 0x0  nop
    ctx->pc = 0x536fecu;
    // NOP
label_536ff0:
    // 0x536ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x536ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_536ff4:
    // 0x536ff4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x536ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_536ff8:
    // 0x536ff8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x536ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_536ffc:
    // 0x536ffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x536ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537000:
    // 0x537000: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x537000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_537004:
    // 0x537004: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
label_537008:
    if (ctx->pc == 0x537008u) {
        ctx->pc = 0x537008u;
            // 0x537008: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53700Cu;
        goto label_53700c;
    }
    ctx->pc = 0x537004u;
    {
        const bool branch_taken_0x537004 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x537004) {
            ctx->pc = 0x537008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537004u;
            // 0x537008: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5370B8u;
            goto label_5370b8;
        }
    }
    ctx->pc = 0x53700Cu;
label_53700c:
    // 0x53700c: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x53700cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_537010:
    // 0x537010: 0x42880  sll         $a1, $a0, 2
    ctx->pc = 0x537010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_537014:
    // 0x537014: 0x2463b650  addiu       $v1, $v1, -0x49B0
    ctx->pc = 0x537014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948432));
label_537018:
    // 0x537018: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x537018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_53701c:
    // 0x53701c: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x53701cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_537020:
    // 0x537020: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_537024:
    if (ctx->pc == 0x537024u) {
        ctx->pc = 0x537028u;
        goto label_537028;
    }
    ctx->pc = 0x537020u;
    {
        const bool branch_taken_0x537020 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x537020) {
            ctx->pc = 0x5370B4u;
            goto label_5370b4;
        }
    }
    ctx->pc = 0x537028u;
label_537028:
    // 0x537028: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x537028u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_53702c:
    // 0x53702c: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x53702cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_537030:
    // 0x537030: 0x1082000c  beq         $a0, $v0, . + 4 + (0xC << 2)
label_537034:
    if (ctx->pc == 0x537034u) {
        ctx->pc = 0x537034u;
            // 0x537034: 0x3405c35a  ori         $a1, $zero, 0xC35A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50010);
        ctx->pc = 0x537038u;
        goto label_537038;
    }
    ctx->pc = 0x537030u;
    {
        const bool branch_taken_0x537030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x537034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537030u;
            // 0x537034: 0x3405c35a  ori         $a1, $zero, 0xC35A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50010);
        ctx->in_delay_slot = false;
        if (branch_taken_0x537030) {
            ctx->pc = 0x537064u;
            goto label_537064;
        }
    }
    ctx->pc = 0x537038u;
label_537038:
    // 0x537038: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x537038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_53703c:
    // 0x53703c: 0x5082000a  beql        $a0, $v0, . + 4 + (0xA << 2)
label_537040:
    if (ctx->pc == 0x537040u) {
        ctx->pc = 0x537040u;
            // 0x537040: 0x3405c378  ori         $a1, $zero, 0xC378 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50040);
        ctx->pc = 0x537044u;
        goto label_537044;
    }
    ctx->pc = 0x53703Cu;
    {
        const bool branch_taken_0x53703c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x53703c) {
            ctx->pc = 0x537040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x53703Cu;
            // 0x537040: 0x3405c378  ori         $a1, $zero, 0xC378 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50040);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537068u;
            goto label_537068;
        }
    }
    ctx->pc = 0x537044u;
label_537044:
    // 0x537044: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x537044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_537048:
    // 0x537048: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_53704c:
    if (ctx->pc == 0x53704Cu) {
        ctx->pc = 0x53704Cu;
            // 0x53704c: 0x3405c364  ori         $a1, $zero, 0xC364 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50020);
        ctx->pc = 0x537050u;
        goto label_537050;
    }
    ctx->pc = 0x537048u;
    {
        const bool branch_taken_0x537048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x537048) {
            ctx->pc = 0x53704Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537048u;
            // 0x53704c: 0x3405c364  ori         $a1, $zero, 0xC364 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50020);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537068u;
            goto label_537068;
        }
    }
    ctx->pc = 0x537050u;
label_537050:
    // 0x537050: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x537050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_537054:
    // 0x537054: 0x50820004  beql        $a0, $v0, . + 4 + (0x4 << 2)
label_537058:
    if (ctx->pc == 0x537058u) {
        ctx->pc = 0x537058u;
            // 0x537058: 0x34059290  ori         $a1, $zero, 0x9290 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37520);
        ctx->pc = 0x53705Cu;
        goto label_53705c;
    }
    ctx->pc = 0x537054u;
    {
        const bool branch_taken_0x537054 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x537054) {
            ctx->pc = 0x537058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537054u;
            // 0x537058: 0x34059290  ori         $a1, $zero, 0x9290 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37520);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537068u;
            goto label_537068;
        }
    }
    ctx->pc = 0x53705Cu;
label_53705c:
    // 0x53705c: 0x10000002  b           . + 4 + (0x2 << 2)
label_537060:
    if (ctx->pc == 0x537060u) {
        ctx->pc = 0x537064u;
        goto label_537064;
    }
    ctx->pc = 0x53705Cu;
    {
        const bool branch_taken_0x53705c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x53705c) {
            ctx->pc = 0x537068u;
            goto label_537068;
        }
    }
    ctx->pc = 0x537064u;
label_537064:
    // 0x537064: 0x3405c38c  ori         $a1, $zero, 0xC38C
    ctx->pc = 0x537064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50060);
label_537068:
    // 0x537068: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x537068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53706c:
    // 0x53706c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53706cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537070:
    // 0x537070: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x537070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_537074:
    // 0x537074: 0xc0b3a28  jal         func_2CE8A0
label_537078:
    if (ctx->pc == 0x537078u) {
        ctx->pc = 0x537078u;
            // 0x537078: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53707Cu;
        goto label_53707c;
    }
    ctx->pc = 0x537074u;
    SET_GPR_U32(ctx, 31, 0x53707Cu);
    ctx->pc = 0x537078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537074u;
            // 0x537078: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53707Cu; }
        if (ctx->pc != 0x53707Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53707Cu; }
        if (ctx->pc != 0x53707Cu) { return; }
    }
    ctx->pc = 0x53707Cu;
label_53707c:
    // 0x53707c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53707cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537080:
    // 0x537080: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x537080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_537084:
    // 0x537084: 0xc04b156  jal         func_12C558
label_537088:
    if (ctx->pc == 0x537088u) {
        ctx->pc = 0x537088u;
            // 0x537088: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x53708Cu;
        goto label_53708c;
    }
    ctx->pc = 0x537084u;
    SET_GPR_U32(ctx, 31, 0x53708Cu);
    ctx->pc = 0x537088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537084u;
            // 0x537088: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53708Cu; }
        if (ctx->pc != 0x53708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53708Cu; }
        if (ctx->pc != 0x53708Cu) { return; }
    }
    ctx->pc = 0x53708Cu;
label_53708c:
    // 0x53708c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53708cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537090:
    // 0x537090: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x537090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_537094:
    // 0x537094: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x537094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_537098:
    // 0x537098: 0xc0aa514  jal         func_2A9450
label_53709c:
    if (ctx->pc == 0x53709Cu) {
        ctx->pc = 0x53709Cu;
            // 0x53709c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5370A0u;
        goto label_5370a0;
    }
    ctx->pc = 0x537098u;
    SET_GPR_U32(ctx, 31, 0x5370A0u);
    ctx->pc = 0x53709Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537098u;
            // 0x53709c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9450u;
    if (runtime->hasFunction(0x2A9450u)) {
        auto targetFn = runtime->lookupFunction(0x2A9450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5370A0u; }
        if (ctx->pc != 0x5370A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9450_0x2a9450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5370A0u; }
        if (ctx->pc != 0x5370A0u) { return; }
    }
    ctx->pc = 0x5370A0u;
label_5370a0:
    // 0x5370a0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x5370a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_5370a4:
    // 0x5370a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x5370a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5370a8:
    // 0x5370a8: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x5370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_5370ac:
    // 0x5370ac: 0xc057b7c  jal         func_15EDF0
label_5370b0:
    if (ctx->pc == 0x5370B0u) {
        ctx->pc = 0x5370B0u;
            // 0x5370b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x5370B4u;
        goto label_5370b4;
    }
    ctx->pc = 0x5370ACu;
    SET_GPR_U32(ctx, 31, 0x5370B4u);
    ctx->pc = 0x5370B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5370ACu;
            // 0x5370b0: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5370B4u; }
        if (ctx->pc != 0x5370B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5370B4u; }
        if (ctx->pc != 0x5370B4u) { return; }
    }
    ctx->pc = 0x5370B4u;
label_5370b4:
    // 0x5370b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5370b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5370b8:
    // 0x5370b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5370b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5370bc:
    // 0x5370bc: 0x3e00008  jr          $ra
label_5370c0:
    if (ctx->pc == 0x5370C0u) {
        ctx->pc = 0x5370C0u;
            // 0x5370c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5370C4u;
        goto label_5370c4;
    }
    ctx->pc = 0x5370BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5370C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5370BCu;
            // 0x5370c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5370C4u;
label_5370c4:
    // 0x5370c4: 0x0  nop
    ctx->pc = 0x5370c4u;
    // NOP
label_5370c8:
    // 0x5370c8: 0x0  nop
    ctx->pc = 0x5370c8u;
    // NOP
label_5370cc:
    // 0x5370cc: 0x0  nop
    ctx->pc = 0x5370ccu;
    // NOP
label_5370d0:
    // 0x5370d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5370d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5370d4:
    // 0x5370d4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x5370d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_5370d8:
    // 0x5370d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5370d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5370dc:
    // 0x5370dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5370dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5370e0:
    // 0x5370e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5370e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5370e4:
    // 0x5370e4: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x5370e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_5370e8:
    // 0x5370e8: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x5370e8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_5370ec:
    // 0x5370ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5370ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5370f0:
    // 0x5370f0: 0x5083003c  beql        $a0, $v1, . + 4 + (0x3C << 2)
label_5370f4:
    if (ctx->pc == 0x5370F4u) {
        ctx->pc = 0x5370F4u;
            // 0x5370f4: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x5370F8u;
        goto label_5370f8;
    }
    ctx->pc = 0x5370F0u;
    {
        const bool branch_taken_0x5370f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5370f0) {
            ctx->pc = 0x5370F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5370F0u;
            // 0x5370f4: 0x24a40004  addiu       $a0, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5371E4u;
            goto label_5371e4;
        }
    }
    ctx->pc = 0x5370F8u;
label_5370f8:
    // 0x5370f8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x5370f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5370fc:
    // 0x5370fc: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_537100:
    if (ctx->pc == 0x537100u) {
        ctx->pc = 0x537100u;
            // 0x537100: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x537104u;
        goto label_537104;
    }
    ctx->pc = 0x5370FCu;
    {
        const bool branch_taken_0x5370fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x5370fc) {
            ctx->pc = 0x537100u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5370FCu;
            // 0x537100: 0x8e030068  lw          $v1, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x53710Cu;
            goto label_53710c;
        }
    }
    ctx->pc = 0x537104u;
label_537104:
    // 0x537104: 0x1000003a  b           . + 4 + (0x3A << 2)
label_537108:
    if (ctx->pc == 0x537108u) {
        ctx->pc = 0x537108u;
            // 0x537108: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x53710Cu;
        goto label_53710c;
    }
    ctx->pc = 0x537104u;
    {
        const bool branch_taken_0x537104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x537108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537104u;
            // 0x537108: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537104) {
            ctx->pc = 0x5371F0u;
            goto label_5371f0;
        }
    }
    ctx->pc = 0x53710Cu;
label_53710c:
    // 0x53710c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x53710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_537110:
    // 0x537110: 0x14640036  bne         $v1, $a0, . + 4 + (0x36 << 2)
label_537114:
    if (ctx->pc == 0x537114u) {
        ctx->pc = 0x537118u;
        goto label_537118;
    }
    ctx->pc = 0x537110u;
    {
        const bool branch_taken_0x537110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x537110) {
            ctx->pc = 0x5371ECu;
            goto label_5371ec;
        }
    }
    ctx->pc = 0x537118u;
label_537118:
    // 0x537118: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x537118u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_53711c:
    // 0x53711c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_537120:
    if (ctx->pc == 0x537120u) {
        ctx->pc = 0x537124u;
        goto label_537124;
    }
    ctx->pc = 0x53711Cu;
    {
        const bool branch_taken_0x53711c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x53711c) {
            ctx->pc = 0x537130u;
            goto label_537130;
        }
    }
    ctx->pc = 0x537124u;
label_537124:
    // 0x537124: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x537124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_537128:
    // 0x537128: 0x14640030  bne         $v1, $a0, . + 4 + (0x30 << 2)
label_53712c:
    if (ctx->pc == 0x53712Cu) {
        ctx->pc = 0x537130u;
        goto label_537130;
    }
    ctx->pc = 0x537128u;
    {
        const bool branch_taken_0x537128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x537128) {
            ctx->pc = 0x5371ECu;
            goto label_5371ec;
        }
    }
    ctx->pc = 0x537130u;
label_537130:
    // 0x537130: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x537130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_537134:
    // 0x537134: 0x8e060058  lw          $a2, 0x58($s0)
    ctx->pc = 0x537134u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_537138:
    // 0x537138: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x537138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_53713c:
    // 0x53713c: 0x8e050064  lw          $a1, 0x64($s0)
    ctx->pc = 0x53713cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_537140:
    // 0x537140: 0xc0ab89c  jal         func_2AE270
label_537144:
    if (ctx->pc == 0x537144u) {
        ctx->pc = 0x537144u;
            // 0x537144: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537148u;
        goto label_537148;
    }
    ctx->pc = 0x537140u;
    SET_GPR_U32(ctx, 31, 0x537148u);
    ctx->pc = 0x537144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537140u;
            // 0x537144: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537148u; }
        if (ctx->pc != 0x537148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537148u; }
        if (ctx->pc != 0x537148u) { return; }
    }
    ctx->pc = 0x537148u;
label_537148:
    // 0x537148: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x537148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_53714c:
    // 0x53714c: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x53714cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_537150:
    // 0x537150: 0x8e060064  lw          $a2, 0x64($s0)
    ctx->pc = 0x537150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_537154:
    // 0x537154: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x537154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_537158:
    // 0x537158: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x537158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_53715c:
    // 0x53715c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x53715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_537160:
    // 0x537160: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x537160u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_537164:
    // 0x537164: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x537164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_537168:
    // 0x537168: 0xac430070  sw          $v1, 0x70($v0)
    ctx->pc = 0x537168u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 3));
label_53716c:
    // 0x53716c: 0xac460060  sw          $a2, 0x60($v0)
    ctx->pc = 0x53716cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 6));
label_537170:
    // 0x537170: 0x92020061  lbu         $v0, 0x61($s0)
    ctx->pc = 0x537170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_537174:
    // 0x537174: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_537178:
    if (ctx->pc == 0x537178u) {
        ctx->pc = 0x537178u;
            // 0x537178: 0x92020060  lbu         $v0, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x53717Cu;
        goto label_53717c;
    }
    ctx->pc = 0x537174u;
    {
        const bool branch_taken_0x537174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x537174) {
            ctx->pc = 0x537178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537174u;
            // 0x537178: 0x92020060  lbu         $v0, 0x60($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5371A0u;
            goto label_5371a0;
        }
    }
    ctx->pc = 0x53717Cu;
label_53717c:
    // 0x53717c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x53717cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_537180:
    // 0x537180: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x537180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_537184:
    // 0x537184: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x537184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_537188:
    // 0x537188: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x537188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_53718c:
    // 0x53718c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x53718cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_537190:
    // 0x537190: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x537190u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_537194:
    // 0x537194: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x537194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_537198:
    // 0x537198: 0xac44005c  sw          $a0, 0x5C($v0)
    ctx->pc = 0x537198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 4));
label_53719c:
    // 0x53719c: 0x92020060  lbu         $v0, 0x60($s0)
    ctx->pc = 0x53719cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_5371a0:
    // 0x5371a0: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_5371a4:
    if (ctx->pc == 0x5371A4u) {
        ctx->pc = 0x5371A4u;
            // 0x5371a4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x5371A8u;
        goto label_5371a8;
    }
    ctx->pc = 0x5371A0u;
    {
        const bool branch_taken_0x5371a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5371a0) {
            ctx->pc = 0x5371A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5371A0u;
            // 0x5371a4: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5371D0u;
            goto label_5371d0;
        }
    }
    ctx->pc = 0x5371A8u;
label_5371a8:
    // 0x5371a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x5371a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_5371ac:
    // 0x5371ac: 0x8e05006c  lw          $a1, 0x6C($s0)
    ctx->pc = 0x5371acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_5371b0:
    // 0x5371b0: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x5371b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_5371b4:
    // 0x5371b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x5371b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5371b8:
    // 0x5371b8: 0xc0ab89c  jal         func_2AE270
label_5371bc:
    if (ctx->pc == 0x5371BCu) {
        ctx->pc = 0x5371BCu;
            // 0x5371bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5371C0u;
        goto label_5371c0;
    }
    ctx->pc = 0x5371B8u;
    SET_GPR_U32(ctx, 31, 0x5371C0u);
    ctx->pc = 0x5371BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5371B8u;
            // 0x5371bc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE270u;
    if (runtime->hasFunction(0x2AE270u)) {
        auto targetFn = runtime->lookupFunction(0x2AE270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5371C0u; }
        if (ctx->pc != 0x5371C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE270_0x2ae270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5371C0u; }
        if (ctx->pc != 0x5371C0u) { return; }
    }
    ctx->pc = 0x5371C0u;
label_5371c0:
    // 0x5371c0: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x5371c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
label_5371c4:
    // 0x5371c4: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x5371c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_5371c8:
    // 0x5371c8: 0xac43039c  sw          $v1, 0x39C($v0)
    ctx->pc = 0x5371c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 3));
label_5371cc:
    // 0x5371cc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5371ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5371d0:
    // 0x5371d0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x5371d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_5371d4:
    // 0x5371d4: 0x320f809  jalr        $t9
label_5371d8:
    if (ctx->pc == 0x5371D8u) {
        ctx->pc = 0x5371D8u;
            // 0x5371d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5371DCu;
        goto label_5371dc;
    }
    ctx->pc = 0x5371D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5371DCu);
        ctx->pc = 0x5371D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5371D4u;
            // 0x5371d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5371DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5371DCu; }
            if (ctx->pc != 0x5371DCu) { return; }
        }
        }
    }
    ctx->pc = 0x5371DCu;
label_5371dc:
    // 0x5371dc: 0x10000003  b           . + 4 + (0x3 << 2)
label_5371e0:
    if (ctx->pc == 0x5371E0u) {
        ctx->pc = 0x5371E4u;
        goto label_5371e4;
    }
    ctx->pc = 0x5371DCu;
    {
        const bool branch_taken_0x5371dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5371dc) {
            ctx->pc = 0x5371ECu;
            goto label_5371ec;
        }
    }
    ctx->pc = 0x5371E4u;
label_5371e4:
    // 0x5371e4: 0xc057b7c  jal         func_15EDF0
label_5371e8:
    if (ctx->pc == 0x5371E8u) {
        ctx->pc = 0x5371E8u;
            // 0x5371e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5371ECu;
        goto label_5371ec;
    }
    ctx->pc = 0x5371E4u;
    SET_GPR_U32(ctx, 31, 0x5371ECu);
    ctx->pc = 0x5371E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5371E4u;
            // 0x5371e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5371ECu; }
        if (ctx->pc != 0x5371ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5371ECu; }
        if (ctx->pc != 0x5371ECu) { return; }
    }
    ctx->pc = 0x5371ECu;
label_5371ec:
    // 0x5371ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5371ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5371f0:
    // 0x5371f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5371f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5371f4:
    // 0x5371f4: 0x3e00008  jr          $ra
label_5371f8:
    if (ctx->pc == 0x5371F8u) {
        ctx->pc = 0x5371F8u;
            // 0x5371f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5371FCu;
        goto label_5371fc;
    }
    ctx->pc = 0x5371F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5371F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5371F4u;
            // 0x5371f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5371FCu;
label_5371fc:
    // 0x5371fc: 0x0  nop
    ctx->pc = 0x5371fcu;
    // NOP
label_537200:
    // 0x537200: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x537200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_537204:
    // 0x537204: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x537204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_537208:
    // 0x537208: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x537208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_53720c:
    // 0x53720c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x53720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_537210:
    // 0x537210: 0x160f02d  daddu       $fp, $t3, $zero
    ctx->pc = 0x537210u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_537214:
    // 0x537214: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x537214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_537218:
    // 0x537218: 0x140b82d  daddu       $s7, $t2, $zero
    ctx->pc = 0x537218u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_53721c:
    // 0x53721c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x53721cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_537220:
    // 0x537220: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x537220u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_537224:
    // 0x537224: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x537224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_537228:
    // 0x537228: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x537228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53722c:
    // 0x53722c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x53722cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_537230:
    // 0x537230: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x537230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_537234:
    // 0x537234: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x537234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_537238:
    // 0x537238: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x537238u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_53723c:
    // 0x53723c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x53723cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_537240:
    // 0x537240: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x537240u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_537244:
    // 0x537244: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x537244u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_537248:
    // 0x537248: 0x24040074  addiu       $a0, $zero, 0x74
    ctx->pc = 0x537248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_53724c:
    // 0x53724c: 0xc040180  jal         func_100600
label_537250:
    if (ctx->pc == 0x537250u) {
        ctx->pc = 0x537250u;
            // 0x537250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x537254u;
        goto label_537254;
    }
    ctx->pc = 0x53724Cu;
    SET_GPR_U32(ctx, 31, 0x537254u);
    ctx->pc = 0x537250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53724Cu;
            // 0x537250: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537254u; }
        if (ctx->pc != 0x537254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537254u; }
        if (ctx->pc != 0x537254u) { return; }
    }
    ctx->pc = 0x537254u;
label_537254:
    // 0x537254: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_537258:
    if (ctx->pc == 0x537258u) {
        ctx->pc = 0x537258u;
            // 0x537258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53725Cu;
        goto label_53725c;
    }
    ctx->pc = 0x537254u;
    {
        const bool branch_taken_0x537254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x537258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537254u;
            // 0x537258: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537254) {
            ctx->pc = 0x537394u;
            goto label_537394;
        }
    }
    ctx->pc = 0x53725Cu;
label_53725c:
    // 0x53725c: 0x32820008  andi        $v0, $s4, 0x8
    ctx->pc = 0x53725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)8);
label_537260:
    // 0x537260: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_537264:
    if (ctx->pc == 0x537264u) {
        ctx->pc = 0x537264u;
            // 0x537264: 0x32860007  andi        $a2, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
        ctx->pc = 0x537268u;
        goto label_537268;
    }
    ctx->pc = 0x537260u;
    {
        const bool branch_taken_0x537260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x537264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537260u;
            // 0x537264: 0x32860007  andi        $a2, $s4, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x537260) {
            ctx->pc = 0x537270u;
            goto label_537270;
        }
    }
    ctx->pc = 0x537268u;
label_537268:
    // 0x537268: 0x10000002  b           . + 4 + (0x2 << 2)
label_53726c:
    if (ctx->pc == 0x53726Cu) {
        ctx->pc = 0x53726Cu;
            // 0x53726c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537270u;
        goto label_537270;
    }
    ctx->pc = 0x537268u;
    {
        const bool branch_taken_0x537268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x53726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537268u;
            // 0x53726c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537268) {
            ctx->pc = 0x537274u;
            goto label_537274;
        }
    }
    ctx->pc = 0x537270u;
label_537270:
    // 0x537270: 0x32870004  andi        $a3, $s4, 0x4
    ctx->pc = 0x537270u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)4);
label_537274:
    // 0x537274: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x537274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_537278:
    // 0x537278: 0xc10ca68  jal         func_4329A0
label_53727c:
    if (ctx->pc == 0x53727Cu) {
        ctx->pc = 0x53727Cu;
            // 0x53727c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537280u;
        goto label_537280;
    }
    ctx->pc = 0x537278u;
    SET_GPR_U32(ctx, 31, 0x537280u);
    ctx->pc = 0x53727Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537278u;
            // 0x53727c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537280u; }
        if (ctx->pc != 0x537280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537280u; }
        if (ctx->pc != 0x537280u) { return; }
    }
    ctx->pc = 0x537280u;
label_537280:
    // 0x537280: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x537280u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_537284:
    // 0x537284: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x537284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_537288:
    // 0x537288: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x537288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_53728c:
    // 0x53728c: 0x24426f90  addiu       $v0, $v0, 0x6F90
    ctx->pc = 0x53728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28560));
label_537290:
    // 0x537290: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x537290u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_537294:
    // 0x537294: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x537294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_537298:
    // 0x537298: 0x2201826  xor         $v1, $s1, $zero
    ctx->pc = 0x537298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 0));
label_53729c:
    // 0x53729c: 0xae130054  sw          $s3, 0x54($s0)
    ctx->pc = 0x53729cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 19));
label_5372a0:
    // 0x5372a0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x5372a0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_5372a4:
    // 0x5372a4: 0xae120058  sw          $s2, 0x58($s0)
    ctx->pc = 0x5372a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 18));
label_5372a8:
    // 0x5372a8: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x5372a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_5372ac:
    // 0x5372ac: 0xae16005c  sw          $s6, 0x5C($s0)
    ctx->pc = 0x5372acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 22));
label_5372b0:
    // 0x5372b0: 0xa2170060  sb          $s7, 0x60($s0)
    ctx->pc = 0x5372b0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 23));
label_5372b4:
    // 0x5372b4: 0xae110064  sw          $s1, 0x64($s0)
    ctx->pc = 0x5372b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 17));
label_5372b8:
    // 0x5372b8: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x5372b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
label_5372bc:
    // 0x5372bc: 0xae1e006c  sw          $fp, 0x6C($s0)
    ctx->pc = 0x5372bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 30));
label_5372c0:
    // 0x5372c0: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x5372c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_5372c4:
    // 0x5372c4: 0xa2030061  sb          $v1, 0x61($s0)
    ctx->pc = 0x5372c4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 3));
label_5372c8:
    // 0x5372c8: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x5372c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5372cc:
    // 0x5372cc: 0x8e06005c  lw          $a2, 0x5C($s0)
    ctx->pc = 0x5372ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_5372d0:
    // 0x5372d0: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_5372d4:
    if (ctx->pc == 0x5372D4u) {
        ctx->pc = 0x5372D4u;
            // 0x5372d4: 0x3405c35a  ori         $a1, $zero, 0xC35A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50010);
        ctx->pc = 0x5372D8u;
        goto label_5372d8;
    }
    ctx->pc = 0x5372D0u;
    {
        const bool branch_taken_0x5372d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5372D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5372D0u;
            // 0x5372d4: 0x3405c35a  ori         $a1, $zero, 0xC35A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50010);
        ctx->in_delay_slot = false;
        if (branch_taken_0x5372d0) {
            ctx->pc = 0x537304u;
            goto label_537304;
        }
    }
    ctx->pc = 0x5372D8u;
label_5372d8:
    // 0x5372d8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x5372d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_5372dc:
    // 0x5372dc: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_5372e0:
    if (ctx->pc == 0x5372E0u) {
        ctx->pc = 0x5372E0u;
            // 0x5372e0: 0x3405c378  ori         $a1, $zero, 0xC378 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50040);
        ctx->pc = 0x5372E4u;
        goto label_5372e4;
    }
    ctx->pc = 0x5372DCu;
    {
        const bool branch_taken_0x5372dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5372dc) {
            ctx->pc = 0x5372E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5372DCu;
            // 0x5372e0: 0x3405c378  ori         $a1, $zero, 0xC378 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50040);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537308u;
            goto label_537308;
        }
    }
    ctx->pc = 0x5372E4u;
label_5372e4:
    // 0x5372e4: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x5372e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_5372e8:
    // 0x5372e8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
label_5372ec:
    if (ctx->pc == 0x5372ECu) {
        ctx->pc = 0x5372ECu;
            // 0x5372ec: 0x3405c364  ori         $a1, $zero, 0xC364 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50020);
        ctx->pc = 0x5372F0u;
        goto label_5372f0;
    }
    ctx->pc = 0x5372E8u;
    {
        const bool branch_taken_0x5372e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5372e8) {
            ctx->pc = 0x5372ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5372E8u;
            // 0x5372ec: 0x3405c364  ori         $a1, $zero, 0xC364 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50020);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537308u;
            goto label_537308;
        }
    }
    ctx->pc = 0x5372F0u;
label_5372f0:
    // 0x5372f0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x5372f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5372f4:
    // 0x5372f4: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_5372f8:
    if (ctx->pc == 0x5372F8u) {
        ctx->pc = 0x5372F8u;
            // 0x5372f8: 0x34059290  ori         $a1, $zero, 0x9290 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37520);
        ctx->pc = 0x5372FCu;
        goto label_5372fc;
    }
    ctx->pc = 0x5372F4u;
    {
        const bool branch_taken_0x5372f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5372f4) {
            ctx->pc = 0x5372F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5372F4u;
            // 0x5372f8: 0x34059290  ori         $a1, $zero, 0x9290 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37520);
        ctx->in_delay_slot = false;
            ctx->pc = 0x537308u;
            goto label_537308;
        }
    }
    ctx->pc = 0x5372FCu;
label_5372fc:
    // 0x5372fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_537300:
    if (ctx->pc == 0x537300u) {
        ctx->pc = 0x537304u;
        goto label_537304;
    }
    ctx->pc = 0x5372FCu;
    {
        const bool branch_taken_0x5372fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5372fc) {
            ctx->pc = 0x537308u;
            goto label_537308;
        }
    }
    ctx->pc = 0x537304u;
label_537304:
    // 0x537304: 0x3405c38c  ori         $a1, $zero, 0xC38C
    ctx->pc = 0x537304u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50060);
label_537308:
    // 0x537308: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x537308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_53730c:
    // 0x53730c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x53730cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537310:
    // 0x537310: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x537310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_537314:
    // 0x537314: 0xc0b3a28  jal         func_2CE8A0
label_537318:
    if (ctx->pc == 0x537318u) {
        ctx->pc = 0x537318u;
            // 0x537318: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53731Cu;
        goto label_53731c;
    }
    ctx->pc = 0x537314u;
    SET_GPR_U32(ctx, 31, 0x53731Cu);
    ctx->pc = 0x537318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537314u;
            // 0x537318: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53731Cu; }
        if (ctx->pc != 0x53731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53731Cu; }
        if (ctx->pc != 0x53731Cu) { return; }
    }
    ctx->pc = 0x53731Cu;
label_53731c:
    // 0x53731c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x53731cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537320:
    // 0x537320: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x537320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_537324:
    // 0x537324: 0xc04b156  jal         func_12C558
label_537328:
    if (ctx->pc == 0x537328u) {
        ctx->pc = 0x537328u;
            // 0x537328: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x53732Cu;
        goto label_53732c;
    }
    ctx->pc = 0x537324u;
    SET_GPR_U32(ctx, 31, 0x53732Cu);
    ctx->pc = 0x537328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537324u;
            // 0x537328: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C558u;
    if (runtime->hasFunction(0x12C558u)) {
        auto targetFn = runtime->lookupFunction(0x12C558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53732Cu; }
        if (ctx->pc != 0x53732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C558_0x12c558(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53732Cu; }
        if (ctx->pc != 0x53732Cu) { return; }
    }
    ctx->pc = 0x53732Cu;
label_53732c:
    // 0x53732c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x53732cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_537330:
    // 0x537330: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x537330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_537334:
    // 0x537334: 0x8c42a348  lw          $v0, -0x5CB8($v0)
    ctx->pc = 0x537334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943560)));
label_537338:
    // 0x537338: 0x26060064  addiu       $a2, $s0, 0x64
    ctx->pc = 0x537338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_53733c:
    // 0x53733c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x53733cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_537340:
    // 0x537340: 0x26080068  addiu       $t0, $s0, 0x68
    ctx->pc = 0x537340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_537344:
    // 0x537344: 0xc0aa5d8  jal         func_2A9760
label_537348:
    if (ctx->pc == 0x537348u) {
        ctx->pc = 0x537348u;
            // 0x537348: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x53734Cu;
        goto label_53734c;
    }
    ctx->pc = 0x537344u;
    SET_GPR_U32(ctx, 31, 0x53734Cu);
    ctx->pc = 0x537348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537344u;
            // 0x537348: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53734Cu; }
        if (ctx->pc != 0x53734Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53734Cu; }
        if (ctx->pc != 0x53734Cu) { return; }
    }
    ctx->pc = 0x53734Cu;
label_53734c:
    // 0x53734c: 0x92030060  lbu         $v1, 0x60($s0)
    ctx->pc = 0x53734cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_537350:
    // 0x537350: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_537354:
    if (ctx->pc == 0x537354u) {
        ctx->pc = 0x537358u;
        goto label_537358;
    }
    ctx->pc = 0x537350u;
    {
        const bool branch_taken_0x537350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x537350) {
            ctx->pc = 0x537394u;
            goto label_537394;
        }
    }
    ctx->pc = 0x537358u;
label_537358:
    // 0x537358: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x537358u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_53735c:
    // 0x53735c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x53735cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_537360:
    // 0x537360: 0x8c71a348  lw          $s1, -0x5CB8($v1)
    ctx->pc = 0x537360u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_537364:
    // 0x537364: 0x3405c382  ori         $a1, $zero, 0xC382
    ctx->pc = 0x537364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50050);
label_537368:
    // 0x537368: 0x8c440ed0  lw          $a0, 0xED0($v0)
    ctx->pc = 0x537368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3792)));
label_53736c:
    // 0x53736c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x53736cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537370:
    // 0x537370: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x537370u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537374:
    // 0x537374: 0xc0b3a28  jal         func_2CE8A0
label_537378:
    if (ctx->pc == 0x537378u) {
        ctx->pc = 0x537378u;
            // 0x537378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53737Cu;
        goto label_53737c;
    }
    ctx->pc = 0x537374u;
    SET_GPR_U32(ctx, 31, 0x53737Cu);
    ctx->pc = 0x537378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537374u;
            // 0x537378: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CE8A0u;
    if (runtime->hasFunction(0x2CE8A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CE8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53737Cu; }
        if (ctx->pc != 0x53737Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CE8A0_0x2ce8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53737Cu; }
        if (ctx->pc != 0x53737Cu) { return; }
    }
    ctx->pc = 0x53737Cu;
label_53737c:
    // 0x53737c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x53737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_537380:
    // 0x537380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x537380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_537384:
    // 0x537384: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x537384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_537388:
    // 0x537388: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x537388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_53738c:
    // 0x53738c: 0xc0aa5d8  jal         func_2A9760
label_537390:
    if (ctx->pc == 0x537390u) {
        ctx->pc = 0x537390u;
            // 0x537390: 0x26080070  addiu       $t0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x537394u;
        goto label_537394;
    }
    ctx->pc = 0x53738Cu;
    SET_GPR_U32(ctx, 31, 0x537394u);
    ctx->pc = 0x537390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53738Cu;
            // 0x537390: 0x26080070  addiu       $t0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9760u;
    if (runtime->hasFunction(0x2A9760u)) {
        auto targetFn = runtime->lookupFunction(0x2A9760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537394u; }
        if (ctx->pc != 0x537394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9760_0x2a9760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537394u; }
        if (ctx->pc != 0x537394u) { return; }
    }
    ctx->pc = 0x537394u;
label_537394:
    // 0x537394: 0x3c0300be  lui         $v1, 0xBE
    ctx->pc = 0x537394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)190 << 16));
label_537398:
    // 0x537398: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x537398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_53739c:
    // 0x53739c: 0x2463b650  addiu       $v1, $v1, -0x49B0
    ctx->pc = 0x53739cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948432));
label_5373a0:
    // 0x5373a0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5373a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5373a4:
    // 0x5373a4: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x5373a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_5373a8:
    // 0x5373a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x5373a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_5373ac:
    // 0x5373ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x5373acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_5373b0:
    // 0x5373b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x5373b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_5373b4:
    // 0x5373b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x5373b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5373b8:
    // 0x5373b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x5373b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5373bc:
    // 0x5373bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x5373bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5373c0:
    // 0x5373c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x5373c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5373c4:
    // 0x5373c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5373c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5373c8:
    // 0x5373c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5373c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5373cc:
    // 0x5373cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5373ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5373d0:
    // 0x5373d0: 0x3e00008  jr          $ra
label_5373d4:
    if (ctx->pc == 0x5373D4u) {
        ctx->pc = 0x5373D4u;
            // 0x5373d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x5373D8u;
        goto label_5373d8;
    }
    ctx->pc = 0x5373D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5373D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5373D0u;
            // 0x5373d4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5373D8u;
label_5373d8:
    // 0x5373d8: 0x0  nop
    ctx->pc = 0x5373d8u;
    // NOP
label_5373dc:
    // 0x5373dc: 0x0  nop
    ctx->pc = 0x5373dcu;
    // NOP
label_5373e0:
    // 0x5373e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5373e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5373e4:
    // 0x5373e4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x5373e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_5373e8:
    // 0x5373e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x5373e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_5373ec:
    // 0x5373ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5373ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5373f0:
    // 0x5373f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5373f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5373f4:
    // 0x5373f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5373f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5373f8:
    // 0x5373f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5373f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5373fc:
    // 0x5373fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5373fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537400:
    // 0x537400: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x537400u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_537404:
    // 0x537404: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_537408:
    if (ctx->pc == 0x537408u) {
        ctx->pc = 0x537408u;
            // 0x537408: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53740Cu;
        goto label_53740c;
    }
    ctx->pc = 0x537404u;
    {
        const bool branch_taken_0x537404 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x537408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537404u;
            // 0x537408: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537404) {
            ctx->pc = 0x537448u;
            goto label_537448;
        }
    }
    ctx->pc = 0x53740Cu;
label_53740c:
    // 0x53740c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x53740cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537410:
    // 0x537410: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x537410u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537414:
    // 0x537414: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x537414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_537418:
    // 0x537418: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x537418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_53741c:
    // 0x53741c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x53741cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_537420:
    // 0x537420: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x537420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_537424:
    // 0x537424: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x537424u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_537428:
    // 0x537428: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x537428u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_53742c:
    // 0x53742c: 0x320f809  jalr        $t9
label_537430:
    if (ctx->pc == 0x537430u) {
        ctx->pc = 0x537434u;
        goto label_537434;
    }
    ctx->pc = 0x53742Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x537434u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x537434u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x537434u; }
            if (ctx->pc != 0x537434u) { return; }
        }
        }
    }
    ctx->pc = 0x537434u;
label_537434:
    // 0x537434: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x537434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_537438:
    // 0x537438: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x537438u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_53743c:
    // 0x53743c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x53743cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_537440:
    // 0x537440: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_537444:
    if (ctx->pc == 0x537444u) {
        ctx->pc = 0x537444u;
            // 0x537444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x537448u;
        goto label_537448;
    }
    ctx->pc = 0x537440u;
    {
        const bool branch_taken_0x537440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x537444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537440u;
            // 0x537444: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537440) {
            ctx->pc = 0x537418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_537418;
        }
    }
    ctx->pc = 0x537448u;
label_537448:
    // 0x537448: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x537448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_53744c:
    // 0x53744c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x53744cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_537450:
    // 0x537450: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x537450u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_537454:
    // 0x537454: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x537454u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_537458:
    // 0x537458: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x537458u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_53745c:
    // 0x53745c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53745cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537460:
    // 0x537460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537464:
    // 0x537464: 0x3e00008  jr          $ra
label_537468:
    if (ctx->pc == 0x537468u) {
        ctx->pc = 0x537468u;
            // 0x537468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x53746Cu;
        goto label_53746c;
    }
    ctx->pc = 0x537464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537464u;
            // 0x537468: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53746Cu;
label_53746c:
    // 0x53746c: 0x0  nop
    ctx->pc = 0x53746cu;
    // NOP
label_537470:
    // 0x537470: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x537470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_537474:
    // 0x537474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x537474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_537478:
    // 0x537478: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x537478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_53747c:
    // 0x53747c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x53747cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_537480:
    // 0x537480: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x537480u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_537484:
    // 0x537484: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
label_537488:
    if (ctx->pc == 0x537488u) {
        ctx->pc = 0x537488u;
            // 0x537488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53748Cu;
        goto label_53748c;
    }
    ctx->pc = 0x537484u;
    {
        const bool branch_taken_0x537484 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x537488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537484u;
            // 0x537488: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x537484) {
            ctx->pc = 0x537524u;
            goto label_537524;
        }
    }
    ctx->pc = 0x53748Cu;
label_53748c:
    // 0x53748c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x53748cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_537490:
    // 0x537490: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x537490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_537494:
    // 0x537494: 0x24636fc0  addiu       $v1, $v1, 0x6FC0
    ctx->pc = 0x537494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28608));
label_537498:
    // 0x537498: 0x24426ff8  addiu       $v0, $v0, 0x6FF8
    ctx->pc = 0x537498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28664));
label_53749c:
    // 0x53749c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x53749cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5374a0:
    // 0x5374a0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_5374a4:
    if (ctx->pc == 0x5374A4u) {
        ctx->pc = 0x5374A4u;
            // 0x5374a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x5374A8u;
        goto label_5374a8;
    }
    ctx->pc = 0x5374A0u;
    {
        const bool branch_taken_0x5374a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x5374A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5374A0u;
            // 0x5374a4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5374a0) {
            ctx->pc = 0x53750Cu;
            goto label_53750c;
        }
    }
    ctx->pc = 0x5374A8u;
label_5374a8:
    // 0x5374a8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x5374a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_5374ac:
    // 0x5374ac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x5374acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_5374b0:
    // 0x5374b0: 0x24637020  addiu       $v1, $v1, 0x7020
    ctx->pc = 0x5374b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28704));
label_5374b4:
    // 0x5374b4: 0x3c050053  lui         $a1, 0x53
    ctx->pc = 0x5374b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)83 << 16));
label_5374b8:
    // 0x5374b8: 0x24427058  addiu       $v0, $v0, 0x7058
    ctx->pc = 0x5374b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28760));
label_5374bc:
    // 0x5374bc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x5374bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_5374c0:
    // 0x5374c0: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x5374c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_5374c4:
    // 0x5374c4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x5374c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_5374c8:
    // 0x5374c8: 0xc0407c0  jal         func_101F00
label_5374cc:
    if (ctx->pc == 0x5374CCu) {
        ctx->pc = 0x5374CCu;
            // 0x5374cc: 0x24a57680  addiu       $a1, $a1, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30336));
        ctx->pc = 0x5374D0u;
        goto label_5374d0;
    }
    ctx->pc = 0x5374C8u;
    SET_GPR_U32(ctx, 31, 0x5374D0u);
    ctx->pc = 0x5374CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5374C8u;
            // 0x5374cc: 0x24a57680  addiu       $a1, $a1, 0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374D0u; }
        if (ctx->pc != 0x5374D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374D0u; }
        if (ctx->pc != 0x5374D0u) { return; }
    }
    ctx->pc = 0x5374D0u;
label_5374d0:
    // 0x5374d0: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x5374d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_5374d4:
    // 0x5374d4: 0xc14dd84  jal         func_537610
label_5374d8:
    if (ctx->pc == 0x5374D8u) {
        ctx->pc = 0x5374D8u;
            // 0x5374d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5374DCu;
        goto label_5374dc;
    }
    ctx->pc = 0x5374D4u;
    SET_GPR_U32(ctx, 31, 0x5374DCu);
    ctx->pc = 0x5374D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5374D4u;
            // 0x5374d8: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x537610u;
    if (runtime->hasFunction(0x537610u)) {
        auto targetFn = runtime->lookupFunction(0x537610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374DCu; }
        if (ctx->pc != 0x5374DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00537610_0x537610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374DCu; }
        if (ctx->pc != 0x5374DCu) { return; }
    }
    ctx->pc = 0x5374DCu;
label_5374dc:
    // 0x5374dc: 0x26040078  addiu       $a0, $s0, 0x78
    ctx->pc = 0x5374dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_5374e0:
    // 0x5374e0: 0xc14dd68  jal         func_5375A0
label_5374e4:
    if (ctx->pc == 0x5374E4u) {
        ctx->pc = 0x5374E4u;
            // 0x5374e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5374E8u;
        goto label_5374e8;
    }
    ctx->pc = 0x5374E0u;
    SET_GPR_U32(ctx, 31, 0x5374E8u);
    ctx->pc = 0x5374E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5374E0u;
            // 0x5374e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5375A0u;
    if (runtime->hasFunction(0x5375A0u)) {
        auto targetFn = runtime->lookupFunction(0x5375A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374E8u; }
        if (ctx->pc != 0x5374E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005375A0_0x5375a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374E8u; }
        if (ctx->pc != 0x5374E8u) { return; }
    }
    ctx->pc = 0x5374E8u;
label_5374e8:
    // 0x5374e8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x5374e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_5374ec:
    // 0x5374ec: 0xc14dd68  jal         func_5375A0
label_5374f0:
    if (ctx->pc == 0x5374F0u) {
        ctx->pc = 0x5374F0u;
            // 0x5374f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x5374F4u;
        goto label_5374f4;
    }
    ctx->pc = 0x5374ECu;
    SET_GPR_U32(ctx, 31, 0x5374F4u);
    ctx->pc = 0x5374F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5374ECu;
            // 0x5374f0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5375A0u;
    if (runtime->hasFunction(0x5375A0u)) {
        auto targetFn = runtime->lookupFunction(0x5375A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374F4u; }
        if (ctx->pc != 0x5374F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005375A0_0x5375a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5374F4u; }
        if (ctx->pc != 0x5374F4u) { return; }
    }
    ctx->pc = 0x5374F4u;
label_5374f4:
    // 0x5374f4: 0x26040064  addiu       $a0, $s0, 0x64
    ctx->pc = 0x5374f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
label_5374f8:
    // 0x5374f8: 0xc14dd50  jal         func_537540
label_5374fc:
    if (ctx->pc == 0x5374FCu) {
        ctx->pc = 0x5374FCu;
            // 0x5374fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537500u;
        goto label_537500;
    }
    ctx->pc = 0x5374F8u;
    SET_GPR_U32(ctx, 31, 0x537500u);
    ctx->pc = 0x5374FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5374F8u;
            // 0x5374fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x537540u;
    if (runtime->hasFunction(0x537540u)) {
        auto targetFn = runtime->lookupFunction(0x537540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537500u; }
        if (ctx->pc != 0x537500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00537540_0x537540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537500u; }
        if (ctx->pc != 0x537500u) { return; }
    }
    ctx->pc = 0x537500u;
label_537500:
    // 0x537500: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x537500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_537504:
    // 0x537504: 0xc0ae1c0  jal         func_2B8700
label_537508:
    if (ctx->pc == 0x537508u) {
        ctx->pc = 0x537508u;
            // 0x537508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53750Cu;
        goto label_53750c;
    }
    ctx->pc = 0x537504u;
    SET_GPR_U32(ctx, 31, 0x53750Cu);
    ctx->pc = 0x537508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x537504u;
            // 0x537508: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B8700u;
    if (runtime->hasFunction(0x2B8700u)) {
        auto targetFn = runtime->lookupFunction(0x2B8700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53750Cu; }
        if (ctx->pc != 0x53750Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B8700_0x2b8700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53750Cu; }
        if (ctx->pc != 0x53750Cu) { return; }
    }
    ctx->pc = 0x53750Cu;
label_53750c:
    // 0x53750c: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x53750cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_537510:
    // 0x537510: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x537510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_537514:
    // 0x537514: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_537518:
    if (ctx->pc == 0x537518u) {
        ctx->pc = 0x537518u;
            // 0x537518: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53751Cu;
        goto label_53751c;
    }
    ctx->pc = 0x537514u;
    {
        const bool branch_taken_0x537514 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x537514) {
            ctx->pc = 0x537518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x537514u;
            // 0x537518: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x537528u;
            goto label_537528;
        }
    }
    ctx->pc = 0x53751Cu;
label_53751c:
    // 0x53751c: 0xc0400a8  jal         func_1002A0
label_537520:
    if (ctx->pc == 0x537520u) {
        ctx->pc = 0x537520u;
            // 0x537520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x537524u;
        goto label_537524;
    }
    ctx->pc = 0x53751Cu;
    SET_GPR_U32(ctx, 31, 0x537524u);
    ctx->pc = 0x537520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53751Cu;
            // 0x537520: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537524u; }
        if (ctx->pc != 0x537524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x537524u; }
        if (ctx->pc != 0x537524u) { return; }
    }
    ctx->pc = 0x537524u;
label_537524:
    // 0x537524: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x537524u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_537528:
    // 0x537528: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x537528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_53752c:
    // 0x53752c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x53752cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_537530:
    // 0x537530: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x537530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_537534:
    // 0x537534: 0x3e00008  jr          $ra
label_537538:
    if (ctx->pc == 0x537538u) {
        ctx->pc = 0x537538u;
            // 0x537538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x53753Cu;
        goto label_53753c;
    }
    ctx->pc = 0x537534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x537538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x537534u;
            // 0x537538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x53753Cu;
label_53753c:
    // 0x53753c: 0x0  nop
    ctx->pc = 0x53753cu;
    // NOP
}
