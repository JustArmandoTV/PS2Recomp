#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003C7D90
// Address: 0x3c7d90 - 0x3c85e0
void sub_003C7D90_0x3c7d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7D90_0x3c7d90");
#endif

    switch (ctx->pc) {
        case 0x3c7d90u: goto label_3c7d90;
        case 0x3c7d94u: goto label_3c7d94;
        case 0x3c7d98u: goto label_3c7d98;
        case 0x3c7d9cu: goto label_3c7d9c;
        case 0x3c7da0u: goto label_3c7da0;
        case 0x3c7da4u: goto label_3c7da4;
        case 0x3c7da8u: goto label_3c7da8;
        case 0x3c7dacu: goto label_3c7dac;
        case 0x3c7db0u: goto label_3c7db0;
        case 0x3c7db4u: goto label_3c7db4;
        case 0x3c7db8u: goto label_3c7db8;
        case 0x3c7dbcu: goto label_3c7dbc;
        case 0x3c7dc0u: goto label_3c7dc0;
        case 0x3c7dc4u: goto label_3c7dc4;
        case 0x3c7dc8u: goto label_3c7dc8;
        case 0x3c7dccu: goto label_3c7dcc;
        case 0x3c7dd0u: goto label_3c7dd0;
        case 0x3c7dd4u: goto label_3c7dd4;
        case 0x3c7dd8u: goto label_3c7dd8;
        case 0x3c7ddcu: goto label_3c7ddc;
        case 0x3c7de0u: goto label_3c7de0;
        case 0x3c7de4u: goto label_3c7de4;
        case 0x3c7de8u: goto label_3c7de8;
        case 0x3c7decu: goto label_3c7dec;
        case 0x3c7df0u: goto label_3c7df0;
        case 0x3c7df4u: goto label_3c7df4;
        case 0x3c7df8u: goto label_3c7df8;
        case 0x3c7dfcu: goto label_3c7dfc;
        case 0x3c7e00u: goto label_3c7e00;
        case 0x3c7e04u: goto label_3c7e04;
        case 0x3c7e08u: goto label_3c7e08;
        case 0x3c7e0cu: goto label_3c7e0c;
        case 0x3c7e10u: goto label_3c7e10;
        case 0x3c7e14u: goto label_3c7e14;
        case 0x3c7e18u: goto label_3c7e18;
        case 0x3c7e1cu: goto label_3c7e1c;
        case 0x3c7e20u: goto label_3c7e20;
        case 0x3c7e24u: goto label_3c7e24;
        case 0x3c7e28u: goto label_3c7e28;
        case 0x3c7e2cu: goto label_3c7e2c;
        case 0x3c7e30u: goto label_3c7e30;
        case 0x3c7e34u: goto label_3c7e34;
        case 0x3c7e38u: goto label_3c7e38;
        case 0x3c7e3cu: goto label_3c7e3c;
        case 0x3c7e40u: goto label_3c7e40;
        case 0x3c7e44u: goto label_3c7e44;
        case 0x3c7e48u: goto label_3c7e48;
        case 0x3c7e4cu: goto label_3c7e4c;
        case 0x3c7e50u: goto label_3c7e50;
        case 0x3c7e54u: goto label_3c7e54;
        case 0x3c7e58u: goto label_3c7e58;
        case 0x3c7e5cu: goto label_3c7e5c;
        case 0x3c7e60u: goto label_3c7e60;
        case 0x3c7e64u: goto label_3c7e64;
        case 0x3c7e68u: goto label_3c7e68;
        case 0x3c7e6cu: goto label_3c7e6c;
        case 0x3c7e70u: goto label_3c7e70;
        case 0x3c7e74u: goto label_3c7e74;
        case 0x3c7e78u: goto label_3c7e78;
        case 0x3c7e7cu: goto label_3c7e7c;
        case 0x3c7e80u: goto label_3c7e80;
        case 0x3c7e84u: goto label_3c7e84;
        case 0x3c7e88u: goto label_3c7e88;
        case 0x3c7e8cu: goto label_3c7e8c;
        case 0x3c7e90u: goto label_3c7e90;
        case 0x3c7e94u: goto label_3c7e94;
        case 0x3c7e98u: goto label_3c7e98;
        case 0x3c7e9cu: goto label_3c7e9c;
        case 0x3c7ea0u: goto label_3c7ea0;
        case 0x3c7ea4u: goto label_3c7ea4;
        case 0x3c7ea8u: goto label_3c7ea8;
        case 0x3c7eacu: goto label_3c7eac;
        case 0x3c7eb0u: goto label_3c7eb0;
        case 0x3c7eb4u: goto label_3c7eb4;
        case 0x3c7eb8u: goto label_3c7eb8;
        case 0x3c7ebcu: goto label_3c7ebc;
        case 0x3c7ec0u: goto label_3c7ec0;
        case 0x3c7ec4u: goto label_3c7ec4;
        case 0x3c7ec8u: goto label_3c7ec8;
        case 0x3c7eccu: goto label_3c7ecc;
        case 0x3c7ed0u: goto label_3c7ed0;
        case 0x3c7ed4u: goto label_3c7ed4;
        case 0x3c7ed8u: goto label_3c7ed8;
        case 0x3c7edcu: goto label_3c7edc;
        case 0x3c7ee0u: goto label_3c7ee0;
        case 0x3c7ee4u: goto label_3c7ee4;
        case 0x3c7ee8u: goto label_3c7ee8;
        case 0x3c7eecu: goto label_3c7eec;
        case 0x3c7ef0u: goto label_3c7ef0;
        case 0x3c7ef4u: goto label_3c7ef4;
        case 0x3c7ef8u: goto label_3c7ef8;
        case 0x3c7efcu: goto label_3c7efc;
        case 0x3c7f00u: goto label_3c7f00;
        case 0x3c7f04u: goto label_3c7f04;
        case 0x3c7f08u: goto label_3c7f08;
        case 0x3c7f0cu: goto label_3c7f0c;
        case 0x3c7f10u: goto label_3c7f10;
        case 0x3c7f14u: goto label_3c7f14;
        case 0x3c7f18u: goto label_3c7f18;
        case 0x3c7f1cu: goto label_3c7f1c;
        case 0x3c7f20u: goto label_3c7f20;
        case 0x3c7f24u: goto label_3c7f24;
        case 0x3c7f28u: goto label_3c7f28;
        case 0x3c7f2cu: goto label_3c7f2c;
        case 0x3c7f30u: goto label_3c7f30;
        case 0x3c7f34u: goto label_3c7f34;
        case 0x3c7f38u: goto label_3c7f38;
        case 0x3c7f3cu: goto label_3c7f3c;
        case 0x3c7f40u: goto label_3c7f40;
        case 0x3c7f44u: goto label_3c7f44;
        case 0x3c7f48u: goto label_3c7f48;
        case 0x3c7f4cu: goto label_3c7f4c;
        case 0x3c7f50u: goto label_3c7f50;
        case 0x3c7f54u: goto label_3c7f54;
        case 0x3c7f58u: goto label_3c7f58;
        case 0x3c7f5cu: goto label_3c7f5c;
        case 0x3c7f60u: goto label_3c7f60;
        case 0x3c7f64u: goto label_3c7f64;
        case 0x3c7f68u: goto label_3c7f68;
        case 0x3c7f6cu: goto label_3c7f6c;
        case 0x3c7f70u: goto label_3c7f70;
        case 0x3c7f74u: goto label_3c7f74;
        case 0x3c7f78u: goto label_3c7f78;
        case 0x3c7f7cu: goto label_3c7f7c;
        case 0x3c7f80u: goto label_3c7f80;
        case 0x3c7f84u: goto label_3c7f84;
        case 0x3c7f88u: goto label_3c7f88;
        case 0x3c7f8cu: goto label_3c7f8c;
        case 0x3c7f90u: goto label_3c7f90;
        case 0x3c7f94u: goto label_3c7f94;
        case 0x3c7f98u: goto label_3c7f98;
        case 0x3c7f9cu: goto label_3c7f9c;
        case 0x3c7fa0u: goto label_3c7fa0;
        case 0x3c7fa4u: goto label_3c7fa4;
        case 0x3c7fa8u: goto label_3c7fa8;
        case 0x3c7facu: goto label_3c7fac;
        case 0x3c7fb0u: goto label_3c7fb0;
        case 0x3c7fb4u: goto label_3c7fb4;
        case 0x3c7fb8u: goto label_3c7fb8;
        case 0x3c7fbcu: goto label_3c7fbc;
        case 0x3c7fc0u: goto label_3c7fc0;
        case 0x3c7fc4u: goto label_3c7fc4;
        case 0x3c7fc8u: goto label_3c7fc8;
        case 0x3c7fccu: goto label_3c7fcc;
        case 0x3c7fd0u: goto label_3c7fd0;
        case 0x3c7fd4u: goto label_3c7fd4;
        case 0x3c7fd8u: goto label_3c7fd8;
        case 0x3c7fdcu: goto label_3c7fdc;
        case 0x3c7fe0u: goto label_3c7fe0;
        case 0x3c7fe4u: goto label_3c7fe4;
        case 0x3c7fe8u: goto label_3c7fe8;
        case 0x3c7fecu: goto label_3c7fec;
        case 0x3c7ff0u: goto label_3c7ff0;
        case 0x3c7ff4u: goto label_3c7ff4;
        case 0x3c7ff8u: goto label_3c7ff8;
        case 0x3c7ffcu: goto label_3c7ffc;
        case 0x3c8000u: goto label_3c8000;
        case 0x3c8004u: goto label_3c8004;
        case 0x3c8008u: goto label_3c8008;
        case 0x3c800cu: goto label_3c800c;
        case 0x3c8010u: goto label_3c8010;
        case 0x3c8014u: goto label_3c8014;
        case 0x3c8018u: goto label_3c8018;
        case 0x3c801cu: goto label_3c801c;
        case 0x3c8020u: goto label_3c8020;
        case 0x3c8024u: goto label_3c8024;
        case 0x3c8028u: goto label_3c8028;
        case 0x3c802cu: goto label_3c802c;
        case 0x3c8030u: goto label_3c8030;
        case 0x3c8034u: goto label_3c8034;
        case 0x3c8038u: goto label_3c8038;
        case 0x3c803cu: goto label_3c803c;
        case 0x3c8040u: goto label_3c8040;
        case 0x3c8044u: goto label_3c8044;
        case 0x3c8048u: goto label_3c8048;
        case 0x3c804cu: goto label_3c804c;
        case 0x3c8050u: goto label_3c8050;
        case 0x3c8054u: goto label_3c8054;
        case 0x3c8058u: goto label_3c8058;
        case 0x3c805cu: goto label_3c805c;
        case 0x3c8060u: goto label_3c8060;
        case 0x3c8064u: goto label_3c8064;
        case 0x3c8068u: goto label_3c8068;
        case 0x3c806cu: goto label_3c806c;
        case 0x3c8070u: goto label_3c8070;
        case 0x3c8074u: goto label_3c8074;
        case 0x3c8078u: goto label_3c8078;
        case 0x3c807cu: goto label_3c807c;
        case 0x3c8080u: goto label_3c8080;
        case 0x3c8084u: goto label_3c8084;
        case 0x3c8088u: goto label_3c8088;
        case 0x3c808cu: goto label_3c808c;
        case 0x3c8090u: goto label_3c8090;
        case 0x3c8094u: goto label_3c8094;
        case 0x3c8098u: goto label_3c8098;
        case 0x3c809cu: goto label_3c809c;
        case 0x3c80a0u: goto label_3c80a0;
        case 0x3c80a4u: goto label_3c80a4;
        case 0x3c80a8u: goto label_3c80a8;
        case 0x3c80acu: goto label_3c80ac;
        case 0x3c80b0u: goto label_3c80b0;
        case 0x3c80b4u: goto label_3c80b4;
        case 0x3c80b8u: goto label_3c80b8;
        case 0x3c80bcu: goto label_3c80bc;
        case 0x3c80c0u: goto label_3c80c0;
        case 0x3c80c4u: goto label_3c80c4;
        case 0x3c80c8u: goto label_3c80c8;
        case 0x3c80ccu: goto label_3c80cc;
        case 0x3c80d0u: goto label_3c80d0;
        case 0x3c80d4u: goto label_3c80d4;
        case 0x3c80d8u: goto label_3c80d8;
        case 0x3c80dcu: goto label_3c80dc;
        case 0x3c80e0u: goto label_3c80e0;
        case 0x3c80e4u: goto label_3c80e4;
        case 0x3c80e8u: goto label_3c80e8;
        case 0x3c80ecu: goto label_3c80ec;
        case 0x3c80f0u: goto label_3c80f0;
        case 0x3c80f4u: goto label_3c80f4;
        case 0x3c80f8u: goto label_3c80f8;
        case 0x3c80fcu: goto label_3c80fc;
        case 0x3c8100u: goto label_3c8100;
        case 0x3c8104u: goto label_3c8104;
        case 0x3c8108u: goto label_3c8108;
        case 0x3c810cu: goto label_3c810c;
        case 0x3c8110u: goto label_3c8110;
        case 0x3c8114u: goto label_3c8114;
        case 0x3c8118u: goto label_3c8118;
        case 0x3c811cu: goto label_3c811c;
        case 0x3c8120u: goto label_3c8120;
        case 0x3c8124u: goto label_3c8124;
        case 0x3c8128u: goto label_3c8128;
        case 0x3c812cu: goto label_3c812c;
        case 0x3c8130u: goto label_3c8130;
        case 0x3c8134u: goto label_3c8134;
        case 0x3c8138u: goto label_3c8138;
        case 0x3c813cu: goto label_3c813c;
        case 0x3c8140u: goto label_3c8140;
        case 0x3c8144u: goto label_3c8144;
        case 0x3c8148u: goto label_3c8148;
        case 0x3c814cu: goto label_3c814c;
        case 0x3c8150u: goto label_3c8150;
        case 0x3c8154u: goto label_3c8154;
        case 0x3c8158u: goto label_3c8158;
        case 0x3c815cu: goto label_3c815c;
        case 0x3c8160u: goto label_3c8160;
        case 0x3c8164u: goto label_3c8164;
        case 0x3c8168u: goto label_3c8168;
        case 0x3c816cu: goto label_3c816c;
        case 0x3c8170u: goto label_3c8170;
        case 0x3c8174u: goto label_3c8174;
        case 0x3c8178u: goto label_3c8178;
        case 0x3c817cu: goto label_3c817c;
        case 0x3c8180u: goto label_3c8180;
        case 0x3c8184u: goto label_3c8184;
        case 0x3c8188u: goto label_3c8188;
        case 0x3c818cu: goto label_3c818c;
        case 0x3c8190u: goto label_3c8190;
        case 0x3c8194u: goto label_3c8194;
        case 0x3c8198u: goto label_3c8198;
        case 0x3c819cu: goto label_3c819c;
        case 0x3c81a0u: goto label_3c81a0;
        case 0x3c81a4u: goto label_3c81a4;
        case 0x3c81a8u: goto label_3c81a8;
        case 0x3c81acu: goto label_3c81ac;
        case 0x3c81b0u: goto label_3c81b0;
        case 0x3c81b4u: goto label_3c81b4;
        case 0x3c81b8u: goto label_3c81b8;
        case 0x3c81bcu: goto label_3c81bc;
        case 0x3c81c0u: goto label_3c81c0;
        case 0x3c81c4u: goto label_3c81c4;
        case 0x3c81c8u: goto label_3c81c8;
        case 0x3c81ccu: goto label_3c81cc;
        case 0x3c81d0u: goto label_3c81d0;
        case 0x3c81d4u: goto label_3c81d4;
        case 0x3c81d8u: goto label_3c81d8;
        case 0x3c81dcu: goto label_3c81dc;
        case 0x3c81e0u: goto label_3c81e0;
        case 0x3c81e4u: goto label_3c81e4;
        case 0x3c81e8u: goto label_3c81e8;
        case 0x3c81ecu: goto label_3c81ec;
        case 0x3c81f0u: goto label_3c81f0;
        case 0x3c81f4u: goto label_3c81f4;
        case 0x3c81f8u: goto label_3c81f8;
        case 0x3c81fcu: goto label_3c81fc;
        case 0x3c8200u: goto label_3c8200;
        case 0x3c8204u: goto label_3c8204;
        case 0x3c8208u: goto label_3c8208;
        case 0x3c820cu: goto label_3c820c;
        case 0x3c8210u: goto label_3c8210;
        case 0x3c8214u: goto label_3c8214;
        case 0x3c8218u: goto label_3c8218;
        case 0x3c821cu: goto label_3c821c;
        case 0x3c8220u: goto label_3c8220;
        case 0x3c8224u: goto label_3c8224;
        case 0x3c8228u: goto label_3c8228;
        case 0x3c822cu: goto label_3c822c;
        case 0x3c8230u: goto label_3c8230;
        case 0x3c8234u: goto label_3c8234;
        case 0x3c8238u: goto label_3c8238;
        case 0x3c823cu: goto label_3c823c;
        case 0x3c8240u: goto label_3c8240;
        case 0x3c8244u: goto label_3c8244;
        case 0x3c8248u: goto label_3c8248;
        case 0x3c824cu: goto label_3c824c;
        case 0x3c8250u: goto label_3c8250;
        case 0x3c8254u: goto label_3c8254;
        case 0x3c8258u: goto label_3c8258;
        case 0x3c825cu: goto label_3c825c;
        case 0x3c8260u: goto label_3c8260;
        case 0x3c8264u: goto label_3c8264;
        case 0x3c8268u: goto label_3c8268;
        case 0x3c826cu: goto label_3c826c;
        case 0x3c8270u: goto label_3c8270;
        case 0x3c8274u: goto label_3c8274;
        case 0x3c8278u: goto label_3c8278;
        case 0x3c827cu: goto label_3c827c;
        case 0x3c8280u: goto label_3c8280;
        case 0x3c8284u: goto label_3c8284;
        case 0x3c8288u: goto label_3c8288;
        case 0x3c828cu: goto label_3c828c;
        case 0x3c8290u: goto label_3c8290;
        case 0x3c8294u: goto label_3c8294;
        case 0x3c8298u: goto label_3c8298;
        case 0x3c829cu: goto label_3c829c;
        case 0x3c82a0u: goto label_3c82a0;
        case 0x3c82a4u: goto label_3c82a4;
        case 0x3c82a8u: goto label_3c82a8;
        case 0x3c82acu: goto label_3c82ac;
        case 0x3c82b0u: goto label_3c82b0;
        case 0x3c82b4u: goto label_3c82b4;
        case 0x3c82b8u: goto label_3c82b8;
        case 0x3c82bcu: goto label_3c82bc;
        case 0x3c82c0u: goto label_3c82c0;
        case 0x3c82c4u: goto label_3c82c4;
        case 0x3c82c8u: goto label_3c82c8;
        case 0x3c82ccu: goto label_3c82cc;
        case 0x3c82d0u: goto label_3c82d0;
        case 0x3c82d4u: goto label_3c82d4;
        case 0x3c82d8u: goto label_3c82d8;
        case 0x3c82dcu: goto label_3c82dc;
        case 0x3c82e0u: goto label_3c82e0;
        case 0x3c82e4u: goto label_3c82e4;
        case 0x3c82e8u: goto label_3c82e8;
        case 0x3c82ecu: goto label_3c82ec;
        case 0x3c82f0u: goto label_3c82f0;
        case 0x3c82f4u: goto label_3c82f4;
        case 0x3c82f8u: goto label_3c82f8;
        case 0x3c82fcu: goto label_3c82fc;
        case 0x3c8300u: goto label_3c8300;
        case 0x3c8304u: goto label_3c8304;
        case 0x3c8308u: goto label_3c8308;
        case 0x3c830cu: goto label_3c830c;
        case 0x3c8310u: goto label_3c8310;
        case 0x3c8314u: goto label_3c8314;
        case 0x3c8318u: goto label_3c8318;
        case 0x3c831cu: goto label_3c831c;
        case 0x3c8320u: goto label_3c8320;
        case 0x3c8324u: goto label_3c8324;
        case 0x3c8328u: goto label_3c8328;
        case 0x3c832cu: goto label_3c832c;
        case 0x3c8330u: goto label_3c8330;
        case 0x3c8334u: goto label_3c8334;
        case 0x3c8338u: goto label_3c8338;
        case 0x3c833cu: goto label_3c833c;
        case 0x3c8340u: goto label_3c8340;
        case 0x3c8344u: goto label_3c8344;
        case 0x3c8348u: goto label_3c8348;
        case 0x3c834cu: goto label_3c834c;
        case 0x3c8350u: goto label_3c8350;
        case 0x3c8354u: goto label_3c8354;
        case 0x3c8358u: goto label_3c8358;
        case 0x3c835cu: goto label_3c835c;
        case 0x3c8360u: goto label_3c8360;
        case 0x3c8364u: goto label_3c8364;
        case 0x3c8368u: goto label_3c8368;
        case 0x3c836cu: goto label_3c836c;
        case 0x3c8370u: goto label_3c8370;
        case 0x3c8374u: goto label_3c8374;
        case 0x3c8378u: goto label_3c8378;
        case 0x3c837cu: goto label_3c837c;
        case 0x3c8380u: goto label_3c8380;
        case 0x3c8384u: goto label_3c8384;
        case 0x3c8388u: goto label_3c8388;
        case 0x3c838cu: goto label_3c838c;
        case 0x3c8390u: goto label_3c8390;
        case 0x3c8394u: goto label_3c8394;
        case 0x3c8398u: goto label_3c8398;
        case 0x3c839cu: goto label_3c839c;
        case 0x3c83a0u: goto label_3c83a0;
        case 0x3c83a4u: goto label_3c83a4;
        case 0x3c83a8u: goto label_3c83a8;
        case 0x3c83acu: goto label_3c83ac;
        case 0x3c83b0u: goto label_3c83b0;
        case 0x3c83b4u: goto label_3c83b4;
        case 0x3c83b8u: goto label_3c83b8;
        case 0x3c83bcu: goto label_3c83bc;
        case 0x3c83c0u: goto label_3c83c0;
        case 0x3c83c4u: goto label_3c83c4;
        case 0x3c83c8u: goto label_3c83c8;
        case 0x3c83ccu: goto label_3c83cc;
        case 0x3c83d0u: goto label_3c83d0;
        case 0x3c83d4u: goto label_3c83d4;
        case 0x3c83d8u: goto label_3c83d8;
        case 0x3c83dcu: goto label_3c83dc;
        case 0x3c83e0u: goto label_3c83e0;
        case 0x3c83e4u: goto label_3c83e4;
        case 0x3c83e8u: goto label_3c83e8;
        case 0x3c83ecu: goto label_3c83ec;
        case 0x3c83f0u: goto label_3c83f0;
        case 0x3c83f4u: goto label_3c83f4;
        case 0x3c83f8u: goto label_3c83f8;
        case 0x3c83fcu: goto label_3c83fc;
        case 0x3c8400u: goto label_3c8400;
        case 0x3c8404u: goto label_3c8404;
        case 0x3c8408u: goto label_3c8408;
        case 0x3c840cu: goto label_3c840c;
        case 0x3c8410u: goto label_3c8410;
        case 0x3c8414u: goto label_3c8414;
        case 0x3c8418u: goto label_3c8418;
        case 0x3c841cu: goto label_3c841c;
        case 0x3c8420u: goto label_3c8420;
        case 0x3c8424u: goto label_3c8424;
        case 0x3c8428u: goto label_3c8428;
        case 0x3c842cu: goto label_3c842c;
        case 0x3c8430u: goto label_3c8430;
        case 0x3c8434u: goto label_3c8434;
        case 0x3c8438u: goto label_3c8438;
        case 0x3c843cu: goto label_3c843c;
        case 0x3c8440u: goto label_3c8440;
        case 0x3c8444u: goto label_3c8444;
        case 0x3c8448u: goto label_3c8448;
        case 0x3c844cu: goto label_3c844c;
        case 0x3c8450u: goto label_3c8450;
        case 0x3c8454u: goto label_3c8454;
        case 0x3c8458u: goto label_3c8458;
        case 0x3c845cu: goto label_3c845c;
        case 0x3c8460u: goto label_3c8460;
        case 0x3c8464u: goto label_3c8464;
        case 0x3c8468u: goto label_3c8468;
        case 0x3c846cu: goto label_3c846c;
        case 0x3c8470u: goto label_3c8470;
        case 0x3c8474u: goto label_3c8474;
        case 0x3c8478u: goto label_3c8478;
        case 0x3c847cu: goto label_3c847c;
        case 0x3c8480u: goto label_3c8480;
        case 0x3c8484u: goto label_3c8484;
        case 0x3c8488u: goto label_3c8488;
        case 0x3c848cu: goto label_3c848c;
        case 0x3c8490u: goto label_3c8490;
        case 0x3c8494u: goto label_3c8494;
        case 0x3c8498u: goto label_3c8498;
        case 0x3c849cu: goto label_3c849c;
        case 0x3c84a0u: goto label_3c84a0;
        case 0x3c84a4u: goto label_3c84a4;
        case 0x3c84a8u: goto label_3c84a8;
        case 0x3c84acu: goto label_3c84ac;
        case 0x3c84b0u: goto label_3c84b0;
        case 0x3c84b4u: goto label_3c84b4;
        case 0x3c84b8u: goto label_3c84b8;
        case 0x3c84bcu: goto label_3c84bc;
        case 0x3c84c0u: goto label_3c84c0;
        case 0x3c84c4u: goto label_3c84c4;
        case 0x3c84c8u: goto label_3c84c8;
        case 0x3c84ccu: goto label_3c84cc;
        case 0x3c84d0u: goto label_3c84d0;
        case 0x3c84d4u: goto label_3c84d4;
        case 0x3c84d8u: goto label_3c84d8;
        case 0x3c84dcu: goto label_3c84dc;
        case 0x3c84e0u: goto label_3c84e0;
        case 0x3c84e4u: goto label_3c84e4;
        case 0x3c84e8u: goto label_3c84e8;
        case 0x3c84ecu: goto label_3c84ec;
        case 0x3c84f0u: goto label_3c84f0;
        case 0x3c84f4u: goto label_3c84f4;
        case 0x3c84f8u: goto label_3c84f8;
        case 0x3c84fcu: goto label_3c84fc;
        case 0x3c8500u: goto label_3c8500;
        case 0x3c8504u: goto label_3c8504;
        case 0x3c8508u: goto label_3c8508;
        case 0x3c850cu: goto label_3c850c;
        case 0x3c8510u: goto label_3c8510;
        case 0x3c8514u: goto label_3c8514;
        case 0x3c8518u: goto label_3c8518;
        case 0x3c851cu: goto label_3c851c;
        case 0x3c8520u: goto label_3c8520;
        case 0x3c8524u: goto label_3c8524;
        case 0x3c8528u: goto label_3c8528;
        case 0x3c852cu: goto label_3c852c;
        case 0x3c8530u: goto label_3c8530;
        case 0x3c8534u: goto label_3c8534;
        case 0x3c8538u: goto label_3c8538;
        case 0x3c853cu: goto label_3c853c;
        case 0x3c8540u: goto label_3c8540;
        case 0x3c8544u: goto label_3c8544;
        case 0x3c8548u: goto label_3c8548;
        case 0x3c854cu: goto label_3c854c;
        case 0x3c8550u: goto label_3c8550;
        case 0x3c8554u: goto label_3c8554;
        case 0x3c8558u: goto label_3c8558;
        case 0x3c855cu: goto label_3c855c;
        case 0x3c8560u: goto label_3c8560;
        case 0x3c8564u: goto label_3c8564;
        case 0x3c8568u: goto label_3c8568;
        case 0x3c856cu: goto label_3c856c;
        case 0x3c8570u: goto label_3c8570;
        case 0x3c8574u: goto label_3c8574;
        case 0x3c8578u: goto label_3c8578;
        case 0x3c857cu: goto label_3c857c;
        case 0x3c8580u: goto label_3c8580;
        case 0x3c8584u: goto label_3c8584;
        case 0x3c8588u: goto label_3c8588;
        case 0x3c858cu: goto label_3c858c;
        case 0x3c8590u: goto label_3c8590;
        case 0x3c8594u: goto label_3c8594;
        case 0x3c8598u: goto label_3c8598;
        case 0x3c859cu: goto label_3c859c;
        case 0x3c85a0u: goto label_3c85a0;
        case 0x3c85a4u: goto label_3c85a4;
        case 0x3c85a8u: goto label_3c85a8;
        case 0x3c85acu: goto label_3c85ac;
        case 0x3c85b0u: goto label_3c85b0;
        case 0x3c85b4u: goto label_3c85b4;
        case 0x3c85b8u: goto label_3c85b8;
        case 0x3c85bcu: goto label_3c85bc;
        case 0x3c85c0u: goto label_3c85c0;
        case 0x3c85c4u: goto label_3c85c4;
        case 0x3c85c8u: goto label_3c85c8;
        case 0x3c85ccu: goto label_3c85cc;
        case 0x3c85d0u: goto label_3c85d0;
        case 0x3c85d4u: goto label_3c85d4;
        case 0x3c85d8u: goto label_3c85d8;
        case 0x3c85dcu: goto label_3c85dc;
        default: break;
    }

    ctx->pc = 0x3c7d90u;

