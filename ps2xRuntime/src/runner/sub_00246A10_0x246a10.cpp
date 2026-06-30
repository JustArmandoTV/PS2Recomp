#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00246A10
// Address: 0x246a10 - 0x247180
void sub_00246A10_0x246a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246A10_0x246a10");
#endif

    switch (ctx->pc) {
        case 0x246a10u: goto label_246a10;
        case 0x246a14u: goto label_246a14;
        case 0x246a18u: goto label_246a18;
        case 0x246a1cu: goto label_246a1c;
        case 0x246a20u: goto label_246a20;
        case 0x246a24u: goto label_246a24;
        case 0x246a28u: goto label_246a28;
        case 0x246a2cu: goto label_246a2c;
        case 0x246a30u: goto label_246a30;
        case 0x246a34u: goto label_246a34;
        case 0x246a38u: goto label_246a38;
        case 0x246a3cu: goto label_246a3c;
        case 0x246a40u: goto label_246a40;
        case 0x246a44u: goto label_246a44;
        case 0x246a48u: goto label_246a48;
        case 0x246a4cu: goto label_246a4c;
        case 0x246a50u: goto label_246a50;
        case 0x246a54u: goto label_246a54;
        case 0x246a58u: goto label_246a58;
        case 0x246a5cu: goto label_246a5c;
        case 0x246a60u: goto label_246a60;
        case 0x246a64u: goto label_246a64;
        case 0x246a68u: goto label_246a68;
        case 0x246a6cu: goto label_246a6c;
        case 0x246a70u: goto label_246a70;
        case 0x246a74u: goto label_246a74;
        case 0x246a78u: goto label_246a78;
        case 0x246a7cu: goto label_246a7c;
        case 0x246a80u: goto label_246a80;
        case 0x246a84u: goto label_246a84;
        case 0x246a88u: goto label_246a88;
        case 0x246a8cu: goto label_246a8c;
        case 0x246a90u: goto label_246a90;
        case 0x246a94u: goto label_246a94;
        case 0x246a98u: goto label_246a98;
        case 0x246a9cu: goto label_246a9c;
        case 0x246aa0u: goto label_246aa0;
        case 0x246aa4u: goto label_246aa4;
        case 0x246aa8u: goto label_246aa8;
        case 0x246aacu: goto label_246aac;
        case 0x246ab0u: goto label_246ab0;
        case 0x246ab4u: goto label_246ab4;
        case 0x246ab8u: goto label_246ab8;
        case 0x246abcu: goto label_246abc;
        case 0x246ac0u: goto label_246ac0;
        case 0x246ac4u: goto label_246ac4;
        case 0x246ac8u: goto label_246ac8;
        case 0x246accu: goto label_246acc;
        case 0x246ad0u: goto label_246ad0;
        case 0x246ad4u: goto label_246ad4;
        case 0x246ad8u: goto label_246ad8;
        case 0x246adcu: goto label_246adc;
        case 0x246ae0u: goto label_246ae0;
        case 0x246ae4u: goto label_246ae4;
        case 0x246ae8u: goto label_246ae8;
        case 0x246aecu: goto label_246aec;
        case 0x246af0u: goto label_246af0;
        case 0x246af4u: goto label_246af4;
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        case 0x247148u: goto label_247148;
        case 0x24714cu: goto label_24714c;
        case 0x247150u: goto label_247150;
        case 0x247154u: goto label_247154;
        case 0x247158u: goto label_247158;
        case 0x24715cu: goto label_24715c;
        case 0x247160u: goto label_247160;
        case 0x247164u: goto label_247164;
        case 0x247168u: goto label_247168;
        case 0x24716cu: goto label_24716c;
        case 0x247170u: goto label_247170;
        case 0x247174u: goto label_247174;
        case 0x247178u: goto label_247178;
        case 0x24717cu: goto label_24717c;
        default: break;
    }

    ctx->pc = 0x246a10u;

label_246a10:
    // 0x246a10: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x246a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_246a14:
    // 0x246a14: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x246a14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_246a18:
    // 0x246a18: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x246a18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_246a1c:
    // 0x246a1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x246a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_246a20:
    // 0x246a20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x246a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_246a24:
    // 0x246a24: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x246a24u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246a28:
    // 0x246a28: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x246a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_246a2c:
    // 0x246a2c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x246a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_246a30:
    // 0x246a30: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x246a30u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246a34:
    // 0x246a34: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x246a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_246a38:
    // 0x246a38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x246a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_246a3c:
    // 0x246a3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_246a40:
    // 0x246a40: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x246a40u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246a44:
    // 0x246a44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246a44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_246a48:
    // 0x246a48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x246a48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246a4c:
    // 0x246a4c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_246a50:
    // 0x246a50: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x246a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
label_246a54:
    // 0x246a54: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x246a54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246a58:
    // 0x246a58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x246a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_246a5c:
    // 0x246a5c: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x246a5cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246a60:
    // 0x246a60: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x246a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_246a64:
    // 0x246a64: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x246a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_246a68:
    // 0x246a68: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x246a68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_246a6c:
    // 0x246a6c: 0x8c950084  lw          $s5, 0x84($a0)
    ctx->pc = 0x246a6cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_246a70:
    // 0x246a70: 0x24850084  addiu       $a1, $a0, 0x84
    ctx->pc = 0x246a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
label_246a74:
    // 0x246a74: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x246a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_246a78:
    // 0x246a78: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x246a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_246a7c:
    // 0x246a7c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_246a80:
    if (ctx->pc == 0x246A80u) {
        ctx->pc = 0x246A80u;
            // 0x246a80: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->pc = 0x246A84u;
        goto label_246a84;
    }
    ctx->pc = 0x246A7Cu;
    {
        const bool branch_taken_0x246a7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246A7Cu;
            // 0x246a80: 0xafa300c0  sw          $v1, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a7c) {
            ctx->pc = 0x246AA0u;
            goto label_246aa0;
        }
    }
    ctx->pc = 0x246A84u;
label_246a84:
    // 0x246a84: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x246a84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_246a88:
    // 0x246a88: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x246a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246a8c:
    // 0x246a8c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x246a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_246a90:
    // 0x246a90: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x246a90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_246a94:
    // 0x246a94: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x246a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246a98:
    // 0x246a98: 0x10000003  b           . + 4 + (0x3 << 2)
label_246a9c:
    if (ctx->pc == 0x246A9Cu) {
        ctx->pc = 0x246A9Cu;
            // 0x246a9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x246AA0u;
        goto label_246aa0;
    }
    ctx->pc = 0x246A98u;
    {
        const bool branch_taken_0x246a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246A98u;
            // 0x246a9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246a98) {
            ctx->pc = 0x246AA8u;
            goto label_246aa8;
        }
    }
    ctx->pc = 0x246AA0u;
label_246aa0:
    // 0x246aa0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x246aa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246aa4:
    // 0x246aa4: 0x0  nop
    ctx->pc = 0x246aa4u;
    // NOP
label_246aa8:
    // 0x246aa8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_246aac:
    if (ctx->pc == 0x246AACu) {
        ctx->pc = 0x246AACu;
            // 0x246aac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x246AB0u;
        goto label_246ab0;
    }
    ctx->pc = 0x246AA8u;
    {
        const bool branch_taken_0x246aa8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246AA8u;
            // 0x246aac: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246aa8) {
            ctx->pc = 0x246ABCu;
            goto label_246abc;
        }
    }
    ctx->pc = 0x246AB0u;
label_246ab0:
    // 0x246ab0: 0x10000005  b           . + 4 + (0x5 << 2)
label_246ab4:
    if (ctx->pc == 0x246AB4u) {
        ctx->pc = 0x246AB8u;
        goto label_246ab8;
    }
    ctx->pc = 0x246AB0u;
    {
        const bool branch_taken_0x246ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ab0) {
            ctx->pc = 0x246AC8u;
            goto label_246ac8;
        }
    }
    ctx->pc = 0x246AB8u;
