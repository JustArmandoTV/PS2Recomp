#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00249AE0
// Address: 0x249ae0 - 0x24a2e0
void sub_00249AE0_0x249ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249AE0_0x249ae0");
#endif

    switch (ctx->pc) {
        case 0x249ae0u: goto label_249ae0;
        case 0x249ae4u: goto label_249ae4;
        case 0x249ae8u: goto label_249ae8;
        case 0x249aecu: goto label_249aec;
        case 0x249af0u: goto label_249af0;
        case 0x249af4u: goto label_249af4;
        case 0x249af8u: goto label_249af8;
        case 0x249afcu: goto label_249afc;
        case 0x249b00u: goto label_249b00;
        case 0x249b04u: goto label_249b04;
        case 0x249b08u: goto label_249b08;
        case 0x249b0cu: goto label_249b0c;
        case 0x249b10u: goto label_249b10;
        case 0x249b14u: goto label_249b14;
        case 0x249b18u: goto label_249b18;
        case 0x249b1cu: goto label_249b1c;
        case 0x249b20u: goto label_249b20;
        case 0x249b24u: goto label_249b24;
        case 0x249b28u: goto label_249b28;
        case 0x249b2cu: goto label_249b2c;
        case 0x249b30u: goto label_249b30;
        case 0x249b34u: goto label_249b34;
        case 0x249b38u: goto label_249b38;
        case 0x249b3cu: goto label_249b3c;
        case 0x249b40u: goto label_249b40;
        case 0x249b44u: goto label_249b44;
        case 0x249b48u: goto label_249b48;
        case 0x249b4cu: goto label_249b4c;
        case 0x249b50u: goto label_249b50;
        case 0x249b54u: goto label_249b54;
        case 0x249b58u: goto label_249b58;
        case 0x249b5cu: goto label_249b5c;
        case 0x249b60u: goto label_249b60;
        case 0x249b64u: goto label_249b64;
        case 0x249b68u: goto label_249b68;
        case 0x249b6cu: goto label_249b6c;
        case 0x249b70u: goto label_249b70;
        case 0x249b74u: goto label_249b74;
        case 0x249b78u: goto label_249b78;
        case 0x249b7cu: goto label_249b7c;
        case 0x249b80u: goto label_249b80;
        case 0x249b84u: goto label_249b84;
        case 0x249b88u: goto label_249b88;
        case 0x249b8cu: goto label_249b8c;
        case 0x249b90u: goto label_249b90;
        case 0x249b94u: goto label_249b94;
        case 0x249b98u: goto label_249b98;
        case 0x249b9cu: goto label_249b9c;
        case 0x249ba0u: goto label_249ba0;
        case 0x249ba4u: goto label_249ba4;
        case 0x249ba8u: goto label_249ba8;
        case 0x249bacu: goto label_249bac;
        case 0x249bb0u: goto label_249bb0;
        case 0x249bb4u: goto label_249bb4;
        case 0x249bb8u: goto label_249bb8;
        case 0x249bbcu: goto label_249bbc;
        case 0x249bc0u: goto label_249bc0;
        case 0x249bc4u: goto label_249bc4;
        case 0x249bc8u: goto label_249bc8;
        case 0x249bccu: goto label_249bcc;
        case 0x249bd0u: goto label_249bd0;
        case 0x249bd4u: goto label_249bd4;
        case 0x249bd8u: goto label_249bd8;
        case 0x249bdcu: goto label_249bdc;
        case 0x249be0u: goto label_249be0;
        case 0x249be4u: goto label_249be4;
        case 0x249be8u: goto label_249be8;
        case 0x249becu: goto label_249bec;
        case 0x249bf0u: goto label_249bf0;
        case 0x249bf4u: goto label_249bf4;
        case 0x249bf8u: goto label_249bf8;
        case 0x249bfcu: goto label_249bfc;
        case 0x249c00u: goto label_249c00;
        case 0x249c04u: goto label_249c04;
        case 0x249c08u: goto label_249c08;
        case 0x249c0cu: goto label_249c0c;
        case 0x249c10u: goto label_249c10;
        case 0x249c14u: goto label_249c14;
        case 0x249c18u: goto label_249c18;
        case 0x249c1cu: goto label_249c1c;
        case 0x249c20u: goto label_249c20;
        case 0x249c24u: goto label_249c24;
        case 0x249c28u: goto label_249c28;
        case 0x249c2cu: goto label_249c2c;
        case 0x249c30u: goto label_249c30;
        case 0x249c34u: goto label_249c34;
        case 0x249c38u: goto label_249c38;
        case 0x249c3cu: goto label_249c3c;
        case 0x249c40u: goto label_249c40;
        case 0x249c44u: goto label_249c44;
        case 0x249c48u: goto label_249c48;
        case 0x249c4cu: goto label_249c4c;
        case 0x249c50u: goto label_249c50;
        case 0x249c54u: goto label_249c54;
        case 0x249c58u: goto label_249c58;
        case 0x249c5cu: goto label_249c5c;
        case 0x249c60u: goto label_249c60;
        case 0x249c64u: goto label_249c64;
        case 0x249c68u: goto label_249c68;
        case 0x249c6cu: goto label_249c6c;
        case 0x249c70u: goto label_249c70;
        case 0x249c74u: goto label_249c74;
        case 0x249c78u: goto label_249c78;
        case 0x249c7cu: goto label_249c7c;
        case 0x249c80u: goto label_249c80;
        case 0x249c84u: goto label_249c84;
        case 0x249c88u: goto label_249c88;
        case 0x249c8cu: goto label_249c8c;
        case 0x249c90u: goto label_249c90;
        case 0x249c94u: goto label_249c94;
        case 0x249c98u: goto label_249c98;
        case 0x249c9cu: goto label_249c9c;
        case 0x249ca0u: goto label_249ca0;
        case 0x249ca4u: goto label_249ca4;
        case 0x249ca8u: goto label_249ca8;
        case 0x249cacu: goto label_249cac;
        case 0x249cb0u: goto label_249cb0;
        case 0x249cb4u: goto label_249cb4;
        case 0x249cb8u: goto label_249cb8;
        case 0x249cbcu: goto label_249cbc;
        case 0x249cc0u: goto label_249cc0;
        case 0x249cc4u: goto label_249cc4;
        case 0x249cc8u: goto label_249cc8;
        case 0x249cccu: goto label_249ccc;
        case 0x249cd0u: goto label_249cd0;
        case 0x249cd4u: goto label_249cd4;
        case 0x249cd8u: goto label_249cd8;
        case 0x249cdcu: goto label_249cdc;
        case 0x249ce0u: goto label_249ce0;
        case 0x249ce4u: goto label_249ce4;
        case 0x249ce8u: goto label_249ce8;
        case 0x249cecu: goto label_249cec;
        case 0x249cf0u: goto label_249cf0;
        case 0x249cf4u: goto label_249cf4;
        case 0x249cf8u: goto label_249cf8;
        case 0x249cfcu: goto label_249cfc;
        case 0x249d00u: goto label_249d00;
        case 0x249d04u: goto label_249d04;
        case 0x249d08u: goto label_249d08;
        case 0x249d0cu: goto label_249d0c;
        case 0x249d10u: goto label_249d10;
        case 0x249d14u: goto label_249d14;
        case 0x249d18u: goto label_249d18;
        case 0x249d1cu: goto label_249d1c;
        case 0x249d20u: goto label_249d20;
        case 0x249d24u: goto label_249d24;
        case 0x249d28u: goto label_249d28;
        case 0x249d2cu: goto label_249d2c;
        case 0x249d30u: goto label_249d30;
        case 0x249d34u: goto label_249d34;
        case 0x249d38u: goto label_249d38;
        case 0x249d3cu: goto label_249d3c;
        case 0x249d40u: goto label_249d40;
        case 0x249d44u: goto label_249d44;
        case 0x249d48u: goto label_249d48;
        case 0x249d4cu: goto label_249d4c;
        case 0x249d50u: goto label_249d50;
        case 0x249d54u: goto label_249d54;
        case 0x249d58u: goto label_249d58;
        case 0x249d5cu: goto label_249d5c;
        case 0x249d60u: goto label_249d60;
        case 0x249d64u: goto label_249d64;
        case 0x249d68u: goto label_249d68;
        case 0x249d6cu: goto label_249d6c;
        case 0x249d70u: goto label_249d70;
        case 0x249d74u: goto label_249d74;
        case 0x249d78u: goto label_249d78;
        case 0x249d7cu: goto label_249d7c;
        case 0x249d80u: goto label_249d80;
        case 0x249d84u: goto label_249d84;
        case 0x249d88u: goto label_249d88;
        case 0x249d8cu: goto label_249d8c;
        case 0x249d90u: goto label_249d90;
        case 0x249d94u: goto label_249d94;
        case 0x249d98u: goto label_249d98;
        case 0x249d9cu: goto label_249d9c;
        case 0x249da0u: goto label_249da0;
        case 0x249da4u: goto label_249da4;
        case 0x249da8u: goto label_249da8;
        case 0x249dacu: goto label_249dac;
        case 0x249db0u: goto label_249db0;
        case 0x249db4u: goto label_249db4;
        case 0x249db8u: goto label_249db8;
        case 0x249dbcu: goto label_249dbc;
        case 0x249dc0u: goto label_249dc0;
        case 0x249dc4u: goto label_249dc4;
        case 0x249dc8u: goto label_249dc8;
        case 0x249dccu: goto label_249dcc;
        case 0x249dd0u: goto label_249dd0;
        case 0x249dd4u: goto label_249dd4;
        case 0x249dd8u: goto label_249dd8;
        case 0x249ddcu: goto label_249ddc;
        case 0x249de0u: goto label_249de0;
        case 0x249de4u: goto label_249de4;
        case 0x249de8u: goto label_249de8;
        case 0x249decu: goto label_249dec;
        case 0x249df0u: goto label_249df0;
        case 0x249df4u: goto label_249df4;
        case 0x249df8u: goto label_249df8;
        case 0x249dfcu: goto label_249dfc;
        case 0x249e00u: goto label_249e00;
        case 0x249e04u: goto label_249e04;
        case 0x249e08u: goto label_249e08;
        case 0x249e0cu: goto label_249e0c;
        case 0x249e10u: goto label_249e10;
        case 0x249e14u: goto label_249e14;
        case 0x249e18u: goto label_249e18;
        case 0x249e1cu: goto label_249e1c;
        case 0x249e20u: goto label_249e20;
        case 0x249e24u: goto label_249e24;
        case 0x249e28u: goto label_249e28;
        case 0x249e2cu: goto label_249e2c;
        case 0x249e30u: goto label_249e30;
        case 0x249e34u: goto label_249e34;
        case 0x249e38u: goto label_249e38;
        case 0x249e3cu: goto label_249e3c;
        case 0x249e40u: goto label_249e40;
        case 0x249e44u: goto label_249e44;
        case 0x249e48u: goto label_249e48;
        case 0x249e4cu: goto label_249e4c;
        case 0x249e50u: goto label_249e50;
        case 0x249e54u: goto label_249e54;
        case 0x249e58u: goto label_249e58;
        case 0x249e5cu: goto label_249e5c;
        case 0x249e60u: goto label_249e60;
        case 0x249e64u: goto label_249e64;
        case 0x249e68u: goto label_249e68;
        case 0x249e6cu: goto label_249e6c;
        case 0x249e70u: goto label_249e70;
        case 0x249e74u: goto label_249e74;
        case 0x249e78u: goto label_249e78;
        case 0x249e7cu: goto label_249e7c;
        case 0x249e80u: goto label_249e80;
        case 0x249e84u: goto label_249e84;
        case 0x249e88u: goto label_249e88;
        case 0x249e8cu: goto label_249e8c;
        case 0x249e90u: goto label_249e90;
        case 0x249e94u: goto label_249e94;
        case 0x249e98u: goto label_249e98;
        case 0x249e9cu: goto label_249e9c;
        case 0x249ea0u: goto label_249ea0;
        case 0x249ea4u: goto label_249ea4;
        case 0x249ea8u: goto label_249ea8;
        case 0x249eacu: goto label_249eac;
        case 0x249eb0u: goto label_249eb0;
        case 0x249eb4u: goto label_249eb4;
        case 0x249eb8u: goto label_249eb8;
        case 0x249ebcu: goto label_249ebc;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ec4u: goto label_249ec4;
        case 0x249ec8u: goto label_249ec8;
        case 0x249eccu: goto label_249ecc;
        case 0x249ed0u: goto label_249ed0;
        case 0x249ed4u: goto label_249ed4;
        case 0x249ed8u: goto label_249ed8;
        case 0x249edcu: goto label_249edc;
        case 0x249ee0u: goto label_249ee0;
        case 0x249ee4u: goto label_249ee4;
        case 0x249ee8u: goto label_249ee8;
        case 0x249eecu: goto label_249eec;
        case 0x249ef0u: goto label_249ef0;
        case 0x249ef4u: goto label_249ef4;
        case 0x249ef8u: goto label_249ef8;
        case 0x249efcu: goto label_249efc;
        case 0x249f00u: goto label_249f00;
        case 0x249f04u: goto label_249f04;
        case 0x249f08u: goto label_249f08;
        case 0x249f0cu: goto label_249f0c;
        case 0x249f10u: goto label_249f10;
        case 0x249f14u: goto label_249f14;
        case 0x249f18u: goto label_249f18;
        case 0x249f1cu: goto label_249f1c;
        case 0x249f20u: goto label_249f20;
        case 0x249f24u: goto label_249f24;
        case 0x249f28u: goto label_249f28;
        case 0x249f2cu: goto label_249f2c;
        case 0x249f30u: goto label_249f30;
        case 0x249f34u: goto label_249f34;
        case 0x249f38u: goto label_249f38;
        case 0x249f3cu: goto label_249f3c;
        case 0x249f40u: goto label_249f40;
        case 0x249f44u: goto label_249f44;
        case 0x249f48u: goto label_249f48;
        case 0x249f4cu: goto label_249f4c;
        case 0x249f50u: goto label_249f50;
        case 0x249f54u: goto label_249f54;
        case 0x249f58u: goto label_249f58;
        case 0x249f5cu: goto label_249f5c;
        case 0x249f60u: goto label_249f60;
        case 0x249f64u: goto label_249f64;
        case 0x249f68u: goto label_249f68;
        case 0x249f6cu: goto label_249f6c;
        case 0x249f70u: goto label_249f70;
        case 0x249f74u: goto label_249f74;
        case 0x249f78u: goto label_249f78;
        case 0x249f7cu: goto label_249f7c;
        case 0x249f80u: goto label_249f80;
        case 0x249f84u: goto label_249f84;
        case 0x249f88u: goto label_249f88;
        case 0x249f8cu: goto label_249f8c;
        case 0x249f90u: goto label_249f90;
        case 0x249f94u: goto label_249f94;
        case 0x249f98u: goto label_249f98;
        case 0x249f9cu: goto label_249f9c;
        case 0x249fa0u: goto label_249fa0;
        case 0x249fa4u: goto label_249fa4;
        case 0x249fa8u: goto label_249fa8;
        case 0x249facu: goto label_249fac;
        case 0x249fb0u: goto label_249fb0;
        case 0x249fb4u: goto label_249fb4;
        case 0x249fb8u: goto label_249fb8;
        case 0x249fbcu: goto label_249fbc;
        case 0x249fc0u: goto label_249fc0;
        case 0x249fc4u: goto label_249fc4;
        case 0x249fc8u: goto label_249fc8;
        case 0x249fccu: goto label_249fcc;
        case 0x249fd0u: goto label_249fd0;
        case 0x249fd4u: goto label_249fd4;
        case 0x249fd8u: goto label_249fd8;
        case 0x249fdcu: goto label_249fdc;
        case 0x249fe0u: goto label_249fe0;
        case 0x249fe4u: goto label_249fe4;
        case 0x249fe8u: goto label_249fe8;
        case 0x249fecu: goto label_249fec;
        case 0x249ff0u: goto label_249ff0;
        case 0x249ff4u: goto label_249ff4;
        case 0x249ff8u: goto label_249ff8;
        case 0x249ffcu: goto label_249ffc;
        case 0x24a000u: goto label_24a000;
        case 0x24a004u: goto label_24a004;
        case 0x24a008u: goto label_24a008;
        case 0x24a00cu: goto label_24a00c;
        case 0x24a010u: goto label_24a010;
        case 0x24a014u: goto label_24a014;
        case 0x24a018u: goto label_24a018;
        case 0x24a01cu: goto label_24a01c;
        case 0x24a020u: goto label_24a020;
        case 0x24a024u: goto label_24a024;
        case 0x24a028u: goto label_24a028;
        case 0x24a02cu: goto label_24a02c;
        case 0x24a030u: goto label_24a030;
        case 0x24a034u: goto label_24a034;
        case 0x24a038u: goto label_24a038;
        case 0x24a03cu: goto label_24a03c;
        case 0x24a040u: goto label_24a040;
        case 0x24a044u: goto label_24a044;
        case 0x24a048u: goto label_24a048;
        case 0x24a04cu: goto label_24a04c;
        case 0x24a050u: goto label_24a050;
        case 0x24a054u: goto label_24a054;
        case 0x24a058u: goto label_24a058;
        case 0x24a05cu: goto label_24a05c;
        case 0x24a060u: goto label_24a060;
        case 0x24a064u: goto label_24a064;
        case 0x24a068u: goto label_24a068;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a070u: goto label_24a070;
        case 0x24a074u: goto label_24a074;
        case 0x24a078u: goto label_24a078;
        case 0x24a07cu: goto label_24a07c;
        case 0x24a080u: goto label_24a080;
        case 0x24a084u: goto label_24a084;
        case 0x24a088u: goto label_24a088;
        case 0x24a08cu: goto label_24a08c;
        case 0x24a090u: goto label_24a090;
        case 0x24a094u: goto label_24a094;
        case 0x24a098u: goto label_24a098;
        case 0x24a09cu: goto label_24a09c;
        case 0x24a0a0u: goto label_24a0a0;
        case 0x24a0a4u: goto label_24a0a4;
        case 0x24a0a8u: goto label_24a0a8;
        case 0x24a0acu: goto label_24a0ac;
        case 0x24a0b0u: goto label_24a0b0;
        case 0x24a0b4u: goto label_24a0b4;
        case 0x24a0b8u: goto label_24a0b8;
        case 0x24a0bcu: goto label_24a0bc;
        case 0x24a0c0u: goto label_24a0c0;
        case 0x24a0c4u: goto label_24a0c4;
        case 0x24a0c8u: goto label_24a0c8;
        case 0x24a0ccu: goto label_24a0cc;
        case 0x24a0d0u: goto label_24a0d0;
        case 0x24a0d4u: goto label_24a0d4;
        case 0x24a0d8u: goto label_24a0d8;
        case 0x24a0dcu: goto label_24a0dc;
        case 0x24a0e0u: goto label_24a0e0;
        case 0x24a0e4u: goto label_24a0e4;
        case 0x24a0e8u: goto label_24a0e8;
        case 0x24a0ecu: goto label_24a0ec;
        case 0x24a0f0u: goto label_24a0f0;
        case 0x24a0f4u: goto label_24a0f4;
        case 0x24a0f8u: goto label_24a0f8;
        case 0x24a0fcu: goto label_24a0fc;
        case 0x24a100u: goto label_24a100;
        case 0x24a104u: goto label_24a104;
        case 0x24a108u: goto label_24a108;
        case 0x24a10cu: goto label_24a10c;
        case 0x24a110u: goto label_24a110;
        case 0x24a114u: goto label_24a114;
        case 0x24a118u: goto label_24a118;
        case 0x24a11cu: goto label_24a11c;
        case 0x24a120u: goto label_24a120;
        case 0x24a124u: goto label_24a124;
        case 0x24a128u: goto label_24a128;
        case 0x24a12cu: goto label_24a12c;
        case 0x24a130u: goto label_24a130;
        case 0x24a134u: goto label_24a134;
        case 0x24a138u: goto label_24a138;
        case 0x24a13cu: goto label_24a13c;
        case 0x24a140u: goto label_24a140;
        case 0x24a144u: goto label_24a144;
        case 0x24a148u: goto label_24a148;
        case 0x24a14cu: goto label_24a14c;
        case 0x24a150u: goto label_24a150;
        case 0x24a154u: goto label_24a154;
        case 0x24a158u: goto label_24a158;
        case 0x24a15cu: goto label_24a15c;
        case 0x24a160u: goto label_24a160;
        case 0x24a164u: goto label_24a164;
        case 0x24a168u: goto label_24a168;
        case 0x24a16cu: goto label_24a16c;
        case 0x24a170u: goto label_24a170;
        case 0x24a174u: goto label_24a174;
        case 0x24a178u: goto label_24a178;
        case 0x24a17cu: goto label_24a17c;
        case 0x24a180u: goto label_24a180;
        case 0x24a184u: goto label_24a184;
        case 0x24a188u: goto label_24a188;
        case 0x24a18cu: goto label_24a18c;
        case 0x24a190u: goto label_24a190;
        case 0x24a194u: goto label_24a194;
        case 0x24a198u: goto label_24a198;
        case 0x24a19cu: goto label_24a19c;
        case 0x24a1a0u: goto label_24a1a0;
        case 0x24a1a4u: goto label_24a1a4;
        case 0x24a1a8u: goto label_24a1a8;
        case 0x24a1acu: goto label_24a1ac;
        case 0x24a1b0u: goto label_24a1b0;
        case 0x24a1b4u: goto label_24a1b4;
        case 0x24a1b8u: goto label_24a1b8;
        case 0x24a1bcu: goto label_24a1bc;
        case 0x24a1c0u: goto label_24a1c0;
        case 0x24a1c4u: goto label_24a1c4;
        case 0x24a1c8u: goto label_24a1c8;
        case 0x24a1ccu: goto label_24a1cc;
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1d4u: goto label_24a1d4;
        case 0x24a1d8u: goto label_24a1d8;
        case 0x24a1dcu: goto label_24a1dc;
        case 0x24a1e0u: goto label_24a1e0;
        case 0x24a1e4u: goto label_24a1e4;
        case 0x24a1e8u: goto label_24a1e8;
        case 0x24a1ecu: goto label_24a1ec;
        case 0x24a1f0u: goto label_24a1f0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a1f8u: goto label_24a1f8;
        case 0x24a1fcu: goto label_24a1fc;
        case 0x24a200u: goto label_24a200;
        case 0x24a204u: goto label_24a204;
        case 0x24a208u: goto label_24a208;
        case 0x24a20cu: goto label_24a20c;
        case 0x24a210u: goto label_24a210;
        case 0x24a214u: goto label_24a214;
        case 0x24a218u: goto label_24a218;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a220u: goto label_24a220;
        case 0x24a224u: goto label_24a224;
        case 0x24a228u: goto label_24a228;
        case 0x24a22cu: goto label_24a22c;
        case 0x24a230u: goto label_24a230;
        case 0x24a234u: goto label_24a234;
        case 0x24a238u: goto label_24a238;
        case 0x24a23cu: goto label_24a23c;
        case 0x24a240u: goto label_24a240;
        case 0x24a244u: goto label_24a244;
        case 0x24a248u: goto label_24a248;
        case 0x24a24cu: goto label_24a24c;
        case 0x24a250u: goto label_24a250;
        case 0x24a254u: goto label_24a254;
        case 0x24a258u: goto label_24a258;
        case 0x24a25cu: goto label_24a25c;
        case 0x24a260u: goto label_24a260;
        case 0x24a264u: goto label_24a264;
        case 0x24a268u: goto label_24a268;
        case 0x24a26cu: goto label_24a26c;
        case 0x24a270u: goto label_24a270;
        case 0x24a274u: goto label_24a274;
        case 0x24a278u: goto label_24a278;
        case 0x24a27cu: goto label_24a27c;
        case 0x24a280u: goto label_24a280;
        case 0x24a284u: goto label_24a284;
        case 0x24a288u: goto label_24a288;
        case 0x24a28cu: goto label_24a28c;
        case 0x24a290u: goto label_24a290;
        case 0x24a294u: goto label_24a294;
        case 0x24a298u: goto label_24a298;
        case 0x24a29cu: goto label_24a29c;
        case 0x24a2a0u: goto label_24a2a0;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2a8u: goto label_24a2a8;
        case 0x24a2acu: goto label_24a2ac;
        case 0x24a2b0u: goto label_24a2b0;
        case 0x24a2b4u: goto label_24a2b4;
        case 0x24a2b8u: goto label_24a2b8;
        case 0x24a2bcu: goto label_24a2bc;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2c4u: goto label_24a2c4;
        case 0x24a2c8u: goto label_24a2c8;
        case 0x24a2ccu: goto label_24a2cc;
        case 0x24a2d0u: goto label_24a2d0;
        case 0x24a2d4u: goto label_24a2d4;
        case 0x24a2d8u: goto label_24a2d8;
        case 0x24a2dcu: goto label_24a2dc;
        default: break;
    }

    ctx->pc = 0x249ae0u;