label_3c7d90:
    // 0x3c7d90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3c7d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3c7d94:
    // 0x3c7d94: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x3c7d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_3c7d98:
    // 0x3c7d98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3c7d9c:
    // 0x3c7d9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3c7d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c7da0:
    // 0x3c7da0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c7da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c7da4:
    // 0x3c7da4: 0x3445aef6  ori         $a1, $v0, 0xAEF6
    ctx->pc = 0x3c7da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44790);
label_3c7da8:
    // 0x3c7da8: 0xc0ee760  jal         func_3B9D80
label_3c7dac:
    if (ctx->pc == 0x3C7DACu) {
        ctx->pc = 0x3C7DACu;
            // 0x3c7dac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C7DB0u;
        goto label_3c7db0;
    }
    ctx->pc = 0x3C7DA8u;
    SET_GPR_U32(ctx, 31, 0x3C7DB0u);
    ctx->pc = 0x3C7DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7DA8u;
            // 0x3c7dac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D80u;
    if (runtime->hasFunction(0x3B9D80u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7DB0u; }
        if (ctx->pc != 0x3C7DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D80_0x3b9d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C7DB0u; }
        if (ctx->pc != 0x3C7DB0u) { return; }
    }
    ctx->pc = 0x3C7DB0u;
label_3c7db0:
    // 0x3c7db0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c7db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c7db4:
    // 0x3c7db4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3c7db4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c7db8:
    // 0x3c7db8: 0x24428de0  addiu       $v0, $v0, -0x7220
    ctx->pc = 0x3c7db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938080));
