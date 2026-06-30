#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00410A20
// Address: 0x410a20 - 0x411400
void sub_00410A20_0x410a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00410A20_0x410a20");
#endif

    switch (ctx->pc) {
        case 0x410a20u: goto label_410a20;
        case 0x410a24u: goto label_410a24;
        case 0x410a28u: goto label_410a28;
        case 0x410a2cu: goto label_410a2c;
        case 0x410a30u: goto label_410a30;
        case 0x410a34u: goto label_410a34;
        case 0x410a38u: goto label_410a38;
        case 0x410a3cu: goto label_410a3c;
        case 0x410a40u: goto label_410a40;
        case 0x410a44u: goto label_410a44;
        case 0x410a48u: goto label_410a48;
        case 0x410a4cu: goto label_410a4c;
        case 0x410a50u: goto label_410a50;
        case 0x410a54u: goto label_410a54;
        case 0x410a58u: goto label_410a58;
        case 0x410a5cu: goto label_410a5c;
        case 0x410a60u: goto label_410a60;
        case 0x410a64u: goto label_410a64;
        case 0x410a68u: goto label_410a68;
        case 0x410a6cu: goto label_410a6c;
        case 0x410a70u: goto label_410a70;
        case 0x410a74u: goto label_410a74;
        case 0x410a78u: goto label_410a78;
        case 0x410a7cu: goto label_410a7c;
        case 0x410a80u: goto label_410a80;
        case 0x410a84u: goto label_410a84;
        case 0x410a88u: goto label_410a88;
        case 0x410a8cu: goto label_410a8c;
        case 0x410a90u: goto label_410a90;
        case 0x410a94u: goto label_410a94;
        case 0x410a98u: goto label_410a98;
        case 0x410a9cu: goto label_410a9c;
        case 0x410aa0u: goto label_410aa0;
        case 0x410aa4u: goto label_410aa4;
        case 0x410aa8u: goto label_410aa8;
        case 0x410aacu: goto label_410aac;
        case 0x410ab0u: goto label_410ab0;
        case 0x410ab4u: goto label_410ab4;
        case 0x410ab8u: goto label_410ab8;
        case 0x410abcu: goto label_410abc;
        case 0x410ac0u: goto label_410ac0;
        case 0x410ac4u: goto label_410ac4;
        case 0x410ac8u: goto label_410ac8;
        case 0x410accu: goto label_410acc;
        case 0x410ad0u: goto label_410ad0;
        case 0x410ad4u: goto label_410ad4;
        case 0x410ad8u: goto label_410ad8;
        case 0x410adcu: goto label_410adc;
        case 0x410ae0u: goto label_410ae0;
        case 0x410ae4u: goto label_410ae4;
        case 0x410ae8u: goto label_410ae8;
        case 0x410aecu: goto label_410aec;
        case 0x410af0u: goto label_410af0;
        case 0x410af4u: goto label_410af4;
        case 0x410af8u: goto label_410af8;
        case 0x410afcu: goto label_410afc;
        case 0x410b00u: goto label_410b00;
        case 0x410b04u: goto label_410b04;
        case 0x410b08u: goto label_410b08;
        case 0x410b0cu: goto label_410b0c;
        case 0x410b10u: goto label_410b10;
        case 0x410b14u: goto label_410b14;
        case 0x410b18u: goto label_410b18;
        case 0x410b1cu: goto label_410b1c;
        case 0x410b20u: goto label_410b20;
        case 0x410b24u: goto label_410b24;
        case 0x410b28u: goto label_410b28;
        case 0x410b2cu: goto label_410b2c;
        case 0x410b30u: goto label_410b30;
        case 0x410b34u: goto label_410b34;
        case 0x410b38u: goto label_410b38;
        case 0x410b3cu: goto label_410b3c;
        case 0x410b40u: goto label_410b40;
        case 0x410b44u: goto label_410b44;
        case 0x410b48u: goto label_410b48;
        case 0x410b4cu: goto label_410b4c;
        case 0x410b50u: goto label_410b50;
        case 0x410b54u: goto label_410b54;
        case 0x410b58u: goto label_410b58;
        case 0x410b5cu: goto label_410b5c;
        case 0x410b60u: goto label_410b60;
        case 0x410b64u: goto label_410b64;
        case 0x410b68u: goto label_410b68;
        case 0x410b6cu: goto label_410b6c;
        case 0x410b70u: goto label_410b70;
        case 0x410b74u: goto label_410b74;
        case 0x410b78u: goto label_410b78;
        case 0x410b7cu: goto label_410b7c;
        case 0x410b80u: goto label_410b80;
        case 0x410b84u: goto label_410b84;
        case 0x410b88u: goto label_410b88;
        case 0x410b8cu: goto label_410b8c;
        case 0x410b90u: goto label_410b90;
        case 0x410b94u: goto label_410b94;
        case 0x410b98u: goto label_410b98;
        case 0x410b9cu: goto label_410b9c;
        case 0x410ba0u: goto label_410ba0;
        case 0x410ba4u: goto label_410ba4;
        case 0x410ba8u: goto label_410ba8;
        case 0x410bacu: goto label_410bac;
        case 0x410bb0u: goto label_410bb0;
        case 0x410bb4u: goto label_410bb4;
        case 0x410bb8u: goto label_410bb8;
        case 0x410bbcu: goto label_410bbc;
        case 0x410bc0u: goto label_410bc0;
        case 0x410bc4u: goto label_410bc4;
        case 0x410bc8u: goto label_410bc8;
        case 0x410bccu: goto label_410bcc;
        case 0x410bd0u: goto label_410bd0;
        case 0x410bd4u: goto label_410bd4;
        case 0x410bd8u: goto label_410bd8;
        case 0x410bdcu: goto label_410bdc;
        case 0x410be0u: goto label_410be0;
        case 0x410be4u: goto label_410be4;
        case 0x410be8u: goto label_410be8;
        case 0x410becu: goto label_410bec;
        case 0x410bf0u: goto label_410bf0;
        case 0x410bf4u: goto label_410bf4;
        case 0x410bf8u: goto label_410bf8;
        case 0x410bfcu: goto label_410bfc;
        case 0x410c00u: goto label_410c00;
        case 0x410c04u: goto label_410c04;
        case 0x410c08u: goto label_410c08;
        case 0x410c0cu: goto label_410c0c;
        case 0x410c10u: goto label_410c10;
        case 0x410c14u: goto label_410c14;
        case 0x410c18u: goto label_410c18;
        case 0x410c1cu: goto label_410c1c;
        case 0x410c20u: goto label_410c20;
        case 0x410c24u: goto label_410c24;
        case 0x410c28u: goto label_410c28;
        case 0x410c2cu: goto label_410c2c;
        case 0x410c30u: goto label_410c30;
        case 0x410c34u: goto label_410c34;
        case 0x410c38u: goto label_410c38;
        case 0x410c3cu: goto label_410c3c;
        case 0x410c40u: goto label_410c40;
        case 0x410c44u: goto label_410c44;
        case 0x410c48u: goto label_410c48;
        case 0x410c4cu: goto label_410c4c;
        case 0x410c50u: goto label_410c50;
        case 0x410c54u: goto label_410c54;
        case 0x410c58u: goto label_410c58;
        case 0x410c5cu: goto label_410c5c;
        case 0x410c60u: goto label_410c60;
        case 0x410c64u: goto label_410c64;
        case 0x410c68u: goto label_410c68;
        case 0x410c6cu: goto label_410c6c;
        case 0x410c70u: goto label_410c70;
        case 0x410c74u: goto label_410c74;
        case 0x410c78u: goto label_410c78;
        case 0x410c7cu: goto label_410c7c;
        case 0x410c80u: goto label_410c80;
        case 0x410c84u: goto label_410c84;
        case 0x410c88u: goto label_410c88;
        case 0x410c8cu: goto label_410c8c;
        case 0x410c90u: goto label_410c90;
        case 0x410c94u: goto label_410c94;
        case 0x410c98u: goto label_410c98;
        case 0x410c9cu: goto label_410c9c;
        case 0x410ca0u: goto label_410ca0;
        case 0x410ca4u: goto label_410ca4;
        case 0x410ca8u: goto label_410ca8;
        case 0x410cacu: goto label_410cac;
        case 0x410cb0u: goto label_410cb0;
        case 0x410cb4u: goto label_410cb4;
        case 0x410cb8u: goto label_410cb8;
        case 0x410cbcu: goto label_410cbc;
        case 0x410cc0u: goto label_410cc0;
        case 0x410cc4u: goto label_410cc4;
        case 0x410cc8u: goto label_410cc8;
        case 0x410cccu: goto label_410ccc;
        case 0x410cd0u: goto label_410cd0;
        case 0x410cd4u: goto label_410cd4;
        case 0x410cd8u: goto label_410cd8;
        case 0x410cdcu: goto label_410cdc;
        case 0x410ce0u: goto label_410ce0;
        case 0x410ce4u: goto label_410ce4;
        case 0x410ce8u: goto label_410ce8;
        case 0x410cecu: goto label_410cec;
        case 0x410cf0u: goto label_410cf0;
        case 0x410cf4u: goto label_410cf4;
        case 0x410cf8u: goto label_410cf8;
        case 0x410cfcu: goto label_410cfc;
        case 0x410d00u: goto label_410d00;
        case 0x410d04u: goto label_410d04;
        case 0x410d08u: goto label_410d08;
        case 0x410d0cu: goto label_410d0c;
        case 0x410d10u: goto label_410d10;
        case 0x410d14u: goto label_410d14;
        case 0x410d18u: goto label_410d18;
        case 0x410d1cu: goto label_410d1c;
        case 0x410d20u: goto label_410d20;
        case 0x410d24u: goto label_410d24;
        case 0x410d28u: goto label_410d28;
        case 0x410d2cu: goto label_410d2c;
        case 0x410d30u: goto label_410d30;
        case 0x410d34u: goto label_410d34;
        case 0x410d38u: goto label_410d38;
        case 0x410d3cu: goto label_410d3c;
        case 0x410d40u: goto label_410d40;
        case 0x410d44u: goto label_410d44;
        case 0x410d48u: goto label_410d48;
        case 0x410d4cu: goto label_410d4c;
        case 0x410d50u: goto label_410d50;
        case 0x410d54u: goto label_410d54;
        case 0x410d58u: goto label_410d58;
        case 0x410d5cu: goto label_410d5c;
        case 0x410d60u: goto label_410d60;
        case 0x410d64u: goto label_410d64;
        case 0x410d68u: goto label_410d68;
        case 0x410d6cu: goto label_410d6c;
        case 0x410d70u: goto label_410d70;
        case 0x410d74u: goto label_410d74;
        case 0x410d78u: goto label_410d78;
        case 0x410d7cu: goto label_410d7c;
        case 0x410d80u: goto label_410d80;
        case 0x410d84u: goto label_410d84;
        case 0x410d88u: goto label_410d88;
        case 0x410d8cu: goto label_410d8c;
        case 0x410d90u: goto label_410d90;
        case 0x410d94u: goto label_410d94;
        case 0x410d98u: goto label_410d98;
        case 0x410d9cu: goto label_410d9c;
        case 0x410da0u: goto label_410da0;
        case 0x410da4u: goto label_410da4;
        case 0x410da8u: goto label_410da8;
        case 0x410dacu: goto label_410dac;
        case 0x410db0u: goto label_410db0;
        case 0x410db4u: goto label_410db4;
        case 0x410db8u: goto label_410db8;
        case 0x410dbcu: goto label_410dbc;
        case 0x410dc0u: goto label_410dc0;
        case 0x410dc4u: goto label_410dc4;
        case 0x410dc8u: goto label_410dc8;
        case 0x410dccu: goto label_410dcc;
        case 0x410dd0u: goto label_410dd0;
        case 0x410dd4u: goto label_410dd4;
        case 0x410dd8u: goto label_410dd8;
        case 0x410ddcu: goto label_410ddc;
        case 0x410de0u: goto label_410de0;
        case 0x410de4u: goto label_410de4;
        case 0x410de8u: goto label_410de8;
        case 0x410decu: goto label_410dec;
        case 0x410df0u: goto label_410df0;
        case 0x410df4u: goto label_410df4;
        case 0x410df8u: goto label_410df8;
        case 0x410dfcu: goto label_410dfc;
        case 0x410e00u: goto label_410e00;
        case 0x410e04u: goto label_410e04;
        case 0x410e08u: goto label_410e08;
        case 0x410e0cu: goto label_410e0c;
        case 0x410e10u: goto label_410e10;
        case 0x410e14u: goto label_410e14;
        case 0x410e18u: goto label_410e18;
        case 0x410e1cu: goto label_410e1c;
        case 0x410e20u: goto label_410e20;
        case 0x410e24u: goto label_410e24;
        case 0x410e28u: goto label_410e28;
        case 0x410e2cu: goto label_410e2c;
        case 0x410e30u: goto label_410e30;
        case 0x410e34u: goto label_410e34;
        case 0x410e38u: goto label_410e38;
        case 0x410e3cu: goto label_410e3c;
        case 0x410e40u: goto label_410e40;
        case 0x410e44u: goto label_410e44;
        case 0x410e48u: goto label_410e48;
        case 0x410e4cu: goto label_410e4c;
        case 0x410e50u: goto label_410e50;
        case 0x410e54u: goto label_410e54;
        case 0x410e58u: goto label_410e58;
        case 0x410e5cu: goto label_410e5c;
        case 0x410e60u: goto label_410e60;
        case 0x410e64u: goto label_410e64;
        case 0x410e68u: goto label_410e68;
        case 0x410e6cu: goto label_410e6c;
        case 0x410e70u: goto label_410e70;
        case 0x410e74u: goto label_410e74;
        case 0x410e78u: goto label_410e78;
        case 0x410e7cu: goto label_410e7c;
        case 0x410e80u: goto label_410e80;
        case 0x410e84u: goto label_410e84;
        case 0x410e88u: goto label_410e88;
        case 0x410e8cu: goto label_410e8c;
        case 0x410e90u: goto label_410e90;
        case 0x410e94u: goto label_410e94;
        case 0x410e98u: goto label_410e98;
        case 0x410e9cu: goto label_410e9c;
        case 0x410ea0u: goto label_410ea0;
        case 0x410ea4u: goto label_410ea4;
        case 0x410ea8u: goto label_410ea8;
        case 0x410eacu: goto label_410eac;
        case 0x410eb0u: goto label_410eb0;
        case 0x410eb4u: goto label_410eb4;
        case 0x410eb8u: goto label_410eb8;
        case 0x410ebcu: goto label_410ebc;
        case 0x410ec0u: goto label_410ec0;
        case 0x410ec4u: goto label_410ec4;
        case 0x410ec8u: goto label_410ec8;
        case 0x410eccu: goto label_410ecc;
        case 0x410ed0u: goto label_410ed0;
        case 0x410ed4u: goto label_410ed4;
        case 0x410ed8u: goto label_410ed8;
        case 0x410edcu: goto label_410edc;
        case 0x410ee0u: goto label_410ee0;
        case 0x410ee4u: goto label_410ee4;
        case 0x410ee8u: goto label_410ee8;
        case 0x410eecu: goto label_410eec;
        case 0x410ef0u: goto label_410ef0;
        case 0x410ef4u: goto label_410ef4;
        case 0x410ef8u: goto label_410ef8;
        case 0x410efcu: goto label_410efc;
        case 0x410f00u: goto label_410f00;
        case 0x410f04u: goto label_410f04;
        case 0x410f08u: goto label_410f08;
        case 0x410f0cu: goto label_410f0c;
        case 0x410f10u: goto label_410f10;
        case 0x410f14u: goto label_410f14;
        case 0x410f18u: goto label_410f18;
        case 0x410f1cu: goto label_410f1c;
        case 0x410f20u: goto label_410f20;
        case 0x410f24u: goto label_410f24;
        case 0x410f28u: goto label_410f28;
        case 0x410f2cu: goto label_410f2c;
        case 0x410f30u: goto label_410f30;
        case 0x410f34u: goto label_410f34;
        case 0x410f38u: goto label_410f38;
        case 0x410f3cu: goto label_410f3c;
        case 0x410f40u: goto label_410f40;
        case 0x410f44u: goto label_410f44;
        case 0x410f48u: goto label_410f48;
        case 0x410f4cu: goto label_410f4c;
        case 0x410f50u: goto label_410f50;
        case 0x410f54u: goto label_410f54;
        case 0x410f58u: goto label_410f58;
        case 0x410f5cu: goto label_410f5c;
        case 0x410f60u: goto label_410f60;
        case 0x410f64u: goto label_410f64;
        case 0x410f68u: goto label_410f68;
        case 0x410f6cu: goto label_410f6c;
        case 0x410f70u: goto label_410f70;
        case 0x410f74u: goto label_410f74;
        case 0x410f78u: goto label_410f78;
        case 0x410f7cu: goto label_410f7c;
        case 0x410f80u: goto label_410f80;
        case 0x410f84u: goto label_410f84;
        case 0x410f88u: goto label_410f88;
        case 0x410f8cu: goto label_410f8c;
        case 0x410f90u: goto label_410f90;
        case 0x410f94u: goto label_410f94;
        case 0x410f98u: goto label_410f98;
        case 0x410f9cu: goto label_410f9c;
        case 0x410fa0u: goto label_410fa0;
        case 0x410fa4u: goto label_410fa4;
        case 0x410fa8u: goto label_410fa8;
        case 0x410facu: goto label_410fac;
        case 0x410fb0u: goto label_410fb0;
        case 0x410fb4u: goto label_410fb4;
        case 0x410fb8u: goto label_410fb8;
        case 0x410fbcu: goto label_410fbc;
        case 0x410fc0u: goto label_410fc0;
        case 0x410fc4u: goto label_410fc4;
        case 0x410fc8u: goto label_410fc8;
        case 0x410fccu: goto label_410fcc;
        case 0x410fd0u: goto label_410fd0;
        case 0x410fd4u: goto label_410fd4;
        case 0x410fd8u: goto label_410fd8;
        case 0x410fdcu: goto label_410fdc;
        case 0x410fe0u: goto label_410fe0;
        case 0x410fe4u: goto label_410fe4;
        case 0x410fe8u: goto label_410fe8;
        case 0x410fecu: goto label_410fec;
        case 0x410ff0u: goto label_410ff0;
        case 0x410ff4u: goto label_410ff4;
        case 0x410ff8u: goto label_410ff8;
        case 0x410ffcu: goto label_410ffc;
        case 0x411000u: goto label_411000;
        case 0x411004u: goto label_411004;
        case 0x411008u: goto label_411008;
        case 0x41100cu: goto label_41100c;
        case 0x411010u: goto label_411010;
        case 0x411014u: goto label_411014;
        case 0x411018u: goto label_411018;
        case 0x41101cu: goto label_41101c;
        case 0x411020u: goto label_411020;
        case 0x411024u: goto label_411024;
        case 0x411028u: goto label_411028;
        case 0x41102cu: goto label_41102c;
        case 0x411030u: goto label_411030;
        case 0x411034u: goto label_411034;
        case 0x411038u: goto label_411038;
        case 0x41103cu: goto label_41103c;
        case 0x411040u: goto label_411040;
        case 0x411044u: goto label_411044;
        case 0x411048u: goto label_411048;
        case 0x41104cu: goto label_41104c;
        case 0x411050u: goto label_411050;
        case 0x411054u: goto label_411054;
        case 0x411058u: goto label_411058;
        case 0x41105cu: goto label_41105c;
        case 0x411060u: goto label_411060;
        case 0x411064u: goto label_411064;
        case 0x411068u: goto label_411068;
        case 0x41106cu: goto label_41106c;
        case 0x411070u: goto label_411070;
        case 0x411074u: goto label_411074;
        case 0x411078u: goto label_411078;
        case 0x41107cu: goto label_41107c;
        case 0x411080u: goto label_411080;
        case 0x411084u: goto label_411084;
        case 0x411088u: goto label_411088;
        case 0x41108cu: goto label_41108c;
        case 0x411090u: goto label_411090;
        case 0x411094u: goto label_411094;
        case 0x411098u: goto label_411098;
        case 0x41109cu: goto label_41109c;
        case 0x4110a0u: goto label_4110a0;
        case 0x4110a4u: goto label_4110a4;
        case 0x4110a8u: goto label_4110a8;
        case 0x4110acu: goto label_4110ac;
        case 0x4110b0u: goto label_4110b0;
        case 0x4110b4u: goto label_4110b4;
        case 0x4110b8u: goto label_4110b8;
        case 0x4110bcu: goto label_4110bc;
        case 0x4110c0u: goto label_4110c0;
        case 0x4110c4u: goto label_4110c4;
        case 0x4110c8u: goto label_4110c8;
        case 0x4110ccu: goto label_4110cc;
        case 0x4110d0u: goto label_4110d0;
        case 0x4110d4u: goto label_4110d4;
        case 0x4110d8u: goto label_4110d8;
        case 0x4110dcu: goto label_4110dc;
        case 0x4110e0u: goto label_4110e0;
        case 0x4110e4u: goto label_4110e4;
        case 0x4110e8u: goto label_4110e8;
        case 0x4110ecu: goto label_4110ec;
        case 0x4110f0u: goto label_4110f0;
        case 0x4110f4u: goto label_4110f4;
        case 0x4110f8u: goto label_4110f8;
        case 0x4110fcu: goto label_4110fc;
        case 0x411100u: goto label_411100;
        case 0x411104u: goto label_411104;
        case 0x411108u: goto label_411108;
        case 0x41110cu: goto label_41110c;
        case 0x411110u: goto label_411110;
        case 0x411114u: goto label_411114;
        case 0x411118u: goto label_411118;
        case 0x41111cu: goto label_41111c;
        case 0x411120u: goto label_411120;
        case 0x411124u: goto label_411124;
        case 0x411128u: goto label_411128;
        case 0x41112cu: goto label_41112c;
        case 0x411130u: goto label_411130;
        case 0x411134u: goto label_411134;
        case 0x411138u: goto label_411138;
        case 0x41113cu: goto label_41113c;
        case 0x411140u: goto label_411140;
        case 0x411144u: goto label_411144;
        case 0x411148u: goto label_411148;
        case 0x41114cu: goto label_41114c;
        case 0x411150u: goto label_411150;
        case 0x411154u: goto label_411154;
        case 0x411158u: goto label_411158;
        case 0x41115cu: goto label_41115c;
        case 0x411160u: goto label_411160;
        case 0x411164u: goto label_411164;
        case 0x411168u: goto label_411168;
        case 0x41116cu: goto label_41116c;
        case 0x411170u: goto label_411170;
        case 0x411174u: goto label_411174;
        case 0x411178u: goto label_411178;
        case 0x41117cu: goto label_41117c;
        case 0x411180u: goto label_411180;
        case 0x411184u: goto label_411184;
        case 0x411188u: goto label_411188;
        case 0x41118cu: goto label_41118c;
        case 0x411190u: goto label_411190;
        case 0x411194u: goto label_411194;
        case 0x411198u: goto label_411198;
        case 0x41119cu: goto label_41119c;
        case 0x4111a0u: goto label_4111a0;
        case 0x4111a4u: goto label_4111a4;
        case 0x4111a8u: goto label_4111a8;
        case 0x4111acu: goto label_4111ac;
        case 0x4111b0u: goto label_4111b0;
        case 0x4111b4u: goto label_4111b4;
        case 0x4111b8u: goto label_4111b8;
        case 0x4111bcu: goto label_4111bc;
        case 0x4111c0u: goto label_4111c0;
        case 0x4111c4u: goto label_4111c4;
        case 0x4111c8u: goto label_4111c8;
        case 0x4111ccu: goto label_4111cc;
        case 0x4111d0u: goto label_4111d0;
        case 0x4111d4u: goto label_4111d4;
        case 0x4111d8u: goto label_4111d8;
        case 0x4111dcu: goto label_4111dc;
        case 0x4111e0u: goto label_4111e0;
        case 0x4111e4u: goto label_4111e4;
        case 0x4111e8u: goto label_4111e8;
        case 0x4111ecu: goto label_4111ec;
        case 0x4111f0u: goto label_4111f0;
        case 0x4111f4u: goto label_4111f4;
        case 0x4111f8u: goto label_4111f8;
        case 0x4111fcu: goto label_4111fc;
        case 0x411200u: goto label_411200;
        case 0x411204u: goto label_411204;
        case 0x411208u: goto label_411208;
        case 0x41120cu: goto label_41120c;
        case 0x411210u: goto label_411210;
        case 0x411214u: goto label_411214;
        case 0x411218u: goto label_411218;
        case 0x41121cu: goto label_41121c;
        case 0x411220u: goto label_411220;
        case 0x411224u: goto label_411224;
        case 0x411228u: goto label_411228;
        case 0x41122cu: goto label_41122c;
        case 0x411230u: goto label_411230;
        case 0x411234u: goto label_411234;
        case 0x411238u: goto label_411238;
        case 0x41123cu: goto label_41123c;
        case 0x411240u: goto label_411240;
        case 0x411244u: goto label_411244;
        case 0x411248u: goto label_411248;
        case 0x41124cu: goto label_41124c;
        case 0x411250u: goto label_411250;
        case 0x411254u: goto label_411254;
        case 0x411258u: goto label_411258;
        case 0x41125cu: goto label_41125c;
        case 0x411260u: goto label_411260;
        case 0x411264u: goto label_411264;
        case 0x411268u: goto label_411268;
        case 0x41126cu: goto label_41126c;
        case 0x411270u: goto label_411270;
        case 0x411274u: goto label_411274;
        case 0x411278u: goto label_411278;
        case 0x41127cu: goto label_41127c;
        case 0x411280u: goto label_411280;
        case 0x411284u: goto label_411284;
        case 0x411288u: goto label_411288;
        case 0x41128cu: goto label_41128c;
        case 0x411290u: goto label_411290;
        case 0x411294u: goto label_411294;
        case 0x411298u: goto label_411298;
        case 0x41129cu: goto label_41129c;
        case 0x4112a0u: goto label_4112a0;
        case 0x4112a4u: goto label_4112a4;
        case 0x4112a8u: goto label_4112a8;
        case 0x4112acu: goto label_4112ac;
        case 0x4112b0u: goto label_4112b0;
        case 0x4112b4u: goto label_4112b4;
        case 0x4112b8u: goto label_4112b8;
        case 0x4112bcu: goto label_4112bc;
        case 0x4112c0u: goto label_4112c0;
        case 0x4112c4u: goto label_4112c4;
        case 0x4112c8u: goto label_4112c8;
        case 0x4112ccu: goto label_4112cc;
        case 0x4112d0u: goto label_4112d0;
        case 0x4112d4u: goto label_4112d4;
        case 0x4112d8u: goto label_4112d8;
        case 0x4112dcu: goto label_4112dc;
        case 0x4112e0u: goto label_4112e0;
        case 0x4112e4u: goto label_4112e4;
        case 0x4112e8u: goto label_4112e8;
        case 0x4112ecu: goto label_4112ec;
        case 0x4112f0u: goto label_4112f0;
        case 0x4112f4u: goto label_4112f4;
        case 0x4112f8u: goto label_4112f8;
        case 0x4112fcu: goto label_4112fc;
        case 0x411300u: goto label_411300;
        case 0x411304u: goto label_411304;
        case 0x411308u: goto label_411308;
        case 0x41130cu: goto label_41130c;
        case 0x411310u: goto label_411310;
        case 0x411314u: goto label_411314;
        case 0x411318u: goto label_411318;
        case 0x41131cu: goto label_41131c;
        case 0x411320u: goto label_411320;
        case 0x411324u: goto label_411324;
        case 0x411328u: goto label_411328;
        case 0x41132cu: goto label_41132c;
        case 0x411330u: goto label_411330;
        case 0x411334u: goto label_411334;
        case 0x411338u: goto label_411338;
        case 0x41133cu: goto label_41133c;
        case 0x411340u: goto label_411340;
        case 0x411344u: goto label_411344;
        case 0x411348u: goto label_411348;
        case 0x41134cu: goto label_41134c;
        case 0x411350u: goto label_411350;
        case 0x411354u: goto label_411354;
        case 0x411358u: goto label_411358;
        case 0x41135cu: goto label_41135c;
        case 0x411360u: goto label_411360;
        case 0x411364u: goto label_411364;
        case 0x411368u: goto label_411368;
        case 0x41136cu: goto label_41136c;
        case 0x411370u: goto label_411370;
        case 0x411374u: goto label_411374;
        case 0x411378u: goto label_411378;
        case 0x41137cu: goto label_41137c;
        case 0x411380u: goto label_411380;
        case 0x411384u: goto label_411384;
        case 0x411388u: goto label_411388;
        case 0x41138cu: goto label_41138c;
        case 0x411390u: goto label_411390;
        case 0x411394u: goto label_411394;
        case 0x411398u: goto label_411398;
        case 0x41139cu: goto label_41139c;
        case 0x4113a0u: goto label_4113a0;
        case 0x4113a4u: goto label_4113a4;
        case 0x4113a8u: goto label_4113a8;
        case 0x4113acu: goto label_4113ac;
        case 0x4113b0u: goto label_4113b0;
        case 0x4113b4u: goto label_4113b4;
        case 0x4113b8u: goto label_4113b8;
        case 0x4113bcu: goto label_4113bc;
        case 0x4113c0u: goto label_4113c0;
        case 0x4113c4u: goto label_4113c4;
        case 0x4113c8u: goto label_4113c8;
        case 0x4113ccu: goto label_4113cc;
        case 0x4113d0u: goto label_4113d0;
        case 0x4113d4u: goto label_4113d4;
        case 0x4113d8u: goto label_4113d8;
        case 0x4113dcu: goto label_4113dc;
        case 0x4113e0u: goto label_4113e0;
        case 0x4113e4u: goto label_4113e4;
        case 0x4113e8u: goto label_4113e8;
        case 0x4113ecu: goto label_4113ec;
        case 0x4113f0u: goto label_4113f0;
        case 0x4113f4u: goto label_4113f4;
        case 0x4113f8u: goto label_4113f8;
        case 0x4113fcu: goto label_4113fc;
        default: break;
    }

    ctx->pc = 0x410a20u;

