#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D7C80
// Address: 0x1d7c80 - 0x1d8260
void sub_001D7C80_0x1d7c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7C80_0x1d7c80");
#endif

    switch (ctx->pc) {
        case 0x1d7c80u: goto label_1d7c80;
        case 0x1d7c84u: goto label_1d7c84;
        case 0x1d7c88u: goto label_1d7c88;
        case 0x1d7c8cu: goto label_1d7c8c;
        case 0x1d7c90u: goto label_1d7c90;
        case 0x1d7c94u: goto label_1d7c94;
        case 0x1d7c98u: goto label_1d7c98;
        case 0x1d7c9cu: goto label_1d7c9c;
        case 0x1d7ca0u: goto label_1d7ca0;
        case 0x1d7ca4u: goto label_1d7ca4;
        case 0x1d7ca8u: goto label_1d7ca8;
        case 0x1d7cacu: goto label_1d7cac;
        case 0x1d7cb0u: goto label_1d7cb0;
        case 0x1d7cb4u: goto label_1d7cb4;
        case 0x1d7cb8u: goto label_1d7cb8;
        case 0x1d7cbcu: goto label_1d7cbc;
        case 0x1d7cc0u: goto label_1d7cc0;
        case 0x1d7cc4u: goto label_1d7cc4;
        case 0x1d7cc8u: goto label_1d7cc8;
        case 0x1d7cccu: goto label_1d7ccc;
        case 0x1d7cd0u: goto label_1d7cd0;
        case 0x1d7cd4u: goto label_1d7cd4;
        case 0x1d7cd8u: goto label_1d7cd8;
        case 0x1d7cdcu: goto label_1d7cdc;
        case 0x1d7ce0u: goto label_1d7ce0;
        case 0x1d7ce4u: goto label_1d7ce4;
        case 0x1d7ce8u: goto label_1d7ce8;
        case 0x1d7cecu: goto label_1d7cec;
        case 0x1d7cf0u: goto label_1d7cf0;
        case 0x1d7cf4u: goto label_1d7cf4;
        case 0x1d7cf8u: goto label_1d7cf8;
        case 0x1d7cfcu: goto label_1d7cfc;
        case 0x1d7d00u: goto label_1d7d00;
        case 0x1d7d04u: goto label_1d7d04;
        case 0x1d7d08u: goto label_1d7d08;
        case 0x1d7d0cu: goto label_1d7d0c;
        case 0x1d7d10u: goto label_1d7d10;
        case 0x1d7d14u: goto label_1d7d14;
        case 0x1d7d18u: goto label_1d7d18;
        case 0x1d7d1cu: goto label_1d7d1c;
        case 0x1d7d20u: goto label_1d7d20;
        case 0x1d7d24u: goto label_1d7d24;
        case 0x1d7d28u: goto label_1d7d28;
        case 0x1d7d2cu: goto label_1d7d2c;
        case 0x1d7d30u: goto label_1d7d30;
        case 0x1d7d34u: goto label_1d7d34;
        case 0x1d7d38u: goto label_1d7d38;
        case 0x1d7d3cu: goto label_1d7d3c;
        case 0x1d7d40u: goto label_1d7d40;
        case 0x1d7d44u: goto label_1d7d44;
        case 0x1d7d48u: goto label_1d7d48;
        case 0x1d7d4cu: goto label_1d7d4c;
        case 0x1d7d50u: goto label_1d7d50;
        case 0x1d7d54u: goto label_1d7d54;
        case 0x1d7d58u: goto label_1d7d58;
        case 0x1d7d5cu: goto label_1d7d5c;
        case 0x1d7d60u: goto label_1d7d60;
        case 0x1d7d64u: goto label_1d7d64;
        case 0x1d7d68u: goto label_1d7d68;
        case 0x1d7d6cu: goto label_1d7d6c;
        case 0x1d7d70u: goto label_1d7d70;
        case 0x1d7d74u: goto label_1d7d74;
        case 0x1d7d78u: goto label_1d7d78;
        case 0x1d7d7cu: goto label_1d7d7c;
        case 0x1d7d80u: goto label_1d7d80;
        case 0x1d7d84u: goto label_1d7d84;
        case 0x1d7d88u: goto label_1d7d88;
        case 0x1d7d8cu: goto label_1d7d8c;
        case 0x1d7d90u: goto label_1d7d90;
        case 0x1d7d94u: goto label_1d7d94;
        case 0x1d7d98u: goto label_1d7d98;
        case 0x1d7d9cu: goto label_1d7d9c;
        case 0x1d7da0u: goto label_1d7da0;
        case 0x1d7da4u: goto label_1d7da4;
        case 0x1d7da8u: goto label_1d7da8;
        case 0x1d7dacu: goto label_1d7dac;
        case 0x1d7db0u: goto label_1d7db0;
        case 0x1d7db4u: goto label_1d7db4;
        case 0x1d7db8u: goto label_1d7db8;
        case 0x1d7dbcu: goto label_1d7dbc;
        case 0x1d7dc0u: goto label_1d7dc0;
        case 0x1d7dc4u: goto label_1d7dc4;
        case 0x1d7dc8u: goto label_1d7dc8;
        case 0x1d7dccu: goto label_1d7dcc;
        case 0x1d7dd0u: goto label_1d7dd0;
        case 0x1d7dd4u: goto label_1d7dd4;
        case 0x1d7dd8u: goto label_1d7dd8;
        case 0x1d7ddcu: goto label_1d7ddc;
        case 0x1d7de0u: goto label_1d7de0;
        case 0x1d7de4u: goto label_1d7de4;
        case 0x1d7de8u: goto label_1d7de8;
        case 0x1d7decu: goto label_1d7dec;
        case 0x1d7df0u: goto label_1d7df0;
        case 0x1d7df4u: goto label_1d7df4;
        case 0x1d7df8u: goto label_1d7df8;
        case 0x1d7dfcu: goto label_1d7dfc;
        case 0x1d7e00u: goto label_1d7e00;
        case 0x1d7e04u: goto label_1d7e04;
        case 0x1d7e08u: goto label_1d7e08;
        case 0x1d7e0cu: goto label_1d7e0c;
        case 0x1d7e10u: goto label_1d7e10;
        case 0x1d7e14u: goto label_1d7e14;
        case 0x1d7e18u: goto label_1d7e18;
        case 0x1d7e1cu: goto label_1d7e1c;
        case 0x1d7e20u: goto label_1d7e20;
        case 0x1d7e24u: goto label_1d7e24;
        case 0x1d7e28u: goto label_1d7e28;
        case 0x1d7e2cu: goto label_1d7e2c;
        case 0x1d7e30u: goto label_1d7e30;
        case 0x1d7e34u: goto label_1d7e34;
        case 0x1d7e38u: goto label_1d7e38;
        case 0x1d7e3cu: goto label_1d7e3c;
        case 0x1d7e40u: goto label_1d7e40;
        case 0x1d7e44u: goto label_1d7e44;
        case 0x1d7e48u: goto label_1d7e48;
        case 0x1d7e4cu: goto label_1d7e4c;
        case 0x1d7e50u: goto label_1d7e50;
        case 0x1d7e54u: goto label_1d7e54;
        case 0x1d7e58u: goto label_1d7e58;
        case 0x1d7e5cu: goto label_1d7e5c;
        case 0x1d7e60u: goto label_1d7e60;
        case 0x1d7e64u: goto label_1d7e64;
        case 0x1d7e68u: goto label_1d7e68;
        case 0x1d7e6cu: goto label_1d7e6c;
        case 0x1d7e70u: goto label_1d7e70;
        case 0x1d7e74u: goto label_1d7e74;
        case 0x1d7e78u: goto label_1d7e78;
        case 0x1d7e7cu: goto label_1d7e7c;
        case 0x1d7e80u: goto label_1d7e80;
        case 0x1d7e84u: goto label_1d7e84;
        case 0x1d7e88u: goto label_1d7e88;
        case 0x1d7e8cu: goto label_1d7e8c;
        case 0x1d7e90u: goto label_1d7e90;
        case 0x1d7e94u: goto label_1d7e94;
        case 0x1d7e98u: goto label_1d7e98;
        case 0x1d7e9cu: goto label_1d7e9c;
        case 0x1d7ea0u: goto label_1d7ea0;
        case 0x1d7ea4u: goto label_1d7ea4;
        case 0x1d7ea8u: goto label_1d7ea8;
        case 0x1d7eacu: goto label_1d7eac;
        case 0x1d7eb0u: goto label_1d7eb0;
        case 0x1d7eb4u: goto label_1d7eb4;
        case 0x1d7eb8u: goto label_1d7eb8;
        case 0x1d7ebcu: goto label_1d7ebc;
        case 0x1d7ec0u: goto label_1d7ec0;
        case 0x1d7ec4u: goto label_1d7ec4;
        case 0x1d7ec8u: goto label_1d7ec8;
        case 0x1d7eccu: goto label_1d7ecc;
        case 0x1d7ed0u: goto label_1d7ed0;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ed8u: goto label_1d7ed8;
        case 0x1d7edcu: goto label_1d7edc;
        case 0x1d7ee0u: goto label_1d7ee0;
        case 0x1d7ee4u: goto label_1d7ee4;
        case 0x1d7ee8u: goto label_1d7ee8;
        case 0x1d7eecu: goto label_1d7eec;
        case 0x1d7ef0u: goto label_1d7ef0;
        case 0x1d7ef4u: goto label_1d7ef4;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7efcu: goto label_1d7efc;
        case 0x1d7f00u: goto label_1d7f00;
        case 0x1d7f04u: goto label_1d7f04;
        case 0x1d7f08u: goto label_1d7f08;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f10u: goto label_1d7f10;
        case 0x1d7f14u: goto label_1d7f14;
        case 0x1d7f18u: goto label_1d7f18;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f20u: goto label_1d7f20;
        case 0x1d7f24u: goto label_1d7f24;
        case 0x1d7f28u: goto label_1d7f28;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f30u: goto label_1d7f30;
        case 0x1d7f34u: goto label_1d7f34;
        case 0x1d7f38u: goto label_1d7f38;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f40u: goto label_1d7f40;
        case 0x1d7f44u: goto label_1d7f44;
        case 0x1d7f48u: goto label_1d7f48;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f50u: goto label_1d7f50;
        case 0x1d7f54u: goto label_1d7f54;
        case 0x1d7f58u: goto label_1d7f58;
        case 0x1d7f5cu: goto label_1d7f5c;
        case 0x1d7f60u: goto label_1d7f60;
        case 0x1d7f64u: goto label_1d7f64;
        case 0x1d7f68u: goto label_1d7f68;
        case 0x1d7f6cu: goto label_1d7f6c;
        case 0x1d7f70u: goto label_1d7f70;
        case 0x1d7f74u: goto label_1d7f74;
        case 0x1d7f78u: goto label_1d7f78;
        case 0x1d7f7cu: goto label_1d7f7c;
        case 0x1d7f80u: goto label_1d7f80;
        case 0x1d7f84u: goto label_1d7f84;
        case 0x1d7f88u: goto label_1d7f88;
        case 0x1d7f8cu: goto label_1d7f8c;
        case 0x1d7f90u: goto label_1d7f90;
        case 0x1d7f94u: goto label_1d7f94;
        case 0x1d7f98u: goto label_1d7f98;
        case 0x1d7f9cu: goto label_1d7f9c;
        case 0x1d7fa0u: goto label_1d7fa0;
        case 0x1d7fa4u: goto label_1d7fa4;
        case 0x1d7fa8u: goto label_1d7fa8;
        case 0x1d7facu: goto label_1d7fac;
        case 0x1d7fb0u: goto label_1d7fb0;
        case 0x1d7fb4u: goto label_1d7fb4;
        case 0x1d7fb8u: goto label_1d7fb8;
        case 0x1d7fbcu: goto label_1d7fbc;
        case 0x1d7fc0u: goto label_1d7fc0;
        case 0x1d7fc4u: goto label_1d7fc4;
        case 0x1d7fc8u: goto label_1d7fc8;
        case 0x1d7fccu: goto label_1d7fcc;
        case 0x1d7fd0u: goto label_1d7fd0;
        case 0x1d7fd4u: goto label_1d7fd4;
        case 0x1d7fd8u: goto label_1d7fd8;
        case 0x1d7fdcu: goto label_1d7fdc;
        case 0x1d7fe0u: goto label_1d7fe0;
        case 0x1d7fe4u: goto label_1d7fe4;
        case 0x1d7fe8u: goto label_1d7fe8;
        case 0x1d7fecu: goto label_1d7fec;
        case 0x1d7ff0u: goto label_1d7ff0;
        case 0x1d7ff4u: goto label_1d7ff4;
        case 0x1d7ff8u: goto label_1d7ff8;
        case 0x1d7ffcu: goto label_1d7ffc;
        case 0x1d8000u: goto label_1d8000;
        case 0x1d8004u: goto label_1d8004;
        case 0x1d8008u: goto label_1d8008;
        case 0x1d800cu: goto label_1d800c;
        case 0x1d8010u: goto label_1d8010;
        case 0x1d8014u: goto label_1d8014;
        case 0x1d8018u: goto label_1d8018;
        case 0x1d801cu: goto label_1d801c;
        case 0x1d8020u: goto label_1d8020;
        case 0x1d8024u: goto label_1d8024;
        case 0x1d8028u: goto label_1d8028;
        case 0x1d802cu: goto label_1d802c;
        case 0x1d8030u: goto label_1d8030;
        case 0x1d8034u: goto label_1d8034;
        case 0x1d8038u: goto label_1d8038;
        case 0x1d803cu: goto label_1d803c;
        case 0x1d8040u: goto label_1d8040;
        case 0x1d8044u: goto label_1d8044;
        case 0x1d8048u: goto label_1d8048;
        case 0x1d804cu: goto label_1d804c;
        case 0x1d8050u: goto label_1d8050;
        case 0x1d8054u: goto label_1d8054;
        case 0x1d8058u: goto label_1d8058;
        case 0x1d805cu: goto label_1d805c;
        case 0x1d8060u: goto label_1d8060;
        case 0x1d8064u: goto label_1d8064;
        case 0x1d8068u: goto label_1d8068;
        case 0x1d806cu: goto label_1d806c;
        case 0x1d8070u: goto label_1d8070;
        case 0x1d8074u: goto label_1d8074;
        case 0x1d8078u: goto label_1d8078;
        case 0x1d807cu: goto label_1d807c;
        case 0x1d8080u: goto label_1d8080;
        case 0x1d8084u: goto label_1d8084;
        case 0x1d8088u: goto label_1d8088;
        case 0x1d808cu: goto label_1d808c;
        case 0x1d8090u: goto label_1d8090;
        case 0x1d8094u: goto label_1d8094;
        case 0x1d8098u: goto label_1d8098;
        case 0x1d809cu: goto label_1d809c;
        case 0x1d80a0u: goto label_1d80a0;
        case 0x1d80a4u: goto label_1d80a4;
        case 0x1d80a8u: goto label_1d80a8;
        case 0x1d80acu: goto label_1d80ac;
        case 0x1d80b0u: goto label_1d80b0;
        case 0x1d80b4u: goto label_1d80b4;
        case 0x1d80b8u: goto label_1d80b8;
        case 0x1d80bcu: goto label_1d80bc;
        case 0x1d80c0u: goto label_1d80c0;
        case 0x1d80c4u: goto label_1d80c4;
        case 0x1d80c8u: goto label_1d80c8;
        case 0x1d80ccu: goto label_1d80cc;
        case 0x1d80d0u: goto label_1d80d0;
        case 0x1d80d4u: goto label_1d80d4;
        case 0x1d80d8u: goto label_1d80d8;
        case 0x1d80dcu: goto label_1d80dc;
        case 0x1d80e0u: goto label_1d80e0;
        case 0x1d80e4u: goto label_1d80e4;
        case 0x1d80e8u: goto label_1d80e8;
        case 0x1d80ecu: goto label_1d80ec;
        case 0x1d80f0u: goto label_1d80f0;
        case 0x1d80f4u: goto label_1d80f4;
        case 0x1d80f8u: goto label_1d80f8;
        case 0x1d80fcu: goto label_1d80fc;
        case 0x1d8100u: goto label_1d8100;
        case 0x1d8104u: goto label_1d8104;
        case 0x1d8108u: goto label_1d8108;
        case 0x1d810cu: goto label_1d810c;
        case 0x1d8110u: goto label_1d8110;
        case 0x1d8114u: goto label_1d8114;
        case 0x1d8118u: goto label_1d8118;
        case 0x1d811cu: goto label_1d811c;
        case 0x1d8120u: goto label_1d8120;
        case 0x1d8124u: goto label_1d8124;
        case 0x1d8128u: goto label_1d8128;
        case 0x1d812cu: goto label_1d812c;
        case 0x1d8130u: goto label_1d8130;
        case 0x1d8134u: goto label_1d8134;
        case 0x1d8138u: goto label_1d8138;
        case 0x1d813cu: goto label_1d813c;
        case 0x1d8140u: goto label_1d8140;
        case 0x1d8144u: goto label_1d8144;
        case 0x1d8148u: goto label_1d8148;
        case 0x1d814cu: goto label_1d814c;
        case 0x1d8150u: goto label_1d8150;
        case 0x1d8154u: goto label_1d8154;
        case 0x1d8158u: goto label_1d8158;
        case 0x1d815cu: goto label_1d815c;
        case 0x1d8160u: goto label_1d8160;
        case 0x1d8164u: goto label_1d8164;
        case 0x1d8168u: goto label_1d8168;
        case 0x1d816cu: goto label_1d816c;
        case 0x1d8170u: goto label_1d8170;
        case 0x1d8174u: goto label_1d8174;
        case 0x1d8178u: goto label_1d8178;
        case 0x1d817cu: goto label_1d817c;
        case 0x1d8180u: goto label_1d8180;
        case 0x1d8184u: goto label_1d8184;
        case 0x1d8188u: goto label_1d8188;
        case 0x1d818cu: goto label_1d818c;
        case 0x1d8190u: goto label_1d8190;
        case 0x1d8194u: goto label_1d8194;
        case 0x1d8198u: goto label_1d8198;
        case 0x1d819cu: goto label_1d819c;
        case 0x1d81a0u: goto label_1d81a0;
        case 0x1d81a4u: goto label_1d81a4;
        case 0x1d81a8u: goto label_1d81a8;
        case 0x1d81acu: goto label_1d81ac;
        case 0x1d81b0u: goto label_1d81b0;
        case 0x1d81b4u: goto label_1d81b4;
        case 0x1d81b8u: goto label_1d81b8;
        case 0x1d81bcu: goto label_1d81bc;
        case 0x1d81c0u: goto label_1d81c0;
        case 0x1d81c4u: goto label_1d81c4;
        case 0x1d81c8u: goto label_1d81c8;
        case 0x1d81ccu: goto label_1d81cc;
        case 0x1d81d0u: goto label_1d81d0;
        case 0x1d81d4u: goto label_1d81d4;
        case 0x1d81d8u: goto label_1d81d8;
        case 0x1d81dcu: goto label_1d81dc;
        case 0x1d81e0u: goto label_1d81e0;
        case 0x1d81e4u: goto label_1d81e4;
        case 0x1d81e8u: goto label_1d81e8;
        case 0x1d81ecu: goto label_1d81ec;
        case 0x1d81f0u: goto label_1d81f0;
        case 0x1d81f4u: goto label_1d81f4;
        case 0x1d81f8u: goto label_1d81f8;
        case 0x1d81fcu: goto label_1d81fc;
        case 0x1d8200u: goto label_1d8200;
        case 0x1d8204u: goto label_1d8204;
        case 0x1d8208u: goto label_1d8208;
        case 0x1d820cu: goto label_1d820c;
        case 0x1d8210u: goto label_1d8210;
        case 0x1d8214u: goto label_1d8214;
        case 0x1d8218u: goto label_1d8218;
        case 0x1d821cu: goto label_1d821c;
        case 0x1d8220u: goto label_1d8220;
        case 0x1d8224u: goto label_1d8224;
        case 0x1d8228u: goto label_1d8228;
        case 0x1d822cu: goto label_1d822c;
        case 0x1d8230u: goto label_1d8230;
        case 0x1d8234u: goto label_1d8234;
        case 0x1d8238u: goto label_1d8238;
        case 0x1d823cu: goto label_1d823c;
        case 0x1d8240u: goto label_1d8240;
        case 0x1d8244u: goto label_1d8244;
        case 0x1d8248u: goto label_1d8248;
        case 0x1d824cu: goto label_1d824c;
        case 0x1d8250u: goto label_1d8250;
        case 0x1d8254u: goto label_1d8254;
        case 0x1d8258u: goto label_1d8258;
        case 0x1d825cu: goto label_1d825c;
        default: break;
    }

    ctx->pc = 0x1d7c80u;

