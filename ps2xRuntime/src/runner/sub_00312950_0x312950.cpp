#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00312950
// Address: 0x312950 - 0x313240
void sub_00312950_0x312950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312950_0x312950");
#endif

    switch (ctx->pc) {
        case 0x312950u: goto label_312950;
        case 0x312954u: goto label_312954;
        case 0x312958u: goto label_312958;
        case 0x31295cu: goto label_31295c;
        case 0x312960u: goto label_312960;
        case 0x312964u: goto label_312964;
        case 0x312968u: goto label_312968;
        case 0x31296cu: goto label_31296c;
        case 0x312970u: goto label_312970;
        case 0x312974u: goto label_312974;
        case 0x312978u: goto label_312978;
        case 0x31297cu: goto label_31297c;
        case 0x312980u: goto label_312980;
        case 0x312984u: goto label_312984;
        case 0x312988u: goto label_312988;
        case 0x31298cu: goto label_31298c;
        case 0x312990u: goto label_312990;
        case 0x312994u: goto label_312994;
        case 0x312998u: goto label_312998;
        case 0x31299cu: goto label_31299c;
        case 0x3129a0u: goto label_3129a0;
        case 0x3129a4u: goto label_3129a4;
        case 0x3129a8u: goto label_3129a8;
        case 0x3129acu: goto label_3129ac;
        case 0x3129b0u: goto label_3129b0;
        case 0x3129b4u: goto label_3129b4;
        case 0x3129b8u: goto label_3129b8;
        case 0x3129bcu: goto label_3129bc;
        case 0x3129c0u: goto label_3129c0;
        case 0x3129c4u: goto label_3129c4;
        case 0x3129c8u: goto label_3129c8;
        case 0x3129ccu: goto label_3129cc;
        case 0x3129d0u: goto label_3129d0;
        case 0x3129d4u: goto label_3129d4;
        case 0x3129d8u: goto label_3129d8;
        case 0x3129dcu: goto label_3129dc;
        case 0x3129e0u: goto label_3129e0;
        case 0x3129e4u: goto label_3129e4;
        case 0x3129e8u: goto label_3129e8;
        case 0x3129ecu: goto label_3129ec;
        case 0x3129f0u: goto label_3129f0;
        case 0x3129f4u: goto label_3129f4;
        case 0x3129f8u: goto label_3129f8;
        case 0x3129fcu: goto label_3129fc;
        case 0x312a00u: goto label_312a00;
        case 0x312a04u: goto label_312a04;
        case 0x312a08u: goto label_312a08;
        case 0x312a0cu: goto label_312a0c;
        case 0x312a10u: goto label_312a10;
        case 0x312a14u: goto label_312a14;
        case 0x312a18u: goto label_312a18;
        case 0x312a1cu: goto label_312a1c;
        case 0x312a20u: goto label_312a20;
        case 0x312a24u: goto label_312a24;
        case 0x312a28u: goto label_312a28;
        case 0x312a2cu: goto label_312a2c;
        case 0x312a30u: goto label_312a30;
        case 0x312a34u: goto label_312a34;
        case 0x312a38u: goto label_312a38;
        case 0x312a3cu: goto label_312a3c;
        case 0x312a40u: goto label_312a40;
        case 0x312a44u: goto label_312a44;
        case 0x312a48u: goto label_312a48;
        case 0x312a4cu: goto label_312a4c;
        case 0x312a50u: goto label_312a50;
        case 0x312a54u: goto label_312a54;
        case 0x312a58u: goto label_312a58;
        case 0x312a5cu: goto label_312a5c;
        case 0x312a60u: goto label_312a60;
        case 0x312a64u: goto label_312a64;
        case 0x312a68u: goto label_312a68;
        case 0x312a6cu: goto label_312a6c;
        case 0x312a70u: goto label_312a70;
        case 0x312a74u: goto label_312a74;
        case 0x312a78u: goto label_312a78;
        case 0x312a7cu: goto label_312a7c;
        case 0x312a80u: goto label_312a80;
        case 0x312a84u: goto label_312a84;
        case 0x312a88u: goto label_312a88;
        case 0x312a8cu: goto label_312a8c;
        case 0x312a90u: goto label_312a90;
        case 0x312a94u: goto label_312a94;
        case 0x312a98u: goto label_312a98;
        case 0x312a9cu: goto label_312a9c;
        case 0x312aa0u: goto label_312aa0;
        case 0x312aa4u: goto label_312aa4;
        case 0x312aa8u: goto label_312aa8;
        case 0x312aacu: goto label_312aac;
        case 0x312ab0u: goto label_312ab0;
        case 0x312ab4u: goto label_312ab4;
        case 0x312ab8u: goto label_312ab8;
        case 0x312abcu: goto label_312abc;
        case 0x312ac0u: goto label_312ac0;
        case 0x312ac4u: goto label_312ac4;
        case 0x312ac8u: goto label_312ac8;
        case 0x312accu: goto label_312acc;
        case 0x312ad0u: goto label_312ad0;
        case 0x312ad4u: goto label_312ad4;
        case 0x312ad8u: goto label_312ad8;
        case 0x312adcu: goto label_312adc;
        case 0x312ae0u: goto label_312ae0;
        case 0x312ae4u: goto label_312ae4;
        case 0x312ae8u: goto label_312ae8;
        case 0x312aecu: goto label_312aec;
        case 0x312af0u: goto label_312af0;
        case 0x312af4u: goto label_312af4;
        case 0x312af8u: goto label_312af8;
        case 0x312afcu: goto label_312afc;
        case 0x312b00u: goto label_312b00;
        case 0x312b04u: goto label_312b04;
        case 0x312b08u: goto label_312b08;
        case 0x312b0cu: goto label_312b0c;
        case 0x312b10u: goto label_312b10;
        case 0x312b14u: goto label_312b14;
        case 0x312b18u: goto label_312b18;
        case 0x312b1cu: goto label_312b1c;
        case 0x312b20u: goto label_312b20;
        case 0x312b24u: goto label_312b24;
        case 0x312b28u: goto label_312b28;
        case 0x312b2cu: goto label_312b2c;
        case 0x312b30u: goto label_312b30;
        case 0x312b34u: goto label_312b34;
        case 0x312b38u: goto label_312b38;
        case 0x312b3cu: goto label_312b3c;
        case 0x312b40u: goto label_312b40;
        case 0x312b44u: goto label_312b44;
        case 0x312b48u: goto label_312b48;
        case 0x312b4cu: goto label_312b4c;
        case 0x312b50u: goto label_312b50;
        case 0x312b54u: goto label_312b54;
        case 0x312b58u: goto label_312b58;
        case 0x312b5cu: goto label_312b5c;
        case 0x312b60u: goto label_312b60;
        case 0x312b64u: goto label_312b64;
        case 0x312b68u: goto label_312b68;
        case 0x312b6cu: goto label_312b6c;
        case 0x312b70u: goto label_312b70;
        case 0x312b74u: goto label_312b74;
        case 0x312b78u: goto label_312b78;
        case 0x312b7cu: goto label_312b7c;
        case 0x312b80u: goto label_312b80;
        case 0x312b84u: goto label_312b84;
        case 0x312b88u: goto label_312b88;
        case 0x312b8cu: goto label_312b8c;
        case 0x312b90u: goto label_312b90;
        case 0x312b94u: goto label_312b94;
        case 0x312b98u: goto label_312b98;
        case 0x312b9cu: goto label_312b9c;
        case 0x312ba0u: goto label_312ba0;
        case 0x312ba4u: goto label_312ba4;
        case 0x312ba8u: goto label_312ba8;
        case 0x312bacu: goto label_312bac;
        case 0x312bb0u: goto label_312bb0;
        case 0x312bb4u: goto label_312bb4;
        case 0x312bb8u: goto label_312bb8;
        case 0x312bbcu: goto label_312bbc;
        case 0x312bc0u: goto label_312bc0;
        case 0x312bc4u: goto label_312bc4;
        case 0x312bc8u: goto label_312bc8;
        case 0x312bccu: goto label_312bcc;
        case 0x312bd0u: goto label_312bd0;
        case 0x312bd4u: goto label_312bd4;
        case 0x312bd8u: goto label_312bd8;
        case 0x312bdcu: goto label_312bdc;
        case 0x312be0u: goto label_312be0;
        case 0x312be4u: goto label_312be4;
        case 0x312be8u: goto label_312be8;
        case 0x312becu: goto label_312bec;
        case 0x312bf0u: goto label_312bf0;
        case 0x312bf4u: goto label_312bf4;
        case 0x312bf8u: goto label_312bf8;
        case 0x312bfcu: goto label_312bfc;
        case 0x312c00u: goto label_312c00;
        case 0x312c04u: goto label_312c04;
        case 0x312c08u: goto label_312c08;
        case 0x312c0cu: goto label_312c0c;
        case 0x312c10u: goto label_312c10;
        case 0x312c14u: goto label_312c14;
        case 0x312c18u: goto label_312c18;
        case 0x312c1cu: goto label_312c1c;
        case 0x312c20u: goto label_312c20;
        case 0x312c24u: goto label_312c24;
        case 0x312c28u: goto label_312c28;
        case 0x312c2cu: goto label_312c2c;
        case 0x312c30u: goto label_312c30;
        case 0x312c34u: goto label_312c34;
        case 0x312c38u: goto label_312c38;
        case 0x312c3cu: goto label_312c3c;
        case 0x312c40u: goto label_312c40;
        case 0x312c44u: goto label_312c44;
        case 0x312c48u: goto label_312c48;
        case 0x312c4cu: goto label_312c4c;
        case 0x312c50u: goto label_312c50;
        case 0x312c54u: goto label_312c54;
        case 0x312c58u: goto label_312c58;
        case 0x312c5cu: goto label_312c5c;
        case 0x312c60u: goto label_312c60;
        case 0x312c64u: goto label_312c64;
        case 0x312c68u: goto label_312c68;
        case 0x312c6cu: goto label_312c6c;
        case 0x312c70u: goto label_312c70;
        case 0x312c74u: goto label_312c74;
        case 0x312c78u: goto label_312c78;
        case 0x312c7cu: goto label_312c7c;
        case 0x312c80u: goto label_312c80;
        case 0x312c84u: goto label_312c84;
        case 0x312c88u: goto label_312c88;
        case 0x312c8cu: goto label_312c8c;
        case 0x312c90u: goto label_312c90;
        case 0x312c94u: goto label_312c94;
        case 0x312c98u: goto label_312c98;
        case 0x312c9cu: goto label_312c9c;
        case 0x312ca0u: goto label_312ca0;
        case 0x312ca4u: goto label_312ca4;
        case 0x312ca8u: goto label_312ca8;
        case 0x312cacu: goto label_312cac;
        case 0x312cb0u: goto label_312cb0;
        case 0x312cb4u: goto label_312cb4;
        case 0x312cb8u: goto label_312cb8;
        case 0x312cbcu: goto label_312cbc;
        case 0x312cc0u: goto label_312cc0;
        case 0x312cc4u: goto label_312cc4;
        case 0x312cc8u: goto label_312cc8;
        case 0x312cccu: goto label_312ccc;
        case 0x312cd0u: goto label_312cd0;
        case 0x312cd4u: goto label_312cd4;
        case 0x312cd8u: goto label_312cd8;
        case 0x312cdcu: goto label_312cdc;
        case 0x312ce0u: goto label_312ce0;
        case 0x312ce4u: goto label_312ce4;
        case 0x312ce8u: goto label_312ce8;
        case 0x312cecu: goto label_312cec;
        case 0x312cf0u: goto label_312cf0;
        case 0x312cf4u: goto label_312cf4;
        case 0x312cf8u: goto label_312cf8;
        case 0x312cfcu: goto label_312cfc;
        case 0x312d00u: goto label_312d00;
        case 0x312d04u: goto label_312d04;
        case 0x312d08u: goto label_312d08;
        case 0x312d0cu: goto label_312d0c;
        case 0x312d10u: goto label_312d10;
        case 0x312d14u: goto label_312d14;
        case 0x312d18u: goto label_312d18;
        case 0x312d1cu: goto label_312d1c;
        case 0x312d20u: goto label_312d20;
        case 0x312d24u: goto label_312d24;
        case 0x312d28u: goto label_312d28;
        case 0x312d2cu: goto label_312d2c;
        case 0x312d30u: goto label_312d30;
        case 0x312d34u: goto label_312d34;
        case 0x312d38u: goto label_312d38;
        case 0x312d3cu: goto label_312d3c;
        case 0x312d40u: goto label_312d40;
        case 0x312d44u: goto label_312d44;
        case 0x312d48u: goto label_312d48;
        case 0x312d4cu: goto label_312d4c;
        case 0x312d50u: goto label_312d50;
        case 0x312d54u: goto label_312d54;
        case 0x312d58u: goto label_312d58;
        case 0x312d5cu: goto label_312d5c;
        case 0x312d60u: goto label_312d60;
        case 0x312d64u: goto label_312d64;
        case 0x312d68u: goto label_312d68;
        case 0x312d6cu: goto label_312d6c;
        case 0x312d70u: goto label_312d70;
        case 0x312d74u: goto label_312d74;
        case 0x312d78u: goto label_312d78;
        case 0x312d7cu: goto label_312d7c;
        case 0x312d80u: goto label_312d80;
        case 0x312d84u: goto label_312d84;
        case 0x312d88u: goto label_312d88;
        case 0x312d8cu: goto label_312d8c;
        case 0x312d90u: goto label_312d90;
        case 0x312d94u: goto label_312d94;
        case 0x312d98u: goto label_312d98;
        case 0x312d9cu: goto label_312d9c;
        case 0x312da0u: goto label_312da0;
        case 0x312da4u: goto label_312da4;
        case 0x312da8u: goto label_312da8;
        case 0x312dacu: goto label_312dac;
        case 0x312db0u: goto label_312db0;
        case 0x312db4u: goto label_312db4;
        case 0x312db8u: goto label_312db8;
        case 0x312dbcu: goto label_312dbc;
        case 0x312dc0u: goto label_312dc0;
        case 0x312dc4u: goto label_312dc4;
        case 0x312dc8u: goto label_312dc8;
        case 0x312dccu: goto label_312dcc;
        case 0x312dd0u: goto label_312dd0;
        case 0x312dd4u: goto label_312dd4;
        case 0x312dd8u: goto label_312dd8;
        case 0x312ddcu: goto label_312ddc;
        case 0x312de0u: goto label_312de0;
        case 0x312de4u: goto label_312de4;
        case 0x312de8u: goto label_312de8;
        case 0x312decu: goto label_312dec;
        case 0x312df0u: goto label_312df0;
        case 0x312df4u: goto label_312df4;
        case 0x312df8u: goto label_312df8;
        case 0x312dfcu: goto label_312dfc;
        case 0x312e00u: goto label_312e00;
        case 0x312e04u: goto label_312e04;
        case 0x312e08u: goto label_312e08;
        case 0x312e0cu: goto label_312e0c;
        case 0x312e10u: goto label_312e10;
        case 0x312e14u: goto label_312e14;
        case 0x312e18u: goto label_312e18;
        case 0x312e1cu: goto label_312e1c;
        case 0x312e20u: goto label_312e20;
        case 0x312e24u: goto label_312e24;
        case 0x312e28u: goto label_312e28;
        case 0x312e2cu: goto label_312e2c;
        case 0x312e30u: goto label_312e30;
        case 0x312e34u: goto label_312e34;
        case 0x312e38u: goto label_312e38;
        case 0x312e3cu: goto label_312e3c;
        case 0x312e40u: goto label_312e40;
        case 0x312e44u: goto label_312e44;
        case 0x312e48u: goto label_312e48;
        case 0x312e4cu: goto label_312e4c;
        case 0x312e50u: goto label_312e50;
        case 0x312e54u: goto label_312e54;
        case 0x312e58u: goto label_312e58;
        case 0x312e5cu: goto label_312e5c;
        case 0x312e60u: goto label_312e60;
        case 0x312e64u: goto label_312e64;
        case 0x312e68u: goto label_312e68;
        case 0x312e6cu: goto label_312e6c;
        case 0x312e70u: goto label_312e70;
        case 0x312e74u: goto label_312e74;
        case 0x312e78u: goto label_312e78;
        case 0x312e7cu: goto label_312e7c;
        case 0x312e80u: goto label_312e80;
        case 0x312e84u: goto label_312e84;
        case 0x312e88u: goto label_312e88;
        case 0x312e8cu: goto label_312e8c;
        case 0x312e90u: goto label_312e90;
        case 0x312e94u: goto label_312e94;
        case 0x312e98u: goto label_312e98;
        case 0x312e9cu: goto label_312e9c;
        case 0x312ea0u: goto label_312ea0;
        case 0x312ea4u: goto label_312ea4;
        case 0x312ea8u: goto label_312ea8;
        case 0x312eacu: goto label_312eac;
        case 0x312eb0u: goto label_312eb0;
        case 0x312eb4u: goto label_312eb4;
        case 0x312eb8u: goto label_312eb8;
        case 0x312ebcu: goto label_312ebc;
        case 0x312ec0u: goto label_312ec0;
        case 0x312ec4u: goto label_312ec4;
        case 0x312ec8u: goto label_312ec8;
        case 0x312eccu: goto label_312ecc;
        case 0x312ed0u: goto label_312ed0;
        case 0x312ed4u: goto label_312ed4;
        case 0x312ed8u: goto label_312ed8;
        case 0x312edcu: goto label_312edc;
        case 0x312ee0u: goto label_312ee0;
        case 0x312ee4u: goto label_312ee4;
        case 0x312ee8u: goto label_312ee8;
        case 0x312eecu: goto label_312eec;
        case 0x312ef0u: goto label_312ef0;
        case 0x312ef4u: goto label_312ef4;
        case 0x312ef8u: goto label_312ef8;
        case 0x312efcu: goto label_312efc;
        case 0x312f00u: goto label_312f00;
        case 0x312f04u: goto label_312f04;
        case 0x312f08u: goto label_312f08;
        case 0x312f0cu: goto label_312f0c;
        case 0x312f10u: goto label_312f10;
        case 0x312f14u: goto label_312f14;
        case 0x312f18u: goto label_312f18;
        case 0x312f1cu: goto label_312f1c;
        case 0x312f20u: goto label_312f20;
        case 0x312f24u: goto label_312f24;
        case 0x312f28u: goto label_312f28;
        case 0x312f2cu: goto label_312f2c;
        case 0x312f30u: goto label_312f30;
        case 0x312f34u: goto label_312f34;
        case 0x312f38u: goto label_312f38;
        case 0x312f3cu: goto label_312f3c;
        case 0x312f40u: goto label_312f40;
        case 0x312f44u: goto label_312f44;
        case 0x312f48u: goto label_312f48;
        case 0x312f4cu: goto label_312f4c;
        case 0x312f50u: goto label_312f50;
        case 0x312f54u: goto label_312f54;
        case 0x312f58u: goto label_312f58;
        case 0x312f5cu: goto label_312f5c;
        case 0x312f60u: goto label_312f60;
        case 0x312f64u: goto label_312f64;
        case 0x312f68u: goto label_312f68;
        case 0x312f6cu: goto label_312f6c;
        case 0x312f70u: goto label_312f70;
        case 0x312f74u: goto label_312f74;
        case 0x312f78u: goto label_312f78;
        case 0x312f7cu: goto label_312f7c;
        case 0x312f80u: goto label_312f80;
        case 0x312f84u: goto label_312f84;
        case 0x312f88u: goto label_312f88;
        case 0x312f8cu: goto label_312f8c;
        case 0x312f90u: goto label_312f90;
        case 0x312f94u: goto label_312f94;
        case 0x312f98u: goto label_312f98;
        case 0x312f9cu: goto label_312f9c;
        case 0x312fa0u: goto label_312fa0;
        case 0x312fa4u: goto label_312fa4;
        case 0x312fa8u: goto label_312fa8;
        case 0x312facu: goto label_312fac;
        case 0x312fb0u: goto label_312fb0;
        case 0x312fb4u: goto label_312fb4;
        case 0x312fb8u: goto label_312fb8;
        case 0x312fbcu: goto label_312fbc;
        case 0x312fc0u: goto label_312fc0;
        case 0x312fc4u: goto label_312fc4;
        case 0x312fc8u: goto label_312fc8;
        case 0x312fccu: goto label_312fcc;
        case 0x312fd0u: goto label_312fd0;
        case 0x312fd4u: goto label_312fd4;
        case 0x312fd8u: goto label_312fd8;
        case 0x312fdcu: goto label_312fdc;
        case 0x312fe0u: goto label_312fe0;
        case 0x312fe4u: goto label_312fe4;
        case 0x312fe8u: goto label_312fe8;
        case 0x312fecu: goto label_312fec;
        case 0x312ff0u: goto label_312ff0;
        case 0x312ff4u: goto label_312ff4;
        case 0x312ff8u: goto label_312ff8;
        case 0x312ffcu: goto label_312ffc;
        case 0x313000u: goto label_313000;
        case 0x313004u: goto label_313004;
        case 0x313008u: goto label_313008;
        case 0x31300cu: goto label_31300c;
        case 0x313010u: goto label_313010;
        case 0x313014u: goto label_313014;
        case 0x313018u: goto label_313018;
        case 0x31301cu: goto label_31301c;
        case 0x313020u: goto label_313020;
        case 0x313024u: goto label_313024;
        case 0x313028u: goto label_313028;
        case 0x31302cu: goto label_31302c;
        case 0x313030u: goto label_313030;
        case 0x313034u: goto label_313034;
        case 0x313038u: goto label_313038;
        case 0x31303cu: goto label_31303c;
        case 0x313040u: goto label_313040;
        case 0x313044u: goto label_313044;
        case 0x313048u: goto label_313048;
        case 0x31304cu: goto label_31304c;
        case 0x313050u: goto label_313050;
        case 0x313054u: goto label_313054;
        case 0x313058u: goto label_313058;
        case 0x31305cu: goto label_31305c;
        case 0x313060u: goto label_313060;
        case 0x313064u: goto label_313064;
        case 0x313068u: goto label_313068;
        case 0x31306cu: goto label_31306c;
        case 0x313070u: goto label_313070;
        case 0x313074u: goto label_313074;
        case 0x313078u: goto label_313078;
        case 0x31307cu: goto label_31307c;
        case 0x313080u: goto label_313080;
        case 0x313084u: goto label_313084;
        case 0x313088u: goto label_313088;
        case 0x31308cu: goto label_31308c;
        case 0x313090u: goto label_313090;
        case 0x313094u: goto label_313094;
        case 0x313098u: goto label_313098;
        case 0x31309cu: goto label_31309c;
        case 0x3130a0u: goto label_3130a0;
        case 0x3130a4u: goto label_3130a4;
        case 0x3130a8u: goto label_3130a8;
        case 0x3130acu: goto label_3130ac;
        case 0x3130b0u: goto label_3130b0;
        case 0x3130b4u: goto label_3130b4;
        case 0x3130b8u: goto label_3130b8;
        case 0x3130bcu: goto label_3130bc;
        case 0x3130c0u: goto label_3130c0;
        case 0x3130c4u: goto label_3130c4;
        case 0x3130c8u: goto label_3130c8;
        case 0x3130ccu: goto label_3130cc;
        case 0x3130d0u: goto label_3130d0;
        case 0x3130d4u: goto label_3130d4;
        case 0x3130d8u: goto label_3130d8;
        case 0x3130dcu: goto label_3130dc;
        case 0x3130e0u: goto label_3130e0;
        case 0x3130e4u: goto label_3130e4;
        case 0x3130e8u: goto label_3130e8;
        case 0x3130ecu: goto label_3130ec;
        case 0x3130f0u: goto label_3130f0;
        case 0x3130f4u: goto label_3130f4;
        case 0x3130f8u: goto label_3130f8;
        case 0x3130fcu: goto label_3130fc;
        case 0x313100u: goto label_313100;
        case 0x313104u: goto label_313104;
        case 0x313108u: goto label_313108;
        case 0x31310cu: goto label_31310c;
        case 0x313110u: goto label_313110;
        case 0x313114u: goto label_313114;
        case 0x313118u: goto label_313118;
        case 0x31311cu: goto label_31311c;
        case 0x313120u: goto label_313120;
        case 0x313124u: goto label_313124;
        case 0x313128u: goto label_313128;
        case 0x31312cu: goto label_31312c;
        case 0x313130u: goto label_313130;
        case 0x313134u: goto label_313134;
        case 0x313138u: goto label_313138;
        case 0x31313cu: goto label_31313c;
        case 0x313140u: goto label_313140;
        case 0x313144u: goto label_313144;
        case 0x313148u: goto label_313148;
        case 0x31314cu: goto label_31314c;
        case 0x313150u: goto label_313150;
        case 0x313154u: goto label_313154;
        case 0x313158u: goto label_313158;
        case 0x31315cu: goto label_31315c;
        case 0x313160u: goto label_313160;
        case 0x313164u: goto label_313164;
        case 0x313168u: goto label_313168;
        case 0x31316cu: goto label_31316c;
        case 0x313170u: goto label_313170;
        case 0x313174u: goto label_313174;
        case 0x313178u: goto label_313178;
        case 0x31317cu: goto label_31317c;
        case 0x313180u: goto label_313180;
        case 0x313184u: goto label_313184;
        case 0x313188u: goto label_313188;
        case 0x31318cu: goto label_31318c;
        case 0x313190u: goto label_313190;
        case 0x313194u: goto label_313194;
        case 0x313198u: goto label_313198;
        case 0x31319cu: goto label_31319c;
        case 0x3131a0u: goto label_3131a0;
        case 0x3131a4u: goto label_3131a4;
        case 0x3131a8u: goto label_3131a8;
        case 0x3131acu: goto label_3131ac;
        case 0x3131b0u: goto label_3131b0;
        case 0x3131b4u: goto label_3131b4;
        case 0x3131b8u: goto label_3131b8;
        case 0x3131bcu: goto label_3131bc;
        case 0x3131c0u: goto label_3131c0;
        case 0x3131c4u: goto label_3131c4;
        case 0x3131c8u: goto label_3131c8;
        case 0x3131ccu: goto label_3131cc;
        case 0x3131d0u: goto label_3131d0;
        case 0x3131d4u: goto label_3131d4;
        case 0x3131d8u: goto label_3131d8;
        case 0x3131dcu: goto label_3131dc;
        case 0x3131e0u: goto label_3131e0;
        case 0x3131e4u: goto label_3131e4;
        case 0x3131e8u: goto label_3131e8;
        case 0x3131ecu: goto label_3131ec;
        case 0x3131f0u: goto label_3131f0;
        case 0x3131f4u: goto label_3131f4;
        case 0x3131f8u: goto label_3131f8;
        case 0x3131fcu: goto label_3131fc;
        case 0x313200u: goto label_313200;
        case 0x313204u: goto label_313204;
        case 0x313208u: goto label_313208;
        case 0x31320cu: goto label_31320c;
        case 0x313210u: goto label_313210;
        case 0x313214u: goto label_313214;
        case 0x313218u: goto label_313218;
        case 0x31321cu: goto label_31321c;
        case 0x313220u: goto label_313220;
        case 0x313224u: goto label_313224;
        case 0x313228u: goto label_313228;
        case 0x31322cu: goto label_31322c;
        case 0x313230u: goto label_313230;
        case 0x313234u: goto label_313234;
        case 0x313238u: goto label_313238;
        case 0x31323cu: goto label_31323c;
        default: break;
    }

    ctx->pc = 0x312950u;

