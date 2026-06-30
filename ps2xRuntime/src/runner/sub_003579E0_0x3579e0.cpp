#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003579E0
// Address: 0x3579e0 - 0x358570
void sub_003579E0_0x3579e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003579E0_0x3579e0");
#endif

    switch (ctx->pc) {
        case 0x3579e0u: goto label_3579e0;
        case 0x3579e4u: goto label_3579e4;
        case 0x3579e8u: goto label_3579e8;
        case 0x3579ecu: goto label_3579ec;
        case 0x3579f0u: goto label_3579f0;
        case 0x3579f4u: goto label_3579f4;
        case 0x3579f8u: goto label_3579f8;
        case 0x3579fcu: goto label_3579fc;
        case 0x357a00u: goto label_357a00;
        case 0x357a04u: goto label_357a04;
        case 0x357a08u: goto label_357a08;
        case 0x357a0cu: goto label_357a0c;
        case 0x357a10u: goto label_357a10;
        case 0x357a14u: goto label_357a14;
        case 0x357a18u: goto label_357a18;
        case 0x357a1cu: goto label_357a1c;
        case 0x357a20u: goto label_357a20;
        case 0x357a24u: goto label_357a24;
        case 0x357a28u: goto label_357a28;
        case 0x357a2cu: goto label_357a2c;
        case 0x357a30u: goto label_357a30;
        case 0x357a34u: goto label_357a34;
        case 0x357a38u: goto label_357a38;
        case 0x357a3cu: goto label_357a3c;
        case 0x357a40u: goto label_357a40;
        case 0x357a44u: goto label_357a44;
        case 0x357a48u: goto label_357a48;
        case 0x357a4cu: goto label_357a4c;
        case 0x357a50u: goto label_357a50;
        case 0x357a54u: goto label_357a54;
        case 0x357a58u: goto label_357a58;
        case 0x357a5cu: goto label_357a5c;
        case 0x357a60u: goto label_357a60;
        case 0x357a64u: goto label_357a64;
        case 0x357a68u: goto label_357a68;
        case 0x357a6cu: goto label_357a6c;
        case 0x357a70u: goto label_357a70;
        case 0x357a74u: goto label_357a74;
        case 0x357a78u: goto label_357a78;
        case 0x357a7cu: goto label_357a7c;
        case 0x357a80u: goto label_357a80;
        case 0x357a84u: goto label_357a84;
        case 0x357a88u: goto label_357a88;
        case 0x357a8cu: goto label_357a8c;
        case 0x357a90u: goto label_357a90;
        case 0x357a94u: goto label_357a94;
        case 0x357a98u: goto label_357a98;
        case 0x357a9cu: goto label_357a9c;
        case 0x357aa0u: goto label_357aa0;
        case 0x357aa4u: goto label_357aa4;
        case 0x357aa8u: goto label_357aa8;
        case 0x357aacu: goto label_357aac;
        case 0x357ab0u: goto label_357ab0;
        case 0x357ab4u: goto label_357ab4;
        case 0x357ab8u: goto label_357ab8;
        case 0x357abcu: goto label_357abc;
        case 0x357ac0u: goto label_357ac0;
        case 0x357ac4u: goto label_357ac4;
        case 0x357ac8u: goto label_357ac8;
        case 0x357accu: goto label_357acc;
        case 0x357ad0u: goto label_357ad0;
        case 0x357ad4u: goto label_357ad4;
        case 0x357ad8u: goto label_357ad8;
        case 0x357adcu: goto label_357adc;
        case 0x357ae0u: goto label_357ae0;
        case 0x357ae4u: goto label_357ae4;
        case 0x357ae8u: goto label_357ae8;
        case 0x357aecu: goto label_357aec;
        case 0x357af0u: goto label_357af0;
        case 0x357af4u: goto label_357af4;
        case 0x357af8u: goto label_357af8;
        case 0x357afcu: goto label_357afc;
        case 0x357b00u: goto label_357b00;
        case 0x357b04u: goto label_357b04;
        case 0x357b08u: goto label_357b08;
        case 0x357b0cu: goto label_357b0c;
        case 0x357b10u: goto label_357b10;
        case 0x357b14u: goto label_357b14;
        case 0x357b18u: goto label_357b18;
        case 0x357b1cu: goto label_357b1c;
        case 0x357b20u: goto label_357b20;
        case 0x357b24u: goto label_357b24;
        case 0x357b28u: goto label_357b28;
        case 0x357b2cu: goto label_357b2c;
        case 0x357b30u: goto label_357b30;
        case 0x357b34u: goto label_357b34;
        case 0x357b38u: goto label_357b38;
        case 0x357b3cu: goto label_357b3c;
        case 0x357b40u: goto label_357b40;
        case 0x357b44u: goto label_357b44;
        case 0x357b48u: goto label_357b48;
        case 0x357b4cu: goto label_357b4c;
        case 0x357b50u: goto label_357b50;
        case 0x357b54u: goto label_357b54;
        case 0x357b58u: goto label_357b58;
        case 0x357b5cu: goto label_357b5c;
        case 0x357b60u: goto label_357b60;
        case 0x357b64u: goto label_357b64;
        case 0x357b68u: goto label_357b68;
        case 0x357b6cu: goto label_357b6c;
        case 0x357b70u: goto label_357b70;
        case 0x357b74u: goto label_357b74;
        case 0x357b78u: goto label_357b78;
        case 0x357b7cu: goto label_357b7c;
        case 0x357b80u: goto label_357b80;
        case 0x357b84u: goto label_357b84;
        case 0x357b88u: goto label_357b88;
        case 0x357b8cu: goto label_357b8c;
        case 0x357b90u: goto label_357b90;
        case 0x357b94u: goto label_357b94;
        case 0x357b98u: goto label_357b98;
        case 0x357b9cu: goto label_357b9c;
        case 0x357ba0u: goto label_357ba0;
        case 0x357ba4u: goto label_357ba4;
        case 0x357ba8u: goto label_357ba8;
        case 0x357bacu: goto label_357bac;
        case 0x357bb0u: goto label_357bb0;
        case 0x357bb4u: goto label_357bb4;
        case 0x357bb8u: goto label_357bb8;
        case 0x357bbcu: goto label_357bbc;
        case 0x357bc0u: goto label_357bc0;
        case 0x357bc4u: goto label_357bc4;
        case 0x357bc8u: goto label_357bc8;
        case 0x357bccu: goto label_357bcc;
        case 0x357bd0u: goto label_357bd0;
        case 0x357bd4u: goto label_357bd4;
        case 0x357bd8u: goto label_357bd8;
        case 0x357bdcu: goto label_357bdc;
        case 0x357be0u: goto label_357be0;
        case 0x357be4u: goto label_357be4;
        case 0x357be8u: goto label_357be8;
        case 0x357becu: goto label_357bec;
        case 0x357bf0u: goto label_357bf0;
        case 0x357bf4u: goto label_357bf4;
        case 0x357bf8u: goto label_357bf8;
        case 0x357bfcu: goto label_357bfc;
        case 0x357c00u: goto label_357c00;
        case 0x357c04u: goto label_357c04;
        case 0x357c08u: goto label_357c08;
        case 0x357c0cu: goto label_357c0c;
        case 0x357c10u: goto label_357c10;
        case 0x357c14u: goto label_357c14;
        case 0x357c18u: goto label_357c18;
        case 0x357c1cu: goto label_357c1c;
        case 0x357c20u: goto label_357c20;
        case 0x357c24u: goto label_357c24;
        case 0x357c28u: goto label_357c28;
        case 0x357c2cu: goto label_357c2c;
        case 0x357c30u: goto label_357c30;
        case 0x357c34u: goto label_357c34;
        case 0x357c38u: goto label_357c38;
        case 0x357c3cu: goto label_357c3c;
        case 0x357c40u: goto label_357c40;
        case 0x357c44u: goto label_357c44;
        case 0x357c48u: goto label_357c48;
        case 0x357c4cu: goto label_357c4c;
        case 0x357c50u: goto label_357c50;
        case 0x357c54u: goto label_357c54;
        case 0x357c58u: goto label_357c58;
        case 0x357c5cu: goto label_357c5c;
        case 0x357c60u: goto label_357c60;
        case 0x357c64u: goto label_357c64;
        case 0x357c68u: goto label_357c68;
        case 0x357c6cu: goto label_357c6c;
        case 0x357c70u: goto label_357c70;
        case 0x357c74u: goto label_357c74;
        case 0x357c78u: goto label_357c78;
        case 0x357c7cu: goto label_357c7c;
        case 0x357c80u: goto label_357c80;
        case 0x357c84u: goto label_357c84;
        case 0x357c88u: goto label_357c88;
        case 0x357c8cu: goto label_357c8c;
        case 0x357c90u: goto label_357c90;
        case 0x357c94u: goto label_357c94;
        case 0x357c98u: goto label_357c98;
        case 0x357c9cu: goto label_357c9c;
        case 0x357ca0u: goto label_357ca0;
        case 0x357ca4u: goto label_357ca4;
        case 0x357ca8u: goto label_357ca8;
        case 0x357cacu: goto label_357cac;
        case 0x357cb0u: goto label_357cb0;
        case 0x357cb4u: goto label_357cb4;
        case 0x357cb8u: goto label_357cb8;
        case 0x357cbcu: goto label_357cbc;
        case 0x357cc0u: goto label_357cc0;
        case 0x357cc4u: goto label_357cc4;
        case 0x357cc8u: goto label_357cc8;
        case 0x357cccu: goto label_357ccc;
        case 0x357cd0u: goto label_357cd0;
        case 0x357cd4u: goto label_357cd4;
        case 0x357cd8u: goto label_357cd8;
        case 0x357cdcu: goto label_357cdc;
        case 0x357ce0u: goto label_357ce0;
        case 0x357ce4u: goto label_357ce4;
        case 0x357ce8u: goto label_357ce8;
        case 0x357cecu: goto label_357cec;
        case 0x357cf0u: goto label_357cf0;
        case 0x357cf4u: goto label_357cf4;
        case 0x357cf8u: goto label_357cf8;
        case 0x357cfcu: goto label_357cfc;
        case 0x357d00u: goto label_357d00;
        case 0x357d04u: goto label_357d04;
        case 0x357d08u: goto label_357d08;
        case 0x357d0cu: goto label_357d0c;
        case 0x357d10u: goto label_357d10;
        case 0x357d14u: goto label_357d14;
        case 0x357d18u: goto label_357d18;
        case 0x357d1cu: goto label_357d1c;
        case 0x357d20u: goto label_357d20;
        case 0x357d24u: goto label_357d24;
        case 0x357d28u: goto label_357d28;
        case 0x357d2cu: goto label_357d2c;
        case 0x357d30u: goto label_357d30;
        case 0x357d34u: goto label_357d34;
        case 0x357d38u: goto label_357d38;
        case 0x357d3cu: goto label_357d3c;
        case 0x357d40u: goto label_357d40;
        case 0x357d44u: goto label_357d44;
        case 0x357d48u: goto label_357d48;
        case 0x357d4cu: goto label_357d4c;
        case 0x357d50u: goto label_357d50;
        case 0x357d54u: goto label_357d54;
        case 0x357d58u: goto label_357d58;
        case 0x357d5cu: goto label_357d5c;
        case 0x357d60u: goto label_357d60;
        case 0x357d64u: goto label_357d64;
        case 0x357d68u: goto label_357d68;
        case 0x357d6cu: goto label_357d6c;
        case 0x357d70u: goto label_357d70;
        case 0x357d74u: goto label_357d74;
        case 0x357d78u: goto label_357d78;
        case 0x357d7cu: goto label_357d7c;
        case 0x357d80u: goto label_357d80;
        case 0x357d84u: goto label_357d84;
        case 0x357d88u: goto label_357d88;
        case 0x357d8cu: goto label_357d8c;
        case 0x357d90u: goto label_357d90;
        case 0x357d94u: goto label_357d94;
        case 0x357d98u: goto label_357d98;
        case 0x357d9cu: goto label_357d9c;
        case 0x357da0u: goto label_357da0;
        case 0x357da4u: goto label_357da4;
        case 0x357da8u: goto label_357da8;
        case 0x357dacu: goto label_357dac;
        case 0x357db0u: goto label_357db0;
        case 0x357db4u: goto label_357db4;
        case 0x357db8u: goto label_357db8;
        case 0x357dbcu: goto label_357dbc;
        case 0x357dc0u: goto label_357dc0;
        case 0x357dc4u: goto label_357dc4;
        case 0x357dc8u: goto label_357dc8;
        case 0x357dccu: goto label_357dcc;
        case 0x357dd0u: goto label_357dd0;
        case 0x357dd4u: goto label_357dd4;
        case 0x357dd8u: goto label_357dd8;
        case 0x357ddcu: goto label_357ddc;
        case 0x357de0u: goto label_357de0;
        case 0x357de4u: goto label_357de4;
        case 0x357de8u: goto label_357de8;
        case 0x357decu: goto label_357dec;
        case 0x357df0u: goto label_357df0;
        case 0x357df4u: goto label_357df4;
        case 0x357df8u: goto label_357df8;
        case 0x357dfcu: goto label_357dfc;
        case 0x357e00u: goto label_357e00;
        case 0x357e04u: goto label_357e04;
        case 0x357e08u: goto label_357e08;
        case 0x357e0cu: goto label_357e0c;
        case 0x357e10u: goto label_357e10;
        case 0x357e14u: goto label_357e14;
        case 0x357e18u: goto label_357e18;
        case 0x357e1cu: goto label_357e1c;
        case 0x357e20u: goto label_357e20;
        case 0x357e24u: goto label_357e24;
        case 0x357e28u: goto label_357e28;
        case 0x357e2cu: goto label_357e2c;
        case 0x357e30u: goto label_357e30;
        case 0x357e34u: goto label_357e34;
        case 0x357e38u: goto label_357e38;
        case 0x357e3cu: goto label_357e3c;
        case 0x357e40u: goto label_357e40;
        case 0x357e44u: goto label_357e44;
        case 0x357e48u: goto label_357e48;
        case 0x357e4cu: goto label_357e4c;
        case 0x357e50u: goto label_357e50;
        case 0x357e54u: goto label_357e54;
        case 0x357e58u: goto label_357e58;
        case 0x357e5cu: goto label_357e5c;
        case 0x357e60u: goto label_357e60;
        case 0x357e64u: goto label_357e64;
        case 0x357e68u: goto label_357e68;
        case 0x357e6cu: goto label_357e6c;
        case 0x357e70u: goto label_357e70;
        case 0x357e74u: goto label_357e74;
        case 0x357e78u: goto label_357e78;
        case 0x357e7cu: goto label_357e7c;
        case 0x357e80u: goto label_357e80;
        case 0x357e84u: goto label_357e84;
        case 0x357e88u: goto label_357e88;
        case 0x357e8cu: goto label_357e8c;
        case 0x357e90u: goto label_357e90;
        case 0x357e94u: goto label_357e94;
        case 0x357e98u: goto label_357e98;
        case 0x357e9cu: goto label_357e9c;
        case 0x357ea0u: goto label_357ea0;
        case 0x357ea4u: goto label_357ea4;
        case 0x357ea8u: goto label_357ea8;
        case 0x357eacu: goto label_357eac;
        case 0x357eb0u: goto label_357eb0;
        case 0x357eb4u: goto label_357eb4;
        case 0x357eb8u: goto label_357eb8;
        case 0x357ebcu: goto label_357ebc;
        case 0x357ec0u: goto label_357ec0;
        case 0x357ec4u: goto label_357ec4;
        case 0x357ec8u: goto label_357ec8;
        case 0x357eccu: goto label_357ecc;
        case 0x357ed0u: goto label_357ed0;
        case 0x357ed4u: goto label_357ed4;
        case 0x357ed8u: goto label_357ed8;
        case 0x357edcu: goto label_357edc;
        case 0x357ee0u: goto label_357ee0;
        case 0x357ee4u: goto label_357ee4;
        case 0x357ee8u: goto label_357ee8;
        case 0x357eecu: goto label_357eec;
        case 0x357ef0u: goto label_357ef0;
        case 0x357ef4u: goto label_357ef4;
        case 0x357ef8u: goto label_357ef8;
        case 0x357efcu: goto label_357efc;
        case 0x357f00u: goto label_357f00;
        case 0x357f04u: goto label_357f04;
        case 0x357f08u: goto label_357f08;
        case 0x357f0cu: goto label_357f0c;
        case 0x357f10u: goto label_357f10;
        case 0x357f14u: goto label_357f14;
        case 0x357f18u: goto label_357f18;
        case 0x357f1cu: goto label_357f1c;
        case 0x357f20u: goto label_357f20;
        case 0x357f24u: goto label_357f24;
        case 0x357f28u: goto label_357f28;
        case 0x357f2cu: goto label_357f2c;
        case 0x357f30u: goto label_357f30;
        case 0x357f34u: goto label_357f34;
        case 0x357f38u: goto label_357f38;
        case 0x357f3cu: goto label_357f3c;
        case 0x357f40u: goto label_357f40;
        case 0x357f44u: goto label_357f44;
        case 0x357f48u: goto label_357f48;
        case 0x357f4cu: goto label_357f4c;
        case 0x357f50u: goto label_357f50;
        case 0x357f54u: goto label_357f54;
        case 0x357f58u: goto label_357f58;
        case 0x357f5cu: goto label_357f5c;
        case 0x357f60u: goto label_357f60;
        case 0x357f64u: goto label_357f64;
        case 0x357f68u: goto label_357f68;
        case 0x357f6cu: goto label_357f6c;
        case 0x357f70u: goto label_357f70;
        case 0x357f74u: goto label_357f74;
        case 0x357f78u: goto label_357f78;
        case 0x357f7cu: goto label_357f7c;
        case 0x357f80u: goto label_357f80;
        case 0x357f84u: goto label_357f84;
        case 0x357f88u: goto label_357f88;
        case 0x357f8cu: goto label_357f8c;
        case 0x357f90u: goto label_357f90;
        case 0x357f94u: goto label_357f94;
        case 0x357f98u: goto label_357f98;
        case 0x357f9cu: goto label_357f9c;
        case 0x357fa0u: goto label_357fa0;
        case 0x357fa4u: goto label_357fa4;
        case 0x357fa8u: goto label_357fa8;
        case 0x357facu: goto label_357fac;
        case 0x357fb0u: goto label_357fb0;
        case 0x357fb4u: goto label_357fb4;
        case 0x357fb8u: goto label_357fb8;
        case 0x357fbcu: goto label_357fbc;
        case 0x357fc0u: goto label_357fc0;
        case 0x357fc4u: goto label_357fc4;
        case 0x357fc8u: goto label_357fc8;
        case 0x357fccu: goto label_357fcc;
        case 0x357fd0u: goto label_357fd0;
        case 0x357fd4u: goto label_357fd4;
        case 0x357fd8u: goto label_357fd8;
        case 0x357fdcu: goto label_357fdc;
        case 0x357fe0u: goto label_357fe0;
        case 0x357fe4u: goto label_357fe4;
        case 0x357fe8u: goto label_357fe8;
        case 0x357fecu: goto label_357fec;
        case 0x357ff0u: goto label_357ff0;
        case 0x357ff4u: goto label_357ff4;
        case 0x357ff8u: goto label_357ff8;
        case 0x357ffcu: goto label_357ffc;
        case 0x358000u: goto label_358000;
        case 0x358004u: goto label_358004;
        case 0x358008u: goto label_358008;
        case 0x35800cu: goto label_35800c;
        case 0x358010u: goto label_358010;
        case 0x358014u: goto label_358014;
        case 0x358018u: goto label_358018;
        case 0x35801cu: goto label_35801c;
        case 0x358020u: goto label_358020;
        case 0x358024u: goto label_358024;
        case 0x358028u: goto label_358028;
        case 0x35802cu: goto label_35802c;
        case 0x358030u: goto label_358030;
        case 0x358034u: goto label_358034;
        case 0x358038u: goto label_358038;
        case 0x35803cu: goto label_35803c;
        case 0x358040u: goto label_358040;
        case 0x358044u: goto label_358044;
        case 0x358048u: goto label_358048;
        case 0x35804cu: goto label_35804c;
        case 0x358050u: goto label_358050;
        case 0x358054u: goto label_358054;
        case 0x358058u: goto label_358058;
        case 0x35805cu: goto label_35805c;
        case 0x358060u: goto label_358060;
        case 0x358064u: goto label_358064;
        case 0x358068u: goto label_358068;
        case 0x35806cu: goto label_35806c;
        case 0x358070u: goto label_358070;
        case 0x358074u: goto label_358074;
        case 0x358078u: goto label_358078;
        case 0x35807cu: goto label_35807c;
        case 0x358080u: goto label_358080;
        case 0x358084u: goto label_358084;
        case 0x358088u: goto label_358088;
        case 0x35808cu: goto label_35808c;
        case 0x358090u: goto label_358090;
        case 0x358094u: goto label_358094;
        case 0x358098u: goto label_358098;
        case 0x35809cu: goto label_35809c;
        case 0x3580a0u: goto label_3580a0;
        case 0x3580a4u: goto label_3580a4;
        case 0x3580a8u: goto label_3580a8;
        case 0x3580acu: goto label_3580ac;
        case 0x3580b0u: goto label_3580b0;
        case 0x3580b4u: goto label_3580b4;
        case 0x3580b8u: goto label_3580b8;
        case 0x3580bcu: goto label_3580bc;
        case 0x3580c0u: goto label_3580c0;
        case 0x3580c4u: goto label_3580c4;
        case 0x3580c8u: goto label_3580c8;
        case 0x3580ccu: goto label_3580cc;
        case 0x3580d0u: goto label_3580d0;
        case 0x3580d4u: goto label_3580d4;
        case 0x3580d8u: goto label_3580d8;
        case 0x3580dcu: goto label_3580dc;
        case 0x3580e0u: goto label_3580e0;
        case 0x3580e4u: goto label_3580e4;
        case 0x3580e8u: goto label_3580e8;
        case 0x3580ecu: goto label_3580ec;
        case 0x3580f0u: goto label_3580f0;
        case 0x3580f4u: goto label_3580f4;
        case 0x3580f8u: goto label_3580f8;
        case 0x3580fcu: goto label_3580fc;
        case 0x358100u: goto label_358100;
        case 0x358104u: goto label_358104;
        case 0x358108u: goto label_358108;
        case 0x35810cu: goto label_35810c;
        case 0x358110u: goto label_358110;
        case 0x358114u: goto label_358114;
        case 0x358118u: goto label_358118;
        case 0x35811cu: goto label_35811c;
        case 0x358120u: goto label_358120;
        case 0x358124u: goto label_358124;
        case 0x358128u: goto label_358128;
        case 0x35812cu: goto label_35812c;
        case 0x358130u: goto label_358130;
        case 0x358134u: goto label_358134;
        case 0x358138u: goto label_358138;
        case 0x35813cu: goto label_35813c;
        case 0x358140u: goto label_358140;
        case 0x358144u: goto label_358144;
        case 0x358148u: goto label_358148;
        case 0x35814cu: goto label_35814c;
        case 0x358150u: goto label_358150;
        case 0x358154u: goto label_358154;
        case 0x358158u: goto label_358158;
        case 0x35815cu: goto label_35815c;
        case 0x358160u: goto label_358160;
        case 0x358164u: goto label_358164;
        case 0x358168u: goto label_358168;
        case 0x35816cu: goto label_35816c;
        case 0x358170u: goto label_358170;
        case 0x358174u: goto label_358174;
        case 0x358178u: goto label_358178;
        case 0x35817cu: goto label_35817c;
        case 0x358180u: goto label_358180;
        case 0x358184u: goto label_358184;
        case 0x358188u: goto label_358188;
        case 0x35818cu: goto label_35818c;
        case 0x358190u: goto label_358190;
        case 0x358194u: goto label_358194;
        case 0x358198u: goto label_358198;
        case 0x35819cu: goto label_35819c;
        case 0x3581a0u: goto label_3581a0;
        case 0x3581a4u: goto label_3581a4;
        case 0x3581a8u: goto label_3581a8;
        case 0x3581acu: goto label_3581ac;
        case 0x3581b0u: goto label_3581b0;
        case 0x3581b4u: goto label_3581b4;
        case 0x3581b8u: goto label_3581b8;
        case 0x3581bcu: goto label_3581bc;
        case 0x3581c0u: goto label_3581c0;
        case 0x3581c4u: goto label_3581c4;
        case 0x3581c8u: goto label_3581c8;
        case 0x3581ccu: goto label_3581cc;
        case 0x3581d0u: goto label_3581d0;
        case 0x3581d4u: goto label_3581d4;
        case 0x3581d8u: goto label_3581d8;
        case 0x3581dcu: goto label_3581dc;
        case 0x3581e0u: goto label_3581e0;
        case 0x3581e4u: goto label_3581e4;
        case 0x3581e8u: goto label_3581e8;
        case 0x3581ecu: goto label_3581ec;
        case 0x3581f0u: goto label_3581f0;
        case 0x3581f4u: goto label_3581f4;
        case 0x3581f8u: goto label_3581f8;
        case 0x3581fcu: goto label_3581fc;
        case 0x358200u: goto label_358200;
        case 0x358204u: goto label_358204;
        case 0x358208u: goto label_358208;
        case 0x35820cu: goto label_35820c;
        case 0x358210u: goto label_358210;
        case 0x358214u: goto label_358214;
        case 0x358218u: goto label_358218;
        case 0x35821cu: goto label_35821c;
        case 0x358220u: goto label_358220;
        case 0x358224u: goto label_358224;
        case 0x358228u: goto label_358228;
        case 0x35822cu: goto label_35822c;
        case 0x358230u: goto label_358230;
        case 0x358234u: goto label_358234;
        case 0x358238u: goto label_358238;
        case 0x35823cu: goto label_35823c;
        case 0x358240u: goto label_358240;
        case 0x358244u: goto label_358244;
        case 0x358248u: goto label_358248;
        case 0x35824cu: goto label_35824c;
        case 0x358250u: goto label_358250;
        case 0x358254u: goto label_358254;
        case 0x358258u: goto label_358258;
        case 0x35825cu: goto label_35825c;
        case 0x358260u: goto label_358260;
        case 0x358264u: goto label_358264;
        case 0x358268u: goto label_358268;
        case 0x35826cu: goto label_35826c;
        case 0x358270u: goto label_358270;
        case 0x358274u: goto label_358274;
        case 0x358278u: goto label_358278;
        case 0x35827cu: goto label_35827c;
        case 0x358280u: goto label_358280;
        case 0x358284u: goto label_358284;
        case 0x358288u: goto label_358288;
        case 0x35828cu: goto label_35828c;
        case 0x358290u: goto label_358290;
        case 0x358294u: goto label_358294;
        case 0x358298u: goto label_358298;
        case 0x35829cu: goto label_35829c;
        case 0x3582a0u: goto label_3582a0;
        case 0x3582a4u: goto label_3582a4;
        case 0x3582a8u: goto label_3582a8;
        case 0x3582acu: goto label_3582ac;
        case 0x3582b0u: goto label_3582b0;
        case 0x3582b4u: goto label_3582b4;
        case 0x3582b8u: goto label_3582b8;
        case 0x3582bcu: goto label_3582bc;
        case 0x3582c0u: goto label_3582c0;
        case 0x3582c4u: goto label_3582c4;
        case 0x3582c8u: goto label_3582c8;
        case 0x3582ccu: goto label_3582cc;
        case 0x3582d0u: goto label_3582d0;
        case 0x3582d4u: goto label_3582d4;
        case 0x3582d8u: goto label_3582d8;
        case 0x3582dcu: goto label_3582dc;
        case 0x3582e0u: goto label_3582e0;
        case 0x3582e4u: goto label_3582e4;
        case 0x3582e8u: goto label_3582e8;
        case 0x3582ecu: goto label_3582ec;
        case 0x3582f0u: goto label_3582f0;
        case 0x3582f4u: goto label_3582f4;
        case 0x3582f8u: goto label_3582f8;
        case 0x3582fcu: goto label_3582fc;
        case 0x358300u: goto label_358300;
        case 0x358304u: goto label_358304;
        case 0x358308u: goto label_358308;
        case 0x35830cu: goto label_35830c;
        case 0x358310u: goto label_358310;
        case 0x358314u: goto label_358314;
        case 0x358318u: goto label_358318;
        case 0x35831cu: goto label_35831c;
        case 0x358320u: goto label_358320;
        case 0x358324u: goto label_358324;
        case 0x358328u: goto label_358328;
        case 0x35832cu: goto label_35832c;
        case 0x358330u: goto label_358330;
        case 0x358334u: goto label_358334;
        case 0x358338u: goto label_358338;
        case 0x35833cu: goto label_35833c;
        case 0x358340u: goto label_358340;
        case 0x358344u: goto label_358344;
        case 0x358348u: goto label_358348;
        case 0x35834cu: goto label_35834c;
        case 0x358350u: goto label_358350;
        case 0x358354u: goto label_358354;
        case 0x358358u: goto label_358358;
        case 0x35835cu: goto label_35835c;
        case 0x358360u: goto label_358360;
        case 0x358364u: goto label_358364;
        case 0x358368u: goto label_358368;
        case 0x35836cu: goto label_35836c;
        case 0x358370u: goto label_358370;
        case 0x358374u: goto label_358374;
        case 0x358378u: goto label_358378;
        case 0x35837cu: goto label_35837c;
        case 0x358380u: goto label_358380;
        case 0x358384u: goto label_358384;
        case 0x358388u: goto label_358388;
        case 0x35838cu: goto label_35838c;
        case 0x358390u: goto label_358390;
        case 0x358394u: goto label_358394;
        case 0x358398u: goto label_358398;
        case 0x35839cu: goto label_35839c;
        case 0x3583a0u: goto label_3583a0;
        case 0x3583a4u: goto label_3583a4;
        case 0x3583a8u: goto label_3583a8;
        case 0x3583acu: goto label_3583ac;
        case 0x3583b0u: goto label_3583b0;
        case 0x3583b4u: goto label_3583b4;
        case 0x3583b8u: goto label_3583b8;
        case 0x3583bcu: goto label_3583bc;
        case 0x3583c0u: goto label_3583c0;
        case 0x3583c4u: goto label_3583c4;
        case 0x3583c8u: goto label_3583c8;
        case 0x3583ccu: goto label_3583cc;
        case 0x3583d0u: goto label_3583d0;
        case 0x3583d4u: goto label_3583d4;
        case 0x3583d8u: goto label_3583d8;
        case 0x3583dcu: goto label_3583dc;
        case 0x3583e0u: goto label_3583e0;
        case 0x3583e4u: goto label_3583e4;
        case 0x3583e8u: goto label_3583e8;
        case 0x3583ecu: goto label_3583ec;
        case 0x3583f0u: goto label_3583f0;
        case 0x3583f4u: goto label_3583f4;
        case 0x3583f8u: goto label_3583f8;
        case 0x3583fcu: goto label_3583fc;
        case 0x358400u: goto label_358400;
        case 0x358404u: goto label_358404;
        case 0x358408u: goto label_358408;
        case 0x35840cu: goto label_35840c;
        case 0x358410u: goto label_358410;
        case 0x358414u: goto label_358414;
        case 0x358418u: goto label_358418;
        case 0x35841cu: goto label_35841c;
        case 0x358420u: goto label_358420;
        case 0x358424u: goto label_358424;
        case 0x358428u: goto label_358428;
        case 0x35842cu: goto label_35842c;
        case 0x358430u: goto label_358430;
        case 0x358434u: goto label_358434;
        case 0x358438u: goto label_358438;
        case 0x35843cu: goto label_35843c;
        case 0x358440u: goto label_358440;
        case 0x358444u: goto label_358444;
        case 0x358448u: goto label_358448;
        case 0x35844cu: goto label_35844c;
        case 0x358450u: goto label_358450;
        case 0x358454u: goto label_358454;
        case 0x358458u: goto label_358458;
        case 0x35845cu: goto label_35845c;
        case 0x358460u: goto label_358460;
        case 0x358464u: goto label_358464;
        case 0x358468u: goto label_358468;
        case 0x35846cu: goto label_35846c;
        case 0x358470u: goto label_358470;
        case 0x358474u: goto label_358474;
        case 0x358478u: goto label_358478;
        case 0x35847cu: goto label_35847c;
        case 0x358480u: goto label_358480;
        case 0x358484u: goto label_358484;
        case 0x358488u: goto label_358488;
        case 0x35848cu: goto label_35848c;
        case 0x358490u: goto label_358490;
        case 0x358494u: goto label_358494;
        case 0x358498u: goto label_358498;
        case 0x35849cu: goto label_35849c;
        case 0x3584a0u: goto label_3584a0;
        case 0x3584a4u: goto label_3584a4;
        case 0x3584a8u: goto label_3584a8;
        case 0x3584acu: goto label_3584ac;
        case 0x3584b0u: goto label_3584b0;
        case 0x3584b4u: goto label_3584b4;
        case 0x3584b8u: goto label_3584b8;
        case 0x3584bcu: goto label_3584bc;
        case 0x3584c0u: goto label_3584c0;
        case 0x3584c4u: goto label_3584c4;
        case 0x3584c8u: goto label_3584c8;
        case 0x3584ccu: goto label_3584cc;
        case 0x3584d0u: goto label_3584d0;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584d8u: goto label_3584d8;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584e0u: goto label_3584e0;
        case 0x3584e4u: goto label_3584e4;
        case 0x3584e8u: goto label_3584e8;
        case 0x3584ecu: goto label_3584ec;
        case 0x3584f0u: goto label_3584f0;
        case 0x3584f4u: goto label_3584f4;
        case 0x3584f8u: goto label_3584f8;
        case 0x3584fcu: goto label_3584fc;
        case 0x358500u: goto label_358500;
        case 0x358504u: goto label_358504;
        case 0x358508u: goto label_358508;
        case 0x35850cu: goto label_35850c;
        case 0x358510u: goto label_358510;
        case 0x358514u: goto label_358514;
        case 0x358518u: goto label_358518;
        case 0x35851cu: goto label_35851c;
        case 0x358520u: goto label_358520;
        case 0x358524u: goto label_358524;
        case 0x358528u: goto label_358528;
        case 0x35852cu: goto label_35852c;
        case 0x358530u: goto label_358530;
        case 0x358534u: goto label_358534;
        case 0x358538u: goto label_358538;
        case 0x35853cu: goto label_35853c;
        case 0x358540u: goto label_358540;
        case 0x358544u: goto label_358544;
        case 0x358548u: goto label_358548;
        case 0x35854cu: goto label_35854c;
        case 0x358550u: goto label_358550;
        case 0x358554u: goto label_358554;
        case 0x358558u: goto label_358558;
        case 0x35855cu: goto label_35855c;
        case 0x358560u: goto label_358560;
        case 0x358564u: goto label_358564;
        case 0x358568u: goto label_358568;
        case 0x35856cu: goto label_35856c;
        default: break;
    }

    ctx->pc = 0x3579e0u;