label_1d7c80:
    // 0x1d7c80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1d7c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1d7c84:
    // 0x1d7c84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d7c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d7c88:
    // 0x1d7c88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d7c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1d7c8c:
    // 0x1d7c8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d7c8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1d7c90:
    // 0x1d7c90: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x1d7c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_1d7c94:
    // 0x1d7c94: 0x8c820d84  lw          $v0, 0xD84($a0)
    ctx->pc = 0x1d7c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3460)));
label_1d7c98:
    // 0x1d7c98: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1d7c9c:
    if (ctx->pc == 0x1D7C9Cu) {
        ctx->pc = 0x1D7C9Cu;
            // 0x1d7c9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CA0u;
        goto label_1d7ca0;
    }
    ctx->pc = 0x1D7C98u;
    {
        const bool branch_taken_0x1d7c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7C98u;
            // 0x1d7c9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7c98) {
            ctx->pc = 0x1D7CC4u;
            goto label_1d7cc4;
        }
    }
    ctx->pc = 0x1D7CA0u;
label_1d7ca0:
    // 0x1d7ca0: 0x8e020d90  lw          $v0, 0xD90($s0)
    ctx->pc = 0x1d7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3472)));
label_1d7ca4:
    // 0x1d7ca4: 0x27a40044  addiu       $a0, $sp, 0x44
    ctx->pc = 0x1d7ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_1d7ca8:
    // 0x1d7ca8: 0x26050d80  addiu       $a1, $s0, 0xD80
    ctx->pc = 0x1d7ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