label_249ae0:
    // 0x249ae0: 0x27bdccc0  addiu       $sp, $sp, -0x3340
    ctx->pc = 0x249ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294954176));
label_249ae4:
    // 0x249ae4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x249ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_249ae8:
    // 0x249ae8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x249ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_249aec:
    // 0x249aec: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x249aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_249af0:
    // 0x249af0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x249af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_249af4:
    // 0x249af4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x249af4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249af8:
    // 0x249af8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x249af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_249afc:
    // 0x249afc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x249afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_249b00:
    // 0x249b00: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x249b00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_249b04:
    // 0x249b04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x249b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_249b08:
    // 0x249b08: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x249b08u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_249b0c:
    // 0x249b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x249b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_249b10:
    // 0x249b10: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x249b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_249b14:
    // 0x249b14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x249b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_249b18:
    // 0x249b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x249b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_249b1c:
    // 0x249b1c: 0x27a332e0  addiu       $v1, $sp, 0x32E0
    ctx->pc = 0x249b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 13024));
label_249b20:
    // 0x249b20: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x249b20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_249b24:
    // 0x249b24: 0x0  nop
    ctx->pc = 0x249b24u;
    // NOP
label_249b28:
    // 0x249b28: 0x0  nop
    ctx->pc = 0x249b28u;
    // NOP