label_312950:
    // 0x312950: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x312950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_312954:
    // 0x312954: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x312954u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_312958:
    // 0x312958: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x312958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31295c:
    // 0x31295c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31295cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_312960:
    // 0x312960: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312964:
    // 0x312964: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312964u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_312968:
    // 0x312968: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x312968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31296c:
    // 0x31296c: 0xc10f6ec  jal         func_43DBB0
label_312970:
    if (ctx->pc == 0x312970u) {
        ctx->pc = 0x312970u;
            // 0x312970: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312974u;
        goto label_312974;
    }
    ctx->pc = 0x31296Cu;
    SET_GPR_U32(ctx, 31, 0x312974u);
    ctx->pc = 0x312970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31296Cu;
            // 0x312970: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x43DBB0u;
    if (runtime->hasFunction(0x43DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x43DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312974u; }
        if (ctx->pc != 0x312974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0043DBB0_0x43dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312974u; }
        if (ctx->pc != 0x312974u) { return; }
    }
    ctx->pc = 0x312974u;
label_312974:
    // 0x312974: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x312974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_312978:
    // 0x312978: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x312978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_31297c:
    // 0x31297c: 0x246342d0  addiu       $v1, $v1, 0x42D0
    ctx->pc = 0x31297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17104));
label_312980:
    // 0x312980: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x312980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_312984:
    // 0x312984: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312984u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_312988:
    // 0x312988: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x312988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_31298c:
    // 0x31298c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x31298cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_312990:
    // 0x312990: 0xae200060  sw          $zero, 0x60($s1)
    ctx->pc = 0x312990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 0));