label_246ab8:
    // 0x246ab8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x246ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246abc:
    // 0x246abc: 0xc0a79c0  jal         func_29E700
label_246ac0:
    if (ctx->pc == 0x246AC0u) {
        ctx->pc = 0x246AC4u;
        goto label_246ac4;
    }
    ctx->pc = 0x246ABCu;
    SET_GPR_U32(ctx, 31, 0x246AC4u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246AC4u; }
        if (ctx->pc != 0x246AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246AC4u; }
        if (ctx->pc != 0x246AC4u) { return; }
    }
    ctx->pc = 0x246AC4u;
label_246ac4:
    // 0x246ac4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x246ac4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246ac8:
    // 0x246ac8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_246acc:
    if (ctx->pc == 0x246ACCu) {
        ctx->pc = 0x246AD0u;
        goto label_246ad0;
    }
    ctx->pc = 0x246AC8u;
    {
        const bool branch_taken_0x246ac8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ac8) {
            ctx->pc = 0x246AD8u;
            goto label_246ad8;
        }
    }
    ctx->pc = 0x246AD0u;
label_246ad0:
    // 0x246ad0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x246ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_246ad4:
    // 0x246ad4: 0x0  nop
    ctx->pc = 0x246ad4u;
    // NOP
label_246ad8:
    // 0x246ad8: 0x26b40010  addiu       $s4, $s5, 0x10
    ctx->pc = 0x246ad8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_246adc:
    // 0x246adc: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x246adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
label_246ae0:
    // 0x246ae0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x246ae0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_246ae4:
    // 0x246ae4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x246ae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246ae8:
    // 0x246ae8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x246ae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_246aec:
    // 0x246aec: 0x33903  sra         $a3, $v1, 4
    ctx->pc = 0x246aecu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 4));
label_246af0:
    // 0x246af0: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x246af0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_246af4:
    // 0x246af4: 0x1020005c  beqz        $at, . + 4 + (0x5C << 2)
label_246af8:
    if (ctx->pc == 0x246AF8u) {
        ctx->pc = 0x246AF8u;
            // 0x246af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246AFCu;
        goto label_246afc;
    }
    ctx->pc = 0x246AF4u;
    {
        const bool branch_taken_0x246af4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246AF4u;
            // 0x246af8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246af4) {
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246AFCu;
label_246afc:
    // 0x246afc: 0x28e10009  slti        $at, $a3, 0x9
    ctx->pc = 0x246afcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)9) ? 1 : 0);
label_246b00:
    // 0x246b00: 0x14200047  bnez        $at, . + 4 + (0x47 << 2)
label_246b04:
    if (ctx->pc == 0x246B04u) {
        ctx->pc = 0x246B04u;
            // 0x246b04: 0x24e3fff8  addiu       $v1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->pc = 0x246B08u;
        goto label_246b08;
    }
    ctx->pc = 0x246B00u;
    {
        const bool branch_taken_0x246b00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246B00u;
            // 0x246b04: 0x24e3fff8  addiu       $v1, $a3, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b00) {
            ctx->pc = 0x246C20u;
            goto label_246c20;
        }
    }
    ctx->pc = 0x246B08u;
label_246b08:
    // 0x246b08: 0x8cc90000  lw          $t1, 0x0($a2)
    ctx->pc = 0x246b08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_246b0c:
    // 0x246b0c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x246b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_246b10:
    // 0x246b10: 0x83402a  slt         $t0, $a0, $v1
    ctx->pc = 0x246b10u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246b14:
    // 0x246b14: 0xaca90000  sw          $t1, 0x0($a1)
    ctx->pc = 0x246b14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 9));
label_246b18:
    // 0x246b18: 0x8cc90004  lw          $t1, 0x4($a2)
    ctx->pc = 0x246b18u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_246b1c:
    // 0x246b1c: 0xaca90004  sw          $t1, 0x4($a1)
    ctx->pc = 0x246b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 9));
label_246b20:
    // 0x246b20: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x246b20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_246b24:
    // 0x246b24: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x246b24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
label_246b28:
    // 0x246b28: 0x8cc9000c  lw          $t1, 0xC($a2)
    ctx->pc = 0x246b28u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_246b2c:
    // 0x246b2c: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x246b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_246b30:
    // 0x246b30: 0x8cc90010  lw          $t1, 0x10($a2)
    ctx->pc = 0x246b30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_246b34:
    // 0x246b34: 0xaca90010  sw          $t1, 0x10($a1)
    ctx->pc = 0x246b34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 9));
label_246b38:
    // 0x246b38: 0x8cc90014  lw          $t1, 0x14($a2)
    ctx->pc = 0x246b38u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_246b3c:
    // 0x246b3c: 0xaca90014  sw          $t1, 0x14($a1)
    ctx->pc = 0x246b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 9));
label_246b40:
    // 0x246b40: 0x8cc90018  lw          $t1, 0x18($a2)
    ctx->pc = 0x246b40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
label_246b44:
    // 0x246b44: 0xaca90018  sw          $t1, 0x18($a1)
    ctx->pc = 0x246b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 9));
label_246b48:
    // 0x246b48: 0x8cc9001c  lw          $t1, 0x1C($a2)
    ctx->pc = 0x246b48u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
label_246b4c:
    // 0x246b4c: 0xaca9001c  sw          $t1, 0x1C($a1)
    ctx->pc = 0x246b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 9));
label_246b50:
    // 0x246b50: 0x8cc90020  lw          $t1, 0x20($a2)
    ctx->pc = 0x246b50u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_246b54:
    // 0x246b54: 0xaca90020  sw          $t1, 0x20($a1)
    ctx->pc = 0x246b54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 9));
label_246b58:
    // 0x246b58: 0x8cc90024  lw          $t1, 0x24($a2)
    ctx->pc = 0x246b58u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_246b5c:
    // 0x246b5c: 0xaca90024  sw          $t1, 0x24($a1)
    ctx->pc = 0x246b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 9));
label_246b60:
    // 0x246b60: 0x8cc90028  lw          $t1, 0x28($a2)
    ctx->pc = 0x246b60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_246b64:
    // 0x246b64: 0xaca90028  sw          $t1, 0x28($a1)
    ctx->pc = 0x246b64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 9));
label_246b68:
    // 0x246b68: 0x8cc9002c  lw          $t1, 0x2C($a2)
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 44)));
label_246b6c:
    // 0x246b6c: 0xaca9002c  sw          $t1, 0x2C($a1)
    ctx->pc = 0x246b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 9));
label_246b70:
    // 0x246b70: 0x8cc90030  lw          $t1, 0x30($a2)
    ctx->pc = 0x246b70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_246b74:
    // 0x246b74: 0xaca90030  sw          $t1, 0x30($a1)
    ctx->pc = 0x246b74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 9));
label_246b78:
    // 0x246b78: 0x8cc90034  lw          $t1, 0x34($a2)
    ctx->pc = 0x246b78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_246b7c:
    // 0x246b7c: 0xaca90034  sw          $t1, 0x34($a1)
    ctx->pc = 0x246b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 9));
label_246b80:
    // 0x246b80: 0x8cc90038  lw          $t1, 0x38($a2)
    ctx->pc = 0x246b80u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_246b84:
    // 0x246b84: 0xaca90038  sw          $t1, 0x38($a1)
    ctx->pc = 0x246b84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 9));
label_246b88:
    // 0x246b88: 0x8cc9003c  lw          $t1, 0x3C($a2)
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 60)));
label_246b8c:
    // 0x246b8c: 0xaca9003c  sw          $t1, 0x3C($a1)
    ctx->pc = 0x246b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 9));
label_246b90:
    // 0x246b90: 0x8cc90040  lw          $t1, 0x40($a2)
    ctx->pc = 0x246b90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 64)));
