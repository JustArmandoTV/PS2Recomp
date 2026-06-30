#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_005459B0
// Address: 0x5459b0 - 0x546270
void sub_005459B0_0x5459b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005459B0_0x5459b0");
#endif

    switch (ctx->pc) {
        case 0x5459b0u: goto label_5459b0;
        case 0x5459b4u: goto label_5459b4;
        case 0x5459b8u: goto label_5459b8;
        case 0x5459bcu: goto label_5459bc;
        case 0x5459c0u: goto label_5459c0;
        case 0x5459c4u: goto label_5459c4;
        case 0x5459c8u: goto label_5459c8;
        case 0x5459ccu: goto label_5459cc;
        case 0x5459d0u: goto label_5459d0;
        case 0x5459d4u: goto label_5459d4;
        case 0x5459d8u: goto label_5459d8;
        case 0x5459dcu: goto label_5459dc;
        case 0x5459e0u: goto label_5459e0;
        case 0x5459e4u: goto label_5459e4;
        case 0x5459e8u: goto label_5459e8;
        case 0x5459ecu: goto label_5459ec;
        case 0x5459f0u: goto label_5459f0;
        case 0x5459f4u: goto label_5459f4;
        case 0x5459f8u: goto label_5459f8;
        case 0x5459fcu: goto label_5459fc;
        case 0x545a00u: goto label_545a00;
        case 0x545a04u: goto label_545a04;
        case 0x545a08u: goto label_545a08;
        case 0x545a0cu: goto label_545a0c;
        case 0x545a10u: goto label_545a10;
        case 0x545a14u: goto label_545a14;
        case 0x545a18u: goto label_545a18;
        case 0x545a1cu: goto label_545a1c;
        case 0x545a20u: goto label_545a20;
        case 0x545a24u: goto label_545a24;
        case 0x545a28u: goto label_545a28;
        case 0x545a2cu: goto label_545a2c;
        case 0x545a30u: goto label_545a30;
        case 0x545a34u: goto label_545a34;
        case 0x545a38u: goto label_545a38;
        case 0x545a3cu: goto label_545a3c;
        case 0x545a40u: goto label_545a40;
        case 0x545a44u: goto label_545a44;
        case 0x545a48u: goto label_545a48;
        case 0x545a4cu: goto label_545a4c;
        case 0x545a50u: goto label_545a50;
        case 0x545a54u: goto label_545a54;
        case 0x545a58u: goto label_545a58;
        case 0x545a5cu: goto label_545a5c;
        case 0x545a60u: goto label_545a60;
        case 0x545a64u: goto label_545a64;
        case 0x545a68u: goto label_545a68;
        case 0x545a6cu: goto label_545a6c;
        case 0x545a70u: goto label_545a70;
        case 0x545a74u: goto label_545a74;
        case 0x545a78u: goto label_545a78;
        case 0x545a7cu: goto label_545a7c;
        case 0x545a80u: goto label_545a80;
        case 0x545a84u: goto label_545a84;
        case 0x545a88u: goto label_545a88;
        case 0x545a8cu: goto label_545a8c;
        case 0x545a90u: goto label_545a90;
        case 0x545a94u: goto label_545a94;
        case 0x545a98u: goto label_545a98;
        case 0x545a9cu: goto label_545a9c;
        case 0x545aa0u: goto label_545aa0;
        case 0x545aa4u: goto label_545aa4;
        case 0x545aa8u: goto label_545aa8;
        case 0x545aacu: goto label_545aac;
        case 0x545ab0u: goto label_545ab0;
        case 0x545ab4u: goto label_545ab4;
        case 0x545ab8u: goto label_545ab8;
        case 0x545abcu: goto label_545abc;
        case 0x545ac0u: goto label_545ac0;
        case 0x545ac4u: goto label_545ac4;
        case 0x545ac8u: goto label_545ac8;
        case 0x545accu: goto label_545acc;
        case 0x545ad0u: goto label_545ad0;
        case 0x545ad4u: goto label_545ad4;
        case 0x545ad8u: goto label_545ad8;
        case 0x545adcu: goto label_545adc;
        case 0x545ae0u: goto label_545ae0;
        case 0x545ae4u: goto label_545ae4;
        case 0x545ae8u: goto label_545ae8;
        case 0x545aecu: goto label_545aec;
        case 0x545af0u: goto label_545af0;
        case 0x545af4u: goto label_545af4;
        case 0x545af8u: goto label_545af8;
        case 0x545afcu: goto label_545afc;
        case 0x545b00u: goto label_545b00;
        case 0x545b04u: goto label_545b04;
        case 0x545b08u: goto label_545b08;
        case 0x545b0cu: goto label_545b0c;
        case 0x545b10u: goto label_545b10;
        case 0x545b14u: goto label_545b14;
        case 0x545b18u: goto label_545b18;
        case 0x545b1cu: goto label_545b1c;
        case 0x545b20u: goto label_545b20;
        case 0x545b24u: goto label_545b24;
        case 0x545b28u: goto label_545b28;
        case 0x545b2cu: goto label_545b2c;
        case 0x545b30u: goto label_545b30;
        case 0x545b34u: goto label_545b34;
        case 0x545b38u: goto label_545b38;
        case 0x545b3cu: goto label_545b3c;
        case 0x545b40u: goto label_545b40;
        case 0x545b44u: goto label_545b44;
        case 0x545b48u: goto label_545b48;
        case 0x545b4cu: goto label_545b4c;
        case 0x545b50u: goto label_545b50;
        case 0x545b54u: goto label_545b54;
        case 0x545b58u: goto label_545b58;
        case 0x545b5cu: goto label_545b5c;
        case 0x545b60u: goto label_545b60;
        case 0x545b64u: goto label_545b64;
        case 0x545b68u: goto label_545b68;
        case 0x545b6cu: goto label_545b6c;
        case 0x545b70u: goto label_545b70;
        case 0x545b74u: goto label_545b74;
        case 0x545b78u: goto label_545b78;
        case 0x545b7cu: goto label_545b7c;
        case 0x545b80u: goto label_545b80;
        case 0x545b84u: goto label_545b84;
        case 0x545b88u: goto label_545b88;
        case 0x545b8cu: goto label_545b8c;
        case 0x545b90u: goto label_545b90;
        case 0x545b94u: goto label_545b94;
        case 0x545b98u: goto label_545b98;
        case 0x545b9cu: goto label_545b9c;
        case 0x545ba0u: goto label_545ba0;
        case 0x545ba4u: goto label_545ba4;
        case 0x545ba8u: goto label_545ba8;
        case 0x545bacu: goto label_545bac;
        case 0x545bb0u: goto label_545bb0;
        case 0x545bb4u: goto label_545bb4;
        case 0x545bb8u: goto label_545bb8;
        case 0x545bbcu: goto label_545bbc;
        case 0x545bc0u: goto label_545bc0;
        case 0x545bc4u: goto label_545bc4;
        case 0x545bc8u: goto label_545bc8;
        case 0x545bccu: goto label_545bcc;
        case 0x545bd0u: goto label_545bd0;
        case 0x545bd4u: goto label_545bd4;
        case 0x545bd8u: goto label_545bd8;
        case 0x545bdcu: goto label_545bdc;
        case 0x545be0u: goto label_545be0;
        case 0x545be4u: goto label_545be4;
        case 0x545be8u: goto label_545be8;
        case 0x545becu: goto label_545bec;
        case 0x545bf0u: goto label_545bf0;
        case 0x545bf4u: goto label_545bf4;
        case 0x545bf8u: goto label_545bf8;
        case 0x545bfcu: goto label_545bfc;
        case 0x545c00u: goto label_545c00;
        case 0x545c04u: goto label_545c04;
        case 0x545c08u: goto label_545c08;
        case 0x545c0cu: goto label_545c0c;
        case 0x545c10u: goto label_545c10;
        case 0x545c14u: goto label_545c14;
        case 0x545c18u: goto label_545c18;
        case 0x545c1cu: goto label_545c1c;
        case 0x545c20u: goto label_545c20;
        case 0x545c24u: goto label_545c24;
        case 0x545c28u: goto label_545c28;
        case 0x545c2cu: goto label_545c2c;
        case 0x545c30u: goto label_545c30;
        case 0x545c34u: goto label_545c34;
        case 0x545c38u: goto label_545c38;
        case 0x545c3cu: goto label_545c3c;
        case 0x545c40u: goto label_545c40;
        case 0x545c44u: goto label_545c44;
        case 0x545c48u: goto label_545c48;
        case 0x545c4cu: goto label_545c4c;
        case 0x545c50u: goto label_545c50;
        case 0x545c54u: goto label_545c54;
        case 0x545c58u: goto label_545c58;
        case 0x545c5cu: goto label_545c5c;
        case 0x545c60u: goto label_545c60;
        case 0x545c64u: goto label_545c64;
        case 0x545c68u: goto label_545c68;
        case 0x545c6cu: goto label_545c6c;
        case 0x545c70u: goto label_545c70;
        case 0x545c74u: goto label_545c74;
        case 0x545c78u: goto label_545c78;
        case 0x545c7cu: goto label_545c7c;
        case 0x545c80u: goto label_545c80;
        case 0x545c84u: goto label_545c84;
        case 0x545c88u: goto label_545c88;
        case 0x545c8cu: goto label_545c8c;
        case 0x545c90u: goto label_545c90;
        case 0x545c94u: goto label_545c94;
        case 0x545c98u: goto label_545c98;
        case 0x545c9cu: goto label_545c9c;
        case 0x545ca0u: goto label_545ca0;
        case 0x545ca4u: goto label_545ca4;
        case 0x545ca8u: goto label_545ca8;
        case 0x545cacu: goto label_545cac;
        case 0x545cb0u: goto label_545cb0;
        case 0x545cb4u: goto label_545cb4;
        case 0x545cb8u: goto label_545cb8;
        case 0x545cbcu: goto label_545cbc;
        case 0x545cc0u: goto label_545cc0;
        case 0x545cc4u: goto label_545cc4;
        case 0x545cc8u: goto label_545cc8;
        case 0x545cccu: goto label_545ccc;
        case 0x545cd0u: goto label_545cd0;
        case 0x545cd4u: goto label_545cd4;
        case 0x545cd8u: goto label_545cd8;
        case 0x545cdcu: goto label_545cdc;
        case 0x545ce0u: goto label_545ce0;
        case 0x545ce4u: goto label_545ce4;
        case 0x545ce8u: goto label_545ce8;
        case 0x545cecu: goto label_545cec;
        case 0x545cf0u: goto label_545cf0;
        case 0x545cf4u: goto label_545cf4;
        case 0x545cf8u: goto label_545cf8;
        case 0x545cfcu: goto label_545cfc;
        case 0x545d00u: goto label_545d00;
        case 0x545d04u: goto label_545d04;
        case 0x545d08u: goto label_545d08;
        case 0x545d0cu: goto label_545d0c;
        case 0x545d10u: goto label_545d10;
        case 0x545d14u: goto label_545d14;
        case 0x545d18u: goto label_545d18;
        case 0x545d1cu: goto label_545d1c;
        case 0x545d20u: goto label_545d20;
        case 0x545d24u: goto label_545d24;
        case 0x545d28u: goto label_545d28;
        case 0x545d2cu: goto label_545d2c;
        case 0x545d30u: goto label_545d30;
        case 0x545d34u: goto label_545d34;
        case 0x545d38u: goto label_545d38;
        case 0x545d3cu: goto label_545d3c;
        case 0x545d40u: goto label_545d40;
        case 0x545d44u: goto label_545d44;
        case 0x545d48u: goto label_545d48;
        case 0x545d4cu: goto label_545d4c;
        case 0x545d50u: goto label_545d50;
        case 0x545d54u: goto label_545d54;
        case 0x545d58u: goto label_545d58;
        case 0x545d5cu: goto label_545d5c;
        case 0x545d60u: goto label_545d60;
        case 0x545d64u: goto label_545d64;
        case 0x545d68u: goto label_545d68;
        case 0x545d6cu: goto label_545d6c;
        case 0x545d70u: goto label_545d70;
        case 0x545d74u: goto label_545d74;
        case 0x545d78u: goto label_545d78;
        case 0x545d7cu: goto label_545d7c;
        case 0x545d80u: goto label_545d80;
        case 0x545d84u: goto label_545d84;
        case 0x545d88u: goto label_545d88;
        case 0x545d8cu: goto label_545d8c;
        case 0x545d90u: goto label_545d90;
        case 0x545d94u: goto label_545d94;
        case 0x545d98u: goto label_545d98;
        case 0x545d9cu: goto label_545d9c;
        case 0x545da0u: goto label_545da0;
        case 0x545da4u: goto label_545da4;
        case 0x545da8u: goto label_545da8;
        case 0x545dacu: goto label_545dac;
        case 0x545db0u: goto label_545db0;
        case 0x545db4u: goto label_545db4;
        case 0x545db8u: goto label_545db8;
        case 0x545dbcu: goto label_545dbc;
        case 0x545dc0u: goto label_545dc0;
        case 0x545dc4u: goto label_545dc4;
        case 0x545dc8u: goto label_545dc8;
        case 0x545dccu: goto label_545dcc;
        case 0x545dd0u: goto label_545dd0;
        case 0x545dd4u: goto label_545dd4;
        case 0x545dd8u: goto label_545dd8;
        case 0x545ddcu: goto label_545ddc;
        case 0x545de0u: goto label_545de0;
        case 0x545de4u: goto label_545de4;
        case 0x545de8u: goto label_545de8;
        case 0x545decu: goto label_545dec;
        case 0x545df0u: goto label_545df0;
        case 0x545df4u: goto label_545df4;
        case 0x545df8u: goto label_545df8;
        case 0x545dfcu: goto label_545dfc;
        case 0x545e00u: goto label_545e00;
        case 0x545e04u: goto label_545e04;
        case 0x545e08u: goto label_545e08;
        case 0x545e0cu: goto label_545e0c;
        case 0x545e10u: goto label_545e10;
        case 0x545e14u: goto label_545e14;
        case 0x545e18u: goto label_545e18;
        case 0x545e1cu: goto label_545e1c;
        case 0x545e20u: goto label_545e20;
        case 0x545e24u: goto label_545e24;
        case 0x545e28u: goto label_545e28;
        case 0x545e2cu: goto label_545e2c;
        case 0x545e30u: goto label_545e30;
        case 0x545e34u: goto label_545e34;
        case 0x545e38u: goto label_545e38;
        case 0x545e3cu: goto label_545e3c;
        case 0x545e40u: goto label_545e40;
        case 0x545e44u: goto label_545e44;
        case 0x545e48u: goto label_545e48;
        case 0x545e4cu: goto label_545e4c;
        case 0x545e50u: goto label_545e50;
        case 0x545e54u: goto label_545e54;
        case 0x545e58u: goto label_545e58;
        case 0x545e5cu: goto label_545e5c;
        case 0x545e60u: goto label_545e60;
        case 0x545e64u: goto label_545e64;
        case 0x545e68u: goto label_545e68;
        case 0x545e6cu: goto label_545e6c;
        case 0x545e70u: goto label_545e70;
        case 0x545e74u: goto label_545e74;
        case 0x545e78u: goto label_545e78;
        case 0x545e7cu: goto label_545e7c;
        case 0x545e80u: goto label_545e80;
        case 0x545e84u: goto label_545e84;
        case 0x545e88u: goto label_545e88;
        case 0x545e8cu: goto label_545e8c;
        case 0x545e90u: goto label_545e90;
        case 0x545e94u: goto label_545e94;
        case 0x545e98u: goto label_545e98;
        case 0x545e9cu: goto label_545e9c;
        case 0x545ea0u: goto label_545ea0;
        case 0x545ea4u: goto label_545ea4;
        case 0x545ea8u: goto label_545ea8;
        case 0x545eacu: goto label_545eac;
        case 0x545eb0u: goto label_545eb0;
        case 0x545eb4u: goto label_545eb4;
        case 0x545eb8u: goto label_545eb8;
        case 0x545ebcu: goto label_545ebc;
        case 0x545ec0u: goto label_545ec0;
        case 0x545ec4u: goto label_545ec4;
        case 0x545ec8u: goto label_545ec8;
        case 0x545eccu: goto label_545ecc;
        case 0x545ed0u: goto label_545ed0;
        case 0x545ed4u: goto label_545ed4;
        case 0x545ed8u: goto label_545ed8;
        case 0x545edcu: goto label_545edc;
        case 0x545ee0u: goto label_545ee0;
        case 0x545ee4u: goto label_545ee4;
        case 0x545ee8u: goto label_545ee8;
        case 0x545eecu: goto label_545eec;
        case 0x545ef0u: goto label_545ef0;
        case 0x545ef4u: goto label_545ef4;
        case 0x545ef8u: goto label_545ef8;
        case 0x545efcu: goto label_545efc;
        case 0x545f00u: goto label_545f00;
        case 0x545f04u: goto label_545f04;
        case 0x545f08u: goto label_545f08;
        case 0x545f0cu: goto label_545f0c;
        case 0x545f10u: goto label_545f10;
        case 0x545f14u: goto label_545f14;
        case 0x545f18u: goto label_545f18;
        case 0x545f1cu: goto label_545f1c;
        case 0x545f20u: goto label_545f20;
        case 0x545f24u: goto label_545f24;
        case 0x545f28u: goto label_545f28;
        case 0x545f2cu: goto label_545f2c;
        case 0x545f30u: goto label_545f30;
        case 0x545f34u: goto label_545f34;
        case 0x545f38u: goto label_545f38;
        case 0x545f3cu: goto label_545f3c;
        case 0x545f40u: goto label_545f40;
        case 0x545f44u: goto label_545f44;
        case 0x545f48u: goto label_545f48;
        case 0x545f4cu: goto label_545f4c;
        case 0x545f50u: goto label_545f50;
        case 0x545f54u: goto label_545f54;
        case 0x545f58u: goto label_545f58;
        case 0x545f5cu: goto label_545f5c;
        case 0x545f60u: goto label_545f60;
        case 0x545f64u: goto label_545f64;
        case 0x545f68u: goto label_545f68;
        case 0x545f6cu: goto label_545f6c;
        case 0x545f70u: goto label_545f70;
        case 0x545f74u: goto label_545f74;
        case 0x545f78u: goto label_545f78;
        case 0x545f7cu: goto label_545f7c;
        case 0x545f80u: goto label_545f80;
        case 0x545f84u: goto label_545f84;
        case 0x545f88u: goto label_545f88;
        case 0x545f8cu: goto label_545f8c;
        case 0x545f90u: goto label_545f90;
        case 0x545f94u: goto label_545f94;
        case 0x545f98u: goto label_545f98;
        case 0x545f9cu: goto label_545f9c;
        case 0x545fa0u: goto label_545fa0;
        case 0x545fa4u: goto label_545fa4;
        case 0x545fa8u: goto label_545fa8;
        case 0x545facu: goto label_545fac;
        case 0x545fb0u: goto label_545fb0;
        case 0x545fb4u: goto label_545fb4;
        case 0x545fb8u: goto label_545fb8;
        case 0x545fbcu: goto label_545fbc;
        case 0x545fc0u: goto label_545fc0;
        case 0x545fc4u: goto label_545fc4;
        case 0x545fc8u: goto label_545fc8;
        case 0x545fccu: goto label_545fcc;
        case 0x545fd0u: goto label_545fd0;
        case 0x545fd4u: goto label_545fd4;
        case 0x545fd8u: goto label_545fd8;
        case 0x545fdcu: goto label_545fdc;
        case 0x545fe0u: goto label_545fe0;
        case 0x545fe4u: goto label_545fe4;
        case 0x545fe8u: goto label_545fe8;
        case 0x545fecu: goto label_545fec;
        case 0x545ff0u: goto label_545ff0;
        case 0x545ff4u: goto label_545ff4;
        case 0x545ff8u: goto label_545ff8;
        case 0x545ffcu: goto label_545ffc;
        case 0x546000u: goto label_546000;
        case 0x546004u: goto label_546004;
        case 0x546008u: goto label_546008;
        case 0x54600cu: goto label_54600c;
        case 0x546010u: goto label_546010;
        case 0x546014u: goto label_546014;
        case 0x546018u: goto label_546018;
        case 0x54601cu: goto label_54601c;
        case 0x546020u: goto label_546020;
        case 0x546024u: goto label_546024;
        case 0x546028u: goto label_546028;
        case 0x54602cu: goto label_54602c;
        case 0x546030u: goto label_546030;
        case 0x546034u: goto label_546034;
        case 0x546038u: goto label_546038;
        case 0x54603cu: goto label_54603c;
        case 0x546040u: goto label_546040;
        case 0x546044u: goto label_546044;
        case 0x546048u: goto label_546048;
        case 0x54604cu: goto label_54604c;
        case 0x546050u: goto label_546050;
        case 0x546054u: goto label_546054;
        case 0x546058u: goto label_546058;
        case 0x54605cu: goto label_54605c;
        case 0x546060u: goto label_546060;
        case 0x546064u: goto label_546064;
        case 0x546068u: goto label_546068;
        case 0x54606cu: goto label_54606c;
        case 0x546070u: goto label_546070;
        case 0x546074u: goto label_546074;
        case 0x546078u: goto label_546078;
        case 0x54607cu: goto label_54607c;
        case 0x546080u: goto label_546080;
        case 0x546084u: goto label_546084;
        case 0x546088u: goto label_546088;
        case 0x54608cu: goto label_54608c;
        case 0x546090u: goto label_546090;
        case 0x546094u: goto label_546094;
        case 0x546098u: goto label_546098;
        case 0x54609cu: goto label_54609c;
        case 0x5460a0u: goto label_5460a0;
        case 0x5460a4u: goto label_5460a4;
        case 0x5460a8u: goto label_5460a8;
        case 0x5460acu: goto label_5460ac;
        case 0x5460b0u: goto label_5460b0;
        case 0x5460b4u: goto label_5460b4;
        case 0x5460b8u: goto label_5460b8;
        case 0x5460bcu: goto label_5460bc;
        case 0x5460c0u: goto label_5460c0;
        case 0x5460c4u: goto label_5460c4;
        case 0x5460c8u: goto label_5460c8;
        case 0x5460ccu: goto label_5460cc;
        case 0x5460d0u: goto label_5460d0;
        case 0x5460d4u: goto label_5460d4;
        case 0x5460d8u: goto label_5460d8;
        case 0x5460dcu: goto label_5460dc;
        case 0x5460e0u: goto label_5460e0;
        case 0x5460e4u: goto label_5460e4;
        case 0x5460e8u: goto label_5460e8;
        case 0x5460ecu: goto label_5460ec;
        case 0x5460f0u: goto label_5460f0;
        case 0x5460f4u: goto label_5460f4;
        case 0x5460f8u: goto label_5460f8;
        case 0x5460fcu: goto label_5460fc;
        case 0x546100u: goto label_546100;
        case 0x546104u: goto label_546104;
        case 0x546108u: goto label_546108;
        case 0x54610cu: goto label_54610c;
        case 0x546110u: goto label_546110;
        case 0x546114u: goto label_546114;
        case 0x546118u: goto label_546118;
        case 0x54611cu: goto label_54611c;
        case 0x546120u: goto label_546120;
        case 0x546124u: goto label_546124;
        case 0x546128u: goto label_546128;
        case 0x54612cu: goto label_54612c;
        case 0x546130u: goto label_546130;
        case 0x546134u: goto label_546134;
        case 0x546138u: goto label_546138;
        case 0x54613cu: goto label_54613c;
        case 0x546140u: goto label_546140;
        case 0x546144u: goto label_546144;
        case 0x546148u: goto label_546148;
        case 0x54614cu: goto label_54614c;
        case 0x546150u: goto label_546150;
        case 0x546154u: goto label_546154;
        case 0x546158u: goto label_546158;
        case 0x54615cu: goto label_54615c;
        case 0x546160u: goto label_546160;
        case 0x546164u: goto label_546164;
        case 0x546168u: goto label_546168;
        case 0x54616cu: goto label_54616c;
        case 0x546170u: goto label_546170;
        case 0x546174u: goto label_546174;
        case 0x546178u: goto label_546178;
        case 0x54617cu: goto label_54617c;
        case 0x546180u: goto label_546180;
        case 0x546184u: goto label_546184;
        case 0x546188u: goto label_546188;
        case 0x54618cu: goto label_54618c;
        case 0x546190u: goto label_546190;
        case 0x546194u: goto label_546194;
        case 0x546198u: goto label_546198;
        case 0x54619cu: goto label_54619c;
        case 0x5461a0u: goto label_5461a0;
        case 0x5461a4u: goto label_5461a4;
        case 0x5461a8u: goto label_5461a8;
        case 0x5461acu: goto label_5461ac;
        case 0x5461b0u: goto label_5461b0;
        case 0x5461b4u: goto label_5461b4;
        case 0x5461b8u: goto label_5461b8;
        case 0x5461bcu: goto label_5461bc;
        case 0x5461c0u: goto label_5461c0;
        case 0x5461c4u: goto label_5461c4;
        case 0x5461c8u: goto label_5461c8;
        case 0x5461ccu: goto label_5461cc;
        case 0x5461d0u: goto label_5461d0;
        case 0x5461d4u: goto label_5461d4;
        case 0x5461d8u: goto label_5461d8;
        case 0x5461dcu: goto label_5461dc;
        case 0x5461e0u: goto label_5461e0;
        case 0x5461e4u: goto label_5461e4;
        case 0x5461e8u: goto label_5461e8;
        case 0x5461ecu: goto label_5461ec;
        case 0x5461f0u: goto label_5461f0;
        case 0x5461f4u: goto label_5461f4;
        case 0x5461f8u: goto label_5461f8;
        case 0x5461fcu: goto label_5461fc;
        case 0x546200u: goto label_546200;
        case 0x546204u: goto label_546204;
        case 0x546208u: goto label_546208;
        case 0x54620cu: goto label_54620c;
        case 0x546210u: goto label_546210;
        case 0x546214u: goto label_546214;
        case 0x546218u: goto label_546218;
        case 0x54621cu: goto label_54621c;
        case 0x546220u: goto label_546220;
        case 0x546224u: goto label_546224;
        case 0x546228u: goto label_546228;
        case 0x54622cu: goto label_54622c;
        case 0x546230u: goto label_546230;
        case 0x546234u: goto label_546234;
        case 0x546238u: goto label_546238;
        case 0x54623cu: goto label_54623c;
        case 0x546240u: goto label_546240;
        case 0x546244u: goto label_546244;
        case 0x546248u: goto label_546248;
        case 0x54624cu: goto label_54624c;
        case 0x546250u: goto label_546250;
        case 0x546254u: goto label_546254;
        case 0x546258u: goto label_546258;
        case 0x54625cu: goto label_54625c;
        case 0x546260u: goto label_546260;
        case 0x546264u: goto label_546264;
        case 0x546268u: goto label_546268;
        case 0x54626cu: goto label_54626c;
        default: break;
    }

    ctx->pc = 0x5459b0u;