label_312994:
    // 0x312994: 0xc04cbd8  jal         func_132F60
label_312998:
    if (ctx->pc == 0x312998u) {
        ctx->pc = 0x312998u;
            // 0x312998: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x31299Cu;
        goto label_31299c;
    }
    ctx->pc = 0x312994u;
    SET_GPR_U32(ctx, 31, 0x31299Cu);
    ctx->pc = 0x312998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312994u;
            // 0x312998: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31299Cu; }
        if (ctx->pc != 0x31299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31299Cu; }
        if (ctx->pc != 0x31299Cu) { return; }
    }
    ctx->pc = 0x31299Cu;
label_31299c:
    // 0x31299c: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x31299cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_3129a0:
    // 0x3129a0: 0xc04cc04  jal         func_133010
label_3129a4:
    if (ctx->pc == 0x3129A4u) {
        ctx->pc = 0x3129A4u;
            // 0x3129a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3129A8u;
        goto label_3129a8;
    }
    ctx->pc = 0x3129A0u;
    SET_GPR_U32(ctx, 31, 0x3129A8u);
    ctx->pc = 0x3129A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129A0u;
            // 0x3129a4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129A8u; }
        if (ctx->pc != 0x3129A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129A8u; }
        if (ctx->pc != 0x3129A8u) { return; }
    }
    ctx->pc = 0x3129A8u;
label_3129a8:
    // 0x3129a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3129a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3129ac:
    // 0x3129ac: 0x240404c0  addiu       $a0, $zero, 0x4C0
    ctx->pc = 0x3129acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
label_3129b0:
    // 0x3129b0: 0xc040180  jal         func_100600
label_3129b4:
    if (ctx->pc == 0x3129B4u) {
        ctx->pc = 0x3129B4u;
            // 0x3129b4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x3129B8u;
        goto label_3129b8;
    }
    ctx->pc = 0x3129B0u;
    SET_GPR_U32(ctx, 31, 0x3129B8u);
    ctx->pc = 0x3129B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129B0u;
            // 0x3129b4: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129B8u; }
        if (ctx->pc != 0x3129B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129B8u; }
        if (ctx->pc != 0x3129B8u) { return; }
    }
    ctx->pc = 0x3129B8u;
label_3129b8:
    // 0x3129b8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_3129bc:
    if (ctx->pc == 0x3129BCu) {
        ctx->pc = 0x3129BCu;
            // 0x3129bc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x3129C0u;
        goto label_3129c0;
    }
    ctx->pc = 0x3129B8u;
    {
        const bool branch_taken_0x3129b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3129b8) {
            ctx->pc = 0x3129BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3129B8u;
            // 0x3129bc: 0xae220064  sw          $v0, 0x64($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3129DCu;
            goto label_3129dc;
        }
    }
    ctx->pc = 0x3129C0u;
label_3129c0:
    // 0x3129c0: 0x8e070d98  lw          $a3, 0xD98($s0)
    ctx->pc = 0x3129c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_3129c4:
    // 0x3129c4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x3129c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_3129c8:
    // 0x3129c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3129c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3129cc:
    // 0x3129cc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3129ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3129d0:
    // 0x3129d0: 0xc0c3f60  jal         func_30FD80
label_3129d4:
    if (ctx->pc == 0x3129D4u) {
        ctx->pc = 0x3129D4u;
            // 0x3129d4: 0x24c6f610  addiu       $a2, $a2, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964752));
        ctx->pc = 0x3129D8u;
        goto label_3129d8;
    }
    ctx->pc = 0x3129D0u;
    SET_GPR_U32(ctx, 31, 0x3129D8u);
    ctx->pc = 0x3129D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3129D0u;
            // 0x3129d4: 0x24c6f610  addiu       $a2, $a2, -0x9F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129D8u; }
        if (ctx->pc != 0x3129D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3129D8u; }
        if (ctx->pc != 0x3129D8u) { return; }
    }
    ctx->pc = 0x3129D8u;
label_3129d8:
    // 0x3129d8: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3129d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3129dc:
    // 0x3129dc: 0x26250040  addiu       $a1, $s1, 0x40
    ctx->pc = 0x3129dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_3129e0:
    // 0x3129e0: 0x94460064  lhu         $a2, 0x64($v0)
    ctx->pc = 0x3129e0u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 100)));
label_3129e4:
    // 0x3129e4: 0x26040ec0  addiu       $a0, $s0, 0xEC0
    ctx->pc = 0x3129e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_3129e8:
    // 0x3129e8: 0x26030890  addiu       $v1, $s0, 0x890
    ctx->pc = 0x3129e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_3129ec:
    // 0x3129ec: 0x34c60200  ori         $a2, $a2, 0x200
    ctx->pc = 0x3129ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)512);
label_3129f0:
    // 0x3129f0: 0xa4460064  sh          $a2, 0x64($v0)
    ctx->pc = 0x3129f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 100), (uint16_t)GPR_U32(ctx, 6));
label_3129f4:
    // 0x3129f4: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x3129f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_3129f8:
    // 0x3129f8: 0xac4400c4  sw          $a0, 0xC4($v0)
    ctx->pc = 0x3129f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 4));
label_3129fc:
    // 0x3129fc: 0xac4300c8  sw          $v1, 0xC8($v0)
    ctx->pc = 0x3129fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 3));
label_312a00:
    // 0x312a00: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x312a00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_312a04:
    // 0x312a04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x312a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312a08:
    // 0x312a08: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x312a08u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_312a0c:
    // 0x312a0c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x312a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_312a10:
    // 0x312a10: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x312a10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_312a14:
    // 0x312a14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x312a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_312a18:
    // 0x312a18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312a1c:
    // 0x312a1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312a1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_312a20:
    // 0x312a20: 0x3e00008  jr          $ra
label_312a24:
    if (ctx->pc == 0x312A24u) {
        ctx->pc = 0x312A24u;
            // 0x312a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x312A28u;
        goto label_312a28;
    }
    ctx->pc = 0x312A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312A20u;
            // 0x312a24: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312A28u;
label_312a28:
    // 0x312a28: 0x0  nop
    ctx->pc = 0x312a28u;
    // NOP
label_312a2c:
    // 0x312a2c: 0x0  nop
    ctx->pc = 0x312a2cu;
    // NOP
label_312a30:
    // 0x312a30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_312a34:
    // 0x312a34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x312a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_312a38:
    // 0x312a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312a3c:
    // 0x312a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_312a40:
    // 0x312a40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x312a40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312a44:
    // 0x312a44: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
label_312a48:
    if (ctx->pc == 0x312A48u) {
        ctx->pc = 0x312A48u;
            // 0x312a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312A4Cu;
        goto label_312a4c;
    }
    ctx->pc = 0x312A44u;
    {
        const bool branch_taken_0x312a44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312A44u;
            // 0x312a48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a44) {
            ctx->pc = 0x312AA8u;
            goto label_312aa8;
        }
    }
    ctx->pc = 0x312A4Cu;
label_312a4c:
    // 0x312a4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x312a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_312a50:
    // 0x312a50: 0x244242d0  addiu       $v0, $v0, 0x42D0
    ctx->pc = 0x312a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17104));
label_312a54:
    // 0x312a54: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x312a54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_312a58:
    // 0x312a58: 0x8e240064  lw          $a0, 0x64($s1)
    ctx->pc = 0x312a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_312a5c:
    // 0x312a5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x312a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_312a60:
    // 0x312a60: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x312a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_312a64:
    // 0x312a64: 0x320f809  jalr        $t9
label_312a68:
    if (ctx->pc == 0x312A68u) {
        ctx->pc = 0x312A68u;
            // 0x312a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312A6Cu;
        goto label_312a6c;
    }
    ctx->pc = 0x312A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x312A6Cu);
        ctx->pc = 0x312A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312A64u;
            // 0x312a68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x312A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x312A6Cu; }
            if (ctx->pc != 0x312A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x312A6Cu;
label_312a6c:
    // 0x312a6c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_312a70:
    if (ctx->pc == 0x312A70u) {
        ctx->pc = 0x312A70u;
            // 0x312a70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x312A74u;
        goto label_312a74;
    }
    ctx->pc = 0x312A6Cu;
    {
        const bool branch_taken_0x312a6c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x312a6c) {
            ctx->pc = 0x312A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312A6Cu;
            // 0x312a70: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312A94u;
            goto label_312a94;
        }
    }
    ctx->pc = 0x312A74u;
label_312a74:
    // 0x312a74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x312a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_312a78:
    // 0x312a78: 0x2442ce00  addiu       $v0, $v0, -0x3200
    ctx->pc = 0x312a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954496));
label_312a7c:
    // 0x312a7c: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_312a80:
    if (ctx->pc == 0x312A80u) {
        ctx->pc = 0x312A80u;
            // 0x312a80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x312A84u;
        goto label_312a84;
    }
    ctx->pc = 0x312A7Cu;
    {
        const bool branch_taken_0x312a7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312A7Cu;
            // 0x312a80: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312a7c) {
            ctx->pc = 0x312A90u;
            goto label_312a90;
        }
    }
    ctx->pc = 0x312A84u;
label_312a84:
    // 0x312a84: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x312a84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_312a88:
    // 0x312a88: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x312a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
label_312a8c:
    // 0x312a8c: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x312a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_312a90:
    // 0x312a90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x312a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_312a94:
    // 0x312a94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x312a94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_312a98:
    // 0x312a98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_312a9c:
    if (ctx->pc == 0x312A9Cu) {
        ctx->pc = 0x312A9Cu;
            // 0x312a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312AA0u;
        goto label_312aa0;
    }
    ctx->pc = 0x312A98u;
    {
        const bool branch_taken_0x312a98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x312a98) {
            ctx->pc = 0x312A9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312A98u;
            // 0x312a9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312AACu;
            goto label_312aac;
        }
    }
    ctx->pc = 0x312AA0u;
label_312aa0:
    // 0x312aa0: 0xc0400a8  jal         func_1002A0
label_312aa4:
    if (ctx->pc == 0x312AA4u) {
        ctx->pc = 0x312AA4u;
            // 0x312aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312AA8u;
        goto label_312aa8;
    }
    ctx->pc = 0x312AA0u;
    SET_GPR_U32(ctx, 31, 0x312AA8u);
    ctx->pc = 0x312AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312AA0u;
            // 0x312aa4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312AA8u; }
        if (ctx->pc != 0x312AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312AA8u; }
        if (ctx->pc != 0x312AA8u) { return; }
    }
    ctx->pc = 0x312AA8u;
label_312aa8:
    // 0x312aa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x312aa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312aac:
    // 0x312aac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x312aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_312ab0:
    // 0x312ab0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312ab0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312ab4:
    // 0x312ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_312ab8:
    // 0x312ab8: 0x3e00008  jr          $ra
label_312abc:
    if (ctx->pc == 0x312ABCu) {
        ctx->pc = 0x312ABCu;
            // 0x312abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x312AC0u;
        goto label_312ac0;
    }
    ctx->pc = 0x312AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312AB8u;
            // 0x312abc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312AC0u;