label_246b94:
    // 0x246b94: 0xaca90040  sw          $t1, 0x40($a1)
    ctx->pc = 0x246b94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 9));
label_246b98:
    // 0x246b98: 0x8cc90044  lw          $t1, 0x44($a2)
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
label_246b9c:
    // 0x246b9c: 0xaca90044  sw          $t1, 0x44($a1)
    ctx->pc = 0x246b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 9));
label_246ba0:
    // 0x246ba0: 0x8cc90048  lw          $t1, 0x48($a2)
    ctx->pc = 0x246ba0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 72)));
label_246ba4:
    // 0x246ba4: 0xaca90048  sw          $t1, 0x48($a1)
    ctx->pc = 0x246ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 9));
label_246ba8:
    // 0x246ba8: 0x8cc9004c  lw          $t1, 0x4C($a2)
    ctx->pc = 0x246ba8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
label_246bac:
    // 0x246bac: 0xaca9004c  sw          $t1, 0x4C($a1)
    ctx->pc = 0x246bacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 9));
label_246bb0:
    // 0x246bb0: 0x8cc90050  lw          $t1, 0x50($a2)
    ctx->pc = 0x246bb0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 80)));
label_246bb4:
    // 0x246bb4: 0xaca90050  sw          $t1, 0x50($a1)
    ctx->pc = 0x246bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 9));
label_246bb8:
    // 0x246bb8: 0x8cc90054  lw          $t1, 0x54($a2)
    ctx->pc = 0x246bb8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 84)));
label_246bbc:
    // 0x246bbc: 0xaca90054  sw          $t1, 0x54($a1)
    ctx->pc = 0x246bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 9));
label_246bc0:
    // 0x246bc0: 0x8cc90058  lw          $t1, 0x58($a2)
    ctx->pc = 0x246bc0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 88)));
label_246bc4:
    // 0x246bc4: 0xaca90058  sw          $t1, 0x58($a1)
    ctx->pc = 0x246bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 88), GPR_U32(ctx, 9));
label_246bc8:
    // 0x246bc8: 0x8cc9005c  lw          $t1, 0x5C($a2)
    ctx->pc = 0x246bc8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_246bcc:
    // 0x246bcc: 0xaca9005c  sw          $t1, 0x5C($a1)
    ctx->pc = 0x246bccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 92), GPR_U32(ctx, 9));
label_246bd0:
    // 0x246bd0: 0x8cc90060  lw          $t1, 0x60($a2)
    ctx->pc = 0x246bd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_246bd4:
    // 0x246bd4: 0xaca90060  sw          $t1, 0x60($a1)
    ctx->pc = 0x246bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 9));
label_246bd8:
    // 0x246bd8: 0x8cc90064  lw          $t1, 0x64($a2)
    ctx->pc = 0x246bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 100)));
label_246bdc:
    // 0x246bdc: 0xaca90064  sw          $t1, 0x64($a1)
    ctx->pc = 0x246bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 100), GPR_U32(ctx, 9));
label_246be0:
    // 0x246be0: 0x8cc90068  lw          $t1, 0x68($a2)
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_246be4:
    // 0x246be4: 0xaca90068  sw          $t1, 0x68($a1)
    ctx->pc = 0x246be4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 104), GPR_U32(ctx, 9));
label_246be8:
    // 0x246be8: 0x8cc9006c  lw          $t1, 0x6C($a2)
    ctx->pc = 0x246be8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 108)));
label_246bec:
    // 0x246bec: 0xaca9006c  sw          $t1, 0x6C($a1)
    ctx->pc = 0x246becu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 9));
label_246bf0:
    // 0x246bf0: 0x8cc90070  lw          $t1, 0x70($a2)
    ctx->pc = 0x246bf0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 112)));
label_246bf4:
    // 0x246bf4: 0xaca90070  sw          $t1, 0x70($a1)
    ctx->pc = 0x246bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 9));
label_246bf8:
    // 0x246bf8: 0x8cc90074  lw          $t1, 0x74($a2)
    ctx->pc = 0x246bf8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 116)));
label_246bfc:
    // 0x246bfc: 0xaca90074  sw          $t1, 0x74($a1)
    ctx->pc = 0x246bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 9));
label_246c00:
    // 0x246c00: 0x8cc90078  lw          $t1, 0x78($a2)
    ctx->pc = 0x246c00u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 120)));
label_246c04:
    // 0x246c04: 0xaca90078  sw          $t1, 0x78($a1)
    ctx->pc = 0x246c04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 9));
label_246c08:
    // 0x246c08: 0x8cc9007c  lw          $t1, 0x7C($a2)
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_246c0c:
    // 0x246c0c: 0xaca9007c  sw          $t1, 0x7C($a1)
    ctx->pc = 0x246c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 9));
label_246c10:
    // 0x246c10: 0x24c60080  addiu       $a2, $a2, 0x80
    ctx->pc = 0x246c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_246c14:
    // 0x246c14: 0x1500ffbc  bnez        $t0, . + 4 + (-0x44 << 2)
label_246c18:
    if (ctx->pc == 0x246C18u) {
        ctx->pc = 0x246C18u;
            // 0x246c18: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->pc = 0x246C1Cu;
        goto label_246c1c;
    }
    ctx->pc = 0x246C14u;
    {
        const bool branch_taken_0x246c14 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246C14u;
            // 0x246c18: 0x24a50080  addiu       $a1, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c14) {
            ctx->pc = 0x246B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246b08;
        }
    }
    ctx->pc = 0x246C1Cu;
label_246c1c:
    // 0x246c1c: 0x0  nop
    ctx->pc = 0x246c1cu;
    // NOP
label_246c20:
    // 0x246c20: 0x87082a  slt         $at, $a0, $a3
    ctx->pc = 0x246c20u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_246c24:
    // 0x246c24: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_246c28:
    if (ctx->pc == 0x246C28u) {
        ctx->pc = 0x246C2Cu;
        goto label_246c2c;
    }
    ctx->pc = 0x246C24u;
    {
        const bool branch_taken_0x246c24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c24) {
            ctx->pc = 0x246C68u;
            goto label_246c68;
        }
    }
    ctx->pc = 0x246C2Cu;
label_246c2c:
    // 0x246c2c: 0x0  nop
    ctx->pc = 0x246c2cu;
    // NOP
label_246c30:
    // 0x246c30: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x246c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_246c34:
    // 0x246c34: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x246c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_246c38:
    // 0x246c38: 0x87182a  slt         $v1, $a0, $a3
    ctx->pc = 0x246c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_246c3c:
    // 0x246c3c: 0xaca80000  sw          $t0, 0x0($a1)
    ctx->pc = 0x246c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 8));
label_246c40:
    // 0x246c40: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x246c40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_246c44:
    // 0x246c44: 0xaca80004  sw          $t0, 0x4($a1)
    ctx->pc = 0x246c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 8));
label_246c48:
    // 0x246c48: 0x8cc80008  lw          $t0, 0x8($a2)
    ctx->pc = 0x246c48u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_246c4c:
    // 0x246c4c: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x246c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
label_246c50:
    // 0x246c50: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x246c50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_246c54:
    // 0x246c54: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x246c54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
label_246c58:
    // 0x246c58: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x246c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_246c5c:
    // 0x246c5c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_246c60:
    if (ctx->pc == 0x246C60u) {
        ctx->pc = 0x246C60u;
            // 0x246c60: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->pc = 0x246C64u;
        goto label_246c64;
    }
    ctx->pc = 0x246C5Cu;
    {
        const bool branch_taken_0x246c5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246C5Cu;
            // 0x246c60: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c5c) {
            ctx->pc = 0x246C30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246c30;
        }
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0x0  nop
    ctx->pc = 0x246c64u;
    // NOP