label_5459b0:
    // 0x5459b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x5459b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_5459b4:
    // 0x5459b4: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x5459b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5459b8:
    // 0x5459b8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x5459b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_5459bc:
    // 0x5459bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x5459bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_5459c0:
    // 0x5459c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x5459c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_5459c4:
    // 0x5459c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x5459c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5459c8:
    // 0x5459c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x5459c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_5459cc:
    // 0x5459cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5459ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5459d0:
    // 0x5459d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x5459d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5459d4:
    // 0x5459d4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x5459d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_5459d8:
    // 0x5459d8: 0xc10ca68  jal         func_4329A0
label_5459dc:
    if (ctx->pc == 0x5459DCu) {
        ctx->pc = 0x5459DCu;
            // 0x5459dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x5459E0u;
        goto label_5459e0;
    }
    ctx->pc = 0x5459D8u;
    SET_GPR_U32(ctx, 31, 0x5459E0u);
    ctx->pc = 0x5459DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5459D8u;
            // 0x5459dc: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5459E0u; }
        if (ctx->pc != 0x5459E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5459E0u; }
        if (ctx->pc != 0x5459E0u) { return; }
    }
    ctx->pc = 0x5459E0u;
label_5459e0:
    // 0x5459e0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x5459e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_5459e4:
    // 0x5459e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x5459e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_5459e8:
    // 0x5459e8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x5459e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_5459ec:
    // 0x5459ec: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x5459ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_5459f0:
    // 0x5459f0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x5459f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_5459f4:
    // 0x5459f4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x5459f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_5459f8:
    // 0x5459f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x5459f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_5459fc:
    // 0x5459fc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x5459fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_545a00:
    // 0x545a00: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x545a00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_545a04:
    // 0x545a04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x545a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_545a08:
    // 0x545a08: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x545a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_545a0c:
    // 0x545a0c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x545a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_545a10:
    // 0x545a10: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x545a10u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_545a14:
    // 0x545a14: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x545a14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_545a18:
    // 0x545a18: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x545a18u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_545a1c:
    // 0x545a1c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x545a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_545a20:
    // 0x545a20: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x545a20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_545a24:
    // 0x545a24: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x545a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_545a28:
    // 0x545a28: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x545a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_545a2c:
    // 0x545a2c: 0xc0582cc  jal         func_160B30