label_410a20:
    // 0x410a20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x410a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_410a24:
    // 0x410a24: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x410a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_410a28:
    // 0x410a28: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x410a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_410a2c:
    // 0x410a2c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x410a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_410a30:
    // 0x410a30: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x410a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_410a34:
    // 0x410a34: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x410a34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_410a38:
    // 0x410a38: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x410a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_410a3c:
    // 0x410a3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x410a3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410a40:
    // 0x410a40: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x410a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_410a44:
    // 0x410a44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x410a44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_410a48:
    // 0x410a48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x410a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_410a4c:
    // 0x410a4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x410a4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_410a50:
    // 0x410a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410a54:
    // 0x410a54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x410a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_410a58:
    // 0x410a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410a5c:
    // 0x410a5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x410a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_410a60:
    // 0x410a60: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x410a60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_410a64:
    // 0x410a64: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x410a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_410a68:
    // 0x410a68: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x410a68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_410a6c:
    // 0x410a6c: 0xc10ca68  jal         func_4329A0
label_410a70:
    if (ctx->pc == 0x410A70u) {
        ctx->pc = 0x410A70u;
            // 0x410a70: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x410A74u;
        goto label_410a74;
    }
    ctx->pc = 0x410A6Cu;
    SET_GPR_U32(ctx, 31, 0x410A74u);
    ctx->pc = 0x410A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410A6Cu;
            // 0x410a70: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410A74u; }
        if (ctx->pc != 0x410A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410A74u; }
        if (ctx->pc != 0x410A74u) { return; }
    }
    ctx->pc = 0x410A74u;
