#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00407BB0
// Address: 0x407bb0 - 0x4083f0
void sub_00407BB0_0x407bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00407BB0_0x407bb0");
#endif

    switch (ctx->pc) {
        case 0x407bb0u: goto label_407bb0;
        case 0x407bb4u: goto label_407bb4;
        case 0x407bb8u: goto label_407bb8;
        case 0x407bbcu: goto label_407bbc;
        case 0x407bc0u: goto label_407bc0;
        case 0x407bc4u: goto label_407bc4;
        case 0x407bc8u: goto label_407bc8;
        case 0x407bccu: goto label_407bcc;
        case 0x407bd0u: goto label_407bd0;
        case 0x407bd4u: goto label_407bd4;
        case 0x407bd8u: goto label_407bd8;
        case 0x407bdcu: goto label_407bdc;
        case 0x407be0u: goto label_407be0;
        case 0x407be4u: goto label_407be4;
        case 0x407be8u: goto label_407be8;
        case 0x407becu: goto label_407bec;
        case 0x407bf0u: goto label_407bf0;
        case 0x407bf4u: goto label_407bf4;
        case 0x407bf8u: goto label_407bf8;
        case 0x407bfcu: goto label_407bfc;
        case 0x407c00u: goto label_407c00;
        case 0x407c04u: goto label_407c04;
        case 0x407c08u: goto label_407c08;
        case 0x407c0cu: goto label_407c0c;
        case 0x407c10u: goto label_407c10;
        case 0x407c14u: goto label_407c14;
        case 0x407c18u: goto label_407c18;
        case 0x407c1cu: goto label_407c1c;
        case 0x407c20u: goto label_407c20;
        case 0x407c24u: goto label_407c24;
        case 0x407c28u: goto label_407c28;
        case 0x407c2cu: goto label_407c2c;
        case 0x407c30u: goto label_407c30;
        case 0x407c34u: goto label_407c34;
        case 0x407c38u: goto label_407c38;
        case 0x407c3cu: goto label_407c3c;
        case 0x407c40u: goto label_407c40;
        case 0x407c44u: goto label_407c44;
        case 0x407c48u: goto label_407c48;
        case 0x407c4cu: goto label_407c4c;
        case 0x407c50u: goto label_407c50;
        case 0x407c54u: goto label_407c54;
        case 0x407c58u: goto label_407c58;
        case 0x407c5cu: goto label_407c5c;
        case 0x407c60u: goto label_407c60;
        case 0x407c64u: goto label_407c64;
        case 0x407c68u: goto label_407c68;
        case 0x407c6cu: goto label_407c6c;
        case 0x407c70u: goto label_407c70;
        case 0x407c74u: goto label_407c74;
        case 0x407c78u: goto label_407c78;
        case 0x407c7cu: goto label_407c7c;
        case 0x407c80u: goto label_407c80;
        case 0x407c84u: goto label_407c84;
        case 0x407c88u: goto label_407c88;
        case 0x407c8cu: goto label_407c8c;
        case 0x407c90u: goto label_407c90;
        case 0x407c94u: goto label_407c94;
        case 0x407c98u: goto label_407c98;
        case 0x407c9cu: goto label_407c9c;
        case 0x407ca0u: goto label_407ca0;
        case 0x407ca4u: goto label_407ca4;
        case 0x407ca8u: goto label_407ca8;
        case 0x407cacu: goto label_407cac;
        case 0x407cb0u: goto label_407cb0;
        case 0x407cb4u: goto label_407cb4;
        case 0x407cb8u: goto label_407cb8;
        case 0x407cbcu: goto label_407cbc;
        case 0x407cc0u: goto label_407cc0;
        case 0x407cc4u: goto label_407cc4;
        case 0x407cc8u: goto label_407cc8;
        case 0x407cccu: goto label_407ccc;
        case 0x407cd0u: goto label_407cd0;
        case 0x407cd4u: goto label_407cd4;
        case 0x407cd8u: goto label_407cd8;
        case 0x407cdcu: goto label_407cdc;
        case 0x407ce0u: goto label_407ce0;
        case 0x407ce4u: goto label_407ce4;
        case 0x407ce8u: goto label_407ce8;
        case 0x407cecu: goto label_407cec;
        case 0x407cf0u: goto label_407cf0;
        case 0x407cf4u: goto label_407cf4;
        case 0x407cf8u: goto label_407cf8;
        case 0x407cfcu: goto label_407cfc;
        case 0x407d00u: goto label_407d00;
        case 0x407d04u: goto label_407d04;
        case 0x407d08u: goto label_407d08;
        case 0x407d0cu: goto label_407d0c;
        case 0x407d10u: goto label_407d10;
        case 0x407d14u: goto label_407d14;
        case 0x407d18u: goto label_407d18;
        case 0x407d1cu: goto label_407d1c;
        case 0x407d20u: goto label_407d20;
        case 0x407d24u: goto label_407d24;
        case 0x407d28u: goto label_407d28;
        case 0x407d2cu: goto label_407d2c;
        case 0x407d30u: goto label_407d30;
        case 0x407d34u: goto label_407d34;
        case 0x407d38u: goto label_407d38;
        case 0x407d3cu: goto label_407d3c;
        case 0x407d40u: goto label_407d40;
        case 0x407d44u: goto label_407d44;
        case 0x407d48u: goto label_407d48;
        case 0x407d4cu: goto label_407d4c;
        case 0x407d50u: goto label_407d50;
        case 0x407d54u: goto label_407d54;
        case 0x407d58u: goto label_407d58;
        case 0x407d5cu: goto label_407d5c;
        case 0x407d60u: goto label_407d60;
        case 0x407d64u: goto label_407d64;
        case 0x407d68u: goto label_407d68;
        case 0x407d6cu: goto label_407d6c;
        case 0x407d70u: goto label_407d70;
        case 0x407d74u: goto label_407d74;
        case 0x407d78u: goto label_407d78;
        case 0x407d7cu: goto label_407d7c;
        case 0x407d80u: goto label_407d80;
        case 0x407d84u: goto label_407d84;
        case 0x407d88u: goto label_407d88;
        case 0x407d8cu: goto label_407d8c;
        case 0x407d90u: goto label_407d90;
        case 0x407d94u: goto label_407d94;
        case 0x407d98u: goto label_407d98;
        case 0x407d9cu: goto label_407d9c;
        case 0x407da0u: goto label_407da0;
        case 0x407da4u: goto label_407da4;
        case 0x407da8u: goto label_407da8;
        case 0x407dacu: goto label_407dac;
        case 0x407db0u: goto label_407db0;
        case 0x407db4u: goto label_407db4;
        case 0x407db8u: goto label_407db8;
        case 0x407dbcu: goto label_407dbc;
        case 0x407dc0u: goto label_407dc0;
        case 0x407dc4u: goto label_407dc4;
        case 0x407dc8u: goto label_407dc8;
        case 0x407dccu: goto label_407dcc;
        case 0x407dd0u: goto label_407dd0;
        case 0x407dd4u: goto label_407dd4;
        case 0x407dd8u: goto label_407dd8;
        case 0x407ddcu: goto label_407ddc;
        case 0x407de0u: goto label_407de0;
        case 0x407de4u: goto label_407de4;
        case 0x407de8u: goto label_407de8;
        case 0x407decu: goto label_407dec;
        case 0x407df0u: goto label_407df0;
        case 0x407df4u: goto label_407df4;
        case 0x407df8u: goto label_407df8;
        case 0x407dfcu: goto label_407dfc;
        case 0x407e00u: goto label_407e00;
        case 0x407e04u: goto label_407e04;
        case 0x407e08u: goto label_407e08;
        case 0x407e0cu: goto label_407e0c;
        case 0x407e10u: goto label_407e10;
        case 0x407e14u: goto label_407e14;
        case 0x407e18u: goto label_407e18;
        case 0x407e1cu: goto label_407e1c;
        case 0x407e20u: goto label_407e20;
        case 0x407e24u: goto label_407e24;
        case 0x407e28u: goto label_407e28;
        case 0x407e2cu: goto label_407e2c;
        case 0x407e30u: goto label_407e30;
        case 0x407e34u: goto label_407e34;
        case 0x407e38u: goto label_407e38;
        case 0x407e3cu: goto label_407e3c;
        case 0x407e40u: goto label_407e40;
        case 0x407e44u: goto label_407e44;
        case 0x407e48u: goto label_407e48;
        case 0x407e4cu: goto label_407e4c;
        case 0x407e50u: goto label_407e50;
        case 0x407e54u: goto label_407e54;
        case 0x407e58u: goto label_407e58;
        case 0x407e5cu: goto label_407e5c;
        case 0x407e60u: goto label_407e60;
        case 0x407e64u: goto label_407e64;
        case 0x407e68u: goto label_407e68;
        case 0x407e6cu: goto label_407e6c;
        case 0x407e70u: goto label_407e70;
        case 0x407e74u: goto label_407e74;
        case 0x407e78u: goto label_407e78;
        case 0x407e7cu: goto label_407e7c;
        case 0x407e80u: goto label_407e80;
        case 0x407e84u: goto label_407e84;
        case 0x407e88u: goto label_407e88;
        case 0x407e8cu: goto label_407e8c;
        case 0x407e90u: goto label_407e90;
        case 0x407e94u: goto label_407e94;
        case 0x407e98u: goto label_407e98;
        case 0x407e9cu: goto label_407e9c;
        case 0x407ea0u: goto label_407ea0;
        case 0x407ea4u: goto label_407ea4;
        case 0x407ea8u: goto label_407ea8;
        case 0x407eacu: goto label_407eac;
        case 0x407eb0u: goto label_407eb0;
        case 0x407eb4u: goto label_407eb4;
        case 0x407eb8u: goto label_407eb8;
        case 0x407ebcu: goto label_407ebc;
        case 0x407ec0u: goto label_407ec0;
        case 0x407ec4u: goto label_407ec4;
        case 0x407ec8u: goto label_407ec8;
        case 0x407eccu: goto label_407ecc;
        case 0x407ed0u: goto label_407ed0;
        case 0x407ed4u: goto label_407ed4;
        case 0x407ed8u: goto label_407ed8;
        case 0x407edcu: goto label_407edc;
        case 0x407ee0u: goto label_407ee0;
        case 0x407ee4u: goto label_407ee4;
        case 0x407ee8u: goto label_407ee8;
        case 0x407eecu: goto label_407eec;
        case 0x407ef0u: goto label_407ef0;
        case 0x407ef4u: goto label_407ef4;
        case 0x407ef8u: goto label_407ef8;
        case 0x407efcu: goto label_407efc;
        case 0x407f00u: goto label_407f00;
        case 0x407f04u: goto label_407f04;
        case 0x407f08u: goto label_407f08;
        case 0x407f0cu: goto label_407f0c;
        case 0x407f10u: goto label_407f10;
        case 0x407f14u: goto label_407f14;
        case 0x407f18u: goto label_407f18;
        case 0x407f1cu: goto label_407f1c;
        case 0x407f20u: goto label_407f20;
        case 0x407f24u: goto label_407f24;
        case 0x407f28u: goto label_407f28;
        case 0x407f2cu: goto label_407f2c;
        case 0x407f30u: goto label_407f30;
        case 0x407f34u: goto label_407f34;
        case 0x407f38u: goto label_407f38;
        case 0x407f3cu: goto label_407f3c;
        case 0x407f40u: goto label_407f40;
        case 0x407f44u: goto label_407f44;
        case 0x407f48u: goto label_407f48;
        case 0x407f4cu: goto label_407f4c;
        case 0x407f50u: goto label_407f50;
        case 0x407f54u: goto label_407f54;
        case 0x407f58u: goto label_407f58;
        case 0x407f5cu: goto label_407f5c;
        case 0x407f60u: goto label_407f60;
        case 0x407f64u: goto label_407f64;
        case 0x407f68u: goto label_407f68;
        case 0x407f6cu: goto label_407f6c;
        case 0x407f70u: goto label_407f70;
        case 0x407f74u: goto label_407f74;
        case 0x407f78u: goto label_407f78;
        case 0x407f7cu: goto label_407f7c;
        case 0x407f80u: goto label_407f80;
        case 0x407f84u: goto label_407f84;
        case 0x407f88u: goto label_407f88;
        case 0x407f8cu: goto label_407f8c;
        case 0x407f90u: goto label_407f90;
        case 0x407f94u: goto label_407f94;
        case 0x407f98u: goto label_407f98;
        case 0x407f9cu: goto label_407f9c;
        case 0x407fa0u: goto label_407fa0;
        case 0x407fa4u: goto label_407fa4;
        case 0x407fa8u: goto label_407fa8;
        case 0x407facu: goto label_407fac;
        case 0x407fb0u: goto label_407fb0;
        case 0x407fb4u: goto label_407fb4;
        case 0x407fb8u: goto label_407fb8;
        case 0x407fbcu: goto label_407fbc;
        case 0x407fc0u: goto label_407fc0;
        case 0x407fc4u: goto label_407fc4;
        case 0x407fc8u: goto label_407fc8;
        case 0x407fccu: goto label_407fcc;
        case 0x407fd0u: goto label_407fd0;
        case 0x407fd4u: goto label_407fd4;
        case 0x407fd8u: goto label_407fd8;
        case 0x407fdcu: goto label_407fdc;
        case 0x407fe0u: goto label_407fe0;
        case 0x407fe4u: goto label_407fe4;
        case 0x407fe8u: goto label_407fe8;
        case 0x407fecu: goto label_407fec;
        case 0x407ff0u: goto label_407ff0;
        case 0x407ff4u: goto label_407ff4;
        case 0x407ff8u: goto label_407ff8;
        case 0x407ffcu: goto label_407ffc;
        case 0x408000u: goto label_408000;
        case 0x408004u: goto label_408004;
        case 0x408008u: goto label_408008;
        case 0x40800cu: goto label_40800c;
        case 0x408010u: goto label_408010;
        case 0x408014u: goto label_408014;
        case 0x408018u: goto label_408018;
        case 0x40801cu: goto label_40801c;
        case 0x408020u: goto label_408020;
        case 0x408024u: goto label_408024;
        case 0x408028u: goto label_408028;
        case 0x40802cu: goto label_40802c;
        case 0x408030u: goto label_408030;
        case 0x408034u: goto label_408034;
        case 0x408038u: goto label_408038;
        case 0x40803cu: goto label_40803c;
        case 0x408040u: goto label_408040;
        case 0x408044u: goto label_408044;
        case 0x408048u: goto label_408048;
        case 0x40804cu: goto label_40804c;
        case 0x408050u: goto label_408050;
        case 0x408054u: goto label_408054;
        case 0x408058u: goto label_408058;
        case 0x40805cu: goto label_40805c;
        case 0x408060u: goto label_408060;
        case 0x408064u: goto label_408064;
        case 0x408068u: goto label_408068;
        case 0x40806cu: goto label_40806c;
        case 0x408070u: goto label_408070;
        case 0x408074u: goto label_408074;
        case 0x408078u: goto label_408078;
        case 0x40807cu: goto label_40807c;
        case 0x408080u: goto label_408080;
        case 0x408084u: goto label_408084;
        case 0x408088u: goto label_408088;
        case 0x40808cu: goto label_40808c;
        case 0x408090u: goto label_408090;
        case 0x408094u: goto label_408094;
        case 0x408098u: goto label_408098;
        case 0x40809cu: goto label_40809c;
        case 0x4080a0u: goto label_4080a0;
        case 0x4080a4u: goto label_4080a4;
        case 0x4080a8u: goto label_4080a8;
        case 0x4080acu: goto label_4080ac;
        case 0x4080b0u: goto label_4080b0;
        case 0x4080b4u: goto label_4080b4;
        case 0x4080b8u: goto label_4080b8;
        case 0x4080bcu: goto label_4080bc;
        case 0x4080c0u: goto label_4080c0;
        case 0x4080c4u: goto label_4080c4;
        case 0x4080c8u: goto label_4080c8;
        case 0x4080ccu: goto label_4080cc;
        case 0x4080d0u: goto label_4080d0;
        case 0x4080d4u: goto label_4080d4;
        case 0x4080d8u: goto label_4080d8;
        case 0x4080dcu: goto label_4080dc;
        case 0x4080e0u: goto label_4080e0;
        case 0x4080e4u: goto label_4080e4;
        case 0x4080e8u: goto label_4080e8;
        case 0x4080ecu: goto label_4080ec;
        case 0x4080f0u: goto label_4080f0;
        case 0x4080f4u: goto label_4080f4;
        case 0x4080f8u: goto label_4080f8;
        case 0x4080fcu: goto label_4080fc;
        case 0x408100u: goto label_408100;
        case 0x408104u: goto label_408104;
        case 0x408108u: goto label_408108;
        case 0x40810cu: goto label_40810c;
        case 0x408110u: goto label_408110;
        case 0x408114u: goto label_408114;
        case 0x408118u: goto label_408118;
        case 0x40811cu: goto label_40811c;
        case 0x408120u: goto label_408120;
        case 0x408124u: goto label_408124;
        case 0x408128u: goto label_408128;
        case 0x40812cu: goto label_40812c;
        case 0x408130u: goto label_408130;
        case 0x408134u: goto label_408134;
        case 0x408138u: goto label_408138;
        case 0x40813cu: goto label_40813c;
        case 0x408140u: goto label_408140;
        case 0x408144u: goto label_408144;
        case 0x408148u: goto label_408148;
        case 0x40814cu: goto label_40814c;
        case 0x408150u: goto label_408150;
        case 0x408154u: goto label_408154;
        case 0x408158u: goto label_408158;
        case 0x40815cu: goto label_40815c;
        case 0x408160u: goto label_408160;
        case 0x408164u: goto label_408164;
        case 0x408168u: goto label_408168;
        case 0x40816cu: goto label_40816c;
        case 0x408170u: goto label_408170;
        case 0x408174u: goto label_408174;
        case 0x408178u: goto label_408178;
        case 0x40817cu: goto label_40817c;
        case 0x408180u: goto label_408180;
        case 0x408184u: goto label_408184;
        case 0x408188u: goto label_408188;
        case 0x40818cu: goto label_40818c;
        case 0x408190u: goto label_408190;
        case 0x408194u: goto label_408194;
        case 0x408198u: goto label_408198;
        case 0x40819cu: goto label_40819c;
        case 0x4081a0u: goto label_4081a0;
        case 0x4081a4u: goto label_4081a4;
        case 0x4081a8u: goto label_4081a8;
        case 0x4081acu: goto label_4081ac;
        case 0x4081b0u: goto label_4081b0;
        case 0x4081b4u: goto label_4081b4;
        case 0x4081b8u: goto label_4081b8;
        case 0x4081bcu: goto label_4081bc;
        case 0x4081c0u: goto label_4081c0;
        case 0x4081c4u: goto label_4081c4;
        case 0x4081c8u: goto label_4081c8;
        case 0x4081ccu: goto label_4081cc;
        case 0x4081d0u: goto label_4081d0;
        case 0x4081d4u: goto label_4081d4;
        case 0x4081d8u: goto label_4081d8;
        case 0x4081dcu: goto label_4081dc;
        case 0x4081e0u: goto label_4081e0;
        case 0x4081e4u: goto label_4081e4;
        case 0x4081e8u: goto label_4081e8;
        case 0x4081ecu: goto label_4081ec;
        case 0x4081f0u: goto label_4081f0;
        case 0x4081f4u: goto label_4081f4;
        case 0x4081f8u: goto label_4081f8;
        case 0x4081fcu: goto label_4081fc;
        case 0x408200u: goto label_408200;
        case 0x408204u: goto label_408204;
        case 0x408208u: goto label_408208;
        case 0x40820cu: goto label_40820c;
        case 0x408210u: goto label_408210;
        case 0x408214u: goto label_408214;
        case 0x408218u: goto label_408218;
        case 0x40821cu: goto label_40821c;
        case 0x408220u: goto label_408220;
        case 0x408224u: goto label_408224;
        case 0x408228u: goto label_408228;
        case 0x40822cu: goto label_40822c;
        case 0x408230u: goto label_408230;
        case 0x408234u: goto label_408234;
        case 0x408238u: goto label_408238;
        case 0x40823cu: goto label_40823c;
        case 0x408240u: goto label_408240;
        case 0x408244u: goto label_408244;
        case 0x408248u: goto label_408248;
        case 0x40824cu: goto label_40824c;
        case 0x408250u: goto label_408250;
        case 0x408254u: goto label_408254;
        case 0x408258u: goto label_408258;
        case 0x40825cu: goto label_40825c;
        case 0x408260u: goto label_408260;
        case 0x408264u: goto label_408264;
        case 0x408268u: goto label_408268;
        case 0x40826cu: goto label_40826c;
        case 0x408270u: goto label_408270;
        case 0x408274u: goto label_408274;
        case 0x408278u: goto label_408278;
        case 0x40827cu: goto label_40827c;
        case 0x408280u: goto label_408280;
        case 0x408284u: goto label_408284;
        case 0x408288u: goto label_408288;
        case 0x40828cu: goto label_40828c;
        case 0x408290u: goto label_408290;
        case 0x408294u: goto label_408294;
        case 0x408298u: goto label_408298;
        case 0x40829cu: goto label_40829c;
        case 0x4082a0u: goto label_4082a0;
        case 0x4082a4u: goto label_4082a4;
        case 0x4082a8u: goto label_4082a8;
        case 0x4082acu: goto label_4082ac;
        case 0x4082b0u: goto label_4082b0;
        case 0x4082b4u: goto label_4082b4;
        case 0x4082b8u: goto label_4082b8;
        case 0x4082bcu: goto label_4082bc;
        case 0x4082c0u: goto label_4082c0;
        case 0x4082c4u: goto label_4082c4;
        case 0x4082c8u: goto label_4082c8;
        case 0x4082ccu: goto label_4082cc;
        case 0x4082d0u: goto label_4082d0;
        case 0x4082d4u: goto label_4082d4;
        case 0x4082d8u: goto label_4082d8;
        case 0x4082dcu: goto label_4082dc;
        case 0x4082e0u: goto label_4082e0;
        case 0x4082e4u: goto label_4082e4;
        case 0x4082e8u: goto label_4082e8;
        case 0x4082ecu: goto label_4082ec;
        case 0x4082f0u: goto label_4082f0;
        case 0x4082f4u: goto label_4082f4;
        case 0x4082f8u: goto label_4082f8;
        case 0x4082fcu: goto label_4082fc;
        case 0x408300u: goto label_408300;
        case 0x408304u: goto label_408304;
        case 0x408308u: goto label_408308;
        case 0x40830cu: goto label_40830c;
        case 0x408310u: goto label_408310;
        case 0x408314u: goto label_408314;
        case 0x408318u: goto label_408318;
        case 0x40831cu: goto label_40831c;
        case 0x408320u: goto label_408320;
        case 0x408324u: goto label_408324;
        case 0x408328u: goto label_408328;
        case 0x40832cu: goto label_40832c;
        case 0x408330u: goto label_408330;
        case 0x408334u: goto label_408334;
        case 0x408338u: goto label_408338;
        case 0x40833cu: goto label_40833c;
        case 0x408340u: goto label_408340;
        case 0x408344u: goto label_408344;
        case 0x408348u: goto label_408348;
        case 0x40834cu: goto label_40834c;
        case 0x408350u: goto label_408350;
        case 0x408354u: goto label_408354;
        case 0x408358u: goto label_408358;
        case 0x40835cu: goto label_40835c;
        case 0x408360u: goto label_408360;
        case 0x408364u: goto label_408364;
        case 0x408368u: goto label_408368;
        case 0x40836cu: goto label_40836c;
        case 0x408370u: goto label_408370;
        case 0x408374u: goto label_408374;
        case 0x408378u: goto label_408378;
        case 0x40837cu: goto label_40837c;
        case 0x408380u: goto label_408380;
        case 0x408384u: goto label_408384;
        case 0x408388u: goto label_408388;
        case 0x40838cu: goto label_40838c;
        case 0x408390u: goto label_408390;
        case 0x408394u: goto label_408394;
        case 0x408398u: goto label_408398;
        case 0x40839cu: goto label_40839c;
        case 0x4083a0u: goto label_4083a0;
        case 0x4083a4u: goto label_4083a4;
        case 0x4083a8u: goto label_4083a8;
        case 0x4083acu: goto label_4083ac;
        case 0x4083b0u: goto label_4083b0;
        case 0x4083b4u: goto label_4083b4;
        case 0x4083b8u: goto label_4083b8;
        case 0x4083bcu: goto label_4083bc;
        case 0x4083c0u: goto label_4083c0;
        case 0x4083c4u: goto label_4083c4;
        case 0x4083c8u: goto label_4083c8;
        case 0x4083ccu: goto label_4083cc;
        case 0x4083d0u: goto label_4083d0;
        case 0x4083d4u: goto label_4083d4;
        case 0x4083d8u: goto label_4083d8;
        case 0x4083dcu: goto label_4083dc;
        case 0x4083e0u: goto label_4083e0;
        case 0x4083e4u: goto label_4083e4;
        case 0x4083e8u: goto label_4083e8;
        case 0x4083ecu: goto label_4083ec;
        default: break;
    }

    ctx->pc = 0x407bb0u;