label_1d7cac:
    // 0x1d7cac: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d7cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d7cb0:
    // 0x1d7cb0: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x1d7cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d7cb4:
    // 0x1d7cb4: 0xc0582cc  jal         func_160B30
label_1d7cb8:
    if (ctx->pc == 0x1D7CB8u) {
        ctx->pc = 0x1D7CB8u;
            // 0x1d7cb8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x1D7CBCu;
        goto label_1d7cbc;
    }
    ctx->pc = 0x1D7CB4u;
    SET_GPR_U32(ctx, 31, 0x1D7CBCu);
    ctx->pc = 0x1D7CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CB4u;
            // 0x1d7cb8: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CBCu; }
        if (ctx->pc != 0x1D7CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7CBCu; }
        if (ctx->pc != 0x1D7CBCu) { return; }
    }
    ctx->pc = 0x1D7CBCu;
label_1d7cbc:
    // 0x1d7cbc: 0x10000024  b           . + 4 + (0x24 << 2)
label_1d7cc0:
    if (ctx->pc == 0x1D7CC0u) {
        ctx->pc = 0x1D7CC0u;
            // 0x1d7cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CC4u;
        goto label_1d7cc4;
    }
    ctx->pc = 0x1D7CBCu;
    {
        const bool branch_taken_0x1d7cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CBCu;
            // 0x1d7cc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7cbc) {
            ctx->pc = 0x1D7D50u;
            goto label_1d7d50;
        }
    }
    ctx->pc = 0x1D7CC4u;
label_1d7cc4:
    // 0x1d7cc4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1d7cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d7cc8:
    // 0x1d7cc8: 0x8e110d90  lw          $s1, 0xD90($s0)
    ctx->pc = 0x1d7cc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3472)));
label_1d7ccc:
    // 0x1d7ccc: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1d7cccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1d7cd0:
    // 0x1d7cd0: 0x26020d8c  addiu       $v0, $s0, 0xD8C
    ctx->pc = 0x1d7cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3468));
label_1d7cd4:
    // 0x1d7cd4: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x1d7cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
label_1d7cd8:
    // 0x1d7cd8: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1d7cd8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1d7cdc:
    // 0x1d7cdc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1d7cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d7ce0:
    // 0x1d7ce0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x1d7ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1d7ce4:
    // 0x1d7ce4: 0x90840003  lbu         $a0, 0x3($a0)
    ctx->pc = 0x1d7ce4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
label_1d7ce8:
    // 0x1d7ce8: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x1d7ce8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1d7cec:
    // 0x1d7cec: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
label_1d7cf0:
    if (ctx->pc == 0x1D7CF0u) {
        ctx->pc = 0x1D7CF0u;
            // 0x1d7cf0: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->pc = 0x1D7CF4u;
        goto label_1d7cf4;
    }
    ctx->pc = 0x1D7CECu;
    {
        const bool branch_taken_0x1d7cec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7cec) {
            ctx->pc = 0x1D7CF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7CECu;
            // 0x1d7cf0: 0x8cb10004  lw          $s1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7D14u;
            goto label_1d7d14;
        }
    }
    ctx->pc = 0x1D7CF4u;
label_1d7cf4:
    // 0x1d7cf4: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x1d7cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_1d7cf8:
    // 0x1d7cf8: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x1d7cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
label_1d7cfc:
    // 0x1d7cfc: 0x26050d80  addiu       $a1, $s0, 0xD80
    ctx->pc = 0x1d7cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
label_1d7d00:
    // 0x1d7d00: 0x27a60034  addiu       $a2, $sp, 0x34
    ctx->pc = 0x1d7d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1d7d04:
    // 0x1d7d04: 0xc0582cc  jal         func_160B30
label_1d7d08:
    if (ctx->pc == 0x1D7D08u) {
        ctx->pc = 0x1D7D08u;
            // 0x1d7d08: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D7D0Cu;
        goto label_1d7d0c;
    }
    ctx->pc = 0x1D7D04u;
    SET_GPR_U32(ctx, 31, 0x1D7D0Cu);
    ctx->pc = 0x1D7D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D04u;
            // 0x1d7d08: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D0Cu; }
        if (ctx->pc != 0x1D7D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D0Cu; }
        if (ctx->pc != 0x1D7D0Cu) { return; }
    }
    ctx->pc = 0x1D7D0Cu;
label_1d7d0c:
    // 0x1d7d0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d7d10:
    if (ctx->pc == 0x1D7D10u) {
        ctx->pc = 0x1D7D14u;
        goto label_1d7d14;
    }
    ctx->pc = 0x1D7D0Cu;
    {
        const bool branch_taken_0x1d7d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7d0c) {
            ctx->pc = 0x1D7D20u;
            goto label_1d7d20;
        }
    }
    ctx->pc = 0x1D7D14u;
label_1d7d14:
    // 0x1d7d14: 0x5622fff0  bnel        $s1, $v0, . + 4 + (-0x10 << 2)
label_1d7d18:
    if (ctx->pc == 0x1D7D18u) {
        ctx->pc = 0x1D7D18u;
            // 0x1d7d18: 0x11283c  dsll32      $a1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
        ctx->pc = 0x1D7D1Cu;
        goto label_1d7d1c;
    }
    ctx->pc = 0x1D7D14u;
    {
        const bool branch_taken_0x1d7d14 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7d14) {
            ctx->pc = 0x1D7D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D14u;
            // 0x1d7d18: 0x11283c  dsll32      $a1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7CD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7cd8;
        }
    }
    ctx->pc = 0x1D7D1Cu;
label_1d7d1c:
    // 0x1d7d1c: 0x0  nop
    ctx->pc = 0x1d7d1cu;
    // NOP
label_1d7d20:
    // 0x1d7d20: 0x11183c  dsll32      $v1, $s1, 0
    ctx->pc = 0x1d7d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 0));
label_1d7d24:
    // 0x1d7d24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1d7d24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_1d7d28:
    // 0x1d7d28: 0x26020d8c  addiu       $v0, $s0, 0xD8C
    ctx->pc = 0x1d7d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 3468));
label_1d7d2c:
    // 0x1d7d2c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_1d7d30:
    if (ctx->pc == 0x1D7D30u) {
        ctx->pc = 0x1D7D34u;
        goto label_1d7d34;
    }
    ctx->pc = 0x1D7D2Cu;
    {
        const bool branch_taken_0x1d7d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d7d2c) {
            ctx->pc = 0x1D7D4Cu;
            goto label_1d7d4c;
        }
    }
    ctx->pc = 0x1D7D34u;
label_1d7d34:
    // 0x1d7d34: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1d7d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_1d7d38:
    // 0x1d7d38: 0x27a4003c  addiu       $a0, $sp, 0x3C
    ctx->pc = 0x1d7d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_1d7d3c:
    // 0x1d7d3c: 0x26050d80  addiu       $a1, $s0, 0xD80
    ctx->pc = 0x1d7d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3456));
label_1d7d40:
    // 0x1d7d40: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x1d7d40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1d7d44:
    // 0x1d7d44: 0xc0582cc  jal         func_160B30
label_1d7d48:
    if (ctx->pc == 0x1D7D48u) {
        ctx->pc = 0x1D7D48u;
            // 0x1d7d48: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1D7D4Cu;
        goto label_1d7d4c;
    }
    ctx->pc = 0x1D7D44u;
    SET_GPR_U32(ctx, 31, 0x1D7D4Cu);
    ctx->pc = 0x1D7D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D44u;
            // 0x1d7d48: 0x27a70030  addiu       $a3, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D4Cu; }
        if (ctx->pc != 0x1D7D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D4Cu; }
        if (ctx->pc != 0x1D7D4Cu) { return; }
    }
    ctx->pc = 0x1D7D4Cu;
label_1d7d4c:
    // 0x1d7d4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d7d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d50:
    // 0x1d7d50: 0xc075ee8  jal         func_1D7BA0
label_1d7d54:
    if (ctx->pc == 0x1D7D54u) {
        ctx->pc = 0x1D7D58u;
        goto label_1d7d58;
    }
    ctx->pc = 0x1D7D50u;
    SET_GPR_U32(ctx, 31, 0x1D7D58u);
    ctx->pc = 0x1D7BA0u;
    if (runtime->hasFunction(0x1D7BA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D58u; }
        if (ctx->pc != 0x1D7D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7BA0_0x1d7ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7D58u; }
        if (ctx->pc != 0x1D7D58u) { return; }
    }
    ctx->pc = 0x1D7D58u;