label_545a30:
    if (ctx->pc == 0x545A30u) {
        ctx->pc = 0x545A30u;
            // 0x545a30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x545A34u;
        goto label_545a34;
    }
    ctx->pc = 0x545A2Cu;
    SET_GPR_U32(ctx, 31, 0x545A34u);
    ctx->pc = 0x545A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545A2Cu;
            // 0x545a30: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545A34u; }
        if (ctx->pc != 0x545A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545A34u; }
        if (ctx->pc != 0x545A34u) { return; }
    }
    ctx->pc = 0x545A34u;
label_545a34:
    // 0x545a34: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545a38:
    // 0x545a38: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x545a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_545a3c:
    // 0x545a3c: 0x246377b8  addiu       $v1, $v1, 0x77B8
    ctx->pc = 0x545a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30648));
label_545a40:
    // 0x545a40: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x545a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_545a44:
    // 0x545a44: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x545a44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_545a48:
    // 0x545a48: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x545a48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_545a4c:
    // 0x545a4c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545a50:
    // 0x545a50: 0xac44b6f0  sw          $a0, -0x4910($v0)
    ctx->pc = 0x545a50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294948592), GPR_U32(ctx, 4));
label_545a54:
    // 0x545a54: 0x246377d0  addiu       $v1, $v1, 0x77D0
    ctx->pc = 0x545a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30672));
label_545a58:
    // 0x545a58: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_545a5c:
    // 0x545a5c: 0x24427808  addiu       $v0, $v0, 0x7808
    ctx->pc = 0x545a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30728));
label_545a60:
    // 0x545a60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x545a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_545a64:
    // 0x545a64: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x545a64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_545a68:
    // 0x545a68: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x545a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_545a6c:
    // 0x545a6c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x545a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_545a70:
    // 0x545a70: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x545a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_545a74:
    // 0x545a74: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x545a74u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_545a78:
    // 0x545a78: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x545a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_545a7c:
    // 0x545a7c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x545a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_545a80:
    // 0x545a80: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x545a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_545a84:
    // 0x545a84: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x545a84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_545a88:
    // 0x545a88: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x545a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_545a8c:
    // 0x545a8c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x545a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_545a90:
    // 0x545a90: 0xae600090  sw          $zero, 0x90($s3)
    ctx->pc = 0x545a90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 144), GPR_U32(ctx, 0));
label_545a94:
    // 0x545a94: 0xae600094  sw          $zero, 0x94($s3)
    ctx->pc = 0x545a94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 148), GPR_U32(ctx, 0));
label_545a98:
    // 0x545a98: 0xae600098  sw          $zero, 0x98($s3)
    ctx->pc = 0x545a98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 152), GPR_U32(ctx, 0));
label_545a9c:
    // 0x545a9c: 0xae60009c  sw          $zero, 0x9C($s3)
    ctx->pc = 0x545a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 156), GPR_U32(ctx, 0));
label_545aa0:
    // 0x545aa0: 0xae6000a0  sw          $zero, 0xA0($s3)
    ctx->pc = 0x545aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 0));
label_545aa4:
    // 0x545aa4: 0xae6000a4  sw          $zero, 0xA4($s3)
    ctx->pc = 0x545aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 164), GPR_U32(ctx, 0));
label_545aa8:
    // 0x545aa8: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x545aa8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_545aac:
    // 0x545aac: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_545ab0:
    if (ctx->pc == 0x545AB0u) {
        ctx->pc = 0x545AB4u;
        goto label_545ab4;
    }
    ctx->pc = 0x545AACu;
    {
        const bool branch_taken_0x545aac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x545aac) {
            ctx->pc = 0x545B40u;
            goto label_545b40;
        }
    }
    ctx->pc = 0x545AB4u;
label_545ab4:
    // 0x545ab4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x545ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_545ab8:
    // 0x545ab8: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x545ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_545abc:
    // 0x545abc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x545abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_545ac0:
    // 0x545ac0: 0xc040138  jal         func_1004E0
label_545ac4:
    if (ctx->pc == 0x545AC4u) {
        ctx->pc = 0x545AC4u;
            // 0x545ac4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x545AC8u;
        goto label_545ac8;
    }
    ctx->pc = 0x545AC0u;
    SET_GPR_U32(ctx, 31, 0x545AC8u);
    ctx->pc = 0x545AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545AC0u;
            // 0x545ac4: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AC8u; }
        if (ctx->pc != 0x545AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AC8u; }
        if (ctx->pc != 0x545AC8u) { return; }
    }
    ctx->pc = 0x545AC8u;
label_545ac8:
    // 0x545ac8: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x545ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_545acc:
    // 0x545acc: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x545accu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_545ad0:
    // 0x545ad0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x545ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545ad4:
    // 0x545ad4: 0x24a55b60  addiu       $a1, $a1, 0x5B60
    ctx->pc = 0x545ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23392));
label_545ad8:
    // 0x545ad8: 0x24c65460  addiu       $a2, $a2, 0x5460
    ctx->pc = 0x545ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21600));
label_545adc:
    // 0x545adc: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x545adcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_545ae0:
    // 0x545ae0: 0xc040840  jal         func_102100
label_545ae4:
    if (ctx->pc == 0x545AE4u) {
        ctx->pc = 0x545AE4u;
            // 0x545ae4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545AE8u;
        goto label_545ae8;
    }
    ctx->pc = 0x545AE0u;
    SET_GPR_U32(ctx, 31, 0x545AE8u);
    ctx->pc = 0x545AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545AE0u;
            // 0x545ae4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AE8u; }
        if (ctx->pc != 0x545AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AE8u; }
        if (ctx->pc != 0x545AE8u) { return; }
    }
    ctx->pc = 0x545AE8u;
label_545ae8:
    // 0x545ae8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x545ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_545aec:
    // 0x545aec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x545aecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545af0:
    // 0x545af0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x545af0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_545af4:
    // 0x545af4: 0xc0788fc  jal         func_1E23F0
label_545af8:
    if (ctx->pc == 0x545AF8u) {
        ctx->pc = 0x545AF8u;
            // 0x545af8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545AFCu;
        goto label_545afc;
    }
    ctx->pc = 0x545AF4u;
    SET_GPR_U32(ctx, 31, 0x545AFCu);
    ctx->pc = 0x545AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545AF4u;
            // 0x545af8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AFCu; }
        if (ctx->pc != 0x545AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545AFCu; }
        if (ctx->pc != 0x545AFCu) { return; }
    }
    ctx->pc = 0x545AFCu;
label_545afc:
    // 0x545afc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x545afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_545b00:
    // 0x545b00: 0xc0788fc  jal         func_1E23F0