label_3c7dbc:
    // 0x3c7dbc: 0x3c0a4000  lui         $t2, 0x4000
    ctx->pc = 0x3c7dbcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16384 << 16));
label_3c7dc0:
    // 0x3c7dc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3c7dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3c7dc4:
    // 0x3c7dc4: 0x3c094060  lui         $t1, 0x4060
    ctx->pc = 0x3c7dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16480 << 16));
label_3c7dc8:
    // 0x3c7dc8: 0xa20b0058  sb          $t3, 0x58($s0)
    ctx->pc = 0x3c7dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 88), (uint8_t)GPR_U32(ctx, 11));
label_3c7dcc:
    // 0x3c7dcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c7dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c7dd0:
    // 0x3c7dd0: 0xa200005e  sb          $zero, 0x5E($s0)
    ctx->pc = 0x3c7dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 94), (uint8_t)GPR_U32(ctx, 0));
label_3c7dd4:
    // 0x3c7dd4: 0x3c083f40  lui         $t0, 0x3F40
    ctx->pc = 0x3c7dd4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16192 << 16));
label_3c7dd8:
    // 0x3c7dd8: 0xa200005f  sb          $zero, 0x5F($s0)
    ctx->pc = 0x3c7dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 95), (uint8_t)GPR_U32(ctx, 0));
label_3c7ddc:
    // 0x3c7ddc: 0x3c0741f0  lui         $a3, 0x41F0
    ctx->pc = 0x3c7ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16880 << 16));
label_3c7de0:
    // 0x3c7de0: 0x8c420eac  lw          $v0, 0xEAC($v0)
    ctx->pc = 0x3c7de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_3c7de4:
    // 0x3c7de4: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x3c7de4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_3c7de8:
    // 0x3c7de8: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x3c7de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_3c7dec:
    // 0x3c7dec: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3c7decu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3c7df0:
    // 0x3c7df0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3c7df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3c7df4:
    // 0x3c7df4: 0xae0a0070  sw          $t2, 0x70($s0)
    ctx->pc = 0x3c7df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 10));
label_3c7df8:
    // 0x3c7df8: 0xae0a0068  sw          $t2, 0x68($s0)
    ctx->pc = 0x3c7df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 10));
label_3c7dfc:
    // 0x3c7dfc: 0xae09006c  sw          $t1, 0x6C($s0)
    ctx->pc = 0x3c7dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 9));
label_3c7e00:
    // 0x3c7e00: 0xae080074  sw          $t0, 0x74($s0)
    ctx->pc = 0x3c7e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 8));
label_3c7e04:
    // 0x3c7e04: 0xae070078  sw          $a3, 0x78($s0)
    ctx->pc = 0x3c7e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 7));
label_3c7e08:
    // 0x3c7e08: 0xa6060080  sh          $a2, 0x80($s0)
    ctx->pc = 0x3c7e08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 6));
label_3c7e0c:
    // 0x3c7e0c: 0xa6050082  sh          $a1, 0x82($s0)
    ctx->pc = 0x3c7e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 5));
label_3c7e10:
    // 0x3c7e10: 0xa6040084  sh          $a0, 0x84($s0)
    ctx->pc = 0x3c7e10u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 4));
label_3c7e14:
    // 0x3c7e14: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x3c7e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_3c7e18:
    // 0x3c7e18: 0x5083006d  beql        $a0, $v1, . + 4 + (0x6D << 2)
label_3c7e1c:
    if (ctx->pc == 0x3C7E1Cu) {
        ctx->pc = 0x3C7E1Cu;
            // 0x3c7e1c: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x3C7E20u;
        goto label_3c7e20;
    }
    ctx->pc = 0x3C7E18u;
    {
        const bool branch_taken_0x3c7e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7e18) {
            ctx->pc = 0x3C7E1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7E18u;
            // 0x3c7e1c: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7FD0u;
            goto label_3c7fd0;
        }
    }
    ctx->pc = 0x3C7E20u;
label_3c7e20:
    // 0x3c7e20: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c7e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c7e24:
    // 0x3c7e24: 0x10830069  beq         $a0, $v1, . + 4 + (0x69 << 2)
label_3c7e28:
    if (ctx->pc == 0x3C7E28u) {
        ctx->pc = 0x3C7E2Cu;
        goto label_3c7e2c;
    }
    ctx->pc = 0x3C7E24u;
    {
        const bool branch_taken_0x3c7e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7e24) {
            ctx->pc = 0x3C7FCCu;
            goto label_3c7fcc;
        }
    }
    ctx->pc = 0x3C7E2Cu;
label_3c7e2c:
    // 0x3c7e2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c7e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c7e30:
    // 0x3c7e30: 0x50830034  beql        $a0, $v1, . + 4 + (0x34 << 2)
label_3c7e34:
    if (ctx->pc == 0x3C7E34u) {
        ctx->pc = 0x3C7E34u;
            // 0x3c7e34: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x3C7E38u;
        goto label_3c7e38;
    }
    ctx->pc = 0x3C7E30u;
    {
        const bool branch_taken_0x3c7e30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c7e30) {
            ctx->pc = 0x3C7E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7E30u;
            // 0x3c7e34: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7F04u;
            goto label_3c7f04;
        }
    }
    ctx->pc = 0x3C7E38u;
label_3c7e38:
    // 0x3c7e38: 0x508b0003  beql        $a0, $t3, . + 4 + (0x3 << 2)
