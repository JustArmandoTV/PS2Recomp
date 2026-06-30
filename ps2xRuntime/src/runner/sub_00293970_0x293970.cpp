#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00293970
// Address: 0x293970 - 0x294a00
void sub_00293970_0x293970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293970_0x293970");
#endif

    switch (ctx->pc) {
        case 0x293970u: goto label_293970;
        case 0x293974u: goto label_293974;
        case 0x293978u: goto label_293978;
        case 0x29397cu: goto label_29397c;
        case 0x293980u: goto label_293980;
        case 0x293984u: goto label_293984;
        case 0x293988u: goto label_293988;
        case 0x29398cu: goto label_29398c;
        case 0x293990u: goto label_293990;
        case 0x293994u: goto label_293994;
        case 0x293998u: goto label_293998;
        case 0x29399cu: goto label_29399c;
        case 0x2939a0u: goto label_2939a0;
        case 0x2939a4u: goto label_2939a4;
        case 0x2939a8u: goto label_2939a8;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b0u: goto label_2939b0;
        case 0x2939b4u: goto label_2939b4;
        case 0x2939b8u: goto label_2939b8;
        case 0x2939bcu: goto label_2939bc;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939c4u: goto label_2939c4;
        case 0x2939c8u: goto label_2939c8;
        case 0x2939ccu: goto label_2939cc;
        case 0x2939d0u: goto label_2939d0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939d8u: goto label_2939d8;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939e0u: goto label_2939e0;
        case 0x2939e4u: goto label_2939e4;
        case 0x2939e8u: goto label_2939e8;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f0u: goto label_2939f0;
        case 0x2939f4u: goto label_2939f4;
        case 0x2939f8u: goto label_2939f8;
        case 0x2939fcu: goto label_2939fc;
        case 0x293a00u: goto label_293a00;
        case 0x293a04u: goto label_293a04;
        case 0x293a08u: goto label_293a08;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a10u: goto label_293a10;
        case 0x293a14u: goto label_293a14;
        case 0x293a18u: goto label_293a18;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a20u: goto label_293a20;
        case 0x293a24u: goto label_293a24;
        case 0x293a28u: goto label_293a28;
        case 0x293a2cu: goto label_293a2c;
        case 0x293a30u: goto label_293a30;
        case 0x293a34u: goto label_293a34;
        case 0x293a38u: goto label_293a38;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a40u: goto label_293a40;
        case 0x293a44u: goto label_293a44;
        case 0x293a48u: goto label_293a48;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a50u: goto label_293a50;
        case 0x293a54u: goto label_293a54;
        case 0x293a58u: goto label_293a58;
        case 0x293a5cu: goto label_293a5c;
        case 0x293a60u: goto label_293a60;
        case 0x293a64u: goto label_293a64;
        case 0x293a68u: goto label_293a68;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a70u: goto label_293a70;
        case 0x293a74u: goto label_293a74;
        case 0x293a78u: goto label_293a78;
        case 0x293a7cu: goto label_293a7c;
        case 0x293a80u: goto label_293a80;
        case 0x293a84u: goto label_293a84;
        case 0x293a88u: goto label_293a88;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a90u: goto label_293a90;
        case 0x293a94u: goto label_293a94;
        case 0x293a98u: goto label_293a98;
        case 0x293a9cu: goto label_293a9c;
        case 0x293aa0u: goto label_293aa0;
        case 0x293aa4u: goto label_293aa4;
        case 0x293aa8u: goto label_293aa8;
        case 0x293aacu: goto label_293aac;
        case 0x293ab0u: goto label_293ab0;
        case 0x293ab4u: goto label_293ab4;
        case 0x293ab8u: goto label_293ab8;
        case 0x293abcu: goto label_293abc;
        case 0x293ac0u: goto label_293ac0;
        case 0x293ac4u: goto label_293ac4;
        case 0x293ac8u: goto label_293ac8;
        case 0x293accu: goto label_293acc;
        case 0x293ad0u: goto label_293ad0;
        case 0x293ad4u: goto label_293ad4;
        case 0x293ad8u: goto label_293ad8;
        case 0x293adcu: goto label_293adc;
        case 0x293ae0u: goto label_293ae0;
        case 0x293ae4u: goto label_293ae4;
        case 0x293ae8u: goto label_293ae8;
        case 0x293aecu: goto label_293aec;
        case 0x293af0u: goto label_293af0;
        case 0x293af4u: goto label_293af4;
        case 0x293af8u: goto label_293af8;
        case 0x293afcu: goto label_293afc;
        case 0x293b00u: goto label_293b00;
        case 0x293b04u: goto label_293b04;
        case 0x293b08u: goto label_293b08;
        case 0x293b0cu: goto label_293b0c;
        case 0x293b10u: goto label_293b10;
        case 0x293b14u: goto label_293b14;
        case 0x293b18u: goto label_293b18;
        case 0x293b1cu: goto label_293b1c;
        case 0x293b20u: goto label_293b20;
        case 0x293b24u: goto label_293b24;
        case 0x293b28u: goto label_293b28;
        case 0x293b2cu: goto label_293b2c;
        case 0x293b30u: goto label_293b30;
        case 0x293b34u: goto label_293b34;
        case 0x293b38u: goto label_293b38;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b40u: goto label_293b40;
        case 0x293b44u: goto label_293b44;
        case 0x293b48u: goto label_293b48;
        case 0x293b4cu: goto label_293b4c;
        case 0x293b50u: goto label_293b50;
        case 0x293b54u: goto label_293b54;
        case 0x293b58u: goto label_293b58;
        case 0x293b5cu: goto label_293b5c;
        case 0x293b60u: goto label_293b60;
        case 0x293b64u: goto label_293b64;
        case 0x293b68u: goto label_293b68;
        case 0x293b6cu: goto label_293b6c;
        case 0x293b70u: goto label_293b70;
        case 0x293b74u: goto label_293b74;
        case 0x293b78u: goto label_293b78;
        case 0x293b7cu: goto label_293b7c;
        case 0x293b80u: goto label_293b80;
        case 0x293b84u: goto label_293b84;
        case 0x293b88u: goto label_293b88;
        case 0x293b8cu: goto label_293b8c;
        case 0x293b90u: goto label_293b90;
        case 0x293b94u: goto label_293b94;
        case 0x293b98u: goto label_293b98;
        case 0x293b9cu: goto label_293b9c;
        case 0x293ba0u: goto label_293ba0;
        case 0x293ba4u: goto label_293ba4;
        case 0x293ba8u: goto label_293ba8;
        case 0x293bacu: goto label_293bac;
        case 0x293bb0u: goto label_293bb0;
        case 0x293bb4u: goto label_293bb4;
        case 0x293bb8u: goto label_293bb8;
        case 0x293bbcu: goto label_293bbc;
        case 0x293bc0u: goto label_293bc0;
        case 0x293bc4u: goto label_293bc4;
        case 0x293bc8u: goto label_293bc8;
        case 0x293bccu: goto label_293bcc;
        case 0x293bd0u: goto label_293bd0;
        case 0x293bd4u: goto label_293bd4;
        case 0x293bd8u: goto label_293bd8;
        case 0x293bdcu: goto label_293bdc;
        case 0x293be0u: goto label_293be0;
        case 0x293be4u: goto label_293be4;
        case 0x293be8u: goto label_293be8;
        case 0x293becu: goto label_293bec;
        case 0x293bf0u: goto label_293bf0;
        case 0x293bf4u: goto label_293bf4;
        case 0x293bf8u: goto label_293bf8;
        case 0x293bfcu: goto label_293bfc;
        case 0x293c00u: goto label_293c00;
        case 0x293c04u: goto label_293c04;
        case 0x293c08u: goto label_293c08;
        case 0x293c0cu: goto label_293c0c;
        case 0x293c10u: goto label_293c10;
        case 0x293c14u: goto label_293c14;
        case 0x293c18u: goto label_293c18;
        case 0x293c1cu: goto label_293c1c;
        case 0x293c20u: goto label_293c20;
        case 0x293c24u: goto label_293c24;
        case 0x293c28u: goto label_293c28;
        case 0x293c2cu: goto label_293c2c;
        case 0x293c30u: goto label_293c30;
        case 0x293c34u: goto label_293c34;
        case 0x293c38u: goto label_293c38;
        case 0x293c3cu: goto label_293c3c;
        case 0x293c40u: goto label_293c40;
        case 0x293c44u: goto label_293c44;
        case 0x293c48u: goto label_293c48;
        case 0x293c4cu: goto label_293c4c;
        case 0x293c50u: goto label_293c50;
        case 0x293c54u: goto label_293c54;
        case 0x293c58u: goto label_293c58;
        case 0x293c5cu: goto label_293c5c;
        case 0x293c60u: goto label_293c60;
        case 0x293c64u: goto label_293c64;
        case 0x293c68u: goto label_293c68;
        case 0x293c6cu: goto label_293c6c;
        case 0x293c70u: goto label_293c70;
        case 0x293c74u: goto label_293c74;
        case 0x293c78u: goto label_293c78;
        case 0x293c7cu: goto label_293c7c;
        case 0x293c80u: goto label_293c80;
        case 0x293c84u: goto label_293c84;
        case 0x293c88u: goto label_293c88;
        case 0x293c8cu: goto label_293c8c;
        case 0x293c90u: goto label_293c90;
        case 0x293c94u: goto label_293c94;
        case 0x293c98u: goto label_293c98;
        case 0x293c9cu: goto label_293c9c;
        case 0x293ca0u: goto label_293ca0;
        case 0x293ca4u: goto label_293ca4;
        case 0x293ca8u: goto label_293ca8;
        case 0x293cacu: goto label_293cac;
        case 0x293cb0u: goto label_293cb0;
        case 0x293cb4u: goto label_293cb4;
        case 0x293cb8u: goto label_293cb8;
        case 0x293cbcu: goto label_293cbc;
        case 0x293cc0u: goto label_293cc0;
        case 0x293cc4u: goto label_293cc4;
        case 0x293cc8u: goto label_293cc8;
        case 0x293cccu: goto label_293ccc;
        case 0x293cd0u: goto label_293cd0;
        case 0x293cd4u: goto label_293cd4;
        case 0x293cd8u: goto label_293cd8;
        case 0x293cdcu: goto label_293cdc;
        case 0x293ce0u: goto label_293ce0;
        case 0x293ce4u: goto label_293ce4;
        case 0x293ce8u: goto label_293ce8;
        case 0x293cecu: goto label_293cec;
        case 0x293cf0u: goto label_293cf0;
        case 0x293cf4u: goto label_293cf4;
        case 0x293cf8u: goto label_293cf8;
        case 0x293cfcu: goto label_293cfc;
        case 0x293d00u: goto label_293d00;
        case 0x293d04u: goto label_293d04;
        case 0x293d08u: goto label_293d08;
        case 0x293d0cu: goto label_293d0c;
        case 0x293d10u: goto label_293d10;
        case 0x293d14u: goto label_293d14;
        case 0x293d18u: goto label_293d18;
        case 0x293d1cu: goto label_293d1c;
        case 0x293d20u: goto label_293d20;
        case 0x293d24u: goto label_293d24;
        case 0x293d28u: goto label_293d28;
        case 0x293d2cu: goto label_293d2c;
        case 0x293d30u: goto label_293d30;
        case 0x293d34u: goto label_293d34;
        case 0x293d38u: goto label_293d38;
        case 0x293d3cu: goto label_293d3c;
        case 0x293d40u: goto label_293d40;
        case 0x293d44u: goto label_293d44;
        case 0x293d48u: goto label_293d48;
        case 0x293d4cu: goto label_293d4c;
        case 0x293d50u: goto label_293d50;
        case 0x293d54u: goto label_293d54;
        case 0x293d58u: goto label_293d58;
        case 0x293d5cu: goto label_293d5c;
        case 0x293d60u: goto label_293d60;
        case 0x293d64u: goto label_293d64;
        case 0x293d68u: goto label_293d68;
        case 0x293d6cu: goto label_293d6c;
        case 0x293d70u: goto label_293d70;
        case 0x293d74u: goto label_293d74;
        case 0x293d78u: goto label_293d78;
        case 0x293d7cu: goto label_293d7c;
        case 0x293d80u: goto label_293d80;
        case 0x293d84u: goto label_293d84;
        case 0x293d88u: goto label_293d88;
        case 0x293d8cu: goto label_293d8c;
        case 0x293d90u: goto label_293d90;
        case 0x293d94u: goto label_293d94;
        case 0x293d98u: goto label_293d98;
        case 0x293d9cu: goto label_293d9c;
        case 0x293da0u: goto label_293da0;
        case 0x293da4u: goto label_293da4;
        case 0x293da8u: goto label_293da8;
        case 0x293dacu: goto label_293dac;
        case 0x293db0u: goto label_293db0;
        case 0x293db4u: goto label_293db4;
        case 0x293db8u: goto label_293db8;
        case 0x293dbcu: goto label_293dbc;
        case 0x293dc0u: goto label_293dc0;
        case 0x293dc4u: goto label_293dc4;
        case 0x293dc8u: goto label_293dc8;
        case 0x293dccu: goto label_293dcc;
        case 0x293dd0u: goto label_293dd0;
        case 0x293dd4u: goto label_293dd4;
        case 0x293dd8u: goto label_293dd8;
        case 0x293ddcu: goto label_293ddc;
        case 0x293de0u: goto label_293de0;
        case 0x293de4u: goto label_293de4;
        case 0x293de8u: goto label_293de8;
        case 0x293decu: goto label_293dec;
        case 0x293df0u: goto label_293df0;
        case 0x293df4u: goto label_293df4;
        case 0x293df8u: goto label_293df8;
        case 0x293dfcu: goto label_293dfc;
        case 0x293e00u: goto label_293e00;
        case 0x293e04u: goto label_293e04;
        case 0x293e08u: goto label_293e08;
        case 0x293e0cu: goto label_293e0c;
        case 0x293e10u: goto label_293e10;
        case 0x293e14u: goto label_293e14;
        case 0x293e18u: goto label_293e18;
        case 0x293e1cu: goto label_293e1c;
        case 0x293e20u: goto label_293e20;
        case 0x293e24u: goto label_293e24;
        case 0x293e28u: goto label_293e28;
        case 0x293e2cu: goto label_293e2c;
        case 0x293e30u: goto label_293e30;
        case 0x293e34u: goto label_293e34;
        case 0x293e38u: goto label_293e38;
        case 0x293e3cu: goto label_293e3c;
        case 0x293e40u: goto label_293e40;
        case 0x293e44u: goto label_293e44;
        case 0x293e48u: goto label_293e48;
        case 0x293e4cu: goto label_293e4c;
        case 0x293e50u: goto label_293e50;
        case 0x293e54u: goto label_293e54;
        case 0x293e58u: goto label_293e58;
        case 0x293e5cu: goto label_293e5c;
        case 0x293e60u: goto label_293e60;
        case 0x293e64u: goto label_293e64;
        case 0x293e68u: goto label_293e68;
        case 0x293e6cu: goto label_293e6c;
        case 0x293e70u: goto label_293e70;
        case 0x293e74u: goto label_293e74;
        case 0x293e78u: goto label_293e78;
        case 0x293e7cu: goto label_293e7c;
        case 0x293e80u: goto label_293e80;
        case 0x293e84u: goto label_293e84;
        case 0x293e88u: goto label_293e88;
        case 0x293e8cu: goto label_293e8c;
        case 0x293e90u: goto label_293e90;
        case 0x293e94u: goto label_293e94;
        case 0x293e98u: goto label_293e98;
        case 0x293e9cu: goto label_293e9c;
        case 0x293ea0u: goto label_293ea0;
        case 0x293ea4u: goto label_293ea4;
        case 0x293ea8u: goto label_293ea8;
        case 0x293eacu: goto label_293eac;
        case 0x293eb0u: goto label_293eb0;
        case 0x293eb4u: goto label_293eb4;
        case 0x293eb8u: goto label_293eb8;
        case 0x293ebcu: goto label_293ebc;
        case 0x293ec0u: goto label_293ec0;
        case 0x293ec4u: goto label_293ec4;
        case 0x293ec8u: goto label_293ec8;
        case 0x293eccu: goto label_293ecc;
        case 0x293ed0u: goto label_293ed0;
        case 0x293ed4u: goto label_293ed4;
        case 0x293ed8u: goto label_293ed8;
        case 0x293edcu: goto label_293edc;
        case 0x293ee0u: goto label_293ee0;
        case 0x293ee4u: goto label_293ee4;
        case 0x293ee8u: goto label_293ee8;
        case 0x293eecu: goto label_293eec;
        case 0x293ef0u: goto label_293ef0;
        case 0x293ef4u: goto label_293ef4;
        case 0x293ef8u: goto label_293ef8;
        case 0x293efcu: goto label_293efc;
        case 0x293f00u: goto label_293f00;
        case 0x293f04u: goto label_293f04;
        case 0x293f08u: goto label_293f08;
        case 0x293f0cu: goto label_293f0c;
        case 0x293f10u: goto label_293f10;
        case 0x293f14u: goto label_293f14;
        case 0x293f18u: goto label_293f18;
        case 0x293f1cu: goto label_293f1c;
        case 0x293f20u: goto label_293f20;
        case 0x293f24u: goto label_293f24;
        case 0x293f28u: goto label_293f28;
        case 0x293f2cu: goto label_293f2c;
        case 0x293f30u: goto label_293f30;
        case 0x293f34u: goto label_293f34;
        case 0x293f38u: goto label_293f38;
        case 0x293f3cu: goto label_293f3c;
        case 0x293f40u: goto label_293f40;
        case 0x293f44u: goto label_293f44;
        case 0x293f48u: goto label_293f48;
        case 0x293f4cu: goto label_293f4c;
        case 0x293f50u: goto label_293f50;
        case 0x293f54u: goto label_293f54;
        case 0x293f58u: goto label_293f58;
        case 0x293f5cu: goto label_293f5c;
        case 0x293f60u: goto label_293f60;
        case 0x293f64u: goto label_293f64;
        case 0x293f68u: goto label_293f68;
        case 0x293f6cu: goto label_293f6c;
        case 0x293f70u: goto label_293f70;
        case 0x293f74u: goto label_293f74;
        case 0x293f78u: goto label_293f78;
        case 0x293f7cu: goto label_293f7c;
        case 0x293f80u: goto label_293f80;
        case 0x293f84u: goto label_293f84;
        case 0x293f88u: goto label_293f88;
        case 0x293f8cu: goto label_293f8c;
        case 0x293f90u: goto label_293f90;
        case 0x293f94u: goto label_293f94;
        case 0x293f98u: goto label_293f98;
        case 0x293f9cu: goto label_293f9c;
        case 0x293fa0u: goto label_293fa0;
        case 0x293fa4u: goto label_293fa4;
        case 0x293fa8u: goto label_293fa8;
        case 0x293facu: goto label_293fac;
        case 0x293fb0u: goto label_293fb0;
        case 0x293fb4u: goto label_293fb4;
        case 0x293fb8u: goto label_293fb8;
        case 0x293fbcu: goto label_293fbc;
        case 0x293fc0u: goto label_293fc0;
        case 0x293fc4u: goto label_293fc4;
        case 0x293fc8u: goto label_293fc8;
        case 0x293fccu: goto label_293fcc;
        case 0x293fd0u: goto label_293fd0;
        case 0x293fd4u: goto label_293fd4;
        case 0x293fd8u: goto label_293fd8;
        case 0x293fdcu: goto label_293fdc;
        case 0x293fe0u: goto label_293fe0;
        case 0x293fe4u: goto label_293fe4;
        case 0x293fe8u: goto label_293fe8;
        case 0x293fecu: goto label_293fec;
        case 0x293ff0u: goto label_293ff0;
        case 0x293ff4u: goto label_293ff4;
        case 0x293ff8u: goto label_293ff8;
        case 0x293ffcu: goto label_293ffc;
        case 0x294000u: goto label_294000;
        case 0x294004u: goto label_294004;
        case 0x294008u: goto label_294008;
        case 0x29400cu: goto label_29400c;
        case 0x294010u: goto label_294010;
        case 0x294014u: goto label_294014;
        case 0x294018u: goto label_294018;
        case 0x29401cu: goto label_29401c;
        case 0x294020u: goto label_294020;
        case 0x294024u: goto label_294024;
        case 0x294028u: goto label_294028;
        case 0x29402cu: goto label_29402c;
        case 0x294030u: goto label_294030;
        case 0x294034u: goto label_294034;
        case 0x294038u: goto label_294038;
        case 0x29403cu: goto label_29403c;
        case 0x294040u: goto label_294040;
        case 0x294044u: goto label_294044;
        case 0x294048u: goto label_294048;
        case 0x29404cu: goto label_29404c;
        case 0x294050u: goto label_294050;
        case 0x294054u: goto label_294054;
        case 0x294058u: goto label_294058;
        case 0x29405cu: goto label_29405c;
        case 0x294060u: goto label_294060;
        case 0x294064u: goto label_294064;
        case 0x294068u: goto label_294068;
        case 0x29406cu: goto label_29406c;
        case 0x294070u: goto label_294070;
        case 0x294074u: goto label_294074;
        case 0x294078u: goto label_294078;
        case 0x29407cu: goto label_29407c;
        case 0x294080u: goto label_294080;
        case 0x294084u: goto label_294084;
        case 0x294088u: goto label_294088;
        case 0x29408cu: goto label_29408c;
        case 0x294090u: goto label_294090;
        case 0x294094u: goto label_294094;
        case 0x294098u: goto label_294098;
        case 0x29409cu: goto label_29409c;
        case 0x2940a0u: goto label_2940a0;
        case 0x2940a4u: goto label_2940a4;
        case 0x2940a8u: goto label_2940a8;
        case 0x2940acu: goto label_2940ac;
        case 0x2940b0u: goto label_2940b0;
        case 0x2940b4u: goto label_2940b4;
        case 0x2940b8u: goto label_2940b8;
        case 0x2940bcu: goto label_2940bc;
        case 0x2940c0u: goto label_2940c0;
        case 0x2940c4u: goto label_2940c4;
        case 0x2940c8u: goto label_2940c8;
        case 0x2940ccu: goto label_2940cc;
        case 0x2940d0u: goto label_2940d0;
        case 0x2940d4u: goto label_2940d4;
        case 0x2940d8u: goto label_2940d8;
        case 0x2940dcu: goto label_2940dc;
        case 0x2940e0u: goto label_2940e0;
        case 0x2940e4u: goto label_2940e4;
        case 0x2940e8u: goto label_2940e8;
        case 0x2940ecu: goto label_2940ec;
        case 0x2940f0u: goto label_2940f0;
        case 0x2940f4u: goto label_2940f4;
        case 0x2940f8u: goto label_2940f8;
        case 0x2940fcu: goto label_2940fc;
        case 0x294100u: goto label_294100;
        case 0x294104u: goto label_294104;
        case 0x294108u: goto label_294108;
        case 0x29410cu: goto label_29410c;
        case 0x294110u: goto label_294110;
        case 0x294114u: goto label_294114;
        case 0x294118u: goto label_294118;
        case 0x29411cu: goto label_29411c;
        case 0x294120u: goto label_294120;
        case 0x294124u: goto label_294124;
        case 0x294128u: goto label_294128;
        case 0x29412cu: goto label_29412c;
        case 0x294130u: goto label_294130;
        case 0x294134u: goto label_294134;
        case 0x294138u: goto label_294138;
        case 0x29413cu: goto label_29413c;
        case 0x294140u: goto label_294140;
        case 0x294144u: goto label_294144;
        case 0x294148u: goto label_294148;
        case 0x29414cu: goto label_29414c;
        case 0x294150u: goto label_294150;
        case 0x294154u: goto label_294154;
        case 0x294158u: goto label_294158;
        case 0x29415cu: goto label_29415c;
        case 0x294160u: goto label_294160;
        case 0x294164u: goto label_294164;
        case 0x294168u: goto label_294168;
        case 0x29416cu: goto label_29416c;
        case 0x294170u: goto label_294170;
        case 0x294174u: goto label_294174;
        case 0x294178u: goto label_294178;
        case 0x29417cu: goto label_29417c;
        case 0x294180u: goto label_294180;
        case 0x294184u: goto label_294184;
        case 0x294188u: goto label_294188;
        case 0x29418cu: goto label_29418c;
        case 0x294190u: goto label_294190;
        case 0x294194u: goto label_294194;
        case 0x294198u: goto label_294198;
        case 0x29419cu: goto label_29419c;
        case 0x2941a0u: goto label_2941a0;
        case 0x2941a4u: goto label_2941a4;
        case 0x2941a8u: goto label_2941a8;
        case 0x2941acu: goto label_2941ac;
        case 0x2941b0u: goto label_2941b0;
        case 0x2941b4u: goto label_2941b4;
        case 0x2941b8u: goto label_2941b8;
        case 0x2941bcu: goto label_2941bc;
        case 0x2941c0u: goto label_2941c0;
        case 0x2941c4u: goto label_2941c4;
        case 0x2941c8u: goto label_2941c8;
        case 0x2941ccu: goto label_2941cc;
        case 0x2941d0u: goto label_2941d0;
        case 0x2941d4u: goto label_2941d4;
        case 0x2941d8u: goto label_2941d8;
        case 0x2941dcu: goto label_2941dc;
        case 0x2941e0u: goto label_2941e0;
        case 0x2941e4u: goto label_2941e4;
        case 0x2941e8u: goto label_2941e8;
        case 0x2941ecu: goto label_2941ec;
        case 0x2941f0u: goto label_2941f0;
        case 0x2941f4u: goto label_2941f4;
        case 0x2941f8u: goto label_2941f8;
        case 0x2941fcu: goto label_2941fc;
        case 0x294200u: goto label_294200;
        case 0x294204u: goto label_294204;
        case 0x294208u: goto label_294208;
        case 0x29420cu: goto label_29420c;
        case 0x294210u: goto label_294210;
        case 0x294214u: goto label_294214;
        case 0x294218u: goto label_294218;
        case 0x29421cu: goto label_29421c;
        case 0x294220u: goto label_294220;
        case 0x294224u: goto label_294224;
        case 0x294228u: goto label_294228;
        case 0x29422cu: goto label_29422c;
        case 0x294230u: goto label_294230;
        case 0x294234u: goto label_294234;
        case 0x294238u: goto label_294238;
        case 0x29423cu: goto label_29423c;
        case 0x294240u: goto label_294240;
        case 0x294244u: goto label_294244;
        case 0x294248u: goto label_294248;
        case 0x29424cu: goto label_29424c;
        case 0x294250u: goto label_294250;
        case 0x294254u: goto label_294254;
        case 0x294258u: goto label_294258;
        case 0x29425cu: goto label_29425c;
        case 0x294260u: goto label_294260;
        case 0x294264u: goto label_294264;
        case 0x294268u: goto label_294268;
        case 0x29426cu: goto label_29426c;
        case 0x294270u: goto label_294270;
        case 0x294274u: goto label_294274;
        case 0x294278u: goto label_294278;
        case 0x29427cu: goto label_29427c;
        case 0x294280u: goto label_294280;
        case 0x294284u: goto label_294284;
        case 0x294288u: goto label_294288;
        case 0x29428cu: goto label_29428c;
        case 0x294290u: goto label_294290;
        case 0x294294u: goto label_294294;
        case 0x294298u: goto label_294298;
        case 0x29429cu: goto label_29429c;
        case 0x2942a0u: goto label_2942a0;
        case 0x2942a4u: goto label_2942a4;
        case 0x2942a8u: goto label_2942a8;
        case 0x2942acu: goto label_2942ac;
        case 0x2942b0u: goto label_2942b0;
        case 0x2942b4u: goto label_2942b4;
        case 0x2942b8u: goto label_2942b8;
        case 0x2942bcu: goto label_2942bc;
        case 0x2942c0u: goto label_2942c0;
        case 0x2942c4u: goto label_2942c4;
        case 0x2942c8u: goto label_2942c8;
        case 0x2942ccu: goto label_2942cc;
        case 0x2942d0u: goto label_2942d0;
        case 0x2942d4u: goto label_2942d4;
        case 0x2942d8u: goto label_2942d8;
        case 0x2942dcu: goto label_2942dc;
        case 0x2942e0u: goto label_2942e0;
        case 0x2942e4u: goto label_2942e4;
        case 0x2942e8u: goto label_2942e8;
        case 0x2942ecu: goto label_2942ec;
        case 0x2942f0u: goto label_2942f0;
        case 0x2942f4u: goto label_2942f4;
        case 0x2942f8u: goto label_2942f8;
        case 0x2942fcu: goto label_2942fc;
        case 0x294300u: goto label_294300;
        case 0x294304u: goto label_294304;
        case 0x294308u: goto label_294308;
        case 0x29430cu: goto label_29430c;
        case 0x294310u: goto label_294310;
        case 0x294314u: goto label_294314;
        case 0x294318u: goto label_294318;
        case 0x29431cu: goto label_29431c;
        case 0x294320u: goto label_294320;
        case 0x294324u: goto label_294324;
        case 0x294328u: goto label_294328;
        case 0x29432cu: goto label_29432c;
        case 0x294330u: goto label_294330;
        case 0x294334u: goto label_294334;
        case 0x294338u: goto label_294338;
        case 0x29433cu: goto label_29433c;
        case 0x294340u: goto label_294340;
        case 0x294344u: goto label_294344;
        case 0x294348u: goto label_294348;
        case 0x29434cu: goto label_29434c;
        case 0x294350u: goto label_294350;
        case 0x294354u: goto label_294354;
        case 0x294358u: goto label_294358;
        case 0x29435cu: goto label_29435c;
        case 0x294360u: goto label_294360;
        case 0x294364u: goto label_294364;
        case 0x294368u: goto label_294368;
        case 0x29436cu: goto label_29436c;
        case 0x294370u: goto label_294370;
        case 0x294374u: goto label_294374;
        case 0x294378u: goto label_294378;
        case 0x29437cu: goto label_29437c;
        case 0x294380u: goto label_294380;
        case 0x294384u: goto label_294384;
        case 0x294388u: goto label_294388;
        case 0x29438cu: goto label_29438c;
        case 0x294390u: goto label_294390;
        case 0x294394u: goto label_294394;
        case 0x294398u: goto label_294398;
        case 0x29439cu: goto label_29439c;
        case 0x2943a0u: goto label_2943a0;
        case 0x2943a4u: goto label_2943a4;
        case 0x2943a8u: goto label_2943a8;
        case 0x2943acu: goto label_2943ac;
        case 0x2943b0u: goto label_2943b0;
        case 0x2943b4u: goto label_2943b4;
        case 0x2943b8u: goto label_2943b8;
        case 0x2943bcu: goto label_2943bc;
        case 0x2943c0u: goto label_2943c0;
        case 0x2943c4u: goto label_2943c4;
        case 0x2943c8u: goto label_2943c8;
        case 0x2943ccu: goto label_2943cc;
        case 0x2943d0u: goto label_2943d0;
        case 0x2943d4u: goto label_2943d4;
        case 0x2943d8u: goto label_2943d8;
        case 0x2943dcu: goto label_2943dc;
        case 0x2943e0u: goto label_2943e0;
        case 0x2943e4u: goto label_2943e4;
        case 0x2943e8u: goto label_2943e8;
        case 0x2943ecu: goto label_2943ec;
        case 0x2943f0u: goto label_2943f0;
        case 0x2943f4u: goto label_2943f4;
        case 0x2943f8u: goto label_2943f8;
        case 0x2943fcu: goto label_2943fc;
        case 0x294400u: goto label_294400;
        case 0x294404u: goto label_294404;
        case 0x294408u: goto label_294408;
        case 0x29440cu: goto label_29440c;
        case 0x294410u: goto label_294410;
        case 0x294414u: goto label_294414;
        case 0x294418u: goto label_294418;
        case 0x29441cu: goto label_29441c;
        case 0x294420u: goto label_294420;
        case 0x294424u: goto label_294424;
        case 0x294428u: goto label_294428;
        case 0x29442cu: goto label_29442c;
        case 0x294430u: goto label_294430;
        case 0x294434u: goto label_294434;
        case 0x294438u: goto label_294438;
        case 0x29443cu: goto label_29443c;
        case 0x294440u: goto label_294440;
        case 0x294444u: goto label_294444;
        case 0x294448u: goto label_294448;
        case 0x29444cu: goto label_29444c;
        case 0x294450u: goto label_294450;
        case 0x294454u: goto label_294454;
        case 0x294458u: goto label_294458;
        case 0x29445cu: goto label_29445c;
        case 0x294460u: goto label_294460;
        case 0x294464u: goto label_294464;
        case 0x294468u: goto label_294468;
        case 0x29446cu: goto label_29446c;
        case 0x294470u: goto label_294470;
        case 0x294474u: goto label_294474;
        case 0x294478u: goto label_294478;
        case 0x29447cu: goto label_29447c;
        case 0x294480u: goto label_294480;
        case 0x294484u: goto label_294484;
        case 0x294488u: goto label_294488;
        case 0x29448cu: goto label_29448c;
        case 0x294490u: goto label_294490;
        case 0x294494u: goto label_294494;
        case 0x294498u: goto label_294498;
        case 0x29449cu: goto label_29449c;
        case 0x2944a0u: goto label_2944a0;
        case 0x2944a4u: goto label_2944a4;
        case 0x2944a8u: goto label_2944a8;
        case 0x2944acu: goto label_2944ac;
        case 0x2944b0u: goto label_2944b0;
        case 0x2944b4u: goto label_2944b4;
        case 0x2944b8u: goto label_2944b8;
        case 0x2944bcu: goto label_2944bc;
        case 0x2944c0u: goto label_2944c0;
        case 0x2944c4u: goto label_2944c4;
        case 0x2944c8u: goto label_2944c8;
        case 0x2944ccu: goto label_2944cc;
        case 0x2944d0u: goto label_2944d0;
        case 0x2944d4u: goto label_2944d4;
        case 0x2944d8u: goto label_2944d8;
        case 0x2944dcu: goto label_2944dc;
        case 0x2944e0u: goto label_2944e0;
        case 0x2944e4u: goto label_2944e4;
        case 0x2944e8u: goto label_2944e8;
        case 0x2944ecu: goto label_2944ec;
        case 0x2944f0u: goto label_2944f0;
        case 0x2944f4u: goto label_2944f4;
        case 0x2944f8u: goto label_2944f8;
        case 0x2944fcu: goto label_2944fc;
        case 0x294500u: goto label_294500;
        case 0x294504u: goto label_294504;
        case 0x294508u: goto label_294508;
        case 0x29450cu: goto label_29450c;
        case 0x294510u: goto label_294510;
        case 0x294514u: goto label_294514;
        case 0x294518u: goto label_294518;
        case 0x29451cu: goto label_29451c;
        case 0x294520u: goto label_294520;
        case 0x294524u: goto label_294524;
        case 0x294528u: goto label_294528;
        case 0x29452cu: goto label_29452c;
        case 0x294530u: goto label_294530;
        case 0x294534u: goto label_294534;
        case 0x294538u: goto label_294538;
        case 0x29453cu: goto label_29453c;
        case 0x294540u: goto label_294540;
        case 0x294544u: goto label_294544;
        case 0x294548u: goto label_294548;
        case 0x29454cu: goto label_29454c;
        case 0x294550u: goto label_294550;
        case 0x294554u: goto label_294554;
        case 0x294558u: goto label_294558;
        case 0x29455cu: goto label_29455c;
        case 0x294560u: goto label_294560;
        case 0x294564u: goto label_294564;
        case 0x294568u: goto label_294568;
        case 0x29456cu: goto label_29456c;
        case 0x294570u: goto label_294570;
        case 0x294574u: goto label_294574;
        case 0x294578u: goto label_294578;
        case 0x29457cu: goto label_29457c;
        case 0x294580u: goto label_294580;
        case 0x294584u: goto label_294584;
        case 0x294588u: goto label_294588;
        case 0x29458cu: goto label_29458c;
        case 0x294590u: goto label_294590;
        case 0x294594u: goto label_294594;
        case 0x294598u: goto label_294598;
        case 0x29459cu: goto label_29459c;
        case 0x2945a0u: goto label_2945a0;
        case 0x2945a4u: goto label_2945a4;
        case 0x2945a8u: goto label_2945a8;
        case 0x2945acu: goto label_2945ac;
        case 0x2945b0u: goto label_2945b0;
        case 0x2945b4u: goto label_2945b4;
        case 0x2945b8u: goto label_2945b8;
        case 0x2945bcu: goto label_2945bc;
        case 0x2945c0u: goto label_2945c0;
        case 0x2945c4u: goto label_2945c4;
        case 0x2945c8u: goto label_2945c8;
        case 0x2945ccu: goto label_2945cc;
        case 0x2945d0u: goto label_2945d0;
        case 0x2945d4u: goto label_2945d4;
        case 0x2945d8u: goto label_2945d8;
        case 0x2945dcu: goto label_2945dc;
        case 0x2945e0u: goto label_2945e0;
        case 0x2945e4u: goto label_2945e4;
        case 0x2945e8u: goto label_2945e8;
        case 0x2945ecu: goto label_2945ec;
        case 0x2945f0u: goto label_2945f0;
        case 0x2945f4u: goto label_2945f4;
        case 0x2945f8u: goto label_2945f8;
        case 0x2945fcu: goto label_2945fc;
        case 0x294600u: goto label_294600;
        case 0x294604u: goto label_294604;
        case 0x294608u: goto label_294608;
        case 0x29460cu: goto label_29460c;
        case 0x294610u: goto label_294610;
        case 0x294614u: goto label_294614;
        case 0x294618u: goto label_294618;
        case 0x29461cu: goto label_29461c;
        case 0x294620u: goto label_294620;
        case 0x294624u: goto label_294624;
        case 0x294628u: goto label_294628;
        case 0x29462cu: goto label_29462c;
        case 0x294630u: goto label_294630;
        case 0x294634u: goto label_294634;
        case 0x294638u: goto label_294638;
        case 0x29463cu: goto label_29463c;
        case 0x294640u: goto label_294640;
        case 0x294644u: goto label_294644;
        case 0x294648u: goto label_294648;
        case 0x29464cu: goto label_29464c;
        case 0x294650u: goto label_294650;
        case 0x294654u: goto label_294654;
        case 0x294658u: goto label_294658;
        case 0x29465cu: goto label_29465c;
        case 0x294660u: goto label_294660;
        case 0x294664u: goto label_294664;
        case 0x294668u: goto label_294668;
        case 0x29466cu: goto label_29466c;
        case 0x294670u: goto label_294670;
        case 0x294674u: goto label_294674;
        case 0x294678u: goto label_294678;
        case 0x29467cu: goto label_29467c;
        case 0x294680u: goto label_294680;
        case 0x294684u: goto label_294684;
        case 0x294688u: goto label_294688;
        case 0x29468cu: goto label_29468c;
        case 0x294690u: goto label_294690;
        case 0x294694u: goto label_294694;
        case 0x294698u: goto label_294698;
        case 0x29469cu: goto label_29469c;
        case 0x2946a0u: goto label_2946a0;
        case 0x2946a4u: goto label_2946a4;
        case 0x2946a8u: goto label_2946a8;
        case 0x2946acu: goto label_2946ac;
        case 0x2946b0u: goto label_2946b0;
        case 0x2946b4u: goto label_2946b4;
        case 0x2946b8u: goto label_2946b8;
        case 0x2946bcu: goto label_2946bc;
        case 0x2946c0u: goto label_2946c0;
        case 0x2946c4u: goto label_2946c4;
        case 0x2946c8u: goto label_2946c8;
        case 0x2946ccu: goto label_2946cc;
        case 0x2946d0u: goto label_2946d0;
        case 0x2946d4u: goto label_2946d4;
        case 0x2946d8u: goto label_2946d8;
        case 0x2946dcu: goto label_2946dc;
        case 0x2946e0u: goto label_2946e0;
        case 0x2946e4u: goto label_2946e4;
        case 0x2946e8u: goto label_2946e8;
        case 0x2946ecu: goto label_2946ec;
        case 0x2946f0u: goto label_2946f0;
        case 0x2946f4u: goto label_2946f4;
        case 0x2946f8u: goto label_2946f8;
        case 0x2946fcu: goto label_2946fc;
        case 0x294700u: goto label_294700;
        case 0x294704u: goto label_294704;
        case 0x294708u: goto label_294708;
        case 0x29470cu: goto label_29470c;
        case 0x294710u: goto label_294710;
        case 0x294714u: goto label_294714;
        case 0x294718u: goto label_294718;
        case 0x29471cu: goto label_29471c;
        case 0x294720u: goto label_294720;
        case 0x294724u: goto label_294724;
        case 0x294728u: goto label_294728;
        case 0x29472cu: goto label_29472c;
        case 0x294730u: goto label_294730;
        case 0x294734u: goto label_294734;
        case 0x294738u: goto label_294738;
        case 0x29473cu: goto label_29473c;
        case 0x294740u: goto label_294740;
        case 0x294744u: goto label_294744;
        case 0x294748u: goto label_294748;
        case 0x29474cu: goto label_29474c;
        case 0x294750u: goto label_294750;
        case 0x294754u: goto label_294754;
        case 0x294758u: goto label_294758;
        case 0x29475cu: goto label_29475c;
        case 0x294760u: goto label_294760;
        case 0x294764u: goto label_294764;
        case 0x294768u: goto label_294768;
        case 0x29476cu: goto label_29476c;
        case 0x294770u: goto label_294770;
        case 0x294774u: goto label_294774;
        case 0x294778u: goto label_294778;
        case 0x29477cu: goto label_29477c;
        case 0x294780u: goto label_294780;
        case 0x294784u: goto label_294784;
        case 0x294788u: goto label_294788;
        case 0x29478cu: goto label_29478c;
        case 0x294790u: goto label_294790;
        case 0x294794u: goto label_294794;
        case 0x294798u: goto label_294798;
        case 0x29479cu: goto label_29479c;
        case 0x2947a0u: goto label_2947a0;
        case 0x2947a4u: goto label_2947a4;
        case 0x2947a8u: goto label_2947a8;
        case 0x2947acu: goto label_2947ac;
        case 0x2947b0u: goto label_2947b0;
        case 0x2947b4u: goto label_2947b4;
        case 0x2947b8u: goto label_2947b8;
        case 0x2947bcu: goto label_2947bc;
        case 0x2947c0u: goto label_2947c0;
        case 0x2947c4u: goto label_2947c4;
        case 0x2947c8u: goto label_2947c8;
        case 0x2947ccu: goto label_2947cc;
        case 0x2947d0u: goto label_2947d0;
        case 0x2947d4u: goto label_2947d4;
        case 0x2947d8u: goto label_2947d8;
        case 0x2947dcu: goto label_2947dc;
        case 0x2947e0u: goto label_2947e0;
        case 0x2947e4u: goto label_2947e4;
        case 0x2947e8u: goto label_2947e8;
        case 0x2947ecu: goto label_2947ec;
        case 0x2947f0u: goto label_2947f0;
        case 0x2947f4u: goto label_2947f4;
        case 0x2947f8u: goto label_2947f8;
        case 0x2947fcu: goto label_2947fc;
        case 0x294800u: goto label_294800;
        case 0x294804u: goto label_294804;
        case 0x294808u: goto label_294808;
        case 0x29480cu: goto label_29480c;
        case 0x294810u: goto label_294810;
        case 0x294814u: goto label_294814;
        case 0x294818u: goto label_294818;
        case 0x29481cu: goto label_29481c;
        case 0x294820u: goto label_294820;
        case 0x294824u: goto label_294824;
        case 0x294828u: goto label_294828;
        case 0x29482cu: goto label_29482c;
        case 0x294830u: goto label_294830;
        case 0x294834u: goto label_294834;
        case 0x294838u: goto label_294838;
        case 0x29483cu: goto label_29483c;
        case 0x294840u: goto label_294840;
        case 0x294844u: goto label_294844;
        case 0x294848u: goto label_294848;
        case 0x29484cu: goto label_29484c;
        case 0x294850u: goto label_294850;
        case 0x294854u: goto label_294854;
        case 0x294858u: goto label_294858;
        case 0x29485cu: goto label_29485c;
        case 0x294860u: goto label_294860;
        case 0x294864u: goto label_294864;
        case 0x294868u: goto label_294868;
        case 0x29486cu: goto label_29486c;
        case 0x294870u: goto label_294870;
        case 0x294874u: goto label_294874;
        case 0x294878u: goto label_294878;
        case 0x29487cu: goto label_29487c;
        case 0x294880u: goto label_294880;
        case 0x294884u: goto label_294884;
        case 0x294888u: goto label_294888;
        case 0x29488cu: goto label_29488c;
        case 0x294890u: goto label_294890;
        case 0x294894u: goto label_294894;
        case 0x294898u: goto label_294898;
        case 0x29489cu: goto label_29489c;
        case 0x2948a0u: goto label_2948a0;
        case 0x2948a4u: goto label_2948a4;
        case 0x2948a8u: goto label_2948a8;
        case 0x2948acu: goto label_2948ac;
        case 0x2948b0u: goto label_2948b0;
        case 0x2948b4u: goto label_2948b4;
        case 0x2948b8u: goto label_2948b8;
        case 0x2948bcu: goto label_2948bc;
        case 0x2948c0u: goto label_2948c0;
        case 0x2948c4u: goto label_2948c4;
        case 0x2948c8u: goto label_2948c8;
        case 0x2948ccu: goto label_2948cc;
        case 0x2948d0u: goto label_2948d0;
        case 0x2948d4u: goto label_2948d4;
        case 0x2948d8u: goto label_2948d8;
        case 0x2948dcu: goto label_2948dc;
        case 0x2948e0u: goto label_2948e0;
        case 0x2948e4u: goto label_2948e4;
        case 0x2948e8u: goto label_2948e8;
        case 0x2948ecu: goto label_2948ec;
        case 0x2948f0u: goto label_2948f0;
        case 0x2948f4u: goto label_2948f4;
        case 0x2948f8u: goto label_2948f8;
        case 0x2948fcu: goto label_2948fc;
        case 0x294900u: goto label_294900;
        case 0x294904u: goto label_294904;
        case 0x294908u: goto label_294908;
        case 0x29490cu: goto label_29490c;
        case 0x294910u: goto label_294910;
        case 0x294914u: goto label_294914;
        case 0x294918u: goto label_294918;
        case 0x29491cu: goto label_29491c;
        case 0x294920u: goto label_294920;
        case 0x294924u: goto label_294924;
        case 0x294928u: goto label_294928;
        case 0x29492cu: goto label_29492c;
        case 0x294930u: goto label_294930;
        case 0x294934u: goto label_294934;
        case 0x294938u: goto label_294938;
        case 0x29493cu: goto label_29493c;
        case 0x294940u: goto label_294940;
        case 0x294944u: goto label_294944;
        case 0x294948u: goto label_294948;
        case 0x29494cu: goto label_29494c;
        case 0x294950u: goto label_294950;
        case 0x294954u: goto label_294954;
        case 0x294958u: goto label_294958;
        case 0x29495cu: goto label_29495c;
        case 0x294960u: goto label_294960;
        case 0x294964u: goto label_294964;
        case 0x294968u: goto label_294968;
        case 0x29496cu: goto label_29496c;
        case 0x294970u: goto label_294970;
        case 0x294974u: goto label_294974;
        case 0x294978u: goto label_294978;
        case 0x29497cu: goto label_29497c;
        case 0x294980u: goto label_294980;
        case 0x294984u: goto label_294984;
        case 0x294988u: goto label_294988;
        case 0x29498cu: goto label_29498c;
        case 0x294990u: goto label_294990;
        case 0x294994u: goto label_294994;
        case 0x294998u: goto label_294998;
        case 0x29499cu: goto label_29499c;
        case 0x2949a0u: goto label_2949a0;
        case 0x2949a4u: goto label_2949a4;
        case 0x2949a8u: goto label_2949a8;
        case 0x2949acu: goto label_2949ac;
        case 0x2949b0u: goto label_2949b0;
        case 0x2949b4u: goto label_2949b4;
        case 0x2949b8u: goto label_2949b8;
        case 0x2949bcu: goto label_2949bc;
        case 0x2949c0u: goto label_2949c0;
        case 0x2949c4u: goto label_2949c4;
        case 0x2949c8u: goto label_2949c8;
        case 0x2949ccu: goto label_2949cc;
        case 0x2949d0u: goto label_2949d0;
        case 0x2949d4u: goto label_2949d4;
        case 0x2949d8u: goto label_2949d8;
        case 0x2949dcu: goto label_2949dc;
        case 0x2949e0u: goto label_2949e0;
        case 0x2949e4u: goto label_2949e4;
        case 0x2949e8u: goto label_2949e8;
        case 0x2949ecu: goto label_2949ec;
        case 0x2949f0u: goto label_2949f0;
        case 0x2949f4u: goto label_2949f4;
        case 0x2949f8u: goto label_2949f8;
        case 0x2949fcu: goto label_2949fc;
        default: break;
    }

    ctx->pc = 0x293970u;