label_246c68:
    // 0x246c68: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x246c68u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_246c6c:
    // 0x246c6c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x246c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_246c70:
    // 0x246c70: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x246c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_246c74:
    // 0x246c74: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x246c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_246c78:
    // 0x246c78: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x246c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_246c7c:
    // 0x246c7c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x246c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246c80:
    // 0x246c80: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x246c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246c84:
    // 0x246c84: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x246c84u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_246c88:
    // 0x246c88: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x246c88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_246c8c:
    // 0x246c8c: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x246c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_246c90:
    // 0x246c90: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x246c90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_246c94:
    // 0x246c94: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x246c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_246c98:
    // 0x246c98: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x246c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_246c9c:
    // 0x246c9c: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x246c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_246ca0:
    // 0x246ca0: 0xe4620010  swc1        $f2, 0x10($v1)
    ctx->pc = 0x246ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_246ca4:
    // 0x246ca4: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x246ca4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_246ca8:
    // 0x246ca8: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x246ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_246cac:
    // 0x246cac: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x246cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_246cb0:
    // 0x246cb0: 0x2c610007  sltiu       $at, $v1, 0x7
    ctx->pc = 0x246cb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_246cb4:
    // 0x246cb4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_246cb8:
    if (ctx->pc == 0x246CB8u) {
        ctx->pc = 0x246CB8u;
            // 0x246cb8: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->pc = 0x246CBCu;
        goto label_246cbc;
    }
    ctx->pc = 0x246CB4u;
    {
        const bool branch_taken_0x246cb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246CB4u;
            // 0x246cb8: 0x2248821  addu        $s1, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cb4) {
            ctx->pc = 0x246D08u;
            goto label_246d08;
        }
    }
    ctx->pc = 0x246CBCu;
label_246cbc:
    // 0x246cbc: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x246cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_246cc0:
    // 0x246cc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246cc4:
    // 0x246cc4: 0x2484f800  addiu       $a0, $a0, -0x800
    ctx->pc = 0x246cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
label_246cc8:
    // 0x246cc8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246ccc:
    // 0x246ccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x246cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246cd0:
    // 0x246cd0: 0x600008  jr          $v1
label_246cd4:
    if (ctx->pc == 0x246CD4u) {
        ctx->pc = 0x246CD8u;
        goto label_246cd8;
    }
    ctx->pc = 0x246CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246CD8u: goto label_246cd8;
            case 0x246CE0u: goto label_246ce0;
            case 0x246D00u: goto label_246d00;
            case 0x246D08u: goto label_246d08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x246CD8u;
label_246cd8:
    // 0x246cd8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x246cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_246cdc:
    // 0x246cdc: 0x0  nop
    ctx->pc = 0x246cdcu;
    // NOP
label_246ce0:
    // 0x246ce0: 0x8fa200dc  lw          $v0, 0xDC($sp)
    ctx->pc = 0x246ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_246ce4:
    // 0x246ce4: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x246ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_246ce8:
    // 0x246ce8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x246ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_246cec:
    // 0x246cec: 0x40f809  jalr        $v0
label_246cf0:
    if (ctx->pc == 0x246CF0u) {
        ctx->pc = 0x246CF0u;
            // 0x246cf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246CF4u;
        goto label_246cf4;
    }
    ctx->pc = 0x246CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246CF4u);
        ctx->pc = 0x246CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246CECu;
            // 0x246cf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x246CF4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x246CF4u; }
            if (ctx->pc != 0x246CF4u) { return; }
        }
        }
    }
    ctx->pc = 0x246CF4u;
label_246cf4:
    // 0x246cf4: 0x10000004  b           . + 4 + (0x4 << 2)
label_246cf8:
    if (ctx->pc == 0x246CF8u) {
        ctx->pc = 0x246CF8u;
            // 0x246cf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246CFCu;
        goto label_246cfc;
    }
    ctx->pc = 0x246CF4u;
    {
        const bool branch_taken_0x246cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246CF4u;
            // 0x246cf8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246cf4) {
            ctx->pc = 0x246D08u;
            goto label_246d08;
        }
    }
    ctx->pc = 0x246CFCu;
label_246cfc:
    // 0x246cfc: 0x0  nop
    ctx->pc = 0x246cfcu;
    // NOP
label_246d00:
    // 0x246d00: 0x26940010  addiu       $s4, $s4, 0x10
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_246d04:
    // 0x246d04: 0x0  nop
    ctx->pc = 0x246d04u;
    // NOP
label_246d08:
    // 0x246d08: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x246d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_246d0c:
    // 0x246d0c: 0x16230022  bne         $s1, $v1, . + 4 + (0x22 << 2)
label_246d10:
    if (ctx->pc == 0x246D10u) {
        ctx->pc = 0x246D14u;
        goto label_246d14;
    }
    ctx->pc = 0x246D0Cu;
    {
        const bool branch_taken_0x246d0c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x246d0c) {
            ctx->pc = 0x246D98u;
            goto label_246d98;
        }
    }
    ctx->pc = 0x246D14u;
label_246d14:
    // 0x246d14: 0x12c00012  beqz        $s6, . + 4 + (0x12 << 2)
label_246d18:
    if (ctx->pc == 0x246D18u) {
        ctx->pc = 0x246D1Cu;
        goto label_246d1c;
    }
    ctx->pc = 0x246D14u;
    {
        const bool branch_taken_0x246d14 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x246d14) {
            ctx->pc = 0x246D60u;
            goto label_246d60;
        }
    }
    ctx->pc = 0x246D1Cu;
label_246d1c:
    // 0x246d1c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x246d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_246d20:
    // 0x246d20: 0x8c31ea40  lw          $s1, -0x15C0($at)
    ctx->pc = 0x246d20u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_246d24:
    // 0x246d24: 0x8e240088  lw          $a0, 0x88($s1)
    ctx->pc = 0x246d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_246d28:
    // 0x246d28: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x246d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_246d2c:
    // 0x246d2c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x246d2cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246d30:
    // 0x246d30: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_246d34:
    if (ctx->pc == 0x246D34u) {
        ctx->pc = 0x246D38u;
        goto label_246d38;
    }
    ctx->pc = 0x246D30u;
    {
        const bool branch_taken_0x246d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246d30) {
            ctx->pc = 0x246D48u;
            goto label_246d48;
        }
    }
    ctx->pc = 0x246D38u;
label_246d38:
    // 0x246d38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x246d38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_246d3c:
    // 0x246d3c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x246d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246d40:
    // 0x246d40: 0xc0a79ec  jal         func_29E7B0
label_246d44:
    if (ctx->pc == 0x246D44u) {
        ctx->pc = 0x246D44u;
            // 0x246d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246D48u;
        goto label_246d48;
    }
    ctx->pc = 0x246D40u;
    SET_GPR_U32(ctx, 31, 0x246D48u);
    ctx->pc = 0x246D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246D40u;
            // 0x246d44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D48u; }
        if (ctx->pc != 0x246D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246D48u; }
        if (ctx->pc != 0x246D48u) { return; }
    }
    ctx->pc = 0x246D48u;
label_246d48:
    // 0x246d48: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_246d4c:
    // 0x246d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_246d50:
    // 0x246d50: 0xae230088  sw          $v1, 0x88($s1)
    ctx->pc = 0x246d50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 3));
label_246d54:
    // 0x246d54: 0x8e230084  lw          $v1, 0x84($s1)
    ctx->pc = 0x246d54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_246d58:
    // 0x246d58: 0xaec30000  sw          $v1, 0x0($s6)
    ctx->pc = 0x246d58u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 3));
label_246d5c:
    // 0x246d5c: 0xae360084  sw          $s6, 0x84($s1)
    ctx->pc = 0x246d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 22));
label_246d60:
    // 0x246d60: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x246d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_246d64:
    // 0x246d64: 0x203082a  slt         $at, $s0, $v1
    ctx->pc = 0x246d64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246d68:
    // 0x246d68: 0x10200065  beqz        $at, . + 4 + (0x65 << 2)