label_545b04:
    if (ctx->pc == 0x545B04u) {
        ctx->pc = 0x545B04u;
            // 0x545b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545B08u;
        goto label_545b08;
    }
    ctx->pc = 0x545B00u;
    SET_GPR_U32(ctx, 31, 0x545B08u);
    ctx->pc = 0x545B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545B00u;
            // 0x545b04: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B08u; }
        if (ctx->pc != 0x545B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B08u; }
        if (ctx->pc != 0x545B08u) { return; }
    }
    ctx->pc = 0x545B08u;
label_545b08:
    // 0x545b08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x545b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_545b0c:
    // 0x545b0c: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x545b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_545b10:
    // 0x545b10: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x545b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_545b14:
    // 0x545b14: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x545b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_545b18:
    // 0x545b18: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x545b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_545b1c:
    // 0x545b1c: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x545b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_545b20:
    // 0x545b20: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x545b20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_545b24:
    // 0x545b24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x545b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_545b28:
    // 0x545b28: 0xc0a997c  jal         func_2A65F0
label_545b2c:
    if (ctx->pc == 0x545B2Cu) {
        ctx->pc = 0x545B2Cu;
            // 0x545b2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x545B30u;
        goto label_545b30;
    }
    ctx->pc = 0x545B28u;
    SET_GPR_U32(ctx, 31, 0x545B30u);
    ctx->pc = 0x545B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545B28u;
            // 0x545b2c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B30u; }
        if (ctx->pc != 0x545B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B30u; }
        if (ctx->pc != 0x545B30u) { return; }
    }
    ctx->pc = 0x545B30u;
label_545b30:
    // 0x545b30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x545b30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_545b34:
    // 0x545b34: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x545b34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_545b38:
    // 0x545b38: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_545b3c:
    if (ctx->pc == 0x545B3Cu) {
        ctx->pc = 0x545B3Cu;
            // 0x545b3c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x545B40u;
        goto label_545b40;
    }
    ctx->pc = 0x545B38u;
    {
        const bool branch_taken_0x545b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x545B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545B38u;
            // 0x545b3c: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545b38) {
            ctx->pc = 0x545B0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_545b0c;
        }
    }
    ctx->pc = 0x545B40u;
label_545b40:
    // 0x545b40: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x545b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_545b44:
    // 0x545b44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x545b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_545b48:
    // 0x545b48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x545b48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_545b4c:
    // 0x545b4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x545b4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_545b50:
    // 0x545b50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545b50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545b54:
    // 0x545b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545b58:
    // 0x545b58: 0x3e00008  jr          $ra
label_545b5c:
    if (ctx->pc == 0x545B5Cu) {
        ctx->pc = 0x545B5Cu;
            // 0x545b5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x545B60u;
        goto label_545b60;
    }
    ctx->pc = 0x545B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545B58u;
            // 0x545b5c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545B60u;
label_545b60:
    // 0x545b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x545b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_545b64:
    // 0x545b64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x545b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_545b68:
    // 0x545b68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545b6c:
    // 0x545b6c: 0xc0b1370  jal         func_2C4DC0
label_545b70:
    if (ctx->pc == 0x545B70u) {
        ctx->pc = 0x545B70u;
            // 0x545b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545B74u;
        goto label_545b74;
    }
    ctx->pc = 0x545B6Cu;
    SET_GPR_U32(ctx, 31, 0x545B74u);
    ctx->pc = 0x545B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545B6Cu;
            // 0x545b70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B74u; }
        if (ctx->pc != 0x545B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545B74u; }
        if (ctx->pc != 0x545B74u) { return; }
    }
    ctx->pc = 0x545B74u;
label_545b74:
    // 0x545b74: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545b78:
    // 0x545b78: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x545b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_545b7c:
    // 0x545b7c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x545b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_545b80:
    // 0x545b80: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x545b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_545b84:
    // 0x545b84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x545b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_545b88:
    // 0x545b88: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x545b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_545b8c:
    // 0x545b8c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x545b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_545b90:
    // 0x545b90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545b94:
    // 0x545b94: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x545b94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_545b98:
    // 0x545b98: 0x24847710  addiu       $a0, $a0, 0x7710
    ctx->pc = 0x545b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30480));
label_545b9c:
    // 0x545b9c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x545b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_545ba0:
    // 0x545ba0: 0x24637750  addiu       $v1, $v1, 0x7750
    ctx->pc = 0x545ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30544));
label_545ba4:
    // 0x545ba4: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x545ba4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_545ba8:
    // 0x545ba8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x545ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_545bac:
    // 0x545bac: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x545bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_545bb0:
    // 0x545bb0: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x545bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_545bb4:
    // 0x545bb4: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x545bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_545bb8:
    // 0x545bb8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x545bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_545bbc:
    // 0x545bbc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545bbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545bc0:
    // 0x545bc0: 0x3e00008  jr          $ra
label_545bc4:
    if (ctx->pc == 0x545BC4u) {
        ctx->pc = 0x545BC4u;
            // 0x545bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x545BC8u;
        goto label_545bc8;
    }
    ctx->pc = 0x545BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545BC0u;
            // 0x545bc4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545BC8u;
label_545bc8:
    // 0x545bc8: 0x0  nop
    ctx->pc = 0x545bc8u;
    // NOP
label_545bcc:
    // 0x545bcc: 0x0  nop
    ctx->pc = 0x545bccu;
    // NOP
label_545bd0:
    // 0x545bd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x545bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_545bd4:
    // 0x545bd4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x545bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_545bd8:
    // 0x545bd8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x545bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_545bdc:
    // 0x545bdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x545bdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545be0:
    // 0x545be0: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x545be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_545be4:
    // 0x545be4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_545be8:
    if (ctx->pc == 0x545BE8u) {
        ctx->pc = 0x545BE8u;
            // 0x545be8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x545BECu;
        goto label_545bec;
    }
    ctx->pc = 0x545BE4u;
    {
        const bool branch_taken_0x545be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x545be4) {
            ctx->pc = 0x545BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545BE4u;
            // 0x545be8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545C00u;
            goto label_545c00;
        }
    }
    ctx->pc = 0x545BECu;
label_545bec:
    // 0x545bec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x545becu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_545bf0:
    // 0x545bf0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x545bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_545bf4:
    // 0x545bf4: 0x320f809  jalr        $t9
label_545bf8:
    if (ctx->pc == 0x545BF8u) {
        ctx->pc = 0x545BF8u;
            // 0x545bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x545BFCu;
        goto label_545bfc;
    }
    ctx->pc = 0x545BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545BFCu);
        ctx->pc = 0x545BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545BF4u;
            // 0x545bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545BFCu; }
            if (ctx->pc != 0x545BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x545BFCu;
label_545bfc:
    // 0x545bfc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x545bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_545c00:
    // 0x545c00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x545c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_545c04:
    // 0x545c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545c08:
    // 0x545c08: 0x3e00008  jr          $ra
label_545c0c:
    if (ctx->pc == 0x545C0Cu) {
        ctx->pc = 0x545C0Cu;
            // 0x545c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x545C10u;
        goto label_545c10;
    }
    ctx->pc = 0x545C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545C08u;
            // 0x545c0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545C10u;
label_545c10:
    // 0x545c10: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x545c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_545c14:
    // 0x545c14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x545c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_545c18:
    // 0x545c18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x545c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_545c1c:
    // 0x545c1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x545c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_545c20:
    // 0x545c20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x545c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545c24:
    // 0x545c24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x545c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_545c28:
    // 0x545c28: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x545c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_545c2c:
    // 0x545c2c: 0xc0892d0  jal         func_224B40
label_545c30:
    if (ctx->pc == 0x545C30u) {
        ctx->pc = 0x545C30u;
            // 0x545c30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x545C34u;
        goto label_545c34;
    }
    ctx->pc = 0x545C2Cu;
    SET_GPR_U32(ctx, 31, 0x545C34u);
    ctx->pc = 0x545C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545C2Cu;
            // 0x545c30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545C34u; }
        if (ctx->pc != 0x545C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545C34u; }
        if (ctx->pc != 0x545C34u) { return; }
    }
    ctx->pc = 0x545C34u;
label_545c34:
    // 0x545c34: 0xc6600038  lwc1        $f0, 0x38($s3)
    ctx->pc = 0x545c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545c38:
    // 0x545c38: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x545c38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_545c3c:
    // 0x545c3c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x545c3cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_545c40:
    // 0x545c40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545c44:
    // 0x545c44: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x545c44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_545c48:
    // 0x545c48: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x545c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_545c4c:
    // 0x545c4c: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x545c4cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_545c50:
    // 0x545c50: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x545c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_545c54:
    // 0x545c54: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x545c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_545c58:
    // 0x545c58: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x545c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_545c5c:
    // 0x545c5c: 0xc6620034  lwc1        $f2, 0x34($s3)
    ctx->pc = 0x545c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545c60:
    // 0x545c60: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x545c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_545c64:
    // 0x545c64: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x545c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545c68:
    // 0x545c68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x545c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_545c6c:
    // 0x545c6c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x545c6cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_545c70:
    // 0x545c70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545c74:
    // 0x545c74: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x545c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_545c78:
    // 0x545c78: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x545c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_545c7c:
    // 0x545c7c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x545c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_545c80:
    // 0x545c80: 0xe7a40078  swc1        $f4, 0x78($sp)
    ctx->pc = 0x545c80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_545c84:
    // 0x545c84: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x545c84u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_545c88:
    // 0x545c88: 0xc0a7a88  jal         func_29EA20
label_545c8c:
    if (ctx->pc == 0x545C8Cu) {
        ctx->pc = 0x545C8Cu;
            // 0x545c8c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->pc = 0x545C90u;
        goto label_545c90;
    }
    ctx->pc = 0x545C88u;
    SET_GPR_U32(ctx, 31, 0x545C90u);
    ctx->pc = 0x545C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545C88u;
            // 0x545c8c: 0xe7a00070  swc1        $f0, 0x70($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545C90u; }
        if (ctx->pc != 0x545C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545C90u; }
        if (ctx->pc != 0x545C90u) { return; }
    }
    ctx->pc = 0x545C90u;
label_545c90:
    // 0x545c90: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x545c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_545c94:
    // 0x545c94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x545c94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545c98:
    // 0x545c98: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_545c9c:
    if (ctx->pc == 0x545C9Cu) {
        ctx->pc = 0x545C9Cu;
            // 0x545c9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x545CA0u;
        goto label_545ca0;
    }
    ctx->pc = 0x545C98u;
    {
        const bool branch_taken_0x545c98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x545C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545C98u;
            // 0x545c9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545c98) {
            ctx->pc = 0x545CB8u;
            goto label_545cb8;
        }
    }
    ctx->pc = 0x545CA0u;
label_545ca0:
    // 0x545ca0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x545ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_545ca4:
    // 0x545ca4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x545ca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_545ca8:
    // 0x545ca8: 0xc44cb6f8  lwc1        $f12, -0x4908($v0)
    ctx->pc = 0x545ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_545cac:
    // 0x545cac: 0xc0804bc  jal         func_2012F0
label_545cb0:
    if (ctx->pc == 0x545CB0u) {
        ctx->pc = 0x545CB0u;
            // 0x545cb0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x545CB4u;
        goto label_545cb4;
    }
    ctx->pc = 0x545CACu;
    SET_GPR_U32(ctx, 31, 0x545CB4u);
    ctx->pc = 0x545CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545CACu;
            // 0x545cb0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545CB4u; }
        if (ctx->pc != 0x545CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545CB4u; }
        if (ctx->pc != 0x545CB4u) { return; }
    }
    ctx->pc = 0x545CB4u;
label_545cb4:
    // 0x545cb4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x545cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545cb8:
    // 0x545cb8: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x545cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_545cbc:
    // 0x545cbc: 0xafb20084  sw          $s2, 0x84($sp)
    ctx->pc = 0x545cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 18));
label_545cc0:
    // 0x545cc0: 0xc440c900  lwc1        $f0, -0x3700($v0)
    ctx->pc = 0x545cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545cc4:
    // 0x545cc4: 0x24080007  addiu       $t0, $zero, 0x7
    ctx->pc = 0x545cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_545cc8:
    // 0x545cc8: 0xc6630018  lwc1        $f3, 0x18($s3)
    ctx->pc = 0x545cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_545ccc:
    // 0x545ccc: 0x3c074000  lui         $a3, 0x4000
    ctx->pc = 0x545cccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16384 << 16));
