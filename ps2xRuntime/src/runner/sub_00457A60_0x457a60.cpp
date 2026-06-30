#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00457A60
// Address: 0x457a60 - 0x458b60
void sub_00457A60_0x457a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00457A60_0x457a60");
#endif

    switch (ctx->pc) {
        case 0x457a60u: goto label_457a60;
        case 0x457a64u: goto label_457a64;
        case 0x457a68u: goto label_457a68;
        case 0x457a6cu: goto label_457a6c;
        case 0x457a70u: goto label_457a70;
        case 0x457a74u: goto label_457a74;
        case 0x457a78u: goto label_457a78;
        case 0x457a7cu: goto label_457a7c;
        case 0x457a80u: goto label_457a80;
        case 0x457a84u: goto label_457a84;
        case 0x457a88u: goto label_457a88;
        case 0x457a8cu: goto label_457a8c;
        case 0x457a90u: goto label_457a90;
        case 0x457a94u: goto label_457a94;
        case 0x457a98u: goto label_457a98;
        case 0x457a9cu: goto label_457a9c;
        case 0x457aa0u: goto label_457aa0;
        case 0x457aa4u: goto label_457aa4;
        case 0x457aa8u: goto label_457aa8;
        case 0x457aacu: goto label_457aac;
        case 0x457ab0u: goto label_457ab0;
        case 0x457ab4u: goto label_457ab4;
        case 0x457ab8u: goto label_457ab8;
        case 0x457abcu: goto label_457abc;
        case 0x457ac0u: goto label_457ac0;
        case 0x457ac4u: goto label_457ac4;
        case 0x457ac8u: goto label_457ac8;
        case 0x457accu: goto label_457acc;
        case 0x457ad0u: goto label_457ad0;
        case 0x457ad4u: goto label_457ad4;
        case 0x457ad8u: goto label_457ad8;
        case 0x457adcu: goto label_457adc;
        case 0x457ae0u: goto label_457ae0;
        case 0x457ae4u: goto label_457ae4;
        case 0x457ae8u: goto label_457ae8;
        case 0x457aecu: goto label_457aec;
        case 0x457af0u: goto label_457af0;
        case 0x457af4u: goto label_457af4;
        case 0x457af8u: goto label_457af8;
        case 0x457afcu: goto label_457afc;
        case 0x457b00u: goto label_457b00;
        case 0x457b04u: goto label_457b04;
        case 0x457b08u: goto label_457b08;
        case 0x457b0cu: goto label_457b0c;
        case 0x457b10u: goto label_457b10;
        case 0x457b14u: goto label_457b14;
        case 0x457b18u: goto label_457b18;
        case 0x457b1cu: goto label_457b1c;
        case 0x457b20u: goto label_457b20;
        case 0x457b24u: goto label_457b24;
        case 0x457b28u: goto label_457b28;
        case 0x457b2cu: goto label_457b2c;
        case 0x457b30u: goto label_457b30;
        case 0x457b34u: goto label_457b34;
        case 0x457b38u: goto label_457b38;
        case 0x457b3cu: goto label_457b3c;
        case 0x457b40u: goto label_457b40;
        case 0x457b44u: goto label_457b44;
        case 0x457b48u: goto label_457b48;
        case 0x457b4cu: goto label_457b4c;
        case 0x457b50u: goto label_457b50;
        case 0x457b54u: goto label_457b54;
        case 0x457b58u: goto label_457b58;
        case 0x457b5cu: goto label_457b5c;
        case 0x457b60u: goto label_457b60;
        case 0x457b64u: goto label_457b64;
        case 0x457b68u: goto label_457b68;
        case 0x457b6cu: goto label_457b6c;
        case 0x457b70u: goto label_457b70;
        case 0x457b74u: goto label_457b74;
        case 0x457b78u: goto label_457b78;
        case 0x457b7cu: goto label_457b7c;
        case 0x457b80u: goto label_457b80;
        case 0x457b84u: goto label_457b84;
        case 0x457b88u: goto label_457b88;
        case 0x457b8cu: goto label_457b8c;
        case 0x457b90u: goto label_457b90;
        case 0x457b94u: goto label_457b94;
        case 0x457b98u: goto label_457b98;
        case 0x457b9cu: goto label_457b9c;
        case 0x457ba0u: goto label_457ba0;
        case 0x457ba4u: goto label_457ba4;
        case 0x457ba8u: goto label_457ba8;
        case 0x457bacu: goto label_457bac;
        case 0x457bb0u: goto label_457bb0;
        case 0x457bb4u: goto label_457bb4;
        case 0x457bb8u: goto label_457bb8;
        case 0x457bbcu: goto label_457bbc;
        case 0x457bc0u: goto label_457bc0;
        case 0x457bc4u: goto label_457bc4;
        case 0x457bc8u: goto label_457bc8;
        case 0x457bccu: goto label_457bcc;
        case 0x457bd0u: goto label_457bd0;
        case 0x457bd4u: goto label_457bd4;
        case 0x457bd8u: goto label_457bd8;
        case 0x457bdcu: goto label_457bdc;
        case 0x457be0u: goto label_457be0;
        case 0x457be4u: goto label_457be4;
        case 0x457be8u: goto label_457be8;
        case 0x457becu: goto label_457bec;
        case 0x457bf0u: goto label_457bf0;
        case 0x457bf4u: goto label_457bf4;
        case 0x457bf8u: goto label_457bf8;
        case 0x457bfcu: goto label_457bfc;
        case 0x457c00u: goto label_457c00;
        case 0x457c04u: goto label_457c04;
        case 0x457c08u: goto label_457c08;
        case 0x457c0cu: goto label_457c0c;
        case 0x457c10u: goto label_457c10;
        case 0x457c14u: goto label_457c14;
        case 0x457c18u: goto label_457c18;
        case 0x457c1cu: goto label_457c1c;
        case 0x457c20u: goto label_457c20;
        case 0x457c24u: goto label_457c24;
        case 0x457c28u: goto label_457c28;
        case 0x457c2cu: goto label_457c2c;
        case 0x457c30u: goto label_457c30;
        case 0x457c34u: goto label_457c34;
        case 0x457c38u: goto label_457c38;
        case 0x457c3cu: goto label_457c3c;
        case 0x457c40u: goto label_457c40;
        case 0x457c44u: goto label_457c44;
        case 0x457c48u: goto label_457c48;
        case 0x457c4cu: goto label_457c4c;
        case 0x457c50u: goto label_457c50;
        case 0x457c54u: goto label_457c54;
        case 0x457c58u: goto label_457c58;
        case 0x457c5cu: goto label_457c5c;
        case 0x457c60u: goto label_457c60;
        case 0x457c64u: goto label_457c64;
        case 0x457c68u: goto label_457c68;
        case 0x457c6cu: goto label_457c6c;
        case 0x457c70u: goto label_457c70;
        case 0x457c74u: goto label_457c74;
        case 0x457c78u: goto label_457c78;
        case 0x457c7cu: goto label_457c7c;
        case 0x457c80u: goto label_457c80;
        case 0x457c84u: goto label_457c84;
        case 0x457c88u: goto label_457c88;
        case 0x457c8cu: goto label_457c8c;
        case 0x457c90u: goto label_457c90;
        case 0x457c94u: goto label_457c94;
        case 0x457c98u: goto label_457c98;
        case 0x457c9cu: goto label_457c9c;
        case 0x457ca0u: goto label_457ca0;
        case 0x457ca4u: goto label_457ca4;
        case 0x457ca8u: goto label_457ca8;
        case 0x457cacu: goto label_457cac;
        case 0x457cb0u: goto label_457cb0;
        case 0x457cb4u: goto label_457cb4;
        case 0x457cb8u: goto label_457cb8;
        case 0x457cbcu: goto label_457cbc;
        case 0x457cc0u: goto label_457cc0;
        case 0x457cc4u: goto label_457cc4;
        case 0x457cc8u: goto label_457cc8;
        case 0x457cccu: goto label_457ccc;
        case 0x457cd0u: goto label_457cd0;
        case 0x457cd4u: goto label_457cd4;
        case 0x457cd8u: goto label_457cd8;
        case 0x457cdcu: goto label_457cdc;
        case 0x457ce0u: goto label_457ce0;
        case 0x457ce4u: goto label_457ce4;
        case 0x457ce8u: goto label_457ce8;
        case 0x457cecu: goto label_457cec;
        case 0x457cf0u: goto label_457cf0;
        case 0x457cf4u: goto label_457cf4;
        case 0x457cf8u: goto label_457cf8;
        case 0x457cfcu: goto label_457cfc;
        case 0x457d00u: goto label_457d00;
        case 0x457d04u: goto label_457d04;
        case 0x457d08u: goto label_457d08;
        case 0x457d0cu: goto label_457d0c;
        case 0x457d10u: goto label_457d10;
        case 0x457d14u: goto label_457d14;
        case 0x457d18u: goto label_457d18;
        case 0x457d1cu: goto label_457d1c;
        case 0x457d20u: goto label_457d20;
        case 0x457d24u: goto label_457d24;
        case 0x457d28u: goto label_457d28;
        case 0x457d2cu: goto label_457d2c;
        case 0x457d30u: goto label_457d30;
        case 0x457d34u: goto label_457d34;
        case 0x457d38u: goto label_457d38;
        case 0x457d3cu: goto label_457d3c;
        case 0x457d40u: goto label_457d40;
        case 0x457d44u: goto label_457d44;
        case 0x457d48u: goto label_457d48;
        case 0x457d4cu: goto label_457d4c;
        case 0x457d50u: goto label_457d50;
        case 0x457d54u: goto label_457d54;
        case 0x457d58u: goto label_457d58;
        case 0x457d5cu: goto label_457d5c;
        case 0x457d60u: goto label_457d60;
        case 0x457d64u: goto label_457d64;
        case 0x457d68u: goto label_457d68;
        case 0x457d6cu: goto label_457d6c;
        case 0x457d70u: goto label_457d70;
        case 0x457d74u: goto label_457d74;
        case 0x457d78u: goto label_457d78;
        case 0x457d7cu: goto label_457d7c;
        case 0x457d80u: goto label_457d80;
        case 0x457d84u: goto label_457d84;
        case 0x457d88u: goto label_457d88;
        case 0x457d8cu: goto label_457d8c;
        case 0x457d90u: goto label_457d90;
        case 0x457d94u: goto label_457d94;
        case 0x457d98u: goto label_457d98;
        case 0x457d9cu: goto label_457d9c;
        case 0x457da0u: goto label_457da0;
        case 0x457da4u: goto label_457da4;
        case 0x457da8u: goto label_457da8;
        case 0x457dacu: goto label_457dac;
        case 0x457db0u: goto label_457db0;
        case 0x457db4u: goto label_457db4;
        case 0x457db8u: goto label_457db8;
        case 0x457dbcu: goto label_457dbc;
        case 0x457dc0u: goto label_457dc0;
        case 0x457dc4u: goto label_457dc4;
        case 0x457dc8u: goto label_457dc8;
        case 0x457dccu: goto label_457dcc;
        case 0x457dd0u: goto label_457dd0;
        case 0x457dd4u: goto label_457dd4;
        case 0x457dd8u: goto label_457dd8;
        case 0x457ddcu: goto label_457ddc;
        case 0x457de0u: goto label_457de0;
        case 0x457de4u: goto label_457de4;
        case 0x457de8u: goto label_457de8;
        case 0x457decu: goto label_457dec;
        case 0x457df0u: goto label_457df0;
        case 0x457df4u: goto label_457df4;
        case 0x457df8u: goto label_457df8;
        case 0x457dfcu: goto label_457dfc;
        case 0x457e00u: goto label_457e00;
        case 0x457e04u: goto label_457e04;
        case 0x457e08u: goto label_457e08;
        case 0x457e0cu: goto label_457e0c;
        case 0x457e10u: goto label_457e10;
        case 0x457e14u: goto label_457e14;
        case 0x457e18u: goto label_457e18;
        case 0x457e1cu: goto label_457e1c;
        case 0x457e20u: goto label_457e20;
        case 0x457e24u: goto label_457e24;
        case 0x457e28u: goto label_457e28;
        case 0x457e2cu: goto label_457e2c;
        case 0x457e30u: goto label_457e30;
        case 0x457e34u: goto label_457e34;
        case 0x457e38u: goto label_457e38;
        case 0x457e3cu: goto label_457e3c;
        case 0x457e40u: goto label_457e40;
        case 0x457e44u: goto label_457e44;
        case 0x457e48u: goto label_457e48;
        case 0x457e4cu: goto label_457e4c;
        case 0x457e50u: goto label_457e50;
        case 0x457e54u: goto label_457e54;
        case 0x457e58u: goto label_457e58;
        case 0x457e5cu: goto label_457e5c;
        case 0x457e60u: goto label_457e60;
        case 0x457e64u: goto label_457e64;
        case 0x457e68u: goto label_457e68;
        case 0x457e6cu: goto label_457e6c;
        case 0x457e70u: goto label_457e70;
        case 0x457e74u: goto label_457e74;
        case 0x457e78u: goto label_457e78;
        case 0x457e7cu: goto label_457e7c;
        case 0x457e80u: goto label_457e80;
        case 0x457e84u: goto label_457e84;
        case 0x457e88u: goto label_457e88;
        case 0x457e8cu: goto label_457e8c;
        case 0x457e90u: goto label_457e90;
        case 0x457e94u: goto label_457e94;
        case 0x457e98u: goto label_457e98;
        case 0x457e9cu: goto label_457e9c;
        case 0x457ea0u: goto label_457ea0;
        case 0x457ea4u: goto label_457ea4;
        case 0x457ea8u: goto label_457ea8;
        case 0x457eacu: goto label_457eac;
        case 0x457eb0u: goto label_457eb0;
        case 0x457eb4u: goto label_457eb4;
        case 0x457eb8u: goto label_457eb8;
        case 0x457ebcu: goto label_457ebc;
        case 0x457ec0u: goto label_457ec0;
        case 0x457ec4u: goto label_457ec4;
        case 0x457ec8u: goto label_457ec8;
        case 0x457eccu: goto label_457ecc;
        case 0x457ed0u: goto label_457ed0;
        case 0x457ed4u: goto label_457ed4;
        case 0x457ed8u: goto label_457ed8;
        case 0x457edcu: goto label_457edc;
        case 0x457ee0u: goto label_457ee0;
        case 0x457ee4u: goto label_457ee4;
        case 0x457ee8u: goto label_457ee8;
        case 0x457eecu: goto label_457eec;
        case 0x457ef0u: goto label_457ef0;
        case 0x457ef4u: goto label_457ef4;
        case 0x457ef8u: goto label_457ef8;
        case 0x457efcu: goto label_457efc;
        case 0x457f00u: goto label_457f00;
        case 0x457f04u: goto label_457f04;
        case 0x457f08u: goto label_457f08;
        case 0x457f0cu: goto label_457f0c;
        case 0x457f10u: goto label_457f10;
        case 0x457f14u: goto label_457f14;
        case 0x457f18u: goto label_457f18;
        case 0x457f1cu: goto label_457f1c;
        case 0x457f20u: goto label_457f20;
        case 0x457f24u: goto label_457f24;
        case 0x457f28u: goto label_457f28;
        case 0x457f2cu: goto label_457f2c;
        case 0x457f30u: goto label_457f30;
        case 0x457f34u: goto label_457f34;
        case 0x457f38u: goto label_457f38;
        case 0x457f3cu: goto label_457f3c;
        case 0x457f40u: goto label_457f40;
        case 0x457f44u: goto label_457f44;
        case 0x457f48u: goto label_457f48;
        case 0x457f4cu: goto label_457f4c;
        case 0x457f50u: goto label_457f50;
        case 0x457f54u: goto label_457f54;
        case 0x457f58u: goto label_457f58;
        case 0x457f5cu: goto label_457f5c;
        case 0x457f60u: goto label_457f60;
        case 0x457f64u: goto label_457f64;
        case 0x457f68u: goto label_457f68;
        case 0x457f6cu: goto label_457f6c;
        case 0x457f70u: goto label_457f70;
        case 0x457f74u: goto label_457f74;
        case 0x457f78u: goto label_457f78;
        case 0x457f7cu: goto label_457f7c;
        case 0x457f80u: goto label_457f80;
        case 0x457f84u: goto label_457f84;
        case 0x457f88u: goto label_457f88;
        case 0x457f8cu: goto label_457f8c;
        case 0x457f90u: goto label_457f90;
        case 0x457f94u: goto label_457f94;
        case 0x457f98u: goto label_457f98;
        case 0x457f9cu: goto label_457f9c;
        case 0x457fa0u: goto label_457fa0;
        case 0x457fa4u: goto label_457fa4;
        case 0x457fa8u: goto label_457fa8;
        case 0x457facu: goto label_457fac;
        case 0x457fb0u: goto label_457fb0;
        case 0x457fb4u: goto label_457fb4;
        case 0x457fb8u: goto label_457fb8;
        case 0x457fbcu: goto label_457fbc;
        case 0x457fc0u: goto label_457fc0;
        case 0x457fc4u: goto label_457fc4;
        case 0x457fc8u: goto label_457fc8;
        case 0x457fccu: goto label_457fcc;
        case 0x457fd0u: goto label_457fd0;
        case 0x457fd4u: goto label_457fd4;
        case 0x457fd8u: goto label_457fd8;
        case 0x457fdcu: goto label_457fdc;
        case 0x457fe0u: goto label_457fe0;
        case 0x457fe4u: goto label_457fe4;
        case 0x457fe8u: goto label_457fe8;
        case 0x457fecu: goto label_457fec;
        case 0x457ff0u: goto label_457ff0;
        case 0x457ff4u: goto label_457ff4;
        case 0x457ff8u: goto label_457ff8;
        case 0x457ffcu: goto label_457ffc;
        case 0x458000u: goto label_458000;
        case 0x458004u: goto label_458004;
        case 0x458008u: goto label_458008;
        case 0x45800cu: goto label_45800c;
        case 0x458010u: goto label_458010;
        case 0x458014u: goto label_458014;
        case 0x458018u: goto label_458018;
        case 0x45801cu: goto label_45801c;
        case 0x458020u: goto label_458020;
        case 0x458024u: goto label_458024;
        case 0x458028u: goto label_458028;
        case 0x45802cu: goto label_45802c;
        case 0x458030u: goto label_458030;
        case 0x458034u: goto label_458034;
        case 0x458038u: goto label_458038;
        case 0x45803cu: goto label_45803c;
        case 0x458040u: goto label_458040;
        case 0x458044u: goto label_458044;
        case 0x458048u: goto label_458048;
        case 0x45804cu: goto label_45804c;
        case 0x458050u: goto label_458050;
        case 0x458054u: goto label_458054;
        case 0x458058u: goto label_458058;
        case 0x45805cu: goto label_45805c;
        case 0x458060u: goto label_458060;
        case 0x458064u: goto label_458064;
        case 0x458068u: goto label_458068;
        case 0x45806cu: goto label_45806c;
        case 0x458070u: goto label_458070;
        case 0x458074u: goto label_458074;
        case 0x458078u: goto label_458078;
        case 0x45807cu: goto label_45807c;
        case 0x458080u: goto label_458080;
        case 0x458084u: goto label_458084;
        case 0x458088u: goto label_458088;
        case 0x45808cu: goto label_45808c;
        case 0x458090u: goto label_458090;
        case 0x458094u: goto label_458094;
        case 0x458098u: goto label_458098;
        case 0x45809cu: goto label_45809c;
        case 0x4580a0u: goto label_4580a0;
        case 0x4580a4u: goto label_4580a4;
        case 0x4580a8u: goto label_4580a8;
        case 0x4580acu: goto label_4580ac;
        case 0x4580b0u: goto label_4580b0;
        case 0x4580b4u: goto label_4580b4;
        case 0x4580b8u: goto label_4580b8;
        case 0x4580bcu: goto label_4580bc;
        case 0x4580c0u: goto label_4580c0;
        case 0x4580c4u: goto label_4580c4;
        case 0x4580c8u: goto label_4580c8;
        case 0x4580ccu: goto label_4580cc;
        case 0x4580d0u: goto label_4580d0;
        case 0x4580d4u: goto label_4580d4;
        case 0x4580d8u: goto label_4580d8;
        case 0x4580dcu: goto label_4580dc;
        case 0x4580e0u: goto label_4580e0;
        case 0x4580e4u: goto label_4580e4;
        case 0x4580e8u: goto label_4580e8;
        case 0x4580ecu: goto label_4580ec;
        case 0x4580f0u: goto label_4580f0;
        case 0x4580f4u: goto label_4580f4;
        case 0x4580f8u: goto label_4580f8;
        case 0x4580fcu: goto label_4580fc;
        case 0x458100u: goto label_458100;
        case 0x458104u: goto label_458104;
        case 0x458108u: goto label_458108;
        case 0x45810cu: goto label_45810c;
        case 0x458110u: goto label_458110;
        case 0x458114u: goto label_458114;
        case 0x458118u: goto label_458118;
        case 0x45811cu: goto label_45811c;
        case 0x458120u: goto label_458120;
        case 0x458124u: goto label_458124;
        case 0x458128u: goto label_458128;
        case 0x45812cu: goto label_45812c;
        case 0x458130u: goto label_458130;
        case 0x458134u: goto label_458134;
        case 0x458138u: goto label_458138;
        case 0x45813cu: goto label_45813c;
        case 0x458140u: goto label_458140;
        case 0x458144u: goto label_458144;
        case 0x458148u: goto label_458148;
        case 0x45814cu: goto label_45814c;
        case 0x458150u: goto label_458150;
        case 0x458154u: goto label_458154;
        case 0x458158u: goto label_458158;
        case 0x45815cu: goto label_45815c;
        case 0x458160u: goto label_458160;
        case 0x458164u: goto label_458164;
        case 0x458168u: goto label_458168;
        case 0x45816cu: goto label_45816c;
        case 0x458170u: goto label_458170;
        case 0x458174u: goto label_458174;
        case 0x458178u: goto label_458178;
        case 0x45817cu: goto label_45817c;
        case 0x458180u: goto label_458180;
        case 0x458184u: goto label_458184;
        case 0x458188u: goto label_458188;
        case 0x45818cu: goto label_45818c;
        case 0x458190u: goto label_458190;
        case 0x458194u: goto label_458194;
        case 0x458198u: goto label_458198;
        case 0x45819cu: goto label_45819c;
        case 0x4581a0u: goto label_4581a0;
        case 0x4581a4u: goto label_4581a4;
        case 0x4581a8u: goto label_4581a8;
        case 0x4581acu: goto label_4581ac;
        case 0x4581b0u: goto label_4581b0;
        case 0x4581b4u: goto label_4581b4;
        case 0x4581b8u: goto label_4581b8;
        case 0x4581bcu: goto label_4581bc;
        case 0x4581c0u: goto label_4581c0;
        case 0x4581c4u: goto label_4581c4;
        case 0x4581c8u: goto label_4581c8;
        case 0x4581ccu: goto label_4581cc;
        case 0x4581d0u: goto label_4581d0;
        case 0x4581d4u: goto label_4581d4;
        case 0x4581d8u: goto label_4581d8;
        case 0x4581dcu: goto label_4581dc;
        case 0x4581e0u: goto label_4581e0;
        case 0x4581e4u: goto label_4581e4;
        case 0x4581e8u: goto label_4581e8;
        case 0x4581ecu: goto label_4581ec;
        case 0x4581f0u: goto label_4581f0;
        case 0x4581f4u: goto label_4581f4;
        case 0x4581f8u: goto label_4581f8;
        case 0x4581fcu: goto label_4581fc;
        case 0x458200u: goto label_458200;
        case 0x458204u: goto label_458204;
        case 0x458208u: goto label_458208;
        case 0x45820cu: goto label_45820c;
        case 0x458210u: goto label_458210;
        case 0x458214u: goto label_458214;
        case 0x458218u: goto label_458218;
        case 0x45821cu: goto label_45821c;
        case 0x458220u: goto label_458220;
        case 0x458224u: goto label_458224;
        case 0x458228u: goto label_458228;
        case 0x45822cu: goto label_45822c;
        case 0x458230u: goto label_458230;
        case 0x458234u: goto label_458234;
        case 0x458238u: goto label_458238;
        case 0x45823cu: goto label_45823c;
        case 0x458240u: goto label_458240;
        case 0x458244u: goto label_458244;
        case 0x458248u: goto label_458248;
        case 0x45824cu: goto label_45824c;
        case 0x458250u: goto label_458250;
        case 0x458254u: goto label_458254;
        case 0x458258u: goto label_458258;
        case 0x45825cu: goto label_45825c;
        case 0x458260u: goto label_458260;
        case 0x458264u: goto label_458264;
        case 0x458268u: goto label_458268;
        case 0x45826cu: goto label_45826c;
        case 0x458270u: goto label_458270;
        case 0x458274u: goto label_458274;
        case 0x458278u: goto label_458278;
        case 0x45827cu: goto label_45827c;
        case 0x458280u: goto label_458280;
        case 0x458284u: goto label_458284;
        case 0x458288u: goto label_458288;
        case 0x45828cu: goto label_45828c;
        case 0x458290u: goto label_458290;
        case 0x458294u: goto label_458294;
        case 0x458298u: goto label_458298;
        case 0x45829cu: goto label_45829c;
        case 0x4582a0u: goto label_4582a0;
        case 0x4582a4u: goto label_4582a4;
        case 0x4582a8u: goto label_4582a8;
        case 0x4582acu: goto label_4582ac;
        case 0x4582b0u: goto label_4582b0;
        case 0x4582b4u: goto label_4582b4;
        case 0x4582b8u: goto label_4582b8;
        case 0x4582bcu: goto label_4582bc;
        case 0x4582c0u: goto label_4582c0;
        case 0x4582c4u: goto label_4582c4;
        case 0x4582c8u: goto label_4582c8;
        case 0x4582ccu: goto label_4582cc;
        case 0x4582d0u: goto label_4582d0;
        case 0x4582d4u: goto label_4582d4;
        case 0x4582d8u: goto label_4582d8;
        case 0x4582dcu: goto label_4582dc;
        case 0x4582e0u: goto label_4582e0;
        case 0x4582e4u: goto label_4582e4;
        case 0x4582e8u: goto label_4582e8;
        case 0x4582ecu: goto label_4582ec;
        case 0x4582f0u: goto label_4582f0;
        case 0x4582f4u: goto label_4582f4;
        case 0x4582f8u: goto label_4582f8;
        case 0x4582fcu: goto label_4582fc;
        case 0x458300u: goto label_458300;
        case 0x458304u: goto label_458304;
        case 0x458308u: goto label_458308;
        case 0x45830cu: goto label_45830c;
        case 0x458310u: goto label_458310;
        case 0x458314u: goto label_458314;
        case 0x458318u: goto label_458318;
        case 0x45831cu: goto label_45831c;
        case 0x458320u: goto label_458320;
        case 0x458324u: goto label_458324;
        case 0x458328u: goto label_458328;
        case 0x45832cu: goto label_45832c;
        case 0x458330u: goto label_458330;
        case 0x458334u: goto label_458334;
        case 0x458338u: goto label_458338;
        case 0x45833cu: goto label_45833c;
        case 0x458340u: goto label_458340;
        case 0x458344u: goto label_458344;
        case 0x458348u: goto label_458348;
        case 0x45834cu: goto label_45834c;
        case 0x458350u: goto label_458350;
        case 0x458354u: goto label_458354;
        case 0x458358u: goto label_458358;
        case 0x45835cu: goto label_45835c;
        case 0x458360u: goto label_458360;
        case 0x458364u: goto label_458364;
        case 0x458368u: goto label_458368;
        case 0x45836cu: goto label_45836c;
        case 0x458370u: goto label_458370;
        case 0x458374u: goto label_458374;
        case 0x458378u: goto label_458378;
        case 0x45837cu: goto label_45837c;
        case 0x458380u: goto label_458380;
        case 0x458384u: goto label_458384;
        case 0x458388u: goto label_458388;
        case 0x45838cu: goto label_45838c;
        case 0x458390u: goto label_458390;
        case 0x458394u: goto label_458394;
        case 0x458398u: goto label_458398;
        case 0x45839cu: goto label_45839c;
        case 0x4583a0u: goto label_4583a0;
        case 0x4583a4u: goto label_4583a4;
        case 0x4583a8u: goto label_4583a8;
        case 0x4583acu: goto label_4583ac;
        case 0x4583b0u: goto label_4583b0;
        case 0x4583b4u: goto label_4583b4;
        case 0x4583b8u: goto label_4583b8;
        case 0x4583bcu: goto label_4583bc;
        case 0x4583c0u: goto label_4583c0;
        case 0x4583c4u: goto label_4583c4;
        case 0x4583c8u: goto label_4583c8;
        case 0x4583ccu: goto label_4583cc;
        case 0x4583d0u: goto label_4583d0;
        case 0x4583d4u: goto label_4583d4;
        case 0x4583d8u: goto label_4583d8;
        case 0x4583dcu: goto label_4583dc;
        case 0x4583e0u: goto label_4583e0;
        case 0x4583e4u: goto label_4583e4;
        case 0x4583e8u: goto label_4583e8;
        case 0x4583ecu: goto label_4583ec;
        case 0x4583f0u: goto label_4583f0;
        case 0x4583f4u: goto label_4583f4;
        case 0x4583f8u: goto label_4583f8;
        case 0x4583fcu: goto label_4583fc;
        case 0x458400u: goto label_458400;
        case 0x458404u: goto label_458404;
        case 0x458408u: goto label_458408;
        case 0x45840cu: goto label_45840c;
        case 0x458410u: goto label_458410;
        case 0x458414u: goto label_458414;
        case 0x458418u: goto label_458418;
        case 0x45841cu: goto label_45841c;
        case 0x458420u: goto label_458420;
        case 0x458424u: goto label_458424;
        case 0x458428u: goto label_458428;
        case 0x45842cu: goto label_45842c;
        case 0x458430u: goto label_458430;
        case 0x458434u: goto label_458434;
        case 0x458438u: goto label_458438;
        case 0x45843cu: goto label_45843c;
        case 0x458440u: goto label_458440;
        case 0x458444u: goto label_458444;
        case 0x458448u: goto label_458448;
        case 0x45844cu: goto label_45844c;
        case 0x458450u: goto label_458450;
        case 0x458454u: goto label_458454;
        case 0x458458u: goto label_458458;
        case 0x45845cu: goto label_45845c;
        case 0x458460u: goto label_458460;
        case 0x458464u: goto label_458464;
        case 0x458468u: goto label_458468;
        case 0x45846cu: goto label_45846c;
        case 0x458470u: goto label_458470;
        case 0x458474u: goto label_458474;
        case 0x458478u: goto label_458478;
        case 0x45847cu: goto label_45847c;
        case 0x458480u: goto label_458480;
        case 0x458484u: goto label_458484;
        case 0x458488u: goto label_458488;
        case 0x45848cu: goto label_45848c;
        case 0x458490u: goto label_458490;
        case 0x458494u: goto label_458494;
        case 0x458498u: goto label_458498;
        case 0x45849cu: goto label_45849c;
        case 0x4584a0u: goto label_4584a0;
        case 0x4584a4u: goto label_4584a4;
        case 0x4584a8u: goto label_4584a8;
        case 0x4584acu: goto label_4584ac;
        case 0x4584b0u: goto label_4584b0;
        case 0x4584b4u: goto label_4584b4;
        case 0x4584b8u: goto label_4584b8;
        case 0x4584bcu: goto label_4584bc;
        case 0x4584c0u: goto label_4584c0;
        case 0x4584c4u: goto label_4584c4;
        case 0x4584c8u: goto label_4584c8;
        case 0x4584ccu: goto label_4584cc;
        case 0x4584d0u: goto label_4584d0;
        case 0x4584d4u: goto label_4584d4;
        case 0x4584d8u: goto label_4584d8;
        case 0x4584dcu: goto label_4584dc;
        case 0x4584e0u: goto label_4584e0;
        case 0x4584e4u: goto label_4584e4;
        case 0x4584e8u: goto label_4584e8;
        case 0x4584ecu: goto label_4584ec;
        case 0x4584f0u: goto label_4584f0;
        case 0x4584f4u: goto label_4584f4;
        case 0x4584f8u: goto label_4584f8;
        case 0x4584fcu: goto label_4584fc;
        case 0x458500u: goto label_458500;
        case 0x458504u: goto label_458504;
        case 0x458508u: goto label_458508;
        case 0x45850cu: goto label_45850c;
        case 0x458510u: goto label_458510;
        case 0x458514u: goto label_458514;
        case 0x458518u: goto label_458518;
        case 0x45851cu: goto label_45851c;
        case 0x458520u: goto label_458520;
        case 0x458524u: goto label_458524;
        case 0x458528u: goto label_458528;
        case 0x45852cu: goto label_45852c;
        case 0x458530u: goto label_458530;
        case 0x458534u: goto label_458534;
        case 0x458538u: goto label_458538;
        case 0x45853cu: goto label_45853c;
        case 0x458540u: goto label_458540;
        case 0x458544u: goto label_458544;
        case 0x458548u: goto label_458548;
        case 0x45854cu: goto label_45854c;
        case 0x458550u: goto label_458550;
        case 0x458554u: goto label_458554;
        case 0x458558u: goto label_458558;
        case 0x45855cu: goto label_45855c;
        case 0x458560u: goto label_458560;
        case 0x458564u: goto label_458564;
        case 0x458568u: goto label_458568;
        case 0x45856cu: goto label_45856c;
        case 0x458570u: goto label_458570;
        case 0x458574u: goto label_458574;
        case 0x458578u: goto label_458578;
        case 0x45857cu: goto label_45857c;
        case 0x458580u: goto label_458580;
        case 0x458584u: goto label_458584;
        case 0x458588u: goto label_458588;
        case 0x45858cu: goto label_45858c;
        case 0x458590u: goto label_458590;
        case 0x458594u: goto label_458594;
        case 0x458598u: goto label_458598;
        case 0x45859cu: goto label_45859c;
        case 0x4585a0u: goto label_4585a0;
        case 0x4585a4u: goto label_4585a4;
        case 0x4585a8u: goto label_4585a8;
        case 0x4585acu: goto label_4585ac;
        case 0x4585b0u: goto label_4585b0;
        case 0x4585b4u: goto label_4585b4;
        case 0x4585b8u: goto label_4585b8;
        case 0x4585bcu: goto label_4585bc;
        case 0x4585c0u: goto label_4585c0;
        case 0x4585c4u: goto label_4585c4;
        case 0x4585c8u: goto label_4585c8;
        case 0x4585ccu: goto label_4585cc;
        case 0x4585d0u: goto label_4585d0;
        case 0x4585d4u: goto label_4585d4;
        case 0x4585d8u: goto label_4585d8;
        case 0x4585dcu: goto label_4585dc;
        case 0x4585e0u: goto label_4585e0;
        case 0x4585e4u: goto label_4585e4;
        case 0x4585e8u: goto label_4585e8;
        case 0x4585ecu: goto label_4585ec;
        case 0x4585f0u: goto label_4585f0;
        case 0x4585f4u: goto label_4585f4;
        case 0x4585f8u: goto label_4585f8;
        case 0x4585fcu: goto label_4585fc;
        case 0x458600u: goto label_458600;
        case 0x458604u: goto label_458604;
        case 0x458608u: goto label_458608;
        case 0x45860cu: goto label_45860c;
        case 0x458610u: goto label_458610;
        case 0x458614u: goto label_458614;
        case 0x458618u: goto label_458618;
        case 0x45861cu: goto label_45861c;
        case 0x458620u: goto label_458620;
        case 0x458624u: goto label_458624;
        case 0x458628u: goto label_458628;
        case 0x45862cu: goto label_45862c;
        case 0x458630u: goto label_458630;
        case 0x458634u: goto label_458634;
        case 0x458638u: goto label_458638;
        case 0x45863cu: goto label_45863c;
        case 0x458640u: goto label_458640;
        case 0x458644u: goto label_458644;
        case 0x458648u: goto label_458648;
        case 0x45864cu: goto label_45864c;
        case 0x458650u: goto label_458650;
        case 0x458654u: goto label_458654;
        case 0x458658u: goto label_458658;
        case 0x45865cu: goto label_45865c;
        case 0x458660u: goto label_458660;
        case 0x458664u: goto label_458664;
        case 0x458668u: goto label_458668;
        case 0x45866cu: goto label_45866c;
        case 0x458670u: goto label_458670;
        case 0x458674u: goto label_458674;
        case 0x458678u: goto label_458678;
        case 0x45867cu: goto label_45867c;
        case 0x458680u: goto label_458680;
        case 0x458684u: goto label_458684;
        case 0x458688u: goto label_458688;
        case 0x45868cu: goto label_45868c;
        case 0x458690u: goto label_458690;
        case 0x458694u: goto label_458694;
        case 0x458698u: goto label_458698;
        case 0x45869cu: goto label_45869c;
        case 0x4586a0u: goto label_4586a0;
        case 0x4586a4u: goto label_4586a4;
        case 0x4586a8u: goto label_4586a8;
        case 0x4586acu: goto label_4586ac;
        case 0x4586b0u: goto label_4586b0;
        case 0x4586b4u: goto label_4586b4;
        case 0x4586b8u: goto label_4586b8;
        case 0x4586bcu: goto label_4586bc;
        case 0x4586c0u: goto label_4586c0;
        case 0x4586c4u: goto label_4586c4;
        case 0x4586c8u: goto label_4586c8;
        case 0x4586ccu: goto label_4586cc;
        case 0x4586d0u: goto label_4586d0;
        case 0x4586d4u: goto label_4586d4;
        case 0x4586d8u: goto label_4586d8;
        case 0x4586dcu: goto label_4586dc;
        case 0x4586e0u: goto label_4586e0;
        case 0x4586e4u: goto label_4586e4;
        case 0x4586e8u: goto label_4586e8;
        case 0x4586ecu: goto label_4586ec;
        case 0x4586f0u: goto label_4586f0;
        case 0x4586f4u: goto label_4586f4;
        case 0x4586f8u: goto label_4586f8;
        case 0x4586fcu: goto label_4586fc;
        case 0x458700u: goto label_458700;
        case 0x458704u: goto label_458704;
        case 0x458708u: goto label_458708;
        case 0x45870cu: goto label_45870c;
        case 0x458710u: goto label_458710;
        case 0x458714u: goto label_458714;
        case 0x458718u: goto label_458718;
        case 0x45871cu: goto label_45871c;
        case 0x458720u: goto label_458720;
        case 0x458724u: goto label_458724;
        case 0x458728u: goto label_458728;
        case 0x45872cu: goto label_45872c;
        case 0x458730u: goto label_458730;
        case 0x458734u: goto label_458734;
        case 0x458738u: goto label_458738;
        case 0x45873cu: goto label_45873c;
        case 0x458740u: goto label_458740;
        case 0x458744u: goto label_458744;
        case 0x458748u: goto label_458748;
        case 0x45874cu: goto label_45874c;
        case 0x458750u: goto label_458750;
        case 0x458754u: goto label_458754;
        case 0x458758u: goto label_458758;
        case 0x45875cu: goto label_45875c;
        case 0x458760u: goto label_458760;
        case 0x458764u: goto label_458764;
        case 0x458768u: goto label_458768;
        case 0x45876cu: goto label_45876c;
        case 0x458770u: goto label_458770;
        case 0x458774u: goto label_458774;
        case 0x458778u: goto label_458778;
        case 0x45877cu: goto label_45877c;
        case 0x458780u: goto label_458780;
        case 0x458784u: goto label_458784;
        case 0x458788u: goto label_458788;
        case 0x45878cu: goto label_45878c;
        case 0x458790u: goto label_458790;
        case 0x458794u: goto label_458794;
        case 0x458798u: goto label_458798;
        case 0x45879cu: goto label_45879c;
        case 0x4587a0u: goto label_4587a0;
        case 0x4587a4u: goto label_4587a4;
        case 0x4587a8u: goto label_4587a8;
        case 0x4587acu: goto label_4587ac;
        case 0x4587b0u: goto label_4587b0;
        case 0x4587b4u: goto label_4587b4;
        case 0x4587b8u: goto label_4587b8;
        case 0x4587bcu: goto label_4587bc;
        case 0x4587c0u: goto label_4587c0;
        case 0x4587c4u: goto label_4587c4;
        case 0x4587c8u: goto label_4587c8;
        case 0x4587ccu: goto label_4587cc;
        case 0x4587d0u: goto label_4587d0;
        case 0x4587d4u: goto label_4587d4;
        case 0x4587d8u: goto label_4587d8;
        case 0x4587dcu: goto label_4587dc;
        case 0x4587e0u: goto label_4587e0;
        case 0x4587e4u: goto label_4587e4;
        case 0x4587e8u: goto label_4587e8;
        case 0x4587ecu: goto label_4587ec;
        case 0x4587f0u: goto label_4587f0;
        case 0x4587f4u: goto label_4587f4;
        case 0x4587f8u: goto label_4587f8;
        case 0x4587fcu: goto label_4587fc;
        case 0x458800u: goto label_458800;
        case 0x458804u: goto label_458804;
        case 0x458808u: goto label_458808;
        case 0x45880cu: goto label_45880c;
        case 0x458810u: goto label_458810;
        case 0x458814u: goto label_458814;
        case 0x458818u: goto label_458818;
        case 0x45881cu: goto label_45881c;
        case 0x458820u: goto label_458820;
        case 0x458824u: goto label_458824;
        case 0x458828u: goto label_458828;
        case 0x45882cu: goto label_45882c;
        case 0x458830u: goto label_458830;
        case 0x458834u: goto label_458834;
        case 0x458838u: goto label_458838;
        case 0x45883cu: goto label_45883c;
        case 0x458840u: goto label_458840;
        case 0x458844u: goto label_458844;
        case 0x458848u: goto label_458848;
        case 0x45884cu: goto label_45884c;
        case 0x458850u: goto label_458850;
        case 0x458854u: goto label_458854;
        case 0x458858u: goto label_458858;
        case 0x45885cu: goto label_45885c;
        case 0x458860u: goto label_458860;
        case 0x458864u: goto label_458864;
        case 0x458868u: goto label_458868;
        case 0x45886cu: goto label_45886c;
        case 0x458870u: goto label_458870;
        case 0x458874u: goto label_458874;
        case 0x458878u: goto label_458878;
        case 0x45887cu: goto label_45887c;
        case 0x458880u: goto label_458880;
        case 0x458884u: goto label_458884;
        case 0x458888u: goto label_458888;
        case 0x45888cu: goto label_45888c;
        case 0x458890u: goto label_458890;
        case 0x458894u: goto label_458894;
        case 0x458898u: goto label_458898;
        case 0x45889cu: goto label_45889c;
        case 0x4588a0u: goto label_4588a0;
        case 0x4588a4u: goto label_4588a4;
        case 0x4588a8u: goto label_4588a8;
        case 0x4588acu: goto label_4588ac;
        case 0x4588b0u: goto label_4588b0;
        case 0x4588b4u: goto label_4588b4;
        case 0x4588b8u: goto label_4588b8;
        case 0x4588bcu: goto label_4588bc;
        case 0x4588c0u: goto label_4588c0;
        case 0x4588c4u: goto label_4588c4;
        case 0x4588c8u: goto label_4588c8;
        case 0x4588ccu: goto label_4588cc;
        case 0x4588d0u: goto label_4588d0;
        case 0x4588d4u: goto label_4588d4;
        case 0x4588d8u: goto label_4588d8;
        case 0x4588dcu: goto label_4588dc;
        case 0x4588e0u: goto label_4588e0;
        case 0x4588e4u: goto label_4588e4;
        case 0x4588e8u: goto label_4588e8;
        case 0x4588ecu: goto label_4588ec;
        case 0x4588f0u: goto label_4588f0;
        case 0x4588f4u: goto label_4588f4;
        case 0x4588f8u: goto label_4588f8;
        case 0x4588fcu: goto label_4588fc;
        case 0x458900u: goto label_458900;
        case 0x458904u: goto label_458904;
        case 0x458908u: goto label_458908;
        case 0x45890cu: goto label_45890c;
        case 0x458910u: goto label_458910;
        case 0x458914u: goto label_458914;
        case 0x458918u: goto label_458918;
        case 0x45891cu: goto label_45891c;
        case 0x458920u: goto label_458920;
        case 0x458924u: goto label_458924;
        case 0x458928u: goto label_458928;
        case 0x45892cu: goto label_45892c;
        case 0x458930u: goto label_458930;
        case 0x458934u: goto label_458934;
        case 0x458938u: goto label_458938;
        case 0x45893cu: goto label_45893c;
        case 0x458940u: goto label_458940;
        case 0x458944u: goto label_458944;
        case 0x458948u: goto label_458948;
        case 0x45894cu: goto label_45894c;
        case 0x458950u: goto label_458950;
        case 0x458954u: goto label_458954;
        case 0x458958u: goto label_458958;
        case 0x45895cu: goto label_45895c;
        case 0x458960u: goto label_458960;
        case 0x458964u: goto label_458964;
        case 0x458968u: goto label_458968;
        case 0x45896cu: goto label_45896c;
        case 0x458970u: goto label_458970;
        case 0x458974u: goto label_458974;
        case 0x458978u: goto label_458978;
        case 0x45897cu: goto label_45897c;
        case 0x458980u: goto label_458980;
        case 0x458984u: goto label_458984;
        case 0x458988u: goto label_458988;
        case 0x45898cu: goto label_45898c;
        case 0x458990u: goto label_458990;
        case 0x458994u: goto label_458994;
        case 0x458998u: goto label_458998;
        case 0x45899cu: goto label_45899c;
        case 0x4589a0u: goto label_4589a0;
        case 0x4589a4u: goto label_4589a4;
        case 0x4589a8u: goto label_4589a8;
        case 0x4589acu: goto label_4589ac;
        case 0x4589b0u: goto label_4589b0;
        case 0x4589b4u: goto label_4589b4;
        case 0x4589b8u: goto label_4589b8;
        case 0x4589bcu: goto label_4589bc;
        case 0x4589c0u: goto label_4589c0;
        case 0x4589c4u: goto label_4589c4;
        case 0x4589c8u: goto label_4589c8;
        case 0x4589ccu: goto label_4589cc;
        case 0x4589d0u: goto label_4589d0;
        case 0x4589d4u: goto label_4589d4;
        case 0x4589d8u: goto label_4589d8;
        case 0x4589dcu: goto label_4589dc;
        case 0x4589e0u: goto label_4589e0;
        case 0x4589e4u: goto label_4589e4;
        case 0x4589e8u: goto label_4589e8;
        case 0x4589ecu: goto label_4589ec;
        case 0x4589f0u: goto label_4589f0;
        case 0x4589f4u: goto label_4589f4;
        case 0x4589f8u: goto label_4589f8;
        case 0x4589fcu: goto label_4589fc;
        case 0x458a00u: goto label_458a00;
        case 0x458a04u: goto label_458a04;
        case 0x458a08u: goto label_458a08;
        case 0x458a0cu: goto label_458a0c;
        case 0x458a10u: goto label_458a10;
        case 0x458a14u: goto label_458a14;
        case 0x458a18u: goto label_458a18;
        case 0x458a1cu: goto label_458a1c;
        case 0x458a20u: goto label_458a20;
        case 0x458a24u: goto label_458a24;
        case 0x458a28u: goto label_458a28;
        case 0x458a2cu: goto label_458a2c;
        case 0x458a30u: goto label_458a30;
        case 0x458a34u: goto label_458a34;
        case 0x458a38u: goto label_458a38;
        case 0x458a3cu: goto label_458a3c;
        case 0x458a40u: goto label_458a40;
        case 0x458a44u: goto label_458a44;
        case 0x458a48u: goto label_458a48;
        case 0x458a4cu: goto label_458a4c;
        case 0x458a50u: goto label_458a50;
        case 0x458a54u: goto label_458a54;
        case 0x458a58u: goto label_458a58;
        case 0x458a5cu: goto label_458a5c;
        case 0x458a60u: goto label_458a60;
        case 0x458a64u: goto label_458a64;
        case 0x458a68u: goto label_458a68;
        case 0x458a6cu: goto label_458a6c;
        case 0x458a70u: goto label_458a70;
        case 0x458a74u: goto label_458a74;
        case 0x458a78u: goto label_458a78;
        case 0x458a7cu: goto label_458a7c;
        case 0x458a80u: goto label_458a80;
        case 0x458a84u: goto label_458a84;
        case 0x458a88u: goto label_458a88;
        case 0x458a8cu: goto label_458a8c;
        case 0x458a90u: goto label_458a90;
        case 0x458a94u: goto label_458a94;
        case 0x458a98u: goto label_458a98;
        case 0x458a9cu: goto label_458a9c;
        case 0x458aa0u: goto label_458aa0;
        case 0x458aa4u: goto label_458aa4;
        case 0x458aa8u: goto label_458aa8;
        case 0x458aacu: goto label_458aac;
        case 0x458ab0u: goto label_458ab0;
        case 0x458ab4u: goto label_458ab4;
        case 0x458ab8u: goto label_458ab8;
        case 0x458abcu: goto label_458abc;
        case 0x458ac0u: goto label_458ac0;
        case 0x458ac4u: goto label_458ac4;
        case 0x458ac8u: goto label_458ac8;
        case 0x458accu: goto label_458acc;
        case 0x458ad0u: goto label_458ad0;
        case 0x458ad4u: goto label_458ad4;
        case 0x458ad8u: goto label_458ad8;
        case 0x458adcu: goto label_458adc;
        case 0x458ae0u: goto label_458ae0;
        case 0x458ae4u: goto label_458ae4;
        case 0x458ae8u: goto label_458ae8;
        case 0x458aecu: goto label_458aec;
        case 0x458af0u: goto label_458af0;
        case 0x458af4u: goto label_458af4;
        case 0x458af8u: goto label_458af8;
        case 0x458afcu: goto label_458afc;
        case 0x458b00u: goto label_458b00;
        case 0x458b04u: goto label_458b04;
        case 0x458b08u: goto label_458b08;
        case 0x458b0cu: goto label_458b0c;
        case 0x458b10u: goto label_458b10;
        case 0x458b14u: goto label_458b14;
        case 0x458b18u: goto label_458b18;
        case 0x458b1cu: goto label_458b1c;
        case 0x458b20u: goto label_458b20;
        case 0x458b24u: goto label_458b24;
        case 0x458b28u: goto label_458b28;
        case 0x458b2cu: goto label_458b2c;
        case 0x458b30u: goto label_458b30;
        case 0x458b34u: goto label_458b34;
        case 0x458b38u: goto label_458b38;
        case 0x458b3cu: goto label_458b3c;
        case 0x458b40u: goto label_458b40;
        case 0x458b44u: goto label_458b44;
        case 0x458b48u: goto label_458b48;
        case 0x458b4cu: goto label_458b4c;
        case 0x458b50u: goto label_458b50;
        case 0x458b54u: goto label_458b54;
        case 0x458b58u: goto label_458b58;
        case 0x458b5cu: goto label_458b5c;
        default: break;
    }

    ctx->pc = 0x457a60u;