label_407bb0:
    // 0x407bb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x407bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_407bb4:
    // 0x407bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x407bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_407bb8:
    // 0x407bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407bbc:
    // 0x407bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_407bc0:
    // 0x407bc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x407bc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407bc4:
    // 0x407bc4: 0xc102114  jal         func_408450
label_407bc8:
    if (ctx->pc == 0x407BC8u) {
        ctx->pc = 0x407BC8u;
            // 0x407bc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x407BCCu;
        goto label_407bcc;
    }
    ctx->pc = 0x407BC4u;
    SET_GPR_U32(ctx, 31, 0x407BCCu);
    ctx->pc = 0x407BC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407BC4u;
            // 0x407bc8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x408450u;
    if (runtime->hasFunction(0x408450u)) {
        auto targetFn = runtime->lookupFunction(0x408450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407BCCu; }
        if (ctx->pc != 0x407BCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00408450_0x408450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407BCCu; }
        if (ctx->pc != 0x407BCCu) { return; }
    }
    ctx->pc = 0x407BCCu;
label_407bcc:
    // 0x407bcc: 0x8e510050  lw          $s1, 0x50($s2)
    ctx->pc = 0x407bccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_407bd0:
    // 0x407bd0: 0x8e500058  lw          $s0, 0x58($s2)
    ctx->pc = 0x407bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
