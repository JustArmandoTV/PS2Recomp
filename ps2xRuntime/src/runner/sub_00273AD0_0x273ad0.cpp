#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00273AD0
// Address: 0x273ad0 - 0x274240
void sub_00273AD0_0x273ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273AD0_0x273ad0");
#endif

    switch (ctx->pc) {
        case 0x273ad0u: goto label_273ad0;
        case 0x273ad4u: goto label_273ad4;
        case 0x273ad8u: goto label_273ad8;
        case 0x273adcu: goto label_273adc;
        case 0x273ae0u: goto label_273ae0;
        case 0x273ae4u: goto label_273ae4;
        case 0x273ae8u: goto label_273ae8;
        case 0x273aecu: goto label_273aec;
        case 0x273af0u: goto label_273af0;
        case 0x273af4u: goto label_273af4;
        case 0x273af8u: goto label_273af8;
        case 0x273afcu: goto label_273afc;
        case 0x273b00u: goto label_273b00;
        case 0x273b04u: goto label_273b04;
        case 0x273b08u: goto label_273b08;
        case 0x273b0cu: goto label_273b0c;
        case 0x273b10u: goto label_273b10;
        case 0x273b14u: goto label_273b14;
        case 0x273b18u: goto label_273b18;
        case 0x273b1cu: goto label_273b1c;
        case 0x273b20u: goto label_273b20;
        case 0x273b24u: goto label_273b24;
        case 0x273b28u: goto label_273b28;
        case 0x273b2cu: goto label_273b2c;
        case 0x273b30u: goto label_273b30;
        case 0x273b34u: goto label_273b34;
        case 0x273b38u: goto label_273b38;
        case 0x273b3cu: goto label_273b3c;
        case 0x273b40u: goto label_273b40;
        case 0x273b44u: goto label_273b44;
        case 0x273b48u: goto label_273b48;
        case 0x273b4cu: goto label_273b4c;
        case 0x273b50u: goto label_273b50;
        case 0x273b54u: goto label_273b54;
        case 0x273b58u: goto label_273b58;
        case 0x273b5cu: goto label_273b5c;
        case 0x273b60u: goto label_273b60;
        case 0x273b64u: goto label_273b64;
        case 0x273b68u: goto label_273b68;
        case 0x273b6cu: goto label_273b6c;
        case 0x273b70u: goto label_273b70;
        case 0x273b74u: goto label_273b74;
        case 0x273b78u: goto label_273b78;
        case 0x273b7cu: goto label_273b7c;
        case 0x273b80u: goto label_273b80;
        case 0x273b84u: goto label_273b84;
        case 0x273b88u: goto label_273b88;
        case 0x273b8cu: goto label_273b8c;
        case 0x273b90u: goto label_273b90;
        case 0x273b94u: goto label_273b94;
        case 0x273b98u: goto label_273b98;
        case 0x273b9cu: goto label_273b9c;
        case 0x273ba0u: goto label_273ba0;
        case 0x273ba4u: goto label_273ba4;
        case 0x273ba8u: goto label_273ba8;
        case 0x273bacu: goto label_273bac;
        case 0x273bb0u: goto label_273bb0;
        case 0x273bb4u: goto label_273bb4;
        case 0x273bb8u: goto label_273bb8;
        case 0x273bbcu: goto label_273bbc;
        case 0x273bc0u: goto label_273bc0;
        case 0x273bc4u: goto label_273bc4;
        case 0x273bc8u: goto label_273bc8;
        case 0x273bccu: goto label_273bcc;
        case 0x273bd0u: goto label_273bd0;
        case 0x273bd4u: goto label_273bd4;
        case 0x273bd8u: goto label_273bd8;
        case 0x273bdcu: goto label_273bdc;
        case 0x273be0u: goto label_273be0;
        case 0x273be4u: goto label_273be4;
        case 0x273be8u: goto label_273be8;
        case 0x273becu: goto label_273bec;
        case 0x273bf0u: goto label_273bf0;
        case 0x273bf4u: goto label_273bf4;
        case 0x273bf8u: goto label_273bf8;
        case 0x273bfcu: goto label_273bfc;
        case 0x273c00u: goto label_273c00;
        case 0x273c04u: goto label_273c04;
        case 0x273c08u: goto label_273c08;
        case 0x273c0cu: goto label_273c0c;
        case 0x273c10u: goto label_273c10;
        case 0x273c14u: goto label_273c14;
        case 0x273c18u: goto label_273c18;
        case 0x273c1cu: goto label_273c1c;
        case 0x273c20u: goto label_273c20;
        case 0x273c24u: goto label_273c24;
        case 0x273c28u: goto label_273c28;
        case 0x273c2cu: goto label_273c2c;
        case 0x273c30u: goto label_273c30;
        case 0x273c34u: goto label_273c34;
        case 0x273c38u: goto label_273c38;
        case 0x273c3cu: goto label_273c3c;
        case 0x273c40u: goto label_273c40;
        case 0x273c44u: goto label_273c44;
        case 0x273c48u: goto label_273c48;
        case 0x273c4cu: goto label_273c4c;
        case 0x273c50u: goto label_273c50;
        case 0x273c54u: goto label_273c54;
        case 0x273c58u: goto label_273c58;
        case 0x273c5cu: goto label_273c5c;
        case 0x273c60u: goto label_273c60;
        case 0x273c64u: goto label_273c64;
        case 0x273c68u: goto label_273c68;
        case 0x273c6cu: goto label_273c6c;
        case 0x273c70u: goto label_273c70;
        case 0x273c74u: goto label_273c74;
        case 0x273c78u: goto label_273c78;
        case 0x273c7cu: goto label_273c7c;
        case 0x273c80u: goto label_273c80;
        case 0x273c84u: goto label_273c84;
        case 0x273c88u: goto label_273c88;
        case 0x273c8cu: goto label_273c8c;
        case 0x273c90u: goto label_273c90;
        case 0x273c94u: goto label_273c94;
        case 0x273c98u: goto label_273c98;
        case 0x273c9cu: goto label_273c9c;
        case 0x273ca0u: goto label_273ca0;
        case 0x273ca4u: goto label_273ca4;
        case 0x273ca8u: goto label_273ca8;
        case 0x273cacu: goto label_273cac;
        case 0x273cb0u: goto label_273cb0;
        case 0x273cb4u: goto label_273cb4;
        case 0x273cb8u: goto label_273cb8;
        case 0x273cbcu: goto label_273cbc;
        case 0x273cc0u: goto label_273cc0;
        case 0x273cc4u: goto label_273cc4;
        case 0x273cc8u: goto label_273cc8;
        case 0x273cccu: goto label_273ccc;
        case 0x273cd0u: goto label_273cd0;
        case 0x273cd4u: goto label_273cd4;
        case 0x273cd8u: goto label_273cd8;
        case 0x273cdcu: goto label_273cdc;
        case 0x273ce0u: goto label_273ce0;
        case 0x273ce4u: goto label_273ce4;
        case 0x273ce8u: goto label_273ce8;
        case 0x273cecu: goto label_273cec;
        case 0x273cf0u: goto label_273cf0;
        case 0x273cf4u: goto label_273cf4;
        case 0x273cf8u: goto label_273cf8;
        case 0x273cfcu: goto label_273cfc;
        case 0x273d00u: goto label_273d00;
        case 0x273d04u: goto label_273d04;
        case 0x273d08u: goto label_273d08;
        case 0x273d0cu: goto label_273d0c;
        case 0x273d10u: goto label_273d10;
        case 0x273d14u: goto label_273d14;
        case 0x273d18u: goto label_273d18;
        case 0x273d1cu: goto label_273d1c;
        case 0x273d20u: goto label_273d20;
        case 0x273d24u: goto label_273d24;
        case 0x273d28u: goto label_273d28;
        case 0x273d2cu: goto label_273d2c;
        case 0x273d30u: goto label_273d30;
        case 0x273d34u: goto label_273d34;
        case 0x273d38u: goto label_273d38;
        case 0x273d3cu: goto label_273d3c;
        case 0x273d40u: goto label_273d40;
        case 0x273d44u: goto label_273d44;
        case 0x273d48u: goto label_273d48;
        case 0x273d4cu: goto label_273d4c;
        case 0x273d50u: goto label_273d50;
        case 0x273d54u: goto label_273d54;
        case 0x273d58u: goto label_273d58;
        case 0x273d5cu: goto label_273d5c;
        case 0x273d60u: goto label_273d60;
        case 0x273d64u: goto label_273d64;
        case 0x273d68u: goto label_273d68;
        case 0x273d6cu: goto label_273d6c;
        case 0x273d70u: goto label_273d70;
        case 0x273d74u: goto label_273d74;
        case 0x273d78u: goto label_273d78;
        case 0x273d7cu: goto label_273d7c;
        case 0x273d80u: goto label_273d80;
        case 0x273d84u: goto label_273d84;
        case 0x273d88u: goto label_273d88;
        case 0x273d8cu: goto label_273d8c;
        case 0x273d90u: goto label_273d90;
        case 0x273d94u: goto label_273d94;
        case 0x273d98u: goto label_273d98;
        case 0x273d9cu: goto label_273d9c;
        case 0x273da0u: goto label_273da0;
        case 0x273da4u: goto label_273da4;
        case 0x273da8u: goto label_273da8;
        case 0x273dacu: goto label_273dac;
        case 0x273db0u: goto label_273db0;
        case 0x273db4u: goto label_273db4;
        case 0x273db8u: goto label_273db8;
        case 0x273dbcu: goto label_273dbc;
        case 0x273dc0u: goto label_273dc0;
        case 0x273dc4u: goto label_273dc4;
        case 0x273dc8u: goto label_273dc8;
        case 0x273dccu: goto label_273dcc;
        case 0x273dd0u: goto label_273dd0;
        case 0x273dd4u: goto label_273dd4;
        case 0x273dd8u: goto label_273dd8;
        case 0x273ddcu: goto label_273ddc;
        case 0x273de0u: goto label_273de0;
        case 0x273de4u: goto label_273de4;
        case 0x273de8u: goto label_273de8;
        case 0x273decu: goto label_273dec;
        case 0x273df0u: goto label_273df0;
        case 0x273df4u: goto label_273df4;
        case 0x273df8u: goto label_273df8;
        case 0x273dfcu: goto label_273dfc;
        case 0x273e00u: goto label_273e00;
        case 0x273e04u: goto label_273e04;
        case 0x273e08u: goto label_273e08;
        case 0x273e0cu: goto label_273e0c;
        case 0x273e10u: goto label_273e10;
        case 0x273e14u: goto label_273e14;
        case 0x273e18u: goto label_273e18;
        case 0x273e1cu: goto label_273e1c;
        case 0x273e20u: goto label_273e20;
        case 0x273e24u: goto label_273e24;
        case 0x273e28u: goto label_273e28;
        case 0x273e2cu: goto label_273e2c;
        case 0x273e30u: goto label_273e30;
        case 0x273e34u: goto label_273e34;
        case 0x273e38u: goto label_273e38;
        case 0x273e3cu: goto label_273e3c;
        case 0x273e40u: goto label_273e40;
        case 0x273e44u: goto label_273e44;
        case 0x273e48u: goto label_273e48;
        case 0x273e4cu: goto label_273e4c;
        case 0x273e50u: goto label_273e50;
        case 0x273e54u: goto label_273e54;
        case 0x273e58u: goto label_273e58;
        case 0x273e5cu: goto label_273e5c;
        case 0x273e60u: goto label_273e60;
        case 0x273e64u: goto label_273e64;
        case 0x273e68u: goto label_273e68;
        case 0x273e6cu: goto label_273e6c;
        case 0x273e70u: goto label_273e70;
        case 0x273e74u: goto label_273e74;
        case 0x273e78u: goto label_273e78;
        case 0x273e7cu: goto label_273e7c;
        case 0x273e80u: goto label_273e80;
        case 0x273e84u: goto label_273e84;
        case 0x273e88u: goto label_273e88;
        case 0x273e8cu: goto label_273e8c;
        case 0x273e90u: goto label_273e90;
        case 0x273e94u: goto label_273e94;
        case 0x273e98u: goto label_273e98;
        case 0x273e9cu: goto label_273e9c;
        case 0x273ea0u: goto label_273ea0;
        case 0x273ea4u: goto label_273ea4;
        case 0x273ea8u: goto label_273ea8;
        case 0x273eacu: goto label_273eac;
        case 0x273eb0u: goto label_273eb0;
        case 0x273eb4u: goto label_273eb4;
        case 0x273eb8u: goto label_273eb8;
        case 0x273ebcu: goto label_273ebc;
        case 0x273ec0u: goto label_273ec0;
        case 0x273ec4u: goto label_273ec4;
        case 0x273ec8u: goto label_273ec8;
        case 0x273eccu: goto label_273ecc;
        case 0x273ed0u: goto label_273ed0;
        case 0x273ed4u: goto label_273ed4;
        case 0x273ed8u: goto label_273ed8;
        case 0x273edcu: goto label_273edc;
        case 0x273ee0u: goto label_273ee0;
        case 0x273ee4u: goto label_273ee4;
        case 0x273ee8u: goto label_273ee8;
        case 0x273eecu: goto label_273eec;
        case 0x273ef0u: goto label_273ef0;
        case 0x273ef4u: goto label_273ef4;
        case 0x273ef8u: goto label_273ef8;
        case 0x273efcu: goto label_273efc;
        case 0x273f00u: goto label_273f00;
        case 0x273f04u: goto label_273f04;
        case 0x273f08u: goto label_273f08;
        case 0x273f0cu: goto label_273f0c;
        case 0x273f10u: goto label_273f10;
        case 0x273f14u: goto label_273f14;
        case 0x273f18u: goto label_273f18;
        case 0x273f1cu: goto label_273f1c;
        case 0x273f20u: goto label_273f20;
        case 0x273f24u: goto label_273f24;
        case 0x273f28u: goto label_273f28;
        case 0x273f2cu: goto label_273f2c;
        case 0x273f30u: goto label_273f30;
        case 0x273f34u: goto label_273f34;
        case 0x273f38u: goto label_273f38;
        case 0x273f3cu: goto label_273f3c;
        case 0x273f40u: goto label_273f40;
        case 0x273f44u: goto label_273f44;
        case 0x273f48u: goto label_273f48;
        case 0x273f4cu: goto label_273f4c;
        case 0x273f50u: goto label_273f50;
        case 0x273f54u: goto label_273f54;
        case 0x273f58u: goto label_273f58;
        case 0x273f5cu: goto label_273f5c;
        case 0x273f60u: goto label_273f60;
        case 0x273f64u: goto label_273f64;
        case 0x273f68u: goto label_273f68;
        case 0x273f6cu: goto label_273f6c;
        case 0x273f70u: goto label_273f70;
        case 0x273f74u: goto label_273f74;
        case 0x273f78u: goto label_273f78;
        case 0x273f7cu: goto label_273f7c;
        case 0x273f80u: goto label_273f80;
        case 0x273f84u: goto label_273f84;
        case 0x273f88u: goto label_273f88;
        case 0x273f8cu: goto label_273f8c;
        case 0x273f90u: goto label_273f90;
        case 0x273f94u: goto label_273f94;
        case 0x273f98u: goto label_273f98;
        case 0x273f9cu: goto label_273f9c;
        case 0x273fa0u: goto label_273fa0;
        case 0x273fa4u: goto label_273fa4;
        case 0x273fa8u: goto label_273fa8;
        case 0x273facu: goto label_273fac;
        case 0x273fb0u: goto label_273fb0;
        case 0x273fb4u: goto label_273fb4;
        case 0x273fb8u: goto label_273fb8;
        case 0x273fbcu: goto label_273fbc;
        case 0x273fc0u: goto label_273fc0;
        case 0x273fc4u: goto label_273fc4;
        case 0x273fc8u: goto label_273fc8;
        case 0x273fccu: goto label_273fcc;
        case 0x273fd0u: goto label_273fd0;
        case 0x273fd4u: goto label_273fd4;
        case 0x273fd8u: goto label_273fd8;
        case 0x273fdcu: goto label_273fdc;
        case 0x273fe0u: goto label_273fe0;
        case 0x273fe4u: goto label_273fe4;
        case 0x273fe8u: goto label_273fe8;
        case 0x273fecu: goto label_273fec;
        case 0x273ff0u: goto label_273ff0;
        case 0x273ff4u: goto label_273ff4;
        case 0x273ff8u: goto label_273ff8;
        case 0x273ffcu: goto label_273ffc;
        case 0x274000u: goto label_274000;
        case 0x274004u: goto label_274004;
        case 0x274008u: goto label_274008;
        case 0x27400cu: goto label_27400c;
        case 0x274010u: goto label_274010;
        case 0x274014u: goto label_274014;
        case 0x274018u: goto label_274018;
        case 0x27401cu: goto label_27401c;
        case 0x274020u: goto label_274020;
        case 0x274024u: goto label_274024;
        case 0x274028u: goto label_274028;
        case 0x27402cu: goto label_27402c;
        case 0x274030u: goto label_274030;
        case 0x274034u: goto label_274034;
        case 0x274038u: goto label_274038;
        case 0x27403cu: goto label_27403c;
        case 0x274040u: goto label_274040;
        case 0x274044u: goto label_274044;
        case 0x274048u: goto label_274048;
        case 0x27404cu: goto label_27404c;
        case 0x274050u: goto label_274050;
        case 0x274054u: goto label_274054;
        case 0x274058u: goto label_274058;
        case 0x27405cu: goto label_27405c;
        case 0x274060u: goto label_274060;
        case 0x274064u: goto label_274064;
        case 0x274068u: goto label_274068;
        case 0x27406cu: goto label_27406c;
        case 0x274070u: goto label_274070;
        case 0x274074u: goto label_274074;
        case 0x274078u: goto label_274078;
        case 0x27407cu: goto label_27407c;
        case 0x274080u: goto label_274080;
        case 0x274084u: goto label_274084;
        case 0x274088u: goto label_274088;
        case 0x27408cu: goto label_27408c;
        case 0x274090u: goto label_274090;
        case 0x274094u: goto label_274094;
        case 0x274098u: goto label_274098;
        case 0x27409cu: goto label_27409c;
        case 0x2740a0u: goto label_2740a0;
        case 0x2740a4u: goto label_2740a4;
        case 0x2740a8u: goto label_2740a8;
        case 0x2740acu: goto label_2740ac;
        case 0x2740b0u: goto label_2740b0;
        case 0x2740b4u: goto label_2740b4;
        case 0x2740b8u: goto label_2740b8;
        case 0x2740bcu: goto label_2740bc;
        case 0x2740c0u: goto label_2740c0;
        case 0x2740c4u: goto label_2740c4;
        case 0x2740c8u: goto label_2740c8;
        case 0x2740ccu: goto label_2740cc;
        case 0x2740d0u: goto label_2740d0;
        case 0x2740d4u: goto label_2740d4;
        case 0x2740d8u: goto label_2740d8;
        case 0x2740dcu: goto label_2740dc;
        case 0x2740e0u: goto label_2740e0;
        case 0x2740e4u: goto label_2740e4;
        case 0x2740e8u: goto label_2740e8;
        case 0x2740ecu: goto label_2740ec;
        case 0x2740f0u: goto label_2740f0;
        case 0x2740f4u: goto label_2740f4;
        case 0x2740f8u: goto label_2740f8;
        case 0x2740fcu: goto label_2740fc;
        case 0x274100u: goto label_274100;
        case 0x274104u: goto label_274104;
        case 0x274108u: goto label_274108;
        case 0x27410cu: goto label_27410c;
        case 0x274110u: goto label_274110;
        case 0x274114u: goto label_274114;
        case 0x274118u: goto label_274118;
        case 0x27411cu: goto label_27411c;
        case 0x274120u: goto label_274120;
        case 0x274124u: goto label_274124;
        case 0x274128u: goto label_274128;
        case 0x27412cu: goto label_27412c;
        case 0x274130u: goto label_274130;
        case 0x274134u: goto label_274134;
        case 0x274138u: goto label_274138;
        case 0x27413cu: goto label_27413c;
        case 0x274140u: goto label_274140;
        case 0x274144u: goto label_274144;
        case 0x274148u: goto label_274148;
        case 0x27414cu: goto label_27414c;
        case 0x274150u: goto label_274150;
        case 0x274154u: goto label_274154;
        case 0x274158u: goto label_274158;
        case 0x27415cu: goto label_27415c;
        case 0x274160u: goto label_274160;
        case 0x274164u: goto label_274164;
        case 0x274168u: goto label_274168;
        case 0x27416cu: goto label_27416c;
        case 0x274170u: goto label_274170;
        case 0x274174u: goto label_274174;
        case 0x274178u: goto label_274178;
        case 0x27417cu: goto label_27417c;
        case 0x274180u: goto label_274180;
        case 0x274184u: goto label_274184;
        case 0x274188u: goto label_274188;
        case 0x27418cu: goto label_27418c;
        case 0x274190u: goto label_274190;
        case 0x274194u: goto label_274194;
        case 0x274198u: goto label_274198;
        case 0x27419cu: goto label_27419c;
        case 0x2741a0u: goto label_2741a0;
        case 0x2741a4u: goto label_2741a4;
        case 0x2741a8u: goto label_2741a8;
        case 0x2741acu: goto label_2741ac;
        case 0x2741b0u: goto label_2741b0;
        case 0x2741b4u: goto label_2741b4;
        case 0x2741b8u: goto label_2741b8;
        case 0x2741bcu: goto label_2741bc;
        case 0x2741c0u: goto label_2741c0;
        case 0x2741c4u: goto label_2741c4;
        case 0x2741c8u: goto label_2741c8;
        case 0x2741ccu: goto label_2741cc;
        case 0x2741d0u: goto label_2741d0;
        case 0x2741d4u: goto label_2741d4;
        case 0x2741d8u: goto label_2741d8;
        case 0x2741dcu: goto label_2741dc;
        case 0x2741e0u: goto label_2741e0;
        case 0x2741e4u: goto label_2741e4;
        case 0x2741e8u: goto label_2741e8;
        case 0x2741ecu: goto label_2741ec;
        case 0x2741f0u: goto label_2741f0;
        case 0x2741f4u: goto label_2741f4;
        case 0x2741f8u: goto label_2741f8;
        case 0x2741fcu: goto label_2741fc;
        case 0x274200u: goto label_274200;
        case 0x274204u: goto label_274204;
        case 0x274208u: goto label_274208;
        case 0x27420cu: goto label_27420c;
        case 0x274210u: goto label_274210;
        case 0x274214u: goto label_274214;
        case 0x274218u: goto label_274218;
        case 0x27421cu: goto label_27421c;
        case 0x274220u: goto label_274220;
        case 0x274224u: goto label_274224;
        case 0x274228u: goto label_274228;
        case 0x27422cu: goto label_27422c;
        case 0x274230u: goto label_274230;
        case 0x274234u: goto label_274234;
        case 0x274238u: goto label_274238;
        case 0x27423cu: goto label_27423c;
        default: break;
    }

    ctx->pc = 0x273ad0u;

