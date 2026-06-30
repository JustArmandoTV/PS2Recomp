#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00347B30
// Address: 0x347b30 - 0x348270
void sub_00347B30_0x347b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00347B30_0x347b30");
#endif

    switch (ctx->pc) {
        case 0x347b30u: goto label_347b30;
        case 0x347b34u: goto label_347b34;
        case 0x347b38u: goto label_347b38;
        case 0x347b3cu: goto label_347b3c;
        case 0x347b40u: goto label_347b40;
        case 0x347b44u: goto label_347b44;
        case 0x347b48u: goto label_347b48;
        case 0x347b4cu: goto label_347b4c;
        case 0x347b50u: goto label_347b50;
        case 0x347b54u: goto label_347b54;
        case 0x347b58u: goto label_347b58;
        case 0x347b5cu: goto label_347b5c;
        case 0x347b60u: goto label_347b60;
        case 0x347b64u: goto label_347b64;
        case 0x347b68u: goto label_347b68;
        case 0x347b6cu: goto label_347b6c;
        case 0x347b70u: goto label_347b70;
        case 0x347b74u: goto label_347b74;
        case 0x347b78u: goto label_347b78;
        case 0x347b7cu: goto label_347b7c;
        case 0x347b80u: goto label_347b80;
        case 0x347b84u: goto label_347b84;
        case 0x347b88u: goto label_347b88;
        case 0x347b8cu: goto label_347b8c;
        case 0x347b90u: goto label_347b90;
        case 0x347b94u: goto label_347b94;
        case 0x347b98u: goto label_347b98;
        case 0x347b9cu: goto label_347b9c;
        case 0x347ba0u: goto label_347ba0;
        case 0x347ba4u: goto label_347ba4;
        case 0x347ba8u: goto label_347ba8;
        case 0x347bacu: goto label_347bac;
        case 0x347bb0u: goto label_347bb0;
        case 0x347bb4u: goto label_347bb4;
        case 0x347bb8u: goto label_347bb8;
        case 0x347bbcu: goto label_347bbc;
        case 0x347bc0u: goto label_347bc0;
        case 0x347bc4u: goto label_347bc4;
        case 0x347bc8u: goto label_347bc8;
        case 0x347bccu: goto label_347bcc;
        case 0x347bd0u: goto label_347bd0;
        case 0x347bd4u: goto label_347bd4;
        case 0x347bd8u: goto label_347bd8;
        case 0x347bdcu: goto label_347bdc;
        case 0x347be0u: goto label_347be0;
        case 0x347be4u: goto label_347be4;
        case 0x347be8u: goto label_347be8;
        case 0x347becu: goto label_347bec;
        case 0x347bf0u: goto label_347bf0;
        case 0x347bf4u: goto label_347bf4;
        case 0x347bf8u: goto label_347bf8;
        case 0x347bfcu: goto label_347bfc;
        case 0x347c00u: goto label_347c00;
        case 0x347c04u: goto label_347c04;
        case 0x347c08u: goto label_347c08;
        case 0x347c0cu: goto label_347c0c;
        case 0x347c10u: goto label_347c10;
        case 0x347c14u: goto label_347c14;
        case 0x347c18u: goto label_347c18;
        case 0x347c1cu: goto label_347c1c;
        case 0x347c20u: goto label_347c20;
        case 0x347c24u: goto label_347c24;
        case 0x347c28u: goto label_347c28;
        case 0x347c2cu: goto label_347c2c;
        case 0x347c30u: goto label_347c30;
        case 0x347c34u: goto label_347c34;
        case 0x347c38u: goto label_347c38;
        case 0x347c3cu: goto label_347c3c;
        case 0x347c40u: goto label_347c40;
        case 0x347c44u: goto label_347c44;
        case 0x347c48u: goto label_347c48;
        case 0x347c4cu: goto label_347c4c;
        case 0x347c50u: goto label_347c50;
        case 0x347c54u: goto label_347c54;
        case 0x347c58u: goto label_347c58;
        case 0x347c5cu: goto label_347c5c;
        case 0x347c60u: goto label_347c60;
        case 0x347c64u: goto label_347c64;
        case 0x347c68u: goto label_347c68;
        case 0x347c6cu: goto label_347c6c;
        case 0x347c70u: goto label_347c70;
        case 0x347c74u: goto label_347c74;
        case 0x347c78u: goto label_347c78;
        case 0x347c7cu: goto label_347c7c;
        case 0x347c80u: goto label_347c80;
        case 0x347c84u: goto label_347c84;
        case 0x347c88u: goto label_347c88;
        case 0x347c8cu: goto label_347c8c;
        case 0x347c90u: goto label_347c90;
        case 0x347c94u: goto label_347c94;
        case 0x347c98u: goto label_347c98;
        case 0x347c9cu: goto label_347c9c;
        case 0x347ca0u: goto label_347ca0;
        case 0x347ca4u: goto label_347ca4;
        case 0x347ca8u: goto label_347ca8;
        case 0x347cacu: goto label_347cac;
        case 0x347cb0u: goto label_347cb0;
        case 0x347cb4u: goto label_347cb4;
        case 0x347cb8u: goto label_347cb8;
        case 0x347cbcu: goto label_347cbc;
        case 0x347cc0u: goto label_347cc0;
        case 0x347cc4u: goto label_347cc4;
        case 0x347cc8u: goto label_347cc8;
        case 0x347cccu: goto label_347ccc;
        case 0x347cd0u: goto label_347cd0;
        case 0x347cd4u: goto label_347cd4;
        case 0x347cd8u: goto label_347cd8;
        case 0x347cdcu: goto label_347cdc;
        case 0x347ce0u: goto label_347ce0;
        case 0x347ce4u: goto label_347ce4;
        case 0x347ce8u: goto label_347ce8;
        case 0x347cecu: goto label_347cec;
        case 0x347cf0u: goto label_347cf0;
        case 0x347cf4u: goto label_347cf4;
        case 0x347cf8u: goto label_347cf8;
        case 0x347cfcu: goto label_347cfc;
        case 0x347d00u: goto label_347d00;
        case 0x347d04u: goto label_347d04;
        case 0x347d08u: goto label_347d08;
        case 0x347d0cu: goto label_347d0c;
        case 0x347d10u: goto label_347d10;
        case 0x347d14u: goto label_347d14;
        case 0x347d18u: goto label_347d18;
        case 0x347d1cu: goto label_347d1c;
        case 0x347d20u: goto label_347d20;
        case 0x347d24u: goto label_347d24;
        case 0x347d28u: goto label_347d28;
        case 0x347d2cu: goto label_347d2c;
        case 0x347d30u: goto label_347d30;
        case 0x347d34u: goto label_347d34;
        case 0x347d38u: goto label_347d38;
        case 0x347d3cu: goto label_347d3c;
        case 0x347d40u: goto label_347d40;
        case 0x347d44u: goto label_347d44;
        case 0x347d48u: goto label_347d48;
        case 0x347d4cu: goto label_347d4c;
        case 0x347d50u: goto label_347d50;
        case 0x347d54u: goto label_347d54;
        case 0x347d58u: goto label_347d58;
        case 0x347d5cu: goto label_347d5c;
        case 0x347d60u: goto label_347d60;
        case 0x347d64u: goto label_347d64;
        case 0x347d68u: goto label_347d68;
        case 0x347d6cu: goto label_347d6c;
        case 0x347d70u: goto label_347d70;
        case 0x347d74u: goto label_347d74;
        case 0x347d78u: goto label_347d78;
        case 0x347d7cu: goto label_347d7c;
        case 0x347d80u: goto label_347d80;
        case 0x347d84u: goto label_347d84;
        case 0x347d88u: goto label_347d88;
        case 0x347d8cu: goto label_347d8c;
        case 0x347d90u: goto label_347d90;
        case 0x347d94u: goto label_347d94;
        case 0x347d98u: goto label_347d98;
        case 0x347d9cu: goto label_347d9c;
        case 0x347da0u: goto label_347da0;
        case 0x347da4u: goto label_347da4;
        case 0x347da8u: goto label_347da8;
        case 0x347dacu: goto label_347dac;
        case 0x347db0u: goto label_347db0;
        case 0x347db4u: goto label_347db4;
        case 0x347db8u: goto label_347db8;
        case 0x347dbcu: goto label_347dbc;
        case 0x347dc0u: goto label_347dc0;
        case 0x347dc4u: goto label_347dc4;
        case 0x347dc8u: goto label_347dc8;
        case 0x347dccu: goto label_347dcc;
        case 0x347dd0u: goto label_347dd0;
        case 0x347dd4u: goto label_347dd4;
        case 0x347dd8u: goto label_347dd8;
        case 0x347ddcu: goto label_347ddc;
        case 0x347de0u: goto label_347de0;
        case 0x347de4u: goto label_347de4;
        case 0x347de8u: goto label_347de8;
        case 0x347decu: goto label_347dec;
        case 0x347df0u: goto label_347df0;
        case 0x347df4u: goto label_347df4;
        case 0x347df8u: goto label_347df8;
        case 0x347dfcu: goto label_347dfc;
        case 0x347e00u: goto label_347e00;
        case 0x347e04u: goto label_347e04;
        case 0x347e08u: goto label_347e08;
        case 0x347e0cu: goto label_347e0c;
        case 0x347e10u: goto label_347e10;
        case 0x347e14u: goto label_347e14;
        case 0x347e18u: goto label_347e18;
        case 0x347e1cu: goto label_347e1c;
        case 0x347e20u: goto label_347e20;
        case 0x347e24u: goto label_347e24;
        case 0x347e28u: goto label_347e28;
        case 0x347e2cu: goto label_347e2c;
        case 0x347e30u: goto label_347e30;
        case 0x347e34u: goto label_347e34;
        case 0x347e38u: goto label_347e38;
        case 0x347e3cu: goto label_347e3c;
        case 0x347e40u: goto label_347e40;
        case 0x347e44u: goto label_347e44;
        case 0x347e48u: goto label_347e48;
        case 0x347e4cu: goto label_347e4c;
        case 0x347e50u: goto label_347e50;
        case 0x347e54u: goto label_347e54;
        case 0x347e58u: goto label_347e58;
        case 0x347e5cu: goto label_347e5c;
        case 0x347e60u: goto label_347e60;
        case 0x347e64u: goto label_347e64;
        case 0x347e68u: goto label_347e68;
        case 0x347e6cu: goto label_347e6c;
        case 0x347e70u: goto label_347e70;
        case 0x347e74u: goto label_347e74;
        case 0x347e78u: goto label_347e78;
        case 0x347e7cu: goto label_347e7c;
        case 0x347e80u: goto label_347e80;
        case 0x347e84u: goto label_347e84;
        case 0x347e88u: goto label_347e88;
        case 0x347e8cu: goto label_347e8c;
        case 0x347e90u: goto label_347e90;
        case 0x347e94u: goto label_347e94;
        case 0x347e98u: goto label_347e98;
        case 0x347e9cu: goto label_347e9c;
        case 0x347ea0u: goto label_347ea0;
        case 0x347ea4u: goto label_347ea4;
        case 0x347ea8u: goto label_347ea8;
        case 0x347eacu: goto label_347eac;
        case 0x347eb0u: goto label_347eb0;
        case 0x347eb4u: goto label_347eb4;
        case 0x347eb8u: goto label_347eb8;
        case 0x347ebcu: goto label_347ebc;
        case 0x347ec0u: goto label_347ec0;
        case 0x347ec4u: goto label_347ec4;
        case 0x347ec8u: goto label_347ec8;
        case 0x347eccu: goto label_347ecc;
        case 0x347ed0u: goto label_347ed0;
        case 0x347ed4u: goto label_347ed4;
        case 0x347ed8u: goto label_347ed8;
        case 0x347edcu: goto label_347edc;
        case 0x347ee0u: goto label_347ee0;
        case 0x347ee4u: goto label_347ee4;
        case 0x347ee8u: goto label_347ee8;
        case 0x347eecu: goto label_347eec;
        case 0x347ef0u: goto label_347ef0;
        case 0x347ef4u: goto label_347ef4;
        case 0x347ef8u: goto label_347ef8;
        case 0x347efcu: goto label_347efc;
        case 0x347f00u: goto label_347f00;
        case 0x347f04u: goto label_347f04;
        case 0x347f08u: goto label_347f08;
        case 0x347f0cu: goto label_347f0c;
        case 0x347f10u: goto label_347f10;
        case 0x347f14u: goto label_347f14;
        case 0x347f18u: goto label_347f18;
        case 0x347f1cu: goto label_347f1c;
        case 0x347f20u: goto label_347f20;
        case 0x347f24u: goto label_347f24;
        case 0x347f28u: goto label_347f28;
        case 0x347f2cu: goto label_347f2c;
        case 0x347f30u: goto label_347f30;
        case 0x347f34u: goto label_347f34;
        case 0x347f38u: goto label_347f38;
        case 0x347f3cu: goto label_347f3c;
        case 0x347f40u: goto label_347f40;
        case 0x347f44u: goto label_347f44;
        case 0x347f48u: goto label_347f48;
        case 0x347f4cu: goto label_347f4c;
        case 0x347f50u: goto label_347f50;
        case 0x347f54u: goto label_347f54;
        case 0x347f58u: goto label_347f58;
        case 0x347f5cu: goto label_347f5c;
        case 0x347f60u: goto label_347f60;
        case 0x347f64u: goto label_347f64;
        case 0x347f68u: goto label_347f68;
        case 0x347f6cu: goto label_347f6c;
        case 0x347f70u: goto label_347f70;
        case 0x347f74u: goto label_347f74;
        case 0x347f78u: goto label_347f78;
        case 0x347f7cu: goto label_347f7c;
        case 0x347f80u: goto label_347f80;
        case 0x347f84u: goto label_347f84;
        case 0x347f88u: goto label_347f88;
        case 0x347f8cu: goto label_347f8c;
        case 0x347f90u: goto label_347f90;
        case 0x347f94u: goto label_347f94;
        case 0x347f98u: goto label_347f98;
        case 0x347f9cu: goto label_347f9c;
        case 0x347fa0u: goto label_347fa0;
        case 0x347fa4u: goto label_347fa4;
        case 0x347fa8u: goto label_347fa8;
        case 0x347facu: goto label_347fac;
        case 0x347fb0u: goto label_347fb0;
        case 0x347fb4u: goto label_347fb4;
        case 0x347fb8u: goto label_347fb8;
        case 0x347fbcu: goto label_347fbc;
        case 0x347fc0u: goto label_347fc0;
        case 0x347fc4u: goto label_347fc4;
        case 0x347fc8u: goto label_347fc8;
        case 0x347fccu: goto label_347fcc;
        case 0x347fd0u: goto label_347fd0;
        case 0x347fd4u: goto label_347fd4;
        case 0x347fd8u: goto label_347fd8;
        case 0x347fdcu: goto label_347fdc;
        case 0x347fe0u: goto label_347fe0;
        case 0x347fe4u: goto label_347fe4;
        case 0x347fe8u: goto label_347fe8;
        case 0x347fecu: goto label_347fec;
        case 0x347ff0u: goto label_347ff0;
        case 0x347ff4u: goto label_347ff4;
        case 0x347ff8u: goto label_347ff8;
        case 0x347ffcu: goto label_347ffc;
        case 0x348000u: goto label_348000;
        case 0x348004u: goto label_348004;
        case 0x348008u: goto label_348008;
        case 0x34800cu: goto label_34800c;
        case 0x348010u: goto label_348010;
        case 0x348014u: goto label_348014;
        case 0x348018u: goto label_348018;
        case 0x34801cu: goto label_34801c;
        case 0x348020u: goto label_348020;
        case 0x348024u: goto label_348024;
        case 0x348028u: goto label_348028;
        case 0x34802cu: goto label_34802c;
        case 0x348030u: goto label_348030;
        case 0x348034u: goto label_348034;
        case 0x348038u: goto label_348038;
        case 0x34803cu: goto label_34803c;
        case 0x348040u: goto label_348040;
        case 0x348044u: goto label_348044;
        case 0x348048u: goto label_348048;
        case 0x34804cu: goto label_34804c;
        case 0x348050u: goto label_348050;
        case 0x348054u: goto label_348054;
        case 0x348058u: goto label_348058;
        case 0x34805cu: goto label_34805c;
        case 0x348060u: goto label_348060;
        case 0x348064u: goto label_348064;
        case 0x348068u: goto label_348068;
        case 0x34806cu: goto label_34806c;
        case 0x348070u: goto label_348070;
        case 0x348074u: goto label_348074;
        case 0x348078u: goto label_348078;
        case 0x34807cu: goto label_34807c;
        case 0x348080u: goto label_348080;
        case 0x348084u: goto label_348084;
        case 0x348088u: goto label_348088;
        case 0x34808cu: goto label_34808c;
        case 0x348090u: goto label_348090;
        case 0x348094u: goto label_348094;
        case 0x348098u: goto label_348098;
        case 0x34809cu: goto label_34809c;
        case 0x3480a0u: goto label_3480a0;
        case 0x3480a4u: goto label_3480a4;
        case 0x3480a8u: goto label_3480a8;
        case 0x3480acu: goto label_3480ac;
        case 0x3480b0u: goto label_3480b0;
        case 0x3480b4u: goto label_3480b4;
        case 0x3480b8u: goto label_3480b8;
        case 0x3480bcu: goto label_3480bc;
        case 0x3480c0u: goto label_3480c0;
        case 0x3480c4u: goto label_3480c4;
        case 0x3480c8u: goto label_3480c8;
        case 0x3480ccu: goto label_3480cc;
        case 0x3480d0u: goto label_3480d0;
        case 0x3480d4u: goto label_3480d4;
        case 0x3480d8u: goto label_3480d8;
        case 0x3480dcu: goto label_3480dc;
        case 0x3480e0u: goto label_3480e0;
        case 0x3480e4u: goto label_3480e4;
        case 0x3480e8u: goto label_3480e8;
        case 0x3480ecu: goto label_3480ec;
        case 0x3480f0u: goto label_3480f0;
        case 0x3480f4u: goto label_3480f4;
        case 0x3480f8u: goto label_3480f8;
        case 0x3480fcu: goto label_3480fc;
        case 0x348100u: goto label_348100;
        case 0x348104u: goto label_348104;
        case 0x348108u: goto label_348108;
        case 0x34810cu: goto label_34810c;
        case 0x348110u: goto label_348110;
        case 0x348114u: goto label_348114;
        case 0x348118u: goto label_348118;
        case 0x34811cu: goto label_34811c;
        case 0x348120u: goto label_348120;
        case 0x348124u: goto label_348124;
        case 0x348128u: goto label_348128;
        case 0x34812cu: goto label_34812c;
        case 0x348130u: goto label_348130;
        case 0x348134u: goto label_348134;
        case 0x348138u: goto label_348138;
        case 0x34813cu: goto label_34813c;
        case 0x348140u: goto label_348140;
        case 0x348144u: goto label_348144;
        case 0x348148u: goto label_348148;
        case 0x34814cu: goto label_34814c;
        case 0x348150u: goto label_348150;
        case 0x348154u: goto label_348154;
        case 0x348158u: goto label_348158;
        case 0x34815cu: goto label_34815c;
        case 0x348160u: goto label_348160;
        case 0x348164u: goto label_348164;
        case 0x348168u: goto label_348168;
        case 0x34816cu: goto label_34816c;
        case 0x348170u: goto label_348170;
        case 0x348174u: goto label_348174;
        case 0x348178u: goto label_348178;
        case 0x34817cu: goto label_34817c;
        case 0x348180u: goto label_348180;
        case 0x348184u: goto label_348184;
        case 0x348188u: goto label_348188;
        case 0x34818cu: goto label_34818c;
        case 0x348190u: goto label_348190;
        case 0x348194u: goto label_348194;
        case 0x348198u: goto label_348198;
        case 0x34819cu: goto label_34819c;
        case 0x3481a0u: goto label_3481a0;
        case 0x3481a4u: goto label_3481a4;
        case 0x3481a8u: goto label_3481a8;
        case 0x3481acu: goto label_3481ac;
        case 0x3481b0u: goto label_3481b0;
        case 0x3481b4u: goto label_3481b4;
        case 0x3481b8u: goto label_3481b8;
        case 0x3481bcu: goto label_3481bc;
        case 0x3481c0u: goto label_3481c0;
        case 0x3481c4u: goto label_3481c4;
        case 0x3481c8u: goto label_3481c8;
        case 0x3481ccu: goto label_3481cc;
        case 0x3481d0u: goto label_3481d0;
        case 0x3481d4u: goto label_3481d4;
        case 0x3481d8u: goto label_3481d8;
        case 0x3481dcu: goto label_3481dc;
        case 0x3481e0u: goto label_3481e0;
        case 0x3481e4u: goto label_3481e4;
        case 0x3481e8u: goto label_3481e8;
        case 0x3481ecu: goto label_3481ec;
        case 0x3481f0u: goto label_3481f0;
        case 0x3481f4u: goto label_3481f4;
        case 0x3481f8u: goto label_3481f8;
        case 0x3481fcu: goto label_3481fc;
        case 0x348200u: goto label_348200;
        case 0x348204u: goto label_348204;
        case 0x348208u: goto label_348208;
        case 0x34820cu: goto label_34820c;
        case 0x348210u: goto label_348210;
        case 0x348214u: goto label_348214;
        case 0x348218u: goto label_348218;
        case 0x34821cu: goto label_34821c;
        case 0x348220u: goto label_348220;
        case 0x348224u: goto label_348224;
        case 0x348228u: goto label_348228;
        case 0x34822cu: goto label_34822c;
        case 0x348230u: goto label_348230;
        case 0x348234u: goto label_348234;
        case 0x348238u: goto label_348238;
        case 0x34823cu: goto label_34823c;
        case 0x348240u: goto label_348240;
        case 0x348244u: goto label_348244;
        case 0x348248u: goto label_348248;
        case 0x34824cu: goto label_34824c;
        case 0x348250u: goto label_348250;
        case 0x348254u: goto label_348254;
        case 0x348258u: goto label_348258;
        case 0x34825cu: goto label_34825c;
        case 0x348260u: goto label_348260;
        case 0x348264u: goto label_348264;
        case 0x348268u: goto label_348268;
        case 0x34826cu: goto label_34826c;
        default: break;
    }

    ctx->pc = 0x347b30u;