label_249b2c:
    // 0x249b2c: 0x0  nop
    ctx->pc = 0x249b2cu;
    // NOP
label_249b30:
    // 0x249b30: 0x0  nop
    ctx->pc = 0x249b30u;
    // NOP
label_249b34:
    // 0x249b34: 0x14a3fffa  bne         $a1, $v1, . + 4 + (-0x6 << 2)
label_249b38:
    if (ctx->pc == 0x249B38u) {
        ctx->pc = 0x249B3Cu;
        goto label_249b3c;
    }
    ctx->pc = 0x249B34u;
    {
        const bool branch_taken_0x249b34 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x249b34) {
            ctx->pc = 0x249B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249b20;
        }
    }
    ctx->pc = 0x249B3Cu;
label_249b3c:
    // 0x249b3c: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x249b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_249b40:
    // 0x249b40: 0xafa402d4  sw          $a0, 0x2D4($sp)
    ctx->pc = 0x249b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 4));
label_249b44:
    // 0x249b44: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x249b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_249b48:
    // 0x249b48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x249b48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249b4c:
    // 0x249b4c: 0x100001c0  b           . + 4 + (0x1C0 << 2)
label_249b50:
    if (ctx->pc == 0x249B50u) {
        ctx->pc = 0x249B50u;
            // 0x249b50: 0xafa33300  sw          $v1, 0x3300($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 13056), GPR_U32(ctx, 3));
        ctx->pc = 0x249B54u;
        goto label_249b54;
    }
    ctx->pc = 0x249B4Cu;
    {
        const bool branch_taken_0x249b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249B4Cu;
            // 0x249b50: 0xafa33300  sw          $v1, 0x3300($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 13056), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b4c) {
            ctx->pc = 0x24A250u;
            goto label_24a250;
        }
    }
    ctx->pc = 0x249B54u;
label_249b54:
    // 0x249b54: 0x0  nop
    ctx->pc = 0x249b54u;
    // NOP
label_249b58:
    // 0x249b58: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x249b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_249b5c:
    // 0x249b5c: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x249b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_249b60:
    // 0x249b60: 0x8ea50008  lw          $a1, 0x8($s5)
    ctx->pc = 0x249b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_249b64:
    // 0x249b64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x249b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_249b68:
    // 0x249b68: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x249b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_249b6c:
    // 0x249b6c: 0x16650004  bne         $s3, $a1, . + 4 + (0x4 << 2)
label_249b70:
    if (ctx->pc == 0x249B70u) {
        ctx->pc = 0x249B70u;
            // 0x249b70: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x249B74u;
        goto label_249b74;
    }
    ctx->pc = 0x249B6Cu;
    {
        const bool branch_taken_0x249b6c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 5));
        ctx->pc = 0x249B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249B6Cu;
            // 0x249b70: 0x8c720000  lw          $s2, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b6c) {
            ctx->pc = 0x249B80u;
            goto label_249b80;
        }
    }
    ctx->pc = 0x249B74u;
label_249b74:
    // 0x249b74: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x249b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_249b78:
    // 0x249b78: 0x10000003  b           . + 4 + (0x3 << 2)
label_249b7c:
    if (ctx->pc == 0x249B7Cu) {
        ctx->pc = 0x249B7Cu;
            // 0x249b7c: 0x243f021  addu        $fp, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->pc = 0x249B80u;
        goto label_249b80;
    }
    ctx->pc = 0x249B78u;
    {
        const bool branch_taken_0x249b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249B78u;
            // 0x249b7c: 0x243f021  addu        $fp, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249b78) {
            ctx->pc = 0x249B88u;
            goto label_249b88;
        }
    }
    ctx->pc = 0x249B80u;
label_249b80:
    // 0x249b80: 0x265e0200  addiu       $fp, $s2, 0x200
    ctx->pc = 0x249b80u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_249b84:
    // 0x249b84: 0x0  nop
    ctx->pc = 0x249b84u;
    // NOP
label_249b88:
    // 0x249b88: 0x100001ad  b           . + 4 + (0x1AD << 2)
label_249b8c:
    if (ctx->pc == 0x249B8Cu) {
        ctx->pc = 0x249B90u;
        goto label_249b90;
    }
    ctx->pc = 0x249B88u;
    {
        const bool branch_taken_0x249b88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249b88) {
            ctx->pc = 0x24A240u;
            goto label_24a240;
        }
    }
    ctx->pc = 0x249B90u;
label_249b90:
    // 0x249b90: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x249b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_249b94:
    // 0x249b94: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x249b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_249b98:
    // 0x249b98: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x249b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_249b9c:
    // 0x249b9c: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x249b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_249ba0:
    // 0x249ba0: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x249ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_249ba4:
    // 0x249ba4: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x249ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_249ba8:
    // 0x249ba8: 0xafa402d0  sw          $a0, 0x2D0($sp)
    ctx->pc = 0x249ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 4));
label_249bac:
    // 0x249bac: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x249bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_249bb0:
    // 0x249bb0: 0xafa03320  sw          $zero, 0x3320($sp)
    ctx->pc = 0x249bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13088), GPR_U32(ctx, 0));
label_249bb4:
    // 0x249bb4: 0xafa33300  sw          $v1, 0x3300($sp)
    ctx->pc = 0x249bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 13056), GPR_U32(ctx, 3));
label_249bb8:
    // 0x249bb8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x249bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_249bbc:
    // 0x249bbc: 0xcc600000  pref        0x00, 0x0($v1)
    ctx->pc = 0x249bbcu;
    // PREF instruction (ignored)