label_273ad0:
    // 0x273ad0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x273ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_273ad4:
    // 0x273ad4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x273ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_273ad8:
    // 0x273ad8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x273ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_273adc:
    // 0x273adc: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x273adcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_273ae0:
    // 0x273ae0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x273ae0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_273ae4:
    // 0x273ae4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x273ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_273ae8:
    // 0x273ae8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x273ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_273aec:
    // 0x273aec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x273aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_273af0:
    // 0x273af0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x273af0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_273af4:
    // 0x273af4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x273af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_273af8:
    // 0x273af8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x273af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_273afc:
    // 0x273afc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x273afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_273b00:
    // 0x273b00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x273b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_273b04:
    // 0x273b04: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x273b04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_273b08:
    // 0x273b08: 0xafa400cc  sw          $a0, 0xCC($sp)
    ctx->pc = 0x273b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 4));
label_273b0c:
    // 0x273b0c: 0xafa700c4  sw          $a3, 0xC4($sp)
    ctx->pc = 0x273b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 7));
label_273b10:
    // 0x273b10: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x273b10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
label_273b14:
    // 0x273b14: 0xafa500c8  sw          $a1, 0xC8($sp)
    ctx->pc = 0x273b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
label_273b18:
    // 0x273b18: 0x8cb70008  lw          $s7, 0x8($a1)
    ctx->pc = 0x273b18u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_273b1c:
    // 0x273b1c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x273b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_273b20:
    // 0x273b20: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x273b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_273b24:
    // 0x273b24: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x273b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_273b28:
    // 0x273b28: 0x8fb000b0  lw          $s0, 0xB0($sp)
    ctx->pc = 0x273b28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_273b2c:
    // 0x273b2c: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x273b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_273b30:
    // 0x273b30: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x273b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_273b34:
    // 0x273b34: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x273b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_273b38:
    // 0x273b38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x273b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_273b3c:
    // 0x273b3c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x273b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_273b40:
    // 0x273b40: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x273b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_273b44:
    // 0x273b44: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x273b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273b48:
    // 0x273b48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x273b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_273b4c:
    // 0x273b4c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x273b4cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_273b50:
    // 0x273b50: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x273b50u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_273b54:
    // 0x273b54: 0x54082b  sltu        $at, $v0, $s4
    ctx->pc = 0x273b54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_273b58:
    // 0x273b58: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x273b58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273b5c:
    // 0x273b5c: 0x102000b8  beqz        $at, . + 4 + (0xB8 << 2)