label_293970:
    // 0x293970: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x293970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_293974:
    // 0x293974: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x293974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293978:
    // 0x293978: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x293978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_29397c:
    // 0x29397c: 0x44832800  mtc1        $v1, $f5
    ctx->pc = 0x29397cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_293980:
    // 0x293980: 0x10000077  b           . + 4 + (0x77 << 2)
label_293984:
    if (ctx->pc == 0x293984u) {
        ctx->pc = 0x293984u;
            // 0x293984: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293988u;
        goto label_293988;
    }
    ctx->pc = 0x293980u;
    {
        const bool branch_taken_0x293980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293980u;
            // 0x293984: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293980) {
            ctx->pc = 0x293B60u;
            goto label_293b60;
        }
    }
    ctx->pc = 0x293988u;
label_293988:
    // 0x293988: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x293988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_29398c:
    // 0x29398c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x29398cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_293990:
    // 0x293990: 0xc4880060  lwc1        $f8, 0x60($a0)
    ctx->pc = 0x293990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_293994:
    // 0x293994: 0xc58c0004  lwc1        $f12, 0x4($t4)
    ctx->pc = 0x293994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293998:
    // 0x293998: 0xc58a0000  lwc1        $f10, 0x0($t4)
    ctx->pc = 0x293998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_29399c:
    // 0x29399c: 0xc5840008  lwc1        $f4, 0x8($t4)
    ctx->pc = 0x29399cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 12), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2939a0:
    // 0x2939a0: 0x696821  addu        $t5, $v1, $t1
    ctx->pc = 0x2939a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_2939a4:
    // 0x2939a4: 0xc5ab0014  lwc1        $f11, 0x14($t5)
    ctx->pc = 0x2939a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_2939a8:
    // 0x2939a8: 0x81630018  lb          $v1, 0x18($t3)
    ctx->pc = 0x2939a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 24)));