label_249bc0:
    // 0x249bc0: 0x26430080  addiu       $v1, $s2, 0x80
    ctx->pc = 0x249bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_249bc4:
    // 0x249bc4: 0xcc600000  pref        0x00, 0x0($v1)
    ctx->pc = 0x249bc4u;
    // PREF instruction (ignored)
label_249bc8:
    // 0x249bc8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x249bc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_249bcc:
    // 0x249bcc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x249bccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_249bd0:
    // 0x249bd0: 0x1080016d  beqz        $a0, . + 4 + (0x16D << 2)
label_249bd4:
    if (ctx->pc == 0x249BD4u) {
        ctx->pc = 0x249BD8u;
        goto label_249bd8;
    }
    ctx->pc = 0x249BD0u;
    {
        const bool branch_taken_0x249bd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x249bd0) {
            ctx->pc = 0x24A188u;
            goto label_24a188;
        }
    }
    ctx->pc = 0x249BD8u;
label_249bd8:
    // 0x249bd8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x249bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_249bdc:
    // 0x249bdc: 0x10830080  beq         $a0, $v1, . + 4 + (0x80 << 2)
label_249be0:
    if (ctx->pc == 0x249BE0u) {
        ctx->pc = 0x249BE0u;
            // 0x249be0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x249BE4u;
        goto label_249be4;
    }
    ctx->pc = 0x249BDCu;
    {
        const bool branch_taken_0x249bdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x249BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249BDCu;
            // 0x249be0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249bdc) {
            ctx->pc = 0x249DE0u;
            goto label_249de0;
        }
    }
    ctx->pc = 0x249BE4u;
label_249be4:
    // 0x249be4: 0x10830010  beq         $a0, $v1, . + 4 + (0x10 << 2)
label_249be8:
    if (ctx->pc == 0x249BE8u) {
        ctx->pc = 0x249BECu;
        goto label_249bec;
    }
    ctx->pc = 0x249BE4u;
    {
        const bool branch_taken_0x249be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x249be4) {
            ctx->pc = 0x249C28u;
            goto label_249c28;
        }
    }
    ctx->pc = 0x249BECu;
label_249bec:
    // 0x249bec: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x249becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_249bf0:
    // 0x249bf0: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_249bf4:
    if (ctx->pc == 0x249BF4u) {
        ctx->pc = 0x249BF8u;
        goto label_249bf8;
    }
    ctx->pc = 0x249BF0u;
    {
        const bool branch_taken_0x249bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x249bf0) {
            ctx->pc = 0x249C00u;
            goto label_249c00;
        }
    }
    ctx->pc = 0x249BF8u;
label_249bf8:
    // 0x249bf8: 0x10000163  b           . + 4 + (0x163 << 2)
label_249bfc:
    if (ctx->pc == 0x249BFCu) {
        ctx->pc = 0x249C00u;
        goto label_249c00;
    }
    ctx->pc = 0x249BF8u;
    {
        const bool branch_taken_0x249bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249bf8) {
            ctx->pc = 0x24A188u;
            goto label_24a188;
        }
    }
    ctx->pc = 0x249C00u;
label_249c00:
    // 0x249c00: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x249c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_249c04:
    // 0x249c04: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x249c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_249c08:
    // 0x249c08: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x249c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_249c0c:
    // 0x249c0c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x249c0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_249c10:
    // 0x249c10: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x249c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_249c14:
    // 0x249c14: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x249c14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_249c18:
    // 0x249c18: 0x320f809  jalr        $t9
label_249c1c:
    if (ctx->pc == 0x249C1Cu) {
        ctx->pc = 0x249C1Cu;
            // 0x249c1c: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x249C20u;
        goto label_249c20;
    }
    ctx->pc = 0x249C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x249C20u);
        ctx->pc = 0x249C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249C18u;
            // 0x249c1c: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249C20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249C20u; }
            if (ctx->pc != 0x249C20u) { return; }
        }
        }
    }
    ctx->pc = 0x249C20u;
label_249c20:
    // 0x249c20: 0x10000159  b           . + 4 + (0x159 << 2)
label_249c24:
    if (ctx->pc == 0x249C24u) {
        ctx->pc = 0x249C28u;
        goto label_249c28;
    }
    ctx->pc = 0x249C20u;
    {
        const bool branch_taken_0x249c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249c20) {
            ctx->pc = 0x24A188u;
            goto label_24a188;
        }
    }
    ctx->pc = 0x249C28u;
label_249c28:
    // 0x249c28: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x249c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_249c2c:
    // 0x249c2c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x249c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_249c30:
    // 0x249c30: 0xafa20260  sw          $v0, 0x260($sp)
    ctx->pc = 0x249c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 2));
label_249c34:
    // 0x249c34: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x249c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_249c38:
    // 0x249c38: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x249c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_249c3c:
    // 0x249c3c: 0xafa20264  sw          $v0, 0x264($sp)
    ctx->pc = 0x249c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 2));
label_249c40:
    // 0x249c40: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x249c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_249c44:
    // 0x249c44: 0x8fa20264  lw          $v0, 0x264($sp)
    ctx->pc = 0x249c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_249c48:
    // 0x249c48: 0xafa5026c  sw          $a1, 0x26C($sp)
    ctx->pc = 0x249c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 5));
label_249c4c:
    // 0x249c4c: 0xafb40268  sw          $s4, 0x268($sp)
    ctx->pc = 0x249c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 20));
label_249c50:
    // 0x249c50: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x249c50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_249c54:
    // 0x249c54: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x249c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_249c58:
    // 0x249c58: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x249c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_249c5c:
    // 0x249c5c: 0xc4a20040  lwc1        $f2, 0x40($a1)
    ctx->pc = 0x249c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249c60:
    // 0x249c60: 0xc4a10050  lwc1        $f1, 0x50($a1)
    ctx->pc = 0x249c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249c64:
    // 0x249c64: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x249c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249c68:
    // 0x249c68: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249c68u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249c6c:
    // 0x249c6c: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x249c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_249c70:
    // 0x249c70: 0xc4a20044  lwc1        $f2, 0x44($a1)
    ctx->pc = 0x249c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249c74:
    // 0x249c74: 0xc4a10054  lwc1        $f1, 0x54($a1)
    ctx->pc = 0x249c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249c78:
    // 0x249c78: 0xc7a800f0  lwc1        $f8, 0xF0($sp)
    ctx->pc = 0x249c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_249c7c:
    // 0x249c7c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249c7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249c80:
    // 0x249c80: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x249c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_249c84:
    // 0x249c84: 0xc4a20048  lwc1        $f2, 0x48($a1)
    ctx->pc = 0x249c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249c88:
    // 0x249c88: 0xc4a10058  lwc1        $f1, 0x58($a1)
    ctx->pc = 0x249c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249c8c:
    // 0x249c8c: 0xc7a700f4  lwc1        $f7, 0xF4($sp)
    ctx->pc = 0x249c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_249c90:
    // 0x249c90: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249c90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249c94:
    // 0x249c94: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x249c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_249c98:
    // 0x249c98: 0xc4a2004c  lwc1        $f2, 0x4C($a1)
    ctx->pc = 0x249c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249c9c:
    // 0x249c9c: 0xc4a1005c  lwc1        $f1, 0x5C($a1)
    ctx->pc = 0x249c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249ca0:
    // 0x249ca0: 0xc7a600f8  lwc1        $f6, 0xF8($sp)
    ctx->pc = 0x249ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249ca4:
    // 0x249ca4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249ca4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249ca8:
    // 0x249ca8: 0xe7a100fc  swc1        $f1, 0xFC($sp)
    ctx->pc = 0x249ca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_249cac:
    // 0x249cac: 0xc4c20050  lwc1        $f2, 0x50($a2)
    ctx->pc = 0x249cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249cb0:
    // 0x249cb0: 0xc4c10040  lwc1        $f1, 0x40($a2)
    ctx->pc = 0x249cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249cb4:
    // 0x249cb4: 0xc7a400fc  lwc1        $f4, 0xFC($sp)
    ctx->pc = 0x249cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249cb8:
    // 0x249cb8: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249cb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249cbc:
    // 0x249cbc: 0xe7a100e0  swc1        $f1, 0xE0($sp)
    ctx->pc = 0x249cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_249cc0:
    // 0x249cc0: 0xc4c30054  lwc1        $f3, 0x54($a2)
    ctx->pc = 0x249cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249cc4:
    // 0x249cc4: 0xc4c10044  lwc1        $f1, 0x44($a2)
    ctx->pc = 0x249cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249cc8:
    // 0x249cc8: 0xc7a200e0  lwc1        $f2, 0xE0($sp)
    ctx->pc = 0x249cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249ccc:
    // 0x249ccc: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x249cccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_249cd0:
    // 0x249cd0: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x249cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_249cd4:
    // 0x249cd4: 0xc4c30058  lwc1        $f3, 0x58($a2)
    ctx->pc = 0x249cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249cd8:
    // 0x249cd8: 0xc4c10048  lwc1        $f1, 0x48($a2)
    ctx->pc = 0x249cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249cdc:
    // 0x249cdc: 0xc7a500e4  lwc1        $f5, 0xE4($sp)
    ctx->pc = 0x249cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_249ce0:
    // 0x249ce0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x249ce0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_249ce4:
    // 0x249ce4: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x249ce4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_249ce8:
    // 0x249ce8: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x249ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249cec:
    // 0x249cec: 0xc4c1004c  lwc1        $f1, 0x4C($a2)
    ctx->pc = 0x249cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249cf0:
    // 0x249cf0: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x249cf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249cf4:
    // 0x249cf4: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x249cf4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_249cf8:
    // 0x249cf8: 0xe7a100ec  swc1        $f1, 0xEC($sp)
    ctx->pc = 0x249cf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_249cfc:
    // 0x249cfc: 0xc4aa005c  lwc1        $f10, 0x5C($a1)
    ctx->pc = 0x249cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_249d00:
    // 0x249d00: 0xc4c9005c  lwc1        $f9, 0x5C($a2)
    ctx->pc = 0x249d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249d04:
    // 0x249d04: 0xc7a100ec  lwc1        $f1, 0xEC($sp)
    ctx->pc = 0x249d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249d08:
    // 0x249d08: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x249d08u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_249d0c:
    // 0x249d0c: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x249d0cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_249d10:
    // 0x249d10: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x249d10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_249d14:
    // 0x249d14: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x249d14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_249d18:
    // 0x249d18: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x249d18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_249d1c:
    // 0x249d1c: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x249d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_249d20:
    // 0x249d20: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x249d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_249d24:
    // 0x249d24: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x249d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_249d28:
    // 0x249d28: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x249d28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_249d2c:
    // 0x249d2c: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x249d2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_249d30:
    // 0x249d30: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x249d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_249d34:
    // 0x249d34: 0xc7a702c0  lwc1        $f7, 0x2C0($sp)
    ctx->pc = 0x249d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_249d38:
    // 0x249d38: 0xc7a602c4  lwc1        $f6, 0x2C4($sp)
    ctx->pc = 0x249d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249d3c:
    // 0x249d3c: 0xc7a402c8  lwc1        $f4, 0x2C8($sp)
    ctx->pc = 0x249d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249d40:
    // 0x249d40: 0xc7a202cc  lwc1        $f2, 0x2CC($sp)
    ctx->pc = 0x249d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249d44:
    // 0x249d44: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x249d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_249d48:
    // 0x249d48: 0xe7a002c0  swc1        $f0, 0x2C0($sp)
    ctx->pc = 0x249d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_249d4c:
    // 0x249d4c: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x249d4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_249d50:
    // 0x249d50: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x249d50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_249d54:
    // 0x249d54: 0xe7a002c4  swc1        $f0, 0x2C4($sp)
    ctx->pc = 0x249d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_249d58:
    // 0x249d58: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x249d58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_249d5c:
    // 0x249d5c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x249d5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_249d60:
    // 0x249d60: 0xe7a002c8  swc1        $f0, 0x2C8($sp)
    ctx->pc = 0x249d60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_249d64:
    // 0x249d64: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x249d64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_249d68:
    // 0x249d68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x249d68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_249d6c:
    // 0x249d6c: 0xe7a002cc  swc1        $f0, 0x2CC($sp)
    ctx->pc = 0x249d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