label_273b60:
    if (ctx->pc == 0x273B60u) {
        ctx->pc = 0x273B60u;
            // 0x273b60: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273B64u;
        goto label_273b64;
    }
    ctx->pc = 0x273B5Cu;
    {
        const bool branch_taken_0x273b5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B5Cu;
            // 0x273b60: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b5c) {
            ctx->pc = 0x273E40u;
            goto label_273e40;
        }
    }
    ctx->pc = 0x273B64u;
label_273b64:
    // 0x273b64: 0x0  nop
    ctx->pc = 0x273b64u;
    // NOP
label_273b68:
    // 0x273b68: 0xc6a10064  lwc1        $f1, 0x64($s5)
    ctx->pc = 0x273b68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273b6c:
    // 0x273b6c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x273b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273b70:
    // 0x273b70: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x273b70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273b74:
    // 0x273b74: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_273b78:
    if (ctx->pc == 0x273B78u) {
        ctx->pc = 0x273B78u;
            // 0x273b78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273B7Cu;
        goto label_273b7c;
    }
    ctx->pc = 0x273B74u;
    {
        const bool branch_taken_0x273b74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B74u;
            // 0x273b78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b74) {
            ctx->pc = 0x273BA0u;
            goto label_273ba0;
        }
    }
    ctx->pc = 0x273B7Cu;
label_273b7c:
    // 0x273b7c: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x273b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273b80:
    // 0x273b80: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x273b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273b84:
    // 0x273b84: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x273b84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273b88:
    // 0x273b88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_273b8c:
    if (ctx->pc == 0x273B8Cu) {
        ctx->pc = 0x273B8Cu;
            // 0x273b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x273B90u;
        goto label_273b90;
    }
    ctx->pc = 0x273B88u;
    {
        const bool branch_taken_0x273b88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x273B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B88u;
            // 0x273b8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b88) {
            ctx->pc = 0x273B98u;
            goto label_273b98;
        }
    }
    ctx->pc = 0x273B90u;
label_273b90:
    // 0x273b90: 0x10000009  b           . + 4 + (0x9 << 2)