label_407bd4:
    // 0x407bd4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x407bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_407bd8:
    // 0x407bd8: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x407bd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_407bdc:
    // 0x407bdc: 0x320f809  jalr        $t9
label_407be0:
    if (ctx->pc == 0x407BE0u) {
        ctx->pc = 0x407BE0u;
            // 0x407be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407BE4u;
        goto label_407be4;
    }
    ctx->pc = 0x407BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407BE4u);
        ctx->pc = 0x407BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407BDCu;
            // 0x407be0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x407BE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407BE4u; }
            if (ctx->pc != 0x407BE4u) { return; }
        }
        }
    }
    ctx->pc = 0x407BE4u;
label_407be4:
    // 0x407be4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x407be4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_407be8:
    // 0x407be8: 0x1e00fffa  bgtz        $s0, . + 4 + (-0x6 << 2)
label_407bec:
    if (ctx->pc == 0x407BECu) {
        ctx->pc = 0x407BECu;
            // 0x407bec: 0x26310170  addiu       $s1, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->pc = 0x407BF0u;
        goto label_407bf0;
    }
    ctx->pc = 0x407BE8u;
    {
        const bool branch_taken_0x407be8 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x407BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407BE8u;
            // 0x407bec: 0x26310170  addiu       $s1, $s1, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407be8) {
            ctx->pc = 0x407BD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407bd4;
        }
    }
    ctx->pc = 0x407BF0u;
label_407bf0:
    // 0x407bf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x407bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407bf4:
    // 0x407bf4: 0xa243005c  sb          $v1, 0x5C($s2)
    ctx->pc = 0x407bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 92), (uint8_t)GPR_U32(ctx, 3));
label_407bf8:
    // 0x407bf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x407bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_407bfc:
    // 0x407bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x407bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_407c00:
    // 0x407c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407c04:
    // 0x407c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407c08:
    // 0x407c08: 0x3e00008  jr          $ra
label_407c0c:
    if (ctx->pc == 0x407C0Cu) {
        ctx->pc = 0x407C0Cu;
            // 0x407c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x407C10u;
        goto label_407c10;
    }
    ctx->pc = 0x407C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407C08u;
            // 0x407c0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407C10u;
label_407c10:
    // 0x407c10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x407c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_407c14:
    // 0x407c14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x407c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_407c18:
    // 0x407c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_407c1c:
    // 0x407c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407c20:
    // 0x407c20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x407c20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407c24:
    // 0x407c24: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_407c28:
    if (ctx->pc == 0x407C28u) {
        ctx->pc = 0x407C28u;
            // 0x407c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407C2Cu;
        goto label_407c2c;
    }
    ctx->pc = 0x407C24u;
    {
        const bool branch_taken_0x407c24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x407C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407C24u;
            // 0x407c28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407c24) {
            ctx->pc = 0x407C84u;
            goto label_407c84;
        }
    }
    ctx->pc = 0x407C2Cu;
label_407c2c:
    // 0x407c2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x407c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_407c30:
    // 0x407c30: 0x2442a900  addiu       $v0, $v0, -0x5700
    ctx->pc = 0x407c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945024));
label_407c34:
    // 0x407c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x407c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_407c38:
    // 0x407c38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x407c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407c3c:
    // 0x407c3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x407c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_407c40:
    // 0x407c40: 0x320f809  jalr        $t9
label_407c44:
    if (ctx->pc == 0x407C44u) {
        ctx->pc = 0x407C48u;
        goto label_407c48;
    }
    ctx->pc = 0x407C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407C48u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x407C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407C48u; }
            if (ctx->pc != 0x407C48u) { return; }
        }
        }
    }
    ctx->pc = 0x407C48u;
label_407c48:
    // 0x407c48: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_407c4c:
    if (ctx->pc == 0x407C4Cu) {
        ctx->pc = 0x407C4Cu;
            // 0x407c4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x407C50u;
        goto label_407c50;
    }
    ctx->pc = 0x407C48u;
    {
        const bool branch_taken_0x407c48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x407c48) {
            ctx->pc = 0x407C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407C48u;
            // 0x407c4c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407C70u;
            goto label_407c70;
        }
    }
    ctx->pc = 0x407C50u;
label_407c50:
    // 0x407c50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407c54:
    // 0x407c54: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x407c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_407c58:
    // 0x407c58: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_407c5c:
    if (ctx->pc == 0x407C5Cu) {
        ctx->pc = 0x407C5Cu;
            // 0x407c5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x407C60u;
        goto label_407c60;
    }
    ctx->pc = 0x407C58u;
    {
        const bool branch_taken_0x407c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x407C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407C58u;
            // 0x407c5c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407c58) {
            ctx->pc = 0x407C6Cu;
            goto label_407c6c;
        }
    }
    ctx->pc = 0x407C60u;
label_407c60:
    // 0x407c60: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407c64:
    // 0x407c64: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x407c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_407c68:
    // 0x407c68: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x407c68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_407c6c:
    // 0x407c6c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x407c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_407c70:
    // 0x407c70: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x407c70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_407c74:
    // 0x407c74: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_407c78:
    if (ctx->pc == 0x407C78u) {
        ctx->pc = 0x407C78u;
            // 0x407c78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407C7Cu;
        goto label_407c7c;
    }
    ctx->pc = 0x407C74u;
    {
        const bool branch_taken_0x407c74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x407c74) {
            ctx->pc = 0x407C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407C74u;
            // 0x407c78: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407C88u;
            goto label_407c88;
        }
    }
    ctx->pc = 0x407C7Cu;
label_407c7c:
    // 0x407c7c: 0xc0400a8  jal         func_1002A0
label_407c80:
    if (ctx->pc == 0x407C80u) {
        ctx->pc = 0x407C80u;
            // 0x407c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407C84u;
        goto label_407c84;
    }
    ctx->pc = 0x407C7Cu;
    SET_GPR_U32(ctx, 31, 0x407C84u);
    ctx->pc = 0x407C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407C7Cu;
            // 0x407c80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407C84u; }
        if (ctx->pc != 0x407C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407C84u; }
        if (ctx->pc != 0x407C84u) { return; }
    }
    ctx->pc = 0x407C84u;
label_407c84:
    // 0x407c84: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x407c84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_407c88:
    // 0x407c88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x407c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_407c8c:
    // 0x407c8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x407c8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_407c90:
    // 0x407c90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407c90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407c94:
    // 0x407c94: 0x3e00008  jr          $ra
label_407c98:
    if (ctx->pc == 0x407C98u) {
        ctx->pc = 0x407C98u;
            // 0x407c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x407C9Cu;
        goto label_407c9c;
    }
    ctx->pc = 0x407C94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407C94u;
            // 0x407c98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407C9Cu;
label_407c9c:
    // 0x407c9c: 0x0  nop
    ctx->pc = 0x407c9cu;
    // NOP
