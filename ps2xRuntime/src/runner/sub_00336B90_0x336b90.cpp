#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336B90
// Address: 0x336b90 - 0x3376a0
void sub_00336B90_0x336b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336B90_0x336b90");
#endif

    switch (ctx->pc) {
        case 0x336b90u: goto label_336b90;
        case 0x336b94u: goto label_336b94;
        case 0x336b98u: goto label_336b98;
        case 0x336b9cu: goto label_336b9c;
        case 0x336ba0u: goto label_336ba0;
        case 0x336ba4u: goto label_336ba4;
        case 0x336ba8u: goto label_336ba8;
        case 0x336bacu: goto label_336bac;
        case 0x336bb0u: goto label_336bb0;
        case 0x336bb4u: goto label_336bb4;
        case 0x336bb8u: goto label_336bb8;
        case 0x336bbcu: goto label_336bbc;
        case 0x336bc0u: goto label_336bc0;
        case 0x336bc4u: goto label_336bc4;
        case 0x336bc8u: goto label_336bc8;
        case 0x336bccu: goto label_336bcc;
        case 0x336bd0u: goto label_336bd0;
        case 0x336bd4u: goto label_336bd4;
        case 0x336bd8u: goto label_336bd8;
        case 0x336bdcu: goto label_336bdc;
        case 0x336be0u: goto label_336be0;
        case 0x336be4u: goto label_336be4;
        case 0x336be8u: goto label_336be8;
        case 0x336becu: goto label_336bec;
        case 0x336bf0u: goto label_336bf0;
        case 0x336bf4u: goto label_336bf4;
        case 0x336bf8u: goto label_336bf8;
        case 0x336bfcu: goto label_336bfc;
        case 0x336c00u: goto label_336c00;
        case 0x336c04u: goto label_336c04;
        case 0x336c08u: goto label_336c08;
        case 0x336c0cu: goto label_336c0c;
        case 0x336c10u: goto label_336c10;
        case 0x336c14u: goto label_336c14;
        case 0x336c18u: goto label_336c18;
        case 0x336c1cu: goto label_336c1c;
        case 0x336c20u: goto label_336c20;
        case 0x336c24u: goto label_336c24;
        case 0x336c28u: goto label_336c28;
        case 0x336c2cu: goto label_336c2c;
        case 0x336c30u: goto label_336c30;
        case 0x336c34u: goto label_336c34;
        case 0x336c38u: goto label_336c38;
        case 0x336c3cu: goto label_336c3c;
        case 0x336c40u: goto label_336c40;
        case 0x336c44u: goto label_336c44;
        case 0x336c48u: goto label_336c48;
        case 0x336c4cu: goto label_336c4c;
        case 0x336c50u: goto label_336c50;
        case 0x336c54u: goto label_336c54;
        case 0x336c58u: goto label_336c58;
        case 0x336c5cu: goto label_336c5c;
        case 0x336c60u: goto label_336c60;
        case 0x336c64u: goto label_336c64;
        case 0x336c68u: goto label_336c68;
        case 0x336c6cu: goto label_336c6c;
        case 0x336c70u: goto label_336c70;
        case 0x336c74u: goto label_336c74;
        case 0x336c78u: goto label_336c78;
        case 0x336c7cu: goto label_336c7c;
        case 0x336c80u: goto label_336c80;
        case 0x336c84u: goto label_336c84;
        case 0x336c88u: goto label_336c88;
        case 0x336c8cu: goto label_336c8c;
        case 0x336c90u: goto label_336c90;
        case 0x336c94u: goto label_336c94;
        case 0x336c98u: goto label_336c98;
        case 0x336c9cu: goto label_336c9c;
        case 0x336ca0u: goto label_336ca0;
        case 0x336ca4u: goto label_336ca4;
        case 0x336ca8u: goto label_336ca8;
        case 0x336cacu: goto label_336cac;
        case 0x336cb0u: goto label_336cb0;
        case 0x336cb4u: goto label_336cb4;
        case 0x336cb8u: goto label_336cb8;
        case 0x336cbcu: goto label_336cbc;
        case 0x336cc0u: goto label_336cc0;
        case 0x336cc4u: goto label_336cc4;
        case 0x336cc8u: goto label_336cc8;
        case 0x336cccu: goto label_336ccc;
        case 0x336cd0u: goto label_336cd0;
        case 0x336cd4u: goto label_336cd4;
        case 0x336cd8u: goto label_336cd8;
        case 0x336cdcu: goto label_336cdc;
        case 0x336ce0u: goto label_336ce0;
        case 0x336ce4u: goto label_336ce4;
        case 0x336ce8u: goto label_336ce8;
        case 0x336cecu: goto label_336cec;
        case 0x336cf0u: goto label_336cf0;
        case 0x336cf4u: goto label_336cf4;
        case 0x336cf8u: goto label_336cf8;
        case 0x336cfcu: goto label_336cfc;
        case 0x336d00u: goto label_336d00;
        case 0x336d04u: goto label_336d04;
        case 0x336d08u: goto label_336d08;
        case 0x336d0cu: goto label_336d0c;
        case 0x336d10u: goto label_336d10;
        case 0x336d14u: goto label_336d14;
        case 0x336d18u: goto label_336d18;
        case 0x336d1cu: goto label_336d1c;
        case 0x336d20u: goto label_336d20;
        case 0x336d24u: goto label_336d24;
        case 0x336d28u: goto label_336d28;
        case 0x336d2cu: goto label_336d2c;
        case 0x336d30u: goto label_336d30;
        case 0x336d34u: goto label_336d34;
        case 0x336d38u: goto label_336d38;
        case 0x336d3cu: goto label_336d3c;
        case 0x336d40u: goto label_336d40;
        case 0x336d44u: goto label_336d44;
        case 0x336d48u: goto label_336d48;
        case 0x336d4cu: goto label_336d4c;
        case 0x336d50u: goto label_336d50;
        case 0x336d54u: goto label_336d54;
        case 0x336d58u: goto label_336d58;
        case 0x336d5cu: goto label_336d5c;
        case 0x336d60u: goto label_336d60;
        case 0x336d64u: goto label_336d64;
        case 0x336d68u: goto label_336d68;
        case 0x336d6cu: goto label_336d6c;
        case 0x336d70u: goto label_336d70;
        case 0x336d74u: goto label_336d74;
        case 0x336d78u: goto label_336d78;
        case 0x336d7cu: goto label_336d7c;
        case 0x336d80u: goto label_336d80;
        case 0x336d84u: goto label_336d84;
        case 0x336d88u: goto label_336d88;
        case 0x336d8cu: goto label_336d8c;
        case 0x336d90u: goto label_336d90;
        case 0x336d94u: goto label_336d94;
        case 0x336d98u: goto label_336d98;
        case 0x336d9cu: goto label_336d9c;
        case 0x336da0u: goto label_336da0;
        case 0x336da4u: goto label_336da4;
        case 0x336da8u: goto label_336da8;
        case 0x336dacu: goto label_336dac;
        case 0x336db0u: goto label_336db0;
        case 0x336db4u: goto label_336db4;
        case 0x336db8u: goto label_336db8;
        case 0x336dbcu: goto label_336dbc;
        case 0x336dc0u: goto label_336dc0;
        case 0x336dc4u: goto label_336dc4;
        case 0x336dc8u: goto label_336dc8;
        case 0x336dccu: goto label_336dcc;
        case 0x336dd0u: goto label_336dd0;
        case 0x336dd4u: goto label_336dd4;
        case 0x336dd8u: goto label_336dd8;
        case 0x336ddcu: goto label_336ddc;
        case 0x336de0u: goto label_336de0;
        case 0x336de4u: goto label_336de4;
        case 0x336de8u: goto label_336de8;
        case 0x336decu: goto label_336dec;
        case 0x336df0u: goto label_336df0;
        case 0x336df4u: goto label_336df4;
        case 0x336df8u: goto label_336df8;
        case 0x336dfcu: goto label_336dfc;
        case 0x336e00u: goto label_336e00;
        case 0x336e04u: goto label_336e04;
        case 0x336e08u: goto label_336e08;
        case 0x336e0cu: goto label_336e0c;
        case 0x336e10u: goto label_336e10;
        case 0x336e14u: goto label_336e14;
        case 0x336e18u: goto label_336e18;
        case 0x336e1cu: goto label_336e1c;
        case 0x336e20u: goto label_336e20;
        case 0x336e24u: goto label_336e24;
        case 0x336e28u: goto label_336e28;
        case 0x336e2cu: goto label_336e2c;
        case 0x336e30u: goto label_336e30;
        case 0x336e34u: goto label_336e34;
        case 0x336e38u: goto label_336e38;
        case 0x336e3cu: goto label_336e3c;
        case 0x336e40u: goto label_336e40;
        case 0x336e44u: goto label_336e44;
        case 0x336e48u: goto label_336e48;
        case 0x336e4cu: goto label_336e4c;
        case 0x336e50u: goto label_336e50;
        case 0x336e54u: goto label_336e54;
        case 0x336e58u: goto label_336e58;
        case 0x336e5cu: goto label_336e5c;
        case 0x336e60u: goto label_336e60;
        case 0x336e64u: goto label_336e64;
        case 0x336e68u: goto label_336e68;
        case 0x336e6cu: goto label_336e6c;
        case 0x336e70u: goto label_336e70;
        case 0x336e74u: goto label_336e74;
        case 0x336e78u: goto label_336e78;
        case 0x336e7cu: goto label_336e7c;
        case 0x336e80u: goto label_336e80;
        case 0x336e84u: goto label_336e84;
        case 0x336e88u: goto label_336e88;
        case 0x336e8cu: goto label_336e8c;
        case 0x336e90u: goto label_336e90;
        case 0x336e94u: goto label_336e94;
        case 0x336e98u: goto label_336e98;
        case 0x336e9cu: goto label_336e9c;
        case 0x336ea0u: goto label_336ea0;
        case 0x336ea4u: goto label_336ea4;
        case 0x336ea8u: goto label_336ea8;
        case 0x336eacu: goto label_336eac;
        case 0x336eb0u: goto label_336eb0;
        case 0x336eb4u: goto label_336eb4;
        case 0x336eb8u: goto label_336eb8;
        case 0x336ebcu: goto label_336ebc;
        case 0x336ec0u: goto label_336ec0;
        case 0x336ec4u: goto label_336ec4;
        case 0x336ec8u: goto label_336ec8;
        case 0x336eccu: goto label_336ecc;
        case 0x336ed0u: goto label_336ed0;
        case 0x336ed4u: goto label_336ed4;
        case 0x336ed8u: goto label_336ed8;
        case 0x336edcu: goto label_336edc;
        case 0x336ee0u: goto label_336ee0;
        case 0x336ee4u: goto label_336ee4;
        case 0x336ee8u: goto label_336ee8;
        case 0x336eecu: goto label_336eec;
        case 0x336ef0u: goto label_336ef0;
        case 0x336ef4u: goto label_336ef4;
        case 0x336ef8u: goto label_336ef8;
        case 0x336efcu: goto label_336efc;
        case 0x336f00u: goto label_336f00;
        case 0x336f04u: goto label_336f04;
        case 0x336f08u: goto label_336f08;
        case 0x336f0cu: goto label_336f0c;
        case 0x336f10u: goto label_336f10;
        case 0x336f14u: goto label_336f14;
        case 0x336f18u: goto label_336f18;
        case 0x336f1cu: goto label_336f1c;
        case 0x336f20u: goto label_336f20;
        case 0x336f24u: goto label_336f24;
        case 0x336f28u: goto label_336f28;
        case 0x336f2cu: goto label_336f2c;
        case 0x336f30u: goto label_336f30;
        case 0x336f34u: goto label_336f34;
        case 0x336f38u: goto label_336f38;
        case 0x336f3cu: goto label_336f3c;
        case 0x336f40u: goto label_336f40;
        case 0x336f44u: goto label_336f44;
        case 0x336f48u: goto label_336f48;
        case 0x336f4cu: goto label_336f4c;
        case 0x336f50u: goto label_336f50;
        case 0x336f54u: goto label_336f54;
        case 0x336f58u: goto label_336f58;
        case 0x336f5cu: goto label_336f5c;
        case 0x336f60u: goto label_336f60;
        case 0x336f64u: goto label_336f64;
        case 0x336f68u: goto label_336f68;
        case 0x336f6cu: goto label_336f6c;
        case 0x336f70u: goto label_336f70;
        case 0x336f74u: goto label_336f74;
        case 0x336f78u: goto label_336f78;
        case 0x336f7cu: goto label_336f7c;
        case 0x336f80u: goto label_336f80;
        case 0x336f84u: goto label_336f84;
        case 0x336f88u: goto label_336f88;
        case 0x336f8cu: goto label_336f8c;
        case 0x336f90u: goto label_336f90;
        case 0x336f94u: goto label_336f94;
        case 0x336f98u: goto label_336f98;
        case 0x336f9cu: goto label_336f9c;
        case 0x336fa0u: goto label_336fa0;
        case 0x336fa4u: goto label_336fa4;
        case 0x336fa8u: goto label_336fa8;
        case 0x336facu: goto label_336fac;
        case 0x336fb0u: goto label_336fb0;
        case 0x336fb4u: goto label_336fb4;
        case 0x336fb8u: goto label_336fb8;
        case 0x336fbcu: goto label_336fbc;
        case 0x336fc0u: goto label_336fc0;
        case 0x336fc4u: goto label_336fc4;
        case 0x336fc8u: goto label_336fc8;
        case 0x336fccu: goto label_336fcc;
        case 0x336fd0u: goto label_336fd0;
        case 0x336fd4u: goto label_336fd4;
        case 0x336fd8u: goto label_336fd8;
        case 0x336fdcu: goto label_336fdc;
        case 0x336fe0u: goto label_336fe0;
        case 0x336fe4u: goto label_336fe4;
        case 0x336fe8u: goto label_336fe8;
        case 0x336fecu: goto label_336fec;
        case 0x336ff0u: goto label_336ff0;
        case 0x336ff4u: goto label_336ff4;
        case 0x336ff8u: goto label_336ff8;
        case 0x336ffcu: goto label_336ffc;
        case 0x337000u: goto label_337000;
        case 0x337004u: goto label_337004;
        case 0x337008u: goto label_337008;
        case 0x33700cu: goto label_33700c;
        case 0x337010u: goto label_337010;
        case 0x337014u: goto label_337014;
        case 0x337018u: goto label_337018;
        case 0x33701cu: goto label_33701c;
        case 0x337020u: goto label_337020;
        case 0x337024u: goto label_337024;
        case 0x337028u: goto label_337028;
        case 0x33702cu: goto label_33702c;
        case 0x337030u: goto label_337030;
        case 0x337034u: goto label_337034;
        case 0x337038u: goto label_337038;
        case 0x33703cu: goto label_33703c;
        case 0x337040u: goto label_337040;
        case 0x337044u: goto label_337044;
        case 0x337048u: goto label_337048;
        case 0x33704cu: goto label_33704c;
        case 0x337050u: goto label_337050;
        case 0x337054u: goto label_337054;
        case 0x337058u: goto label_337058;
        case 0x33705cu: goto label_33705c;
        case 0x337060u: goto label_337060;
        case 0x337064u: goto label_337064;
        case 0x337068u: goto label_337068;
        case 0x33706cu: goto label_33706c;
        case 0x337070u: goto label_337070;
        case 0x337074u: goto label_337074;
        case 0x337078u: goto label_337078;
        case 0x33707cu: goto label_33707c;
        case 0x337080u: goto label_337080;
        case 0x337084u: goto label_337084;
        case 0x337088u: goto label_337088;
        case 0x33708cu: goto label_33708c;
        case 0x337090u: goto label_337090;
        case 0x337094u: goto label_337094;
        case 0x337098u: goto label_337098;
        case 0x33709cu: goto label_33709c;
        case 0x3370a0u: goto label_3370a0;
        case 0x3370a4u: goto label_3370a4;
        case 0x3370a8u: goto label_3370a8;
        case 0x3370acu: goto label_3370ac;
        case 0x3370b0u: goto label_3370b0;
        case 0x3370b4u: goto label_3370b4;
        case 0x3370b8u: goto label_3370b8;
        case 0x3370bcu: goto label_3370bc;
        case 0x3370c0u: goto label_3370c0;
        case 0x3370c4u: goto label_3370c4;
        case 0x3370c8u: goto label_3370c8;
        case 0x3370ccu: goto label_3370cc;
        case 0x3370d0u: goto label_3370d0;
        case 0x3370d4u: goto label_3370d4;
        case 0x3370d8u: goto label_3370d8;
        case 0x3370dcu: goto label_3370dc;
        case 0x3370e0u: goto label_3370e0;
        case 0x3370e4u: goto label_3370e4;
        case 0x3370e8u: goto label_3370e8;
        case 0x3370ecu: goto label_3370ec;
        case 0x3370f0u: goto label_3370f0;
        case 0x3370f4u: goto label_3370f4;
        case 0x3370f8u: goto label_3370f8;
        case 0x3370fcu: goto label_3370fc;
        case 0x337100u: goto label_337100;
        case 0x337104u: goto label_337104;
        case 0x337108u: goto label_337108;
        case 0x33710cu: goto label_33710c;
        case 0x337110u: goto label_337110;
        case 0x337114u: goto label_337114;
        case 0x337118u: goto label_337118;
        case 0x33711cu: goto label_33711c;
        case 0x337120u: goto label_337120;
        case 0x337124u: goto label_337124;
        case 0x337128u: goto label_337128;
        case 0x33712cu: goto label_33712c;
        case 0x337130u: goto label_337130;
        case 0x337134u: goto label_337134;
        case 0x337138u: goto label_337138;
        case 0x33713cu: goto label_33713c;
        case 0x337140u: goto label_337140;
        case 0x337144u: goto label_337144;
        case 0x337148u: goto label_337148;
        case 0x33714cu: goto label_33714c;
        case 0x337150u: goto label_337150;
        case 0x337154u: goto label_337154;
        case 0x337158u: goto label_337158;
        case 0x33715cu: goto label_33715c;
        case 0x337160u: goto label_337160;
        case 0x337164u: goto label_337164;
        case 0x337168u: goto label_337168;
        case 0x33716cu: goto label_33716c;
        case 0x337170u: goto label_337170;
        case 0x337174u: goto label_337174;
        case 0x337178u: goto label_337178;
        case 0x33717cu: goto label_33717c;
        case 0x337180u: goto label_337180;
        case 0x337184u: goto label_337184;
        case 0x337188u: goto label_337188;
        case 0x33718cu: goto label_33718c;
        case 0x337190u: goto label_337190;
        case 0x337194u: goto label_337194;
        case 0x337198u: goto label_337198;
        case 0x33719cu: goto label_33719c;
        case 0x3371a0u: goto label_3371a0;
        case 0x3371a4u: goto label_3371a4;
        case 0x3371a8u: goto label_3371a8;
        case 0x3371acu: goto label_3371ac;
        case 0x3371b0u: goto label_3371b0;
        case 0x3371b4u: goto label_3371b4;
        case 0x3371b8u: goto label_3371b8;
        case 0x3371bcu: goto label_3371bc;
        case 0x3371c0u: goto label_3371c0;
        case 0x3371c4u: goto label_3371c4;
        case 0x3371c8u: goto label_3371c8;
        case 0x3371ccu: goto label_3371cc;
        case 0x3371d0u: goto label_3371d0;
        case 0x3371d4u: goto label_3371d4;
        case 0x3371d8u: goto label_3371d8;
        case 0x3371dcu: goto label_3371dc;
        case 0x3371e0u: goto label_3371e0;
        case 0x3371e4u: goto label_3371e4;
        case 0x3371e8u: goto label_3371e8;
        case 0x3371ecu: goto label_3371ec;
        case 0x3371f0u: goto label_3371f0;
        case 0x3371f4u: goto label_3371f4;
        case 0x3371f8u: goto label_3371f8;
        case 0x3371fcu: goto label_3371fc;
        case 0x337200u: goto label_337200;
        case 0x337204u: goto label_337204;
        case 0x337208u: goto label_337208;
        case 0x33720cu: goto label_33720c;
        case 0x337210u: goto label_337210;
        case 0x337214u: goto label_337214;
        case 0x337218u: goto label_337218;
        case 0x33721cu: goto label_33721c;
        case 0x337220u: goto label_337220;
        case 0x337224u: goto label_337224;
        case 0x337228u: goto label_337228;
        case 0x33722cu: goto label_33722c;
        case 0x337230u: goto label_337230;
        case 0x337234u: goto label_337234;
        case 0x337238u: goto label_337238;
        case 0x33723cu: goto label_33723c;
        case 0x337240u: goto label_337240;
        case 0x337244u: goto label_337244;
        case 0x337248u: goto label_337248;
        case 0x33724cu: goto label_33724c;
        case 0x337250u: goto label_337250;
        case 0x337254u: goto label_337254;
        case 0x337258u: goto label_337258;
        case 0x33725cu: goto label_33725c;
        case 0x337260u: goto label_337260;
        case 0x337264u: goto label_337264;
        case 0x337268u: goto label_337268;
        case 0x33726cu: goto label_33726c;
        case 0x337270u: goto label_337270;
        case 0x337274u: goto label_337274;
        case 0x337278u: goto label_337278;
        case 0x33727cu: goto label_33727c;
        case 0x337280u: goto label_337280;
        case 0x337284u: goto label_337284;
        case 0x337288u: goto label_337288;
        case 0x33728cu: goto label_33728c;
        case 0x337290u: goto label_337290;
        case 0x337294u: goto label_337294;
        case 0x337298u: goto label_337298;
        case 0x33729cu: goto label_33729c;
        case 0x3372a0u: goto label_3372a0;
        case 0x3372a4u: goto label_3372a4;
        case 0x3372a8u: goto label_3372a8;
        case 0x3372acu: goto label_3372ac;
        case 0x3372b0u: goto label_3372b0;
        case 0x3372b4u: goto label_3372b4;
        case 0x3372b8u: goto label_3372b8;
        case 0x3372bcu: goto label_3372bc;
        case 0x3372c0u: goto label_3372c0;
        case 0x3372c4u: goto label_3372c4;
        case 0x3372c8u: goto label_3372c8;
        case 0x3372ccu: goto label_3372cc;
        case 0x3372d0u: goto label_3372d0;
        case 0x3372d4u: goto label_3372d4;
        case 0x3372d8u: goto label_3372d8;
        case 0x3372dcu: goto label_3372dc;
        case 0x3372e0u: goto label_3372e0;
        case 0x3372e4u: goto label_3372e4;
        case 0x3372e8u: goto label_3372e8;
        case 0x3372ecu: goto label_3372ec;
        case 0x3372f0u: goto label_3372f0;
        case 0x3372f4u: goto label_3372f4;
        case 0x3372f8u: goto label_3372f8;
        case 0x3372fcu: goto label_3372fc;
        case 0x337300u: goto label_337300;
        case 0x337304u: goto label_337304;
        case 0x337308u: goto label_337308;
        case 0x33730cu: goto label_33730c;
        case 0x337310u: goto label_337310;
        case 0x337314u: goto label_337314;
        case 0x337318u: goto label_337318;
        case 0x33731cu: goto label_33731c;
        case 0x337320u: goto label_337320;
        case 0x337324u: goto label_337324;
        case 0x337328u: goto label_337328;
        case 0x33732cu: goto label_33732c;
        case 0x337330u: goto label_337330;
        case 0x337334u: goto label_337334;
        case 0x337338u: goto label_337338;
        case 0x33733cu: goto label_33733c;
        case 0x337340u: goto label_337340;
        case 0x337344u: goto label_337344;
        case 0x337348u: goto label_337348;
        case 0x33734cu: goto label_33734c;
        case 0x337350u: goto label_337350;
        case 0x337354u: goto label_337354;
        case 0x337358u: goto label_337358;
        case 0x33735cu: goto label_33735c;
        case 0x337360u: goto label_337360;
        case 0x337364u: goto label_337364;
        case 0x337368u: goto label_337368;
        case 0x33736cu: goto label_33736c;
        case 0x337370u: goto label_337370;
        case 0x337374u: goto label_337374;
        case 0x337378u: goto label_337378;
        case 0x33737cu: goto label_33737c;
        case 0x337380u: goto label_337380;
        case 0x337384u: goto label_337384;
        case 0x337388u: goto label_337388;
        case 0x33738cu: goto label_33738c;
        case 0x337390u: goto label_337390;
        case 0x337394u: goto label_337394;
        case 0x337398u: goto label_337398;
        case 0x33739cu: goto label_33739c;
        case 0x3373a0u: goto label_3373a0;
        case 0x3373a4u: goto label_3373a4;
        case 0x3373a8u: goto label_3373a8;
        case 0x3373acu: goto label_3373ac;
        case 0x3373b0u: goto label_3373b0;
        case 0x3373b4u: goto label_3373b4;
        case 0x3373b8u: goto label_3373b8;
        case 0x3373bcu: goto label_3373bc;
        case 0x3373c0u: goto label_3373c0;
        case 0x3373c4u: goto label_3373c4;
        case 0x3373c8u: goto label_3373c8;
        case 0x3373ccu: goto label_3373cc;
        case 0x3373d0u: goto label_3373d0;
        case 0x3373d4u: goto label_3373d4;
        case 0x3373d8u: goto label_3373d8;
        case 0x3373dcu: goto label_3373dc;
        case 0x3373e0u: goto label_3373e0;
        case 0x3373e4u: goto label_3373e4;
        case 0x3373e8u: goto label_3373e8;
        case 0x3373ecu: goto label_3373ec;
        case 0x3373f0u: goto label_3373f0;
        case 0x3373f4u: goto label_3373f4;
        case 0x3373f8u: goto label_3373f8;
        case 0x3373fcu: goto label_3373fc;
        case 0x337400u: goto label_337400;
        case 0x337404u: goto label_337404;
        case 0x337408u: goto label_337408;
        case 0x33740cu: goto label_33740c;
        case 0x337410u: goto label_337410;
        case 0x337414u: goto label_337414;
        case 0x337418u: goto label_337418;
        case 0x33741cu: goto label_33741c;
        case 0x337420u: goto label_337420;
        case 0x337424u: goto label_337424;
        case 0x337428u: goto label_337428;
        case 0x33742cu: goto label_33742c;
        case 0x337430u: goto label_337430;
        case 0x337434u: goto label_337434;
        case 0x337438u: goto label_337438;
        case 0x33743cu: goto label_33743c;
        case 0x337440u: goto label_337440;
        case 0x337444u: goto label_337444;
        case 0x337448u: goto label_337448;
        case 0x33744cu: goto label_33744c;
        case 0x337450u: goto label_337450;
        case 0x337454u: goto label_337454;
        case 0x337458u: goto label_337458;
        case 0x33745cu: goto label_33745c;
        case 0x337460u: goto label_337460;
        case 0x337464u: goto label_337464;
        case 0x337468u: goto label_337468;
        case 0x33746cu: goto label_33746c;
        case 0x337470u: goto label_337470;
        case 0x337474u: goto label_337474;
        case 0x337478u: goto label_337478;
        case 0x33747cu: goto label_33747c;
        case 0x337480u: goto label_337480;
        case 0x337484u: goto label_337484;
        case 0x337488u: goto label_337488;
        case 0x33748cu: goto label_33748c;
        case 0x337490u: goto label_337490;
        case 0x337494u: goto label_337494;
        case 0x337498u: goto label_337498;
        case 0x33749cu: goto label_33749c;
        case 0x3374a0u: goto label_3374a0;
        case 0x3374a4u: goto label_3374a4;
        case 0x3374a8u: goto label_3374a8;
        case 0x3374acu: goto label_3374ac;
        case 0x3374b0u: goto label_3374b0;
        case 0x3374b4u: goto label_3374b4;
        case 0x3374b8u: goto label_3374b8;
        case 0x3374bcu: goto label_3374bc;
        case 0x3374c0u: goto label_3374c0;
        case 0x3374c4u: goto label_3374c4;
        case 0x3374c8u: goto label_3374c8;
        case 0x3374ccu: goto label_3374cc;
        case 0x3374d0u: goto label_3374d0;
        case 0x3374d4u: goto label_3374d4;
        case 0x3374d8u: goto label_3374d8;
        case 0x3374dcu: goto label_3374dc;
        case 0x3374e0u: goto label_3374e0;
        case 0x3374e4u: goto label_3374e4;
        case 0x3374e8u: goto label_3374e8;
        case 0x3374ecu: goto label_3374ec;
        case 0x3374f0u: goto label_3374f0;
        case 0x3374f4u: goto label_3374f4;
        case 0x3374f8u: goto label_3374f8;
        case 0x3374fcu: goto label_3374fc;
        case 0x337500u: goto label_337500;
        case 0x337504u: goto label_337504;
        case 0x337508u: goto label_337508;
        case 0x33750cu: goto label_33750c;
        case 0x337510u: goto label_337510;
        case 0x337514u: goto label_337514;
        case 0x337518u: goto label_337518;
        case 0x33751cu: goto label_33751c;
        case 0x337520u: goto label_337520;
        case 0x337524u: goto label_337524;
        case 0x337528u: goto label_337528;
        case 0x33752cu: goto label_33752c;
        case 0x337530u: goto label_337530;
        case 0x337534u: goto label_337534;
        case 0x337538u: goto label_337538;
        case 0x33753cu: goto label_33753c;
        case 0x337540u: goto label_337540;
        case 0x337544u: goto label_337544;
        case 0x337548u: goto label_337548;
        case 0x33754cu: goto label_33754c;
        case 0x337550u: goto label_337550;
        case 0x337554u: goto label_337554;
        case 0x337558u: goto label_337558;
        case 0x33755cu: goto label_33755c;
        case 0x337560u: goto label_337560;
        case 0x337564u: goto label_337564;
        case 0x337568u: goto label_337568;
        case 0x33756cu: goto label_33756c;
        case 0x337570u: goto label_337570;
        case 0x337574u: goto label_337574;
        case 0x337578u: goto label_337578;
        case 0x33757cu: goto label_33757c;
        case 0x337580u: goto label_337580;
        case 0x337584u: goto label_337584;
        case 0x337588u: goto label_337588;
        case 0x33758cu: goto label_33758c;
        case 0x337590u: goto label_337590;
        case 0x337594u: goto label_337594;
        case 0x337598u: goto label_337598;
        case 0x33759cu: goto label_33759c;
        case 0x3375a0u: goto label_3375a0;
        case 0x3375a4u: goto label_3375a4;
        case 0x3375a8u: goto label_3375a8;
        case 0x3375acu: goto label_3375ac;
        case 0x3375b0u: goto label_3375b0;
        case 0x3375b4u: goto label_3375b4;
        case 0x3375b8u: goto label_3375b8;
        case 0x3375bcu: goto label_3375bc;
        case 0x3375c0u: goto label_3375c0;
        case 0x3375c4u: goto label_3375c4;
        case 0x3375c8u: goto label_3375c8;
        case 0x3375ccu: goto label_3375cc;
        case 0x3375d0u: goto label_3375d0;
        case 0x3375d4u: goto label_3375d4;
        case 0x3375d8u: goto label_3375d8;
        case 0x3375dcu: goto label_3375dc;
        case 0x3375e0u: goto label_3375e0;
        case 0x3375e4u: goto label_3375e4;
        case 0x3375e8u: goto label_3375e8;
        case 0x3375ecu: goto label_3375ec;
        case 0x3375f0u: goto label_3375f0;
        case 0x3375f4u: goto label_3375f4;
        case 0x3375f8u: goto label_3375f8;
        case 0x3375fcu: goto label_3375fc;
        case 0x337600u: goto label_337600;
        case 0x337604u: goto label_337604;
        case 0x337608u: goto label_337608;
        case 0x33760cu: goto label_33760c;
        case 0x337610u: goto label_337610;
        case 0x337614u: goto label_337614;
        case 0x337618u: goto label_337618;
        case 0x33761cu: goto label_33761c;
        case 0x337620u: goto label_337620;
        case 0x337624u: goto label_337624;
        case 0x337628u: goto label_337628;
        case 0x33762cu: goto label_33762c;
        case 0x337630u: goto label_337630;
        case 0x337634u: goto label_337634;
        case 0x337638u: goto label_337638;
        case 0x33763cu: goto label_33763c;
        case 0x337640u: goto label_337640;
        case 0x337644u: goto label_337644;
        case 0x337648u: goto label_337648;
        case 0x33764cu: goto label_33764c;
        case 0x337650u: goto label_337650;
        case 0x337654u: goto label_337654;
        case 0x337658u: goto label_337658;
        case 0x33765cu: goto label_33765c;
        case 0x337660u: goto label_337660;
        case 0x337664u: goto label_337664;
        case 0x337668u: goto label_337668;
        case 0x33766cu: goto label_33766c;
        case 0x337670u: goto label_337670;
        case 0x337674u: goto label_337674;
        case 0x337678u: goto label_337678;
        case 0x33767cu: goto label_33767c;
        case 0x337680u: goto label_337680;
        case 0x337684u: goto label_337684;
        case 0x337688u: goto label_337688;
        case 0x33768cu: goto label_33768c;
        case 0x337690u: goto label_337690;
        case 0x337694u: goto label_337694;
        case 0x337698u: goto label_337698;
        case 0x33769cu: goto label_33769c;
        default: break;
    }

    ctx->pc = 0x336b90u;