label_312ac0:
    // 0x312ac0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x312ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_312ac4:
    // 0x312ac4: 0x3e00008  jr          $ra
label_312ac8:
    if (ctx->pc == 0x312AC8u) {
        ctx->pc = 0x312AC8u;
            // 0x312ac8: 0xc440bc78  lwc1        $f0, -0x4388($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x312ACCu;
        goto label_312acc;
    }
    ctx->pc = 0x312AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312AC4u;
            // 0x312ac8: 0xc440bc78  lwc1        $f0, -0x4388($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312ACCu;
label_312acc:
    // 0x312acc: 0x0  nop
    ctx->pc = 0x312accu;
    // NOP
label_312ad0:
    // 0x312ad0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x312ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_312ad4:
    // 0x312ad4: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x312ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_312ad8:
    // 0x312ad8: 0xc440bc78  lwc1        $f0, -0x4388($v0)
    ctx->pc = 0x312ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_312adc:
    // 0x312adc: 0x3e00008  jr          $ra
label_312ae0:
    if (ctx->pc == 0x312AE0u) {
        ctx->pc = 0x312AE0u;
            // 0x312ae0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x312AE4u;
        goto label_312ae4;
    }
    ctx->pc = 0x312ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312ADCu;
            // 0x312ae0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312AE4u;
label_312ae4:
    // 0x312ae4: 0x0  nop
    ctx->pc = 0x312ae4u;
    // NOP
label_312ae8:
    // 0x312ae8: 0x0  nop
    ctx->pc = 0x312ae8u;
    // NOP
label_312aec:
    // 0x312aec: 0x0  nop
    ctx->pc = 0x312aecu;
    // NOP
label_312af0:
    // 0x312af0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_312af4:
    // 0x312af4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x312af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_312af8:
    // 0x312af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_312afc:
    // 0x312afc: 0x8c63f620  lw          $v1, -0x9E0($v1)
    ctx->pc = 0x312afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964768)));
label_312b00:
    // 0x312b00: 0x54600036  bnel        $v1, $zero, . + 4 + (0x36 << 2)
label_312b04:
    if (ctx->pc == 0x312B04u) {
        ctx->pc = 0x312B04u;
            // 0x312b04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x312B08u;
        goto label_312b08;
    }
    ctx->pc = 0x312B00u;
    {
        const bool branch_taken_0x312b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312b00) {
            ctx->pc = 0x312B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312B00u;
            // 0x312b04: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312BDCu;
            goto label_312bdc;
        }
    }
    ctx->pc = 0x312B08u;
label_312b08:
    // 0x312b08: 0x8c860020  lw          $a2, 0x20($a0)
    ctx->pc = 0x312b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_312b0c:
    // 0x312b0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x312b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_312b10:
    // 0x312b10: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x312b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_312b14:
    // 0x312b14: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x312b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_312b18:
    // 0x312b18: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312b18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312b1c:
    // 0x312b1c: 0x2484f620  addiu       $a0, $a0, -0x9E0
    ctx->pc = 0x312b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964768));
label_312b20:
    // 0x312b20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312b24:
    // 0x312b24: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x312b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_312b28:
    // 0x312b28: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x312b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_312b2c:
    // 0x312b2c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312b30:
    // 0x312b30: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x312b30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_312b34:
    // 0x312b34: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x312b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_312b38:
    // 0x312b38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x312b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312b3c:
    // 0x312b3c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x312b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_312b40:
    // 0x312b40: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x312b40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_312b44:
    // 0x312b44: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x312b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_312b48:
    // 0x312b48: 0xc075128  jal         func_1D44A0
label_312b4c:
    if (ctx->pc == 0x312B4Cu) {
        ctx->pc = 0x312B4Cu;
            // 0x312b4c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x312B50u;
        goto label_312b50;
    }
    ctx->pc = 0x312B48u;
    SET_GPR_U32(ctx, 31, 0x312B50u);
    ctx->pc = 0x312B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312B48u;
            // 0x312b4c: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B50u; }
        if (ctx->pc != 0x312B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312B50u; }
        if (ctx->pc != 0x312B50u) { return; }
    }
    ctx->pc = 0x312B50u;
label_312b50:
    // 0x312b50: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312b54:
    // 0x312b54: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312b58:
    // 0x312b58: 0x8c86f620  lw          $a2, -0x9E0($a0)
    ctx->pc = 0x312b58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294964768)));
label_312b5c:
    // 0x312b5c: 0x8c63e390  lw          $v1, -0x1C70($v1)
    ctx->pc = 0x312b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960016)));
label_312b60:
    // 0x312b60: 0x8cc40034  lw          $a0, 0x34($a2)
    ctx->pc = 0x312b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
label_312b64:
    // 0x312b64: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312b64u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312b68:
    // 0x312b68: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_312b6c:
    if (ctx->pc == 0x312B6Cu) {
        ctx->pc = 0x312B70u;
        goto label_312b70;
    }
    ctx->pc = 0x312B68u;
    {
        const bool branch_taken_0x312b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312b68) {
            ctx->pc = 0x312B78u;
            goto label_312b78;
        }
    }
    ctx->pc = 0x312B70u;
label_312b70:
    // 0x312b70: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312b74:
    // 0x312b74: 0xac64e390  sw          $a0, -0x1C70($v1)
    ctx->pc = 0x312b74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960016), GPR_U32(ctx, 4));
label_312b78:
    // 0x312b78: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312b7c:
    // 0x312b7c: 0x8cc40028  lw          $a0, 0x28($a2)
    ctx->pc = 0x312b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_312b80:
    // 0x312b80: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x312b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_312b84:
    // 0x312b84: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312b84u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312b88:
    // 0x312b88: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_312b8c:
    if (ctx->pc == 0x312B8Cu) {
        ctx->pc = 0x312B8Cu;
            // 0x312b8c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->pc = 0x312B90u;
        goto label_312b90;
    }
    ctx->pc = 0x312B88u;
    {
        const bool branch_taken_0x312b88 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x312B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312B88u;
            // 0x312b8c: 0x24c50028  addiu       $a1, $a2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312b88) {
            ctx->pc = 0x312B98u;
            goto label_312b98;
        }
    }
    ctx->pc = 0x312B90u;
label_312b90:
    // 0x312b90: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312b90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312b94:
    // 0x312b94: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x312b94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_312b98:
    // 0x312b98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312b98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312b9c:
    // 0x312b9c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x312b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_312ba0:
    // 0x312ba0: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x312ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_312ba4:
    // 0x312ba4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312ba4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312ba8:
    // 0x312ba8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_312bac:
    if (ctx->pc == 0x312BACu) {
        ctx->pc = 0x312BB0u;
        goto label_312bb0;
    }
    ctx->pc = 0x312BA8u;
    {
        const bool branch_taken_0x312ba8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312ba8) {
            ctx->pc = 0x312BB8u;
            goto label_312bb8;
        }
    }
    ctx->pc = 0x312BB0u;
label_312bb0:
    // 0x312bb0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312bb4:
    // 0x312bb4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x312bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_312bb8:
    // 0x312bb8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312bbc:
    // 0x312bbc: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x312bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_312bc0:
    // 0x312bc0: 0x8c63e3a0  lw          $v1, -0x1C60($v1)
    ctx->pc = 0x312bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960032)));
label_312bc4:
    // 0x312bc4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x312bc4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_312bc8:
    // 0x312bc8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_312bcc:
    if (ctx->pc == 0x312BCCu) {
        ctx->pc = 0x312BD0u;
        goto label_312bd0;
    }
    ctx->pc = 0x312BC8u;
    {
        const bool branch_taken_0x312bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312bc8) {
            ctx->pc = 0x312BD8u;
            goto label_312bd8;
        }
    }
    ctx->pc = 0x312BD0u;
label_312bd0:
    // 0x312bd0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x312bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_312bd4:
    // 0x312bd4: 0xac64e3a0  sw          $a0, -0x1C60($v1)
    ctx->pc = 0x312bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960032), GPR_U32(ctx, 4));
label_312bd8:
    // 0x312bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x312bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_312bdc:
    // 0x312bdc: 0x3e00008  jr          $ra
label_312be0:
    if (ctx->pc == 0x312BE0u) {
        ctx->pc = 0x312BE0u;
            // 0x312be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x312BE4u;
        goto label_312be4;
    }
    ctx->pc = 0x312BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312BDCu;
            // 0x312be0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312BE4u;
label_312be4:
    // 0x312be4: 0x0  nop
    ctx->pc = 0x312be4u;
    // NOP
label_312be8:
    // 0x312be8: 0x0  nop
    ctx->pc = 0x312be8u;
    // NOP
label_312bec:
    // 0x312bec: 0x0  nop
    ctx->pc = 0x312becu;
    // NOP
label_312bf0:
    // 0x312bf0: 0x3e00008  jr          $ra
label_312bf4:
    if (ctx->pc == 0x312BF4u) {
        ctx->pc = 0x312BF8u;
        goto label_312bf8;
    }
    ctx->pc = 0x312BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312BF8u;
label_312bf8:
    // 0x312bf8: 0x0  nop
    ctx->pc = 0x312bf8u;
    // NOP
label_312bfc:
    // 0x312bfc: 0x0  nop
    ctx->pc = 0x312bfcu;
    // NOP
label_312c00:
    // 0x312c00: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x312c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_312c04:
    // 0x312c04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x312c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_312c08:
    // 0x312c08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x312c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_312c0c:
    // 0x312c0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x312c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_312c10:
    // 0x312c10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312c14:
    // 0x312c14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x312c14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312c18:
    // 0x312c18: 0xc075830  jal         func_1D60C0
label_312c1c:
    if (ctx->pc == 0x312C1Cu) {
        ctx->pc = 0x312C1Cu;
            // 0x312c1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x312C20u;
        goto label_312c20;
    }
    ctx->pc = 0x312C18u;
    SET_GPR_U32(ctx, 31, 0x312C20u);
    ctx->pc = 0x312C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312C18u;
            // 0x312c1c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D60C0u;
    if (runtime->hasFunction(0x1D60C0u)) {
        auto targetFn = runtime->lookupFunction(0x1D60C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312C20u; }
        if (ctx->pc != 0x312C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D60C0_0x1d60c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312C20u; }
        if (ctx->pc != 0x312C20u) { return; }
    }
    ctx->pc = 0x312C20u;
label_312c20:
    // 0x312c20: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x312c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_312c24:
    // 0x312c24: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x312c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_312c28:
    // 0x312c28: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x312c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_312c2c:
    // 0x312c2c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x312c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_312c30:
    // 0x312c30: 0x820511ad  lb          $a1, 0x11AD($s0)
    ctx->pc = 0x312c30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4525)));
label_312c34:
    // 0x312c34: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x312c34u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_312c38:
    // 0x312c38: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x312c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_312c3c:
    // 0x312c3c: 0x1043008f  beq         $v0, $v1, . + 4 + (0x8F << 2)
label_312c40:
    if (ctx->pc == 0x312C40u) {
        ctx->pc = 0x312C40u;
            // 0x312c40: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x312C44u;
        goto label_312c44;
    }
    ctx->pc = 0x312C3Cu;
    {
        const bool branch_taken_0x312c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x312C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312C3Cu;
            // 0x312c40: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c3c) {
            ctx->pc = 0x312E7Cu;
            goto label_312e7c;
        }
    }
    ctx->pc = 0x312C44u;
label_312c44:
    // 0x312c44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312c48:
    // 0x312c48: 0x5043008d  beql        $v0, $v1, . + 4 + (0x8D << 2)
label_312c4c:
    if (ctx->pc == 0x312C4Cu) {
        ctx->pc = 0x312C4Cu;
            // 0x312c4c: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x312C50u;
        goto label_312c50;
    }
    ctx->pc = 0x312C48u;
    {
        const bool branch_taken_0x312c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312c48) {
            ctx->pc = 0x312C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312C48u;
            // 0x312c4c: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312E80u;
            goto label_312e80;
        }
    }
    ctx->pc = 0x312C50u;
label_312c50:
    // 0x312c50: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x312c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_312c54:
    // 0x312c54: 0x5043005b  beql        $v0, $v1, . + 4 + (0x5B << 2)
label_312c58:
    if (ctx->pc == 0x312C58u) {
        ctx->pc = 0x312C58u;
            // 0x312c58: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x312C5Cu;
        goto label_312c5c;
    }
    ctx->pc = 0x312C54u;
    {
        const bool branch_taken_0x312c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312c54) {
            ctx->pc = 0x312C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312C54u;
            // 0x312c58: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312DC4u;
            goto label_312dc4;
        }
    }
    ctx->pc = 0x312C5Cu;
label_312c5c:
    // 0x312c5c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x312c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_312c60:
    // 0x312c60: 0x50430027  beql        $v0, $v1, . + 4 + (0x27 << 2)
label_312c64:
    if (ctx->pc == 0x312C64u) {
        ctx->pc = 0x312C64u;
            // 0x312c64: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x312C68u;
        goto label_312c68;
    }
    ctx->pc = 0x312C60u;
    {
        const bool branch_taken_0x312c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312c60) {
            ctx->pc = 0x312C64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312C60u;
            // 0x312c64: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312D00u;
            goto label_312d00;
        }
    }
    ctx->pc = 0x312C68u;