label_249d70:
    // 0x249d70: 0xc4a3009c  lwc1        $f3, 0x9C($a1)
    ctx->pc = 0x249d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249d74:
    // 0x249d74: 0xc4c1009c  lwc1        $f1, 0x9C($a2)
    ctx->pc = 0x249d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249d78:
    // 0x249d78: 0xc4a200a0  lwc1        $f2, 0xA0($a1)
    ctx->pc = 0x249d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249d7c:
    // 0x249d7c: 0xc4c000a0  lwc1        $f0, 0xA0($a2)
    ctx->pc = 0x249d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249d80:
    // 0x249d80: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x249d80u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_249d84:
    // 0x249d84: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x249d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_249d88:
    // 0x249d88: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x249d88u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_249d8c:
    // 0x249d8c: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x249d8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_249d90:
    // 0x249d90: 0xc0a45a0  jal         func_291680
label_249d94:
    if (ctx->pc == 0x249D94u) {
        ctx->pc = 0x249D94u;
            // 0x249d94: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->pc = 0x249D98u;
        goto label_249d98;
    }
    ctx->pc = 0x249D90u;
    SET_GPR_U32(ctx, 31, 0x249D98u);
    ctx->pc = 0x249D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249D90u;
            // 0x249d94: 0xe7a002cc  swc1        $f0, 0x2CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 716), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D98u; }
        if (ctx->pc != 0x249D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249D98u; }
        if (ctx->pc != 0x249D98u) { return; }
    }
    ctx->pc = 0x249D98u;
label_249d98:
    // 0x249d98: 0xafa002b4  sw          $zero, 0x2B4($sp)
    ctx->pc = 0x249d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 0));
label_249d9c:
    // 0x249d9c: 0x26460020  addiu       $a2, $s2, 0x20
    ctx->pc = 0x249d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_249da0:
    // 0x249da0: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x249da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_249da4:
    // 0x249da4: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x249da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_249da8:
    // 0x249da8: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x249da8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_249dac:
    // 0x249dac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x249dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_249db0:
    // 0x249db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_249db4:
    // 0x249db4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x249db4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_249db8:
    // 0x249db8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249dbc:
    // 0x249dbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249dc0:
    // 0x249dc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x249dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_249dc4:
    // 0x249dc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x249dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_249dc8:
    // 0x249dc8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x249dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_249dcc:
    // 0x249dcc: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x249dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_249dd0:
    // 0x249dd0: 0x40f809  jalr        $v0
label_249dd4:
    if (ctx->pc == 0x249DD4u) {
        ctx->pc = 0x249DD4u;
            // 0x249dd4: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x249DD8u;
        goto label_249dd8;
    }
    ctx->pc = 0x249DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x249DD8u);
        ctx->pc = 0x249DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249DD0u;
            // 0x249dd4: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x249DD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x249DD8u; }
            if (ctx->pc != 0x249DD8u) { return; }
        }
        }
    }
    ctx->pc = 0x249DD8u;
label_249dd8:
    // 0x249dd8: 0x100000eb  b           . + 4 + (0xEB << 2)
label_249ddc:
    if (ctx->pc == 0x249DDCu) {
        ctx->pc = 0x249DE0u;
        goto label_249de0;
    }
    ctx->pc = 0x249DD8u;
    {
        const bool branch_taken_0x249dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x249dd8) {
            ctx->pc = 0x24A188u;
            goto label_24a188;
        }
    }
    ctx->pc = 0x249DE0u;
label_249de0:
    // 0x249de0: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x249de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_249de4:
    // 0x249de4: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x249de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
label_249de8:
    // 0x249de8: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x249de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_249dec:
    // 0x249dec: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x249decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_249df0:
    // 0x249df0: 0xafa301f4  sw          $v1, 0x1F4($sp)
    ctx->pc = 0x249df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 3));
label_249df4:
    // 0x249df4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x249df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_249df8:
    // 0x249df8: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x249df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_249dfc:
    // 0x249dfc: 0xafa501fc  sw          $a1, 0x1FC($sp)
    ctx->pc = 0x249dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 5));
label_249e00:
    // 0x249e00: 0xafb401f8  sw          $s4, 0x1F8($sp)
    ctx->pc = 0x249e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 20));
label_249e04:
    // 0x249e04: 0xafa00244  sw          $zero, 0x244($sp)
    ctx->pc = 0x249e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 580), GPR_U32(ctx, 0));
label_249e08:
    // 0x249e08: 0x8c910008  lw          $s1, 0x8($a0)
    ctx->pc = 0x249e08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_249e0c:
    // 0x249e0c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x249e0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_249e10:
    // 0x249e10: 0xc6220040  lwc1        $f2, 0x40($s1)
    ctx->pc = 0x249e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e14:
    // 0x249e14: 0x8fa301f8  lw          $v1, 0x1F8($sp)
    ctx->pc = 0x249e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_249e18:
    // 0x249e18: 0xc6210050  lwc1        $f1, 0x50($s1)
    ctx->pc = 0x249e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e1c:
    // 0x249e1c: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x249e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249e20:
    // 0x249e20: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249e20u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249e24:
    // 0x249e24: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x249e24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_249e28:
    // 0x249e28: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x249e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e2c:
    // 0x249e2c: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x249e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e30:
    // 0x249e30: 0xc7a800d0  lwc1        $f8, 0xD0($sp)
    ctx->pc = 0x249e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_249e34:
    // 0x249e34: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249e34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249e38:
    // 0x249e38: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x249e38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_249e3c:
    // 0x249e3c: 0xc6220048  lwc1        $f2, 0x48($s1)
    ctx->pc = 0x249e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e40:
    // 0x249e40: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x249e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e44:
    // 0x249e44: 0xc7a700d4  lwc1        $f7, 0xD4($sp)
    ctx->pc = 0x249e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_249e48:
    // 0x249e48: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249e48u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249e4c:
    // 0x249e4c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x249e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_249e50:
    // 0x249e50: 0xc622004c  lwc1        $f2, 0x4C($s1)
    ctx->pc = 0x249e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e54:
    // 0x249e54: 0xc621005c  lwc1        $f1, 0x5C($s1)
    ctx->pc = 0x249e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e58:
    // 0x249e58: 0xc7a600d8  lwc1        $f6, 0xD8($sp)
    ctx->pc = 0x249e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249e5c:
    // 0x249e5c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249e5cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249e60:
    // 0x249e60: 0xe7a100dc  swc1        $f1, 0xDC($sp)
    ctx->pc = 0x249e60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_249e64:
    // 0x249e64: 0xc6020050  lwc1        $f2, 0x50($s0)
    ctx->pc = 0x249e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e68:
    // 0x249e68: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x249e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e6c:
    // 0x249e6c: 0xc7a400dc  lwc1        $f4, 0xDC($sp)
    ctx->pc = 0x249e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249e70:
    // 0x249e70: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x249e70u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_249e74:
    // 0x249e74: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x249e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_249e78:
    // 0x249e78: 0xc6030054  lwc1        $f3, 0x54($s0)
    ctx->pc = 0x249e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249e7c:
    // 0x249e7c: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x249e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e80:
    // 0x249e80: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x249e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249e84:
    // 0x249e84: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x249e84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_249e88:
    // 0x249e88: 0xe7a100c4  swc1        $f1, 0xC4($sp)
    ctx->pc = 0x249e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_249e8c:
    // 0x249e8c: 0xc6030058  lwc1        $f3, 0x58($s0)
    ctx->pc = 0x249e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249e90:
    // 0x249e90: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x249e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249e94:
    // 0x249e94: 0xc7a500c4  lwc1        $f5, 0xC4($sp)
    ctx->pc = 0x249e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_249e98:
    // 0x249e98: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x249e98u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_249e9c:
    // 0x249e9c: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x249e9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_249ea0:
    // 0x249ea0: 0xc609005c  lwc1        $f9, 0x5C($s0)
    ctx->pc = 0x249ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249ea4:
    // 0x249ea4: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x249ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249ea8:
    // 0x249ea8: 0xc7a300c8  lwc1        $f3, 0xC8($sp)
    ctx->pc = 0x249ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249eac:
    // 0x249eac: 0x46014841  sub.s       $f1, $f9, $f1
    ctx->pc = 0x249eacu;
    ctx->f[1] = FPU_SUB_S(ctx->f[9], ctx->f[1]);
label_249eb0:
    // 0x249eb0: 0xe7a100cc  swc1        $f1, 0xCC($sp)
    ctx->pc = 0x249eb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_249eb4:
    // 0x249eb4: 0xc62a005c  lwc1        $f10, 0x5C($s1)
    ctx->pc = 0x249eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_249eb8:
    // 0x249eb8: 0xc609005c  lwc1        $f9, 0x5C($s0)
    ctx->pc = 0x249eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_249ebc:
    // 0x249ebc: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x249ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249ec0:
    // 0x249ec0: 0x460a0282  mul.s       $f10, $f0, $f10
    ctx->pc = 0x249ec0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[0], ctx->f[10]);