label_2939ac:
    // 0x2939ac: 0xc5a90010  lwc1        $f9, 0x10($t5)
    ctx->pc = 0x2939acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2939b0:
    // 0x2939b0: 0xc5a30018  lwc1        $f3, 0x18($t5)
    ctx->pc = 0x2939b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2939b4:
    // 0x2939b4: 0xc50d0000  lwc1        $f13, 0x0($t0)
    ctx->pc = 0x2939b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2939b8:
    // 0x2939b8: 0xc5af001c  lwc1        $f15, 0x1C($t5)
    ctx->pc = 0x2939b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2939bc:
    // 0x2939bc: 0x46084202  mul.s       $f8, $f8, $f8
    ctx->pc = 0x2939bcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_2939c0:
    // 0x2939c0: 0x460b62c2  mul.s       $f11, $f12, $f11
    ctx->pc = 0x2939c0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_2939c4:
    // 0x2939c4: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x2939c4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
label_2939c8:
    // 0x2939c8: 0x460b4818  adda.s      $f9, $f11
    ctx->pc = 0x2939c8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
label_2939cc:
    // 0x2939cc: 0x4603211c  madd.s      $f4, $f4, $f3
    ctx->pc = 0x2939ccu;
    ctx->f[4] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
label_2939d0:
    // 0x2939d0: 0x460f68c1  sub.s       $f3, $f13, $f15
    ctx->pc = 0x2939d0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[13], ctx->f[15]);
label_2939d4:
    // 0x2939d4: 0x46047101  sub.s       $f4, $f14, $f4
    ctx->pc = 0x2939d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[14], ctx->f[4]);
label_2939d8:
    // 0x2939d8: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x2939d8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
label_2939dc:
    // 0x2939dc: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2939dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2939e0:
    // 0x2939e0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2939e0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2939e4:
    // 0x2939e4: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_2939e8:
    if (ctx->pc == 0x2939E8u) {
        ctx->pc = 0x2939E8u;
            // 0x2939e8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x2939ECu;
        goto label_2939ec;
    }
    ctx->pc = 0x2939E4u;
    {
        const bool branch_taken_0x2939e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2939E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2939E4u;
            // 0x2939e8: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939e4) {
            ctx->pc = 0x2939F8u;
            goto label_2939f8;
        }
    }
    ctx->pc = 0x2939ECu;
label_2939ec:
    // 0x2939ec: 0x81630010  lb          $v1, 0x10($t3)
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
label_2939f0:
    // 0x2939f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2939f4:
    if (ctx->pc == 0x2939F4u) {
        ctx->pc = 0x2939F4u;
            // 0x2939f4: 0x1631821  addu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->pc = 0x2939F8u;
        goto label_2939f8;
    }
    ctx->pc = 0x2939F0u;
    {
        const bool branch_taken_0x2939f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2939F0u;
            // 0x2939f4: 0x1631821  addu        $v1, $t3, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939f0) {
            ctx->pc = 0x2939FCu;
            goto label_2939fc;
        }
    }
    ctx->pc = 0x2939F8u;
label_2939f8:
    // 0x2939f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2939fc:
    // 0x2939fc: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_293a00:
    if (ctx->pc == 0x293A00u) {
        ctx->pc = 0x293A04u;
        goto label_293a04;
    }
    ctx->pc = 0x2939FCu;
    {
        const bool branch_taken_0x2939fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2939fc) {
            ctx->pc = 0x293A68u;
            goto label_293a68;
        }
    }
    ctx->pc = 0x293A04u;
label_293a04:
    // 0x293a04: 0xc4aa0000  lwc1        $f10, 0x0($a1)
    ctx->pc = 0x293a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293a08:
    // 0x293a08: 0xc4690100  lwc1        $f9, 0x100($v1)
    ctx->pc = 0x293a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293a0c:
    // 0x293a0c: 0xc4a80004  lwc1        $f8, 0x4($a1)
    ctx->pc = 0x293a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_293a10:
    // 0x293a10: 0xc4620104  lwc1        $f2, 0x104($v1)
    ctx->pc = 0x293a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293a14:
    // 0x293a14: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x293a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293a18:
    // 0x293a18: 0xc4600108  lwc1        $f0, 0x108($v1)
    ctx->pc = 0x293a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293a1c:
    // 0x293a1c: 0xc46c0194  lwc1        $f12, 0x194($v1)
    ctx->pc = 0x293a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293a20:
    // 0x293a20: 0x460953c1  sub.s       $f15, $f10, $f9
    ctx->pc = 0x293a20u;
    ctx->f[15] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_293a24:
    // 0x293a24: 0x46024081  sub.s       $f2, $f8, $f2
    ctx->pc = 0x293a24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[8], ctx->f[2]);
label_293a28:
    // 0x293a28: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x293a28u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_293a2c:
    // 0x293a2c: 0xc46d0198  lwc1        $f13, 0x198($v1)
    ctx->pc = 0x293a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_293a30:
    // 0x293a30: 0x4601601a  mula.s      $f12, $f1
    ctx->pc = 0x293a30u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
label_293a34:
    // 0x293a34: 0xc46b0190  lwc1        $f11, 0x190($v1)
    ctx->pc = 0x293a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293a38:
    // 0x293a38: 0xc46a0180  lwc1        $f10, 0x180($v1)
    ctx->pc = 0x293a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293a3c:
    // 0x293a3c: 0xc4690184  lwc1        $f9, 0x184($v1)
    ctx->pc = 0x293a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293a40:
    // 0x293a40: 0xc4680188  lwc1        $f8, 0x188($v1)
    ctx->pc = 0x293a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_293a44:
    // 0x293a44: 0x4602681d  msub.s      $f0, $f13, $f2
    ctx->pc = 0x293a44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[2]));
label_293a48:
    // 0x293a48: 0x460f681a  mula.s      $f13, $f15
    ctx->pc = 0x293a48u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[15]);
label_293a4c:
    // 0x293a4c: 0x4601585d  msub.s      $f1, $f11, $f1
    ctx->pc = 0x293a4cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[1]));
label_293a50:
    // 0x293a50: 0x4602581a  mula.s      $f11, $f2
    ctx->pc = 0x293a50u;
    ctx->f[31] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
label_293a54:
    // 0x293a54: 0x460f609d  msub.s      $f2, $f12, $f15
    ctx->pc = 0x293a54u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[15]));
label_293a58:
    // 0x293a58: 0x460a0000  add.s       $f0, $f0, $f10
    ctx->pc = 0x293a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[10]);
label_293a5c:
    // 0x293a5c: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x293a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_293a60:
    // 0x293a60: 0x46081080  add.s       $f2, $f2, $f8
    ctx->pc = 0x293a60u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[8]);
label_293a64:
    // 0x293a64: 0x0  nop
    ctx->pc = 0x293a64u;
    // NOP
label_293a68:
    // 0x293a68: 0x8daa0028  lw          $t2, 0x28($t5)
    ctx->pc = 0x293a68u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 40)));
label_293a6c:
    // 0x293a6c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x293a6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_293a70:
    // 0x293a70: 0x0  nop
    ctx->pc = 0x293a70u;
    // NOP
label_293a74:
    // 0x293a74: 0x46006ac6  mov.s       $f11, $f13
    ctx->pc = 0x293a74u;
    ctx->f[11] = FPU_MOV_S(ctx->f[13]);
label_293a78:
    // 0x293a78: 0x81430018  lb          $v1, 0x18($t2)
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
label_293a7c:
    // 0x293a7c: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
label_293a80:
    if (ctx->pc == 0x293A80u) {
        ctx->pc = 0x293A80u;
            // 0x293a80: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x293A84u;
        goto label_293a84;
    }
    ctx->pc = 0x293A7Cu;
    {
        const bool branch_taken_0x293a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x293A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293A7Cu;
            // 0x293a80: 0x46006b06  mov.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a7c) {
            ctx->pc = 0x293A90u;
            goto label_293a90;
        }
    }
    ctx->pc = 0x293A84u;
label_293a84:
    // 0x293a84: 0x81430010  lb          $v1, 0x10($t2)
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
label_293a88:
    // 0x293a88: 0x10000002  b           . + 4 + (0x2 << 2)
label_293a8c:
    if (ctx->pc == 0x293A8Cu) {
        ctx->pc = 0x293A8Cu;
            // 0x293a8c: 0x1431821  addu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->pc = 0x293A90u;
        goto label_293a90;
    }
    ctx->pc = 0x293A88u;
    {
        const bool branch_taken_0x293a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293A88u;
            // 0x293a8c: 0x1431821  addu        $v1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a88) {
            ctx->pc = 0x293A94u;
            goto label_293a94;
        }
    }
    ctx->pc = 0x293A90u;
label_293a90:
    // 0x293a90: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x293a90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293a94:
    // 0x293a94: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_293a98:
    if (ctx->pc == 0x293A98u) {
        ctx->pc = 0x293A9Cu;
        goto label_293a9c;
    }
    ctx->pc = 0x293A94u;
    {
        const bool branch_taken_0x293a94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a94) {
            ctx->pc = 0x293B00u;
            goto label_293b00;
        }
    }
    ctx->pc = 0x293A9Cu;
label_293a9c:
    // 0x293a9c: 0xc5aa0000  lwc1        $f10, 0x0($t5)
    ctx->pc = 0x293a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293aa0:
    // 0x293aa0: 0xc4690100  lwc1        $f9, 0x100($v1)
    ctx->pc = 0x293aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293aa4:
    // 0x293aa4: 0xc5ad0004  lwc1        $f13, 0x4($t5)
    ctx->pc = 0x293aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_293aa8:
    // 0x293aa8: 0xc4680104  lwc1        $f8, 0x104($v1)
    ctx->pc = 0x293aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_293aac:
    // 0x293aac: 0xc5ac0008  lwc1        $f12, 0x8($t5)
    ctx->pc = 0x293aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293ab0:
    // 0x293ab0: 0xc46b0108  lwc1        $f11, 0x108($v1)
    ctx->pc = 0x293ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293ab4:
    // 0x293ab4: 0xc4700194  lwc1        $f16, 0x194($v1)
    ctx->pc = 0x293ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_293ab8:
    // 0x293ab8: 0x46095481  sub.s       $f18, $f10, $f9
    ctx->pc = 0x293ab8u;
    ctx->f[18] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_293abc:
    // 0x293abc: 0x46086b41  sub.s       $f13, $f13, $f8
    ctx->pc = 0x293abcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[8]);
label_293ac0:
    // 0x293ac0: 0x460b62c1  sub.s       $f11, $f12, $f11
    ctx->pc = 0x293ac0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[12], ctx->f[11]);
label_293ac4:
    // 0x293ac4: 0xc4710198  lwc1        $f17, 0x198($v1)
    ctx->pc = 0x293ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_293ac8:
    // 0x293ac8: 0x460b801a  mula.s      $f16, $f11
    ctx->pc = 0x293ac8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[11]);
label_293acc:
    // 0x293acc: 0xc46f0190  lwc1        $f15, 0x190($v1)
    ctx->pc = 0x293accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_293ad0:
    // 0x293ad0: 0xc46a0180  lwc1        $f10, 0x180($v1)
    ctx->pc = 0x293ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293ad4:
    // 0x293ad4: 0xc4690184  lwc1        $f9, 0x184($v1)
    ctx->pc = 0x293ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293ad8:
    // 0x293ad8: 0xc4680188  lwc1        $f8, 0x188($v1)
    ctx->pc = 0x293ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_293adc:
    // 0x293adc: 0x460d8b1d  msub.s      $f12, $f17, $f13
    ctx->pc = 0x293adcu;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[13]));
label_293ae0:
    // 0x293ae0: 0x4612881a  mula.s      $f17, $f18
    ctx->pc = 0x293ae0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[18]);
label_293ae4:
    // 0x293ae4: 0x460b7add  msub.s      $f11, $f15, $f11
    ctx->pc = 0x293ae4u;
    ctx->f[11] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[11]));
label_293ae8:
    // 0x293ae8: 0x460d781a  mula.s      $f15, $f13
    ctx->pc = 0x293ae8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[13]);
label_293aec:
    // 0x293aec: 0x4612835d  msub.s      $f13, $f16, $f18
    ctx->pc = 0x293aecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[18]));
label_293af0:
    // 0x293af0: 0x460a6300  add.s       $f12, $f12, $f10
    ctx->pc = 0x293af0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
label_293af4:
    // 0x293af4: 0x46095ac0  add.s       $f11, $f11, $f9
    ctx->pc = 0x293af4u;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[9]);
label_293af8:
    // 0x293af8: 0x46086b40  add.s       $f13, $f13, $f8
    ctx->pc = 0x293af8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[8]);
label_293afc:
    // 0x293afc: 0x0  nop
    ctx->pc = 0x293afcu;
    // NOP
label_293b00:
    // 0x293b00: 0x460c0201  sub.s       $f8, $f0, $f12
    ctx->pc = 0x293b00u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_293b04:
    // 0x293b04: 0x460b0801  sub.s       $f0, $f1, $f11
    ctx->pc = 0x293b04u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
label_293b08:
    // 0x293b08: 0x46084042  mul.s       $f1, $f8, $f8
    ctx->pc = 0x293b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
label_293b0c:
    // 0x293b0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x293b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_293b10:
    // 0x293b10: 0x460d1081  sub.s       $f2, $f2, $f13
    ctx->pc = 0x293b10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[13]);
label_293b14:
    // 0x293b14: 0x46000818  adda.s      $f1, $f0
    ctx->pc = 0x293b14u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_293b18:
    // 0x293b18: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x293b18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_293b1c:
    // 0x293b1c: 0x4600381a  mula.s      $f7, $f0
    ctx->pc = 0x293b1cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_293b20:
    // 0x293b20: 0x4604301c  madd.s      $f0, $f6, $f4
    ctx->pc = 0x293b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[4]));
label_293b24:
    // 0x293b24: 0x46001800  add.s       $f0, $f3, $f0
    ctx->pc = 0x293b24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_293b28:
    // 0x293b28: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x293b28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293b2c:
    // 0x293b2c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_293b30:
    if (ctx->pc == 0x293B30u) {
        ctx->pc = 0x293B34u;
        goto label_293b34;
    }
    ctx->pc = 0x293B2Cu;
    {
        const bool branch_taken_0x293b2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293b2c) {
            ctx->pc = 0x293B40u;
            goto label_293b40;
        }
    }
    ctx->pc = 0x293B34u;
label_293b34:
    // 0x293b34: 0x46000146  mov.s       $f5, $f0
    ctx->pc = 0x293b34u;
    ctx->f[5] = FPU_MOV_S(ctx->f[0]);
label_293b38:
    // 0x293b38: 0x1c0102d  daddu       $v0, $t6, $zero
    ctx->pc = 0x293b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_293b3c:
    // 0x293b3c: 0x0  nop
    ctx->pc = 0x293b3cu;
    // NOP
label_293b40:
    // 0x293b40: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x293b40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
label_293b44:
    // 0x293b44: 0x25ce0001  addiu       $t6, $t6, 0x1
    ctx->pc = 0x293b44u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 1));
label_293b48:
    // 0x293b48: 0x1c7182a  slt         $v1, $t6, $a3
    ctx->pc = 0x293b48u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_293b4c:
    // 0x293b4c: 0x1460ff8e  bnez        $v1, . + 4 + (-0x72 << 2)
label_293b50:
    if (ctx->pc == 0x293B50u) {
        ctx->pc = 0x293B54u;
        goto label_293b54;
    }
    ctx->pc = 0x293B4Cu;
    {
        const bool branch_taken_0x293b4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x293b4c) {
            ctx->pc = 0x293988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293988;
        }
    }
    ctx->pc = 0x293B54u;
label_293b54:
    // 0x293b54: 0x0  nop
    ctx->pc = 0x293b54u;
    // NOP
label_293b58:
    // 0x293b58: 0x1000000f  b           . + 4 + (0xF << 2)
label_293b5c:
    if (ctx->pc == 0x293B5Cu) {
        ctx->pc = 0x293B60u;
        goto label_293b60;
    }
    ctx->pc = 0x293B58u;
    {
        const bool branch_taken_0x293b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b58) {
            ctx->pc = 0x293B98u;
            goto label_293b98;
        }
    }
    ctx->pc = 0x293B60u;
label_293b60:
    // 0x293b60: 0x8c870078  lw          $a3, 0x78($a0)
    ctx->pc = 0x293b60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_293b64:
    // 0x293b64: 0x7082a  slt         $at, $zero, $a3
    ctx->pc = 0x293b64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_293b68:
    // 0x293b68: 0x1020fffb  beqz        $at, . + 4 + (-0x5 << 2)
label_293b6c:
    if (ctx->pc == 0x293B6Cu) {
        ctx->pc = 0x293B6Cu;
            // 0x293b6c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x293B70u;
        goto label_293b70;
    }
    ctx->pc = 0x293B68u;
    {
        const bool branch_taken_0x293b68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293B68u;
            // 0x293b6c: 0x3c033f80  lui         $v1, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b68) {
            ctx->pc = 0x293B58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293b58;
        }
    }
    ctx->pc = 0x293B70u;
label_293b70:
    // 0x293b70: 0x8cab0028  lw          $t3, 0x28($a1)
    ctx->pc = 0x293b70u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_293b74:
    // 0x293b74: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x293b74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_293b78:
    // 0x293b78: 0x24ac0010  addiu       $t4, $a1, 0x10
    ctx->pc = 0x293b78u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_293b7c:
    // 0x293b7c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293b7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293b80:
    // 0x293b80: 0x24a8001c  addiu       $t0, $a1, 0x1C
    ctx->pc = 0x293b80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 28));
label_293b84:
    // 0x293b84: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x293b84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_293b88:
    // 0x293b88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x293b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293b8c:
    // 0x293b8c: 0x44833000  mtc1        $v1, $f6
    ctx->pc = 0x293b8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_293b90:
    // 0x293b90: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_293b94:
    if (ctx->pc == 0x293B94u) {
        ctx->pc = 0x293B94u;
            // 0x293b94: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->pc = 0x293B98u;
        goto label_293b98;
    }
    ctx->pc = 0x293B90u;
    {
        const bool branch_taken_0x293b90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293B90u;
            // 0x293b94: 0x460029c6  mov.s       $f7, $f5 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293b90) {
            ctx->pc = 0x293B48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293b48;
        }
    }
    ctx->pc = 0x293B98u;
label_293b98:
    // 0x293b98: 0x3e00008  jr          $ra
label_293b9c:
    if (ctx->pc == 0x293B9Cu) {
        ctx->pc = 0x293BA0u;
        goto label_293ba0;
    }
    ctx->pc = 0x293B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x293BA0u;
label_293ba0:
    // 0x293ba0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x293ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_293ba4:
    // 0x293ba4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x293ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_293ba8:
    // 0x293ba8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x293ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_293bac:
    // 0x293bac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x293bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_293bb0:
    // 0x293bb0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x293bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_293bb4:
    // 0x293bb4: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x293bb4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_293bb8:
    // 0x293bb8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x293bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_293bbc:
    // 0x293bbc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x293bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_293bc0:
    // 0x293bc0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293bc4:
    // 0x293bc4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x293bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_293bc8:
    // 0x293bc8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x293bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_293bcc:
    // 0x293bcc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x293bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_293bd0:
    // 0x293bd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293bd4:
    // 0x293bd4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x293bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_293bd8:
    // 0x293bd8: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x293bd8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_293bdc:
    // 0x293bdc: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x293bdcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_293be0:
    // 0x293be0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x293be0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_293be4:
    // 0x293be4: 0x8c830090  lw          $v1, 0x90($a0)
    ctx->pc = 0x293be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