label_410a74:
    // 0x410a74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x410a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_410a78:
    // 0x410a78: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x410a78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_410a7c:
    // 0x410a7c: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x410a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_410a80:
    // 0x410a80: 0x2463aea0  addiu       $v1, $v1, -0x5160
    ctx->pc = 0x410a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946464));
label_410a84:
    // 0x410a84: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x410a84u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_410a88:
    // 0x410a88: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x410a88u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_410a8c:
    // 0x410a8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x410a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_410a90:
    // 0x410a90: 0xaeb40058  sw          $s4, 0x58($s5)
    ctx->pc = 0x410a90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 20));
label_410a94:
    // 0x410a94: 0xaeb3005c  sw          $s3, 0x5C($s5)
    ctx->pc = 0x410a94u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 19));
label_410a98:
    // 0x410a98: 0xaeb20060  sw          $s2, 0x60($s5)
    ctx->pc = 0x410a98u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 18));
label_410a9c:
    // 0x410a9c: 0xaeb10064  sw          $s1, 0x64($s5)
    ctx->pc = 0x410a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 100), GPR_U32(ctx, 17));
label_410aa0:
    // 0x410aa0: 0xaeb00068  sw          $s0, 0x68($s5)
    ctx->pc = 0x410aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 16));
label_410aa4:
    // 0x410aa4: 0xaea0006c  sw          $zero, 0x6C($s5)
    ctx->pc = 0x410aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 0));
label_410aa8:
    // 0x410aa8: 0xa2a00070  sb          $zero, 0x70($s5)
    ctx->pc = 0x410aa8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 0));
label_410aac:
    // 0x410aac: 0xaeb60074  sw          $s6, 0x74($s5)
    ctx->pc = 0x410aacu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 22));
label_410ab0:
    // 0x410ab0: 0xaea00078  sw          $zero, 0x78($s5)
    ctx->pc = 0x410ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 0));
label_410ab4:
    // 0x410ab4: 0xaea0007c  sw          $zero, 0x7C($s5)
    ctx->pc = 0x410ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 0));
label_410ab8:
    // 0x410ab8: 0xaea00080  sw          $zero, 0x80($s5)
    ctx->pc = 0x410ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 0));
label_410abc:
    // 0x410abc: 0xaea00084  sw          $zero, 0x84($s5)
    ctx->pc = 0x410abcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 0));
label_410ac0:
    // 0x410ac0: 0xaea00088  sw          $zero, 0x88($s5)
    ctx->pc = 0x410ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 136), GPR_U32(ctx, 0));
label_410ac4:
    // 0x410ac4: 0xaea0008c  sw          $zero, 0x8C($s5)
    ctx->pc = 0x410ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 140), GPR_U32(ctx, 0));
label_410ac8:
    // 0x410ac8: 0xaea00090  sw          $zero, 0x90($s5)
    ctx->pc = 0x410ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 0));
label_410acc:
    // 0x410acc: 0xaea00094  sw          $zero, 0x94($s5)
    ctx->pc = 0x410accu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 148), GPR_U32(ctx, 0));
label_410ad0:
    // 0x410ad0: 0xaea00098  sw          $zero, 0x98($s5)
    ctx->pc = 0x410ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 0));
label_410ad4:
    // 0x410ad4: 0xaea0009c  sw          $zero, 0x9C($s5)
    ctx->pc = 0x410ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 0));
label_410ad8:
    // 0x410ad8: 0xaea000a0  sw          $zero, 0xA0($s5)
    ctx->pc = 0x410ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 160), GPR_U32(ctx, 0));
label_410adc:
    // 0x410adc: 0xaea000a4  sw          $zero, 0xA4($s5)
    ctx->pc = 0x410adcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 0));
label_410ae0:
    // 0x410ae0: 0x8ea5005c  lw          $a1, 0x5C($s5)
    ctx->pc = 0x410ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_410ae4:
    // 0x410ae4: 0xc0d03b4  jal         func_340ED0
label_410ae8:
    if (ctx->pc == 0x410AE8u) {
        ctx->pc = 0x410AE8u;
            // 0x410ae8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->pc = 0x410AECu;
        goto label_410aec;
    }
    ctx->pc = 0x410AE4u;
    SET_GPR_U32(ctx, 31, 0x410AECu);
    ctx->pc = 0x410AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410AE4u;
            // 0x410ae8: 0x8c440e80  lw          $a0, 0xE80($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x340ED0u;
    if (runtime->hasFunction(0x340ED0u)) {
        auto targetFn = runtime->lookupFunction(0x340ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410AECu; }
        if (ctx->pc != 0x410AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00340ED0_0x340ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410AECu; }
        if (ctx->pc != 0x410AECu) { return; }
    }
    ctx->pc = 0x410AECu;
label_410aec:
    // 0x410aec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_410af0:
    if (ctx->pc == 0x410AF0u) {
        ctx->pc = 0x410AF0u;
            // 0x410af0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410AF4u;
        goto label_410af4;
    }
    ctx->pc = 0x410AECu;
    {
        const bool branch_taken_0x410aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x410aec) {
            ctx->pc = 0x410AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410AECu;
            // 0x410af0: 0x2a0102d  daddu       $v0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410B00u;
            goto label_410b00;
        }
    }
    ctx->pc = 0x410AF4u;
label_410af4:
    // 0x410af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x410af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410af8:
    // 0x410af8: 0xa2a20070  sb          $v0, 0x70($s5)
    ctx->pc = 0x410af8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 112), (uint8_t)GPR_U32(ctx, 2));
label_410afc:
    // 0x410afc: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x410afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_410b00:
    // 0x410b00: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x410b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_410b04:
    // 0x410b04: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x410b04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410b08:
    // 0x410b08: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x410b08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410b0c:
    // 0x410b0c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x410b0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410b10:
    // 0x410b10: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x410b10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410b14:
    // 0x410b14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x410b14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410b18:
    // 0x410b18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410b18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410b1c:
    // 0x410b1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x410b1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_410b20:
    // 0x410b20: 0x3e00008  jr          $ra
label_410b24:
    if (ctx->pc == 0x410B24u) {
        ctx->pc = 0x410B24u;
            // 0x410b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x410B28u;
        goto label_410b28;
    }
    ctx->pc = 0x410B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410B20u;
            // 0x410b24: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410B28u;
label_410b28:
    // 0x410b28: 0x0  nop
    ctx->pc = 0x410b28u;
    // NOP
label_410b2c:
    // 0x410b2c: 0x0  nop
    ctx->pc = 0x410b2cu;
    // NOP
label_410b30:
    // 0x410b30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x410b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_410b34:
    // 0x410b34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x410b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_410b38:
    // 0x410b38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410b38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410b3c:
    // 0x410b3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410b40:
    // 0x410b40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x410b40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410b44:
    // 0x410b44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_410b48:
    if (ctx->pc == 0x410B48u) {
        ctx->pc = 0x410B48u;
            // 0x410b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410B4Cu;
        goto label_410b4c;
    }
    ctx->pc = 0x410B44u;
    {
        const bool branch_taken_0x410b44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x410B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410B44u;
            // 0x410b48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410b44) {
            ctx->pc = 0x410B88u;
            goto label_410b88;
        }
    }
    ctx->pc = 0x410B4Cu;
label_410b4c:
    // 0x410b4c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x410b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_410b50:
    // 0x410b50: 0x2442aea0  addiu       $v0, $v0, -0x5160
    ctx->pc = 0x410b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946464));
label_410b54:
    // 0x410b54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_410b58:
    if (ctx->pc == 0x410B58u) {
        ctx->pc = 0x410B58u;
            // 0x410b58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x410B5Cu;
        goto label_410b5c;
    }
    ctx->pc = 0x410B54u;
    {
        const bool branch_taken_0x410b54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x410B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410B54u;
            // 0x410b58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410b54) {
            ctx->pc = 0x410B70u;
            goto label_410b70;
        }
    }
    ctx->pc = 0x410B5Cu;
label_410b5c:
    // 0x410b5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x410b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_410b60:
    // 0x410b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410b64:
    // 0x410b64: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x410b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_410b68:
    // 0x410b68: 0xc057a68  jal         func_15E9A0
label_410b6c:
    if (ctx->pc == 0x410B6Cu) {
        ctx->pc = 0x410B6Cu;
            // 0x410b6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x410B70u;
        goto label_410b70;
    }
    ctx->pc = 0x410B68u;
    SET_GPR_U32(ctx, 31, 0x410B70u);
    ctx->pc = 0x410B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410B68u;
            // 0x410b6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410B70u; }
        if (ctx->pc != 0x410B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410B70u; }
        if (ctx->pc != 0x410B70u) { return; }
    }
    ctx->pc = 0x410B70u;
label_410b70:
    // 0x410b70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x410b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_410b74:
    // 0x410b74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x410b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_410b78:
    // 0x410b78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_410b7c:
    if (ctx->pc == 0x410B7Cu) {
        ctx->pc = 0x410B7Cu;
            // 0x410b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410B80u;
        goto label_410b80;
    }
    ctx->pc = 0x410B78u;
    {
        const bool branch_taken_0x410b78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x410b78) {
            ctx->pc = 0x410B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410B78u;
            // 0x410b7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410B8Cu;
            goto label_410b8c;
        }
    }
    ctx->pc = 0x410B80u;
label_410b80:
    // 0x410b80: 0xc0400a8  jal         func_1002A0
label_410b84:
    if (ctx->pc == 0x410B84u) {
        ctx->pc = 0x410B84u;
            // 0x410b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410B88u;
        goto label_410b88;
    }
    ctx->pc = 0x410B80u;
    SET_GPR_U32(ctx, 31, 0x410B88u);
    ctx->pc = 0x410B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410B80u;
            // 0x410b84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410B88u; }
        if (ctx->pc != 0x410B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410B88u; }
        if (ctx->pc != 0x410B88u) { return; }
    }
    ctx->pc = 0x410B88u;
label_410b88:
    // 0x410b88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x410b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410b8c:
    // 0x410b8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x410b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_410b90:
    // 0x410b90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410b90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410b94:
    // 0x410b94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x410b94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_410b98:
    // 0x410b98: 0x3e00008  jr          $ra
label_410b9c:
    if (ctx->pc == 0x410B9Cu) {
        ctx->pc = 0x410B9Cu;
            // 0x410b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x410BA0u;
        goto label_410ba0;
    }
    ctx->pc = 0x410B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410B98u;
            // 0x410b9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410BA0u;
label_410ba0:
    // 0x410ba0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x410ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_410ba4:
    // 0x410ba4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x410ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_410ba8:
    // 0x410ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410bac:
    // 0x410bac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410bb0:
    // 0x410bb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x410bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410bb4:
    // 0x410bb4: 0x12200019  beqz        $s1, . + 4 + (0x19 << 2)
label_410bb8:
    if (ctx->pc == 0x410BB8u) {
        ctx->pc = 0x410BB8u;
            // 0x410bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410BBCu;
        goto label_410bbc;
    }
    ctx->pc = 0x410BB4u;
    {
        const bool branch_taken_0x410bb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x410BB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410BB4u;
            // 0x410bb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410bb4) {
            ctx->pc = 0x410C1Cu;
            goto label_410c1c;
        }
    }
    ctx->pc = 0x410BBCu;
label_410bbc:
    // 0x410bbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x410bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_410bc0:
    // 0x410bc0: 0x2442aed0  addiu       $v0, $v0, -0x5130
    ctx->pc = 0x410bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946512));
label_410bc4:
    // 0x410bc4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x410bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_410bc8:
    // 0x410bc8: 0xc074a08  jal         func_1D2820
label_410bcc:
    if (ctx->pc == 0x410BCCu) {
        ctx->pc = 0x410BCCu;
            // 0x410bcc: 0x8e240164  lw          $a0, 0x164($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
        ctx->pc = 0x410BD0u;
        goto label_410bd0;
    }
    ctx->pc = 0x410BC8u;
    SET_GPR_U32(ctx, 31, 0x410BD0u);
    ctx->pc = 0x410BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410BC8u;
            // 0x410bcc: 0x8e240164  lw          $a0, 0x164($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410BD0u; }
        if (ctx->pc != 0x410BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410BD0u; }
        if (ctx->pc != 0x410BD0u) { return; }
    }
    ctx->pc = 0x410BD0u;
label_410bd0:
    // 0x410bd0: 0x26220160  addiu       $v0, $s1, 0x160
    ctx->pc = 0x410bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
label_410bd4:
    // 0x410bd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_410bd8:
    if (ctx->pc == 0x410BD8u) {
        ctx->pc = 0x410BDCu;
        goto label_410bdc;
    }
    ctx->pc = 0x410BD4u;
    {
        const bool branch_taken_0x410bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x410bd4) {
            ctx->pc = 0x410BE4u;
            goto label_410be4;
        }
    }
    ctx->pc = 0x410BDCu;
label_410bdc:
    // 0x410bdc: 0xc07507c  jal         func_1D41F0