label_347b30:
    // 0x347b30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x347b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_347b34:
    // 0x347b34: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x347b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_347b38:
    // 0x347b38: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x347b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_347b3c:
    // 0x347b3c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_347b40:
    // 0x347b40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_347b44:
    // 0x347b44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x347b44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347b48:
    // 0x347b48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_347b4c:
    // 0x347b4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347b50:
    // 0x347b50: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x347b50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_347b54:
    // 0x347b54: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x347b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_347b58:
    // 0x347b58: 0xc10ca68  jal         func_4329A0
label_347b5c:
    if (ctx->pc == 0x347B5Cu) {
        ctx->pc = 0x347B5Cu;
            // 0x347b5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x347B60u;
        goto label_347b60;
    }
    ctx->pc = 0x347B58u;
    SET_GPR_U32(ctx, 31, 0x347B60u);
    ctx->pc = 0x347B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347B58u;
            // 0x347b5c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B60u; }
        if (ctx->pc != 0x347B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347B60u; }
        if (ctx->pc != 0x347B60u) { return; }
    }
    ctx->pc = 0x347B60u;
label_347b60:
    // 0x347b60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x347b60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_347b64:
    // 0x347b64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_347b68:
    // 0x347b68: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x347b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_347b6c:
    // 0x347b6c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x347b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_347b70:
    // 0x347b70: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x347b70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_347b74:
    // 0x347b74: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x347b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_347b78:
    // 0x347b78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x347b78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_347b7c:
    // 0x347b7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x347b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_347b80:
    // 0x347b80: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x347b80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_347b84:
    // 0x347b84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_347b88:
    // 0x347b88: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x347b88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_347b8c:
    // 0x347b8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x347b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_347b90:
    // 0x347b90: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x347b90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_347b94:
    // 0x347b94: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x347b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_347b98:
    // 0x347b98: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x347b98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_347b9c:
    // 0x347b9c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x347b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_347ba0:
    // 0x347ba0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x347ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_347ba4:
    // 0x347ba4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x347ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_347ba8:
    // 0x347ba8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x347ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_347bac:
    // 0x347bac: 0xc0582cc  jal         func_160B30