label_336b90:
    // 0x336b90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x336b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_336b94:
    // 0x336b94: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x336b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_336b98:
    // 0x336b98: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x336b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_336b9c:
    // 0x336b9c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x336b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_336ba0:
    // 0x336ba0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x336ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_336ba4:
    // 0x336ba4: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x336ba4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_336ba8:
    // 0x336ba8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x336ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_336bac:
    // 0x336bac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x336bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_336bb0:
    // 0x336bb0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x336bb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336bb4:
    // 0x336bb4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x336bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_336bb8:
    // 0x336bb8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x336bb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_336bbc:
    // 0x336bbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x336bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_336bc0:
    // 0x336bc0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x336bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_336bc4:
    // 0x336bc4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x336bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_336bc8:
    // 0x336bc8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x336bc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_336bcc:
    // 0x336bcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x336bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_336bd0:
    // 0x336bd0: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x336bd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_336bd4:
    // 0x336bd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x336bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_336bd8:
    // 0x336bd8: 0x90830090  lbu         $v1, 0x90($a0)
    ctx->pc = 0x336bd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 144)));
label_336bdc:
    // 0x336bdc: 0x106000b2  beqz        $v1, . + 4 + (0xB2 << 2)
label_336be0:
    if (ctx->pc == 0x336BE0u) {
        ctx->pc = 0x336BE0u;
            // 0x336be0: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->pc = 0x336BE4u;
        goto label_336be4;
    }
    ctx->pc = 0x336BDCu;
    {
        const bool branch_taken_0x336bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336BDCu;
            // 0x336be0: 0x26b0006c  addiu       $s0, $s5, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bdc) {
            ctx->pc = 0x336EA8u;
            goto label_336ea8;
        }
    }
    ctx->pc = 0x336BE4u;