label_410be0:
    if (ctx->pc == 0x410BE0u) {
        ctx->pc = 0x410BE0u;
            // 0x410be0: 0x8e240164  lw          $a0, 0x164($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
        ctx->pc = 0x410BE4u;
        goto label_410be4;
    }
    ctx->pc = 0x410BDCu;
    SET_GPR_U32(ctx, 31, 0x410BE4u);
    ctx->pc = 0x410BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410BDCu;
            // 0x410be0: 0x8e240164  lw          $a0, 0x164($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410BE4u; }
        if (ctx->pc != 0x410BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410BE4u; }
        if (ctx->pc != 0x410BE4u) { return; }
    }
    ctx->pc = 0x410BE4u;
label_410be4:
    // 0x410be4: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
label_410be8:
    if (ctx->pc == 0x410BE8u) {
        ctx->pc = 0x410BE8u;
            // 0x410be8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x410BECu;
        goto label_410bec;
    }
    ctx->pc = 0x410BE4u;
    {
        const bool branch_taken_0x410be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x410be4) {
            ctx->pc = 0x410BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410BE4u;
            // 0x410be8: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410C08u;
            goto label_410c08;
        }
    }
    ctx->pc = 0x410BECu;
label_410bec:
    // 0x410bec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x410becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_410bf0:
    // 0x410bf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410bf4:
    // 0x410bf4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x410bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_410bf8:
    // 0x410bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410bfc:
    // 0x410bfc: 0xc057a68  jal         func_15E9A0
label_410c00:
    if (ctx->pc == 0x410C00u) {
        ctx->pc = 0x410C00u;
            // 0x410c00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x410C04u;
        goto label_410c04;
    }
    ctx->pc = 0x410BFCu;
    SET_GPR_U32(ctx, 31, 0x410C04u);
    ctx->pc = 0x410C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410BFCu;
            // 0x410c00: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C04u; }
        if (ctx->pc != 0x410C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C04u; }
        if (ctx->pc != 0x410C04u) { return; }
    }
    ctx->pc = 0x410C04u;
label_410c04:
    // 0x410c04: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x410c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_410c08:
    // 0x410c08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x410c08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_410c0c:
    // 0x410c0c: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_410c10:
    if (ctx->pc == 0x410C10u) {
        ctx->pc = 0x410C10u;
            // 0x410c10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410C14u;
        goto label_410c14;
    }
    ctx->pc = 0x410C0Cu;
    {
        const bool branch_taken_0x410c0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x410c0c) {
            ctx->pc = 0x410C10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410C0Cu;
            // 0x410c10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410C20u;
            goto label_410c20;
        }
    }
    ctx->pc = 0x410C14u;
label_410c14:
    // 0x410c14: 0xc0400a8  jal         func_1002A0
label_410c18:
    if (ctx->pc == 0x410C18u) {
        ctx->pc = 0x410C18u;
            // 0x410c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410C1Cu;
        goto label_410c1c;
    }
    ctx->pc = 0x410C14u;
    SET_GPR_U32(ctx, 31, 0x410C1Cu);
    ctx->pc = 0x410C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410C14u;
            // 0x410c18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C1Cu; }
        if (ctx->pc != 0x410C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C1Cu; }
        if (ctx->pc != 0x410C1Cu) { return; }
    }
    ctx->pc = 0x410C1Cu;
label_410c1c:
    // 0x410c1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x410c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410c20:
    // 0x410c20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x410c20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_410c24:
    // 0x410c24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410c28:
    // 0x410c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x410c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_410c2c:
    // 0x410c2c: 0x3e00008  jr          $ra
label_410c30:
    if (ctx->pc == 0x410C30u) {
        ctx->pc = 0x410C30u;
            // 0x410c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x410C34u;
        goto label_410c34;
    }
    ctx->pc = 0x410C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410C2Cu;
            // 0x410c30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410C34u;
label_410c34:
    // 0x410c34: 0x0  nop
    ctx->pc = 0x410c34u;
    // NOP
label_410c38:
    // 0x410c38: 0x0  nop
    ctx->pc = 0x410c38u;
    // NOP
label_410c3c:
    // 0x410c3c: 0x0  nop
    ctx->pc = 0x410c3cu;
    // NOP
label_410c40:
    // 0x410c40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x410c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_410c44:
    // 0x410c44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x410c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_410c48:
    // 0x410c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x410c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_410c4c:
    // 0x410c4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x410c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_410c50:
    // 0x410c50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x410c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_410c54:
    // 0x410c54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x410c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_410c58:
    // 0x410c58: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x410c58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410c5c:
    // 0x410c5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410c60:
    // 0x410c60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410c64:
    // 0x410c64: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x410c64u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_410c68:
    // 0x410c68: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_410c6c:
    if (ctx->pc == 0x410C6Cu) {
        ctx->pc = 0x410C6Cu;
            // 0x410c6c: 0xc661017c  lwc1        $f1, 0x17C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x410C70u;
        goto label_410c70;
    }
    ctx->pc = 0x410C68u;
    {
        const bool branch_taken_0x410c68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x410c68) {
            ctx->pc = 0x410C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410C68u;
            // 0x410c6c: 0xc661017c  lwc1        $f1, 0x17C($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x410C78u;
            goto label_410c78;
        }
    }
    ctx->pc = 0x410C70u;
label_410c70:
    // 0x410c70: 0x1000003d  b           . + 4 + (0x3D << 2)
label_410c74:
    if (ctx->pc == 0x410C74u) {
        ctx->pc = 0x410C74u;
            // 0x410c74: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x410C78u;
        goto label_410c78;
    }
    ctx->pc = 0x410C70u;
    {
        const bool branch_taken_0x410c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x410C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410C70u;
            // 0x410c74: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410c70) {
            ctx->pc = 0x410D68u;
            goto label_410d68;
        }
    }
    ctx->pc = 0x410C78u;
label_410c78:
    // 0x410c78: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x410c78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_410c7c:
    // 0x410c7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x410c7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_410c80:
    // 0x410c80: 0x0  nop
    ctx->pc = 0x410c80u;
    // NOP
label_410c84:
    // 0x410c84: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x410c84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410c88:
    // 0x410c88: 0x45010036  bc1t        . + 4 + (0x36 << 2)
label_410c8c:
    if (ctx->pc == 0x410C8Cu) {
        ctx->pc = 0x410C90u;
        goto label_410c90;
    }
    ctx->pc = 0x410C88u;
    {
        const bool branch_taken_0x410c88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x410c88) {
            ctx->pc = 0x410D64u;
            goto label_410d64;
        }
    }
    ctx->pc = 0x410C90u;
label_410c90:
    // 0x410c90: 0xc05395c  jal         func_14E570
label_410c94:
    if (ctx->pc == 0x410C94u) {
        ctx->pc = 0x410C94u;
            // 0x410c94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x410C98u;
        goto label_410c98;
    }
    ctx->pc = 0x410C90u;
    SET_GPR_U32(ctx, 31, 0x410C98u);
    ctx->pc = 0x410C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410C90u;
            // 0x410c94: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C98u; }
        if (ctx->pc != 0x410C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410C98u; }
        if (ctx->pc != 0x410C98u) { return; }
    }
    ctx->pc = 0x410C98u;
label_410c98:
    // 0x410c98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x410c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_410c9c:
    // 0x410c9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x410c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_410ca0:
    // 0x410ca0: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x410ca0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_410ca4:
    // 0x410ca4: 0x8c51e370  lw          $s1, -0x1C90($v0)
    ctx->pc = 0x410ca4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_410ca8:
    // 0x410ca8: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x410ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_410cac:
    // 0x410cac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x410cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_410cb0:
    // 0x410cb0: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x410cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_410cb4:
    // 0x410cb4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x410cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_410cb8:
    // 0x410cb8: 0x8c640130  lw          $a0, 0x130($v1)
    ctx->pc = 0x410cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_410cbc:
    // 0x410cbc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x410cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_410cc0:
    // 0x410cc0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x410cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_410cc4:
    // 0x410cc4: 0x4a180  sll         $s4, $a0, 6
    ctx->pc = 0x410cc4u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
label_410cc8:
    // 0x410cc8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x410cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_410ccc:
    // 0x410ccc: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x410cccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_410cd0:
    // 0x410cd0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x410cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_410cd4:
    // 0x410cd4: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x410cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_410cd8:
    // 0x410cd8: 0xc04ce80  jal         func_133A00
label_410cdc:
    if (ctx->pc == 0x410CDCu) {
        ctx->pc = 0x410CDCu;
            // 0x410cdc: 0x26050200  addiu       $a1, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->pc = 0x410CE0u;
        goto label_410ce0;
    }
    ctx->pc = 0x410CD8u;
    SET_GPR_U32(ctx, 31, 0x410CE0u);
    ctx->pc = 0x410CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410CD8u;
            // 0x410cdc: 0x26050200  addiu       $a1, $s0, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410CE0u; }
        if (ctx->pc != 0x410CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410CE0u; }
        if (ctx->pc != 0x410CE0u) { return; }
    }
    ctx->pc = 0x410CE0u;
label_410ce0:
    // 0x410ce0: 0x2741021  addu        $v0, $s3, $s4
    ctx->pc = 0x410ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
label_410ce4:
    // 0x410ce4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x410ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_410ce8:
    // 0x410ce8: 0x24460060  addiu       $a2, $v0, 0x60
    ctx->pc = 0x410ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_410cec:
    // 0x410cec: 0xc04cd60  jal         func_133580
label_410cf0:
    if (ctx->pc == 0x410CF0u) {
        ctx->pc = 0x410CF0u;
            // 0x410cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410CF4u;
        goto label_410cf4;
    }
    ctx->pc = 0x410CECu;
    SET_GPR_U32(ctx, 31, 0x410CF4u);
    ctx->pc = 0x410CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410CECu;
            // 0x410cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410CF4u; }
        if (ctx->pc != 0x410CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410CF4u; }
        if (ctx->pc != 0x410CF4u) { return; }
    }
    ctx->pc = 0x410CF4u;
label_410cf4:
    // 0x410cf4: 0x8e620160  lw          $v0, 0x160($s3)
    ctx->pc = 0x410cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_410cf8:
    // 0x410cf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x410cf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410cfc:
    // 0x410cfc: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x410cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_410d00:
    // 0x410d00: 0xc04e4a4  jal         func_139290
label_410d04:
    if (ctx->pc == 0x410D04u) {
        ctx->pc = 0x410D04u;
            // 0x410d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410D08u;
        goto label_410d08;
    }
    ctx->pc = 0x410D00u;
    SET_GPR_U32(ctx, 31, 0x410D08u);
    ctx->pc = 0x410D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D00u;
            // 0x410d04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D08u; }
        if (ctx->pc != 0x410D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D08u; }
        if (ctx->pc != 0x410D08u) { return; }
    }
    ctx->pc = 0x410D08u;
label_410d08:
    // 0x410d08: 0xc04e738  jal         func_139CE0
label_410d0c:
    if (ctx->pc == 0x410D0Cu) {
        ctx->pc = 0x410D0Cu;
            // 0x410d0c: 0x8e640164  lw          $a0, 0x164($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
        ctx->pc = 0x410D10u;
        goto label_410d10;
    }
    ctx->pc = 0x410D08u;
    SET_GPR_U32(ctx, 31, 0x410D10u);
    ctx->pc = 0x410D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D08u;
            // 0x410d0c: 0x8e640164  lw          $a0, 0x164($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 356)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D10u; }
        if (ctx->pc != 0x410D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D10u; }
        if (ctx->pc != 0x410D10u) { return; }
    }
    ctx->pc = 0x410D10u;
label_410d10:
    // 0x410d10: 0xc66c017c  lwc1        $f12, 0x17C($s3)
    ctx->pc = 0x410d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_410d14:
    // 0x410d14: 0x8e650160  lw          $a1, 0x160($s3)
    ctx->pc = 0x410d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_410d18:
    // 0x410d18: 0x8e660174  lw          $a2, 0x174($s3)
    ctx->pc = 0x410d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 372)));
label_410d1c:
    // 0x410d1c: 0xc054bbc  jal         func_152EF0
label_410d20:
    if (ctx->pc == 0x410D20u) {
        ctx->pc = 0x410D20u;
            // 0x410d20: 0x8e640170  lw          $a0, 0x170($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
        ctx->pc = 0x410D24u;
        goto label_410d24;
    }
    ctx->pc = 0x410D1Cu;
    SET_GPR_U32(ctx, 31, 0x410D24u);
    ctx->pc = 0x410D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D1Cu;
            // 0x410d20: 0x8e640170  lw          $a0, 0x170($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D24u; }
        if (ctx->pc != 0x410D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D24u; }
        if (ctx->pc != 0x410D24u) { return; }
    }
    ctx->pc = 0x410D24u;
label_410d24:
    // 0x410d24: 0x8e660160  lw          $a2, 0x160($s3)
    ctx->pc = 0x410d24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 352)));
label_410d28:
    // 0x410d28: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x410d28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_410d2c:
    // 0x410d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x410d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410d30:
    // 0x410d30: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x410d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410d34:
    // 0x410d34: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x410d34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410d38:
    // 0x410d38: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x410d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_410d3c:
    // 0x410d3c: 0xc04cfcc  jal         func_133F30
label_410d40:
    if (ctx->pc == 0x410D40u) {
        ctx->pc = 0x410D40u;
            // 0x410d40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410D44u;
        goto label_410d44;
    }
    ctx->pc = 0x410D3Cu;
    SET_GPR_U32(ctx, 31, 0x410D44u);
    ctx->pc = 0x410D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D3Cu;
            // 0x410d40: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D44u; }
        if (ctx->pc != 0x410D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D44u; }
        if (ctx->pc != 0x410D44u) { return; }
    }
    ctx->pc = 0x410D44u;
label_410d44:
    // 0x410d44: 0x8e640170  lw          $a0, 0x170($s3)
    ctx->pc = 0x410d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
label_410d48:
    // 0x410d48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x410d48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_410d4c:
    // 0x410d4c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410d4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410d50:
    // 0x410d50: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x410d50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_410d54:
    // 0x410d54: 0xc054c2c  jal         func_1530B0
label_410d58:
    if (ctx->pc == 0x410D58u) {
        ctx->pc = 0x410D58u;
            // 0x410d58: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x410D5Cu;
        goto label_410d5c;
    }
    ctx->pc = 0x410D54u;
    SET_GPR_U32(ctx, 31, 0x410D5Cu);
    ctx->pc = 0x410D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D54u;
            // 0x410d58: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D5Cu; }
        if (ctx->pc != 0x410D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D5Cu; }
        if (ctx->pc != 0x410D5Cu) { return; }
    }
    ctx->pc = 0x410D5Cu;
label_410d5c:
    // 0x410d5c: 0xc05395c  jal         func_14E570
label_410d60:
    if (ctx->pc == 0x410D60u) {
        ctx->pc = 0x410D60u;
            // 0x410d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410D64u;
        goto label_410d64;
    }
    ctx->pc = 0x410D5Cu;
    SET_GPR_U32(ctx, 31, 0x410D64u);
    ctx->pc = 0x410D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410D5Cu;
            // 0x410d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E570u;
    if (runtime->hasFunction(0x14E570u)) {
        auto targetFn = runtime->lookupFunction(0x14E570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D64u; }
        if (ctx->pc != 0x410D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E570_0x14e570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410D64u; }
        if (ctx->pc != 0x410D64u) { return; }
    }
    ctx->pc = 0x410D64u;