label_249ec4:
    // 0x249ec4: 0x46090242  mul.s       $f9, $f0, $f9
    ctx->pc = 0x249ec4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_249ec8:
    // 0x249ec8: 0x46085002  mul.s       $f0, $f10, $f8
    ctx->pc = 0x249ec8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[8]);
label_249ecc:
    // 0x249ecc: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x249eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_249ed0:
    // 0x249ed0: 0x46075002  mul.s       $f0, $f10, $f7
    ctx->pc = 0x249ed0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[7]);
label_249ed4:
    // 0x249ed4: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x249ed4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_249ed8:
    // 0x249ed8: 0x46065002  mul.s       $f0, $f10, $f6
    ctx->pc = 0x249ed8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
label_249edc:
    // 0x249edc: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x249edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_249ee0:
    // 0x249ee0: 0x46045002  mul.s       $f0, $f10, $f4
    ctx->pc = 0x249ee0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_249ee4:
    // 0x249ee4: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x249ee4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_249ee8:
    // 0x249ee8: 0x46024802  mul.s       $f0, $f9, $f2
    ctx->pc = 0x249ee8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
label_249eec:
    // 0x249eec: 0xc7a70250  lwc1        $f7, 0x250($sp)
    ctx->pc = 0x249eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_249ef0:
    // 0x249ef0: 0xc7a60254  lwc1        $f6, 0x254($sp)
    ctx->pc = 0x249ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_249ef4:
    // 0x249ef4: 0xc7a40258  lwc1        $f4, 0x258($sp)
    ctx->pc = 0x249ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_249ef8:
    // 0x249ef8: 0xc7a2025c  lwc1        $f2, 0x25C($sp)
    ctx->pc = 0x249ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249efc:
    // 0x249efc: 0x46003800  add.s       $f0, $f7, $f0
    ctx->pc = 0x249efcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[7], ctx->f[0]);
label_249f00:
    // 0x249f00: 0xe7a00250  swc1        $f0, 0x250($sp)
    ctx->pc = 0x249f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_249f04:
    // 0x249f04: 0x46054802  mul.s       $f0, $f9, $f5
    ctx->pc = 0x249f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_249f08:
    // 0x249f08: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x249f08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
label_249f0c:
    // 0x249f0c: 0xe7a00254  swc1        $f0, 0x254($sp)
    ctx->pc = 0x249f0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_249f10:
    // 0x249f10: 0x46034802  mul.s       $f0, $f9, $f3
    ctx->pc = 0x249f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
label_249f14:
    // 0x249f14: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x249f14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_249f18:
    // 0x249f18: 0xe7a00258  swc1        $f0, 0x258($sp)
    ctx->pc = 0x249f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_249f1c:
    // 0x249f1c: 0x46014802  mul.s       $f0, $f9, $f1
    ctx->pc = 0x249f1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_249f20:
    // 0x249f20: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x249f20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_249f24:
    // 0x249f24: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x249f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_249f28:
    // 0x249f28: 0xc623009c  lwc1        $f3, 0x9C($s1)
    ctx->pc = 0x249f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_249f2c:
    // 0x249f2c: 0xc601009c  lwc1        $f1, 0x9C($s0)
    ctx->pc = 0x249f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f30:
    // 0x249f30: 0xc62200a0  lwc1        $f2, 0xA0($s1)
    ctx->pc = 0x249f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_249f34:
    // 0x249f34: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x249f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f38:
    // 0x249f38: 0x460350c2  mul.s       $f3, $f10, $f3
    ctx->pc = 0x249f38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
label_249f3c:
    // 0x249f3c: 0x46014842  mul.s       $f1, $f9, $f1
    ctx->pc = 0x249f3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[9], ctx->f[1]);
label_249f40:
    // 0x249f40: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x249f40u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_249f44:
    // 0x249f44: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x249f44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_249f48:
    // 0x249f48: 0xe7a0025c  swc1        $f0, 0x25C($sp)
    ctx->pc = 0x249f48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 604), bits); }
label_249f4c:
    // 0x249f4c: 0xc6810020  lwc1        $f1, 0x20($s4)
    ctx->pc = 0x249f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_249f50:
    // 0x249f50: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x249f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f54:
    // 0x249f54: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x249f54u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_249f58:
    // 0x249f58: 0x4501004d  bc1t        . + 4 + (0x4D << 2)
label_249f5c:
    if (ctx->pc == 0x249F5Cu) {
        ctx->pc = 0x249F5Cu;
            // 0x249f5c: 0x26560030  addiu       $s6, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x249F60u;
        goto label_249f60;
    }
    ctx->pc = 0x249F58u;
    {
        const bool branch_taken_0x249f58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x249F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249F58u;
            // 0x249f5c: 0x26560030  addiu       $s6, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f58) {
            ctx->pc = 0x24A090u;
            goto label_24a090;
        }
    }
    ctx->pc = 0x249F60u;
label_249f60:
    // 0x249f60: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x249f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_249f64:
    // 0x249f64: 0x80420010  lb          $v0, 0x10($v0)
    ctx->pc = 0x249f64u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_249f68:
    // 0x249f68: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_249f6c:
    if (ctx->pc == 0x249F6Cu) {
        ctx->pc = 0x249F70u;
        goto label_249f70;
    }
    ctx->pc = 0x249F68u;
    {
        const bool branch_taken_0x249f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x249f68) {
            ctx->pc = 0x249FA0u;
            goto label_249fa0;
        }
    }
    ctx->pc = 0x249F70u;
label_249f70:
    // 0x249f70: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x249f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_249f74:
    // 0x249f74: 0x3c02ff7f  lui         $v0, 0xFF7F
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65407 << 16));
label_249f78:
    // 0x249f78: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x249f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_249f7c:
    // 0x249f7c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x249f7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_249f80:
    // 0x249f80: 0x0  nop
    ctx->pc = 0x249f80u;
    // NOP
label_249f84:
    // 0x249f84: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x249f84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_249f88:
    // 0x249f88: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x249f88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_249f8c:
    // 0x249f8c: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x249f8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_249f90:
    // 0x249f90: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x249f90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_249f94:
    // 0x249f94: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x249f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_249f98:
    // 0x249f98: 0x10000067  b           . + 4 + (0x67 << 2)
label_249f9c:
    if (ctx->pc == 0x249F9Cu) {
        ctx->pc = 0x249F9Cu;
            // 0x249f9c: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x249FA0u;
        goto label_249fa0;
    }
    ctx->pc = 0x249F98u;
    {
        const bool branch_taken_0x249f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x249F98u;
            // 0x249f9c: 0xae42002c  sw          $v0, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249f98) {
            ctx->pc = 0x24A138u;
            goto label_24a138;
        }
    }
    ctx->pc = 0x249FA0u;
label_249fa0:
    // 0x249fa0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x249fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_249fa4:
    // 0x249fa4: 0xc46c0020  lwc1        $f12, 0x20($v1)
    ctx->pc = 0x249fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249fa8:
    // 0x249fa8: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x249fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_249fac:
    // 0x249fac: 0xc0a3a64  jal         func_28E990
label_249fb0:
    if (ctx->pc == 0x249FB0u) {
        ctx->pc = 0x249FB0u;
            // 0x249fb0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x249FB4u;
        goto label_249fb4;
    }
    ctx->pc = 0x249FACu;
    SET_GPR_U32(ctx, 31, 0x249FB4u);
    ctx->pc = 0x249FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249FACu;
            // 0x249fb0: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249FB4u; }
        if (ctx->pc != 0x249FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249FB4u; }
        if (ctx->pc != 0x249FB4u) { return; }
    }
    ctx->pc = 0x249FB4u;
label_249fb4:
    // 0x249fb4: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x249fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_249fb8:
    // 0x249fb8: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x249fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_249fbc:
    // 0x249fbc: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x249fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_249fc0:
    // 0x249fc0: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x249fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_249fc4:
    // 0x249fc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x249fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_249fc8:
    // 0x249fc8: 0xc0a3a64  jal         func_28E990
label_249fcc:
    if (ctx->pc == 0x249FCCu) {
        ctx->pc = 0x249FCCu;
            // 0x249fcc: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x249FD0u;
        goto label_249fd0;
    }
    ctx->pc = 0x249FC8u;
    SET_GPR_U32(ctx, 31, 0x249FD0u);
    ctx->pc = 0x249FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x249FC8u;
            // 0x249fcc: 0x24440040  addiu       $a0, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249FD0u; }
        if (ctx->pc != 0x249FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x249FD0u; }
        if (ctx->pc != 0x249FD0u) { return; }
    }
    ctx->pc = 0x249FD0u;
label_249fd0:
    // 0x249fd0: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_249fd4:
    // 0x249fd4: 0x8fa301fc  lw          $v1, 0x1FC($sp)
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_249fd8:
    // 0x249fd8: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x249fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_249fdc:
    // 0x249fdc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x249fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_249fe0:
    // 0x249fe0: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x249fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_249fe4:
    // 0x249fe4: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x249fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_249fe8:
    // 0x249fe8: 0xafa40100  sw          $a0, 0x100($sp)
    ctx->pc = 0x249fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 4));
label_249fec:
    // 0x249fec: 0x8fa501f4  lw          $a1, 0x1F4($sp)
    ctx->pc = 0x249fecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_249ff0:
    // 0x249ff0: 0xafa3010c  sw          $v1, 0x10C($sp)
    ctx->pc = 0x249ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 3));
label_249ff4:
    // 0x249ff4: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x249ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_249ff8:
    // 0x249ff8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x249ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_249ffc:
    // 0x249ffc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x249ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_24a000:
    // 0x24a000: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x24a000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
label_24a004:
    // 0x24a004: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x24a004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
label_24a008:
    // 0x24a008: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_24a00c:
    // 0x24a00c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_24a010:
    // 0x24a010: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x24a010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_24a014:
    // 0x24a014: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_24a018:
    if (ctx->pc == 0x24A018u) {
        ctx->pc = 0x24A018u;
            // 0x24a018: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->pc = 0x24A01Cu;
        goto label_24a01c;
    }
    ctx->pc = 0x24A014u;
    {
        const bool branch_taken_0x24a014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A014u;
            // 0x24a018: 0xafa20164  sw          $v0, 0x164($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a014) {
            ctx->pc = 0x24A028u;
            goto label_24a028;
        }
    }
    ctx->pc = 0x24A01Cu;
label_24a01c:
    // 0x24a01c: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x24a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
