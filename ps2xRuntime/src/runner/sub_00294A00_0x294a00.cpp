#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294A00
// Address: 0x294a00 - 0x295100
void sub_00294A00_0x294a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294A00_0x294a00");
#endif

    switch (ctx->pc) {
        case 0x294a00u: goto label_294a00;
        case 0x294a04u: goto label_294a04;
        case 0x294a08u: goto label_294a08;
        case 0x294a0cu: goto label_294a0c;
        case 0x294a10u: goto label_294a10;
        case 0x294a14u: goto label_294a14;
        case 0x294a18u: goto label_294a18;
        case 0x294a1cu: goto label_294a1c;
        case 0x294a20u: goto label_294a20;
        case 0x294a24u: goto label_294a24;
        case 0x294a28u: goto label_294a28;
        case 0x294a2cu: goto label_294a2c;
        case 0x294a30u: goto label_294a30;
        case 0x294a34u: goto label_294a34;
        case 0x294a38u: goto label_294a38;
        case 0x294a3cu: goto label_294a3c;
        case 0x294a40u: goto label_294a40;
        case 0x294a44u: goto label_294a44;
        case 0x294a48u: goto label_294a48;
        case 0x294a4cu: goto label_294a4c;
        case 0x294a50u: goto label_294a50;
        case 0x294a54u: goto label_294a54;
        case 0x294a58u: goto label_294a58;
        case 0x294a5cu: goto label_294a5c;
        case 0x294a60u: goto label_294a60;
        case 0x294a64u: goto label_294a64;
        case 0x294a68u: goto label_294a68;
        case 0x294a6cu: goto label_294a6c;
        case 0x294a70u: goto label_294a70;
        case 0x294a74u: goto label_294a74;
        case 0x294a78u: goto label_294a78;
        case 0x294a7cu: goto label_294a7c;
        case 0x294a80u: goto label_294a80;
        case 0x294a84u: goto label_294a84;
        case 0x294a88u: goto label_294a88;
        case 0x294a8cu: goto label_294a8c;
        case 0x294a90u: goto label_294a90;
        case 0x294a94u: goto label_294a94;
        case 0x294a98u: goto label_294a98;
        case 0x294a9cu: goto label_294a9c;
        case 0x294aa0u: goto label_294aa0;
        case 0x294aa4u: goto label_294aa4;
        case 0x294aa8u: goto label_294aa8;
        case 0x294aacu: goto label_294aac;
        case 0x294ab0u: goto label_294ab0;
        case 0x294ab4u: goto label_294ab4;
        case 0x294ab8u: goto label_294ab8;
        case 0x294abcu: goto label_294abc;
        case 0x294ac0u: goto label_294ac0;
        case 0x294ac4u: goto label_294ac4;
        case 0x294ac8u: goto label_294ac8;
        case 0x294accu: goto label_294acc;
        case 0x294ad0u: goto label_294ad0;
        case 0x294ad4u: goto label_294ad4;
        case 0x294ad8u: goto label_294ad8;
        case 0x294adcu: goto label_294adc;
        case 0x294ae0u: goto label_294ae0;
        case 0x294ae4u: goto label_294ae4;
        case 0x294ae8u: goto label_294ae8;
        case 0x294aecu: goto label_294aec;
        case 0x294af0u: goto label_294af0;
        case 0x294af4u: goto label_294af4;
        case 0x294af8u: goto label_294af8;
        case 0x294afcu: goto label_294afc;
        case 0x294b00u: goto label_294b00;
        case 0x294b04u: goto label_294b04;
        case 0x294b08u: goto label_294b08;
        case 0x294b0cu: goto label_294b0c;
        case 0x294b10u: goto label_294b10;
        case 0x294b14u: goto label_294b14;
        case 0x294b18u: goto label_294b18;
        case 0x294b1cu: goto label_294b1c;
        case 0x294b20u: goto label_294b20;
        case 0x294b24u: goto label_294b24;
        case 0x294b28u: goto label_294b28;
        case 0x294b2cu: goto label_294b2c;
        case 0x294b30u: goto label_294b30;
        case 0x294b34u: goto label_294b34;
        case 0x294b38u: goto label_294b38;
        case 0x294b3cu: goto label_294b3c;
        case 0x294b40u: goto label_294b40;
        case 0x294b44u: goto label_294b44;
        case 0x294b48u: goto label_294b48;
        case 0x294b4cu: goto label_294b4c;
        case 0x294b50u: goto label_294b50;
        case 0x294b54u: goto label_294b54;
        case 0x294b58u: goto label_294b58;
        case 0x294b5cu: goto label_294b5c;
        case 0x294b60u: goto label_294b60;
        case 0x294b64u: goto label_294b64;
        case 0x294b68u: goto label_294b68;
        case 0x294b6cu: goto label_294b6c;
        case 0x294b70u: goto label_294b70;
        case 0x294b74u: goto label_294b74;
        case 0x294b78u: goto label_294b78;
        case 0x294b7cu: goto label_294b7c;
        case 0x294b80u: goto label_294b80;
        case 0x294b84u: goto label_294b84;
        case 0x294b88u: goto label_294b88;
        case 0x294b8cu: goto label_294b8c;
        case 0x294b90u: goto label_294b90;
        case 0x294b94u: goto label_294b94;
        case 0x294b98u: goto label_294b98;
        case 0x294b9cu: goto label_294b9c;
        case 0x294ba0u: goto label_294ba0;
        case 0x294ba4u: goto label_294ba4;
        case 0x294ba8u: goto label_294ba8;
        case 0x294bacu: goto label_294bac;
        case 0x294bb0u: goto label_294bb0;
        case 0x294bb4u: goto label_294bb4;
        case 0x294bb8u: goto label_294bb8;
        case 0x294bbcu: goto label_294bbc;
        case 0x294bc0u: goto label_294bc0;
        case 0x294bc4u: goto label_294bc4;
        case 0x294bc8u: goto label_294bc8;
        case 0x294bccu: goto label_294bcc;
        case 0x294bd0u: goto label_294bd0;
        case 0x294bd4u: goto label_294bd4;
        case 0x294bd8u: goto label_294bd8;
        case 0x294bdcu: goto label_294bdc;
        case 0x294be0u: goto label_294be0;
        case 0x294be4u: goto label_294be4;
        case 0x294be8u: goto label_294be8;
        case 0x294becu: goto label_294bec;
        case 0x294bf0u: goto label_294bf0;
        case 0x294bf4u: goto label_294bf4;
        case 0x294bf8u: goto label_294bf8;
        case 0x294bfcu: goto label_294bfc;
        case 0x294c00u: goto label_294c00;
        case 0x294c04u: goto label_294c04;
        case 0x294c08u: goto label_294c08;
        case 0x294c0cu: goto label_294c0c;
        case 0x294c10u: goto label_294c10;
        case 0x294c14u: goto label_294c14;
        case 0x294c18u: goto label_294c18;
        case 0x294c1cu: goto label_294c1c;
        case 0x294c20u: goto label_294c20;
        case 0x294c24u: goto label_294c24;
        case 0x294c28u: goto label_294c28;
        case 0x294c2cu: goto label_294c2c;
        case 0x294c30u: goto label_294c30;
        case 0x294c34u: goto label_294c34;
        case 0x294c38u: goto label_294c38;
        case 0x294c3cu: goto label_294c3c;
        case 0x294c40u: goto label_294c40;
        case 0x294c44u: goto label_294c44;
        case 0x294c48u: goto label_294c48;
        case 0x294c4cu: goto label_294c4c;
        case 0x294c50u: goto label_294c50;
        case 0x294c54u: goto label_294c54;
        case 0x294c58u: goto label_294c58;
        case 0x294c5cu: goto label_294c5c;
        case 0x294c60u: goto label_294c60;
        case 0x294c64u: goto label_294c64;
        case 0x294c68u: goto label_294c68;
        case 0x294c6cu: goto label_294c6c;
        case 0x294c70u: goto label_294c70;
        case 0x294c74u: goto label_294c74;
        case 0x294c78u: goto label_294c78;
        case 0x294c7cu: goto label_294c7c;
        case 0x294c80u: goto label_294c80;
        case 0x294c84u: goto label_294c84;
        case 0x294c88u: goto label_294c88;
        case 0x294c8cu: goto label_294c8c;
        case 0x294c90u: goto label_294c90;
        case 0x294c94u: goto label_294c94;
        case 0x294c98u: goto label_294c98;
        case 0x294c9cu: goto label_294c9c;
        case 0x294ca0u: goto label_294ca0;
        case 0x294ca4u: goto label_294ca4;
        case 0x294ca8u: goto label_294ca8;
        case 0x294cacu: goto label_294cac;
        case 0x294cb0u: goto label_294cb0;
        case 0x294cb4u: goto label_294cb4;
        case 0x294cb8u: goto label_294cb8;
        case 0x294cbcu: goto label_294cbc;
        case 0x294cc0u: goto label_294cc0;
        case 0x294cc4u: goto label_294cc4;
        case 0x294cc8u: goto label_294cc8;
        case 0x294cccu: goto label_294ccc;
        case 0x294cd0u: goto label_294cd0;
        case 0x294cd4u: goto label_294cd4;
        case 0x294cd8u: goto label_294cd8;
        case 0x294cdcu: goto label_294cdc;
        case 0x294ce0u: goto label_294ce0;
        case 0x294ce4u: goto label_294ce4;
        case 0x294ce8u: goto label_294ce8;
        case 0x294cecu: goto label_294cec;
        case 0x294cf0u: goto label_294cf0;
        case 0x294cf4u: goto label_294cf4;
        case 0x294cf8u: goto label_294cf8;
        case 0x294cfcu: goto label_294cfc;
        case 0x294d00u: goto label_294d00;
        case 0x294d04u: goto label_294d04;
        case 0x294d08u: goto label_294d08;
        case 0x294d0cu: goto label_294d0c;
        case 0x294d10u: goto label_294d10;
        case 0x294d14u: goto label_294d14;
        case 0x294d18u: goto label_294d18;
        case 0x294d1cu: goto label_294d1c;
        case 0x294d20u: goto label_294d20;
        case 0x294d24u: goto label_294d24;
        case 0x294d28u: goto label_294d28;
        case 0x294d2cu: goto label_294d2c;
        case 0x294d30u: goto label_294d30;
        case 0x294d34u: goto label_294d34;
        case 0x294d38u: goto label_294d38;
        case 0x294d3cu: goto label_294d3c;
        case 0x294d40u: goto label_294d40;
        case 0x294d44u: goto label_294d44;
        case 0x294d48u: goto label_294d48;
        case 0x294d4cu: goto label_294d4c;
        case 0x294d50u: goto label_294d50;
        case 0x294d54u: goto label_294d54;
        case 0x294d58u: goto label_294d58;
        case 0x294d5cu: goto label_294d5c;
        case 0x294d60u: goto label_294d60;
        case 0x294d64u: goto label_294d64;
        case 0x294d68u: goto label_294d68;
        case 0x294d6cu: goto label_294d6c;
        case 0x294d70u: goto label_294d70;
        case 0x294d74u: goto label_294d74;
        case 0x294d78u: goto label_294d78;
        case 0x294d7cu: goto label_294d7c;
        case 0x294d80u: goto label_294d80;
        case 0x294d84u: goto label_294d84;
        case 0x294d88u: goto label_294d88;
        case 0x294d8cu: goto label_294d8c;
        case 0x294d90u: goto label_294d90;
        case 0x294d94u: goto label_294d94;
        case 0x294d98u: goto label_294d98;
        case 0x294d9cu: goto label_294d9c;
        case 0x294da0u: goto label_294da0;
        case 0x294da4u: goto label_294da4;
        case 0x294da8u: goto label_294da8;
        case 0x294dacu: goto label_294dac;
        case 0x294db0u: goto label_294db0;
        case 0x294db4u: goto label_294db4;
        case 0x294db8u: goto label_294db8;
        case 0x294dbcu: goto label_294dbc;
        case 0x294dc0u: goto label_294dc0;
        case 0x294dc4u: goto label_294dc4;
        case 0x294dc8u: goto label_294dc8;
        case 0x294dccu: goto label_294dcc;
        case 0x294dd0u: goto label_294dd0;
        case 0x294dd4u: goto label_294dd4;
        case 0x294dd8u: goto label_294dd8;
        case 0x294ddcu: goto label_294ddc;
        case 0x294de0u: goto label_294de0;
        case 0x294de4u: goto label_294de4;
        case 0x294de8u: goto label_294de8;
        case 0x294decu: goto label_294dec;
        case 0x294df0u: goto label_294df0;
        case 0x294df4u: goto label_294df4;
        case 0x294df8u: goto label_294df8;
        case 0x294dfcu: goto label_294dfc;
        case 0x294e00u: goto label_294e00;
        case 0x294e04u: goto label_294e04;
        case 0x294e08u: goto label_294e08;
        case 0x294e0cu: goto label_294e0c;
        case 0x294e10u: goto label_294e10;
        case 0x294e14u: goto label_294e14;
        case 0x294e18u: goto label_294e18;
        case 0x294e1cu: goto label_294e1c;
        case 0x294e20u: goto label_294e20;
        case 0x294e24u: goto label_294e24;
        case 0x294e28u: goto label_294e28;
        case 0x294e2cu: goto label_294e2c;
        case 0x294e30u: goto label_294e30;
        case 0x294e34u: goto label_294e34;
        case 0x294e38u: goto label_294e38;
        case 0x294e3cu: goto label_294e3c;
        case 0x294e40u: goto label_294e40;
        case 0x294e44u: goto label_294e44;
        case 0x294e48u: goto label_294e48;
        case 0x294e4cu: goto label_294e4c;
        case 0x294e50u: goto label_294e50;
        case 0x294e54u: goto label_294e54;
        case 0x294e58u: goto label_294e58;
        case 0x294e5cu: goto label_294e5c;
        case 0x294e60u: goto label_294e60;
        case 0x294e64u: goto label_294e64;
        case 0x294e68u: goto label_294e68;
        case 0x294e6cu: goto label_294e6c;
        case 0x294e70u: goto label_294e70;
        case 0x294e74u: goto label_294e74;
        case 0x294e78u: goto label_294e78;
        case 0x294e7cu: goto label_294e7c;
        case 0x294e80u: goto label_294e80;
        case 0x294e84u: goto label_294e84;
        case 0x294e88u: goto label_294e88;
        case 0x294e8cu: goto label_294e8c;
        case 0x294e90u: goto label_294e90;
        case 0x294e94u: goto label_294e94;
        case 0x294e98u: goto label_294e98;
        case 0x294e9cu: goto label_294e9c;
        case 0x294ea0u: goto label_294ea0;
        case 0x294ea4u: goto label_294ea4;
        case 0x294ea8u: goto label_294ea8;
        case 0x294eacu: goto label_294eac;
        case 0x294eb0u: goto label_294eb0;
        case 0x294eb4u: goto label_294eb4;
        case 0x294eb8u: goto label_294eb8;
        case 0x294ebcu: goto label_294ebc;
        case 0x294ec0u: goto label_294ec0;
        case 0x294ec4u: goto label_294ec4;
        case 0x294ec8u: goto label_294ec8;
        case 0x294eccu: goto label_294ecc;
        case 0x294ed0u: goto label_294ed0;
        case 0x294ed4u: goto label_294ed4;
        case 0x294ed8u: goto label_294ed8;
        case 0x294edcu: goto label_294edc;
        case 0x294ee0u: goto label_294ee0;
        case 0x294ee4u: goto label_294ee4;
        case 0x294ee8u: goto label_294ee8;
        case 0x294eecu: goto label_294eec;
        case 0x294ef0u: goto label_294ef0;
        case 0x294ef4u: goto label_294ef4;
        case 0x294ef8u: goto label_294ef8;
        case 0x294efcu: goto label_294efc;
        case 0x294f00u: goto label_294f00;
        case 0x294f04u: goto label_294f04;
        case 0x294f08u: goto label_294f08;
        case 0x294f0cu: goto label_294f0c;
        case 0x294f10u: goto label_294f10;
        case 0x294f14u: goto label_294f14;
        case 0x294f18u: goto label_294f18;
        case 0x294f1cu: goto label_294f1c;
        case 0x294f20u: goto label_294f20;
        case 0x294f24u: goto label_294f24;
        case 0x294f28u: goto label_294f28;
        case 0x294f2cu: goto label_294f2c;
        case 0x294f30u: goto label_294f30;
        case 0x294f34u: goto label_294f34;
        case 0x294f38u: goto label_294f38;
        case 0x294f3cu: goto label_294f3c;
        case 0x294f40u: goto label_294f40;
        case 0x294f44u: goto label_294f44;
        case 0x294f48u: goto label_294f48;
        case 0x294f4cu: goto label_294f4c;
        case 0x294f50u: goto label_294f50;
        case 0x294f54u: goto label_294f54;
        case 0x294f58u: goto label_294f58;
        case 0x294f5cu: goto label_294f5c;
        case 0x294f60u: goto label_294f60;
        case 0x294f64u: goto label_294f64;
        case 0x294f68u: goto label_294f68;
        case 0x294f6cu: goto label_294f6c;
        case 0x294f70u: goto label_294f70;
        case 0x294f74u: goto label_294f74;
        case 0x294f78u: goto label_294f78;
        case 0x294f7cu: goto label_294f7c;
        case 0x294f80u: goto label_294f80;
        case 0x294f84u: goto label_294f84;
        case 0x294f88u: goto label_294f88;
        case 0x294f8cu: goto label_294f8c;
        case 0x294f90u: goto label_294f90;
        case 0x294f94u: goto label_294f94;
        case 0x294f98u: goto label_294f98;
        case 0x294f9cu: goto label_294f9c;
        case 0x294fa0u: goto label_294fa0;
        case 0x294fa4u: goto label_294fa4;
        case 0x294fa8u: goto label_294fa8;
        case 0x294facu: goto label_294fac;
        case 0x294fb0u: goto label_294fb0;
        case 0x294fb4u: goto label_294fb4;
        case 0x294fb8u: goto label_294fb8;
        case 0x294fbcu: goto label_294fbc;
        case 0x294fc0u: goto label_294fc0;
        case 0x294fc4u: goto label_294fc4;
        case 0x294fc8u: goto label_294fc8;
        case 0x294fccu: goto label_294fcc;
        case 0x294fd0u: goto label_294fd0;
        case 0x294fd4u: goto label_294fd4;
        case 0x294fd8u: goto label_294fd8;
        case 0x294fdcu: goto label_294fdc;
        case 0x294fe0u: goto label_294fe0;
        case 0x294fe4u: goto label_294fe4;
        case 0x294fe8u: goto label_294fe8;
        case 0x294fecu: goto label_294fec;
        case 0x294ff0u: goto label_294ff0;
        case 0x294ff4u: goto label_294ff4;
        case 0x294ff8u: goto label_294ff8;
        case 0x294ffcu: goto label_294ffc;
        case 0x295000u: goto label_295000;
        case 0x295004u: goto label_295004;
        case 0x295008u: goto label_295008;
        case 0x29500cu: goto label_29500c;
        case 0x295010u: goto label_295010;
        case 0x295014u: goto label_295014;
        case 0x295018u: goto label_295018;
        case 0x29501cu: goto label_29501c;
        case 0x295020u: goto label_295020;
        case 0x295024u: goto label_295024;
        case 0x295028u: goto label_295028;
        case 0x29502cu: goto label_29502c;
        case 0x295030u: goto label_295030;
        case 0x295034u: goto label_295034;
        case 0x295038u: goto label_295038;
        case 0x29503cu: goto label_29503c;
        case 0x295040u: goto label_295040;
        case 0x295044u: goto label_295044;
        case 0x295048u: goto label_295048;
        case 0x29504cu: goto label_29504c;
        case 0x295050u: goto label_295050;
        case 0x295054u: goto label_295054;
        case 0x295058u: goto label_295058;
        case 0x29505cu: goto label_29505c;
        case 0x295060u: goto label_295060;
        case 0x295064u: goto label_295064;
        case 0x295068u: goto label_295068;
        case 0x29506cu: goto label_29506c;
        case 0x295070u: goto label_295070;
        case 0x295074u: goto label_295074;
        case 0x295078u: goto label_295078;
        case 0x29507cu: goto label_29507c;
        case 0x295080u: goto label_295080;
        case 0x295084u: goto label_295084;
        case 0x295088u: goto label_295088;
        case 0x29508cu: goto label_29508c;
        case 0x295090u: goto label_295090;
        case 0x295094u: goto label_295094;
        case 0x295098u: goto label_295098;
        case 0x29509cu: goto label_29509c;
        case 0x2950a0u: goto label_2950a0;
        case 0x2950a4u: goto label_2950a4;
        case 0x2950a8u: goto label_2950a8;
        case 0x2950acu: goto label_2950ac;
        case 0x2950b0u: goto label_2950b0;
        case 0x2950b4u: goto label_2950b4;
        case 0x2950b8u: goto label_2950b8;
        case 0x2950bcu: goto label_2950bc;
        case 0x2950c0u: goto label_2950c0;
        case 0x2950c4u: goto label_2950c4;
        case 0x2950c8u: goto label_2950c8;
        case 0x2950ccu: goto label_2950cc;
        case 0x2950d0u: goto label_2950d0;
        case 0x2950d4u: goto label_2950d4;
        case 0x2950d8u: goto label_2950d8;
        case 0x2950dcu: goto label_2950dc;
        case 0x2950e0u: goto label_2950e0;
        case 0x2950e4u: goto label_2950e4;
        case 0x2950e8u: goto label_2950e8;
        case 0x2950ecu: goto label_2950ec;
        case 0x2950f0u: goto label_2950f0;
        case 0x2950f4u: goto label_2950f4;
        case 0x2950f8u: goto label_2950f8;
        case 0x2950fcu: goto label_2950fc;
        default: break;
    }

    ctx->pc = 0x294a00u;