label_312c68:
    // 0x312c68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x312c68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312c6c:
    // 0x312c6c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_312c70:
    if (ctx->pc == 0x312C70u) {
        ctx->pc = 0x312C70u;
            // 0x312c70: 0x8e0211bc  lw          $v0, 0x11BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4540)));
        ctx->pc = 0x312C74u;
        goto label_312c74;
    }
    ctx->pc = 0x312C6Cu;
    {
        const bool branch_taken_0x312c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x312c6c) {
            ctx->pc = 0x312C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312C6Cu;
            // 0x312c70: 0x8e0211bc  lw          $v0, 0x11BC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4540)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312C7Cu;
            goto label_312c7c;
        }
    }
    ctx->pc = 0x312C74u;
label_312c74:
    // 0x312c74: 0x10000086  b           . + 4 + (0x86 << 2)
label_312c78:
    if (ctx->pc == 0x312C78u) {
        ctx->pc = 0x312C78u;
            // 0x312c78: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x312C7Cu;
        goto label_312c7c;
    }
    ctx->pc = 0x312C74u;
    {
        const bool branch_taken_0x312c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312C74u;
            // 0x312c78: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312c74) {
            ctx->pc = 0x312E90u;
            goto label_312e90;
        }
    }
    ctx->pc = 0x312C7Cu;
label_312c7c:
    // 0x312c7c: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_312c80:
    if (ctx->pc == 0x312C80u) {
        ctx->pc = 0x312C80u;
            // 0x312c80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x312C84u;
        goto label_312c84;
    }
    ctx->pc = 0x312C7Cu;
    {
        const bool branch_taken_0x312c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312c7c) {
            ctx->pc = 0x312C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312C7Cu;
            // 0x312c80: 0x2403000a  addiu       $v1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312CC4u;
            goto label_312cc4;
        }
    }
    ctx->pc = 0x312C84u;
label_312c84:
    // 0x312c84: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x312c84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_312c88:
    // 0x312c88: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x312c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_312c8c:
    // 0x312c8c: 0xa443f654  sh          $v1, -0x9AC($v0)
    ctx->pc = 0x312c8cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964820), (uint16_t)GPR_U32(ctx, 3));
label_312c90:
    // 0x312c90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312c90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_312c94:
    // 0x312c94: 0x3c02be4c  lui         $v0, 0xBE4C
    ctx->pc = 0x312c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48716 << 16));
label_312c98:
    // 0x312c98: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_312c9c:
    // 0x312c9c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_312ca0:
    // 0x312ca0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x312ca0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_312ca4:
    // 0x312ca4: 0xc04cbd8  jal         func_132F60
label_312ca8:
    if (ctx->pc == 0x312CA8u) {
        ctx->pc = 0x312CA8u;
            // 0x312ca8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x312CACu;
        goto label_312cac;
    }
    ctx->pc = 0x312CA4u;
    SET_GPR_U32(ctx, 31, 0x312CACu);
    ctx->pc = 0x312CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CA4u;
            // 0x312ca8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CACu; }
        if (ctx->pc != 0x312CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CACu; }
        if (ctx->pc != 0x312CACu) { return; }
    }
    ctx->pc = 0x312CACu;
label_312cac:
    // 0x312cac: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x312cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_312cb0:
    // 0x312cb0: 0xc04cc04  jal         func_133010
label_312cb4:
    if (ctx->pc == 0x312CB4u) {
        ctx->pc = 0x312CB4u;
            // 0x312cb4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x312CB8u;
        goto label_312cb8;
    }
    ctx->pc = 0x312CB0u;
    SET_GPR_U32(ctx, 31, 0x312CB8u);
    ctx->pc = 0x312CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CB0u;
            // 0x312cb4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CB8u; }
        if (ctx->pc != 0x312CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CB8u; }
        if (ctx->pc != 0x312CB8u) { return; }
    }
    ctx->pc = 0x312CB8u;
label_312cb8:
    // 0x312cb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x312cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_312cbc:
    // 0x312cbc: 0x10000073  b           . + 4 + (0x73 << 2)
label_312cc0:
    if (ctx->pc == 0x312CC0u) {
        ctx->pc = 0x312CC0u;
            // 0x312cc0: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x312CC4u;
        goto label_312cc4;
    }
    ctx->pc = 0x312CBCu;
    {
        const bool branch_taken_0x312cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312CBCu;
            // 0x312cc0: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cbc) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312CC4u;
label_312cc4:
    // 0x312cc4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x312cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_312cc8:
    // 0x312cc8: 0xa443f654  sh          $v1, -0x9AC($v0)
    ctx->pc = 0x312cc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4294964820), (uint16_t)GPR_U32(ctx, 3));
label_312ccc:
    // 0x312ccc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x312cccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_312cd0:
    // 0x312cd0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x312cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_312cd4:
    // 0x312cd4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x312cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_312cd8:
    // 0x312cd8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x312cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_312cdc:
    // 0x312cdc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x312cdcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_312ce0:
    // 0x312ce0: 0xc04cbd8  jal         func_132F60
label_312ce4:
    if (ctx->pc == 0x312CE4u) {
        ctx->pc = 0x312CE4u;
            // 0x312ce4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x312CE8u;
        goto label_312ce8;
    }
    ctx->pc = 0x312CE0u;
    SET_GPR_U32(ctx, 31, 0x312CE8u);
    ctx->pc = 0x312CE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CE0u;
            // 0x312ce4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CE8u; }
        if (ctx->pc != 0x312CE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CE8u; }
        if (ctx->pc != 0x312CE8u) { return; }
    }
    ctx->pc = 0x312CE8u;
label_312ce8:
    // 0x312ce8: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x312ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
label_312cec:
    // 0x312cec: 0xc04cc04  jal         func_133010
label_312cf0:
    if (ctx->pc == 0x312CF0u) {
        ctx->pc = 0x312CF0u;
            // 0x312cf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x312CF4u;
        goto label_312cf4;
    }
    ctx->pc = 0x312CECu;
    SET_GPR_U32(ctx, 31, 0x312CF4u);
    ctx->pc = 0x312CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312CECu;
            // 0x312cf0: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CF4u; }
        if (ctx->pc != 0x312CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312CF4u; }
        if (ctx->pc != 0x312CF4u) { return; }
    }
    ctx->pc = 0x312CF4u;
label_312cf4:
    // 0x312cf4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x312cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_312cf8:
    // 0x312cf8: 0x10000064  b           . + 4 + (0x64 << 2)
label_312cfc:
    if (ctx->pc == 0x312CFCu) {
        ctx->pc = 0x312CFCu;
            // 0x312cfc: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x312D00u;
        goto label_312d00;
    }
    ctx->pc = 0x312CF8u;
    {
        const bool branch_taken_0x312cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312CF8u;
            // 0x312cfc: 0xae430050  sw          $v1, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312cf8) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312D00u;
label_312d00:
    // 0x312d00: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312d00u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312d04:
    // 0x312d04: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312d08:
    if (ctx->pc == 0x312D08u) {
        ctx->pc = 0x312D08u;
            // 0x312d08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312D0Cu;
        goto label_312d0c;
    }
    ctx->pc = 0x312D04u;
    {
        const bool branch_taken_0x312d04 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312D04u;
            // 0x312d08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d04) {
            ctx->pc = 0x312D1Cu;
            goto label_312d1c;
        }
    }
    ctx->pc = 0x312D0Cu;
label_312d0c:
    // 0x312d0c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312d0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312d10:
    // 0x312d10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312d14:
    if (ctx->pc == 0x312D14u) {
        ctx->pc = 0x312D18u;
        goto label_312d18;
    }
    ctx->pc = 0x312D10u;
    {
        const bool branch_taken_0x312d10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d10) {
            ctx->pc = 0x312D1Cu;
            goto label_312d1c;
        }
    }
    ctx->pc = 0x312D18u;
label_312d18:
    // 0x312d18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312d1c:
    // 0x312d1c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312d20:
    if (ctx->pc == 0x312D20u) {
        ctx->pc = 0x312D24u;
        goto label_312d24;
    }
    ctx->pc = 0x312D1Cu;
    {
        const bool branch_taken_0x312d1c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d1c) {
            ctx->pc = 0x312D38u;
            goto label_312d38;
        }
    }
    ctx->pc = 0x312D24u;
label_312d24:
    // 0x312d24: 0xc075eb4  jal         func_1D7AD0
label_312d28:
    if (ctx->pc == 0x312D28u) {
        ctx->pc = 0x312D28u;
            // 0x312d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312D2Cu;
        goto label_312d2c;
    }
    ctx->pc = 0x312D24u;
    SET_GPR_U32(ctx, 31, 0x312D2Cu);
    ctx->pc = 0x312D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312D24u;
            // 0x312d28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D2Cu; }
        if (ctx->pc != 0x312D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D2Cu; }
        if (ctx->pc != 0x312D2Cu) { return; }
    }
    ctx->pc = 0x312D2Cu;
label_312d2c:
    // 0x312d2c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312d30:
    if (ctx->pc == 0x312D30u) {
        ctx->pc = 0x312D34u;
        goto label_312d34;
    }
    ctx->pc = 0x312D2Cu;
    {
        const bool branch_taken_0x312d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d2c) {
            ctx->pc = 0x312D38u;
            goto label_312d38;
        }
    }
    ctx->pc = 0x312D34u;
label_312d34:
    // 0x312d34: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312d38:
    // 0x312d38: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_312d3c:
    if (ctx->pc == 0x312D3Cu) {
        ctx->pc = 0x312D3Cu;
            // 0x312d3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x312D40u;
        goto label_312d40;
    }
    ctx->pc = 0x312D38u;
    {
        const bool branch_taken_0x312d38 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d38) {
            ctx->pc = 0x312D3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312D38u;
            // 0x312d3c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312DA8u;
            goto label_312da8;
        }
    }
    ctx->pc = 0x312D40u;
label_312d40:
    // 0x312d40: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x312d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_312d44:
    // 0x312d44: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312d48:
    // 0x312d48: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_312d4c:
    if (ctx->pc == 0x312D4Cu) {
        ctx->pc = 0x312D50u;
        goto label_312d50;
    }
    ctx->pc = 0x312D48u;
    {
        const bool branch_taken_0x312d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x312d48) {
            ctx->pc = 0x312DA4u;
            goto label_312da4;
        }
    }
    ctx->pc = 0x312D50u;
label_312d50:
    // 0x312d50: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x312d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312d54:
    // 0x312d54: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312d54u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312d58:
    // 0x312d58: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312d5c:
    if (ctx->pc == 0x312D5Cu) {
        ctx->pc = 0x312D5Cu;
            // 0x312d5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312D60u;
        goto label_312d60;
    }
    ctx->pc = 0x312D58u;
    {
        const bool branch_taken_0x312d58 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312D58u;
            // 0x312d5c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312d58) {
            ctx->pc = 0x312D70u;
            goto label_312d70;
        }
    }
    ctx->pc = 0x312D60u;
label_312d60:
    // 0x312d60: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312d60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312d64:
    // 0x312d64: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312d68:
    if (ctx->pc == 0x312D68u) {
        ctx->pc = 0x312D6Cu;
        goto label_312d6c;
    }
    ctx->pc = 0x312D64u;
    {
        const bool branch_taken_0x312d64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312d64) {
            ctx->pc = 0x312D70u;
            goto label_312d70;
        }
    }
    ctx->pc = 0x312D6Cu;
label_312d6c:
    // 0x312d6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312d70:
    // 0x312d70: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312d74:
    if (ctx->pc == 0x312D74u) {
        ctx->pc = 0x312D78u;
        goto label_312d78;
    }
    ctx->pc = 0x312D70u;
    {
        const bool branch_taken_0x312d70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d70) {
            ctx->pc = 0x312D8Cu;
            goto label_312d8c;
        }
    }
    ctx->pc = 0x312D78u;
label_312d78:
    // 0x312d78: 0xc075eb4  jal         func_1D7AD0
label_312d7c:
    if (ctx->pc == 0x312D7Cu) {
        ctx->pc = 0x312D7Cu;
            // 0x312d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312D80u;
        goto label_312d80;
    }
    ctx->pc = 0x312D78u;
    SET_GPR_U32(ctx, 31, 0x312D80u);
    ctx->pc = 0x312D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312D78u;
            // 0x312d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D80u; }
        if (ctx->pc != 0x312D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312D80u; }
        if (ctx->pc != 0x312D80u) { return; }
    }
    ctx->pc = 0x312D80u;
label_312d80:
    // 0x312d80: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312d84:
    if (ctx->pc == 0x312D84u) {
        ctx->pc = 0x312D88u;
        goto label_312d88;
    }
    ctx->pc = 0x312D80u;
    {
        const bool branch_taken_0x312d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d80) {
            ctx->pc = 0x312D8Cu;
            goto label_312d8c;
        }
    }
    ctx->pc = 0x312D88u;
label_312d88:
    // 0x312d88: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312d88u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312d8c:
    // 0x312d8c: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_312d90:
    if (ctx->pc == 0x312D90u) {
        ctx->pc = 0x312D94u;
        goto label_312d94;
    }
    ctx->pc = 0x312D8Cu;
    {
        const bool branch_taken_0x312d8c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312d8c) {
            ctx->pc = 0x312DA4u;
            goto label_312da4;
        }
    }
    ctx->pc = 0x312D94u;
label_312d94:
    // 0x312d94: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x312d94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312d98:
    // 0x312d98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312d9c:
    // 0x312d9c: 0x54830005  bnel        $a0, $v1, . + 4 + (0x5 << 2)