label_347bb0:
    if (ctx->pc == 0x347BB0u) {
        ctx->pc = 0x347BB0u;
            // 0x347bb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x347BB4u;
        goto label_347bb4;
    }
    ctx->pc = 0x347BACu;
    SET_GPR_U32(ctx, 31, 0x347BB4u);
    ctx->pc = 0x347BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347BACu;
            // 0x347bb0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347BB4u; }
        if (ctx->pc != 0x347BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347BB4u; }
        if (ctx->pc != 0x347BB4u) { return; }
    }
    ctx->pc = 0x347BB4u;
label_347bb4:
    // 0x347bb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x347bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_347bb8:
    // 0x347bb8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x347bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_347bbc:
    // 0x347bbc: 0x24635878  addiu       $v1, $v1, 0x5878
    ctx->pc = 0x347bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22648));
label_347bc0:
    // 0x347bc0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x347bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_347bc4:
    // 0x347bc4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x347bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_347bc8:
    // 0x347bc8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_347bcc:
    // 0x347bcc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x347bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_347bd0:
    // 0x347bd0: 0xac443ea8  sw          $a0, 0x3EA8($v0)
    ctx->pc = 0x347bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16040), GPR_U32(ctx, 4));
label_347bd4:
    // 0x347bd4: 0x24635890  addiu       $v1, $v1, 0x5890
    ctx->pc = 0x347bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22672));
label_347bd8:
    // 0x347bd8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_347bdc:
    // 0x347bdc: 0x244258c8  addiu       $v0, $v0, 0x58C8
    ctx->pc = 0x347bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22728));
label_347be0:
    // 0x347be0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x347be0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_347be4:
    // 0x347be4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x347be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_347be8:
    // 0x347be8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x347be8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_347bec:
    // 0x347bec: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x347becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_347bf0:
    // 0x347bf0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x347bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_347bf4:
    // 0x347bf4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x347bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_347bf8:
    // 0x347bf8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x347bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_347bfc:
    // 0x347bfc: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x347bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_347c00:
    // 0x347c00: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x347c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_347c04:
    // 0x347c04: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x347c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_347c08:
    // 0x347c08: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x347c08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_347c0c:
    // 0x347c0c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x347c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_347c10:
    // 0x347c10: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x347c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_347c14:
    // 0x347c14: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_347c18:
    if (ctx->pc == 0x347C18u) {
        ctx->pc = 0x347C1Cu;
        goto label_347c1c;
    }
    ctx->pc = 0x347C14u;
    {
        const bool branch_taken_0x347c14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x347c14) {
            ctx->pc = 0x347CB0u;
            goto label_347cb0;
        }
    }
    ctx->pc = 0x347C1Cu;
label_347c1c:
    // 0x347c1c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x347c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_347c20:
    // 0x347c20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x347c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_347c24:
    // 0x347c24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x347c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_347c28:
    // 0x347c28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x347c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_347c2c:
    // 0x347c2c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x347c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_347c30:
    // 0x347c30: 0xc040138  jal         func_1004E0
label_347c34:
    if (ctx->pc == 0x347C34u) {
        ctx->pc = 0x347C34u;
            // 0x347c34: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x347C38u;
        goto label_347c38;
    }
    ctx->pc = 0x347C30u;
    SET_GPR_U32(ctx, 31, 0x347C38u);
    ctx->pc = 0x347C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347C30u;
            // 0x347c34: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C38u; }
        if (ctx->pc != 0x347C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C38u; }
        if (ctx->pc != 0x347C38u) { return; }
    }
    ctx->pc = 0x347C38u;
label_347c38:
    // 0x347c38: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x347c38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_347c3c:
    // 0x347c3c: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x347c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
label_347c40:
    // 0x347c40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x347c40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347c44:
    // 0x347c44: 0x24a57cd0  addiu       $a1, $a1, 0x7CD0
    ctx->pc = 0x347c44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31952));
label_347c48:
    // 0x347c48: 0x24c66a10  addiu       $a2, $a2, 0x6A10
    ctx->pc = 0x347c48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27152));
label_347c4c:
    // 0x347c4c: 0x240700d0  addiu       $a3, $zero, 0xD0
    ctx->pc = 0x347c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_347c50:
    // 0x347c50: 0xc040840  jal         func_102100
label_347c54:
    if (ctx->pc == 0x347C54u) {
        ctx->pc = 0x347C54u;
            // 0x347c54: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347C58u;
        goto label_347c58;
    }
    ctx->pc = 0x347C50u;
    SET_GPR_U32(ctx, 31, 0x347C58u);
    ctx->pc = 0x347C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347C50u;
            // 0x347c54: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C58u; }
        if (ctx->pc != 0x347C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C58u; }
        if (ctx->pc != 0x347C58u) { return; }
    }
    ctx->pc = 0x347C58u;
label_347c58:
    // 0x347c58: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x347c58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_347c5c:
    // 0x347c5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x347c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_347c60:
    // 0x347c60: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x347c60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_347c64:
    // 0x347c64: 0xc0788fc  jal         func_1E23F0
label_347c68:
    if (ctx->pc == 0x347C68u) {
        ctx->pc = 0x347C68u;
            // 0x347c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347C6Cu;
        goto label_347c6c;
    }
    ctx->pc = 0x347C64u;
    SET_GPR_U32(ctx, 31, 0x347C6Cu);
    ctx->pc = 0x347C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347C64u;
            // 0x347c68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C6Cu; }
        if (ctx->pc != 0x347C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C6Cu; }
        if (ctx->pc != 0x347C6Cu) { return; }
    }
    ctx->pc = 0x347C6Cu;