label_3579e0:
    // 0x3579e0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3579e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3579e4:
    // 0x3579e4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3579e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3579e8:
    // 0x3579e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3579e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3579ec:
    // 0x3579ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3579ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3579f0:
    // 0x3579f0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3579f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3579f4:
    // 0x3579f4: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_3579f8:
    if (ctx->pc == 0x3579F8u) {
        ctx->pc = 0x3579F8u;
            // 0x3579f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3579FCu;
        goto label_3579fc;
    }
    ctx->pc = 0x3579F4u;
    {
        const bool branch_taken_0x3579f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3579F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3579F4u;
            // 0x3579f8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3579f4) {
            ctx->pc = 0x357A74u;
            goto label_357a74;
        }
    }
    ctx->pc = 0x3579FCu;
label_3579fc:
    // 0x3579fc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3579fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_357a00:
    // 0x357a00: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x357a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_357a04:
    // 0x357a04: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x357a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_357a08:
    // 0x357a08: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x357a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_357a0c:
    // 0x357a0c: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
label_357a10:
    if (ctx->pc == 0x357A10u) {
        ctx->pc = 0x357A10u;
            // 0x357a10: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x357A14u;
        goto label_357a14;
    }
    ctx->pc = 0x357A0Cu;
    {
        const bool branch_taken_0x357a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x357a0c) {
            ctx->pc = 0x357A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357A0Cu;
            // 0x357a10: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357A44u;
            goto label_357a44;
        }
    }
    ctx->pc = 0x357A14u;