label_312da0:
    if (ctx->pc == 0x312DA0u) {
        ctx->pc = 0x312DA0u;
            // 0x312da0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x312DA4u;
        goto label_312da4;
    }
    ctx->pc = 0x312D9Cu;
    {
        const bool branch_taken_0x312d9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312d9c) {
            ctx->pc = 0x312DA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312D9Cu;
            // 0x312da0: 0x8e440060  lw          $a0, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312DB4u;
            goto label_312db4;
        }
    }
    ctx->pc = 0x312DA4u;
label_312da4:
    // 0x312da4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x312da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_312da8:
    // 0x312da8: 0xc073234  jal         func_1CC8D0
label_312dac:
    if (ctx->pc == 0x312DACu) {
        ctx->pc = 0x312DACu;
            // 0x312dac: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x312DB0u;
        goto label_312db0;
    }
    ctx->pc = 0x312DA8u;
    SET_GPR_U32(ctx, 31, 0x312DB0u);
    ctx->pc = 0x312DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312DA8u;
            // 0x312dac: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312DB0u; }
        if (ctx->pc != 0x312DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312DB0u; }
        if (ctx->pc != 0x312DB0u) { return; }
    }
    ctx->pc = 0x312DB0u;
label_312db0:
    // 0x312db0: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x312db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_312db4:
    // 0x312db4: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x312db4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_312db8:
    // 0x312db8: 0x3063feff  andi        $v1, $v1, 0xFEFF
    ctx->pc = 0x312db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65279);
label_312dbc:
    // 0x312dbc: 0x10000033  b           . + 4 + (0x33 << 2)
label_312dc0:
    if (ctx->pc == 0x312DC0u) {
        ctx->pc = 0x312DC0u;
            // 0x312dc0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x312DC4u;
        goto label_312dc4;
    }
    ctx->pc = 0x312DBCu;
    {
        const bool branch_taken_0x312dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312DBCu;
            // 0x312dc0: 0xa4830064  sh          $v1, 0x64($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dbc) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312DC4u;
label_312dc4:
    // 0x312dc4: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312dc4u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312dc8:
    // 0x312dc8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312dcc:
    if (ctx->pc == 0x312DCCu) {
        ctx->pc = 0x312DCCu;
            // 0x312dcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312DD0u;
        goto label_312dd0;
    }
    ctx->pc = 0x312DC8u;
    {
        const bool branch_taken_0x312dc8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312DC8u;
            // 0x312dcc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312dc8) {
            ctx->pc = 0x312DE0u;
            goto label_312de0;
        }
    }
    ctx->pc = 0x312DD0u;
label_312dd0:
    // 0x312dd0: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312dd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312dd4:
    // 0x312dd4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312dd8:
    if (ctx->pc == 0x312DD8u) {
        ctx->pc = 0x312DDCu;
        goto label_312ddc;
    }
    ctx->pc = 0x312DD4u;
    {
        const bool branch_taken_0x312dd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312dd4) {
            ctx->pc = 0x312DE0u;
            goto label_312de0;
        }
    }
    ctx->pc = 0x312DDCu;
label_312ddc:
    // 0x312ddc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312de0:
    // 0x312de0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312de4:
    if (ctx->pc == 0x312DE4u) {
        ctx->pc = 0x312DE8u;
        goto label_312de8;
    }
    ctx->pc = 0x312DE0u;
    {
        const bool branch_taken_0x312de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312de0) {
            ctx->pc = 0x312DFCu;
            goto label_312dfc;
        }
    }
    ctx->pc = 0x312DE8u;
label_312de8:
    // 0x312de8: 0xc075eb4  jal         func_1D7AD0
label_312dec:
    if (ctx->pc == 0x312DECu) {
        ctx->pc = 0x312DECu;
            // 0x312dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312DF0u;
        goto label_312df0;
    }
    ctx->pc = 0x312DE8u;
    SET_GPR_U32(ctx, 31, 0x312DF0u);
    ctx->pc = 0x312DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312DE8u;
            // 0x312dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312DF0u; }
        if (ctx->pc != 0x312DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312DF0u; }
        if (ctx->pc != 0x312DF0u) { return; }
    }
    ctx->pc = 0x312DF0u;
label_312df0:
    // 0x312df0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312df4:
    if (ctx->pc == 0x312DF4u) {
        ctx->pc = 0x312DF8u;
        goto label_312df8;
    }
    ctx->pc = 0x312DF0u;
    {
        const bool branch_taken_0x312df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312df0) {
            ctx->pc = 0x312DFCu;
            goto label_312dfc;
        }
    }
    ctx->pc = 0x312DF8u;
label_312df8:
    // 0x312df8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312df8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312dfc:
    // 0x312dfc: 0x5660001b  bnel        $s3, $zero, . + 4 + (0x1B << 2)
label_312e00:
    if (ctx->pc == 0x312E00u) {
        ctx->pc = 0x312E00u;
            // 0x312e00: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->pc = 0x312E04u;
        goto label_312e04;
    }
    ctx->pc = 0x312DFCu;
    {
        const bool branch_taken_0x312dfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312dfc) {
            ctx->pc = 0x312E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312DFCu;
            // 0x312e00: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312E6Cu;
            goto label_312e6c;
        }
    }
    ctx->pc = 0x312E04u;
label_312e04:
    // 0x312e04: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x312e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_312e08:
    // 0x312e08: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312e0c:
    // 0x312e0c: 0x10830016  beq         $a0, $v1, . + 4 + (0x16 << 2)
label_312e10:
    if (ctx->pc == 0x312E10u) {
        ctx->pc = 0x312E14u;
        goto label_312e14;
    }
    ctx->pc = 0x312E0Cu;
    {
        const bool branch_taken_0x312e0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x312e0c) {
            ctx->pc = 0x312E68u;
            goto label_312e68;
        }
    }
    ctx->pc = 0x312E14u;
label_312e14:
    // 0x312e14: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x312e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312e18:
    // 0x312e18: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x312e18u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_312e1c:
    // 0x312e1c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_312e20:
    if (ctx->pc == 0x312E20u) {
        ctx->pc = 0x312E20u;
            // 0x312e20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312E24u;
        goto label_312e24;
    }
    ctx->pc = 0x312E1Cu;
    {
        const bool branch_taken_0x312e1c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x312E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312E1Cu;
            // 0x312e20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312e1c) {
            ctx->pc = 0x312E34u;
            goto label_312e34;
        }
    }
    ctx->pc = 0x312E24u;
label_312e24:
    // 0x312e24: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x312e24u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_312e28:
    // 0x312e28: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_312e2c:
    if (ctx->pc == 0x312E2Cu) {
        ctx->pc = 0x312E30u;
        goto label_312e30;
    }
    ctx->pc = 0x312E28u;
    {
        const bool branch_taken_0x312e28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x312e28) {
            ctx->pc = 0x312E34u;
            goto label_312e34;
        }
    }
    ctx->pc = 0x312E30u;
label_312e30:
    // 0x312e30: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x312e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_312e34:
    // 0x312e34: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_312e38:
    if (ctx->pc == 0x312E38u) {
        ctx->pc = 0x312E3Cu;
        goto label_312e3c;
    }
    ctx->pc = 0x312E34u;
    {
        const bool branch_taken_0x312e34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x312e34) {
            ctx->pc = 0x312E50u;
            goto label_312e50;
        }
    }
    ctx->pc = 0x312E3Cu;
label_312e3c:
    // 0x312e3c: 0xc075eb4  jal         func_1D7AD0
label_312e40:
    if (ctx->pc == 0x312E40u) {
        ctx->pc = 0x312E40u;
            // 0x312e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312E44u;
        goto label_312e44;
    }
    ctx->pc = 0x312E3Cu;
    SET_GPR_U32(ctx, 31, 0x312E44u);
    ctx->pc = 0x312E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E3Cu;
            // 0x312e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E44u; }
        if (ctx->pc != 0x312E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E44u; }
        if (ctx->pc != 0x312E44u) { return; }
    }
    ctx->pc = 0x312E44u;
label_312e44:
    // 0x312e44: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_312e48:
    if (ctx->pc == 0x312E48u) {
        ctx->pc = 0x312E4Cu;
        goto label_312e4c;
    }
    ctx->pc = 0x312E44u;
    {
        const bool branch_taken_0x312e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312e44) {
            ctx->pc = 0x312E50u;
            goto label_312e50;
        }
    }
    ctx->pc = 0x312E4Cu;
label_312e4c:
    // 0x312e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x312e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312e50:
    // 0x312e50: 0x16600005  bnez        $s3, . + 4 + (0x5 << 2)
label_312e54:
    if (ctx->pc == 0x312E54u) {
        ctx->pc = 0x312E58u;
        goto label_312e58;
    }
    ctx->pc = 0x312E50u;
    {
        const bool branch_taken_0x312e50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x312e50) {
            ctx->pc = 0x312E68u;
            goto label_312e68;
        }
    }
    ctx->pc = 0x312E58u;
label_312e58:
    // 0x312e58: 0x8e240e34  lw          $a0, 0xE34($s1)
    ctx->pc = 0x312e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_312e5c:
    // 0x312e5c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x312e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_312e60:
    // 0x312e60: 0x1483000a  bne         $a0, $v1, . + 4 + (0xA << 2)
label_312e64:
    if (ctx->pc == 0x312E64u) {
        ctx->pc = 0x312E68u;
        goto label_312e68;
    }
    ctx->pc = 0x312E60u;
    {
        const bool branch_taken_0x312e60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312e60) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312E68u;
label_312e68:
    // 0x312e68: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x312e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_312e6c:
    // 0x312e6c: 0xc073234  jal         func_1CC8D0
label_312e70:
    if (ctx->pc == 0x312E70u) {
        ctx->pc = 0x312E70u;
            // 0x312e70: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x312E74u;
        goto label_312e74;
    }
    ctx->pc = 0x312E6Cu;
    SET_GPR_U32(ctx, 31, 0x312E74u);
    ctx->pc = 0x312E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312E6Cu;
            // 0x312e70: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E74u; }
        if (ctx->pc != 0x312E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312E74u; }
        if (ctx->pc != 0x312E74u) { return; }
    }
    ctx->pc = 0x312E74u;
label_312e74:
    // 0x312e74: 0x10000005  b           . + 4 + (0x5 << 2)
label_312e78:
    if (ctx->pc == 0x312E78u) {
        ctx->pc = 0x312E7Cu;
        goto label_312e7c;
    }
    ctx->pc = 0x312E74u;
    {
        const bool branch_taken_0x312e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x312e74) {
            ctx->pc = 0x312E8Cu;
            goto label_312e8c;
        }
    }
    ctx->pc = 0x312E7Cu;
label_312e7c:
    // 0x312e7c: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x312e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_312e80:
    // 0x312e80: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x312e80u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_312e84:
    // 0x312e84: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x312e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_312e88:
    // 0x312e88: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x312e88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_312e8c:
    // 0x312e8c: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x312e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_312e90:
    // 0x312e90: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x312e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_312e94:
    // 0x312e94: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_312e98:
    if (ctx->pc == 0x312E98u) {
        ctx->pc = 0x312E98u;
            // 0x312e98: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->pc = 0x312E9Cu;
        goto label_312e9c;
    }
    ctx->pc = 0x312E94u;
    {
        const bool branch_taken_0x312e94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x312e94) {
            ctx->pc = 0x312E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312E94u;
            // 0x312e98: 0x8e450028  lw          $a1, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312EB8u;
            goto label_312eb8;
        }
    }
    ctx->pc = 0x312E9Cu;
label_312e9c:
    // 0x312e9c: 0xc601118c  lwc1        $f1, 0x118C($s0)
    ctx->pc = 0x312e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_312ea0:
    // 0x312ea0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x312ea0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_312ea4:
    // 0x312ea4: 0x0  nop
    ctx->pc = 0x312ea4u;
    // NOP
label_312ea8:
    // 0x312ea8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x312ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_312eac:
    // 0x312eac: 0x4502000e  bc1fl       . + 4 + (0xE << 2)
label_312eb0:
    if (ctx->pc == 0x312EB0u) {
        ctx->pc = 0x312EB0u;
            // 0x312eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x312EB4u;
        goto label_312eb4;
    }
    ctx->pc = 0x312EACu;
    {
        const bool branch_taken_0x312eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x312eac) {
            ctx->pc = 0x312EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312EACu;
            // 0x312eb0: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312EE8u;
            goto label_312ee8;
        }
    }
    ctx->pc = 0x312EB4u;
label_312eb4:
    // 0x312eb4: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x312eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_312eb8:
    // 0x312eb8: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_312ebc:
    if (ctx->pc == 0x312EBCu) {
        ctx->pc = 0x312EBCu;
            // 0x312ebc: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->pc = 0x312EC0u;
        goto label_312ec0;
    }
    ctx->pc = 0x312EB8u;
    {
        const bool branch_taken_0x312eb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x312eb8) {
            ctx->pc = 0x312EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312EB8u;
            // 0x312ebc: 0xae400028  sw          $zero, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312ED4u;
            goto label_312ed4;
        }
    }
    ctx->pc = 0x312EC0u;
label_312ec0:
    // 0x312ec0: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x312ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_312ec4:
    // 0x312ec4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x312ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_312ec8:
    // 0x312ec8: 0xc057b7c  jal         func_15EDF0