label_545cd0:
    // 0x545cd0: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x545cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545cd4:
    // 0x545cd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x545cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_545cd8:
    // 0x545cd8: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x545cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_545cdc:
    // 0x545cdc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545ce0:
    // 0x545ce0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x545ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_545ce4:
    // 0x545ce4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x545ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_545ce8:
    // 0x545ce8: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x545ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_545cec:
    // 0x545cec: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x545cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_545cf0:
    // 0x545cf0: 0xa3a80130  sb          $t0, 0x130($sp)
    ctx->pc = 0x545cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 8));
label_545cf4:
    // 0x545cf4: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x545cf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_545cf8:
    // 0x545cf8: 0xafa7012c  sw          $a3, 0x12C($sp)
    ctx->pc = 0x545cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 7));
label_545cfc:
    // 0x545cfc: 0xe7a30098  swc1        $f3, 0x98($sp)
    ctx->pc = 0x545cfcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_545d00:
    // 0x545d00: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x545d00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
label_545d04:
    // 0x545d04: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x545d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_545d08:
    // 0x545d08: 0xc0a7a88  jal         func_29EA20
label_545d0c:
    if (ctx->pc == 0x545D0Cu) {
        ctx->pc = 0x545D0Cu;
            // 0x545d0c: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x545D10u;
        goto label_545d10;
    }
    ctx->pc = 0x545D08u;
    SET_GPR_U32(ctx, 31, 0x545D10u);
    ctx->pc = 0x545D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545D08u;
            // 0x545d0c: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D10u; }
        if (ctx->pc != 0x545D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D10u; }
        if (ctx->pc != 0x545D10u) { return; }
    }
    ctx->pc = 0x545D10u;
label_545d10:
    // 0x545d10: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x545d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_545d14:
    // 0x545d14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x545d14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545d18:
    // 0x545d18: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_545d1c:
    if (ctx->pc == 0x545D1Cu) {
        ctx->pc = 0x545D1Cu;
            // 0x545d1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x545D20u;
        goto label_545d20;
    }
    ctx->pc = 0x545D18u;
    {
        const bool branch_taken_0x545d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x545D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545D18u;
            // 0x545d1c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545d18) {
            ctx->pc = 0x545D68u;
            goto label_545d68;
        }
    }
    ctx->pc = 0x545D20u;
label_545d20:
    // 0x545d20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x545d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545d24:
    // 0x545d24: 0xc088ef4  jal         func_223BD0
label_545d28:
    if (ctx->pc == 0x545D28u) {
        ctx->pc = 0x545D28u;
            // 0x545d28: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x545D2Cu;
        goto label_545d2c;
    }
    ctx->pc = 0x545D24u;
    SET_GPR_U32(ctx, 31, 0x545D2Cu);
    ctx->pc = 0x545D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545D24u;
            // 0x545d28: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D2Cu; }
        if (ctx->pc != 0x545D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D2Cu; }
        if (ctx->pc != 0x545D2Cu) { return; }
    }
    ctx->pc = 0x545D2Cu;
label_545d2c:
    // 0x545d2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x545d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_545d30:
    // 0x545d30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x545d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_545d34:
    // 0x545d34: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x545d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_545d38:
    // 0x545d38: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x545d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_545d3c:
    // 0x545d3c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x545d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_545d40:
    // 0x545d40: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x545d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_545d44:
    // 0x545d44: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545d48:
    // 0x545d48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x545d48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_545d4c:
    // 0x545d4c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x545d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_545d50:
    // 0x545d50: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x545d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_545d54:
    // 0x545d54: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x545d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_545d58:
    // 0x545d58: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x545d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_545d5c:
    // 0x545d5c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x545d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_545d60:
    // 0x545d60: 0xc088b38  jal         func_222CE0
label_545d64:
    if (ctx->pc == 0x545D64u) {
        ctx->pc = 0x545D64u;
            // 0x545d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545D68u;
        goto label_545d68;
    }
    ctx->pc = 0x545D60u;
    SET_GPR_U32(ctx, 31, 0x545D68u);
    ctx->pc = 0x545D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545D60u;
            // 0x545d64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D68u; }
        if (ctx->pc != 0x545D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D68u; }
        if (ctx->pc != 0x545D68u) { return; }
    }
    ctx->pc = 0x545D68u;
label_545d68:
    // 0x545d68: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x545d68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_545d6c:
    // 0x545d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x545d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545d70:
    // 0x545d70: 0xc08c164  jal         func_230590
label_545d74:
    if (ctx->pc == 0x545D74u) {
        ctx->pc = 0x545D74u;
            // 0x545d74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x545D78u;
        goto label_545d78;
    }
    ctx->pc = 0x545D70u;
    SET_GPR_U32(ctx, 31, 0x545D78u);
    ctx->pc = 0x545D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545D70u;
            // 0x545d74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D78u; }
        if (ctx->pc != 0x545D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545D78u; }
        if (ctx->pc != 0x545D78u) { return; }
    }
    ctx->pc = 0x545D78u;
label_545d78:
    // 0x545d78: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x545d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_545d7c:
    // 0x545d7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x545d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545d80:
    // 0x545d80: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x545d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_545d84:
    // 0x545d84: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x545d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_545d88:
    // 0x545d88: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x545d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_545d8c:
    // 0x545d8c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x545d8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_545d90:
    // 0x545d90: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x545d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545d94:
    // 0x545d94: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x545d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_545d98:
    // 0x545d98: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x545d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545d9c:
    // 0x545d9c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x545d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_545da0:
    // 0x545da0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x545da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_545da4:
    // 0x545da4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x545da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_545da8:
    // 0x545da8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x545da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_545dac:
    // 0x545dac: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x545dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_545db0:
    // 0x545db0: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x545db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545db4:
    // 0x545db4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x545db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_545db8:
    // 0x545db8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x545db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545dbc:
    // 0x545dbc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x545dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_545dc0:
    // 0x545dc0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x545dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_545dc4:
    // 0x545dc4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x545dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_545dc8:
    // 0x545dc8: 0xc0892b0  jal         func_224AC0
label_545dcc:
    if (ctx->pc == 0x545DCCu) {
        ctx->pc = 0x545DCCu;
            // 0x545dcc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x545DD0u;
        goto label_545dd0;
    }
    ctx->pc = 0x545DC8u;
    SET_GPR_U32(ctx, 31, 0x545DD0u);
    ctx->pc = 0x545DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545DC8u;
            // 0x545dcc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545DD0u; }
        if (ctx->pc != 0x545DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545DD0u; }
        if (ctx->pc != 0x545DD0u) { return; }
    }
    ctx->pc = 0x545DD0u;
label_545dd0:
    // 0x545dd0: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x545dd0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_545dd4:
    // 0x545dd4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_545dd8:
    if (ctx->pc == 0x545DD8u) {
        ctx->pc = 0x545DD8u;
            // 0x545dd8: 0xae710050  sw          $s1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
        ctx->pc = 0x545DDCu;
        goto label_545ddc;
    }
    ctx->pc = 0x545DD4u;
    {
        const bool branch_taken_0x545dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x545dd4) {
            ctx->pc = 0x545DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545DD4u;
            // 0x545dd8: 0xae710050  sw          $s1, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545E18u;
            goto label_545e18;
        }
    }
    ctx->pc = 0x545DDCu;
label_545ddc:
    // 0x545ddc: 0x86420006  lh          $v0, 0x6($s2)
    ctx->pc = 0x545ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_545de0:
    // 0x545de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x545de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_545de4:
    // 0x545de4: 0xa6420006  sh          $v0, 0x6($s2)
    ctx->pc = 0x545de4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 2));
label_545de8:
    // 0x545de8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x545de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_545dec:
    // 0x545dec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x545decu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_545df0:
    // 0x545df0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_545df4:
    if (ctx->pc == 0x545DF4u) {
        ctx->pc = 0x545DF8u;
        goto label_545df8;
    }
    ctx->pc = 0x545DF0u;
    {
        const bool branch_taken_0x545df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x545df0) {
            ctx->pc = 0x545E14u;
            goto label_545e14;
        }
    }
    ctx->pc = 0x545DF8u;
label_545df8:
    // 0x545df8: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_545dfc:
    if (ctx->pc == 0x545DFCu) {
        ctx->pc = 0x545E00u;
        goto label_545e00;
    }
    ctx->pc = 0x545DF8u;
    {
        const bool branch_taken_0x545df8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x545df8) {
            ctx->pc = 0x545E14u;
            goto label_545e14;
        }
    }
    ctx->pc = 0x545E00u;
label_545e00:
    // 0x545e00: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x545e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_545e04:
    // 0x545e04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x545e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_545e08:
    // 0x545e08: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x545e08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_545e0c:
    // 0x545e0c: 0x320f809  jalr        $t9
label_545e10:
    if (ctx->pc == 0x545E10u) {
        ctx->pc = 0x545E10u;
            // 0x545e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x545E14u;
        goto label_545e14;
    }
    ctx->pc = 0x545E0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x545E14u);
        ctx->pc = 0x545E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545E0Cu;
            // 0x545e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x545E14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x545E14u; }
            if (ctx->pc != 0x545E14u) { return; }
        }
        }
    }
    ctx->pc = 0x545E14u;
label_545e14:
    // 0x545e14: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x545e14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_545e18:
    // 0x545e18: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545e1c:
    // 0x545e1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x545e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_545e20:
    // 0x545e20: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x545e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_545e24:
    // 0x545e24: 0xc0a7a88  jal         func_29EA20
label_545e28:
    if (ctx->pc == 0x545E28u) {
        ctx->pc = 0x545E28u;
            // 0x545e28: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x545E2Cu;
        goto label_545e2c;
    }
    ctx->pc = 0x545E24u;
    SET_GPR_U32(ctx, 31, 0x545E2Cu);
    ctx->pc = 0x545E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545E24u;
            // 0x545e28: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E2Cu; }
        if (ctx->pc != 0x545E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E2Cu; }
        if (ctx->pc != 0x545E2Cu) { return; }
    }
    ctx->pc = 0x545E2Cu;
label_545e2c:
    // 0x545e2c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x545e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_545e30:
    // 0x545e30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x545e30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_545e34:
    // 0x545e34: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_545e38:
    if (ctx->pc == 0x545E38u) {
        ctx->pc = 0x545E38u;
            // 0x545e38: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x545E3Cu;
        goto label_545e3c;
    }
    ctx->pc = 0x545E34u;
    {
        const bool branch_taken_0x545e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x545E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545E34u;
            // 0x545e38: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545e34) {
            ctx->pc = 0x545E58u;
            goto label_545e58;
        }
    }
    ctx->pc = 0x545E3Cu;
label_545e3c:
    // 0x545e3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x545e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_545e40:
    // 0x545e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x545e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_545e44:
    // 0x545e44: 0xc0869d0  jal         func_21A740
label_545e48:
    if (ctx->pc == 0x545E48u) {
        ctx->pc = 0x545E48u;
            // 0x545e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545E4Cu;
        goto label_545e4c;
    }
    ctx->pc = 0x545E44u;
    SET_GPR_U32(ctx, 31, 0x545E4Cu);
    ctx->pc = 0x545E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545E44u;
            // 0x545e48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E4Cu; }
        if (ctx->pc != 0x545E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E4Cu; }
        if (ctx->pc != 0x545E4Cu) { return; }
    }
    ctx->pc = 0x545E4Cu;
label_545e4c:
    // 0x545e4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x545e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_545e50:
    // 0x545e50: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x545e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_545e54:
    // 0x545e54: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x545e54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_545e58:
    // 0x545e58: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x545e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_545e5c:
    // 0x545e5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x545e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_545e60:
    // 0x545e60: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x545e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_545e64:
    // 0x545e64: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x545e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_545e68:
    // 0x545e68: 0xc08c650  jal         func_231940