label_1d7d58:
    // 0x1d7d58: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d7d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d7d5c:
    // 0x1d7d5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d7d5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d7d60:
    // 0x1d7d60: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d7d60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7d64:
    // 0x1d7d64: 0x3e00008  jr          $ra
label_1d7d68:
    if (ctx->pc == 0x1D7D68u) {
        ctx->pc = 0x1D7D68u;
            // 0x1d7d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1D7D6Cu;
        goto label_1d7d6c;
    }
    ctx->pc = 0x1D7D64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7D64u;
            // 0x1d7d68: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D7D6Cu;
label_1d7d6c:
    // 0x1d7d6c: 0x0  nop
    ctx->pc = 0x1d7d6cu;
    // NOP
label_1d7d70:
    // 0x1d7d70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d7d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d7d74:
    // 0x1d7d74: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x1d7d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_1d7d78:
    // 0x1d7d78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d7d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1d7d7c:
    // 0x1d7d7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1d7d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1d7d80:
    // 0x1d7d80: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d7d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1d7d84:
    // 0x1d7d84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d7d84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7d88:
    // 0x1d7d88: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1d7d88u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d7d8c:
    // 0x1d7d8c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1d7d8cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1d7d90:
    // 0x1d7d90: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1d7d90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1d7d94:
    // 0x1d7d94: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1d7d94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d7d98:
    // 0x1d7d98: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x1d7d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_1d7d9c:
    // 0x1d7d9c: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x1d7d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_1d7da0:
    // 0x1d7da0: 0x28630006  slti        $v1, $v1, 0x6
    ctx->pc = 0x1d7da0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_1d7da4:
    // 0x1d7da4: 0x14600124  bnez        $v1, . + 4 + (0x124 << 2)
label_1d7da8:
    if (ctx->pc == 0x1D7DA8u) {
        ctx->pc = 0x1D7DA8u;
            // 0x1d7da8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DACu;
        goto label_1d7dac;
    }
    ctx->pc = 0x1D7DA4u;
    {
        const bool branch_taken_0x1d7da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DA4u;
            // 0x1d7da8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7da4) {
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D7DACu;
label_1d7dac:
    // 0x1d7dac: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x1d7dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_1d7db0:
    // 0x1d7db0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x1d7db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1d7db4:
    // 0x1d7db4: 0x50830011  beql        $a0, $v1, . + 4 + (0x11 << 2)
label_1d7db8:
    if (ctx->pc == 0x1D7DB8u) {
        ctx->pc = 0x1D7DB8u;
            // 0x1d7db8: 0xc4ac0010  lwc1        $f12, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1D7DBCu;
        goto label_1d7dbc;
    }
    ctx->pc = 0x1D7DB4u;
    {
        const bool branch_taken_0x1d7db4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7db4) {
            ctx->pc = 0x1D7DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DB4u;
            // 0x1d7db8: 0xc4ac0010  lwc1        $f12, 0x10($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7DFCu;
            goto label_1d7dfc;
        }
    }
    ctx->pc = 0x1D7DBCu;
label_1d7dbc:
    // 0x1d7dbc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x1d7dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1d7dc0:
    // 0x1d7dc0: 0x1083000d  beq         $a0, $v1, . + 4 + (0xD << 2)
label_1d7dc4:
    if (ctx->pc == 0x1D7DC4u) {
        ctx->pc = 0x1D7DC8u;
        goto label_1d7dc8;
    }
    ctx->pc = 0x1D7DC0u;
    {
        const bool branch_taken_0x1d7dc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dc0) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DC8u;
label_1d7dc8:
    // 0x1d7dc8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1d7dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d7dcc:
    // 0x1d7dcc: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1d7dd0:
    if (ctx->pc == 0x1D7DD0u) {
        ctx->pc = 0x1D7DD4u;
        goto label_1d7dd4;
    }
    ctx->pc = 0x1D7DCCu;
    {
        const bool branch_taken_0x1d7dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dcc) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DD4u;
label_1d7dd4:
    // 0x1d7dd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d7dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d7dd8:
    // 0x1d7dd8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_1d7ddc:
    if (ctx->pc == 0x1D7DDCu) {
        ctx->pc = 0x1D7DE0u;
        goto label_1d7de0;
    }
    ctx->pc = 0x1D7DD8u;
    {
        const bool branch_taken_0x1d7dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7dd8) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DE0u;
label_1d7de0:
    // 0x1d7de0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1d7de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1d7de4:
    // 0x1d7de4: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1d7de8:
    if (ctx->pc == 0x1D7DE8u) {
        ctx->pc = 0x1D7DECu;
        goto label_1d7dec;
    }
    ctx->pc = 0x1D7DE4u;
    {
        const bool branch_taken_0x1d7de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d7de4) {
            ctx->pc = 0x1D7DF8u;
            goto label_1d7df8;
        }
    }
    ctx->pc = 0x1D7DECu;
label_1d7dec:
    // 0x1d7dec: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d7decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1d7df0:
    // 0x1d7df0: 0x54830112  bnel        $a0, $v1, . + 4 + (0x112 << 2)
label_1d7df4:
    if (ctx->pc == 0x1D7DF4u) {
        ctx->pc = 0x1D7DF4u;
            // 0x1d7df4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x1D7DF8u;
        goto label_1d7df8;
    }
    ctx->pc = 0x1D7DF0u;
    {
        const bool branch_taken_0x1d7df0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d7df0) {
            ctx->pc = 0x1D7DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7DF0u;
            // 0x1d7df4: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D823Cu;
            goto label_1d823c;
        }
    }
    ctx->pc = 0x1D7DF8u;
label_1d7df8:
    // 0x1d7df8: 0xc4ac0010  lwc1        $f12, 0x10($a1)
    ctx->pc = 0x1d7df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d7dfc:
    // 0x1d7dfc: 0xc4ad0014  lwc1        $f13, 0x14($a1)
    ctx->pc = 0x1d7dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1d7e00:
    // 0x1d7e00: 0xc4ae0018  lwc1        $f14, 0x18($a1)
    ctx->pc = 0x1d7e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1d7e04:
    // 0x1d7e04: 0xc04cbd8  jal         func_132F60
label_1d7e08:
    if (ctx->pc == 0x1D7E08u) {
        ctx->pc = 0x1D7E08u;
            // 0x1d7e08: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D7E0Cu;
        goto label_1d7e0c;
    }
    ctx->pc = 0x1D7E04u;
    SET_GPR_U32(ctx, 31, 0x1D7E0Cu);
    ctx->pc = 0x1D7E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E04u;
            // 0x1d7e08: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E0Cu; }
        if (ctx->pc != 0x1D7E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E0Cu; }
        if (ctx->pc != 0x1D7E0Cu) { return; }
    }
    ctx->pc = 0x1D7E0Cu;
label_1d7e0c:
    // 0x1d7e0c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d7e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d7e10:
    // 0x1d7e10: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d7e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d7e14:
    // 0x1d7e14: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d7e14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d7e18:
    // 0x1d7e18: 0xc04cc70  jal         func_1331C0
label_1d7e1c:
    if (ctx->pc == 0x1D7E1Cu) {
        ctx->pc = 0x1D7E1Cu;
            // 0x1d7e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7E20u;
        goto label_1d7e20;
    }
    ctx->pc = 0x1D7E18u;
    SET_GPR_U32(ctx, 31, 0x1D7E20u);
    ctx->pc = 0x1D7E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E18u;
            // 0x1d7e1c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E20u; }
        if (ctx->pc != 0x1D7E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E20u; }
        if (ctx->pc != 0x1D7E20u) { return; }
    }
    ctx->pc = 0x1D7E20u;
label_1d7e20:
    // 0x1d7e20: 0xc04cc2c  jal         func_1330B0
label_1d7e24:
    if (ctx->pc == 0x1D7E24u) {
        ctx->pc = 0x1D7E24u;
            // 0x1d7e24: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x1D7E28u;
        goto label_1d7e28;
    }
    ctx->pc = 0x1D7E20u;
    SET_GPR_U32(ctx, 31, 0x1D7E28u);
    ctx->pc = 0x1D7E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E20u;
            // 0x1d7e24: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E28u; }
        if (ctx->pc != 0x1D7E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E28u; }
        if (ctx->pc != 0x1D7E28u) { return; }
    }
    ctx->pc = 0x1D7E28u;
label_1d7e28:
    // 0x1d7e28: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7e28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7e2c:
    // 0x1d7e2c: 0x0  nop
    ctx->pc = 0x1d7e2cu;
    // NOP
label_1d7e30:
    // 0x1d7e30: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7e30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7e34:
    // 0x1d7e34: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_1d7e38:
    if (ctx->pc == 0x1D7E38u) {
        ctx->pc = 0x1D7E38u;
            // 0x1d7e38: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x1D7E3Cu;
        goto label_1d7e3c;
    }
    ctx->pc = 0x1D7E34u;
    {
        const bool branch_taken_0x1d7e34 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7e34) {
            ctx->pc = 0x1D7E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E34u;
            // 0x1d7e38: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7E78u;
            goto label_1d7e78;
        }
    }
    ctx->pc = 0x1D7E3Cu;
label_1d7e3c:
    // 0x1d7e3c: 0xc04cc2c  jal         func_1330B0
label_1d7e40:
    if (ctx->pc == 0x1D7E40u) {
        ctx->pc = 0x1D7E40u;
            // 0x1d7e40: 0x26240300  addiu       $a0, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x1D7E44u;
        goto label_1d7e44;
    }
    ctx->pc = 0x1D7E3Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E44u);
    ctx->pc = 0x1D7E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E3Cu;
            // 0x1d7e40: 0x26240300  addiu       $a0, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E44u; }
        if (ctx->pc != 0x1D7E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E44u; }
        if (ctx->pc != 0x1D7E44u) { return; }
    }
    ctx->pc = 0x1D7E44u;
label_1d7e44:
    // 0x1d7e44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7e44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7e48:
    // 0x1d7e48: 0x0  nop
    ctx->pc = 0x1d7e48u;
    // NOP