label_3c7e3c:
    if (ctx->pc == 0x3C7E3Cu) {
        ctx->pc = 0x3C7E3Cu;
            // 0x3c7e3c: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x3C7E40u;
        goto label_3c7e40;
    }
    ctx->pc = 0x3C7E38u;
    {
        const bool branch_taken_0x3c7e38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 11));
        if (branch_taken_0x3c7e38) {
            ctx->pc = 0x3C7E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7E38u;
            // 0x3c7e3c: 0x2403001b  addiu       $v1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C7E48u;
            goto label_3c7e48;
        }
    }
    ctx->pc = 0x3C7E40u;
label_3c7e40:
    // 0x3c7e40: 0x1000009c  b           . + 4 + (0x9C << 2)
label_3c7e44:
    if (ctx->pc == 0x3C7E44u) {
        ctx->pc = 0x3C7E44u;
            // 0x3c7e44: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x3C7E48u;
        goto label_3c7e48;
    }
    ctx->pc = 0x3C7E40u;
    {
        const bool branch_taken_0x3c7e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7E40u;
            // 0x3c7e44: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7e40) {
            ctx->pc = 0x3C80B4u;
            goto label_3c80b4;
        }
    }
    ctx->pc = 0x3C7E48u;
label_3c7e48:
    // 0x3c7e48: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3c7e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_3c7e4c:
    // 0x3c7e4c: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x3c7e4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_3c7e50:
    // 0x3c7e50: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3c7e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c7e54:
    // 0x3c7e54: 0xa2050061  sb          $a1, 0x61($s0)
    ctx->pc = 0x3c7e54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 5));
label_3c7e58:
    // 0x3c7e58: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3c7e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c7e5c:
    // 0x3c7e5c: 0xa2040062  sb          $a0, 0x62($s0)
    ctx->pc = 0x3c7e5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 4));
label_3c7e60:
    // 0x3c7e60: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c7e60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c7e64:
    // 0x3c7e64: 0xa2030063  sb          $v1, 0x63($s0)
    ctx->pc = 0x3c7e64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 3));
label_3c7e68:
    // 0x3c7e68: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x3c7e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_3c7e6c:
    // 0x3c7e6c: 0xa2050065  sb          $a1, 0x65($s0)
    ctx->pc = 0x3c7e6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 5));
label_3c7e70:
    // 0x3c7e70: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x3c7e70u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3c7e74:
    // 0x3c7e74: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3c7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7e78:
    // 0x3c7e78: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x3c7e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_3c7e7c:
    // 0x3c7e7c: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x3c7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7e80:
    // 0x3c7e80: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x3c7e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7e84:
    // 0x3c7e84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7e84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7e88:
    // 0x3c7e88: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c7e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c7e8c:
    // 0x3c7e8c: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c7e8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c7e90:
    // 0x3c7e90: 0x0  nop
    ctx->pc = 0x3c7e90u;
    // NOP
label_3c7e94:
    // 0x3c7e94: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c7e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3c7e98:
    // 0x3c7e98: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c7e98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3c7e9c:
    // 0x3c7e9c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c7e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c7ea0:
    // 0x3c7ea0: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3c7ea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3c7ea4:
    // 0x3c7ea4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7ea4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7ea8:
    // 0x3c7ea8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c7ea8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7eac:
    // 0x3c7eac: 0x0  nop
    ctx->pc = 0x3c7eacu;
    // NOP
label_3c7eb0:
    // 0x3c7eb0: 0xa603005a  sh          $v1, 0x5A($s0)
    ctx->pc = 0x3c7eb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 3));
label_3c7eb4:
    // 0x3c7eb4: 0x92030061  lbu         $v1, 0x61($s0)
    ctx->pc = 0x3c7eb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3c7eb8:
    // 0x3c7eb8: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x3c7eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7ebc:
    // 0x3c7ebc: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x3c7ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7ec0:
    // 0x3c7ec0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c7ec0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3c7ec4:
    // 0x3c7ec4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c7ec4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7ec8:
    // 0x3c7ec8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7ec8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7ecc:
    // 0x3c7ecc: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c7eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c7ed0:
    // 0x3c7ed0: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c7ed0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c7ed4:
    // 0x3c7ed4: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x3c7ed4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3c7ed8:
    // 0x3c7ed8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7ed8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7edc:
    // 0x3c7edc: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c7edcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7ee0:
    // 0x3c7ee0: 0x0  nop
    ctx->pc = 0x3c7ee0u;
    // NOP
label_3c7ee4:
    // 0x3c7ee4: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x3c7ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
label_3c7ee8:
    // 0x3c7ee8: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3c7ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3c7eec:
    // 0x3c7eec: 0x86030080  lh          $v1, 0x80($s0)
    ctx->pc = 0x3c7eecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_3c7ef0:
    // 0x3c7ef0: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3c7ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c7ef4:
    // 0x3c7ef4: 0xa603007c  sh          $v1, 0x7C($s0)
    ctx->pc = 0x3c7ef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 3));
label_3c7ef8:
    // 0x3c7ef8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x3c7ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_3c7efc:
    // 0x3c7efc: 0x10000071  b           . + 4 + (0x71 << 2)
label_3c7f00:
    if (ctx->pc == 0x3C7F00u) {
        ctx->pc = 0x3C7F00u;
            // 0x3c7f00: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3C7F04u;
        goto label_3c7f04;
    }
    ctx->pc = 0x3C7EFCu;
    {
        const bool branch_taken_0x3c7efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7EFCu;
            // 0x3c7f00: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7efc) {
            ctx->pc = 0x3C80C4u;
            goto label_3c80c4;
        }
    }
    ctx->pc = 0x3C7F04u;
label_3c7f04:
    // 0x3c7f04: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3c7f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_3c7f08:
    // 0x3c7f08: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x3c7f08u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_3c7f0c:
    // 0x3c7f0c: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3c7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c7f10:
    // 0x3c7f10: 0xa2050061  sb          $a1, 0x61($s0)
    ctx->pc = 0x3c7f10u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 5));
label_3c7f14:
    // 0x3c7f14: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3c7f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c7f18:
    // 0x3c7f18: 0xa2040062  sb          $a0, 0x62($s0)
    ctx->pc = 0x3c7f18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 4));
label_3c7f1c:
    // 0x3c7f1c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c7f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c7f20:
    // 0x3c7f20: 0xa2030063  sb          $v1, 0x63($s0)
    ctx->pc = 0x3c7f20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 3));
label_3c7f24:
    // 0x3c7f24: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x3c7f24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_3c7f28:
    // 0x3c7f28: 0xa2050065  sb          $a1, 0x65($s0)
    ctx->pc = 0x3c7f28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 5));
label_3c7f2c:
    // 0x3c7f2c: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x3c7f2cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3c7f30:
    // 0x3c7f30: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3c7f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7f34:
    // 0x3c7f34: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x3c7f34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_3c7f38:
    // 0x3c7f38: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x3c7f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c7f3c:
    // 0x3c7f3c: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x3c7f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7f40:
    // 0x3c7f40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7f44:
    // 0x3c7f44: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c7f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c7f48:
    // 0x3c7f48: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c7f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c7f4c:
    // 0x3c7f4c: 0x0  nop
    ctx->pc = 0x3c7f4cu;
    // NOP
label_3c7f50:
    // 0x3c7f50: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c7f50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3c7f54:
    // 0x3c7f54: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c7f54u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3c7f58:
    // 0x3c7f58: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c7f58u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c7f5c:
    // 0x3c7f5c: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3c7f5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3c7f60:
    // 0x3c7f60: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7f60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7f64:
    // 0x3c7f64: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c7f64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7f68:
    // 0x3c7f68: 0x0  nop
    ctx->pc = 0x3c7f68u;
    // NOP
label_3c7f6c:
    // 0x3c7f6c: 0xa603005a  sh          $v1, 0x5A($s0)
    ctx->pc = 0x3c7f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 3));
label_3c7f70:
    // 0x3c7f70: 0x92030061  lbu         $v1, 0x61($s0)
    ctx->pc = 0x3c7f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3c7f74:
    // 0x3c7f74: 0xc440008c  lwc1        $f0, 0x8C($v0)
    ctx->pc = 0x3c7f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c7f78:
    // 0x3c7f78: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x3c7f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c7f7c:
    // 0x3c7f7c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c7f7cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3c7f80:
    // 0x3c7f80: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3c7f80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c7f84:
    // 0x3c7f84: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c7f84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c7f88:
    // 0x3c7f88: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3c7f88u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c7f8c:
    // 0x3c7f8c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c7f8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c7f90:
    // 0x3c7f90: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x3c7f90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3c7f94:
    // 0x3c7f94: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7f94u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c7f98:
    // 0x3c7f98: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c7f98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c7f9c:
    // 0x3c7f9c: 0x0  nop
    ctx->pc = 0x3c7f9cu;
    // NOP
label_3c7fa0:
    // 0x3c7fa0: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x3c7fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
label_3c7fa4:
    // 0x3c7fa4: 0x8c440080  lw          $a0, 0x80($v0)
    ctx->pc = 0x3c7fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
label_3c7fa8:
    // 0x3c7fa8: 0x86030080  lh          $v1, 0x80($s0)
    ctx->pc = 0x3c7fa8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_3c7fac:
    // 0x3c7fac: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x3c7facu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c7fb0:
    // 0x3c7fb0: 0xa603007c  sh          $v1, 0x7C($s0)
    ctx->pc = 0x3c7fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 3));
label_3c7fb4:
    // 0x3c7fb4: 0x86030082  lh          $v1, 0x82($s0)
    ctx->pc = 0x3c7fb4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
label_3c7fb8:
    // 0x3c7fb8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3c7fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3c7fbc:
    // 0x3c7fbc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c7fbcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3c7fc0:
    // 0x3c7fc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c7fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c7fc4:
    // 0x3c7fc4: 0x1000003f  b           . + 4 + (0x3F << 2)
label_3c7fc8:
    if (ctx->pc == 0x3C7FC8u) {
        ctx->pc = 0x3C7FC8u;
            // 0x3c7fc8: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3C7FCCu;
        goto label_3c7fcc;
    }
    ctx->pc = 0x3C7FC4u;
    {
        const bool branch_taken_0x3c7fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C7FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C7FC4u;
            // 0x3c7fc8: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c7fc4) {
            ctx->pc = 0x3C80C4u;
            goto label_3c80c4;
        }
    }
    ctx->pc = 0x3C7FCCu;
label_3c7fcc:
    // 0x3c7fcc: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x3c7fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_3c7fd0:
    // 0x3c7fd0: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x3c7fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_3c7fd4:
    // 0x3c7fd4: 0xa2030060  sb          $v1, 0x60($s0)
    ctx->pc = 0x3c7fd4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 96), (uint8_t)GPR_U32(ctx, 3));
label_3c7fd8:
    // 0x3c7fd8: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x3c7fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_3c7fdc:
    // 0x3c7fdc: 0xa2050061  sb          $a1, 0x61($s0)
    ctx->pc = 0x3c7fdcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 97), (uint8_t)GPR_U32(ctx, 5));
label_3c7fe0:
    // 0x3c7fe0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x3c7fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c7fe4:
    // 0x3c7fe4: 0xa2040062  sb          $a0, 0x62($s0)
    ctx->pc = 0x3c7fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 98), (uint8_t)GPR_U32(ctx, 4));
label_3c7fe8:
    // 0x3c7fe8: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x3c7fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c7fec:
    // 0x3c7fec: 0xa2030063  sb          $v1, 0x63($s0)
    ctx->pc = 0x3c7fecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 99), (uint8_t)GPR_U32(ctx, 3));
label_3c7ff0:
    // 0x3c7ff0: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x3c7ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_3c7ff4:
    // 0x3c7ff4: 0xa2050065  sb          $a1, 0x65($s0)
    ctx->pc = 0x3c7ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 5));
label_3c7ff8:
    // 0x3c7ff8: 0x92040060  lbu         $a0, 0x60($s0)
    ctx->pc = 0x3c7ff8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 96)));