label_336be4:
    // 0x336be4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336be8:
    // 0x336be8: 0xc04f278  jal         func_13C9E0
label_336bec:
    if (ctx->pc == 0x336BECu) {
        ctx->pc = 0x336BECu;
            // 0x336bec: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x336BF0u;
        goto label_336bf0;
    }
    ctx->pc = 0x336BE8u;
    SET_GPR_U32(ctx, 31, 0x336BF0u);
    ctx->pc = 0x336BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336BE8u;
            // 0x336bec: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BF0u; }
        if (ctx->pc != 0x336BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BF0u; }
        if (ctx->pc != 0x336BF0u) { return; }
    }
    ctx->pc = 0x336BF0u;
label_336bf0:
    // 0x336bf0: 0xc6ac0030  lwc1        $f12, 0x30($s5)
    ctx->pc = 0x336bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_336bf4:
    // 0x336bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336bf8:
    // 0x336bf8: 0xc6ad0034  lwc1        $f13, 0x34($s5)
    ctx->pc = 0x336bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_336bfc:
    // 0x336bfc: 0xc6ae0038  lwc1        $f14, 0x38($s5)
    ctx->pc = 0x336bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_336c00:
    // 0x336c00: 0xc04ce50  jal         func_133940
label_336c04:
    if (ctx->pc == 0x336C04u) {
        ctx->pc = 0x336C04u;
            // 0x336c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336C08u;
        goto label_336c08;
    }
    ctx->pc = 0x336C00u;
    SET_GPR_U32(ctx, 31, 0x336C08u);
    ctx->pc = 0x336C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336C00u;
            // 0x336c04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C08u; }
        if (ctx->pc != 0x336C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C08u; }
        if (ctx->pc != 0x336C08u) { return; }
    }
    ctx->pc = 0x336C08u;
label_336c08:
    // 0x336c08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336c0c:
    // 0x336c0c: 0xc04ce80  jal         func_133A00
label_336c10:
    if (ctx->pc == 0x336C10u) {
        ctx->pc = 0x336C10u;
            // 0x336c10: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x336C14u;
        goto label_336c14;
    }
    ctx->pc = 0x336C0Cu;
    SET_GPR_U32(ctx, 31, 0x336C14u);
    ctx->pc = 0x336C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336C0Cu;
            // 0x336c10: 0x26a50010  addiu       $a1, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C14u; }
        if (ctx->pc != 0x336C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C14u; }
        if (ctx->pc != 0x336C14u) { return; }
    }
    ctx->pc = 0x336C14u;
label_336c14:
    // 0x336c14: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x336c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_336c18:
    // 0x336c18: 0x92a6004c  lbu         $a2, 0x4C($s5)
    ctx->pc = 0x336c18u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 76)));
label_336c1c:
    // 0x336c1c: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x336c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_336c20:
    // 0x336c20: 0x8e9e0000  lw          $fp, 0x0($s4)
    ctx->pc = 0x336c20u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336c24:
    // 0x336c24: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x336c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_336c28:
    // 0x336c28: 0x8c760130  lw          $s6, 0x130($v1)
    ctx->pc = 0x336c28u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_336c2c:
    // 0x336c2c: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x336c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_336c30:
    // 0x336c30: 0xc07698c  jal         func_1DA630
label_336c34:
    if (ctx->pc == 0x336C34u) {
        ctx->pc = 0x336C34u;
            // 0x336c34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336C38u;
        goto label_336c38;
    }
    ctx->pc = 0x336C30u;
    SET_GPR_U32(ctx, 31, 0x336C38u);
    ctx->pc = 0x336C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336C30u;
            // 0x336c34: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C38u; }
        if (ctx->pc != 0x336C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C38u; }
        if (ctx->pc != 0x336C38u) { return; }
    }
    ctx->pc = 0x336C38u;
label_336c38:
    // 0x336c38: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x336c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_336c3c:
    // 0x336c3c: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_336c40:
    if (ctx->pc == 0x336C40u) {
        ctx->pc = 0x336C44u;
        goto label_336c44;
    }
    ctx->pc = 0x336C3Cu;
    {
        const bool branch_taken_0x336c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x336c3c) {
            ctx->pc = 0x336C4Cu;
            goto label_336c4c;
        }
    }
    ctx->pc = 0x336C44u;
label_336c44:
    // 0x336c44: 0x10000033  b           . + 4 + (0x33 << 2)
label_336c48:
    if (ctx->pc == 0x336C48u) {
        ctx->pc = 0x336C48u;
            // 0x336c48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x336C4Cu;
        goto label_336c4c;
    }
    ctx->pc = 0x336C44u;
    {
        const bool branch_taken_0x336c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336C44u;
            // 0x336c48: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c44) {
            ctx->pc = 0x336D14u;
            goto label_336d14;
        }
    }
    ctx->pc = 0x336C4Cu;
label_336c4c:
    // 0x336c4c: 0xc0576f4  jal         func_15DBD0
label_336c50:
    if (ctx->pc == 0x336C50u) {
        ctx->pc = 0x336C54u;
        goto label_336c54;
    }
    ctx->pc = 0x336C4Cu;
    SET_GPR_U32(ctx, 31, 0x336C54u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C54u; }
        if (ctx->pc != 0x336C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C54u; }
        if (ctx->pc != 0x336C54u) { return; }
    }
    ctx->pc = 0x336C54u;
label_336c54:
    // 0x336c54: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x336c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_336c58:
    // 0x336c58: 0xc076984  jal         func_1DA610
label_336c5c:
    if (ctx->pc == 0x336C5Cu) {
        ctx->pc = 0x336C5Cu;
            // 0x336c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336C60u;
        goto label_336c60;
    }
    ctx->pc = 0x336C58u;
    SET_GPR_U32(ctx, 31, 0x336C60u);
    ctx->pc = 0x336C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336C58u;
            // 0x336c5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C60u; }
        if (ctx->pc != 0x336C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336C60u; }
        if (ctx->pc != 0x336C60u) { return; }
    }
    ctx->pc = 0x336C60u;
label_336c60:
    // 0x336c60: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x336c60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336c64:
    // 0x336c64: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x336c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_336c68:
    // 0x336c68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x336c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_336c6c:
    // 0x336c6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x336c6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336c70:
    // 0x336c70: 0xc4420790  lwc1        $f2, 0x790($v0)
    ctx->pc = 0x336c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_336c74:
    // 0x336c74: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x336c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336c78:
    // 0x336c78: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x336c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_336c7c:
    // 0x336c7c: 0xc4410798  lwc1        $f1, 0x798($v0)
    ctx->pc = 0x336c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_336c80:
    // 0x336c80: 0xe7a200f0  swc1        $f2, 0xF0($sp)
    ctx->pc = 0x336c80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_336c84:
    // 0x336c84: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x336c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_336c88:
    // 0x336c88: 0xc440079c  lwc1        $f0, 0x79C($v0)
    ctx->pc = 0x336c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_336c8c:
    // 0x336c8c: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x336c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_336c90:
    // 0x336c90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x336c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_336c94:
    // 0x336c94: 0x8c420794  lw          $v0, 0x794($v0)
    ctx->pc = 0x336c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1940)));
label_336c98:
    // 0x336c98: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x336c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_336c9c:
    // 0x336c9c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x336c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_336ca0:
    // 0x336ca0: 0xc7c00004  lwc1        $f0, 0x4($fp)
    ctx->pc = 0x336ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_336ca4:
    // 0x336ca4: 0xc04cca0  jal         func_133280
label_336ca8:
    if (ctx->pc == 0x336CA8u) {
        ctx->pc = 0x336CA8u;
            // 0x336ca8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->pc = 0x336CACu;
        goto label_336cac;
    }
    ctx->pc = 0x336CA4u;
    SET_GPR_U32(ctx, 31, 0x336CACu);
    ctx->pc = 0x336CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336CA4u;
            // 0x336ca8: 0xe7a000f4  swc1        $f0, 0xF4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CACu; }
        if (ctx->pc != 0x336CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CACu; }
        if (ctx->pc != 0x336CACu) { return; }
    }
    ctx->pc = 0x336CACu;
label_336cac:
    // 0x336cac: 0xc076980  jal         func_1DA600
label_336cb0:
    if (ctx->pc == 0x336CB0u) {
        ctx->pc = 0x336CB0u;
            // 0x336cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336CB4u;
        goto label_336cb4;
    }
    ctx->pc = 0x336CACu;
    SET_GPR_U32(ctx, 31, 0x336CB4u);
    ctx->pc = 0x336CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336CACu;
            // 0x336cb0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CB4u; }
        if (ctx->pc != 0x336CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CB4u; }
        if (ctx->pc != 0x336CB4u) { return; }
    }
    ctx->pc = 0x336CB4u;
label_336cb4:
    // 0x336cb4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x336cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_336cb8:
    // 0x336cb8: 0xc04cc34  jal         func_1330D0