label_357a14:
    // 0x357a14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x357a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_357a18:
    // 0x357a18: 0x50820003  beql        $a0, $v0, . + 4 + (0x3 << 2)
label_357a1c:
    if (ctx->pc == 0x357A1Cu) {
        ctx->pc = 0x357A1Cu;
            // 0x357a1c: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x357A20u;
        goto label_357a20;
    }
    ctx->pc = 0x357A18u;
    {
        const bool branch_taken_0x357a18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x357a18) {
            ctx->pc = 0x357A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357A18u;
            // 0x357a1c: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357A28u;
            goto label_357a28;
        }
    }
    ctx->pc = 0x357A20u;
label_357a20:
    // 0x357a20: 0x1000000f  b           . + 4 + (0xF << 2)
label_357a24:
    if (ctx->pc == 0x357A24u) {
        ctx->pc = 0x357A24u;
            // 0x357a24: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->pc = 0x357A28u;
        goto label_357a28;
    }
    ctx->pc = 0x357A20u;
    {
        const bool branch_taken_0x357a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A20u;
            // 0x357a24: 0x8e040d60  lw          $a0, 0xD60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a20) {
            ctx->pc = 0x357A60u;
            goto label_357a60;
        }
    }
    ctx->pc = 0x357A28u;
label_357a28:
    // 0x357a28: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x357a28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_357a2c:
    // 0x357a2c: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x357a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_357a30:
    // 0x357a30: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x357a30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_357a34:
    // 0x357a34: 0x320f809  jalr        $t9
label_357a38:
    if (ctx->pc == 0x357A38u) {
        ctx->pc = 0x357A38u;
            // 0x357a38: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->pc = 0x357A3Cu;
        goto label_357a3c;
    }
    ctx->pc = 0x357A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357A3Cu);
        ctx->pc = 0x357A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A34u;
            // 0x357a38: 0x34450da9  ori         $a1, $v0, 0xDA9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3497);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357A3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357A3Cu; }
            if (ctx->pc != 0x357A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x357A3Cu;
label_357a3c:
    // 0x357a3c: 0x1000000e  b           . + 4 + (0xE << 2)
label_357a40:
    if (ctx->pc == 0x357A40u) {
        ctx->pc = 0x357A40u;
            // 0x357a40: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x357A44u;
        goto label_357a44;
    }
    ctx->pc = 0x357A3Cu;
    {
        const bool branch_taken_0x357a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A3Cu;
            // 0x357a40: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357a3c) {
            ctx->pc = 0x357A78u;
            goto label_357a78;
        }
    }
    ctx->pc = 0x357A44u;
label_357a44:
    // 0x357a44: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x357a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_357a48:
    // 0x357a48: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x357a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_357a4c:
    // 0x357a4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x357a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_357a50:
    // 0x357a50: 0x320f809  jalr        $t9
label_357a54:
    if (ctx->pc == 0x357A54u) {
        ctx->pc = 0x357A54u;
            // 0x357a54: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->pc = 0x357A58u;
        goto label_357a58;
    }
    ctx->pc = 0x357A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357A58u);
        ctx->pc = 0x357A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A50u;
            // 0x357a54: 0x344515a9  ori         $a1, $v0, 0x15A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5545);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357A58u; }
            if (ctx->pc != 0x357A58u) { return; }
        }
        }
    }
    ctx->pc = 0x357A58u;
label_357a58:
    // 0x357a58: 0x10000006  b           . + 4 + (0x6 << 2)
label_357a5c:
    if (ctx->pc == 0x357A5Cu) {
        ctx->pc = 0x357A60u;
        goto label_357a60;
    }
    ctx->pc = 0x357A58u;
    {
        const bool branch_taken_0x357a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x357a58) {
            ctx->pc = 0x357A74u;
            goto label_357a74;
        }
    }
    ctx->pc = 0x357A60u;
label_357a60:
    // 0x357a60: 0x3c02000b  lui         $v0, 0xB
    ctx->pc = 0x357a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11 << 16));
label_357a64:
    // 0x357a64: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x357a64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_357a68:
    // 0x357a68: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x357a68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_357a6c:
    // 0x357a6c: 0x320f809  jalr        $t9
label_357a70:
    if (ctx->pc == 0x357A70u) {
        ctx->pc = 0x357A70u;
            // 0x357a70: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x357A74u;
        goto label_357a74;
    }
    ctx->pc = 0x357A6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357A74u);
        ctx->pc = 0x357A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357A6Cu;
            // 0x357a70: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357A74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357A74u; }
            if (ctx->pc != 0x357A74u) { return; }
        }
        }
    }
    ctx->pc = 0x357A74u;
label_357a74:
    // 0x357a74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x357a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_357a78:
    // 0x357a78: 0xc04f278  jal         func_13C9E0
label_357a7c:
    if (ctx->pc == 0x357A7Cu) {
        ctx->pc = 0x357A7Cu;
            // 0x357a7c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x357A80u;
        goto label_357a80;
    }
    ctx->pc = 0x357A78u;
    SET_GPR_U32(ctx, 31, 0x357A80u);
    ctx->pc = 0x357A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357A78u;
            // 0x357a7c: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A80u; }
        if (ctx->pc != 0x357A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A80u; }
        if (ctx->pc != 0x357A80u) { return; }
    }
    ctx->pc = 0x357A80u;
label_357a80:
    // 0x357a80: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x357a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_357a84:
    // 0x357a84: 0xc04ce80  jal         func_133A00
label_357a88:
    if (ctx->pc == 0x357A88u) {
        ctx->pc = 0x357A88u;
            // 0x357a88: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x357A8Cu;
        goto label_357a8c;
    }
    ctx->pc = 0x357A84u;
    SET_GPR_U32(ctx, 31, 0x357A8Cu);
    ctx->pc = 0x357A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357A84u;
            // 0x357a88: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A8Cu; }
        if (ctx->pc != 0x357A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357A8Cu; }
        if (ctx->pc != 0x357A8Cu) { return; }
    }
    ctx->pc = 0x357A8Cu;
label_357a8c:
    // 0x357a8c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x357a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_357a90:
    // 0x357a90: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x357a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_357a94:
    // 0x357a94: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x357a94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_357a98:
    // 0x357a98: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x357a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_357a9c:
    // 0x357a9c: 0xc4620180  lwc1        $f2, 0x180($v1)
    ctx->pc = 0x357a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357aa0:
    // 0x357aa0: 0xc4610184  lwc1        $f1, 0x184($v1)
    ctx->pc = 0x357aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357aa4:
    // 0x357aa4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x357aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357aa8:
    // 0x357aa8: 0x46021b02  mul.s       $f12, $f3, $f2
    ctx->pc = 0x357aa8u;
    ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_357aac:
    // 0x357aac: 0x46011b42  mul.s       $f13, $f3, $f1
    ctx->pc = 0x357aacu;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_357ab0:
    // 0x357ab0: 0xc04cbd8  jal         func_132F60
label_357ab4:
    if (ctx->pc == 0x357AB4u) {
        ctx->pc = 0x357AB4u;
            // 0x357ab4: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->pc = 0x357AB8u;
        goto label_357ab8;
    }
    ctx->pc = 0x357AB0u;
    SET_GPR_U32(ctx, 31, 0x357AB8u);
    ctx->pc = 0x357AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357AB0u;
            // 0x357ab4: 0x46001b82  mul.s       $f14, $f3, $f0 (Delay Slot)
        ctx->f[14] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357AB8u; }
        if (ctx->pc != 0x357AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357AB8u; }
        if (ctx->pc != 0x357AB8u) { return; }
    }
    ctx->pc = 0x357AB8u;
label_357ab8:
    // 0x357ab8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x357ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_357abc:
    // 0x357abc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x357abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_357ac0:
    // 0x357ac0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x357ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_357ac4:
    // 0x357ac4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x357ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_357ac8:
    // 0x357ac8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x357ac8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_357acc:
    // 0x357acc: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x357accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357ad0:
    // 0x357ad0: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x357ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357ad4:
    // 0x357ad4: 0x46010303  div.s       $f12, $f0, $f1
    ctx->pc = 0x357ad4u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[12] = ctx->f[0] / ctx->f[1];
label_357ad8:
    // 0x357ad8: 0x0  nop
    ctx->pc = 0x357ad8u;
    // NOP
label_357adc:
    // 0x357adc: 0x0  nop
    ctx->pc = 0x357adcu;
    // NOP
label_357ae0:
    // 0x357ae0: 0xc04cc70  jal         func_1331C0
label_357ae4:
    if (ctx->pc == 0x357AE4u) {
        ctx->pc = 0x357AE8u;
        goto label_357ae8;
    }
    ctx->pc = 0x357AE0u;
    SET_GPR_U32(ctx, 31, 0x357AE8u);
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357AE8u; }
        if (ctx->pc != 0x357AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357AE8u; }
        if (ctx->pc != 0x357AE8u) { return; }
    }
    ctx->pc = 0x357AE8u;
label_357ae8:
    // 0x357ae8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_357aec:
    if (ctx->pc == 0x357AECu) {
        ctx->pc = 0x357AECu;
            // 0x357aec: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x357AF0u;
        goto label_357af0;
    }
    ctx->pc = 0x357AE8u;
    {
        const bool branch_taken_0x357ae8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x357ae8) {
            ctx->pc = 0x357AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357AE8u;
            // 0x357aec: 0xc7a20034  lwc1        $f2, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x357B18u;
            goto label_357b18;
        }
    }
    ctx->pc = 0x357AF0u;
label_357af0:
    // 0x357af0: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x357af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_357af4:
    // 0x357af4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x357af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_357af8:
    // 0x357af8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_357afc:
    if (ctx->pc == 0x357AFCu) {
        ctx->pc = 0x357B00u;
        goto label_357b00;
    }
    ctx->pc = 0x357AF8u;
    {
        const bool branch_taken_0x357af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x357af8) {
            ctx->pc = 0x357B14u;
            goto label_357b14;
        }
    }
    ctx->pc = 0x357B00u;
label_357b00:
    // 0x357b00: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x357b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_357b04:
    // 0x357b04: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x357b04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_357b08:
    // 0x357b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x357b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_357b0c:
    // 0x357b0c: 0xc04cc70  jal         func_1331C0
label_357b10:
    if (ctx->pc == 0x357B10u) {
        ctx->pc = 0x357B10u;
            // 0x357b10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357B14u;
        goto label_357b14;
    }
    ctx->pc = 0x357B0Cu;
    SET_GPR_U32(ctx, 31, 0x357B14u);
    ctx->pc = 0x357B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357B0Cu;
            // 0x357b10: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B14u; }
        if (ctx->pc != 0x357B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B14u; }
        if (ctx->pc != 0x357B14u) { return; }
    }
    ctx->pc = 0x357B14u;
label_357b14:
    // 0x357b14: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x357b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357b18:
    // 0x357b18: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x357b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_357b1c:
    // 0x357b1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357b1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_357b20:
    // 0x357b20: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x357b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_357b24:
    // 0x357b24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x357b24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_357b28:
    // 0x357b28: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_357b2c:
    if (ctx->pc == 0x357B2Cu) {
        ctx->pc = 0x357B2Cu;
            // 0x357b2c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->pc = 0x357B30u;
        goto label_357b30;
    }
    ctx->pc = 0x357B28u;
    {
        const bool branch_taken_0x357b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x357b28) {
            ctx->pc = 0x357B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357B28u;
            // 0x357b2c: 0x8e24009c  lw          $a0, 0x9C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357B48u;
            goto label_357b48;
        }
    }
    ctx->pc = 0x357B30u;
label_357b30:
    // 0x357b30: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x357b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_357b34:
    // 0x357b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x357b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_357b38:
    // 0x357b38: 0x0  nop
    ctx->pc = 0x357b38u;
    // NOP
label_357b3c:
    // 0x357b3c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x357b3cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_357b40:
    // 0x357b40: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x357b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_357b44:
    // 0x357b44: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x357b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_357b48:
    // 0x357b48: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x357b48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_357b4c:
    // 0x357b4c: 0xc0e3160  jal         func_38C580
label_357b50:
    if (ctx->pc == 0x357B50u) {
        ctx->pc = 0x357B50u;
            // 0x357b50: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x357B54u;
        goto label_357b54;
    }
    ctx->pc = 0x357B4Cu;
    SET_GPR_U32(ctx, 31, 0x357B54u);
    ctx->pc = 0x357B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357B4Cu;
            // 0x357b50: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38C580u;
    if (runtime->hasFunction(0x38C580u)) {
        auto targetFn = runtime->lookupFunction(0x38C580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B54u; }
        if (ctx->pc != 0x357B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038C580_0x38c580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B54u; }
        if (ctx->pc != 0x357B54u) { return; }
    }
    ctx->pc = 0x357B54u;