label_294a00:
    // 0x294a00: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x294a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_294a04:
    // 0x294a04: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x294a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_294a08:
    // 0x294a08: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x294a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_294a0c:
    // 0x294a0c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x294a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_294a10:
    // 0x294a10: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x294a10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294a14:
    // 0x294a14: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x294a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_294a18:
    // 0x294a18: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x294a18u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_294a1c:
    // 0x294a1c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x294a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_294a20:
    // 0x294a20: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x294a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_294a24:
    // 0x294a24: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x294a24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_294a28:
    // 0x294a28: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x294a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_294a2c:
    // 0x294a2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x294a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_294a30:
    // 0x294a30: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x294a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_294a34:
    // 0x294a34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x294a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_294a38:
    // 0x294a38: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x294a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294a3c:
    // 0x294a3c: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x294a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_294a40:
    // 0x294a40: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x294a40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_294a44:
    // 0x294a44: 0x8c830078  lw          $v1, 0x78($a0)
    ctx->pc = 0x294a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_294a48:
    // 0x294a48: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x294a48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_294a4c:
    // 0x294a4c: 0x1020019c  beqz        $at, . + 4 + (0x19C << 2)
label_294a50:
    if (ctx->pc == 0x294A50u) {
        ctx->pc = 0x294A50u;
            // 0x294a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294A54u;
        goto label_294a54;
    }
    ctx->pc = 0x294A4Cu;
    {
        const bool branch_taken_0x294a4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A4Cu;
            // 0x294a50: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a4c) {
            ctx->pc = 0x2950C0u;
            goto label_2950c0;
        }
    }
    ctx->pc = 0x294A54u;