label_336cbc:
    if (ctx->pc == 0x336CBCu) {
        ctx->pc = 0x336CBCu;
            // 0x336cbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336CC0u;
        goto label_336cc0;
    }
    ctx->pc = 0x336CB8u;
    SET_GPR_U32(ctx, 31, 0x336CC0u);
    ctx->pc = 0x336CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336CB8u;
            // 0x336cbc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CC0u; }
        if (ctx->pc != 0x336CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CC0u; }
        if (ctx->pc != 0x336CC0u) { return; }
    }
    ctx->pc = 0x336CC0u;
label_336cc0:
    // 0x336cc0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x336cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_336cc4:
    // 0x336cc4: 0xc461d430  lwc1        $f1, -0x2BD0($v1)
    ctx->pc = 0x336cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294956080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_336cc8:
    // 0x336cc8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x336cc8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_336ccc:
    // 0x336ccc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_336cd0:
    if (ctx->pc == 0x336CD0u) {
        ctx->pc = 0x336CD0u;
            // 0x336cd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336CD4u;
        goto label_336cd4;
    }
    ctx->pc = 0x336CCCu;
    {
        const bool branch_taken_0x336ccc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x336ccc) {
            ctx->pc = 0x336CD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336CCCu;
            // 0x336cd0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336CDCu;
            goto label_336cdc;
        }
    }
    ctx->pc = 0x336CD4u;
label_336cd4:
    // 0x336cd4: 0x1000000f  b           . + 4 + (0xF << 2)
label_336cd8:
    if (ctx->pc == 0x336CD8u) {
        ctx->pc = 0x336CD8u;
            // 0x336cd8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x336CDCu;
        goto label_336cdc;
    }
    ctx->pc = 0x336CD4u;
    {
        const bool branch_taken_0x336cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336CD4u;
            // 0x336cd8: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cd4) {
            ctx->pc = 0x336D14u;
            goto label_336d14;
        }
    }
    ctx->pc = 0x336CDCu;
label_336cdc:
    // 0x336cdc: 0xc07697c  jal         func_1DA5F0
label_336ce0:
    if (ctx->pc == 0x336CE0u) {
        ctx->pc = 0x336CE4u;
        goto label_336ce4;
    }
    ctx->pc = 0x336CDCu;
    SET_GPR_U32(ctx, 31, 0x336CE4u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CE4u; }
        if (ctx->pc != 0x336CE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CE4u; }
        if (ctx->pc != 0x336CE4u) { return; }
    }
    ctx->pc = 0x336CE4u;
label_336ce4:
    // 0x336ce4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x336ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336ce8:
    // 0x336ce8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x336ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_336cec:
    // 0x336cec: 0xc04cd60  jal         func_133580
label_336cf0:
    if (ctx->pc == 0x336CF0u) {
        ctx->pc = 0x336CF0u;
            // 0x336cf0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336CF4u;
        goto label_336cf4;
    }
    ctx->pc = 0x336CECu;
    SET_GPR_U32(ctx, 31, 0x336CF4u);
    ctx->pc = 0x336CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336CECu;
            // 0x336cf0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CF4u; }
        if (ctx->pc != 0x336CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336CF4u; }
        if (ctx->pc != 0x336CF4u) { return; }
    }
    ctx->pc = 0x336CF4u;
label_336cf4:
    // 0x336cf4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x336cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_336cf8:
    // 0x336cf8: 0xc04c650  jal         func_131940
label_336cfc:
    if (ctx->pc == 0x336CFCu) {
        ctx->pc = 0x336CFCu;
            // 0x336cfc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x336D00u;
        goto label_336d00;
    }
    ctx->pc = 0x336CF8u;
    SET_GPR_U32(ctx, 31, 0x336D00u);
    ctx->pc = 0x336CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336CF8u;
            // 0x336cfc: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D00u; }
        if (ctx->pc != 0x336D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D00u; }
        if (ctx->pc != 0x336D00u) { return; }
    }
    ctx->pc = 0x336D00u;
label_336d00:
    // 0x336d00: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x336d00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_336d04:
    // 0x336d04: 0x23080  sll         $a2, $v0, 2
    ctx->pc = 0x336d04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_336d08:
    // 0x336d08: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x336d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_336d0c:
    // 0x336d0c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x336d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_336d10:
    // 0x336d10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x336d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_336d14:
    // 0x336d14: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x336d14u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_336d18:
    // 0x336d18: 0x10200063  beqz        $at, . + 4 + (0x63 << 2)
label_336d1c:
    if (ctx->pc == 0x336D1Cu) {
        ctx->pc = 0x336D1Cu;
            // 0x336d1c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x336D20u;
        goto label_336d20;
    }
    ctx->pc = 0x336D18u;
    {
        const bool branch_taken_0x336d18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x336D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336D18u;
            // 0x336d1c: 0xaea30044  sw          $v1, 0x44($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d18) {
            ctx->pc = 0x336EA8u;
            goto label_336ea8;
        }
    }
    ctx->pc = 0x336D20u;
label_336d20:
    // 0x336d20: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x336d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_336d24:
    // 0x336d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336d28:
    // 0x336d28: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_336d2c:
    if (ctx->pc == 0x336D2Cu) {
        ctx->pc = 0x336D30u;
        goto label_336d30;
    }
    ctx->pc = 0x336D28u;
    {
        const bool branch_taken_0x336d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x336d28) {
            ctx->pc = 0x336DD4u;
            goto label_336dd4;
        }
    }
    ctx->pc = 0x336D30u;
label_336d30:
    // 0x336d30: 0xc6140008  lwc1        $f20, 0x8($s0)
    ctx->pc = 0x336d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_336d34:
    // 0x336d34: 0x26160008  addiu       $s6, $s0, 0x8
    ctx->pc = 0x336d34u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_336d38:
    // 0x336d38: 0xc049514  jal         func_125450
label_336d3c:
    if (ctx->pc == 0x336D3Cu) {
        ctx->pc = 0x336D3Cu;
            // 0x336d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x336D40u;
        goto label_336d40;
    }
    ctx->pc = 0x336D38u;
    SET_GPR_U32(ctx, 31, 0x336D40u);
    ctx->pc = 0x336D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336D38u;
            // 0x336d3c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D40u; }
        if (ctx->pc != 0x336D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D40u; }
        if (ctx->pc != 0x336D40u) { return; }
    }
    ctx->pc = 0x336D40u;
label_336d40:
    // 0x336d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x336d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336d44:
    // 0x336d44: 0xc04020c  jal         func_100830
label_336d48:
    if (ctx->pc == 0x336D48u) {
        ctx->pc = 0x336D48u;
            // 0x336d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336D4Cu;
        goto label_336d4c;
    }
    ctx->pc = 0x336D44u;
    SET_GPR_U32(ctx, 31, 0x336D4Cu);
    ctx->pc = 0x336D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336D44u;
            // 0x336d48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100830u;
    if (runtime->hasFunction(0x100830u)) {
        auto targetFn = runtime->lookupFunction(0x100830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D4Cu; }
        if (ctx->pc != 0x336D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100830_0x100830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D4Cu; }
        if (ctx->pc != 0x336D4Cu) { return; }
    }
    ctx->pc = 0x336D4Cu;
label_336d4c:
    // 0x336d4c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_336d50:
    if (ctx->pc == 0x336D50u) {
        ctx->pc = 0x336D54u;
        goto label_336d54;
    }
    ctx->pc = 0x336D4Cu;
    {
        const bool branch_taken_0x336d4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336d4c) {
            ctx->pc = 0x336D70u;
            goto label_336d70;
        }
    }
    ctx->pc = 0x336D54u;
label_336d54:
    // 0x336d54: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x336d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_336d58:
    // 0x336d58: 0x0  nop
    ctx->pc = 0x336d58u;
    // NOP
label_336d5c:
    // 0x336d5c: 0x4600a303  div.s       $f12, $f20, $f0
    ctx->pc = 0x336d5cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[12] = ctx->f[20] / ctx->f[0];
label_336d60:
    // 0x336d60: 0x0  nop
    ctx->pc = 0x336d60u;
    // NOP
label_336d64:
    // 0x336d64: 0x0  nop
    ctx->pc = 0x336d64u;
    // NOP
label_336d68:
    // 0x336d68: 0x10000002  b           . + 4 + (0x2 << 2)
label_336d6c:
    if (ctx->pc == 0x336D6Cu) {
        ctx->pc = 0x336D70u;
        goto label_336d70;
    }
    ctx->pc = 0x336D68u;
    {
        const bool branch_taken_0x336d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336d68) {
            ctx->pc = 0x336D74u;
            goto label_336d74;
        }
    }
    ctx->pc = 0x336D70u;
label_336d70:
    // 0x336d70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x336d70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_336d74:
    // 0x336d74: 0xc054c3c  jal         func_1530F0
label_336d78:
    if (ctx->pc == 0x336D78u) {
        ctx->pc = 0x336D78u;
            // 0x336d78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x336D7Cu;
        goto label_336d7c;
    }
    ctx->pc = 0x336D74u;
    SET_GPR_U32(ctx, 31, 0x336D7Cu);
    ctx->pc = 0x336D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336D74u;
            // 0x336d78: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D7Cu; }
        if (ctx->pc != 0x336D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D7Cu; }
        if (ctx->pc != 0x336D7Cu) { return; }
    }
    ctx->pc = 0x336D7Cu;
label_336d7c:
    // 0x336d7c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x336d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_336d80:
    // 0x336d80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x336d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336d84:
    // 0x336d84: 0xc04cd60  jal         func_133580
label_336d88:
    if (ctx->pc == 0x336D88u) {
        ctx->pc = 0x336D88u;
            // 0x336d88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336D8Cu;
        goto label_336d8c;
    }
    ctx->pc = 0x336D84u;
    SET_GPR_U32(ctx, 31, 0x336D8Cu);
    ctx->pc = 0x336D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336D84u;
            // 0x336d88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D8Cu; }
        if (ctx->pc != 0x336D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336D8Cu; }
        if (ctx->pc != 0x336D8Cu) { return; }
    }
    ctx->pc = 0x336D8Cu;
label_336d8c:
    // 0x336d8c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x336d8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_336d90:
    // 0x336d90: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x336d90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_336d94:
    // 0x336d94: 0x320f809  jalr        $t9
label_336d98:
    if (ctx->pc == 0x336D98u) {
        ctx->pc = 0x336D98u;
            // 0x336d98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336D9Cu;
        goto label_336d9c;
    }
    ctx->pc = 0x336D94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336D9Cu);
        ctx->pc = 0x336D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336D94u;
            // 0x336d98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336D9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336D9Cu; }
            if (ctx->pc != 0x336D9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x336D9Cu;
label_336d9c:
    // 0x336d9c: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x336d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336da0:
    // 0x336da0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x336da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_336da4:
    // 0x336da4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x336da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_336da8:
    // 0x336da8: 0xc054fd4  jal         func_153F50
label_336dac:
    if (ctx->pc == 0x336DACu) {
        ctx->pc = 0x336DACu;
            // 0x336dac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336DB0u;
        goto label_336db0;
    }
    ctx->pc = 0x336DA8u;
    SET_GPR_U32(ctx, 31, 0x336DB0u);
    ctx->pc = 0x336DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336DA8u;
            // 0x336dac: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336DB0u; }
        if (ctx->pc != 0x336DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336DB0u; }
        if (ctx->pc != 0x336DB0u) { return; }
    }
    ctx->pc = 0x336DB0u;
label_336db0:
    // 0x336db0: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x336db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336db4:
    // 0x336db4: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x336db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_336db8:
    // 0x336db8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x336db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_336dbc:
    // 0x336dbc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x336dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_336dc0:
    // 0x336dc0: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x336dc0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_336dc4:
    // 0x336dc4: 0xc055234  jal         func_1548D0
label_336dc8:
    if (ctx->pc == 0x336DC8u) {
        ctx->pc = 0x336DC8u;
            // 0x336dc8: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->pc = 0x336DCCu;
        goto label_336dcc;
    }
    ctx->pc = 0x336DC4u;
    SET_GPR_U32(ctx, 31, 0x336DCCu);
    ctx->pc = 0x336DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336DC4u;
            // 0x336dc8: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336DCCu; }
        if (ctx->pc != 0x336DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336DCCu; }
        if (ctx->pc != 0x336DCCu) { return; }
    }
    ctx->pc = 0x336DCCu;
label_336dcc:
    // 0x336dcc: 0x10000037  b           . + 4 + (0x37 << 2)
label_336dd0:
    if (ctx->pc == 0x336DD0u) {
        ctx->pc = 0x336DD0u;
            // 0x336dd0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x336DD4u;
        goto label_336dd4;
    }
    ctx->pc = 0x336DCCu;
    {
        const bool branch_taken_0x336dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336DCCu;
            // 0x336dd0: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336dcc) {
            ctx->pc = 0x336EACu;
            goto label_336eac;
        }
    }
    ctx->pc = 0x336DD4u;
label_336dd4:
    // 0x336dd4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336dd8:
    // 0x336dd8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x336dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336ddc:
    // 0x336ddc: 0x8c66e3c0  lw          $a2, -0x1C40($v1)
    ctx->pc = 0x336ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_336de0:
    // 0x336de0: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x336de0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_336de4:
    // 0x336de4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x336de4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
label_336de8:
    // 0x336de8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336dec:
    // 0x336dec: 0x65880  sll         $t3, $a2, 2
    ctx->pc = 0x336decu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_336df0:
    // 0x336df0: 0x8c65e3d8  lw          $a1, -0x1C28($v1)
    ctx->pc = 0x336df0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
label_336df4:
    // 0x336df4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336df4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336df8:
    // 0x336df8: 0x53180  sll         $a2, $a1, 6
    ctx->pc = 0x336df8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_336dfc:
    // 0x336dfc: 0x8c64e360  lw          $a0, -0x1CA0($v1)
    ctx->pc = 0x336dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
label_336e00:
    // 0x336e00: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x336e00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_336e04:
    // 0x336e04: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336e08:
    // 0x336e08: 0x869821  addu        $s3, $a0, $a2
    ctx->pc = 0x336e08u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_336e0c:
    // 0x336e0c: 0x8c63e3b0  lw          $v1, -0x1C50($v1)
    ctx->pc = 0x336e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_336e10:
    // 0x336e10: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x336e10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_336e14:
    // 0x336e14: 0x6b3021  addu        $a2, $v1, $t3
    ctx->pc = 0x336e14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_336e18:
    // 0x336e18: 0xacd30000  sw          $s3, 0x0($a2)
    ctx->pc = 0x336e18u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
label_336e1c:
    // 0x336e1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336e20:
    // 0x336e20: 0x8c89e378  lw          $t1, -0x1C88($a0)
    ctx->pc = 0x336e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294959992)));
label_336e24:
    // 0x336e24: 0x8ca6e3d8  lw          $a2, -0x1C28($a1)
    ctx->pc = 0x336e24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960088)));