label_357b54:
    // 0x357b54: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x357b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_357b58:
    // 0x357b58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357b5c:
    // 0x357b5c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x357b5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357b60:
    // 0x357b60: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x357b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
label_357b64:
    // 0x357b64: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x357b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_357b68:
    // 0x357b68: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x357b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_357b6c:
    // 0x357b6c: 0xc08bff0  jal         func_22FFC0
label_357b70:
    if (ctx->pc == 0x357B70u) {
        ctx->pc = 0x357B70u;
            // 0x357b70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357B74u;
        goto label_357b74;
    }
    ctx->pc = 0x357B6Cu;
    SET_GPR_U32(ctx, 31, 0x357B74u);
    ctx->pc = 0x357B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357B6Cu;
            // 0x357b70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B74u; }
        if (ctx->pc != 0x357B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B74u; }
        if (ctx->pc != 0x357B74u) { return; }
    }
    ctx->pc = 0x357B74u;
label_357b74:
    // 0x357b74: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x357b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_357b78:
    // 0x357b78: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x357b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_357b7c:
    // 0x357b7c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x357b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357b80:
    // 0x357b80: 0xc08914c  jal         func_224530
label_357b84:
    if (ctx->pc == 0x357B84u) {
        ctx->pc = 0x357B84u;
            // 0x357b84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357B88u;
        goto label_357b88;
    }
    ctx->pc = 0x357B80u;
    SET_GPR_U32(ctx, 31, 0x357B88u);
    ctx->pc = 0x357B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357B80u;
            // 0x357b84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B88u; }
        if (ctx->pc != 0x357B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357B88u; }
        if (ctx->pc != 0x357B88u) { return; }
    }
    ctx->pc = 0x357B88u;
label_357b88:
    // 0x357b88: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x357b88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_357b8c:
    // 0x357b8c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x357b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_357b90:
    // 0x357b90: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x357b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_357b94:
    // 0x357b94: 0x8c630968  lw          $v1, 0x968($v1)
    ctx->pc = 0x357b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2408)));
label_357b98:
    // 0x357b98: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_357b9c:
    if (ctx->pc == 0x357B9Cu) {
        ctx->pc = 0x357B9Cu;
            // 0x357b9c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x357BA0u;
        goto label_357ba0;
    }
    ctx->pc = 0x357B98u;
    {
        const bool branch_taken_0x357b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x357b98) {
            ctx->pc = 0x357B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357B98u;
            // 0x357b9c: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357BA8u;
            goto label_357ba8;
        }
    }
    ctx->pc = 0x357BA0u;
label_357ba0:
    // 0x357ba0: 0x10000004  b           . + 4 + (0x4 << 2)
label_357ba4:
    if (ctx->pc == 0x357BA4u) {
        ctx->pc = 0x357BA4u;
            // 0x357ba4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x357BA8u;
        goto label_357ba8;
    }
    ctx->pc = 0x357BA0u;
    {
        const bool branch_taken_0x357ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357BA0u;
            // 0x357ba4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357ba0) {
            ctx->pc = 0x357BB4u;
            goto label_357bb4;
        }
    }
    ctx->pc = 0x357BA8u;
label_357ba8:
    // 0x357ba8: 0xc0baaa0  jal         func_2EAA80
label_357bac:
    if (ctx->pc == 0x357BACu) {
        ctx->pc = 0x357BACu;
            // 0x357bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357BB0u;
        goto label_357bb0;
    }
    ctx->pc = 0x357BA8u;
    SET_GPR_U32(ctx, 31, 0x357BB0u);
    ctx->pc = 0x357BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357BA8u;
            // 0x357bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357BB0u; }
        if (ctx->pc != 0x357BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357BB0u; }
        if (ctx->pc != 0x357BB0u) { return; }
    }
    ctx->pc = 0x357BB0u;
label_357bb0:
    // 0x357bb0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357bb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_357bb4:
    // 0x357bb4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357bb4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357bb8:
    // 0x357bb8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357bb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357bbc:
    // 0x357bbc: 0x3e00008  jr          $ra
label_357bc0:
    if (ctx->pc == 0x357BC0u) {
        ctx->pc = 0x357BC0u;
            // 0x357bc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x357BC4u;
        goto label_357bc4;
    }
    ctx->pc = 0x357BBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357BBCu;
            // 0x357bc0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357BC4u;
label_357bc4:
    // 0x357bc4: 0x0  nop
    ctx->pc = 0x357bc4u;
    // NOP
label_357bc8:
    // 0x357bc8: 0x0  nop
    ctx->pc = 0x357bc8u;
    // NOP
label_357bcc:
    // 0x357bcc: 0x0  nop
    ctx->pc = 0x357bccu;
    // NOP
label_357bd0:
    // 0x357bd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x357bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_357bd4:
    // 0x357bd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x357bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_357bd8:
    // 0x357bd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_357bdc:
    // 0x357bdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x357bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_357be0:
    // 0x357be0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x357be0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_357be4:
    // 0x357be4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_357be8:
    if (ctx->pc == 0x357BE8u) {
        ctx->pc = 0x357BE8u;
            // 0x357be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357BECu;
        goto label_357bec;
    }
    ctx->pc = 0x357BE4u;
    {
        const bool branch_taken_0x357be4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357BE4u;
            // 0x357be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357be4) {
            ctx->pc = 0x357C1Cu;
            goto label_357c1c;
        }
    }
    ctx->pc = 0x357BECu;
label_357bec:
    // 0x357bec: 0xc04008c  jal         func_100230
label_357bf0:
    if (ctx->pc == 0x357BF0u) {
        ctx->pc = 0x357BF0u;
            // 0x357bf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x357BF4u;
        goto label_357bf4;
    }
    ctx->pc = 0x357BECu;
    SET_GPR_U32(ctx, 31, 0x357BF4u);
    ctx->pc = 0x357BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357BECu;
            // 0x357bf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357BF4u; }
        if (ctx->pc != 0x357BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357BF4u; }
        if (ctx->pc != 0x357BF4u) { return; }
    }
    ctx->pc = 0x357BF4u;
label_357bf4:
    // 0x357bf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x357bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_357bf8:
    // 0x357bf8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x357bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_357bfc:
    // 0x357bfc: 0xc0407c0  jal         func_101F00
label_357c00:
    if (ctx->pc == 0x357C00u) {
        ctx->pc = 0x357C00u;
            // 0x357c00: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x357C04u;
        goto label_357c04;
    }
    ctx->pc = 0x357BFCu;
    SET_GPR_U32(ctx, 31, 0x357C04u);
    ctx->pc = 0x357C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357BFCu;
            // 0x357c00: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C04u; }
        if (ctx->pc != 0x357C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C04u; }
        if (ctx->pc != 0x357C04u) { return; }
    }
    ctx->pc = 0x357C04u;
label_357c04:
    // 0x357c04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x357c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_357c08:
    // 0x357c08: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x357c08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_357c0c:
    // 0x357c0c: 0xc0407c0  jal         func_101F00
label_357c10:
    if (ctx->pc == 0x357C10u) {
        ctx->pc = 0x357C10u;
            // 0x357c10: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x357C14u;
        goto label_357c14;
    }
    ctx->pc = 0x357C0Cu;
    SET_GPR_U32(ctx, 31, 0x357C14u);
    ctx->pc = 0x357C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357C0Cu;
            // 0x357c10: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C14u; }
        if (ctx->pc != 0x357C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C14u; }
        if (ctx->pc != 0x357C14u) { return; }
    }
    ctx->pc = 0x357C14u;
label_357c14:
    // 0x357c14: 0xc0400a8  jal         func_1002A0
label_357c18:
    if (ctx->pc == 0x357C18u) {
        ctx->pc = 0x357C18u;
            // 0x357c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357C1Cu;
        goto label_357c1c;
    }
    ctx->pc = 0x357C14u;
    SET_GPR_U32(ctx, 31, 0x357C1Cu);
    ctx->pc = 0x357C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357C14u;
            // 0x357c18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C1Cu; }
        if (ctx->pc != 0x357C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357C1Cu; }
        if (ctx->pc != 0x357C1Cu) { return; }
    }
    ctx->pc = 0x357C1Cu;
label_357c1c:
    // 0x357c1c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x357c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_357c20:
    // 0x357c20: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x357c20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_357c24:
    // 0x357c24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_357c28:
    if (ctx->pc == 0x357C28u) {
        ctx->pc = 0x357C28u;
            // 0x357c28: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x357C2Cu;
        goto label_357c2c;
    }
    ctx->pc = 0x357C24u;
    {
        const bool branch_taken_0x357c24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c24) {
            ctx->pc = 0x357C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357C24u;
            // 0x357c28: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357C40u;
            goto label_357c40;
        }
    }
    ctx->pc = 0x357C2Cu;
label_357c2c:
    // 0x357c2c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x357c2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_357c30:
    // 0x357c30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x357c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_357c34:
    // 0x357c34: 0x320f809  jalr        $t9
label_357c38:
    if (ctx->pc == 0x357C38u) {
        ctx->pc = 0x357C38u;
            // 0x357c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357C3Cu;
        goto label_357c3c;
    }
    ctx->pc = 0x357C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357C3Cu);
        ctx->pc = 0x357C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357C34u;
            // 0x357c38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357C3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357C3Cu; }
            if (ctx->pc != 0x357C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x357C3Cu;
label_357c3c:
    // 0x357c3c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x357c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_357c40:
    // 0x357c40: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x357c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_357c44:
    // 0x357c44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_357c48:
    if (ctx->pc == 0x357C48u) {
        ctx->pc = 0x357C48u;
            // 0x357c48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x357C4Cu;
        goto label_357c4c;
    }
    ctx->pc = 0x357C44u;
    {
        const bool branch_taken_0x357c44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x357c44) {
            ctx->pc = 0x357C48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357C44u;
            // 0x357c48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357C60u;
            goto label_357c60;
        }
    }
    ctx->pc = 0x357C4Cu;
label_357c4c:
    // 0x357c4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x357c4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_357c50:
    // 0x357c50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x357c50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_357c54:
    // 0x357c54: 0x320f809  jalr        $t9
label_357c58:
    if (ctx->pc == 0x357C58u) {
        ctx->pc = 0x357C58u;
            // 0x357c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357C5Cu;
        goto label_357c5c;
    }
    ctx->pc = 0x357C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357C5Cu);
        ctx->pc = 0x357C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357C54u;
            // 0x357c58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357C5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357C5Cu; }
            if (ctx->pc != 0x357C5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x357C5Cu;
label_357c5c:
    // 0x357c5c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x357c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_357c60:
    // 0x357c60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x357c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_357c64:
    // 0x357c64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x357c64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_357c68:
    // 0x357c68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x357c68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_357c6c:
    // 0x357c6c: 0x3e00008  jr          $ra
label_357c70:
    if (ctx->pc == 0x357C70u) {
        ctx->pc = 0x357C70u;
            // 0x357c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x357C74u;
        goto label_357c74;
    }
    ctx->pc = 0x357C6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x357C70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357C6Cu;
            // 0x357c70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x357C74u;
label_357c74:
    // 0x357c74: 0x0  nop
    ctx->pc = 0x357c74u;
    // NOP
label_357c78:
    // 0x357c78: 0x0  nop
    ctx->pc = 0x357c78u;
    // NOP
label_357c7c:
    // 0x357c7c: 0x0  nop
    ctx->pc = 0x357c7cu;
    // NOP
label_357c80:
    // 0x357c80: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x357c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
label_357c84:
    // 0x357c84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x357c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_357c88:
    // 0x357c88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x357c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_357c8c:
    // 0x357c8c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x357c8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_357c90:
    // 0x357c90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x357c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_357c94:
    // 0x357c94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x357c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_357c98:
    // 0x357c98: 0xc0892d0  jal         func_224B40
label_357c9c:
    if (ctx->pc == 0x357C9Cu) {
        ctx->pc = 0x357C9Cu;
            // 0x357c9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x357CA0u;
        goto label_357ca0;
    }
    ctx->pc = 0x357C98u;
    SET_GPR_U32(ctx, 31, 0x357CA0u);
    ctx->pc = 0x357C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357C98u;
            // 0x357c9c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357CA0u; }
        if (ctx->pc != 0x357CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357CA0u; }
        if (ctx->pc != 0x357CA0u) { return; }
    }
    ctx->pc = 0x357CA0u;
label_357ca0:
    // 0x357ca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x357ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_357ca4:
    // 0x357ca4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x357ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_357ca8:
    // 0x357ca8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x357ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_357cac:
    // 0x357cac: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x357cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_357cb0:
    // 0x357cb0: 0x50830017  beql        $a0, $v1, . + 4 + (0x17 << 2)
label_357cb4:
    if (ctx->pc == 0x357CB4u) {
        ctx->pc = 0x357CB4u;
            // 0x357cb4: 0x3c024073  lui         $v0, 0x4073 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16499 << 16));
        ctx->pc = 0x357CB8u;
        goto label_357cb8;
    }
    ctx->pc = 0x357CB0u;
    {
        const bool branch_taken_0x357cb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x357cb0) {
            ctx->pc = 0x357CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357CB0u;
            // 0x357cb4: 0x3c024073  lui         $v0, 0x4073 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16499 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357D10u;
            goto label_357d10;
        }
    }
    ctx->pc = 0x357CB8u;
label_357cb8:
    // 0x357cb8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x357cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_357cbc:
    // 0x357cbc: 0x50820007  beql        $a0, $v0, . + 4 + (0x7 << 2)
label_357cc0:
    if (ctx->pc == 0x357CC0u) {
        ctx->pc = 0x357CC0u;
            // 0x357cc0: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->pc = 0x357CC4u;
        goto label_357cc4;
    }
    ctx->pc = 0x357CBCu;
    {
        const bool branch_taken_0x357cbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x357cbc) {
            ctx->pc = 0x357CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357CBCu;
            // 0x357cc0: 0x3c024080  lui         $v0, 0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357CDCu;
            goto label_357cdc;
        }
    }
    ctx->pc = 0x357CC4u;
label_357cc4:
    // 0x357cc4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x357cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_357cc8:
    // 0x357cc8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_357ccc:
    if (ctx->pc == 0x357CCCu) {
        ctx->pc = 0x357CD0u;
        goto label_357cd0;
    }
    ctx->pc = 0x357CC8u;
    {
        const bool branch_taken_0x357cc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x357cc8) {
            ctx->pc = 0x357CD8u;
            goto label_357cd8;
        }
    }
    ctx->pc = 0x357CD0u;
label_357cd0:
    // 0x357cd0: 0x1000001e  b           . + 4 + (0x1E << 2)
label_357cd4:
    if (ctx->pc == 0x357CD4u) {
        ctx->pc = 0x357CD4u;
            // 0x357cd4: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->pc = 0x357CD8u;
        goto label_357cd8;
    }
    ctx->pc = 0x357CD0u;
    {
        const bool branch_taken_0x357cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357CD0u;
            // 0x357cd4: 0x3c0240d0  lui         $v0, 0x40D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16592 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357cd0) {
            ctx->pc = 0x357D4Cu;
            goto label_357d4c;
        }
    }
    ctx->pc = 0x357CD8u;
label_357cd8:
    // 0x357cd8: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x357cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_357cdc:
    // 0x357cdc: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x357cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_357ce0:
    // 0x357ce0: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x357ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357ce4:
    // 0x357ce4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x357ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_357ce8:
    // 0x357ce8: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x357ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357cec:
    // 0x357cec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_357cf0:
    // 0x357cf0: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x357cf0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_357cf4:
    // 0x357cf4: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x357cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_357cf8:
    // 0x357cf8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x357cf8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_357cfc:
    // 0x357cfc: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x357cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_357d00:
    // 0x357d00: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x357d00u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_357d04:
    // 0x357d04: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x357d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_357d08:
    // 0x357d08: 0x1000001c  b           . + 4 + (0x1C << 2)
label_357d0c:
    if (ctx->pc == 0x357D0Cu) {
        ctx->pc = 0x357D0Cu;
            // 0x357d0c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->pc = 0x357D10u;
        goto label_357d10;
    }
    ctx->pc = 0x357D08u;
    {
        const bool branch_taken_0x357d08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357D08u;
            // 0x357d0c: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d08) {
            ctx->pc = 0x357D7Cu;
            goto label_357d7c;
        }
    }
    ctx->pc = 0x357D10u;