label_407ca0:
    // 0x407ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x407ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_407ca4:
    // 0x407ca4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407ca8:
    // 0x407ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_407cac:
    // 0x407cac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x407cacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_407cb0:
    // 0x407cb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407cb4:
    // 0x407cb4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x407cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_407cb8:
    // 0x407cb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x407cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_407cbc:
    // 0x407cbc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x407cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_407cc0:
    // 0x407cc0: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x407cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_407cc4:
    // 0x407cc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x407cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407cc8:
    // 0x407cc8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x407cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_407ccc:
    // 0x407ccc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407cccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407cd0:
    // 0x407cd0: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x407cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_407cd4:
    // 0x407cd4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x407cd4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_407cd8:
    // 0x407cd8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x407cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_407cdc:
    // 0x407cdc: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x407cdcu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_407ce0:
    // 0x407ce0: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x407ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_407ce4:
    // 0x407ce4: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x407ce4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_407ce8:
    // 0x407ce8: 0xc04cbd8  jal         func_132F60
label_407cec:
    if (ctx->pc == 0x407CECu) {
        ctx->pc = 0x407CECu;
            // 0x407cec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x407CF0u;
        goto label_407cf0;
    }
    ctx->pc = 0x407CE8u;
    SET_GPR_U32(ctx, 31, 0x407CF0u);
    ctx->pc = 0x407CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407CE8u;
            // 0x407cec: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407CF0u; }
        if (ctx->pc != 0x407CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407CF0u; }
        if (ctx->pc != 0x407CF0u) { return; }
    }
    ctx->pc = 0x407CF0u;
label_407cf0:
    // 0x407cf0: 0xc04c968  jal         func_1325A0
label_407cf4:
    if (ctx->pc == 0x407CF4u) {
        ctx->pc = 0x407CF4u;
            // 0x407cf4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x407CF8u;
        goto label_407cf8;
    }
    ctx->pc = 0x407CF0u;
    SET_GPR_U32(ctx, 31, 0x407CF8u);
    ctx->pc = 0x407CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407CF0u;
            // 0x407cf4: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407CF8u; }
        if (ctx->pc != 0x407CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407CF8u; }
        if (ctx->pc != 0x407CF8u) { return; }
    }
    ctx->pc = 0x407CF8u;
label_407cf8:
    // 0x407cf8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_407cfc:
    // 0x407cfc: 0x3c060064  lui         $a2, 0x64
    ctx->pc = 0x407cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)100 << 16));
label_407d00:
    // 0x407d00: 0x8c470e80  lw          $a3, 0xE80($v0)
    ctx->pc = 0x407d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_407d04:
    // 0x407d04: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x407d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_407d08:
    // 0x407d08: 0x24c6c560  addiu       $a2, $a2, -0x3AA0
    ctx->pc = 0x407d08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952288));
label_407d0c:
    // 0x407d0c: 0x24a5a900  addiu       $a1, $a1, -0x5700
    ctx->pc = 0x407d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945024));
label_407d10:
    // 0x407d10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x407d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407d14:
    // 0x407d14: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x407d14u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_407d18:
    // 0x407d18: 0x8ce70788  lw          $a3, 0x788($a3)
    ctx->pc = 0x407d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1928)));
label_407d1c:
    // 0x407d1c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x407d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_407d20:
    // 0x407d20: 0x2442ba90  addiu       $v0, $v0, -0x4570
    ctx->pc = 0x407d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949520));
label_407d24:
    // 0x407d24: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x407d24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_407d28:
    // 0x407d28: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x407d28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_407d2c:
    // 0x407d2c: 0xa206004d  sb          $a2, 0x4D($s0)
    ctx->pc = 0x407d2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 6));
label_407d30:
    // 0x407d30: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x407d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_407d34:
    // 0x407d34: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x407d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_407d38:
    // 0x407d38: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x407d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_407d3c:
    // 0x407d3c: 0xa204005c  sb          $a0, 0x5C($s0)
    ctx->pc = 0x407d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 92), (uint8_t)GPR_U32(ctx, 4));
label_407d40:
    // 0x407d40: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x407d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
label_407d44:
    // 0x407d44: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x407d44u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_407d48:
    // 0x407d48: 0x24630007  addiu       $v1, $v1, 0x7
    ctx->pc = 0x407d48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_407d4c:
    // 0x407d4c: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x407d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_407d50:
    // 0x407d50: 0x2864000e  slti        $a0, $v1, 0xE
    ctx->pc = 0x407d50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)14) ? 1 : 0);
label_407d54:
    // 0x407d54: 0x80470001  lb          $a3, 0x1($v0)
    ctx->pc = 0x407d54u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_407d58:
    // 0x407d58: 0x80460002  lb          $a2, 0x2($v0)
    ctx->pc = 0x407d58u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
label_407d5c:
    // 0x407d5c: 0xa84021  addu        $t0, $a1, $t0
    ctx->pc = 0x407d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_407d60:
    // 0x407d60: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x407d60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_407d64:
    // 0x407d64: 0xae080058  sw          $t0, 0x58($s0)
    ctx->pc = 0x407d64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 8));
label_407d68:
    // 0x407d68: 0x80450003  lb          $a1, 0x3($v0)
    ctx->pc = 0x407d68u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_407d6c:
    // 0x407d6c: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x407d6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_407d70:
    // 0x407d70: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x407d70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
label_407d74:
    // 0x407d74: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x407d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
label_407d78:
    // 0x407d78: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x407d78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_407d7c:
    // 0x407d7c: 0x80470004  lb          $a3, 0x4($v0)
    ctx->pc = 0x407d7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_407d80:
    // 0x407d80: 0x80460005  lb          $a2, 0x5($v0)
    ctx->pc = 0x407d80u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_407d84:
    // 0x407d84: 0x80450006  lb          $a1, 0x6($v0)
    ctx->pc = 0x407d84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_407d88:
    // 0x407d88: 0x1073821  addu        $a3, $t0, $a3
    ctx->pc = 0x407d88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_407d8c:
    // 0x407d8c: 0xae080058  sw          $t0, 0x58($s0)
    ctx->pc = 0x407d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 8));
label_407d90:
    // 0x407d90: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x407d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_407d94:
    // 0x407d94: 0xae070058  sw          $a3, 0x58($s0)
    ctx->pc = 0x407d94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 7));
label_407d98:
    // 0x407d98: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x407d98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_407d9c:
    // 0x407d9c: 0xae060058  sw          $a2, 0x58($s0)
    ctx->pc = 0x407d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 6));
label_407da0:
    // 0x407da0: 0xae050058  sw          $a1, 0x58($s0)
    ctx->pc = 0x407da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 5));
label_407da4:
    // 0x407da4: 0x1480ffe7  bnez        $a0, . + 4 + (-0x19 << 2)
label_407da8:
    if (ctx->pc == 0x407DA8u) {
        ctx->pc = 0x407DA8u;
            // 0x407da8: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->pc = 0x407DACu;
        goto label_407dac;
    }
    ctx->pc = 0x407DA4u;
    {
        const bool branch_taken_0x407da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x407DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407DA4u;
            // 0x407da8: 0x24420007  addiu       $v0, $v0, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407da4) {
            ctx->pc = 0x407D44u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_407d44;
        }
    }
    ctx->pc = 0x407DACu;
label_407dac:
    // 0x407dac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x407dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407db0:
    // 0x407db0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_407db4:
    // 0x407db4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407db4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407db8:
    // 0x407db8: 0x3e00008  jr          $ra
label_407dbc:
    if (ctx->pc == 0x407DBCu) {
        ctx->pc = 0x407DBCu;
            // 0x407dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x407DC0u;
        goto label_407dc0;
    }
    ctx->pc = 0x407DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407DB8u;
            // 0x407dbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407DC0u;
label_407dc0:
    // 0x407dc0: 0x3e00008  jr          $ra
label_407dc4:
    if (ctx->pc == 0x407DC4u) {
        ctx->pc = 0x407DC4u;
            // 0x407dc4: 0x24023aa3  addiu       $v0, $zero, 0x3AA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15011));
        ctx->pc = 0x407DC8u;
        goto label_407dc8;
    }
    ctx->pc = 0x407DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407DC0u;
            // 0x407dc4: 0x24023aa3  addiu       $v0, $zero, 0x3AA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15011));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407DC8u;
label_407dc8:
    // 0x407dc8: 0x0  nop
    ctx->pc = 0x407dc8u;
    // NOP
label_407dcc:
    // 0x407dcc: 0x0  nop
    ctx->pc = 0x407dccu;
    // NOP
label_407dd0:
    // 0x407dd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x407dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_407dd4:
    // 0x407dd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x407dd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_407dd8:
    // 0x407dd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407ddc:
    // 0x407ddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x407ddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407de0:
    // 0x407de0: 0x8c840168  lw          $a0, 0x168($a0)
    ctx->pc = 0x407de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 360)));
label_407de4:
    // 0x407de4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_407de8:
    if (ctx->pc == 0x407DE8u) {
        ctx->pc = 0x407DE8u;
            // 0x407de8: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->pc = 0x407DECu;
        goto label_407dec;
    }
    ctx->pc = 0x407DE4u;
    {
        const bool branch_taken_0x407de4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x407de4) {
            ctx->pc = 0x407DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407DE4u;
            // 0x407de8: 0xae000168  sw          $zero, 0x168($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407E00u;
            goto label_407e00;
        }
    }
    ctx->pc = 0x407DECu;
label_407dec:
    // 0x407dec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x407decu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407df0:
    // 0x407df0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x407df0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_407df4:
    // 0x407df4: 0x320f809  jalr        $t9
label_407df8:
    if (ctx->pc == 0x407DF8u) {
        ctx->pc = 0x407DF8u;
            // 0x407df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x407DFCu;
        goto label_407dfc;
    }
    ctx->pc = 0x407DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407DFCu);
        ctx->pc = 0x407DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407DF4u;
            // 0x407df8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x407DFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407DFCu; }
            if (ctx->pc != 0x407DFCu) { return; }
        }
        }
    }
    ctx->pc = 0x407DFCu;
label_407dfc:
    // 0x407dfc: 0xae000168  sw          $zero, 0x168($s0)
    ctx->pc = 0x407dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 360), GPR_U32(ctx, 0));
label_407e00:
    // 0x407e00: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x407e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_407e04:
    // 0x407e04: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_407e08:
    if (ctx->pc == 0x407E08u) {
        ctx->pc = 0x407E08u;
            // 0x407e08: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x407E0Cu;
        goto label_407e0c;
    }
    ctx->pc = 0x407E04u;
    {
        const bool branch_taken_0x407e04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x407e04) {
            ctx->pc = 0x407E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407E04u;
            // 0x407e08: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407E20u;
            goto label_407e20;
        }
    }
    ctx->pc = 0x407E0Cu;
label_407e0c:
    // 0x407e0c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x407e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_407e10:
    // 0x407e10: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x407e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_407e14:
    // 0x407e14: 0x320f809  jalr        $t9
label_407e18:
    if (ctx->pc == 0x407E18u) {
        ctx->pc = 0x407E18u;
            // 0x407e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x407E1Cu;
        goto label_407e1c;
    }
    ctx->pc = 0x407E14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407E1Cu);
        ctx->pc = 0x407E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407E14u;
            // 0x407e18: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x407E1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407E1Cu; }
            if (ctx->pc != 0x407E1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x407E1Cu;
label_407e1c:
    // 0x407e1c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x407e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_407e20:
    // 0x407e20: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x407e20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_407e24:
    // 0x407e24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_407e28:
    if (ctx->pc == 0x407E28u) {
        ctx->pc = 0x407E28u;
            // 0x407e28: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x407E2Cu;
        goto label_407e2c;
    }
    ctx->pc = 0x407E24u;
    {
        const bool branch_taken_0x407e24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x407e24) {
            ctx->pc = 0x407E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x407E24u;
            // 0x407e28: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x407E40u;
            goto label_407e40;
        }
    }
    ctx->pc = 0x407E2Cu;