label_246d6c:
    if (ctx->pc == 0x246D6Cu) {
        ctx->pc = 0x246D6Cu;
            // 0x246d6c: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246D70u;
        goto label_246d70;
    }
    ctx->pc = 0x246D68u;
    {
        const bool branch_taken_0x246d68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246D68u;
            // 0x246d6c: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d68) {
            ctx->pc = 0x246F00u;
            goto label_246f00;
        }
    }
    ctx->pc = 0x246D70u;
label_246d70:
    // 0x246d70: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x246d70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_246d74:
    // 0x246d74: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x246d74u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_246d78:
    // 0x246d78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x246d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_246d7c:
    // 0x246d7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246d80:
    // 0x246d80: 0x8c770000  lw          $s7, 0x0($v1)
    ctx->pc = 0x246d80u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246d84:
    // 0x246d84: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x246d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_246d88:
    // 0x246d88: 0x26f10010  addiu       $s1, $s7, 0x10
    ctx->pc = 0x246d88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
label_246d8c:
    // 0x246d8c: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x246d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_246d90:
    // 0x246d90: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_246d94:
    // 0x246d94: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x246d94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_246d98:
    // 0x246d98: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x246d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_246d9c:
    // 0x246d9c: 0x2832023  subu        $a0, $s4, $v1
    ctx->pc = 0x246d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_246da0:
    // 0x246da0: 0x92230003  lbu         $v1, 0x3($s1)
    ctx->pc = 0x246da0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_246da4:
    // 0x246da4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246da8:
    // 0x246da8: 0x286101a1  slti        $at, $v1, 0x1A1
    ctx->pc = 0x246da8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)417) ? 1 : 0);
label_246dac:
    // 0x246dac: 0x1420ff4c  bnez        $at, . + 4 + (-0xB4 << 2)
label_246db0:
    if (ctx->pc == 0x246DB0u) {
        ctx->pc = 0x246DB4u;
        goto label_246db4;
    }
    ctx->pc = 0x246DACu;
    {
        const bool branch_taken_0x246dac = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x246dac) {
            ctx->pc = 0x246AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246DB4u;
label_246db4:
    // 0x246db4: 0x3d0182a  slt         $v1, $fp, $s0
    ctx->pc = 0x246db4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_246db8:
    // 0x246db8: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_246dbc:
    if (ctx->pc == 0x246DBCu) {
        ctx->pc = 0x246DBCu;
            // 0x246dbc: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x246DC0u;
        goto label_246dc0;
    }
    ctx->pc = 0x246DB8u;
    {
        const bool branch_taken_0x246db8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246DB8u;
            // 0x246dbc: 0xaea40000  sw          $a0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db8) {
            ctx->pc = 0x246E60u;
            goto label_246e60;
        }
    }
    ctx->pc = 0x246DC0u;
label_246dc0:
    // 0x246dc0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_246dc4:
    // 0x246dc4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x246dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_246dc8:
    // 0x246dc8: 0x24740001  addiu       $s4, $v1, 0x1
    ctx->pc = 0x246dc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_246dcc:
    // 0x246dcc: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x246dccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_246dd0:
    // 0x246dd0: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x246dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_246dd4:
    // 0x246dd4: 0x418bc  dsll32      $v1, $a0, 2
    ctx->pc = 0x246dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 2));
label_246dd8:
    // 0x246dd8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x246dd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_246ddc:
    // 0x246ddc: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x246ddcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_246de0:
    // 0x246de0: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_246de4:
    if (ctx->pc == 0x246DE4u) {
        ctx->pc = 0x246DE8u;
        goto label_246de8;
    }
    ctx->pc = 0x246DE0u;
    {
        const bool branch_taken_0x246de0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246de0) {
            ctx->pc = 0x246E10u;
            goto label_246e10;
        }
    }
    ctx->pc = 0x246DE8u;
label_246de8:
    // 0x246de8: 0x74082a  slt         $at, $v1, $s4
    ctx->pc = 0x246de8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_246dec:
    // 0x246dec: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_246df0:
    if (ctx->pc == 0x246DF0u) {
        ctx->pc = 0x246DF4u;
        goto label_246df4;
    }
    ctx->pc = 0x246DECu;
    {
        const bool branch_taken_0x246dec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246dec) {
            ctx->pc = 0x246E10u;
            goto label_246e10;
        }
    }
    ctx->pc = 0x246DF4u;
label_246df4:
    // 0x246df4: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x246df4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_246df8:
    // 0x246df8: 0x285082a  slt         $at, $s4, $a1
    ctx->pc = 0x246df8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_246dfc:
    // 0x246dfc: 0x281280a  movz        $a1, $s4, $at
    ctx->pc = 0x246dfcu;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
label_246e00:
    // 0x246e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246e04:
    // 0x246e04: 0xc0a725c  jal         func_29C970
label_246e08:
    if (ctx->pc == 0x246E08u) {
        ctx->pc = 0x246E08u;
            // 0x246e08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x246E0Cu;
        goto label_246e0c;
    }
    ctx->pc = 0x246E04u;
    SET_GPR_U32(ctx, 31, 0x246E0Cu);
    ctx->pc = 0x246E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246E04u;
            // 0x246e08: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E0Cu; }
        if (ctx->pc != 0x246E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246E0Cu; }
        if (ctx->pc != 0x246E0Cu) { return; }
    }
    ctx->pc = 0x246E0Cu;
label_246e0c:
    // 0x246e0c: 0x0  nop
    ctx->pc = 0x246e0cu;
    // NOP
label_246e10:
    // 0x246e10: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x246e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_246e14:
    // 0x246e14: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x246e14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_246e18:
    // 0x246e18: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x246e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246e1c:
    // 0x246e1c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x246e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_246e20:
    // 0x246e20: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x246e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246e24:
    // 0x246e24: 0x4c0000c  bltz        $a2, . + 4 + (0xC << 2)
label_246e28:
    if (ctx->pc == 0x246E28u) {
        ctx->pc = 0x246E28u;
            // 0x246e28: 0x24870004  addiu       $a3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x246E2Cu;
        goto label_246e2c;
    }
    ctx->pc = 0x246E24u;
    {
        const bool branch_taken_0x246e24 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x246E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E24u;
            // 0x246e28: 0x24870004  addiu       $a3, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e24) {
            ctx->pc = 0x246E58u;
            goto label_246e58;
        }
    }
    ctx->pc = 0x246E2Cu;
label_246e2c:
    // 0x246e2c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_246e30:
    // 0x246e30: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x246e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_246e34:
    // 0x246e34: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x246e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_246e38:
    // 0x246e38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x246e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_246e3c:
    // 0x246e3c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x246e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_246e40:
    // 0x246e40: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x246e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_246e44:
    // 0x246e44: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x246e44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_246e48:
    // 0x246e48: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x246e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_246e4c:
    // 0x246e4c: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
label_246e50:
    if (ctx->pc == 0x246E50u) {
        ctx->pc = 0x246E54u;
        goto label_246e54;
    }
    ctx->pc = 0x246E4Cu;
    {
        const bool branch_taken_0x246e4c = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x246e4c) {
            ctx->pc = 0x246E38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246e38;
        }
    }
    ctx->pc = 0x246E54u;
label_246e54:
    // 0x246e54: 0x0  nop
    ctx->pc = 0x246e54u;
    // NOP
label_246e58:
    // 0x246e58: 0xae740004  sw          $s4, 0x4($s3)
    ctx->pc = 0x246e58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 20));
label_246e5c:
    // 0x246e5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x246e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_246e60:
    // 0x246e60: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x246e60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_246e64:
    // 0x246e64: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x246e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_246e68:
    // 0x246e68: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x246e68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_246e6c:
    // 0x246e6c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_246e70:
    // 0x246e70: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x246e70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_246e74:
    // 0x246e74: 0x8fa300a0  lw          $v1, 0xA0($sp)
    ctx->pc = 0x246e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_246e78:
    // 0x246e78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_246e7c:
    // 0x246e7c: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