label_357d10:
    // 0x357d10: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x357d10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_357d14:
    // 0x357d14: 0x3c024059  lui         $v0, 0x4059
    ctx->pc = 0x357d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
label_357d18:
    // 0x357d18: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x357d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_357d1c:
    // 0x357d1c: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x357d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357d20:
    // 0x357d20: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x357d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_357d24:
    // 0x357d24: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x357d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357d28:
    // 0x357d28: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x357d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_357d2c:
    // 0x357d2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357d2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_357d30:
    // 0x357d30: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x357d30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_357d34:
    // 0x357d34: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x357d34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_357d38:
    // 0x357d38: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x357d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_357d3c:
    // 0x357d3c: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x357d3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_357d40:
    // 0x357d40: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x357d40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_357d44:
    // 0x357d44: 0x1000000d  b           . + 4 + (0xD << 2)
label_357d48:
    if (ctx->pc == 0x357D48u) {
        ctx->pc = 0x357D48u;
            // 0x357d48: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->pc = 0x357D4Cu;
        goto label_357d4c;
    }
    ctx->pc = 0x357D44u;
    {
        const bool branch_taken_0x357d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357D44u;
            // 0x357d48: 0xe7a00090  swc1        $f0, 0x90($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d44) {
            ctx->pc = 0x357D7Cu;
            goto label_357d7c;
        }
    }
    ctx->pc = 0x357D4Cu;
label_357d4c:
    // 0x357d4c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x357d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_357d50:
    // 0x357d50: 0xc6420034  lwc1        $f2, 0x34($s2)
    ctx->pc = 0x357d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357d54:
    // 0x357d54: 0x3c024128  lui         $v0, 0x4128
    ctx->pc = 0x357d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16680 << 16));
label_357d58:
    // 0x357d58: 0xc6400030  lwc1        $f0, 0x30($s2)
    ctx->pc = 0x357d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357d5c:
    // 0x357d5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x357d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_357d60:
    // 0x357d60: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x357d60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_357d64:
    // 0x357d64: 0xc6440038  lwc1        $f4, 0x38($s2)
    ctx->pc = 0x357d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_357d68:
    // 0x357d68: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x357d68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_357d6c:
    // 0x357d6c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x357d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_357d70:
    // 0x357d70: 0xe7a40098  swc1        $f4, 0x98($sp)
    ctx->pc = 0x357d70u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_357d74:
    // 0x357d74: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x357d74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_357d78:
    // 0x357d78: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x357d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_357d7c:
    // 0x357d7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357d80:
    // 0x357d80: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x357d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_357d84:
    // 0x357d84: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x357d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_357d88:
    // 0x357d88: 0xc0a7a88  jal         func_29EA20
label_357d8c:
    if (ctx->pc == 0x357D8Cu) {
        ctx->pc = 0x357D8Cu;
            // 0x357d8c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x357D90u;
        goto label_357d90;
    }
    ctx->pc = 0x357D88u;
    SET_GPR_U32(ctx, 31, 0x357D90u);
    ctx->pc = 0x357D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357D88u;
            // 0x357d8c: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357D90u; }
        if (ctx->pc != 0x357D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357D90u; }
        if (ctx->pc != 0x357D90u) { return; }
    }
    ctx->pc = 0x357D90u;
label_357d90:
    // 0x357d90: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x357d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_357d94:
    // 0x357d94: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357d98:
    // 0x357d98: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_357d9c:
    if (ctx->pc == 0x357D9Cu) {
        ctx->pc = 0x357D9Cu;
            // 0x357d9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x357DA0u;
        goto label_357da0;
    }
    ctx->pc = 0x357D98u;
    {
        const bool branch_taken_0x357d98 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x357D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357D98u;
            // 0x357d9c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357d98) {
            ctx->pc = 0x357DB4u;
            goto label_357db4;
        }
    }
    ctx->pc = 0x357DA0u;
label_357da0:
    // 0x357da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357da4:
    // 0x357da4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x357da4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_357da8:
    // 0x357da8: 0xc0804bc  jal         func_2012F0
label_357dac:
    if (ctx->pc == 0x357DACu) {
        ctx->pc = 0x357DACu;
            // 0x357dac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x357DB0u;
        goto label_357db0;
    }
    ctx->pc = 0x357DA8u;
    SET_GPR_U32(ctx, 31, 0x357DB0u);
    ctx->pc = 0x357DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DA8u;
            // 0x357dac: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2012F0u;
    if (runtime->hasFunction(0x2012F0u)) {
        auto targetFn = runtime->lookupFunction(0x2012F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DB0u; }
        if (ctx->pc != 0x357DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002012F0_0x2012f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DB0u; }
        if (ctx->pc != 0x357DB0u) { return; }
    }
    ctx->pc = 0x357DB0u;
label_357db0:
    // 0x357db0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357db0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357db4:
    // 0x357db4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x357db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_357db8:
    // 0x357db8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x357db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_357dbc:
    // 0x357dbc: 0xc0b6e68  jal         func_2DB9A0
label_357dc0:
    if (ctx->pc == 0x357DC0u) {
        ctx->pc = 0x357DC0u;
            // 0x357dc0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->pc = 0x357DC4u;
        goto label_357dc4;
    }
    ctx->pc = 0x357DBCu;
    SET_GPR_U32(ctx, 31, 0x357DC4u);
    ctx->pc = 0x357DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DBCu;
            // 0x357dc0: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DC4u; }
        if (ctx->pc != 0x357DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DC4u; }
        if (ctx->pc != 0x357DC4u) { return; }
    }
    ctx->pc = 0x357DC4u;
label_357dc4:
    // 0x357dc4: 0xc0b6dac  jal         func_2DB6B0
label_357dc8:
    if (ctx->pc == 0x357DC8u) {
        ctx->pc = 0x357DC8u;
            // 0x357dc8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x357DCCu;
        goto label_357dcc;
    }
    ctx->pc = 0x357DC4u;
    SET_GPR_U32(ctx, 31, 0x357DCCu);
    ctx->pc = 0x357DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DC4u;
            // 0x357dc8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DCCu; }
        if (ctx->pc != 0x357DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DCCu; }
        if (ctx->pc != 0x357DCCu) { return; }
    }
    ctx->pc = 0x357DCCu;
label_357dcc:
    // 0x357dcc: 0xc0cac94  jal         func_32B250
label_357dd0:
    if (ctx->pc == 0x357DD0u) {
        ctx->pc = 0x357DD0u;
            // 0x357dd0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x357DD4u;
        goto label_357dd4;
    }
    ctx->pc = 0x357DCCu;
    SET_GPR_U32(ctx, 31, 0x357DD4u);
    ctx->pc = 0x357DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DCCu;
            // 0x357dd0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DD4u; }
        if (ctx->pc != 0x357DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DD4u; }
        if (ctx->pc != 0x357DD4u) { return; }
    }
    ctx->pc = 0x357DD4u;
label_357dd4:
    // 0x357dd4: 0xc0cac84  jal         func_32B210
label_357dd8:
    if (ctx->pc == 0x357DD8u) {
        ctx->pc = 0x357DD8u;
            // 0x357dd8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x357DDCu;
        goto label_357ddc;
    }
    ctx->pc = 0x357DD4u;
    SET_GPR_U32(ctx, 31, 0x357DDCu);
    ctx->pc = 0x357DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DD4u;
            // 0x357dd8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DDCu; }
        if (ctx->pc != 0x357DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DDCu; }
        if (ctx->pc != 0x357DDCu) { return; }
    }
    ctx->pc = 0x357DDCu;
label_357ddc:
    // 0x357ddc: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x357ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_357de0:
    // 0x357de0: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x357de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_357de4:
    // 0x357de4: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x357de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_357de8:
    // 0x357de8: 0xc0a5a68  jal         func_2969A0
label_357dec:
    if (ctx->pc == 0x357DECu) {
        ctx->pc = 0x357DECu;
            // 0x357dec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x357DF0u;
        goto label_357df0;
    }
    ctx->pc = 0x357DE8u;
    SET_GPR_U32(ctx, 31, 0x357DF0u);
    ctx->pc = 0x357DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357DE8u;
            // 0x357dec: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DF0u; }
        if (ctx->pc != 0x357DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357DF0u; }
        if (ctx->pc != 0x357DF0u) { return; }
    }
    ctx->pc = 0x357DF0u;
label_357df0:
    // 0x357df0: 0xafb100a4  sw          $s1, 0xA4($sp)
    ctx->pc = 0x357df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 17));
label_357df4:
    // 0x357df4: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x357df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_357df8:
    // 0x357df8: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x357df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357dfc:
    // 0x357dfc: 0x3449cccd  ori         $t1, $v0, 0xCCCD
    ctx->pc = 0x357dfcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_357e00:
    // 0x357e00: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x357e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357e04:
    // 0x357e04: 0x3c0200e0  lui         $v0, 0xE0
    ctx->pc = 0x357e04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)224 << 16));
label_357e08:
    // 0x357e08: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x357e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357e0c:
    // 0x357e0c: 0x34430040  ori         $v1, $v0, 0x40
    ctx->pc = 0x357e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_357e10:
    // 0x357e10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357e14:
    // 0x357e14: 0x3c083e80  lui         $t0, 0x3E80
    ctx->pc = 0x357e14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16000 << 16));
label_357e18:
    // 0x357e18: 0xc7a90060  lwc1        $f9, 0x60($sp)
    ctx->pc = 0x357e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_357e1c:
    // 0x357e1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x357e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_357e20:
    // 0x357e20: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x357e20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_357e24:
    // 0x357e24: 0xafa000bc  sw          $zero, 0xBC($sp)
    ctx->pc = 0x357e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
label_357e28:
    // 0x357e28: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x357e28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_357e2c:
    // 0x357e2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x357e2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357e30:
    // 0x357e30: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x357e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_357e34:
    // 0x357e34: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x357e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_357e38:
    // 0x357e38: 0xc64d002c  lwc1        $f13, 0x2C($s2)
    ctx->pc = 0x357e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_357e3c:
    // 0x357e3c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x357e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_357e40:
    // 0x357e40: 0xc64c0028  lwc1        $f12, 0x28($s2)
    ctx->pc = 0x357e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_357e44:
    // 0x357e44: 0xc64b0024  lwc1        $f11, 0x24($s2)
    ctx->pc = 0x357e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_357e48:
    // 0x357e48: 0xc64a0020  lwc1        $f10, 0x20($s2)
    ctx->pc = 0x357e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_357e4c:
    // 0x357e4c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x357e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357e50:
    // 0x357e50: 0xc7a2007c  lwc1        $f2, 0x7C($sp)
    ctx->pc = 0x357e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357e54:
    // 0x357e54: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x357e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357e58:
    // 0x357e58: 0xafa90138  sw          $t1, 0x138($sp)
    ctx->pc = 0x357e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 9));
label_357e5c:
    // 0x357e5c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x357e5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_357e60:
    // 0x357e60: 0xafa8013c  sw          $t0, 0x13C($sp)
    ctx->pc = 0x357e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 8));
label_357e64:
    // 0x357e64: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x357e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357e68:
    // 0x357e68: 0xa3a70150  sb          $a3, 0x150($sp)
    ctx->pc = 0x357e68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 7));
label_357e6c:
    // 0x357e6c: 0xe7a2010c  swc1        $f2, 0x10C($sp)
    ctx->pc = 0x357e6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_357e70:
    // 0x357e70: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x357e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_357e74:
    // 0x357e74: 0xe7a10110  swc1        $f1, 0x110($sp)
    ctx->pc = 0x357e74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_357e78:
    // 0x357e78: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x357e78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_357e7c:
    // 0x357e7c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x357e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_357e80:
    // 0x357e80: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x357e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357e84:
    // 0x357e84: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x357e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357e88:
    // 0x357e88: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x357e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357e8c:
    // 0x357e8c: 0xe7a20118  swc1        $f2, 0x118($sp)
    ctx->pc = 0x357e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_357e90:
    // 0x357e90: 0xe7a1011c  swc1        $f1, 0x11C($sp)
    ctx->pc = 0x357e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_357e94:
    // 0x357e94: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x357e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_357e98:
    // 0x357e98: 0xc7a80064  lwc1        $f8, 0x64($sp)
    ctx->pc = 0x357e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_357e9c:
    // 0x357e9c: 0xc7a70068  lwc1        $f7, 0x68($sp)
    ctx->pc = 0x357e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_357ea0:
    // 0x357ea0: 0xc7a6006c  lwc1        $f6, 0x6C($sp)
    ctx->pc = 0x357ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_357ea4:
    // 0x357ea4: 0xc7a50070  lwc1        $f5, 0x70($sp)
    ctx->pc = 0x357ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_357ea8:
    // 0x357ea8: 0xc7a40074  lwc1        $f4, 0x74($sp)
    ctx->pc = 0x357ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_357eac:
    // 0x357eac: 0xc7a30078  lwc1        $f3, 0x78($sp)
    ctx->pc = 0x357eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_357eb0:
    // 0x357eb0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x357eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_357eb4:
    // 0x357eb4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x357eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_357eb8:
    // 0x357eb8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x357eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_357ebc:
    // 0x357ebc: 0xe7aa00c0  swc1        $f10, 0xC0($sp)
    ctx->pc = 0x357ebcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_357ec0:
    // 0x357ec0: 0xe7ab00c4  swc1        $f11, 0xC4($sp)
    ctx->pc = 0x357ec0u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_357ec4:
    // 0x357ec4: 0xe7ac00c8  swc1        $f12, 0xC8($sp)
    ctx->pc = 0x357ec4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_357ec8:
    // 0x357ec8: 0xe7ad00cc  swc1        $f13, 0xCC($sp)
    ctx->pc = 0x357ec8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_357ecc:
    // 0x357ecc: 0xe7a900f0  swc1        $f9, 0xF0($sp)
    ctx->pc = 0x357eccu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_357ed0:
    // 0x357ed0: 0xe7a800f4  swc1        $f8, 0xF4($sp)
    ctx->pc = 0x357ed0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_357ed4:
    // 0x357ed4: 0xe7a700f8  swc1        $f7, 0xF8($sp)
    ctx->pc = 0x357ed4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_357ed8:
    // 0x357ed8: 0xe7a600fc  swc1        $f6, 0xFC($sp)
    ctx->pc = 0x357ed8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_357edc:
    // 0x357edc: 0xe7a50100  swc1        $f5, 0x100($sp)
    ctx->pc = 0x357edcu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_357ee0:
    // 0x357ee0: 0xe7a40104  swc1        $f4, 0x104($sp)
    ctx->pc = 0x357ee0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_357ee4:
    // 0x357ee4: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x357ee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_357ee8:
    // 0x357ee8: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x357ee8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_357eec:
    // 0x357eec: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x357eecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_357ef0:
    // 0x357ef0: 0xc0a7a88  jal         func_29EA20
label_357ef4:
    if (ctx->pc == 0x357EF4u) {
        ctx->pc = 0x357EF4u;
            // 0x357ef4: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x357EF8u;
        goto label_357ef8;
    }
    ctx->pc = 0x357EF0u;
    SET_GPR_U32(ctx, 31, 0x357EF8u);
    ctx->pc = 0x357EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357EF0u;
            // 0x357ef4: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357EF8u; }
        if (ctx->pc != 0x357EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357EF8u; }
        if (ctx->pc != 0x357EF8u) { return; }
    }
    ctx->pc = 0x357EF8u;
label_357ef8:
    // 0x357ef8: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x357ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_357efc:
    // 0x357efc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x357efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357f00:
    // 0x357f00: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_357f04:
    if (ctx->pc == 0x357F04u) {
        ctx->pc = 0x357F04u;
            // 0x357f04: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x357F08u;
        goto label_357f08;
    }
    ctx->pc = 0x357F00u;
    {
        const bool branch_taken_0x357f00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x357F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357F00u;
            // 0x357f04: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357f00) {
            ctx->pc = 0x357F50u;
            goto label_357f50;
        }
    }
    ctx->pc = 0x357F08u;
label_357f08:
    // 0x357f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357f0c:
    // 0x357f0c: 0xc088ef4  jal         func_223BD0