label_407e2c:
    // 0x407e2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x407e2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_407e30:
    // 0x407e30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x407e30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_407e34:
    // 0x407e34: 0x320f809  jalr        $t9
label_407e38:
    if (ctx->pc == 0x407E38u) {
        ctx->pc = 0x407E38u;
            // 0x407e38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x407E3Cu;
        goto label_407e3c;
    }
    ctx->pc = 0x407E34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x407E3Cu);
        ctx->pc = 0x407E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407E34u;
            // 0x407e38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x407E3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x407E3Cu; }
            if (ctx->pc != 0x407E3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x407E3Cu;
label_407e3c:
    // 0x407e3c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x407e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_407e40:
    // 0x407e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x407e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_407e44:
    // 0x407e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x407e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_407e48:
    // 0x407e48: 0x3e00008  jr          $ra
label_407e4c:
    if (ctx->pc == 0x407E4Cu) {
        ctx->pc = 0x407E4Cu;
            // 0x407e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x407E50u;
        goto label_407e50;
    }
    ctx->pc = 0x407E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x407E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407E48u;
            // 0x407e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x407E50u;
label_407e50:
    // 0x407e50: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x407e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_407e54:
    // 0x407e54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x407e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_407e58:
    // 0x407e58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x407e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_407e5c:
    // 0x407e5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x407e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_407e60:
    // 0x407e60: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x407e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_407e64:
    // 0x407e64: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x407e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_407e68:
    // 0x407e68: 0xc0892d0  jal         func_224B40
label_407e6c:
    if (ctx->pc == 0x407E6Cu) {
        ctx->pc = 0x407E6Cu;
            // 0x407e6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x407E70u;
        goto label_407e70;
    }
    ctx->pc = 0x407E68u;
    SET_GPR_U32(ctx, 31, 0x407E70u);
    ctx->pc = 0x407E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407E68u;
            // 0x407e6c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E70u; }
        if (ctx->pc != 0x407E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E70u; }
        if (ctx->pc != 0x407E70u) { return; }
    }
    ctx->pc = 0x407E70u;
label_407e70:
    // 0x407e70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x407e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_407e74:
    // 0x407e74: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x407e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_407e78:
    // 0x407e78: 0x8c4272a0  lw          $v0, 0x72A0($v0)
    ctx->pc = 0x407e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_407e7c:
    // 0x407e7c: 0x8c5000e0  lw          $s0, 0xE0($v0)
    ctx->pc = 0x407e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 224)));
label_407e80:
    // 0x407e80: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x407e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_407e84:
    // 0x407e84: 0xc0b6e68  jal         func_2DB9A0
label_407e88:
    if (ctx->pc == 0x407E88u) {
        ctx->pc = 0x407E88u;
            // 0x407e88: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x407E8Cu;
        goto label_407e8c;
    }
    ctx->pc = 0x407E84u;
    SET_GPR_U32(ctx, 31, 0x407E8Cu);
    ctx->pc = 0x407E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407E84u;
            // 0x407e88: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E8Cu; }
        if (ctx->pc != 0x407E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E8Cu; }
        if (ctx->pc != 0x407E8Cu) { return; }
    }
    ctx->pc = 0x407E8Cu;
label_407e8c:
    // 0x407e8c: 0xc0b6dac  jal         func_2DB6B0
label_407e90:
    if (ctx->pc == 0x407E90u) {
        ctx->pc = 0x407E90u;
            // 0x407e90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x407E94u;
        goto label_407e94;
    }
    ctx->pc = 0x407E8Cu;
    SET_GPR_U32(ctx, 31, 0x407E94u);
    ctx->pc = 0x407E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407E8Cu;
            // 0x407e90: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E94u; }
        if (ctx->pc != 0x407E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E94u; }
        if (ctx->pc != 0x407E94u) { return; }
    }
    ctx->pc = 0x407E94u;
label_407e94:
    // 0x407e94: 0xc0cac94  jal         func_32B250
label_407e98:
    if (ctx->pc == 0x407E98u) {
        ctx->pc = 0x407E98u;
            // 0x407e98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x407E9Cu;
        goto label_407e9c;
    }
    ctx->pc = 0x407E94u;
    SET_GPR_U32(ctx, 31, 0x407E9Cu);
    ctx->pc = 0x407E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407E94u;
            // 0x407e98: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E9Cu; }
        if (ctx->pc != 0x407E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407E9Cu; }
        if (ctx->pc != 0x407E9Cu) { return; }
    }
    ctx->pc = 0x407E9Cu;
label_407e9c:
    // 0x407e9c: 0xc0cac84  jal         func_32B210
label_407ea0:
    if (ctx->pc == 0x407EA0u) {
        ctx->pc = 0x407EA0u;
            // 0x407ea0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x407EA4u;
        goto label_407ea4;
    }
    ctx->pc = 0x407E9Cu;
    SET_GPR_U32(ctx, 31, 0x407EA4u);
    ctx->pc = 0x407EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407E9Cu;
            // 0x407ea0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407EA4u; }
        if (ctx->pc != 0x407EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407EA4u; }
        if (ctx->pc != 0x407EA4u) { return; }
    }
    ctx->pc = 0x407EA4u;
label_407ea4:
    // 0x407ea4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x407ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_407ea8:
    // 0x407ea8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x407ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_407eac:
    // 0x407eac: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x407eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_407eb0:
    // 0x407eb0: 0xc0a5a68  jal         func_2969A0
label_407eb4:
    if (ctx->pc == 0x407EB4u) {
        ctx->pc = 0x407EB4u;
            // 0x407eb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x407EB8u;
        goto label_407eb8;
    }
    ctx->pc = 0x407EB0u;
    SET_GPR_U32(ctx, 31, 0x407EB8u);
    ctx->pc = 0x407EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407EB0u;
            // 0x407eb4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407EB8u; }
        if (ctx->pc != 0x407EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407EB8u; }
        if (ctx->pc != 0x407EB8u) { return; }
    }
    ctx->pc = 0x407EB8u;
label_407eb8:
    // 0x407eb8: 0xafb000c4  sw          $s0, 0xC4($sp)
    ctx->pc = 0x407eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 16));
label_407ebc:
    // 0x407ebc: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x407ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_407ec0:
    // 0x407ec0: 0xc6260018  lwc1        $f6, 0x18($s1)
    ctx->pc = 0x407ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_407ec4:
    // 0x407ec4: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x407ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_407ec8:
    // 0x407ec8: 0xc6250014  lwc1        $f5, 0x14($s1)
    ctx->pc = 0x407ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_407ecc:
    // 0x407ecc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x407eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_407ed0:
    // 0x407ed0: 0xc6240010  lwc1        $f4, 0x10($s1)
    ctx->pc = 0x407ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_407ed4:
    // 0x407ed4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x407ed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407ed8:
    // 0x407ed8: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x407ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407edc:
    // 0x407edc: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x407edcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_407ee0:
    // 0x407ee0: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x407ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407ee4:
    // 0x407ee4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x407ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407ee8:
    // 0x407ee8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x407ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407eec:
    // 0x407eec: 0xa3a40172  sb          $a0, 0x172($sp)
    ctx->pc = 0x407eecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 4));
label_407ef0:
    // 0x407ef0: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x407ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_407ef4:
    // 0x407ef4: 0xa3a60170  sb          $a2, 0x170($sp)
    ctx->pc = 0x407ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 6));
label_407ef8:
    // 0x407ef8: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x407ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407efc:
    // 0x407efc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x407efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_407f00:
    // 0x407f00: 0xe7a20114  swc1        $f2, 0x114($sp)
    ctx->pc = 0x407f00u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_407f04:
    // 0x407f04: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x407f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_407f08:
    // 0x407f08: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x407f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_407f0c:
    // 0x407f0c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x407f0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_407f10:
    // 0x407f10: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x407f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_407f14:
    // 0x407f14: 0xafa7016c  sw          $a3, 0x16C($sp)
    ctx->pc = 0x407f14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 7));
label_407f18:
    // 0x407f18: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x407f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407f1c:
    // 0x407f1c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x407f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_407f20:
    // 0x407f20: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x407f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407f24:
    // 0x407f24: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x407f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_407f28:
    // 0x407f28: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x407f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407f2c:
    // 0x407f2c: 0xe7a20120  swc1        $f2, 0x120($sp)
    ctx->pc = 0x407f2cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_407f30:
    // 0x407f30: 0xe7a10124  swc1        $f1, 0x124($sp)
    ctx->pc = 0x407f30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_407f34:
    // 0x407f34: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x407f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_407f38:
    // 0x407f38: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x407f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407f3c:
    // 0x407f3c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x407f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407f40:
    // 0x407f40: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x407f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407f44:
    // 0x407f44: 0xe7a2012c  swc1        $f2, 0x12C($sp)
    ctx->pc = 0x407f44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_407f48:
    // 0x407f48: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x407f48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_407f4c:
    // 0x407f4c: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x407f4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_407f50:
    // 0x407f50: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x407f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407f54:
    // 0x407f54: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x407f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407f58:
    // 0x407f58: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x407f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407f5c:
    // 0x407f5c: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x407f5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_407f60:
    // 0x407f60: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x407f60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_407f64:
    // 0x407f64: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x407f64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_407f68:
    // 0x407f68: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x407f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_407f6c:
    // 0x407f6c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x407f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_407f70:
    // 0x407f70: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x407f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_407f74:
    // 0x407f74: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x407f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_407f78:
    // 0x407f78: 0xe7a400d0  swc1        $f4, 0xD0($sp)
    ctx->pc = 0x407f78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_407f7c:
    // 0x407f7c: 0xe7a500d4  swc1        $f5, 0xD4($sp)
    ctx->pc = 0x407f7cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_407f80:
    // 0x407f80: 0xe7a600d8  swc1        $f6, 0xD8($sp)
    ctx->pc = 0x407f80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_407f84:
    // 0x407f84: 0xe7a30110  swc1        $f3, 0x110($sp)
    ctx->pc = 0x407f84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_407f88:
    // 0x407f88: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x407f88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_407f8c:
    // 0x407f8c: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x407f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_407f90:
    // 0x407f90: 0xc0a7a88  jal         func_29EA20
label_407f94:
    if (ctx->pc == 0x407F94u) {
        ctx->pc = 0x407F94u;
            // 0x407f94: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x407F98u;
        goto label_407f98;
    }
    ctx->pc = 0x407F90u;
    SET_GPR_U32(ctx, 31, 0x407F98u);
    ctx->pc = 0x407F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407F90u;
            // 0x407f94: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407F98u; }
        if (ctx->pc != 0x407F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407F98u; }
        if (ctx->pc != 0x407F98u) { return; }
    }
    ctx->pc = 0x407F98u;
label_407f98:
    // 0x407f98: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x407f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_407f9c:
    // 0x407f9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x407f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_407fa0:
    // 0x407fa0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_407fa4:
    if (ctx->pc == 0x407FA4u) {
        ctx->pc = 0x407FA4u;
            // 0x407fa4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x407FA8u;
        goto label_407fa8;
    }
    ctx->pc = 0x407FA0u;
    {
        const bool branch_taken_0x407fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x407FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x407FA0u;
            // 0x407fa4: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x407fa0) {
            ctx->pc = 0x407FF0u;
            goto label_407ff0;
        }
    }
    ctx->pc = 0x407FA8u;