label_457a60:
    // 0x457a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x457a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_457a64:
    // 0x457a64: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457a68:
    // 0x457a68: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x457a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_457a6c:
    // 0x457a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457a70:
    // 0x457a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x457a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_457a74:
    // 0x457a74: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x457a74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_457a78:
    // 0x457a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x457a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_457a7c:
    // 0x457a7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x457a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_457a80:
    // 0x457a80: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x457a80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_457a84:
    // 0x457a84: 0xc04a576  jal         func_1295D8
label_457a88:
    if (ctx->pc == 0x457A88u) {
        ctx->pc = 0x457A88u;
            // 0x457a88: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->pc = 0x457A8Cu;
        goto label_457a8c;
    }
    ctx->pc = 0x457A84u;
    SET_GPR_U32(ctx, 31, 0x457A8Cu);
    ctx->pc = 0x457A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457A84u;
            // 0x457a88: 0x2624005c  addiu       $a0, $s1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A8Cu; }
        if (ctx->pc != 0x457A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A8Cu; }
        if (ctx->pc != 0x457A8Cu) { return; }
    }
    ctx->pc = 0x457A8Cu;
label_457a8c:
    // 0x457a8c: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x457a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_457a90:
    // 0x457a90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x457a90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457a94:
    // 0x457a94: 0xc04a576  jal         func_1295D8