label_294a54:
    // 0x294a54: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x294a54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294a58:
    // 0x294a58: 0x27b20144  addiu       $s2, $sp, 0x144
    ctx->pc = 0x294a58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_294a5c:
    // 0x294a5c: 0x27b60148  addiu       $s6, $sp, 0x148
    ctx->pc = 0x294a5cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_294a60:
    // 0x294a60: 0x8e030074  lw          $v1, 0x74($s0)
    ctx->pc = 0x294a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_294a64:
    // 0x294a64: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x294a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_294a68:
    // 0x294a68: 0x8c640028  lw          $a0, 0x28($v1)
    ctx->pc = 0x294a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_294a6c:
    // 0x294a6c: 0x80830010  lb          $v1, 0x10($a0)
    ctx->pc = 0x294a6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_294a70:
    // 0x294a70: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x294a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_294a74:
    // 0x294a74: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x294a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_294a78:
    // 0x294a78: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x294a78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294a7c:
    // 0x294a7c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_294a80:
    if (ctx->pc == 0x294A80u) {
        ctx->pc = 0x294A80u;
            // 0x294a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294A84u;
        goto label_294a84;
    }
    ctx->pc = 0x294A7Cu;
    {
        const bool branch_taken_0x294a7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A7Cu;
            // 0x294a80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a7c) {
            ctx->pc = 0x294AC0u;
            goto label_294ac0;
        }
    }
    ctx->pc = 0x294A84u;
label_294a84:
    // 0x294a84: 0x8c66004c  lw          $a2, 0x4C($v1)
    ctx->pc = 0x294a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_294a88:
    // 0x294a88: 0x24051300  addiu       $a1, $zero, 0x1300
    ctx->pc = 0x294a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
label_294a8c:
    // 0x294a8c: 0x0  nop
    ctx->pc = 0x294a8cu;
    // NOP
label_294a90:
    // 0x294a90: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x294a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_294a94:
    // 0x294a94: 0x14850004  bne         $a0, $a1, . + 4 + (0x4 << 2)
label_294a98:
    if (ctx->pc == 0x294A98u) {
        ctx->pc = 0x294A98u;
            // 0x294a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x294A9Cu;
        goto label_294a9c;
    }
    ctx->pc = 0x294A94u;
    {
        const bool branch_taken_0x294a94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x294A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294A94u;
            // 0x294a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294a94) {
            ctx->pc = 0x294AA8u;
            goto label_294aa8;
        }
    }
    ctx->pc = 0x294A9Cu;
label_294a9c:
    // 0x294a9c: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x294a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_294aa0:
    // 0x294aa0: 0x10000009  b           . + 4 + (0x9 << 2)
label_294aa4:
    if (ctx->pc == 0x294AA4u) {
        ctx->pc = 0x294AA4u;
            // 0x294aa4: 0xa3a4017c  sb          $a0, 0x17C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 380), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x294AA8u;
        goto label_294aa8;
    }
    ctx->pc = 0x294AA0u;
    {
        const bool branch_taken_0x294aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AA0u;
            // 0x294aa4: 0xa3a4017c  sb          $a0, 0x17C($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 380), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294aa0) {
            ctx->pc = 0x294AC8u;
            goto label_294ac8;
        }
    }
    ctx->pc = 0x294AA8u;