label_545e6c:
    if (ctx->pc == 0x545E6Cu) {
        ctx->pc = 0x545E6Cu;
            // 0x545e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545E70u;
        goto label_545e70;
    }
    ctx->pc = 0x545E68u;
    SET_GPR_U32(ctx, 31, 0x545E70u);
    ctx->pc = 0x545E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545E68u;
            // 0x545e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E70u; }
        if (ctx->pc != 0x545E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E70u; }
        if (ctx->pc != 0x545E70u) { return; }
    }
    ctx->pc = 0x545E70u;
label_545e70:
    // 0x545e70: 0xc040180  jal         func_100600
label_545e74:
    if (ctx->pc == 0x545E74u) {
        ctx->pc = 0x545E74u;
            // 0x545e74: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x545E78u;
        goto label_545e78;
    }
    ctx->pc = 0x545E70u;
    SET_GPR_U32(ctx, 31, 0x545E78u);
    ctx->pc = 0x545E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545E70u;
            // 0x545e74: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E78u; }
        if (ctx->pc != 0x545E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545E78u; }
        if (ctx->pc != 0x545E78u) { return; }
    }
    ctx->pc = 0x545E78u;
label_545e78:
    // 0x545e78: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_545e7c:
    if (ctx->pc == 0x545E7Cu) {
        ctx->pc = 0x545E7Cu;
            // 0x545e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x545E80u;
        goto label_545e80;
    }
    ctx->pc = 0x545E78u;
    {
        const bool branch_taken_0x545e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x545E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545E78u;
            // 0x545e7c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x545e78) {
            ctx->pc = 0x545EE8u;
            goto label_545ee8;
        }
    }
    ctx->pc = 0x545E80u;
label_545e80:
    // 0x545e80: 0x8e670050  lw          $a3, 0x50($s3)
    ctx->pc = 0x545e80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_545e84:
    // 0x545e84: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x545e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_545e88:
    // 0x545e88: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x545e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_545e8c:
    // 0x545e8c: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x545e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_545e90:
    // 0x545e90: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x545e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_545e94:
    // 0x545e94: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x545e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_545e98:
    // 0x545e98: 0xae040048  sw          $a0, 0x48($s0)
    ctx->pc = 0x545e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 4));
label_545e9c:
    // 0x545e9c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x545e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_545ea0:
    // 0x545ea0: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x545ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_545ea4:
    // 0x545ea4: 0x24a57250  addiu       $a1, $a1, 0x7250
    ctx->pc = 0x545ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29264));
label_545ea8:
    // 0x545ea8: 0xae070024  sw          $a3, 0x24($s0)
    ctx->pc = 0x545ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 7));
label_545eac:
    // 0x545eac: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x545eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_545eb0:
    // 0x545eb0: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x545eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_545eb4:
    // 0x545eb4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x545eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_545eb8:
    // 0x545eb8: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x545eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_545ebc:
    // 0x545ebc: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x545ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_545ec0:
    // 0x545ec0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x545ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_545ec4:
    // 0x545ec4: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x545ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_545ec8:
    // 0x545ec8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x545ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_545ecc:
    // 0x545ecc: 0xae05003c  sw          $a1, 0x3C($s0)
    ctx->pc = 0x545eccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 5));
label_545ed0:
    // 0x545ed0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x545ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_545ed4:
    // 0x545ed4: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x545ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_545ed8:
    // 0x545ed8: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x545ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_545edc:
    // 0x545edc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x545edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_545ee0:
    // 0x545ee0: 0xc04c968  jal         func_1325A0
label_545ee4:
    if (ctx->pc == 0x545EE4u) {
        ctx->pc = 0x545EE4u;
            // 0x545ee4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x545EE8u;
        goto label_545ee8;
    }
    ctx->pc = 0x545EE0u;
    SET_GPR_U32(ctx, 31, 0x545EE8u);
    ctx->pc = 0x545EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545EE0u;
            // 0x545ee4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545EE8u; }
        if (ctx->pc != 0x545EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545EE8u; }
        if (ctx->pc != 0x545EE8u) { return; }
    }
    ctx->pc = 0x545EE8u;
label_545ee8:
    // 0x545ee8: 0xae7000a0  sw          $s0, 0xA0($s3)
    ctx->pc = 0x545ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 16));
label_545eec:
    // 0x545eec: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x545eecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_545ef0:
    // 0x545ef0: 0xa2670064  sb          $a3, 0x64($s3)
    ctx->pc = 0x545ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 100), (uint8_t)GPR_U32(ctx, 7));
label_545ef4:
    // 0x545ef4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x545ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_545ef8:
    // 0x545ef8: 0xa2600065  sb          $zero, 0x65($s3)
    ctx->pc = 0x545ef8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 101), (uint8_t)GPR_U32(ctx, 0));
label_545efc:
    // 0x545efc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x545efcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_545f00:
    // 0x545f00: 0xa2670066  sb          $a3, 0x66($s3)
    ctx->pc = 0x545f00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 102), (uint8_t)GPR_U32(ctx, 7));
label_545f04:
    // 0x545f04: 0x3c05c000  lui         $a1, 0xC000
    ctx->pc = 0x545f04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49152 << 16));
label_545f08:
    // 0x545f08: 0xa2600067  sb          $zero, 0x67($s3)
    ctx->pc = 0x545f08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 103), (uint8_t)GPR_U32(ctx, 0));
label_545f0c:
    // 0x545f0c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x545f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_545f10:
    // 0x545f10: 0xa2640068  sb          $a0, 0x68($s3)
    ctx->pc = 0x545f10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 4));
label_545f14:
    // 0x545f14: 0xa2600069  sb          $zero, 0x69($s3)
    ctx->pc = 0x545f14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 0));
label_545f18:
    // 0x545f18: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x545f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_545f1c:
    // 0x545f1c: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x545f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
label_545f20:
    // 0x545f20: 0xa260006b  sb          $zero, 0x6B($s3)
    ctx->pc = 0x545f20u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 0));
label_545f24:
    // 0x545f24: 0xae66008c  sw          $a2, 0x8C($s3)
    ctx->pc = 0x545f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
label_545f28:
    // 0x545f28: 0xae650070  sw          $a1, 0x70($s3)
    ctx->pc = 0x545f28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 5));
label_545f2c:
    // 0x545f2c: 0xae650078  sw          $a1, 0x78($s3)
    ctx->pc = 0x545f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 5));
label_545f30:
    // 0x545f30: 0xae650080  sw          $a1, 0x80($s3)
    ctx->pc = 0x545f30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 5));
label_545f34:
    // 0x545f34: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x545f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_545f38:
    // 0x545f38: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x545f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_545f3c:
    // 0x545f3c: 0x50640001  beql        $v1, $a0, . + 4 + (0x1 << 2)
label_545f40:
    if (ctx->pc == 0x545F40u) {
        ctx->pc = 0x545F40u;
            // 0x545f40: 0xa26700d5  sb          $a3, 0xD5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 213), (uint8_t)GPR_U32(ctx, 7));
        ctx->pc = 0x545F44u;
        goto label_545f44;
    }
    ctx->pc = 0x545F3Cu;
    {
        const bool branch_taken_0x545f3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x545f3c) {
            ctx->pc = 0x545F40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x545F3Cu;
            // 0x545f40: 0xa26700d5  sb          $a3, 0xD5($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 213), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x545F44u;
            goto label_545f44;
        }
    }
    ctx->pc = 0x545F44u;
label_545f44:
    // 0x545f44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x545f44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_545f48:
    // 0x545f48: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x545f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_545f4c:
    // 0x545f4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x545f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_545f50:
    // 0x545f50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x545f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_545f54:
    // 0x545f54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x545f54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_545f58:
    // 0x545f58: 0x3e00008  jr          $ra
label_545f5c:
    if (ctx->pc == 0x545F5Cu) {
        ctx->pc = 0x545F5Cu;
            // 0x545f5c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x545F60u;
        goto label_545f60;
    }
    ctx->pc = 0x545F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545F58u;
            // 0x545f5c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545F60u;
label_545f60:
    // 0x545f60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x545f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_545f64:
    // 0x545f64: 0xa08300cc  sb          $v1, 0xCC($a0)
    ctx->pc = 0x545f64u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 3));
label_545f68:
    // 0x545f68: 0x3c0342b4  lui         $v1, 0x42B4
    ctx->pc = 0x545f68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17076 << 16));
label_545f6c:
    // 0x545f6c: 0xac8300c4  sw          $v1, 0xC4($a0)
    ctx->pc = 0x545f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 3));
label_545f70:
    // 0x545f70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x545f70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_545f74:
    // 0x545f74: 0x8c658a08  lw          $a1, -0x75F8($v1)
    ctx->pc = 0x545f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_545f78:
    // 0x545f78: 0x80a5007a  lb          $a1, 0x7A($a1)
    ctx->pc = 0x545f78u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 122)));
label_545f7c:
    // 0x545f7c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x545f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_545f80:
    // 0x545f80: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x545f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_545f84:
    // 0x545f84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x545f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_545f88:
    // 0x545f88: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x545f88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_545f8c:
    // 0x545f8c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x545f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_545f90:
    // 0x545f90: 0x3e00008  jr          $ra
label_545f94:
    if (ctx->pc == 0x545F94u) {
        ctx->pc = 0x545F94u;
            // 0x545f94: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x545F98u;
        goto label_545f98;
    }
    ctx->pc = 0x545F90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x545F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x545F90u;
            // 0x545f94: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x545F98u;
label_545f98:
    // 0x545f98: 0x0  nop
    ctx->pc = 0x545f98u;
    // NOP
label_545f9c:
    // 0x545f9c: 0x0  nop
    ctx->pc = 0x545f9cu;
    // NOP
label_545fa0:
    // 0x545fa0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x545fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_545fa4:
    // 0x545fa4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x545fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_545fa8:
    // 0x545fa8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x545fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_545fac:
    // 0x545fac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x545facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_545fb0:
    // 0x545fb0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x545fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_545fb4:
    // 0x545fb4: 0x24c6dcb8  addiu       $a2, $a2, -0x2348
    ctx->pc = 0x545fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958264));
label_545fb8:
    // 0x545fb8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x545fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545fbc:
    // 0x545fbc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x545fbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_545fc0:
    // 0x545fc0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x545fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_545fc4:
    // 0x545fc4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x545fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545fc8:
    // 0x545fc8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x545fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_545fcc:
    // 0x545fcc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x545fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_545fd0:
    // 0x545fd0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x545fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_545fd4:
    // 0x545fd4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x545fd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_545fd8:
    // 0x545fd8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x545fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_545fdc:
    // 0x545fdc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x545fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_545fe0:
    // 0x545fe0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x545fe0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_545fe4:
    // 0x545fe4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x545fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_545fe8:
    // 0x545fe8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x545fe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_545fec:
    // 0x545fec: 0xc04cafc  jal         func_132BF0
label_545ff0:
    if (ctx->pc == 0x545FF0u) {
        ctx->pc = 0x545FF0u;
            // 0x545ff0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x545FF4u;
        goto label_545ff4;
    }
    ctx->pc = 0x545FECu;
    SET_GPR_U32(ctx, 31, 0x545FF4u);
    ctx->pc = 0x545FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545FECu;
            // 0x545ff0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545FF4u; }
        if (ctx->pc != 0x545FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545FF4u; }
        if (ctx->pc != 0x545FF4u) { return; }
    }
    ctx->pc = 0x545FF4u;
label_545ff4:
    // 0x545ff4: 0xc040180  jal         func_100600
label_545ff8:
    if (ctx->pc == 0x545FF8u) {
        ctx->pc = 0x545FF8u;
            // 0x545ff8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x545FFCu;
        goto label_545ffc;
    }
    ctx->pc = 0x545FF4u;
    SET_GPR_U32(ctx, 31, 0x545FFCu);
    ctx->pc = 0x545FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x545FF4u;
            // 0x545ff8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545FFCu; }
        if (ctx->pc != 0x545FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x545FFCu; }
        if (ctx->pc != 0x545FFCu) { return; }
    }
    ctx->pc = 0x545FFCu;