label_336e28:
    // 0x336e28: 0x8c64e3b8  lw          $a0, -0x1C48($v1)
    ctx->pc = 0x336e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960056)));
label_336e2c:
    // 0x336e2c: 0x65080  sll         $t2, $a2, 2
    ctx->pc = 0x336e2cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_336e30:
    // 0x336e30: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x336e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_336e34:
    // 0x336e34: 0x12a9021  addu        $s2, $t1, $t2
    ctx->pc = 0x336e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 10)));
label_336e38:
    // 0x336e38: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336e38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336e3c:
    // 0x336e3c: 0x8b4821  addu        $t1, $a0, $t3
    ctx->pc = 0x336e3cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_336e40:
    // 0x336e40: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x336e40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_336e44:
    // 0x336e44: 0xad320000  sw          $s2, 0x0($t1)
    ctx->pc = 0x336e44u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 18));
label_336e48:
    // 0x336e48: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x336e48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_336e4c:
    // 0x336e4c: 0x8d08e3d8  lw          $t0, -0x1C28($t0)
    ctx->pc = 0x336e4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
label_336e50:
    // 0x336e50: 0x8ca2e3c0  lw          $v0, -0x1C40($a1)
    ctx->pc = 0x336e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
label_336e54:
    // 0x336e54: 0x1092821  addu        $a1, $t0, $t1
    ctx->pc = 0x336e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_336e58:
    // 0x336e58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_336e5c:
    // 0x336e5c: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x336e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
label_336e60:
    // 0x336e60: 0xac62e3c0  sw          $v0, -0x1C40($v1)
    ctx->pc = 0x336e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 2));
label_336e64:
    // 0x336e64: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x336e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336e68:
    // 0x336e68: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x336e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_336e6c:
    // 0x336e6c: 0xc04e4a4  jal         func_139290
label_336e70:
    if (ctx->pc == 0x336E70u) {
        ctx->pc = 0x336E70u;
            // 0x336e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336E74u;
        goto label_336e74;
    }
    ctx->pc = 0x336E6Cu;
    SET_GPR_U32(ctx, 31, 0x336E74u);
    ctx->pc = 0x336E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336E6Cu;
            // 0x336e70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336E74u; }
        if (ctx->pc != 0x336E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336E74u; }
        if (ctx->pc != 0x336E74u) { return; }
    }
    ctx->pc = 0x336E74u;
label_336e74:
    // 0x336e74: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x336e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_336e78:
    // 0x336e78: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x336e78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_336e7c:
    // 0x336e7c: 0xc04cd60  jal         func_133580
label_336e80:
    if (ctx->pc == 0x336E80u) {
        ctx->pc = 0x336E80u;
            // 0x336e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336E84u;
        goto label_336e84;
    }
    ctx->pc = 0x336E7Cu;
    SET_GPR_U32(ctx, 31, 0x336E84u);
    ctx->pc = 0x336E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336E7Cu;
            // 0x336e80: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336E84u; }
        if (ctx->pc != 0x336E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336E84u; }
        if (ctx->pc != 0x336E84u) { return; }
    }
    ctx->pc = 0x336E84u;
label_336e84:
    // 0x336e84: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x336e84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_336e88:
    // 0x336e88: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x336e88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_336e8c:
    // 0x336e8c: 0x320f809  jalr        $t9
label_336e90:
    if (ctx->pc == 0x336E90u) {
        ctx->pc = 0x336E90u;
            // 0x336e90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336E94u;
        goto label_336e94;
    }
    ctx->pc = 0x336E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336E94u);
        ctx->pc = 0x336E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336E8Cu;
            // 0x336e90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336E94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336E94u; }
            if (ctx->pc != 0x336E94u) { return; }
        }
        }
    }
    ctx->pc = 0x336E94u;
label_336e94:
    // 0x336e94: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x336e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_336e98:
    // 0x336e98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x336e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_336e9c:
    // 0x336e9c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x336e9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_336ea0:
    // 0x336ea0: 0xc054fd4  jal         func_153F50
label_336ea4:
    if (ctx->pc == 0x336EA4u) {
        ctx->pc = 0x336EA4u;
            // 0x336ea4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336EA8u;
        goto label_336ea8;
    }
    ctx->pc = 0x336EA0u;
    SET_GPR_U32(ctx, 31, 0x336EA8u);
    ctx->pc = 0x336EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336EA0u;
            // 0x336ea4: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153F50u;
    if (runtime->hasFunction(0x153F50u)) {
        auto targetFn = runtime->lookupFunction(0x153F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336EA8u; }
        if (ctx->pc != 0x336EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00153F50_0x153f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336EA8u; }
        if (ctx->pc != 0x336EA8u) { return; }
    }
    ctx->pc = 0x336EA8u;
label_336ea8:
    // 0x336ea8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x336ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_336eac:
    // 0x336eac: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x336eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_336eb0:
    // 0x336eb0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x336eb0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_336eb4:
    // 0x336eb4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x336eb4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_336eb8:
    // 0x336eb8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x336eb8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_336ebc:
    // 0x336ebc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x336ebcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_336ec0:
    // 0x336ec0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x336ec0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_336ec4:
    // 0x336ec4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x336ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_336ec8:
    // 0x336ec8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x336ec8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_336ecc:
    // 0x336ecc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x336eccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_336ed0:
    // 0x336ed0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x336ed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_336ed4:
    // 0x336ed4: 0x3e00008  jr          $ra
label_336ed8:
    if (ctx->pc == 0x336ED8u) {
        ctx->pc = 0x336ED8u;
            // 0x336ed8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x336EDCu;
        goto label_336edc;
    }
    ctx->pc = 0x336ED4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336ED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336ED4u;
            // 0x336ed8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336EDCu;
label_336edc:
    // 0x336edc: 0x0  nop
    ctx->pc = 0x336edcu;
    // NOP
label_336ee0:
    // 0x336ee0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x336ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_336ee4:
    // 0x336ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336ee8:
    // 0x336ee8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_336eec:
    if (ctx->pc == 0x336EECu) {
        ctx->pc = 0x336EF0u;
        goto label_336ef0;
    }
    ctx->pc = 0x336EE8u;
    {
        const bool branch_taken_0x336ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x336ee8) {
            ctx->pc = 0x336EF8u;
            goto label_336ef8;
        }
    }
    ctx->pc = 0x336EF0u;
label_336ef0:
    // 0x336ef0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_336ef4:
    if (ctx->pc == 0x336EF4u) {
        ctx->pc = 0x336EF4u;
            // 0x336ef4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->pc = 0x336EF8u;
        goto label_336ef8;
    }
    ctx->pc = 0x336EF0u;
    {
        const bool branch_taken_0x336ef0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ef0) {
            ctx->pc = 0x336EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336EF0u;
            // 0x336ef4: 0xac8300d0  sw          $v1, 0xD0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336EF8u;
            goto label_336ef8;
        }
    }
    ctx->pc = 0x336EF8u;
label_336ef8:
    // 0x336ef8: 0x3e00008  jr          $ra
label_336efc:
    if (ctx->pc == 0x336EFCu) {
        ctx->pc = 0x336F00u;
        goto label_336f00;
    }
    ctx->pc = 0x336EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336F00u;
label_336f00:
    // 0x336f00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336f04:
    // 0x336f04: 0x3c02ff1e  lui         $v0, 0xFF1E
    ctx->pc = 0x336f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65310 << 16));
label_336f08:
    // 0x336f08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_336f0c:
    // 0x336f0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x336f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336f10:
    // 0x336f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_336f14:
    // 0x336f14: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x336f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_336f18:
    // 0x336f18: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336f1c:
    // 0x336f1c: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x336f1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_336f20:
    // 0x336f20: 0x3444febf  ori         $a0, $v0, 0xFEBF
    ctx->pc = 0x336f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65215);
label_336f24:
    // 0x336f24: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_336f28:
    // 0x336f28: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x336f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_336f2c:
    // 0x336f2c: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x336f2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_336f30:
    // 0x336f30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x336f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_336f34:
    // 0x336f34: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x336f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_336f38:
    // 0x336f38: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x336f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_336f3c:
    // 0x336f3c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x336f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_336f40:
    // 0x336f40: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x336f40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_336f44:
    // 0x336f44: 0xc08bff0  jal         func_22FFC0
label_336f48:
    if (ctx->pc == 0x336F48u) {
        ctx->pc = 0x336F48u;
            // 0x336f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336F4Cu;
        goto label_336f4c;
    }
    ctx->pc = 0x336F44u;
    SET_GPR_U32(ctx, 31, 0x336F4Cu);
    ctx->pc = 0x336F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336F44u;
            // 0x336f48: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F4Cu; }
        if (ctx->pc != 0x336F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F4Cu; }
        if (ctx->pc != 0x336F4Cu) { return; }
    }
    ctx->pc = 0x336F4Cu;
label_336f4c:
    // 0x336f4c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x336f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_336f50:
    // 0x336f50: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x336f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_336f54:
    // 0x336f54: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x336f54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336f58:
    // 0x336f58: 0xc08914c  jal         func_224530
label_336f5c:
    if (ctx->pc == 0x336F5Cu) {
        ctx->pc = 0x336F5Cu;
            // 0x336f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336F60u;
        goto label_336f60;
    }
    ctx->pc = 0x336F58u;
    SET_GPR_U32(ctx, 31, 0x336F60u);
    ctx->pc = 0x336F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336F58u;
            // 0x336f5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F60u; }
        if (ctx->pc != 0x336F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F60u; }
        if (ctx->pc != 0x336F60u) { return; }
    }
    ctx->pc = 0x336F60u;
label_336f60:
    // 0x336f60: 0xc0e393c  jal         func_38E4F0
label_336f64:
    if (ctx->pc == 0x336F64u) {
        ctx->pc = 0x336F64u;
            // 0x336f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x336F68u;
        goto label_336f68;
    }
    ctx->pc = 0x336F60u;
    SET_GPR_U32(ctx, 31, 0x336F68u);
    ctx->pc = 0x336F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336F60u;
            // 0x336f64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F68u; }
        if (ctx->pc != 0x336F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336F68u; }
        if (ctx->pc != 0x336F68u) { return; }
    }
    ctx->pc = 0x336F68u;
label_336f68:
    // 0x336f68: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x336f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_336f6c:
    // 0x336f6c: 0x3c0442c8  lui         $a0, 0x42C8
    ctx->pc = 0x336f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17096 << 16));
label_336f70:
    // 0x336f70: 0xac640154  sw          $a0, 0x154($v1)
    ctx->pc = 0x336f70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 4));
label_336f74:
    // 0x336f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336f78:
    // 0x336f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_336f7c:
    // 0x336f7c: 0x3e00008  jr          $ra
label_336f80:
    if (ctx->pc == 0x336F80u) {
        ctx->pc = 0x336F80u;
            // 0x336f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x336F84u;
        goto label_336f84;
    }
    ctx->pc = 0x336F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336F7Cu;
            // 0x336f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336F84u;
label_336f84:
    // 0x336f84: 0x0  nop
    ctx->pc = 0x336f84u;
    // NOP
label_336f88:
    // 0x336f88: 0x0  nop
    ctx->pc = 0x336f88u;
    // NOP
label_336f8c:
    // 0x336f8c: 0x0  nop
    ctx->pc = 0x336f8cu;
    // NOP
label_336f90:
    // 0x336f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x336f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_336f94:
    // 0x336f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x336f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_336f98:
    // 0x336f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x336f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_336f9c:
    // 0x336f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x336f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_336fa0:
    // 0x336fa0: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x336fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_336fa4:
    // 0x336fa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_336fa8:
    if (ctx->pc == 0x336FA8u) {
        ctx->pc = 0x336FA8u;
            // 0x336fa8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x336FACu;
        goto label_336fac;
    }
    ctx->pc = 0x336FA4u;
    {
        const bool branch_taken_0x336fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336fa4) {
            ctx->pc = 0x336FA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336FA4u;
            // 0x336fa8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336FC0u;
            goto label_336fc0;
        }
    }
    ctx->pc = 0x336FACu;
label_336fac:
    // 0x336fac: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x336facu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_336fb0:
    // 0x336fb0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x336fb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_336fb4:
    // 0x336fb4: 0x320f809  jalr        $t9
label_336fb8:
    if (ctx->pc == 0x336FB8u) {
        ctx->pc = 0x336FB8u;
            // 0x336fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336FBCu;
        goto label_336fbc;
    }
    ctx->pc = 0x336FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336FBCu);
        ctx->pc = 0x336FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336FB4u;
            // 0x336fb8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336FBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336FBCu; }
            if (ctx->pc != 0x336FBCu) { return; }
        }
        }
    }
    ctx->pc = 0x336FBCu;
label_336fbc:
    // 0x336fbc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x336fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_336fc0:
    // 0x336fc0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x336fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_336fc4:
    // 0x336fc4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_336fc8:
    if (ctx->pc == 0x336FC8u) {
        ctx->pc = 0x336FC8u;
            // 0x336fc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x336FCCu;
        goto label_336fcc;
    }
    ctx->pc = 0x336FC4u;
    {
        const bool branch_taken_0x336fc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x336fc4) {
            ctx->pc = 0x336FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336FC4u;
            // 0x336fc8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336FE0u;
            goto label_336fe0;
        }
    }
    ctx->pc = 0x336FCCu;
label_336fcc:
    // 0x336fcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x336fccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_336fd0:
    // 0x336fd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x336fd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_336fd4:
    // 0x336fd4: 0x320f809  jalr        $t9
label_336fd8:
    if (ctx->pc == 0x336FD8u) {
        ctx->pc = 0x336FD8u;
            // 0x336fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x336FDCu;
        goto label_336fdc;
    }
    ctx->pc = 0x336FD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x336FDCu);
        ctx->pc = 0x336FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336FD4u;
            // 0x336fd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x336FDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x336FDCu; }
            if (ctx->pc != 0x336FDCu) { return; }
        }
        }
    }
    ctx->pc = 0x336FDCu;
label_336fdc:
    // 0x336fdc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x336fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_336fe0:
    // 0x336fe0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x336fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_336fe4:
    // 0x336fe4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x336fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_336fe8:
    // 0x336fe8: 0x3e00008  jr          $ra
label_336fec:
    if (ctx->pc == 0x336FECu) {
        ctx->pc = 0x336FECu;
            // 0x336fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x336FF0u;
        goto label_336ff0;
    }
    ctx->pc = 0x336FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336FE8u;
            // 0x336fec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336FF0u;
label_336ff0:
    // 0x336ff0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x336ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_336ff4:
    // 0x336ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x336ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_336ff8:
    // 0x336ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x336ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_336ffc:
    // 0x336ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x336ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_337000:
    // 0x337000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x337000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_337004:
    // 0x337004: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337008:
    // 0x337008: 0xc0892d0  jal         func_224B40