label_457a98:
    if (ctx->pc == 0x457A98u) {
        ctx->pc = 0x457A98u;
            // 0x457a98: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x457A9Cu;
        goto label_457a9c;
    }
    ctx->pc = 0x457A94u;
    SET_GPR_U32(ctx, 31, 0x457A9Cu);
    ctx->pc = 0x457A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457A94u;
            // 0x457a98: 0x2406001c  addiu       $a2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A9Cu; }
        if (ctx->pc != 0x457A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457A9Cu; }
        if (ctx->pc != 0x457A9Cu) { return; }
    }
    ctx->pc = 0x457A9Cu;
label_457a9c:
    // 0x457a9c: 0x3c0443af  lui         $a0, 0x43AF
    ctx->pc = 0x457a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17327 << 16));
label_457aa0:
    // 0x457aa0: 0x3c0342fc  lui         $v1, 0x42FC
    ctx->pc = 0x457aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17148 << 16));
label_457aa4:
    // 0x457aa4: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x457aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
label_457aa8:
    // 0x457aa8: 0xae23006c  sw          $v1, 0x6C($s1)
    ctx->pc = 0x457aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 3));
label_457aac:
    // 0x457aac: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x457aacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_457ab0:
    // 0x457ab0: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_457ab4:
    if (ctx->pc == 0x457AB4u) {
        ctx->pc = 0x457AB4u;
            // 0x457ab4: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x457AB8u;
        goto label_457ab8;
    }
    ctx->pc = 0x457AB0u;
    {
        const bool branch_taken_0x457ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x457ab0) {
            ctx->pc = 0x457AB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457AB0u;
            // 0x457ab4: 0x240300a0  addiu       $v1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457AD4u;
            goto label_457ad4;
        }
    }
    ctx->pc = 0x457AB8u;
label_457ab8:
    // 0x457ab8: 0xc621006c  lwc1        $f1, 0x6C($s1)
    ctx->pc = 0x457ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_457abc:
    // 0x457abc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x457abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_457ac0:
    // 0x457ac0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457ac0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457ac4:
    // 0x457ac4: 0x0  nop
    ctx->pc = 0x457ac4u;
    // NOP
label_457ac8:
    // 0x457ac8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x457ac8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_457acc:
    // 0x457acc: 0xe620006c  swc1        $f0, 0x6C($s1)
    ctx->pc = 0x457accu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 108), bits); }
label_457ad0:
    // 0x457ad0: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x457ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_457ad4:
    // 0x457ad4: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x457ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_457ad8:
    // 0x457ad8: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x457ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
label_457adc:
    // 0x457adc: 0xa2240071  sb          $a0, 0x71($s1)
    ctx->pc = 0x457adcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 4));
label_457ae0:
    // 0x457ae0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x457ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_457ae4:
    // 0x457ae4: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x457ae4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_457ae8:
    // 0x457ae8: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x457ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_457aec:
    // 0x457aec: 0xa2240073  sb          $a0, 0x73($s1)
    ctx->pc = 0x457aecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 4));
label_457af0:
    // 0x457af0: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x457af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_457af4:
    // 0x457af4: 0xa2230070  sb          $v1, 0x70($s1)
    ctx->pc = 0x457af4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 112), (uint8_t)GPR_U32(ctx, 3));
label_457af8:
    // 0x457af8: 0x240400f0  addiu       $a0, $zero, 0xF0
    ctx->pc = 0x457af8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_457afc:
    // 0x457afc: 0xa2240071  sb          $a0, 0x71($s1)
    ctx->pc = 0x457afcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 4));
label_457b00:
    // 0x457b00: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x457b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_457b04:
    // 0x457b04: 0xa2230072  sb          $v1, 0x72($s1)
    ctx->pc = 0x457b04u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 114), (uint8_t)GPR_U32(ctx, 3));
label_457b08:
    // 0x457b08: 0x24040096  addiu       $a0, $zero, 0x96
    ctx->pc = 0x457b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_457b0c:
    // 0x457b0c: 0xa2240073  sb          $a0, 0x73($s1)
    ctx->pc = 0x457b0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 115), (uint8_t)GPR_U32(ctx, 4));
label_457b10:
    // 0x457b10: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x457b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_457b14:
    // 0x457b14: 0xa6230064  sh          $v1, 0x64($s1)
    ctx->pc = 0x457b14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 100), (uint16_t)GPR_U32(ctx, 3));
label_457b18:
    // 0x457b18: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x457b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_457b1c:
    // 0x457b1c: 0x3c034354  lui         $v1, 0x4354
    ctx->pc = 0x457b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17236 << 16));
label_457b20:
    // 0x457b20: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x457b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
label_457b24:
    // 0x457b24: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x457b24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_457b28:
    // 0x457b28: 0x92030029  lbu         $v1, 0x29($s0)
    ctx->pc = 0x457b28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
label_457b2c:
    // 0x457b2c: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_457b30:
    if (ctx->pc == 0x457B30u) {
        ctx->pc = 0x457B30u;
            // 0x457b30: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x457B34u;
        goto label_457b34;
    }
    ctx->pc = 0x457B2Cu;
    {
        const bool branch_taken_0x457b2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x457b2c) {
            ctx->pc = 0x457B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457B2Cu;
            // 0x457b30: 0x24030078  addiu       $v1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457B50u;
            goto label_457b50;
        }
    }
    ctx->pc = 0x457B34u;
label_457b34:
    // 0x457b34: 0xc6210088  lwc1        $f1, 0x88($s1)
    ctx->pc = 0x457b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_457b38:
    // 0x457b38: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x457b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_457b3c:
    // 0x457b3c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457b3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457b40:
    // 0x457b40: 0x0  nop
    ctx->pc = 0x457b40u;
    // NOP
label_457b44:
    // 0x457b44: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x457b44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_457b48:
    // 0x457b48: 0xe6200088  swc1        $f0, 0x88($s1)
    ctx->pc = 0x457b48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_457b4c:
    // 0x457b4c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x457b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_457b50:
    // 0x457b50: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x457b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_457b54:
    // 0x457b54: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x457b54u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
label_457b58:
    // 0x457b58: 0xa224008d  sb          $a0, 0x8D($s1)
    ctx->pc = 0x457b58u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 4));
label_457b5c:
    // 0x457b5c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x457b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_457b60:
    // 0x457b60: 0xa223008e  sb          $v1, 0x8E($s1)
    ctx->pc = 0x457b60u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 142), (uint8_t)GPR_U32(ctx, 3));
label_457b64:
    // 0x457b64: 0x24040032  addiu       $a0, $zero, 0x32
    ctx->pc = 0x457b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_457b68:
    // 0x457b68: 0xa224008f  sb          $a0, 0x8F($s1)
    ctx->pc = 0x457b68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 4));
label_457b6c:
    // 0x457b6c: 0x240300fa  addiu       $v1, $zero, 0xFA
    ctx->pc = 0x457b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
label_457b70:
    // 0x457b70: 0xa223008c  sb          $v1, 0x8C($s1)
    ctx->pc = 0x457b70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 3));
label_457b74:
    // 0x457b74: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x457b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_457b78:
    // 0x457b78: 0xa224008d  sb          $a0, 0x8D($s1)
    ctx->pc = 0x457b78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 4));
label_457b7c:
    // 0x457b7c: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x457b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_457b80:
    // 0x457b80: 0xa223008e  sb          $v1, 0x8E($s1)
    ctx->pc = 0x457b80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 142), (uint8_t)GPR_U32(ctx, 3));
label_457b84:
    // 0x457b84: 0x240400c8  addiu       $a0, $zero, 0xC8
    ctx->pc = 0x457b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_457b88:
    // 0x457b88: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x457b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_457b8c:
    // 0x457b8c: 0xa224008f  sb          $a0, 0x8F($s1)
    ctx->pc = 0x457b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 143), (uint8_t)GPR_U32(ctx, 4));
label_457b90:
    // 0x457b90: 0xa6230080  sh          $v1, 0x80($s1)
    ctx->pc = 0x457b90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 128), (uint16_t)GPR_U32(ctx, 3));
label_457b94:
    // 0x457b94: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x457b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_457b98:
    // 0x457b98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x457b98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_457b9c:
    // 0x457b9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x457b9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_457ba0:
    // 0x457ba0: 0x3e00008  jr          $ra
label_457ba4:
    if (ctx->pc == 0x457BA4u) {
        ctx->pc = 0x457BA4u;
            // 0x457ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x457BA8u;
        goto label_457ba8;
    }
    ctx->pc = 0x457BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x457BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457BA0u;
            // 0x457ba4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x457BA8u;
label_457ba8:
    // 0x457ba8: 0x0  nop
    ctx->pc = 0x457ba8u;
    // NOP
label_457bac:
    // 0x457bac: 0x0  nop
    ctx->pc = 0x457bacu;
    // NOP
label_457bb0:
    // 0x457bb0: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x457bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_457bb4:
    // 0x457bb4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x457bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_457bb8:
    // 0x457bb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x457bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_457bbc:
    // 0x457bbc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x457bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_457bc0:
    // 0x457bc0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x457bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_457bc4:
    // 0x457bc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x457bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_457bc8:
    // 0x457bc8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x457bc8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_457bcc:
    // 0x457bcc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x457bccu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_457bd0:
    // 0x457bd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x457bd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_457bd4:
    // 0x457bd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x457bd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_457bd8:
    // 0x457bd8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x457bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_457bdc:
    // 0x457bdc: 0x8c920024  lw          $s2, 0x24($a0)
    ctx->pc = 0x457bdcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_457be0:
    // 0x457be0: 0x8c430a68  lw          $v1, 0xA68($v0)
    ctx->pc = 0x457be0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2664)));
label_457be4:
    // 0x457be4: 0x24510a50  addiu       $s1, $v0, 0xA50
    ctx->pc = 0x457be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 2640));
label_457be8:
    // 0x457be8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x457be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_457bec:
    // 0x457bec: 0x8c420a74  lw          $v0, 0xA74($v0)
    ctx->pc = 0x457becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2676)));
label_457bf0:
    // 0x457bf0: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x457bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_457bf4:
    // 0x457bf4: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x457bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_457bf8:
    // 0x457bf8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_457bfc:
    if (ctx->pc == 0x457BFCu) {
        ctx->pc = 0x457BFCu;
            // 0x457bfc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457C00u;
        goto label_457c00;
    }
    ctx->pc = 0x457BF8u;
    {
        const bool branch_taken_0x457bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x457BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457BF8u;
            // 0x457bfc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x457bf8) {
            ctx->pc = 0x457C20u;
            goto label_457c20;
        }
    }
    ctx->pc = 0x457C00u;
label_457c00:
    // 0x457c00: 0x8e450214  lw          $a1, 0x214($s2)
    ctx->pc = 0x457c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_457c04:
    // 0x457c04: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x457c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_457c08:
    // 0x457c08: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x457c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_457c0c:
    // 0x457c0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x457c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_457c10:
    // 0x457c10: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x457c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_457c14:
    // 0x457c14: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x457c14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_457c18:
    // 0x457c18: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x457c18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_457c1c:
    // 0x457c1c: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x457c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_457c20:
    // 0x457c20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457c20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457c24:
    // 0x457c24: 0xc0dc9bc  jal         func_3726F0
label_457c28:
    if (ctx->pc == 0x457C28u) {
        ctx->pc = 0x457C28u;
            // 0x457c28: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x457C2Cu;
        goto label_457c2c;
    }
    ctx->pc = 0x457C24u;
    SET_GPR_U32(ctx, 31, 0x457C2Cu);
    ctx->pc = 0x457C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457C24u;
            // 0x457c28: 0x27a502f0  addiu       $a1, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C2Cu; }
        if (ctx->pc != 0x457C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C2Cu; }
        if (ctx->pc != 0x457C2Cu) { return; }
    }
    ctx->pc = 0x457C2Cu;
label_457c2c:
    // 0x457c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457c30:
    // 0x457c30: 0xc0dc9a0  jal         func_372680
label_457c34:
    if (ctx->pc == 0x457C34u) {
        ctx->pc = 0x457C34u;
            // 0x457c34: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x457C38u;
        goto label_457c38;
    }
    ctx->pc = 0x457C30u;
    SET_GPR_U32(ctx, 31, 0x457C38u);
    ctx->pc = 0x457C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457C30u;
            // 0x457c34: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C38u; }
        if (ctx->pc != 0x457C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C38u; }
        if (ctx->pc != 0x457C38u) { return; }
    }
    ctx->pc = 0x457C38u;
label_457c38:
    // 0x457c38: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x457c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_457c3c:
    // 0x457c3c: 0xc04f278  jal         func_13C9E0
label_457c40:
    if (ctx->pc == 0x457C40u) {
        ctx->pc = 0x457C40u;
            // 0x457c40: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x457C44u;
        goto label_457c44;
    }
    ctx->pc = 0x457C3Cu;
    SET_GPR_U32(ctx, 31, 0x457C44u);
    ctx->pc = 0x457C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457C3Cu;
            // 0x457c40: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C44u; }
        if (ctx->pc != 0x457C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C44u; }
        if (ctx->pc != 0x457C44u) { return; }
    }
    ctx->pc = 0x457C44u;
label_457c44:
    // 0x457c44: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x457c44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_457c48:
    // 0x457c48: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x457c48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_457c4c:
    // 0x457c4c: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x457c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_457c50:
    // 0x457c50: 0xc04cca0  jal         func_133280
label_457c54:
    if (ctx->pc == 0x457C54u) {
        ctx->pc = 0x457C54u;
            // 0x457c54: 0x24c6e0d0  addiu       $a2, $a2, -0x1F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959312));
        ctx->pc = 0x457C58u;
        goto label_457c58;
    }
    ctx->pc = 0x457C50u;
    SET_GPR_U32(ctx, 31, 0x457C58u);
    ctx->pc = 0x457C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457C50u;
            // 0x457c54: 0x24c6e0d0  addiu       $a2, $a2, -0x1F30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C58u; }
        if (ctx->pc != 0x457C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457C58u; }
        if (ctx->pc != 0x457C58u) { return; }
    }
    ctx->pc = 0x457C58u;
label_457c58:
    // 0x457c58: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x457c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_457c5c:
    // 0x457c5c: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x457c5cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_457c60:
    // 0x457c60: 0x50200318  beql        $at, $zero, . + 4 + (0x318 << 2)
label_457c64:
    if (ctx->pc == 0x457C64u) {
        ctx->pc = 0x457C64u;
            // 0x457c64: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x457C68u;
        goto label_457c68;
    }
    ctx->pc = 0x457C60u;
    {
        const bool branch_taken_0x457c60 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x457c60) {
            ctx->pc = 0x457C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457C60u;
            // 0x457c64: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4588C4u;
            goto label_4588c4;
        }
    }
    ctx->pc = 0x457C68u;
label_457c68:
    // 0x457c68: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x457c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_457c6c:
    // 0x457c6c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x457c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_457c70:
    // 0x457c70: 0x2484e080  addiu       $a0, $a0, -0x1F80
    ctx->pc = 0x457c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959232));
label_457c74:
    // 0x457c74: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x457c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_457c78:
    // 0x457c78: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x457c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_457c7c:
    // 0x457c7c: 0x600008  jr          $v1
label_457c80:
    if (ctx->pc == 0x457C80u) {
        ctx->pc = 0x457C84u;
        goto label_457c84;
    }
    ctx->pc = 0x457C7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x457C84u: goto label_457c84;
            case 0x458218u: goto label_458218;
            case 0x45840Cu: goto label_45840c;
            case 0x45860Cu: goto label_45860c;
            case 0x4588C0u: goto label_4588c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x457C84u;
label_457c84:
    // 0x457c84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x457c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_457c88:
    // 0x457c88: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x457c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_457c8c:
    // 0x457c8c: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x457c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_457c90:
    // 0x457c90: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x457c90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_457c94:
    // 0x457c94: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x457c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_457c98:
    // 0x457c98: 0x27a602f0  addiu       $a2, $sp, 0x2F0
    ctx->pc = 0x457c98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_457c9c:
    // 0x457c9c: 0x27a702e0  addiu       $a3, $sp, 0x2E0
    ctx->pc = 0x457c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_457ca0:
    // 0x457ca0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x457ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_457ca4:
    // 0x457ca4: 0xc0b884c  jal         func_2E2130
label_457ca8:
    if (ctx->pc == 0x457CA8u) {
        ctx->pc = 0x457CA8u;
            // 0x457ca8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x457CACu;
        goto label_457cac;
    }
    ctx->pc = 0x457CA4u;
    SET_GPR_U32(ctx, 31, 0x457CACu);
    ctx->pc = 0x457CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457CA4u;
            // 0x457ca8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2130u;
    if (runtime->hasFunction(0x2E2130u)) {
        auto targetFn = runtime->lookupFunction(0x2E2130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CACu; }
        if (ctx->pc != 0x457CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E2130_0x2e2130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CACu; }
        if (ctx->pc != 0x457CACu) { return; }
    }
    ctx->pc = 0x457CACu;
label_457cac:
    // 0x457cac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x457cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_457cb0:
    // 0x457cb0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457cb4:
    // 0x457cb4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x457cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_457cb8:
    // 0x457cb8: 0xc08914c  jal         func_224530
label_457cbc:
    if (ctx->pc == 0x457CBCu) {
        ctx->pc = 0x457CBCu;
            // 0x457cbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457CC0u;
        goto label_457cc0;
    }
    ctx->pc = 0x457CB8u;
    SET_GPR_U32(ctx, 31, 0x457CC0u);
    ctx->pc = 0x457CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457CB8u;
            // 0x457cbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CC0u; }
        if (ctx->pc != 0x457CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CC0u; }
        if (ctx->pc != 0x457CC0u) { return; }
    }
    ctx->pc = 0x457CC0u;
label_457cc0:
    // 0x457cc0: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x457cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_457cc4:
    // 0x457cc4: 0x3c02fefb  lui         $v0, 0xFEFB
    ctx->pc = 0x457cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65275 << 16));
label_457cc8:
    // 0x457cc8: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x457cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_457ccc:
    // 0x457ccc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x457cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457cd0:
    // 0x457cd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457cd4:
    // 0x457cd4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x457cd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_457cd8:
    // 0x457cd8: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x457cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_457cdc:
    // 0x457cdc: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x457cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_457ce0:
    // 0x457ce0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x457ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_457ce4:
    // 0x457ce4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x457ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_457ce8:
    // 0x457ce8: 0xc08bff0  jal         func_22FFC0