label_545ffc:
    // 0x545ffc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x545ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_546000:
    // 0x546000: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_546004:
    if (ctx->pc == 0x546004u) {
        ctx->pc = 0x546004u;
            // 0x546004: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x546008u;
        goto label_546008;
    }
    ctx->pc = 0x546000u;
    {
        const bool branch_taken_0x546000 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x546000) {
            ctx->pc = 0x546004u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546000u;
            // 0x546004: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5460ACu;
            goto label_5460ac;
        }
    }
    ctx->pc = 0x546008u;
label_546008:
    // 0x546008: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x546008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_54600c:
    // 0x54600c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x54600cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_546010:
    // 0x546010: 0xc441dcf8  lwc1        $f1, -0x2308($v0)
    ctx->pc = 0x546010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294958328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_546014:
    // 0x546014: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x546014u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_546018:
    // 0x546018: 0x0  nop
    ctx->pc = 0x546018u;
    // NOP
label_54601c:
    // 0x54601c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x54601cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_546020:
    // 0x546020: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_546024:
    if (ctx->pc == 0x546024u) {
        ctx->pc = 0x546024u;
            // 0x546024: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x546028u;
        goto label_546028;
    }
    ctx->pc = 0x546020u;
    {
        const bool branch_taken_0x546020 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x546020) {
            ctx->pc = 0x546024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x546020u;
            // 0x546024: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x546038u;
            goto label_546038;
        }
    }
    ctx->pc = 0x546028u;
label_546028:
    // 0x546028: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x546028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_54602c:
    // 0x54602c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x54602cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_546030:
    // 0x546030: 0x10000006  b           . + 4 + (0x6 << 2)
label_546034:
    if (ctx->pc == 0x546034u) {
        ctx->pc = 0x546038u;
        goto label_546038;
    }
    ctx->pc = 0x546030u;
    {
        const bool branch_taken_0x546030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x546030) {
            ctx->pc = 0x54604Cu;
            goto label_54604c;
        }
    }
    ctx->pc = 0x546038u;
label_546038:
    // 0x546038: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x546038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_54603c:
    // 0x54603c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x54603cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_546040:
    // 0x546040: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x546040u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_546044:
    // 0x546044: 0x0  nop
    ctx->pc = 0x546044u;
    // NOP
label_546048:
    // 0x546048: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x546048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_54604c:
    // 0x54604c: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x54604cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_546050:
    // 0x546050: 0x3c090067  lui         $t1, 0x67
    ctx->pc = 0x546050u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)103 << 16));
label_546054:
    // 0x546054: 0x2442dcc8  addiu       $v0, $v0, -0x2338
    ctx->pc = 0x546054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958280));
label_546058:
    // 0x546058: 0x3c0a0067  lui         $t2, 0x67
    ctx->pc = 0x546058u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)103 << 16));
label_54605c:
    // 0x54605c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x54605cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_546060:
    // 0x546060: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x546060u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_546064:
    // 0x546064: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x546064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_546068:
    // 0x546068: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x546068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_54606c:
    // 0x54606c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x54606cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_546070:
    // 0x546070: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x546070u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_546074:
    // 0x546074: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x546074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_546078:
    // 0x546078: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x546078u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54607c:
    // 0x54607c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x54607cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_546080:
    // 0x546080: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x546080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_546084:
    // 0x546084: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x546084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_546088:
    // 0x546088: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x546088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_54608c:
    // 0x54608c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x54608cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_546090:
    // 0x546090: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x546090u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_546094:
    // 0x546094: 0x2529dcd8  addiu       $t1, $t1, -0x2328
    ctx->pc = 0x546094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294958296));
label_546098:
    // 0x546098: 0x254adce8  addiu       $t2, $t2, -0x2318
    ctx->pc = 0x546098u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294958312));
label_54609c:
    // 0x54609c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x54609cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_5460a0:
    // 0x5460a0: 0xc0db488  jal         func_36D220
label_5460a4:
    if (ctx->pc == 0x5460A4u) {
        ctx->pc = 0x5460A4u;
            // 0x5460a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x5460A8u;
        goto label_5460a8;
    }
    ctx->pc = 0x5460A0u;
    SET_GPR_U32(ctx, 31, 0x5460A8u);
    ctx->pc = 0x5460A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5460A0u;
            // 0x5460a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5460A8u; }
        if (ctx->pc != 0x5460A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5460A8u; }
        if (ctx->pc != 0x5460A8u) { return; }
    }
    ctx->pc = 0x5460A8u;
label_5460a8:
    // 0x5460a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5460a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_5460ac:
    // 0x5460ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5460acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5460b0:
    // 0x5460b0: 0x3e00008  jr          $ra
label_5460b4:
    if (ctx->pc == 0x5460B4u) {
        ctx->pc = 0x5460B4u;
            // 0x5460b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5460B8u;
        goto label_5460b8;
    }
    ctx->pc = 0x5460B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5460B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5460B0u;
            // 0x5460b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5460B8u;
label_5460b8:
    // 0x5460b8: 0x0  nop
    ctx->pc = 0x5460b8u;
    // NOP
label_5460bc:
    // 0x5460bc: 0x0  nop
    ctx->pc = 0x5460bcu;
    // NOP
label_5460c0:
    // 0x5460c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x5460c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_5460c4:
    // 0x5460c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5460c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5460c8:
    // 0x5460c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5460c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5460cc:
    // 0x5460cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5460ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5460d0:
    // 0x5460d0: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x5460d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_5460d4:
    // 0x5460d4: 0x8c8600a0  lw          $a2, 0xA0($a0)
    ctx->pc = 0x5460d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_5460d8:
    // 0x5460d8: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_5460dc:
    if (ctx->pc == 0x5460DCu) {
        ctx->pc = 0x5460DCu;
            // 0x5460dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5460E0u;
        goto label_5460e0;
    }
    ctx->pc = 0x5460D8u;
    {
        const bool branch_taken_0x5460d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x5460DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5460D8u;
            // 0x5460dc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5460d8) {
            ctx->pc = 0x546108u;
            goto label_546108;
        }
    }
    ctx->pc = 0x5460E0u;
label_5460e0:
    // 0x5460e0: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
label_5460e4:
    if (ctx->pc == 0x5460E4u) {
        ctx->pc = 0x5460E4u;
            // 0x5460e4: 0x8cc30060  lw          $v1, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->pc = 0x5460E8u;
        goto label_5460e8;
    }
    ctx->pc = 0x5460E0u;
    {
        const bool branch_taken_0x5460e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5460e0) {
            ctx->pc = 0x5460E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5460E0u;
            // 0x5460e4: 0x8cc30060  lw          $v1, 0x60($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5460F0u;
            goto label_5460f0;
        }
    }
    ctx->pc = 0x5460E8u;
label_5460e8:
    // 0x5460e8: 0x1000003f  b           . + 4 + (0x3F << 2)
label_5460ec:
    if (ctx->pc == 0x5460ECu) {
        ctx->pc = 0x5460ECu;
            // 0x5460ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x5460F0u;
        goto label_5460f0;
    }
    ctx->pc = 0x5460E8u;
    {
        const bool branch_taken_0x5460e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5460ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5460E8u;
            // 0x5460ec: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5460e8) {
            ctx->pc = 0x5461E8u;
            goto label_5461e8;
        }
    }
    ctx->pc = 0x5460F0u;
label_5460f0:
    // 0x5460f0: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x5460f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_5460f4:
    // 0x5460f4: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
label_5460f8:
    if (ctx->pc == 0x5460F8u) {
        ctx->pc = 0x5460FCu;
        goto label_5460fc;
    }
    ctx->pc = 0x5460F4u;
    {
        const bool branch_taken_0x5460f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5460f4) {
            ctx->pc = 0x5461E4u;
            goto label_5461e4;
        }
    }
    ctx->pc = 0x5460FCu;
label_5460fc:
    // 0x5460fc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x5460fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_546100:
    // 0x546100: 0x10000038  b           . + 4 + (0x38 << 2)
label_546104:
    if (ctx->pc == 0x546104u) {
        ctx->pc = 0x546104u;
            // 0x546104: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x546108u;
        goto label_546108;
    }
    ctx->pc = 0x546100u;
    {
        const bool branch_taken_0x546100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x546104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x546100u;
            // 0x546104: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x546100) {
            ctx->pc = 0x5461E4u;
            goto label_5461e4;
        }
    }
    ctx->pc = 0x546108u;
label_546108:
    // 0x546108: 0x8cc30060  lw          $v1, 0x60($a2)
    ctx->pc = 0x546108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_54610c:
    // 0x54610c: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x54610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_546110:
    // 0x546110: 0x14600034  bnez        $v1, . + 4 + (0x34 << 2)
label_546114:
    if (ctx->pc == 0x546114u) {
        ctx->pc = 0x546118u;
        goto label_546118;
    }
    ctx->pc = 0x546110u;
    {
        const bool branch_taken_0x546110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x546110) {
            ctx->pc = 0x5461E4u;
            goto label_5461e4;
        }
    }
    ctx->pc = 0x546118u;
label_546118:
    // 0x546118: 0xc0e32a4  jal         func_38CA90
label_54611c:
    if (ctx->pc == 0x54611Cu) {
        ctx->pc = 0x54611Cu;
            // 0x54611c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x546120u;
        goto label_546120;
    }
    ctx->pc = 0x546118u;
    SET_GPR_U32(ctx, 31, 0x546120u);
    ctx->pc = 0x54611Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546118u;
            // 0x54611c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38CA90u;
    if (runtime->hasFunction(0x38CA90u)) {
        auto targetFn = runtime->lookupFunction(0x38CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546120u; }
        if (ctx->pc != 0x546120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038CA90_0x38ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546120u; }
        if (ctx->pc != 0x546120u) { return; }
    }
    ctx->pc = 0x546120u;
label_546120:
    // 0x546120: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x546120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_546124:
    // 0x546124: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x546124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_546128:
    // 0x546128: 0xc0e082c  jal         func_3820B0
label_54612c:
    if (ctx->pc == 0x54612Cu) {
        ctx->pc = 0x54612Cu;
            // 0x54612c: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x546130u;
        goto label_546130;
    }
    ctx->pc = 0x546128u;
    SET_GPR_U32(ctx, 31, 0x546130u);
    ctx->pc = 0x54612Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546128u;
            // 0x54612c: 0xae0200b4  sw          $v0, 0xB4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820B0u;
    if (runtime->hasFunction(0x3820B0u)) {
        auto targetFn = runtime->lookupFunction(0x3820B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546130u; }
        if (ctx->pc != 0x546130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820B0_0x3820b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546130u; }
        if (ctx->pc != 0x546130u) { return; }
    }
    ctx->pc = 0x546130u;
label_546130:
    // 0x546130: 0xc0e0828  jal         func_3820A0
label_546134:
    if (ctx->pc == 0x546134u) {
        ctx->pc = 0x546134u;
            // 0x546134: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x546138u;
        goto label_546138;
    }
    ctx->pc = 0x546130u;
    SET_GPR_U32(ctx, 31, 0x546138u);
    ctx->pc = 0x546134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546130u;
            // 0x546134: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3820A0u;
    if (runtime->hasFunction(0x3820A0u)) {
        auto targetFn = runtime->lookupFunction(0x3820A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546138u; }
        if (ctx->pc != 0x546138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003820A0_0x3820a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546138u; }
        if (ctx->pc != 0x546138u) { return; }
    }
    ctx->pc = 0x546138u;
label_546138:
    // 0x546138: 0x8e02009c  lw          $v0, 0x9C($s0)
    ctx->pc = 0x546138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_54613c:
    // 0x54613c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_546140:
    if (ctx->pc == 0x546140u) {
        ctx->pc = 0x546140u;
            // 0x546140: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x546144u;
        goto label_546144;
    }
    ctx->pc = 0x54613Cu;
    {
        const bool branch_taken_0x54613c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54613c) {
            ctx->pc = 0x546140u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x54613Cu;
            // 0x546140: 0x8e040050  lw          $a0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x546174u;
            goto label_546174;
        }
    }
    ctx->pc = 0x546144u;
label_546144:
    // 0x546144: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x546144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_546148:
    // 0x546148: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x546148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_54614c:
    // 0x54614c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_546150:
    if (ctx->pc == 0x546150u) {
        ctx->pc = 0x546154u;
        goto label_546154;
    }
    ctx->pc = 0x54614Cu;
    {
        const bool branch_taken_0x54614c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x54614c) {
            ctx->pc = 0x546170u;
            goto label_546170;
        }
    }
    ctx->pc = 0x546154u;