label_347c6c:
    // 0x347c6c: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x347c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_347c70:
    // 0x347c70: 0xc0788fc  jal         func_1E23F0
label_347c74:
    if (ctx->pc == 0x347C74u) {
        ctx->pc = 0x347C74u;
            // 0x347c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347C78u;
        goto label_347c78;
    }
    ctx->pc = 0x347C70u;
    SET_GPR_U32(ctx, 31, 0x347C78u);
    ctx->pc = 0x347C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347C70u;
            // 0x347c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C78u; }
        if (ctx->pc != 0x347C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347C78u; }
        if (ctx->pc != 0x347C78u) { return; }
    }
    ctx->pc = 0x347C78u;
label_347c78:
    // 0x347c78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x347c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_347c7c:
    // 0x347c7c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x347c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_347c80:
    // 0x347c80: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x347c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_347c84:
    // 0x347c84: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x347c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_347c88:
    // 0x347c88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x347c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347c8c:
    // 0x347c8c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x347c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_347c90:
    // 0x347c90: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x347c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_347c94:
    // 0x347c94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x347c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_347c98:
    // 0x347c98: 0xc0a997c  jal         func_2A65F0
label_347c9c:
    if (ctx->pc == 0x347C9Cu) {
        ctx->pc = 0x347C9Cu;
            // 0x347c9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x347CA0u;
        goto label_347ca0;
    }
    ctx->pc = 0x347C98u;
    SET_GPR_U32(ctx, 31, 0x347CA0u);
    ctx->pc = 0x347C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347C98u;
            // 0x347c9c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347CA0u; }
        if (ctx->pc != 0x347CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347CA0u; }
        if (ctx->pc != 0x347CA0u) { return; }
    }
    ctx->pc = 0x347CA0u;
label_347ca0:
    // 0x347ca0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x347ca0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_347ca4:
    // 0x347ca4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x347ca4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_347ca8:
    // 0x347ca8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_347cac:
    if (ctx->pc == 0x347CACu) {
        ctx->pc = 0x347CACu;
            // 0x347cac: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->pc = 0x347CB0u;
        goto label_347cb0;
    }
    ctx->pc = 0x347CA8u;
    {
        const bool branch_taken_0x347ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x347CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347CA8u;
            // 0x347cac: 0x265200d0  addiu       $s2, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347ca8) {
            ctx->pc = 0x347C7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_347c7c;
        }
    }
    ctx->pc = 0x347CB0u;
label_347cb0:
    // 0x347cb0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x347cb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_347cb4:
    // 0x347cb4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x347cb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_347cb8:
    // 0x347cb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x347cb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_347cbc:
    // 0x347cbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x347cbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_347cc0:
    // 0x347cc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347cc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347cc4:
    // 0x347cc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347cc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_347cc8:
    // 0x347cc8: 0x3e00008  jr          $ra
label_347ccc:
    if (ctx->pc == 0x347CCCu) {
        ctx->pc = 0x347CCCu;
            // 0x347ccc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x347CD0u;
        goto label_347cd0;
    }
    ctx->pc = 0x347CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347CC8u;
            // 0x347ccc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347CD0u;
label_347cd0:
    // 0x347cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x347cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_347cd4:
    // 0x347cd4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_347cd8:
    // 0x347cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x347cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_347cdc:
    // 0x347cdc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347ce0:
    // 0x347ce0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347ce4:
    // 0x347ce4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x347ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_347ce8:
    // 0x347ce8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x347ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_347cec:
    // 0x347cec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x347cecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_347cf0:
    // 0x347cf0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x347cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_347cf4:
    // 0x347cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x347cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347cf8:
    // 0x347cf8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x347cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_347cfc:
    // 0x347cfc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x347cfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347d00:
    // 0x347d00: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x347d00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_347d04:
    // 0x347d04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x347d04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_347d08:
    // 0x347d08: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x347d08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_347d0c:
    // 0x347d0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x347d0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_347d10:
    // 0x347d10: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x347d10u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_347d14:
    // 0x347d14: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x347d14u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_347d18:
    // 0x347d18: 0xc04cbd8  jal         func_132F60
label_347d1c:
    if (ctx->pc == 0x347D1Cu) {
        ctx->pc = 0x347D1Cu;
            // 0x347d1c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x347D20u;
        goto label_347d20;
    }
    ctx->pc = 0x347D18u;
    SET_GPR_U32(ctx, 31, 0x347D20u);
    ctx->pc = 0x347D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347D18u;
            // 0x347d1c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347D20u; }
        if (ctx->pc != 0x347D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347D20u; }
        if (ctx->pc != 0x347D20u) { return; }
    }
    ctx->pc = 0x347D20u;
label_347d20:
    // 0x347d20: 0xc04c968  jal         func_1325A0
label_347d24:
    if (ctx->pc == 0x347D24u) {
        ctx->pc = 0x347D24u;
            // 0x347d24: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x347D28u;
        goto label_347d28;
    }
    ctx->pc = 0x347D20u;
    SET_GPR_U32(ctx, 31, 0x347D28u);
    ctx->pc = 0x347D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347D20u;
            // 0x347d24: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347D28u; }
        if (ctx->pc != 0x347D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347D28u; }
        if (ctx->pc != 0x347D28u) { return; }
    }
    ctx->pc = 0x347D28u;
label_347d28:
    // 0x347d28: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x347d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_347d2c:
    // 0x347d2c: 0x3c0a0064  lui         $t2, 0x64
    ctx->pc = 0x347d2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)100 << 16));
label_347d30:
    // 0x347d30: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x347d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_347d34:
    // 0x347d34: 0x3c09006a  lui         $t1, 0x6A
    ctx->pc = 0x347d34u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)106 << 16));
label_347d38:
    // 0x347d38: 0x3c08006a  lui         $t0, 0x6A
    ctx->pc = 0x347d38u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)106 << 16));
label_347d3c:
    // 0x347d3c: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x347d3cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_347d40:
    // 0x347d40: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x347d40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_347d44:
    // 0x347d44: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x347d44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_347d48:
    // 0x347d48: 0x8c4b0788  lw          $t3, 0x788($v0)
    ctx->pc = 0x347d48u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_347d4c:
    // 0x347d4c: 0x254ac560  addiu       $t2, $t2, -0x3AA0
    ctx->pc = 0x347d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952288));
label_347d50:
    // 0x347d50: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x347d50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_347d54:
    // 0x347d54: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x347d54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_347d58:
    // 0x347d58: 0x25292660  addiu       $t1, $t1, 0x2660
    ctx->pc = 0x347d58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 9824));
label_347d5c:
    // 0x347d5c: 0x25082670  addiu       $t0, $t0, 0x2670
    ctx->pc = 0x347d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 9840));
label_347d60:
    // 0x347d60: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x347d60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
label_347d64:
    // 0x347d64: 0x24e726b0  addiu       $a3, $a3, 0x26B0
    ctx->pc = 0x347d64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9904));
label_347d68:
    // 0x347d68: 0x914a0000  lbu         $t2, 0x0($t2)
    ctx->pc = 0x347d68u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_347d6c:
    // 0x347d6c: 0x24c65930  addiu       $a2, $a2, 0x5930
    ctx->pc = 0x347d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22832));
label_347d70:
    // 0x347d70: 0x24a55970  addiu       $a1, $a1, 0x5970
    ctx->pc = 0x347d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22896));
label_347d74:
    // 0x347d74: 0x24842428  addiu       $a0, $a0, 0x2428
    ctx->pc = 0x347d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 9256));
label_347d78:
    // 0x347d78: 0x24635868  addiu       $v1, $v1, 0x5868
    ctx->pc = 0x347d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22632));
label_347d7c:
    // 0x347d7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x347d7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_347d80:
    // 0x347d80: 0xa20a004d  sb          $t2, 0x4D($s0)
    ctx->pc = 0x347d80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 10));
label_347d84:
    // 0x347d84: 0xae090054  sw          $t1, 0x54($s0)
    ctx->pc = 0x347d84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 9));
label_347d88:
    // 0x347d88: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x347d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_347d8c:
    // 0x347d8c: 0xae080000  sw          $t0, 0x0($s0)
    ctx->pc = 0x347d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 8));
label_347d90:
    // 0x347d90: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x347d90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_347d94:
    // 0x347d94: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x347d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_347d98:
    // 0x347d98: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x347d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_347d9c:
    // 0x347d9c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x347d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_347da0:
    // 0x347da0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x347da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_347da4:
    // 0x347da4: 0xae0400a4  sw          $a0, 0xA4($s0)
    ctx->pc = 0x347da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 4));
label_347da8:
    // 0x347da8: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x347da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_347dac:
    // 0x347dac: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x347dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_347db0:
    // 0x347db0: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x347db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
label_347db4:
    // 0x347db4: 0xae0300a4  sw          $v1, 0xA4($s0)
    ctx->pc = 0x347db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 3));
label_347db8:
    // 0x347db8: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x347db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_347dbc:
    // 0x347dbc: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x347dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_347dc0:
    // 0x347dc0: 0xae0000bc  sw          $zero, 0xBC($s0)
    ctx->pc = 0x347dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 0));
label_347dc4:
    // 0x347dc4: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x347dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_347dc8:
    // 0x347dc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x347dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_347dcc:
    // 0x347dcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347dccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_347dd0:
    // 0x347dd0: 0x3e00008  jr          $ra
label_347dd4:
    if (ctx->pc == 0x347DD4u) {
        ctx->pc = 0x347DD4u;
            // 0x347dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x347DD8u;
        goto label_347dd8;
    }
    ctx->pc = 0x347DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347DD0u;
            // 0x347dd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347DD8u;
label_347dd8:
    // 0x347dd8: 0x0  nop
    ctx->pc = 0x347dd8u;
    // NOP
label_347ddc:
    // 0x347ddc: 0x0  nop
    ctx->pc = 0x347ddcu;
    // NOP