label_457cec:
    if (ctx->pc == 0x457CECu) {
        ctx->pc = 0x457CECu;
            // 0x457cec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457CF0u;
        goto label_457cf0;
    }
    ctx->pc = 0x457CE8u;
    SET_GPR_U32(ctx, 31, 0x457CF0u);
    ctx->pc = 0x457CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457CE8u;
            // 0x457cec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CF0u; }
        if (ctx->pc != 0x457CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457CF0u; }
        if (ctx->pc != 0x457CF0u) { return; }
    }
    ctx->pc = 0x457CF0u;
label_457cf0:
    // 0x457cf0: 0x8e450214  lw          $a1, 0x214($s2)
    ctx->pc = 0x457cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_457cf4:
    // 0x457cf4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x457cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_457cf8:
    // 0x457cf8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x457cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_457cfc:
    // 0x457cfc: 0x3c033e80  lui         $v1, 0x3E80
    ctx->pc = 0x457cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16000 << 16));
label_457d00:
    // 0x457d00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x457d00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457d04:
    // 0x457d04: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x457d04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_457d08:
    // 0x457d08: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x457d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_457d0c:
    // 0x457d0c: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x457d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
label_457d10:
    // 0x457d10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457d14:
    // 0x457d14: 0xae450214  sw          $a1, 0x214($s2)
    ctx->pc = 0x457d14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 5));
label_457d18:
    // 0x457d18: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x457d18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457d1c:
    // 0x457d1c: 0xc4a00064  lwc1        $f0, 0x64($a1)
    ctx->pc = 0x457d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457d20:
    // 0x457d20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x457d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_457d24:
    // 0x457d24: 0xe6400154  swc1        $f0, 0x154($s2)
    ctx->pc = 0x457d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_457d28:
    // 0x457d28: 0xae43015c  sw          $v1, 0x15C($s2)
    ctx->pc = 0x457d28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 348), GPR_U32(ctx, 3));
label_457d2c:
    // 0x457d2c: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x457d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_457d30:
    // 0x457d30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x457d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_457d34:
    // 0x457d34: 0xae620060  sw          $v0, 0x60($s3)
    ctx->pc = 0x457d34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 2));
label_457d38:
    // 0x457d38: 0xafa002c0  sw          $zero, 0x2C0($sp)
    ctx->pc = 0x457d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 0));
label_457d3c:
    // 0x457d3c: 0xafa002c4  sw          $zero, 0x2C4($sp)
    ctx->pc = 0x457d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 0));
label_457d40:
    // 0x457d40: 0xafa002c8  sw          $zero, 0x2C8($sp)
    ctx->pc = 0x457d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 0));
label_457d44:
    // 0x457d44: 0xc088b74  jal         func_222DD0
label_457d48:
    if (ctx->pc == 0x457D48u) {
        ctx->pc = 0x457D48u;
            // 0x457d48: 0xafa002cc  sw          $zero, 0x2CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
        ctx->pc = 0x457D4Cu;
        goto label_457d4c;
    }
    ctx->pc = 0x457D44u;
    SET_GPR_U32(ctx, 31, 0x457D4Cu);
    ctx->pc = 0x457D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457D44u;
            // 0x457d48: 0xafa002cc  sw          $zero, 0x2CC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457D4Cu; }
        if (ctx->pc != 0x457D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457D4Cu; }
        if (ctx->pc != 0x457D4Cu) { return; }
    }
    ctx->pc = 0x457D4Cu;
label_457d4c:
    // 0x457d4c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x457d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_457d50:
    // 0x457d50: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x457d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_457d54:
    // 0x457d54: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x457d54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_457d58:
    // 0x457d58: 0x320f809  jalr        $t9
label_457d5c:
    if (ctx->pc == 0x457D5Cu) {
        ctx->pc = 0x457D5Cu;
            // 0x457d5c: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x457D60u;
        goto label_457d60;
    }
    ctx->pc = 0x457D58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457D60u);
        ctx->pc = 0x457D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457D58u;
            // 0x457d5c: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457D60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457D60u; }
            if (ctx->pc != 0x457D60u) { return; }
        }
        }
    }
    ctx->pc = 0x457D60u;
label_457d60:
    // 0x457d60: 0xc088b74  jal         func_222DD0
label_457d64:
    if (ctx->pc == 0x457D64u) {
        ctx->pc = 0x457D64u;
            // 0x457d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x457D68u;
        goto label_457d68;
    }
    ctx->pc = 0x457D60u;
    SET_GPR_U32(ctx, 31, 0x457D68u);
    ctx->pc = 0x457D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457D60u;
            // 0x457d64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457D68u; }
        if (ctx->pc != 0x457D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457D68u; }
        if (ctx->pc != 0x457D68u) { return; }
    }
    ctx->pc = 0x457D68u;
label_457d68:
    // 0x457d68: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x457d68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_457d6c:
    // 0x457d6c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x457d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_457d70:
    // 0x457d70: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x457d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_457d74:
    // 0x457d74: 0x320f809  jalr        $t9
label_457d78:
    if (ctx->pc == 0x457D78u) {
        ctx->pc = 0x457D78u;
            // 0x457d78: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x457D7Cu;
        goto label_457d7c;
    }
    ctx->pc = 0x457D74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457D7Cu);
        ctx->pc = 0x457D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457D74u;
            // 0x457d78: 0x27a502c0  addiu       $a1, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457D7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457D7Cu; }
            if (ctx->pc != 0x457D7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x457D7Cu;
label_457d7c:
    // 0x457d7c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x457d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_457d80:
    // 0x457d80: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x457d80u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_457d84:
    // 0x457d84: 0x102000b5  beqz        $at, . + 4 + (0xB5 << 2)
label_457d88:
    if (ctx->pc == 0x457D88u) {
        ctx->pc = 0x457D8Cu;
        goto label_457d8c;
    }
    ctx->pc = 0x457D84u;
    {
        const bool branch_taken_0x457d84 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x457d84) {
            ctx->pc = 0x45805Cu;
            goto label_45805c;
        }
    }
    ctx->pc = 0x457D8Cu;
label_457d8c:
    // 0x457d8c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x457d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_457d90:
    // 0x457d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457d94:
    // 0x457d94: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x457d94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
label_457d98:
    // 0x457d98: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x457d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_457d9c:
    // 0x457d9c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x457d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457da0:
    // 0x457da0: 0xc074740  jal         func_1D1D00
label_457da4:
    if (ctx->pc == 0x457DA4u) {
        ctx->pc = 0x457DA4u;
            // 0x457da4: 0xc4540060  lwc1        $f20, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x457DA8u;
        goto label_457da8;
    }
    ctx->pc = 0x457DA0u;
    SET_GPR_U32(ctx, 31, 0x457DA8u);
    ctx->pc = 0x457DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457DA0u;
            // 0x457da4: 0xc4540060  lwc1        $f20, 0x60($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457DA8u; }
        if (ctx->pc != 0x457DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457DA8u; }
        if (ctx->pc != 0x457DA8u) { return; }
    }
    ctx->pc = 0x457DA8u;
label_457da8:
    // 0x457da8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_457dac:
    if (ctx->pc == 0x457DACu) {
        ctx->pc = 0x457DACu;
            // 0x457dac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x457DB0u;
        goto label_457db0;
    }
    ctx->pc = 0x457DA8u;
    {
        const bool branch_taken_0x457da8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x457da8) {
            ctx->pc = 0x457DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457DA8u;
            // 0x457dac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457DBCu;
            goto label_457dbc;
        }
    }
    ctx->pc = 0x457DB0u;
label_457db0:
    // 0x457db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457db4:
    // 0x457db4: 0x10000007  b           . + 4 + (0x7 << 2)
label_457db8:
    if (ctx->pc == 0x457DB8u) {
        ctx->pc = 0x457DB8u;
            // 0x457db8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457DBCu;
        goto label_457dbc;
    }
    ctx->pc = 0x457DB4u;
    {
        const bool branch_taken_0x457db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457DB4u;
            // 0x457db8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457db4) {
            ctx->pc = 0x457DD4u;
            goto label_457dd4;
        }
    }
    ctx->pc = 0x457DBCu;
label_457dbc:
    // 0x457dbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x457dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457dc0:
    // 0x457dc0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457dc4:
    // 0x457dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457dc8:
    // 0x457dc8: 0x0  nop
    ctx->pc = 0x457dc8u;
    // NOP
label_457dcc:
    // 0x457dcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x457dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_457dd0:
    // 0x457dd0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x457dd0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_457dd4:
    // 0x457dd4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x457dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_457dd8:
    // 0x457dd8: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x457dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457ddc:
    // 0x457ddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457ddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457de0:
    // 0x457de0: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x457de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_457de4:
    // 0x457de4: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x457de4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_457de8:
    // 0x457de8: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x457de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_457dec:
    // 0x457dec: 0xc461005c  lwc1        $f1, 0x5C($v1)
    ctx->pc = 0x457decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_457df0:
    // 0x457df0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x457df0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_457df4:
    // 0x457df4: 0xc440e0c0  lwc1        $f0, -0x1F40($v0)
    ctx->pc = 0x457df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457df8:
    // 0x457df8: 0x46016018  adda.s      $f12, $f1
    ctx->pc = 0x457df8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
label_457dfc:
    // 0x457dfc: 0x4602a05c  madd.s      $f1, $f20, $f2
    ctx->pc = 0x457dfcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_457e00:
    // 0x457e00: 0x46000b43  div.s       $f13, $f1, $f0
    ctx->pc = 0x457e00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[13] = ctx->f[1] / ctx->f[0];
label_457e04:
    // 0x457e04: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x457e04u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_457e08:
    // 0x457e08: 0x0  nop
    ctx->pc = 0x457e08u;
    // NOP
label_457e0c:
    // 0x457e0c: 0x0  nop
    ctx->pc = 0x457e0cu;
    // NOP
label_457e10:
    // 0x457e10: 0xc04cbd8  jal         func_132F60
label_457e14:
    if (ctx->pc == 0x457E14u) {
        ctx->pc = 0x457E18u;
        goto label_457e18;
    }
    ctx->pc = 0x457E10u;
    SET_GPR_U32(ctx, 31, 0x457E18u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E18u; }
        if (ctx->pc != 0x457E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E18u; }
        if (ctx->pc != 0x457E18u) { return; }
    }
    ctx->pc = 0x457E18u;
label_457e18:
    // 0x457e18: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x457e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_457e1c:
    // 0x457e1c: 0xc04f278  jal         func_13C9E0
label_457e20:
    if (ctx->pc == 0x457E20u) {
        ctx->pc = 0x457E20u;
            // 0x457e20: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x457E24u;
        goto label_457e24;
    }
    ctx->pc = 0x457E1Cu;
    SET_GPR_U32(ctx, 31, 0x457E24u);
    ctx->pc = 0x457E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457E1Cu;
            // 0x457e20: 0x27a502d0  addiu       $a1, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E24u; }
        if (ctx->pc != 0x457E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E24u; }
        if (ctx->pc != 0x457E24u) { return; }
    }
    ctx->pc = 0x457E24u;
label_457e24:
    // 0x457e24: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x457e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_457e28:
    // 0x457e28: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x457e28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_457e2c:
    // 0x457e2c: 0xc04cca0  jal         func_133280
label_457e30:
    if (ctx->pc == 0x457E30u) {
        ctx->pc = 0x457E30u;
            // 0x457e30: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->pc = 0x457E34u;
        goto label_457e34;
    }
    ctx->pc = 0x457E2Cu;
    SET_GPR_U32(ctx, 31, 0x457E34u);
    ctx->pc = 0x457E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457E2Cu;
            // 0x457e30: 0x27a602b0  addiu       $a2, $sp, 0x2B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E34u; }
        if (ctx->pc != 0x457E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E34u; }
        if (ctx->pc != 0x457E34u) { return; }
    }
    ctx->pc = 0x457E34u;
label_457e34:
    // 0x457e34: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457e38:
    // 0x457e38: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x457e38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_457e3c:
    // 0x457e3c: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x457e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_457e40:
    // 0x457e40: 0xc7a602a0  lwc1        $f6, 0x2A0($sp)
    ctx->pc = 0x457e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_457e44:
    // 0x457e44: 0xc7a502a4  lwc1        $f5, 0x2A4($sp)
    ctx->pc = 0x457e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_457e48:
    // 0x457e48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457e48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457e4c:
    // 0x457e4c: 0xc7a402a8  lwc1        $f4, 0x2A8($sp)
    ctx->pc = 0x457e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_457e50:
    // 0x457e50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x457e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_457e54:
    // 0x457e54: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x457e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_457e58:
    // 0x457e58: 0xe7a60080  swc1        $f6, 0x80($sp)
    ctx->pc = 0x457e58u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_457e5c:
    // 0x457e5c: 0xe7a50084  swc1        $f5, 0x84($sp)
    ctx->pc = 0x457e5cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_457e60:
    // 0x457e60: 0xe7a40088  swc1        $f4, 0x88($sp)
    ctx->pc = 0x457e60u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_457e64:
    // 0x457e64: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x457e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_457e68:
    // 0x457e68: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x457e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457e6c:
    // 0x457e6c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x457e6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_457e70:
    // 0x457e70: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x457e70u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_457e74:
    // 0x457e74: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x457e74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_457e78:
    // 0x457e78: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x457e78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_457e7c:
    // 0x457e7c: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x457e7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_457e80:
    // 0x457e80: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x457e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_457e84:
    // 0x457e84: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x457e84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_457e88:
    // 0x457e88: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x457e88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_457e8c:
    // 0x457e8c: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x457e8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_457e90:
    // 0x457e90: 0xc088b74  jal         func_222DD0
label_457e94:
    if (ctx->pc == 0x457E94u) {
        ctx->pc = 0x457E94u;
            // 0x457e94: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->pc = 0x457E98u;
        goto label_457e98;
    }
    ctx->pc = 0x457E90u;
    SET_GPR_U32(ctx, 31, 0x457E98u);
    ctx->pc = 0x457E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457E90u;
            // 0x457e94: 0xe7a0008c  swc1        $f0, 0x8C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E98u; }
        if (ctx->pc != 0x457E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457E98u; }
        if (ctx->pc != 0x457E98u) { return; }
    }
    ctx->pc = 0x457E98u;
label_457e98:
    // 0x457e98: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x457e98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_457e9c:
    // 0x457e9c: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x457e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_457ea0:
    // 0x457ea0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x457ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_457ea4:
    // 0x457ea4: 0x320f809  jalr        $t9
label_457ea8:
    if (ctx->pc == 0x457EA8u) {
        ctx->pc = 0x457EA8u;
            // 0x457ea8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x457EACu;
        goto label_457eac;
    }
    ctx->pc = 0x457EA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x457EACu);
        ctx->pc = 0x457EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457EA4u;
            // 0x457ea8: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x457EACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x457EACu; }
            if (ctx->pc != 0x457EACu) { return; }
        }
        }
    }
    ctx->pc = 0x457EACu;
label_457eac:
    // 0x457eac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457eb0:
    // 0x457eb0: 0xc074740  jal         func_1D1D00
label_457eb4:
    if (ctx->pc == 0x457EB4u) {
        ctx->pc = 0x457EB4u;
            // 0x457eb4: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x457EB8u;
        goto label_457eb8;
    }
    ctx->pc = 0x457EB0u;
    SET_GPR_U32(ctx, 31, 0x457EB8u);
    ctx->pc = 0x457EB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457EB0u;
            // 0x457eb4: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457EB8u; }
        if (ctx->pc != 0x457EB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457EB8u; }
        if (ctx->pc != 0x457EB8u) { return; }
    }
    ctx->pc = 0x457EB8u;
label_457eb8:
    // 0x457eb8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_457ebc:
    if (ctx->pc == 0x457EBCu) {
        ctx->pc = 0x457EBCu;
            // 0x457ebc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x457EC0u;
        goto label_457ec0;
    }
    ctx->pc = 0x457EB8u;
    {
        const bool branch_taken_0x457eb8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x457eb8) {
            ctx->pc = 0x457EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457EB8u;
            // 0x457ebc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457ECCu;
            goto label_457ecc;
        }
    }
    ctx->pc = 0x457EC0u;
label_457ec0:
    // 0x457ec0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457ec0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457ec4:
    // 0x457ec4: 0x10000007  b           . + 4 + (0x7 << 2)
label_457ec8:
    if (ctx->pc == 0x457EC8u) {
        ctx->pc = 0x457EC8u;
            // 0x457ec8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457ECCu;
        goto label_457ecc;
    }
    ctx->pc = 0x457EC4u;
    {
        const bool branch_taken_0x457ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457EC4u;
            // 0x457ec8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457ec4) {
            ctx->pc = 0x457EE4u;
            goto label_457ee4;
        }
    }
    ctx->pc = 0x457ECCu;
label_457ecc:
    // 0x457ecc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x457eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457ed0:
    // 0x457ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457ed4:
    // 0x457ed4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457ed4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457ed8:
    // 0x457ed8: 0x0  nop
    ctx->pc = 0x457ed8u;
    // NOP
label_457edc:
    // 0x457edc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x457edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_457ee0:
    // 0x457ee0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x457ee0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_457ee4:
    // 0x457ee4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x457ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_457ee8:
    // 0x457ee8: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x457ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457eec:
    // 0x457eec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457eecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457ef0:
    // 0x457ef0: 0x0  nop
    ctx->pc = 0x457ef0u;
    // NOP
label_457ef4:
    // 0x457ef4: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x457ef4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_457ef8:
    // 0x457ef8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x457ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_457efc:
    // 0x457efc: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x457efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_457f00:
    // 0x457f00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457f04:
    // 0x457f04: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x457f04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_457f08:
    // 0x457f08: 0xc4a00040  lwc1        $f0, 0x40($a1)
    ctx->pc = 0x457f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457f0c:
    // 0x457f0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457f0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457f10:
    // 0x457f10: 0xc074740  jal         func_1D1D00
label_457f14:
    if (ctx->pc == 0x457F14u) {
        ctx->pc = 0x457F14u;
            // 0x457f14: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x457F18u;
        goto label_457f18;
    }
    ctx->pc = 0x457F10u;
    SET_GPR_U32(ctx, 31, 0x457F18u);
    ctx->pc = 0x457F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457F10u;
            // 0x457f14: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457F18u; }
        if (ctx->pc != 0x457F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457F18u; }
        if (ctx->pc != 0x457F18u) { return; }
    }
    ctx->pc = 0x457F18u;
label_457f18:
    // 0x457f18: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_457f1c:
    if (ctx->pc == 0x457F1Cu) {
        ctx->pc = 0x457F1Cu;
            // 0x457f1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x457F20u;
        goto label_457f20;
    }
    ctx->pc = 0x457F18u;
    {
        const bool branch_taken_0x457f18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x457f18) {
            ctx->pc = 0x457F1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457F18u;
            // 0x457f1c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457F2Cu;
            goto label_457f2c;
        }
    }
    ctx->pc = 0x457F20u;
label_457f20:
    // 0x457f20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457f20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457f24:
    // 0x457f24: 0x10000007  b           . + 4 + (0x7 << 2)
label_457f28:
    if (ctx->pc == 0x457F28u) {
        ctx->pc = 0x457F28u;
            // 0x457f28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457F2Cu;
        goto label_457f2c;
    }
    ctx->pc = 0x457F24u;
    {
        const bool branch_taken_0x457f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457F24u;
            // 0x457f28: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457f24) {
            ctx->pc = 0x457F44u;
            goto label_457f44;
        }
    }
    ctx->pc = 0x457F2Cu;
label_457f2c:
    // 0x457f2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x457f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457f30:
    // 0x457f30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457f34:
    // 0x457f34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457f34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457f38:
    // 0x457f38: 0x0  nop
    ctx->pc = 0x457f38u;
    // NOP
label_457f3c:
    // 0x457f3c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x457f3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_457f40:
    // 0x457f40: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x457f40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_457f44:
    // 0x457f44: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x457f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_457f48:
    // 0x457f48: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x457f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457f4c:
    // 0x457f4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457f50:
    // 0x457f50: 0x0  nop
    ctx->pc = 0x457f50u;
    // NOP
label_457f54:
    // 0x457f54: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x457f54u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_457f58:
    // 0x457f58: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x457f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_457f5c:
    // 0x457f5c: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x457f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_457f60:
    // 0x457f60: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x457f60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_457f64:
    // 0x457f64: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x457f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_457f68:
    // 0x457f68: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x457f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457f6c:
    // 0x457f6c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x457f6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457f70:
    // 0x457f70: 0xc074740  jal         func_1D1D00
label_457f74:
    if (ctx->pc == 0x457F74u) {
        ctx->pc = 0x457F74u;
            // 0x457f74: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x457F78u;
        goto label_457f78;
    }
    ctx->pc = 0x457F70u;
    SET_GPR_U32(ctx, 31, 0x457F78u);
    ctx->pc = 0x457F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x457F70u;
            // 0x457f74: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457F78u; }
        if (ctx->pc != 0x457F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x457F78u; }
        if (ctx->pc != 0x457F78u) { return; }
    }
    ctx->pc = 0x457F78u;
label_457f78:
    // 0x457f78: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_457f7c:
    if (ctx->pc == 0x457F7Cu) {
        ctx->pc = 0x457F7Cu;
            // 0x457f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x457F80u;
        goto label_457f80;
    }
    ctx->pc = 0x457F78u;
    {
        const bool branch_taken_0x457f78 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x457f78) {
            ctx->pc = 0x457F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x457F78u;
            // 0x457f7c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x457F8Cu;
            goto label_457f8c;
        }
    }
    ctx->pc = 0x457F80u;
label_457f80:
    // 0x457f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457f84:
    // 0x457f84: 0x10000007  b           . + 4 + (0x7 << 2)
label_457f88:
    if (ctx->pc == 0x457F88u) {
        ctx->pc = 0x457F88u;
            // 0x457f88: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x457F8Cu;
        goto label_457f8c;
    }
    ctx->pc = 0x457F84u;
    {
        const bool branch_taken_0x457f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x457F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x457F84u;
            // 0x457f88: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x457f84) {
            ctx->pc = 0x457FA4u;
            goto label_457fa4;
        }
    }
    ctx->pc = 0x457F8Cu;
label_457f8c:
    // 0x457f8c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x457f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_457f90:
    // 0x457f90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x457f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_457f94:
    // 0x457f94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x457f94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457f98:
    // 0x457f98: 0x0  nop
    ctx->pc = 0x457f98u;
    // NOP
label_457f9c:
    // 0x457f9c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x457f9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_457fa0:
    // 0x457fa0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x457fa0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_457fa4:
    // 0x457fa4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x457fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_457fa8:
    // 0x457fa8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x457fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_457fac:
    // 0x457fac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x457facu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_457fb0:
    // 0x457fb0: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x457fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_457fb4:
    // 0x457fb4: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x457fb4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_457fb8:
    // 0x457fb8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x457fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_457fbc:
    // 0x457fbc: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x457fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_457fc0:
    // 0x457fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x457fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_457fc4:
    // 0x457fc4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x457fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_457fc8:
    // 0x457fc8: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x457fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_457fcc:
    // 0x457fcc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x457fccu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_457fd0:
    // 0x457fd0: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x457fd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_457fd4:
    // 0x457fd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x457fd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_457fd8:
    // 0x457fd8: 0xafa0029c  sw          $zero, 0x29C($sp)
    ctx->pc = 0x457fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 0));
label_457fdc:
    // 0x457fdc: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x457fdcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_457fe0:
    // 0x457fe0: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x457fe0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_457fe4:
    // 0x457fe4: 0x0  nop
    ctx->pc = 0x457fe4u;
    // NOP