label_293be8:
    // 0x293be8: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293be8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293bec:
    // 0x293bec: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_293bf0:
    if (ctx->pc == 0x293BF0u) {
        ctx->pc = 0x293BF0u;
            // 0x293bf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293BF4u;
        goto label_293bf4;
    }
    ctx->pc = 0x293BECu;
    {
        const bool branch_taken_0x293bec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293BECu;
            // 0x293bf0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bec) {
            ctx->pc = 0x293C30u;
            goto label_293c30;
        }
    }
    ctx->pc = 0x293BF4u;
label_293bf4:
    // 0x293bf4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x293bf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293bf8:
    // 0x293bf8: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_293bfc:
    if (ctx->pc == 0x293BFCu) {
        ctx->pc = 0x293BFCu;
            // 0x293bfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293C00u;
        goto label_293c00;
    }
    ctx->pc = 0x293BF8u;
    {
        const bool branch_taken_0x293bf8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293BF8u;
            // 0x293bfc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293bf8) {
            ctx->pc = 0x293C08u;
            goto label_293c08;
        }
    }
    ctx->pc = 0x293C00u;
label_293c00:
    // 0x293c00: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x293c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_293c04:
    // 0x293c04: 0x0  nop
    ctx->pc = 0x293c04u;
    // NOP
label_293c08:
    // 0x293c08: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x293c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_293c0c:
    // 0x293c0c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x293c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_293c10:
    // 0x293c10: 0xc088b24  jal         func_222C90
label_293c14:
    if (ctx->pc == 0x293C14u) {
        ctx->pc = 0x293C14u;
            // 0x293c14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x293C18u;
        goto label_293c18;
    }
    ctx->pc = 0x293C10u;
    SET_GPR_U32(ctx, 31, 0x293C18u);
    ctx->pc = 0x293C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293C10u;
            // 0x293c14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C90u;
    if (runtime->hasFunction(0x222C90u)) {
        auto targetFn = runtime->lookupFunction(0x222C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293C18u; }
        if (ctx->pc != 0x293C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222C90_0x222c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293C18u; }
        if (ctx->pc != 0x293C18u) { return; }
    }
    ctx->pc = 0x293C18u;
label_293c18:
    // 0x293c18: 0x8ea30090  lw          $v1, 0x90($s5)
    ctx->pc = 0x293c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_293c1c:
    // 0x293c1c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x293c1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_293c20:
    // 0x293c20: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x293c20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293c24:
    // 0x293c24: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_293c28:
    if (ctx->pc == 0x293C28u) {
        ctx->pc = 0x293C28u;
            // 0x293c28: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x293C2Cu;
        goto label_293c2c;
    }
    ctx->pc = 0x293C24u;
    {
        const bool branch_taken_0x293c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C24u;
            // 0x293c28: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c24) {
            ctx->pc = 0x293BF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293bf8;
        }
    }
    ctx->pc = 0x293C2Cu;
label_293c2c:
    // 0x293c2c: 0x0  nop
    ctx->pc = 0x293c2cu;
    // NOP
label_293c30:
    // 0x293c30: 0xaea00090  sw          $zero, 0x90($s5)
    ctx->pc = 0x293c30u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 0));
label_293c34:
    // 0x293c34: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x293c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_293c38:
    // 0x293c38: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x293c38u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293c3c:
    // 0x293c3c: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_293c40:
    if (ctx->pc == 0x293C40u) {
        ctx->pc = 0x293C40u;
            // 0x293c40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293C44u;
        goto label_293c44;
    }
    ctx->pc = 0x293C3Cu;
    {
        const bool branch_taken_0x293c3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C3Cu;
            // 0x293c40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c3c) {
            ctx->pc = 0x293C80u;
            goto label_293c80;
        }
    }
    ctx->pc = 0x293C44u;
label_293c44:
    // 0x293c44: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x293c44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293c48:
    // 0x293c48: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_293c4c:
    if (ctx->pc == 0x293C4Cu) {
        ctx->pc = 0x293C4Cu;
            // 0x293c4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293C50u;
        goto label_293c50;
    }
    ctx->pc = 0x293C48u;
    {
        const bool branch_taken_0x293c48 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x293C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C48u;
            // 0x293c4c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c48) {
            ctx->pc = 0x293C58u;
            goto label_293c58;
        }
    }
    ctx->pc = 0x293C50u;
label_293c50:
    // 0x293c50: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x293c50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_293c54:
    // 0x293c54: 0x0  nop
    ctx->pc = 0x293c54u;
    // NOP
label_293c58:
    // 0x293c58: 0x8ea20098  lw          $v0, 0x98($s5)
    ctx->pc = 0x293c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_293c5c:
    // 0x293c5c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x293c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_293c60:
    // 0x293c60: 0xc08acf8  jal         func_22B3E0
label_293c64:
    if (ctx->pc == 0x293C64u) {
        ctx->pc = 0x293C64u;
            // 0x293c64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x293C68u;
        goto label_293c68;
    }
    ctx->pc = 0x293C60u;
    SET_GPR_U32(ctx, 31, 0x293C68u);
    ctx->pc = 0x293C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293C60u;
            // 0x293c64: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3E0u;
    if (runtime->hasFunction(0x22B3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22B3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293C68u; }
        if (ctx->pc != 0x293C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3E0_0x22b3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x293C68u; }
        if (ctx->pc != 0x293C68u) { return; }
    }
    ctx->pc = 0x293C68u;
label_293c68:
    // 0x293c68: 0x8ea3009c  lw          $v1, 0x9C($s5)
    ctx->pc = 0x293c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_293c6c:
    // 0x293c6c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x293c6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_293c70:
    // 0x293c70: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x293c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293c74:
    // 0x293c74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_293c78:
    if (ctx->pc == 0x293C78u) {
        ctx->pc = 0x293C78u;
            // 0x293c78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x293C7Cu;
        goto label_293c7c;
    }
    ctx->pc = 0x293C74u;
    {
        const bool branch_taken_0x293c74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x293C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293C74u;
            // 0x293c78: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c74) {
            ctx->pc = 0x293C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293c48;
        }
    }
    ctx->pc = 0x293C7Cu;
label_293c7c:
    // 0x293c7c: 0x0  nop
    ctx->pc = 0x293c7cu;
    // NOP
label_293c80:
    // 0x293c80: 0xaea0009c  sw          $zero, 0x9C($s5)
    ctx->pc = 0x293c80u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 0));
label_293c84:
    // 0x293c84: 0x8e130014  lw          $s3, 0x14($s0)
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_293c88:
    // 0x293c88: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x293c88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_293c8c:
    // 0x293c8c: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x293c8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_293c90:
    // 0x293c90: 0x27b100b4  addiu       $s1, $sp, 0xB4
    ctx->pc = 0x293c90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_293c94:
    // 0x293c94: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x293c94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_293c98:
    // 0x293c98: 0x3c068000  lui         $a2, 0x8000
    ctx->pc = 0x293c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32768 << 16));
label_293c9c:
    // 0x293c9c: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x293c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_293ca0:
    // 0x293ca0: 0x2405fff0  addiu       $a1, $zero, -0x10
    ctx->pc = 0x293ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_293ca4:
    // 0x293ca4: 0x26120014  addiu       $s2, $s0, 0x14
    ctx->pc = 0x293ca4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_293ca8:
    // 0x293ca8: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x293ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_293cac:
    // 0x293cac: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x293cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_293cb0:
    // 0x293cb0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x293cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_293cb4:
    // 0x293cb4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x293cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_293cb8:
    // 0x293cb8: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x293cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_293cbc:
    // 0x293cbc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x293cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
label_293cc0:
    // 0x293cc0: 0x41900  sll         $v1, $a0, 4
    ctx->pc = 0x293cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_293cc4:
    // 0x293cc4: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x293cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_293cc8:
    // 0x293cc8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x293cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_293ccc:
    // 0x293ccc: 0x652824  and         $a1, $v1, $a1
    ctx->pc = 0x293cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_293cd0:
    // 0x293cd0: 0x8c87000c  lw          $a3, 0xC($a0)
    ctx->pc = 0x293cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_293cd4:
    // 0x293cd4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x293cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_293cd8:
    // 0x293cd8: 0xe53021  addu        $a2, $a3, $a1
    ctx->pc = 0x293cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_293cdc:
    // 0x293cdc: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x293cdcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_293ce0:
    // 0x293ce0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_293ce4:
    if (ctx->pc == 0x293CE4u) {
        ctx->pc = 0x293CE4u;
            // 0x293ce4: 0x27b400b0  addiu       $s4, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x293CE8u;
        goto label_293ce8;
    }
    ctx->pc = 0x293CE0u;
    {
        const bool branch_taken_0x293ce0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x293CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293CE0u;
            // 0x293ce4: 0x27b400b0  addiu       $s4, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ce0) {
            ctx->pc = 0x293CF0u;
            goto label_293cf0;
        }
    }
    ctx->pc = 0x293CE8u;
label_293ce8:
    // 0x293ce8: 0x10000007  b           . + 4 + (0x7 << 2)
label_293cec:
    if (ctx->pc == 0x293CECu) {
        ctx->pc = 0x293CECu;
            // 0x293cec: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x293CF0u;
        goto label_293cf0;
    }
    ctx->pc = 0x293CE8u;
    {
        const bool branch_taken_0x293ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293CE8u;
            // 0x293cec: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ce8) {
            ctx->pc = 0x293D08u;
            goto label_293d08;
        }
    }
    ctx->pc = 0x293CF0u;
label_293cf0:
    // 0x293cf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_293cf4:
    // 0x293cf4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_293cf8:
    // 0x293cf8: 0x320f809  jalr        $t9
label_293cfc:
    if (ctx->pc == 0x293CFCu) {
        ctx->pc = 0x293D00u;
        goto label_293d00;
    }
    ctx->pc = 0x293CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x293D00u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x293D00u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x293D00u; }
            if (ctx->pc != 0x293D00u) { return; }
        }
        }
    }
    ctx->pc = 0x293D00u;
label_293d00:
    // 0x293d00: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x293d00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293d04:
    // 0x293d04: 0x0  nop
    ctx->pc = 0x293d04u;
    // NOP
label_293d08:
    // 0x293d08: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x293d08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_293d0c:
    // 0x293d0c: 0xae870000  sw          $a3, 0x0($s4)
    ctx->pc = 0x293d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 7));
label_293d10:
    // 0x293d10: 0x2642025  or          $a0, $s3, $a0
    ctx->pc = 0x293d10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
label_293d14:
    // 0x293d14: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x293d14u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
label_293d18:
    // 0x293d18: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x293d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293d1c:
    // 0x293d1c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_293d20:
    // 0x293d20: 0xae84000c  sw          $a0, 0xC($s4)
    ctx->pc = 0x293d20u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 12), GPR_U32(ctx, 4));
label_293d24:
    // 0x293d24: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x293d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_293d28:
    // 0x293d28: 0x1000031b  b           . + 4 + (0x31B << 2)
label_293d2c:
    if (ctx->pc == 0x293D2Cu) {
        ctx->pc = 0x293D2Cu;
            // 0x293d2c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x293D30u;
        goto label_293d30;
    }
    ctx->pc = 0x293D28u;
    {
        const bool branch_taken_0x293d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293D28u;
            // 0x293d2c: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293d28) {
            ctx->pc = 0x294998u;
            goto label_294998;
        }
    }
    ctx->pc = 0x293D30u;
label_293d30:
    // 0x293d30: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x293d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_293d34:
    // 0x293d34: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_293d38:
    // 0x293d38: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x293d38u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_293d3c:
    // 0x293d3c: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x293d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d40:
    // 0x293d40: 0x862821  addu        $a1, $a0, $a2
    ctx->pc = 0x293d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_293d44:
    // 0x293d44: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x293d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_293d48:
    // 0x293d48: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x293d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d4c:
    // 0x293d4c: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x293d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_293d50:
    // 0x293d50: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x293d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d54:
    // 0x293d54: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x293d54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_293d58:
    // 0x293d58: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x293d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d5c:
    // 0x293d5c: 0xe4a0000c  swc1        $f0, 0xC($a1)
    ctx->pc = 0x293d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_293d60:
    // 0x293d60: 0xc4e00010  lwc1        $f0, 0x10($a3)
    ctx->pc = 0x293d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d64:
    // 0x293d64: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x293d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_293d68:
    // 0x293d68: 0xc4e00014  lwc1        $f0, 0x14($a3)
    ctx->pc = 0x293d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d6c:
    // 0x293d6c: 0xe4a00014  swc1        $f0, 0x14($a1)
    ctx->pc = 0x293d6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_293d70:
    // 0x293d70: 0xc4e00018  lwc1        $f0, 0x18($a3)
    ctx->pc = 0x293d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d74:
    // 0x293d74: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x293d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_293d78:
    // 0x293d78: 0xc4e0001c  lwc1        $f0, 0x1C($a3)
    ctx->pc = 0x293d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293d7c:
    // 0x293d7c: 0xe4a0001c  swc1        $f0, 0x1C($a1)
    ctx->pc = 0x293d7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 28), bits); }
label_293d80:
    // 0x293d80: 0x8ce40020  lw          $a0, 0x20($a3)
    ctx->pc = 0x293d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 32)));
label_293d84:
    // 0x293d84: 0xaca40020  sw          $a0, 0x20($a1)
    ctx->pc = 0x293d84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 4));
label_293d88:
    // 0x293d88: 0x8ce40024  lw          $a0, 0x24($a3)
    ctx->pc = 0x293d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_293d8c:
    // 0x293d8c: 0xaca40024  sw          $a0, 0x24($a1)
    ctx->pc = 0x293d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 4));
label_293d90:
    // 0x293d90: 0x8ce40028  lw          $a0, 0x28($a3)
    ctx->pc = 0x293d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_293d94:
    // 0x293d94: 0xaca40028  sw          $a0, 0x28($a1)
    ctx->pc = 0x293d94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 4));
label_293d98:
    // 0x293d98: 0x8ce4002c  lw          $a0, 0x2C($a3)
    ctx->pc = 0x293d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 44)));
label_293d9c:
    // 0x293d9c: 0xaca4002c  sw          $a0, 0x2C($a1)
    ctx->pc = 0x293d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 4));
label_293da0:
    // 0x293da0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_293da4:
    // 0x293da4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x293da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_293da8:
    // 0x293da8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x293da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_293dac:
    // 0x293dac: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x293dacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293db0:
    // 0x293db0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_293db4:
    if (ctx->pc == 0x293DB4u) {
        ctx->pc = 0x293DB8u;
        goto label_293db8;
    }
    ctx->pc = 0x293DB0u;
    {
        const bool branch_taken_0x293db0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293db0) {
            ctx->pc = 0x293DC0u;
            goto label_293dc0;
        }
    }
    ctx->pc = 0x293DB8u;
label_293db8:
    // 0x293db8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x293db8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_293dbc:
    // 0x293dbc: 0x0  nop
    ctx->pc = 0x293dbcu;
    // NOP
label_293dc0:
    // 0x293dc0: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x293dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
label_293dc4:
    // 0x293dc4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x293dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_293dc8:
    // 0x293dc8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x293dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_293dcc:
    // 0x293dcc: 0x64202a  slt         $a0, $v1, $a0
    ctx->pc = 0x293dccu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_293dd0:
    // 0x293dd0: 0x1480ffd7  bnez        $a0, . + 4 + (-0x29 << 2)
label_293dd4:
    if (ctx->pc == 0x293DD4u) {
        ctx->pc = 0x293DD8u;
        goto label_293dd8;
    }
    ctx->pc = 0x293DD0u;
    {
        const bool branch_taken_0x293dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x293dd0) {
            ctx->pc = 0x293D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293d30;
        }
    }
    ctx->pc = 0x293DD8u;
label_293dd8:
    // 0x293dd8: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x293dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_293ddc:
    // 0x293ddc: 0x2474ffff  addiu       $s4, $v1, -0x1
    ctx->pc = 0x293ddcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_293de0:
    // 0x293de0: 0x68000f1  bltz        $s4, . + 4 + (0xF1 << 2)
label_293de4:
    if (ctx->pc == 0x293DE4u) {
        ctx->pc = 0x293DE4u;
            // 0x293de4: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x293DE8u;
        goto label_293de8;
    }
    ctx->pc = 0x293DE0u;
    {
        const bool branch_taken_0x293de0 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x293DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293DE0u;
            // 0x293de4: 0x141840  sll         $v1, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293de0) {
            ctx->pc = 0x2941A8u;
            goto label_2941a8;
        }
    }
    ctx->pc = 0x293DE8u;
label_293de8:
    // 0x293de8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x293de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_293dec:
    // 0x293dec: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x293decu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_293df0:
    // 0x293df0: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x293df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_293df4:
    // 0x293df4: 0x3c043f8c  lui         $a0, 0x3F8C
    ctx->pc = 0x293df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16268 << 16));
label_293df8:
    // 0x293df8: 0x2409ffff  addiu       $t1, $zero, -0x1
    ctx->pc = 0x293df8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_293dfc:
    // 0x293dfc: 0x3484cccd  ori         $a0, $a0, 0xCCCD
    ctx->pc = 0x293dfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_293e00:
    // 0x293e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x293e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293e04:
    // 0x293e04: 0x44843000  mtc1        $a0, $f6
    ctx->pc = 0x293e04u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_293e08:
    // 0x293e08: 0x100002d3  b           . + 4 + (0x2D3 << 2)
label_293e0c:
    if (ctx->pc == 0x293E0Cu) {
        ctx->pc = 0x293E0Cu;
            // 0x293e0c: 0x709821  addu        $s3, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->pc = 0x293E10u;
        goto label_293e10;
    }
    ctx->pc = 0x293E08u;
    {
        const bool branch_taken_0x293e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293E08u;
            // 0x293e0c: 0x709821  addu        $s3, $v1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e08) {
            ctx->pc = 0x294958u;
            goto label_294958;
        }
    }
    ctx->pc = 0x293E10u;
label_293e10:
    // 0x293e10: 0x8cab0028  lw          $t3, 0x28($a1)
    ctx->pc = 0x293e10u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
label_293e14:
    // 0x293e14: 0xc4ac0014  lwc1        $f12, 0x14($a1)
    ctx->pc = 0x293e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293e18:
    // 0x293e18: 0xc4eb0004  lwc1        $f11, 0x4($a3)
    ctx->pc = 0x293e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293e1c:
    // 0x293e1c: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x293e1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_293e20:
    // 0x293e20: 0xc4aa0010  lwc1        $f10, 0x10($a1)
    ctx->pc = 0x293e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293e24:
    // 0x293e24: 0xc4e90000  lwc1        $f9, 0x0($a3)
    ctx->pc = 0x293e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293e28:
    // 0x293e28: 0xc4a50018  lwc1        $f5, 0x18($a1)
    ctx->pc = 0x293e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_293e2c:
    // 0x293e2c: 0x816a0018  lb          $t2, 0x18($t3)
    ctx->pc = 0x293e2cu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 24)));
label_293e30:
    // 0x293e30: 0xc4e40008  lwc1        $f4, 0x8($a3)
    ctx->pc = 0x293e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_293e34:
    // 0x293e34: 0x460b62c2  mul.s       $f11, $f12, $f11
    ctx->pc = 0x293e34u;
    ctx->f[11] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
label_293e38:
    // 0x293e38: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x293e38u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
label_293e3c:
    // 0x293e3c: 0x460b4818  adda.s      $f9, $f11
    ctx->pc = 0x293e3cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[11]);
label_293e40:
    // 0x293e40: 0xc6ae0060  lwc1        $f14, 0x60($s5)
    ctx->pc = 0x293e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_293e44:
    // 0x293e44: 0x4604295c  madd.s      $f5, $f5, $f4
    ctx->pc = 0x293e44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[4]));
label_293e48:
    // 0x293e48: 0xc48d0000  lwc1        $f13, 0x0($a0)
    ctx->pc = 0x293e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_293e4c:
    // 0x293e4c: 0xc4ac001c  lwc1        $f12, 0x1C($a1)
    ctx->pc = 0x293e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293e50:
    // 0x293e50: 0x46050141  sub.s       $f5, $f0, $f5
    ctx->pc = 0x293e50u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_293e54:
    // 0x293e54: 0x460e7242  mul.s       $f9, $f14, $f14
    ctx->pc = 0x293e54u;
    ctx->f[9] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
label_293e58:
    // 0x293e58: 0x460d6101  sub.s       $f4, $f12, $f13
    ctx->pc = 0x293e58u;
    ctx->f[4] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
label_293e5c:
    // 0x293e5c: 0x46092942  mul.s       $f5, $f5, $f9
    ctx->pc = 0x293e5cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[9]);
label_293e60:
    // 0x293e60: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x293e60u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
label_293e64:
    // 0x293e64: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x293e64u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_293e68:
    // 0x293e68: 0x154c0004  bne         $t2, $t4, . + 4 + (0x4 << 2)
label_293e6c:
    if (ctx->pc == 0x293E6Cu) {
        ctx->pc = 0x293E6Cu;
            // 0x293e6c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->pc = 0x293E70u;
        goto label_293e70;
    }
    ctx->pc = 0x293E68u;
    {
        const bool branch_taken_0x293e68 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x293E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293E68u;
            // 0x293e6c: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e68) {
            ctx->pc = 0x293E7Cu;
            goto label_293e7c;
        }
    }
    ctx->pc = 0x293E70u;
label_293e70:
    // 0x293e70: 0x816a0010  lb          $t2, 0x10($t3)
    ctx->pc = 0x293e70u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
label_293e74:
    // 0x293e74: 0x10000002  b           . + 4 + (0x2 << 2)
label_293e78:
    if (ctx->pc == 0x293E78u) {
        ctx->pc = 0x293E78u;
            // 0x293e78: 0x16a5021  addu        $t2, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->pc = 0x293E7Cu;
        goto label_293e7c;
    }
    ctx->pc = 0x293E74u;
    {
        const bool branch_taken_0x293e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293E74u;
            // 0x293e78: 0x16a5021  addu        $t2, $t3, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293e74) {
            ctx->pc = 0x293E80u;
            goto label_293e80;
        }
    }
    ctx->pc = 0x293E7Cu;
label_293e7c:
    // 0x293e7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293e7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293e80:
    // 0x293e80: 0x11400019  beqz        $t2, . + 4 + (0x19 << 2)
label_293e84:
    if (ctx->pc == 0x293E84u) {
        ctx->pc = 0x293E88u;
        goto label_293e88;
    }
    ctx->pc = 0x293E80u;
    {
        const bool branch_taken_0x293e80 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x293e80) {
            ctx->pc = 0x293EE8u;
            goto label_293ee8;
        }
    }
    ctx->pc = 0x293E88u;
label_293e88:
    // 0x293e88: 0xc4ab0000  lwc1        $f11, 0x0($a1)
    ctx->pc = 0x293e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293e8c:
    // 0x293e8c: 0xc54a0100  lwc1        $f10, 0x100($t2)
    ctx->pc = 0x293e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293e90:
    // 0x293e90: 0xc4a90004  lwc1        $f9, 0x4($a1)
    ctx->pc = 0x293e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293e94:
    // 0x293e94: 0xc5430104  lwc1        $f3, 0x104($t2)
    ctx->pc = 0x293e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_293e98:
    // 0x293e98: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x293e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_293e9c:
    // 0x293e9c: 0xc5410108  lwc1        $f1, 0x108($t2)
    ctx->pc = 0x293e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_293ea0:
    // 0x293ea0: 0xc54d0194  lwc1        $f13, 0x194($t2)
    ctx->pc = 0x293ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_293ea4:
    // 0x293ea4: 0x460a5bc1  sub.s       $f15, $f11, $f10
    ctx->pc = 0x293ea4u;
    ctx->f[15] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