label_246e80:
    if (ctx->pc == 0x246E80u) {
        ctx->pc = 0x246E80u;
            // 0x246e80: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x246E84u;
        goto label_246e84;
    }
    ctx->pc = 0x246E7Cu;
    {
        const bool branch_taken_0x246e7c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E7Cu;
            // 0x246e80: 0xafa300a0  sw          $v1, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e7c) {
            ctx->pc = 0x246E90u;
            goto label_246e90;
        }
    }
    ctx->pc = 0x246E84u;
label_246e84:
    // 0x246e84: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x246e84u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_246e88:
    // 0x246e88: 0x1000001b  b           . + 4 + (0x1B << 2)
label_246e8c:
    if (ctx->pc == 0x246E8Cu) {
        ctx->pc = 0x246E8Cu;
            // 0x246e8c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246E90u;
        goto label_246e90;
    }
    ctx->pc = 0x246E88u;
    {
        const bool branch_taken_0x246e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E88u;
            // 0x246e8c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e88) {
            ctx->pc = 0x246EF8u;
            goto label_246ef8;
        }
    }
    ctx->pc = 0x246E90u;
label_246e90:
    // 0x246e90: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x246e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_246e94:
    // 0x246e94: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x246e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_246e98:
    // 0x246e98: 0x8c950084  lw          $s5, 0x84($a0)
    ctx->pc = 0x246e98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_246e9c:
    // 0x246e9c: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
label_246ea0:
    if (ctx->pc == 0x246EA0u) {
        ctx->pc = 0x246EA0u;
            // 0x246ea0: 0x24850084  addiu       $a1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x246EA4u;
        goto label_246ea4;
    }
    ctx->pc = 0x246E9Cu;
    {
        const bool branch_taken_0x246e9c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246E9Cu;
            // 0x246ea0: 0x24850084  addiu       $a1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e9c) {
            ctx->pc = 0x246EC0u;
            goto label_246ec0;
        }
    }
    ctx->pc = 0x246EA4u;
label_246ea4:
    // 0x246ea4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x246ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_246ea8:
    // 0x246ea8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x246ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_246eac:
    // 0x246eac: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x246eacu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_246eb0:
    // 0x246eb0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x246eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_246eb4:
    // 0x246eb4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246eb8:
    // 0x246eb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_246ebc:
    if (ctx->pc == 0x246EBCu) {
        ctx->pc = 0x246EBCu;
            // 0x246ebc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x246EC0u;
        goto label_246ec0;
    }
    ctx->pc = 0x246EB8u;
    {
        const bool branch_taken_0x246eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246EB8u;
            // 0x246ebc: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246eb8) {
            ctx->pc = 0x246EC8u;
            goto label_246ec8;
        }
    }
    ctx->pc = 0x246EC0u;
label_246ec0:
    // 0x246ec0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x246ec0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246ec4:
    // 0x246ec4: 0x0  nop
    ctx->pc = 0x246ec4u;
    // NOP
label_246ec8:
    // 0x246ec8: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_246ecc:
    if (ctx->pc == 0x246ECCu) {
        ctx->pc = 0x246ECCu;
            // 0x246ecc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x246ED0u;
        goto label_246ed0;
    }
    ctx->pc = 0x246EC8u;
    {
        const bool branch_taken_0x246ec8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x246ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246EC8u;
            // 0x246ecc: 0x2405000c  addiu       $a1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ec8) {
            ctx->pc = 0x246EDCu;
            goto label_246edc;
        }
    }
    ctx->pc = 0x246ED0u;
label_246ed0:
    // 0x246ed0: 0x10000005  b           . + 4 + (0x5 << 2)
label_246ed4:
    if (ctx->pc == 0x246ED4u) {
        ctx->pc = 0x246ED8u;
        goto label_246ed8;
    }
    ctx->pc = 0x246ED0u;
    {
        const bool branch_taken_0x246ed0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ed0) {
            ctx->pc = 0x246EE8u;
            goto label_246ee8;
        }
    }
    ctx->pc = 0x246ED8u;
label_246ed8:
    // 0x246ed8: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x246ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246edc:
    // 0x246edc: 0xc0a79c0  jal         func_29E700
label_246ee0:
    if (ctx->pc == 0x246EE0u) {
        ctx->pc = 0x246EE4u;
        goto label_246ee4;
    }
    ctx->pc = 0x246EDCu;
    SET_GPR_U32(ctx, 31, 0x246EE4u);
    ctx->pc = 0x29E700u;
    if (runtime->hasFunction(0x29E700u)) {
        auto targetFn = runtime->lookupFunction(0x29E700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EE4u; }
        if (ctx->pc != 0x246EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E700_0x29e700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246EE4u; }
        if (ctx->pc != 0x246EE4u) { return; }
    }
    ctx->pc = 0x246EE4u;
label_246ee4:
    // 0x246ee4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x246ee4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246ee8:
    // 0x246ee8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_246eec:
    if (ctx->pc == 0x246EECu) {
        ctx->pc = 0x246EF0u;
        goto label_246ef0;
    }
    ctx->pc = 0x246EE8u;
    {
        const bool branch_taken_0x246ee8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x246ee8) {
            ctx->pc = 0x246EF8u;
            goto label_246ef8;
        }
    }
    ctx->pc = 0x246EF0u;
label_246ef0:
    // 0x246ef0: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x246ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
label_246ef4:
    // 0x246ef4: 0x0  nop
    ctx->pc = 0x246ef4u;
    // NOP
label_246ef8:
    // 0x246ef8: 0x1000fef9  b           . + 4 + (-0x107 << 2)
label_246efc:
    if (ctx->pc == 0x246EFCu) {
        ctx->pc = 0x246EFCu;
            // 0x246efc: 0x26b40010  addiu       $s4, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x246F00u;
        goto label_246f00;
    }
    ctx->pc = 0x246EF8u;
    {
        const bool branch_taken_0x246ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246EF8u;
            // 0x246efc: 0x26b40010  addiu       $s4, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ef8) {
            ctx->pc = 0x246AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_246ae0;
        }
    }
    ctx->pc = 0x246F00u;
label_246f00:
    // 0x246f00: 0x26a30010  addiu       $v1, $s5, 0x10
    ctx->pc = 0x246f00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_246f04:
    // 0x246f04: 0x2832023  subu        $a0, $s4, $v1
    ctx->pc = 0x246f04u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_246f08:
    // 0x246f08: 0xaea40000  sw          $a0, 0x0($s5)
    ctx->pc = 0x246f08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 4));
label_246f0c:
    // 0x246f0c: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x246f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_246f10:
    // 0x246f10: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_246f14:
    // 0x246f14: 0x420bc  dsll32      $a0, $a0, 2
    ctx->pc = 0x246f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 2));
label_246f18:
    // 0x246f18: 0x420be  dsrl32      $a0, $a0, 2
    ctx->pc = 0x246f18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 2));
label_246f1c:
    // 0x246f1c: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x246f1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246f20:
    // 0x246f20: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_246f24:
    if (ctx->pc == 0x246F24u) {
        ctx->pc = 0x246F28u;
        goto label_246f28;
    }
    ctx->pc = 0x246F20u;
    {
        const bool branch_taken_0x246f20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x246f20) {
            ctx->pc = 0x246F40u;
            goto label_246f40;
        }
    }
    ctx->pc = 0x246F28u;
label_246f28:
    // 0x246f28: 0x42840  sll         $a1, $a0, 1
    ctx->pc = 0x246f28u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_246f2c:
    // 0x246f2c: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x246f2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_246f30:
    // 0x246f30: 0x61280a  movz        $a1, $v1, $at
    ctx->pc = 0x246f30u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_246f34:
    // 0x246f34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_246f38:
    // 0x246f38: 0xc0a725c  jal         func_29C970