label_357f10:
    if (ctx->pc == 0x357F10u) {
        ctx->pc = 0x357F10u;
            // 0x357f10: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x357F14u;
        goto label_357f14;
    }
    ctx->pc = 0x357F0Cu;
    SET_GPR_U32(ctx, 31, 0x357F14u);
    ctx->pc = 0x357F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357F0Cu;
            // 0x357f10: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F14u; }
        if (ctx->pc != 0x357F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F14u; }
        if (ctx->pc != 0x357F14u) { return; }
    }
    ctx->pc = 0x357F14u;
label_357f14:
    // 0x357f14: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x357f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_357f18:
    // 0x357f18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x357f18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_357f1c:
    // 0x357f1c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x357f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_357f20:
    // 0x357f20: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x357f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_357f24:
    // 0x357f24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x357f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_357f28:
    // 0x357f28: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x357f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_357f2c:
    // 0x357f2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357f30:
    // 0x357f30: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x357f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_357f34:
    // 0x357f34: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x357f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_357f38:
    // 0x357f38: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x357f38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_357f3c:
    // 0x357f3c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x357f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
label_357f40:
    // 0x357f40: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x357f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_357f44:
    // 0x357f44: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x357f44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_357f48:
    // 0x357f48: 0xc088b38  jal         func_222CE0
label_357f4c:
    if (ctx->pc == 0x357F4Cu) {
        ctx->pc = 0x357F4Cu;
            // 0x357f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357F50u;
        goto label_357f50;
    }
    ctx->pc = 0x357F48u;
    SET_GPR_U32(ctx, 31, 0x357F50u);
    ctx->pc = 0x357F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357F48u;
            // 0x357f4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F50u; }
        if (ctx->pc != 0x357F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357F50u; }
        if (ctx->pc != 0x357F50u) { return; }
    }
    ctx->pc = 0x357F50u;
label_357f50:
    // 0x357f50: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x357f50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_357f54:
    // 0x357f54: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_357f58:
    if (ctx->pc == 0x357F58u) {
        ctx->pc = 0x357F58u;
            // 0x357f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357F5Cu;
        goto label_357f5c;
    }
    ctx->pc = 0x357F54u;
    {
        const bool branch_taken_0x357f54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x357f54) {
            ctx->pc = 0x357F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x357F54u;
            // 0x357f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x357F98u;
            goto label_357f98;
        }
    }
    ctx->pc = 0x357F5Cu;
label_357f5c:
    // 0x357f5c: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x357f5cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_357f60:
    // 0x357f60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x357f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_357f64:
    // 0x357f64: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x357f64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_357f68:
    // 0x357f68: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x357f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_357f6c:
    // 0x357f6c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x357f6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_357f70:
    // 0x357f70: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_357f74:
    if (ctx->pc == 0x357F74u) {
        ctx->pc = 0x357F78u;
        goto label_357f78;
    }
    ctx->pc = 0x357F70u;
    {
        const bool branch_taken_0x357f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x357f70) {
            ctx->pc = 0x357F94u;
            goto label_357f94;
        }
    }
    ctx->pc = 0x357F78u;
label_357f78:
    // 0x357f78: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_357f7c:
    if (ctx->pc == 0x357F7Cu) {
        ctx->pc = 0x357F80u;
        goto label_357f80;
    }
    ctx->pc = 0x357F78u;
    {
        const bool branch_taken_0x357f78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x357f78) {
            ctx->pc = 0x357F94u;
            goto label_357f94;
        }
    }
    ctx->pc = 0x357F80u;
label_357f80:
    // 0x357f80: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x357f80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_357f84:
    // 0x357f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357f88:
    // 0x357f88: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x357f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_357f8c:
    // 0x357f8c: 0x320f809  jalr        $t9
label_357f90:
    if (ctx->pc == 0x357F90u) {
        ctx->pc = 0x357F90u;
            // 0x357f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357F94u;
        goto label_357f94;
    }
    ctx->pc = 0x357F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x357F94u);
        ctx->pc = 0x357F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357F8Cu;
            // 0x357f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x357F94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x357F94u; }
            if (ctx->pc != 0x357F94u) { return; }
        }
        }
    }
    ctx->pc = 0x357F94u;
label_357f94:
    // 0x357f94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x357f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357f98:
    // 0x357f98: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x357f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_357f9c:
    // 0x357f9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x357f9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_357fa0:
    // 0x357fa0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x357fa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_357fa4:
    // 0x357fa4: 0xc08914c  jal         func_224530
label_357fa8:
    if (ctx->pc == 0x357FA8u) {
        ctx->pc = 0x357FA8u;
            // 0x357fa8: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x357FACu;
        goto label_357fac;
    }
    ctx->pc = 0x357FA4u;
    SET_GPR_U32(ctx, 31, 0x357FACu);
    ctx->pc = 0x357FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FA4u;
            // 0x357fa8: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FACu; }
        if (ctx->pc != 0x357FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FACu; }
        if (ctx->pc != 0x357FACu) { return; }
    }
    ctx->pc = 0x357FACu;
label_357fac:
    // 0x357fac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357fb0:
    // 0x357fb0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x357fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357fb4:
    // 0x357fb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x357fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_357fb8:
    // 0x357fb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x357fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_357fbc:
    // 0x357fbc: 0xc08c164  jal         func_230590
label_357fc0:
    if (ctx->pc == 0x357FC0u) {
        ctx->pc = 0x357FC0u;
            // 0x357fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357FC4u;
        goto label_357fc4;
    }
    ctx->pc = 0x357FBCu;
    SET_GPR_U32(ctx, 31, 0x357FC4u);
    ctx->pc = 0x357FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FBCu;
            // 0x357fc0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FC4u; }
        if (ctx->pc != 0x357FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FC4u; }
        if (ctx->pc != 0x357FC4u) { return; }
    }
    ctx->pc = 0x357FC4u;
label_357fc4:
    // 0x357fc4: 0xae500050  sw          $s0, 0x50($s2)
    ctx->pc = 0x357fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 16));
label_357fc8:
    // 0x357fc8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x357fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_357fcc:
    // 0x357fcc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x357fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_357fd0:
    // 0x357fd0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x357fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_357fd4:
    // 0x357fd4: 0xc0a7a88  jal         func_29EA20
label_357fd8:
    if (ctx->pc == 0x357FD8u) {
        ctx->pc = 0x357FD8u;
            // 0x357fd8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x357FDCu;
        goto label_357fdc;
    }
    ctx->pc = 0x357FD4u;
    SET_GPR_U32(ctx, 31, 0x357FDCu);
    ctx->pc = 0x357FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FD4u;
            // 0x357fd8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FDCu; }
        if (ctx->pc != 0x357FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FDCu; }
        if (ctx->pc != 0x357FDCu) { return; }
    }
    ctx->pc = 0x357FDCu;
label_357fdc:
    // 0x357fdc: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x357fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_357fe0:
    // 0x357fe0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x357fe0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_357fe4:
    // 0x357fe4: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_357fe8:
    if (ctx->pc == 0x357FE8u) {
        ctx->pc = 0x357FE8u;
            // 0x357fe8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x357FECu;
        goto label_357fec;
    }
    ctx->pc = 0x357FE4u;
    {
        const bool branch_taken_0x357fe4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x357FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x357FE4u;
            // 0x357fe8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x357fe4) {
            ctx->pc = 0x358008u;
            goto label_358008;
        }
    }
    ctx->pc = 0x357FECu;
label_357fec:
    // 0x357fec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x357fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_357ff0:
    // 0x357ff0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x357ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_357ff4:
    // 0x357ff4: 0xc0869d0  jal         func_21A740
label_357ff8:
    if (ctx->pc == 0x357FF8u) {
        ctx->pc = 0x357FF8u;
            // 0x357ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x357FFCu;
        goto label_357ffc;
    }
    ctx->pc = 0x357FF4u;
    SET_GPR_U32(ctx, 31, 0x357FFCu);
    ctx->pc = 0x357FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FF4u;
            // 0x357ff8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FFCu; }
        if (ctx->pc != 0x357FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FFCu; }
        if (ctx->pc != 0x357FFCu) { return; }
    }
    ctx->pc = 0x357FFCu;
label_357ffc:
    // 0x357ffc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x357ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_358000:
    // 0x358000: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x358000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_358004:
    // 0x358004: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x358004u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_358008:
    // 0x358008: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x358008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_35800c:
    // 0x35800c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x35800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_358010:
    // 0x358010: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x358010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_358014:
    // 0x358014: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x358014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_358018:
    // 0x358018: 0xc08c650  jal         func_231940
label_35801c:
    if (ctx->pc == 0x35801Cu) {
        ctx->pc = 0x35801Cu;
            // 0x35801c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358020u;
        goto label_358020;
    }
    ctx->pc = 0x358018u;
    SET_GPR_U32(ctx, 31, 0x358020u);
    ctx->pc = 0x35801Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358018u;
            // 0x35801c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358020u; }
        if (ctx->pc != 0x358020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358020u; }
        if (ctx->pc != 0x358020u) { return; }
    }
    ctx->pc = 0x358020u;
label_358020:
    // 0x358020: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x358020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_358024:
    // 0x358024: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x358024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_358028:
    // 0x358028: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x358028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_35802c:
    // 0x35802c: 0x8c420968  lw          $v0, 0x968($v0)
    ctx->pc = 0x35802cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_358030:
    // 0x358030: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_358034:
    if (ctx->pc == 0x358034u) {
        ctx->pc = 0x358034u;
            // 0x358034: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x358038u;
        goto label_358038;
    }
    ctx->pc = 0x358030u;
    {
        const bool branch_taken_0x358030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x358030) {
            ctx->pc = 0x358034u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358030u;
            // 0x358034: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358040u;
            goto label_358040;
        }
    }
    ctx->pc = 0x358038u;
label_358038:
    // 0x358038: 0x1000008f  b           . + 4 + (0x8F << 2)
label_35803c:
    if (ctx->pc == 0x35803Cu) {
        ctx->pc = 0x35803Cu;
            // 0x35803c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x358040u;
        goto label_358040;
    }
    ctx->pc = 0x358038u;
    {
        const bool branch_taken_0x358038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35803Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358038u;
            // 0x35803c: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358038) {
            ctx->pc = 0x358278u;
            goto label_358278;
        }
    }
    ctx->pc = 0x358040u;
label_358040:
    // 0x358040: 0xc040180  jal         func_100600
label_358044:
    if (ctx->pc == 0x358044u) {
        ctx->pc = 0x358048u;
        goto label_358048;
    }
    ctx->pc = 0x358040u;
    SET_GPR_U32(ctx, 31, 0x358048u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358048u; }
        if (ctx->pc != 0x358048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358048u; }
        if (ctx->pc != 0x358048u) { return; }
    }
    ctx->pc = 0x358048u;
label_358048:
    // 0x358048: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_35804c:
    // 0x35804c: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_358050:
    if (ctx->pc == 0x358050u) {
        ctx->pc = 0x358054u;
        goto label_358054;
    }
    ctx->pc = 0x35804Cu;
    {
        const bool branch_taken_0x35804c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x35804c) {
            ctx->pc = 0x3580D0u;
            goto label_3580d0;
        }
    }
    ctx->pc = 0x358054u;
label_358054:
    // 0x358054: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x358054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_358058:
    // 0x358058: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x358058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_35805c:
    // 0x35805c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x35805cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_358060:
    // 0x358060: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x358060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_358064:
    // 0x358064: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x358064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_358068:
    // 0x358068: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x358068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_35806c:
    // 0x35806c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x35806cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_358070:
    // 0x358070: 0xc040138  jal         func_1004E0
label_358074:
    if (ctx->pc == 0x358074u) {
        ctx->pc = 0x358074u;
            // 0x358074: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x358078u;
        goto label_358078;
    }
    ctx->pc = 0x358070u;
    SET_GPR_U32(ctx, 31, 0x358078u);
    ctx->pc = 0x358074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358070u;
            // 0x358074: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358078u; }
        if (ctx->pc != 0x358078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358078u; }
        if (ctx->pc != 0x358078u) { return; }
    }
    ctx->pc = 0x358078u;
label_358078:
    // 0x358078: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x358078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_35807c:
    // 0x35807c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x35807cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358080:
    // 0x358080: 0xc040138  jal         func_1004E0
label_358084:
    if (ctx->pc == 0x358084u) {
        ctx->pc = 0x358084u;
            // 0x358084: 0x240404f0  addiu       $a0, $zero, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1264));
        ctx->pc = 0x358088u;
        goto label_358088;
    }
    ctx->pc = 0x358080u;
    SET_GPR_U32(ctx, 31, 0x358088u);
    ctx->pc = 0x358084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358080u;
            // 0x358084: 0x240404f0  addiu       $a0, $zero, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358088u; }
        if (ctx->pc != 0x358088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358088u; }
        if (ctx->pc != 0x358088u) { return; }
    }
    ctx->pc = 0x358088u;
label_358088:
    // 0x358088: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x358088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_35808c:
    // 0x35808c: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x35808cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_358090:
    // 0x358090: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x358090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358094:
    // 0x358094: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_358098:
    // 0x358098: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x358098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_35809c:
    // 0x35809c: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x35809cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3580a0:
    // 0x3580a0: 0xc040840  jal         func_102100
label_3580a4:
    if (ctx->pc == 0x3580A4u) {
        ctx->pc = 0x3580A4u;
            // 0x3580a4: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x3580A8u;
        goto label_3580a8;
    }
    ctx->pc = 0x3580A0u;
    SET_GPR_U32(ctx, 31, 0x3580A8u);
    ctx->pc = 0x3580A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3580A0u;
            // 0x3580a4: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580A8u; }
        if (ctx->pc != 0x3580A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580A8u; }
        if (ctx->pc != 0x3580A8u) { return; }
    }
    ctx->pc = 0x3580A8u;
label_3580a8:
    // 0x3580a8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3580a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3580ac:
    // 0x3580ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3580acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3580b0:
    // 0x3580b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3580b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3580b4:
    // 0x3580b4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3580b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3580b8:
    // 0x3580b8: 0x2883000d  slti        $v1, $a0, 0xD
    ctx->pc = 0x3580b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)13) ? 1 : 0);
label_3580bc:
    // 0x3580bc: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3580bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3580c0:
    // 0x3580c0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3580c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3580c4:
    // 0x3580c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_3580c8:
    if (ctx->pc == 0x3580C8u) {
        ctx->pc = 0x3580CCu;
        goto label_3580cc;
    }
    ctx->pc = 0x3580C4u;
    {
        const bool branch_taken_0x3580c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3580c4) {
            ctx->pc = 0x3580B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3580b0;
        }
    }
    ctx->pc = 0x3580CCu;
label_3580cc:
    // 0x3580cc: 0x0  nop
    ctx->pc = 0x3580ccu;
    // NOP
label_3580d0:
    // 0x3580d0: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x3580d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_3580d4:
    // 0x3580d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3580d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3580d8:
    // 0x3580d8: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3580d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3580dc:
    // 0x3580dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3580dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3580e0:
    // 0x3580e0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3580e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3580e4:
    // 0x3580e4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3580e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3580e8:
    // 0x3580e8: 0xc0e7d2c  jal         func_39F4B0
label_3580ec:
    if (ctx->pc == 0x3580ECu) {
        ctx->pc = 0x3580ECu;
            // 0x3580ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3580F0u;
        goto label_3580f0;
    }
    ctx->pc = 0x3580E8u;
    SET_GPR_U32(ctx, 31, 0x3580F0u);
    ctx->pc = 0x3580ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3580E8u;
            // 0x3580ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580F0u; }
        if (ctx->pc != 0x3580F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580F0u; }
        if (ctx->pc != 0x3580F0u) { return; }
    }
    ctx->pc = 0x3580F0u;
label_3580f0:
    // 0x3580f0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3580f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3580f4:
    // 0x3580f4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3580f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3580f8:
    // 0x3580f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3580f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3580fc:
    // 0x3580fc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3580fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_358100:
    // 0x358100: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358104:
    // 0x358104: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x358104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_358108:
    // 0x358108: 0xc0e7d2c  jal         func_39F4B0
label_35810c:
    if (ctx->pc == 0x35810Cu) {
        ctx->pc = 0x35810Cu;
            // 0x35810c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358110u;
        goto label_358110;
    }
    ctx->pc = 0x358108u;
    SET_GPR_U32(ctx, 31, 0x358110u);
    ctx->pc = 0x35810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358108u;
            // 0x35810c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358110u; }
        if (ctx->pc != 0x358110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358110u; }
        if (ctx->pc != 0x358110u) { return; }
    }
    ctx->pc = 0x358110u;