label_347de0:
    // 0x347de0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x347de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_347de4:
    // 0x347de4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x347de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_347de8:
    // 0x347de8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_347dec:
    // 0x347dec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347decu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347df0:
    // 0x347df0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x347df0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347df4:
    // 0x347df4: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_347df8:
    if (ctx->pc == 0x347DF8u) {
        ctx->pc = 0x347DF8u;
            // 0x347df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347DFCu;
        goto label_347dfc;
    }
    ctx->pc = 0x347DF4u;
    {
        const bool branch_taken_0x347df4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x347DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347DF4u;
            // 0x347df8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347df4) {
            ctx->pc = 0x347E44u;
            goto label_347e44;
        }
    }
    ctx->pc = 0x347DFCu;
label_347dfc:
    // 0x347dfc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_347e00:
    // 0x347e00: 0x24425868  addiu       $v0, $v0, 0x5868
    ctx->pc = 0x347e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22632));
label_347e04:
    // 0x347e04: 0xc0d2210  jal         func_348840
label_347e08:
    if (ctx->pc == 0x347E08u) {
        ctx->pc = 0x347E08u;
            // 0x347e08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x347E0Cu;
        goto label_347e0c;
    }
    ctx->pc = 0x347E04u;
    SET_GPR_U32(ctx, 31, 0x347E0Cu);
    ctx->pc = 0x347E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347E04u;
            // 0x347e08: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348840u;
    if (runtime->hasFunction(0x348840u)) {
        auto targetFn = runtime->lookupFunction(0x348840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347E0Cu; }
        if (ctx->pc != 0x347E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348840_0x348840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347E0Cu; }
        if (ctx->pc != 0x347E0Cu) { return; }
    }
    ctx->pc = 0x347E0Cu;
label_347e0c:
    // 0x347e0c: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_347e10:
    if (ctx->pc == 0x347E10u) {
        ctx->pc = 0x347E10u;
            // 0x347e10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x347E14u;
        goto label_347e14;
    }
    ctx->pc = 0x347E0Cu;
    {
        const bool branch_taken_0x347e0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x347e0c) {
            ctx->pc = 0x347E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347E0Cu;
            // 0x347e10: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347E30u;
            goto label_347e30;
        }
    }
    ctx->pc = 0x347E14u;
label_347e14:
    // 0x347e14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x347e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_347e18:
    // 0x347e18: 0x24422428  addiu       $v0, $v0, 0x2428
    ctx->pc = 0x347e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9256));
label_347e1c:
    // 0x347e1c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x347e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_347e20:
    // 0x347e20: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x347e20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_347e24:
    // 0x347e24: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x347e24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_347e28:
    // 0x347e28: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x347e28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_347e2c:
    // 0x347e2c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x347e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_347e30:
    // 0x347e30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x347e30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_347e34:
    // 0x347e34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_347e38:
    if (ctx->pc == 0x347E38u) {
        ctx->pc = 0x347E38u;
            // 0x347e38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347E3Cu;
        goto label_347e3c;
    }
    ctx->pc = 0x347E34u;
    {
        const bool branch_taken_0x347e34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x347e34) {
            ctx->pc = 0x347E38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347E34u;
            // 0x347e38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347E48u;
            goto label_347e48;
        }
    }
    ctx->pc = 0x347E3Cu;
label_347e3c:
    // 0x347e3c: 0xc0400a8  jal         func_1002A0
label_347e40:
    if (ctx->pc == 0x347E40u) {
        ctx->pc = 0x347E40u;
            // 0x347e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347E44u;
        goto label_347e44;
    }
    ctx->pc = 0x347E3Cu;
    SET_GPR_U32(ctx, 31, 0x347E44u);
    ctx->pc = 0x347E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347E3Cu;
            // 0x347e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347E44u; }
        if (ctx->pc != 0x347E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347E44u; }
        if (ctx->pc != 0x347E44u) { return; }
    }
    ctx->pc = 0x347E44u;
label_347e44:
    // 0x347e44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x347e44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_347e48:
    // 0x347e48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x347e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_347e4c:
    // 0x347e4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x347e4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_347e50:
    // 0x347e50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x347e50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_347e54:
    // 0x347e54: 0x3e00008  jr          $ra
label_347e58:
    if (ctx->pc == 0x347E58u) {
        ctx->pc = 0x347E58u;
            // 0x347e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x347E5Cu;
        goto label_347e5c;
    }
    ctx->pc = 0x347E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x347E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347E54u;
            // 0x347e58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x347E5Cu;
label_347e5c:
    // 0x347e5c: 0x0  nop
    ctx->pc = 0x347e5cu;
    // NOP
label_347e60:
    // 0x347e60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x347e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_347e64:
    // 0x347e64: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x347e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_347e68:
    // 0x347e68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x347e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_347e6c:
    // 0x347e6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x347e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_347e70:
    // 0x347e70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x347e70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_347e74:
    // 0x347e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x347e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_347e78:
    // 0x347e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x347e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_347e7c:
    // 0x347e7c: 0x8cc50db0  lw          $a1, 0xDB0($a2)
    ctx->pc = 0x347e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3504)));
label_347e80:
    // 0x347e80: 0x8cd10d98  lw          $s1, 0xD98($a2)
    ctx->pc = 0x347e80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3480)));
label_347e84:
    // 0x347e84: 0x28a10009  slti        $at, $a1, 0x9
    ctx->pc = 0x347e84u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)9) ? 1 : 0);
label_347e88:
    // 0x347e88: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_347e8c:
    if (ctx->pc == 0x347E8Cu) {
        ctx->pc = 0x347E8Cu;
            // 0x347e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347E90u;
        goto label_347e90;
    }
    ctx->pc = 0x347E88u;
    {
        const bool branch_taken_0x347e88 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x347E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x347E88u;
            // 0x347e8c: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x347e88) {
            ctx->pc = 0x347E9Cu;
            goto label_347e9c;
        }
    }
    ctx->pc = 0x347E90u;
label_347e90:
    // 0x347e90: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x347e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_347e94:
    // 0x347e94: 0x54a30065  bnel        $a1, $v1, . + 4 + (0x65 << 2)
label_347e98:
    if (ctx->pc == 0x347E98u) {
        ctx->pc = 0x347E98u;
            // 0x347e98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x347E9Cu;
        goto label_347e9c;
    }
    ctx->pc = 0x347E94u;
    {
        const bool branch_taken_0x347e94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x347e94) {
            ctx->pc = 0x347E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347E94u;
            // 0x347e98: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34802Cu;
            goto label_34802c;
        }
    }
    ctx->pc = 0x347E9Cu;
label_347e9c:
    // 0x347e9c: 0x8e430da0  lw          $v1, 0xDA0($s2)
    ctx->pc = 0x347e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3488)));
label_347ea0:
    // 0x347ea0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x347ea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_347ea4:
    // 0x347ea4: 0x10600060  beqz        $v1, . + 4 + (0x60 << 2)
label_347ea8:
    if (ctx->pc == 0x347EA8u) {
        ctx->pc = 0x347EACu;
        goto label_347eac;
    }
    ctx->pc = 0x347EA4u;
    {
        const bool branch_taken_0x347ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ea4) {
            ctx->pc = 0x348028u;
            goto label_348028;
        }
    }
    ctx->pc = 0x347EACu;
label_347eac:
    // 0x347eac: 0x8e630080  lw          $v1, 0x80($s3)
    ctx->pc = 0x347eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_347eb0:
    // 0x347eb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x347eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347eb4:
    // 0x347eb4: 0x2248004  sllv        $s0, $a0, $s1
    ctx->pc = 0x347eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 17) & 0x1F));
label_347eb8:
    // 0x347eb8: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x347eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
label_347ebc:
    // 0x347ebc: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_347ec0:
    if (ctx->pc == 0x347EC0u) {
        ctx->pc = 0x347EC0u;
            // 0x347ec0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x347EC4u;
        goto label_347ec4;
    }
    ctx->pc = 0x347EBCu;
    {
        const bool branch_taken_0x347ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ebc) {
            ctx->pc = 0x347EC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347EBCu;
            // 0x347ec0: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347ED0u;
            goto label_347ed0;
        }
    }
    ctx->pc = 0x347EC4u;
label_347ec4:
    // 0x347ec4: 0x10000058  b           . + 4 + (0x58 << 2)
label_347ec8:
    if (ctx->pc == 0x347EC8u) {
        ctx->pc = 0x347ECCu;
        goto label_347ecc;
    }
    ctx->pc = 0x347EC4u;
    {
        const bool branch_taken_0x347ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x347ec4) {
            ctx->pc = 0x348028u;
            goto label_348028;
        }
    }
    ctx->pc = 0x347ECCu;
label_347ecc:
    // 0x347ecc: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x347eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_347ed0:
    // 0x347ed0: 0x54a20004  bnel        $a1, $v0, . + 4 + (0x4 << 2)
label_347ed4:
    if (ctx->pc == 0x347ED4u) {
        ctx->pc = 0x347ED4u;
            // 0x347ed4: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->pc = 0x347ED8u;
        goto label_347ed8;
    }
    ctx->pc = 0x347ED0u;
    {
        const bool branch_taken_0x347ed0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x347ed0) {
            ctx->pc = 0x347ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x347ED0u;
            // 0x347ed4: 0xae40118c  sw          $zero, 0x118C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x347EE4u;
            goto label_347ee4;
        }
    }
    ctx->pc = 0x347ED8u;
label_347ed8:
    // 0x347ed8: 0xc0b6764  jal         func_2D9D90
label_347edc:
    if (ctx->pc == 0x347EDCu) {
        ctx->pc = 0x347EDCu;
            // 0x347edc: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->pc = 0x347EE0u;
        goto label_347ee0;
    }
    ctx->pc = 0x347ED8u;
    SET_GPR_U32(ctx, 31, 0x347EE0u);
    ctx->pc = 0x347EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347ED8u;
            // 0x347edc: 0x8e440d74  lw          $a0, 0xD74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D90u;
    if (runtime->hasFunction(0x2D9D90u)) {
        auto targetFn = runtime->lookupFunction(0x2D9D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347EE0u; }
        if (ctx->pc != 0x347EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9D90_0x2d9d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347EE0u; }
        if (ctx->pc != 0x347EE0u) { return; }
    }
    ctx->pc = 0x347EE0u;