label_246f3c:
    if (ctx->pc == 0x246F3Cu) {
        ctx->pc = 0x246F3Cu;
            // 0x246f3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x246F40u;
        goto label_246f40;
    }
    ctx->pc = 0x246F38u;
    SET_GPR_U32(ctx, 31, 0x246F40u);
    ctx->pc = 0x246F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F38u;
            // 0x246f3c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F40u; }
        if (ctx->pc != 0x246F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F40u; }
        if (ctx->pc != 0x246F40u) { return; }
    }
    ctx->pc = 0x246F40u;
label_246f40:
    // 0x246f40: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x246f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_246f44:
    // 0x246f44: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x246f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_246f48:
    // 0x246f48: 0x1e2080  sll         $a0, $fp, 2
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_246f4c:
    // 0x246f4c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x246f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_246f50:
    // 0x246f50: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246f54:
    // 0x246f54: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
label_246f58:
    if (ctx->pc == 0x246F58u) {
        ctx->pc = 0x246F58u;
            // 0x246f58: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x246F5Cu;
        goto label_246f5c;
    }
    ctx->pc = 0x246F54u;
    {
        const bool branch_taken_0x246f54 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F54u;
            // 0x246f58: 0xac750000  sw          $s5, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f54) {
            ctx->pc = 0x246FA0u;
            goto label_246fa0;
        }
    }
    ctx->pc = 0x246F5Cu;
label_246f5c:
    // 0x246f5c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_246f60:
    // 0x246f60: 0x8c30ea40  lw          $s0, -0x15C0($at)
    ctx->pc = 0x246f60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_246f64:
    // 0x246f64: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x246f64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_246f68:
    // 0x246f68: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x246f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_246f6c:
    // 0x246f6c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x246f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_246f70:
    // 0x246f70: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_246f74:
    if (ctx->pc == 0x246F74u) {
        ctx->pc = 0x246F78u;
        goto label_246f78;
    }
    ctx->pc = 0x246F70u;
    {
        const bool branch_taken_0x246f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x246f70) {
            ctx->pc = 0x246F88u;
            goto label_246f88;
        }
    }
    ctx->pc = 0x246F78u;
label_246f78:
    // 0x246f78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x246f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_246f7c:
    // 0x246f7c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x246f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_246f80:
    // 0x246f80: 0xc0a79ec  jal         func_29E7B0
label_246f84:
    if (ctx->pc == 0x246F84u) {
        ctx->pc = 0x246F84u;
            // 0x246f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246F88u;
        goto label_246f88;
    }
    ctx->pc = 0x246F80u;
    SET_GPR_U32(ctx, 31, 0x246F88u);
    ctx->pc = 0x246F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F80u;
            // 0x246f84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29E7B0u;
    if (runtime->hasFunction(0x29E7B0u)) {
        auto targetFn = runtime->lookupFunction(0x29E7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F88u; }
        if (ctx->pc != 0x246F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029E7B0_0x29e7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F88u; }
        if (ctx->pc != 0x246F88u) { return; }
    }
    ctx->pc = 0x246F88u;
label_246f88:
    // 0x246f88: 0x8e030088  lw          $v1, 0x88($s0)
    ctx->pc = 0x246f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
label_246f8c:
    // 0x246f8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_246f90:
    // 0x246f90: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x246f90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_246f94:
    // 0x246f94: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_246f98:
    // 0x246f98: 0xaee30000  sw          $v1, 0x0($s7)
    ctx->pc = 0x246f98u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 3));
label_246f9c:
    // 0x246f9c: 0xae170084  sw          $s7, 0x84($s0)
    ctx->pc = 0x246f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 23));
label_246fa0:
    // 0x246fa0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x246fa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_246fa4:
    // 0x246fa4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x246fa4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_246fa8:
    // 0x246fa8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x246fa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_246fac:
    // 0x246fac: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x246facu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_246fb0:
    // 0x246fb0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x246fb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_246fb4:
    // 0x246fb4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x246fb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_246fb8:
    // 0x246fb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x246fb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246fbc:
    // 0x246fbc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x246fbcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246fc0:
    // 0x246fc0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x246fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246fc4:
    // 0x246fc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x246fc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_246fc8:
    // 0x246fc8: 0x3e00008  jr          $ra
label_246fcc:
    if (ctx->pc == 0x246FCCu) {
        ctx->pc = 0x246FCCu;
            // 0x246fcc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x246FD0u;
        goto label_246fd0;
    }
    ctx->pc = 0x246FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246FC8u;
            // 0x246fcc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x246FD0u;
label_246fd0:
    // 0x246fd0: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x246fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_246fd4:
    // 0x246fd4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x246fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_246fd8:
    // 0x246fd8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x246fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_246fdc:
    // 0x246fdc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x246fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_246fe0:
    // 0x246fe0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x246fe0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246fe4:
    // 0x246fe4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_246fe8:
    // 0x246fe8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x246fe8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246fec:
    // 0x246fec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_246ff0:
    // 0x246ff0: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x246ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_246ff4:
    // 0x246ff4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x246ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_246ff8:
    // 0x246ff8: 0x8cb10008  lw          $s1, 0x8($a1)
    ctx->pc = 0x246ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_246ffc:
    // 0x246ffc: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x246ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_247000:
    // 0x247000: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x247000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_247004:
    // 0x247004: 0x8e880004  lw          $t0, 0x4($s4)
    ctx->pc = 0x247004u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_247008:
    // 0x247008: 0x8e890008  lw          $t1, 0x8($s4)
    ctx->pc = 0x247008u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_24700c:
    // 0x24700c: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x24700cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247010:
    // 0x247010: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x247010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_247014:
    // 0x247014: 0x8cb90000  lw          $t9, 0x0($a1)
    ctx->pc = 0x247014u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_247018:
    // 0x247018: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x247018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_24701c:
    // 0x24701c: 0x320f809  jalr        $t9
label_247020:
    if (ctx->pc == 0x247020u) {
        ctx->pc = 0x247020u;
            // 0x247020: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->pc = 0x247024u;
        goto label_247024;
    }
    ctx->pc = 0x24701Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247024u);
        ctx->pc = 0x247020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24701Cu;
            // 0x247020: 0x27a4027c  addiu       $a0, $sp, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247024u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247024u; }
            if (ctx->pc != 0x247024u) { return; }
        }
        }
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x27a2027c  addiu       $v0, $sp, 0x27C
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 636));
label_247028:
    // 0x247028: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x247028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24702c:
    // 0x24702c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_247030:
    if (ctx->pc == 0x247030u) {
        ctx->pc = 0x247034u;
        goto label_247034;
    }
    ctx->pc = 0x24702Cu;
    {
        const bool branch_taken_0x24702c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24702c) {
            ctx->pc = 0x247120u;
            goto label_247120;
        }
    }
    ctx->pc = 0x247034u;
label_247034:
    // 0x247034: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x247034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_247038:
    // 0x247038: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x247038u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_24703c:
    // 0x24703c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x24703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247040:
    // 0x247040: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_247044:
    // 0x247044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247048:
    // 0x247048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24704c:
    // 0x24704c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24704cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247050:
    // 0x247050: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247054:
    // 0x247054: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x247054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_247058:
    // 0x247058: 0x8c5016c8  lw          $s0, 0x16C8($v0)
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5832)));
label_24705c:
    // 0x24705c: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_247060:
    if (ctx->pc == 0x247060u) {
        ctx->pc = 0x247064u;
        goto label_247064;
    }
    ctx->pc = 0x24705Cu;
    {
        const bool branch_taken_0x24705c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24705c) {
            ctx->pc = 0x247110u;
            goto label_247110;
        }
    }
    ctx->pc = 0x247064u;
label_247064:
    // 0x247064: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x247064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_247068:
    // 0x247068: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x247068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24706c:
    // 0x24706c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24706cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247070:
    // 0x247070: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x247070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_247074:
    // 0x247074: 0x320f809  jalr        $t9