label_273b94:
    if (ctx->pc == 0x273B94u) {
        ctx->pc = 0x273B98u;
        goto label_273b98;
    }
    ctx->pc = 0x273B90u;
    {
        const bool branch_taken_0x273b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273b90) {
            ctx->pc = 0x273BB8u;
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273B98u;
label_273b98:
    // 0x273b98: 0x10000007  b           . + 4 + (0x7 << 2)
label_273b9c:
    if (ctx->pc == 0x273B9Cu) {
        ctx->pc = 0x273B9Cu;
            // 0x273b9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x273BA0u;
        goto label_273ba0;
    }
    ctx->pc = 0x273B98u;
    {
        const bool branch_taken_0x273b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273B98u;
            // 0x273b9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273b98) {
            ctx->pc = 0x273BB8u;
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273BA0u;
label_273ba0:
    // 0x273ba0: 0xc6a20068  lwc1        $f2, 0x68($s5)
    ctx->pc = 0x273ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273ba4:
    // 0x273ba4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x273ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273ba8:
    // 0x273ba8: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x273ba8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273bac:
    // 0x273bac: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_273bb0:
    if (ctx->pc == 0x273BB0u) {
        ctx->pc = 0x273BB4u;
        goto label_273bb4;
    }
    ctx->pc = 0x273BACu;
    {
        const bool branch_taken_0x273bac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273bac) {
            ctx->pc = 0x273BB8u;
            goto label_273bb8;
        }
    }
    ctx->pc = 0x273BB4u;
label_273bb4:
    // 0x273bb4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x273bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273bb8:
    // 0x273bb8: 0x1060005f  beqz        $v1, . + 4 + (0x5F << 2)
label_273bbc:
    if (ctx->pc == 0x273BBCu) {
        ctx->pc = 0x273BBCu;
            // 0x273bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x273BC0u;
        goto label_273bc0;
    }
    ctx->pc = 0x273BB8u;
    {
        const bool branch_taken_0x273bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BB8u;
            // 0x273bbc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bb8) {
            ctx->pc = 0x273D38u;
            goto label_273d38;
        }
    }
    ctx->pc = 0x273BC0u;
label_273bc0:
    // 0x273bc0: 0x10620031  beq         $v1, $v0, . + 4 + (0x31 << 2)
label_273bc4:
    if (ctx->pc == 0x273BC4u) {
        ctx->pc = 0x273BC8u;
        goto label_273bc8;
    }
    ctx->pc = 0x273BC0u;
    {
        const bool branch_taken_0x273bc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273bc0) {
            ctx->pc = 0x273C88u;
            goto label_273c88;
        }
    }
    ctx->pc = 0x273BC8u;
label_273bc8:
    // 0x273bc8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x273bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_273bcc:
    // 0x273bcc: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_273bd0:
    if (ctx->pc == 0x273BD0u) {
        ctx->pc = 0x273BD0u;
            // 0x273bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x273BD4u;
        goto label_273bd4;
    }
    ctx->pc = 0x273BCCu;
    {
        const bool branch_taken_0x273bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x273BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BCCu;
            // 0x273bd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bcc) {
            ctx->pc = 0x273BF0u;
            goto label_273bf0;
        }
    }
    ctx->pc = 0x273BD4u;
label_273bd4:
    // 0x273bd4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_273bd8:
    if (ctx->pc == 0x273BD8u) {
        ctx->pc = 0x273BDCu;
        goto label_273bdc;
    }
    ctx->pc = 0x273BD4u;
    {
        const bool branch_taken_0x273bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x273bd4) {
            ctx->pc = 0x273BE8u;
            goto label_273be8;
        }
    }
    ctx->pc = 0x273BDCu;
label_273bdc:
    // 0x273bdc: 0x10000094  b           . + 4 + (0x94 << 2)
label_273be0:
    if (ctx->pc == 0x273BE0u) {
        ctx->pc = 0x273BE4u;
        goto label_273be4;
    }
    ctx->pc = 0x273BDCu;
    {
        const bool branch_taken_0x273bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273bdc) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273BE4u;
label_273be4:
    // 0x273be4: 0x0  nop
    ctx->pc = 0x273be4u;
    // NOP
label_273be8:
    // 0x273be8: 0x10000091  b           . + 4 + (0x91 << 2)
label_273bec:
    if (ctx->pc == 0x273BECu) {
        ctx->pc = 0x273BECu;
            // 0x273bec: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x273BF0u;
        goto label_273bf0;
    }
    ctx->pc = 0x273BE8u;
    {
        const bool branch_taken_0x273be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BE8u;
            // 0x273bec: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273be8) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273BF0u;
label_273bf0:
    // 0x273bf0: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x273bf0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
label_273bf4:
    // 0x273bf4: 0x1213008e  beq         $s0, $s3, . + 4 + (0x8E << 2)
label_273bf8:
    if (ctx->pc == 0x273BF8u) {
        ctx->pc = 0x273BF8u;
            // 0x273bf8: 0x2694ffec  addiu       $s4, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->pc = 0x273BFCu;
        goto label_273bfc;
    }
    ctx->pc = 0x273BF4u;
    {
        const bool branch_taken_0x273bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x273BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273BF4u;
            // 0x273bf8: 0x2694ffec  addiu       $s4, $s4, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273bf4) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273BFCu;
label_273bfc:
    // 0x273bfc: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x273bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273c00:
    // 0x273c00: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x273c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_273c04:
    // 0x273c04: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x273c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273c08:
    // 0x273c08: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x273c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273c0c:
    // 0x273c0c: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x273c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273c10:
    // 0x273c10: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x273c10u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_273c14:
    // 0x273c14: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x273c14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_273c18:
    // 0x273c18: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x273c18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_273c1c:
    // 0x273c1c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x273c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_273c20:
    // 0x273c20: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x273c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273c24:
    // 0x273c24: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x273c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_273c28:
    // 0x273c28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x273c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_273c2c:
    // 0x273c2c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x273c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_273c30:
    // 0x273c30: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x273c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_273c34:
    // 0x273c34: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x273c34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_273c38:
    // 0x273c38: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x273c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273c3c:
    // 0x273c3c: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x273c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273c40:
    // 0x273c40: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x273c40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_273c44:
    // 0x273c44: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x273c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_273c48:
    // 0x273c48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x273c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_273c4c:
    // 0x273c4c: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x273c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_273c50:
    // 0x273c50: 0x8fa20160  lw          $v0, 0x160($sp)
    ctx->pc = 0x273c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_273c54:
    // 0x273c54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x273c54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_273c58:
    // 0x273c58: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x273c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_273c5c:
    // 0x273c5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273c60:
    // 0x273c60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x273c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_273c64:
    // 0x273c64: 0x27a20168  addiu       $v0, $sp, 0x168
    ctx->pc = 0x273c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_273c68:
    // 0x273c68: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x273c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273c6c:
    // 0x273c6c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273c70:
    // 0x273c70: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x273c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_273c74:
    // 0x273c74: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x273c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_273c78:
    // 0x273c78: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x273c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_273c7c:
    // 0x273c7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273c80:
    // 0x273c80: 0x1000006b  b           . + 4 + (0x6B << 2)
label_273c84:
    if (ctx->pc == 0x273C84u) {
        ctx->pc = 0x273C84u;
            // 0x273c84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x273C88u;
        goto label_273c88;
    }
    ctx->pc = 0x273C80u;
    {
        const bool branch_taken_0x273c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273C80u;
            // 0x273c84: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273c80) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273C88u;
label_273c88:
    // 0x273c88: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x273c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_273c8c:
    // 0x273c8c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x273c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_273c90:
    // 0x273c90: 0x8eb60060  lw          $s6, 0x60($s5)
    ctx->pc = 0x273c90u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_273c94:
    // 0x273c94: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x273c94u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
label_273c98:
    // 0x273c98: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x273c98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_273c9c:
    // 0x273c9c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x273c9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_273ca0:
    // 0x273ca0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273ca4:
    // 0x273ca4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x273ca4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_273ca8:
    // 0x273ca8: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x273ca8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_273cac:
    // 0x273cac: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x273cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_273cb0:
    // 0x273cb0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x273cb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_273cb4:
    // 0x273cb4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x273cb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273cb8:
    // 0x273cb8: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x273cb8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_273cbc:
    // 0x273cbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x273cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_273cc0:
    // 0x273cc0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x273cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_273cc4:
    // 0x273cc4: 0x320f809  jalr        $t9
label_273cc8:
    if (ctx->pc == 0x273CC8u) {
        ctx->pc = 0x273CC8u;
            // 0x273cc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x273CCCu;
        goto label_273ccc;
    }
    ctx->pc = 0x273CC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x273CCCu);
        ctx->pc = 0x273CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273CC4u;
            // 0x273cc8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x273CCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x273CCCu; }
            if (ctx->pc != 0x273CCCu) { return; }
        }
        }
    }
    ctx->pc = 0x273CCCu;
label_273ccc:
    // 0x273ccc: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x273cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273cd0:
    // 0x273cd0: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x273cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_273cd4:
    // 0x273cd4: 0x27a20154  addiu       $v0, $sp, 0x154
    ctx->pc = 0x273cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_273cd8:
    // 0x273cd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x273cd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_273cdc:
    // 0x273cdc: 0x4600a307  neg.s       $f12, $f20
    ctx->pc = 0x273cdcu;
    ctx->f[12] = FPU_NEG_S(ctx->f[20]);