label_410d64:
    // 0x410d64: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x410d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_410d68:
    // 0x410d68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x410d68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410d6c:
    // 0x410d6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x410d6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_410d70:
    // 0x410d70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x410d70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410d74:
    // 0x410d74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x410d74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410d78:
    // 0x410d78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x410d78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_410d7c:
    // 0x410d7c: 0x3e00008  jr          $ra
label_410d80:
    if (ctx->pc == 0x410D80u) {
        ctx->pc = 0x410D80u;
            // 0x410d80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x410D84u;
        goto label_410d84;
    }
    ctx->pc = 0x410D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x410D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410D7Cu;
            // 0x410d80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x410D84u;
label_410d84:
    // 0x410d84: 0x0  nop
    ctx->pc = 0x410d84u;
    // NOP
label_410d88:
    // 0x410d88: 0x0  nop
    ctx->pc = 0x410d88u;
    // NOP
label_410d8c:
    // 0x410d8c: 0x0  nop
    ctx->pc = 0x410d8cu;
    // NOP
label_410d90:
    // 0x410d90: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x410d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_410d94:
    // 0x410d94: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x410d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_410d98:
    // 0x410d98: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x410d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_410d9c:
    // 0x410d9c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x410d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_410da0:
    // 0x410da0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x410da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_410da4:
    // 0x410da4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x410da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_410da8:
    // 0x410da8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x410da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_410dac:
    // 0x410dac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x410dacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_410db0:
    // 0x410db0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x410db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410db4:
    // 0x410db4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x410db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_410db8:
    // 0x410db8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x410db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_410dbc:
    // 0x410dbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x410dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_410dc0:
    // 0x410dc0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x410dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_410dc4:
    // 0x410dc4: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x410dc4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_410dc8:
    // 0x410dc8: 0x10830024  beq         $a0, $v1, . + 4 + (0x24 << 2)
label_410dcc:
    if (ctx->pc == 0x410DCCu) {
        ctx->pc = 0x410DD0u;
        goto label_410dd0;
    }
    ctx->pc = 0x410DC8u;
    {
        const bool branch_taken_0x410dc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x410dc8) {
            ctx->pc = 0x410E5Cu;
            goto label_410e5c;
        }
    }
    ctx->pc = 0x410DD0u;
label_410dd0:
    // 0x410dd0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x410dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_410dd4:
    // 0x410dd4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
label_410dd8:
    if (ctx->pc == 0x410DD8u) {
        ctx->pc = 0x410DD8u;
            // 0x410dd8: 0x8ea40180  lw          $a0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->pc = 0x410DDCu;
        goto label_410ddc;
    }
    ctx->pc = 0x410DD4u;
    {
        const bool branch_taken_0x410dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x410dd4) {
            ctx->pc = 0x410DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410DD4u;
            // 0x410dd8: 0x8ea40180  lw          $a0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410DE4u;
            goto label_410de4;
        }
    }
    ctx->pc = 0x410DDCu;
label_410ddc:
    // 0x410ddc: 0x1000017a  b           . + 4 + (0x17A << 2)
label_410de0:
    if (ctx->pc == 0x410DE0u) {
        ctx->pc = 0x410DE4u;
        goto label_410de4;
    }
    ctx->pc = 0x410DDCu;
    {
        const bool branch_taken_0x410ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410ddc) {
            ctx->pc = 0x4113C8u;
            goto label_4113c8;
        }
    }
    ctx->pc = 0x410DE4u;
label_410de4:
    // 0x410de4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x410de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410de8:
    // 0x410de8: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x410de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
label_410dec:
    // 0x410dec: 0x10830176  beq         $a0, $v1, . + 4 + (0x176 << 2)
label_410df0:
    if (ctx->pc == 0x410DF0u) {
        ctx->pc = 0x410DF4u;
        goto label_410df4;
    }
    ctx->pc = 0x410DECu;
    {
        const bool branch_taken_0x410dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x410dec) {
            ctx->pc = 0x4113C8u;
            goto label_4113c8;
        }
    }
    ctx->pc = 0x410DF4u;
label_410df4:
    // 0x410df4: 0x8ea40164  lw          $a0, 0x164($s5)
    ctx->pc = 0x410df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 356)));
label_410df8:
    // 0x410df8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_410dfc:
    if (ctx->pc == 0x410DFCu) {
        ctx->pc = 0x410DFCu;
            // 0x410dfc: 0x8ea30180  lw          $v1, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->pc = 0x410E00u;
        goto label_410e00;
    }
    ctx->pc = 0x410DF8u;
    {
        const bool branch_taken_0x410df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x410df8) {
            ctx->pc = 0x410DFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410DF8u;
            // 0x410dfc: 0x8ea30180  lw          $v1, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410E0Cu;
            goto label_410e0c;
        }
    }
    ctx->pc = 0x410E00u;
label_410e00:
    // 0x410e00: 0xc074a24  jal         func_1D2890
label_410e04:
    if (ctx->pc == 0x410E04u) {
        ctx->pc = 0x410E08u;
        goto label_410e08;
    }
    ctx->pc = 0x410E00u;
    SET_GPR_U32(ctx, 31, 0x410E08u);
    ctx->pc = 0x1D2890u;
    if (runtime->hasFunction(0x1D2890u)) {
        auto targetFn = runtime->lookupFunction(0x1D2890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E08u; }
        if (ctx->pc != 0x410E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2890_0x1d2890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E08u; }
        if (ctx->pc != 0x410E08u) { return; }
    }
    ctx->pc = 0x410E08u;
label_410e08:
    // 0x410e08: 0x8ea30180  lw          $v1, 0x180($s5)
    ctx->pc = 0x410e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_410e0c:
    // 0x410e0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x410e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_410e10:
    // 0x410e10: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x410e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_410e14:
    // 0x410e14: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x410e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_410e18:
    // 0x410e18: 0x8c63077c  lw          $v1, 0x77C($v1)
    ctx->pc = 0x410e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1916)));
label_410e1c:
    // 0x410e1c: 0x2466ffff  addiu       $a2, $v1, -0x1
    ctx->pc = 0x410e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_410e20:
    // 0x410e20: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x410e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_410e24:
    // 0x410e24: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x410e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_410e28:
    // 0x410e28: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x410e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_410e2c:
    // 0x410e2c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x410e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_410e30:
    // 0x410e30: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x410e30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_410e34:
    // 0x410e34: 0xa06411a9  sb          $a0, 0x11A9($v1)
    ctx->pc = 0x410e34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4521), (uint8_t)GPR_U32(ctx, 4));
label_410e38:
    // 0x410e38: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x410e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_410e3c:
    // 0x410e3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_410e40:
    if (ctx->pc == 0x410E40u) {
        ctx->pc = 0x410E44u;
        goto label_410e44;
    }
    ctx->pc = 0x410E3Cu;
    {
        const bool branch_taken_0x410e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410e3c) {
            ctx->pc = 0x410E28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_410e28;
        }
    }
    ctx->pc = 0x410E44u;
label_410e44:
    // 0x410e44: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x410e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_410e48:
    // 0x410e48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x410e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_410e4c:
    // 0x410e4c: 0x320f809  jalr        $t9
label_410e50:
    if (ctx->pc == 0x410E50u) {
        ctx->pc = 0x410E50u;
            // 0x410e50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410E54u;
        goto label_410e54;
    }
    ctx->pc = 0x410E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x410E54u);
        ctx->pc = 0x410E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410E4Cu;
            // 0x410e50: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x410E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x410E54u; }
            if (ctx->pc != 0x410E54u) { return; }
        }
        }
    }
    ctx->pc = 0x410E54u;
label_410e54:
    // 0x410e54: 0x1000015c  b           . + 4 + (0x15C << 2)
label_410e58:
    if (ctx->pc == 0x410E58u) {
        ctx->pc = 0x410E5Cu;
        goto label_410e5c;
    }
    ctx->pc = 0x410E54u;
    {
        const bool branch_taken_0x410e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410e54) {
            ctx->pc = 0x4113C8u;
            goto label_4113c8;
        }
    }
    ctx->pc = 0x410E5Cu;
label_410e5c:
    // 0x410e5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x410e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_410e60:
    // 0x410e60: 0x8ea30180  lw          $v1, 0x180($s5)
    ctx->pc = 0x410e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_410e64:
    // 0x410e64: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x410e64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_410e68:
    // 0x410e68: 0x8c7407b8  lw          $s4, 0x7B8($v1)
    ctx->pc = 0x410e68u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1976)));
label_410e6c:
    // 0x410e6c: 0x805e007a  lb          $fp, 0x7A($v0)
    ctx->pc = 0x410e6cu;
    SET_GPR_S32(ctx, 30, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_410e70:
    // 0x410e70: 0xc04ab66  jal         func_12AD98
label_410e74:
    if (ctx->pc == 0x410E74u) {
        ctx->pc = 0x410E74u;
            // 0x410e74: 0x96b00194  lhu         $s0, 0x194($s5) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 404)));
        ctx->pc = 0x410E78u;
        goto label_410e78;
    }
    ctx->pc = 0x410E70u;
    SET_GPR_U32(ctx, 31, 0x410E78u);
    ctx->pc = 0x410E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410E70u;
            // 0x410e74: 0x96b00194  lhu         $s0, 0x194($s5) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E78u; }
        if (ctx->pc != 0x410E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E78u; }
        if (ctx->pc != 0x410E78u) { return; }
    }
    ctx->pc = 0x410E78u;
label_410e78:
    // 0x410e78: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x410e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_410e7c:
    // 0x410e7c: 0xc04ab66  jal         func_12AD98
label_410e80:
    if (ctx->pc == 0x410E80u) {
        ctx->pc = 0x410E80u;
            // 0x410e80: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x410E84u;
        goto label_410e84;
    }
    ctx->pc = 0x410E7Cu;
    SET_GPR_U32(ctx, 31, 0x410E84u);
    ctx->pc = 0x410E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410E7Cu;
            // 0x410e80: 0x28f40  sll         $s1, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E84u; }
        if (ctx->pc != 0x410E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410E84u; }
        if (ctx->pc != 0x410E84u) { return; }
    }
    ctx->pc = 0x410E84u;
label_410e84:
    // 0x410e84: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x410e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_410e88:
    // 0x410e88: 0x50001b  divu        $zero, $v0, $s0
    ctx->pc = 0x410e88u;
    { uint32_t divisor = GPR_U32(ctx, 16); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_410e8c:
    // 0x410e8c: 0x1010  mfhi        $v0
    ctx->pc = 0x410e8cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_410e90:
    // 0x410e90: 0x54400046  bnel        $v0, $zero, . + 4 + (0x46 << 2)
label_410e94:
    if (ctx->pc == 0x410E94u) {
        ctx->pc = 0x410E94u;
            // 0x410e94: 0xc6a1017c  lwc1        $f1, 0x17C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x410E98u;
        goto label_410e98;
    }
    ctx->pc = 0x410E90u;
    {
        const bool branch_taken_0x410e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410e90) {
            ctx->pc = 0x410E94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410E90u;
            // 0x410e94: 0xc6a1017c  lwc1        $f1, 0x17C($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x410FACu;
            goto label_410fac;
        }
    }
    ctx->pc = 0x410E98u;
label_410e98:
    // 0x410e98: 0xc04ab66  jal         func_12AD98
label_410e9c:
    if (ctx->pc == 0x410E9Cu) {
        ctx->pc = 0x410E9Cu;
            // 0x410e9c: 0xaea0017c  sw          $zero, 0x17C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 0));
        ctx->pc = 0x410EA0u;
        goto label_410ea0;
    }
    ctx->pc = 0x410E98u;
    SET_GPR_U32(ctx, 31, 0x410EA0u);
    ctx->pc = 0x410E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410E98u;
            // 0x410e9c: 0xaea0017c  sw          $zero, 0x17C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EA0u; }
        if (ctx->pc != 0x410EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EA0u; }
        if (ctx->pc != 0x410EA0u) { return; }
    }
    ctx->pc = 0x410EA0u;
label_410ea0:
    // 0x410ea0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x410ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_410ea4:
    // 0x410ea4: 0xc04ab66  jal         func_12AD98
label_410ea8:
    if (ctx->pc == 0x410EA8u) {
        ctx->pc = 0x410EA8u;
            // 0x410ea8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x410EACu;
        goto label_410eac;
    }
    ctx->pc = 0x410EA4u;
    SET_GPR_U32(ctx, 31, 0x410EACu);
    ctx->pc = 0x410EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410EA4u;
            // 0x410ea8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EACu; }
        if (ctx->pc != 0x410EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EACu; }
        if (ctx->pc != 0x410EACu) { return; }
    }
    ctx->pc = 0x410EACu;
label_410eac:
    // 0x410eac: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x410eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_410eb0:
    // 0x410eb0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x410eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_410eb4:
    // 0x410eb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_410eb8:
    if (ctx->pc == 0x410EB8u) {
        ctx->pc = 0x410EBCu;
        goto label_410ebc;
    }
    ctx->pc = 0x410EB4u;
    {
        const bool branch_taken_0x410eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410eb4) {
            ctx->pc = 0x410EC8u;
            goto label_410ec8;
        }
    }
    ctx->pc = 0x410EBCu;
label_410ebc:
    // 0x410ebc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x410ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_410ec0:
    // 0x410ec0: 0xc073234  jal         func_1CC8D0
label_410ec4:
    if (ctx->pc == 0x410EC4u) {
        ctx->pc = 0x410EC4u;
            // 0x410ec4: 0x344412a9  ori         $a0, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->pc = 0x410EC8u;
        goto label_410ec8;
    }
    ctx->pc = 0x410EC0u;
    SET_GPR_U32(ctx, 31, 0x410EC8u);
    ctx->pc = 0x410EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410EC0u;
            // 0x410ec4: 0x344412a9  ori         $a0, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EC8u; }
        if (ctx->pc != 0x410EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EC8u; }
        if (ctx->pc != 0x410EC8u) { return; }
    }
    ctx->pc = 0x410EC8u;
label_410ec8:
    // 0x410ec8: 0xc04ab66  jal         func_12AD98
label_410ecc:
    if (ctx->pc == 0x410ECCu) {
        ctx->pc = 0x410ED0u;
        goto label_410ed0;
    }
    ctx->pc = 0x410EC8u;
    SET_GPR_U32(ctx, 31, 0x410ED0u);
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410ED0u; }
        if (ctx->pc != 0x410ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410ED0u; }
        if (ctx->pc != 0x410ED0u) { return; }
    }
    ctx->pc = 0x410ED0u;
label_410ed0:
    // 0x410ed0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x410ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_410ed4:
    // 0x410ed4: 0xc04ab66  jal         func_12AD98