label_358110:
    // 0x358110: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358114:
    // 0x358114: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358118:
    // 0x358118: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35811c:
    // 0x35811c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x35811cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_358120:
    // 0x358120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358124:
    // 0x358124: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x358124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_358128:
    // 0x358128: 0xc0e7d2c  jal         func_39F4B0
label_35812c:
    if (ctx->pc == 0x35812Cu) {
        ctx->pc = 0x35812Cu;
            // 0x35812c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358130u;
        goto label_358130;
    }
    ctx->pc = 0x358128u;
    SET_GPR_U32(ctx, 31, 0x358130u);
    ctx->pc = 0x35812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358128u;
            // 0x35812c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358130u; }
        if (ctx->pc != 0x358130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358130u; }
        if (ctx->pc != 0x358130u) { return; }
    }
    ctx->pc = 0x358130u;
label_358130:
    // 0x358130: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358134:
    // 0x358134: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358138:
    // 0x358138: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35813c:
    // 0x35813c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x35813cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_358140:
    // 0x358140: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358144:
    // 0x358144: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x358144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_358148:
    // 0x358148: 0xc0e7d2c  jal         func_39F4B0
label_35814c:
    if (ctx->pc == 0x35814Cu) {
        ctx->pc = 0x35814Cu;
            // 0x35814c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358150u;
        goto label_358150;
    }
    ctx->pc = 0x358148u;
    SET_GPR_U32(ctx, 31, 0x358150u);
    ctx->pc = 0x35814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358148u;
            // 0x35814c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358150u; }
        if (ctx->pc != 0x358150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358150u; }
        if (ctx->pc != 0x358150u) { return; }
    }
    ctx->pc = 0x358150u;
label_358150:
    // 0x358150: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358154:
    // 0x358154: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358158:
    // 0x358158: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358158u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35815c:
    // 0x35815c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x35815cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_358160:
    // 0x358160: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358164:
    // 0x358164: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x358164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_358168:
    // 0x358168: 0xc0e7d2c  jal         func_39F4B0
label_35816c:
    if (ctx->pc == 0x35816Cu) {
        ctx->pc = 0x35816Cu;
            // 0x35816c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358170u;
        goto label_358170;
    }
    ctx->pc = 0x358168u;
    SET_GPR_U32(ctx, 31, 0x358170u);
    ctx->pc = 0x35816Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358168u;
            // 0x35816c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358170u; }
        if (ctx->pc != 0x358170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358170u; }
        if (ctx->pc != 0x358170u) { return; }
    }
    ctx->pc = 0x358170u;
label_358170:
    // 0x358170: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358174:
    // 0x358174: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358178:
    // 0x358178: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35817c:
    // 0x35817c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x35817cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_358180:
    // 0x358180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358184:
    // 0x358184: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x358184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_358188:
    // 0x358188: 0xc0e7d2c  jal         func_39F4B0
label_35818c:
    if (ctx->pc == 0x35818Cu) {
        ctx->pc = 0x35818Cu;
            // 0x35818c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358190u;
        goto label_358190;
    }
    ctx->pc = 0x358188u;
    SET_GPR_U32(ctx, 31, 0x358190u);
    ctx->pc = 0x35818Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358188u;
            // 0x35818c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358190u; }
        if (ctx->pc != 0x358190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358190u; }
        if (ctx->pc != 0x358190u) { return; }
    }
    ctx->pc = 0x358190u;
label_358190:
    // 0x358190: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358194:
    // 0x358194: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358198:
    // 0x358198: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35819c:
    // 0x35819c: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x35819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3581a0:
    // 0x3581a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3581a4:
    // 0x3581a4: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x3581a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_3581a8:
    // 0x3581a8: 0xc0e7d2c  jal         func_39F4B0
label_3581ac:
    if (ctx->pc == 0x3581ACu) {
        ctx->pc = 0x3581ACu;
            // 0x3581ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3581B0u;
        goto label_3581b0;
    }
    ctx->pc = 0x3581A8u;
    SET_GPR_U32(ctx, 31, 0x3581B0u);
    ctx->pc = 0x3581ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3581A8u;
            // 0x3581ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581B0u; }
        if (ctx->pc != 0x3581B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581B0u; }
        if (ctx->pc != 0x3581B0u) { return; }
    }
    ctx->pc = 0x3581B0u;
label_3581b0:
    // 0x3581b0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3581b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3581b4:
    // 0x3581b4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3581b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3581b8:
    // 0x3581b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3581b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3581bc:
    // 0x3581bc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x3581bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_3581c0:
    // 0x3581c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3581c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3581c4:
    // 0x3581c4: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x3581c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_3581c8:
    // 0x3581c8: 0xc0e7d2c  jal         func_39F4B0
label_3581cc:
    if (ctx->pc == 0x3581CCu) {
        ctx->pc = 0x3581CCu;
            // 0x3581cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3581D0u;
        goto label_3581d0;
    }
    ctx->pc = 0x3581C8u;
    SET_GPR_U32(ctx, 31, 0x3581D0u);
    ctx->pc = 0x3581CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3581C8u;
            // 0x3581cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581D0u; }
        if (ctx->pc != 0x3581D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581D0u; }
        if (ctx->pc != 0x3581D0u) { return; }
    }
    ctx->pc = 0x3581D0u;
label_3581d0:
    // 0x3581d0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3581d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3581d4:
    // 0x3581d4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3581d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3581d8:
    // 0x3581d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3581d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3581dc:
    // 0x3581dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3581dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3581e0:
    // 0x3581e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3581e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3581e4:
    // 0x3581e4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x3581e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3581e8:
    // 0x3581e8: 0xc0e7d2c  jal         func_39F4B0
label_3581ec:
    if (ctx->pc == 0x3581ECu) {
        ctx->pc = 0x3581ECu;
            // 0x3581ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3581F0u;
        goto label_3581f0;
    }
    ctx->pc = 0x3581E8u;
    SET_GPR_U32(ctx, 31, 0x3581F0u);
    ctx->pc = 0x3581ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3581E8u;
            // 0x3581ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581F0u; }
        if (ctx->pc != 0x3581F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581F0u; }
        if (ctx->pc != 0x3581F0u) { return; }
    }
    ctx->pc = 0x3581F0u;
label_3581f0:
    // 0x3581f0: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x3581f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_3581f4:
    // 0x3581f4: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x3581f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_3581f8:
    // 0x3581f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3581f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3581fc:
    // 0x3581fc: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x3581fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_358200:
    // 0x358200: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358204:
    // 0x358204: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x358204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_358208:
    // 0x358208: 0xc0e7d2c  jal         func_39F4B0
label_35820c:
    if (ctx->pc == 0x35820Cu) {
        ctx->pc = 0x35820Cu;
            // 0x35820c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358210u;
        goto label_358210;
    }
    ctx->pc = 0x358208u;
    SET_GPR_U32(ctx, 31, 0x358210u);
    ctx->pc = 0x35820Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358208u;
            // 0x35820c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358210u; }
        if (ctx->pc != 0x358210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358210u; }
        if (ctx->pc != 0x358210u) { return; }
    }
    ctx->pc = 0x358210u;
label_358210:
    // 0x358210: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358214:
    // 0x358214: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358218:
    // 0x358218: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358218u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35821c:
    // 0x35821c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x35821cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_358220:
    // 0x358220: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358224:
    // 0x358224: 0x8c440028  lw          $a0, 0x28($v0)
    ctx->pc = 0x358224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_358228:
    // 0x358228: 0xc0e7d2c  jal         func_39F4B0
label_35822c:
    if (ctx->pc == 0x35822Cu) {
        ctx->pc = 0x35822Cu;
            // 0x35822c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358230u;
        goto label_358230;
    }
    ctx->pc = 0x358228u;
    SET_GPR_U32(ctx, 31, 0x358230u);
    ctx->pc = 0x35822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358228u;
            // 0x35822c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358230u; }
        if (ctx->pc != 0x358230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358230u; }
        if (ctx->pc != 0x358230u) { return; }
    }
    ctx->pc = 0x358230u;
label_358230:
    // 0x358230: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358234:
    // 0x358234: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358238:
    // 0x358238: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358238u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35823c:
    // 0x35823c: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x35823cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_358240:
    // 0x358240: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358244:
    // 0x358244: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x358244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_358248:
    // 0x358248: 0xc0e7d2c  jal         func_39F4B0
label_35824c:
    if (ctx->pc == 0x35824Cu) {
        ctx->pc = 0x35824Cu;
            // 0x35824c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358250u;
        goto label_358250;
    }
    ctx->pc = 0x358248u;
    SET_GPR_U32(ctx, 31, 0x358250u);
    ctx->pc = 0x35824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358248u;
            // 0x35824c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358250u; }
        if (ctx->pc != 0x358250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358250u; }
        if (ctx->pc != 0x358250u) { return; }
    }
    ctx->pc = 0x358250u;
label_358250:
    // 0x358250: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_358254:
    // 0x358254: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358258:
    // 0x358258: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_35825c:
    // 0x35825c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x35825cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_358260:
    // 0x358260: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358264:
    // 0x358264: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x358264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_358268:
    // 0x358268: 0xc0e7d2c  jal         func_39F4B0
label_35826c:
    if (ctx->pc == 0x35826Cu) {
        ctx->pc = 0x35826Cu;
            // 0x35826c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358270u;
        goto label_358270;
    }
    ctx->pc = 0x358268u;
    SET_GPR_U32(ctx, 31, 0x358270u);
    ctx->pc = 0x35826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358268u;
            // 0x35826c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358270u; }
        if (ctx->pc != 0x358270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358270u; }
        if (ctx->pc != 0x358270u) { return; }
    }
    ctx->pc = 0x358270u;
label_358270:
    // 0x358270: 0x10000036  b           . + 4 + (0x36 << 2)
label_358274:
    if (ctx->pc == 0x358274u) {
        ctx->pc = 0x358274u;
            // 0x358274: 0x8e4800b0  lw          $t0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->pc = 0x358278u;
        goto label_358278;
    }
    ctx->pc = 0x358270u;
    {
        const bool branch_taken_0x358270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358270u;
            // 0x358274: 0x8e4800b0  lw          $t0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358270) {
            ctx->pc = 0x35834Cu;
            goto label_35834c;
        }
    }
    ctx->pc = 0x358278u;
label_358278:
    // 0x358278: 0xc040180  jal         func_100600
label_35827c:
    if (ctx->pc == 0x35827Cu) {
        ctx->pc = 0x358280u;
        goto label_358280;
    }
    ctx->pc = 0x358278u;
    SET_GPR_U32(ctx, 31, 0x358280u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358280u; }
        if (ctx->pc != 0x358280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358280u; }
        if (ctx->pc != 0x358280u) { return; }
    }
    ctx->pc = 0x358280u;
label_358280:
    // 0x358280: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x358280u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358284:
    // 0x358284: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
label_358288:
    if (ctx->pc == 0x358288u) {
        ctx->pc = 0x35828Cu;
        goto label_35828c;
    }
    ctx->pc = 0x358284u;
    {
        const bool branch_taken_0x358284 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358284) {
            ctx->pc = 0x358308u;
            goto label_358308;
        }
    }
    ctx->pc = 0x35828Cu;
label_35828c:
    // 0x35828c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x35828cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_358290:
    // 0x358290: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x358290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358294:
    // 0x358294: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x358294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_358298:
    // 0x358298: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_35829c:
    // 0x35829c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x35829cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_3582a0:
    // 0x3582a0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x3582a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_3582a4:
    // 0x3582a4: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x3582a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_3582a8:
    // 0x3582a8: 0xc040138  jal         func_1004E0
label_3582ac:
    if (ctx->pc == 0x3582ACu) {
        ctx->pc = 0x3582ACu;
            // 0x3582ac: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3582B0u;
        goto label_3582b0;
    }
    ctx->pc = 0x3582A8u;
    SET_GPR_U32(ctx, 31, 0x3582B0u);
    ctx->pc = 0x3582ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3582A8u;
            // 0x3582ac: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582B0u; }
        if (ctx->pc != 0x3582B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582B0u; }
        if (ctx->pc != 0x3582B0u) { return; }
    }
    ctx->pc = 0x3582B0u;
label_3582b0:
    // 0x3582b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3582b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_3582b4:
    // 0x3582b4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3582b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3582b8:
    // 0x3582b8: 0xc040138  jal         func_1004E0
label_3582bc:
    if (ctx->pc == 0x3582BCu) {
        ctx->pc = 0x3582BCu;
            // 0x3582bc: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x3582C0u;
        goto label_3582c0;
    }
    ctx->pc = 0x3582B8u;
    SET_GPR_U32(ctx, 31, 0x3582C0u);
    ctx->pc = 0x3582BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3582B8u;
            // 0x3582bc: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582C0u; }
        if (ctx->pc != 0x3582C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582C0u; }
        if (ctx->pc != 0x3582C0u) { return; }
    }
    ctx->pc = 0x3582C0u;
label_3582c0:
    // 0x3582c0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x3582c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_3582c4:
    // 0x3582c4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x3582c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_3582c8:
    // 0x3582c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3582c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3582cc:
    // 0x3582cc: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x3582ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_3582d0:
    // 0x3582d0: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x3582d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_3582d4:
    // 0x3582d4: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x3582d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_3582d8:
    // 0x3582d8: 0xc040840  jal         func_102100
label_3582dc:
    if (ctx->pc == 0x3582DCu) {
        ctx->pc = 0x3582DCu;
            // 0x3582dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x3582E0u;
        goto label_3582e0;
    }
    ctx->pc = 0x3582D8u;
    SET_GPR_U32(ctx, 31, 0x3582E0u);
    ctx->pc = 0x3582DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3582D8u;
            // 0x3582dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582E0u; }
        if (ctx->pc != 0x3582E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582E0u; }
        if (ctx->pc != 0x3582E0u) { return; }
    }
    ctx->pc = 0x3582E0u;
label_3582e0:
    // 0x3582e0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x3582e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_3582e4:
    // 0x3582e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3582e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3582e8:
    // 0x3582e8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3582e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3582ec:
    // 0x3582ec: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3582ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3582f0:
    // 0x3582f0: 0x28830002  slti        $v1, $a0, 0x2
    ctx->pc = 0x3582f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_3582f4:
    // 0x3582f4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3582f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_3582f8:
    // 0x3582f8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x3582f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_3582fc:
    // 0x3582fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_358300:
    if (ctx->pc == 0x358300u) {
        ctx->pc = 0x358304u;
        goto label_358304;
    }
    ctx->pc = 0x3582FCu;
    {
        const bool branch_taken_0x3582fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3582fc) {
            ctx->pc = 0x3582E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3582e8;
        }
    }
    ctx->pc = 0x358304u;
label_358304:
    // 0x358304: 0x0  nop
    ctx->pc = 0x358304u;
    // NOP
label_358308:
    // 0x358308: 0xae50009c  sw          $s0, 0x9C($s2)
    ctx->pc = 0x358308u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 16));
label_35830c:
    // 0x35830c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x35830cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_358310:
    // 0x358310: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x358310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358314:
    // 0x358314: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358314u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_358318:
    // 0x358318: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x358318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35831c:
    // 0x35831c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x35831cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358320:
    // 0x358320: 0xc0e7d2c  jal         func_39F4B0
label_358324:
    if (ctx->pc == 0x358324u) {
        ctx->pc = 0x358324u;
            // 0x358324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358328u;
        goto label_358328;
    }
    ctx->pc = 0x358320u;
    SET_GPR_U32(ctx, 31, 0x358328u);
    ctx->pc = 0x358324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358320u;
            // 0x358324: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358328u; }
        if (ctx->pc != 0x358328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358328u; }
        if (ctx->pc != 0x358328u) { return; }
    }
    ctx->pc = 0x358328u;
label_358328:
    // 0x358328: 0x8e43009c  lw          $v1, 0x9C($s2)
    ctx->pc = 0x358328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
label_35832c:
    // 0x35832c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x35832cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_358330:
    // 0x358330: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x358330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_358334:
    // 0x358334: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x358334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358338:
    // 0x358338: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35833c:
    // 0x35833c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x35833cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_358340:
    // 0x358340: 0xc0e7d2c  jal         func_39F4B0
label_358344:
    if (ctx->pc == 0x358344u) {
        ctx->pc = 0x358344u;
            // 0x358344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358348u;
        goto label_358348;
    }
    ctx->pc = 0x358340u;
    SET_GPR_U32(ctx, 31, 0x358348u);
    ctx->pc = 0x358344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358340u;
            // 0x358344: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358348u; }
        if (ctx->pc != 0x358348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358348u; }
        if (ctx->pc != 0x358348u) { return; }
    }
    ctx->pc = 0x358348u;