label_33700c:
    if (ctx->pc == 0x33700Cu) {
        ctx->pc = 0x33700Cu;
            // 0x33700c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x337010u;
        goto label_337010;
    }
    ctx->pc = 0x337008u;
    SET_GPR_U32(ctx, 31, 0x337010u);
    ctx->pc = 0x33700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337008u;
            // 0x33700c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337010u; }
        if (ctx->pc != 0x337010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337010u; }
        if (ctx->pc != 0x337010u) { return; }
    }
    ctx->pc = 0x337010u;
label_337010:
    // 0x337010: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_337014:
    // 0x337014: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x337014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_337018:
    // 0x337018: 0x8c423e68  lw          $v0, 0x3E68($v0)
    ctx->pc = 0x337018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15976)));
label_33701c:
    // 0x33701c: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x33701cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_337020:
    // 0x337020: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x337020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_337024:
    // 0x337024: 0xc0b6e68  jal         func_2DB9A0
label_337028:
    if (ctx->pc == 0x337028u) {
        ctx->pc = 0x337028u;
            // 0x337028: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x33702Cu;
        goto label_33702c;
    }
    ctx->pc = 0x337024u;
    SET_GPR_U32(ctx, 31, 0x33702Cu);
    ctx->pc = 0x337028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337024u;
            // 0x337028: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33702Cu; }
        if (ctx->pc != 0x33702Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33702Cu; }
        if (ctx->pc != 0x33702Cu) { return; }
    }
    ctx->pc = 0x33702Cu;
label_33702c:
    // 0x33702c: 0xc0b6dac  jal         func_2DB6B0
label_337030:
    if (ctx->pc == 0x337030u) {
        ctx->pc = 0x337030u;
            // 0x337030: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x337034u;
        goto label_337034;
    }
    ctx->pc = 0x33702Cu;
    SET_GPR_U32(ctx, 31, 0x337034u);
    ctx->pc = 0x337030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33702Cu;
            // 0x337030: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337034u; }
        if (ctx->pc != 0x337034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337034u; }
        if (ctx->pc != 0x337034u) { return; }
    }
    ctx->pc = 0x337034u;
label_337034:
    // 0x337034: 0xc0cac94  jal         func_32B250
label_337038:
    if (ctx->pc == 0x337038u) {
        ctx->pc = 0x337038u;
            // 0x337038: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x33703Cu;
        goto label_33703c;
    }
    ctx->pc = 0x337034u;
    SET_GPR_U32(ctx, 31, 0x33703Cu);
    ctx->pc = 0x337038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337034u;
            // 0x337038: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33703Cu; }
        if (ctx->pc != 0x33703Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33703Cu; }
        if (ctx->pc != 0x33703Cu) { return; }
    }
    ctx->pc = 0x33703Cu;
label_33703c:
    // 0x33703c: 0xc0cac84  jal         func_32B210
label_337040:
    if (ctx->pc == 0x337040u) {
        ctx->pc = 0x337040u;
            // 0x337040: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x337044u;
        goto label_337044;
    }
    ctx->pc = 0x33703Cu;
    SET_GPR_U32(ctx, 31, 0x337044u);
    ctx->pc = 0x337040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33703Cu;
            // 0x337040: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337044u; }
        if (ctx->pc != 0x337044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337044u; }
        if (ctx->pc != 0x337044u) { return; }
    }
    ctx->pc = 0x337044u;
label_337044:
    // 0x337044: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x337044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_337048:
    // 0x337048: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_33704c:
    // 0x33704c: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x33704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_337050:
    // 0x337050: 0xc0a5a68  jal         func_2969A0
label_337054:
    if (ctx->pc == 0x337054u) {
        ctx->pc = 0x337054u;
            // 0x337054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x337058u;
        goto label_337058;
    }
    ctx->pc = 0x337050u;
    SET_GPR_U32(ctx, 31, 0x337058u);
    ctx->pc = 0x337054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337050u;
            // 0x337054: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337058u; }
        if (ctx->pc != 0x337058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337058u; }
        if (ctx->pc != 0x337058u) { return; }
    }
    ctx->pc = 0x337058u;
label_337058:
    // 0x337058: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x337058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_33705c:
    // 0x33705c: 0x3c0942c8  lui         $t1, 0x42C8
    ctx->pc = 0x33705cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17096 << 16));
label_337060:
    // 0x337060: 0x8c433e68  lw          $v1, 0x3E68($v0)
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15976)));
label_337064:
    // 0x337064: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x337064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_337068:
    // 0x337068: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x337068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_33706c:
    // 0x33706c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337070:
    // 0x337070: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x337070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337074:
    // 0x337074: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x337074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_337078:
    // 0x337078: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x337078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_33707c:
    // 0x33707c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x33707cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_337080:
    // 0x337080: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x337080u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_337084:
    // 0x337084: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x337084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_337088:
    // 0x337088: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_33708c:
    // 0x33708c: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x33708cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_337090:
    // 0x337090: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x337090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_337094:
    // 0x337094: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x337094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_337098:
    // 0x337098: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33709c:
    // 0x33709c: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x33709cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_3370a0:
    // 0x3370a0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3370a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3370a4:
    // 0x3370a4: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x3370a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_3370a8:
    // 0x3370a8: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x3370a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_3370ac:
    // 0x3370ac: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x3370acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_3370b0:
    // 0x3370b0: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x3370b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_3370b4:
    // 0x3370b4: 0xafa90168  sw          $t1, 0x168($sp)
    ctx->pc = 0x3370b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 9));
label_3370b8:
    // 0x3370b8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x3370b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_3370bc:
    // 0x3370bc: 0xa3a80170  sb          $t0, 0x170($sp)
    ctx->pc = 0x3370bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 8));
label_3370c0:
    // 0x3370c0: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x3370c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_3370c4:
    // 0x3370c4: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x3370c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_3370c8:
    // 0x3370c8: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x3370c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3370cc:
    // 0x3370cc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3370ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_3370d0:
    // 0x3370d0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x3370d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3370d4:
    // 0x3370d4: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x3370d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_3370d8:
    // 0x3370d8: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x3370d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3370dc:
    // 0x3370dc: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x3370dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_3370e0:
    // 0x3370e0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x3370e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_3370e4:
    // 0x3370e4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x3370e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_3370e8:
    // 0x3370e8: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x3370e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3370ec:
    // 0x3370ec: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x3370ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3370f0:
    // 0x3370f0: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x3370f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3370f4:
    // 0x3370f4: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x3370f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_3370f8:
    // 0x3370f8: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x3370f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_3370fc:
    // 0x3370fc: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x3370fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_337100:
    // 0x337100: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x337100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_337104:
    // 0x337104: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x337104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_337108:
    // 0x337108: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x337108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_33710c:
    // 0x33710c: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x33710cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_337110:
    // 0x337110: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x337110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_337114:
    // 0x337114: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x337114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337118:
    // 0x337118: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x337118u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_33711c:
    // 0x33711c: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x33711cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_337120:
    // 0x337120: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x337120u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_337124:
    // 0x337124: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x337124u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_337128:
    // 0x337128: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x337128u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_33712c:
    // 0x33712c: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x33712cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_337130:
    // 0x337130: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x337130u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_337134:
    // 0x337134: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x337134u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_337138:
    // 0x337138: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x337138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_33713c:
    // 0x33713c: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x33713cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_337140:
    // 0x337140: 0xc0a7a88  jal         func_29EA20
label_337144:
    if (ctx->pc == 0x337144u) {
        ctx->pc = 0x337144u;
            // 0x337144: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x337148u;
        goto label_337148;
    }
    ctx->pc = 0x337140u;
    SET_GPR_U32(ctx, 31, 0x337148u);
    ctx->pc = 0x337144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337140u;
            // 0x337144: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337148u; }
        if (ctx->pc != 0x337148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337148u; }
        if (ctx->pc != 0x337148u) { return; }
    }
    ctx->pc = 0x337148u;
label_337148:
    // 0x337148: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x337148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_33714c:
    // 0x33714c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33714cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_337150:
    // 0x337150: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_337154:
    if (ctx->pc == 0x337154u) {
        ctx->pc = 0x337154u;
            // 0x337154: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x337158u;
        goto label_337158;
    }
    ctx->pc = 0x337150u;
    {
        const bool branch_taken_0x337150 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337150u;
            // 0x337154: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337150) {
            ctx->pc = 0x3371A0u;
            goto label_3371a0;
        }
    }
    ctx->pc = 0x337158u;
label_337158:
    // 0x337158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33715c:
    // 0x33715c: 0xc088ef4  jal         func_223BD0
label_337160:
    if (ctx->pc == 0x337160u) {
        ctx->pc = 0x337160u;
            // 0x337160: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x337164u;
        goto label_337164;
    }
    ctx->pc = 0x33715Cu;
    SET_GPR_U32(ctx, 31, 0x337164u);
    ctx->pc = 0x337160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33715Cu;
            // 0x337160: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337164u; }
        if (ctx->pc != 0x337164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337164u; }
        if (ctx->pc != 0x337164u) { return; }
    }
    ctx->pc = 0x337164u;
label_337164:
    // 0x337164: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337168:
    // 0x337168: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33716c:
    // 0x33716c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x33716cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_337170:
    // 0x337170: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x337170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_337174:
    // 0x337174: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x337174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_337178:
    // 0x337178: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x337178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_33717c:
    // 0x33717c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x33717cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337180:
    // 0x337180: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_337184:
    // 0x337184: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x337184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_337188:
    // 0x337188: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x337188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_33718c:
    // 0x33718c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x33718cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_337190:
    // 0x337190: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x337190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_337194:
    // 0x337194: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x337194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_337198:
    // 0x337198: 0xc088b38  jal         func_222CE0
label_33719c:
    if (ctx->pc == 0x33719Cu) {
        ctx->pc = 0x33719Cu;
            // 0x33719c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3371A0u;
        goto label_3371a0;
    }
    ctx->pc = 0x337198u;
    SET_GPR_U32(ctx, 31, 0x3371A0u);
    ctx->pc = 0x33719Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337198u;
            // 0x33719c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371A0u; }
        if (ctx->pc != 0x3371A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371A0u; }
        if (ctx->pc != 0x3371A0u) { return; }
    }
    ctx->pc = 0x3371A0u;
label_3371a0:
    // 0x3371a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3371a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3371a4:
    // 0x3371a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3371a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3371a8:
    // 0x3371a8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x3371a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_3371ac:
    // 0x3371ac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3371acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3371b0:
    // 0x3371b0: 0xc08c164  jal         func_230590
label_3371b4:
    if (ctx->pc == 0x3371B4u) {
        ctx->pc = 0x3371B4u;
            // 0x3371b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3371B8u;
        goto label_3371b8;
    }
    ctx->pc = 0x3371B0u;
    SET_GPR_U32(ctx, 31, 0x3371B8u);
    ctx->pc = 0x3371B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3371B0u;
            // 0x3371b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371B8u; }
        if (ctx->pc != 0x3371B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371B8u; }
        if (ctx->pc != 0x3371B8u) { return; }
    }
    ctx->pc = 0x3371B8u;
label_3371b8:
    // 0x3371b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3371b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3371bc:
    // 0x3371bc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3371bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3371c0:
    // 0x3371c0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3371c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3371c4:
    // 0x3371c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3371c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3371c8:
    // 0x3371c8: 0xc08914c  jal         func_224530
label_3371cc:
    if (ctx->pc == 0x3371CCu) {
        ctx->pc = 0x3371CCu;
            // 0x3371cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x3371D0u;
        goto label_3371d0;
    }
    ctx->pc = 0x3371C8u;
    SET_GPR_U32(ctx, 31, 0x3371D0u);
    ctx->pc = 0x3371CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3371C8u;
            // 0x3371cc: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371D0u; }
        if (ctx->pc != 0x3371D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3371D0u; }
        if (ctx->pc != 0x3371D0u) { return; }
    }
    ctx->pc = 0x3371D0u;
label_3371d0:
    // 0x3371d0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x3371d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3371d4:
    // 0x3371d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3371d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3371d8:
    // 0x3371d8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x3371d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3371dc:
    // 0x3371dc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x3371dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3371e0:
    // 0x3371e0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x3371e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3371e4:
    // 0x3371e4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3371e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_3371e8:
    // 0x3371e8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3371e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_3371ec:
    // 0x3371ec: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x3371ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_3371f0:
    // 0x3371f0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x3371f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3371f4:
    // 0x3371f4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3371f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3371f8:
    // 0x3371f8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3371f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3371fc:
    // 0x3371fc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3371fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_337200:
    // 0x337200: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x337200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_337204:
    // 0x337204: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x337204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337208:
    // 0x337208: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x337208u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_33720c:
    // 0x33720c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x33720cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_337210:
    // 0x337210: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x337210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_337214:
    // 0x337214: 0xc0892b0  jal         func_224AC0
label_337218:
    if (ctx->pc == 0x337218u) {
        ctx->pc = 0x337218u;
            // 0x337218: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x33721Cu;
        goto label_33721c;
    }
    ctx->pc = 0x337214u;
    SET_GPR_U32(ctx, 31, 0x33721Cu);
    ctx->pc = 0x337218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337214u;
            // 0x337218: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33721Cu; }
        if (ctx->pc != 0x33721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33721Cu; }
        if (ctx->pc != 0x33721Cu) { return; }
    }
    ctx->pc = 0x33721Cu;
label_33721c:
    // 0x33721c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x33721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_337220:
    // 0x337220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x337220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337224:
    // 0x337224: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x337224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_337228:
    // 0x337228: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x337228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_33722c:
    // 0x33722c: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x33722cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_337230:
    // 0x337230: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x337230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_337234:
    // 0x337234: 0xc0891d8  jal         func_224760
label_337238:
    if (ctx->pc == 0x337238u) {
        ctx->pc = 0x337238u;
            // 0x337238: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x33723Cu;
        goto label_33723c;
    }
    ctx->pc = 0x337234u;
    SET_GPR_U32(ctx, 31, 0x33723Cu);
    ctx->pc = 0x337238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337234u;
            // 0x337238: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33723Cu; }
        if (ctx->pc != 0x33723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33723Cu; }
        if (ctx->pc != 0x33723Cu) { return; }
    }
    ctx->pc = 0x33723Cu;
label_33723c:
    // 0x33723c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x33723cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_337240:
    // 0x337240: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337244:
    // 0x337244: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x337244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_337248:
    // 0x337248: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x337248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_33724c:
    // 0x33724c: 0xc0a7a88  jal         func_29EA20