label_3c7ffc:
    // 0x3c7ffc: 0xc4400088  lwc1        $f0, 0x88($v0)
    ctx->pc = 0x3c7ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8000:
    // 0x3c8000: 0x92030064  lbu         $v1, 0x64($s0)
    ctx->pc = 0x3c8000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 100)));
label_3c8004:
    // 0x3c8004: 0xc6020070  lwc1        $f2, 0x70($s0)
    ctx->pc = 0x3c8004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c8008:
    // 0x3c8008: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x3c8008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c800c:
    // 0x3c800c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c800cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c8010:
    // 0x3c8010: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c8010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c8014:
    // 0x3c8014: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x3c8014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_3c8018:
    // 0x3c8018: 0x0  nop
    ctx->pc = 0x3c8018u;
    // NOP
label_3c801c:
    // 0x3c801c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3c801cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_3c8020:
    // 0x3c8020: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x3c8020u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_3c8024:
    // 0x3c8024: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c8024u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c8028:
    // 0x3c8028: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x3c8028u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_3c802c:
    // 0x3c802c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c802cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8030:
    // 0x3c8030: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c8030u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c8034:
    // 0x3c8034: 0x0  nop
    ctx->pc = 0x3c8034u;
    // NOP
label_3c8038:
    // 0x3c8038: 0xa603005a  sh          $v1, 0x5A($s0)
    ctx->pc = 0x3c8038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 90), (uint16_t)GPR_U32(ctx, 3));
label_3c803c:
    // 0x3c803c: 0x92050061  lbu         $a1, 0x61($s0)
    ctx->pc = 0x3c803cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 97)));
label_3c8040:
    // 0x3c8040: 0xc6010070  lwc1        $f1, 0x70($s0)
    ctx->pc = 0x3c8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8044:
    // 0x3c8044: 0x86040082  lh          $a0, 0x82($s0)
    ctx->pc = 0x3c8044u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
label_3c8048:
    // 0x3c8048: 0x8c43008c  lw          $v1, 0x8C($v0)
    ctx->pc = 0x3c8048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3c804c:
    // 0x3c804c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x3c804cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_3c8050:
    // 0x3c8050: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3c8050u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8054:
    // 0x3c8054: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3c8054u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3c8058:
    // 0x3c8058: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x3c8058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_3c805c:
    // 0x3c805c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x3c805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3c8060:
    // 0x3c8060: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8060u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8064:
    // 0x3c8064: 0x0  nop
    ctx->pc = 0x3c8064u;
    // NOP
label_3c8068:
    // 0x3c8068: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c8068u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c806c:
    // 0x3c806c: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x3c806cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_3c8070:
    // 0x3c8070: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x3c8070u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_3c8074:
    // 0x3c8074: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8074u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8078:
    // 0x3c8078: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c8078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c807c:
    // 0x3c807c: 0x0  nop
    ctx->pc = 0x3c807cu;
    // NOP
label_3c8080:
    // 0x3c8080: 0xa603005c  sh          $v1, 0x5C($s0)
    ctx->pc = 0x3c8080u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 92), (uint16_t)GPR_U32(ctx, 3));
label_3c8084:
    // 0x3c8084: 0x86040080  lh          $a0, 0x80($s0)
    ctx->pc = 0x3c8084u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 128)));
label_3c8088:
    // 0x3c8088: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x3c8088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_3c808c:
    // 0x3c808c: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x3c808cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_3c8090:
    // 0x3c8090: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3c8090u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c8094:
    // 0x3c8094: 0xa603007c  sh          $v1, 0x7C($s0)
    ctx->pc = 0x3c8094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 124), (uint16_t)GPR_U32(ctx, 3));
label_3c8098:
    // 0x3c8098: 0x86030082  lh          $v1, 0x82($s0)
    ctx->pc = 0x3c8098u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 130)));
label_3c809c:
    // 0x3c809c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x3c809cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
label_3c80a0:
    // 0x3c80a0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x3c80a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_3c80a4:
    // 0x3c80a4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c80a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c80a8:
    // 0x3c80a8: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x3c80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_3c80ac:
    // 0x3c80ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c80b0:
    if (ctx->pc == 0x3C80B0u) {
        ctx->pc = 0x3C80B0u;
            // 0x3c80b0: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3C80B4u;
        goto label_3c80b4;
    }
    ctx->pc = 0x3C80ACu;
    {
        const bool branch_taken_0x3c80ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C80B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C80ACu;
            // 0x3c80b0: 0xa602007e  sh          $v0, 0x7E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 126), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c80ac) {
            ctx->pc = 0x3C80C4u;
            goto label_3c80c4;
        }
    }
    ctx->pc = 0x3C80B4u;
label_3c80b4:
    // 0x3c80b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c80b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c80b8:
    // 0x3c80b8: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c80b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c80bc:
    // 0x3c80bc: 0x320f809  jalr        $t9
label_3c80c0:
    if (ctx->pc == 0x3C80C0u) {
        ctx->pc = 0x3C80C0u;
            // 0x3c80c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C80C4u;
        goto label_3c80c4;
    }
    ctx->pc = 0x3C80BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C80C4u);
        ctx->pc = 0x3C80C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C80BCu;
            // 0x3c80c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C80C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C80C4u; }
            if (ctx->pc != 0x3C80C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C80C4u;
label_3c80c4:
    // 0x3c80c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3c80c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c80c8:
    // 0x3c80c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c80c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3c80cc:
    // 0x3c80cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c80ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c80d0:
    // 0x3c80d0: 0x3e00008  jr          $ra
label_3c80d4:
    if (ctx->pc == 0x3C80D4u) {
        ctx->pc = 0x3C80D4u;
            // 0x3c80d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3C80D8u;
        goto label_3c80d8;
    }
    ctx->pc = 0x3C80D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C80D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C80D0u;
            // 0x3c80d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C80D8u;
label_3c80d8:
    // 0x3c80d8: 0x0  nop
    ctx->pc = 0x3c80d8u;
    // NOP
label_3c80dc:
    // 0x3c80dc: 0x0  nop
    ctx->pc = 0x3c80dcu;
    // NOP
label_3c80e0:
    // 0x3c80e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3c80e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3c80e4:
    // 0x3c80e4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c80e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c80e8:
    // 0x3c80e8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3c80e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_3c80ec:
    // 0x3c80ec: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3c80ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3c80f0:
    // 0x3c80f0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3c80f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3c80f4:
    // 0x3c80f4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3c80f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3c80f8:
    // 0x3c80f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3c80f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3c80fc:
    // 0x3c80fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3c80fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3c8100:
    // 0x3c8100: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x3c8100u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_3c8104:
    // 0x3c8104: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3c8104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3c8108:
    // 0x3c8108: 0x3c130064  lui         $s3, 0x64
    ctx->pc = 0x3c8108u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)100 << 16));
label_3c810c:
    // 0x3c810c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3c810cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3c8110:
    // 0x3c8110: 0x3c120067  lui         $s2, 0x67
    ctx->pc = 0x3c8110u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)103 << 16));
label_3c8114:
    // 0x3c8114: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3c8114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3c8118:
    // 0x3c8118: 0x3c110064  lui         $s1, 0x64
    ctx->pc = 0x3c8118u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)100 << 16));
label_3c811c:
    // 0x3c811c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x3c811cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_3c8120:
    // 0x3c8120: 0x26949bc0  addiu       $s4, $s4, -0x6440
    ctx->pc = 0x3c8120u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294941632));
label_3c8124:
    // 0x3c8124: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x3c8124u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_3c8128:
    // 0x3c8128: 0x26732100  addiu       $s3, $s3, 0x2100
    ctx->pc = 0x3c8128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8448));
label_3c812c:
    // 0x3c812c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3c812cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_3c8130:
    // 0x3c8130: 0x2652ab70  addiu       $s2, $s2, -0x5490
    ctx->pc = 0x3c8130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294945648));
label_3c8134:
    // 0x3c8134: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3c8134u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3c8138:
    // 0x3c8138: 0x26312110  addiu       $s1, $s1, 0x2110
    ctx->pc = 0x3c8138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8464));
label_3c813c:
    // 0x3c813c: 0x84870060  lh          $a3, 0x60($a0)
    ctx->pc = 0x3c813cu;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
label_3c8140:
    // 0x3c8140: 0x8c7589e0  lw          $s5, -0x7620($v1)
    ctx->pc = 0x3c8140u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3c8144:
    // 0x3c8144: 0x84860064  lh          $a2, 0x64($a0)
    ctx->pc = 0x3c8144u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_3c8148:
    // 0x3c8148: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3c8148u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c814c:
    // 0x3c814c: 0x8c900058  lw          $s0, 0x58($a0)
    ctx->pc = 0x3c814cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_3c8150:
    // 0x3c8150: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x3c8150u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_3c8154:
    // 0x3c8154: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8158:
    // 0x3c8158: 0x8c650eac  lw          $a1, 0xEAC($v1)
    ctx->pc = 0x3c8158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3756)));
label_3c815c:
    // 0x3c815c: 0x8c97005c  lw          $s7, 0x5C($a0)
    ctx->pc = 0x3c815cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_3c8160:
    // 0x3c8160: 0x90b60116  lbu         $s6, 0x116($a1)
    ctx->pc = 0x3c8160u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 278)));
label_3c8164:
    // 0x3c8164: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c8164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8168:
    // 0x3c8168: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3c8168u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c816c:
    // 0x3c816c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c816cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c8170:
    // 0x3c8170: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3c8174:
    if (ctx->pc == 0x3C8174u) {
        ctx->pc = 0x3C8174u;
            // 0x3c8174: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3C8178u;
        goto label_3c8178;
    }
    ctx->pc = 0x3C8170u;
    {
        const bool branch_taken_0x3c8170 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C8174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8170u;
            // 0x3c8174: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8170) {
            ctx->pc = 0x3C8180u;
            goto label_3c8180;
        }
    }
    ctx->pc = 0x3C8178u;
label_3c8178:
    // 0x3c8178: 0x10000085  b           . + 4 + (0x85 << 2)
label_3c817c:
    if (ctx->pc == 0x3C817Cu) {
        ctx->pc = 0x3C817Cu;
            // 0x3c817c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x3C8180u;
        goto label_3c8180;
    }
    ctx->pc = 0x3C8178u;
    {
        const bool branch_taken_0x3c8178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C817Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8178u;
            // 0x3c817c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8178) {
            ctx->pc = 0x3C8390u;
            goto label_3c8390;
        }
    }
    ctx->pc = 0x3C8180u;
label_3c8180:
    // 0x3c8180: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8184:
    // 0x3c8184: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3c8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3c8188:
    // 0x3c8188: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3c8188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3c818c:
    // 0x3c818c: 0x28410008  slti        $at, $v0, 0x8
    ctx->pc = 0x3c818cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8190:
    // 0x3c8190: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_3c8194:
    if (ctx->pc == 0x3C8194u) {
        ctx->pc = 0x3C8198u;
        goto label_3c8198;
    }
    ctx->pc = 0x3C8190u;
    {
        const bool branch_taken_0x3c8190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8190) {
            ctx->pc = 0x3C81B0u;
            goto label_3c81b0;
        }
    }
    ctx->pc = 0x3C8198u;
label_3c8198:
    // 0x3c8198: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c819c:
    // 0x3c819c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c819cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c81a0:
    // 0x3c81a0: 0x320f809  jalr        $t9
label_3c81a4:
    if (ctx->pc == 0x3C81A4u) {
        ctx->pc = 0x3C81A4u;
            // 0x3c81a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C81A8u;
        goto label_3c81a8;
    }
    ctx->pc = 0x3C81A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C81A8u);
        ctx->pc = 0x3C81A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C81A0u;
            // 0x3c81a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C81A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C81A8u; }
            if (ctx->pc != 0x3C81A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3C81A8u;
label_3c81a8:
    // 0x3c81a8: 0x10000078  b           . + 4 + (0x78 << 2)
label_3c81ac:
    if (ctx->pc == 0x3C81ACu) {
        ctx->pc = 0x3C81B0u;
        goto label_3c81b0;
    }
    ctx->pc = 0x3C81A8u;
    {
        const bool branch_taken_0x3c81a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c81a8) {
            ctx->pc = 0x3C838Cu;
            goto label_3c838c;
        }
    }
    ctx->pc = 0x3C81B0u;