label_273ce0:
    // 0x273ce0: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x273ce0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_273ce4:
    // 0x273ce4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273ce4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_273ce8:
    // 0x273ce8: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x273ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_273cec:
    // 0x273cec: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x273cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273cf0:
    // 0x273cf0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273cf0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_273cf4:
    // 0x273cf4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x273cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_273cf8:
    // 0x273cf8: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x273cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273cfc:
    // 0x273cfc: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x273cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_273d00:
    // 0x273d00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273d00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_273d04:
    // 0x273d04: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x273d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_273d08:
    // 0x273d08: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x273d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273d0c:
    // 0x273d0c: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x273d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_273d10:
    // 0x273d10: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x273d10u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_273d14:
    // 0x273d14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x273d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_273d18:
    // 0x273d18: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x273d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_273d1c:
    // 0x273d1c: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x273d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_273d20:
    // 0x273d20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x273d20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_273d24:
    // 0x273d24: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x273d24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_273d28:
    // 0x273d28: 0x320f809  jalr        $t9
label_273d2c:
    if (ctx->pc == 0x273D2Cu) {
        ctx->pc = 0x273D2Cu;
            // 0x273d2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273D30u;
        goto label_273d30;
    }
    ctx->pc = 0x273D28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x273D30u);
        ctx->pc = 0x273D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D28u;
            // 0x273d2c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x273D30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x273D30u; }
            if (ctx->pc != 0x273D30u) { return; }
        }
        }
    }
    ctx->pc = 0x273D30u;
label_273d30:
    // 0x273d30: 0x1000003f  b           . + 4 + (0x3F << 2)
label_273d34:
    if (ctx->pc == 0x273D34u) {
        ctx->pc = 0x273D34u;
            // 0x273d34: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->pc = 0x273D38u;
        goto label_273d38;
    }
    ctx->pc = 0x273D30u;
    {
        const bool branch_taken_0x273d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273D30u;
            // 0x273d34: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273d30) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273D38u;
label_273d38:
    // 0x273d38: 0x27a30130  addiu       $v1, $sp, 0x130
    ctx->pc = 0x273d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_273d3c:
    // 0x273d3c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x273d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273d40:
    // 0x273d40: 0x2694ffec  addiu       $s4, $s4, -0x14
    ctx->pc = 0x273d40u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967276));
label_273d44:
    // 0x273d44: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x273d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273d48:
    // 0x273d48: 0x27a20110  addiu       $v0, $sp, 0x110
    ctx->pc = 0x273d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_273d4c:
    // 0x273d4c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x273d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273d50:
    // 0x273d50: 0x2652ffec  addiu       $s2, $s2, -0x14
    ctx->pc = 0x273d50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967276));
label_273d54:
    // 0x273d54: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x273d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273d58:
    // 0x273d58: 0x2673ffec  addiu       $s3, $s3, -0x14
    ctx->pc = 0x273d58u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
label_273d5c:
    // 0x273d5c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x273d5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_273d60:
    // 0x273d60: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x273d60u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_273d64:
    // 0x273d64: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x273d64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_273d68:
    // 0x273d68: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x273d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_273d6c:
    // 0x273d6c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x273d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273d70:
    // 0x273d70: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x273d70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_273d74:
    // 0x273d74: 0xc6830000  lwc1        $f3, 0x0($s4)
    ctx->pc = 0x273d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273d78:
    // 0x273d78: 0xc6820004  lwc1        $f2, 0x4($s4)
    ctx->pc = 0x273d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273d7c:
    // 0x273d7c: 0xc6810008  lwc1        $f1, 0x8($s4)
    ctx->pc = 0x273d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273d80:
    // 0x273d80: 0xc680000c  lwc1        $f0, 0xC($s4)
    ctx->pc = 0x273d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273d84:
    // 0x273d84: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x273d84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_273d88:
    // 0x273d88: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x273d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_273d8c:
    // 0x273d8c: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x273d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_273d90:
    // 0x273d90: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x273d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_273d94:
    // 0x273d94: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x273d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273d98:
    // 0x273d98: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x273d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_273d9c:
    // 0x273d9c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x273d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_273da0:
    // 0x273da0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x273da0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_273da4:
    // 0x273da4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x273da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_273da8:
    // 0x273da8: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x273da8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_273dac:
    // 0x273dac: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x273dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273db0:
    // 0x273db0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x273db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273db4:
    // 0x273db4: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x273db4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_273db8:
    // 0x273db8: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x273db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_273dbc:
    // 0x273dbc: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x273dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_273dc0:
    // 0x273dc0: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x273dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_273dc4:
    // 0x273dc4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x273dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_273dc8:
    // 0x273dc8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x273dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_273dcc:
    // 0x273dcc: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x273dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_273dd0:
    // 0x273dd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273dd4:
    // 0x273dd4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x273dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_273dd8:
    // 0x273dd8: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x273dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_273ddc:
    // 0x273ddc: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x273ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273de0:
    // 0x273de0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273de4:
    // 0x273de4: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x273de4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_273de8:
    // 0x273de8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x273de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_273dec:
    // 0x273dec: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x273decu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_273df0:
    // 0x273df0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273df4:
    // 0x273df4: 0x1214000e  beq         $s0, $s4, . + 4 + (0xE << 2)
label_273df8:
    if (ctx->pc == 0x273DF8u) {
        ctx->pc = 0x273DF8u;
            // 0x273df8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x273DFCu;
        goto label_273dfc;
    }
    ctx->pc = 0x273DF4u;
    {
        const bool branch_taken_0x273df4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x273DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273DF4u;
            // 0x273df8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273df4) {
            ctx->pc = 0x273E30u;
            goto label_273e30;
        }
    }
    ctx->pc = 0x273DFCu;
label_273dfc:
    // 0x273dfc: 0x8fa20110  lw          $v0, 0x110($sp)
    ctx->pc = 0x273dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_273e00:
    // 0x273e00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x273e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_273e04:
    // 0x273e04: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x273e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_273e08:
    // 0x273e08: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273e0c:
    // 0x273e0c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x273e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_273e10:
    // 0x273e10: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x273e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_273e14:
    // 0x273e14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x273e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273e18:
    // 0x273e18: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x273e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273e1c:
    // 0x273e1c: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x273e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_273e20:
    // 0x273e20: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x273e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_273e24:
    // 0x273e24: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x273e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_273e28:
    // 0x273e28: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x273e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_273e2c:
    // 0x273e2c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x273e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_273e30:
    // 0x273e30: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x273e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_273e34:
    // 0x273e34: 0x1440ff4c  bnez        $v0, . + 4 + (-0xB4 << 2)
label_273e38:
    if (ctx->pc == 0x273E38u) {
        ctx->pc = 0x273E3Cu;
        goto label_273e3c;
    }
    ctx->pc = 0x273E34u;
    {
        const bool branch_taken_0x273e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273e34) {
            ctx->pc = 0x273B68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273b68;
        }
    }
    ctx->pc = 0x273E3Cu;
label_273e3c:
    // 0x273e3c: 0x0  nop
    ctx->pc = 0x273e3cu;
    // NOP
label_273e40:
    // 0x273e40: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x273e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_273e44:
    // 0x273e44: 0x2322023  subu        $a0, $s1, $s2
    ctx->pc = 0x273e44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_273e48:
    // 0x273e48: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x273e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_273e4c:
    // 0x273e4c: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x273e4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_273e50:
    // 0x273e50: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x273e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_273e54:
    // 0x273e54: 0x0  nop
    ctx->pc = 0x273e54u;
    // NOP
label_273e58:
    // 0x273e58: 0x1010  mfhi        $v0
    ctx->pc = 0x273e58u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_273e5c:
    // 0x273e5c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x273e5cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_273e60:
    // 0x273e60: 0x43b021  addu        $s6, $v0, $v1
    ctx->pc = 0x273e60u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_273e64:
    // 0x273e64: 0x12c0007e  beqz        $s6, . + 4 + (0x7E << 2)
label_273e68:
    if (ctx->pc == 0x273E68u) {
        ctx->pc = 0x273E68u;
            // 0x273e68: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273E6Cu;
        goto label_273e6c;
    }
    ctx->pc = 0x273E64u;
    {
        const bool branch_taken_0x273e64 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x273E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273E64u;
            // 0x273e68: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273e64) {
            ctx->pc = 0x274060u;
            goto label_274060;
        }
    }
    ctx->pc = 0x273E6Cu;
label_273e6c:
    // 0x273e6c: 0x8ea20060  lw          $v0, 0x60($s5)
    ctx->pc = 0x273e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
label_273e70:
    // 0x273e70: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x273e70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_273e74:
    // 0x273e74: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x273e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e78:
    // 0x273e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x273e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_273e7c:
    // 0x273e7c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x273e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_273e80:
    // 0x273e80: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_273e84:
    if (ctx->pc == 0x273E84u) {
        ctx->pc = 0x273E88u;
        goto label_273e88;
    }
    ctx->pc = 0x273E80u;
    {
        const bool branch_taken_0x273e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x273e80) {
            ctx->pc = 0x273EA8u;
            goto label_273ea8;
        }
    }
    ctx->pc = 0x273E88u;
label_273e88:
    // 0x273e88: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x273e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273e8c:
    // 0x273e8c: 0xc6a0000c  lwc1        $f0, 0xC($s5)
    ctx->pc = 0x273e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273e90:
    // 0x273e90: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x273e90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_273e94:
    // 0x273e94: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x273e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_273e98:
    // 0x273e98: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_273e9c:
    if (ctx->pc == 0x273E9Cu) {
        ctx->pc = 0x273EA0u;
        goto label_273ea0;
    }
    ctx->pc = 0x273E98u;
    {
        const bool branch_taken_0x273e98 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x273e98) {
            ctx->pc = 0x273EA8u;
            goto label_273ea8;
        }
    }
    ctx->pc = 0x273EA0u;