label_24a020:
    // 0x24a020: 0x27a20170  addiu       $v0, $sp, 0x170
    ctx->pc = 0x24a020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24a024:
    // 0x24a024: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x24a024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_24a028:
    // 0x24a028: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x24a028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_24a02c:
    // 0x24a02c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_24a030:
    if (ctx->pc == 0x24A030u) {
        ctx->pc = 0x24A034u;
        goto label_24a034;
    }
    ctx->pc = 0x24A02Cu;
    {
        const bool branch_taken_0x24a02c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a02c) {
            ctx->pc = 0x24A048u;
            goto label_24a048;
        }
    }
    ctx->pc = 0x24A034u;
label_24a034:
    // 0x24a034: 0x8fa301f4  lw          $v1, 0x1F4($sp)
    ctx->pc = 0x24a034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 500)));
label_24a038:
    // 0x24a038: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x24a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_24a03c:
    // 0x24a03c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x24a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_24a040:
    // 0x24a040: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x24a040u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_24a044:
    // 0x24a044: 0x0  nop
    ctx->pc = 0x24a044u;
    // NOP
label_24a048:
    // 0x24a048: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x24a048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_24a04c:
    // 0x24a04c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x24a04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24a050:
    // 0x24a050: 0xc0a45a0  jal         func_291680
label_24a054:
    if (ctx->pc == 0x24A054u) {
        ctx->pc = 0x24A054u;
            // 0x24a054: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x24A058u;
        goto label_24a058;
    }
    ctx->pc = 0x24A050u;
    SET_GPR_U32(ctx, 31, 0x24A058u);
    ctx->pc = 0x24A054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A050u;
            // 0x24a054: 0x27a601b0  addiu       $a2, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A058u; }
        if (ctx->pc != 0x24A058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A058u; }
        if (ctx->pc != 0x24A058u) { return; }
    }
    ctx->pc = 0x24A058u;
label_24a058:
    // 0x24a058: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24a058u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_24a05c:
    // 0x24a05c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_24a060:
    // 0x24a060: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x24a060u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24a064:
    // 0x24a064: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a064u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a068:
    // 0x24a068: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24a068u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24a06c:
    // 0x24a06c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24a06cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24a070:
    // 0x24a070: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a074:
    // 0x24a074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a078:
    // 0x24a078: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a07c:
    // 0x24a07c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a080:
    // 0x24a080: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_24a084:
    // 0x24a084: 0x8c4216d4  lw          $v0, 0x16D4($v0)
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5844)));
label_24a088:
    // 0x24a088: 0x40f809  jalr        $v0
label_24a08c:
    if (ctx->pc == 0x24A08Cu) {
        ctx->pc = 0x24A08Cu;
            // 0x24a08c: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x24A090u;
        goto label_24a090;
    }
    ctx->pc = 0x24A088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A090u);
        ctx->pc = 0x24A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A088u;
            // 0x24a08c: 0x26470020  addiu       $a3, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A090u; }
            if (ctx->pc != 0x24A090u) { return; }
        }
        }
    }
    ctx->pc = 0x24A090u;
label_24a090:
    // 0x24a090: 0x26430020  addiu       $v1, $s2, 0x20
    ctx->pc = 0x24a090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_24a094:
    // 0x24a094: 0xc6800024  lwc1        $f0, 0x24($s4)
    ctx->pc = 0x24a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a098:
    // 0x24a098: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x24a098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_24a09c:
    // 0x24a09c: 0xc7a60250  lwc1        $f6, 0x250($sp)
    ctx->pc = 0x24a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_24a0a0:
    // 0x24a0a0: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x24a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a0a4:
    // 0x24a0a4: 0xc7a50254  lwc1        $f5, 0x254($sp)
    ctx->pc = 0x24a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_24a0a8:
    // 0x24a0a8: 0xc6440024  lwc1        $f4, 0x24($s2)
    ctx->pc = 0x24a0a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_24a0ac:
    // 0x24a0ac: 0xc7a30258  lwc1        $f3, 0x258($sp)
    ctx->pc = 0x24a0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_24a0b0:
    // 0x24a0b0: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x24a0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_24a0b4:
    // 0x24a0b4: 0xc7a1025c  lwc1        $f1, 0x25C($sp)
    ctx->pc = 0x24a0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_24a0b8:
    // 0x24a0b8: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x24a0b8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_24a0bc:
    // 0x24a0bc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x24a0bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_24a0c0:
    // 0x24a0c0: 0x46043018  adda.s      $f6, $f4
    ctx->pc = 0x24a0c0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
label_24a0c4:
    // 0x24a0c4: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x24a0c4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_24a0c8:
    // 0x24a0c8: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x24a0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_24a0cc:
    // 0x24a0cc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24a0ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_24a0d0:
    // 0x24a0d0: 0xc6870004  lwc1        $f7, 0x4($s4)
    ctx->pc = 0x24a0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_24a0d4:
    // 0x24a0d4: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x24a0d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_24a0d8:
    // 0x24a0d8: 0x46070834  c.lt.s      $f1, $f7
    ctx->pc = 0x24a0d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_24a0dc:
    // 0x24a0dc: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_24a0e0:
    if (ctx->pc == 0x24A0E0u) {
        ctx->pc = 0x24A0E0u;
            // 0x24a0e0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->pc = 0x24A0E4u;
        goto label_24a0e4;
    }
    ctx->pc = 0x24A0DCu;
    {
        const bool branch_taken_0x24a0dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x24A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A0DCu;
            // 0x24a0e0: 0x2463000c  addiu       $v1, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a0dc) {
            ctx->pc = 0x24A138u;
            goto label_24a138;
        }
    }
    ctx->pc = 0x24A0E4u;
label_24a0e4:
    // 0x24a0e4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x24a0e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_24a0e8:
    // 0x24a0e8: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x24a0e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_24a0ec:
    // 0x24a0ec: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_24a0f0:
    if (ctx->pc == 0x24A0F0u) {
        ctx->pc = 0x24A0F4u;
        goto label_24a0f4;
    }
    ctx->pc = 0x24A0ECu;
    {
        const bool branch_taken_0x24a0ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a0ec) {
            ctx->pc = 0x24A130u;
            goto label_24a130;
        }
    }
    ctx->pc = 0x24A0F4u;
label_24a0f4:
    // 0x24a0f4: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24a0f4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_24a0f8:
    // 0x24a0f8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x24a0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24a0fc:
    // 0x24a0fc: 0x8e880000  lw          $t0, 0x0($s4)
    ctx->pc = 0x24a0fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24a100:
    // 0x24a100: 0x8fa702d4  lw          $a3, 0x2D4($sp)
    ctx->pc = 0x24a100u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_24a104:
    // 0x24a104: 0x8fa601fc  lw          $a2, 0x1FC($sp)
    ctx->pc = 0x24a104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 508)));
label_24a108:
    // 0x24a108: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24a108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24a10c:
    // 0x24a10c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a110:
    // 0x24a110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a114:
    // 0x24a114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a118:
    // 0x24a118: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a118u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a11c:
    // 0x24a11c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_24a120:
    // 0x24a120: 0x8c4216b8  lw          $v0, 0x16B8($v0)
    ctx->pc = 0x24a120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5816)));
label_24a124:
    // 0x24a124: 0x40f809  jalr        $v0
label_24a128:
    if (ctx->pc == 0x24A128u) {
        ctx->pc = 0x24A128u;
            // 0x24a128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A12Cu;
        goto label_24a12c;
    }
    ctx->pc = 0x24A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A12Cu);
        ctx->pc = 0x24A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A124u;
            // 0x24a128: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A12Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A12Cu; }
            if (ctx->pc != 0x24A12Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24A12Cu;
label_24a12c:
    // 0x24a12c: 0x0  nop
    ctx->pc = 0x24a12cu;
    // NOP
label_24a130:
    // 0x24a130: 0x10000015  b           . + 4 + (0x15 << 2)
label_24a134:
    if (ctx->pc == 0x24A134u) {
        ctx->pc = 0x24A134u;
            // 0x24a134: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->pc = 0x24A138u;
        goto label_24a138;
    }
    ctx->pc = 0x24A130u;
    {
        const bool branch_taken_0x24a130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A130u;
            // 0x24a134: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a130) {
            ctx->pc = 0x24A188u;
            goto label_24a188;
        }
    }
    ctx->pc = 0x24A138u;
label_24a138:
    // 0x24a138: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x24a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24a13c:
    // 0x24a13c: 0xe7a10240  swc1        $f1, 0x240($sp)
    ctx->pc = 0x24a13cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_24a140:
    // 0x24a140: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24a140u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24a144:
    // 0x24a144: 0xc0a45a0  jal         func_291680
label_24a148:
    if (ctx->pc == 0x24A148u) {
        ctx->pc = 0x24A148u;
            // 0x24a148: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x24A14Cu;
        goto label_24a14c;
    }
    ctx->pc = 0x24A144u;
    SET_GPR_U32(ctx, 31, 0x24A14Cu);
    ctx->pc = 0x24A148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24A144u;
            // 0x24a148: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A14Cu; }
        if (ctx->pc != 0x24A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24A14Cu; }
        if (ctx->pc != 0x24A14Cu) { return; }
    }
    ctx->pc = 0x24A14Cu;
label_24a14c:
    // 0x24a14c: 0x92430001  lbu         $v1, 0x1($s2)
    ctx->pc = 0x24a14cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_24a150:
    // 0x24a150: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x24a150u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24a154:
    // 0x24a154: 0x8e890000  lw          $t1, 0x0($s4)
    ctx->pc = 0x24a154u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_24a158:
    // 0x24a158: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x24a158u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_24a15c:
    // 0x24a15c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x24a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24a160:
    // 0x24a160: 0x26470020  addiu       $a3, $s2, 0x20
    ctx->pc = 0x24a160u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_24a164:
    // 0x24a164: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x24a164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24a168:
    // 0x24a168: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a16c:
    // 0x24a16c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a170:
    // 0x24a170: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24a170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24a174:
    // 0x24a174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24a174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24a178:
    // 0x24a178: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x24a178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_24a17c:
    // 0x24a17c: 0x8c4216d8  lw          $v0, 0x16D8($v0)
    ctx->pc = 0x24a17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5848)));
label_24a180:
    // 0x24a180: 0x40f809  jalr        $v0
label_24a184:
    if (ctx->pc == 0x24A184u) {
        ctx->pc = 0x24A184u;
            // 0x24a184: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x24A188u;
        goto label_24a188;
    }
    ctx->pc = 0x24A180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24A188u);
        ctx->pc = 0x24A184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A180u;
            // 0x24a184: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A188u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A188u; }
            if (ctx->pc != 0x24A188u) { return; }
        }
        }
    }
    ctx->pc = 0x24A188u;