label_294aa8:
    // 0x294aa8: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x294aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_294aac:
    // 0x294aac: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x294aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_294ab0:
    // 0x294ab0: 0xe4202a  slt         $a0, $a3, $a0
    ctx->pc = 0x294ab0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294ab4:
    // 0x294ab4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_294ab8:
    if (ctx->pc == 0x294AB8u) {
        ctx->pc = 0x294AB8u;
            // 0x294ab8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->pc = 0x294ABCu;
        goto label_294abc;
    }
    ctx->pc = 0x294AB4u;
    {
        const bool branch_taken_0x294ab4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x294AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294AB4u;
            // 0x294ab8: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294ab4) {
            ctx->pc = 0x294A90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294a90;
        }
    }
    ctx->pc = 0x294ABCu;
label_294abc:
    // 0x294abc: 0x0  nop
    ctx->pc = 0x294abcu;
    // NOP
label_294ac0:
    // 0x294ac0: 0xa3a0017c  sb          $zero, 0x17C($sp)
    ctx->pc = 0x294ac0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 380), (uint8_t)GPR_U32(ctx, 0));
label_294ac4:
    // 0x294ac4: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x294ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_294ac8:
    // 0x294ac8: 0x80a40000  lb          $a0, 0x0($a1)
    ctx->pc = 0x294ac8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_294acc:
    // 0x294acc: 0x1080002e  beqz        $a0, . + 4 + (0x2E << 2)
label_294ad0:
    if (ctx->pc == 0x294AD0u) {
        ctx->pc = 0x294AD4u;
        goto label_294ad4;
    }
    ctx->pc = 0x294ACCu;
    {
        const bool branch_taken_0x294acc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294acc) {
            ctx->pc = 0x294B88u;
            goto label_294b88;
        }
    }
    ctx->pc = 0x294AD4u;
label_294ad4:
    // 0x294ad4: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x294ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_294ad8:
    // 0x294ad8: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x294ad8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294adc:
    // 0x294adc: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_294ae0:
    if (ctx->pc == 0x294AE0u) {
        ctx->pc = 0x294AE0u;
            // 0x294ae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294AE4u;
        goto label_294ae4;
    }
    ctx->pc = 0x294ADCu;
    {
        const bool branch_taken_0x294adc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294ADCu;
            // 0x294ae0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294adc) {
            ctx->pc = 0x294B28u;
            goto label_294b28;
        }
    }
    ctx->pc = 0x294AE4u;
label_294ae4:
    // 0x294ae4: 0x8c66004c  lw          $a2, 0x4C($v1)
    ctx->pc = 0x294ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_294ae8:
    // 0x294ae8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x294ae8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_294aec:
    // 0x294aec: 0x24051300  addiu       $a1, $zero, 0x1300
    ctx->pc = 0x294aecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4864));
label_294af0:
    // 0x294af0: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x294af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_294af4:
    // 0x294af4: 0x14850006  bne         $a0, $a1, . + 4 + (0x6 << 2)
label_294af8:
    if (ctx->pc == 0x294AF8u) {
        ctx->pc = 0x294AFCu;
        goto label_294afc;
    }
    ctx->pc = 0x294AF4u;
    {
        const bool branch_taken_0x294af4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x294af4) {
            ctx->pc = 0x294B10u;
            goto label_294b10;
        }
    }
    ctx->pc = 0x294AFCu;
label_294afc:
    // 0x294afc: 0x81900  sll         $v1, $t0, 4
    ctx->pc = 0x294afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_294b00:
    // 0x294b00: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x294b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_294b04:
    // 0x294b04: 0x1000000a  b           . + 4 + (0xA << 2)
label_294b08:
    if (ctx->pc == 0x294B08u) {
        ctx->pc = 0x294B08u;
            // 0x294b08: 0xdc630008  ld          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->pc = 0x294B0Cu;
        goto label_294b0c;
    }
    ctx->pc = 0x294B04u;
    {
        const bool branch_taken_0x294b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B04u;
            // 0x294b08: 0xdc630008  ld          $v1, 0x8($v1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b04) {
            ctx->pc = 0x294B30u;
            goto label_294b30;
        }
    }
    ctx->pc = 0x294B0Cu;
label_294b0c:
    // 0x294b0c: 0x0  nop
    ctx->pc = 0x294b0cu;
    // NOP
label_294b10:
    // 0x294b10: 0x8c640050  lw          $a0, 0x50($v1)
    ctx->pc = 0x294b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_294b14:
    // 0x294b14: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x294b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_294b18:
    // 0x294b18: 0x104202a  slt         $a0, $t0, $a0
    ctx->pc = 0x294b18u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294b1c:
    // 0x294b1c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
label_294b20:
    if (ctx->pc == 0x294B20u) {
        ctx->pc = 0x294B20u;
            // 0x294b20: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x294B24u;
        goto label_294b24;
    }
    ctx->pc = 0x294B1Cu;
    {
        const bool branch_taken_0x294b1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x294B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B1Cu;
            // 0x294b20: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b1c) {
            ctx->pc = 0x294AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294af0;
        }
    }
    ctx->pc = 0x294B24u;
label_294b24:
    // 0x294b24: 0x0  nop
    ctx->pc = 0x294b24u;
    // NOP
label_294b28:
    // 0x294b28: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x294b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294b2c:
    // 0x294b2c: 0x0  nop
    ctx->pc = 0x294b2cu;
    // NOP
label_294b30:
    // 0x294b30: 0x3a83c  dsll32      $s5, $v1, 0
    ctx->pc = 0x294b30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3) << (32 + 0));
label_294b34:
    // 0x294b34: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x294b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_294b38:
    // 0x294b38: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x294b38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294b3c:
    // 0x294b3c: 0x6800012  bltz        $s4, . + 4 + (0x12 << 2)
label_294b40:
    if (ctx->pc == 0x294B40u) {
        ctx->pc = 0x294B40u;
            // 0x294b40: 0x15a83f  dsra32      $s5, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->pc = 0x294B44u;
        goto label_294b44;
    }
    ctx->pc = 0x294B3Cu;
    {
        const bool branch_taken_0x294b3c = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x294B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B3Cu;
            // 0x294b40: 0x15a83f  dsra32      $s5, $s5, 0 (Delay Slot)
        SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b3c) {
            ctx->pc = 0x294B88u;
            goto label_294b88;
        }
    }
    ctx->pc = 0x294B44u;
label_294b44:
    // 0x294b44: 0x148880  sll         $s1, $s4, 2
    ctx->pc = 0x294b44u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_294b48:
    // 0x294b48: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x294b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_294b4c:
    // 0x294b4c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x294b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_294b50:
    // 0x294b50: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x294b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_294b54:
    // 0x294b54: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_294b58:
    if (ctx->pc == 0x294B58u) {
        ctx->pc = 0x294B5Cu;
        goto label_294b5c;
    }
    ctx->pc = 0x294B54u;
    {
        const bool branch_taken_0x294b54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294b54) {
            ctx->pc = 0x294B78u;
            goto label_294b78;
        }
    }
    ctx->pc = 0x294B5Cu;
label_294b5c:
    // 0x294b5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x294b5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_294b60:
    // 0x294b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x294b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_294b64:
    // 0x294b64: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x294b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_294b68:
    // 0x294b68: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x294b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294b6c:
    // 0x294b6c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x294b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_294b70:
    // 0x294b70: 0x320f809  jalr        $t9
label_294b74:
    if (ctx->pc == 0x294B74u) {
        ctx->pc = 0x294B74u;
            // 0x294b74: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x294B78u;
        goto label_294b78;
    }
    ctx->pc = 0x294B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294B78u);
        ctx->pc = 0x294B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B70u;
            // 0x294b74: 0x533821  addu        $a3, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x294B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294B78u; }
            if (ctx->pc != 0x294B78u) { return; }
        }
        }
    }
    ctx->pc = 0x294B78u;
label_294b78:
    // 0x294b78: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_294b7c:
    // 0x294b7c: 0x681fff2  bgez        $s4, . + 4 + (-0xE << 2)
label_294b80:
    if (ctx->pc == 0x294B80u) {
        ctx->pc = 0x294B80u;
            // 0x294b80: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x294B84u;
        goto label_294b84;
    }
    ctx->pc = 0x294B7Cu;
    {
        const bool branch_taken_0x294b7c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x294B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B7Cu;
            // 0x294b80: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b7c) {
            ctx->pc = 0x294B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294b48;
        }
    }
    ctx->pc = 0x294B84u;
label_294b84:
    // 0x294b84: 0x0  nop
    ctx->pc = 0x294b84u;
    // NOP