label_347ee0:
    // 0x347ee0: 0xae40118c  sw          $zero, 0x118C($s2)
    ctx->pc = 0x347ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4492), GPR_U32(ctx, 0));
label_347ee4:
    // 0x347ee4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347ee8:
    // 0x347ee8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x347ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_347eec:
    // 0x347eec: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x347eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_347ef0:
    // 0x347ef0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x347ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_347ef4:
    // 0x347ef4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x347ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_347ef8:
    // 0x347ef8: 0x26440320  addiu       $a0, $s2, 0x320
    ctx->pc = 0x347ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 800));
label_347efc:
    // 0x347efc: 0xb02825  or          $a1, $a1, $s0
    ctx->pc = 0x347efcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 16));
label_347f00:
    // 0x347f00: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x347f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
label_347f04:
    // 0x347f04: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x347f04u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_347f08:
    // 0x347f08: 0xac430084  sw          $v1, 0x84($v0)
    ctx->pc = 0x347f08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 3));
label_347f0c:
    // 0x347f0c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x347f0cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_347f10:
    // 0x347f10: 0x8e420d60  lw          $v0, 0xD60($s2)
    ctx->pc = 0x347f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3424)));
label_347f14:
    // 0x347f14: 0xc04cbd8  jal         func_132F60
label_347f18:
    if (ctx->pc == 0x347F18u) {
        ctx->pc = 0x347F18u;
            // 0x347f18: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x347F1Cu;
        goto label_347f1c;
    }
    ctx->pc = 0x347F14u;
    SET_GPR_U32(ctx, 31, 0x347F1Cu);
    ctx->pc = 0x347F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F14u;
            // 0x347f18: 0xa040001c  sb          $zero, 0x1C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F1Cu; }
        if (ctx->pc != 0x347F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F1Cu; }
        if (ctx->pc != 0x347F1Cu) { return; }
    }
    ctx->pc = 0x347F1Cu;
label_347f1c:
    // 0x347f1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x347f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347f20:
    // 0x347f20: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x347f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_347f24:
    // 0x347f24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x347f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_347f28:
    // 0x347f28: 0x24a52fd0  addiu       $a1, $a1, 0x2FD0
    ctx->pc = 0x347f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12240));
label_347f2c:
    // 0x347f2c: 0xc0767f0  jal         func_1D9FC0
label_347f30:
    if (ctx->pc == 0x347F30u) {
        ctx->pc = 0x347F30u;
            // 0x347f30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x347F34u;
        goto label_347f34;
    }
    ctx->pc = 0x347F2Cu;
    SET_GPR_U32(ctx, 31, 0x347F34u);
    ctx->pc = 0x347F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F2Cu;
            // 0x347f30: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F34u; }
        if (ctx->pc != 0x347F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F34u; }
        if (ctx->pc != 0x347F34u) { return; }
    }
    ctx->pc = 0x347F34u;
label_347f34:
    // 0x347f34: 0xae400de8  sw          $zero, 0xDE8($s2)
    ctx->pc = 0x347f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3560), GPR_U32(ctx, 0));
label_347f38:
    // 0x347f38: 0x3c02ffdb  lui         $v0, 0xFFDB
    ctx->pc = 0x347f38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65499 << 16));
label_347f3c:
    // 0x347f3c: 0x8e500d74  lw          $s0, 0xD74($s2)
    ctx->pc = 0x347f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3444)));
label_347f40:
    // 0x347f40: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x347f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_347f44:
    // 0x347f44: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x347f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_347f48:
    // 0x347f48: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x347f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_347f4c:
    // 0x347f4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x347f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_347f50:
    // 0x347f50: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x347f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_347f54:
    // 0x347f54: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x347f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_347f58:
    // 0x347f58: 0xc0a545c  jal         func_295170
label_347f5c:
    if (ctx->pc == 0x347F5Cu) {
        ctx->pc = 0x347F5Cu;
            // 0x347f5c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x347F60u;
        goto label_347f60;
    }
    ctx->pc = 0x347F58u;
    SET_GPR_U32(ctx, 31, 0x347F60u);
    ctx->pc = 0x347F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F58u;
            // 0x347f5c: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F60u; }
        if (ctx->pc != 0x347F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F60u; }
        if (ctx->pc != 0x347F60u) { return; }
    }
    ctx->pc = 0x347F60u;
label_347f60:
    // 0x347f60: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x347f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_347f64:
    // 0x347f64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x347f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_347f68:
    // 0x347f68: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x347f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_347f6c:
    // 0x347f6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x347f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_347f70:
    // 0x347f70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x347f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_347f74:
    // 0x347f74: 0xc08bf20  jal         func_22FC80
label_347f78:
    if (ctx->pc == 0x347F78u) {
        ctx->pc = 0x347F78u;
            // 0x347f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347F7Cu;
        goto label_347f7c;
    }
    ctx->pc = 0x347F74u;
    SET_GPR_U32(ctx, 31, 0x347F7Cu);
    ctx->pc = 0x347F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F74u;
            // 0x347f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F7Cu; }
        if (ctx->pc != 0x347F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F7Cu; }
        if (ctx->pc != 0x347F7Cu) { return; }
    }
    ctx->pc = 0x347F7Cu;
label_347f7c:
    // 0x347f7c: 0x3c023e6d  lui         $v0, 0x3E6D
    ctx->pc = 0x347f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15981 << 16));
label_347f80:
    // 0x347f80: 0x26650070  addiu       $a1, $s3, 0x70
    ctx->pc = 0x347f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_347f84:
    // 0x347f84: 0x3442097b  ori         $v0, $v0, 0x97B
    ctx->pc = 0x347f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2427);
label_347f88:
    // 0x347f88: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x347f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_347f8c:
    // 0x347f8c: 0xae420de4  sw          $v0, 0xDE4($s2)
    ctx->pc = 0x347f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3556), GPR_U32(ctx, 2));
label_347f90:
    // 0x347f90: 0xc04cc90  jal         func_133240
label_347f94:
    if (ctx->pc == 0x347F94u) {
        ctx->pc = 0x347F94u;
            // 0x347f94: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->pc = 0x347F98u;
        goto label_347f98;
    }
    ctx->pc = 0x347F90u;
    SET_GPR_U32(ctx, 31, 0x347F98u);
    ctx->pc = 0x347F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F90u;
            // 0x347f94: 0x264602c0  addiu       $a2, $s2, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F98u; }
        if (ctx->pc != 0x347F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347F98u; }
        if (ctx->pc != 0x347F98u) { return; }
    }
    ctx->pc = 0x347F98u;
label_347f98:
    // 0x347f98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x347f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_347f9c:
    // 0x347f9c: 0xc04cc44  jal         func_133110
label_347fa0:
    if (ctx->pc == 0x347FA0u) {
        ctx->pc = 0x347FA0u;
            // 0x347fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x347FA4u;
        goto label_347fa4;
    }
    ctx->pc = 0x347F9Cu;
    SET_GPR_U32(ctx, 31, 0x347FA4u);
    ctx->pc = 0x347FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347F9Cu;
            // 0x347fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FA4u; }
        if (ctx->pc != 0x347FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FA4u; }
        if (ctx->pc != 0x347FA4u) { return; }
    }
    ctx->pc = 0x347FA4u;
label_347fa4:
    // 0x347fa4: 0x26440560  addiu       $a0, $s2, 0x560
    ctx->pc = 0x347fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
label_347fa8:
    // 0x347fa8: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x347fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_347fac:
    // 0x347fac: 0xc075378  jal         func_1D4DE0
label_347fb0:
    if (ctx->pc == 0x347FB0u) {
        ctx->pc = 0x347FB0u;
            // 0x347fb0: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->pc = 0x347FB4u;
        goto label_347fb4;
    }
    ctx->pc = 0x347FACu;
    SET_GPR_U32(ctx, 31, 0x347FB4u);
    ctx->pc = 0x347FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347FACu;
            // 0x347fb0: 0x26460830  addiu       $a2, $s2, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FB4u; }
        if (ctx->pc != 0x347FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FB4u; }
        if (ctx->pc != 0x347FB4u) { return; }
    }
    ctx->pc = 0x347FB4u;
label_347fb4:
    // 0x347fb4: 0xc6410880  lwc1        $f1, 0x880($s2)
    ctx->pc = 0x347fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_347fb8:
    // 0x347fb8: 0x2644087c  addiu       $a0, $s2, 0x87C
    ctx->pc = 0x347fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2172));
label_347fbc:
    // 0x347fbc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x347fbcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_347fc0:
    // 0x347fc0: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x347fc0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_347fc4:
    // 0x347fc4: 0xc0c753c  jal         func_31D4F0
label_347fc8:
    if (ctx->pc == 0x347FC8u) {
        ctx->pc = 0x347FC8u;
            // 0x347fc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x347FCCu;
        goto label_347fcc;
    }
    ctx->pc = 0x347FC4u;
    SET_GPR_U32(ctx, 31, 0x347FCCu);
    ctx->pc = 0x347FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347FC4u;
            // 0x347fc8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FCCu; }
        if (ctx->pc != 0x347FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FCCu; }
        if (ctx->pc != 0x347FCCu) { return; }
    }
    ctx->pc = 0x347FCCu;
label_347fcc:
    // 0x347fcc: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x347fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_347fd0:
    // 0x347fd0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x347fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_347fd4:
    // 0x347fd4: 0xc64c0930  lwc1        $f12, 0x930($s2)
    ctx->pc = 0x347fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_347fd8:
    // 0x347fd8: 0xc64d0880  lwc1        $f13, 0x880($s2)
    ctx->pc = 0x347fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_347fdc:
    // 0x347fdc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x347fdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_347fe0:
    // 0x347fe0: 0xc0c753c  jal         func_31D4F0