label_3c81b0:
    // 0x3c81b0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c81b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c81b4:
    // 0x3c81b4: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c81b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c81b8:
    // 0x3c81b8: 0xc0506ac  jal         func_141AB0
label_3c81bc:
    if (ctx->pc == 0x3C81BCu) {
        ctx->pc = 0x3C81BCu;
            // 0x3c81bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C81C0u;
        goto label_3c81c0;
    }
    ctx->pc = 0x3C81B8u;
    SET_GPR_U32(ctx, 31, 0x3C81C0u);
    ctx->pc = 0x3C81BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C81B8u;
            // 0x3c81bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C81C0u; }
        if (ctx->pc != 0x3C81C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C81C0u; }
        if (ctx->pc != 0x3C81C0u) { return; }
    }
    ctx->pc = 0x3C81C0u;
label_3c81c0:
    // 0x3c81c0: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c81c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c81c4:
    // 0x3c81c4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c81c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c81c8:
    // 0x3c81c8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c81c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c81cc:
    // 0x3c81cc: 0x320f809  jalr        $t9
label_3c81d0:
    if (ctx->pc == 0x3C81D0u) {
        ctx->pc = 0x3C81D0u;
            // 0x3c81d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C81D4u;
        goto label_3c81d4;
    }
    ctx->pc = 0x3C81CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C81D4u);
        ctx->pc = 0x3C81D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C81CCu;
            // 0x3c81d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C81D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C81D4u; }
            if (ctx->pc != 0x3C81D4u) { return; }
        }
        }
    }
    ctx->pc = 0x3C81D4u;
label_3c81d4:
    // 0x3c81d4: 0x2602000d  addiu       $v0, $s0, 0xD
    ctx->pc = 0x3c81d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3c81d8:
    // 0x3c81d8: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x3c81d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
label_3c81dc:
    // 0x3c81dc: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x3c81dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c81e0:
    // 0x3c81e0: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x3c81e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_3c81e4:
    // 0x3c81e4: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x3c81e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_3c81e8:
    // 0x3c81e8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3c81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_3c81ec:
    // 0x3c81ec: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x3c81ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3c81f0:
    // 0x3c81f0: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3c81f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c81f4:
    // 0x3c81f4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3c81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3c81f8:
    // 0x3c81f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c81f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c81fc:
    // 0x3c81fc: 0x62a025  or          $s4, $v1, $v0
    ctx->pc = 0x3c81fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3c8200:
    // 0x3c8200: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c8200u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8204:
    // 0x3c8204: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c8204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c8208:
    // 0x3c8208: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c8208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c820c:
    // 0x3c820c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3c820cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3c8210:
    // 0x3c8210: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c8210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8214:
    // 0x3c8214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8218:
    // 0x3c8218: 0x0  nop
    ctx->pc = 0x3c8218u;
    // NOP
label_3c821c:
    // 0x3c821c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c821cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c8220:
    // 0x3c8220: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c8220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8224:
    // 0x3c8224: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3c8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c8228:
    // 0x3c8228: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x3c8228u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c822c:
    // 0x3c822c: 0x0  nop
    ctx->pc = 0x3c822cu;
    // NOP
label_3c8230:
    // 0x3c8230: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c8230u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3c8234:
    // 0x3c8234: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c8234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8238:
    // 0x3c8238: 0x46000d82  mul.s       $f22, $f1, $f0
    ctx->pc = 0x3c8238u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c823c:
    // 0x3c823c: 0x460315c2  mul.s       $f23, $f2, $f3
    ctx->pc = 0x3c823cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c8240:
    // 0x3c8240: 0x4617ab80  add.s       $f14, $f21, $f23
    ctx->pc = 0x3c8240u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_3c8244:
    // 0x3c8244: 0x4616a341  sub.s       $f13, $f20, $f22
    ctx->pc = 0x3c8244u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
label_3c8248:
    // 0x3c8248: 0x4616a3c0  add.s       $f15, $f20, $f22
    ctx->pc = 0x3c8248u;
    ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_3c824c:
    // 0x3c824c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c824cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c8250:
    // 0x3c8250: 0xc0bc284  jal         func_2F0A10
label_3c8254:
    if (ctx->pc == 0x3C8254u) {
        ctx->pc = 0x3C8254u;
            // 0x3c8254: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3C8258u;
        goto label_3c8258;
    }
    ctx->pc = 0x3C8250u;
    SET_GPR_U32(ctx, 31, 0x3C8258u);
    ctx->pc = 0x3C8254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8250u;
            // 0x3c8254: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8258u; }
        if (ctx->pc != 0x3C8258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8258u; }
        if (ctx->pc != 0x3C8258u) { return; }
    }
    ctx->pc = 0x3C8258u;
label_3c8258:
    // 0x3c8258: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c8258u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c825c:
    // 0x3c825c: 0x4617ad40  add.s       $f21, $f21, $f23
    ctx->pc = 0x3c825cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[23]);
label_3c8260:
    // 0x3c8260: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c8260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c8264:
    // 0x3c8264: 0x320f809  jalr        $t9
label_3c8268:
    if (ctx->pc == 0x3C8268u) {
        ctx->pc = 0x3C8268u;
            // 0x3c8268: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C826Cu;
        goto label_3c826c;
    }
    ctx->pc = 0x3C8264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C826Cu);
        ctx->pc = 0x3C8268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8264u;
            // 0x3c8268: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C826Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C826Cu; }
            if (ctx->pc != 0x3C826Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C826Cu;
label_3c826c:
    // 0x3c826c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c826cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8270:
    // 0x3c8270: 0x8c441d08  lw          $a0, 0x1D08($v0)
    ctx->pc = 0x3c8270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7432)));
label_3c8274:
    // 0x3c8274: 0xc0506ac  jal         func_141AB0
label_3c8278:
    if (ctx->pc == 0x3C8278u) {
        ctx->pc = 0x3C8278u;
            // 0x3c8278: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x3C827Cu;
        goto label_3c827c;
    }
    ctx->pc = 0x3C8274u;
    SET_GPR_U32(ctx, 31, 0x3C827Cu);
    ctx->pc = 0x3C8278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8274u;
            // 0x3c8278: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C827Cu; }
        if (ctx->pc != 0x3C827Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C827Cu; }
        if (ctx->pc != 0x3C827Cu) { return; }
    }
    ctx->pc = 0x3C827Cu;
label_3c827c:
    // 0x3c827c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c827cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c8280:
    // 0x3c8280: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3c8280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3c8284:
    // 0x3c8284: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3c8284u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3c8288:
    // 0x3c8288: 0x320f809  jalr        $t9
label_3c828c:
    if (ctx->pc == 0x3C828Cu) {
        ctx->pc = 0x3C828Cu;
            // 0x3c828c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3C8290u;
        goto label_3c8290;
    }
    ctx->pc = 0x3C8288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8290u);
        ctx->pc = 0x3C828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8288u;
            // 0x3c828c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8290u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8290u; }
            if (ctx->pc != 0x3C8290u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8290u;
label_3c8290:
    // 0x3c8290: 0x2a010004  slti        $at, $s0, 0x4
    ctx->pc = 0x3c8290u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_3c8294:
    // 0x3c8294: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_3c8298:
    if (ctx->pc == 0x3C8298u) {
        ctx->pc = 0x3C8298u;
            // 0x3c8298: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->pc = 0x3C829Cu;
        goto label_3c829c;
    }
    ctx->pc = 0x3C8294u;
    {
        const bool branch_taken_0x3c8294 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8294u;
            // 0x3c8298: 0x4616a3c0  add.s       $f15, $f20, $f22 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8294) {
            ctx->pc = 0x3C82ACu;
            goto label_3c82ac;
        }
    }
    ctx->pc = 0x3C829Cu;
label_3c829c:
    // 0x3c829c: 0x2602001e  addiu       $v0, $s0, 0x1E
    ctx->pc = 0x3c829cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 30));
label_3c82a0:
    // 0x3c82a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c82a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3c82a4:
    // 0x3c82a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c82a8:
    if (ctx->pc == 0x3C82A8u) {
        ctx->pc = 0x3C82A8u;
            // 0x3c82a8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x3C82ACu;
        goto label_3c82ac;
    }
    ctx->pc = 0x3C82A4u;
    {
        const bool branch_taken_0x3c82a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C82A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C82A4u;
            // 0x3c82a8: 0x2422821  addu        $a1, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c82a4) {
            ctx->pc = 0x3C82B0u;
            goto label_3c82b0;
        }
    }
    ctx->pc = 0x3C82ACu;
label_3c82ac:
    // 0x3c82ac: 0x26450220  addiu       $a1, $s2, 0x220
    ctx->pc = 0x3c82acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_3c82b0:
    // 0x3c82b0: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x3c82b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3c82b4:
    // 0x3c82b4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x3c82b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_3c82b8:
    // 0x3c82b8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x3c82b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3c82bc:
    // 0x3c82bc: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x3c82bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3c82c0:
    // 0x3c82c0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x3c82c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c82c4:
    // 0x3c82c4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c82c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c82c8:
    // 0x3c82c8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c82c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c82cc:
    // 0x3c82cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c82ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c82d0:
    // 0x3c82d0: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c82d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c82d4:
    // 0x3c82d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c82d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c82d8:
    // 0x3c82d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c82d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c82dc:
    // 0x3c82dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c82dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c82e0:
    // 0x3c82e0: 0x0  nop
    ctx->pc = 0x3c82e0u;
    // NOP
label_3c82e4:
    // 0x3c82e4: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c82e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c82e8:
    // 0x3c82e8: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c82e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c82ec:
    // 0x3c82ec: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x3c82ecu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_3c82f0:
    // 0x3c82f0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c82f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c82f4:
    // 0x3c82f4: 0x4616ab80  add.s       $f14, $f21, $f22
    ctx->pc = 0x3c82f4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_3c82f8:
    // 0x3c82f8: 0x46007b41  sub.s       $f13, $f15, $f0
    ctx->pc = 0x3c82f8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[15], ctx->f[0]);
label_3c82fc:
    // 0x3c82fc: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c82fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c8300:
    // 0x3c8300: 0xc0bc284  jal         func_2F0A10
label_3c8304:
    if (ctx->pc == 0x3C8304u) {
        ctx->pc = 0x3C8304u;
            // 0x3c8304: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x3C8308u;
        goto label_3c8308;
    }
    ctx->pc = 0x3C8300u;
    SET_GPR_U32(ctx, 31, 0x3C8308u);
    ctx->pc = 0x3C8304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8300u;
            // 0x3c8304: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8308u; }
        if (ctx->pc != 0x3C8308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C8308u; }
        if (ctx->pc != 0x3C8308u) { return; }
    }
    ctx->pc = 0x3C8308u;
label_3c8308:
    // 0x3c8308: 0x86670000  lh          $a3, 0x0($s3)
    ctx->pc = 0x3c8308u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
label_3c830c:
    // 0x3c830c: 0x3c033fc0  lui         $v1, 0x3FC0
    ctx->pc = 0x3c830cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16320 << 16));
label_3c8310:
    // 0x3c8310: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c8310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c8314:
    // 0x3c8314: 0x171100  sll         $v0, $s7, 4
    ctx->pc = 0x3c8314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 4));
label_3c8318:
    // 0x3c8318: 0x2422821  addu        $a1, $s2, $v0
    ctx->pc = 0x3c8318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_3c831c:
    // 0x3c831c: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x3c831cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_3c8320:
    // 0x3c8320: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x3c8320u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c8324:
    // 0x3c8324: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3c8324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3c8328:
    // 0x3c8328: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x3c8328u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_3c832c:
    // 0x3c832c: 0x86630002  lh          $v1, 0x2($s3)
    ctx->pc = 0x3c832cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
label_3c8330:
    // 0x3c8330: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c8330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c8334:
    // 0x3c8334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3c8334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c8338:
    // 0x3c8338: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c8338u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c833c:
    // 0x3c833c: 0x0  nop
    ctx->pc = 0x3c833cu;
    // NOP