label_337250:
    if (ctx->pc == 0x337250u) {
        ctx->pc = 0x337250u;
            // 0x337250: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x337254u;
        goto label_337254;
    }
    ctx->pc = 0x33724Cu;
    SET_GPR_U32(ctx, 31, 0x337254u);
    ctx->pc = 0x337250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33724Cu;
            // 0x337250: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337254u; }
        if (ctx->pc != 0x337254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337254u; }
        if (ctx->pc != 0x337254u) { return; }
    }
    ctx->pc = 0x337254u;
label_337254:
    // 0x337254: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x337254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_337258:
    // 0x337258: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x337258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_33725c:
    // 0x33725c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_337260:
    if (ctx->pc == 0x337260u) {
        ctx->pc = 0x337260u;
            // 0x337260: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x337264u;
        goto label_337264;
    }
    ctx->pc = 0x33725Cu;
    {
        const bool branch_taken_0x33725c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x337260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33725Cu;
            // 0x337260: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33725c) {
            ctx->pc = 0x337280u;
            goto label_337280;
        }
    }
    ctx->pc = 0x337264u;
label_337264:
    // 0x337264: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x337264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_337268:
    // 0x337268: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x337268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_33726c:
    // 0x33726c: 0xc0869d0  jal         func_21A740
label_337270:
    if (ctx->pc == 0x337270u) {
        ctx->pc = 0x337270u;
            // 0x337270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337274u;
        goto label_337274;
    }
    ctx->pc = 0x33726Cu;
    SET_GPR_U32(ctx, 31, 0x337274u);
    ctx->pc = 0x337270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33726Cu;
            // 0x337270: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337274u; }
        if (ctx->pc != 0x337274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337274u; }
        if (ctx->pc != 0x337274u) { return; }
    }
    ctx->pc = 0x337274u;
label_337274:
    // 0x337274: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337278:
    // 0x337278: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x337278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_33727c:
    // 0x33727c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x33727cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_337280:
    // 0x337280: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x337280u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_337284:
    // 0x337284: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337288:
    // 0x337288: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x337288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_33728c:
    // 0x33728c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x33728cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_337290:
    // 0x337290: 0xc08c650  jal         func_231940
label_337294:
    if (ctx->pc == 0x337294u) {
        ctx->pc = 0x337294u;
            // 0x337294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337298u;
        goto label_337298;
    }
    ctx->pc = 0x337290u;
    SET_GPR_U32(ctx, 31, 0x337298u);
    ctx->pc = 0x337294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337290u;
            // 0x337294: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337298u; }
        if (ctx->pc != 0x337298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337298u; }
        if (ctx->pc != 0x337298u) { return; }
    }
    ctx->pc = 0x337298u;
label_337298:
    // 0x337298: 0xc040180  jal         func_100600
label_33729c:
    if (ctx->pc == 0x33729Cu) {
        ctx->pc = 0x33729Cu;
            // 0x33729c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x3372A0u;
        goto label_3372a0;
    }
    ctx->pc = 0x337298u;
    SET_GPR_U32(ctx, 31, 0x3372A0u);
    ctx->pc = 0x33729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337298u;
            // 0x33729c: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3372A0u; }
        if (ctx->pc != 0x3372A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3372A0u; }
        if (ctx->pc != 0x3372A0u) { return; }
    }
    ctx->pc = 0x3372A0u;
label_3372a0:
    // 0x3372a0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_3372a4:
    if (ctx->pc == 0x3372A4u) {
        ctx->pc = 0x3372A4u;
            // 0x3372a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x3372A8u;
        goto label_3372a8;
    }
    ctx->pc = 0x3372A0u;
    {
        const bool branch_taken_0x3372a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3372a0) {
            ctx->pc = 0x3372A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3372A0u;
            // 0x3372a4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3372F0u;
            goto label_3372f0;
        }
    }
    ctx->pc = 0x3372A8u;
label_3372a8:
    // 0x3372a8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x3372a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_3372ac:
    // 0x3372ac: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x3372acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_3372b0:
    // 0x3372b0: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x3372b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_3372b4:
    // 0x3372b4: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x3372b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_3372b8:
    // 0x3372b8: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x3372b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_3372bc:
    // 0x3372bc: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x3372bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_3372c0:
    // 0x3372c0: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x3372c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_3372c4:
    // 0x3372c4: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x3372c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_3372c8:
    // 0x3372c8: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x3372c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_3372cc:
    // 0x3372cc: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x3372ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_3372d0:
    // 0x3372d0: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x3372d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_3372d4:
    // 0x3372d4: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x3372d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_3372d8:
    // 0x3372d8: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x3372d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_3372dc:
    // 0x3372dc: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x3372dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_3372e0:
    // 0x3372e0: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x3372e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_3372e4:
    // 0x3372e4: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x3372e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_3372e8:
    // 0x3372e8: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x3372e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_3372ec:
    // 0x3372ec: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x3372ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_3372f0:
    // 0x3372f0: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x3372f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_3372f4:
    // 0x3372f4: 0x8e2900b0  lw          $t1, 0xB0($s1)
    ctx->pc = 0x3372f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3372f8:
    // 0x3372f8: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3372fc:
    // 0x3372fc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x3372fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_337300:
    // 0x337300: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x337300u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_337304:
    // 0x337304: 0x3c054270  lui         $a1, 0x4270
    ctx->pc = 0x337304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17008 << 16));
label_337308:
    // 0x337308: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x337308u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_33730c:
    // 0x33730c: 0x1244824  and         $t1, $t1, $a0
    ctx->pc = 0x33730cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_337310:
    // 0x337310: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x337310u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
label_337314:
    // 0x337314: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x337314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_337318:
    // 0x337318: 0xae2900b0  sw          $t1, 0xB0($s1)
    ctx->pc = 0x337318u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 9));
label_33731c:
    // 0x33731c: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x33731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_337320:
    // 0x337320: 0xa2280064  sb          $t0, 0x64($s1)
    ctx->pc = 0x337320u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 8));
label_337324:
    // 0x337324: 0xa2280065  sb          $t0, 0x65($s1)
    ctx->pc = 0x337324u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 8));
label_337328:
    // 0x337328: 0xa2200068  sb          $zero, 0x68($s1)
    ctx->pc = 0x337328u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 0));
label_33732c:
    // 0x33732c: 0xa2270069  sb          $a3, 0x69($s1)
    ctx->pc = 0x33732cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 7));
label_337330:
    // 0x337330: 0xa22600cc  sb          $a2, 0xCC($s1)
    ctx->pc = 0x337330u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 6));
label_337334:
    // 0x337334: 0xae2500c4  sw          $a1, 0xC4($s1)
    ctx->pc = 0x337334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 5));
label_337338:
    // 0x337338: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x337338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_33733c:
    // 0x33733c: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x33733cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_337340:
    // 0x337340: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x337340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_337344:
    // 0x337344: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x337344u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_337348:
    // 0x337348: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_33734c:
    // 0x33734c: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x33734cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_337350:
    // 0x337350: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x337350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_337354:
    // 0x337354: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x337354u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_337358:
    // 0x337358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33735c:
    // 0x33735c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33735cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337360:
    // 0x337360: 0x3e00008  jr          $ra
label_337364:
    if (ctx->pc == 0x337364u) {
        ctx->pc = 0x337364u;
            // 0x337364: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x337368u;
        goto label_337368;
    }
    ctx->pc = 0x337360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337360u;
            // 0x337364: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337368u;
label_337368:
    // 0x337368: 0x0  nop
    ctx->pc = 0x337368u;
    // NOP
label_33736c:
    // 0x33736c: 0x0  nop
    ctx->pc = 0x33736cu;
    // NOP
label_337370:
    // 0x337370: 0x3e00008  jr          $ra
label_337374:
    if (ctx->pc == 0x337374u) {
        ctx->pc = 0x337374u;
            // 0x337374: 0x24022bb7  addiu       $v0, $zero, 0x2BB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11191));
        ctx->pc = 0x337378u;
        goto label_337378;
    }
    ctx->pc = 0x337370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337370u;
            // 0x337374: 0x24022bb7  addiu       $v0, $zero, 0x2BB7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11191));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337378u;
label_337378:
    // 0x337378: 0x0  nop
    ctx->pc = 0x337378u;
    // NOP
label_33737c:
    // 0x33737c: 0x0  nop
    ctx->pc = 0x33737cu;
    // NOP
label_337380:
    // 0x337380: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x337380u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_337384:
    // 0x337384: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x337384u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_337388:
    // 0x337388: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x337388u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_33738c:
    // 0x33738c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33738cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_337390:
    // 0x337390: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x337390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_337394:
    // 0x337394: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x337394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_337398:
    // 0x337398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33739c:
    // 0x33739c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3373a0:
    // 0x3373a0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x3373a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3373a4:
    // 0x3373a4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_3373a8:
    if (ctx->pc == 0x3373A8u) {
        ctx->pc = 0x3373A8u;
            // 0x3373a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3373ACu;
        goto label_3373ac;
    }
    ctx->pc = 0x3373A4u;
    {
        const bool branch_taken_0x3373a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3373A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3373A4u;
            // 0x3373a8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373a4) {
            ctx->pc = 0x3373E8u;
            goto label_3373e8;
        }
    }
    ctx->pc = 0x3373ACu;
label_3373ac:
    // 0x3373ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3373acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3373b0:
    // 0x3373b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3373b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3373b4:
    // 0x3373b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3373b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3373b8:
    // 0x3373b8: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x3373b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_3373bc:
    // 0x3373bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3373bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3373c0:
    // 0x3373c0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3373c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3373c4:
    // 0x3373c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3373c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3373c8:
    // 0x3373c8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3373c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3373cc:
    // 0x3373cc: 0x320f809  jalr        $t9
label_3373d0:
    if (ctx->pc == 0x3373D0u) {
        ctx->pc = 0x3373D4u;
        goto label_3373d4;
    }
    ctx->pc = 0x3373CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3373D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3373D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3373D4u; }
            if (ctx->pc != 0x3373D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3373D4u;
label_3373d4:
    // 0x3373d4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x3373d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_3373d8:
    // 0x3373d8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3373dc:
    // 0x3373dc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x3373dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3373e0:
    // 0x3373e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3373e4:
    if (ctx->pc == 0x3373E4u) {
        ctx->pc = 0x3373E4u;
            // 0x3373e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3373E8u;
        goto label_3373e8;
    }
    ctx->pc = 0x3373E0u;
    {
        const bool branch_taken_0x3373e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3373E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3373E0u;
            // 0x3373e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3373e0) {
            ctx->pc = 0x3373B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3373b8;
        }
    }
    ctx->pc = 0x3373E8u;
label_3373e8:
    // 0x3373e8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3373e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3373ec:
    // 0x3373ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3373ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3373f0:
    // 0x3373f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3373f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3373f4:
    // 0x3373f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3373f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3373f8:
    // 0x3373f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3373f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3373fc:
    // 0x3373fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3373fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_337400:
    // 0x337400: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337404:
    // 0x337404: 0x3e00008  jr          $ra
label_337408:
    if (ctx->pc == 0x337408u) {
        ctx->pc = 0x337408u;
            // 0x337408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x33740Cu;
        goto label_33740c;
    }
    ctx->pc = 0x337404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337404u;
            // 0x337408: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33740Cu;
label_33740c:
    // 0x33740c: 0x0  nop
    ctx->pc = 0x33740cu;
    // NOP
label_337410:
    // 0x337410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_337414:
    // 0x337414: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337414u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337418:
    // 0x337418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_33741c:
    // 0x33741c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x33741cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_337420:
    // 0x337420: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337424:
    // 0x337424: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x337424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_337428:
    // 0x337428: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x337428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_33742c:
    // 0x33742c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x33742cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_337430:
    // 0x337430: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_337434:
    // 0x337434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_337438:
    // 0x337438: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x337438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_33743c:
    // 0x33743c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x33743cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_337440:
    // 0x337440: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x337440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_337444:
    // 0x337444: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x337444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_337448:
    // 0x337448: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x337448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_33744c:
    // 0x33744c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x33744cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_337450:
    // 0x337450: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x337450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_337454:
    // 0x337454: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x337454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_337458:
    // 0x337458: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x337458u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_33745c:
    // 0x33745c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x33745cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_337460:
    // 0x337460: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x337460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_337464:
    // 0x337464: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_337468:
    // 0x337468: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x337468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_33746c:
    // 0x33746c: 0xc0a997c  jal         func_2A65F0
label_337470:
    if (ctx->pc == 0x337470u) {
        ctx->pc = 0x337470u;
            // 0x337470: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x337474u;
        goto label_337474;
    }
    ctx->pc = 0x33746Cu;
    SET_GPR_U32(ctx, 31, 0x337474u);
    ctx->pc = 0x337470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33746Cu;
            // 0x337470: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337474u; }
        if (ctx->pc != 0x337474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337474u; }
        if (ctx->pc != 0x337474u) { return; }
    }
    ctx->pc = 0x337474u;
label_337474:
    // 0x337474: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x337474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_337478:
    // 0x337478: 0xc0d879c  jal         func_361E70
label_33747c:
    if (ctx->pc == 0x33747Cu) {
        ctx->pc = 0x33747Cu;
            // 0x33747c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337480u;
        goto label_337480;
    }
    ctx->pc = 0x337478u;
    SET_GPR_U32(ctx, 31, 0x337480u);
    ctx->pc = 0x33747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337478u;
            // 0x33747c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337480u; }
        if (ctx->pc != 0x337480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337480u; }
        if (ctx->pc != 0x337480u) { return; }
    }
    ctx->pc = 0x337480u;
label_337480:
    // 0x337480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x337480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_337484:
    // 0x337484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x337484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337488:
    // 0x337488: 0x3e00008  jr          $ra
label_33748c:
    if (ctx->pc == 0x33748Cu) {
        ctx->pc = 0x33748Cu;
            // 0x33748c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x337490u;
        goto label_337490;
    }
    ctx->pc = 0x337488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337488u;
            // 0x33748c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337490u;
label_337490:
    // 0x337490: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x337490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_337494:
    // 0x337494: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x337494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_337498:
    // 0x337498: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x337498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_33749c:
    // 0x33749c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x33749cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3374a0:
    // 0x3374a0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_3374a4:
    if (ctx->pc == 0x3374A4u) {
        ctx->pc = 0x3374A4u;
            // 0x3374a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3374A8u;
        goto label_3374a8;
    }
    ctx->pc = 0x3374A0u;
    {
        const bool branch_taken_0x3374a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3374A0u;
            // 0x3374a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374a0) {
            ctx->pc = 0x3375C0u;
            goto label_3375c0;
        }
    }
    ctx->pc = 0x3374A8u;
label_3374a8:
    // 0x3374a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3374a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3374ac:
    // 0x3374ac: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x3374acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_3374b0:
    // 0x3374b0: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x3374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_3374b4:
    // 0x3374b4: 0xc075128  jal         func_1D44A0