label_1d7e4c:
    // 0x1d7e4c: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7e4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7e50:
    // 0x1d7e50: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1d7e54:
    if (ctx->pc == 0x1D7E54u) {
        ctx->pc = 0x1D7E54u;
            // 0x1d7e54: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x1D7E58u;
        goto label_1d7e58;
    }
    ctx->pc = 0x1D7E50u;
    {
        const bool branch_taken_0x1d7e50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7e50) {
            ctx->pc = 0x1D7E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E50u;
            // 0x1d7e54: 0x26240350  addiu       $a0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7E6Cu;
            goto label_1d7e6c;
        }
    }
    ctx->pc = 0x1D7E58u;
label_1d7e58:
    // 0x1d7e58: 0x26240350  addiu       $a0, $s1, 0x350
    ctx->pc = 0x1d7e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_1d7e5c:
    // 0x1d7e5c: 0xc04cc04  jal         func_133010
label_1d7e60:
    if (ctx->pc == 0x1D7E60u) {
        ctx->pc = 0x1D7E60u;
            // 0x1d7e60: 0x26250820  addiu       $a1, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->pc = 0x1D7E64u;
        goto label_1d7e64;
    }
    ctx->pc = 0x1D7E5Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E64u);
    ctx->pc = 0x1D7E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E5Cu;
            // 0x1d7e60: 0x26250820  addiu       $a1, $s1, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E64u; }
        if (ctx->pc != 0x1D7E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E64u; }
        if (ctx->pc != 0x1D7E64u) { return; }
    }
    ctx->pc = 0x1D7E64u;
label_1d7e64:
    // 0x1d7e64: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d7e68:
    if (ctx->pc == 0x1D7E68u) {
        ctx->pc = 0x1D7E6Cu;
        goto label_1d7e6c;
    }
    ctx->pc = 0x1D7E64u;
    {
        const bool branch_taken_0x1d7e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7e64) {
            ctx->pc = 0x1D7E74u;
            goto label_1d7e74;
        }
    }
    ctx->pc = 0x1D7E6Cu;
label_1d7e6c:
    // 0x1d7e6c: 0xc04cc04  jal         func_133010
label_1d7e70:
    if (ctx->pc == 0x1D7E70u) {
        ctx->pc = 0x1D7E70u;
            // 0x1d7e70: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x1D7E74u;
        goto label_1d7e74;
    }
    ctx->pc = 0x1D7E6Cu;
    SET_GPR_U32(ctx, 31, 0x1D7E74u);
    ctx->pc = 0x1D7E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E6Cu;
            // 0x1d7e70: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E74u; }
        if (ctx->pc != 0x1D7E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E74u; }
        if (ctx->pc != 0x1D7E74u) { return; }
    }
    ctx->pc = 0x1D7E74u;
label_1d7e74:
    // 0x1d7e74: 0x26240350  addiu       $a0, $s1, 0x350
    ctx->pc = 0x1d7e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_1d7e78:
    // 0x1d7e78: 0xc04cc14  jal         func_133050
label_1d7e7c:
    if (ctx->pc == 0x1D7E7Cu) {
        ctx->pc = 0x1D7E80u;
        goto label_1d7e80;
    }
    ctx->pc = 0x1D7E78u;
    SET_GPR_U32(ctx, 31, 0x1D7E80u);
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E80u; }
        if (ctx->pc != 0x1D7E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7E80u; }
        if (ctx->pc != 0x1D7E80u) { return; }
    }
    ctx->pc = 0x1D7E80u;
label_1d7e80:
    // 0x1d7e80: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1d7e80u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1d7e84:
    // 0x1d7e84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7e88:
    // 0x1d7e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7e8c:
    // 0x1d7e8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d7e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d7e90:
    // 0x1d7e90: 0x46150303  div.s       $f12, $f0, $f21
    ctx->pc = 0x1d7e90u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[21];
label_1d7e94:
    // 0x1d7e94: 0x0  nop
    ctx->pc = 0x1d7e94u;
    // NOP
label_1d7e98:
    // 0x1d7e98: 0x0  nop
    ctx->pc = 0x1d7e98u;
    // NOP
label_1d7e9c:
    // 0x1d7e9c: 0xc04cc70  jal         func_1331C0
label_1d7ea0:
    if (ctx->pc == 0x1D7EA0u) {
        ctx->pc = 0x1D7EA0u;
            // 0x1d7ea0: 0x26250350  addiu       $a1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x1D7EA4u;
        goto label_1d7ea4;
    }
    ctx->pc = 0x1D7E9Cu;
    SET_GPR_U32(ctx, 31, 0x1D7EA4u);
    ctx->pc = 0x1D7EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7E9Cu;
            // 0x1d7ea0: 0x26250350  addiu       $a1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EA4u; }
        if (ctx->pc != 0x1D7EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EA4u; }
        if (ctx->pc != 0x1D7EA4u) { return; }
    }
    ctx->pc = 0x1D7EA4u;
label_1d7ea4:
    // 0x1d7ea4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d7ea8:
    // 0x1d7ea8: 0xc04cc08  jal         func_133020
label_1d7eac:
    if (ctx->pc == 0x1D7EACu) {
        ctx->pc = 0x1D7EACu;
            // 0x1d7eac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1D7EB0u;
        goto label_1d7eb0;
    }
    ctx->pc = 0x1D7EA8u;
    SET_GPR_U32(ctx, 31, 0x1D7EB0u);
    ctx->pc = 0x1D7EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EA8u;
            // 0x1d7eac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EB0u; }
        if (ctx->pc != 0x1D7EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EB0u; }
        if (ctx->pc != 0x1D7EB0u) { return; }
    }
    ctx->pc = 0x1D7EB0u;
label_1d7eb0:
    // 0x1d7eb0: 0x3c023d3d  lui         $v0, 0x3D3D
    ctx->pc = 0x1d7eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15677 << 16));
label_1d7eb4:
    // 0x1d7eb4: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x1d7eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
label_1d7eb8:
    // 0x1d7eb8: 0x3443a12f  ori         $v1, $v0, 0xA12F
    ctx->pc = 0x1d7eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_1d7ebc:
    // 0x1d7ebc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7ec0:
    // 0x1d7ec0: 0xc6220540  lwc1        $f2, 0x540($s1)
    ctx->pc = 0x1d7ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d7ec4:
    // 0x1d7ec4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d7ec4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7ec8:
    // 0x1d7ec8: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1d7ec8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1d7ecc:
    // 0x1d7ecc: 0x0  nop
    ctx->pc = 0x1d7eccu;
    // NOP
label_1d7ed0:
    // 0x1d7ed0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1d7ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_1d7ed4:
    // 0x1d7ed4: 0x4601a81a  mula.s      $f21, $f1
    ctx->pc = 0x1d7ed4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[1]);
label_1d7ed8:
    // 0x1d7ed8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1d7ed8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1d7edc:
    // 0x1d7edc: 0xc04cc2c  jal         func_1330B0
label_1d7ee0:
    if (ctx->pc == 0x1D7EE0u) {
        ctx->pc = 0x1D7EE0u;
            // 0x1d7ee0: 0x46001ddc  madd.s      $f23, $f3, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->pc = 0x1D7EE4u;
        goto label_1d7ee4;
    }
    ctx->pc = 0x1D7EDCu;
    SET_GPR_U32(ctx, 31, 0x1D7EE4u);
    ctx->pc = 0x1D7EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EDCu;
            // 0x1d7ee0: 0x46001ddc  madd.s      $f23, $f3, $f0 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[0]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EE4u; }
        if (ctx->pc != 0x1D7EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7EE4u; }
        if (ctx->pc != 0x1D7EE4u) { return; }
    }
    ctx->pc = 0x1D7EE4u;
label_1d7ee4:
    // 0x1d7ee4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7ee8:
    // 0x1d7ee8: 0x0  nop
    ctx->pc = 0x1d7ee8u;
    // NOP
label_1d7eec:
    // 0x1d7eec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7eecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7ef0:
    // 0x1d7ef0: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_1d7ef4:
    if (ctx->pc == 0x1D7EF4u) {
        ctx->pc = 0x1D7EF4u;
            // 0x1d7ef4: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->pc = 0x1D7EF8u;
        goto label_1d7ef8;
    }
    ctx->pc = 0x1D7EF0u;
    {
        const bool branch_taken_0x1d7ef0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7ef0) {
            ctx->pc = 0x1D7EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EF0u;
            // 0x1d7ef4: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7F34u;
            goto label_1d7f34;
        }
    }
    ctx->pc = 0x1D7EF8u;
label_1d7ef8:
    // 0x1d7ef8: 0xc04cc2c  jal         func_1330B0
label_1d7efc:
    if (ctx->pc == 0x1D7EFCu) {
        ctx->pc = 0x1D7EFCu;
            // 0x1d7efc: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->pc = 0x1D7F00u;
        goto label_1d7f00;
    }
    ctx->pc = 0x1D7EF8u;
    SET_GPR_U32(ctx, 31, 0x1D7F00u);
    ctx->pc = 0x1D7EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7EF8u;
            // 0x1d7efc: 0x26040300  addiu       $a0, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330B0u;
    if (runtime->hasFunction(0x1330B0u)) {
        auto targetFn = runtime->lookupFunction(0x1330B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F00u; }
        if (ctx->pc != 0x1D7F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330B0_0x1330b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F00u; }
        if (ctx->pc != 0x1D7F00u) { return; }
    }
    ctx->pc = 0x1D7F00u;
label_1d7f00:
    // 0x1d7f00: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1d7f00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7f04:
    // 0x1d7f04: 0x0  nop
    ctx->pc = 0x1d7f04u;
    // NOP
label_1d7f08:
    // 0x1d7f08: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1d7f08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7f0c:
    // 0x1d7f0c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_1d7f10:
    if (ctx->pc == 0x1D7F10u) {
        ctx->pc = 0x1D7F10u;
            // 0x1d7f10: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->pc = 0x1D7F14u;
        goto label_1d7f14;
    }
    ctx->pc = 0x1D7F0Cu;
    {
        const bool branch_taken_0x1d7f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7f0c) {
            ctx->pc = 0x1D7F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F0Cu;
            // 0x1d7f10: 0x26040350  addiu       $a0, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D7F28u;
            goto label_1d7f28;
        }
    }
    ctx->pc = 0x1D7F14u;
label_1d7f14:
    // 0x1d7f14: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x1d7f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
label_1d7f18:
    // 0x1d7f18: 0xc04cc04  jal         func_133010