label_294b88:
    // 0x294b88: 0x8e040074  lw          $a0, 0x74($s0)
    ctx->pc = 0x294b88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_294b8c:
    // 0x294b8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294b90:
    // 0x294b90: 0x932821  addu        $a1, $a0, $s3
    ctx->pc = 0x294b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_294b94:
    // 0x294b94: 0x8ca60028  lw          $a2, 0x28($a1)
    ctx->pc = 0x294b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_294b98:
    // 0x294b98: 0x80c40018  lb          $a0, 0x18($a2)
    ctx->pc = 0x294b98u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_294b9c:
    // 0x294b9c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_294ba0:
    if (ctx->pc == 0x294BA0u) {
        ctx->pc = 0x294BA0u;
            // 0x294ba0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294BA4u;
        goto label_294ba4;
    }
    ctx->pc = 0x294B9Cu;
    {
        const bool branch_taken_0x294b9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B9Cu;
            // 0x294ba0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b9c) {
            ctx->pc = 0x294BACu;
            goto label_294bac;
        }
    }
    ctx->pc = 0x294BA4u;
label_294ba4:
    // 0x294ba4: 0x80c30010  lb          $v1, 0x10($a2)
    ctx->pc = 0x294ba4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_294ba8:
    // 0x294ba8: 0xc3a021  addu        $s4, $a2, $v1
    ctx->pc = 0x294ba8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_294bac:
    // 0x294bac: 0x1280013c  beqz        $s4, . + 4 + (0x13C << 2)
label_294bb0:
    if (ctx->pc == 0x294BB0u) {
        ctx->pc = 0x294BB4u;
        goto label_294bb4;
    }
    ctx->pc = 0x294BACu;
    {
        const bool branch_taken_0x294bac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x294bac) {
            ctx->pc = 0x2950A0u;
            goto label_2950a0;
        }
    }
    ctx->pc = 0x294BB4u;
label_294bb4:
    // 0x294bb4: 0x928400a8  lbu         $a0, 0xA8($s4)
    ctx->pc = 0x294bb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 168)));
label_294bb8:
    // 0x294bb8: 0x38830007  xori        $v1, $a0, 0x7
    ctx->pc = 0x294bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)7);
label_294bbc:
    // 0x294bbc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x294bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_294bc0:
    // 0x294bc0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_294bc4:
    if (ctx->pc == 0x294BC4u) {
        ctx->pc = 0x294BC4u;
            // 0x294bc4: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x294BC8u;
        goto label_294bc8;
    }
    ctx->pc = 0x294BC0u;
    {
        const bool branch_taken_0x294bc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294BC0u;
            // 0x294bc4: 0x64060001  daddiu      $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294bc0) {
            ctx->pc = 0x294BE0u;
            goto label_294be0;
        }
    }
    ctx->pc = 0x294BC8u;
label_294bc8:
    // 0x294bc8: 0x38830006  xori        $v1, $a0, 0x6
    ctx->pc = 0x294bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
label_294bcc:
    // 0x294bcc: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x294bccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_294bd0:
    // 0x294bd0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_294bd4:
    if (ctx->pc == 0x294BD4u) {
        ctx->pc = 0x294BD8u;
        goto label_294bd8;
    }
    ctx->pc = 0x294BD0u;
    {
        const bool branch_taken_0x294bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294bd0) {
            ctx->pc = 0x294BE0u;
            goto label_294be0;
        }
    }
    ctx->pc = 0x294BD8u;
label_294bd8:
    // 0x294bd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x294bd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294bdc:
    // 0x294bdc: 0x0  nop
    ctx->pc = 0x294bdcu;
    // NOP
label_294be0:
    // 0x294be0: 0x61e3c  dsll32      $v1, $a2, 24
    ctx->pc = 0x294be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 24));
label_294be4:
    // 0x294be4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x294be4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_294be8:
    // 0x294be8: 0x1460012d  bnez        $v1, . + 4 + (0x12D << 2)
label_294bec:
    if (ctx->pc == 0x294BECu) {
        ctx->pc = 0x294BF0u;
        goto label_294bf0;
    }
    ctx->pc = 0x294BE8u;
    {
        const bool branch_taken_0x294be8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294be8) {
            ctx->pc = 0x2950A0u;
            goto label_2950a0;
        }
    }
    ctx->pc = 0x294BF0u;
label_294bf0:
    // 0x294bf0: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x294bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294bf4:
    // 0x294bf4: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x294bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_294bf8:
    // 0x294bf8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x294bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_294bfc:
    // 0x294bfc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x294bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_294c00:
    // 0x294c00: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294c00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294c04:
    // 0x294c04: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x294c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_294c08:
    // 0x294c08: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x294c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_294c0c:
    // 0x294c0c: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x294c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c10:
    // 0x294c10: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c14:
    // 0x294c14: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x294c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c18:
    // 0x294c18: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x294c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_294c1c:
    // 0x294c1c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c20:
    // 0x294c20: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x294c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c24:
    // 0x294c24: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x294c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_294c28:
    // 0x294c28: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c2c:
    // 0x294c2c: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x294c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_294c30:
    // 0x294c30: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x294c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_294c34:
    // 0x294c34: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x294c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c38:
    // 0x294c38: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x294c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_294c3c:
    // 0x294c3c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c40:
    // 0x294c40: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x294c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_294c44:
    // 0x294c44: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x294c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_294c48:
    // 0x294c48: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x294c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c4c:
    // 0x294c4c: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294c50:
    // 0x294c50: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c54:
    // 0x294c54: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x294c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c58:
    // 0x294c58: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x294c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_294c5c:
    // 0x294c5c: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x294c5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_294c60:
    // 0x294c60: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x294c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c64:
    // 0x294c64: 0xe6c10000  swc1        $f1, 0x0($s6)
    ctx->pc = 0x294c64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
label_294c68:
    // 0x294c68: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x294c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c6c:
    // 0x294c6c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294c6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294c70:
    // 0x294c70: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_294c74:
    // 0x294c74: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x294c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_294c78:
    // 0x294c78: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x294c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_294c7c:
    // 0x294c7c: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x294c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_294c80:
    // 0x294c80: 0xc6840104  lwc1        $f4, 0x104($s4)
    ctx->pc = 0x294c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_294c84:
    // 0x294c84: 0xc6810108  lwc1        $f1, 0x108($s4)
    ctx->pc = 0x294c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294c88:
    // 0x294c88: 0xc7a70130  lwc1        $f7, 0x130($sp)
    ctx->pc = 0x294c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_294c8c:
    // 0x294c8c: 0xc6860100  lwc1        $f6, 0x100($s4)
    ctx->pc = 0x294c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_294c90:
    // 0x294c90: 0xc68c0194  lwc1        $f12, 0x194($s4)
    ctx->pc = 0x294c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_294c94:
    // 0x294c94: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x294c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_294c98:
    // 0x294c98: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x294c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294c9c:
    // 0x294c9c: 0x46042c01  sub.s       $f16, $f5, $f4
    ctx->pc = 0x294c9cu;
    ctx->f[16] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_294ca0:
    // 0x294ca0: 0xc68d0198  lwc1        $f13, 0x198($s4)
    ctx->pc = 0x294ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_294ca4:
    // 0x294ca4: 0x46011bc1  sub.s       $f15, $f3, $f1
    ctx->pc = 0x294ca4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_294ca8:
    // 0x294ca8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294cac:
    // 0x294cac: 0x46063c41  sub.s       $f17, $f7, $f6
    ctx->pc = 0x294cacu;
    ctx->f[17] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_294cb0:
    // 0x294cb0: 0x460f601a  mula.s      $f12, $f15
    ctx->pc = 0x294cb0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[15]);
label_294cb4:
    // 0x294cb4: 0x46106b9d  msub.s      $f14, $f13, $f16
    ctx->pc = 0x294cb4u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[16]));
label_294cb8:
    // 0x294cb8: 0xc68a0180  lwc1        $f10, 0x180($s4)
    ctx->pc = 0x294cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_294cbc:
    // 0x294cbc: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x294cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_294cc0:
    // 0x294cc0: 0xc68b0190  lwc1        $f11, 0x190($s4)
    ctx->pc = 0x294cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_294cc4:
    // 0x294cc4: 0x4611681a  mula.s      $f13, $f17
    ctx->pc = 0x294cc4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[17]);
label_294cc8:
    // 0x294cc8: 0xc6890184  lwc1        $f9, 0x184($s4)
    ctx->pc = 0x294cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_294ccc:
    // 0x294ccc: 0xc6070010  lwc1        $f7, 0x10($s0)
    ctx->pc = 0x294cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_294cd0:
    // 0x294cd0: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x294cd0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
label_294cd4:
    // 0x294cd4: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x294cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_294cd8:
    // 0x294cd8: 0x460f5b5d  msub.s      $f13, $f11, $f15
    ctx->pc = 0x294cd8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[15]));
label_294cdc:
    // 0x294cdc: 0x4610581a  mula.s      $f11, $f16
    ctx->pc = 0x294cdcu;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[16]);
label_294ce0:
    // 0x294ce0: 0x46077381  sub.s       $f14, $f14, $f7
    ctx->pc = 0x294ce0u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[7]);
label_294ce4:
    // 0x294ce4: 0xc6060014  lwc1        $f6, 0x14($s0)
    ctx->pc = 0x294ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_294ce8:
    // 0x294ce8: 0x46096b40  add.s       $f13, $f13, $f9
    ctx->pc = 0x294ce8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[9]);