label_457fe8:
    // 0x457fe8: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x457fe8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_457fec:
    // 0x457fec: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x457fecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_457ff0:
    // 0x457ff0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x457ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_457ff4:
    // 0x457ff4: 0x0  nop
    ctx->pc = 0x457ff4u;
    // NOP
label_457ff8:
    // 0x457ff8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x457ff8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_457ffc:
    // 0x457ffc: 0xe7a00290  swc1        $f0, 0x290($sp)
    ctx->pc = 0x457ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_458000:
    // 0x458000: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x458000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_458004:
    // 0x458004: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x458004u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_458008:
    // 0x458008: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x458008u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_45800c:
    // 0x45800c: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x45800cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_458010:
    // 0x458010: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x458010u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_458014:
    // 0x458014: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x458014u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_458018:
    // 0x458018: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x458018u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_45801c:
    // 0x45801c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x45801cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_458020:
    // 0x458020: 0xe7a10294  swc1        $f1, 0x294($sp)
    ctx->pc = 0x458020u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_458024:
    // 0x458024: 0xc088b74  jal         func_222DD0
label_458028:
    if (ctx->pc == 0x458028u) {
        ctx->pc = 0x458028u;
            // 0x458028: 0xe7a00298  swc1        $f0, 0x298($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
        ctx->pc = 0x45802Cu;
        goto label_45802c;
    }
    ctx->pc = 0x458024u;
    SET_GPR_U32(ctx, 31, 0x45802Cu);
    ctx->pc = 0x458028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458024u;
            // 0x458028: 0xe7a00298  swc1        $f0, 0x298($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45802Cu; }
        if (ctx->pc != 0x45802Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45802Cu; }
        if (ctx->pc != 0x45802Cu) { return; }
    }
    ctx->pc = 0x45802Cu;
label_45802c:
    // 0x45802c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x45802cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_458030:
    // 0x458030: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x458030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_458034:
    // 0x458034: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x458034u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_458038:
    // 0x458038: 0x320f809  jalr        $t9
label_45803c:
    if (ctx->pc == 0x45803Cu) {
        ctx->pc = 0x45803Cu;
            // 0x45803c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x458040u;
        goto label_458040;
    }
    ctx->pc = 0x458038u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458040u);
        ctx->pc = 0x45803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458038u;
            // 0x45803c: 0x27a50290  addiu       $a1, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458040u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458040u; }
            if (ctx->pc != 0x458040u) { return; }
        }
        }
    }
    ctx->pc = 0x458040u;
label_458040:
    // 0x458040: 0x3c043f86  lui         $a0, 0x3F86
    ctx->pc = 0x458040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16262 << 16));
label_458044:
    // 0x458044: 0x3c033f66  lui         $v1, 0x3F66
    ctx->pc = 0x458044u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16230 << 16));
label_458048:
    // 0x458048: 0x34840a92  ori         $a0, $a0, 0xA92
    ctx->pc = 0x458048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2706);
label_45804c:
    // 0x45804c: 0x34636666  ori         $v1, $v1, 0x6666
    ctx->pc = 0x45804cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26214);
label_458050:
    // 0x458050: 0xae440158  sw          $a0, 0x158($s2)
    ctx->pc = 0x458050u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 4));
label_458054:
    // 0x458054: 0x1000021a  b           . + 4 + (0x21A << 2)
label_458058:
    if (ctx->pc == 0x458058u) {
        ctx->pc = 0x458058u;
            // 0x458058: 0xae430160  sw          $v1, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
        ctx->pc = 0x45805Cu;
        goto label_45805c;
    }
    ctx->pc = 0x458054u;
    {
        const bool branch_taken_0x458054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458054u;
            // 0x458058: 0xae430160  sw          $v1, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458054) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x45805Cu;
label_45805c:
    // 0x45805c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45805cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_458060:
    // 0x458060: 0xc074740  jal         func_1D1D00
label_458064:
    if (ctx->pc == 0x458064u) {
        ctx->pc = 0x458064u;
            // 0x458064: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x458068u;
        goto label_458068;
    }
    ctx->pc = 0x458060u;
    SET_GPR_U32(ctx, 31, 0x458068u);
    ctx->pc = 0x458064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458060u;
            // 0x458064: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458068u; }
        if (ctx->pc != 0x458068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458068u; }
        if (ctx->pc != 0x458068u) { return; }
    }
    ctx->pc = 0x458068u;
label_458068:
    // 0x458068: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_45806c:
    if (ctx->pc == 0x45806Cu) {
        ctx->pc = 0x45806Cu;
            // 0x45806c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x458070u;
        goto label_458070;
    }
    ctx->pc = 0x458068u;
    {
        const bool branch_taken_0x458068 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x458068) {
            ctx->pc = 0x45806Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458068u;
            // 0x45806c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45807Cu;
            goto label_45807c;
        }
    }
    ctx->pc = 0x458070u;
label_458070:
    // 0x458070: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458074:
    // 0x458074: 0x10000007  b           . + 4 + (0x7 << 2)
label_458078:
    if (ctx->pc == 0x458078u) {
        ctx->pc = 0x458078u;
            // 0x458078: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45807Cu;
        goto label_45807c;
    }
    ctx->pc = 0x458074u;
    {
        const bool branch_taken_0x458074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458074u;
            // 0x458078: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x458074) {
            ctx->pc = 0x458094u;
            goto label_458094;
        }
    }
    ctx->pc = 0x45807Cu;
label_45807c:
    // 0x45807c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458080:
    // 0x458080: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x458080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_458084:
    // 0x458084: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x458084u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458088:
    // 0x458088: 0x0  nop
    ctx->pc = 0x458088u;
    // NOP
label_45808c:
    // 0x45808c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x45808cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_458090:
    // 0x458090: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x458090u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_458094:
    // 0x458094: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x458094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_458098:
    // 0x458098: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x458098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_45809c:
    // 0x45809c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45809cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4580a0:
    // 0x4580a0: 0x0  nop
    ctx->pc = 0x4580a0u;
    // NOP
label_4580a4:
    // 0x4580a4: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x4580a4u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4580a8:
    // 0x4580a8: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x4580a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_4580ac:
    // 0x4580ac: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x4580acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4580b0:
    // 0x4580b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4580b4:
    // 0x4580b4: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x4580b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_4580b8:
    // 0x4580b8: 0xc4a00058  lwc1        $f0, 0x58($a1)
    ctx->pc = 0x4580b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4580bc:
    // 0x4580bc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4580bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4580c0:
    // 0x4580c0: 0xc074740  jal         func_1D1D00
label_4580c4:
    if (ctx->pc == 0x4580C4u) {
        ctx->pc = 0x4580C4u;
            // 0x4580c4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4580C8u;
        goto label_4580c8;
    }
    ctx->pc = 0x4580C0u;
    SET_GPR_U32(ctx, 31, 0x4580C8u);
    ctx->pc = 0x4580C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4580C0u;
            // 0x4580c4: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4580C8u; }
        if (ctx->pc != 0x4580C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4580C8u; }
        if (ctx->pc != 0x4580C8u) { return; }
    }
    ctx->pc = 0x4580C8u;
label_4580c8:
    // 0x4580c8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4580cc:
    if (ctx->pc == 0x4580CCu) {
        ctx->pc = 0x4580CCu;
            // 0x4580cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4580D0u;
        goto label_4580d0;
    }
    ctx->pc = 0x4580C8u;
    {
        const bool branch_taken_0x4580c8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4580c8) {
            ctx->pc = 0x4580CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4580C8u;
            // 0x4580cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4580DCu;
            goto label_4580dc;
        }
    }
    ctx->pc = 0x4580D0u;
label_4580d0:
    // 0x4580d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4580d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4580d4:
    // 0x4580d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_4580d8:
    if (ctx->pc == 0x4580D8u) {
        ctx->pc = 0x4580D8u;
            // 0x4580d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4580DCu;
        goto label_4580dc;
    }
    ctx->pc = 0x4580D4u;
    {
        const bool branch_taken_0x4580d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4580D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4580D4u;
            // 0x4580d8: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4580d4) {
            ctx->pc = 0x4580F4u;
            goto label_4580f4;
        }
    }
    ctx->pc = 0x4580DCu;
label_4580dc:
    // 0x4580dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4580dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4580e0:
    // 0x4580e0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4580e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4580e4:
    // 0x4580e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4580e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4580e8:
    // 0x4580e8: 0x0  nop
    ctx->pc = 0x4580e8u;
    // NOP
label_4580ec:
    // 0x4580ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4580ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4580f0:
    // 0x4580f0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4580f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4580f4:
    // 0x4580f4: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4580f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4580f8:
    // 0x4580f8: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x4580f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4580fc:
    // 0x4580fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4580fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458100:
    // 0x458100: 0x0  nop
    ctx->pc = 0x458100u;
    // NOP
label_458104:
    // 0x458104: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x458104u;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_458108:
    // 0x458108: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x458108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_45810c:
    // 0x45810c: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x45810cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_458110:
    // 0x458110: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x458110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_458114:
    // 0x458114: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x458114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_458118:
    // 0x458118: 0xc4a00054  lwc1        $f0, 0x54($a1)
    ctx->pc = 0x458118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45811c:
    // 0x45811c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x45811cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_458120:
    // 0x458120: 0xc074740  jal         func_1D1D00
label_458124:
    if (ctx->pc == 0x458124u) {
        ctx->pc = 0x458124u;
            // 0x458124: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x458128u;
        goto label_458128;
    }
    ctx->pc = 0x458120u;
    SET_GPR_U32(ctx, 31, 0x458128u);
    ctx->pc = 0x458124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458120u;
            // 0x458124: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458128u; }
        if (ctx->pc != 0x458128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458128u; }
        if (ctx->pc != 0x458128u) { return; }
    }
    ctx->pc = 0x458128u;
label_458128:
    // 0x458128: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_45812c:
    if (ctx->pc == 0x45812Cu) {
        ctx->pc = 0x45812Cu;
            // 0x45812c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x458130u;
        goto label_458130;
    }
    ctx->pc = 0x458128u;
    {
        const bool branch_taken_0x458128 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x458128) {
            ctx->pc = 0x45812Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458128u;
            // 0x45812c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45813Cu;
            goto label_45813c;
        }
    }
    ctx->pc = 0x458130u;
label_458130:
    // 0x458130: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458130u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458134:
    // 0x458134: 0x10000007  b           . + 4 + (0x7 << 2)
label_458138:
    if (ctx->pc == 0x458138u) {
        ctx->pc = 0x458138u;
            // 0x458138: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45813Cu;
        goto label_45813c;
    }
    ctx->pc = 0x458134u;
    {
        const bool branch_taken_0x458134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458134u;
            // 0x458138: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x458134) {
            ctx->pc = 0x458154u;
            goto label_458154;
        }
    }
    ctx->pc = 0x45813Cu;
label_45813c:
    // 0x45813c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45813cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458140:
    // 0x458140: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x458140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_458144:
    // 0x458144: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x458144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458148:
    // 0x458148: 0x0  nop
    ctx->pc = 0x458148u;
    // NOP
label_45814c:
    // 0x45814c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x45814cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_458150:
    // 0x458150: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x458150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_458154:
    // 0x458154: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x458154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_458158:
    // 0x458158: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x458158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_45815c:
    // 0x45815c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45815cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458160:
    // 0x458160: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x458160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458164:
    // 0x458164: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x458164u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_458168:
    // 0x458168: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x458168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_45816c:
    // 0x45816c: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x45816cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_458170:
    // 0x458170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x458170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_458174:
    // 0x458174: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x458174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_458178:
    // 0x458178: 0xc4c00050  lwc1        $f0, 0x50($a2)
    ctx->pc = 0x458178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45817c:
    // 0x45817c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x45817cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_458180:
    // 0x458180: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x458180u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_458184:
    // 0x458184: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x458184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_458188:
    // 0x458188: 0xafa0028c  sw          $zero, 0x28C($sp)
    ctx->pc = 0x458188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 652), GPR_U32(ctx, 0));
label_45818c:
    // 0x45818c: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x45818cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_458190:
    // 0x458190: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x458190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_458194:
    // 0x458194: 0x0  nop
    ctx->pc = 0x458194u;
    // NOP
label_458198:
    // 0x458198: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x458198u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_45819c:
    // 0x45819c: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x45819cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_4581a0:
    // 0x4581a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4581a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4581a4:
    // 0x4581a4: 0x0  nop
    ctx->pc = 0x4581a4u;
    // NOP
label_4581a8:
    // 0x4581a8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4581a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4581ac:
    // 0x4581ac: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x4581acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_4581b0:
    // 0x4581b0: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x4581b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_4581b4:
    // 0x4581b4: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x4581b4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_4581b8:
    // 0x4581b8: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x4581b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_4581bc:
    // 0x4581bc: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x4581bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_4581c0:
    // 0x4581c0: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x4581c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_4581c4:
    // 0x4581c4: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x4581c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_4581c8:
    // 0x4581c8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4581c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4581cc:
    // 0x4581cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4581ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4581d0:
    // 0x4581d0: 0xe7a10284  swc1        $f1, 0x284($sp)
    ctx->pc = 0x4581d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_4581d4:
    // 0x4581d4: 0xc088b74  jal         func_222DD0
label_4581d8:
    if (ctx->pc == 0x4581D8u) {
        ctx->pc = 0x4581D8u;
            // 0x4581d8: 0xe7a00288  swc1        $f0, 0x288($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
        ctx->pc = 0x4581DCu;
        goto label_4581dc;
    }
    ctx->pc = 0x4581D4u;
    SET_GPR_U32(ctx, 31, 0x4581DCu);
    ctx->pc = 0x4581D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4581D4u;
            // 0x4581d8: 0xe7a00288  swc1        $f0, 0x288($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4581DCu; }
        if (ctx->pc != 0x4581DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4581DCu; }
        if (ctx->pc != 0x4581DCu) { return; }
    }
    ctx->pc = 0x4581DCu;
label_4581dc:
    // 0x4581dc: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4581dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4581e0:
    // 0x4581e0: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4581e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4581e4:
    // 0x4581e4: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4581e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4581e8:
    // 0x4581e8: 0x320f809  jalr        $t9
label_4581ec:
    if (ctx->pc == 0x4581ECu) {
        ctx->pc = 0x4581ECu;
            // 0x4581ec: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x4581F0u;
        goto label_4581f0;
    }
    ctx->pc = 0x4581E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4581F0u);
        ctx->pc = 0x4581ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4581E8u;
            // 0x4581ec: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4581F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4581F0u; }
            if (ctx->pc != 0x4581F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4581F0u;
label_4581f0:
    // 0x4581f0: 0x3c04423c  lui         $a0, 0x423C
    ctx->pc = 0x4581f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16956 << 16));
label_4581f4:
    // 0x4581f4: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4581f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4581f8:
    // 0x4581f8: 0x34847edd  ori         $a0, $a0, 0x7EDD
    ctx->pc = 0x4581f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32477);
label_4581fc:
    // 0x4581fc: 0x3465cccd  ori         $a1, $v1, 0xCCCD
    ctx->pc = 0x4581fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_458200:
    // 0x458200: 0xae440158  sw          $a0, 0x158($s2)
    ctx->pc = 0x458200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 4));
label_458204:
    // 0x458204: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x458204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_458208:
    // 0x458208: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x458208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_45820c:
    // 0x45820c: 0xac850160  sw          $a1, 0x160($a0)
    ctx->pc = 0x45820cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 352), GPR_U32(ctx, 5));
label_458210:
    // 0x458210: 0x100001ab  b           . + 4 + (0x1AB << 2)
label_458214:
    if (ctx->pc == 0x458214u) {
        ctx->pc = 0x458214u;
            // 0x458214: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x458218u;
        goto label_458218;
    }
    ctx->pc = 0x458210u;
    {
        const bool branch_taken_0x458210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458210u;
            // 0x458214: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458210) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x458218u;
label_458218:
    // 0x458218: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x458218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_45821c:
    // 0x45821c: 0x28630004  slti        $v1, $v1, 0x4
    ctx->pc = 0x45821cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_458220:
    // 0x458220: 0x146001a7  bnez        $v1, . + 4 + (0x1A7 << 2)
label_458224:
    if (ctx->pc == 0x458224u) {
        ctx->pc = 0x458228u;
        goto label_458228;
    }
    ctx->pc = 0x458220u;
    {
        const bool branch_taken_0x458220 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x458220) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x458228u;
label_458228:
    // 0x458228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x458228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45822c:
    // 0x45822c: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x45822cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_458230:
    // 0x458230: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x458230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
label_458234:
    // 0x458234: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x458234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_458238:
    // 0x458238: 0xc088b74  jal         func_222DD0
label_45823c:
    if (ctx->pc == 0x45823Cu) {
        ctx->pc = 0x45823Cu;
            // 0x45823c: 0xafa0027c  sw          $zero, 0x27C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
        ctx->pc = 0x458240u;
        goto label_458240;
    }
    ctx->pc = 0x458238u;
    SET_GPR_U32(ctx, 31, 0x458240u);
    ctx->pc = 0x45823Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458238u;
            // 0x45823c: 0xafa0027c  sw          $zero, 0x27C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458240u; }
        if (ctx->pc != 0x458240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458240u; }
        if (ctx->pc != 0x458240u) { return; }
    }
    ctx->pc = 0x458240u;
label_458240:
    // 0x458240: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x458240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_458244:
    // 0x458244: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x458244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_458248:
    // 0x458248: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x458248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_45824c:
    // 0x45824c: 0x320f809  jalr        $t9
label_458250:
    if (ctx->pc == 0x458250u) {
        ctx->pc = 0x458250u;
            // 0x458250: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x458254u;
        goto label_458254;
    }
    ctx->pc = 0x45824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458254u);
        ctx->pc = 0x458250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45824Cu;
            // 0x458250: 0x27a50270  addiu       $a1, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458254u; }
            if (ctx->pc != 0x458254u) { return; }
        }
        }
    }
    ctx->pc = 0x458254u;
label_458254:
    // 0x458254: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x458254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_458258:
    // 0x458258: 0xc074740  jal         func_1D1D00
label_45825c:
    if (ctx->pc == 0x45825Cu) {
        ctx->pc = 0x45825Cu;
            // 0x45825c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->pc = 0x458260u;
        goto label_458260;
    }
    ctx->pc = 0x458258u;
    SET_GPR_U32(ctx, 31, 0x458260u);
    ctx->pc = 0x45825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458258u;
            // 0x45825c: 0x8c44a2e0  lw          $a0, -0x5D20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458260u; }
        if (ctx->pc != 0x458260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458260u; }
        if (ctx->pc != 0x458260u) { return; }
    }
    ctx->pc = 0x458260u;
label_458260:
    // 0x458260: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_458264:
    if (ctx->pc == 0x458264u) {
        ctx->pc = 0x458264u;
            // 0x458264: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x458268u;
        goto label_458268;
    }
    ctx->pc = 0x458260u;
    {
        const bool branch_taken_0x458260 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x458260) {
            ctx->pc = 0x458264u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458260u;
            // 0x458264: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458274u;
            goto label_458274;
        }
    }
    ctx->pc = 0x458268u;
label_458268:
    // 0x458268: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458268u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45826c:
    // 0x45826c: 0x10000007  b           . + 4 + (0x7 << 2)
label_458270:
    if (ctx->pc == 0x458270u) {
        ctx->pc = 0x458270u;
            // 0x458270: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x458274u;
        goto label_458274;
    }
    ctx->pc = 0x45826Cu;
    {
        const bool branch_taken_0x45826c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45826Cu;
            // 0x458270: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45826c) {
            ctx->pc = 0x45828Cu;
            goto label_45828c;
        }
    }
    ctx->pc = 0x458274u;
label_458274:
    // 0x458274: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x458274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458278:
    // 0x458278: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x458278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45827c:
    // 0x45827c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45827cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458280:
    // 0x458280: 0x0  nop
    ctx->pc = 0x458280u;
    // NOP
label_458284:
    // 0x458284: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x458284u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_458288:
    // 0x458288: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x458288u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_45828c:
    // 0x45828c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x45828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_458290:
    // 0x458290: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x458290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458294:
    // 0x458294: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458298:
    // 0x458298: 0x0  nop
    ctx->pc = 0x458298u;
    // NOP
label_45829c:
    // 0x45829c: 0x460105c2  mul.s       $f23, $f0, $f1
    ctx->pc = 0x45829cu;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4582a0:
    // 0x4582a0: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x4582a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_4582a4:
    // 0x4582a4: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x4582a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_4582a8:
    // 0x4582a8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4582a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4582ac:
    // 0x4582ac: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x4582acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_4582b0:
    // 0x4582b0: 0xc4a0004c  lwc1        $f0, 0x4C($a1)
    ctx->pc = 0x4582b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4582b4:
    // 0x4582b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4582b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4582b8:
    // 0x4582b8: 0xc074740  jal         func_1D1D00
label_4582bc:
    if (ctx->pc == 0x4582BCu) {
        ctx->pc = 0x4582BCu;
            // 0x4582bc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4582C0u;
        goto label_4582c0;
    }
    ctx->pc = 0x4582B8u;
    SET_GPR_U32(ctx, 31, 0x4582C0u);
    ctx->pc = 0x4582BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4582B8u;
            // 0x4582bc: 0x46000d42  mul.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4582C0u; }
        if (ctx->pc != 0x4582C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4582C0u; }
        if (ctx->pc != 0x4582C0u) { return; }
    }
    ctx->pc = 0x4582C0u;
label_4582c0:
    // 0x4582c0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4582c4:
    if (ctx->pc == 0x4582C4u) {
        ctx->pc = 0x4582C4u;
            // 0x4582c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4582C8u;
        goto label_4582c8;
    }
    ctx->pc = 0x4582C0u;
    {
        const bool branch_taken_0x4582c0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4582c0) {
            ctx->pc = 0x4582C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4582C0u;
            // 0x4582c4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4582D4u;
            goto label_4582d4;
        }
    }
    ctx->pc = 0x4582C8u;
label_4582c8:
    // 0x4582c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4582c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4582cc:
    // 0x4582cc: 0x10000007  b           . + 4 + (0x7 << 2)
label_4582d0:
    if (ctx->pc == 0x4582D0u) {
        ctx->pc = 0x4582D0u;
            // 0x4582d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4582D4u;
        goto label_4582d4;
    }
    ctx->pc = 0x4582CCu;
    {
        const bool branch_taken_0x4582cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4582D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4582CCu;
            // 0x4582d0: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4582cc) {
            ctx->pc = 0x4582ECu;
            goto label_4582ec;
        }
    }
    ctx->pc = 0x4582D4u;
label_4582d4:
    // 0x4582d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4582d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4582d8:
    // 0x4582d8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4582d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4582dc:
    // 0x4582dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4582dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4582e0:
    // 0x4582e0: 0x0  nop
    ctx->pc = 0x4582e0u;
    // NOP
label_4582e4:
    // 0x4582e4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4582e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4582e8:
    // 0x4582e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x4582e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_4582ec:
    // 0x4582ec: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x4582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_4582f0:
    // 0x4582f0: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x4582f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4582f4:
    // 0x4582f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4582f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4582f8:
    // 0x4582f8: 0x0  nop
    ctx->pc = 0x4582f8u;
    // NOP
label_4582fc:
    // 0x4582fc: 0x46010582  mul.s       $f22, $f0, $f1
    ctx->pc = 0x4582fcu;
    ctx->f[22] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_458300:
    // 0x458300: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x458300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_458304:
    // 0x458304: 0x3443fa35  ori         $v1, $v0, 0xFA35
    ctx->pc = 0x458304u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_458308:
    // 0x458308: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x458308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45830c:
    // 0x45830c: 0x8c44a2e0  lw          $a0, -0x5D20($v0)
    ctx->pc = 0x45830cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943456)));