label_1d7f1c:
    if (ctx->pc == 0x1D7F1Cu) {
        ctx->pc = 0x1D7F1Cu;
            // 0x1d7f1c: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->pc = 0x1D7F20u;
        goto label_1d7f20;
    }
    ctx->pc = 0x1D7F18u;
    SET_GPR_U32(ctx, 31, 0x1D7F20u);
    ctx->pc = 0x1D7F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F18u;
            // 0x1d7f1c: 0x26050820  addiu       $a1, $s0, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F20u; }
        if (ctx->pc != 0x1D7F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F20u; }
        if (ctx->pc != 0x1D7F20u) { return; }
    }
    ctx->pc = 0x1D7F20u;
label_1d7f20:
    // 0x1d7f20: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d7f24:
    if (ctx->pc == 0x1D7F24u) {
        ctx->pc = 0x1D7F28u;
        goto label_1d7f28;
    }
    ctx->pc = 0x1D7F20u;
    {
        const bool branch_taken_0x1d7f20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7f20) {
            ctx->pc = 0x1D7F30u;
            goto label_1d7f30;
        }
    }
    ctx->pc = 0x1D7F28u;
label_1d7f28:
    // 0x1d7f28: 0xc04cc04  jal         func_133010
label_1d7f2c:
    if (ctx->pc == 0x1D7F2Cu) {
        ctx->pc = 0x1D7F2Cu;
            // 0x1d7f2c: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->pc = 0x1D7F30u;
        goto label_1d7f30;
    }
    ctx->pc = 0x1D7F28u;
    SET_GPR_U32(ctx, 31, 0x1D7F30u);
    ctx->pc = 0x1D7F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F28u;
            // 0x1d7f2c: 0x26050300  addiu       $a1, $s0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F30u; }
        if (ctx->pc != 0x1D7F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F30u; }
        if (ctx->pc != 0x1D7F30u) { return; }
    }
    ctx->pc = 0x1D7F30u;
label_1d7f30:
    // 0x1d7f30: 0x26040350  addiu       $a0, $s0, 0x350
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
label_1d7f34:
    // 0x1d7f34: 0xc04cc14  jal         func_133050
label_1d7f38:
    if (ctx->pc == 0x1D7F38u) {
        ctx->pc = 0x1D7F3Cu;
        goto label_1d7f3c;
    }
    ctx->pc = 0x1D7F34u;
    SET_GPR_U32(ctx, 31, 0x1D7F3Cu);
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F3Cu; }
        if (ctx->pc != 0x1D7F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F3Cu; }
        if (ctx->pc != 0x1D7F3Cu) { return; }
    }
    ctx->pc = 0x1D7F3Cu;
label_1d7f3c:
    // 0x1d7f3c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1d7f3cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1d7f40:
    // 0x1d7f40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7f44:
    // 0x1d7f44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7f48:
    // 0x1d7f48: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1d7f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d7f4c:
    // 0x1d7f4c: 0x46160303  div.s       $f12, $f0, $f22
    ctx->pc = 0x1d7f4cu;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[22];
label_1d7f50:
    // 0x1d7f50: 0x0  nop
    ctx->pc = 0x1d7f50u;
    // NOP
label_1d7f54:
    // 0x1d7f54: 0x0  nop
    ctx->pc = 0x1d7f54u;
    // NOP
label_1d7f58:
    // 0x1d7f58: 0xc04cc70  jal         func_1331C0
label_1d7f5c:
    if (ctx->pc == 0x1D7F5Cu) {
        ctx->pc = 0x1D7F5Cu;
            // 0x1d7f5c: 0x26050350  addiu       $a1, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->pc = 0x1D7F60u;
        goto label_1d7f60;
    }
    ctx->pc = 0x1D7F58u;
    SET_GPR_U32(ctx, 31, 0x1D7F60u);
    ctx->pc = 0x1D7F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F58u;
            // 0x1d7f5c: 0x26050350  addiu       $a1, $s0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F60u; }
        if (ctx->pc != 0x1D7F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F60u; }
        if (ctx->pc != 0x1D7F60u) { return; }
    }
    ctx->pc = 0x1D7F60u;
label_1d7f60:
    // 0x1d7f60: 0xc6010540  lwc1        $f1, 0x540($s0)
    ctx->pc = 0x1d7f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d7f64:
    // 0x1d7f64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d7f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d7f68:
    // 0x1d7f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d7f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d7f6c:
    // 0x1d7f6c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d7f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d7f70:
    // 0x1d7f70: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1d7f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1d7f74:
    // 0x1d7f74: 0xc04cc08  jal         func_133020
label_1d7f78:
    if (ctx->pc == 0x1D7F78u) {
        ctx->pc = 0x1D7F78u;
            // 0x1d7f78: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1D7F7Cu;
        goto label_1d7f7c;
    }
    ctx->pc = 0x1D7F74u;
    SET_GPR_U32(ctx, 31, 0x1D7F7Cu);
    ctx->pc = 0x1D7F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7F74u;
            // 0x1d7f78: 0x46010540  add.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F7Cu; }
        if (ctx->pc != 0x1D7F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D7F7Cu; }
        if (ctx->pc != 0x1D7F7Cu) { return; }
    }
    ctx->pc = 0x1D7F7Cu;
label_1d7f7c:
    // 0x1d7f7c: 0x3c03bd3d  lui         $v1, 0xBD3D
    ctx->pc = 0x1d7f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48445 << 16));
label_1d7f80:
    // 0x1d7f80: 0x3463a12f  ori         $v1, $v1, 0xA12F
    ctx->pc = 0x1d7f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_1d7f84:
    // 0x1d7f84: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1d7f84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d7f88:
    // 0x1d7f88: 0x0  nop
    ctx->pc = 0x1d7f88u;
    // NOP
label_1d7f8c:
    // 0x1d7f8c: 0x4600081a  mula.s      $f1, $f0
    ctx->pc = 0x1d7f8cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1d7f90:
    // 0x1d7f90: 0x4615b01c  madd.s      $f0, $f22, $f21
    ctx->pc = 0x1d7f90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[22], ctx->f[21]));
label_1d7f94:
    // 0x1d7f94: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x1d7f94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d7f98:
    // 0x1d7f98: 0x450000a7  bc1f        . + 4 + (0xA7 << 2)
label_1d7f9c:
    if (ctx->pc == 0x1D7F9Cu) {
        ctx->pc = 0x1D7FA0u;
        goto label_1d7fa0;
    }
    ctx->pc = 0x1D7F98u;
    {
        const bool branch_taken_0x1d7f98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d7f98) {
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D7FA0u;
label_1d7fa0:
    // 0x1d7fa0: 0x8e030d74  lw          $v1, 0xD74($s0)
    ctx->pc = 0x1d7fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_1d7fa4:
    // 0x1d7fa4: 0x906302c4  lbu         $v1, 0x2C4($v1)
    ctx->pc = 0x1d7fa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 708)));
label_1d7fa8:
    // 0x1d7fa8: 0x146000a3  bnez        $v1, . + 4 + (0xA3 << 2)
label_1d7fac:
    if (ctx->pc == 0x1D7FACu) {
        ctx->pc = 0x1D7FB0u;
        goto label_1d7fb0;
    }
    ctx->pc = 0x1D7FA8u;
    {
        const bool branch_taken_0x1d7fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fa8) {
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D7FB0u;
label_1d7fb0:
    // 0x1d7fb0: 0x8e230d74  lw          $v1, 0xD74($s1)
    ctx->pc = 0x1d7fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_1d7fb4:
    // 0x1d7fb4: 0x906302c4  lbu         $v1, 0x2C4($v1)
    ctx->pc = 0x1d7fb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 708)));
label_1d7fb8:
    // 0x1d7fb8: 0x1460009f  bnez        $v1, . + 4 + (0x9F << 2)
label_1d7fbc:
    if (ctx->pc == 0x1D7FBCu) {
        ctx->pc = 0x1D7FC0u;
        goto label_1d7fc0;
    }
    ctx->pc = 0x1D7FB8u;
    {
        const bool branch_taken_0x1d7fb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fb8) {
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D7FC0u;
label_1d7fc0:
    // 0x1d7fc0: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x1d7fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_1d7fc4:
    // 0x1d7fc4: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1d7fc4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d7fc8:
    // 0x1d7fc8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d7fcc:
    if (ctx->pc == 0x1D7FCCu) {
        ctx->pc = 0x1D7FCCu;
            // 0x1d7fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D7FD0u;
        goto label_1d7fd0;
    }
    ctx->pc = 0x1D7FC8u;
    {
        const bool branch_taken_0x1d7fc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D7FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D7FC8u;
            // 0x1d7fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7fc8) {
            ctx->pc = 0x1D7FE0u;
            goto label_1d7fe0;
        }
    }
    ctx->pc = 0x1D7FD0u;
label_1d7fd0:
    // 0x1d7fd0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d7fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d7fd4:
    // 0x1d7fd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d7fd8:
    if (ctx->pc == 0x1D7FD8u) {
        ctx->pc = 0x1D7FDCu;
        goto label_1d7fdc;
    }
    ctx->pc = 0x1D7FD4u;
    {
        const bool branch_taken_0x1d7fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fd4) {
            ctx->pc = 0x1D7FE0u;
            goto label_1d7fe0;
        }
    }
    ctx->pc = 0x1D7FDCu;
label_1d7fdc:
    // 0x1d7fdc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d7fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d7fe0:
    // 0x1d7fe0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d7fe4:
    if (ctx->pc == 0x1D7FE4u) {
        ctx->pc = 0x1D7FE8u;
        goto label_1d7fe8;
    }
    ctx->pc = 0x1D7FE0u;
    {
        const bool branch_taken_0x1d7fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7fe0) {
            ctx->pc = 0x1D8020u;
            goto label_1d8020;
        }
    }
    ctx->pc = 0x1D7FE8u;
label_1d7fe8:
    // 0x1d7fe8: 0x822211aa  lb          $v0, 0x11AA($s1)
    ctx->pc = 0x1d7fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4522)));
label_1d7fec:
    // 0x1d7fec: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d7fecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d7ff0:
    // 0x1d7ff0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d7ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d7ff4:
    // 0x1d7ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d7ff8:
    if (ctx->pc == 0x1D7FF8u) {
        ctx->pc = 0x1D7FFCu;
        goto label_1d7ffc;
    }
    ctx->pc = 0x1D7FF4u;
    {
        const bool branch_taken_0x1d7ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ff4) {
            ctx->pc = 0x1D8014u;
            goto label_1d8014;
        }
    }
    ctx->pc = 0x1D7FFCu;