label_294cec:
    // 0x294cec: 0xc6880188  lwc1        $f8, 0x188($s4)
    ctx->pc = 0x294cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_294cf0:
    // 0x294cf0: 0x461162dd  msub.s      $f11, $f12, $f17
    ctx->pc = 0x294cf0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[17]));
label_294cf4:
    // 0x294cf4: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x294cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294cf8:
    // 0x294cf8: 0x46066b41  sub.s       $f13, $f13, $f6
    ctx->pc = 0x294cf8u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[6]);
label_294cfc:
    // 0x294cfc: 0xc6050018  lwc1        $f5, 0x18($s0)
    ctx->pc = 0x294cfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_294d00:
    // 0x294d00: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x294d00u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
label_294d04:
    // 0x294d04: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x294d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d08:
    // 0x294d08: 0x46047102  mul.s       $f4, $f14, $f4
    ctx->pc = 0x294d08u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[4]);
label_294d0c:
    // 0x294d0c: 0x460368c2  mul.s       $f3, $f13, $f3
    ctx->pc = 0x294d0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[13], ctx->f[3]);
label_294d10:
    // 0x294d10: 0x46055ac1  sub.s       $f11, $f11, $f5
    ctx->pc = 0x294d10u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[5]);
label_294d14:
    // 0x294d14: 0x46032018  adda.s      $f4, $f3
    ctx->pc = 0x294d14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_294d18:
    // 0x294d18: 0x4601585c  madd.s      $f1, $f11, $f1
    ctx->pc = 0x294d18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_294d1c:
    // 0x294d1c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294d20:
    // 0x294d20: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x294d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_294d24:
    // 0x294d24: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x294d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294d28:
    // 0x294d28: 0x46000846  mov.s       $f1, $f1
    ctx->pc = 0x294d28u;
    ctx->f[1] = FPU_MOV_S(ctx->f[1]);
label_294d2c:
    // 0x294d2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x294d2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_294d30:
    // 0x294d30: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x294d30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294d34:
    // 0x294d34: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_294d38:
    if (ctx->pc == 0x294D38u) {
        ctx->pc = 0x294D38u;
            // 0x294d38: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->pc = 0x294D3Cu;
        goto label_294d3c;
    }
    ctx->pc = 0x294D34u;
    {
        const bool branch_taken_0x294d34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D34u;
            // 0x294d38: 0x46011502  mul.s       $f20, $f2, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d34) {
            ctx->pc = 0x294D60u;
            goto label_294d60;
        }
    }
    ctx->pc = 0x294D3Cu;
label_294d3c:
    // 0x294d3c: 0xc6e1000c  lwc1        $f1, 0xC($s7)
    ctx->pc = 0x294d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d40:
    // 0x294d40: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_294d44:
    // 0x294d44: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x294d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_294d48:
    // 0x294d48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294d48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294d4c:
    // 0x294d4c: 0x0  nop
    ctx->pc = 0x294d4cu;
    // NOP
label_294d50:
    // 0x294d50: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x294d50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_294d54:
    // 0x294d54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x294d54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_294d58:
    // 0x294d58: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x294d58u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_294d5c:
    // 0x294d5c: 0x0  nop
    ctx->pc = 0x294d5cu;
    // NOP
label_294d60:
    // 0x294d60: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x294d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_294d64:
    // 0x294d64: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x294d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d68:
    // 0x294d68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294d68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294d6c:
    // 0x294d6c: 0x0  nop
    ctx->pc = 0x294d6cu;
    // NOP
label_294d70:
    // 0x294d70: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x294d70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294d74:
    // 0x294d74: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294d74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294d78:
    // 0x294d78: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x294d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_294d7c:
    // 0x294d7c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d80:
    // 0x294d80: 0x27a20124  addiu       $v0, $sp, 0x124
    ctx->pc = 0x294d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
label_294d84:
    // 0x294d84: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294d88:
    // 0x294d88: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x294d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_294d8c:
    // 0x294d8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294d90:
    // 0x294d90: 0x27a20128  addiu       $v0, $sp, 0x128
    ctx->pc = 0x294d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 296));
label_294d94:
    // 0x294d94: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294d98:
    // 0x294d98: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x294d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_294d9c:
    // 0x294d9c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294da0:
    // 0x294da0: 0x27a2012c  addiu       $v0, $sp, 0x12C
    ctx->pc = 0x294da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 300));
label_294da4:
    // 0x294da4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294da8:
    // 0x294da8: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x294da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_294dac:
    // 0x294dac: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294dacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_294db0:
    // 0x294db0: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x294db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_294db4:
    // 0x294db4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294db4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_294db8:
    // 0x294db8: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x294db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_294dbc:
    // 0x294dbc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x294dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_294dc0:
    // 0x294dc0: 0x4500005f  bc1f        . + 4 + (0x5F << 2)
label_294dc4:
    if (ctx->pc == 0x294DC4u) {
        ctx->pc = 0x294DC4u;
            // 0x294dc4: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->pc = 0x294DC8u;
        goto label_294dc8;
    }
    ctx->pc = 0x294DC0u;
    {
        const bool branch_taken_0x294dc0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294DC0u;
            // 0x294dc4: 0xafa00110  sw          $zero, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294dc0) {
            ctx->pc = 0x294F40u;
            goto label_294f40;
        }
    }
    ctx->pc = 0x294DC8u;
label_294dc8:
    // 0x294dc8: 0x8e9900a0  lw          $t9, 0xA0($s4)
    ctx->pc = 0x294dc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_294dcc:
    // 0x294dcc: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x294dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_294dd0:
    // 0x294dd0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x294dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_294dd4:
    // 0x294dd4: 0x320f809  jalr        $t9
label_294dd8:
    if (ctx->pc == 0x294DD8u) {
        ctx->pc = 0x294DD8u;
            // 0x294dd8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x294DDCu;
        goto label_294ddc;
    }
    ctx->pc = 0x294DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294DDCu);
        ctx->pc = 0x294DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294DD4u;
            // 0x294dd8: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x294DDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294DDCu; }
            if (ctx->pc != 0x294DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x294DDCu;
label_294ddc:
    // 0x294ddc: 0x27a20134  addiu       $v0, $sp, 0x134
    ctx->pc = 0x294ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 308));
label_294de0:
    // 0x294de0: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x294de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_294de4:
    // 0x294de4: 0xc4450000  lwc1        $f5, 0x0($v0)
    ctx->pc = 0x294de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_294de8:
    // 0x294de8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x294de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_294dec:
    // 0x294dec: 0xc7a60130  lwc1        $f6, 0x130($sp)
    ctx->pc = 0x294decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_294df0:
    // 0x294df0: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x294df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_294df4:
    // 0x294df4: 0xc6800100  lwc1        $f0, 0x100($s4)
    ctx->pc = 0x294df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294df8:
    // 0x294df8: 0xc6840104  lwc1        $f4, 0x104($s4)
    ctx->pc = 0x294df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_294dfc:
    // 0x294dfc: 0xc6820108  lwc1        $f2, 0x108($s4)
    ctx->pc = 0x294dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_294e00:
    // 0x294e00: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x294e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294e04:
    // 0x294e04: 0x27a20138  addiu       $v0, $sp, 0x138
    ctx->pc = 0x294e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_294e08:
    // 0x294e08: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x294e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294e0c:
    // 0x294e0c: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x294e0cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_294e10:
    // 0x294e10: 0x46042901  sub.s       $f4, $f5, $f4
    ctx->pc = 0x294e10u;
    ctx->f[4] = FPU_SUB_S(ctx->f[5], ctx->f[4]);
label_294e14:
    // 0x294e14: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294e18:
    // 0x294e18: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x294e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e1c:
    // 0x294e1c: 0x46021881  sub.s       $f2, $f3, $f2
    ctx->pc = 0x294e1cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_294e20:
    // 0x294e20: 0x4601201a  mula.s      $f4, $f1
    ctx->pc = 0x294e20u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_294e24:
    // 0x294e24: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x294e24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_294e28:
    // 0x294e28: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x294e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_294e2c:
    // 0x294e2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294e30:
    // 0x294e30: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x294e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e34:
    // 0x294e34: 0x4601101a  mula.s      $f2, $f1
    ctx->pc = 0x294e34u;
    ctx->f[31] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_294e38:
    // 0x294e38: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x294e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_294e3c:
    // 0x294e3c: 0x4600301d  msub.s      $f0, $f6, $f0
    ctx->pc = 0x294e3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[0]));
label_294e40:
    // 0x294e40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294e40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294e44:
    // 0x294e44: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x294e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294e48:
    // 0x294e48: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294e4c:
    // 0x294e4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e50:
    // 0x294e50: 0x4601301a  mula.s      $f6, $f1
    ctx->pc = 0x294e50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_294e54:
    // 0x294e54: 0x4600201d  msub.s      $f0, $f4, $f0
    ctx->pc = 0x294e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[0]));