label_410ed8:
    if (ctx->pc == 0x410ED8u) {
        ctx->pc = 0x410ED8u;
            // 0x410ed8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->pc = 0x410EDCu;
        goto label_410edc;
    }
    ctx->pc = 0x410ED4u;
    SET_GPR_U32(ctx, 31, 0x410EDCu);
    ctx->pc = 0x410ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410ED4u;
            // 0x410ed8: 0x28740  sll         $s0, $v0, 29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12AD98u;
    if (runtime->hasFunction(0x12AD98u)) {
        auto targetFn = runtime->lookupFunction(0x12AD98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EDCu; }
        if (ctx->pc != 0x410EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AD98_0x12ad98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410EDCu; }
        if (ctx->pc != 0x410EDCu) { return; }
    }
    ctx->pc = 0x410EDCu;
label_410edc:
    // 0x410edc: 0x501825  or          $v1, $v0, $s0
    ctx->pc = 0x410edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
label_410ee0:
    // 0x410ee0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x410ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_410ee4:
    // 0x410ee4: 0x62001b  divu        $zero, $v1, $v0
    ctx->pc = 0x410ee4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_410ee8:
    // 0x410ee8: 0x1010  mfhi        $v0
    ctx->pc = 0x410ee8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_410eec:
    // 0x410eec: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_410ef0:
    if (ctx->pc == 0x410EF0u) {
        ctx->pc = 0x410EF0u;
            // 0x410ef0: 0x8ea20180  lw          $v0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->pc = 0x410EF4u;
        goto label_410ef4;
    }
    ctx->pc = 0x410EECu;
    {
        const bool branch_taken_0x410eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410eec) {
            ctx->pc = 0x410EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x410EECu;
            // 0x410ef0: 0x8ea20180  lw          $v0, 0x180($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x410F04u;
            goto label_410f04;
        }
    }
    ctx->pc = 0x410EF4u;
label_410ef4:
    // 0x410ef4: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x410ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_410ef8:
    // 0x410ef8: 0xc073234  jal         func_1CC8D0
label_410efc:
    if (ctx->pc == 0x410EFCu) {
        ctx->pc = 0x410EFCu;
            // 0x410efc: 0x344412a9  ori         $a0, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->pc = 0x410F00u;
        goto label_410f00;
    }
    ctx->pc = 0x410EF8u;
    SET_GPR_U32(ctx, 31, 0x410F00u);
    ctx->pc = 0x410EFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410EF8u;
            // 0x410efc: 0x344412a9  ori         $a0, $v0, 0x12A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410F00u; }
        if (ctx->pc != 0x410F00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410F00u; }
        if (ctx->pc != 0x410F00u) { return; }
    }
    ctx->pc = 0x410F00u;
label_410f00:
    // 0x410f00: 0x8ea20180  lw          $v0, 0x180($s5)
    ctx->pc = 0x410f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_410f04:
    // 0x410f04: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x410f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_410f08:
    // 0x410f08: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x410f08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_410f0c:
    // 0x410f0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x410f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_410f10:
    // 0x410f10: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x410f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_410f14:
    // 0x410f14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x410f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_410f18:
    // 0x410f18: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x410f18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_410f1c:
    // 0x410f1c: 0x320f809  jalr        $t9
label_410f20:
    if (ctx->pc == 0x410F20u) {
        ctx->pc = 0x410F20u;
            // 0x410f20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410F24u;
        goto label_410f24;
    }
    ctx->pc = 0x410F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x410F24u);
        ctx->pc = 0x410F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410F1Cu;
            // 0x410f20: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x410F24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x410F24u; }
            if (ctx->pc != 0x410F24u) { return; }
        }
        }
    }
    ctx->pc = 0x410F24u;
label_410f24:
    // 0x410f24: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x410f24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_410f28:
    // 0x410f28: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x410f28u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_410f2c:
    // 0x410f2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x410f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_410f30:
    // 0x410f30: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x410f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_410f34:
    // 0x410f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x410f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_410f38:
    // 0x410f38: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x410f38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_410f3c:
    // 0x410f3c: 0x8e220e34  lw          $v0, 0xE34($s1)
    ctx->pc = 0x410f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_410f40:
    // 0x410f40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_410f44:
    if (ctx->pc == 0x410F44u) {
        ctx->pc = 0x410F44u;
            // 0x410f44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410F48u;
        goto label_410f48;
    }
    ctx->pc = 0x410F40u;
    {
        const bool branch_taken_0x410f40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x410F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410F40u;
            // 0x410f44: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f40) {
            ctx->pc = 0x410F58u;
            goto label_410f58;
        }
    }
    ctx->pc = 0x410F48u;
label_410f48:
    // 0x410f48: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x410f48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_410f4c:
    // 0x410f4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_410f50:
    if (ctx->pc == 0x410F50u) {
        ctx->pc = 0x410F54u;
        goto label_410f54;
    }
    ctx->pc = 0x410F4Cu;
    {
        const bool branch_taken_0x410f4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x410f4c) {
            ctx->pc = 0x410F58u;
            goto label_410f58;
        }
    }
    ctx->pc = 0x410F54u;
label_410f54:
    // 0x410f54: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x410f54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_410f58:
    // 0x410f58: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_410f5c:
    if (ctx->pc == 0x410F5Cu) {
        ctx->pc = 0x410F60u;
        goto label_410f60;
    }
    ctx->pc = 0x410F58u;
    {
        const bool branch_taken_0x410f58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x410f58) {
            ctx->pc = 0x410F78u;
            goto label_410f78;
        }
    }
    ctx->pc = 0x410F60u;
label_410f60:
    // 0x410f60: 0xc075eb4  jal         func_1D7AD0
label_410f64:
    if (ctx->pc == 0x410F64u) {
        ctx->pc = 0x410F64u;
            // 0x410f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x410F68u;
        goto label_410f68;
    }
    ctx->pc = 0x410F60u;
    SET_GPR_U32(ctx, 31, 0x410F68u);
    ctx->pc = 0x410F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x410F60u;
            // 0x410f64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410F68u; }
        if (ctx->pc != 0x410F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x410F68u; }
        if (ctx->pc != 0x410F68u) { return; }
    }
    ctx->pc = 0x410F68u;
label_410f68:
    // 0x410f68: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_410f6c:
    if (ctx->pc == 0x410F6Cu) {
        ctx->pc = 0x410F70u;
        goto label_410f70;
    }
    ctx->pc = 0x410F68u;
    {
        const bool branch_taken_0x410f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x410f68) {
            ctx->pc = 0x410F78u;
            goto label_410f78;
        }
    }
    ctx->pc = 0x410F70u;
label_410f70:
    // 0x410f70: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x410f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410f74:
    // 0x410f74: 0x0  nop
    ctx->pc = 0x410f74u;
    // NOP
label_410f78:
    // 0x410f78: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_410f7c:
    if (ctx->pc == 0x410F7Cu) {
        ctx->pc = 0x410F80u;
        goto label_410f80;
    }
    ctx->pc = 0x410F78u;
    {
        const bool branch_taken_0x410f78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x410f78) {
            ctx->pc = 0x410F98u;
            goto label_410f98;
        }
    }
    ctx->pc = 0x410F80u;
label_410f80:
    // 0x410f80: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x410f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_410f84:
    // 0x410f84: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x410f84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_410f88:
    // 0x410f88: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x410f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_410f8c:
    // 0x410f8c: 0x320f809  jalr        $t9
label_410f90:
    if (ctx->pc == 0x410F90u) {
        ctx->pc = 0x410F90u;
            // 0x410f90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x410F94u;
        goto label_410f94;
    }
    ctx->pc = 0x410F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x410F94u);
        ctx->pc = 0x410F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410F8Cu;
            // 0x410f90: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x410F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x410F94u; }
            if (ctx->pc != 0x410F94u) { return; }
        }
        }
    }
    ctx->pc = 0x410F94u;
label_410f94:
    // 0x410f94: 0x0  nop
    ctx->pc = 0x410f94u;
    // NOP
label_410f98:
    // 0x410f98: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x410f98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410f9c:
    // 0x410f9c: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
label_410fa0:
    if (ctx->pc == 0x410FA0u) {
        ctx->pc = 0x410FA0u;
            // 0x410fa0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x410FA4u;
        goto label_410fa4;
    }
    ctx->pc = 0x410F9Cu;
    {
        const bool branch_taken_0x410f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x410FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x410F9Cu;
            // 0x410fa0: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410f9c) {
            ctx->pc = 0x410F0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_410f0c;
        }
    }
    ctx->pc = 0x410FA4u;
label_410fa4:
    // 0x410fa4: 0x10000013  b           . + 4 + (0x13 << 2)
label_410fa8:
    if (ctx->pc == 0x410FA8u) {
        ctx->pc = 0x410FACu;
        goto label_410fac;
    }
    ctx->pc = 0x410FA4u;
    {
        const bool branch_taken_0x410fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x410fa4) {
            ctx->pc = 0x410FF4u;
            goto label_410ff4;
        }
    }
    ctx->pc = 0x410FACu;
label_410fac:
    // 0x410fac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x410facu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_410fb0:
    // 0x410fb0: 0x0  nop
    ctx->pc = 0x410fb0u;
    // NOP
label_410fb4:
    // 0x410fb4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x410fb4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410fb8:
    // 0x410fb8: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_410fbc:
    if (ctx->pc == 0x410FBCu) {
        ctx->pc = 0x410FC0u;
        goto label_410fc0;
    }
    ctx->pc = 0x410FB8u;
    {
        const bool branch_taken_0x410fb8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x410fb8) {
            ctx->pc = 0x410FF4u;
            goto label_410ff4;
        }
    }
    ctx->pc = 0x410FC0u;
label_410fc0:
    // 0x410fc0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x410fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_410fc4:
    // 0x410fc4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x410fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_410fc8:
    // 0x410fc8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x410fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410fcc:
    // 0x410fcc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x410fccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_410fd0:
    // 0x410fd0: 0xe6a0017c  swc1        $f0, 0x17C($s5)
    ctx->pc = 0x410fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 380), bits); }
label_410fd4:
    // 0x410fd4: 0x8ea20174  lw          $v0, 0x174($s5)
    ctx->pc = 0x410fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 372)));
label_410fd8:
    // 0x410fd8: 0xc6a0017c  lwc1        $f0, 0x17C($s5)
    ctx->pc = 0x410fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_410fdc:
    // 0x410fdc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x410fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_410fe0:
    // 0x410fe0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x410fe0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_410fe4:
    // 0x410fe4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_410fe8:
    if (ctx->pc == 0x410FE8u) {
        ctx->pc = 0x410FECu;
        goto label_410fec;
    }
    ctx->pc = 0x410FE4u;
    {
        const bool branch_taken_0x410fe4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x410fe4) {
            ctx->pc = 0x410FF4u;
            goto label_410ff4;
        }
    }
    ctx->pc = 0x410FECu;
label_410fec:
    // 0x410fec: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x410fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_410ff0:
    // 0x410ff0: 0xaea2017c  sw          $v0, 0x17C($s5)
    ctx->pc = 0x410ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 2));
label_410ff4:
    // 0x410ff4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x410ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_410ff8:
    // 0x410ff8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x410ff8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410ffc:
    // 0x410ffc: 0x8442c1b2  lh          $v0, -0x3E4E($v0)
    ctx->pc = 0x410ffcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951346)));
label_411000:
    // 0x411000: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x411000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_411004:
    // 0x411004: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x411004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_411008:
    // 0x411008: 0x8442c1b0  lh          $v0, -0x3E50($v0)
    ctx->pc = 0x411008u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294951344)));
label_41100c:
    // 0x41100c: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x41100cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
label_411010:
    // 0x411010: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x411010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_411014:
    // 0x411014: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x411014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_411018:
    // 0x411018: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x411018u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41101c:
    // 0x41101c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x41101cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_411020:
    // 0x411020: 0x320f809  jalr        $t9
label_411024:
    if (ctx->pc == 0x411024u) {
        ctx->pc = 0x411024u;
            // 0x411024: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411028u;
        goto label_411028;
    }
    ctx->pc = 0x411020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411028u);
        ctx->pc = 0x411024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411020u;
            // 0x411024: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x411028u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411028u; }
            if (ctx->pc != 0x411028u) { return; }
        }
        }
    }
    ctx->pc = 0x411028u;
label_411028:
    // 0x411028: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x411028u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41102c:
    // 0x41102c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x41102cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_411030:
    // 0x411030: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x411030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_411034:
    // 0x411034: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x411034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_411038:
    // 0x411038: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x411038u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_41103c:
    // 0x41103c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x41103cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_411040:
    // 0x411040: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x411040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_411044:
    // 0x411044: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x411044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_411048:
    // 0x411048: 0x24730184  addiu       $s3, $v1, 0x184
    ctx->pc = 0x411048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 388));
label_41104c:
    // 0x41104c: 0x8c970004  lw          $s7, 0x4($a0)
    ctx->pc = 0x41104cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_411050:
    // 0x411050: 0x2901821  addu        $v1, $s4, $s0
    ctx->pc = 0x411050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_411054:
    // 0x411054: 0x8ea50190  lw          $a1, 0x190($s5)
    ctx->pc = 0x411054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 400)));
label_411058:
    // 0x411058: 0x90640054  lbu         $a0, 0x54($v1)
    ctx->pc = 0x411058u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_41105c:
    // 0x41105c: 0x2c810003  sltiu       $at, $a0, 0x3
    ctx->pc = 0x41105cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_411060:
    // 0x411060: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_411064:
    if (ctx->pc == 0x411064u) {
        ctx->pc = 0x411064u;
            // 0x411064: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->pc = 0x411068u;
        goto label_411068;
    }
    ctx->pc = 0x411060u;
    {
        const bool branch_taken_0x411060 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x411064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411060u;
            // 0x411064: 0xa61821  addu        $v1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x411060) {
            ctx->pc = 0x411070u;
            goto label_411070;
        }
    }
    ctx->pc = 0x411068u;
label_411068:
    // 0x411068: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x411068u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_41106c:
    // 0x41106c: 0x0  nop
    ctx->pc = 0x41106cu;
    // NOP
label_411070:
    // 0x411070: 0x92650001  lbu         $a1, 0x1($s3)
    ctx->pc = 0x411070u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_411074:
    // 0x411074: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x411074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_411078:
    // 0x411078: 0x10a40087  beq         $a1, $a0, . + 4 + (0x87 << 2)
label_41107c:
    if (ctx->pc == 0x41107Cu) {
        ctx->pc = 0x411080u;
        goto label_411080;
    }
    ctx->pc = 0x411078u;
    {
        const bool branch_taken_0x411078 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x411078) {
            ctx->pc = 0x411298u;
            goto label_411298;
        }
    }
    ctx->pc = 0x411080u;
label_411080:
    // 0x411080: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_411084:
    if (ctx->pc == 0x411084u) {
        ctx->pc = 0x411088u;
        goto label_411088;
    }
    ctx->pc = 0x411080u;
    {
        const bool branch_taken_0x411080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x411080) {
            ctx->pc = 0x411090u;
            goto label_411090;
        }
    }
    ctx->pc = 0x411088u;