label_407fa8:
    // 0x407fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407fac:
    // 0x407fac: 0xc088ef4  jal         func_223BD0
label_407fb0:
    if (ctx->pc == 0x407FB0u) {
        ctx->pc = 0x407FB0u;
            // 0x407fb0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x407FB4u;
        goto label_407fb4;
    }
    ctx->pc = 0x407FACu;
    SET_GPR_U32(ctx, 31, 0x407FB4u);
    ctx->pc = 0x407FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407FACu;
            // 0x407fb0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407FB4u; }
        if (ctx->pc != 0x407FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407FB4u; }
        if (ctx->pc != 0x407FB4u) { return; }
    }
    ctx->pc = 0x407FB4u;
label_407fb4:
    // 0x407fb4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x407fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_407fb8:
    // 0x407fb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x407fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_407fbc:
    // 0x407fbc: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x407fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_407fc0:
    // 0x407fc0: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x407fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_407fc4:
    // 0x407fc4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x407fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_407fc8:
    // 0x407fc8: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x407fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_407fcc:
    // 0x407fcc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x407fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_407fd0:
    // 0x407fd0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x407fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_407fd4:
    // 0x407fd4: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x407fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_407fd8:
    // 0x407fd8: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x407fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_407fdc:
    // 0x407fdc: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x407fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_407fe0:
    // 0x407fe0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x407fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_407fe4:
    // 0x407fe4: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x407fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_407fe8:
    // 0x407fe8: 0xc088b38  jal         func_222CE0
label_407fec:
    if (ctx->pc == 0x407FECu) {
        ctx->pc = 0x407FECu;
            // 0x407fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x407FF0u;
        goto label_407ff0;
    }
    ctx->pc = 0x407FE8u;
    SET_GPR_U32(ctx, 31, 0x407FF0u);
    ctx->pc = 0x407FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x407FE8u;
            // 0x407fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407FF0u; }
        if (ctx->pc != 0x407FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x407FF0u; }
        if (ctx->pc != 0x407FF0u) { return; }
    }
    ctx->pc = 0x407FF0u;
label_407ff0:
    // 0x407ff0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x407ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_407ff4:
    // 0x407ff4: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x407ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_407ff8:
    // 0x407ff8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x407ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_407ffc:
    // 0x407ffc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x407ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408000:
    // 0x408000: 0xc08914c  jal         func_224530
label_408004:
    if (ctx->pc == 0x408004u) {
        ctx->pc = 0x408004u;
            // 0x408004: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x408008u;
        goto label_408008;
    }
    ctx->pc = 0x408000u;
    SET_GPR_U32(ctx, 31, 0x408008u);
    ctx->pc = 0x408004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408000u;
            // 0x408004: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408008u; }
        if (ctx->pc != 0x408008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408008u; }
        if (ctx->pc != 0x408008u) { return; }
    }
    ctx->pc = 0x408008u;
label_408008:
    // 0x408008: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x408008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_40800c:
    // 0x40800c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x40800cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_408010:
    // 0x408010: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x408010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_408014:
    // 0x408014: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x408014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_408018:
    // 0x408018: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x408018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_40801c:
    // 0x40801c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x40801cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_408020:
    // 0x408020: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x408020u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_408024:
    // 0x408024: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x408024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_408028:
    // 0x408028: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x408028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_40802c:
    // 0x40802c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x40802cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_408030:
    // 0x408030: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x408030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_408034:
    // 0x408034: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x408034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_408038:
    // 0x408038: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x408038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_40803c:
    // 0x40803c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x40803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_408040:
    // 0x408040: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x408040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_408044:
    // 0x408044: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x408044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_408048:
    // 0x408048: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x408048u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_40804c:
    // 0x40804c: 0xc0892b0  jal         func_224AC0
label_408050:
    if (ctx->pc == 0x408050u) {
        ctx->pc = 0x408050u;
            // 0x408050: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x408054u;
        goto label_408054;
    }
    ctx->pc = 0x40804Cu;
    SET_GPR_U32(ctx, 31, 0x408054u);
    ctx->pc = 0x408050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40804Cu;
            // 0x408050: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408054u; }
        if (ctx->pc != 0x408054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408054u; }
        if (ctx->pc != 0x408054u) { return; }
    }
    ctx->pc = 0x408054u;
label_408054:
    // 0x408054: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x408054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_408058:
    // 0x408058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x408058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40805c:
    // 0x40805c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x40805cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_408060:
    // 0x408060: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x408060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_408064:
    // 0x408064: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x408064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_408068:
    // 0x408068: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x408068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_40806c:
    // 0x40806c: 0xc0891d8  jal         func_224760
label_408070:
    if (ctx->pc == 0x408070u) {
        ctx->pc = 0x408070u;
            // 0x408070: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x408074u;
        goto label_408074;
    }
    ctx->pc = 0x40806Cu;
    SET_GPR_U32(ctx, 31, 0x408074u);
    ctx->pc = 0x408070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40806Cu;
            // 0x408070: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408074u; }
        if (ctx->pc != 0x408074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408074u; }
        if (ctx->pc != 0x408074u) { return; }
    }
    ctx->pc = 0x408074u;
label_408074:
    // 0x408074: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408078:
    // 0x408078: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x408078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40807c:
    // 0x40807c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x40807cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_408080:
    // 0x408080: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x408080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_408084:
    // 0x408084: 0xc08c164  jal         func_230590
label_408088:
    if (ctx->pc == 0x408088u) {
        ctx->pc = 0x408088u;
            // 0x408088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x40808Cu;
        goto label_40808c;
    }
    ctx->pc = 0x408084u;
    SET_GPR_U32(ctx, 31, 0x40808Cu);
    ctx->pc = 0x408088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408084u;
            // 0x408088: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40808Cu; }
        if (ctx->pc != 0x40808Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40808Cu; }
        if (ctx->pc != 0x40808Cu) { return; }
    }
    ctx->pc = 0x40808Cu;
label_40808c:
    // 0x40808c: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x40808cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_408090:
    // 0x408090: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x408090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_408094:
    // 0x408094: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x408094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_408098:
    // 0x408098: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x408098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40809c:
    // 0x40809c: 0xc0a7a88  jal         func_29EA20
label_4080a0:
    if (ctx->pc == 0x4080A0u) {
        ctx->pc = 0x4080A0u;
            // 0x4080a0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x4080A4u;
        goto label_4080a4;
    }
    ctx->pc = 0x40809Cu;
    SET_GPR_U32(ctx, 31, 0x4080A4u);
    ctx->pc = 0x4080A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40809Cu;
            // 0x4080a0: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080A4u; }
        if (ctx->pc != 0x4080A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080A4u; }
        if (ctx->pc != 0x4080A4u) { return; }
    }
    ctx->pc = 0x4080A4u;
label_4080a4:
    // 0x4080a4: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x4080a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_4080a8:
    // 0x4080a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4080a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4080ac:
    // 0x4080ac: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4080b0:
    if (ctx->pc == 0x4080B0u) {
        ctx->pc = 0x4080B0u;
            // 0x4080b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x4080B4u;
        goto label_4080b4;
    }
    ctx->pc = 0x4080ACu;
    {
        const bool branch_taken_0x4080ac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4080B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4080ACu;
            // 0x4080b0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4080ac) {
            ctx->pc = 0x4080D0u;
            goto label_4080d0;
        }
    }
    ctx->pc = 0x4080B4u;
label_4080b4:
    // 0x4080b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4080b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4080b8:
    // 0x4080b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4080b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4080bc:
    // 0x4080bc: 0xc0869d0  jal         func_21A740
label_4080c0:
    if (ctx->pc == 0x4080C0u) {
        ctx->pc = 0x4080C0u;
            // 0x4080c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4080C4u;
        goto label_4080c4;
    }
    ctx->pc = 0x4080BCu;
    SET_GPR_U32(ctx, 31, 0x4080C4u);
    ctx->pc = 0x4080C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4080BCu;
            // 0x4080c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080C4u; }
        if (ctx->pc != 0x4080C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080C4u; }
        if (ctx->pc != 0x4080C4u) { return; }
    }
    ctx->pc = 0x4080C4u;
label_4080c4:
    // 0x4080c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4080c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4080c8:
    // 0x4080c8: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x4080c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_4080cc:
    // 0x4080cc: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x4080ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_4080d0:
    // 0x4080d0: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x4080d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_4080d4:
    // 0x4080d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4080d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4080d8:
    // 0x4080d8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4080d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4080dc:
    // 0x4080dc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4080dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4080e0:
    // 0x4080e0: 0xc08c650  jal         func_231940
label_4080e4:
    if (ctx->pc == 0x4080E4u) {
        ctx->pc = 0x4080E4u;
            // 0x4080e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4080E8u;
        goto label_4080e8;
    }
    ctx->pc = 0x4080E0u;
    SET_GPR_U32(ctx, 31, 0x4080E8u);
    ctx->pc = 0x4080E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4080E0u;
            // 0x4080e4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080E8u; }
        if (ctx->pc != 0x4080E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080E8u; }
        if (ctx->pc != 0x4080E8u) { return; }
    }
    ctx->pc = 0x4080E8u;
label_4080e8:
    // 0x4080e8: 0xc040180  jal         func_100600
label_4080ec:
    if (ctx->pc == 0x4080ECu) {
        ctx->pc = 0x4080ECu;
            // 0x4080ec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x4080F0u;
        goto label_4080f0;
    }
    ctx->pc = 0x4080E8u;
    SET_GPR_U32(ctx, 31, 0x4080F0u);
    ctx->pc = 0x4080ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4080E8u;
            // 0x4080ec: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080F0u; }
        if (ctx->pc != 0x4080F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4080F0u; }
        if (ctx->pc != 0x4080F0u) { return; }
    }
    ctx->pc = 0x4080F0u;
label_4080f0:
    // 0x4080f0: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_4080f4:
    if (ctx->pc == 0x4080F4u) {
        ctx->pc = 0x4080F4u;
            // 0x4080f4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x4080F8u;
        goto label_4080f8;
    }
    ctx->pc = 0x4080F0u;
    {
        const bool branch_taken_0x4080f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4080f0) {
            ctx->pc = 0x4080F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4080F0u;
            // 0x4080f4: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408140u;
            goto label_408140;
        }
    }
    ctx->pc = 0x4080F8u;
label_4080f8:
    // 0x4080f8: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x4080f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4080fc:
    // 0x4080fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x4080fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_408100:
    // 0x408100: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x408100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_408104:
    // 0x408104: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x408104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_408108:
    // 0x408108: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x408108u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_40810c:
    // 0x40810c: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x40810cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_408110:
    // 0x408110: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x408110u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_408114:
    // 0x408114: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x408114u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_408118:
    // 0x408118: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x408118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_40811c:
    // 0x40811c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x40811cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_408120:
    // 0x408120: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x408120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_408124:
    // 0x408124: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x408124u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_408128:
    // 0x408128: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x408128u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_40812c:
    // 0x40812c: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x40812cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_408130:
    // 0x408130: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x408130u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_408134:
    // 0x408134: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x408134u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_408138:
    // 0x408138: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x408138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_40813c:
    // 0x40813c: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x40813cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_408140:
    // 0x408140: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x408140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_408144:
    // 0x408144: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x408144u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_408148:
    // 0x408148: 0x2402f9ff  addiu       $v0, $zero, -0x601
    ctx->pc = 0x408148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_40814c:
    // 0x40814c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x40814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_408150:
    // 0x408150: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x408150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_408154:
    // 0x408154: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x408154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_408158:
    // 0x408158: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x408158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_40815c:
    // 0x40815c: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x40815cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_408160:
    // 0x408160: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x408160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