label_347fe4:
    if (ctx->pc == 0x347FE4u) {
        ctx->pc = 0x347FE4u;
            // 0x347fe4: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->pc = 0x347FE8u;
        goto label_347fe8;
    }
    ctx->pc = 0x347FE0u;
    SET_GPR_U32(ctx, 31, 0x347FE8u);
    ctx->pc = 0x347FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x347FE0u;
            // 0x347fe4: 0x2644092c  addiu       $a0, $s2, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FE8u; }
        if (ctx->pc != 0x347FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x347FE8u; }
        if (ctx->pc != 0x347FE8u) { return; }
    }
    ctx->pc = 0x347FE8u;
label_347fe8:
    // 0x347fe8: 0x3c023e2e  lui         $v0, 0x3E2E
    ctx->pc = 0x347fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15918 << 16));
label_347fec:
    // 0x347fec: 0x26430890  addiu       $v1, $s2, 0x890
    ctx->pc = 0x347fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 2192));
label_347ff0:
    // 0x347ff0: 0x3442147b  ori         $v0, $v0, 0x147B
    ctx->pc = 0x347ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5243);
label_347ff4:
    // 0x347ff4: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x347ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_347ff8:
    // 0x347ff8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x347ff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_347ffc:
    // 0x347ffc: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x347ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_348000:
    // 0x348000: 0xc0c6250  jal         func_318940
label_348004:
    if (ctx->pc == 0x348004u) {
        ctx->pc = 0x348004u;
            // 0x348004: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->pc = 0x348008u;
        goto label_348008;
    }
    ctx->pc = 0x348000u;
    SET_GPR_U32(ctx, 31, 0x348008u);
    ctx->pc = 0x348004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348000u;
            // 0x348004: 0x26460560  addiu       $a2, $s2, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348008u; }
        if (ctx->pc != 0x348008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348008u; }
        if (ctx->pc != 0x348008u) { return; }
    }
    ctx->pc = 0x348008u;
label_348008:
    // 0x348008: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x348008u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_34800c:
    // 0x34800c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x34800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348010:
    // 0x348010: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x348010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_348014:
    // 0x348014: 0x320f809  jalr        $t9
label_348018:
    if (ctx->pc == 0x348018u) {
        ctx->pc = 0x348018u;
            // 0x348018: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x34801Cu;
        goto label_34801c;
    }
    ctx->pc = 0x348014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x34801Cu);
        ctx->pc = 0x348018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x348014u;
            // 0x348018: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x34801Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x34801Cu; }
            if (ctx->pc != 0x34801Cu) { return; }
        }
        }
    }
    ctx->pc = 0x34801Cu;
label_34801c:
    // 0x34801c: 0x8e430d70  lw          $v1, 0xD70($s2)
    ctx->pc = 0x34801cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3440)));
label_348020:
    // 0x348020: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x348020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_348024:
    // 0x348024: 0xa06400dd  sb          $a0, 0xDD($v1)
    ctx->pc = 0x348024u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 221), (uint8_t)GPR_U32(ctx, 4));
label_348028:
    // 0x348028: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x348028u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_34802c:
    // 0x34802c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34802cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_348030:
    // 0x348030: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348030u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348034:
    // 0x348034: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348038:
    // 0x348038: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348038u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34803c:
    // 0x34803c: 0x3e00008  jr          $ra
label_348040:
    if (ctx->pc == 0x348040u) {
        ctx->pc = 0x348040u;
            // 0x348040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x348044u;
        goto label_348044;
    }
    ctx->pc = 0x34803Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34803Cu;
            // 0x348040: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348044u;
label_348044:
    // 0x348044: 0x0  nop
    ctx->pc = 0x348044u;
    // NOP
label_348048:
    // 0x348048: 0x0  nop
    ctx->pc = 0x348048u;
    // NOP
label_34804c:
    // 0x34804c: 0x0  nop
    ctx->pc = 0x34804cu;
    // NOP
label_348050:
    // 0x348050: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x348050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_348054:
    // 0x348054: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x348054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_348058:
    // 0x348058: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x348058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_34805c:
    // 0x34805c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x34805cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348060:
    // 0x348060: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x348060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_348064:
    // 0x348064: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_348068:
    if (ctx->pc == 0x348068u) {
        ctx->pc = 0x348068u;
            // 0x348068: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->pc = 0x34806Cu;
        goto label_34806c;
    }
    ctx->pc = 0x348064u;
    {
        const bool branch_taken_0x348064 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348064) {
            ctx->pc = 0x348068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348064u;
            // 0x348068: 0x260400a4  addiu       $a0, $s0, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
        ctx->in_delay_slot = false;
            ctx->pc = 0x34808Cu;
            goto label_34808c;
        }
    }
    ctx->pc = 0x34806Cu;
label_34806c:
    // 0x34806c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_348070:
    if (ctx->pc == 0x348070u) {
        ctx->pc = 0x348070u;
            // 0x348070: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x348074u;
        goto label_348074;
    }
    ctx->pc = 0x34806Cu;
    {
        const bool branch_taken_0x34806c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x34806c) {
            ctx->pc = 0x348070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34806Cu;
            // 0x348070: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x348088u;
            goto label_348088;
        }
    }
    ctx->pc = 0x348074u;
label_348074:
    // 0x348074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x348074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_348078:
    // 0x348078: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x348078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_34807c:
    // 0x34807c: 0x320f809  jalr        $t9
label_348080:
    if (ctx->pc == 0x348080u) {
        ctx->pc = 0x348080u;
            // 0x348080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x348084u;
        goto label_348084;
    }
    ctx->pc = 0x34807Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x348084u);
        ctx->pc = 0x348080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34807Cu;
            // 0x348080: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x348084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x348084u; }
            if (ctx->pc != 0x348084u) { return; }
        }
        }
    }
    ctx->pc = 0x348084u;
label_348084:
    // 0x348084: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x348084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_348088:
    // 0x348088: 0x260400a4  addiu       $a0, $s0, 0xA4
    ctx->pc = 0x348088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 164));
label_34808c:
    // 0x34808c: 0xc0d2210  jal         func_348840
label_348090:
    if (ctx->pc == 0x348090u) {
        ctx->pc = 0x348094u;
        goto label_348094;
    }
    ctx->pc = 0x34808Cu;
    SET_GPR_U32(ctx, 31, 0x348094u);
    ctx->pc = 0x348840u;
    if (runtime->hasFunction(0x348840u)) {
        auto targetFn = runtime->lookupFunction(0x348840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348094u; }
        if (ctx->pc != 0x348094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348840_0x348840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348094u; }
        if (ctx->pc != 0x348094u) { return; }
    }
    ctx->pc = 0x348094u;
label_348094:
    // 0x348094: 0x8e040064  lw          $a0, 0x64($s0)
    ctx->pc = 0x348094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_348098:
    // 0x348098: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_34809c:
    if (ctx->pc == 0x34809Cu) {
        ctx->pc = 0x34809Cu;
            // 0x34809c: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x3480A0u;
        goto label_3480a0;
    }
    ctx->pc = 0x348098u;
    {
        const bool branch_taken_0x348098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x348098) {
            ctx->pc = 0x34809Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x348098u;
            // 0x34809c: 0xae000064  sw          $zero, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3480B4u;
            goto label_3480b4;
        }
    }
    ctx->pc = 0x3480A0u;
label_3480a0:
    // 0x3480a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3480a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3480a4:
    // 0x3480a4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x3480a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_3480a8:
    // 0x3480a8: 0x320f809  jalr        $t9
label_3480ac:
    if (ctx->pc == 0x3480ACu) {
        ctx->pc = 0x3480ACu;
            // 0x3480ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3480B0u;
        goto label_3480b0;
    }
    ctx->pc = 0x3480A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3480B0u);
        ctx->pc = 0x3480ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3480A8u;
            // 0x3480ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3480B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3480B0u; }
            if (ctx->pc != 0x3480B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3480B0u;
label_3480b0:
    // 0x3480b0: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x3480b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
label_3480b4:
    // 0x3480b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3480b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3480b8:
    // 0x3480b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3480b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3480bc:
    // 0x3480bc: 0x3e00008  jr          $ra
label_3480c0:
    if (ctx->pc == 0x3480C0u) {
        ctx->pc = 0x3480C0u;
            // 0x3480c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3480C4u;
        goto label_3480c4;
    }
    ctx->pc = 0x3480BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3480C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3480BCu;
            // 0x3480c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3480C4u;
label_3480c4:
    // 0x3480c4: 0x0  nop
    ctx->pc = 0x3480c4u;
    // NOP
label_3480c8:
    // 0x3480c8: 0x0  nop
    ctx->pc = 0x3480c8u;
    // NOP
label_3480cc:
    // 0x3480cc: 0x0  nop
    ctx->pc = 0x3480ccu;
    // NOP
label_3480d0:
    // 0x3480d0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3480d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3480d4:
    // 0x3480d4: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x3480d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_3480d8:
    // 0x3480d8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3480d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3480dc:
    // 0x3480dc: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x3480dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_3480e0:
    // 0x3480e0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3480e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3480e4:
    // 0x3480e4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3480e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_3480e8:
    // 0x3480e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3480e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3480ec:
    // 0x3480ec: 0x3c0a447a  lui         $t2, 0x447A
    ctx->pc = 0x3480ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17530 << 16));
label_3480f0:
    // 0x3480f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3480f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3480f4:
    // 0x3480f4: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3480f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3480f8:
    // 0x3480f8: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x3480f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3480fc:
    // 0x3480fc: 0x3449f000  ori         $t1, $v0, 0xF000
    ctx->pc = 0x3480fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_348100:
    // 0x348100: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x348100u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_348104:
    // 0x348104: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x348104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_348108:
    // 0x348108: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x348108u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34810c:
    // 0x34810c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x34810cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_348110:
    // 0x348110: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x348110u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_348114:
    // 0x348114: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x348114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_348118:
    // 0x348118: 0x3c084120  lui         $t0, 0x4120
    ctx->pc = 0x348118u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16672 << 16));
label_34811c:
    // 0x34811c: 0x3c0741a0  lui         $a3, 0x41A0
    ctx->pc = 0x34811cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16800 << 16));
label_348120:
    // 0x348120: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x348120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_348124:
    // 0x348124: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x348124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_348128:
    // 0x348128: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x348128u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_34812c:
    // 0x34812c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x34812cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_348130:
    // 0x348130: 0xe4800068  swc1        $f0, 0x68($a0)
    ctx->pc = 0x348130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 104), bits); }