label_273ea0:
    // 0x273ea0: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x273ea0u;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_273ea4:
    // 0x273ea4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x273ea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_273ea8:
    // 0x273ea8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x273ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_273eac:
    // 0x273eac: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x273eacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_273eb0:
    // 0x273eb0: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_273eb4:
    if (ctx->pc == 0x273EB4u) {
        ctx->pc = 0x273EB4u;
            // 0x273eb4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->pc = 0x273EB8u;
        goto label_273eb8;
    }
    ctx->pc = 0x273EB0u;
    {
        const bool branch_taken_0x273eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x273EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273EB0u;
            // 0x273eb4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273eb0) {
            ctx->pc = 0x273E80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273e80;
        }
    }
    ctx->pc = 0x273EB8u;
label_273eb8:
    // 0x273eb8: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x273eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
label_273ebc:
    // 0x273ebc: 0x62940  sll         $a1, $a2, 5
    ctx->pc = 0x273ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
label_273ec0:
    // 0x273ec0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x273ec0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_273ec4:
    // 0x273ec4: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x273ec4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273ec8:
    // 0x273ec8: 0x27a90178  addiu       $t1, $sp, 0x178
    ctx->pc = 0x273ec8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_273ecc:
    // 0x273ecc: 0x27aa017c  addiu       $t2, $sp, 0x17C
    ctx->pc = 0x273eccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_273ed0:
    // 0x273ed0: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x273ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_273ed4:
    // 0x273ed4: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x273ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_273ed8:
    // 0x273ed8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x273ed8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_273edc:
    // 0x273edc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x273edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_273ee0:
    // 0x273ee0: 0x320f809  jalr        $t9
label_273ee4:
    if (ctx->pc == 0x273EE4u) {
        ctx->pc = 0x273EE4u;
            // 0x273ee4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x273EE8u;
        goto label_273ee8;
    }
    ctx->pc = 0x273EE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x273EE8u);
        ctx->pc = 0x273EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273EE0u;
            // 0x273ee4: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x273EE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x273EE8u; }
            if (ctx->pc != 0x273EE8u) { return; }
        }
        }
    }
    ctx->pc = 0x273EE8u;
label_273ee8:
    // 0x273ee8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x273ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_273eec:
    // 0x273eec: 0xc09d404  jal         func_275010
label_273ef0:
    if (ctx->pc == 0x273EF0u) {
        ctx->pc = 0x273EF0u;
            // 0x273ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x273EF4u;
        goto label_273ef4;
    }
    ctx->pc = 0x273EECu;
    SET_GPR_U32(ctx, 31, 0x273EF4u);
    ctx->pc = 0x273EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x273EECu;
            // 0x273ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x275010u;
    if (runtime->hasFunction(0x275010u)) {
        auto targetFn = runtime->lookupFunction(0x275010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EF4u; }
        if (ctx->pc != 0x273EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275010_0x275010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x273EF4u; }
        if (ctx->pc != 0x273EF4u) { return; }
    }
    ctx->pc = 0x273EF4u;
label_273ef4:
    // 0x273ef4: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_273ef8:
    if (ctx->pc == 0x273EF8u) {
        ctx->pc = 0x273EFCu;
        goto label_273efc;
    }
    ctx->pc = 0x273EF4u;
    {
        const bool branch_taken_0x273ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x273ef4) {
            ctx->pc = 0x274190u;
            goto label_274190;
        }
    }
    ctx->pc = 0x273EFCu;
label_273efc:
    // 0x273efc: 0x0  nop
    ctx->pc = 0x273efcu;
    // NOP
label_273f00:
    // 0x273f00: 0xc6e3c  dsll32      $t5, $t4, 24
    ctx->pc = 0x273f00u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) << (32 + 24));
label_273f04:
    // 0x273f04: 0x8fac00b0  lw          $t4, 0xB0($sp)
    ctx->pc = 0x273f04u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_273f08:
    // 0x273f08: 0xd6e3f  dsra32      $t5, $t5, 24
    ctx->pc = 0x273f08u;
    SET_GPR_S64(ctx, 13, GPR_S64(ctx, 13) >> (32 + 24));
label_273f0c:
    // 0x273f0c: 0x28c7023  subu        $t6, $s4, $t4
    ctx->pc = 0x273f0cu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 12)));
label_273f10:
    // 0x273f10: 0xae0018  mult        $zero, $a1, $t6
    ctx->pc = 0x273f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_273f14:
    // 0x273f14: 0x2136023  subu        $t4, $s0, $s3
    ctx->pc = 0x273f14u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_273f18:
    // 0x273f18: 0xeafc2  srl         $s5, $t6, 31
    ctx->pc = 0x273f18u;
    SET_GPR_S32(ctx, 21, (int32_t)SRL32(GPR_U32(ctx, 14), 31));
label_273f1c:
    // 0x273f1c: 0x7810  mfhi        $t7
    ctx->pc = 0x273f1cu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_273f20:
    // 0x273f20: 0xc77c2  srl         $t6, $t4, 31
    ctx->pc = 0x273f20u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_273f24:
    // 0x273f24: 0xac0018  mult        $zero, $a1, $t4
    ctx->pc = 0x273f24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_273f28:
    // 0x273f28: 0xf60c3  sra         $t4, $t7, 3
    ctx->pc = 0x273f28u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 15), 3));
label_273f2c:
    // 0x273f2c: 0x1957821  addu        $t7, $t4, $s5
    ctx->pc = 0x273f2cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 21)));
label_273f30:
    // 0x273f30: 0x6010  mfhi        $t4
    ctx->pc = 0x273f30u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_273f34:
    // 0x273f34: 0xc60c3  sra         $t4, $t4, 3
    ctx->pc = 0x273f34u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 3));
label_273f38:
    // 0x273f38: 0x11a00003  beqz        $t5, . + 4 + (0x3 << 2)
label_273f3c:
    if (ctx->pc == 0x273F3Cu) {
        ctx->pc = 0x273F3Cu;
            // 0x273f3c: 0x18e6021  addu        $t4, $t4, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
        ctx->pc = 0x273F40u;
        goto label_273f40;
    }
    ctx->pc = 0x273F38u;
    {
        const bool branch_taken_0x273f38 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F38u;
            // 0x273f3c: 0x18e6021  addu        $t4, $t4, $t6 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f38) {
            ctx->pc = 0x273F48u;
            goto label_273f48;
        }
    }
    ctx->pc = 0x273F40u;
label_273f40:
    // 0x273f40: 0x10000003  b           . + 4 + (0x3 << 2)
label_273f44:
    if (ctx->pc == 0x273F44u) {
        ctx->pc = 0x273F44u;
            // 0x273f44: 0xc6080  sll         $t4, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->pc = 0x273F48u;
        goto label_273f48;
    }
    ctx->pc = 0x273F40u;
    {
        const bool branch_taken_0x273f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x273F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x273F40u;
            // 0x273f44: 0xc6080  sll         $t4, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x273f40) {
            ctx->pc = 0x273F50u;
            goto label_273f50;
        }
    }
    ctx->pc = 0x273F48u;
label_273f48:
    // 0x273f48: 0xf7880  sll         $t7, $t7, 2
    ctx->pc = 0x273f48u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 2));
label_273f4c:
    // 0x273f4c: 0x0  nop
    ctx->pc = 0x273f4cu;
    // NOP
label_273f50:
    // 0x273f50: 0x1ec082a  slt         $at, $t7, $t4
    ctx->pc = 0x273f50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_273f54:
    // 0x273f54: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_273f58:
    if (ctx->pc == 0x273F58u) {
        ctx->pc = 0x273F5Cu;
        goto label_273f5c;
    }
    ctx->pc = 0x273F54u;
    {
        const bool branch_taken_0x273f54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x273f54) {
            ctx->pc = 0x274040u;
            goto label_274040;
        }
    }
    ctx->pc = 0x273F5Cu;
label_273f5c:
    // 0x273f5c: 0xc623ffec  lwc1        $f3, -0x14($s1)
    ctx->pc = 0x273f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273f60:
    // 0x273f60: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x273f60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_273f64:
    // 0x273f64: 0xc622fff0  lwc1        $f2, -0x10($s1)
    ctx->pc = 0x273f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273f68:
    // 0x273f68: 0x40602d  daddu       $t4, $v0, $zero
    ctx->pc = 0x273f68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_273f6c:
    // 0x273f6c: 0xc621fff4  lwc1        $f1, -0xC($s1)
    ctx->pc = 0x273f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273f70:
    // 0x273f70: 0xc620fff8  lwc1        $f0, -0x8($s1)
    ctx->pc = 0x273f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273f74:
    // 0x273f74: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x273f74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_273f78:
    // 0x273f78: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x273f78u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_273f7c:
    // 0x273f7c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x273f7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_273f80:
    // 0x273f80: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x273f80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_273f84:
    // 0x273f84: 0xc620fffc  lwc1        $f0, -0x4($s1)
    ctx->pc = 0x273f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273f88:
    // 0x273f88: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x273f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_273f8c:
    // 0x273f8c: 0x8e4d0000  lw          $t5, 0x0($s2)
    ctx->pc = 0x273f8cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_273f90:
    // 0x273f90: 0xae2dffec  sw          $t5, -0x14($s1)
    ctx->pc = 0x273f90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967276), GPR_U32(ctx, 13));