label_458310:
    // 0x458310: 0xc4a00048  lwc1        $f0, 0x48($a1)
    ctx->pc = 0x458310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458314:
    // 0x458314: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x458314u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_458318:
    // 0x458318: 0xc074740  jal         func_1D1D00
label_45831c:
    if (ctx->pc == 0x45831Cu) {
        ctx->pc = 0x45831Cu;
            // 0x45831c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x458320u;
        goto label_458320;
    }
    ctx->pc = 0x458318u;
    SET_GPR_U32(ctx, 31, 0x458320u);
    ctx->pc = 0x45831Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458318u;
            // 0x45831c: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1D00u;
    if (runtime->hasFunction(0x1D1D00u)) {
        auto targetFn = runtime->lookupFunction(0x1D1D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458320u; }
        if (ctx->pc != 0x458320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1D00_0x1d1d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458320u; }
        if (ctx->pc != 0x458320u) { return; }
    }
    ctx->pc = 0x458320u;
label_458320:
    // 0x458320: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_458324:
    if (ctx->pc == 0x458324u) {
        ctx->pc = 0x458324u;
            // 0x458324: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x458328u;
        goto label_458328;
    }
    ctx->pc = 0x458320u;
    {
        const bool branch_taken_0x458320 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x458320) {
            ctx->pc = 0x458324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458320u;
            // 0x458324: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458334u;
            goto label_458334;
        }
    }
    ctx->pc = 0x458328u;
label_458328:
    // 0x458328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45832c:
    // 0x45832c: 0x10000007  b           . + 4 + (0x7 << 2)
label_458330:
    if (ctx->pc == 0x458330u) {
        ctx->pc = 0x458330u;
            // 0x458330: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x458334u;
        goto label_458334;
    }
    ctx->pc = 0x45832Cu;
    {
        const bool branch_taken_0x45832c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45832Cu;
            // 0x458330: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x45832c) {
            ctx->pc = 0x45834Cu;
            goto label_45834c;
        }
    }
    ctx->pc = 0x458334u;
label_458334:
    // 0x458334: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x458334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458338:
    // 0x458338: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x458338u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45833c:
    // 0x45833c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x45833cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458340:
    // 0x458340: 0x0  nop
    ctx->pc = 0x458340u;
    // NOP
label_458344:
    // 0x458344: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x458344u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_458348:
    // 0x458348: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x458348u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_45834c:
    // 0x45834c: 0x3c022f80  lui         $v0, 0x2F80
    ctx->pc = 0x45834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12160 << 16));
label_458350:
    // 0x458350: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x458350u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_458354:
    // 0x458354: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x458354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458358:
    // 0x458358: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x458358u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_45835c:
    // 0x45835c: 0x46010142  mul.s       $f5, $f0, $f1
    ctx->pc = 0x45835cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_458360:
    // 0x458360: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x458360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_458364:
    // 0x458364: 0x3445fa35  ori         $a1, $v0, 0xFA35
    ctx->pc = 0x458364u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_458368:
    // 0x458368: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x458368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_45836c:
    // 0x45836c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x45836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_458370:
    // 0x458370: 0xc4c00044  lwc1        $f0, 0x44($a2)
    ctx->pc = 0x458370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458374:
    // 0x458374: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x458374u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_458378:
    // 0x458378: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x458378u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_45837c:
    // 0x45837c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x45837cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_458380:
    // 0x458380: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x458380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_458384:
    // 0x458384: 0x46012002  mul.s       $f0, $f4, $f1
    ctx->pc = 0x458384u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_458388:
    // 0x458388: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x458388u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_45838c:
    // 0x45838c: 0x0  nop
    ctx->pc = 0x45838cu;
    // NOP
label_458390:
    // 0x458390: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x458390u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_458394:
    // 0x458394: 0x4605001d  msub.s      $f0, $f0, $f5
    ctx->pc = 0x458394u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[5]));
label_458398:
    // 0x458398: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x458398u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45839c:
    // 0x45839c: 0x0  nop
    ctx->pc = 0x45839cu;
    // NOP
label_4583a0:
    // 0x4583a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4583a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4583a4:
    // 0x4583a4: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x4583a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_4583a8:
    // 0x4583a8: 0x46142002  mul.s       $f0, $f4, $f20
    ctx->pc = 0x4583a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_4583ac:
    // 0x4583ac: 0x46141818  adda.s      $f3, $f20
    ctx->pc = 0x4583acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_4583b0:
    // 0x4583b0: 0x4616005d  msub.s      $f1, $f0, $f22
    ctx->pc = 0x4583b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[22]));
label_4583b4:
    // 0x4583b4: 0x46152002  mul.s       $f0, $f4, $f21
    ctx->pc = 0x4583b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
label_4583b8:
    // 0x4583b8: 0x46151818  adda.s      $f3, $f21
    ctx->pc = 0x4583b8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[21]);
label_4583bc:
    // 0x4583bc: 0x4617001d  msub.s      $f0, $f0, $f23
    ctx->pc = 0x4583bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[23]));
label_4583c0:
    // 0x4583c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x4583c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4583c4:
    // 0x4583c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x4583c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4583c8:
    // 0x4583c8: 0xe7a10264  swc1        $f1, 0x264($sp)
    ctx->pc = 0x4583c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_4583cc:
    // 0x4583cc: 0xc088b74  jal         func_222DD0
label_4583d0:
    if (ctx->pc == 0x4583D0u) {
        ctx->pc = 0x4583D0u;
            // 0x4583d0: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->pc = 0x4583D4u;
        goto label_4583d4;
    }
    ctx->pc = 0x4583CCu;
    SET_GPR_U32(ctx, 31, 0x4583D4u);
    ctx->pc = 0x4583D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4583CCu;
            // 0x4583d0: 0xe7a00268  swc1        $f0, 0x268($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4583D4u; }
        if (ctx->pc != 0x4583D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4583D4u; }
        if (ctx->pc != 0x4583D4u) { return; }
    }
    ctx->pc = 0x4583D4u;
label_4583d4:
    // 0x4583d4: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4583d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4583d8:
    // 0x4583d8: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4583d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4583dc:
    // 0x4583dc: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4583dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4583e0:
    // 0x4583e0: 0x320f809  jalr        $t9
label_4583e4:
    if (ctx->pc == 0x4583E4u) {
        ctx->pc = 0x4583E4u;
            // 0x4583e4: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x4583E8u;
        goto label_4583e8;
    }
    ctx->pc = 0x4583E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4583E8u);
        ctx->pc = 0x4583E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4583E0u;
            // 0x4583e4: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4583E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4583E8u; }
            if (ctx->pc != 0x4583E8u) { return; }
        }
        }
    }
    ctx->pc = 0x4583E8u;
label_4583e8:
    // 0x4583e8: 0x3c04423c  lui         $a0, 0x423C
    ctx->pc = 0x4583e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16956 << 16));
label_4583ec:
    // 0x4583ec: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x4583ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_4583f0:
    // 0x4583f0: 0x34857edd  ori         $a1, $a0, 0x7EDD
    ctx->pc = 0x4583f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32477);
label_4583f4:
    // 0x4583f4: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x4583f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_4583f8:
    // 0x4583f8: 0xae450158  sw          $a1, 0x158($s2)
    ctx->pc = 0x4583f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 344), GPR_U32(ctx, 5));
label_4583fc:
    // 0x4583fc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4583fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_458400:
    // 0x458400: 0xae440160  sw          $a0, 0x160($s2)
    ctx->pc = 0x458400u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 4));
label_458404:
    // 0x458404: 0x1000012e  b           . + 4 + (0x12E << 2)
label_458408:
    if (ctx->pc == 0x458408u) {
        ctx->pc = 0x458408u;
            // 0x458408: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x45840Cu;
        goto label_45840c;
    }
    ctx->pc = 0x458404u;
    {
        const bool branch_taken_0x458404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458404u;
            // 0x458408: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458404) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x45840Cu;
label_45840c:
    // 0x45840c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x45840cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_458410:
    // 0x458410: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x458410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_458414:
    // 0x458414: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x458414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_458418:
    // 0x458418: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x458418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_45841c:
    // 0x45841c: 0xc0b82c4  jal         func_2E0B10
label_458420:
    if (ctx->pc == 0x458420u) {
        ctx->pc = 0x458420u;
            // 0x458420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458424u;
        goto label_458424;
    }
    ctx->pc = 0x45841Cu;
    SET_GPR_U32(ctx, 31, 0x458424u);
    ctx->pc = 0x458420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45841Cu;
            // 0x458420: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458424u; }
        if (ctx->pc != 0x458424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458424u; }
        if (ctx->pc != 0x458424u) { return; }
    }
    ctx->pc = 0x458424u;
label_458424:
    // 0x458424: 0x8e66003c  lw          $a2, 0x3C($s3)
    ctx->pc = 0x458424u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458428:
    // 0x458428: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x458428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_45842c:
    // 0x45842c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x45842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_458430:
    // 0x458430: 0x27a50210  addiu       $a1, $sp, 0x210
    ctx->pc = 0x458430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_458434:
    // 0x458434: 0x966300c2  lhu         $v1, 0xC2($s3)
    ctx->pc = 0x458434u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 194)));
label_458438:
    // 0x458438: 0xc4d4006c  lwc1        $f20, 0x6C($a2)
    ctx->pc = 0x458438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_45843c:
    // 0x45843c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x45843cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_458440:
    // 0x458440: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x458440u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_458444:
    // 0x458444: 0xc0b7d3c  jal         func_2DF4F0
label_458448:
    if (ctx->pc == 0x458448u) {
        ctx->pc = 0x458448u;
            // 0x458448: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x45844Cu;
        goto label_45844c;
    }
    ctx->pc = 0x458444u;
    SET_GPR_U32(ctx, 31, 0x45844Cu);
    ctx->pc = 0x458448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458444u;
            // 0x458448: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45844Cu; }
        if (ctx->pc != 0x45844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45844Cu; }
        if (ctx->pc != 0x45844Cu) { return; }
    }
    ctx->pc = 0x45844Cu;
label_45844c:
    // 0x45844c: 0x27a401d0  addiu       $a0, $sp, 0x1D0
    ctx->pc = 0x45844cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_458450:
    // 0x458450: 0xc04ccf4  jal         func_1333D0
label_458454:
    if (ctx->pc == 0x458454u) {
        ctx->pc = 0x458454u;
            // 0x458454: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x458458u;
        goto label_458458;
    }
    ctx->pc = 0x458450u;
    SET_GPR_U32(ctx, 31, 0x458458u);
    ctx->pc = 0x458454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458450u;
            // 0x458454: 0x27a50210  addiu       $a1, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458458u; }
        if (ctx->pc != 0x458458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458458u; }
        if (ctx->pc != 0x458458u) { return; }
    }
    ctx->pc = 0x458458u;
label_458458:
    // 0x458458: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x458458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_45845c:
    // 0x45845c: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x45845cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_458460:
    // 0x458460: 0xc04cca0  jal         func_133280
label_458464:
    if (ctx->pc == 0x458464u) {
        ctx->pc = 0x458464u;
            // 0x458464: 0x27a602f0  addiu       $a2, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x458468u;
        goto label_458468;
    }
    ctx->pc = 0x458460u;
    SET_GPR_U32(ctx, 31, 0x458468u);
    ctx->pc = 0x458464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458460u;
            // 0x458464: 0x27a602f0  addiu       $a2, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458468u; }
        if (ctx->pc != 0x458468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458468u; }
        if (ctx->pc != 0x458468u) { return; }
    }
    ctx->pc = 0x458468u;
label_458468:
    // 0x458468: 0xafa001c0  sw          $zero, 0x1C0($sp)
    ctx->pc = 0x458468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 0));
label_45846c:
    // 0x45846c: 0xc7a001c4  lwc1        $f0, 0x1C4($sp)
    ctx->pc = 0x45846cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458470:
    // 0x458470: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x458470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458474:
    // 0x458474: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x458474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_458478:
    // 0x458478: 0xc441005c  lwc1        $f1, 0x5C($v0)
    ctx->pc = 0x458478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45847c:
    // 0x45847c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x45847cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_458480:
    // 0x458480: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x458480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_458484:
    // 0x458484: 0xc04cc14  jal         func_133050
label_458488:
    if (ctx->pc == 0x458488u) {
        ctx->pc = 0x458488u;
            // 0x458488: 0xe7b401c8  swc1        $f20, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->pc = 0x45848Cu;
        goto label_45848c;
    }
    ctx->pc = 0x458484u;
    SET_GPR_U32(ctx, 31, 0x45848Cu);
    ctx->pc = 0x458488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458484u;
            // 0x458488: 0xe7b401c8  swc1        $f20, 0x1C8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45848Cu; }
        if (ctx->pc != 0x45848Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45848Cu; }
        if (ctx->pc != 0x45848Cu) { return; }
    }
    ctx->pc = 0x45848Cu;
label_45848c:
    // 0x45848c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x45848cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_458490:
    // 0x458490: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x458490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_458494:
    // 0x458494: 0xc04cc44  jal         func_133110
label_458498:
    if (ctx->pc == 0x458498u) {
        ctx->pc = 0x458498u;
            // 0x458498: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x45849Cu;
        goto label_45849c;
    }
    ctx->pc = 0x458494u;
    SET_GPR_U32(ctx, 31, 0x45849Cu);
    ctx->pc = 0x458498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458494u;
            // 0x458498: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45849Cu; }
        if (ctx->pc != 0x45849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45849Cu; }
        if (ctx->pc != 0x45849Cu) { return; }
    }
    ctx->pc = 0x45849Cu;
label_45849c:
    // 0x45849c: 0x8e63003c  lw          $v1, 0x3C($s3)
    ctx->pc = 0x45849cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4584a0:
    // 0x4584a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4584a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4584a4:
    // 0x4584a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4584a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4584a8:
    // 0x4584a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4584a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4584ac:
    // 0x4584ac: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4584acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4584b0:
    // 0x4584b0: 0x27a50250  addiu       $a1, $sp, 0x250
    ctx->pc = 0x4584b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_4584b4:
    // 0x4584b4: 0xc4640068  lwc1        $f4, 0x68($v1)
    ctx->pc = 0x4584b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4584b8:
    // 0x4584b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4584b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4584bc:
    // 0x4584bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4584bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4584c0:
    // 0x4584c0: 0x0  nop
    ctx->pc = 0x4584c0u;
    // NOP
label_4584c4:
    // 0x4584c4: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x4584c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_4584c8:
    // 0x4584c8: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x4584c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_4584cc:
    // 0x4584cc: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x4584ccu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4584d0:
    // 0x4584d0: 0xc4630064  lwc1        $f3, 0x64($v1)
    ctx->pc = 0x4584d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4584d4:
    // 0x4584d4: 0x46141018  adda.s      $f2, $f20
    ctx->pc = 0x4584d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
label_4584d8:
    // 0x4584d8: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x4584d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_4584dc:
    // 0x4584dc: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x4584dcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[0];
label_4584e0:
    // 0x4584e0: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4584e0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4584e4:
    // 0x4584e4: 0x0  nop
    ctx->pc = 0x4584e4u;
    // NOP
label_4584e8:
    // 0x4584e8: 0x0  nop
    ctx->pc = 0x4584e8u;
    // NOP
label_4584ec:
    // 0x4584ec: 0xc04cc70  jal         func_1331C0
label_4584f0:
    if (ctx->pc == 0x4584F0u) {
        ctx->pc = 0x4584F0u;
            // 0x4584f0: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->pc = 0x4584F4u;
        goto label_4584f4;
    }
    ctx->pc = 0x4584ECu;
    SET_GPR_U32(ctx, 31, 0x4584F4u);
    ctx->pc = 0x4584F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4584ECu;
            // 0x4584f0: 0x4604a31c  madd.s      $f12, $f20, $f4 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[4]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4584F4u; }
        if (ctx->pc != 0x4584F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4584F4u; }
        if (ctx->pc != 0x4584F4u) { return; }
    }
    ctx->pc = 0x4584F4u;
label_4584f4:
    // 0x4584f4: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x4584f4u;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_4584f8:
    // 0x4584f8: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x4584f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4584fc:
    // 0x4584fc: 0xc04cc70  jal         func_1331C0
label_458500:
    if (ctx->pc == 0x458500u) {
        ctx->pc = 0x458500u;
            // 0x458500: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x458504u;
        goto label_458504;
    }
    ctx->pc = 0x4584FCu;
    SET_GPR_U32(ctx, 31, 0x458504u);
    ctx->pc = 0x458500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4584FCu;
            // 0x458500: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458504u; }
        if (ctx->pc != 0x458504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458504u; }
        if (ctx->pc != 0x458504u) { return; }
    }
    ctx->pc = 0x458504u;
label_458504:
    // 0x458504: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x458504u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_458508:
    // 0x458508: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x458508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_45850c:
    // 0x45850c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x45850cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_458510:
    // 0x458510: 0xc0b7d3c  jal         func_2DF4F0
label_458514:
    if (ctx->pc == 0x458514u) {
        ctx->pc = 0x458514u;
            // 0x458514: 0x24c6e0e0  addiu       $a2, $a2, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959328));
        ctx->pc = 0x458518u;
        goto label_458518;
    }
    ctx->pc = 0x458510u;
    SET_GPR_U32(ctx, 31, 0x458518u);
    ctx->pc = 0x458514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458510u;
            // 0x458514: 0x24c6e0e0  addiu       $a2, $a2, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458518u; }
        if (ctx->pc != 0x458518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458518u; }
        if (ctx->pc != 0x458518u) { return; }
    }
    ctx->pc = 0x458518u;
label_458518:
    // 0x458518: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x458518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_45851c:
    // 0x45851c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x45851cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_458520:
    // 0x458520: 0xc04cca0  jal         func_133280
label_458524:
    if (ctx->pc == 0x458524u) {
        ctx->pc = 0x458524u;
            // 0x458524: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458528u;
        goto label_458528;
    }
    ctx->pc = 0x458520u;
    SET_GPR_U32(ctx, 31, 0x458528u);
    ctx->pc = 0x458524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458520u;
            // 0x458524: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458528u; }
        if (ctx->pc != 0x458528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458528u; }
        if (ctx->pc != 0x458528u) { return; }
    }
    ctx->pc = 0x458528u;
label_458528:
    // 0x458528: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x458528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45852c:
    // 0x45852c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x45852cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_458530:
    // 0x458530: 0x8c43e3e0  lw          $v1, -0x1C20($v0)
    ctx->pc = 0x458530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_458534:
    // 0x458534: 0xc7a601b0  lwc1        $f6, 0x1B0($sp)
    ctx->pc = 0x458534u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_458538:
    // 0x458538: 0xc7a501b4  lwc1        $f5, 0x1B4($sp)
    ctx->pc = 0x458538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_45853c:
    // 0x45853c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x45853cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_458540:
    // 0x458540: 0xc7a401b8  lwc1        $f4, 0x1B8($sp)
    ctx->pc = 0x458540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_458544:
    // 0x458544: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x458544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_458548:
    // 0x458548: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x458548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_45854c:
    // 0x45854c: 0xe7a60070  swc1        $f6, 0x70($sp)
    ctx->pc = 0x45854cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_458550:
    // 0x458550: 0xe7a50074  swc1        $f5, 0x74($sp)
    ctx->pc = 0x458550u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_458554:
    // 0x458554: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x458554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_458558:
    // 0x458558: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x458558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45855c:
    // 0x45855c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x45855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458560:
    // 0x458560: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x458560u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_458564:
    // 0x458564: 0x46000882  mul.s       $f2, $f1, $f0
    ctx->pc = 0x458564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_458568:
    // 0x458568: 0x46023002  mul.s       $f0, $f6, $f2
    ctx->pc = 0x458568u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_45856c:
    // 0x45856c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x45856cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_458570:
    // 0x458570: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x458570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_458574:
    // 0x458574: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x458574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_458578:
    // 0x458578: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x458578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_45857c:
    // 0x45857c: 0x46021802  mul.s       $f0, $f3, $f2
    ctx->pc = 0x45857cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_458580:
    // 0x458580: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x458580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_458584:
    // 0x458584: 0xc088b74  jal         func_222DD0
label_458588:
    if (ctx->pc == 0x458588u) {
        ctx->pc = 0x458588u;
            // 0x458588: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->pc = 0x45858Cu;
        goto label_45858c;
    }
    ctx->pc = 0x458584u;
    SET_GPR_U32(ctx, 31, 0x45858Cu);
    ctx->pc = 0x458588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458584u;
            // 0x458588: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45858Cu; }
        if (ctx->pc != 0x45858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45858Cu; }
        if (ctx->pc != 0x45858Cu) { return; }
    }
    ctx->pc = 0x45858Cu;
label_45858c:
    // 0x45858c: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x45858cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_458590:
    // 0x458590: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x458590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_458594:
    // 0x458594: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x458594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_458598:
    // 0x458598: 0x320f809  jalr        $t9
label_45859c:
    if (ctx->pc == 0x45859Cu) {
        ctx->pc = 0x45859Cu;
            // 0x45859c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4585A0u;
        goto label_4585a0;
    }
    ctx->pc = 0x458598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4585A0u);
        ctx->pc = 0x45859Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458598u;
            // 0x45859c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4585A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4585A0u; }
            if (ctx->pc != 0x4585A0u) { return; }
        }
        }
    }
    ctx->pc = 0x4585A0u;
label_4585a0:
    // 0x4585a0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4585a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4585a4:
    // 0x4585a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4585a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4585a8:
    // 0x4585a8: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x4585a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4585ac:
    // 0x4585ac: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4585acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4585b0:
    // 0x4585b0: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x4585b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4585b4:
    // 0x4585b4: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x4585b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4585b8:
    // 0x4585b8: 0xc04cc14  jal         func_133050
label_4585bc:
    if (ctx->pc == 0x4585BCu) {
        ctx->pc = 0x4585BCu;
            // 0x4585bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4585C0u;
        goto label_4585c0;
    }
    ctx->pc = 0x4585B8u;
    SET_GPR_U32(ctx, 31, 0x4585C0u);
    ctx->pc = 0x4585BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4585B8u;
            // 0x4585bc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4585C0u; }
        if (ctx->pc != 0x4585C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4585C0u; }
        if (ctx->pc != 0x4585C0u) { return; }
    }
    ctx->pc = 0x4585C0u;
label_4585c0:
    // 0x4585c0: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x4585c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_4585c4:
    // 0x4585c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4585c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4585c8:
    // 0x4585c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4585c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4585cc:
    // 0x4585cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4585ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4585d0:
    // 0x4585d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x4585d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4585d4:
    // 0x4585d4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x4585d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4585d8:
    // 0x4585d8: 0xc08914c  jal         func_224530
label_4585dc:
    if (ctx->pc == 0x4585DCu) {
        ctx->pc = 0x4585DCu;
            // 0x4585dc: 0xe6400154  swc1        $f0, 0x154($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
        ctx->pc = 0x4585E0u;
        goto label_4585e0;
    }
    ctx->pc = 0x4585D8u;
    SET_GPR_U32(ctx, 31, 0x4585E0u);
    ctx->pc = 0x4585DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4585D8u;
            // 0x4585dc: 0xe6400154  swc1        $f0, 0x154($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4585E0u; }
        if (ctx->pc != 0x4585E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4585E0u; }
        if (ctx->pc != 0x4585E0u) { return; }
    }
    ctx->pc = 0x4585E0u;
label_4585e0:
    // 0x4585e0: 0x8e450214  lw          $a1, 0x214($s2)
    ctx->pc = 0x4585e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_4585e4:
    // 0x4585e4: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x4585e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4585e8:
    // 0x4585e8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4585e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4585ec:
    // 0x4585ec: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4585ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4585f0:
    // 0x4585f0: 0x34840001  ori         $a0, $a0, 0x1
    ctx->pc = 0x4585f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