label_348134:
    // 0x348134: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x348134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_348138:
    // 0x348138: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x348138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_34813c:
    // 0x34813c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x34813cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_348140:
    // 0x348140: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x348140u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
label_348144:
    // 0x348144: 0xe480006c  swc1        $f0, 0x6C($a0)
    ctx->pc = 0x348144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 108), bits); }
label_348148:
    // 0x348148: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x348148u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_34814c:
    // 0x34814c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x34814cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_348150:
    // 0x348150: 0xafa80050  sw          $t0, 0x50($sp)
    ctx->pc = 0x348150u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 8));
label_348154:
    // 0x348154: 0xafa70054  sw          $a3, 0x54($sp)
    ctx->pc = 0x348154u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 7));
label_348158:
    // 0x348158: 0xafa70058  sw          $a3, 0x58($sp)
    ctx->pc = 0x348158u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 7));
label_34815c:
    // 0x34815c: 0xc0a7a88  jal         func_29EA20
label_348160:
    if (ctx->pc == 0x348160u) {
        ctx->pc = 0x348160u;
            // 0x348160: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x348164u;
        goto label_348164;
    }
    ctx->pc = 0x34815Cu;
    SET_GPR_U32(ctx, 31, 0x348164u);
    ctx->pc = 0x348160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34815Cu;
            // 0x348160: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348164u; }
        if (ctx->pc != 0x348164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348164u; }
        if (ctx->pc != 0x348164u) { return; }
    }
    ctx->pc = 0x348164u;
label_348164:
    // 0x348164: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x348164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_348168:
    // 0x348168: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x348168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_34816c:
    // 0x34816c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_348170:
    if (ctx->pc == 0x348170u) {
        ctx->pc = 0x348170u;
            // 0x348170: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x348174u;
        goto label_348174;
    }
    ctx->pc = 0x34816Cu;
    {
        const bool branch_taken_0x34816c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x348170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34816Cu;
            // 0x348170: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34816c) {
            ctx->pc = 0x348188u;
            goto label_348188;
        }
    }
    ctx->pc = 0x348174u;
label_348174:
    // 0x348174: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x348174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_348178:
    // 0x348178: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x348178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_34817c:
    // 0x34817c: 0xc0804bc  jal         func_2012F0
label_348180:
    if (ctx->pc == 0x348180u) {
        ctx->pc = 0x348180u;
            // 0x348180: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x348184u;
        goto label_348184;
    }
    ctx->pc = 0x34817Cu;
    SET_GPR_U32(ctx, 31, 0x348184u);
    ctx->pc = 0x348180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x34817Cu;
            // 0x348180: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348184u; }
        if (ctx->pc != 0x348184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348184u; }
        if (ctx->pc != 0x348184u) { return; }
    }
    ctx->pc = 0x348184u;
label_348184:
    // 0x348184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x348184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_348188:
    // 0x348188: 0xae240064  sw          $a0, 0x64($s1)
    ctx->pc = 0x348188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 4));
label_34818c:
    // 0x34818c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x34818cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_348190:
    // 0x348190: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x348190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_348194:
    // 0x348194: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x348194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_348198:
    // 0x348198: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x348198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34819c:
    // 0x34819c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x34819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3481a0:
    // 0x3481a0: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x3481a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3481a4:
    // 0x3481a4: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x3481a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_3481a8:
    // 0x3481a8: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x3481a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_3481ac:
    // 0x3481ac: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x3481acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_3481b0:
    // 0x3481b0: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x3481b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_3481b4:
    // 0x3481b4: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x3481b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3481b8:
    // 0x3481b8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x3481b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3481bc:
    // 0x3481bc: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x3481bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3481c0:
    // 0x3481c0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x3481c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_3481c4:
    // 0x3481c4: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x3481c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_3481c8:
    // 0x3481c8: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x3481c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_3481cc:
    // 0x3481cc: 0xc0a3830  jal         func_28E0C0
label_3481d0:
    if (ctx->pc == 0x3481D0u) {
        ctx->pc = 0x3481D0u;
            // 0x3481d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x3481D4u;
        goto label_3481d4;
    }
    ctx->pc = 0x3481CCu;
    SET_GPR_U32(ctx, 31, 0x3481D4u);
    ctx->pc = 0x3481D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3481CCu;
            // 0x3481d0: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3481D4u; }
        if (ctx->pc != 0x3481D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3481D4u; }
        if (ctx->pc != 0x3481D4u) { return; }
    }
    ctx->pc = 0x3481D4u;
label_3481d4:
    // 0x3481d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3481d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3481d8:
    // 0x3481d8: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x3481d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3481dc:
    // 0x3481dc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x3481dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_3481e0:
    // 0x3481e0: 0xc0a7a88  jal         func_29EA20
label_3481e4:
    if (ctx->pc == 0x3481E4u) {
        ctx->pc = 0x3481E4u;
            // 0x3481e4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x3481E8u;
        goto label_3481e8;
    }
    ctx->pc = 0x3481E0u;
    SET_GPR_U32(ctx, 31, 0x3481E8u);
    ctx->pc = 0x3481E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3481E0u;
            // 0x3481e4: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3481E8u; }
        if (ctx->pc != 0x3481E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3481E8u; }
        if (ctx->pc != 0x3481E8u) { return; }
    }
    ctx->pc = 0x3481E8u;
label_3481e8:
    // 0x3481e8: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x3481e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_3481ec:
    // 0x3481ec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3481ecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3481f0:
    // 0x3481f0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_3481f4:
    if (ctx->pc == 0x3481F4u) {
        ctx->pc = 0x3481F4u;
            // 0x3481f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3481F8u;
        goto label_3481f8;
    }
    ctx->pc = 0x3481F0u;
    {
        const bool branch_taken_0x3481f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3481F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3481F0u;
            // 0x3481f4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3481f0) {
            ctx->pc = 0x348224u;
            goto label_348224;
        }
    }
    ctx->pc = 0x3481F8u;
label_3481f8:
    // 0x3481f8: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x3481f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_3481fc:
    // 0x3481fc: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3481fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_348200:
    // 0x348200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x348200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_348204:
    // 0x348204: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x348204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_348208:
    // 0x348208: 0xc08afe0  jal         func_22BF80
label_34820c:
    if (ctx->pc == 0x34820Cu) {
        ctx->pc = 0x34820Cu;
            // 0x34820c: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x348210u;
        goto label_348210;
    }
    ctx->pc = 0x348208u;
    SET_GPR_U32(ctx, 31, 0x348210u);
    ctx->pc = 0x34820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348208u;
            // 0x34820c: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348210u; }
        if (ctx->pc != 0x348210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348210u; }
        if (ctx->pc != 0x348210u) { return; }
    }
    ctx->pc = 0x348210u;
label_348210:
    // 0x348210: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x348210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_348214:
    // 0x348214: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x348214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_348218:
    // 0x348218: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x348218u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_34821c:
    // 0x34821c: 0xae400140  sw          $zero, 0x140($s2)
    ctx->pc = 0x34821cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 320), GPR_U32(ctx, 0));
label_348220:
    // 0x348220: 0xae51000c  sw          $s1, 0xC($s2)
    ctx->pc = 0x348220u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 17));
label_348224:
    // 0x348224: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x348224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_348228:
    // 0x348228: 0xc08c798  jal         func_231E60
label_34822c:
    if (ctx->pc == 0x34822Cu) {
        ctx->pc = 0x34822Cu;
            // 0x34822c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x348230u;
        goto label_348230;
    }
    ctx->pc = 0x348228u;
    SET_GPR_U32(ctx, 31, 0x348230u);
    ctx->pc = 0x34822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348228u;
            // 0x34822c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348230u; }
        if (ctx->pc != 0x348230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x348230u; }
        if (ctx->pc != 0x348230u) { return; }
    }
    ctx->pc = 0x348230u;
label_348230:
    // 0x348230: 0xae320050  sw          $s2, 0x50($s1)
    ctx->pc = 0x348230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 18));
label_348234:
    // 0x348234: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x348234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_348238:
    // 0x348238: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x348238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_34823c:
    // 0x34823c: 0x262400a4  addiu       $a0, $s1, 0xA4
    ctx->pc = 0x34823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
label_348240:
    // 0x348240: 0x8c42077c  lw          $v0, 0x77C($v0)
    ctx->pc = 0x348240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1916)));
label_348244:
    // 0x348244: 0xc0d21e0  jal         func_348780
label_348248:
    if (ctx->pc == 0x348248u) {
        ctx->pc = 0x348248u;
            // 0x348248: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x34824Cu;
        goto label_34824c;
    }
    ctx->pc = 0x348244u;
    SET_GPR_U32(ctx, 31, 0x34824Cu);
    ctx->pc = 0x348248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x348244u;
            // 0x348248: 0x24450003  addiu       $a1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x348780u;
    if (runtime->hasFunction(0x348780u)) {
        auto targetFn = runtime->lookupFunction(0x348780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34824Cu; }
        if (ctx->pc != 0x34824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00348780_0x348780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34824Cu; }
        if (ctx->pc != 0x34824Cu) { return; }
    }
    ctx->pc = 0x34824Cu;
label_34824c:
    // 0x34824c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34824cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_348250:
    // 0x348250: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x348250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_348254:
    // 0x348254: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x348254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_348258:
    // 0x348258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x348258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_34825c:
    // 0x34825c: 0x3e00008  jr          $ra
label_348260:
    if (ctx->pc == 0x348260u) {
        ctx->pc = 0x348260u;
            // 0x348260: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x348264u;
        goto label_348264;
    }
    ctx->pc = 0x34825Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34825Cu;
            // 0x348260: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x348264u;
label_348264:
    // 0x348264: 0x0  nop
    ctx->pc = 0x348264u;
    // NOP
label_348268:
    // 0x348268: 0x0  nop
    ctx->pc = 0x348268u;
    // NOP
label_34826c:
    // 0x34826c: 0x0  nop
    ctx->pc = 0x34826cu;
    // NOP
}