label_294e58:
    // 0x294e58: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x294e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_294e5c:
    // 0x294e5c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294e60:
    // 0x294e60: 0x27a200dc  addiu       $v0, $sp, 0xDC
    ctx->pc = 0x294e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_294e64:
    // 0x294e64: 0xc0a4660  jal         func_291980
label_294e68:
    if (ctx->pc == 0x294E68u) {
        ctx->pc = 0x294E68u;
            // 0x294e68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x294E6Cu;
        goto label_294e6c;
    }
    ctx->pc = 0x294E64u;
    SET_GPR_U32(ctx, 31, 0x294E6Cu);
    ctx->pc = 0x294E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294E64u;
            // 0x294e68: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291980u;
    if (runtime->hasFunction(0x291980u)) {
        auto targetFn = runtime->lookupFunction(0x291980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E6Cu; }
        if (ctx->pc != 0x294E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291980_0x291980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294E6Cu; }
        if (ctx->pc != 0x294E6Cu) { return; }
    }
    ctx->pc = 0x294E6Cu;
label_294e6c:
    // 0x294e6c: 0x27a200c4  addiu       $v0, $sp, 0xC4
    ctx->pc = 0x294e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_294e70:
    // 0x294e70: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x294e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294e74:
    // 0x294e74: 0xc7a500c0  lwc1        $f5, 0xC0($sp)
    ctx->pc = 0x294e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_294e78:
    // 0x294e78: 0xc7a400d0  lwc1        $f4, 0xD0($sp)
    ctx->pc = 0x294e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_294e7c:
    // 0x294e7c: 0x27a200d4  addiu       $v0, $sp, 0xD4
    ctx->pc = 0x294e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_294e80:
    // 0x294e80: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x294e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_294e84:
    // 0x294e84: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x294e84u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_294e88:
    // 0x294e88: 0x27a200c8  addiu       $v0, $sp, 0xC8
    ctx->pc = 0x294e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_294e8c:
    // 0x294e8c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294e90:
    // 0x294e90: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x294e90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_294e94:
    // 0x294e94: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x294e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_294e98:
    // 0x294e98: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294e9c:
    // 0x294e9c: 0x46022018  adda.s      $f4, $f2
    ctx->pc = 0x294e9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
label_294ea0:
    // 0x294ea0: 0x4600081c  madd.s      $f0, $f1, $f0
    ctx->pc = 0x294ea0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
label_294ea4:
    // 0x294ea4: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x294ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_294ea8:
    // 0x294ea8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294eac:
    // 0x294eac: 0xc681017c  lwc1        $f1, 0x17C($s4)
    ctx->pc = 0x294eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294eb0:
    // 0x294eb0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294eb4:
    // 0x294eb4: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x294eb4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294eb8:
    // 0x294eb8: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x294eb8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[0] = ctx->f[20] / ctx->f[1];
label_294ebc:
    // 0x294ebc: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294ebcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294ec0:
    // 0x294ec0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x294ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_294ec4:
    // 0x294ec4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294ec8:
    // 0x294ec8: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x294ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_294ecc:
    // 0x294ecc: 0xc6e10008  lwc1        $f1, 0x8($s7)
    ctx->pc = 0x294eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294ed0:
    // 0x294ed0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294ed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294ed4:
    // 0x294ed4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x294ed4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_294ed8:
    // 0x294ed8: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x294ed8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_294edc:
    // 0x294edc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x294edcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294ee0:
    // 0x294ee0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_294ee4:
    if (ctx->pc == 0x294EE4u) {
        ctx->pc = 0x294EE8u;
        goto label_294ee8;
    }
    ctx->pc = 0x294EE0u;
    {
        const bool branch_taken_0x294ee0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294ee0) {
            ctx->pc = 0x294EF0u;
            goto label_294ef0;
        }
    }
    ctx->pc = 0x294EE8u;
label_294ee8:
    // 0x294ee8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x294ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294eec:
    // 0x294eec: 0x0  nop
    ctx->pc = 0x294eecu;
    // NOP
label_294ef0:
    // 0x294ef0: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x294ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_294ef4:
    // 0x294ef4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x294ef4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294ef8:
    // 0x294ef8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294efc:
    // 0x294efc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f00:
    // 0x294f00: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294f00u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_294f04:
    // 0x294f04: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x294f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_294f08:
    // 0x294f08: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x294f08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_294f0c:
    // 0x294f0c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x294f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f10:
    // 0x294f10: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294f10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_294f14:
    // 0x294f14: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294f18:
    // 0x294f18: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x294f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f1c:
    // 0x294f1c: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x294f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_294f20:
    // 0x294f20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294f20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_294f24:
    // 0x294f24: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294f28:
    // 0x294f28: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x294f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_294f2c:
    // 0x294f2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f30:
    // 0x294f30: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x294f30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_294f34:
    // 0x294f34: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x294f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_294f38:
    // 0x294f38: 0x10000007  b           . + 4 + (0x7 << 2)
label_294f3c:
    if (ctx->pc == 0x294F3Cu) {
        ctx->pc = 0x294F3Cu;
            // 0x294f3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x294F40u;
        goto label_294f40;
    }
    ctx->pc = 0x294F38u;
    {
        const bool branch_taken_0x294f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294F38u;
            // 0x294f3c: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x294f38) {
            ctx->pc = 0x294F58u;
            goto label_294f58;
        }
    }
    ctx->pc = 0x294F40u;
label_294f40:
    // 0x294f40: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x294f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_294f44:
    // 0x294f44: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294f44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294f48:
    // 0x294f48: 0xc680017c  lwc1        $f0, 0x17C($s4)
    ctx->pc = 0x294f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294f4c:
    // 0x294f4c: 0x27a2015c  addiu       $v0, $sp, 0x15C
    ctx->pc = 0x294f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_294f50:
    // 0x294f50: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294f54:
    // 0x294f54: 0x0  nop
    ctx->pc = 0x294f54u;
    // NOP
label_294f58:
    // 0x294f58: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x294f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_294f5c:
    // 0x294f5c: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x294f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_294f60:
    // 0x294f60: 0xc6e80008  lwc1        $f8, 0x8($s7)
    ctx->pc = 0x294f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_294f64:
    // 0x294f64: 0xc7c50004  lwc1        $f5, 0x4($fp)
    ctx->pc = 0x294f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_294f68:
    // 0x294f68: 0xc7c30000  lwc1        $f3, 0x0($fp)
    ctx->pc = 0x294f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294f6c:
    // 0x294f6c: 0xc7c20008  lwc1        $f2, 0x8($fp)
    ctx->pc = 0x294f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_294f70:
    // 0x294f70: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x294f70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294f74:
    // 0x294f74: 0x27a20158  addiu       $v0, $sp, 0x158
    ctx->pc = 0x294f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_294f78:
    // 0x294f78: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x294f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_294f7c:
    // 0x294f7c: 0xc6440000  lwc1        $f4, 0x0($s2)
    ctx->pc = 0x294f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_294f80:
    // 0x294f80: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x294f80u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
label_294f84:
    // 0x294f84: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x294f84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294f88:
    // 0x294f88: 0x460340c2  mul.s       $f3, $f8, $f3
    ctx->pc = 0x294f88u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
label_294f8c:
    // 0x294f8c: 0x46024002  mul.s       $f0, $f8, $f2
    ctx->pc = 0x294f8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
label_294f90:
    // 0x294f90: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x294f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294f94:
    // 0x294f94: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x294f94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_294f98:
    // 0x294f98: 0x46061882  mul.s       $f2, $f3, $f6
    ctx->pc = 0x294f98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
label_294f9c:
    // 0x294f9c: 0x46041018  adda.s      $f2, $f4
    ctx->pc = 0x294f9cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_294fa0:
    // 0x294fa0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_294fa4:
    if (ctx->pc == 0x294FA4u) {
        ctx->pc = 0x294FA4u;
            // 0x294fa4: 0x4601009c  madd.s      $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->pc = 0x294FA8u;
        goto label_294fa8;
    }
    ctx->pc = 0x294FA0u;
    {
        const bool branch_taken_0x294fa0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x294FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294FA0u;
            // 0x294fa4: 0x4601009c  madd.s      $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294fa0) {
            ctx->pc = 0x294FB0u;
            goto label_294fb0;
        }
    }
    ctx->pc = 0x294FA8u;
label_294fa8:
    // 0x294fa8: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x294fa8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_294fac:
    // 0x294fac: 0x0  nop
    ctx->pc = 0x294facu;
    // NOP
label_294fb0:
    // 0x294fb0: 0x3c02b400  lui         $v0, 0xB400
    ctx->pc = 0x294fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46080 << 16));
label_294fb4:
    // 0x294fb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x294fb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294fb8:
    // 0x294fb8: 0x0  nop
    ctx->pc = 0x294fb8u;
    // NOP
label_294fbc:
    // 0x294fbc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x294fbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_294fc0:
    // 0x294fc0: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