label_546154:
    // 0x546154: 0xc0dc408  jal         func_371020
label_546158:
    if (ctx->pc == 0x546158u) {
        ctx->pc = 0x546158u;
            // 0x546158: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x54615Cu;
        goto label_54615c;
    }
    ctx->pc = 0x546154u;
    SET_GPR_U32(ctx, 31, 0x54615Cu);
    ctx->pc = 0x546158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546154u;
            // 0x546158: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x371020u;
    if (runtime->hasFunction(0x371020u)) {
        auto targetFn = runtime->lookupFunction(0x371020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54615Cu; }
        if (ctx->pc != 0x54615Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00371020_0x371020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x54615Cu; }
        if (ctx->pc != 0x54615Cu) { return; }
    }
    ctx->pc = 0x54615Cu;
label_54615c:
    // 0x54615c: 0xc0e0824  jal         func_382090
label_546160:
    if (ctx->pc == 0x546160u) {
        ctx->pc = 0x546160u;
            // 0x546160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546164u;
        goto label_546164;
    }
    ctx->pc = 0x54615Cu;
    SET_GPR_U32(ctx, 31, 0x546164u);
    ctx->pc = 0x546160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54615Cu;
            // 0x546160: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382090u;
    if (runtime->hasFunction(0x382090u)) {
        auto targetFn = runtime->lookupFunction(0x382090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546164u; }
        if (ctx->pc != 0x546164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382090_0x382090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546164u; }
        if (ctx->pc != 0x546164u) { return; }
    }
    ctx->pc = 0x546164u;
label_546164:
    // 0x546164: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x546164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_546168:
    // 0x546168: 0xc0e081c  jal         func_382070
label_54616c:
    if (ctx->pc == 0x54616Cu) {
        ctx->pc = 0x54616Cu;
            // 0x54616c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546170u;
        goto label_546170;
    }
    ctx->pc = 0x546168u;
    SET_GPR_U32(ctx, 31, 0x546170u);
    ctx->pc = 0x54616Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546168u;
            // 0x54616c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382070u;
    if (runtime->hasFunction(0x382070u)) {
        auto targetFn = runtime->lookupFunction(0x382070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546170u; }
        if (ctx->pc != 0x546170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382070_0x382070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546170u; }
        if (ctx->pc != 0x546170u) { return; }
    }
    ctx->pc = 0x546170u;
label_546170:
    // 0x546170: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x546170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_546174:
    // 0x546174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x546174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546178:
    // 0x546178: 0xc0e080c  jal         func_382030
label_54617c:
    if (ctx->pc == 0x54617Cu) {
        ctx->pc = 0x54617Cu;
            // 0x54617c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x546180u;
        goto label_546180;
    }
    ctx->pc = 0x546178u;
    SET_GPR_U32(ctx, 31, 0x546180u);
    ctx->pc = 0x54617Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546178u;
            // 0x54617c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x382030u;
    if (runtime->hasFunction(0x382030u)) {
        auto targetFn = runtime->lookupFunction(0x382030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546180u; }
        if (ctx->pc != 0x546180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00382030_0x382030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546180u; }
        if (ctx->pc != 0x546180u) { return; }
    }
    ctx->pc = 0x546180u;
label_546180:
    // 0x546180: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x546180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_546184:
    // 0x546184: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x546184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_546188:
    // 0x546188: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x546188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_54618c:
    // 0x54618c: 0xc08914c  jal         func_224530
label_546190:
    if (ctx->pc == 0x546190u) {
        ctx->pc = 0x546190u;
            // 0x546190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546194u;
        goto label_546194;
    }
    ctx->pc = 0x54618Cu;
    SET_GPR_U32(ctx, 31, 0x546194u);
    ctx->pc = 0x546190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54618Cu;
            // 0x546190: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546194u; }
        if (ctx->pc != 0x546194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546194u; }
        if (ctx->pc != 0x546194u) { return; }
    }
    ctx->pc = 0x546194u;
label_546194:
    // 0x546194: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x546194u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_546198:
    // 0x546198: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x546198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_54619c:
    // 0x54619c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x54619cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5461a0:
    // 0x5461a0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x5461a0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_5461a4:
    // 0x5461a4: 0xc0b6df0  jal         func_2DB7C0
label_5461a8:
    if (ctx->pc == 0x5461A8u) {
        ctx->pc = 0x5461A8u;
            // 0x5461a8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5461ACu;
        goto label_5461ac;
    }
    ctx->pc = 0x5461A4u;
    SET_GPR_U32(ctx, 31, 0x5461ACu);
    ctx->pc = 0x5461A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5461A4u;
            // 0x5461a8: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB7C0u;
    if (runtime->hasFunction(0x2DB7C0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461ACu; }
        if (ctx->pc != 0x5461ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB7C0_0x2db7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461ACu; }
        if (ctx->pc != 0x5461ACu) { return; }
    }
    ctx->pc = 0x5461ACu;
label_5461ac:
    // 0x5461ac: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x5461acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5461b0:
    // 0x5461b0: 0xc0e07f8  jal         func_381FE0
label_5461b4:
    if (ctx->pc == 0x5461B4u) {
        ctx->pc = 0x5461B4u;
            // 0x5461b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5461B8u;
        goto label_5461b8;
    }
    ctx->pc = 0x5461B0u;
    SET_GPR_U32(ctx, 31, 0x5461B8u);
    ctx->pc = 0x5461B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5461B0u;
            // 0x5461b4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x381FE0u;
    if (runtime->hasFunction(0x381FE0u)) {
        auto targetFn = runtime->lookupFunction(0x381FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461B8u; }
        if (ctx->pc != 0x5461B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00381FE0_0x381fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461B8u; }
        if (ctx->pc != 0x5461B8u) { return; }
    }
    ctx->pc = 0x5461B8u;
label_5461b8:
    // 0x5461b8: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x5461b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_5461bc:
    // 0x5461bc: 0xc0dc3f4  jal         func_370FD0
label_5461c0:
    if (ctx->pc == 0x5461C0u) {
        ctx->pc = 0x5461C0u;
            // 0x5461c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5461C4u;
        goto label_5461c4;
    }
    ctx->pc = 0x5461BCu;
    SET_GPR_U32(ctx, 31, 0x5461C4u);
    ctx->pc = 0x5461C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5461BCu;
            // 0x5461c0: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x370FD0u;
    if (runtime->hasFunction(0x370FD0u)) {
        auto targetFn = runtime->lookupFunction(0x370FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461C4u; }
        if (ctx->pc != 0x5461C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00370FD0_0x370fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5461C4u; }
        if (ctx->pc != 0x5461C4u) { return; }
    }
    ctx->pc = 0x5461C4u;
label_5461c4:
    // 0x5461c4: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x5461c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_5461c8:
    // 0x5461c8: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x5461c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_5461cc:
    // 0x5461cc: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_5461d0:
    if (ctx->pc == 0x5461D0u) {
        ctx->pc = 0x5461D4u;
        goto label_5461d4;
    }
    ctx->pc = 0x5461CCu;
    {
        const bool branch_taken_0x5461cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5461cc) {
            ctx->pc = 0x5461E4u;
            goto label_5461e4;
        }
    }
    ctx->pc = 0x5461D4u;
label_5461d4:
    // 0x5461d4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x5461d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_5461d8:
    // 0x5461d8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x5461d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_5461dc:
    // 0x5461dc: 0x320f809  jalr        $t9
label_5461e0:
    if (ctx->pc == 0x5461E0u) {
        ctx->pc = 0x5461E0u;
            // 0x5461e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5461E4u;
        goto label_5461e4;
    }
    ctx->pc = 0x5461DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5461E4u);
        ctx->pc = 0x5461E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5461DCu;
            // 0x5461e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5461E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5461E4u; }
            if (ctx->pc != 0x5461E4u) { return; }
        }
        }
    }
    ctx->pc = 0x5461E4u;
label_5461e4:
    // 0x5461e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5461e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5461e8:
    // 0x5461e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5461e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5461ec:
    // 0x5461ec: 0x3e00008  jr          $ra
label_5461f0:
    if (ctx->pc == 0x5461F0u) {
        ctx->pc = 0x5461F0u;
            // 0x5461f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5461F4u;
        goto label_5461f4;
    }
    ctx->pc = 0x5461ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5461F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5461ECu;
            // 0x5461f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5461F4u;
label_5461f4:
    // 0x5461f4: 0x0  nop
    ctx->pc = 0x5461f4u;
    // NOP
label_5461f8:
    // 0x5461f8: 0x0  nop
    ctx->pc = 0x5461f8u;
    // NOP
label_5461fc:
    // 0x5461fc: 0x0  nop
    ctx->pc = 0x5461fcu;
    // NOP
label_546200:
    // 0x546200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x546200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_546204:
    // 0x546204: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x546204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546208:
    // 0x546208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x546208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_54620c:
    // 0x54620c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x54620cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_546210:
    // 0x546210: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x546210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_546214:
    // 0x546214: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x546214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_546218:
    // 0x546218: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x546218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_54621c:
    // 0x54621c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x54621cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_546220:
    // 0x546220: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x546220u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_546224:
    // 0x546224: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x546224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_546228:
    // 0x546228: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x546228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_54622c:
    // 0x54622c: 0xc08bff0  jal         func_22FFC0
label_546230:
    if (ctx->pc == 0x546230u) {
        ctx->pc = 0x546230u;
            // 0x546230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546234u;
        goto label_546234;
    }
    ctx->pc = 0x54622Cu;
    SET_GPR_U32(ctx, 31, 0x546234u);
    ctx->pc = 0x546230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x54622Cu;
            // 0x546230: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546234u; }
        if (ctx->pc != 0x546234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546234u; }
        if (ctx->pc != 0x546234u) { return; }
    }
    ctx->pc = 0x546234u;
label_546234:
    // 0x546234: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x546234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_546238:
    // 0x546238: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x546238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_54623c:
    // 0x54623c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x54623cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_546240:
    // 0x546240: 0xc08914c  jal         func_224530
label_546244:
    if (ctx->pc == 0x546244u) {
        ctx->pc = 0x546244u;
            // 0x546244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546248u;
        goto label_546248;
    }
    ctx->pc = 0x546240u;
    SET_GPR_U32(ctx, 31, 0x546248u);
    ctx->pc = 0x546244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546240u;
            // 0x546244: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546248u; }
        if (ctx->pc != 0x546248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546248u; }
        if (ctx->pc != 0x546248u) { return; }
    }
    ctx->pc = 0x546248u;
label_546248:
    // 0x546248: 0xc0e393c  jal         func_38E4F0
label_54624c:
    if (ctx->pc == 0x54624Cu) {
        ctx->pc = 0x54624Cu;
            // 0x54624c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x546250u;
        goto label_546250;
    }
    ctx->pc = 0x546248u;
    SET_GPR_U32(ctx, 31, 0x546250u);
    ctx->pc = 0x54624Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x546248u;
            // 0x54624c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546250u; }
        if (ctx->pc != 0x546250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x546250u; }
        if (ctx->pc != 0x546250u) { return; }
    }
    ctx->pc = 0x546250u;
label_546250:
    // 0x546250: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x546250u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_546254:
    // 0x546254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x546254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_546258:
    // 0x546258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x546258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_54625c:
    // 0x54625c: 0x3e00008  jr          $ra
label_546260:
    if (ctx->pc == 0x546260u) {
        ctx->pc = 0x546260u;
            // 0x546260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x546264u;
        goto label_546264;
    }
    ctx->pc = 0x54625Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x546260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x54625Cu;
            // 0x546260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x546264u;
label_546264:
    // 0x546264: 0x0  nop
    ctx->pc = 0x546264u;
    // NOP
label_546268:
    // 0x546268: 0x0  nop
    ctx->pc = 0x546268u;
    // NOP
label_54626c:
    // 0x54626c: 0x0  nop
    ctx->pc = 0x54626cu;
    // NOP
}