label_408164:
    // 0x408164: 0xc040180  jal         func_100600
label_408168:
    if (ctx->pc == 0x408168u) {
        ctx->pc = 0x408168u;
            // 0x408168: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x40816Cu;
        goto label_40816c;
    }
    ctx->pc = 0x408164u;
    SET_GPR_U32(ctx, 31, 0x40816Cu);
    ctx->pc = 0x408168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408164u;
            // 0x408168: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40816Cu; }
        if (ctx->pc != 0x40816Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x40816Cu; }
        if (ctx->pc != 0x40816Cu) { return; }
    }
    ctx->pc = 0x40816Cu;
label_40816c:
    // 0x40816c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40816cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_408170:
    // 0x408170: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_408174:
    if (ctx->pc == 0x408174u) {
        ctx->pc = 0x408174u;
            // 0x408174: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->pc = 0x408178u;
        goto label_408178;
    }
    ctx->pc = 0x408170u;
    {
        const bool branch_taken_0x408170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x408170) {
            ctx->pc = 0x408174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408170u;
            // 0x408174: 0x3c0246af  lui         $v0, 0x46AF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4081B0u;
            goto label_4081b0;
        }
    }
    ctx->pc = 0x408178u;
label_408178:
    // 0x408178: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x408178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_40817c:
    // 0x40817c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40817cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408180:
    // 0x408180: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x408180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_408184:
    // 0x408184: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x408184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_408188:
    // 0x408188: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x408188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_40818c:
    // 0x40818c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x40818cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_408190:
    // 0x408190: 0xc040138  jal         func_1004E0
label_408194:
    if (ctx->pc == 0x408194u) {
        ctx->pc = 0x408194u;
            // 0x408194: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x408198u;
        goto label_408198;
    }
    ctx->pc = 0x408190u;
    SET_GPR_U32(ctx, 31, 0x408198u);
    ctx->pc = 0x408194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408190u;
            // 0x408194: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408198u; }
        if (ctx->pc != 0x408198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408198u; }
        if (ctx->pc != 0x408198u) { return; }
    }
    ctx->pc = 0x408198u;
label_408198:
    // 0x408198: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x408198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_40819c:
    // 0x40819c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x40819cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_4081a0:
    // 0x4081a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4081a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4081a4:
    // 0x4081a4: 0xc04a576  jal         func_1295D8
label_4081a8:
    if (ctx->pc == 0x4081A8u) {
        ctx->pc = 0x4081A8u;
            // 0x4081a8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4081ACu;
        goto label_4081ac;
    }
    ctx->pc = 0x4081A4u;
    SET_GPR_U32(ctx, 31, 0x4081ACu);
    ctx->pc = 0x4081A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4081A4u;
            // 0x4081a8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4081ACu; }
        if (ctx->pc != 0x4081ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4081ACu; }
        if (ctx->pc != 0x4081ACu) { return; }
    }
    ctx->pc = 0x4081ACu;
label_4081ac:
    // 0x4081ac: 0x3c0246af  lui         $v0, 0x46AF
    ctx->pc = 0x4081acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18095 << 16));
label_4081b0:
    // 0x4081b0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4081b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4081b4:
    // 0x4081b4: 0x3442c800  ori         $v0, $v0, 0xC800
    ctx->pc = 0x4081b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)51200);
label_4081b8:
    // 0x4081b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4081b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4081bc:
    // 0x4081bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4081bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4081c0:
    // 0x4081c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4081c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4081c4:
    // 0x4081c4: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x4081c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_4081c8:
    // 0x4081c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4081c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4081cc:
    // 0x4081cc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4081ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4081d0:
    // 0x4081d0: 0x34460eae  ori         $a2, $v0, 0xEAE
    ctx->pc = 0x4081d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3758);
label_4081d4:
    // 0x4081d4: 0xc122cd8  jal         func_48B360
label_4081d8:
    if (ctx->pc == 0x4081D8u) {
        ctx->pc = 0x4081D8u;
            // 0x4081d8: 0xae300168  sw          $s0, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 16));
        ctx->pc = 0x4081DCu;
        goto label_4081dc;
    }
    ctx->pc = 0x4081D4u;
    SET_GPR_U32(ctx, 31, 0x4081DCu);
    ctx->pc = 0x4081D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4081D4u;
            // 0x4081d8: 0xae300168  sw          $s0, 0x168($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 360), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4081DCu; }
        if (ctx->pc != 0x4081DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4081DCu; }
        if (ctx->pc != 0x4081DCu) { return; }
    }
    ctx->pc = 0x4081DCu;
label_4081dc:
    // 0x4081dc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4081dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4081e0:
    // 0x4081e0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x4081e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_4081e4:
    // 0x4081e4: 0xae24008c  sw          $a0, 0x8C($s1)
    ctx->pc = 0x4081e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 4));
label_4081e8:
    // 0x4081e8: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x4081e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_4081ec:
    // 0x4081ec: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4081ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4081f0:
    // 0x4081f0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4081f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4081f4:
    // 0x4081f4: 0xae240078  sw          $a0, 0x78($s1)
    ctx->pc = 0x4081f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 4));
label_4081f8:
    // 0x4081f8: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4081fc:
    // 0x4081fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4081fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_408200:
    // 0x408200: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x408200u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_408204:
    // 0x408204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x408204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_408208:
    // 0x408208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x408208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40820c:
    // 0x40820c: 0x3e00008  jr          $ra
label_408210:
    if (ctx->pc == 0x408210u) {
        ctx->pc = 0x408210u;
            // 0x408210: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x408214u;
        goto label_408214;
    }
    ctx->pc = 0x40820Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40820Cu;
            // 0x408210: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x408214u;
label_408214:
    // 0x408214: 0x0  nop
    ctx->pc = 0x408214u;
    // NOP
label_408218:
    // 0x408218: 0x0  nop
    ctx->pc = 0x408218u;
    // NOP
label_40821c:
    // 0x40821c: 0x0  nop
    ctx->pc = 0x40821cu;
    // NOP
label_408220:
    // 0x408220: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x408220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_408224:
    // 0x408224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x408224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_408228:
    // 0x408228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x408228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40822c:
    // 0x40822c: 0xc0e3580  jal         func_38D600
label_408230:
    if (ctx->pc == 0x408230u) {
        ctx->pc = 0x408230u;
            // 0x408230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408234u;
        goto label_408234;
    }
    ctx->pc = 0x40822Cu;
    SET_GPR_U32(ctx, 31, 0x408234u);
    ctx->pc = 0x408230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x40822Cu;
            // 0x408230: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408234u; }
        if (ctx->pc != 0x408234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408234u; }
        if (ctx->pc != 0x408234u) { return; }
    }
    ctx->pc = 0x408234u;
label_408234:
    // 0x408234: 0x8e0700b0  lw          $a3, 0xB0($s0)
    ctx->pc = 0x408234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_408238:
    // 0x408238: 0x2404f9ff  addiu       $a0, $zero, -0x601
    ctx->pc = 0x408238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_40823c:
    // 0x40823c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x40823cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_408240:
    // 0x408240: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x408240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_408244:
    // 0x408244: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x408244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408248:
    // 0x408248: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x408248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_40824c:
    // 0x40824c: 0xe43824  and         $a3, $a3, $a0
    ctx->pc = 0x40824cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
label_408250:
    // 0x408250: 0x34e70600  ori         $a3, $a3, 0x600
    ctx->pc = 0x408250u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1536);
label_408254:
    // 0x408254: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x408254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_408258:
    // 0x408258: 0xae0700b0  sw          $a3, 0xB0($s0)
    ctx->pc = 0x408258u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 7));
label_40825c:
    // 0x40825c: 0xa2060064  sb          $a2, 0x64($s0)
    ctx->pc = 0x40825cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 6));
label_408260:
    // 0x408260: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x408260u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_408264:
    // 0x408264: 0xa2050068  sb          $a1, 0x68($s0)
    ctx->pc = 0x408264u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 5));
label_408268:
    // 0x408268: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x408268u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_40826c:
    // 0x40826c: 0x8c4272a0  lw          $v0, 0x72A0($v0)
    ctx->pc = 0x40826cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29344)));
label_408270:
    // 0x408270: 0xc04cce8  jal         func_1333A0
label_408274:
    if (ctx->pc == 0x408274u) {
        ctx->pc = 0x408274u;
            // 0x408274: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->pc = 0x408278u;
        goto label_408278;
    }
    ctx->pc = 0x408270u;
    SET_GPR_U32(ctx, 31, 0x408278u);
    ctx->pc = 0x408274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408270u;
            // 0x408274: 0x244500a0  addiu       $a1, $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408278u; }
        if (ctx->pc != 0x408278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408278u; }
        if (ctx->pc != 0x408278u) { return; }
    }
    ctx->pc = 0x408278u;
label_408278:
    // 0x408278: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x408278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_40827c:
    // 0x40827c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x40827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_408280:
    // 0x408280: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_408284:
    if (ctx->pc == 0x408284u) {
        ctx->pc = 0x408284u;
            // 0x408284: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x408288u;
        goto label_408288;
    }
    ctx->pc = 0x408280u;
    {
        const bool branch_taken_0x408280 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x408280) {
            ctx->pc = 0x408284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x408280u;
            // 0x408284: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x408294u;
            goto label_408294;
        }
    }
    ctx->pc = 0x408288u;
label_408288:
    // 0x408288: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x408288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_40828c:
    // 0x40828c: 0x10000007  b           . + 4 + (0x7 << 2)
label_408290:
    if (ctx->pc == 0x408290u) {
        ctx->pc = 0x408290u;
            // 0x408290: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x408294u;
        goto label_408294;
    }
    ctx->pc = 0x40828Cu;
    {
        const bool branch_taken_0x40828c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x408290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40828Cu;
            // 0x408290: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x40828c) {
            ctx->pc = 0x4082ACu;
            goto label_4082ac;
        }
    }
    ctx->pc = 0x408294u;
label_408294:
    // 0x408294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x408294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_408298:
    // 0x408298: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x408298u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_40829c:
    // 0x40829c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x40829cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4082a0:
    // 0x4082a0: 0x0  nop
    ctx->pc = 0x4082a0u;
    // NOP
label_4082a4:
    // 0x4082a4: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4082a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4082a8:
    // 0x4082a8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4082a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4082ac:
    // 0x4082ac: 0x3c024148  lui         $v0, 0x4148
    ctx->pc = 0x4082acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16712 << 16));
label_4082b0:
    // 0x4082b0: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x4082b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_4082b4:
    // 0x4082b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4082b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4082b8:
    // 0x4082b8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4082b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4082bc:
    // 0x4082bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4082bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4082c0:
    // 0x4082c0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4082c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4082c4:
    // 0x4082c4: 0x0  nop
    ctx->pc = 0x4082c4u;
    // NOP