label_4585f4:
    // 0x4585f4: 0xae440214  sw          $a0, 0x214($s2)
    ctx->pc = 0x4585f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 4));
label_4585f8:
    // 0x4585f8: 0x8e64003c  lw          $a0, 0x3C($s3)
    ctx->pc = 0x4585f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4585fc:
    // 0x4585fc: 0xc4800068  lwc1        $f0, 0x68($a0)
    ctx->pc = 0x4585fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458600:
    // 0x458600: 0xe6600028  swc1        $f0, 0x28($s3)
    ctx->pc = 0x458600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
label_458604:
    // 0x458604: 0x100000ae  b           . + 4 + (0xAE << 2)
label_458608:
    if (ctx->pc == 0x458608u) {
        ctx->pc = 0x458608u;
            // 0x458608: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->pc = 0x45860Cu;
        goto label_45860c;
    }
    ctx->pc = 0x458604u;
    {
        const bool branch_taken_0x458604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458604u;
            // 0x458608: 0xae630034  sw          $v1, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458604) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x45860Cu;
label_45860c:
    // 0x45860c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x45860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_458610:
    // 0x458610: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x458610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_458614:
    // 0x458614: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x458614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_458618:
    // 0x458618: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x458618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_45861c:
    // 0x45861c: 0xc0b82c4  jal         func_2E0B10
label_458620:
    if (ctx->pc == 0x458620u) {
        ctx->pc = 0x458620u;
            // 0x458620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458624u;
        goto label_458624;
    }
    ctx->pc = 0x45861Cu;
    SET_GPR_U32(ctx, 31, 0x458624u);
    ctx->pc = 0x458620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45861Cu;
            // 0x458620: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458624u; }
        if (ctx->pc != 0x458624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458624u; }
        if (ctx->pc != 0x458624u) { return; }
    }
    ctx->pc = 0x458624u;
label_458624:
    // 0x458624: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x458624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_458628:
    // 0x458628: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x458628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_45862c:
    // 0x45862c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x45862cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458630:
    // 0x458630: 0x0  nop
    ctx->pc = 0x458630u;
    // NOP
label_458634:
    // 0x458634: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x458634u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_458638:
    // 0x458638: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_45863c:
    if (ctx->pc == 0x45863Cu) {
        ctx->pc = 0x45863Cu;
            // 0x45863c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x458640u;
        goto label_458640;
    }
    ctx->pc = 0x458638u;
    {
        const bool branch_taken_0x458638 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x45863Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458638u;
            // 0x45863c: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x458638) {
            ctx->pc = 0x458658u;
            goto label_458658;
        }
    }
    ctx->pc = 0x458640u;
label_458640:
    // 0x458640: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x458640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_458644:
    // 0x458644: 0x0  nop
    ctx->pc = 0x458644u;
    // NOP
label_458648:
    // 0x458648: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x458648u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_45864c:
    // 0x45864c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_458650:
    if (ctx->pc == 0x458650u) {
        ctx->pc = 0x458654u;
        goto label_458654;
    }
    ctx->pc = 0x45864Cu;
    {
        const bool branch_taken_0x45864c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x45864c) {
            ctx->pc = 0x458658u;
            goto label_458658;
        }
    }
    ctx->pc = 0x458654u;
label_458654:
    // 0x458654: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x458654u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_458658:
    // 0x458658: 0x5060002a  beql        $v1, $zero, . + 4 + (0x2A << 2)
label_45865c:
    if (ctx->pc == 0x45865Cu) {
        ctx->pc = 0x45865Cu;
            // 0x45865c: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->pc = 0x458660u;
        goto label_458660;
    }
    ctx->pc = 0x458658u;
    {
        const bool branch_taken_0x458658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x458658) {
            ctx->pc = 0x45865Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458658u;
            // 0x45865c: 0x8e620060  lw          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458704u;
            goto label_458704;
        }
    }
    ctx->pc = 0x458660u;
label_458660:
    // 0x458660: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x458660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_458664:
    // 0x458664: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x458664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458668:
    // 0x458668: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_45866c:
    if (ctx->pc == 0x45866Cu) {
        ctx->pc = 0x45866Cu;
            // 0x45866c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458670u;
        goto label_458670;
    }
    ctx->pc = 0x458668u;
    {
        const bool branch_taken_0x458668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458668) {
            ctx->pc = 0x45866Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458668u;
            // 0x45866c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45868Cu;
            goto label_45868c;
        }
    }
    ctx->pc = 0x458670u;
label_458670:
    // 0x458670: 0x8e440214  lw          $a0, 0x214($s2)
    ctx->pc = 0x458670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 532)));
label_458674:
    // 0x458674: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x458674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_458678:
    // 0x458678: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x458678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_45867c:
    // 0x45867c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x45867cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_458680:
    // 0x458680: 0xae430214  sw          $v1, 0x214($s2)
    ctx->pc = 0x458680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 532), GPR_U32(ctx, 3));
label_458684:
    // 0x458684: 0x10000007  b           . + 4 + (0x7 << 2)
label_458688:
    if (ctx->pc == 0x458688u) {
        ctx->pc = 0x458688u;
            // 0x458688: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->pc = 0x45868Cu;
        goto label_45868c;
    }
    ctx->pc = 0x458684u;
    {
        const bool branch_taken_0x458684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458684u;
            // 0x458688: 0xae620034  sw          $v0, 0x34($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458684) {
            ctx->pc = 0x4586A4u;
            goto label_4586a4;
        }
    }
    ctx->pc = 0x45868Cu;
label_45868c:
    // 0x45868c: 0xc0e7b78  jal         func_39EDE0
label_458690:
    if (ctx->pc == 0x458690u) {
        ctx->pc = 0x458694u;
        goto label_458694;
    }
    ctx->pc = 0x45868Cu;
    SET_GPR_U32(ctx, 31, 0x458694u);
    ctx->pc = 0x39EDE0u;
    if (runtime->hasFunction(0x39EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458694u; }
        if (ctx->pc != 0x458694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EDE0_0x39ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458694u; }
        if (ctx->pc != 0x458694u) { return; }
    }
    ctx->pc = 0x458694u;
label_458694:
    // 0x458694: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x458694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458698:
    // 0x458698: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x458698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45869c:
    // 0x45869c: 0xc0e7af4  jal         func_39EBD0
label_4586a0:
    if (ctx->pc == 0x4586A0u) {
        ctx->pc = 0x4586A0u;
            // 0x4586a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4586A4u;
        goto label_4586a4;
    }
    ctx->pc = 0x45869Cu;
    SET_GPR_U32(ctx, 31, 0x4586A4u);
    ctx->pc = 0x4586A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45869Cu;
            // 0x4586a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586A4u; }
        if (ctx->pc != 0x4586A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586A4u; }
        if (ctx->pc != 0x4586A4u) { return; }
    }
    ctx->pc = 0x4586A4u;
label_4586a4:
    // 0x4586a4: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x4586a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4586a8:
    // 0x4586a8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4586a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4586ac:
    // 0x4586ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4586acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4586b0:
    // 0x4586b0: 0xc44e0064  lwc1        $f14, 0x64($v0)
    ctx->pc = 0x4586b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4586b4:
    // 0x4586b4: 0xc04cbd8  jal         func_132F60
label_4586b8:
    if (ctx->pc == 0x4586B8u) {
        ctx->pc = 0x4586B8u;
            // 0x4586b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4586BCu;
        goto label_4586bc;
    }
    ctx->pc = 0x4586B4u;
    SET_GPR_U32(ctx, 31, 0x4586BCu);
    ctx->pc = 0x4586B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4586B4u;
            // 0x4586b8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586BCu; }
        if (ctx->pc != 0x4586BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586BCu; }
        if (ctx->pc != 0x4586BCu) { return; }
    }
    ctx->pc = 0x4586BCu;
label_4586bc:
    // 0x4586bc: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x4586bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4586c0:
    // 0x4586c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4586c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4586c4:
    // 0x4586c4: 0x26640010  addiu       $a0, $s3, 0x10
    ctx->pc = 0x4586c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_4586c8:
    // 0x4586c8: 0xc44e0064  lwc1        $f14, 0x64($v0)
    ctx->pc = 0x4586c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4586cc:
    // 0x4586cc: 0xc04cbd8  jal         func_132F60
label_4586d0:
    if (ctx->pc == 0x4586D0u) {
        ctx->pc = 0x4586D0u;
            // 0x4586d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4586D4u;
        goto label_4586d4;
    }
    ctx->pc = 0x4586CCu;
    SET_GPR_U32(ctx, 31, 0x4586D4u);
    ctx->pc = 0x4586D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4586CCu;
            // 0x4586d0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586D4u; }
        if (ctx->pc != 0x4586D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4586D4u; }
        if (ctx->pc != 0x4586D4u) { return; }
    }
    ctx->pc = 0x4586D4u;
label_4586d4:
    // 0x4586d4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4586d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4586d8:
    // 0x4586d8: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x4586d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_4586dc:
    // 0x4586dc: 0x8c64e3e0  lw          $a0, -0x1C20($v1)
    ctx->pc = 0x4586dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_4586e0:
    // 0x4586e0: 0xc4a10064  lwc1        $f1, 0x64($a1)
    ctx->pc = 0x4586e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4586e4:
    // 0x4586e4: 0xc482001c  lwc1        $f2, 0x1C($a0)
    ctx->pc = 0x4586e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4586e8:
    // 0x4586e8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4586e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4586ec:
    // 0x4586ec: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x4586ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4586f0:
    // 0x4586f0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4586f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4586f4:
    // 0x4586f4: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x4586f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4586f8:
    // 0x4586f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4586f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4586fc:
    // 0x4586fc: 0x1000001d  b           . + 4 + (0x1D << 2)
label_458700:
    if (ctx->pc == 0x458700u) {
        ctx->pc = 0x458700u;
            // 0x458700: 0xe6400154  swc1        $f0, 0x154($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
        ctx->pc = 0x458704u;
        goto label_458704;
    }
    ctx->pc = 0x4586FCu;
    {
        const bool branch_taken_0x4586fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x458700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4586FCu;
            // 0x458700: 0xe6400154  swc1        $f0, 0x154($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4586fc) {
            ctx->pc = 0x458774u;
            goto label_458774;
        }
    }
    ctx->pc = 0x458704u;
label_458704:
    // 0x458704: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x458704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_458708:
    // 0x458708: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x458708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_45870c:
    // 0x45870c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458710:
    if (ctx->pc == 0x458710u) {
        ctx->pc = 0x458714u;
        goto label_458714;
    }
    ctx->pc = 0x45870Cu;
    {
        const bool branch_taken_0x45870c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45870c) {
            ctx->pc = 0x45872Cu;
            goto label_45872c;
        }
    }
    ctx->pc = 0x458714u;
label_458714:
    // 0x458714: 0xc0e7b78  jal         func_39EDE0
label_458718:
    if (ctx->pc == 0x458718u) {
        ctx->pc = 0x458718u;
            // 0x458718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45871Cu;
        goto label_45871c;
    }
    ctx->pc = 0x458714u;
    SET_GPR_U32(ctx, 31, 0x45871Cu);
    ctx->pc = 0x458718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458714u;
            // 0x458718: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EDE0u;
    if (runtime->hasFunction(0x39EDE0u)) {
        auto targetFn = runtime->lookupFunction(0x39EDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45871Cu; }
        if (ctx->pc != 0x45871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EDE0_0x39ede0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45871Cu; }
        if (ctx->pc != 0x45871Cu) { return; }
    }
    ctx->pc = 0x45871Cu;
label_45871c:
    // 0x45871c: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x45871cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_458720:
    // 0x458720: 0xc44c0074  lwc1        $f12, 0x74($v0)
    ctx->pc = 0x458720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_458724:
    // 0x458724: 0xc0e7af4  jal         func_39EBD0
label_458728:
    if (ctx->pc == 0x458728u) {
        ctx->pc = 0x458728u;
            // 0x458728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45872Cu;
        goto label_45872c;
    }
    ctx->pc = 0x458724u;
    SET_GPR_U32(ctx, 31, 0x45872Cu);
    ctx->pc = 0x458728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458724u;
            // 0x458728: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39EBD0u;
    if (runtime->hasFunction(0x39EBD0u)) {
        auto targetFn = runtime->lookupFunction(0x39EBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45872Cu; }
        if (ctx->pc != 0x45872Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039EBD0_0x39ebd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45872Cu; }
        if (ctx->pc != 0x45872Cu) { return; }
    }
    ctx->pc = 0x45872Cu;
label_45872c:
    // 0x45872c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45872cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_458730:
    // 0x458730: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x458730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_458734:
    // 0x458734: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x458734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_458738:
    // 0x458738: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x458738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_45873c:
    // 0x45873c: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x45873cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_458740:
    // 0x458740: 0xc04cc7c  jal         func_1331F0
label_458744:
    if (ctx->pc == 0x458744u) {
        ctx->pc = 0x458744u;
            // 0x458744: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->pc = 0x458748u;
        goto label_458748;
    }
    ctx->pc = 0x458740u;
    SET_GPR_U32(ctx, 31, 0x458748u);
    ctx->pc = 0x458744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458740u;
            // 0x458744: 0x26660010  addiu       $a2, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458748u; }
        if (ctx->pc != 0x458748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458748u; }
        if (ctx->pc != 0x458748u) { return; }
    }
    ctx->pc = 0x458748u;
label_458748:
    // 0x458748: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x458748u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_45874c:
    // 0x45874c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x45874cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_458750:
    // 0x458750: 0x8c63e3e0  lw          $v1, -0x1C20($v1)
    ctx->pc = 0x458750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_458754:
    // 0x458754: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x458754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_458758:
    // 0x458758: 0xc475001c  lwc1        $f21, 0x1C($v1)
    ctx->pc = 0x458758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_45875c:
    // 0x45875c: 0xc4540018  lwc1        $f20, 0x18($v0)
    ctx->pc = 0x45875cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_458760:
    // 0x458760: 0xc04cc14  jal         func_133050
label_458764:
    if (ctx->pc == 0x458764u) {
        ctx->pc = 0x458764u;
            // 0x458764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458768u;
        goto label_458768;
    }
    ctx->pc = 0x458760u;
    SET_GPR_U32(ctx, 31, 0x458768u);
    ctx->pc = 0x458764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458760u;
            // 0x458764: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458768u; }
        if (ctx->pc != 0x458768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458768u; }
        if (ctx->pc != 0x458768u) { return; }
    }
    ctx->pc = 0x458768u;
label_458768:
    // 0x458768: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x458768u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_45876c:
    // 0x45876c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x45876cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_458770:
    // 0x458770: 0xe6400154  swc1        $f0, 0x154($s2)
    ctx->pc = 0x458770u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 340), bits); }
label_458774:
    // 0x458774: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x458774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458778:
    // 0x458778: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x458778u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45877c:
    // 0x45877c: 0x0  nop
    ctx->pc = 0x45877cu;
    // NOP
label_458780:
    // 0x458780: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x458780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_458784:
    // 0x458784: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_458788:
    if (ctx->pc == 0x458788u) {
        ctx->pc = 0x45878Cu;
        goto label_45878c;
    }
    ctx->pc = 0x458784u;
    {
        const bool branch_taken_0x458784 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x458784) {
            ctx->pc = 0x4587B4u;
            goto label_4587b4;
        }
    }
    ctx->pc = 0x45878Cu;
label_45878c:
    // 0x45878c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x45878cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_458790:
    // 0x458790: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x458790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_458794:
    // 0x458794: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x458794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458798:
    // 0x458798: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x458798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45879c:
    // 0x45879c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x45879cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4587a0:
    // 0x4587a0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x4587a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4587a4:
    // 0x4587a4: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_4587a8:
    if (ctx->pc == 0x4587A8u) {
        ctx->pc = 0x4587A8u;
            // 0x4587a8: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->pc = 0x4587ACu;
        goto label_4587ac;
    }
    ctx->pc = 0x4587A4u;
    {
        const bool branch_taken_0x4587a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4587A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4587A4u;
            // 0x4587a8: 0xe6600028  swc1        $f0, 0x28($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4587a4) {
            ctx->pc = 0x4587C8u;
            goto label_4587c8;
        }
    }
    ctx->pc = 0x4587ACu;
label_4587ac:
    // 0x4587ac: 0x10000006  b           . + 4 + (0x6 << 2)
label_4587b0:
    if (ctx->pc == 0x4587B0u) {
        ctx->pc = 0x4587B0u;
            // 0x4587b0: 0xe6620028  swc1        $f2, 0x28($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->pc = 0x4587B4u;
        goto label_4587b4;
    }
    ctx->pc = 0x4587ACu;
    {
        const bool branch_taken_0x4587ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4587B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4587ACu;
            // 0x4587b0: 0xe6620028  swc1        $f2, 0x28($s3) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4587ac) {
            ctx->pc = 0x4587C8u;
            goto label_4587c8;
        }
    }
    ctx->pc = 0x4587B4u;
label_4587b4:
    // 0x4587b4: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x4587b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4587b8:
    // 0x4587b8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4587bc:
    if (ctx->pc == 0x4587BCu) {
        ctx->pc = 0x4587C0u;
        goto label_4587c0;
    }
    ctx->pc = 0x4587B8u;
    {
        const bool branch_taken_0x4587b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4587b8) {
            ctx->pc = 0x4587C8u;
            goto label_4587c8;
        }
    }
    ctx->pc = 0x4587C0u;
label_4587c0:
    // 0x4587c0: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x4587c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_4587c4:
    // 0x4587c4: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x4587c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_4587c8:
    // 0x4587c8: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
label_4587cc:
    if (ctx->pc == 0x4587CCu) {
        ctx->pc = 0x4587D0u;
        goto label_4587d0;
    }
    ctx->pc = 0x4587C8u;
    {
        const bool branch_taken_0x4587c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4587c8) {
            ctx->pc = 0x4588C0u;
            goto label_4588c0;
        }
    }
    ctx->pc = 0x4587D0u;
label_4587d0:
    // 0x4587d0: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x4587d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_4587d4:
    // 0x4587d4: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x4587d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_4587d8:
    // 0x4587d8: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x4587d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_4587dc:
    // 0x4587dc: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x4587dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_4587e0:
    // 0x4587e0: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x4587e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_4587e4:
    // 0x4587e4: 0xc088b74  jal         func_222DD0
label_4587e8:
    if (ctx->pc == 0x4587E8u) {
        ctx->pc = 0x4587E8u;
            // 0x4587e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4587ECu;
        goto label_4587ec;
    }
    ctx->pc = 0x4587E4u;
    SET_GPR_U32(ctx, 31, 0x4587ECu);
    ctx->pc = 0x4587E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4587E4u;
            // 0x4587e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4587ECu; }
        if (ctx->pc != 0x4587ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4587ECu; }
        if (ctx->pc != 0x4587ECu) { return; }
    }
    ctx->pc = 0x4587ECu;
label_4587ec:
    // 0x4587ec: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4587ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4587f0:
    // 0x4587f0: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4587f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4587f4:
    // 0x4587f4: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4587f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4587f8:
    // 0x4587f8: 0x320f809  jalr        $t9
label_4587fc:
    if (ctx->pc == 0x4587FCu) {
        ctx->pc = 0x4587FCu;
            // 0x4587fc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x458800u;
        goto label_458800;
    }
    ctx->pc = 0x4587F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458800u);
        ctx->pc = 0x4587FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4587F8u;
            // 0x4587fc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458800u; }
            if (ctx->pc != 0x458800u) { return; }
        }
        }
    }
    ctx->pc = 0x458800u;
label_458800:
    // 0x458800: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x458800u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_458804:
    // 0x458804: 0x26640070  addiu       $a0, $s3, 0x70
    ctx->pc = 0x458804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 112));
label_458808:
    // 0x458808: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x458808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_45880c:
    // 0x45880c: 0xc0b7d3c  jal         func_2DF4F0
label_458810:
    if (ctx->pc == 0x458810u) {
        ctx->pc = 0x458810u;
            // 0x458810: 0x24c6e0e0  addiu       $a2, $a2, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959328));
        ctx->pc = 0x458814u;
        goto label_458814;
    }
    ctx->pc = 0x45880Cu;
    SET_GPR_U32(ctx, 31, 0x458814u);
    ctx->pc = 0x458810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45880Cu;
            // 0x458810: 0x24c6e0e0  addiu       $a2, $a2, -0x1F20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF4F0u;
    if (runtime->hasFunction(0x2DF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458814u; }
        if (ctx->pc != 0x458814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF4F0_0x2df4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458814u; }
        if (ctx->pc != 0x458814u) { return; }
    }
    ctx->pc = 0x458814u;
label_458814:
    // 0x458814: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x458814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_458818:
    // 0x458818: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x458818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_45881c:
    // 0x45881c: 0xc04cca0  jal         func_133280
label_458820:
    if (ctx->pc == 0x458820u) {
        ctx->pc = 0x458820u;
            // 0x458820: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458824u;
        goto label_458824;
    }
    ctx->pc = 0x45881Cu;
    SET_GPR_U32(ctx, 31, 0x458824u);
    ctx->pc = 0x458820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45881Cu;
            // 0x458820: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458824u; }
        if (ctx->pc != 0x458824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458824u; }
        if (ctx->pc != 0x458824u) { return; }
    }
    ctx->pc = 0x458824u;
label_458824:
    // 0x458824: 0x8e710024  lw          $s1, 0x24($s3)
    ctx->pc = 0x458824u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_458828:
    // 0x458828: 0xc7a00160  lwc1        $f0, 0x160($sp)
    ctx->pc = 0x458828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45882c:
    // 0x45882c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x45882cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_458830:
    // 0x458830: 0xc7a10164  lwc1        $f1, 0x164($sp)
    ctx->pc = 0x458830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_458834:
    // 0x458834: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x458834u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_458838:
    // 0x458838: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x458838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_45883c:
    // 0x45883c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x45883cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_458840:
    // 0x458840: 0xc7a00168  lwc1        $f0, 0x168($sp)
    ctx->pc = 0x458840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_458844:
    // 0x458844: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x458844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_458848:
    // 0x458848: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x458848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_45884c:
    // 0x45884c: 0xc6140020  lwc1        $f20, 0x20($s0)
    ctx->pc = 0x45884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_458850:
    // 0x458850: 0xc089638  jal         func_2258E0
label_458854:
    if (ctx->pc == 0x458854u) {
        ctx->pc = 0x458854u;
            // 0x458854: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->pc = 0x458858u;
        goto label_458858;
    }
    ctx->pc = 0x458850u;
    SET_GPR_U32(ctx, 31, 0x458858u);
    ctx->pc = 0x458854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458850u;
            // 0x458854: 0x262400a0  addiu       $a0, $s1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2258E0u;
    if (runtime->hasFunction(0x2258E0u)) {
        auto targetFn = runtime->lookupFunction(0x2258E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458858u; }
        if (ctx->pc != 0x458858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002258E0_0x2258e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458858u; }
        if (ctx->pc != 0x458858u) { return; }
    }
    ctx->pc = 0x458858u;
label_458858:
    // 0x458858: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x458858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_45885c:
    // 0x45885c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x45885cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_458860:
    // 0x458860: 0x46140102  mul.s       $f4, $f0, $f20
    ctx->pc = 0x458860u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_458864:
    // 0x458864: 0xc4450018  lwc1        $f5, 0x18($v0)
    ctx->pc = 0x458864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_458868:
    // 0x458868: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x458868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_45886c:
    // 0x45886c: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x45886cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_458870:
    // 0x458870: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x458870u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_458874:
    // 0x458874: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x458874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_458878:
    // 0x458878: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x458878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45887c:
    // 0x45887c: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x45887cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_458880:
    // 0x458880: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x458880u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_458884:
    // 0x458884: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x458884u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_458888:
    // 0x458888: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x458888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_45888c:
    // 0x45888c: 0xe7a30060  swc1        $f3, 0x60($sp)
    ctx->pc = 0x45888cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_458890:
    // 0x458890: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x458890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_458894:
    // 0x458894: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x458894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_458898:
    // 0x458898: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x458898u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_45889c:
    // 0x45889c: 0xc6140018  lwc1        $f20, 0x18($s0)
    ctx->pc = 0x45889cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4588a0:
    // 0x4588a0: 0xc088b74  jal         func_222DD0