label_293ea8:
    // 0x293ea8: 0x460348c1  sub.s       $f3, $f9, $f3
    ctx->pc = 0x293ea8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[9], ctx->f[3]);
label_293eac:
    // 0x293eac: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x293eacu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_293eb0:
    // 0x293eb0: 0xc54e0198  lwc1        $f14, 0x198($t2)
    ctx->pc = 0x293eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_293eb4:
    // 0x293eb4: 0x4602681a  mula.s      $f13, $f2
    ctx->pc = 0x293eb4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[13], ctx->f[2]);
label_293eb8:
    // 0x293eb8: 0xc54c0190  lwc1        $f12, 0x190($t2)
    ctx->pc = 0x293eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293ebc:
    // 0x293ebc: 0xc54b0180  lwc1        $f11, 0x180($t2)
    ctx->pc = 0x293ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293ec0:
    // 0x293ec0: 0xc54a0184  lwc1        $f10, 0x184($t2)
    ctx->pc = 0x293ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293ec4:
    // 0x293ec4: 0xc5490188  lwc1        $f9, 0x188($t2)
    ctx->pc = 0x293ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293ec8:
    // 0x293ec8: 0x4603705d  msub.s      $f1, $f14, $f3
    ctx->pc = 0x293ec8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[14], ctx->f[3]));
label_293ecc:
    // 0x293ecc: 0x460f701a  mula.s      $f14, $f15
    ctx->pc = 0x293eccu;
    ctx->f[31] = FPU_MUL_S(ctx->f[14], ctx->f[15]);
label_293ed0:
    // 0x293ed0: 0x4602609d  msub.s      $f2, $f12, $f2
    ctx->pc = 0x293ed0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[12], ctx->f[2]));
label_293ed4:
    // 0x293ed4: 0x4603601a  mula.s      $f12, $f3
    ctx->pc = 0x293ed4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_293ed8:
    // 0x293ed8: 0x460f68dd  msub.s      $f3, $f13, $f15
    ctx->pc = 0x293ed8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[13], ctx->f[15]));
label_293edc:
    // 0x293edc: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x293edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
label_293ee0:
    // 0x293ee0: 0x460a1080  add.s       $f2, $f2, $f10
    ctx->pc = 0x293ee0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[10]);
label_293ee4:
    // 0x293ee4: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x293ee4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_293ee8:
    // 0x293ee8: 0x80ca0018  lb          $t2, 0x18($a2)
    ctx->pc = 0x293ee8u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 24)));
label_293eec:
    // 0x293eec: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x293eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_293ef0:
    // 0x293ef0: 0x0  nop
    ctx->pc = 0x293ef0u;
    // NOP
label_293ef4:
    // 0x293ef4: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x293ef4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
label_293ef8:
    // 0x293ef8: 0x154c0004  bne         $t2, $t4, . + 4 + (0x4 << 2)
label_293efc:
    if (ctx->pc == 0x293EFCu) {
        ctx->pc = 0x293EFCu;
            // 0x293efc: 0x46007346  mov.s       $f13, $f14 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x293F00u;
        goto label_293f00;
    }
    ctx->pc = 0x293EF8u;
    {
        const bool branch_taken_0x293ef8 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 12));
        ctx->pc = 0x293EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293EF8u;
            // 0x293efc: 0x46007346  mov.s       $f13, $f14 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ef8) {
            ctx->pc = 0x293F0Cu;
            goto label_293f0c;
        }
    }
    ctx->pc = 0x293F00u;
label_293f00:
    // 0x293f00: 0x80ca0010  lb          $t2, 0x10($a2)
    ctx->pc = 0x293f00u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 16)));
label_293f04:
    // 0x293f04: 0x10000002  b           . + 4 + (0x2 << 2)
label_293f08:
    if (ctx->pc == 0x293F08u) {
        ctx->pc = 0x293F08u;
            // 0x293f08: 0xca5021  addu        $t2, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->pc = 0x293F0Cu;
        goto label_293f0c;
    }
    ctx->pc = 0x293F04u;
    {
        const bool branch_taken_0x293f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293F04u;
            // 0x293f08: 0xca5021  addu        $t2, $a2, $t2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293f04) {
            ctx->pc = 0x293F10u;
            goto label_293f10;
        }
    }
    ctx->pc = 0x293F0Cu;
label_293f0c:
    // 0x293f0c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x293f0cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293f10:
    // 0x293f10: 0x11400019  beqz        $t2, . + 4 + (0x19 << 2)
label_293f14:
    if (ctx->pc == 0x293F14u) {
        ctx->pc = 0x293F18u;
        goto label_293f18;
    }
    ctx->pc = 0x293F10u;
    {
        const bool branch_taken_0x293f10 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x293f10) {
            ctx->pc = 0x293F78u;
            goto label_293f78;
        }
    }
    ctx->pc = 0x293F18u;
label_293f18:
    // 0x293f18: 0xc66b0000  lwc1        $f11, 0x0($s3)
    ctx->pc = 0x293f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293f1c:
    // 0x293f1c: 0xc54a0100  lwc1        $f10, 0x100($t2)
    ctx->pc = 0x293f1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293f20:
    // 0x293f20: 0xc66e0004  lwc1        $f14, 0x4($s3)
    ctx->pc = 0x293f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_293f24:
    // 0x293f24: 0xc5490104  lwc1        $f9, 0x104($t2)
    ctx->pc = 0x293f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293f28:
    // 0x293f28: 0xc66d0008  lwc1        $f13, 0x8($s3)
    ctx->pc = 0x293f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_293f2c:
    // 0x293f2c: 0xc54c0108  lwc1        $f12, 0x108($t2)
    ctx->pc = 0x293f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_293f30:
    // 0x293f30: 0xc5500194  lwc1        $f16, 0x194($t2)
    ctx->pc = 0x293f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_293f34:
    // 0x293f34: 0x460a5c81  sub.s       $f18, $f11, $f10
    ctx->pc = 0x293f34u;
    ctx->f[18] = FPU_SUB_S(ctx->f[11], ctx->f[10]);
label_293f38:
    // 0x293f38: 0x46097381  sub.s       $f14, $f14, $f9
    ctx->pc = 0x293f38u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[9]);
label_293f3c:
    // 0x293f3c: 0x460c6b01  sub.s       $f12, $f13, $f12
    ctx->pc = 0x293f3cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[13], ctx->f[12]);
label_293f40:
    // 0x293f40: 0xc5510198  lwc1        $f17, 0x198($t2)
    ctx->pc = 0x293f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_293f44:
    // 0x293f44: 0x460c801a  mula.s      $f16, $f12
    ctx->pc = 0x293f44u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[12]);
label_293f48:
    // 0x293f48: 0xc54f0190  lwc1        $f15, 0x190($t2)
    ctx->pc = 0x293f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_293f4c:
    // 0x293f4c: 0xc54b0180  lwc1        $f11, 0x180($t2)
    ctx->pc = 0x293f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_293f50:
    // 0x293f50: 0xc54a0184  lwc1        $f10, 0x184($t2)
    ctx->pc = 0x293f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_293f54:
    // 0x293f54: 0xc5490188  lwc1        $f9, 0x188($t2)
    ctx->pc = 0x293f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_293f58:
    // 0x293f58: 0x460e8b5d  msub.s      $f13, $f17, $f14
    ctx->pc = 0x293f58u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[14]));
label_293f5c:
    // 0x293f5c: 0x4612881a  mula.s      $f17, $f18
    ctx->pc = 0x293f5cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[18]);
label_293f60:
    // 0x293f60: 0x460c7b1d  msub.s      $f12, $f15, $f12
    ctx->pc = 0x293f60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[15], ctx->f[12]));
label_293f64:
    // 0x293f64: 0x460e781a  mula.s      $f15, $f14
    ctx->pc = 0x293f64u;
    ctx->f[31] = FPU_MUL_S(ctx->f[15], ctx->f[14]);
label_293f68:
    // 0x293f68: 0x4612839d  msub.s      $f14, $f16, $f18
    ctx->pc = 0x293f68u;
    ctx->f[14] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[18]));
label_293f6c:
    // 0x293f6c: 0x460b6b40  add.s       $f13, $f13, $f11
    ctx->pc = 0x293f6cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[11]);
label_293f70:
    // 0x293f70: 0x460a6300  add.s       $f12, $f12, $f10
    ctx->pc = 0x293f70u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[10]);
label_293f74:
    // 0x293f74: 0x46097380  add.s       $f14, $f14, $f9
    ctx->pc = 0x293f74u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[9]);
label_293f78:
    // 0x293f78: 0x460d0a41  sub.s       $f9, $f1, $f13
    ctx->pc = 0x293f78u;
    ctx->f[9] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
label_293f7c:
    // 0x293f7c: 0x460c1041  sub.s       $f1, $f2, $f12
    ctx->pc = 0x293f7cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
label_293f80:
    // 0x293f80: 0x46094882  mul.s       $f2, $f9, $f9
    ctx->pc = 0x293f80u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_293f84:
    // 0x293f84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x293f84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_293f88:
    // 0x293f88: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x293f88u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
label_293f8c:
    // 0x293f8c: 0x46011018  adda.s      $f2, $f1
    ctx->pc = 0x293f8cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_293f90:
    // 0x293f90: 0x4603185c  madd.s      $f1, $f3, $f3
    ctx->pc = 0x293f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[3]));
label_293f94:
    // 0x293f94: 0x4601401a  mula.s      $f8, $f1
    ctx->pc = 0x293f94u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
label_293f98:
    // 0x293f98: 0x4605385c  madd.s      $f1, $f7, $f5
    ctx->pc = 0x293f98u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[5]));
label_293f9c:
    // 0x293f9c: 0x46012040  add.s       $f1, $f4, $f1
    ctx->pc = 0x293f9cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
label_293fa0:
    // 0x293fa0: 0x46060834  c.lt.s      $f1, $f6
    ctx->pc = 0x293fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_293fa4:
    // 0x293fa4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_293fa8:
    if (ctx->pc == 0x293FA8u) {
        ctx->pc = 0x293FACu;
        goto label_293fac;
    }
    ctx->pc = 0x293FA4u;
    {
        const bool branch_taken_0x293fa4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x293fa4) {
            ctx->pc = 0x293FB8u;
            goto label_293fb8;
        }
    }
    ctx->pc = 0x293FACu;
label_293fac:
    // 0x293fac: 0x46000986  mov.s       $f6, $f1
    ctx->pc = 0x293facu;
    ctx->f[6] = FPU_MOV_S(ctx->f[1]);
label_293fb0:
    // 0x293fb0: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x293fb0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_293fb4:
    // 0x293fb4: 0x0  nop
    ctx->pc = 0x293fb4u;
    // NOP
label_293fb8:
    // 0x293fb8: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x293fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
label_293fbc:
    // 0x293fbc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x293fbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_293fc0:
    // 0x293fc0: 0x103502a  slt         $t2, $t0, $v1
    ctx->pc = 0x293fc0u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_293fc4:
    // 0x293fc4: 0x1540ff92  bnez        $t2, . + 4 + (-0x6E << 2)
label_293fc8:
    if (ctx->pc == 0x293FC8u) {
        ctx->pc = 0x293FCCu;
        goto label_293fcc;
    }
    ctx->pc = 0x293FC4u;
    {
        const bool branch_taken_0x293fc4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x293fc4) {
            ctx->pc = 0x293E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293e10;
        }
    }
    ctx->pc = 0x293FCCu;
label_293fcc:
    // 0x293fcc: 0x0  nop
    ctx->pc = 0x293fccu;
    // NOP
label_293fd0:
    // 0x293fd0: 0x520004b  bltz        $t1, . + 4 + (0x4B << 2)
label_293fd4:
    if (ctx->pc == 0x293FD4u) {
        ctx->pc = 0x293FD8u;
        goto label_293fd8;
    }
    ctx->pc = 0x293FD0u;
    {
        const bool branch_taken_0x293fd0 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x293fd0) {
            ctx->pc = 0x294100u;
            goto label_294100;
        }
    }
    ctx->pc = 0x293FD8u;
label_293fd8:
    // 0x293fd8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x293fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_293fdc:
    // 0x293fdc: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x293fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_293fe0:
    // 0x293fe0: 0x692821  addu        $a1, $v1, $t1
    ctx->pc = 0x293fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_293fe4:
    // 0x293fe4: 0x5b100  sll         $s6, $a1, 4
    ctx->pc = 0x293fe4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_293fe8:
    // 0x293fe8: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x293fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_293fec:
    // 0x293fec: 0x969021  addu        $s2, $a0, $s6
    ctx->pc = 0x293fecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_293ff0:
    // 0x293ff0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x293ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_293ff4:
    // 0x293ff4: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_293ff8:
    if (ctx->pc == 0x293FF8u) {
        ctx->pc = 0x293FF8u;
            // 0x293ff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x293FFCu;
        goto label_293ffc;
    }
    ctx->pc = 0x293FF4u;
    {
        const bool branch_taken_0x293ff4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x293FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x293FF4u;
            // 0x293ff8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293ff4) {
            ctx->pc = 0x294010u;
            goto label_294010;
        }
    }
    ctx->pc = 0x293FFCu;
label_293ffc:
    // 0x293ffc: 0xc0a54a4  jal         func_295290
label_294000:
    if (ctx->pc == 0x294000u) {
        ctx->pc = 0x294000u;
            // 0x294000: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294004u;
        goto label_294004;
    }
    ctx->pc = 0x293FFCu;
    SET_GPR_U32(ctx, 31, 0x294004u);
    ctx->pc = 0x294000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x293FFCu;
            // 0x294000: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295290u;
    if (runtime->hasFunction(0x295290u)) {
        auto targetFn = runtime->lookupFunction(0x295290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294004u; }
        if (ctx->pc != 0x294004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295290_0x295290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294004u; }
        if (ctx->pc != 0x294004u) { return; }
    }
    ctx->pc = 0x294004u;
label_294004:
    // 0x294004: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x294004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294008:
    // 0x294008: 0xc0a5484  jal         func_295210
label_29400c:
    if (ctx->pc == 0x29400Cu) {
        ctx->pc = 0x29400Cu;
            // 0x29400c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294010u;
        goto label_294010;
    }
    ctx->pc = 0x294008u;
    SET_GPR_U32(ctx, 31, 0x294010u);
    ctx->pc = 0x29400Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294008u;
            // 0x29400c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295210u;
    if (runtime->hasFunction(0x295210u)) {
        auto targetFn = runtime->lookupFunction(0x295210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294010u; }
        if (ctx->pc != 0x294010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295210_0x295210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294010u; }
        if (ctx->pc != 0x294010u) { return; }
    }
    ctx->pc = 0x294010u;
label_294010:
    // 0x294010: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x294010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294014:
    // 0x294014: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x294014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_294018:
    // 0x294018: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x294018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29401c:
    // 0x29401c: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x29401cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_294020:
    // 0x294020: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x294020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294024:
    // 0x294024: 0xe6600008  swc1        $f0, 0x8($s3)
    ctx->pc = 0x294024u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
label_294028:
    // 0x294028: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x294028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29402c:
    // 0x29402c: 0xe660000c  swc1        $f0, 0xC($s3)
    ctx->pc = 0x29402cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
label_294030:
    // 0x294030: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x294030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294034:
    // 0x294034: 0xe6600010  swc1        $f0, 0x10($s3)
    ctx->pc = 0x294034u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 16), bits); }
label_294038:
    // 0x294038: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x294038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29403c:
    // 0x29403c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x29403cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_294040:
    // 0x294040: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x294040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294044:
    // 0x294044: 0xe6600018  swc1        $f0, 0x18($s3)
    ctx->pc = 0x294044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
label_294048:
    // 0x294048: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x294048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29404c:
    // 0x29404c: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x29404cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
label_294050:
    // 0x294050: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x294050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_294054:
    // 0x294054: 0xae630020  sw          $v1, 0x20($s3)
    ctx->pc = 0x294054u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 3));
label_294058:
    // 0x294058: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x294058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_29405c:
    // 0x29405c: 0xae630024  sw          $v1, 0x24($s3)
    ctx->pc = 0x29405cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 3));
label_294060:
    // 0x294060: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x294060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_294064:
    // 0x294064: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x294064u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_294068:
    // 0x294068: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x294068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_29406c:
    // 0x29406c: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x29406cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_294070:
    // 0x294070: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x294070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_294074:
    // 0x294074: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x294074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294078:
    // 0x294078: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x294078u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_29407c:
    // 0x29407c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x29407cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_294080:
    // 0x294080: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x294080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_294084:
    // 0x294084: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x294084u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_294088:
    // 0x294088: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29408c:
    // 0x29408c: 0xb63021  addu        $a2, $a1, $s6
    ctx->pc = 0x29408cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_294090:
    // 0x294090: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x294090u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_294094:
    // 0x294094: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x294094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_294098:
    // 0x294098: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x294098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29409c:
    // 0x29409c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29409cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2940a0:
    // 0x2940a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2940a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940a4:
    // 0x2940a4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2940a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2940a8:
    // 0x2940a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2940a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940ac:
    // 0x2940ac: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2940acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2940b0:
    // 0x2940b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2940b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940b4:
    // 0x2940b4: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2940b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2940b8:
    // 0x2940b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2940b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940bc:
    // 0x2940bc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2940bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2940c0:
    // 0x2940c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2940c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940c4:
    // 0x2940c4: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2940c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2940c8:
    // 0x2940c8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2940c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940cc:
    // 0x2940cc: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2940ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2940d0:
    // 0x2940d0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2940d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2940d4:
    // 0x2940d4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x2940d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_2940d8:
    // 0x2940d8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2940d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2940dc:
    // 0x2940dc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x2940dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
label_2940e0:
    // 0x2940e0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2940e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2940e4:
    // 0x2940e4: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2940e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_2940e8:
    // 0x2940e8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2940e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2940ec:
    // 0x2940ec: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2940ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_2940f0:
    // 0x2940f0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2940f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2940f4:
    // 0x2940f4: 0x10000028  b           . + 4 + (0x28 << 2)
label_2940f8:
    if (ctx->pc == 0x2940F8u) {
        ctx->pc = 0x2940F8u;
            // 0x2940f8: 0xacc3002c  sw          $v1, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x2940FCu;
        goto label_2940fc;
    }
    ctx->pc = 0x2940F4u;
    {
        const bool branch_taken_0x2940f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2940F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2940F4u;
            // 0x2940f8: 0xacc3002c  sw          $v1, 0x2C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2940f4) {
            ctx->pc = 0x294198u;
            goto label_294198;
        }
    }
    ctx->pc = 0x2940FCu;
label_2940fc:
    // 0x2940fc: 0x0  nop
    ctx->pc = 0x2940fcu;
    // NOP
label_294100:
    // 0x294100: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x294100u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_294104:
    // 0x294104: 0xc0a54a4  jal         func_295290
label_294108:
    if (ctx->pc == 0x294108u) {
        ctx->pc = 0x294108u;
            // 0x294108: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29410Cu;
        goto label_29410c;
    }
    ctx->pc = 0x294104u;
    SET_GPR_U32(ctx, 31, 0x29410Cu);
    ctx->pc = 0x294108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294104u;
            // 0x294108: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295290u;
    if (runtime->hasFunction(0x295290u)) {
        auto targetFn = runtime->lookupFunction(0x295290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29410Cu; }
        if (ctx->pc != 0x29410Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295290_0x295290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29410Cu; }
        if (ctx->pc != 0x29410Cu) { return; }
    }
    ctx->pc = 0x29410Cu;
label_29410c:
    // 0x29410c: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x29410cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_294110:
    // 0x294110: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x294110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294114:
    // 0x294114: 0xaea30078  sw          $v1, 0x78($s5)
    ctx->pc = 0x294114u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 3));
label_294118:
    // 0x294118: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x294118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_29411c:
    // 0x29411c: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x29411cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_294120:
    // 0x294120: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x294120u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_294124:
    // 0x294124: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_294128:
    // 0x294128: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x294128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_29412c:
    // 0x29412c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29412cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_294130:
    // 0x294130: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x294130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_294134:
    // 0x294134: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x294134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294138:
    // 0x294138: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x294138u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_29413c:
    // 0x29413c: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x29413cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294140:
    // 0x294140: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x294140u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_294144:
    // 0x294144: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x294144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294148:
    // 0x294148: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x294148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_29414c:
    // 0x29414c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x29414cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294150:
    // 0x294150: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x294150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_294154:
    // 0x294154: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x294154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294158:
    // 0x294158: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x294158u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_29415c:
    // 0x29415c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x29415cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294160:
    // 0x294160: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x294160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_294164:
    // 0x294164: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x294164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294168:
    // 0x294168: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x294168u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_29416c:
    // 0x29416c: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x29416cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294170:
    // 0x294170: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x294170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_294174:
    // 0x294174: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x294174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_294178:
    // 0x294178: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x294178u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
label_29417c:
    // 0x29417c: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x29417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_294180:
    // 0x294180: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x294180u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_294184:
    // 0x294184: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x294184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_294188:
    // 0x294188: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x294188u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_29418c:
    // 0x29418c: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x29418cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_294190:
    // 0x294190: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x294190u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_294194:
    // 0x294194: 0x0  nop
    ctx->pc = 0x294194u;
    // NOP
label_294198:
    // 0x294198: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x294198u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_29419c:
    // 0x29419c: 0x681ff14  bgez        $s4, . + 4 + (-0xEC << 2)
label_2941a0:
    if (ctx->pc == 0x2941A0u) {
        ctx->pc = 0x2941A0u;
            // 0x2941a0: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->pc = 0x2941A4u;
        goto label_2941a4;
    }
    ctx->pc = 0x29419Cu;
    {
        const bool branch_taken_0x29419c = (GPR_S32(ctx, 20) >= 0);
        ctx->pc = 0x2941A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29419Cu;
            // 0x2941a0: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29419c) {
            ctx->pc = 0x293DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293df0;
        }
    }
    ctx->pc = 0x2941A4u;
label_2941a4:
    // 0x2941a4: 0x0  nop
    ctx->pc = 0x2941a4u;
    // NOP
label_2941a8:
    // 0x2941a8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2941a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2941ac:
    // 0x2941ac: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x2941acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2941b0:
    // 0x2941b0: 0x10200069  beqz        $at, . + 4 + (0x69 << 2)
label_2941b4:
    if (ctx->pc == 0x2941B4u) {
        ctx->pc = 0x2941B4u;
            // 0x2941b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2941B8u;
        goto label_2941b8;
    }
    ctx->pc = 0x2941B0u;
    {
        const bool branch_taken_0x2941b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2941B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941B0u;
            // 0x2941b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941b0) {
            ctx->pc = 0x294358u;
            goto label_294358;
        }
    }
    ctx->pc = 0x2941B8u;
label_2941b8:
    // 0x2941b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2941b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2941bc:
    // 0x2941bc: 0x0  nop
    ctx->pc = 0x2941bcu;
    // NOP
label_2941c0:
    // 0x2941c0: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2941c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2941c4:
    // 0x2941c4: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x2941c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2941c8:
    // 0x2941c8: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x2941c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2941cc:
    // 0x2941cc: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x2941ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2941d0:
    // 0x2941d0: 0x4500005b  bc1f        . + 4 + (0x5B << 2)
label_2941d4:
    if (ctx->pc == 0x2941D4u) {
        ctx->pc = 0x2941D4u;
            // 0x2941d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2941D8u;
        goto label_2941d8;
    }
    ctx->pc = 0x2941D0u;
    {
        const bool branch_taken_0x2941d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2941D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2941D0u;
            // 0x2941d4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2941d0) {
            ctx->pc = 0x294340u;
            goto label_294340;
        }
    }
    ctx->pc = 0x2941D8u;