label_4082c8:
    // 0x4082c8: 0x46006018  adda.s      $f12, $f0
    ctx->pc = 0x4082c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
label_4082cc:
    // 0x4082cc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4082ccu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4082d0:
    // 0x4082d0: 0xc04cbd8  jal         func_132F60
label_4082d4:
    if (ctx->pc == 0x4082D4u) {
        ctx->pc = 0x4082D4u;
            // 0x4082d4: 0x46020b9c  madd.s      $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->pc = 0x4082D8u;
        goto label_4082d8;
    }
    ctx->pc = 0x4082D0u;
    SET_GPR_U32(ctx, 31, 0x4082D8u);
    ctx->pc = 0x4082D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4082D0u;
            // 0x4082d4: 0x46020b9c  madd.s      $f14, $f1, $f2 (Delay Slot)
        ctx->f[14] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082D8u; }
        if (ctx->pc != 0x4082D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082D8u; }
        if (ctx->pc != 0x4082D8u) { return; }
    }
    ctx->pc = 0x4082D8u;
label_4082d8:
    // 0x4082d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x4082d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_4082dc:
    // 0x4082dc: 0x260500d0  addiu       $a1, $s0, 0xD0
    ctx->pc = 0x4082dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_4082e0:
    // 0x4082e0: 0xc04cca0  jal         func_133280
label_4082e4:
    if (ctx->pc == 0x4082E4u) {
        ctx->pc = 0x4082E4u;
            // 0x4082e4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4082E8u;
        goto label_4082e8;
    }
    ctx->pc = 0x4082E0u;
    SET_GPR_U32(ctx, 31, 0x4082E8u);
    ctx->pc = 0x4082E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4082E0u;
            // 0x4082e4: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082E8u; }
        if (ctx->pc != 0x4082E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082E8u; }
        if (ctx->pc != 0x4082E8u) { return; }
    }
    ctx->pc = 0x4082E8u;
label_4082e8:
    // 0x4082e8: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x4082e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_4082ec:
    // 0x4082ec: 0xc04ce80  jal         func_133A00
label_4082f0:
    if (ctx->pc == 0x4082F0u) {
        ctx->pc = 0x4082F0u;
            // 0x4082f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4082F4u;
        goto label_4082f4;
    }
    ctx->pc = 0x4082ECu;
    SET_GPR_U32(ctx, 31, 0x4082F4u);
    ctx->pc = 0x4082F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4082ECu;
            // 0x4082f0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082F4u; }
        if (ctx->pc != 0x4082F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4082F4u; }
        if (ctx->pc != 0x4082F4u) { return; }
    }
    ctx->pc = 0x4082F4u;
label_4082f4:
    // 0x4082f4: 0x26040110  addiu       $a0, $s0, 0x110
    ctx->pc = 0x4082f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
label_4082f8:
    // 0x4082f8: 0xc04ccf4  jal         func_1333D0
label_4082fc:
    if (ctx->pc == 0x4082FCu) {
        ctx->pc = 0x4082FCu;
            // 0x4082fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->pc = 0x408300u;
        goto label_408300;
    }
    ctx->pc = 0x4082F8u;
    SET_GPR_U32(ctx, 31, 0x408300u);
    ctx->pc = 0x4082FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4082F8u;
            // 0x4082fc: 0x260500d0  addiu       $a1, $s0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408300u; }
        if (ctx->pc != 0x408300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408300u; }
        if (ctx->pc != 0x408300u) { return; }
    }
    ctx->pc = 0x408300u;
label_408300:
    // 0x408300: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x408300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_408304:
    // 0x408304: 0x3c044270  lui         $a0, 0x4270
    ctx->pc = 0x408304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17008 << 16));
label_408308:
    // 0x408308: 0xa20300cc  sb          $v1, 0xCC($s0)
    ctx->pc = 0x408308u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 3));
label_40830c:
    // 0x40830c: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x40830cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_408310:
    // 0x408310: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x408310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_408314:
    // 0x408314: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x408314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_408318:
    // 0x408318: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x408318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_40831c:
    // 0x40831c: 0x24845f60  addiu       $a0, $a0, 0x5F60
    ctx->pc = 0x40831cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24416));
label_408320:
    // 0x408320: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x408320u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_408324:
    // 0x408324: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x408324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_408328:
    // 0x408328: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x408328u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_40832c:
    // 0x40832c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x40832cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_408330:
    // 0x408330: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x408330u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_408334:
    // 0x408334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x408334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_408338:
    // 0x408338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x408338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_40833c:
    // 0x40833c: 0x3e00008  jr          $ra
label_408340:
    if (ctx->pc == 0x408340u) {
        ctx->pc = 0x408340u;
            // 0x408340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x408344u;
        goto label_408344;
    }
    ctx->pc = 0x40833Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x40833Cu;
            // 0x408340: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x408344u;
label_408344:
    // 0x408344: 0x0  nop
    ctx->pc = 0x408344u;
    // NOP
label_408348:
    // 0x408348: 0x0  nop
    ctx->pc = 0x408348u;
    // NOP
label_40834c:
    // 0x40834c: 0x0  nop
    ctx->pc = 0x40834cu;
    // NOP
label_408350:
    // 0x408350: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_408354:
    // 0x408354: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x408354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_408358:
    // 0x408358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x408358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_40835c:
    // 0x40835c: 0x9083016c  lbu         $v1, 0x16C($a0)
    ctx->pc = 0x40835cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 364)));
label_408360:
    // 0x408360: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_408364:
    if (ctx->pc == 0x408364u) {
        ctx->pc = 0x408364u;
            // 0x408364: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x408368u;
        goto label_408368;
    }
    ctx->pc = 0x408360u;
    {
        const bool branch_taken_0x408360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x408364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408360u;
            // 0x408364: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x408360) {
            ctx->pc = 0x40837Cu;
            goto label_40837c;
        }
    }
    ctx->pc = 0x408368u;
label_408368:
    // 0x408368: 0x8e040168  lw          $a0, 0x168($s0)
    ctx->pc = 0x408368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 360)));
label_40836c:
    // 0x40836c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x40836cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_408370:
    // 0x408370: 0xc122d2c  jal         func_48B4B0
label_408374:
    if (ctx->pc == 0x408374u) {
        ctx->pc = 0x408374u;
            // 0x408374: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x408378u;
        goto label_408378;
    }
    ctx->pc = 0x408370u;
    SET_GPR_U32(ctx, 31, 0x408378u);
    ctx->pc = 0x408374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x408370u;
            // 0x408374: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408378u; }
        if (ctx->pc != 0x408378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x408378u; }
        if (ctx->pc != 0x408378u) { return; }
    }
    ctx->pc = 0x408378u;
label_408378:
    // 0x408378: 0xa200016c  sb          $zero, 0x16C($s0)
    ctx->pc = 0x408378u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 364), (uint8_t)GPR_U32(ctx, 0));
label_40837c:
    // 0x40837c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x40837cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_408380:
    // 0x408380: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x408380u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_408384:
    // 0x408384: 0x3e00008  jr          $ra
label_408388:
    if (ctx->pc == 0x408388u) {
        ctx->pc = 0x408388u;
            // 0x408388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x40838Cu;
        goto label_40838c;
    }
    ctx->pc = 0x408384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x408388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x408384u;
            // 0x408388: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x40838Cu;
label_40838c:
    // 0x40838c: 0x0  nop
    ctx->pc = 0x40838cu;
    // NOP
label_408390:
    // 0x408390: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x408390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_408394:
    // 0x408394: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x408394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_408398:
    // 0x408398: 0x8c830164  lw          $v1, 0x164($a0)
    ctx->pc = 0x408398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 356)));
label_40839c:
    // 0x40839c: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
label_4083a0:
    if (ctx->pc == 0x4083A0u) {
        ctx->pc = 0x4083A0u;
            // 0x4083a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x4083A4u;
        goto label_4083a4;
    }
    ctx->pc = 0x40839Cu;
    {
        const bool branch_taken_0x40839c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x40839c) {
            ctx->pc = 0x4083A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x40839Cu;
            // 0x4083a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4083E4u;
            goto label_4083e4;
        }
    }
    ctx->pc = 0x4083A4u;
label_4083a4:
    // 0x4083a4: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x4083a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4083a8:
    // 0x4083a8: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x4083a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4083ac:
    // 0x4083ac: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x4083acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4083b0:
    // 0x4083b0: 0xc04cbd8  jal         func_132F60
label_4083b4:
    if (ctx->pc == 0x4083B4u) {
        ctx->pc = 0x4083B4u;
            // 0x4083b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4083B8u;
        goto label_4083b8;
    }
    ctx->pc = 0x4083B0u;
    SET_GPR_U32(ctx, 31, 0x4083B8u);
    ctx->pc = 0x4083B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4083B0u;
            // 0x4083b4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4083B8u; }
        if (ctx->pc != 0x4083B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4083B8u; }
        if (ctx->pc != 0x4083B8u) { return; }
    }
    ctx->pc = 0x4083B8u;
label_4083b8:
    // 0x4083b8: 0xc7ac0010  lwc1        $f12, 0x10($sp)
    ctx->pc = 0x4083b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4083bc:
    // 0x4083bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4083bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4083c0:
    // 0x4083c0: 0x44807800  mtc1        $zero, $f15
    ctx->pc = 0x4083c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4083c4:
    // 0x4083c4: 0x24050035  addiu       $a1, $zero, 0x35
    ctx->pc = 0x4083c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_4083c8:
    // 0x4083c8: 0xc7ad0014  lwc1        $f13, 0x14($sp)
    ctx->pc = 0x4083c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4083cc:
    // 0x4083cc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x4083ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4083d0:
    // 0x4083d0: 0xc7ae0018  lwc1        $f14, 0x18($sp)
    ctx->pc = 0x4083d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4083d4:
    // 0x4083d4: 0x46007c06  mov.s       $f16, $f15
    ctx->pc = 0x4083d4u;
    ctx->f[16] = FPU_MOV_S(ctx->f[15]);
label_4083d8:
    // 0x4083d8: 0xc0bafb8  jal         func_2EBEE0
label_4083dc:
    if (ctx->pc == 0x4083DCu) {
        ctx->pc = 0x4083DCu;
            // 0x4083dc: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->pc = 0x4083E0u;
        goto label_4083e0;
    }
    ctx->pc = 0x4083D8u;
    SET_GPR_U32(ctx, 31, 0x4083E0u);
    ctx->pc = 0x4083DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4083D8u;
            // 0x4083dc: 0x46007c46  mov.s       $f17, $f15 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBEE0u;
    if (runtime->hasFunction(0x2EBEE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4083E0u; }
        if (ctx->pc != 0x4083E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EBEE0_0x2ebee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4083E0u; }
        if (ctx->pc != 0x4083E0u) { return; }
    }
    ctx->pc = 0x4083E0u;
label_4083e0:
    // 0x4083e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4083e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4083e4:
    // 0x4083e4: 0x3e00008  jr          $ra
label_4083e8:
    if (ctx->pc == 0x4083E8u) {
        ctx->pc = 0x4083E8u;
            // 0x4083e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4083ECu;
        goto label_4083ec;
    }
    ctx->pc = 0x4083E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4083E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4083E4u;
            // 0x4083e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4083ECu;
label_4083ec:
    // 0x4083ec: 0x0  nop
    ctx->pc = 0x4083ecu;
    // NOP
}