label_1d7ffc:
    // 0x1d7ffc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d7ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d8000:
    // 0x1d8000: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d8004:
    // 0x1d8004: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d8004u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1d8008:
    // 0x1d8008: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d8008u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1d800c:
    // 0x1d800c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d800cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8010:
    // 0x1d8010: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8010u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8014:
    // 0x1d8014: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d8018:
    if (ctx->pc == 0x1D8018u) {
        ctx->pc = 0x1D801Cu;
        goto label_1d801c;
    }
    ctx->pc = 0x1D8014u;
    {
        const bool branch_taken_0x1d8014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8014) {
            ctx->pc = 0x1D8020u;
            goto label_1d8020;
        }
    }
    ctx->pc = 0x1D801Cu;
label_1d801c:
    // 0x1d801c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d801cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8020:
    // 0x1d8020: 0x54800022  bnel        $a0, $zero, . + 4 + (0x22 << 2)
label_1d8024:
    if (ctx->pc == 0x1D8024u) {
        ctx->pc = 0x1D8024u;
            // 0x1d8024: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->pc = 0x1D8028u;
        goto label_1d8028;
    }
    ctx->pc = 0x1D8020u;
    {
        const bool branch_taken_0x1d8020 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8020) {
            ctx->pc = 0x1D8024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8020u;
            // 0x1d8024: 0x3c020005  lui         $v0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D80ACu;
            goto label_1d80ac;
        }
    }
    ctx->pc = 0x1D8028u;
label_1d8028:
    // 0x1d8028: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d8028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d802c:
    // 0x1d802c: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1d8030:
    if (ctx->pc == 0x1D8030u) {
        ctx->pc = 0x1D8034u;
        goto label_1d8034;
    }
    ctx->pc = 0x1D802Cu;
    {
        const bool branch_taken_0x1d802c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d802c) {
            ctx->pc = 0x1D80A8u;
            goto label_1d80a8;
        }
    }
    ctx->pc = 0x1D8034u;
label_1d8034:
    // 0x1d8034: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x1d8034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_1d8038:
    // 0x1d8038: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x1d8038u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1d803c:
    // 0x1d803c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_1d8040:
    if (ctx->pc == 0x1D8040u) {
        ctx->pc = 0x1D8040u;
            // 0x1d8040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D8044u;
        goto label_1d8044;
    }
    ctx->pc = 0x1D803Cu;
    {
        const bool branch_taken_0x1d803c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1D8040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D803Cu;
            // 0x1d8040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d803c) {
            ctx->pc = 0x1D8054u;
            goto label_1d8054;
        }
    }
    ctx->pc = 0x1D8044u;
label_1d8044:
    // 0x1d8044: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x1d8044u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_1d8048:
    // 0x1d8048: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1d804c:
    if (ctx->pc == 0x1D804Cu) {
        ctx->pc = 0x1D8050u;
        goto label_1d8050;
    }
    ctx->pc = 0x1D8048u;
    {
        const bool branch_taken_0x1d8048 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8048) {
            ctx->pc = 0x1D8054u;
            goto label_1d8054;
        }
    }
    ctx->pc = 0x1D8050u;
label_1d8050:
    // 0x1d8050: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d8050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d8054:
    // 0x1d8054: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1d8058:
    if (ctx->pc == 0x1D8058u) {
        ctx->pc = 0x1D805Cu;
        goto label_1d805c;
    }
    ctx->pc = 0x1D8054u;
    {
        const bool branch_taken_0x1d8054 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8054) {
            ctx->pc = 0x1D8094u;
            goto label_1d8094;
        }
    }
    ctx->pc = 0x1D805Cu;
label_1d805c:
    // 0x1d805c: 0x820211aa  lb          $v0, 0x11AA($s0)
    ctx->pc = 0x1d805cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_1d8060:
    // 0x1d8060: 0x40102a  slt         $v0, $v0, $zero
    ctx->pc = 0x1d8060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_1d8064:
    // 0x1d8064: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d8064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d8068:
    // 0x1d8068: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1d806c:
    if (ctx->pc == 0x1D806Cu) {
        ctx->pc = 0x1D8070u;
        goto label_1d8070;
    }
    ctx->pc = 0x1D8068u;
    {
        const bool branch_taken_0x1d8068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d8068) {
            ctx->pc = 0x1D8088u;
            goto label_1d8088;
        }
    }
    ctx->pc = 0x1D8070u;
label_1d8070:
    // 0x1d8070: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1d8070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1d8074:
    // 0x1d8074: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1d8074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1d8078:
    // 0x1d8078: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x1d8078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
label_1d807c:
    // 0x1d807c: 0x401027  not         $v0, $v0
    ctx->pc = 0x1d807cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
label_1d8080:
    // 0x1d8080: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8080u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8084:
    // 0x1d8084: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1d8084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1d8088:
    // 0x1d8088: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1d808c:
    if (ctx->pc == 0x1D808Cu) {
        ctx->pc = 0x1D8090u;
        goto label_1d8090;
    }
    ctx->pc = 0x1D8088u;
    {
        const bool branch_taken_0x1d8088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8088) {
            ctx->pc = 0x1D8094u;
            goto label_1d8094;
        }
    }
    ctx->pc = 0x1D8090u;
label_1d8090:
    // 0x1d8090: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8094:
    // 0x1d8094: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_1d8098:
    if (ctx->pc == 0x1D8098u) {
        ctx->pc = 0x1D809Cu;
        goto label_1d809c;
    }
    ctx->pc = 0x1D8094u;
    {
        const bool branch_taken_0x1d8094 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d8094) {
            ctx->pc = 0x1D80A8u;
            goto label_1d80a8;
        }
    }
    ctx->pc = 0x1D809Cu;
label_1d809c:
    // 0x1d809c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1d809cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d80a0:
    // 0x1d80a0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_1d80a4:
    if (ctx->pc == 0x1D80A4u) {
        ctx->pc = 0x1D80A8u;
        goto label_1d80a8;
    }
    ctx->pc = 0x1D80A0u;
    {
        const bool branch_taken_0x1d80a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d80a0) {
            ctx->pc = 0x1D80B4u;
            goto label_1d80b4;
        }
    }
    ctx->pc = 0x1D80A8u;
label_1d80a8:
    // 0x1d80a8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x1d80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_1d80ac:
    // 0x1d80ac: 0xc073234  jal         func_1CC8D0
label_1d80b0:
    if (ctx->pc == 0x1D80B0u) {
        ctx->pc = 0x1D80B0u;
            // 0x1d80b0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x1D80B4u;
        goto label_1d80b4;
    }
    ctx->pc = 0x1D80ACu;
    SET_GPR_U32(ctx, 31, 0x1D80B4u);
    ctx->pc = 0x1D80B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80ACu;
            // 0x1d80b0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80B4u; }
        if (ctx->pc != 0x1D80B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80B4u; }
        if (ctx->pc != 0x1D80B4u) { return; }
    }
    ctx->pc = 0x1D80B4u;
label_1d80b4:
    // 0x1d80b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d80b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d80b8:
    // 0x1d80b8: 0x0  nop
    ctx->pc = 0x1d80b8u;
    // NOP
label_1d80bc:
    // 0x1d80bc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1d80bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d80c0:
    // 0x1d80c0: 0x45030029  bc1tl       . + 4 + (0x29 << 2)
label_1d80c4:
    if (ctx->pc == 0x1D80C4u) {
        ctx->pc = 0x1D80C4u;
            // 0x1d80c4: 0x3c023e3d  lui         $v0, 0x3E3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15933 << 16));
        ctx->pc = 0x1D80C8u;
        goto label_1d80c8;
    }
    ctx->pc = 0x1D80C0u;
    {
        const bool branch_taken_0x1d80c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d80c0) {
            ctx->pc = 0x1D80C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80C0u;
            // 0x1d80c4: 0x3c023e3d  lui         $v0, 0x3E3D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15933 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8168u;
            goto label_1d8168;
        }
    }
    ctx->pc = 0x1D80C8u;
label_1d80c8:
    // 0x1d80c8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1d80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d80cc:
    // 0x1d80cc: 0xc04ccf4  jal         func_1333D0
label_1d80d0:
    if (ctx->pc == 0x1D80D0u) {
        ctx->pc = 0x1D80D0u;
            // 0x1d80d0: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x1D80D4u;
        goto label_1d80d4;
    }
    ctx->pc = 0x1D80CCu;
    SET_GPR_U32(ctx, 31, 0x1D80D4u);
    ctx->pc = 0x1D80D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80CCu;
            // 0x1d80d0: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80D4u; }
        if (ctx->pc != 0x1D80D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80D4u; }
        if (ctx->pc != 0x1D80D4u) { return; }
    }
    ctx->pc = 0x1D80D4u;
label_1d80d4:
    // 0x1d80d4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1d80d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d80d8:
    // 0x1d80d8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x1d80d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1d80dc:
    // 0x1d80dc: 0xc04cca0  jal         func_133280
label_1d80e0:
    if (ctx->pc == 0x1D80E0u) {
        ctx->pc = 0x1D80E0u;
            // 0x1d80e0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D80E4u;
        goto label_1d80e4;
    }
    ctx->pc = 0x1D80DCu;
    SET_GPR_U32(ctx, 31, 0x1D80E4u);
    ctx->pc = 0x1D80E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80DCu;
            // 0x1d80e0: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80E4u; }
        if (ctx->pc != 0x1D80E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D80E4u; }
        if (ctx->pc != 0x1D80E4u) { return; }
    }
    ctx->pc = 0x1D80E4u;
label_1d80e4:
    // 0x1d80e4: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1d80e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d80e8:
    // 0x1d80e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d80e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d80ec:
    // 0x1d80ec: 0x0  nop
    ctx->pc = 0x1d80ecu;
    // NOP
label_1d80f0:
    // 0x1d80f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1d80f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1d80f4:
    // 0x1d80f4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1d80f8:
    if (ctx->pc == 0x1D80F8u) {
        ctx->pc = 0x1D80F8u;
            // 0x1d80f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D80FCu;
        goto label_1d80fc;
    }
    ctx->pc = 0x1D80F4u;
    {
        const bool branch_taken_0x1d80f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D80F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D80F4u;
            // 0x1d80f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d80f4) {
            ctx->pc = 0x1D8100u;
            goto label_1d8100;
        }
    }
    ctx->pc = 0x1D80FCu;