label_411088:
    // 0x411088: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_41108c:
    if (ctx->pc == 0x41108Cu) {
        ctx->pc = 0x411090u;
        goto label_411090;
    }
    ctx->pc = 0x411088u;
    {
        const bool branch_taken_0x411088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411088) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x411090u;
label_411090:
    // 0x411090: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x411090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_411094:
    // 0x411094: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x411094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_411098:
    // 0x411098: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x411098u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_41109c:
    // 0x41109c: 0x0  nop
    ctx->pc = 0x41109cu;
    // NOP
label_4110a0:
    // 0x4110a0: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x4110a0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4110a4:
    // 0x4110a4: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_4110a8:
    if (ctx->pc == 0x4110A8u) {
        ctx->pc = 0x4110ACu;
        goto label_4110ac;
    }
    ctx->pc = 0x4110A4u;
    {
        const bool branch_taken_0x4110a4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4110a4) {
            ctx->pc = 0x4111A0u;
            goto label_4111a0;
        }
    }
    ctx->pc = 0x4110ACu;
label_4110ac:
    // 0x4110ac: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x4110acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_4110b0:
    // 0x4110b0: 0x26060003  addiu       $a2, $s0, 0x3
    ctx->pc = 0x4110b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_4110b4:
    // 0x4110b4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x4110b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_4110b8:
    // 0x4110b8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4110b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4110bc:
    // 0x4110bc: 0xc0bc1d4  jal         func_2F0750
label_4110c0:
    if (ctx->pc == 0x4110C0u) {
        ctx->pc = 0x4110C0u;
            // 0x4110c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4110C4u;
        goto label_4110c4;
    }
    ctx->pc = 0x4110BCu;
    SET_GPR_U32(ctx, 31, 0x4110C4u);
    ctx->pc = 0x4110C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4110BCu;
            // 0x4110c0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4110C4u; }
        if (ctx->pc != 0x4110C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4110C4u; }
        if (ctx->pc != 0x4110C4u) { return; }
    }
    ctx->pc = 0x4110C4u;
label_4110c4:
    // 0x4110c4: 0xaea0017c  sw          $zero, 0x17C($s5)
    ctx->pc = 0x4110c4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 380), GPR_U32(ctx, 0));
label_4110c8:
    // 0x4110c8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x4110c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_4110cc:
    // 0x4110cc: 0xa6a20194  sh          $v0, 0x194($s5)
    ctx->pc = 0x4110ccu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 404), (uint16_t)GPR_U32(ctx, 2));
label_4110d0:
    // 0x4110d0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x4110d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_4110d4:
    // 0x4110d4: 0x344412a9  ori         $a0, $v0, 0x12A9
    ctx->pc = 0x4110d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4777);
label_4110d8:
    // 0x4110d8: 0x92620001  lbu         $v0, 0x1($s3)
    ctx->pc = 0x4110d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_4110dc:
    // 0x4110dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4110dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4110e0:
    // 0x4110e0: 0xc073234  jal         func_1CC8D0
label_4110e4:
    if (ctx->pc == 0x4110E4u) {
        ctx->pc = 0x4110E4u;
            // 0x4110e4: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4110E8u;
        goto label_4110e8;
    }
    ctx->pc = 0x4110E0u;
    SET_GPR_U32(ctx, 31, 0x4110E8u);
    ctx->pc = 0x4110E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4110E0u;
            // 0x4110e4: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4110E8u; }
        if (ctx->pc != 0x4110E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4110E8u; }
        if (ctx->pc != 0x4110E8u) { return; }
    }
    ctx->pc = 0x4110E8u;
label_4110e8:
    // 0x4110e8: 0x8ea20180  lw          $v0, 0x180($s5)
    ctx->pc = 0x4110e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 384)));
label_4110ec:
    // 0x4110ec: 0x8c420788  lw          $v0, 0x788($v0)
    ctx->pc = 0x4110ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_4110f0:
    // 0x4110f0: 0x2452ffff  addiu       $s2, $v0, -0x1
    ctx->pc = 0x4110f0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4110f4:
    // 0x4110f4: 0x0  nop
    ctx->pc = 0x4110f4u;
    // NOP
label_4110f8:
    // 0x4110f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4110f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4110fc:
    // 0x4110fc: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4110fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_411100:
    // 0x411100: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x411100u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_411104:
    // 0x411104: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x411104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_411108:
    // 0x411108: 0x320f809  jalr        $t9
label_41110c:
    if (ctx->pc == 0x41110Cu) {
        ctx->pc = 0x41110Cu;
            // 0x41110c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411110u;
        goto label_411110;
    }
    ctx->pc = 0x411108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411110u);
        ctx->pc = 0x41110Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x411108u;
            // 0x41110c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x411110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411110u; }
            if (ctx->pc != 0x411110u) { return; }
        }
        }
    }
    ctx->pc = 0x411110u;
label_411110:
    // 0x411110: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x411110u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_411114:
    // 0x411114: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x411114u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_411118:
    // 0x411118: 0x24630e80  addiu       $v1, $v1, 0xE80
    ctx->pc = 0x411118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3712));
label_41111c:
    // 0x41111c: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x41111cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_411120:
    // 0x411120: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x411120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_411124:
    // 0x411124: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x411124u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_411128:
    // 0x411128: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x411128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_41112c:
    // 0x41112c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_411130:
    if (ctx->pc == 0x411130u) {
        ctx->pc = 0x411130u;
            // 0x411130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411134u;
        goto label_411134;
    }
    ctx->pc = 0x41112Cu;
    {
        const bool branch_taken_0x41112c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x411130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41112Cu;
            // 0x411130: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41112c) {
            ctx->pc = 0x411148u;
            goto label_411148;
        }
    }
    ctx->pc = 0x411134u;
label_411134:
    // 0x411134: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x411134u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_411138:
    // 0x411138: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_41113c:
    if (ctx->pc == 0x41113Cu) {
        ctx->pc = 0x411140u;
        goto label_411140;
    }
    ctx->pc = 0x411138u;
    {
        const bool branch_taken_0x411138 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x411138) {
            ctx->pc = 0x411148u;
            goto label_411148;
        }
    }
    ctx->pc = 0x411140u;
label_411140:
    // 0x411140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x411140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411144:
    // 0x411144: 0x0  nop
    ctx->pc = 0x411144u;
    // NOP
label_411148:
    // 0x411148: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_41114c:
    if (ctx->pc == 0x41114Cu) {
        ctx->pc = 0x411150u;
        goto label_411150;
    }
    ctx->pc = 0x411148u;
    {
        const bool branch_taken_0x411148 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x411148) {
            ctx->pc = 0x411168u;
            goto label_411168;
        }
    }
    ctx->pc = 0x411150u;
label_411150:
    // 0x411150: 0xc075eb4  jal         func_1D7AD0
label_411154:
    if (ctx->pc == 0x411154u) {
        ctx->pc = 0x411154u;
            // 0x411154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411158u;
        goto label_411158;
    }
    ctx->pc = 0x411150u;
    SET_GPR_U32(ctx, 31, 0x411158u);
    ctx->pc = 0x411154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411150u;
            // 0x411154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411158u; }
        if (ctx->pc != 0x411158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411158u; }
        if (ctx->pc != 0x411158u) { return; }
    }
    ctx->pc = 0x411158u;
label_411158:
    // 0x411158: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_41115c:
    if (ctx->pc == 0x41115Cu) {
        ctx->pc = 0x411160u;
        goto label_411160;
    }
    ctx->pc = 0x411158u;
    {
        const bool branch_taken_0x411158 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x411158) {
            ctx->pc = 0x411168u;
            goto label_411168;
        }
    }
    ctx->pc = 0x411160u;
label_411160:
    // 0x411160: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x411160u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_411164:
    // 0x411164: 0x0  nop
    ctx->pc = 0x411164u;
    // NOP
label_411168:
    // 0x411168: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_41116c:
    if (ctx->pc == 0x41116Cu) {
        ctx->pc = 0x411170u;
        goto label_411170;
    }
    ctx->pc = 0x411168u;
    {
        const bool branch_taken_0x411168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x411168) {
            ctx->pc = 0x411188u;
            goto label_411188;
        }
    }
    ctx->pc = 0x411170u;
label_411170:
    // 0x411170: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x411170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_411174:
    // 0x411174: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x411174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_411178:
    // 0x411178: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x411178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_41117c:
    // 0x41117c: 0x320f809  jalr        $t9
label_411180:
    if (ctx->pc == 0x411180u) {
        ctx->pc = 0x411180u;
            // 0x411180: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x411184u;
        goto label_411184;
    }
    ctx->pc = 0x41117Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x411184u);
        ctx->pc = 0x411180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41117Cu;
            // 0x411180: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x411184u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x411184u; }
            if (ctx->pc != 0x411184u) { return; }
        }
        }
    }
    ctx->pc = 0x411184u;
label_411184:
    // 0x411184: 0x0  nop
    ctx->pc = 0x411184u;
    // NOP
label_411188:
    // 0x411188: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x411188u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41118c:
    // 0x41118c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_411190:
    if (ctx->pc == 0x411190u) {
        ctx->pc = 0x411190u;
            // 0x411190: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->pc = 0x411194u;
        goto label_411194;
    }
    ctx->pc = 0x41118Cu;
    {
        const bool branch_taken_0x41118c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x411190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41118Cu;
            // 0x411190: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41118c) {
            ctx->pc = 0x4110F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4110f8;
        }
    }
    ctx->pc = 0x411194u;
label_411194:
    // 0x411194: 0x10000084  b           . + 4 + (0x84 << 2)
label_411198:
    if (ctx->pc == 0x411198u) {
        ctx->pc = 0x41119Cu;
        goto label_41119c;
    }
    ctx->pc = 0x411194u;
    {
        const bool branch_taken_0x411194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411194) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x41119Cu;
label_41119c:
    // 0x41119c: 0x0  nop
    ctx->pc = 0x41119cu;
    // NOP
label_4111a0:
    // 0x4111a0: 0xc6a1017c  lwc1        $f1, 0x17C($s5)
    ctx->pc = 0x4111a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4111a4:
    // 0x4111a4: 0x46011032  c.eq.s      $f2, $f1
    ctx->pc = 0x4111a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4111a8:
    // 0x4111a8: 0x4501007f  bc1t        . + 4 + (0x7F << 2)
label_4111ac:
    if (ctx->pc == 0x4111ACu) {
        ctx->pc = 0x4111B0u;
        goto label_4111b0;
    }
    ctx->pc = 0x4111A8u;
    {
        const bool branch_taken_0x4111a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4111a8) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x4111B0u;
label_4111b0:
    // 0x4111b0: 0x8ee30da0  lw          $v1, 0xDA0($s7)
    ctx->pc = 0x4111b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3488)));
label_4111b4:
    // 0x4111b4: 0x30630040  andi        $v1, $v1, 0x40
    ctx->pc = 0x4111b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_4111b8:
    // 0x4111b8: 0x1860002d  blez        $v1, . + 4 + (0x2D << 2)
label_4111bc:
    if (ctx->pc == 0x4111BCu) {
        ctx->pc = 0x4111C0u;
        goto label_4111c0;
    }
    ctx->pc = 0x4111B8u;
    {
        const bool branch_taken_0x4111b8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x4111b8) {
            ctx->pc = 0x411270u;
            goto label_411270;
        }
    }
    ctx->pc = 0x4111C0u;
label_4111c0:
    // 0x4111c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4111c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4111c4:
    // 0x4111c4: 0x0  nop
    ctx->pc = 0x4111c4u;
    // NOP
label_4111c8:
    // 0x4111c8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4111c8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4111cc:
    // 0x4111cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_4111d0:
    if (ctx->pc == 0x4111D0u) {
        ctx->pc = 0x4111D4u;
        goto label_4111d4;
    }
    ctx->pc = 0x4111CCu;
    {
        const bool branch_taken_0x4111cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4111cc) {
            ctx->pc = 0x4111E8u;
            goto label_4111e8;
        }
    }
    ctx->pc = 0x4111D4u;
label_4111d4:
    // 0x4111d4: 0x26060003  addiu       $a2, $s0, 0x3
    ctx->pc = 0x4111d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_4111d8:
    // 0x4111d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x4111d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4111dc:
    // 0x4111dc: 0xc0bc1d4  jal         func_2F0750
label_4111e0:
    if (ctx->pc == 0x4111E0u) {
        ctx->pc = 0x4111E0u;
            // 0x4111e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4111E4u;
        goto label_4111e4;
    }
    ctx->pc = 0x4111DCu;
    SET_GPR_U32(ctx, 31, 0x4111E4u);
    ctx->pc = 0x4111E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4111DCu;
            // 0x4111e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4111E4u; }
        if (ctx->pc != 0x4111E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4111E4u; }
        if (ctx->pc != 0x4111E4u) { return; }
    }
    ctx->pc = 0x4111E4u;
label_4111e4:
    // 0x4111e4: 0x0  nop
    ctx->pc = 0x4111e4u;
    // NOP
label_4111e8:
    // 0x4111e8: 0xc6a1017c  lwc1        $f1, 0x17C($s5)
    ctx->pc = 0x4111e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4111ec:
    // 0x4111ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4111ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4111f0:
    // 0x4111f0: 0x0  nop
    ctx->pc = 0x4111f0u;
    // NOP
label_4111f4:
    // 0x4111f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4111f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4111f8:
    // 0x4111f8: 0x45000017  bc1f        . + 4 + (0x17 << 2)
label_4111fc:
    if (ctx->pc == 0x4111FCu) {
        ctx->pc = 0x411200u;
        goto label_411200;
    }
    ctx->pc = 0x4111F8u;
    {
        const bool branch_taken_0x4111f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4111f8) {
            ctx->pc = 0x411258u;
            goto label_411258;
        }
    }
    ctx->pc = 0x411200u;
label_411200:
    // 0x411200: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x411200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_411204:
    // 0x411204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x411204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411208:
    // 0x411208: 0x0  nop
    ctx->pc = 0x411208u;
    // NOP
label_41120c:
    // 0x41120c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41120cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_411210:
    // 0x411210: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_411214:
    if (ctx->pc == 0x411214u) {
        ctx->pc = 0x411218u;
        goto label_411218;
    }
    ctx->pc = 0x411210u;
    {
        const bool branch_taken_0x411210 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x411210) {
            ctx->pc = 0x411258u;
            goto label_411258;
        }
    }
    ctx->pc = 0x411218u;
label_411218:
    // 0x411218: 0x26060003  addiu       $a2, $s0, 0x3
    ctx->pc = 0x411218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
label_41121c:
    // 0x41121c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x41121cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_411220:
    // 0x411220: 0xc0bc1d4  jal         func_2F0750
label_411224:
    if (ctx->pc == 0x411224u) {
        ctx->pc = 0x411224u;
            // 0x411224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411228u;
        goto label_411228;
    }
    ctx->pc = 0x411220u;
    SET_GPR_U32(ctx, 31, 0x411228u);
    ctx->pc = 0x411224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411220u;
            // 0x411224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411228u; }
        if (ctx->pc != 0x411228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411228u; }
        if (ctx->pc != 0x411228u) { return; }
    }
    ctx->pc = 0x411228u;