label_2941d8:
    // 0x2941d8: 0xc0a4e5c  jal         func_293970
label_2941dc:
    if (ctx->pc == 0x2941DCu) {
        ctx->pc = 0x2941DCu;
            // 0x2941dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2941E0u;
        goto label_2941e0;
    }
    ctx->pc = 0x2941D8u;
    SET_GPR_U32(ctx, 31, 0x2941E0u);
    ctx->pc = 0x2941DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2941D8u;
            // 0x2941dc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293970u;
    goto label_293970;
    ctx->pc = 0x2941E0u;
label_2941e0:
    // 0x2941e0: 0x4400029  bltz        $v0, . + 4 + (0x29 << 2)
label_2941e4:
    if (ctx->pc == 0x2941E4u) {
        ctx->pc = 0x2941E8u;
        goto label_2941e8;
    }
    ctx->pc = 0x2941E0u;
    {
        const bool branch_taken_0x2941e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2941e0) {
            ctx->pc = 0x294288u;
            goto label_294288;
        }
    }
    ctx->pc = 0x2941E8u;
label_2941e8:
    // 0x2941e8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2941e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_2941ec:
    // 0x2941ec: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x2941ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2941f0:
    // 0x2941f0: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x2941f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2941f4:
    // 0x2941f4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2941f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2941f8:
    // 0x2941f8: 0x8e640028  lw          $a0, 0x28($s3)
    ctx->pc = 0x2941f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2941fc:
    // 0x2941fc: 0x659021  addu        $s2, $v1, $a1
    ctx->pc = 0x2941fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_294200:
    // 0x294200: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x294200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_294204:
    // 0x294204: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_294208:
    if (ctx->pc == 0x294208u) {
        ctx->pc = 0x294208u;
            // 0x294208: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29420Cu;
        goto label_29420c;
    }
    ctx->pc = 0x294204u;
    {
        const bool branch_taken_0x294204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x294208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294204u;
            // 0x294208: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294204) {
            ctx->pc = 0x294220u;
            goto label_294220;
        }
    }
    ctx->pc = 0x29420Cu;
label_29420c:
    // 0x29420c: 0xc0a54a4  jal         func_295290
label_294210:
    if (ctx->pc == 0x294210u) {
        ctx->pc = 0x294210u;
            // 0x294210: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294214u;
        goto label_294214;
    }
    ctx->pc = 0x29420Cu;
    SET_GPR_U32(ctx, 31, 0x294214u);
    ctx->pc = 0x294210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29420Cu;
            // 0x294210: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295290u;
    if (runtime->hasFunction(0x295290u)) {
        auto targetFn = runtime->lookupFunction(0x295290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294214u; }
        if (ctx->pc != 0x294214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295290_0x295290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294214u; }
        if (ctx->pc != 0x294214u) { return; }
    }
    ctx->pc = 0x294214u;
label_294214:
    // 0x294214: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x294214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294218:
    // 0x294218: 0xc0a5484  jal         func_295210
label_29421c:
    if (ctx->pc == 0x29421Cu) {
        ctx->pc = 0x29421Cu;
            // 0x29421c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294220u;
        goto label_294220;
    }
    ctx->pc = 0x294218u;
    SET_GPR_U32(ctx, 31, 0x294220u);
    ctx->pc = 0x29421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294218u;
            // 0x29421c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295210u;
    if (runtime->hasFunction(0x295210u)) {
        auto targetFn = runtime->lookupFunction(0x295210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294220u; }
        if (ctx->pc != 0x294220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295210_0x295210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294220u; }
        if (ctx->pc != 0x294220u) { return; }
    }
    ctx->pc = 0x294220u;
label_294220:
    // 0x294220: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x294220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294224:
    // 0x294224: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x294224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_294228:
    // 0x294228: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x294228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29422c:
    // 0x29422c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x29422cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_294230:
    // 0x294230: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x294230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294234:
    // 0x294234: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x294234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_294238:
    // 0x294238: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x294238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29423c:
    // 0x29423c: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x29423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
label_294240:
    // 0x294240: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x294240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294244:
    // 0x294244: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x294244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_294248:
    // 0x294248: 0xc6600014  lwc1        $f0, 0x14($s3)
    ctx->pc = 0x294248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29424c:
    // 0x29424c: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x29424cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_294250:
    // 0x294250: 0xc6600018  lwc1        $f0, 0x18($s3)
    ctx->pc = 0x294250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294254:
    // 0x294254: 0xe6400018  swc1        $f0, 0x18($s2)
    ctx->pc = 0x294254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_294258:
    // 0x294258: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x294258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29425c:
    // 0x29425c: 0xe640001c  swc1        $f0, 0x1C($s2)
    ctx->pc = 0x29425cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
label_294260:
    // 0x294260: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x294260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_294264:
    // 0x294264: 0xae430020  sw          $v1, 0x20($s2)
    ctx->pc = 0x294264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 3));
label_294268:
    // 0x294268: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x294268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_29426c:
    // 0x29426c: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x29426cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_294270:
    // 0x294270: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x294270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_294274:
    // 0x294274: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x294274u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_294278:
    // 0x294278: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x294278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_29427c:
    // 0x29427c: 0x10000030  b           . + 4 + (0x30 << 2)
label_294280:
    if (ctx->pc == 0x294280u) {
        ctx->pc = 0x294280u;
            // 0x294280: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->pc = 0x294284u;
        goto label_294284;
    }
    ctx->pc = 0x29427Cu;
    {
        const bool branch_taken_0x29427c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29427Cu;
            // 0x294280: 0xae43002c  sw          $v1, 0x2C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29427c) {
            ctx->pc = 0x294340u;
            goto label_294340;
        }
    }
    ctx->pc = 0x294284u;
label_294284:
    // 0x294284: 0x0  nop
    ctx->pc = 0x294284u;
    // NOP
label_294288:
    // 0x294288: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x294288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_29428c:
    // 0x29428c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29428cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294290:
    // 0x294290: 0xc0a5484  jal         func_295210
label_294294:
    if (ctx->pc == 0x294294u) {
        ctx->pc = 0x294294u;
            // 0x294294: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x294298u;
        goto label_294298;
    }
    ctx->pc = 0x294290u;
    SET_GPR_U32(ctx, 31, 0x294298u);
    ctx->pc = 0x294294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294290u;
            // 0x294294: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295210u;
    if (runtime->hasFunction(0x295210u)) {
        auto targetFn = runtime->lookupFunction(0x295210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294298u; }
        if (ctx->pc != 0x294298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295210_0x295210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294298u; }
        if (ctx->pc != 0x294298u) { return; }
    }
    ctx->pc = 0x294298u;
label_294298:
    // 0x294298: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x294298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_29429c:
    // 0x29429c: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x29429cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2942a0:
    // 0x2942a0: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x2942a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_2942a4:
    // 0x2942a4: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2942a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2942a8:
    // 0x2942a8: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2942a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2942ac:
    // 0x2942ac: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2942b0:
    if (ctx->pc == 0x2942B0u) {
        ctx->pc = 0x2942B0u;
            // 0x2942b0: 0xb09021  addu        $s2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->pc = 0x2942B4u;
        goto label_2942b4;
    }
    ctx->pc = 0x2942ACu;
    {
        const bool branch_taken_0x2942ac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2942B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2942ACu;
            // 0x2942b0: 0xb09021  addu        $s2, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2942ac) {
            ctx->pc = 0x2942C0u;
            goto label_2942c0;
        }
    }
    ctx->pc = 0x2942B4u;
label_2942b4:
    // 0x2942b4: 0x26a40074  addiu       $a0, $s5, 0x74
    ctx->pc = 0x2942b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
label_2942b8:
    // 0x2942b8: 0xc0a728c  jal         func_29CA30
label_2942bc:
    if (ctx->pc == 0x2942BCu) {
        ctx->pc = 0x2942BCu;
            // 0x2942bc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2942C0u;
        goto label_2942c0;
    }
    ctx->pc = 0x2942B8u;
    SET_GPR_U32(ctx, 31, 0x2942C0u);
    ctx->pc = 0x2942BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2942B8u;
            // 0x2942bc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942C0u; }
        if (ctx->pc != 0x2942C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2942C0u; }
        if (ctx->pc != 0x2942C0u) { return; }
    }
    ctx->pc = 0x2942C0u;
label_2942c0:
    // 0x2942c0: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x2942c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_2942c4:
    // 0x2942c4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2942c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2942c8:
    // 0x2942c8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2942c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2942cc:
    // 0x2942cc: 0xaea40078  sw          $a0, 0x78($s5)
    ctx->pc = 0x2942ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 4));
label_2942d0:
    // 0x2942d0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2942d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2942d4:
    // 0x2942d4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2942d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2942d8:
    // 0x2942d8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2942d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_2942dc:
    // 0x2942dc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2942dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2942e0:
    // 0x2942e0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2942e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2942e4:
    // 0x2942e4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2942e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2942e8:
    // 0x2942e8: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x2942e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2942ec:
    // 0x2942ec: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2942ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2942f0:
    // 0x2942f0: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2942f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2942f4:
    // 0x2942f4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2942f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2942f8:
    // 0x2942f8: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x2942f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2942fc:
    // 0x2942fc: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2942fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_294300:
    // 0x294300: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x294300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294304:
    // 0x294304: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x294304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_294308:
    // 0x294308: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x294308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29430c:
    // 0x29430c: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x29430cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_294310:
    // 0x294310: 0xc6400018  lwc1        $f0, 0x18($s2)
    ctx->pc = 0x294310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294314:
    // 0x294314: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x294314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_294318:
    // 0x294318: 0xc640001c  lwc1        $f0, 0x1C($s2)
    ctx->pc = 0x294318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29431c:
    // 0x29431c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x29431cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_294320:
    // 0x294320: 0x8e430020  lw          $v1, 0x20($s2)
    ctx->pc = 0x294320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_294324:
    // 0x294324: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x294324u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_294328:
    // 0x294328: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x294328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_29432c:
    // 0x29432c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x29432cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_294330:
    // 0x294330: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x294330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_294334:
    // 0x294334: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x294334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_294338:
    // 0x294338: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x294338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_29433c:
    // 0x29433c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x29433cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_294340:
    // 0x294340: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x294340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_294344:
    // 0x294344: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x294344u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_294348:
    // 0x294348: 0x283182a  slt         $v1, $s4, $v1
    ctx->pc = 0x294348u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_29434c:
    // 0x29434c: 0x1460ff9c  bnez        $v1, . + 4 + (-0x64 << 2)
label_294350:
    if (ctx->pc == 0x294350u) {
        ctx->pc = 0x294350u;
            // 0x294350: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x294354u;
        goto label_294354;
    }
    ctx->pc = 0x29434Cu;
    {
        const bool branch_taken_0x29434c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29434Cu;
            // 0x294350: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29434c) {
            ctx->pc = 0x2941C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2941c0;
        }
    }
    ctx->pc = 0x294354u;
label_294354:
    // 0x294354: 0x0  nop
    ctx->pc = 0x294354u;
    // NOP
label_294358:
    // 0x294358: 0x8ee30014  lw          $v1, 0x14($s7)
    ctx->pc = 0x294358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_29435c:
    // 0x29435c: 0x3182a  slt         $v1, $zero, $v1
    ctx->pc = 0x29435cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_294360:
    // 0x294360: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_294364:
    if (ctx->pc == 0x294364u) {
        ctx->pc = 0x294368u;
        goto label_294368;
    }
    ctx->pc = 0x294360u;
    {
        const bool branch_taken_0x294360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294360) {
            ctx->pc = 0x294430u;
            goto label_294430;
        }
    }
    ctx->pc = 0x294368u;
label_294368:
    // 0x294368: 0x8ef00010  lw          $s0, 0x10($s7)
    ctx->pc = 0x294368u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
label_29436c:
    // 0x29436c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29436cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294370:
    // 0x294370: 0xc0a4e5c  jal         func_293970
label_294374:
    if (ctx->pc == 0x294374u) {
        ctx->pc = 0x294374u;
            // 0x294374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294378u;
        goto label_294378;
    }
    ctx->pc = 0x294370u;
    SET_GPR_U32(ctx, 31, 0x294378u);
    ctx->pc = 0x294374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294370u;
            // 0x294374: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293970u;
    goto label_293970;
    ctx->pc = 0x294378u;
label_294378:
    // 0x294378: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x294378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29437c:
    // 0x29437c: 0x1443002c  bne         $v0, $v1, . + 4 + (0x2C << 2)
label_294380:
    if (ctx->pc == 0x294380u) {
        ctx->pc = 0x294380u;
            // 0x294380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294384u;
        goto label_294384;
    }
    ctx->pc = 0x29437Cu;
    {
        const bool branch_taken_0x29437c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x294380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29437Cu;
            // 0x294380: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29437c) {
            ctx->pc = 0x294430u;
            goto label_294430;
        }
    }
    ctx->pc = 0x294384u;
label_294384:
    // 0x294384: 0xc0a5484  jal         func_295210
label_294388:
    if (ctx->pc == 0x294388u) {
        ctx->pc = 0x294388u;
            // 0x294388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29438Cu;
        goto label_29438c;
    }
    ctx->pc = 0x294384u;
    SET_GPR_U32(ctx, 31, 0x29438Cu);
    ctx->pc = 0x294388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294384u;
            // 0x294388: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295210u;
    if (runtime->hasFunction(0x295210u)) {
        auto targetFn = runtime->lookupFunction(0x295210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29438Cu; }
        if (ctx->pc != 0x29438Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295210_0x295210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29438Cu; }
        if (ctx->pc != 0x29438Cu) { return; }
    }
    ctx->pc = 0x29438Cu;
label_29438c:
    // 0x29438c: 0x8ea3007c  lw          $v1, 0x7C($s5)
    ctx->pc = 0x29438cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 124)));
label_294390:
    // 0x294390: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x294390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_294394:
    // 0x294394: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x294394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_294398:
    // 0x294398: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x294398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29439c:
    // 0x29439c: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2943a0:
    if (ctx->pc == 0x2943A0u) {
        ctx->pc = 0x2943A0u;
            // 0x2943a0: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->pc = 0x2943A4u;
        goto label_2943a4;
    }
    ctx->pc = 0x29439Cu;
    {
        const bool branch_taken_0x29439c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2943A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29439Cu;
            // 0x2943a0: 0x26a40074  addiu       $a0, $s5, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29439c) {
            ctx->pc = 0x2943B0u;
            goto label_2943b0;
        }
    }
    ctx->pc = 0x2943A4u;
label_2943a4:
    // 0x2943a4: 0xc0a728c  jal         func_29CA30
label_2943a8:
    if (ctx->pc == 0x2943A8u) {
        ctx->pc = 0x2943A8u;
            // 0x2943a8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x2943ACu;
        goto label_2943ac;
    }
    ctx->pc = 0x2943A4u;
    SET_GPR_U32(ctx, 31, 0x2943ACu);
    ctx->pc = 0x2943A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2943A4u;
            // 0x2943a8: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943ACu; }
        if (ctx->pc != 0x2943ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2943ACu; }
        if (ctx->pc != 0x2943ACu) { return; }
    }
    ctx->pc = 0x2943ACu;
label_2943ac:
    // 0x2943ac: 0x0  nop
    ctx->pc = 0x2943acu;
    // NOP
label_2943b0:
    // 0x2943b0: 0x8ea50078  lw          $a1, 0x78($s5)
    ctx->pc = 0x2943b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_2943b4:
    // 0x2943b4: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x2943b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2943b8:
    // 0x2943b8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x2943b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_2943bc:
    // 0x2943bc: 0xaea40078  sw          $a0, 0x78($s5)
    ctx->pc = 0x2943bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 4));
label_2943c0:
    // 0x2943c0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2943c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2943c4:
    // 0x2943c4: 0x32100  sll         $a0, $v1, 4
    ctx->pc = 0x2943c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2943c8:
    // 0x2943c8: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x2943c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_2943cc:
    // 0x2943cc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2943ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943d0:
    // 0x2943d0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x2943d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2943d4:
    // 0x2943d4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2943d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2943d8:
    // 0x2943d8: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x2943d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943dc:
    // 0x2943dc: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2943dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2943e0:
    // 0x2943e0: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2943e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943e4:
    // 0x2943e4: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2943e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2943e8:
    // 0x2943e8: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2943e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943ec:
    // 0x2943ec: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2943ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2943f0:
    // 0x2943f0: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2943f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943f4:
    // 0x2943f4: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2943f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_2943f8:
    // 0x2943f8: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2943f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2943fc:
    // 0x2943fc: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x2943fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_294400:
    // 0x294400: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x294400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294404:
    // 0x294404: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x294404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_294408:
    // 0x294408: 0xc600001c  lwc1        $f0, 0x1C($s0)
    ctx->pc = 0x294408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29440c:
    // 0x29440c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x29440cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_294410:
    // 0x294410: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x294410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_294414:
    // 0x294414: 0xac830020  sw          $v1, 0x20($a0)
    ctx->pc = 0x294414u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 3));
label_294418:
    // 0x294418: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x294418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_29441c:
    // 0x29441c: 0xac830024  sw          $v1, 0x24($a0)
    ctx->pc = 0x29441cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 3));
label_294420:
    // 0x294420: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x294420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_294424:
    // 0x294424: 0xac830028  sw          $v1, 0x28($a0)
    ctx->pc = 0x294424u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 3));
label_294428:
    // 0x294428: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x294428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_29442c:
    // 0x29442c: 0xac83002c  sw          $v1, 0x2C($a0)
    ctx->pc = 0x29442cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 3));
label_294430:
    // 0x294430: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x294430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_294434:
    // 0x294434: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x294434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294438:
    // 0x294438: 0x1a2000b3  blez        $s1, . + 4 + (0xB3 << 2)
label_29443c:
    if (ctx->pc == 0x29443Cu) {
        ctx->pc = 0x29443Cu;
            // 0x29443c: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->pc = 0x294440u;
        goto label_294440;
    }
    ctx->pc = 0x294438u;
    {
        const bool branch_taken_0x294438 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x29443Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294438u;
            // 0x29443c: 0x111840  sll         $v1, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294438) {
            ctx->pc = 0x294708u;
            goto label_294708;
        }
    }
    ctx->pc = 0x294440u;
label_294440:
    // 0x294440: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x294440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_294444:
    // 0x294444: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x294444u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_294448:
    // 0x294448: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x294448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_29444c:
    // 0x29444c: 0x4600080  bltz        $v1, . + 4 + (0x80 << 2)
label_294450:
    if (ctx->pc == 0x294450u) {
        ctx->pc = 0x294450u;
            // 0x294450: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294454u;
        goto label_294454;
    }
    ctx->pc = 0x29444Cu;
    {
        const bool branch_taken_0x29444c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x294450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29444Cu;
            // 0x294450: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29444c) {
            ctx->pc = 0x294650u;
            goto label_294650;
        }
    }
    ctx->pc = 0x294454u;
label_294454:
    // 0x294454: 0xc6a00060  lwc1        $f0, 0x60($s5)
    ctx->pc = 0x294454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_294458:
    // 0x294458: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x294458u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_29445c:
    // 0x29445c: 0x32040  sll         $a0, $v1, 1
    ctx->pc = 0x29445cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_294460:
    // 0x294460: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x294460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_294464:
    // 0x294464: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x294464u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_294468:
    // 0x294468: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x294468u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_29446c:
    // 0x29446c: 0xa44021  addu        $t0, $a1, $a0
    ctx->pc = 0x29446cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_294470:
    // 0x294470: 0xb03821  addu        $a3, $a1, $s0
    ctx->pc = 0x294470u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_294474:
    // 0x294474: 0x8ceb0028  lw          $t3, 0x28($a3)
    ctx->pc = 0x294474u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 40)));
label_294478:
    // 0x294478: 0x3c043dcc  lui         $a0, 0x3DCC
    ctx->pc = 0x294478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15820 << 16));
label_29447c:
    // 0x29447c: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x29447cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_294480:
    // 0x294480: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x294480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294484:
    // 0x294484: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x294484u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_294488:
    // 0x294488: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x294488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_29448c:
    // 0x29448c: 0x44845800  mtc1        $a0, $f11
    ctx->pc = 0x29448cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_294490:
    // 0x294490: 0xc4e30014  lwc1        $f3, 0x14($a3)
    ctx->pc = 0x294490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_294494:
    // 0x294494: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x294494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
label_294498:
    // 0x294498: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x294498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29449c:
    // 0x29449c: 0x81650018  lb          $a1, 0x18($t3)
    ctx->pc = 0x29449cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 24)));
label_2944a0:
    // 0x2944a0: 0xc4e10018  lwc1        $f1, 0x18($a3)
    ctx->pc = 0x2944a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2944a4:
    // 0x2944a4: 0xc4e4001c  lwc1        $f4, 0x1C($a3)
    ctx->pc = 0x2944a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2944a8:
    // 0x2944a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2944a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2944ac:
    // 0x2944ac: 0x0  nop
    ctx->pc = 0x2944acu;
    // NOP
label_2944b0:
    // 0x2944b0: 0xc50d0014  lwc1        $f13, 0x14($t0)
    ctx->pc = 0x2944b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2944b4:
    // 0x2944b4: 0xc50a0010  lwc1        $f10, 0x10($t0)
    ctx->pc = 0x2944b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2944b8:
    // 0x2944b8: 0x44804000  mtc1        $zero, $f8
    ctx->pc = 0x2944b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_2944bc:
    // 0x2944bc: 0xc5090018  lwc1        $f9, 0x18($t0)
    ctx->pc = 0x2944bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_2944c0:
    // 0x2944c0: 0xc50e001c  lwc1        $f14, 0x1C($t0)
    ctx->pc = 0x2944c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2944c4:
    // 0x2944c4: 0x460041c6  mov.s       $f7, $f8
    ctx->pc = 0x2944c4u;
    ctx->f[7] = FPU_MOV_S(ctx->f[8]);
label_2944c8:
    // 0x2944c8: 0x460d1b42  mul.s       $f13, $f3, $f13
    ctx->pc = 0x2944c8u;
    ctx->f[13] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
label_2944cc:
    // 0x2944cc: 0x460a1282  mul.s       $f10, $f2, $f10
    ctx->pc = 0x2944ccu;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[10]);
label_2944d0:
    // 0x2944d0: 0x460d5018  adda.s      $f10, $f13
    ctx->pc = 0x2944d0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[10], ctx->f[13]);
label_2944d4:
    // 0x2944d4: 0x46090a5c  madd.s      $f9, $f1, $f9
    ctx->pc = 0x2944d4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[9]));
label_2944d8:
    // 0x2944d8: 0x46090281  sub.s       $f10, $f0, $f9
    ctx->pc = 0x2944d8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
label_2944dc:
    // 0x2944dc: 0x460e2241  sub.s       $f9, $f4, $f14
    ctx->pc = 0x2944dcu;
    ctx->f[9] = FPU_SUB_S(ctx->f[4], ctx->f[14]);
label_2944e0:
    // 0x2944e0: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x2944e0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_2944e4:
    // 0x2944e4: 0x46094a42  mul.s       $f9, $f9, $f9
    ctx->pc = 0x2944e4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[9]);
label_2944e8:
    // 0x2944e8: 0x14a60004  bne         $a1, $a2, . + 4 + (0x4 << 2)