label_3c8340:
    // 0x3c8340: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x3c8340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_3c8344:
    // 0x3c8344: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x3c8344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8348:
    // 0x3c8348: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x3c8348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c834c:
    // 0x3c834c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3c834cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3c8350:
    // 0x3c8350: 0x0  nop
    ctx->pc = 0x3c8350u;
    // NOP
label_3c8354:
    // 0x3c8354: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3c8354u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3c8358:
    // 0x3c8358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3c8358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c835c:
    // 0x3c835c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3c835cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3c8360:
    // 0x3c8360: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c8360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c8364:
    // 0x3c8364: 0x4616ab00  add.s       $f12, $f21, $f22
    ctx->pc = 0x3c8364u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[22]);
label_3c8368:
    // 0x3c8368: 0x46026380  add.s       $f14, $f12, $f2
    ctx->pc = 0x3c8368u;
    ctx->f[14] = FPU_ADD_S(ctx->f[12], ctx->f[2]);
label_3c836c:
    // 0x3c836c: 0x4600a341  sub.s       $f13, $f20, $f0
    ctx->pc = 0x3c836cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_3c8370:
    // 0x3c8370: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x3c8370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_3c8374:
    // 0x3c8374: 0xc0bc284  jal         func_2F0A10
label_3c8378:
    if (ctx->pc == 0x3C8378u) {
        ctx->pc = 0x3C8378u;
            // 0x3c8378: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x3C837Cu;
        goto label_3c837c;
    }
    ctx->pc = 0x3C8374u;
    SET_GPR_U32(ctx, 31, 0x3C837Cu);
    ctx->pc = 0x3C8378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8374u;
            // 0x3c8378: 0x4600a3c0  add.s       $f15, $f20, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C837Cu; }
        if (ctx->pc != 0x3C837Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C837Cu; }
        if (ctx->pc != 0x3C837Cu) { return; }
    }
    ctx->pc = 0x3C837Cu;
label_3c837c:
    // 0x3c837c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x3c837cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3c8380:
    // 0x3c8380: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3c8380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3c8384:
    // 0x3c8384: 0x320f809  jalr        $t9
label_3c8388:
    if (ctx->pc == 0x3C8388u) {
        ctx->pc = 0x3C8388u;
            // 0x3c8388: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C838Cu;
        goto label_3c838c;
    }
    ctx->pc = 0x3C8384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C838Cu);
        ctx->pc = 0x3C8388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8384u;
            // 0x3c8388: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C838Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C838Cu; }
            if (ctx->pc != 0x3C838Cu) { return; }
        }
        }
    }
    ctx->pc = 0x3C838Cu;
label_3c838c:
    // 0x3c838c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3c838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3c8390:
    // 0x3c8390: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3c8390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3c8394:
    // 0x3c8394: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3c8394u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3c8398:
    // 0x3c8398: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3c8398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3c839c:
    // 0x3c839c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3c839cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3c83a0:
    // 0x3c83a0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3c83a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3c83a4:
    // 0x3c83a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3c83a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3c83a8:
    // 0x3c83a8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3c83a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3c83ac:
    // 0x3c83ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3c83acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3c83b0:
    // 0x3c83b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3c83b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3c83b4:
    // 0x3c83b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3c83b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3c83b8:
    // 0x3c83b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3c83b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3c83bc:
    // 0x3c83bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3c83bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c83c0:
    // 0x3c83c0: 0x3e00008  jr          $ra
label_3c83c4:
    if (ctx->pc == 0x3C83C4u) {
        ctx->pc = 0x3C83C4u;
            // 0x3c83c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x3C83C8u;
        goto label_3c83c8;
    }
    ctx->pc = 0x3C83C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C83C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C83C0u;
            // 0x3c83c4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C83C8u;
label_3c83c8:
    // 0x3c83c8: 0x0  nop
    ctx->pc = 0x3c83c8u;
    // NOP
label_3c83cc:
    // 0x3c83cc: 0x0  nop
    ctx->pc = 0x3c83ccu;
    // NOP
label_3c83d0:
    // 0x3c83d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c83d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c83d4:
    // 0x3c83d4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3c83d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3c83d8:
    // 0x3c83d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c83d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c83dc:
    // 0x3c83dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c83dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c83e0:
    // 0x3c83e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c83e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c83e4:
    // 0x3c83e4: 0x8c708a08  lw          $s0, -0x75F8($v1)
    ctx->pc = 0x3c83e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_3c83e8:
    // 0x3c83e8: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3c83e8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3c83ec:
    // 0x3c83ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3c83ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c83f0:
    // 0x3c83f0: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_3c83f4:
    if (ctx->pc == 0x3C83F4u) {
        ctx->pc = 0x3C83F4u;
            // 0x3c83f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C83F8u;
        goto label_3c83f8;
    }
    ctx->pc = 0x3C83F0u;
    {
        const bool branch_taken_0x3c83f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3C83F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C83F0u;
            // 0x3c83f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c83f0) {
            ctx->pc = 0x3C8540u;
            goto label_3c8540;
        }
    }
    ctx->pc = 0x3C83F8u;
label_3c83f8:
    // 0x3c83f8: 0x50a0004c  beql        $a1, $zero, . + 4 + (0x4C << 2)
label_3c83fc:
    if (ctx->pc == 0x3C83FCu) {
        ctx->pc = 0x3C83FCu;
            // 0x3c83fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3C8400u;
        goto label_3c8400;
    }
    ctx->pc = 0x3C83F8u;
    {
        const bool branch_taken_0x3c83f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c83f8) {
            ctx->pc = 0x3C83FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C83F8u;
            // 0x3c83fc: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C852Cu;
            goto label_3c852c;
        }
    }
    ctx->pc = 0x3C8400u;
label_3c8400:
    // 0x3c8400: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3c8400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c8404:
    // 0x3c8404: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_3c8408:
    if (ctx->pc == 0x3C8408u) {
        ctx->pc = 0x3C840Cu;
        goto label_3c840c;
    }
    ctx->pc = 0x3C8404u;
    {
        const bool branch_taken_0x3c8404 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8404) {
            ctx->pc = 0x3C8448u;
            goto label_3c8448;
        }
    }
    ctx->pc = 0x3C840Cu;
label_3c840c:
    // 0x3c840c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3c840cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3c8410:
    // 0x3c8410: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3c8414:
    if (ctx->pc == 0x3C8414u) {
        ctx->pc = 0x3C8418u;
        goto label_3c8418;
    }
    ctx->pc = 0x3C8410u;
    {
        const bool branch_taken_0x3c8410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3c8410) {
            ctx->pc = 0x3C8420u;
            goto label_3c8420;
        }
    }
    ctx->pc = 0x3C8418u;
label_3c8418:
    // 0x3c8418: 0x10000055  b           . + 4 + (0x55 << 2)
label_3c841c:
    if (ctx->pc == 0x3C841Cu) {
        ctx->pc = 0x3C841Cu;
            // 0x3c841c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x3C8420u;
        goto label_3c8420;
    }
    ctx->pc = 0x3C8418u;
    {
        const bool branch_taken_0x3c8418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8418u;
            // 0x3c841c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8418) {
            ctx->pc = 0x3C8570u;
            goto label_3c8570;
        }
    }
    ctx->pc = 0x3C8420u;
label_3c8420:
    // 0x3c8420: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8420u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c8424:
    // 0x3c8424: 0x8c6365a8  lw          $v1, 0x65A8($v1)
    ctx->pc = 0x3c8424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26024)));
label_3c8428:
    // 0x3c8428: 0x14600050  bnez        $v1, . + 4 + (0x50 << 2)
label_3c842c:
    if (ctx->pc == 0x3C842Cu) {
        ctx->pc = 0x3C8430u;
        goto label_3c8430;
    }
    ctx->pc = 0x3C8428u;
    {
        const bool branch_taken_0x3c8428 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c8428) {
            ctx->pc = 0x3C856Cu;
            goto label_3c856c;
        }
    }
    ctx->pc = 0x3C8430u;
label_3c8430:
    // 0x3c8430: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8434:
    // 0x3c8434: 0xac5165a8  sw          $s1, 0x65A8($v0)
    ctx->pc = 0x3c8434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26024), GPR_U32(ctx, 17));
label_3c8438:
    // 0x3c8438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3c8438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3c843c:
    // 0x3c843c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c843cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c8440:
    // 0x3c8440: 0x320f809  jalr        $t9
label_3c8444:
    if (ctx->pc == 0x3C8444u) {
        ctx->pc = 0x3C8448u;
        goto label_3c8448;
    }
    ctx->pc = 0x3C8440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8448u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8448u; }
            if (ctx->pc != 0x3C8448u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8448u;
label_3c8448:
    // 0x3c8448: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c8448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c844c:
    // 0x3c844c: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x3c844cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_3c8450:
    // 0x3c8450: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x3c8450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_3c8454:
    // 0x3c8454: 0x28610008  slti        $at, $v1, 0x8
    ctx->pc = 0x3c8454u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_3c8458:
    // 0x3c8458: 0x50200008  beql        $at, $zero, . + 4 + (0x8 << 2)
label_3c845c:
    if (ctx->pc == 0x3C845Cu) {
        ctx->pc = 0x3C845Cu;
            // 0x3c845c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x3C8460u;
        goto label_3c8460;
    }
    ctx->pc = 0x3C8458u;
    {
        const bool branch_taken_0x3c8458 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8458) {
            ctx->pc = 0x3C845Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8458u;
            // 0x3c845c: 0xc6010018  lwc1        $f1, 0x18($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C847Cu;
            goto label_3c847c;
        }
    }
    ctx->pc = 0x3C8460u;
label_3c8460:
    // 0x3c8460: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c8460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c8464:
    // 0x3c8464: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c8464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8468:
    // 0x3c8468: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c8468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c846c:
    // 0x3c846c: 0x320f809  jalr        $t9
label_3c8470:
    if (ctx->pc == 0x3C8470u) {
        ctx->pc = 0x3C8470u;
            // 0x3c8470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C8474u;
        goto label_3c8474;
    }
    ctx->pc = 0x3C846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8474u);
        ctx->pc = 0x3C8470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C846Cu;
            // 0x3c8470: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8474u; }
            if (ctx->pc != 0x3C8474u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8474u;
label_3c8474:
    // 0x3c8474: 0x1000003d  b           . + 4 + (0x3D << 2)
label_3c8478:
    if (ctx->pc == 0x3C8478u) {
        ctx->pc = 0x3C847Cu;
        goto label_3c847c;
    }
    ctx->pc = 0x3C8474u;
    {
        const bool branch_taken_0x3c8474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8474) {
            ctx->pc = 0x3C856Cu;
            goto label_3c856c;
        }
    }
    ctx->pc = 0x3C847Cu;
label_3c847c:
    // 0x3c847c: 0xc6200054  lwc1        $f0, 0x54($s1)
    ctx->pc = 0x3c847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3c8480:
    // 0x3c8480: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8480u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c8484:
    // 0x3c8484: 0xe6200054  swc1        $f0, 0x54($s1)
    ctx->pc = 0x3c8484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 84), bits); }
label_3c8488:
    // 0x3c8488: 0xc6220068  lwc1        $f2, 0x68($s1)
    ctx->pc = 0x3c8488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c848c:
    // 0x3c848c: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x3c848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c8490:
    // 0x3c8490: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x3c8490u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c8494:
    // 0x3c8494: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3c8498:
    if (ctx->pc == 0x3C8498u) {
        ctx->pc = 0x3C8498u;
            // 0x3c8498: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->pc = 0x3C849Cu;
        goto label_3c849c;
    }
    ctx->pc = 0x3C8494u;
    {
        const bool branch_taken_0x3c8494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c8494) {
            ctx->pc = 0x3C8498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8494u;
            // 0x3c8498: 0x3c033f00  lui         $v1, 0x3F00 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C84B8u;
            goto label_3c84b8;
        }
    }
    ctx->pc = 0x3C849Cu;
label_3c849c:
    // 0x3c849c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3c849cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3c84a0:
    // 0x3c84a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3c84a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c84a4:
    // 0x3c84a4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3c84a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3c84a8:
    // 0x3c84a8: 0x320f809  jalr        $t9