label_273f94:
    // 0x273f94: 0x8e4d0004  lw          $t5, 0x4($s2)
    ctx->pc = 0x273f94u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_273f98:
    // 0x273f98: 0xae2dfff0  sw          $t5, -0x10($s1)
    ctx->pc = 0x273f98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967280), GPR_U32(ctx, 13));
label_273f9c:
    // 0x273f9c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x273f9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273fa0:
    // 0x273fa0: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x273fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273fa4:
    // 0x273fa4: 0xe621fff4  swc1        $f1, -0xC($s1)
    ctx->pc = 0x273fa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967284), bits); }
label_273fa8:
    // 0x273fa8: 0xe620fff8  swc1        $f0, -0x8($s1)
    ctx->pc = 0x273fa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4294967288), bits); }
label_273fac:
    // 0x273fac: 0x8e4d0010  lw          $t5, 0x10($s2)
    ctx->pc = 0x273facu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_273fb0:
    // 0x273fb0: 0xae2dfffc  sw          $t5, -0x4($s1)
    ctx->pc = 0x273fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294967292), GPR_U32(ctx, 13));
label_273fb4:
    // 0x273fb4: 0xc6630000  lwc1        $f3, 0x0($s3)
    ctx->pc = 0x273fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_273fb8:
    // 0x273fb8: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x273fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_273fbc:
    // 0x273fbc: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x273fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273fc0:
    // 0x273fc0: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x273fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273fc4:
    // 0x273fc4: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x273fc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_273fc8:
    // 0x273fc8: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x273fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_273fcc:
    // 0x273fcc: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x273fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_273fd0:
    // 0x273fd0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x273fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_273fd4:
    // 0x273fd4: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x273fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273fd8:
    // 0x273fd8: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x273fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_273fdc:
    // 0x273fdc: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x273fdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_273fe0:
    // 0x273fe0: 0x8fad00f0  lw          $t5, 0xF0($sp)
    ctx->pc = 0x273fe0u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_273fe4:
    // 0x273fe4: 0xae8d0000  sw          $t5, 0x0($s4)
    ctx->pc = 0x273fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 13));
label_273fe8:
    // 0x273fe8: 0x8d6d0000  lw          $t5, 0x0($t3)
    ctx->pc = 0x273fe8u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_273fec:
    // 0x273fec: 0xae8d0004  sw          $t5, 0x4($s4)
    ctx->pc = 0x273fecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 13));
label_273ff0:
    // 0x273ff0: 0xc5410000  lwc1        $f1, 0x0($t2)
    ctx->pc = 0x273ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_273ff4:
    // 0x273ff4: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x273ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_273ff8:
    // 0x273ff8: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x273ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_273ffc:
    // 0x273ffc: 0xe680000c  swc1        $f0, 0xC($s4)
    ctx->pc = 0x273ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 12), bits); }
label_274000:
    // 0x274000: 0x8d2d0000  lw          $t5, 0x0($t1)
    ctx->pc = 0x274000u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_274004:
    // 0x274004: 0xae8d0010  sw          $t5, 0x10($s4)
    ctx->pc = 0x274004u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 13));
label_274008:
    // 0x274008: 0x8fad00d0  lw          $t5, 0xD0($sp)
    ctx->pc = 0x274008u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_27400c:
    // 0x27400c: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x27400cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_274010:
    // 0x274010: 0xae4d0000  sw          $t5, 0x0($s2)
    ctx->pc = 0x274010u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 13));
label_274014:
    // 0x274014: 0x8d0d0000  lw          $t5, 0x0($t0)
    ctx->pc = 0x274014u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_274018:
    // 0x274018: 0xae4d0004  sw          $t5, 0x4($s2)
    ctx->pc = 0x274018u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 13));
label_27401c:
    // 0x27401c: 0xc4e10000  lwc1        $f1, 0x0($a3)
    ctx->pc = 0x27401cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274020:
    // 0x274020: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x274020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274024:
    // 0x274024: 0xe6410008  swc1        $f1, 0x8($s2)
    ctx->pc = 0x274024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_274028:
    // 0x274028: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x274028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_27402c:
    // 0x27402c: 0x8ccd0000  lw          $t5, 0x0($a2)
    ctx->pc = 0x27402cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_274030:
    // 0x274030: 0xae4d0010  sw          $t5, 0x10($s2)
    ctx->pc = 0x274030u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 13));
label_274034:
    // 0x274034: 0x10000006  b           . + 4 + (0x6 << 2)
label_274038:
    if (ctx->pc == 0x274038u) {
        ctx->pc = 0x274038u;
            // 0x274038: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x27403Cu;
        goto label_27403c;
    }
    ctx->pc = 0x274034u;
    {
        const bool branch_taken_0x274034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274034u;
            // 0x274038: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274034) {
            ctx->pc = 0x274050u;
            goto label_274050;
        }
    }
    ctx->pc = 0x27403Cu;
label_27403c:
    // 0x27403c: 0x0  nop
    ctx->pc = 0x27403cu;
    // NOP
label_274040:
    // 0x274040: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x274040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_274044:
    // 0x274044: 0x26520014  addiu       $s2, $s2, 0x14
    ctx->pc = 0x274044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
label_274048:
    // 0x274048: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x274048u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27404c:
    // 0x27404c: 0x0  nop
    ctx->pc = 0x27404cu;
    // NOP
label_274050:
    // 0x274050: 0x251682b  sltu        $t5, $s2, $s1
    ctx->pc = 0x274050u;
    SET_GPR_U64(ctx, 13, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_274054:
    // 0x274054: 0x15a0ffaa  bnez        $t5, . + 4 + (-0x56 << 2)
label_274058:
    if (ctx->pc == 0x274058u) {
        ctx->pc = 0x27405Cu;
        goto label_27405c;
    }
    ctx->pc = 0x274054u;
    {
        const bool branch_taken_0x274054 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        if (branch_taken_0x274054) {
            ctx->pc = 0x273F00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_273f00;
        }
    }
    ctx->pc = 0x27405Cu;
label_27405c:
    // 0x27405c: 0x0  nop
    ctx->pc = 0x27405cu;
    // NOP
label_274060:
    // 0x274060: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_274064:
    // 0x274064: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x274064u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_274068:
    // 0x274068: 0x0  nop
    ctx->pc = 0x274068u;
    // NOP
label_27406c:
    // 0x27406c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x27406cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_274070:
    // 0x274070: 0x2822023  subu        $a0, $s4, $v0
    ctx->pc = 0x274070u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_274074:
    // 0x274074: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x274074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_274078:
    // 0x274078: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x274078u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_27407c:
    // 0x27407c: 0x34426667  ori         $v0, $v0, 0x6667
    ctx->pc = 0x27407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_274080:
    // 0x274080: 0x440018  mult        $zero, $v0, $a0
    ctx->pc = 0x274080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_274084:
    // 0x274084: 0x0  nop
    ctx->pc = 0x274084u;
    // NOP
label_274088:
    // 0x274088: 0x0  nop
    ctx->pc = 0x274088u;
    // NOP
label_27408c:
    // 0x27408c: 0x1010  mfhi        $v0
    ctx->pc = 0x27408cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_274090:
    // 0x274090: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x274090u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_274094:
    // 0x274094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x274094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_274098:
    // 0x274098: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x274098u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_27409c:
    // 0x27409c: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x27409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_2740a0:
    // 0x2740a0: 0xc7c20004  lwc1        $f2, 0x4($fp)
    ctx->pc = 0x2740a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2740a4:
    // 0x2740a4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2740a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2740a8:
    // 0x2740a8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2740a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_2740ac:
    // 0x2740ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2740acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2740b0:
    // 0x2740b0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2740b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2740b4:
    // 0x2740b4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x2740b4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_2740b8:
    // 0x2740b8: 0x0  nop
    ctx->pc = 0x2740b8u;
    // NOP
label_2740bc:
    // 0x2740bc: 0x0  nop
    ctx->pc = 0x2740bcu;
    // NOP
label_2740c0:
    // 0x2740c0: 0xc0a32a0  jal         func_28CA80
label_2740c4:
    if (ctx->pc == 0x2740C4u) {
        ctx->pc = 0x2740C8u;
        goto label_2740c8;
    }
    ctx->pc = 0x2740C0u;
    SET_GPR_U32(ctx, 31, 0x2740C8u);
    ctx->pc = 0x28CA80u;
    if (runtime->hasFunction(0x28CA80u)) {
        auto targetFn = runtime->lookupFunction(0x28CA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740C8u; }
        if (ctx->pc != 0x2740C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CA80_0x28ca80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2740C8u; }
        if (ctx->pc != 0x2740C8u) { return; }
    }
    ctx->pc = 0x2740C8u;
label_2740c8:
    // 0x2740c8: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x2740c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
label_2740cc:
    // 0x2740cc: 0x2132823  subu        $a1, $s0, $s3
    ctx->pc = 0x2740ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_2740d0:
    // 0x2740d0: 0x34636667  ori         $v1, $v1, 0x6667
    ctx->pc = 0x2740d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
label_2740d4:
    // 0x2740d4: 0x527c2  srl         $a0, $a1, 31
    ctx->pc = 0x2740d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
label_2740d8:
    // 0x2740d8: 0x650018  mult        $zero, $v1, $a1
    ctx->pc = 0x2740d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2740dc:
    // 0x2740dc: 0xafc20008  sw          $v0, 0x8($fp)
    ctx->pc = 0x2740dcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 2));