label_24a188:
    // 0x24a188: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x24a188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_24a18c:
    // 0x24a18c: 0x8c23ea20  lw          $v1, -0x15E0($at)
    ctx->pc = 0x24a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_24a190:
    // 0x24a190: 0x8c650028  lw          $a1, 0x28($v1)
    ctx->pc = 0x24a190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_24a194:
    // 0x24a194: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x24a194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_24a198:
    // 0x24a198: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x24a198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_24a19c:
    // 0x24a19c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x24a19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_24a1a0:
    // 0x24a1a0: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x24a1a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24a1a4:
    // 0x24a1a4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_24a1a8:
    if (ctx->pc == 0x24A1A8u) {
        ctx->pc = 0x24A1ACu;
        goto label_24a1ac;
    }
    ctx->pc = 0x24A1A4u;
    {
        const bool branch_taken_0x24a1a4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a1a4) {
            ctx->pc = 0x24A1B8u;
            goto label_24a1b8;
        }
    }
    ctx->pc = 0x24A1ACu;
label_24a1ac:
    // 0x24a1ac: 0x10000004  b           . + 4 + (0x4 << 2)
label_24a1b0:
    if (ctx->pc == 0x24A1B0u) {
        ctx->pc = 0x24A1B0u;
            // 0x24a1b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24A1B4u;
        goto label_24a1b4;
    }
    ctx->pc = 0x24A1ACu;
    {
        const bool branch_taken_0x24a1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24A1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1ACu;
            // 0x24a1b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1ac) {
            ctx->pc = 0x24A1C0u;
            goto label_24a1c0;
        }
    }
    ctx->pc = 0x24A1B4u;
label_24a1b4:
    // 0x24a1b4: 0x0  nop
    ctx->pc = 0x24a1b4u;
    // NOP
label_24a1b8:
    // 0x24a1b8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x24a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_24a1bc:
    // 0x24a1bc: 0x0  nop
    ctx->pc = 0x24a1bcu;
    // NOP
label_24a1c0:
    // 0x24a1c0: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_24a1c4:
    if (ctx->pc == 0x24A1C4u) {
        ctx->pc = 0x24A1C4u;
            // 0x24a1c4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x24A1C8u;
        goto label_24a1c8;
    }
    ctx->pc = 0x24A1C0u;
    {
        const bool branch_taken_0x24a1c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A1C0u;
            // 0x24a1c4: 0x3c01006f  lui         $at, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a1c0) {
            ctx->pc = 0x24A1D8u;
            goto label_24a1d8;
        }
    }
    ctx->pc = 0x24A1C8u;
label_24a1c8:
    // 0x24a1c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a1cc:
    // 0x24a1cc: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x24a1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_24a1d0:
    // 0x24a1d0: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x24a1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_24a1d4:
    // 0x24a1d4: 0x0  nop
    ctx->pc = 0x24a1d4u;
    // NOP
label_24a1d8:
    // 0x24a1d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_24a1dc:
    // 0x24a1dc: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x24a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_24a1e0:
    // 0x24a1e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24a1e4:
    // 0x24a1e4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x24a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_24a1e8:
    // 0x24a1e8: 0x1083002f  beq         $a0, $v1, . + 4 + (0x2F << 2)
label_24a1ec:
    if (ctx->pc == 0x24A1ECu) {
        ctx->pc = 0x24A1F0u;
        goto label_24a1f0;
    }
    ctx->pc = 0x24A1E8u;
    {
        const bool branch_taken_0x24a1e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x24a1e8) {
            ctx->pc = 0x24A2A8u;
            goto label_24a2a8;
        }
    }
    ctx->pc = 0x24A1F0u;
label_24a1f0:
    // 0x24a1f0: 0x8fa502d0  lw          $a1, 0x2D0($sp)
    ctx->pc = 0x24a1f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_24a1f4:
    // 0x24a1f4: 0x27a302e0  addiu       $v1, $sp, 0x2E0
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_24a1f8:
    // 0x24a1f8: 0x27a4333c  addiu       $a0, $sp, 0x333C
    ctx->pc = 0x24a1f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13116));
label_24a1fc:
    // 0x24a1fc: 0xa31826  xor         $v1, $a1, $v1
    ctx->pc = 0x24a1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
label_24a200:
    // 0x24a200: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x24a200u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_24a204:
    // 0x24a204: 0xa3a3333c  sb          $v1, 0x333C($sp)
    ctx->pc = 0x24a204u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13116), (uint8_t)GPR_U32(ctx, 3));
label_24a208:
    // 0x24a208: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24a20c:
    // 0x24a20c: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
label_24a210:
    if (ctx->pc == 0x24A210u) {
        ctx->pc = 0x24A214u;
        goto label_24a214;
    }
    ctx->pc = 0x24A20Cu;
    {
        const bool branch_taken_0x24a20c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a20c) {
            ctx->pc = 0x24A238u;
            goto label_24a238;
        }
    }
    ctx->pc = 0x24A214u;
label_24a214:
    // 0x24a214: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x24a214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_24a218:
    // 0x24a218: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x24a218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24a21c:
    // 0x24a21c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x24a21cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_24a220:
    // 0x24a220: 0x8fa600a0  lw          $a2, 0xA0($sp)
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_24a224:
    // 0x24a224: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_24a228:
    // 0x24a228: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_24a22c:
    // 0x24a22c: 0x320f809  jalr        $t9
label_24a230:
    if (ctx->pc == 0x24A230u) {
        ctx->pc = 0x24A230u;
            // 0x24a230: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x24A234u;
        goto label_24a234;
    }
    ctx->pc = 0x24A22Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24A234u);
        ctx->pc = 0x24A230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A22Cu;
            // 0x24a230: 0x27a802d0  addiu       $t0, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24A234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24A234u; }
            if (ctx->pc != 0x24A234u) { return; }
        }
        }
    }
    ctx->pc = 0x24A234u;
label_24a234:
    // 0x24a234: 0x0  nop
    ctx->pc = 0x24a234u;
    // NOP
label_24a238:
    // 0x24a238: 0x92430003  lbu         $v1, 0x3($s2)
    ctx->pc = 0x24a238u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_24a23c:
    // 0x24a23c: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x24a23cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
label_24a240:
    // 0x24a240: 0x25e182b  sltu        $v1, $s2, $fp
    ctx->pc = 0x24a240u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_24a244:
    // 0x24a244: 0x1460fe52  bnez        $v1, . + 4 + (-0x1AE << 2)
label_24a248:
    if (ctx->pc == 0x24A248u) {
        ctx->pc = 0x24A24Cu;
        goto label_24a24c;
    }
    ctx->pc = 0x24A244u;
    {
        const bool branch_taken_0x24a244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a244) {
            ctx->pc = 0x249B90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249b90;
        }
    }
    ctx->pc = 0x24A24Cu;
label_24a24c:
    // 0x24a24c: 0x0  nop
    ctx->pc = 0x24a24cu;
    // NOP
label_24a250:
    // 0x24a250: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x24a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_24a254:
    // 0x24a254: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x24a254u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24a258:
    // 0x24a258: 0x1460fe3f  bnez        $v1, . + 4 + (-0x1C1 << 2)
label_24a25c:
    if (ctx->pc == 0x24A25Cu) {
        ctx->pc = 0x24A25Cu;
            // 0x24a25c: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x24A260u;
        goto label_24a260;
    }
    ctx->pc = 0x24A258u;
    {
        const bool branch_taken_0x24a258 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A258u;
            // 0x24a25c: 0x3c06006f  lui         $a2, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24a258) {
            ctx->pc = 0x249B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_249b58;
        }
    }
    ctx->pc = 0x24A260u;
label_24a260:
    // 0x24a260: 0x27a43338  addiu       $a0, $sp, 0x3338
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 13112));
label_24a264:
    // 0x24a264: 0x24c6ea60  addiu       $a2, $a2, -0x15A0
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
label_24a268:
    // 0x24a268: 0x8cc5000c  lw          $a1, 0xC($a2)
    ctx->pc = 0x24a268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_24a26c:
    // 0x24a26c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x24a26cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24a270:
    // 0x24a270: 0x65182b  sltu        $v1, $v1, $a1
    ctx->pc = 0x24a270u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_24a274:
    // 0x24a274: 0xa3a33338  sb          $v1, 0x3338($sp)
    ctx->pc = 0x24a274u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 13112), (uint8_t)GPR_U32(ctx, 3));
label_24a278:
    // 0x24a278: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24a278u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_24a27c:
    // 0x24a27c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_24a280:
    if (ctx->pc == 0x24A280u) {
        ctx->pc = 0x24A284u;
        goto label_24a284;
    }
    ctx->pc = 0x24A27Cu;
    {
        const bool branch_taken_0x24a27c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a27c) {
            ctx->pc = 0x24A2A8u;
            goto label_24a2a8;
        }
    }
    ctx->pc = 0x24A284u;
label_24a284:
    // 0x24a284: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x24a284u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24a288:
    // 0x24a288: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24a288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_24a28c:
    // 0x24a28c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x24a28cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_24a290:
    // 0x24a290: 0x2463cf50  addiu       $v1, $v1, -0x30B0
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954832));
label_24a294:
    // 0x24a294: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x24a294u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_24a298:
    // 0x24a298: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x24a298u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_24a29c:
    // 0x24a29c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x24a29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_24a2a0:
    // 0x24a2a0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x24a2a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_24a2a4:
    // 0x24a2a4: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x24a2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_24a2a8:
    // 0x24a2a8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x24a2a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24a2ac:
    // 0x24a2ac: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x24a2acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24a2b0:
    // 0x24a2b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24a2b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24a2b4:
    // 0x24a2b4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24a2b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_24a2b8:
    // 0x24a2b8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x24a2b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_24a2bc:
    // 0x24a2bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x24a2bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24a2c0:
    // 0x24a2c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24a2c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24a2c4:
    // 0x24a2c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24a2c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_24a2c8:
    // 0x24a2c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x24a2c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24a2cc:
    // 0x24a2cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24a2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_24a2d0:
    // 0x24a2d0: 0x3e00008  jr          $ra
label_24a2d4:
    if (ctx->pc == 0x24A2D4u) {
        ctx->pc = 0x24A2D4u;
            // 0x24a2d4: 0x27bd3340  addiu       $sp, $sp, 0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 13120));
        ctx->pc = 0x24A2D8u;
        goto label_24a2d8;
    }
    ctx->pc = 0x24A2D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24A2D0u;
            // 0x24a2d4: 0x27bd3340  addiu       $sp, $sp, 0x3340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 13120));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24A2D8u;
label_24a2d8:
    // 0x24a2d8: 0x0  nop
    ctx->pc = 0x24a2d8u;
    // NOP
label_24a2dc:
    // 0x24a2dc: 0x0  nop
    ctx->pc = 0x24a2dcu;
    // NOP
}