label_312ecc:
    if (ctx->pc == 0x312ECCu) {
        ctx->pc = 0x312ECCu;
            // 0x312ecc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x312ED0u;
        goto label_312ed0;
    }
    ctx->pc = 0x312EC8u;
    SET_GPR_U32(ctx, 31, 0x312ED0u);
    ctx->pc = 0x312ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312EC8u;
            // 0x312ecc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312ED0u; }
        if (ctx->pc != 0x312ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312ED0u; }
        if (ctx->pc != 0x312ED0u) { return; }
    }
    ctx->pc = 0x312ED0u;
label_312ed0:
    // 0x312ed0: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x312ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_312ed4:
    // 0x312ed4: 0x8e440060  lw          $a0, 0x60($s2)
    ctx->pc = 0x312ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_312ed8:
    // 0x312ed8: 0x94830064  lhu         $v1, 0x64($a0)
    ctx->pc = 0x312ed8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_312edc:
    // 0x312edc: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x312edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_312ee0:
    // 0x312ee0: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x312ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_312ee4:
    // 0x312ee4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x312ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_312ee8:
    // 0x312ee8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x312ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_312eec:
    // 0x312eec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x312eecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_312ef0:
    // 0x312ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312ef4:
    // 0x312ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_312ef8:
    // 0x312ef8: 0x3e00008  jr          $ra
label_312efc:
    if (ctx->pc == 0x312EFCu) {
        ctx->pc = 0x312EFCu;
            // 0x312efc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x312F00u;
        goto label_312f00;
    }
    ctx->pc = 0x312EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312EF8u;
            // 0x312efc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312F00u;
label_312f00:
    // 0x312f00: 0x3e00008  jr          $ra
label_312f04:
    if (ctx->pc == 0x312F04u) {
        ctx->pc = 0x312F08u;
        goto label_312f08;
    }
    ctx->pc = 0x312F00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312F08u;
label_312f08:
    // 0x312f08: 0x0  nop
    ctx->pc = 0x312f08u;
    // NOP
label_312f0c:
    // 0x312f0c: 0x0  nop
    ctx->pc = 0x312f0cu;
    // NOP
label_312f10:
    // 0x312f10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x312f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_312f14:
    // 0x312f14: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x312f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_312f18:
    // 0x312f18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x312f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_312f1c:
    // 0x312f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x312f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_312f20:
    // 0x312f20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x312f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_312f24:
    // 0x312f24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x312f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_312f28:
    // 0x312f28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312f28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312f2c:
    // 0x312f2c: 0xc12ca3c  jal         func_4B28F0
label_312f30:
    if (ctx->pc == 0x312F30u) {
        ctx->pc = 0x312F30u;
            // 0x312f30: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->pc = 0x312F34u;
        goto label_312f34;
    }
    ctx->pc = 0x312F2Cu;
    SET_GPR_U32(ctx, 31, 0x312F34u);
    ctx->pc = 0x312F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F2Cu;
            // 0x312f30: 0x24441150  addiu       $a0, $v0, 0x1150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B28F0u;
    if (runtime->hasFunction(0x4B28F0u)) {
        auto targetFn = runtime->lookupFunction(0x4B28F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F34u; }
        if (ctx->pc != 0x312F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004B28F0_0x4b28f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F34u; }
        if (ctx->pc != 0x312F34u) { return; }
    }
    ctx->pc = 0x312F34u;
label_312f34:
    // 0x312f34: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x312f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_312f38:
    // 0x312f38: 0x54600014  bnel        $v1, $zero, . + 4 + (0x14 << 2)
label_312f3c:
    if (ctx->pc == 0x312F3Cu) {
        ctx->pc = 0x312F3Cu;
            // 0x312f3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x312F40u;
        goto label_312f40;
    }
    ctx->pc = 0x312F38u;
    {
        const bool branch_taken_0x312f38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x312f38) {
            ctx->pc = 0x312F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312F38u;
            // 0x312f3c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x312F8Cu;
            goto label_312f8c;
        }
    }
    ctx->pc = 0x312F40u;
label_312f40:
    // 0x312f40: 0xc040180  jal         func_100600
label_312f44:
    if (ctx->pc == 0x312F44u) {
        ctx->pc = 0x312F44u;
            // 0x312f44: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x312F48u;
        goto label_312f48;
    }
    ctx->pc = 0x312F40u;
    SET_GPR_U32(ctx, 31, 0x312F48u);
    ctx->pc = 0x312F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F40u;
            // 0x312f44: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F48u; }
        if (ctx->pc != 0x312F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F48u; }
        if (ctx->pc != 0x312F48u) { return; }
    }
    ctx->pc = 0x312F48u;
label_312f48:
    // 0x312f48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_312f4c:
    if (ctx->pc == 0x312F4Cu) {
        ctx->pc = 0x312F4Cu;
            // 0x312f4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312F50u;
        goto label_312f50;
    }
    ctx->pc = 0x312F48u;
    {
        const bool branch_taken_0x312f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312F48u;
            // 0x312f4c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312f48) {
            ctx->pc = 0x312F84u;
            goto label_312f84;
        }
    }
    ctx->pc = 0x312F50u;
label_312f50:
    // 0x312f50: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x312f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_312f54:
    // 0x312f54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312f58:
    // 0x312f58: 0x344595d4  ori         $a1, $v0, 0x95D4
    ctx->pc = 0x312f58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38356);
label_312f5c:
    // 0x312f5c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x312f5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312f60:
    // 0x312f60: 0xc10ca68  jal         func_4329A0
label_312f64:
    if (ctx->pc == 0x312F64u) {
        ctx->pc = 0x312F64u;
            // 0x312f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x312F68u;
        goto label_312f68;
    }
    ctx->pc = 0x312F60u;
    SET_GPR_U32(ctx, 31, 0x312F68u);
    ctx->pc = 0x312F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312F60u;
            // 0x312f64: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F68u; }
        if (ctx->pc != 0x312F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312F68u; }
        if (ctx->pc != 0x312F68u) { return; }
    }
    ctx->pc = 0x312F68u;
label_312f68:
    // 0x312f68: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x312f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_312f6c:
    // 0x312f6c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x312f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_312f70:
    // 0x312f70: 0x2484ceb0  addiu       $a0, $a0, -0x3150
    ctx->pc = 0x312f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954672));
label_312f74:
    // 0x312f74: 0x2463ce80  addiu       $v1, $v1, -0x3180
    ctx->pc = 0x312f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954624));
label_312f78:
    // 0x312f78: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x312f78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
label_312f7c:
    // 0x312f7c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x312f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_312f80:
    // 0x312f80: 0xae300054  sw          $s0, 0x54($s1)
    ctx->pc = 0x312f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 16));
label_312f84:
    // 0x312f84: 0xae110028  sw          $s1, 0x28($s0)
    ctx->pc = 0x312f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 17));
label_312f88:
    // 0x312f88: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x312f88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_312f8c:
    // 0x312f8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x312f8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_312f90:
    // 0x312f90: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x312f90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_312f94:
    // 0x312f94: 0x3e00008  jr          $ra
label_312f98:
    if (ctx->pc == 0x312F98u) {
        ctx->pc = 0x312F98u;
            // 0x312f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x312F9Cu;
        goto label_312f9c;
    }
    ctx->pc = 0x312F94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312F94u;
            // 0x312f98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x312F9Cu;
label_312f9c:
    // 0x312f9c: 0x0  nop
    ctx->pc = 0x312f9cu;
    // NOP
label_312fa0:
    // 0x312fa0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x312fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_312fa4:
    // 0x312fa4: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x312fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_312fa8:
    // 0x312fa8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x312fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_312fac:
    // 0x312fac: 0x24a5cdb0  addiu       $a1, $a1, -0x3250
    ctx->pc = 0x312facu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954416));
label_312fb0:
    // 0x312fb0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x312fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_312fb4:
    // 0x312fb4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x312fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_312fb8:
    // 0x312fb8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x312fb8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_312fbc:
    // 0x312fbc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x312fbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_312fc0:
    // 0x312fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x312fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_312fc4:
    // 0x312fc4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x312fc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_312fc8:
    // 0x312fc8: 0xc075728  jal         func_1D5CA0
label_312fcc:
    if (ctx->pc == 0x312FCCu) {
        ctx->pc = 0x312FCCu;
            // 0x312fcc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x312FD0u;
        goto label_312fd0;
    }
    ctx->pc = 0x312FC8u;
    SET_GPR_U32(ctx, 31, 0x312FD0u);
    ctx->pc = 0x312FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312FC8u;
            // 0x312fcc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5CA0u;
    if (runtime->hasFunction(0x1D5CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1D5CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312FD0u; }
        if (ctx->pc != 0x312FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D5CA0_0x1d5ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312FD0u; }
        if (ctx->pc != 0x312FD0u) { return; }
    }
    ctx->pc = 0x312FD0u;
label_312fd0:
    // 0x312fd0: 0x54400092  bnel        $v0, $zero, . + 4 + (0x92 << 2)
label_312fd4:
    if (ctx->pc == 0x312FD4u) {
        ctx->pc = 0x312FD4u;
            // 0x312fd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x312FD8u;
        goto label_312fd8;
    }
    ctx->pc = 0x312FD0u;
    {
        const bool branch_taken_0x312fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x312fd0) {
            ctx->pc = 0x312FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x312FD0u;
            // 0x312fd4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x31321Cu;
            goto label_31321c;
        }
    }
    ctx->pc = 0x312FD8u;
label_312fd8:
    // 0x312fd8: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x312fd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_312fdc:
    // 0x312fdc: 0x8e790054  lw          $t9, 0x54($s3)
    ctx->pc = 0x312fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
label_312fe0:
    // 0x312fe0: 0x8e230550  lw          $v1, 0x550($s1)
    ctx->pc = 0x312fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_312fe4:
    // 0x312fe4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x312fe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_312fe8:
    // 0x312fe8: 0x8e320d6c  lw          $s2, 0xD6C($s1)
    ctx->pc = 0x312fe8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_312fec:
    // 0x312fec: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x312fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_312ff0:
    // 0x312ff0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x312ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_312ff4:
    // 0x312ff4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x312ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_312ff8:
    // 0x312ff8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x312ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_312ffc:
    // 0x312ffc: 0x320f809  jalr        $t9
label_313000:
    if (ctx->pc == 0x313000u) {
        ctx->pc = 0x313000u;
            // 0x313000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313004u;
        goto label_313004;
    }
    ctx->pc = 0x312FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313004u);
        ctx->pc = 0x313000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x312FFCu;
            // 0x313000: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313004u; }
            if (ctx->pc != 0x313004u) { return; }
        }
        }
    }
    ctx->pc = 0x313004u;
label_313004:
    // 0x313004: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x313004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_313008:
    // 0x313008: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x313008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_31300c:
    // 0x31300c: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x31300cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_313010:
    // 0x313010: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x313010u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_313014:
    // 0x313014: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x313014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_313018:
    // 0x313018: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x313018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31301c:
    // 0x31301c: 0xc4820018  lwc1        $f2, 0x18($a0)
    ctx->pc = 0x31301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_313020:
    // 0x313020: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x313020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_313024:
    // 0x313024: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x313024u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_313028:
    // 0x313028: 0x0  nop
    ctx->pc = 0x313028u;
    // NOP
label_31302c:
    // 0x31302c: 0x46002818  adda.s      $f5, $f0
    ctx->pc = 0x31302cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_313030:
    // 0x313030: 0x4602a002  mul.s       $f0, $f20, $f2
    ctx->pc = 0x313030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_313034:
    // 0x313034: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x313034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_313038:
    // 0x313038: 0xc6210dbc  lwc1        $f1, 0xDBC($s1)
    ctx->pc = 0x313038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31303c:
    // 0x31303c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x31303cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_313040:
    // 0x313040: 0x3c033f06  lui         $v1, 0x3F06
    ctx->pc = 0x313040u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16134 << 16));
label_313044:
    // 0x313044: 0x4601001c  madd.s      $f0, $f0, $f1
    ctx->pc = 0x313044u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_313048:
    // 0x313048: 0x34630a92  ori         $v1, $v1, 0xA92
    ctx->pc = 0x313048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2706);
label_31304c:
    // 0x31304c: 0xe6600024  swc1        $f0, 0x24($s3)
    ctx->pc = 0x31304cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
label_313050:
    // 0x313050: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x313050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_313054:
    // 0x313054: 0xc6620064  lwc1        $f2, 0x64($s3)
    ctx->pc = 0x313054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_313058:
    // 0x313058: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x313058u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_31305c:
    // 0x31305c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x31305cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_313060:
    // 0x313060: 0xc4440018  lwc1        $f4, 0x18($v0)
    ctx->pc = 0x313060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_313064:
    // 0x313064: 0x46022818  adda.s      $f5, $f2
    ctx->pc = 0x313064u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_313068:
    // 0x313068: 0x4604a082  mul.s       $f2, $f20, $f4
    ctx->pc = 0x313068u;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[4]);
label_31306c:
    // 0x31306c: 0x4602189c  madd.s      $f2, $f3, $f2
    ctx->pc = 0x31306cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_313070:
    // 0x313070: 0x46012818  adda.s      $f5, $f1
    ctx->pc = 0x313070u;
    ctx->f[31] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_313074:
    // 0x313074: 0xe6620064  swc1        $f2, 0x64($s3)
    ctx->pc = 0x313074u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 100), bits); }