label_2740e0:
    // 0x2740e0: 0x0  nop
    ctx->pc = 0x2740e0u;
    // NOP
label_2740e4:
    // 0x2740e4: 0x1810  mfhi        $v1
    ctx->pc = 0x2740e4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2740e8:
    // 0x2740e8: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2740e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2740ec:
    // 0x2740ec: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2740ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2740f0:
    // 0x2740f0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2740f4:
    // 0x2740f4: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x2740f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_2740f8:
    // 0x2740f8: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2740f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2740fc:
    // 0x2740fc: 0x2e32023  subu        $a0, $s7, $v1
    ctx->pc = 0x2740fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_274100:
    // 0x274100: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x274100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_274104:
    // 0x274104: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x274104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_274108:
    // 0x274108: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x274108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_27410c:
    // 0x27410c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x27410cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_274110:
    // 0x274110: 0x8fc40008  lw          $a0, 0x8($fp)
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_274114:
    // 0x274114: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_274118:
    // 0x274118: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x274118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27411c:
    // 0x27411c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x27411cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_274120:
    // 0x274120: 0x2832021  addu        $a0, $s4, $v1
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_274124:
    // 0x274124: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x274124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_274128:
    // 0x274128: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x274128u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_27412c:
    // 0x27412c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27412cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_274130:
    // 0x274130: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x274130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_274134:
    // 0x274134: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
label_274138:
    if (ctx->pc == 0x274138u) {
        ctx->pc = 0x27413Cu;
        goto label_27413c;
    }
    ctx->pc = 0x274134u;
    {
        const bool branch_taken_0x274134 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x274134) {
            ctx->pc = 0x274188u;
            goto label_274188;
        }
    }
    ctx->pc = 0x27413Cu;
label_27413c:
    // 0x27413c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x27413cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_274140:
    // 0x274140: 0x270082b  sltu        $at, $s3, $s0
    ctx->pc = 0x274140u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_274144:
    // 0x274144: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_274148:
    if (ctx->pc == 0x274148u) {
        ctx->pc = 0x274148u;
            // 0x274148: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x27414Cu;
        goto label_27414c;
    }
    ctx->pc = 0x274144u;
    {
        const bool branch_taken_0x274144 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x274148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274144u;
            // 0x274148: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274144) {
            ctx->pc = 0x274188u;
            goto label_274188;
        }
    }
    ctx->pc = 0x27414Cu;
label_27414c:
    // 0x27414c: 0x0  nop
    ctx->pc = 0x27414cu;
    // NOP
label_274150:
    // 0x274150: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_274154:
    // 0x274154: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x274154u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_274158:
    // 0x274158: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x274158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_27415c:
    // 0x27415c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x27415cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_274160:
    // 0x274160: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x274160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_274164:
    // 0x274164: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x274164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_274168:
    // 0x274168: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x274168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27416c:
    // 0x27416c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x27416cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_274170:
    // 0x274170: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_274174:
    // 0x274174: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x274174u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
label_274178:
    // 0x274178: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x274178u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_27417c:
    // 0x27417c: 0x270182b  sltu        $v1, $s3, $s0
    ctx->pc = 0x27417cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_274180:
    // 0x274180: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_274184:
    if (ctx->pc == 0x274184u) {
        ctx->pc = 0x274184u;
            // 0x274184: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->pc = 0x274188u;
        goto label_274188;
    }
    ctx->pc = 0x274180u;
    {
        const bool branch_taken_0x274180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x274184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274180u;
            // 0x274184: 0x24840014  addiu       $a0, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274180) {
            ctx->pc = 0x274150u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274150;
        }
    }
    ctx->pc = 0x274188u;
label_274188:
    // 0x274188: 0x1000001d  b           . + 4 + (0x1D << 2)
label_27418c:
    if (ctx->pc == 0x27418Cu) {
        ctx->pc = 0x274190u;
        goto label_274190;
    }
    ctx->pc = 0x274188u;
    {
        const bool branch_taken_0x274188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x274188) {
            ctx->pc = 0x274200u;
            goto label_274200;
        }
    }
    ctx->pc = 0x274190u;
label_274190:
    // 0x274190: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x274190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_274194:
    // 0x274194: 0x2536023  subu        $t4, $s2, $s3
    ctx->pc = 0x274194u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_274198:
    // 0x274198: 0x27ab00f4  addiu       $t3, $sp, 0xF4
    ctx->pc = 0x274198u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_27419c:
    // 0x27419c: 0xc6fc2  srl         $t5, $t4, 31
    ctx->pc = 0x27419cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 12), 31));
label_2741a0:
    // 0x2741a0: 0x27aa00f8  addiu       $t2, $sp, 0xF8
    ctx->pc = 0x2741a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
label_2741a4:
    // 0x2741a4: 0x27a90100  addiu       $t1, $sp, 0x100
    ctx->pc = 0x2741a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2741a8:
    // 0x2741a8: 0x27a800d4  addiu       $t0, $sp, 0xD4
    ctx->pc = 0x2741a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2741ac:
    // 0x2741ac: 0x27a700d8  addiu       $a3, $sp, 0xD8
    ctx->pc = 0x2741acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_2741b0:
    // 0x2741b0: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x2741b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2741b4:
    // 0x2741b4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2741b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2741b8:
    // 0x2741b8: 0x2821823  subu        $v1, $s4, $v0
    ctx->pc = 0x2741b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_2741bc:
    // 0x2741bc: 0x3c026666  lui         $v0, 0x6666
    ctx->pc = 0x2741bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26214 << 16));
label_2741c0:
    // 0x2741c0: 0x37fc2  srl         $t7, $v1, 31
    ctx->pc = 0x2741c0u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_2741c4:
    // 0x2741c4: 0x34456667  ori         $a1, $v0, 0x6667
    ctx->pc = 0x2741c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26215);
label_2741c8:
    // 0x2741c8: 0xa30018  mult        $zero, $a1, $v1
    ctx->pc = 0x2741c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2741cc:
    // 0x2741cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2741ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2741d0:
    // 0x2741d0: 0x0  nop
    ctx->pc = 0x2741d0u;
    // NOP
label_2741d4:
    // 0x2741d4: 0x7010  mfhi        $t6
    ctx->pc = 0x2741d4u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_2741d8:
    // 0x2741d8: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x2741d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2741dc:
    // 0x2741dc: 0xac0018  mult        $zero, $a1, $t4
    ctx->pc = 0x2741dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2741e0:
    // 0x2741e0: 0xe60c3  sra         $t4, $t6, 3
    ctx->pc = 0x2741e0u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 14), 3));
label_2741e4:
    // 0x2741e4: 0x18f7021  addu        $t6, $t4, $t7
    ctx->pc = 0x2741e4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 15)));
label_2741e8:
    // 0x2741e8: 0x6010  mfhi        $t4
    ctx->pc = 0x2741e8u;
    SET_GPR_U64(ctx, 12, ctx->hi);
label_2741ec:
    // 0x2741ec: 0xc60c3  sra         $t4, $t4, 3
    ctx->pc = 0x2741ecu;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 12), 3));
label_2741f0:
    // 0x2741f0: 0x18d6021  addu        $t4, $t4, $t5
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 13)));
label_2741f4:
    // 0x2741f4: 0x1000ff96  b           . + 4 + (-0x6A << 2)
label_2741f8:
    if (ctx->pc == 0x2741F8u) {
        ctx->pc = 0x2741F8u;
            // 0x2741f8: 0x1cc602a  slt         $t4, $t6, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->pc = 0x2741FCu;
        goto label_2741fc;
    }
    ctx->pc = 0x2741F4u;
    {
        const bool branch_taken_0x2741f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2741F4u;
            // 0x2741f8: 0x1cc602a  slt         $t4, $t6, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 12, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741f4) {
            ctx->pc = 0x274050u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_274050;
        }
    }
    ctx->pc = 0x2741FCu;
label_2741fc:
    // 0x2741fc: 0x0  nop
    ctx->pc = 0x2741fcu;
    // NOP
label_274200:
    // 0x274200: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x274200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_274204:
    // 0x274204: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x274204u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_274208:
    // 0x274208: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x274208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27420c:
    // 0x27420c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x27420cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_274210:
    // 0x274210: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x274210u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_274214:
    // 0x274214: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x274214u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_274218:
    // 0x274218: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x274218u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_27421c:
    // 0x27421c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x27421cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_274220:
    // 0x274220: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x274220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_274224:
    // 0x274224: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x274224u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_274228:
    // 0x274228: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x274228u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27422c:
    // 0x27422c: 0x3e00008  jr          $ra
label_274230:
    if (ctx->pc == 0x274230u) {
        ctx->pc = 0x274230u;
            // 0x274230: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x274234u;
        goto label_274234;
    }
    ctx->pc = 0x27422Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27422Cu;
            // 0x274230: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x274234u;
label_274234:
    // 0x274234: 0x0  nop
    ctx->pc = 0x274234u;
    // NOP
label_274238:
    // 0x274238: 0x0  nop
    ctx->pc = 0x274238u;
    // NOP
label_27423c:
    // 0x27423c: 0x0  nop
    ctx->pc = 0x27423cu;
    // NOP
}