label_294fc4:
    if (ctx->pc == 0x294FC4u) {
        ctx->pc = 0x294FC8u;
        goto label_294fc8;
    }
    ctx->pc = 0x294FC0u;
    {
        const bool branch_taken_0x294fc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x294fc0) {
            ctx->pc = 0x295030u;
            goto label_295030;
        }
    }
    ctx->pc = 0x294FC8u;
label_294fc8:
    // 0x294fc8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x294fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294fcc:
    // 0x294fcc: 0x27a20114  addiu       $v0, $sp, 0x114
    ctx->pc = 0x294fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_294fd0:
    // 0x294fd0: 0xc7a10110  lwc1        $f1, 0x110($sp)
    ctx->pc = 0x294fd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294fd4:
    // 0x294fd4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x294fd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_294fd8:
    // 0x294fd8: 0x46061002  mul.s       $f0, $f2, $f6
    ctx->pc = 0x294fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_294fdc:
    // 0x294fdc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x294fdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_294fe0:
    // 0x294fe0: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x294fe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_294fe4:
    // 0x294fe4: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x294fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294fe8:
    // 0x294fe8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x294fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294fec:
    // 0x294fec: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x294fecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_294ff0:
    // 0x294ff0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x294ff0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_294ff4:
    // 0x294ff4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x294ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_294ff8:
    // 0x294ff8: 0xc6c10000  lwc1        $f1, 0x0($s6)
    ctx->pc = 0x294ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_294ffc:
    // 0x294ffc: 0x27a20118  addiu       $v0, $sp, 0x118
    ctx->pc = 0x294ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_295000:
    // 0x295000: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x295000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295004:
    // 0x295004: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295004u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_295008:
    // 0x295008: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295008u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_29500c:
    // 0x29500c: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x29500cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_295010:
    // 0x295010: 0x27a2014c  addiu       $v0, $sp, 0x14C
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
label_295014:
    // 0x295014: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x295014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_295018:
    // 0x295018: 0x27a2011c  addiu       $v0, $sp, 0x11C
    ctx->pc = 0x295018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_29501c:
    // 0x29501c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x29501cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_295020:
    // 0x295020: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x295020u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_295024:
    // 0x295024: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x295024u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_295028:
    // 0x295028: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x295028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_29502c:
    // 0x29502c: 0x0  nop
    ctx->pc = 0x29502cu;
    // NOP
label_295030:
    // 0x295030: 0x8e020084  lw          $v0, 0x84($s0)
    ctx->pc = 0x295030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_295034:
    // 0x295034: 0x2455ffff  addiu       $s5, $v0, -0x1
    ctx->pc = 0x295034u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_295038:
    // 0x295038: 0x6a00011  bltz        $s5, . + 4 + (0x11 << 2)
label_29503c:
    if (ctx->pc == 0x29503Cu) {
        ctx->pc = 0x29503Cu;
            // 0x29503c: 0x158880  sll         $s1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x295040u;
        goto label_295040;
    }
    ctx->pc = 0x295038u;
    {
        const bool branch_taken_0x295038 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x29503Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295038u;
            // 0x29503c: 0x158880  sll         $s1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295038) {
            ctx->pc = 0x295080u;
            goto label_295080;
        }
    }
    ctx->pc = 0x295040u;
label_295040:
    // 0x295040: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x295040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_295044:
    // 0x295044: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x295044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_295048:
    // 0x295048: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x295048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29504c:
    // 0x29504c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_295050:
    if (ctx->pc == 0x295050u) {
        ctx->pc = 0x295054u;
        goto label_295054;
    }
    ctx->pc = 0x29504Cu;
    {
        const bool branch_taken_0x29504c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x29504c) {
            ctx->pc = 0x295070u;
            goto label_295070;
        }
    }
    ctx->pc = 0x295054u;
label_295054:
    // 0x295054: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x295054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_295058:
    // 0x295058: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x295058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29505c:
    // 0x29505c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x29505cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_295060:
    // 0x295060: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x295060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_295064:
    // 0x295064: 0x320f809  jalr        $t9
label_295068:
    if (ctx->pc == 0x295068u) {
        ctx->pc = 0x295068u;
            // 0x295068: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x29506Cu;
        goto label_29506c;
    }
    ctx->pc = 0x295064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29506Cu);
        ctx->pc = 0x295068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295064u;
            // 0x295068: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29506Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29506Cu; }
            if (ctx->pc != 0x29506Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29506Cu;
label_29506c:
    // 0x29506c: 0x0  nop
    ctx->pc = 0x29506cu;
    // NOP
label_295070:
    // 0x295070: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x295070u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_295074:
    // 0x295074: 0x6a1fff2  bgez        $s5, . + 4 + (-0xE << 2)
label_295078:
    if (ctx->pc == 0x295078u) {
        ctx->pc = 0x295078u;
            // 0x295078: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->pc = 0x29507Cu;
        goto label_29507c;
    }
    ctx->pc = 0x295074u;
    {
        const bool branch_taken_0x295074 = (GPR_S32(ctx, 21) >= 0);
        ctx->pc = 0x295078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295074u;
            // 0x295078: 0x2631fffc  addiu       $s1, $s1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295074) {
            ctx->pc = 0x295040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_295040;
        }
    }
    ctx->pc = 0x29507Cu;
label_29507c:
    // 0x29507c: 0x0  nop
    ctx->pc = 0x29507cu;
    // NOP
label_295080:
    // 0x295080: 0xc088b74  jal         func_222DD0
label_295084:
    if (ctx->pc == 0x295084u) {
        ctx->pc = 0x295084u;
            // 0x295084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x295088u;
        goto label_295088;
    }
    ctx->pc = 0x295080u;
    SET_GPR_U32(ctx, 31, 0x295088u);
    ctx->pc = 0x295084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295080u;
            // 0x295084: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295088u; }
        if (ctx->pc != 0x295088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295088u; }
        if (ctx->pc != 0x295088u) { return; }
    }
    ctx->pc = 0x295088u;
label_295088:
    // 0x295088: 0x8e9900a0  lw          $t9, 0xA0($s4)
    ctx->pc = 0x295088u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 160)));
label_29508c:
    // 0x29508c: 0x268400a0  addiu       $a0, $s4, 0xA0
    ctx->pc = 0x29508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 160));
label_295090:
    // 0x295090: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x295090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_295094:
    // 0x295094: 0x8f390050  lw          $t9, 0x50($t9)
    ctx->pc = 0x295094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 80)));
label_295098:
    // 0x295098: 0x320f809  jalr        $t9
label_29509c:
    if (ctx->pc == 0x29509Cu) {
        ctx->pc = 0x29509Cu;
            // 0x29509c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2950A0u;
        goto label_2950a0;
    }
    ctx->pc = 0x295098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2950A0u);
        ctx->pc = 0x29509Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295098u;
            // 0x29509c: 0x27a60120  addiu       $a2, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2950A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2950A0u; }
            if (ctx->pc != 0x2950A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2950A0u;
label_2950a0:
    // 0x2950a0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2950a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2950a4:
    // 0x2950a4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2950a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2950a8:
    // 0x2950a8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x2950a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_2950ac:
    // 0x2950ac: 0x8e040078  lw          $a0, 0x78($s0)
    ctx->pc = 0x2950acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_2950b0:
    // 0x2950b0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2950b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2950b4:
    // 0x2950b4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x2950b4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2950b8:
    // 0x2950b8: 0x1460fe69  bnez        $v1, . + 4 + (-0x197 << 2)
label_2950bc:
    if (ctx->pc == 0x2950BCu) {
        ctx->pc = 0x2950BCu;
            // 0x2950bc: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x2950C0u;
        goto label_2950c0;
    }
    ctx->pc = 0x2950B8u;
    {
        const bool branch_taken_0x2950b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2950BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950B8u;
            // 0x2950bc: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2950b8) {
            ctx->pc = 0x294A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294a60;
        }
    }
    ctx->pc = 0x2950C0u;
label_2950c0:
    // 0x2950c0: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2950c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2950c4:
    // 0x2950c4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2950c4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2950c8:
    // 0x2950c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2950c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2950cc:
    // 0x2950cc: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2950ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2950d0:
    // 0x2950d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2950d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2950d4:
    // 0x2950d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2950d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2950d8:
    // 0x2950d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2950d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2950dc:
    // 0x2950dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2950dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2950e0:
    // 0x2950e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2950e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2950e4:
    // 0x2950e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2950e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2950e8:
    // 0x2950e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2950e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2950ec:
    // 0x2950ec: 0x3e00008  jr          $ra
label_2950f0:
    if (ctx->pc == 0x2950F0u) {
        ctx->pc = 0x2950F0u;
            // 0x2950f0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x2950F4u;
        goto label_2950f4;
    }
    ctx->pc = 0x2950ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2950F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2950ECu;
            // 0x2950f0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2950F4u;
label_2950f4:
    // 0x2950f4: 0x0  nop
    ctx->pc = 0x2950f4u;
    // NOP
label_2950f8:
    // 0x2950f8: 0x0  nop
    ctx->pc = 0x2950f8u;
    // NOP
label_2950fc:
    // 0x2950fc: 0x0  nop
    ctx->pc = 0x2950fcu;
    // NOP
}