label_313078:
    // 0x313078: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x313078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31307c:
    // 0x31307c: 0x46141d5d  msub.s      $f21, $f3, $f20
    ctx->pc = 0x31307cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_313080:
    // 0x313080: 0xc0477a8  jal         func_11DEA0
label_313084:
    if (ctx->pc == 0x313084u) {
        ctx->pc = 0x313084u;
            // 0x313084: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x313088u;
        goto label_313088;
    }
    ctx->pc = 0x313080u;
    SET_GPR_U32(ctx, 31, 0x313088u);
    ctx->pc = 0x313084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313080u;
            // 0x313084: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313088u; }
        if (ctx->pc != 0x313088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313088u; }
        if (ctx->pc != 0x313088u) { return; }
    }
    ctx->pc = 0x313088u;
label_313088:
    // 0x313088: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x313088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_31308c:
    // 0x31308c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x31308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_313090:
    // 0x313090: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x313090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_313094:
    // 0x313094: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x313094u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_313098:
    // 0x313098: 0x0  nop
    ctx->pc = 0x313098u;
    // NOP
label_31309c:
    // 0x31309c: 0x46151082  mul.s       $f2, $f2, $f21
    ctx->pc = 0x31309cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[21]);
label_3130a0:
    // 0x3130a0: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3130a0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3130a4:
    // 0x3130a4: 0xc6210dc0  lwc1        $f1, 0xDC0($s1)
    ctx->pc = 0x3130a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3130a8:
    // 0x3130a8: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x3130a8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_3130ac:
    // 0x3130ac: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3130acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_3130b0:
    // 0x3130b0: 0x46001064  .word       0x46001064                   # cvt.w.s     $f1, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3130b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_3130b4:
    // 0x3130b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3130b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3130b8:
    // 0x3130b8: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3130b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3130bc:
    // 0x3130bc: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3130bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3130c0:
    // 0x3130c0: 0xc04cab0  jal         func_132AC0
label_3130c4:
    if (ctx->pc == 0x3130C4u) {
        ctx->pc = 0x3130C4u;
            // 0x3130c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3130C8u;
        goto label_3130c8;
    }
    ctx->pc = 0x3130C0u;
    SET_GPR_U32(ctx, 31, 0x3130C8u);
    ctx->pc = 0x3130C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3130C0u;
            // 0x3130c4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3130C8u; }
        if (ctx->pc != 0x3130C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3130C8u; }
        if (ctx->pc != 0x3130C8u) { return; }
    }
    ctx->pc = 0x3130C8u;
label_3130c8:
    // 0x3130c8: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3130c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3130cc:
    // 0x3130cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3130ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3130d0:
    // 0x3130d0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3130d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3130d4:
    // 0x3130d4: 0x320f809  jalr        $t9
label_3130d8:
    if (ctx->pc == 0x3130D8u) {
        ctx->pc = 0x3130D8u;
            // 0x3130d8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x3130DCu;
        goto label_3130dc;
    }
    ctx->pc = 0x3130D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3130DCu);
        ctx->pc = 0x3130D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3130D4u;
            // 0x3130d8: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3130DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3130DCu; }
            if (ctx->pc != 0x3130DCu) { return; }
        }
        }
    }
    ctx->pc = 0x3130DCu;
label_3130dc:
    // 0x3130dc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3130dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3130e0:
    // 0x3130e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3130e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3130e4:
    // 0x3130e4: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3130e4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3130e8:
    // 0x3130e8: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3130e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_3130ec:
    // 0x3130ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3130ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3130f0:
    // 0x3130f0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3130f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_3130f4:
    // 0x3130f4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3130f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3130f8:
    // 0x3130f8: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x3130f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3130fc:
    // 0x3130fc: 0xc04c72c  jal         func_131CB0
label_313100:
    if (ctx->pc == 0x313100u) {
        ctx->pc = 0x313100u;
            // 0x313100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313104u;
        goto label_313104;
    }
    ctx->pc = 0x3130FCu;
    SET_GPR_U32(ctx, 31, 0x313104u);
    ctx->pc = 0x313100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3130FCu;
            // 0x313100: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313104u; }
        if (ctx->pc != 0x313104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313104u; }
        if (ctx->pc != 0x313104u) { return; }
    }
    ctx->pc = 0x313104u;
label_313104:
    // 0x313104: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x313104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_313108:
    // 0x313108: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x313108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_31310c:
    // 0x31310c: 0xc6750064  lwc1        $f21, 0x64($s3)
    ctx->pc = 0x31310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_313110:
    // 0x313110: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x313110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_313114:
    // 0x313114: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313114u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313118:
    // 0x313118: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x313118u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_31311c:
    // 0x31311c: 0x0  nop
    ctx->pc = 0x31311cu;
    // NOP
label_313120:
    // 0x313120: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x313120u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_313124:
    // 0x313124: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x313124u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_313128:
    // 0x313128: 0xc0477a8  jal         func_11DEA0
label_31312c:
    if (ctx->pc == 0x31312Cu) {
        ctx->pc = 0x31312Cu;
            // 0x31312c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->pc = 0x313130u;
        goto label_313130;
    }
    ctx->pc = 0x313128u;
    SET_GPR_U32(ctx, 31, 0x313130u);
    ctx->pc = 0x31312Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313128u;
            // 0x31312c: 0x4614151d  msub.s      $f20, $f2, $f20 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[20]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313130u; }
        if (ctx->pc != 0x313130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313130u; }
        if (ctx->pc != 0x313130u) { return; }
    }
    ctx->pc = 0x313130u;
label_313130:
    // 0x313130: 0x3c024588  lui         $v0, 0x4588
    ctx->pc = 0x313130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17800 << 16));
label_313134:
    // 0x313134: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x313134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_313138:
    // 0x313138: 0x34428800  ori         $v0, $v0, 0x8800
    ctx->pc = 0x313138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34816);
label_31313c:
    // 0x31313c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_313140:
    // 0x313140: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x313140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_313144:
    // 0x313144: 0x0  nop
    ctx->pc = 0x313144u;
    // NOP
label_313148:
    // 0x313148: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x313148u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_31314c:
    // 0x31314c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x31314cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_313150:
    // 0x313150: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x313150u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_313154:
    // 0x313154: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x313154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_313158:
    // 0x313158: 0xc04cab0  jal         func_132AC0
label_31315c:
    if (ctx->pc == 0x31315Cu) {
        ctx->pc = 0x31315Cu;
            // 0x31315c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313160u;
        goto label_313160;
    }
    ctx->pc = 0x313158u;
    SET_GPR_U32(ctx, 31, 0x313160u);
    ctx->pc = 0x31315Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313158u;
            // 0x31315c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313160u; }
        if (ctx->pc != 0x313160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313160u; }
        if (ctx->pc != 0x313160u) { return; }
    }
    ctx->pc = 0x313160u;
label_313160:
    // 0x313160: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x313160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_313164:
    // 0x313164: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x313164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_313168:
    // 0x313168: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x313168u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_31316c:
    // 0x31316c: 0x320f809  jalr        $t9
label_313170:
    if (ctx->pc == 0x313170u) {
        ctx->pc = 0x313170u;
            // 0x313170: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x313174u;
        goto label_313174;
    }
    ctx->pc = 0x31316Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x313174u);
        ctx->pc = 0x313170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31316Cu;
            // 0x313170: 0x2405002d  addiu       $a1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x313174u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x313174u; }
            if (ctx->pc != 0x313174u) { return; }
        }
        }
    }
    ctx->pc = 0x313174u;
label_313174:
    // 0x313174: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x313174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_313178:
    // 0x313178: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x313178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_31317c:
    // 0x31317c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x31317cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_313180:
    // 0x313180: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x313180u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_313184:
    // 0x313184: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_313188:
    // 0x313188: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_31318c:
    // 0x31318c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31318cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_313190:
    // 0x313190: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x313190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_313194:
    // 0x313194: 0xc04c72c  jal         func_131CB0
label_313198:
    if (ctx->pc == 0x313198u) {
        ctx->pc = 0x313198u;
            // 0x313198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x31319Cu;
        goto label_31319c;
    }
    ctx->pc = 0x313194u;
    SET_GPR_U32(ctx, 31, 0x31319Cu);
    ctx->pc = 0x313198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313194u;
            // 0x313198: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31319Cu; }
        if (ctx->pc != 0x31319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31319Cu; }
        if (ctx->pc != 0x31319Cu) { return; }
    }
    ctx->pc = 0x31319Cu;
label_31319c:
    // 0x31319c: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x31319cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_3131a0:
    // 0x3131a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3131a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3131a4:
    // 0x3131a4: 0xc0477a8  jal         func_11DEA0
label_3131a8:
    if (ctx->pc == 0x3131A8u) {
        ctx->pc = 0x3131A8u;
            // 0x3131a8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x3131ACu;
        goto label_3131ac;
    }
    ctx->pc = 0x3131A4u;
    SET_GPR_U32(ctx, 31, 0x3131ACu);
    ctx->pc = 0x3131A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3131A4u;
            // 0x3131a8: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DEA0u;
    if (runtime->hasFunction(0x11DEA0u)) {
        auto targetFn = runtime->lookupFunction(0x11DEA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3131ACu; }
        if (ctx->pc != 0x3131ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DEA0_0x11dea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3131ACu; }
        if (ctx->pc != 0x3131ACu) { return; }
    }
    ctx->pc = 0x3131ACu;
label_3131ac:
    // 0x3131ac: 0x3c0245aa  lui         $v0, 0x45AA
    ctx->pc = 0x3131acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17834 << 16));
label_3131b0:
    // 0x3131b0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3131b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3131b4:
    // 0x3131b4: 0x3442a800  ori         $v0, $v0, 0xA800
    ctx->pc = 0x3131b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43008);
label_3131b8:
    // 0x3131b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3131b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3131bc:
    // 0x3131bc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3131bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3131c0:
    // 0x3131c0: 0x0  nop
    ctx->pc = 0x3131c0u;
    // NOP
label_3131c4:
    // 0x3131c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3131c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3131c8:
    // 0x3131c8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3131c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_3131cc:
    // 0x3131cc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3131ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3131d0:
    // 0x3131d0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3131d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3131d4:
    // 0x3131d4: 0xc04cab0  jal         func_132AC0
label_3131d8:
    if (ctx->pc == 0x3131D8u) {
        ctx->pc = 0x3131D8u;
            // 0x3131d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3131DCu;
        goto label_3131dc;
    }
    ctx->pc = 0x3131D4u;
    SET_GPR_U32(ctx, 31, 0x3131DCu);
    ctx->pc = 0x3131D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3131D4u;
            // 0x3131d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132AC0u;
    if (runtime->hasFunction(0x132AC0u)) {
        auto targetFn = runtime->lookupFunction(0x132AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3131DCu; }
        if (ctx->pc != 0x3131DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132AC0_0x132ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3131DCu; }
        if (ctx->pc != 0x3131DCu) { return; }
    }
    ctx->pc = 0x3131DCu;
label_3131dc:
    // 0x3131dc: 0x8e590054  lw          $t9, 0x54($s2)
    ctx->pc = 0x3131dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_3131e0:
    // 0x3131e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3131e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3131e4:
    // 0x3131e4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x3131e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_3131e8:
    // 0x3131e8: 0x320f809  jalr        $t9
label_3131ec:
    if (ctx->pc == 0x3131ECu) {
        ctx->pc = 0x3131ECu;
            // 0x3131ec: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x3131F0u;
        goto label_3131f0;
    }
    ctx->pc = 0x3131E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3131F0u);
        ctx->pc = 0x3131ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3131E8u;
            // 0x3131ec: 0x2405002e  addiu       $a1, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3131F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3131F0u; }
            if (ctx->pc != 0x3131F0u) { return; }
        }
        }
    }
    ctx->pc = 0x3131F0u;
label_3131f0:
    // 0x3131f0: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3131f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3131f4:
    // 0x3131f4: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x3131f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3131f8:
    // 0x3131f8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3131f8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3131fc:
    // 0x3131fc: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x3131fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_313200:
    // 0x313200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x313200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_313204:
    // 0x313204: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x313204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_313208:
    // 0x313208: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x313208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31320c:
    // 0x31320c: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x31320cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_313210:
    // 0x313210: 0xc04c72c  jal         func_131CB0
label_313214:
    if (ctx->pc == 0x313214u) {
        ctx->pc = 0x313214u;
            // 0x313214: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x313218u;
        goto label_313218;
    }
    ctx->pc = 0x313210u;
    SET_GPR_U32(ctx, 31, 0x313218u);
    ctx->pc = 0x313214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x313210u;
            // 0x313214: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313218u; }
        if (ctx->pc != 0x313218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x313218u; }
        if (ctx->pc != 0x313218u) { return; }
    }
    ctx->pc = 0x313218u;
label_313218:
    // 0x313218: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x313218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_31321c:
    // 0x31321c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x31321cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_313220:
    // 0x313220: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x313220u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_313224:
    // 0x313224: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x313224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_313228:
    // 0x313228: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x313228u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31322c:
    // 0x31322c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x31322cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_313230:
    // 0x313230: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x313230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_313234:
    // 0x313234: 0x3e00008  jr          $ra
label_313238:
    if (ctx->pc == 0x313238u) {
        ctx->pc = 0x313238u;
            // 0x313238: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x31323Cu;
        goto label_31323c;
    }
    ctx->pc = 0x313234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x313234u;
            // 0x313238: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31323Cu;
label_31323c:
    // 0x31323c: 0x0  nop
    ctx->pc = 0x31323cu;
    // NOP
}