label_3374b8:
    if (ctx->pc == 0x3374B8u) {
        ctx->pc = 0x3374B8u;
            // 0x3374b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x3374BCu;
        goto label_3374bc;
    }
    ctx->pc = 0x3374B4u;
    SET_GPR_U32(ctx, 31, 0x3374BCu);
    ctx->pc = 0x3374B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3374B4u;
            // 0x3374b8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3374BCu; }
        if (ctx->pc != 0x3374BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3374BCu; }
        if (ctx->pc != 0x3374BCu) { return; }
    }
    ctx->pc = 0x3374BCu;
label_3374bc:
    // 0x3374bc: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x3374bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_3374c0:
    // 0x3374c0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3374c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3374c4:
    // 0x3374c4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x3374c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_3374c8:
    // 0x3374c8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x3374c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_3374cc:
    // 0x3374cc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3374ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3374d0:
    // 0x3374d0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_3374d4:
    if (ctx->pc == 0x3374D4u) {
        ctx->pc = 0x3374D4u;
            // 0x3374d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x3374D8u;
        goto label_3374d8;
    }
    ctx->pc = 0x3374D0u;
    {
        const bool branch_taken_0x3374d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3374D0u;
            // 0x3374d4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374d0) {
            ctx->pc = 0x3374E0u;
            goto label_3374e0;
        }
    }
    ctx->pc = 0x3374D8u;
label_3374d8:
    // 0x3374d8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3374d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3374dc:
    // 0x3374dc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x3374dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_3374e0:
    // 0x3374e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3374e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3374e4:
    // 0x3374e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3374e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3374e8:
    // 0x3374e8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x3374e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_3374ec:
    // 0x3374ec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x3374ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_3374f0:
    // 0x3374f0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x3374f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3374f4:
    // 0x3374f4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3374f8:
    if (ctx->pc == 0x3374F8u) {
        ctx->pc = 0x3374F8u;
            // 0x3374f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3374FCu;
        goto label_3374fc;
    }
    ctx->pc = 0x3374F4u;
    {
        const bool branch_taken_0x3374f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3374f4) {
            ctx->pc = 0x3374F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3374F4u;
            // 0x3374f8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337508u;
            goto label_337508;
        }
    }
    ctx->pc = 0x3374FCu;
label_3374fc:
    // 0x3374fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3374fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337500:
    // 0x337500: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x337500u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_337504:
    // 0x337504: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x337504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_337508:
    // 0x337508: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_33750c:
    // 0x33750c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x33750cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_337510:
    // 0x337510: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x337510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_337514:
    // 0x337514: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x337514u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_337518:
    // 0x337518: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_33751c:
    if (ctx->pc == 0x33751Cu) {
        ctx->pc = 0x33751Cu;
            // 0x33751c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x337520u;
        goto label_337520;
    }
    ctx->pc = 0x337518u;
    {
        const bool branch_taken_0x337518 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337518) {
            ctx->pc = 0x33751Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337518u;
            // 0x33751c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33752Cu;
            goto label_33752c;
        }
    }
    ctx->pc = 0x337520u;
label_337520:
    // 0x337520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x337520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_337524:
    // 0x337524: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x337524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_337528:
    // 0x337528: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x337528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_33752c:
    // 0x33752c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x33752cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_337530:
    // 0x337530: 0x320f809  jalr        $t9
label_337534:
    if (ctx->pc == 0x337534u) {
        ctx->pc = 0x337534u;
            // 0x337534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337538u;
        goto label_337538;
    }
    ctx->pc = 0x337530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x337538u);
        ctx->pc = 0x337534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337530u;
            // 0x337534: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x337538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x337538u; }
            if (ctx->pc != 0x337538u) { return; }
        }
        }
    }
    ctx->pc = 0x337538u;
label_337538:
    // 0x337538: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x337538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_33753c:
    // 0x33753c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33753cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_337540:
    // 0x337540: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x337540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_337544:
    // 0x337544: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x337544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_337548:
    // 0x337548: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x337548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_33754c:
    // 0x33754c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x33754cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_337550:
    // 0x337550: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_337554:
    if (ctx->pc == 0x337554u) {
        ctx->pc = 0x337554u;
            // 0x337554: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x337558u;
        goto label_337558;
    }
    ctx->pc = 0x337550u;
    {
        const bool branch_taken_0x337550 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337550) {
            ctx->pc = 0x337554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337550u;
            // 0x337554: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337564u;
            goto label_337564;
        }
    }
    ctx->pc = 0x337558u;
label_337558:
    // 0x337558: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337558u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33755c:
    // 0x33755c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x33755cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_337560:
    // 0x337560: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x337560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_337564:
    // 0x337564: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337564u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_337568:
    // 0x337568: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x337568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_33756c:
    // 0x33756c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x33756cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_337570:
    // 0x337570: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x337570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_337574:
    // 0x337574: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x337574u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_337578:
    // 0x337578: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_33757c:
    if (ctx->pc == 0x33757Cu) {
        ctx->pc = 0x337580u;
        goto label_337580;
    }
    ctx->pc = 0x337578u;
    {
        const bool branch_taken_0x337578 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337578) {
            ctx->pc = 0x337588u;
            goto label_337588;
        }
    }
    ctx->pc = 0x337580u;
label_337580:
    // 0x337580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_337584:
    // 0x337584: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x337584u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_337588:
    // 0x337588: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x337588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_33758c:
    // 0x33758c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x33758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_337590:
    // 0x337590: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x337590u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_337594:
    // 0x337594: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_337598:
    if (ctx->pc == 0x337598u) {
        ctx->pc = 0x33759Cu;
        goto label_33759c;
    }
    ctx->pc = 0x337594u;
    {
        const bool branch_taken_0x337594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x337594) {
            ctx->pc = 0x3375A4u;
            goto label_3375a4;
        }
    }
    ctx->pc = 0x33759Cu;
label_33759c:
    // 0x33759c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x33759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3375a0:
    // 0x3375a0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x3375a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_3375a4:
    // 0x3375a4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3375a8:
    // 0x3375a8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x3375a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_3375ac:
    // 0x3375ac: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x3375acu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3375b0:
    // 0x3375b0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_3375b4:
    if (ctx->pc == 0x3375B4u) {
        ctx->pc = 0x3375B4u;
            // 0x3375b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x3375B8u;
        goto label_3375b8;
    }
    ctx->pc = 0x3375B0u;
    {
        const bool branch_taken_0x3375b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3375b0) {
            ctx->pc = 0x3375B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3375B0u;
            // 0x3375b4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3375C4u;
            goto label_3375c4;
        }
    }
    ctx->pc = 0x3375B8u;
label_3375b8:
    // 0x3375b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3375b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3375bc:
    // 0x3375bc: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x3375bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_3375c0:
    // 0x3375c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3375c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3375c4:
    // 0x3375c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3375c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3375c8:
    // 0x3375c8: 0x3e00008  jr          $ra
label_3375cc:
    if (ctx->pc == 0x3375CCu) {
        ctx->pc = 0x3375CCu;
            // 0x3375cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3375D0u;
        goto label_3375d0;
    }
    ctx->pc = 0x3375C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3375CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3375C8u;
            // 0x3375cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3375D0u;
label_3375d0:
    // 0x3375d0: 0x80cd8ac  j           func_3362B0
label_3375d4:
    if (ctx->pc == 0x3375D4u) {
        ctx->pc = 0x3375D4u;
            // 0x3375d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x3375D8u;
        goto label_3375d8;
    }
    ctx->pc = 0x3375D0u;
    ctx->pc = 0x3375D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3375D0u;
            // 0x3375d4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3362B0u;
    {
        auto targetFn = runtime->lookupFunction(0x3362B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3375D8u;
label_3375d8:
    // 0x3375d8: 0x0  nop
    ctx->pc = 0x3375d8u;
    // NOP
label_3375dc:
    // 0x3375dc: 0x0  nop
    ctx->pc = 0x3375dcu;
    // NOP
label_3375e0:
    // 0x3375e0: 0x80cd9d8  j           func_336760
label_3375e4:
    if (ctx->pc == 0x3375E4u) {
        ctx->pc = 0x3375E4u;
            // 0x3375e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3375E8u;
        goto label_3375e8;
    }
    ctx->pc = 0x3375E0u;
    ctx->pc = 0x3375E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3375E0u;
            // 0x3375e4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336760u;
    {
        auto targetFn = runtime->lookupFunction(0x336760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x3375E8u;
label_3375e8:
    // 0x3375e8: 0x0  nop
    ctx->pc = 0x3375e8u;
    // NOP
label_3375ec:
    // 0x3375ec: 0x0  nop
    ctx->pc = 0x3375ecu;
    // NOP
label_3375f0:
    // 0x3375f0: 0x80cd854  j           func_336150
label_3375f4:
    if (ctx->pc == 0x3375F4u) {
        ctx->pc = 0x3375F4u;
            // 0x3375f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x3375F8u;
        goto label_3375f8;
    }
    ctx->pc = 0x3375F0u;
    ctx->pc = 0x3375F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3375F0u;
            // 0x3375f4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x336150u;
    if (runtime->hasFunction(0x336150u)) {
        auto targetFn = runtime->lookupFunction(0x336150u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00336150_0x336150(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x3375F8u;
label_3375f8:
    // 0x3375f8: 0x0  nop
    ctx->pc = 0x3375f8u;
    // NOP
label_3375fc:
    // 0x3375fc: 0x0  nop
    ctx->pc = 0x3375fcu;
    // NOP
label_337600:
    // 0x337600: 0x80cd830  j           func_3360C0
label_337604:
    if (ctx->pc == 0x337604u) {
        ctx->pc = 0x337604u;
            // 0x337604: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x337608u;
        goto label_337608;
    }
    ctx->pc = 0x337600u;
    ctx->pc = 0x337604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337600u;
            // 0x337604: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3360C0u;
    {
        auto targetFn = runtime->lookupFunction(0x3360C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x337608u;
label_337608:
    // 0x337608: 0x0  nop
    ctx->pc = 0x337608u;
    // NOP
label_33760c:
    // 0x33760c: 0x0  nop
    ctx->pc = 0x33760cu;
    // NOP
label_337610:
    // 0x337610: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x337610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_337614:
    // 0x337614: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x337614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_337618:
    // 0x337618: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x337618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_33761c:
    // 0x33761c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33761cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_337620:
    // 0x337620: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x337620u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_337624:
    // 0x337624: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_337628:
    if (ctx->pc == 0x337628u) {
        ctx->pc = 0x337628u;
            // 0x337628: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x33762Cu;
        goto label_33762c;
    }
    ctx->pc = 0x337624u;
    {
        const bool branch_taken_0x337624 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337624u;
            // 0x337628: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337624) {
            ctx->pc = 0x337680u;
            goto label_337680;
        }
    }
    ctx->pc = 0x33762Cu;
label_33762c:
    // 0x33762c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x33762cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_337630:
    // 0x337630: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x337630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337634:
    // 0x337634: 0x24634dc0  addiu       $v1, $v1, 0x4DC0
    ctx->pc = 0x337634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 19904));
label_337638:
    // 0x337638: 0x24424df8  addiu       $v0, $v0, 0x4DF8
    ctx->pc = 0x337638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19960));
label_33763c:
    // 0x33763c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x33763cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_337640:
    // 0x337640: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_337644:
    if (ctx->pc == 0x337644u) {
        ctx->pc = 0x337644u;
            // 0x337644: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x337648u;
        goto label_337648;
    }
    ctx->pc = 0x337640u;
    {
        const bool branch_taken_0x337640 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x337644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337640u;
            // 0x337644: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337640) {
            ctx->pc = 0x337668u;
            goto label_337668;
        }
    }
    ctx->pc = 0x337648u;
label_337648:
    // 0x337648: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x337648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_33764c:
    // 0x33764c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x33764cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_337650:
    // 0x337650: 0x24634e70  addiu       $v1, $v1, 0x4E70
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20080));
label_337654:
    // 0x337654: 0x24424ea8  addiu       $v0, $v0, 0x4EA8
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20136));
label_337658:
    // 0x337658: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x337658u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_33765c:
    // 0x33765c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33765cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337660:
    // 0x337660: 0xc0cdda8  jal         func_3376A0
label_337664:
    if (ctx->pc == 0x337664u) {
        ctx->pc = 0x337664u;
            // 0x337664: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x337668u;
        goto label_337668;
    }
    ctx->pc = 0x337660u;
    SET_GPR_U32(ctx, 31, 0x337668u);
    ctx->pc = 0x337664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337660u;
            // 0x337664: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3376A0u;
    if (runtime->hasFunction(0x3376A0u)) {
        auto targetFn = runtime->lookupFunction(0x3376A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337668u; }
        if (ctx->pc != 0x337668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003376A0_0x3376a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337668u; }
        if (ctx->pc != 0x337668u) { return; }
    }
    ctx->pc = 0x337668u;
label_337668:
    // 0x337668: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x337668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_33766c:
    // 0x33766c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x33766cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_337670:
    // 0x337670: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_337674:
    if (ctx->pc == 0x337674u) {
        ctx->pc = 0x337674u;
            // 0x337674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337678u;
        goto label_337678;
    }
    ctx->pc = 0x337670u;
    {
        const bool branch_taken_0x337670 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x337670) {
            ctx->pc = 0x337674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x337670u;
            // 0x337674: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x337684u;
            goto label_337684;
        }
    }
    ctx->pc = 0x337678u;
label_337678:
    // 0x337678: 0xc0400a8  jal         func_1002A0
label_33767c:
    if (ctx->pc == 0x33767Cu) {
        ctx->pc = 0x33767Cu;
            // 0x33767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x337680u;
        goto label_337680;
    }
    ctx->pc = 0x337678u;
    SET_GPR_U32(ctx, 31, 0x337680u);
    ctx->pc = 0x33767Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x337678u;
            // 0x33767c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337680u; }
        if (ctx->pc != 0x337680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x337680u; }
        if (ctx->pc != 0x337680u) { return; }
    }
    ctx->pc = 0x337680u;
label_337680:
    // 0x337680: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x337680u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_337684:
    // 0x337684: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x337684u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_337688:
    // 0x337688: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x337688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_33768c:
    // 0x33768c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33768cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_337690:
    // 0x337690: 0x3e00008  jr          $ra
label_337694:
    if (ctx->pc == 0x337694u) {
        ctx->pc = 0x337694u;
            // 0x337694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x337698u;
        goto label_337698;
    }
    ctx->pc = 0x337690u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x337690u;
            // 0x337694: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x337698u;
label_337698:
    // 0x337698: 0x0  nop
    ctx->pc = 0x337698u;
    // NOP
label_33769c:
    // 0x33769c: 0x0  nop
    ctx->pc = 0x33769cu;
    // NOP
}