label_2944ec:
    if (ctx->pc == 0x2944ECu) {
        ctx->pc = 0x2944ECu;
            // 0x2944ec: 0x46004186  mov.s       $f6, $f8 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[8]);
        ctx->pc = 0x2944F0u;
        goto label_2944f0;
    }
    ctx->pc = 0x2944E8u;
    {
        const bool branch_taken_0x2944e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2944ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2944E8u;
            // 0x2944ec: 0x46004186  mov.s       $f6, $f8 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[8]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944e8) {
            ctx->pc = 0x2944FCu;
            goto label_2944fc;
        }
    }
    ctx->pc = 0x2944F0u;
label_2944f0:
    // 0x2944f0: 0x81640010  lb          $a0, 0x10($t3)
    ctx->pc = 0x2944f0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 11), 16)));
label_2944f4:
    // 0x2944f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2944f8:
    if (ctx->pc == 0x2944F8u) {
        ctx->pc = 0x2944F8u;
            // 0x2944f8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->pc = 0x2944FCu;
        goto label_2944fc;
    }
    ctx->pc = 0x2944F4u;
    {
        const bool branch_taken_0x2944f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2944F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2944F4u;
            // 0x2944f8: 0x1642021  addu        $a0, $t3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2944f4) {
            ctx->pc = 0x294500u;
            goto label_294500;
        }
    }
    ctx->pc = 0x2944FCu;
label_2944fc:
    // 0x2944fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2944fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294500:
    // 0x294500: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
label_294504:
    if (ctx->pc == 0x294504u) {
        ctx->pc = 0x294508u;
        goto label_294508;
    }
    ctx->pc = 0x294500u;
    {
        const bool branch_taken_0x294500 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294500) {
            ctx->pc = 0x294568u;
            goto label_294568;
        }
    }
    ctx->pc = 0x294508u;
label_294508:
    // 0x294508: 0xc4ef0000  lwc1        $f15, 0x0($a3)
    ctx->pc = 0x294508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_29450c:
    // 0x29450c: 0xc48e0100  lwc1        $f14, 0x100($a0)
    ctx->pc = 0x29450cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_294510:
    // 0x294510: 0xc4ed0004  lwc1        $f13, 0x4($a3)
    ctx->pc = 0x294510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_294514:
    // 0x294514: 0xc4880104  lwc1        $f8, 0x104($a0)
    ctx->pc = 0x294514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_294518:
    // 0x294518: 0xc4e70008  lwc1        $f7, 0x8($a3)
    ctx->pc = 0x294518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_29451c:
    // 0x29451c: 0xc4860108  lwc1        $f6, 0x108($a0)
    ctx->pc = 0x29451cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_294520:
    // 0x294520: 0xc4910194  lwc1        $f17, 0x194($a0)
    ctx->pc = 0x294520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_294524:
    // 0x294524: 0x460e7cc1  sub.s       $f19, $f15, $f14
    ctx->pc = 0x294524u;
    ctx->f[19] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
label_294528:
    // 0x294528: 0x46086a01  sub.s       $f8, $f13, $f8
    ctx->pc = 0x294528u;
    ctx->f[8] = FPU_SUB_S(ctx->f[13], ctx->f[8]);
label_29452c:
    // 0x29452c: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x29452cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_294530:
    // 0x294530: 0xc4920198  lwc1        $f18, 0x198($a0)
    ctx->pc = 0x294530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_294534:
    // 0x294534: 0x4607881a  mula.s      $f17, $f7
    ctx->pc = 0x294534u;
    ctx->f[31] = FPU_MUL_S(ctx->f[17], ctx->f[7]);
label_294538:
    // 0x294538: 0xc4900190  lwc1        $f16, 0x190($a0)
    ctx->pc = 0x294538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_29453c:
    // 0x29453c: 0xc48f0180  lwc1        $f15, 0x180($a0)
    ctx->pc = 0x29453cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_294540:
    // 0x294540: 0xc48e0184  lwc1        $f14, 0x184($a0)
    ctx->pc = 0x294540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_294544:
    // 0x294544: 0xc48d0188  lwc1        $f13, 0x188($a0)
    ctx->pc = 0x294544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_294548:
    // 0x294548: 0x4608919d  msub.s      $f6, $f18, $f8
    ctx->pc = 0x294548u;
    ctx->f[6] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[18], ctx->f[8]));
label_29454c:
    // 0x29454c: 0x4613901a  mula.s      $f18, $f19
    ctx->pc = 0x29454cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[18], ctx->f[19]);
label_294550:
    // 0x294550: 0x460781dd  msub.s      $f7, $f16, $f7
    ctx->pc = 0x294550u;
    ctx->f[7] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[16], ctx->f[7]));
label_294554:
    // 0x294554: 0x4608801a  mula.s      $f16, $f8
    ctx->pc = 0x294554u;
    ctx->f[31] = FPU_MUL_S(ctx->f[16], ctx->f[8]);
label_294558:
    // 0x294558: 0x46138a1d  msub.s      $f8, $f17, $f19
    ctx->pc = 0x294558u;
    ctx->f[8] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[17], ctx->f[19]));
label_29455c:
    // 0x29455c: 0x460f3180  add.s       $f6, $f6, $f15
    ctx->pc = 0x29455cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[15]);
label_294560:
    // 0x294560: 0x460e39c0  add.s       $f7, $f7, $f14
    ctx->pc = 0x294560u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[14]);
label_294564:
    // 0x294564: 0x460d4200  add.s       $f8, $f8, $f13
    ctx->pc = 0x294564u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[13]);
label_294568:
    // 0x294568: 0x8d0a0028  lw          $t2, 0x28($t0)
    ctx->pc = 0x294568u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 40)));
label_29456c:
    // 0x29456c: 0x44809000  mtc1        $zero, $f18
    ctx->pc = 0x29456cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_294570:
    // 0x294570: 0x0  nop
    ctx->pc = 0x294570u;
    // NOP
label_294574:
    // 0x294574: 0x46009406  mov.s       $f16, $f18
    ctx->pc = 0x294574u;
    ctx->f[16] = FPU_MOV_S(ctx->f[18]);
label_294578:
    // 0x294578: 0x81440018  lb          $a0, 0x18($t2)
    ctx->pc = 0x294578u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 24)));
label_29457c:
    // 0x29457c: 0x14860004  bne         $a0, $a2, . + 4 + (0x4 << 2)
label_294580:
    if (ctx->pc == 0x294580u) {
        ctx->pc = 0x294580u;
            // 0x294580: 0x46009446  mov.s       $f17, $f18 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[18]);
        ctx->pc = 0x294584u;
        goto label_294584;
    }
    ctx->pc = 0x29457Cu;
    {
        const bool branch_taken_0x29457c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x294580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29457Cu;
            // 0x294580: 0x46009446  mov.s       $f17, $f18 (Delay Slot)
        ctx->f[17] = FPU_MOV_S(ctx->f[18]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29457c) {
            ctx->pc = 0x294590u;
            goto label_294590;
        }
    }
    ctx->pc = 0x294584u;
label_294584:
    // 0x294584: 0x81440010  lb          $a0, 0x10($t2)
    ctx->pc = 0x294584u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 10), 16)));
label_294588:
    // 0x294588: 0x10000002  b           . + 4 + (0x2 << 2)
label_29458c:
    if (ctx->pc == 0x29458Cu) {
        ctx->pc = 0x29458Cu;
            // 0x29458c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->pc = 0x294590u;
        goto label_294590;
    }
    ctx->pc = 0x294588u;
    {
        const bool branch_taken_0x294588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294588u;
            // 0x29458c: 0x1442021  addu        $a0, $t2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294588) {
            ctx->pc = 0x294594u;
            goto label_294594;
        }
    }
    ctx->pc = 0x294590u;
label_294590:
    // 0x294590: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x294590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_294594:
    // 0x294594: 0x1080001a  beqz        $a0, . + 4 + (0x1A << 2)
label_294598:
    if (ctx->pc == 0x294598u) {
        ctx->pc = 0x29459Cu;
        goto label_29459c;
    }
    ctx->pc = 0x294594u;
    {
        const bool branch_taken_0x294594 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x294594) {
            ctx->pc = 0x294600u;
            goto label_294600;
        }
    }
    ctx->pc = 0x29459Cu;
label_29459c:
    // 0x29459c: 0xc50f0000  lwc1        $f15, 0x0($t0)
    ctx->pc = 0x29459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2945a0:
    // 0x2945a0: 0xc48e0100  lwc1        $f14, 0x100($a0)
    ctx->pc = 0x2945a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2945a4:
    // 0x2945a4: 0xc5120004  lwc1        $f18, 0x4($t0)
    ctx->pc = 0x2945a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2945a8:
    // 0x2945a8: 0xc48d0104  lwc1        $f13, 0x104($a0)
    ctx->pc = 0x2945a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2945ac:
    // 0x2945ac: 0xc5110008  lwc1        $f17, 0x8($t0)
    ctx->pc = 0x2945acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_2945b0:
    // 0x2945b0: 0xc4900108  lwc1        $f16, 0x108($a0)
    ctx->pc = 0x2945b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_2945b4:
    // 0x2945b4: 0xc4940194  lwc1        $f20, 0x194($a0)
    ctx->pc = 0x2945b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2945b8:
    // 0x2945b8: 0x460e7d81  sub.s       $f22, $f15, $f14
    ctx->pc = 0x2945b8u;
    ctx->f[22] = FPU_SUB_S(ctx->f[15], ctx->f[14]);
label_2945bc:
    // 0x2945bc: 0x460d9481  sub.s       $f18, $f18, $f13
    ctx->pc = 0x2945bcu;
    ctx->f[18] = FPU_SUB_S(ctx->f[18], ctx->f[13]);
label_2945c0:
    // 0x2945c0: 0x46108c01  sub.s       $f16, $f17, $f16
    ctx->pc = 0x2945c0u;
    ctx->f[16] = FPU_SUB_S(ctx->f[17], ctx->f[16]);
label_2945c4:
    // 0x2945c4: 0xc4950198  lwc1        $f21, 0x198($a0)
    ctx->pc = 0x2945c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2945c8:
    // 0x2945c8: 0x4610a01a  mula.s      $f20, $f16
    ctx->pc = 0x2945c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[20], ctx->f[16]);
label_2945cc:
    // 0x2945cc: 0xc4930190  lwc1        $f19, 0x190($a0)
    ctx->pc = 0x2945ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_2945d0:
    // 0x2945d0: 0xc48f0180  lwc1        $f15, 0x180($a0)
    ctx->pc = 0x2945d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_2945d4:
    // 0x2945d4: 0xc48e0184  lwc1        $f14, 0x184($a0)
    ctx->pc = 0x2945d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2945d8:
    // 0x2945d8: 0xc48d0188  lwc1        $f13, 0x188($a0)
    ctx->pc = 0x2945d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2945dc:
    // 0x2945dc: 0x4612ac5d  msub.s      $f17, $f21, $f18
    ctx->pc = 0x2945dcu;
    ctx->f[17] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[21], ctx->f[18]));
label_2945e0:
    // 0x2945e0: 0x4616a81a  mula.s      $f21, $f22
    ctx->pc = 0x2945e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[22]);
label_2945e4:
    // 0x2945e4: 0x46109c1d  msub.s      $f16, $f19, $f16
    ctx->pc = 0x2945e4u;
    ctx->f[16] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[19], ctx->f[16]));
label_2945e8:
    // 0x2945e8: 0x4612981a  mula.s      $f19, $f18
    ctx->pc = 0x2945e8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[19], ctx->f[18]);
label_2945ec:
    // 0x2945ec: 0x4616a49d  msub.s      $f18, $f20, $f22
    ctx->pc = 0x2945ecu;
    ctx->f[18] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[22]));
label_2945f0:
    // 0x2945f0: 0x460f8c40  add.s       $f17, $f17, $f15
    ctx->pc = 0x2945f0u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[15]);
label_2945f4:
    // 0x2945f4: 0x460e8400  add.s       $f16, $f16, $f14
    ctx->pc = 0x2945f4u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[14]);
label_2945f8:
    // 0x2945f8: 0x460d9480  add.s       $f18, $f18, $f13
    ctx->pc = 0x2945f8u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[13]);
label_2945fc:
    // 0x2945fc: 0x0  nop
    ctx->pc = 0x2945fcu;
    // NOP
label_294600:
    // 0x294600: 0x46113341  sub.s       $f13, $f6, $f17
    ctx->pc = 0x294600u;
    ctx->f[13] = FPU_SUB_S(ctx->f[6], ctx->f[17]);
label_294604:
    // 0x294604: 0x46103981  sub.s       $f6, $f7, $f16
    ctx->pc = 0x294604u;
    ctx->f[6] = FPU_SUB_S(ctx->f[7], ctx->f[16]);
label_294608:
    // 0x294608: 0x460d69c2  mul.s       $f7, $f13, $f13
    ctx->pc = 0x294608u;
    ctx->f[7] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_29460c:
    // 0x29460c: 0x46063182  mul.s       $f6, $f6, $f6
    ctx->pc = 0x29460cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
label_294610:
    // 0x294610: 0x46124201  sub.s       $f8, $f8, $f18
    ctx->pc = 0x294610u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[18]);
label_294614:
    // 0x294614: 0x46063818  adda.s      $f7, $f6
    ctx->pc = 0x294614u;
    ctx->f[31] = FPU_ADD_S(ctx->f[7], ctx->f[6]);
label_294618:
    // 0x294618: 0x4608419c  madd.s      $f6, $f8, $f8
    ctx->pc = 0x294618u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[8], ctx->f[8]));
label_29461c:
    // 0x29461c: 0x4606601a  mula.s      $f12, $f6
    ctx->pc = 0x29461cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
label_294620:
    // 0x294620: 0x460a599c  madd.s      $f6, $f11, $f10
    ctx->pc = 0x294620u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[11], ctx->f[10]));
label_294624:
    // 0x294624: 0x46064980  add.s       $f6, $f9, $f6
    ctx->pc = 0x294624u;
    ctx->f[6] = FPU_ADD_S(ctx->f[9], ctx->f[6]);
label_294628:
    // 0x294628: 0x460c3034  c.lt.s      $f6, $f12
    ctx->pc = 0x294628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_29462c:
    // 0x29462c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_294630:
    if (ctx->pc == 0x294630u) {
        ctx->pc = 0x294634u;
        goto label_294634;
    }
    ctx->pc = 0x29462Cu;
    {
        const bool branch_taken_0x29462c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x29462c) {
            ctx->pc = 0x294640u;
            goto label_294640;
        }
    }
    ctx->pc = 0x294634u;
label_294634:
    // 0x294634: 0x10000006  b           . + 4 + (0x6 << 2)
label_294638:
    if (ctx->pc == 0x294638u) {
        ctx->pc = 0x294638u;
            // 0x294638: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29463Cu;
        goto label_29463c;
    }
    ctx->pc = 0x294634u;
    {
        const bool branch_taken_0x294634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294634u;
            // 0x294638: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294634) {
            ctx->pc = 0x294650u;
            goto label_294650;
        }
    }
    ctx->pc = 0x29463Cu;
label_29463c:
    // 0x29463c: 0x0  nop
    ctx->pc = 0x29463cu;
    // NOP
label_294640:
    // 0x294640: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x294640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294644:
    // 0x294644: 0x461ff9a  bgez        $v1, . + 4 + (-0x66 << 2)
label_294648:
    if (ctx->pc == 0x294648u) {
        ctx->pc = 0x294648u;
            // 0x294648: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->pc = 0x29464Cu;
        goto label_29464c;
    }
    ctx->pc = 0x294644u;
    {
        const bool branch_taken_0x294644 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x294648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294644u;
            // 0x294648: 0x2508ffd0  addiu       $t0, $t0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294644) {
            ctx->pc = 0x2944B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2944b0;
        }
    }
    ctx->pc = 0x29464Cu;
label_29464c:
    // 0x29464c: 0x0  nop
    ctx->pc = 0x29464cu;
    // NOP
label_294650:
    // 0x294650: 0x91e3c  dsll32      $v1, $t1, 24
    ctx->pc = 0x294650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) << (32 + 24));
label_294654:
    // 0x294654: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x294654u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_294658:
    // 0x294658: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_29465c:
    if (ctx->pc == 0x29465Cu) {
        ctx->pc = 0x294660u;
        goto label_294660;
    }
    ctx->pc = 0x294658u;
    {
        const bool branch_taken_0x294658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x294658) {
            ctx->pc = 0x2946F8u;
            goto label_2946f8;
        }
    }
    ctx->pc = 0x294660u;
label_294660:
    // 0x294660: 0x8ea20074  lw          $v0, 0x74($s5)
    ctx->pc = 0x294660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_294664:
    // 0x294664: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x294664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_294668:
    // 0x294668: 0xc0a54a4  jal         func_295290
label_29466c:
    if (ctx->pc == 0x29466Cu) {
        ctx->pc = 0x29466Cu;
            // 0x29466c: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x294670u;
        goto label_294670;
    }
    ctx->pc = 0x294668u;
    SET_GPR_U32(ctx, 31, 0x294670u);
    ctx->pc = 0x29466Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294668u;
            // 0x29466c: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295290u;
    if (runtime->hasFunction(0x295290u)) {
        auto targetFn = runtime->lookupFunction(0x295290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294670u; }
        if (ctx->pc != 0x294670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295290_0x295290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294670u; }
        if (ctx->pc != 0x294670u) { return; }
    }
    ctx->pc = 0x294670u;
label_294670:
    // 0x294670: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x294670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_294674:
    // 0x294674: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x294674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_294678:
    // 0x294678: 0xaea30078  sw          $v1, 0x78($s5)
    ctx->pc = 0x294678u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 3));
label_29467c:
    // 0x29467c: 0x8ea40078  lw          $a0, 0x78($s5)
    ctx->pc = 0x29467cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_294680:
    // 0x294680: 0x8ea50074  lw          $a1, 0x74($s5)
    ctx->pc = 0x294680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_294684:
    // 0x294684: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x294684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_294688:
    // 0x294688: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x294688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29468c:
    // 0x29468c: 0xb03021  addu        $a2, $a1, $s0
    ctx->pc = 0x29468cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_294690:
    // 0x294690: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x294690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_294694:
    // 0x294694: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x294694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_294698:
    // 0x294698: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x294698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29469c:
    // 0x29469c: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x29469cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2946a0:
    // 0x2946a0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2946a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946a4:
    // 0x2946a4: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x2946a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2946a8:
    // 0x2946a8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2946a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946ac:
    // 0x2946ac: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2946acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2946b0:
    // 0x2946b0: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2946b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946b4:
    // 0x2946b4: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2946b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2946b8:
    // 0x2946b8: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2946b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946bc:
    // 0x2946bc: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x2946bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
label_2946c0:
    // 0x2946c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2946c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946c4:
    // 0x2946c4: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x2946c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_2946c8:
    // 0x2946c8: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2946c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946cc:
    // 0x2946cc: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x2946ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
label_2946d0:
    // 0x2946d0: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2946d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2946d4:
    // 0x2946d4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x2946d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_2946d8:
    // 0x2946d8: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2946d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_2946dc:
    // 0x2946dc: 0xacc30020  sw          $v1, 0x20($a2)
    ctx->pc = 0x2946dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 3));
label_2946e0:
    // 0x2946e0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2946e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_2946e4:
    // 0x2946e4: 0xacc30024  sw          $v1, 0x24($a2)
    ctx->pc = 0x2946e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 36), GPR_U32(ctx, 3));
label_2946e8:
    // 0x2946e8: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2946e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2946ec:
    // 0x2946ec: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x2946ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
label_2946f0:
    // 0x2946f0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x2946f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2946f4:
    // 0x2946f4: 0xacc3002c  sw          $v1, 0x2C($a2)
    ctx->pc = 0x2946f4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 44), GPR_U32(ctx, 3));
label_2946f8:
    // 0x2946f8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x2946f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_2946fc:
    // 0x2946fc: 0x1e20ff52  bgtz        $s1, . + 4 + (-0xAE << 2)
label_294700:
    if (ctx->pc == 0x294700u) {
        ctx->pc = 0x294700u;
            // 0x294700: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->pc = 0x294704u;
        goto label_294704;
    }
    ctx->pc = 0x2946FCu;
    {
        const bool branch_taken_0x2946fc = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x294700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2946FCu;
            // 0x294700: 0x2610ffd0  addiu       $s0, $s0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2946fc) {
            ctx->pc = 0x294448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294448;
        }
    }
    ctx->pc = 0x294704u;
label_294704:
    // 0x294704: 0x0  nop
    ctx->pc = 0x294704u;
    // NOP
label_294708:
    // 0x294708: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x294708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_29470c:
    // 0x29470c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x29470cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_294710:
    // 0x294710: 0x10200071  beqz        $at, . + 4 + (0x71 << 2)
label_294714:
    if (ctx->pc == 0x294714u) {
        ctx->pc = 0x294714u;
            // 0x294714: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294718u;
        goto label_294718;
    }
    ctx->pc = 0x294710u;
    {
        const bool branch_taken_0x294710 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294710u;
            // 0x294714: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294710) {
            ctx->pc = 0x2948D8u;
            goto label_2948d8;
        }
    }
    ctx->pc = 0x294718u;
label_294718:
    // 0x294718: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x294718u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29471c:
    // 0x29471c: 0x0  nop
    ctx->pc = 0x29471cu;
    // NOP
label_294720:
    // 0x294720: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x294720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_294724:
    // 0x294724: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x294724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_294728:
    // 0x294728: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x294728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_29472c:
    // 0x29472c: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x29472cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_294730:
    // 0x294730: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x294730u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_294734:
    // 0x294734: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_294738:
    if (ctx->pc == 0x294738u) {
        ctx->pc = 0x294738u;
            // 0x294738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29473Cu;
        goto label_29473c;
    }
    ctx->pc = 0x294734u;
    {
        const bool branch_taken_0x294734 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294734u;
            // 0x294738: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294734) {
            ctx->pc = 0x294744u;
            goto label_294744;
        }
    }
    ctx->pc = 0x29473Cu;
label_29473c:
    // 0x29473c: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x29473cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_294740:
    // 0x294740: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x294740u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_294744:
    // 0x294744: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_294748:
    if (ctx->pc == 0x294748u) {
        ctx->pc = 0x29474Cu;
        goto label_29474c;
    }
    ctx->pc = 0x294744u;
    {
        const bool branch_taken_0x294744 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x294744) {
            ctx->pc = 0x2947F0u;
            goto label_2947f0;
        }
    }
    ctx->pc = 0x29474Cu;
label_29474c:
    // 0x29474c: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x29474cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_294750:
    // 0x294750: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x294750u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294754:
    // 0x294754: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_294758:
    if (ctx->pc == 0x294758u) {
        ctx->pc = 0x294758u;
            // 0x294758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29475Cu;
        goto label_29475c;
    }
    ctx->pc = 0x294754u;
    {
        const bool branch_taken_0x294754 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294754u;
            // 0x294758: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294754) {
            ctx->pc = 0x294788u;
            goto label_294788;
        }
    }
    ctx->pc = 0x29475Cu;
label_29475c:
    // 0x29475c: 0x8ea5008c  lw          $a1, 0x8C($s5)
    ctx->pc = 0x29475cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_294760:
    // 0x294760: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_294764:
    // 0x294764: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
label_294768:
    if (ctx->pc == 0x294768u) {
        ctx->pc = 0x29476Cu;
        goto label_29476c;
    }
    ctx->pc = 0x294764u;
    {
        const bool branch_taken_0x294764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x294764) {
            ctx->pc = 0x294778u;
            goto label_294778;
        }
    }
    ctx->pc = 0x29476Cu;
label_29476c:
    // 0x29476c: 0x10000008  b           . + 4 + (0x8 << 2)