label_358348:
    // 0x358348: 0x8e4800b0  lw          $t0, 0xB0($s2)
    ctx->pc = 0x358348u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_35834c:
    // 0x35834c: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x35834cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_358350:
    // 0x358350: 0x2406ffdf  addiu       $a2, $zero, -0x21
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_358354:
    // 0x358354: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x358354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_358358:
    // 0x358358: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x358358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35835c:
    // 0x35835c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x35835cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_358360:
    // 0x358360: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x358360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_358364:
    // 0x358364: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x358364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_358368:
    // 0x358368: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x358368u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_35836c:
    // 0x35836c: 0xae4700b0  sw          $a3, 0xB0($s2)
    ctx->pc = 0x35836cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 7));
label_358370:
    // 0x358370: 0xae4600b0  sw          $a2, 0xB0($s2)
    ctx->pc = 0x358370u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 6));
label_358374:
    // 0x358374: 0xa2450064  sb          $a1, 0x64($s2)
    ctx->pc = 0x358374u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 100), (uint8_t)GPR_U32(ctx, 5));
label_358378:
    // 0x358378: 0xa2440065  sb          $a0, 0x65($s2)
    ctx->pc = 0x358378u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 101), (uint8_t)GPR_U32(ctx, 4));
label_35837c:
    // 0x35837c: 0xa2430068  sb          $v1, 0x68($s2)
    ctx->pc = 0x35837cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 3));
label_358380:
    // 0x358380: 0xa2440069  sb          $a0, 0x69($s2)
    ctx->pc = 0x358380u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 4));
label_358384:
    // 0x358384: 0xa243006a  sb          $v1, 0x6A($s2)
    ctx->pc = 0x358384u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 3));
label_358388:
    // 0x358388: 0xa243006b  sb          $v1, 0x6B($s2)
    ctx->pc = 0x358388u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 3));
label_35838c:
    // 0x35838c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x35838cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_358390:
    // 0x358390: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x358390u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_358394:
    // 0x358394: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x358394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_358398:
    // 0x358398: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358398u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_35839c:
    // 0x35839c: 0x3e00008  jr          $ra
label_3583a0:
    if (ctx->pc == 0x3583A0u) {
        ctx->pc = 0x3583A0u;
            // 0x3583a0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x3583A4u;
        goto label_3583a4;
    }
    ctx->pc = 0x35839Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3583A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35839Cu;
            // 0x3583a0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3583A4u;
label_3583a4:
    // 0x3583a4: 0x0  nop
    ctx->pc = 0x3583a4u;
    // NOP
label_3583a8:
    // 0x3583a8: 0x0  nop
    ctx->pc = 0x3583a8u;
    // NOP
label_3583ac:
    // 0x3583ac: 0x0  nop
    ctx->pc = 0x3583acu;
    // NOP
label_3583b0:
    // 0x3583b0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3583b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3583b4:
    // 0x3583b4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3583b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3583b8:
    // 0x3583b8: 0x24428630  addiu       $v0, $v0, -0x79D0
    ctx->pc = 0x3583b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936112));
label_3583bc:
    // 0x3583bc: 0x24637b90  addiu       $v1, $v1, 0x7B90
    ctx->pc = 0x3583bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 31632));
label_3583c0:
    // 0x3583c0: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x3583c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
label_3583c4:
    // 0x3583c4: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x3583c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_3583c8:
    // 0x3583c8: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x3583c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_3583cc:
    // 0x3583cc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x3583ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
label_3583d0:
    // 0x3583d0: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x3583d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
label_3583d4:
    // 0x3583d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3583d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3583d8:
    // 0x3583d8: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x3583d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
label_3583dc:
    // 0x3583dc: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x3583dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_3583e0:
    // 0x3583e0: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3583e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3583e4:
    // 0x3583e4: 0xa0800020  sb          $zero, 0x20($a0)
    ctx->pc = 0x3583e4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 0));
label_3583e8:
    // 0x3583e8: 0x3e00008  jr          $ra
label_3583ec:
    if (ctx->pc == 0x3583ECu) {
        ctx->pc = 0x3583ECu;
            // 0x3583ec: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x3583F0u;
        goto label_3583f0;
    }
    ctx->pc = 0x3583E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3583ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3583E8u;
            // 0x3583ec: 0xac830024  sw          $v1, 0x24($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3583F0u;
label_3583f0:
    // 0x3583f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3583f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3583f4:
    // 0x3583f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3583f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3583f8:
    // 0x3583f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3583f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3583fc:
    // 0x3583fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3583fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358400:
    // 0x358400: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_358404:
    if (ctx->pc == 0x358404u) {
        ctx->pc = 0x358404u;
            // 0x358404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358408u;
        goto label_358408;
    }
    ctx->pc = 0x358400u;
    {
        const bool branch_taken_0x358400 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x358400) {
            ctx->pc = 0x358404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358400u;
            // 0x358404: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x35842Cu;
            goto label_35842c;
        }
    }
    ctx->pc = 0x358408u;
label_358408:
    // 0x358408: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x358408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_35840c:
    // 0x35840c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x35840cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_358410:
    // 0x358410: 0x24638630  addiu       $v1, $v1, -0x79D0
    ctx->pc = 0x358410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936112));
label_358414:
    // 0x358414: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x358414u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_358418:
    // 0x358418: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_35841c:
    if (ctx->pc == 0x35841Cu) {
        ctx->pc = 0x35841Cu;
            // 0x35841c: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x358420u;
        goto label_358420;
    }
    ctx->pc = 0x358418u;
    {
        const bool branch_taken_0x358418 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x35841Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358418u;
            // 0x35841c: 0xae030024  sw          $v1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358418) {
            ctx->pc = 0x358428u;
            goto label_358428;
        }
    }
    ctx->pc = 0x358420u;
label_358420:
    // 0x358420: 0xc0400a8  jal         func_1002A0
label_358424:
    if (ctx->pc == 0x358424u) {
        ctx->pc = 0x358428u;
        goto label_358428;
    }
    ctx->pc = 0x358420u;
    SET_GPR_U32(ctx, 31, 0x358428u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358428u; }
        if (ctx->pc != 0x358428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358428u; }
        if (ctx->pc != 0x358428u) { return; }
    }
    ctx->pc = 0x358428u;
label_358428:
    // 0x358428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x358428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35842c:
    // 0x35842c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35842cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358430:
    // 0x358430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358434:
    // 0x358434: 0x3e00008  jr          $ra
label_358438:
    if (ctx->pc == 0x358438u) {
        ctx->pc = 0x358438u;
            // 0x358438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35843Cu;
        goto label_35843c;
    }
    ctx->pc = 0x358434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358434u;
            // 0x358438: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35843Cu;
label_35843c:
    // 0x35843c: 0x0  nop
    ctx->pc = 0x35843cu;
    // NOP
label_358440:
    // 0x358440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_358444:
    // 0x358444: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_358448:
    // 0x358448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35844c:
    // 0x35844c: 0xc0e3580  jal         func_38D600
label_358450:
    if (ctx->pc == 0x358450u) {
        ctx->pc = 0x358450u;
            // 0x358450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358454u;
        goto label_358454;
    }
    ctx->pc = 0x35844Cu;
    SET_GPR_U32(ctx, 31, 0x358454u);
    ctx->pc = 0x358450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35844Cu;
            // 0x358450: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358454u; }
        if (ctx->pc != 0x358454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358454u; }
        if (ctx->pc != 0x358454u) { return; }
    }
    ctx->pc = 0x358454u;
label_358454:
    // 0x358454: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358458:
    // 0x358458: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x358458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_35845c:
    // 0x35845c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x35845cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_358460:
    // 0x358460: 0xae000070  sw          $zero, 0x70($s0)
    ctx->pc = 0x358460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 0));
label_358464:
    // 0x358464: 0x2403f9df  addiu       $v1, $zero, -0x621
    ctx->pc = 0x358464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965727));
label_358468:
    // 0x358468: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x358468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
label_35846c:
    // 0x35846c: 0xae040080  sw          $a0, 0x80($s0)
    ctx->pc = 0x35846cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 4));
label_358470:
    // 0x358470: 0x8e0400b0  lw          $a0, 0xB0($s0)
    ctx->pc = 0x358470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_358474:
    // 0x358474: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x358474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_358478:
    // 0x358478: 0x34630600  ori         $v1, $v1, 0x600
    ctx->pc = 0x358478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1536);
label_35847c:
    // 0x35847c: 0xae0300b0  sw          $v1, 0xB0($s0)
    ctx->pc = 0x35847cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 3));
label_358480:
    // 0x358480: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358484:
    // 0x358484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358488:
    // 0x358488: 0x3e00008  jr          $ra
label_35848c:
    if (ctx->pc == 0x35848Cu) {
        ctx->pc = 0x35848Cu;
            // 0x35848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x358490u;
        goto label_358490;
    }
    ctx->pc = 0x358488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35848Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358488u;
            // 0x35848c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358490u;
label_358490:
    // 0x358490: 0x3e00008  jr          $ra
label_358494:
    if (ctx->pc == 0x358494u) {
        ctx->pc = 0x358494u;
            // 0x358494: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->pc = 0x358498u;
        goto label_358498;
    }
    ctx->pc = 0x358490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358490u;
            // 0x358494: 0x24020820  addiu       $v0, $zero, 0x820 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2080));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358498u;
label_358498:
    // 0x358498: 0x0  nop
    ctx->pc = 0x358498u;
    // NOP
label_35849c:
    // 0x35849c: 0x0  nop
    ctx->pc = 0x35849cu;
    // NOP
label_3584a0:
    // 0x3584a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3584a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_3584a4:
    // 0x3584a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3584a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3584a8:
    // 0x3584a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3584a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_3584ac:
    // 0x3584ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3584acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3584b0:
    // 0x3584b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3584b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_3584b4:
    // 0x3584b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3584b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3584b8:
    // 0x3584b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3584b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3584bc:
    // 0x3584bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3584bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3584c0:
    // 0x3584c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3584c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3584c4:
    // 0x3584c4: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x3584c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_3584c8:
    // 0x3584c8: 0x50830021  beql        $a0, $v1, . + 4 + (0x21 << 2)
label_3584cc:
    if (ctx->pc == 0x3584CCu) {
        ctx->pc = 0x3584CCu;
            // 0x3584cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x3584D0u;
        goto label_3584d0;
    }
    ctx->pc = 0x3584C8u;
    {
        const bool branch_taken_0x3584c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x3584c8) {
            ctx->pc = 0x3584CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3584C8u;
            // 0x3584cc: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358550u;
            goto label_358550;
        }
    }
    ctx->pc = 0x3584D0u;
label_3584d0:
    // 0x3584d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3584d4:
    if (ctx->pc == 0x3584D4u) {
        ctx->pc = 0x3584D8u;
        goto label_3584d8;
    }
    ctx->pc = 0x3584D0u;
    {
        const bool branch_taken_0x3584d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584d0) {
            ctx->pc = 0x3584E0u;
            goto label_3584e0;
        }
    }
    ctx->pc = 0x3584D8u;
label_3584d8:
    // 0x3584d8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3584dc:
    if (ctx->pc == 0x3584DCu) {
        ctx->pc = 0x3584E0u;
        goto label_3584e0;
    }
    ctx->pc = 0x3584D8u;
    {
        const bool branch_taken_0x3584d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3584d8) {
            ctx->pc = 0x35854Cu;
            goto label_35854c;
        }
    }
    ctx->pc = 0x3584E0u;
label_3584e0:
    // 0x3584e0: 0xc0d6164  jal         func_358590
label_3584e4:
    if (ctx->pc == 0x3584E4u) {
        ctx->pc = 0x3584E8u;
        goto label_3584e8;
    }
    ctx->pc = 0x3584E0u;
    SET_GPR_U32(ctx, 31, 0x3584E8u);
    ctx->pc = 0x358590u;
    if (runtime->hasFunction(0x358590u)) {
        auto targetFn = runtime->lookupFunction(0x358590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3584E8u; }
        if (ctx->pc != 0x3584E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358590_0x358590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3584E8u; }
        if (ctx->pc != 0x3584E8u) { return; }
    }
    ctx->pc = 0x3584E8u;
label_3584e8:
    // 0x3584e8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x3584e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_3584ec:
    // 0x3584ec: 0x8e82009c  lw          $v0, 0x9C($s4)
    ctx->pc = 0x3584ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 156)));
label_3584f0:
    // 0x3584f0: 0x8c710030  lw          $s1, 0x30($v1)
    ctx->pc = 0x3584f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_3584f4:
    // 0x3584f4: 0xac51000c  sw          $s1, 0xC($v0)
    ctx->pc = 0x3584f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 17));
label_3584f8:
    // 0x3584f8: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x3584f8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3584fc:
    // 0x3584fc: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x3584fcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_358500:
    // 0x358500: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x358500u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_358504:
    // 0x358504: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_358508:
    // 0x358508: 0x24a51728  addiu       $a1, $a1, 0x1728
    ctx->pc = 0x358508u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5928));
label_35850c:
    // 0x35850c: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x35850cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_358510:
    // 0x358510: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x358510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_358514:
    // 0x358514: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x358514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_358518:
    // 0x358518: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x358518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_35851c:
    // 0x35851c: 0xc0d615c  jal         func_358570
label_358520:
    if (ctx->pc == 0x358520u) {
        ctx->pc = 0x358520u;
            // 0x358520: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->pc = 0x358524u;
        goto label_358524;
    }
    ctx->pc = 0x35851Cu;
    SET_GPR_U32(ctx, 31, 0x358524u);
    ctx->pc = 0x358520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35851Cu;
            // 0x358520: 0x2222021  addu        $a0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x358570u;
    if (runtime->hasFunction(0x358570u)) {
        auto targetFn = runtime->lookupFunction(0x358570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358524u; }
        if (ctx->pc != 0x358524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00358570_0x358570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358524u; }
        if (ctx->pc != 0x358524u) { return; }
    }
    ctx->pc = 0x358524u;
label_358524:
    // 0x358524: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x358524u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_358528:
    // 0x358528: 0xa2020020  sb          $v0, 0x20($s0)
    ctx->pc = 0x358528u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 2));
label_35852c:
    // 0x35852c: 0x1e40fff4  bgtz        $s2, . + 4 + (-0xC << 2)
label_358530:
    if (ctx->pc == 0x358530u) {
        ctx->pc = 0x358530u;
            // 0x358530: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x358534u;
        goto label_358534;
    }
    ctx->pc = 0x35852Cu;
    {
        const bool branch_taken_0x35852c = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x358530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35852Cu;
            // 0x358530: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35852c) {
            ctx->pc = 0x358500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358500;
        }
    }
    ctx->pc = 0x358534u;
label_358534:
    // 0x358534: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x358534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_358538:
    // 0x358538: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x358538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_35853c:
    // 0x35853c: 0x320f809  jalr        $t9
label_358540:
    if (ctx->pc == 0x358540u) {
        ctx->pc = 0x358540u;
            // 0x358540: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358544u;
        goto label_358544;
    }
    ctx->pc = 0x35853Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x358544u);
        ctx->pc = 0x358540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35853Cu;
            // 0x358540: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x358544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x358544u; }
            if (ctx->pc != 0x358544u) { return; }
        }
        }
    }
    ctx->pc = 0x358544u;
label_358544:
    // 0x358544: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358548:
    // 0x358548: 0xae8300d0  sw          $v1, 0xD0($s4)
    ctx->pc = 0x358548u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 208), GPR_U32(ctx, 3));
label_35854c:
    // 0x35854c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x35854cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_358550:
    // 0x358550: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x358550u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_358554:
    // 0x358554: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x358554u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_358558:
    // 0x358558: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x358558u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_35855c:
    // 0x35855c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35855cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_358560:
    // 0x358560: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358564:
    // 0x358564: 0x3e00008  jr          $ra
label_358568:
    if (ctx->pc == 0x358568u) {
        ctx->pc = 0x358568u;
            // 0x358568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x35856Cu;
        goto label_35856c;
    }
    ctx->pc = 0x358564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358564u;
            // 0x358568: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35856Cu;
label_35856c:
    // 0x35856c: 0x0  nop
    ctx->pc = 0x35856cu;
    // NOP
}