label_411228:
    // 0x411228: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x411228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_41122c:
    // 0x41122c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41122cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411230:
    // 0x411230: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x411230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_411234:
    // 0x411234: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x411234u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411238:
    // 0x411238: 0x0  nop
    ctx->pc = 0x411238u;
    // NOP
label_41123c:
    // 0x41123c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x41123cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_411240:
    // 0x411240: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x411240u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_411244:
    // 0x411244: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x411244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411248:
    // 0x411248: 0xc0bc1c4  jal         func_2F0710
label_41124c:
    if (ctx->pc == 0x41124Cu) {
        ctx->pc = 0x41124Cu;
            // 0x41124c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x411250u;
        goto label_411250;
    }
    ctx->pc = 0x411248u;
    SET_GPR_U32(ctx, 31, 0x411250u);
    ctx->pc = 0x41124Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411248u;
            // 0x41124c: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0710u;
    if (runtime->hasFunction(0x2F0710u)) {
        auto targetFn = runtime->lookupFunction(0x2F0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411250u; }
        if (ctx->pc != 0x411250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0710_0x2f0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411250u; }
        if (ctx->pc != 0x411250u) { return; }
    }
    ctx->pc = 0x411250u;
label_411250:
    // 0x411250: 0x10000055  b           . + 4 + (0x55 << 2)
label_411254:
    if (ctx->pc == 0x411254u) {
        ctx->pc = 0x411258u;
        goto label_411258;
    }
    ctx->pc = 0x411250u;
    {
        const bool branch_taken_0x411250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411250) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x411258u;
label_411258:
    // 0x411258: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x411258u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_41125c:
    // 0x41125c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41125cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411260:
    // 0x411260: 0xc0bc1d4  jal         func_2F0750
label_411264:
    if (ctx->pc == 0x411264u) {
        ctx->pc = 0x411264u;
            // 0x411264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411268u;
        goto label_411268;
    }
    ctx->pc = 0x411260u;
    SET_GPR_U32(ctx, 31, 0x411268u);
    ctx->pc = 0x411264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411260u;
            // 0x411264: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411268u; }
        if (ctx->pc != 0x411268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411268u; }
        if (ctx->pc != 0x411268u) { return; }
    }
    ctx->pc = 0x411268u;
label_411268:
    // 0x411268: 0x1000004f  b           . + 4 + (0x4F << 2)
label_41126c:
    if (ctx->pc == 0x41126Cu) {
        ctx->pc = 0x411270u;
        goto label_411270;
    }
    ctx->pc = 0x411268u;
    {
        const bool branch_taken_0x411268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411268) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x411270u;
label_411270:
    // 0x411270: 0x92630002  lbu         $v1, 0x2($s3)
    ctx->pc = 0x411270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_411274:
    // 0x411274: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
label_411278:
    if (ctx->pc == 0x411278u) {
        ctx->pc = 0x41127Cu;
        goto label_41127c;
    }
    ctx->pc = 0x411274u;
    {
        const bool branch_taken_0x411274 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x411274) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x41127Cu;
label_41127c:
    // 0x41127c: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x41127cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_411280:
    // 0x411280: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x411280u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_411284:
    // 0x411284: 0xc0bc1d4  jal         func_2F0750
label_411288:
    if (ctx->pc == 0x411288u) {
        ctx->pc = 0x411288u;
            // 0x411288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41128Cu;
        goto label_41128c;
    }
    ctx->pc = 0x411284u;
    SET_GPR_U32(ctx, 31, 0x41128Cu);
    ctx->pc = 0x411288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411284u;
            // 0x411288: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41128Cu; }
        if (ctx->pc != 0x41128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41128Cu; }
        if (ctx->pc != 0x41128Cu) { return; }
    }
    ctx->pc = 0x41128Cu;
label_41128c:
    // 0x41128c: 0x10000046  b           . + 4 + (0x46 << 2)
label_411290:
    if (ctx->pc == 0x411290u) {
        ctx->pc = 0x411294u;
        goto label_411294;
    }
    ctx->pc = 0x41128Cu;
    {
        const bool branch_taken_0x41128c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x41128c) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x411294u;
label_411294:
    // 0x411294: 0x0  nop
    ctx->pc = 0x411294u;
    // NOP
label_411298:
    // 0x411298: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x411298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_41129c:
    // 0x41129c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x41129cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4112a0:
    // 0x4112a0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4112a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4112a4:
    // 0x4112a4: 0x3c023d3f  lui         $v0, 0x3D3F
    ctx->pc = 0x4112a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15679 << 16));
label_4112a8:
    // 0x4112a8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x4112a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_4112ac:
    // 0x4112ac: 0x3444258c  ori         $a0, $v0, 0x258C
    ctx->pc = 0x4112acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
label_4112b0:
    // 0x4112b0: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x4112b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_4112b4:
    // 0x4112b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4112b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4112b8:
    // 0x4112b8: 0x0  nop
    ctx->pc = 0x4112b8u;
    // NOP
label_4112bc:
    // 0x4112bc: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4112bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4112c0:
    // 0x4112c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4112c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4112c4:
    // 0x4112c4: 0x0  nop
    ctx->pc = 0x4112c4u;
    // NOP
label_4112c8:
    // 0x4112c8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4112c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4112cc:
    // 0x4112cc: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_4112d0:
    if (ctx->pc == 0x4112D0u) {
        ctx->pc = 0x4112D0u;
            // 0x4112d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4112D4u;
        goto label_4112d4;
    }
    ctx->pc = 0x4112CCu;
    {
        const bool branch_taken_0x4112cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4112cc) {
            ctx->pc = 0x4112D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4112CCu;
            // 0x4112d0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4112E4u;
            goto label_4112e4;
        }
    }
    ctx->pc = 0x4112D4u;
label_4112d4:
    // 0x4112d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4112d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4112d8:
    // 0x4112d8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4112d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4112dc:
    // 0x4112dc: 0x10000006  b           . + 4 + (0x6 << 2)
label_4112e0:
    if (ctx->pc == 0x4112E0u) {
        ctx->pc = 0x4112E4u;
        goto label_4112e4;
    }
    ctx->pc = 0x4112DCu;
    {
        const bool branch_taken_0x4112dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4112dc) {
            ctx->pc = 0x4112F8u;
            goto label_4112f8;
        }
    }
    ctx->pc = 0x4112E4u;
label_4112e4:
    // 0x4112e4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4112e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4112e8:
    // 0x4112e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4112e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4112ec:
    // 0x4112ec: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x4112ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_4112f0:
    // 0x4112f0: 0x0  nop
    ctx->pc = 0x4112f0u;
    // NOP
label_4112f4:
    // 0x4112f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x4112f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_4112f8:
    // 0x4112f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4112f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4112fc:
    // 0x4112fc: 0x0  nop
    ctx->pc = 0x4112fcu;
    // NOP
label_411300:
    // 0x411300: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x411300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_411304:
    // 0x411304: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_411308:
    if (ctx->pc == 0x411308u) {
        ctx->pc = 0x41130Cu;
        goto label_41130c;
    }
    ctx->pc = 0x411304u;
    {
        const bool branch_taken_0x411304 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x411304) {
            ctx->pc = 0x411380u;
            goto label_411380;
        }
    }
    ctx->pc = 0x41130Cu;
label_41130c:
    // 0x41130c: 0x2ca1001c  sltiu       $at, $a1, 0x1C
    ctx->pc = 0x41130cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)28) ? 1 : 0);
label_411310:
    // 0x411310: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_411314:
    if (ctx->pc == 0x411314u) {
        ctx->pc = 0x411318u;
        goto label_411318;
    }
    ctx->pc = 0x411310u;
    {
        const bool branch_taken_0x411310 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x411310) {
            ctx->pc = 0x411380u;
            goto label_411380;
        }
    }
    ctx->pc = 0x411318u;
label_411318:
    // 0x411318: 0x8ee40db0  lw          $a0, 0xDB0($s7)
    ctx->pc = 0x411318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3504)));
label_41131c:
    // 0x41131c: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x41131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_411320:
    // 0x411320: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_411324:
    if (ctx->pc == 0x411324u) {
        ctx->pc = 0x411328u;
        goto label_411328;
    }
    ctx->pc = 0x411320u;
    {
        const bool branch_taken_0x411320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x411320) {
            ctx->pc = 0x411380u;
            goto label_411380;
        }
    }
    ctx->pc = 0x411328u;
label_411328:
    // 0x411328: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x411328u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_41132c:
    // 0x41132c: 0x53080  sll         $a2, $a1, 2
    ctx->pc = 0x41132cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_411330:
    // 0x411330: 0x2484c1b0  addiu       $a0, $a0, -0x3E50
    ctx->pc = 0x411330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951344));
label_411334:
    // 0x411334: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x411334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_411338:
    // 0x411338: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x411338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_41133c:
    // 0x41133c: 0x8c478a08  lw          $a3, -0x75F8($v0)
    ctx->pc = 0x41133cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_411340:
    // 0x411340: 0x84860000  lh          $a2, 0x0($a0)
    ctx->pc = 0x411340u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_411344:
    // 0x411344: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x411344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_411348:
    // 0x411348: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x411348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41134c:
    // 0x41134c: 0x84820002  lh          $v0, 0x2($a0)
    ctx->pc = 0x41134cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_411350:
    // 0x411350: 0xc4e20018  lwc1        $f2, 0x18($a3)
    ctx->pc = 0x411350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_411354:
    // 0x411354: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x411354u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411358:
    // 0x411358: 0x0  nop
    ctx->pc = 0x411358u;
    // NOP
label_41135c:
    // 0x41135c: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x41135cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_411360:
    // 0x411360: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x411360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_411364:
    // 0x411364: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x411364u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_411368:
    // 0x411368: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x411368u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_41136c:
    // 0x41136c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41136cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_411370:
    // 0x411370: 0xc0bc1c4  jal         func_2F0710
label_411374:
    if (ctx->pc == 0x411374u) {
        ctx->pc = 0x411374u;
            // 0x411374: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x411378u;
        goto label_411378;
    }
    ctx->pc = 0x411370u;
    SET_GPR_U32(ctx, 31, 0x411378u);
    ctx->pc = 0x411374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x411370u;
            // 0x411374: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0710u;
    if (runtime->hasFunction(0x2F0710u)) {
        auto targetFn = runtime->lookupFunction(0x2F0710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411378u; }
        if (ctx->pc != 0x411378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0710_0x2f0710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411378u; }
        if (ctx->pc != 0x411378u) { return; }
    }
    ctx->pc = 0x411378u;
label_411378:
    // 0x411378: 0x1000000b  b           . + 4 + (0xB << 2)
label_41137c:
    if (ctx->pc == 0x41137Cu) {
        ctx->pc = 0x411380u;
        goto label_411380;
    }
    ctx->pc = 0x411378u;
    {
        const bool branch_taken_0x411378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x411378) {
            ctx->pc = 0x4113A8u;
            goto label_4113a8;
        }
    }
    ctx->pc = 0x411380u;
label_411380:
    // 0x411380: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x411380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_411384:
    // 0x411384: 0x92660000  lbu         $a2, 0x0($s3)
    ctx->pc = 0x411384u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_411388:
    // 0x411388: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x411388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_41138c:
    // 0x41138c: 0xc0bc1d4  jal         func_2F0750
label_411390:
    if (ctx->pc == 0x411390u) {
        ctx->pc = 0x411390u;
            // 0x411390: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x411394u;
        goto label_411394;
    }
    ctx->pc = 0x41138Cu;
    SET_GPR_U32(ctx, 31, 0x411394u);
    ctx->pc = 0x411390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41138Cu;
            // 0x411390: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0750u;
    if (runtime->hasFunction(0x2F0750u)) {
        auto targetFn = runtime->lookupFunction(0x2F0750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411394u; }
        if (ctx->pc != 0x411394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0750_0x2f0750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x411394u; }
        if (ctx->pc != 0x411394u) { return; }
    }
    ctx->pc = 0x411394u;
label_411394:
    // 0x411394: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x411394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_411398:
    // 0x411398: 0xa6a30194  sh          $v1, 0x194($s5)
    ctx->pc = 0x411398u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 404), (uint16_t)GPR_U32(ctx, 3));
label_41139c:
    // 0x41139c: 0x92630001  lbu         $v1, 0x1($s3)
    ctx->pc = 0x41139cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_4113a0:
    // 0x4113a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4113a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4113a4:
    // 0x4113a4: 0xa2630001  sb          $v1, 0x1($s3)
    ctx->pc = 0x4113a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 3));
label_4113a8:
    // 0x4113a8: 0x8ee40da0  lw          $a0, 0xDA0($s7)
    ctx->pc = 0x4113a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 3488)));
label_4113ac:
    // 0x4113ac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4113acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4113b0:
    // 0x4113b0: 0x2de182b  sltu        $v1, $s6, $fp
    ctx->pc = 0x4113b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_4113b4:
    // 0x4113b4: 0x30840040  andi        $a0, $a0, 0x40
    ctx->pc = 0x4113b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)64);
label_4113b8:
    // 0x4113b8: 0x4202a  slt         $a0, $zero, $a0
    ctx->pc = 0x4113b8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_4113bc:
    // 0x4113bc: 0x1460ff14  bnez        $v1, . + 4 + (-0xEC << 2)
label_4113c0:
    if (ctx->pc == 0x4113C0u) {
        ctx->pc = 0x4113C0u;
            // 0x4113c0: 0xa2640002  sb          $a0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4113C4u;
        goto label_4113c4;
    }
    ctx->pc = 0x4113BCu;
    {
        const bool branch_taken_0x4113bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4113C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4113BCu;
            // 0x4113c0: 0xa2640002  sb          $a0, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4113bc) {
            ctx->pc = 0x411010u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_411010;
        }
    }
    ctx->pc = 0x4113C4u;
label_4113c4:
    // 0x4113c4: 0x0  nop
    ctx->pc = 0x4113c4u;
    // NOP
label_4113c8:
    // 0x4113c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4113c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4113cc:
    // 0x4113cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4113ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4113d0:
    // 0x4113d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4113d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4113d4:
    // 0x4113d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4113d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4113d8:
    // 0x4113d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4113d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4113dc:
    // 0x4113dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4113dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4113e0:
    // 0x4113e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4113e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4113e4:
    // 0x4113e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4113e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4113e8:
    // 0x4113e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4113e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4113ec:
    // 0x4113ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4113ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4113f0:
    // 0x4113f0: 0x3e00008  jr          $ra
label_4113f4:
    if (ctx->pc == 0x4113F4u) {
        ctx->pc = 0x4113F4u;
            // 0x4113f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4113F8u;
        goto label_4113f8;
    }
    ctx->pc = 0x4113F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4113F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4113F0u;
            // 0x4113f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4113F8u;
label_4113f8:
    // 0x4113f8: 0x0  nop
    ctx->pc = 0x4113f8u;
    // NOP
label_4113fc:
    // 0x4113fc: 0x0  nop
    ctx->pc = 0x4113fcu;
    // NOP
}