label_4588a4:
    if (ctx->pc == 0x4588A4u) {
        ctx->pc = 0x4588A4u;
            // 0x4588a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4588A8u;
        goto label_4588a8;
    }
    ctx->pc = 0x4588A0u;
    SET_GPR_U32(ctx, 31, 0x4588A8u);
    ctx->pc = 0x4588A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4588A0u;
            // 0x4588a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4588A8u; }
        if (ctx->pc != 0x4588A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4588A8u; }
        if (ctx->pc != 0x4588A8u) { return; }
    }
    ctx->pc = 0x4588A8u;
label_4588a8:
    // 0x4588a8: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x4588a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_4588ac:
    // 0x4588ac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x4588acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_4588b0:
    // 0x4588b0: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x4588b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_4588b4:
    // 0x4588b4: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x4588b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_4588b8:
    // 0x4588b8: 0x320f809  jalr        $t9
label_4588bc:
    if (ctx->pc == 0x4588BCu) {
        ctx->pc = 0x4588BCu;
            // 0x4588bc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4588C0u;
        goto label_4588c0;
    }
    ctx->pc = 0x4588B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4588C0u);
        ctx->pc = 0x4588BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4588B8u;
            // 0x4588bc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4588C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4588C0u; }
            if (ctx->pc != 0x4588C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4588C0u;
label_4588c0:
    // 0x4588c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4588c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_4588c4:
    // 0x4588c4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x4588c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_4588c8:
    // 0x4588c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4588c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4588cc:
    // 0x4588cc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4588ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4588d0:
    // 0x4588d0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4588d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4588d4:
    // 0x4588d4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4588d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4588d8:
    // 0x4588d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4588d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4588dc:
    // 0x4588dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4588dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4588e0:
    // 0x4588e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4588e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4588e4:
    // 0x4588e4: 0x3e00008  jr          $ra
label_4588e8:
    if (ctx->pc == 0x4588E8u) {
        ctx->pc = 0x4588E8u;
            // 0x4588e8: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x4588ECu;
        goto label_4588ec;
    }
    ctx->pc = 0x4588E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4588E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4588E4u;
            // 0x4588e8: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4588ECu;
label_4588ec:
    // 0x4588ec: 0x0  nop
    ctx->pc = 0x4588ecu;
    // NOP
label_4588f0:
    // 0x4588f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4588f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4588f4:
    // 0x4588f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4588f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4588f8:
    // 0x4588f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4588f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4588fc:
    // 0x4588fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4588fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_458900:
    // 0x458900: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x458900u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_458904:
    // 0x458904: 0x1220008f  beqz        $s1, . + 4 + (0x8F << 2)
label_458908:
    if (ctx->pc == 0x458908u) {
        ctx->pc = 0x458908u;
            // 0x458908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45890Cu;
        goto label_45890c;
    }
    ctx->pc = 0x458904u;
    {
        const bool branch_taken_0x458904 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x458908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458904u;
            // 0x458908: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x458904) {
            ctx->pc = 0x458B44u;
            goto label_458b44;
        }
    }
    ctx->pc = 0x45890Cu;
label_45890c:
    // 0x45890c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x45890cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_458910:
    // 0x458910: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x458910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_458914:
    // 0x458914: 0x2463e240  addiu       $v1, $v1, -0x1DC0
    ctx->pc = 0x458914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959680));
label_458918:
    // 0x458918: 0x2442e278  addiu       $v0, $v0, -0x1D88
    ctx->pc = 0x458918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959736));
label_45891c:
    // 0x45891c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x45891cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_458920:
    // 0x458920: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x458920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_458924:
    // 0x458924: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x458924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_458928:
    // 0x458928: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x458928u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_45892c:
    // 0x45892c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_458930:
    if (ctx->pc == 0x458930u) {
        ctx->pc = 0x458930u;
            // 0x458930: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->pc = 0x458934u;
        goto label_458934;
    }
    ctx->pc = 0x45892Cu;
    {
        const bool branch_taken_0x45892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45892c) {
            ctx->pc = 0x458930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45892Cu;
            // 0x458930: 0x8e2400ac  lw          $a0, 0xAC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45896Cu;
            goto label_45896c;
        }
    }
    ctx->pc = 0x458934u;
label_458934:
    // 0x458934: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458934u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_458938:
    // 0x458938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x458938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_45893c:
    // 0x45893c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x45893cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458940:
    // 0x458940: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458940u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458944:
    // 0x458944: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458944u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458948:
    // 0x458948: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_45894c:
    if (ctx->pc == 0x45894Cu) {
        ctx->pc = 0x458950u;
        goto label_458950;
    }
    ctx->pc = 0x458948u;
    {
        const bool branch_taken_0x458948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458948) {
            ctx->pc = 0x458968u;
            goto label_458968;
        }
    }
    ctx->pc = 0x458950u;
label_458950:
    // 0x458950: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458954:
    if (ctx->pc == 0x458954u) {
        ctx->pc = 0x458958u;
        goto label_458958;
    }
    ctx->pc = 0x458950u;
    {
        const bool branch_taken_0x458950 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458950) {
            ctx->pc = 0x458968u;
            goto label_458968;
        }
    }
    ctx->pc = 0x458958u;
label_458958:
    // 0x458958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45895c:
    // 0x45895c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x45895cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458960:
    // 0x458960: 0x320f809  jalr        $t9
label_458964:
    if (ctx->pc == 0x458964u) {
        ctx->pc = 0x458964u;
            // 0x458964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458968u;
        goto label_458968;
    }
    ctx->pc = 0x458960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458968u);
        ctx->pc = 0x458964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458960u;
            // 0x458964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458968u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458968u; }
            if (ctx->pc != 0x458968u) { return; }
        }
        }
    }
    ctx->pc = 0x458968u;
label_458968:
    // 0x458968: 0x8e2400ac  lw          $a0, 0xAC($s1)
    ctx->pc = 0x458968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_45896c:
    // 0x45896c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x45896cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_458970:
    // 0x458970: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_458974:
    if (ctx->pc == 0x458974u) {
        ctx->pc = 0x458974u;
            // 0x458974: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->pc = 0x458978u;
        goto label_458978;
    }
    ctx->pc = 0x458970u;
    {
        const bool branch_taken_0x458970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458970) {
            ctx->pc = 0x458974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458970u;
            // 0x458974: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4589B0u;
            goto label_4589b0;
        }
    }
    ctx->pc = 0x458978u;
label_458978:
    // 0x458978: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458978u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_45897c:
    // 0x45897c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x45897cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_458980:
    // 0x458980: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x458980u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458984:
    // 0x458984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458988:
    // 0x458988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_45898c:
    // 0x45898c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458990:
    if (ctx->pc == 0x458990u) {
        ctx->pc = 0x458994u;
        goto label_458994;
    }
    ctx->pc = 0x45898Cu;
    {
        const bool branch_taken_0x45898c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x45898c) {
            ctx->pc = 0x4589ACu;
            goto label_4589ac;
        }
    }
    ctx->pc = 0x458994u;
label_458994:
    // 0x458994: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458998:
    if (ctx->pc == 0x458998u) {
        ctx->pc = 0x45899Cu;
        goto label_45899c;
    }
    ctx->pc = 0x458994u;
    {
        const bool branch_taken_0x458994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458994) {
            ctx->pc = 0x4589ACu;
            goto label_4589ac;
        }
    }
    ctx->pc = 0x45899Cu;
label_45899c:
    // 0x45899c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x45899cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4589a0:
    // 0x4589a0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4589a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4589a4:
    // 0x4589a4: 0x320f809  jalr        $t9
label_4589a8:
    if (ctx->pc == 0x4589A8u) {
        ctx->pc = 0x4589A8u;
            // 0x4589a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4589ACu;
        goto label_4589ac;
    }
    ctx->pc = 0x4589A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4589ACu);
        ctx->pc = 0x4589A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4589A4u;
            // 0x4589a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4589ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4589ACu; }
            if (ctx->pc != 0x4589ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4589ACu;
label_4589ac:
    // 0x4589ac: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4589acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4589b0:
    // 0x4589b0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4589b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4589b4:
    // 0x4589b4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4589b8:
    if (ctx->pc == 0x4589B8u) {
        ctx->pc = 0x4589B8u;
            // 0x4589b8: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->pc = 0x4589BCu;
        goto label_4589bc;
    }
    ctx->pc = 0x4589B4u;
    {
        const bool branch_taken_0x4589b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589b4) {
            ctx->pc = 0x4589B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4589B4u;
            // 0x4589b8: 0x8e2400b4  lw          $a0, 0xB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4589F4u;
            goto label_4589f4;
        }
    }
    ctx->pc = 0x4589BCu;
label_4589bc:
    // 0x4589bc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x4589bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_4589c0:
    // 0x4589c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4589c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4589c4:
    // 0x4589c4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x4589c4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_4589c8:
    // 0x4589c8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x4589c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_4589cc:
    // 0x4589cc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4589ccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4589d0:
    // 0x4589d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_4589d4:
    if (ctx->pc == 0x4589D4u) {
        ctx->pc = 0x4589D8u;
        goto label_4589d8;
    }
    ctx->pc = 0x4589D0u;
    {
        const bool branch_taken_0x4589d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4589d0) {
            ctx->pc = 0x4589F0u;
            goto label_4589f0;
        }
    }
    ctx->pc = 0x4589D8u;
label_4589d8:
    // 0x4589d8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_4589dc:
    if (ctx->pc == 0x4589DCu) {
        ctx->pc = 0x4589E0u;
        goto label_4589e0;
    }
    ctx->pc = 0x4589D8u;
    {
        const bool branch_taken_0x4589d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589d8) {
            ctx->pc = 0x4589F0u;
            goto label_4589f0;
        }
    }
    ctx->pc = 0x4589E0u;
label_4589e0:
    // 0x4589e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4589e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4589e4:
    // 0x4589e4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4589e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4589e8:
    // 0x4589e8: 0x320f809  jalr        $t9
label_4589ec:
    if (ctx->pc == 0x4589ECu) {
        ctx->pc = 0x4589ECu;
            // 0x4589ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4589F0u;
        goto label_4589f0;
    }
    ctx->pc = 0x4589E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4589F0u);
        ctx->pc = 0x4589ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4589E8u;
            // 0x4589ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4589F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4589F0u; }
            if (ctx->pc != 0x4589F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4589F0u;
label_4589f0:
    // 0x4589f0: 0x8e2400b4  lw          $a0, 0xB4($s1)
    ctx->pc = 0x4589f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 180)));
label_4589f4:
    // 0x4589f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x4589f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_4589f8:
    // 0x4589f8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4589fc:
    if (ctx->pc == 0x4589FCu) {
        ctx->pc = 0x4589FCu;
            // 0x4589fc: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->pc = 0x458A00u;
        goto label_458a00;
    }
    ctx->pc = 0x4589F8u;
    {
        const bool branch_taken_0x4589f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4589f8) {
            ctx->pc = 0x4589FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4589F8u;
            // 0x4589fc: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458A38u;
            goto label_458a38;
        }
    }
    ctx->pc = 0x458A00u;
label_458a00:
    // 0x458a00: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458a00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_458a04:
    // 0x458a04: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x458a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_458a08:
    // 0x458a08: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x458a08u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458a0c:
    // 0x458a0c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458a10:
    // 0x458a10: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458a10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458a14:
    // 0x458a14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458a18:
    if (ctx->pc == 0x458A18u) {
        ctx->pc = 0x458A1Cu;
        goto label_458a1c;
    }
    ctx->pc = 0x458A14u;
    {
        const bool branch_taken_0x458a14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458a14) {
            ctx->pc = 0x458A34u;
            goto label_458a34;
        }
    }
    ctx->pc = 0x458A1Cu;
label_458a1c:
    // 0x458a1c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458a20:
    if (ctx->pc == 0x458A20u) {
        ctx->pc = 0x458A24u;
        goto label_458a24;
    }
    ctx->pc = 0x458A1Cu;
    {
        const bool branch_taken_0x458a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a1c) {
            ctx->pc = 0x458A34u;
            goto label_458a34;
        }
    }
    ctx->pc = 0x458A24u;
label_458a24:
    // 0x458a24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458a24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458a28:
    // 0x458a28: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458a2c:
    // 0x458a2c: 0x320f809  jalr        $t9
label_458a30:
    if (ctx->pc == 0x458A30u) {
        ctx->pc = 0x458A30u;
            // 0x458a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458A34u;
        goto label_458a34;
    }
    ctx->pc = 0x458A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458A34u);
        ctx->pc = 0x458A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458A2Cu;
            // 0x458a30: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458A34u; }
            if (ctx->pc != 0x458A34u) { return; }
        }
        }
    }
    ctx->pc = 0x458A34u;
label_458a34:
    // 0x458a34: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x458a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_458a38:
    // 0x458a38: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x458a38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_458a3c:
    // 0x458a3c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_458a40:
    if (ctx->pc == 0x458A40u) {
        ctx->pc = 0x458A40u;
            // 0x458a40: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->pc = 0x458A44u;
        goto label_458a44;
    }
    ctx->pc = 0x458A3Cu;
    {
        const bool branch_taken_0x458a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a3c) {
            ctx->pc = 0x458A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458A3Cu;
            // 0x458a40: 0x8e2400bc  lw          $a0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458A7Cu;
            goto label_458a7c;
        }
    }
    ctx->pc = 0x458A44u;
label_458a44:
    // 0x458a44: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458a44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_458a48:
    // 0x458a48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x458a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_458a4c:
    // 0x458a4c: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x458a4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458a50:
    // 0x458a50: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458a50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458a54:
    // 0x458a54: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458a54u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458a58:
    // 0x458a58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458a5c:
    if (ctx->pc == 0x458A5Cu) {
        ctx->pc = 0x458A60u;
        goto label_458a60;
    }
    ctx->pc = 0x458A58u;
    {
        const bool branch_taken_0x458a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458a58) {
            ctx->pc = 0x458A78u;
            goto label_458a78;
        }
    }
    ctx->pc = 0x458A60u;
label_458a60:
    // 0x458a60: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458a64:
    if (ctx->pc == 0x458A64u) {
        ctx->pc = 0x458A68u;
        goto label_458a68;
    }
    ctx->pc = 0x458A60u;
    {
        const bool branch_taken_0x458a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a60) {
            ctx->pc = 0x458A78u;
            goto label_458a78;
        }
    }
    ctx->pc = 0x458A68u;
label_458a68:
    // 0x458a68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458a6c:
    // 0x458a6c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458a6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458a70:
    // 0x458a70: 0x320f809  jalr        $t9
label_458a74:
    if (ctx->pc == 0x458A74u) {
        ctx->pc = 0x458A74u;
            // 0x458a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458A78u;
        goto label_458a78;
    }
    ctx->pc = 0x458A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458A78u);
        ctx->pc = 0x458A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458A70u;
            // 0x458a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458A78u; }
            if (ctx->pc != 0x458A78u) { return; }
        }
        }
    }
    ctx->pc = 0x458A78u;
label_458a78:
    // 0x458a78: 0x8e2400bc  lw          $a0, 0xBC($s1)
    ctx->pc = 0x458a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_458a7c:
    // 0x458a7c: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x458a7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_458a80:
    // 0x458a80: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_458a84:
    if (ctx->pc == 0x458A84u) {
        ctx->pc = 0x458A84u;
            // 0x458a84: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->pc = 0x458A88u;
        goto label_458a88;
    }
    ctx->pc = 0x458A80u;
    {
        const bool branch_taken_0x458a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458a80) {
            ctx->pc = 0x458A84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458A80u;
            // 0x458a84: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458AC0u;
            goto label_458ac0;
        }
    }
    ctx->pc = 0x458A88u;
label_458a88:
    // 0x458a88: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458a88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_458a8c:
    // 0x458a8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x458a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_458a90:
    // 0x458a90: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x458a90u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458a94:
    // 0x458a94: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458a98:
    // 0x458a98: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458a98u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458a9c:
    // 0x458a9c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458aa0:
    if (ctx->pc == 0x458AA0u) {
        ctx->pc = 0x458AA4u;
        goto label_458aa4;
    }
    ctx->pc = 0x458A9Cu;
    {
        const bool branch_taken_0x458a9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458a9c) {
            ctx->pc = 0x458ABCu;
            goto label_458abc;
        }
    }
    ctx->pc = 0x458AA4u;
label_458aa4:
    // 0x458aa4: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458aa8:
    if (ctx->pc == 0x458AA8u) {
        ctx->pc = 0x458AACu;
        goto label_458aac;
    }
    ctx->pc = 0x458AA4u;
    {
        const bool branch_taken_0x458aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458aa4) {
            ctx->pc = 0x458ABCu;
            goto label_458abc;
        }
    }
    ctx->pc = 0x458AACu;
label_458aac:
    // 0x458aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458ab0:
    // 0x458ab0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458ab4:
    // 0x458ab4: 0x320f809  jalr        $t9
label_458ab8:
    if (ctx->pc == 0x458AB8u) {
        ctx->pc = 0x458AB8u;
            // 0x458ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458ABCu;
        goto label_458abc;
    }
    ctx->pc = 0x458AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458ABCu);
        ctx->pc = 0x458AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458AB4u;
            // 0x458ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458ABCu; }
            if (ctx->pc != 0x458ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x458ABCu;
label_458abc:
    // 0x458abc: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x458abcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_458ac0:
    // 0x458ac0: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x458ac0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_458ac4:
    // 0x458ac4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_458ac8:
    if (ctx->pc == 0x458AC8u) {
        ctx->pc = 0x458ACCu;
        goto label_458acc;
    }
    ctx->pc = 0x458AC4u;
    {
        const bool branch_taken_0x458ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ac4) {
            ctx->pc = 0x458B00u;
            goto label_458b00;
        }
    }
    ctx->pc = 0x458ACCu;
label_458acc:
    // 0x458acc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x458accu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
label_458ad0:
    // 0x458ad0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x458ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_458ad4:
    // 0x458ad4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x458ad4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
label_458ad8:
    // 0x458ad8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x458ad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_458adc:
    // 0x458adc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458adcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458ae0:
    // 0x458ae0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_458ae4:
    if (ctx->pc == 0x458AE4u) {
        ctx->pc = 0x458AE8u;
        goto label_458ae8;
    }
    ctx->pc = 0x458AE0u;
    {
        const bool branch_taken_0x458ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x458ae0) {
            ctx->pc = 0x458B00u;
            goto label_458b00;
        }
    }
    ctx->pc = 0x458AE8u;
label_458ae8:
    // 0x458ae8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_458aec:
    if (ctx->pc == 0x458AECu) {
        ctx->pc = 0x458AF0u;
        goto label_458af0;
    }
    ctx->pc = 0x458AE8u;
    {
        const bool branch_taken_0x458ae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x458ae8) {
            ctx->pc = 0x458B00u;
            goto label_458b00;
        }
    }
    ctx->pc = 0x458AF0u;
label_458af0:
    // 0x458af0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x458af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_458af4:
    // 0x458af4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x458af4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_458af8:
    // 0x458af8: 0x320f809  jalr        $t9
label_458afc:
    if (ctx->pc == 0x458AFCu) {
        ctx->pc = 0x458AFCu;
            // 0x458afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x458B00u;
        goto label_458b00;
    }
    ctx->pc = 0x458AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x458B00u);
        ctx->pc = 0x458AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458AF8u;
            // 0x458afc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x458B00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x458B00u; }
            if (ctx->pc != 0x458B00u) { return; }
        }
        }
    }
    ctx->pc = 0x458B00u;
label_458b00:
    // 0x458b00: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_458b04:
    if (ctx->pc == 0x458B04u) {
        ctx->pc = 0x458B04u;
            // 0x458b04: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x458B08u;
        goto label_458b08;
    }
    ctx->pc = 0x458B00u;
    {
        const bool branch_taken_0x458b00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x458b00) {
            ctx->pc = 0x458B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458B00u;
            // 0x458b04: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458B30u;
            goto label_458b30;
        }
    }
    ctx->pc = 0x458B08u;
label_458b08:
    // 0x458b08: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x458b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_458b0c:
    // 0x458b0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x458b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_458b10:
    // 0x458b10: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x458b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
label_458b14:
    // 0x458b14: 0x2442e3c8  addiu       $v0, $v0, -0x1C38
    ctx->pc = 0x458b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960072));
label_458b18:
    // 0x458b18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x458b18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_458b1c:
    // 0x458b1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x458b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_458b20:
    // 0x458b20: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x458b20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_458b24:
    // 0x458b24: 0xc1162d8  jal         func_458B60
label_458b28:
    if (ctx->pc == 0x458B28u) {
        ctx->pc = 0x458B28u;
            // 0x458b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458B2Cu;
        goto label_458b2c;
    }
    ctx->pc = 0x458B24u;
    SET_GPR_U32(ctx, 31, 0x458B2Cu);
    ctx->pc = 0x458B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458B24u;
            // 0x458b28: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x458B60u;
    if (runtime->hasFunction(0x458B60u)) {
        auto targetFn = runtime->lookupFunction(0x458B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458B2Cu; }
        if (ctx->pc != 0x458B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00458B60_0x458b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458B2Cu; }
        if (ctx->pc != 0x458B2Cu) { return; }
    }
    ctx->pc = 0x458B2Cu;
label_458b2c:
    // 0x458b2c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x458b2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_458b30:
    // 0x458b30: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x458b30u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_458b34:
    // 0x458b34: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_458b38:
    if (ctx->pc == 0x458B38u) {
        ctx->pc = 0x458B38u;
            // 0x458b38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458B3Cu;
        goto label_458b3c;
    }
    ctx->pc = 0x458B34u;
    {
        const bool branch_taken_0x458b34 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x458b34) {
            ctx->pc = 0x458B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x458B34u;
            // 0x458b38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x458B48u;
            goto label_458b48;
        }
    }
    ctx->pc = 0x458B3Cu;
label_458b3c:
    // 0x458b3c: 0xc0400a8  jal         func_1002A0
label_458b40:
    if (ctx->pc == 0x458B40u) {
        ctx->pc = 0x458B40u;
            // 0x458b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x458B44u;
        goto label_458b44;
    }
    ctx->pc = 0x458B3Cu;
    SET_GPR_U32(ctx, 31, 0x458B44u);
    ctx->pc = 0x458B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x458B3Cu;
            // 0x458b40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458B44u; }
        if (ctx->pc != 0x458B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x458B44u; }
        if (ctx->pc != 0x458B44u) { return; }
    }
    ctx->pc = 0x458B44u;
label_458b44:
    // 0x458b44: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x458b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_458b48:
    // 0x458b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x458b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_458b4c:
    // 0x458b4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x458b4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_458b50:
    // 0x458b50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x458b50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_458b54:
    // 0x458b54: 0x3e00008  jr          $ra
label_458b58:
    if (ctx->pc == 0x458B58u) {
        ctx->pc = 0x458B58u;
            // 0x458b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x458B5Cu;
        goto label_458b5c;
    }
    ctx->pc = 0x458B54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x458B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x458B54u;
            // 0x458b58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x458B5Cu;
label_458b5c:
    // 0x458b5c: 0x0  nop
    ctx->pc = 0x458b5cu;
    // NOP
}