label_1d80fc:
    // 0x1d80fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d80fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d8100:
    // 0x1d8100: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_1d8104:
    if (ctx->pc == 0x1D8104u) {
        ctx->pc = 0x1D8104u;
            // 0x1d8104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1D8108u;
        goto label_1d8108;
    }
    ctx->pc = 0x1D8100u;
    {
        const bool branch_taken_0x1d8100 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1d8100) {
            ctx->pc = 0x1D8104u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8100u;
            // 0x1d8104: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D8114u;
            goto label_1d8114;
        }
    }
    ctx->pc = 0x1D8108u;
label_1d8108:
    // 0x1d8108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d8108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d810c:
    // 0x1d810c: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d8110:
    if (ctx->pc == 0x1D8110u) {
        ctx->pc = 0x1D8110u;
            // 0x1d8110: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1D8114u;
        goto label_1d8114;
    }
    ctx->pc = 0x1D810Cu;
    {
        const bool branch_taken_0x1d810c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D8110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D810Cu;
            // 0x1d8110: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d810c) {
            ctx->pc = 0x1D812Cu;
            goto label_1d812c;
        }
    }
    ctx->pc = 0x1D8114u;
label_1d8114:
    // 0x1d8114: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d8114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d8118:
    // 0x1d8118: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d8118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d811c:
    // 0x1d811c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d811cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8120:
    // 0x1d8120: 0x0  nop
    ctx->pc = 0x1d8120u;
    // NOP
label_1d8124:
    // 0x1d8124: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x1d8124u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_1d8128:
    // 0x1d8128: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x1d8128u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_1d812c:
    // 0x1d812c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1d812cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1d8130:
    // 0x1d8130: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1d8130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1d8134:
    // 0x1d8134: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1d8134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1d8138:
    // 0x1d8138: 0x262507e0  addiu       $a1, $s1, 0x7E0
    ctx->pc = 0x1d8138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
label_1d813c:
    // 0x1d813c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1d813cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1d8140:
    // 0x1d8140: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1d8140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1d8144:
    // 0x1d8144: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1d8144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1d8148:
    // 0x1d8148: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x1d8148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
label_1d814c:
    // 0x1d814c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1d814cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1d8150:
    // 0x1d8150: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x1d8150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
label_1d8154:
    // 0x1d8154: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x1d8154u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1d8158:
    // 0x1d8158: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x1d8158u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1d815c:
    // 0x1d815c: 0xc04cca0  jal         func_133280
label_1d8160:
    if (ctx->pc == 0x1D8160u) {
        ctx->pc = 0x1D8160u;
            // 0x1d8160: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->pc = 0x1D8164u;
        goto label_1d8164;
    }
    ctx->pc = 0x1D815Cu;
    SET_GPR_U32(ctx, 31, 0x1D8164u);
    ctx->pc = 0x1D8160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D815Cu;
            // 0x1d8160: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8164u; }
        if (ctx->pc != 0x1D8164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8164u; }
        if (ctx->pc != 0x1D8164u) { return; }
    }
    ctx->pc = 0x1D8164u;
label_1d8164:
    // 0x1d8164: 0x3c023e3d  lui         $v0, 0x3E3D
    ctx->pc = 0x1d8164u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15933 << 16));
label_1d8168:
    // 0x1d8168: 0x26240360  addiu       $a0, $s1, 0x360
    ctx->pc = 0x1d8168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
label_1d816c:
    // 0x1d816c: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x1d816cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_1d8170:
    // 0x1d8170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8174:
    // 0x1d8174: 0xc04cc70  jal         func_1331C0
label_1d8178:
    if (ctx->pc == 0x1D8178u) {
        ctx->pc = 0x1D8178u;
            // 0x1d8178: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1D817Cu;
        goto label_1d817c;
    }
    ctx->pc = 0x1D8174u;
    SET_GPR_U32(ctx, 31, 0x1D817Cu);
    ctx->pc = 0x1D8178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8174u;
            // 0x1d8178: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D817Cu; }
        if (ctx->pc != 0x1D817Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D817Cu; }
        if (ctx->pc != 0x1D817Cu) { return; }
    }
    ctx->pc = 0x1D817Cu;
label_1d817c:
    // 0x1d817c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x1d817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_1d8180:
    // 0x1d8180: 0x26240370  addiu       $a0, $s1, 0x370
    ctx->pc = 0x1d8180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 880));
label_1d8184:
    // 0x1d8184: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1d8184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1d8188:
    // 0x1d8188: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1d8188u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d818c:
    // 0x1d818c: 0xc04cc70  jal         func_1331C0
label_1d8190:
    if (ctx->pc == 0x1D8190u) {
        ctx->pc = 0x1D8190u;
            // 0x1d8190: 0x26250360  addiu       $a1, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->pc = 0x1D8194u;
        goto label_1d8194;
    }
    ctx->pc = 0x1D818Cu;
    SET_GPR_U32(ctx, 31, 0x1D8194u);
    ctx->pc = 0x1D8190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D818Cu;
            // 0x1d8190: 0x26250360  addiu       $a1, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8194u; }
        if (ctx->pc != 0x1D8194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D8194u; }
        if (ctx->pc != 0x1D8194u) { return; }
    }
    ctx->pc = 0x1D8194u;
label_1d8194:
    // 0x1d8194: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1d8194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_1d8198:
    // 0x1d8198: 0xae230e2c  sw          $v1, 0xE2C($s1)
    ctx->pc = 0x1d8198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3628), GPR_U32(ctx, 3));
label_1d819c:
    // 0x1d819c: 0x8e230d70  lw          $v1, 0xD70($s1)
    ctx->pc = 0x1d819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_1d81a0:
    // 0x1d81a0: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x1d81a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_1d81a4:
    // 0x1d81a4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_1d81a8:
    if (ctx->pc == 0x1D81A8u) {
        ctx->pc = 0x1D81ACu;
        goto label_1d81ac;
    }
    ctx->pc = 0x1D81A4u;
    {
        const bool branch_taken_0x1d81a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d81a4) {
            ctx->pc = 0x1D8238u;
            goto label_1d8238;
        }
    }
    ctx->pc = 0x1D81ACu;
label_1d81ac:
    // 0x1d81ac: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x1d81acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_1d81b0:
    // 0x1d81b0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1d81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1d81b4:
    // 0x1d81b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1d81b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1d81b8:
    // 0x1d81b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d81b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d81bc:
    // 0x1d81bc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1d81bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d81c0:
    // 0x1d81c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d81c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d81c4:
    // 0x1d81c4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x1d81c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_1d81c8:
    // 0x1d81c8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d81c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d81cc:
    // 0x1d81cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d81ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d81d0:
    // 0x1d81d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1d81d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1d81d4:
    // 0x1d81d4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1d81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d81d8:
    // 0x1d81d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d81d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d81dc:
    // 0x1d81dc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1d81dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_1d81e0:
    // 0x1d81e0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1d81e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d81e4:
    // 0x1d81e4: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x1d81e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_1d81e8:
    // 0x1d81e8: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x1d81e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1d81ec:
    // 0x1d81ec: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x1d81ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_1d81f0:
    // 0x1d81f0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d81f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d81f4:
    // 0x1d81f4: 0x320f809  jalr        $t9
label_1d81f8:
    if (ctx->pc == 0x1D81F8u) {
        ctx->pc = 0x1D81F8u;
            // 0x1d81f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1D81FCu;
        goto label_1d81fc;
    }
    ctx->pc = 0x1D81F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D81FCu);
        ctx->pc = 0x1D81F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D81F4u;
            // 0x1d81f8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D81FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D81FCu; }
            if (ctx->pc != 0x1D81FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D81FCu;
label_1d81fc:
    // 0x1d81fc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x1d81fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1d8200:
    // 0x1d8200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1d8200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d8204:
    // 0x1d8204: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x1d8204u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_1d8208:
    // 0x1d8208: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d820c:
    // 0x1d820c: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x1d820cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_1d8210:
    // 0x1d8210: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1d8210u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d8214:
    // 0x1d8214: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x1d8214u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_1d8218:
    // 0x1d8218: 0x320f809  jalr        $t9
label_1d821c:
    if (ctx->pc == 0x1D821Cu) {
        ctx->pc = 0x1D821Cu;
            // 0x1d821c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1D8220u;
        goto label_1d8220;
    }
    ctx->pc = 0x1D8218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8220u);
        ctx->pc = 0x1D821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8218u;
            // 0x1d821c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8220u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8220u; }
            if (ctx->pc != 0x1D8220u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8220u;
label_1d8220:
    // 0x1d8220: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x1d8220u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1d8224:
    // 0x1d8224: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d8224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d8228:
    // 0x1d8228: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d8228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d822c:
    // 0x1d822c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x1d822cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_1d8230:
    // 0x1d8230: 0x320f809  jalr        $t9
label_1d8234:
    if (ctx->pc == 0x1D8234u) {
        ctx->pc = 0x1D8234u;
            // 0x1d8234: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1D8238u;
        goto label_1d8238;
    }
    ctx->pc = 0x1D8230u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D8238u);
        ctx->pc = 0x1D8234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8230u;
            // 0x1d8234: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D8238u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D8238u; }
            if (ctx->pc != 0x1D8238u) { return; }
        }
        }
    }
    ctx->pc = 0x1D8238u;
label_1d8238:
    // 0x1d8238: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d8238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1d823c:
    // 0x1d823c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1d823cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1d8240:
    // 0x1d8240: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1d8240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d8244:
    // 0x1d8244: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1d8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1d8248:
    // 0x1d8248: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d8248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d824c:
    // 0x1d824c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1d824cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1d8250:
    // 0x1d8250: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1d8250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d8254:
    // 0x1d8254: 0x3e00008  jr          $ra
label_1d8258:
    if (ctx->pc == 0x1D8258u) {
        ctx->pc = 0x1D8258u;
            // 0x1d8258: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1D825Cu;
        goto label_1d825c;
    }
    ctx->pc = 0x1D8254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D8254u;
            // 0x1d8258: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D825Cu;
label_1d825c:
    // 0x1d825c: 0x0  nop
    ctx->pc = 0x1d825cu;
    // NOP
}