label_294770:
    if (ctx->pc == 0x294770u) {
        ctx->pc = 0x294774u;
        goto label_294774;
    }
    ctx->pc = 0x29476Cu;
    {
        const bool branch_taken_0x29476c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29476c) {
            ctx->pc = 0x294790u;
            goto label_294790;
        }
    }
    ctx->pc = 0x294774u;
label_294774:
    // 0x294774: 0x0  nop
    ctx->pc = 0x294774u;
    // NOP
label_294778:
    // 0x294778: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x294778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_29477c:
    // 0x29477c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x29477cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294780:
    // 0x294780: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_294784:
    if (ctx->pc == 0x294784u) {
        ctx->pc = 0x294784u;
            // 0x294784: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x294788u;
        goto label_294788;
    }
    ctx->pc = 0x294780u;
    {
        const bool branch_taken_0x294780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294780u;
            // 0x294784: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294780) {
            ctx->pc = 0x294760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294760;
        }
    }
    ctx->pc = 0x294788u;
label_294788:
    // 0x294788: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x294788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29478c:
    // 0x29478c: 0x0  nop
    ctx->pc = 0x29478cu;
    // NOP
label_294790:
    // 0x294790: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x294790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294794:
    // 0x294794: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
label_294798:
    if (ctx->pc == 0x294798u) {
        ctx->pc = 0x294798u;
            // 0x294798: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29479Cu;
        goto label_29479c;
    }
    ctx->pc = 0x294794u;
    {
        const bool branch_taken_0x294794 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x294798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294794u;
            // 0x294798: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294794) {
            ctx->pc = 0x2947F0u;
            goto label_2947f0;
        }
    }
    ctx->pc = 0x29479Cu;
label_29479c:
    // 0x29479c: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_2947a0:
    if (ctx->pc == 0x2947A0u) {
        ctx->pc = 0x2947A4u;
        goto label_2947a4;
    }
    ctx->pc = 0x29479Cu;
    {
        const bool branch_taken_0x29479c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x29479c) {
            ctx->pc = 0x2947A8u;
            goto label_2947a8;
        }
    }
    ctx->pc = 0x2947A4u;
label_2947a4:
    // 0x2947a4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2947a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_2947a8:
    // 0x2947a8: 0xc088af4  jal         func_222BD0
label_2947ac:
    if (ctx->pc == 0x2947ACu) {
        ctx->pc = 0x2947ACu;
            // 0x2947ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2947B0u;
        goto label_2947b0;
    }
    ctx->pc = 0x2947A8u;
    SET_GPR_U32(ctx, 31, 0x2947B0u);
    ctx->pc = 0x2947ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947A8u;
            // 0x2947ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222BD0u;
    if (runtime->hasFunction(0x222BD0u)) {
        auto targetFn = runtime->lookupFunction(0x222BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B0u; }
        if (ctx->pc != 0x2947B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222BD0_0x222bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947B0u; }
        if (ctx->pc != 0x2947B0u) { return; }
    }
    ctx->pc = 0x2947B0u;
label_2947b0:
    // 0x2947b0: 0x8ea30094  lw          $v1, 0x94($s5)
    ctx->pc = 0x2947b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 148)));
label_2947b4:
    // 0x2947b4: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x2947b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2947b8:
    // 0x2947b8: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x2947b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_2947bc:
    // 0x2947bc: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x2947bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_2947c0:
    // 0x2947c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_2947c4:
    if (ctx->pc == 0x2947C4u) {
        ctx->pc = 0x2947C4u;
            // 0x2947c4: 0x26a4008c  addiu       $a0, $s5, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
        ctx->pc = 0x2947C8u;
        goto label_2947c8;
    }
    ctx->pc = 0x2947C0u;
    {
        const bool branch_taken_0x2947c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2947C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2947C0u;
            // 0x2947c4: 0x26a4008c  addiu       $a0, $s5, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 140));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2947c0) {
            ctx->pc = 0x2947D0u;
            goto label_2947d0;
        }
    }
    ctx->pc = 0x2947C8u;
label_2947c8:
    // 0x2947c8: 0xc0a728c  jal         func_29CA30
label_2947cc:
    if (ctx->pc == 0x2947CCu) {
        ctx->pc = 0x2947CCu;
            // 0x2947cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2947D0u;
        goto label_2947d0;
    }
    ctx->pc = 0x2947C8u;
    SET_GPR_U32(ctx, 31, 0x2947D0u);
    ctx->pc = 0x2947CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2947C8u;
            // 0x2947cc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947D0u; }
        if (ctx->pc != 0x2947D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2947D0u; }
        if (ctx->pc != 0x2947D0u) { return; }
    }
    ctx->pc = 0x2947D0u;
label_2947d0:
    // 0x2947d0: 0x8ea40090  lw          $a0, 0x90($s5)
    ctx->pc = 0x2947d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
label_2947d4:
    // 0x2947d4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2947d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2947d8:
    // 0x2947d8: 0xaea30090  sw          $v1, 0x90($s5)
    ctx->pc = 0x2947d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 3));
label_2947dc:
    // 0x2947dc: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2947dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2947e0:
    // 0x2947e0: 0x8ea3008c  lw          $v1, 0x8C($s5)
    ctx->pc = 0x2947e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_2947e4:
    // 0x2947e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2947e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2947e8:
    // 0x2947e8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2947e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_2947ec:
    // 0x2947ec: 0x0  nop
    ctx->pc = 0x2947ecu;
    // NOP
label_2947f0:
    // 0x2947f0: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x2947f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_2947f4:
    // 0x2947f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2947f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2947f8:
    // 0x2947f8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2947f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2947fc:
    // 0x2947fc: 0x8c850028  lw          $a1, 0x28($a0)
    ctx->pc = 0x2947fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_294800:
    // 0x294800: 0x80a40018  lb          $a0, 0x18($a1)
    ctx->pc = 0x294800u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_294804:
    // 0x294804: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_294808:
    if (ctx->pc == 0x294808u) {
        ctx->pc = 0x294808u;
            // 0x294808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29480Cu;
        goto label_29480c;
    }
    ctx->pc = 0x294804u;
    {
        const bool branch_taken_0x294804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294804u;
            // 0x294808: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294804) {
            ctx->pc = 0x294814u;
            goto label_294814;
        }
    }
    ctx->pc = 0x29480Cu;
label_29480c:
    // 0x29480c: 0x80a30010  lb          $v1, 0x10($a1)
    ctx->pc = 0x29480cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_294810:
    // 0x294810: 0xa38821  addu        $s1, $a1, $v1
    ctx->pc = 0x294810u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_294814:
    // 0x294814: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_294818:
    if (ctx->pc == 0x294818u) {
        ctx->pc = 0x29481Cu;
        goto label_29481c;
    }
    ctx->pc = 0x294814u;
    {
        const bool branch_taken_0x294814 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x294814) {
            ctx->pc = 0x2948C0u;
            goto label_2948c0;
        }
    }
    ctx->pc = 0x29481Cu;
label_29481c:
    // 0x29481c: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x29481cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_294820:
    // 0x294820: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x294820u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294824:
    // 0x294824: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_294828:
    if (ctx->pc == 0x294828u) {
        ctx->pc = 0x294828u;
            // 0x294828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29482Cu;
        goto label_29482c;
    }
    ctx->pc = 0x294824u;
    {
        const bool branch_taken_0x294824 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294824u;
            // 0x294828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294824) {
            ctx->pc = 0x294858u;
            goto label_294858;
        }
    }
    ctx->pc = 0x29482Cu;
label_29482c:
    // 0x29482c: 0x8ea50098  lw          $a1, 0x98($s5)
    ctx->pc = 0x29482cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_294830:
    // 0x294830: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x294830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_294834:
    // 0x294834: 0x14710004  bne         $v1, $s1, . + 4 + (0x4 << 2)
label_294838:
    if (ctx->pc == 0x294838u) {
        ctx->pc = 0x29483Cu;
        goto label_29483c;
    }
    ctx->pc = 0x294834u;
    {
        const bool branch_taken_0x294834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x294834) {
            ctx->pc = 0x294848u;
            goto label_294848;
        }
    }
    ctx->pc = 0x29483Cu;
label_29483c:
    // 0x29483c: 0x10000008  b           . + 4 + (0x8 << 2)
label_294840:
    if (ctx->pc == 0x294840u) {
        ctx->pc = 0x294844u;
        goto label_294844;
    }
    ctx->pc = 0x29483Cu;
    {
        const bool branch_taken_0x29483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29483c) {
            ctx->pc = 0x294860u;
            goto label_294860;
        }
    }
    ctx->pc = 0x294844u;
label_294844:
    // 0x294844: 0x0  nop
    ctx->pc = 0x294844u;
    // NOP
label_294848:
    // 0x294848: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x294848u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_29484c:
    // 0x29484c: 0xc4182a  slt         $v1, $a2, $a0
    ctx->pc = 0x29484cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_294850:
    // 0x294850: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_294854:
    if (ctx->pc == 0x294854u) {
        ctx->pc = 0x294854u;
            // 0x294854: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x294858u;
        goto label_294858;
    }
    ctx->pc = 0x294850u;
    {
        const bool branch_taken_0x294850 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294850u;
            // 0x294854: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294850) {
            ctx->pc = 0x294830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294830;
        }
    }
    ctx->pc = 0x294858u;
label_294858:
    // 0x294858: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x294858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29485c:
    // 0x29485c: 0x0  nop
    ctx->pc = 0x29485cu;
    // NOP
label_294860:
    // 0x294860: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x294860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_294864:
    // 0x294864: 0x14c30016  bne         $a2, $v1, . + 4 + (0x16 << 2)
label_294868:
    if (ctx->pc == 0x294868u) {
        ctx->pc = 0x294868u;
            // 0x294868: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29486Cu;
        goto label_29486c;
    }
    ctx->pc = 0x294864u;
    {
        const bool branch_taken_0x294864 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x294868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294864u;
            // 0x294868: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294864) {
            ctx->pc = 0x2948C0u;
            goto label_2948c0;
        }
    }
    ctx->pc = 0x29486Cu;
label_29486c:
    // 0x29486c: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_294870:
    if (ctx->pc == 0x294870u) {
        ctx->pc = 0x294874u;
        goto label_294874;
    }
    ctx->pc = 0x29486Cu;
    {
        const bool branch_taken_0x29486c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x29486c) {
            ctx->pc = 0x294878u;
            goto label_294878;
        }
    }
    ctx->pc = 0x294874u;
label_294874:
    // 0x294874: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x294874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_294878:
    // 0x294878: 0xc08acdc  jal         func_22B370
label_29487c:
    if (ctx->pc == 0x29487Cu) {
        ctx->pc = 0x29487Cu;
            // 0x29487c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294880u;
        goto label_294880;
    }
    ctx->pc = 0x294878u;
    SET_GPR_U32(ctx, 31, 0x294880u);
    ctx->pc = 0x29487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294878u;
            // 0x29487c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B370u;
    if (runtime->hasFunction(0x22B370u)) {
        auto targetFn = runtime->lookupFunction(0x22B370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294880u; }
        if (ctx->pc != 0x294880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B370_0x22b370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294880u; }
        if (ctx->pc != 0x294880u) { return; }
    }
    ctx->pc = 0x294880u;
label_294880:
    // 0x294880: 0x8ea300a0  lw          $v1, 0xA0($s5)
    ctx->pc = 0x294880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 160)));
label_294884:
    // 0x294884: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x294884u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_294888:
    // 0x294888: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x294888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
label_29488c:
    // 0x29488c: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x29488cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_294890:
    // 0x294890: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
label_294894:
    if (ctx->pc == 0x294894u) {
        ctx->pc = 0x294894u;
            // 0x294894: 0x26a40098  addiu       $a0, $s5, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
        ctx->pc = 0x294898u;
        goto label_294898;
    }
    ctx->pc = 0x294890u;
    {
        const bool branch_taken_0x294890 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x294894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294890u;
            // 0x294894: 0x26a40098  addiu       $a0, $s5, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294890) {
            ctx->pc = 0x2948A0u;
            goto label_2948a0;
        }
    }
    ctx->pc = 0x294898u;
label_294898:
    // 0x294898: 0xc0a728c  jal         func_29CA30
label_29489c:
    if (ctx->pc == 0x29489Cu) {
        ctx->pc = 0x29489Cu;
            // 0x29489c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2948A0u;
        goto label_2948a0;
    }
    ctx->pc = 0x294898u;
    SET_GPR_U32(ctx, 31, 0x2948A0u);
    ctx->pc = 0x29489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294898u;
            // 0x29489c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948A0u; }
        if (ctx->pc != 0x2948A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2948A0u; }
        if (ctx->pc != 0x2948A0u) { return; }
    }
    ctx->pc = 0x2948A0u;
label_2948a0:
    // 0x2948a0: 0x8ea4009c  lw          $a0, 0x9C($s5)
    ctx->pc = 0x2948a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
label_2948a4:
    // 0x2948a4: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x2948a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2948a8:
    // 0x2948a8: 0xaea3009c  sw          $v1, 0x9C($s5)
    ctx->pc = 0x2948a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 3));
label_2948ac:
    // 0x2948ac: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x2948acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2948b0:
    // 0x2948b0: 0x8ea30098  lw          $v1, 0x98($s5)
    ctx->pc = 0x2948b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 152)));
label_2948b4:
    // 0x2948b4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2948b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2948b8:
    // 0x2948b8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x2948b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_2948bc:
    // 0x2948bc: 0x0  nop
    ctx->pc = 0x2948bcu;
    // NOP
label_2948c0:
    // 0x2948c0: 0x8ea30078  lw          $v1, 0x78($s5)
    ctx->pc = 0x2948c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 120)));
label_2948c4:
    // 0x2948c4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2948c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2948c8:
    // 0x2948c8: 0x243182a  slt         $v1, $s2, $v1
    ctx->pc = 0x2948c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2948cc:
    // 0x2948cc: 0x1460ff94  bnez        $v1, . + 4 + (-0x6C << 2)
label_2948d0:
    if (ctx->pc == 0x2948D0u) {
        ctx->pc = 0x2948D0u;
            // 0x2948d0: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x2948D4u;
        goto label_2948d4;
    }
    ctx->pc = 0x2948CCu;
    {
        const bool branch_taken_0x2948cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2948D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2948CCu;
            // 0x2948d0: 0x26100030  addiu       $s0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2948cc) {
            ctx->pc = 0x294720u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_294720;
        }
    }
    ctx->pc = 0x2948D4u;
label_2948d4:
    // 0x2948d4: 0x0  nop
    ctx->pc = 0x2948d4u;
    // NOP
label_2948d8:
    // 0x2948d8: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x2948d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_2948dc:
    // 0x2948dc: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2948dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2948e0:
    // 0x2948e0: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x2948e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_2948e4:
    // 0x2948e4: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x2948e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_2948e8:
    // 0x2948e8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x2948e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2948ec:
    // 0x2948ec: 0x14a30006  bne         $a1, $v1, . + 4 + (0x6 << 2)
label_2948f0:
    if (ctx->pc == 0x2948F0u) {
        ctx->pc = 0x2948F4u;
        goto label_2948f4;
    }
    ctx->pc = 0x2948ECu;
    {
        const bool branch_taken_0x2948ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x2948ec) {
            ctx->pc = 0x294908u;
            goto label_294908;
        }
    }
    ctx->pc = 0x2948F4u;
label_2948f4:
    // 0x2948f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2948f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2948f8:
    // 0x2948f8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2948f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2948fc:
    // 0x2948fc: 0x320f809  jalr        $t9
label_294900:
    if (ctx->pc == 0x294900u) {
        ctx->pc = 0x294904u;
        goto label_294904;
    }
    ctx->pc = 0x2948FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x294904u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x294904u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294904u; }
            if (ctx->pc != 0x294904u) { return; }
        }
        }
    }
    ctx->pc = 0x294904u;
label_294904:
    // 0x294904: 0x0  nop
    ctx->pc = 0x294904u;
    // NOP
label_294908:
    // 0x294908: 0x27a300b8  addiu       $v1, $sp, 0xB8
    ctx->pc = 0x294908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_29490c:
    // 0x29490c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29490cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_294910:
    // 0x294910: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x294910u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_294914:
    // 0x294914: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x294914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_294918:
    // 0x294918: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_29491c:
    if (ctx->pc == 0x29491Cu) {
        ctx->pc = 0x294920u;
        goto label_294920;
    }
    ctx->pc = 0x294918u;
    {
        const bool branch_taken_0x294918 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x294918) {
            ctx->pc = 0x294950u;
            goto label_294950;
        }
    }
    ctx->pc = 0x294920u;
label_294920:
    // 0x294920: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x294920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_294924:
    // 0x294924: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x294924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_294928:
    // 0x294928: 0x8c24ea40  lw          $a0, -0x15C0($at)
    ctx->pc = 0x294928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_29492c:
    // 0x29492c: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x29492cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_294930:
    // 0x294930: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x294930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_294934:
    // 0x294934: 0x218bc  dsll32      $v1, $v0, 2
    ctx->pc = 0x294934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 2));
label_294938:
    // 0x294938: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x294938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
label_29493c:
    // 0x29493c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x29493cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_294940:
    // 0x294940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_294944:
    // 0x294944: 0xc0a7ab4  jal         func_29EAD0
label_294948:
    if (ctx->pc == 0x294948u) {
        ctx->pc = 0x294948u;
            // 0x294948: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x29494Cu;
        goto label_29494c;
    }
    ctx->pc = 0x294944u;
    SET_GPR_U32(ctx, 31, 0x29494Cu);
    ctx->pc = 0x294948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294944u;
            // 0x294948: 0x23100  sll         $a2, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29494Cu; }
        if (ctx->pc != 0x29494Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29494Cu; }
        if (ctx->pc != 0x29494Cu) { return; }
    }
    ctx->pc = 0x29494Cu;
label_29494c:
    // 0x29494c: 0x0  nop
    ctx->pc = 0x29494cu;
    // NOP
label_294950:
    // 0x294950: 0x10000019  b           . + 4 + (0x19 << 2)
label_294954:
    if (ctx->pc == 0x294954u) {
        ctx->pc = 0x294958u;
        goto label_294958;
    }
    ctx->pc = 0x294950u;
    {
        const bool branch_taken_0x294950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x294950) {
            ctx->pc = 0x2949B8u;
            goto label_2949b8;
        }
    }
    ctx->pc = 0x294958u;
label_294958:
    // 0x294958: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x294958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29495c:
    // 0x29495c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x29495cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_294960:
    // 0x294960: 0x1020fd9b  beqz        $at, . + 4 + (-0x265 << 2)
label_294964:
    if (ctx->pc == 0x294964u) {
        ctx->pc = 0x294964u;
            // 0x294964: 0x3c0a3f80  lui         $t2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x294968u;
        goto label_294968;
    }
    ctx->pc = 0x294960u;
    {
        const bool branch_taken_0x294960 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x294964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294960u;
            // 0x294964: 0x3c0a3f80  lui         $t2, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294960) {
            ctx->pc = 0x293FD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293fd0;
        }
    }
    ctx->pc = 0x294968u;
label_294968:
    // 0x294968: 0x8e660028  lw          $a2, 0x28($s3)
    ctx->pc = 0x294968u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_29496c:
    // 0x29496c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x29496cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_294970:
    // 0x294970: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x294970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_294974:
    // 0x294974: 0x26670010  addiu       $a3, $s3, 0x10
    ctx->pc = 0x294974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_294978:
    // 0x294978: 0x2664001c  addiu       $a0, $s3, 0x1C
    ctx->pc = 0x294978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_29497c:
    // 0x29497c: 0x3c0a3dcc  lui         $t2, 0x3DCC
    ctx->pc = 0x29497cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15820 << 16));
label_294980:
    // 0x294980: 0x354bcccd  ori         $t3, $t2, 0xCCCD
    ctx->pc = 0x294980u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)52429);
label_294984:
    // 0x294984: 0x3c0a4120  lui         $t2, 0x4120
    ctx->pc = 0x294984u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)16672 << 16));
label_294988:
    // 0x294988: 0x448b4000  mtc1        $t3, $f8
    ctx->pc = 0x294988u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_29498c:
    // 0x29498c: 0x448a3800  mtc1        $t2, $f7
    ctx->pc = 0x29498cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_294990:
    // 0x294990: 0x1000fd8b  b           . + 4 + (-0x275 << 2)
label_294994:
    if (ctx->pc == 0x294994u) {
        ctx->pc = 0x294994u;
            // 0x294994: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x294998u;
        goto label_294998;
    }
    ctx->pc = 0x294990u;
    {
        const bool branch_taken_0x294990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294990u;
            // 0x294994: 0x240c0001  addiu       $t4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294990) {
            ctx->pc = 0x293FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293fc0;
        }
    }
    ctx->pc = 0x294998u;
label_294998:
    // 0x294998: 0x27be00b4  addiu       $fp, $sp, 0xB4
    ctx->pc = 0x294998u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
label_29499c:
    // 0x29499c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x29499cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2949a0:
    // 0x2949a0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2949a0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2949a4:
    // 0x2949a4: 0x1020fd0c  beqz        $at, . + 4 + (-0x2F4 << 2)
label_2949a8:
    if (ctx->pc == 0x2949A8u) {
        ctx->pc = 0x2949A8u;
            // 0x2949a8: 0x26080010  addiu       $t0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x2949ACu;
        goto label_2949ac;
    }
    ctx->pc = 0x2949A4u;
    {
        const bool branch_taken_0x2949a4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2949A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2949A4u;
            // 0x2949a8: 0x26080010  addiu       $t0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949a4) {
            ctx->pc = 0x293DD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293dd8;
        }
    }
    ctx->pc = 0x2949ACu;
label_2949ac:
    // 0x2949ac: 0x1000fd06  b           . + 4 + (-0x2FA << 2)
label_2949b0:
    if (ctx->pc == 0x2949B0u) {
        ctx->pc = 0x2949B0u;
            // 0x2949b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2949B4u;
        goto label_2949b4;
    }
    ctx->pc = 0x2949ACu;
    {
        const bool branch_taken_0x2949ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2949B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2949ACu;
            // 0x2949b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2949ac) {
            ctx->pc = 0x293DC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293dc8;
        }
    }
    ctx->pc = 0x2949B4u;
label_2949b4:
    // 0x2949b4: 0x0  nop
    ctx->pc = 0x2949b4u;
    // NOP
label_2949b8:
    // 0x2949b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2949b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2949bc:
    // 0x2949bc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2949bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2949c0:
    // 0x2949c0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2949c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2949c4:
    // 0x2949c4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2949c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2949c8:
    // 0x2949c8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2949c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2949cc:
    // 0x2949cc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2949ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2949d0:
    // 0x2949d0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2949d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2949d4:
    // 0x2949d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2949d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2949d8:
    // 0x2949d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2949d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2949dc:
    // 0x2949dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2949dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2949e0:
    // 0x2949e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2949e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2949e4:
    // 0x2949e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2949e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2949e8:
    // 0x2949e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2949e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2949ec:
    // 0x2949ec: 0x3e00008  jr          $ra
label_2949f0:
    if (ctx->pc == 0x2949F0u) {
        ctx->pc = 0x2949F0u;
            // 0x2949f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2949F4u;
        goto label_2949f4;
    }
    ctx->pc = 0x2949ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2949F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2949ECu;
            // 0x2949f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2949F4u;
label_2949f4:
    // 0x2949f4: 0x0  nop
    ctx->pc = 0x2949f4u;
    // NOP
label_2949f8:
    // 0x2949f8: 0x0  nop
    ctx->pc = 0x2949f8u;
    // NOP
label_2949fc:
    // 0x2949fc: 0x0  nop
    ctx->pc = 0x2949fcu;
    // NOP
}