label_3c84ac:
    if (ctx->pc == 0x3C84ACu) {
        ctx->pc = 0x3C84ACu;
            // 0x3c84ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C84B0u;
        goto label_3c84b0;
    }
    ctx->pc = 0x3C84A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C84B0u);
        ctx->pc = 0x3C84ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C84A8u;
            // 0x3c84ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C84B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C84B0u; }
            if (ctx->pc != 0x3C84B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3C84B0u;
label_3c84b0:
    // 0x3c84b0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_3c84b4:
    if (ctx->pc == 0x3C84B4u) {
        ctx->pc = 0x3C84B4u;
            // 0x3c84b4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->pc = 0x3C84B8u;
        goto label_3c84b8;
    }
    ctx->pc = 0x3C84B0u;
    {
        const bool branch_taken_0x3c84b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C84B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C84B0u;
            // 0x3c84b4: 0xae200054  sw          $zero, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c84b0) {
            ctx->pc = 0x3C856Cu;
            goto label_3c856c;
        }
    }
    ctx->pc = 0x3C84B8u;
label_3c84b8:
    // 0x3c84b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3c84b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c84bc:
    // 0x3c84bc: 0x0  nop
    ctx->pc = 0x3c84bcu;
    // NOP
label_3c84c0:
    // 0x3c84c0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3c84c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_3c84c4:
    // 0x3c84c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3c84c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3c84c8:
    // 0x3c84c8: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_3c84cc:
    if (ctx->pc == 0x3C84CCu) {
        ctx->pc = 0x3C84CCu;
            // 0x3c84cc: 0x86240062  lh          $a0, 0x62($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
        ctx->pc = 0x3C84D0u;
        goto label_3c84d0;
    }
    ctx->pc = 0x3C84C8u;
    {
        const bool branch_taken_0x3c84c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3c84c8) {
            ctx->pc = 0x3C84CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C84C8u;
            // 0x3c84cc: 0x86240062  lh          $a0, 0x62($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C84ECu;
            goto label_3c84ec;
        }
    }
    ctx->pc = 0x3C84D0u;
label_3c84d0:
    // 0x3c84d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c84d4:
    // 0x3c84d4: 0x8c6365a8  lw          $v1, 0x65A8($v1)
    ctx->pc = 0x3c84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 26024)));
label_3c84d8:
    // 0x3c84d8: 0x14710003  bne         $v1, $s1, . + 4 + (0x3 << 2)
label_3c84dc:
    if (ctx->pc == 0x3C84DCu) {
        ctx->pc = 0x3C84E0u;
        goto label_3c84e0;
    }
    ctx->pc = 0x3C84D8u;
    {
        const bool branch_taken_0x3c84d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x3c84d8) {
            ctx->pc = 0x3C84E8u;
            goto label_3c84e8;
        }
    }
    ctx->pc = 0x3C84E0u;
label_3c84e0:
    // 0x3c84e0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3c84e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_3c84e4:
    // 0x3c84e4: 0xac6065a8  sw          $zero, 0x65A8($v1)
    ctx->pc = 0x3c84e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 26024), GPR_U32(ctx, 0));
label_3c84e8:
    // 0x3c84e8: 0x86240062  lh          $a0, 0x62($s1)
    ctx->pc = 0x3c84e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 98)));
label_3c84ec:
    // 0x3c84ec: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x3c84ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3c84f0:
    // 0x3c84f0: 0x86230066  lh          $v1, 0x66($s1)
    ctx->pc = 0x3c84f0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 102)));
label_3c84f4:
    // 0x3c84f4: 0xc6210068  lwc1        $f1, 0x68($s1)
    ctx->pc = 0x3c84f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3c84f8:
    // 0x3c84f8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3c84f8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3c84fc:
    // 0x3c84fc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x3c84fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3c8500:
    // 0x3c8500: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3c8500u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3c8504:
    // 0x3c8504: 0x0  nop
    ctx->pc = 0x3c8504u;
    // NOP
label_3c8508:
    // 0x3c8508: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3c8508u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3c850c:
    // 0x3c850c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x3c850cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_3c8510:
    // 0x3c8510: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x3c8510u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[1];
label_3c8514:
    // 0x3c8514: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3c8514u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3c8518:
    // 0x3c8518: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8518u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_3c851c:
    // 0x3c851c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c851cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3c8520:
    // 0x3c8520: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x3c8520u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_3c8524:
    // 0x3c8524: 0x10000011  b           . + 4 + (0x11 << 2)
label_3c8528:
    if (ctx->pc == 0x3C8528u) {
        ctx->pc = 0x3C8528u;
            // 0x3c8528: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3C852Cu;
        goto label_3c852c;
    }
    ctx->pc = 0x3C8524u;
    {
        const bool branch_taken_0x3c8524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8524u;
            // 0x3c8528: 0xa6230060  sh          $v1, 0x60($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8524) {
            ctx->pc = 0x3C856Cu;
            goto label_3c856c;
        }
    }
    ctx->pc = 0x3C852Cu;
label_3c852c:
    // 0x3c852c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3c852cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3c8530:
    // 0x3c8530: 0x320f809  jalr        $t9
label_3c8534:
    if (ctx->pc == 0x3C8534u) {
        ctx->pc = 0x3C8538u;
        goto label_3c8538;
    }
    ctx->pc = 0x3C8530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3C8538u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3C8538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3C8538u; }
            if (ctx->pc != 0x3C8538u) { return; }
        }
        }
    }
    ctx->pc = 0x3C8538u;
label_3c8538:
    // 0x3c8538: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c853c:
    if (ctx->pc == 0x3C853Cu) {
        ctx->pc = 0x3C8540u;
        goto label_3c8540;
    }
    ctx->pc = 0x3C8538u;
    {
        const bool branch_taken_0x3c8538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8538) {
            ctx->pc = 0x3C856Cu;
            goto label_3c856c;
        }
    }
    ctx->pc = 0x3C8540u;
label_3c8540:
    // 0x3c8540: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8544:
    // 0x3c8544: 0x8c4265a8  lw          $v0, 0x65A8($v0)
    ctx->pc = 0x3c8544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26024)));
label_3c8548:
    // 0x3c8548: 0x14510003  bne         $v0, $s1, . + 4 + (0x3 << 2)
label_3c854c:
    if (ctx->pc == 0x3C854Cu) {
        ctx->pc = 0x3C8550u;
        goto label_3c8550;
    }
    ctx->pc = 0x3C8548u;
    {
        const bool branch_taken_0x3c8548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x3c8548) {
            ctx->pc = 0x3C8558u;
            goto label_3c8558;
        }
    }
    ctx->pc = 0x3C8550u;
label_3c8550:
    // 0x3c8550: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3c8550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3c8554:
    // 0x3c8554: 0xac4065a8  sw          $zero, 0x65A8($v0)
    ctx->pc = 0x3c8554u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26024), GPR_U32(ctx, 0));
label_3c8558:
    // 0x3c8558: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3c8558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3c855c:
    // 0x3c855c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3c855cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c8560:
    // 0x3c8560: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x3c8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3c8564:
    // 0x3c8564: 0xc057b7c  jal         func_15EDF0
label_3c8568:
    if (ctx->pc == 0x3C8568u) {
        ctx->pc = 0x3C8568u;
            // 0x3c8568: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x3C856Cu;
        goto label_3c856c;
    }
    ctx->pc = 0x3C8564u;
    SET_GPR_U32(ctx, 31, 0x3C856Cu);
    ctx->pc = 0x3C8568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8564u;
            // 0x3c8568: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C856Cu; }
        if (ctx->pc != 0x3C856Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C856Cu; }
        if (ctx->pc != 0x3C856Cu) { return; }
    }
    ctx->pc = 0x3C856Cu;
label_3c856c:
    // 0x3c856c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c856cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c8570:
    // 0x3c8570: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c8570u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c8574:
    // 0x3c8574: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c8574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c8578:
    // 0x3c8578: 0x3e00008  jr          $ra
label_3c857c:
    if (ctx->pc == 0x3C857Cu) {
        ctx->pc = 0x3C857Cu;
            // 0x3c857c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C8580u;
        goto label_3c8580;
    }
    ctx->pc = 0x3C8578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C857Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8578u;
            // 0x3c857c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3C8580u;
label_3c8580:
    // 0x3c8580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3c8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3c8584:
    // 0x3c8584: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3c8584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3c8588:
    // 0x3c8588: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3c8588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3c858c:
    // 0x3c858c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3c858cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3c8590:
    // 0x3c8590: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3c8590u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3c8594:
    // 0x3c8594: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_3c8598:
    if (ctx->pc == 0x3C8598u) {
        ctx->pc = 0x3C8598u;
            // 0x3c8598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C859Cu;
        goto label_3c859c;
    }
    ctx->pc = 0x3C8594u;
    {
        const bool branch_taken_0x3c8594 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C8594u;
            // 0x3c8598: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8594) {
            ctx->pc = 0x3C85C8u;
            goto label_3c85c8;
        }
    }
    ctx->pc = 0x3C859Cu;
label_3c859c:
    // 0x3c859c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3c859cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3c85a0:
    // 0x3c85a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c85a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c85a4:
    // 0x3c85a4: 0x24428e10  addiu       $v0, $v0, -0x71F0
    ctx->pc = 0x3c85a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938128));
label_3c85a8:
    // 0x3c85a8: 0xc0ee744  jal         func_3B9D10
label_3c85ac:
    if (ctx->pc == 0x3C85ACu) {
        ctx->pc = 0x3C85ACu;
            // 0x3c85ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3C85B0u;
        goto label_3c85b0;
    }
    ctx->pc = 0x3C85A8u;
    SET_GPR_U32(ctx, 31, 0x3C85B0u);
    ctx->pc = 0x3C85ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C85A8u;
            // 0x3c85ac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3B9D10u;
    if (runtime->hasFunction(0x3B9D10u)) {
        auto targetFn = runtime->lookupFunction(0x3B9D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C85B0u; }
        if (ctx->pc != 0x3C85B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003B9D10_0x3b9d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C85B0u; }
        if (ctx->pc != 0x3C85B0u) { return; }
    }
    ctx->pc = 0x3C85B0u;
label_3c85b0:
    // 0x3c85b0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3c85b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3c85b4:
    // 0x3c85b4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3c85b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3c85b8:
    // 0x3c85b8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3c85bc:
    if (ctx->pc == 0x3C85BCu) {
        ctx->pc = 0x3C85BCu;
            // 0x3c85bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C85C0u;
        goto label_3c85c0;
    }
    ctx->pc = 0x3C85B8u;
    {
        const bool branch_taken_0x3c85b8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3c85b8) {
            ctx->pc = 0x3C85BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3C85B8u;
            // 0x3c85bc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3C85CCu;
            goto label_3c85cc;
        }
    }
    ctx->pc = 0x3C85C0u;
label_3c85c0:
    // 0x3c85c0: 0xc0400a8  jal         func_1002A0
label_3c85c4:
    if (ctx->pc == 0x3C85C4u) {
        ctx->pc = 0x3C85C4u;
            // 0x3c85c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3C85C8u;
        goto label_3c85c8;
    }
    ctx->pc = 0x3C85C0u;
    SET_GPR_U32(ctx, 31, 0x3C85C8u);
    ctx->pc = 0x3C85C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3C85C0u;
            // 0x3c85c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C85C8u; }
        if (ctx->pc != 0x3C85C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3C85C8u; }
        if (ctx->pc != 0x3C85C8u) { return; }
    }
    ctx->pc = 0x3C85C8u;
label_3c85c8:
    // 0x3c85c8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3c85c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c85cc:
    // 0x3c85cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3c85ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3c85d0:
    // 0x3c85d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3c85d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3c85d4:
    // 0x3c85d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3c85d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3c85d8:
    // 0x3c85d8: 0x3e00008  jr          $ra
label_3c85dc:
    if (ctx->pc == 0x3C85DCu) {
        ctx->pc = 0x3C85DCu;
            // 0x3c85dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3C85E0u;
        goto label_fallthrough_0x3c85d8;
    }
    ctx->pc = 0x3C85D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C85DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3C85D8u;
            // 0x3c85dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3c85d8:
    ctx->pc = 0x3C85E0u;
}