label_247078:
    if (ctx->pc == 0x247078u) {
        ctx->pc = 0x247078u;
            // 0x247078: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x24707Cu;
        goto label_24707c;
    }
    ctx->pc = 0x247074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24707Cu);
        ctx->pc = 0x247078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247074u;
            // 0x247078: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24707Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24707Cu; }
            if (ctx->pc != 0x24707Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24707Cu;
label_24707c:
    // 0x24707c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x24707cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_247080:
    // 0x247080: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x247080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247084:
    // 0x247084: 0xafa4006c  sw          $a0, 0x6C($sp)
    ctx->pc = 0x247084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 4));
label_247088:
    // 0x247088: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x247088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_24708c:
    // 0x24708c: 0xafa40068  sw          $a0, 0x68($sp)
    ctx->pc = 0x24708cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 4));
label_247090:
    // 0x247090: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x247090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_247094:
    // 0x247094: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x247094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
label_247098:
    // 0x247098: 0x92640000  lbu         $a0, 0x0($s3)
    ctx->pc = 0x247098u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_24709c:
    // 0x24709c: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_2470a0:
    if (ctx->pc == 0x2470A0u) {
        ctx->pc = 0x2470A0u;
            // 0x2470a0: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x2470A4u;
        goto label_2470a4;
    }
    ctx->pc = 0x24709Cu;
    {
        const bool branch_taken_0x24709c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2470A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24709Cu;
            // 0x2470a0: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24709c) {
            ctx->pc = 0x2470B8u;
            goto label_2470b8;
        }
    }
    ctx->pc = 0x2470A4u;
label_2470a4:
    // 0x2470a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2470a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2470a8:
    // 0x2470a8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_2470ac:
    if (ctx->pc == 0x2470ACu) {
        ctx->pc = 0x2470B0u;
        goto label_2470b0;
    }
    ctx->pc = 0x2470A8u;
    {
        const bool branch_taken_0x2470a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2470a8) {
            ctx->pc = 0x2470B8u;
            goto label_2470b8;
        }
    }
    ctx->pc = 0x2470B0u;
label_2470b0:
    // 0x2470b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2470b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2470b4:
    // 0x2470b4: 0x0  nop
    ctx->pc = 0x2470b4u;
    // NOP
label_2470b8:
    // 0x2470b8: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x2470b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
label_2470bc:
    // 0x2470bc: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x2470bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_2470c0:
    // 0x2470c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2470c4:
    if (ctx->pc == 0x2470C4u) {
        ctx->pc = 0x2470C8u;
        goto label_2470c8;
    }
    ctx->pc = 0x2470C0u;
    {
        const bool branch_taken_0x2470c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2470c0) {
            ctx->pc = 0x2470F0u;
            goto label_2470f0;
        }
    }
    ctx->pc = 0x2470C8u;
label_2470c8:
    // 0x2470c8: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x2470c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2470cc:
    // 0x2470cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2470ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2470d0:
    // 0x2470d0: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x2470d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2470d4:
    // 0x2470d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2470d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2470d8:
    // 0x2470d8: 0x8e890010  lw          $t1, 0x10($s4)
    ctx->pc = 0x2470d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2470dc:
    // 0x2470dc: 0x8e8a0014  lw          $t2, 0x14($s4)
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2470e0:
    // 0x2470e0: 0x200f809  jalr        $s0
label_2470e4:
    if (ctx->pc == 0x2470E4u) {
        ctx->pc = 0x2470E4u;
            // 0x2470e4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2470E8u;
        goto label_2470e8;
    }
    ctx->pc = 0x2470E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x2470E8u);
        ctx->pc = 0x2470E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470E0u;
            // 0x2470e4: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2470E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2470E8u; }
            if (ctx->pc != 0x2470E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2470E8u;
label_2470e8:
    // 0x2470e8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2470ec:
    if (ctx->pc == 0x2470ECu) {
        ctx->pc = 0x2470F0u;
        goto label_2470f0;
    }
    ctx->pc = 0x2470E8u;
    {
        const bool branch_taken_0x2470e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2470e8) {
            ctx->pc = 0x247110u;
            goto label_247110;
        }
    }
    ctx->pc = 0x2470F0u;
label_2470f0:
    // 0x2470f0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2470f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2470f4:
    // 0x2470f4: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2470f8:
    // 0x2470f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2470f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2470fc:
    // 0x2470fc: 0x8e890010  lw          $t1, 0x10($s4)
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_247100:
    // 0x247100: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x247100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247104:
    // 0x247104: 0x8e8a0014  lw          $t2, 0x14($s4)
    ctx->pc = 0x247104u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_247108:
    // 0x247108: 0x200f809  jalr        $s0
label_24710c:
    if (ctx->pc == 0x24710Cu) {
        ctx->pc = 0x24710Cu;
            // 0x24710c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x247110u;
        goto label_247110;
    }
    ctx->pc = 0x247108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x247110u);
        ctx->pc = 0x24710Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247108u;
            // 0x24710c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x247110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247110u; }
            if (ctx->pc != 0x247110u) { return; }
        }
        }
    }
    ctx->pc = 0x247110u;
label_247110:
    // 0x247110: 0x92620003  lbu         $v0, 0x3($s3)
    ctx->pc = 0x247110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_247114:
    // 0x247114: 0x10000012  b           . + 4 + (0x12 << 2)
label_247118:
    if (ctx->pc == 0x247118u) {
        ctx->pc = 0x247118u;
            // 0x247118: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->pc = 0x24711Cu;
        goto label_24711c;
    }
    ctx->pc = 0x247114u;
    {
        const bool branch_taken_0x247114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247114u;
            // 0x247118: 0x2621021  addu        $v0, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247114) {
            ctx->pc = 0x247160u;
            goto label_247160;
        }
    }
    ctx->pc = 0x24711Cu;
label_24711c:
    // 0x24711c: 0x0  nop
    ctx->pc = 0x24711cu;
    // NOP
label_247120:
    // 0x247120: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x247120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_247124:
    // 0x247124: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x247124u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_247128:
    // 0x247128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x247128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24712c:
    // 0x24712c: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_247130:
    // 0x247130: 0x8e870014  lw          $a3, 0x14($s4)
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_247134:
    // 0x247134: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247138:
    // 0x247138: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x247138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_24713c:
    // 0x24713c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24713cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247140:
    // 0x247140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_247144:
    // 0x247144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x247144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_247148:
    // 0x247148: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x247148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_24714c:
    // 0x24714c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x24714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_247150:
    // 0x247150: 0x8c4216b4  lw          $v0, 0x16B4($v0)
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5812)));
label_247154:
    // 0x247154: 0x40f809  jalr        $v0
label_247158:
    if (ctx->pc == 0x247158u) {
        ctx->pc = 0x247158u;
            // 0x247158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24715Cu;
        goto label_24715c;
    }
    ctx->pc = 0x247154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24715Cu);
        ctx->pc = 0x247158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247154u;
            // 0x247158: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24715Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24715Cu; }
            if (ctx->pc != 0x24715Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24715Cu;
label_24715c:
    // 0x24715c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x24715cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_247160:
    // 0x247160: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x247160u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_247164:
    // 0x247164: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x247164u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_247168:
    // 0x247168: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x247168u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24716c:
    // 0x24716c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24716cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_247170:
    // 0x247170: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247170u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_247174:
    // 0x247174: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_247178:
    // 0x247178: 0x3e00008  jr          $ra
label_24717c:
    if (ctx->pc == 0x24717Cu) {
        ctx->pc = 0x24717Cu;
            // 0x24717c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247180u;
        goto label_fallthrough_0x247178;
    }
    ctx->pc = 0x247178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24717Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247178u;
            // 0x24717c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x247178:
    ctx->pc = 0x247180u;
}
