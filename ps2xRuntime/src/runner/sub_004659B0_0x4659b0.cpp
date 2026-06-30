#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004659B0
// Address: 0x4659b0 - 0x466240
void sub_004659B0_0x4659b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004659B0_0x4659b0");
#endif

    switch (ctx->pc) {
        case 0x4659b0u: goto label_4659b0;
        case 0x4659b4u: goto label_4659b4;
        case 0x4659b8u: goto label_4659b8;
        case 0x4659bcu: goto label_4659bc;
        case 0x4659c0u: goto label_4659c0;
        case 0x4659c4u: goto label_4659c4;
        case 0x4659c8u: goto label_4659c8;
        case 0x4659ccu: goto label_4659cc;
        case 0x4659d0u: goto label_4659d0;
        case 0x4659d4u: goto label_4659d4;
        case 0x4659d8u: goto label_4659d8;
        case 0x4659dcu: goto label_4659dc;
        case 0x4659e0u: goto label_4659e0;
        case 0x4659e4u: goto label_4659e4;
        case 0x4659e8u: goto label_4659e8;
        case 0x4659ecu: goto label_4659ec;
        case 0x4659f0u: goto label_4659f0;
        case 0x4659f4u: goto label_4659f4;
        case 0x4659f8u: goto label_4659f8;
        case 0x4659fcu: goto label_4659fc;
        case 0x465a00u: goto label_465a00;
        case 0x465a04u: goto label_465a04;
        case 0x465a08u: goto label_465a08;
        case 0x465a0cu: goto label_465a0c;
        case 0x465a10u: goto label_465a10;
        case 0x465a14u: goto label_465a14;
        case 0x465a18u: goto label_465a18;
        case 0x465a1cu: goto label_465a1c;
        case 0x465a20u: goto label_465a20;
        case 0x465a24u: goto label_465a24;
        case 0x465a28u: goto label_465a28;
        case 0x465a2cu: goto label_465a2c;
        case 0x465a30u: goto label_465a30;
        case 0x465a34u: goto label_465a34;
        case 0x465a38u: goto label_465a38;
        case 0x465a3cu: goto label_465a3c;
        case 0x465a40u: goto label_465a40;
        case 0x465a44u: goto label_465a44;
        case 0x465a48u: goto label_465a48;
        case 0x465a4cu: goto label_465a4c;
        case 0x465a50u: goto label_465a50;
        case 0x465a54u: goto label_465a54;
        case 0x465a58u: goto label_465a58;
        case 0x465a5cu: goto label_465a5c;
        case 0x465a60u: goto label_465a60;
        case 0x465a64u: goto label_465a64;
        case 0x465a68u: goto label_465a68;
        case 0x465a6cu: goto label_465a6c;
        case 0x465a70u: goto label_465a70;
        case 0x465a74u: goto label_465a74;
        case 0x465a78u: goto label_465a78;
        case 0x465a7cu: goto label_465a7c;
        case 0x465a80u: goto label_465a80;
        case 0x465a84u: goto label_465a84;
        case 0x465a88u: goto label_465a88;
        case 0x465a8cu: goto label_465a8c;
        case 0x465a90u: goto label_465a90;
        case 0x465a94u: goto label_465a94;
        case 0x465a98u: goto label_465a98;
        case 0x465a9cu: goto label_465a9c;
        case 0x465aa0u: goto label_465aa0;
        case 0x465aa4u: goto label_465aa4;
        case 0x465aa8u: goto label_465aa8;
        case 0x465aacu: goto label_465aac;
        case 0x465ab0u: goto label_465ab0;
        case 0x465ab4u: goto label_465ab4;
        case 0x465ab8u: goto label_465ab8;
        case 0x465abcu: goto label_465abc;
        case 0x465ac0u: goto label_465ac0;
        case 0x465ac4u: goto label_465ac4;
        case 0x465ac8u: goto label_465ac8;
        case 0x465accu: goto label_465acc;
        case 0x465ad0u: goto label_465ad0;
        case 0x465ad4u: goto label_465ad4;
        case 0x465ad8u: goto label_465ad8;
        case 0x465adcu: goto label_465adc;
        case 0x465ae0u: goto label_465ae0;
        case 0x465ae4u: goto label_465ae4;
        case 0x465ae8u: goto label_465ae8;
        case 0x465aecu: goto label_465aec;
        case 0x465af0u: goto label_465af0;
        case 0x465af4u: goto label_465af4;
        case 0x465af8u: goto label_465af8;
        case 0x465afcu: goto label_465afc;
        case 0x465b00u: goto label_465b00;
        case 0x465b04u: goto label_465b04;
        case 0x465b08u: goto label_465b08;
        case 0x465b0cu: goto label_465b0c;
        case 0x465b10u: goto label_465b10;
        case 0x465b14u: goto label_465b14;
        case 0x465b18u: goto label_465b18;
        case 0x465b1cu: goto label_465b1c;
        case 0x465b20u: goto label_465b20;
        case 0x465b24u: goto label_465b24;
        case 0x465b28u: goto label_465b28;
        case 0x465b2cu: goto label_465b2c;
        case 0x465b30u: goto label_465b30;
        case 0x465b34u: goto label_465b34;
        case 0x465b38u: goto label_465b38;
        case 0x465b3cu: goto label_465b3c;
        case 0x465b40u: goto label_465b40;
        case 0x465b44u: goto label_465b44;
        case 0x465b48u: goto label_465b48;
        case 0x465b4cu: goto label_465b4c;
        case 0x465b50u: goto label_465b50;
        case 0x465b54u: goto label_465b54;
        case 0x465b58u: goto label_465b58;
        case 0x465b5cu: goto label_465b5c;
        case 0x465b60u: goto label_465b60;
        case 0x465b64u: goto label_465b64;
        case 0x465b68u: goto label_465b68;
        case 0x465b6cu: goto label_465b6c;
        case 0x465b70u: goto label_465b70;
        case 0x465b74u: goto label_465b74;
        case 0x465b78u: goto label_465b78;
        case 0x465b7cu: goto label_465b7c;
        case 0x465b80u: goto label_465b80;
        case 0x465b84u: goto label_465b84;
        case 0x465b88u: goto label_465b88;
        case 0x465b8cu: goto label_465b8c;
        case 0x465b90u: goto label_465b90;
        case 0x465b94u: goto label_465b94;
        case 0x465b98u: goto label_465b98;
        case 0x465b9cu: goto label_465b9c;
        case 0x465ba0u: goto label_465ba0;
        case 0x465ba4u: goto label_465ba4;
        case 0x465ba8u: goto label_465ba8;
        case 0x465bacu: goto label_465bac;
        case 0x465bb0u: goto label_465bb0;
        case 0x465bb4u: goto label_465bb4;
        case 0x465bb8u: goto label_465bb8;
        case 0x465bbcu: goto label_465bbc;
        case 0x465bc0u: goto label_465bc0;
        case 0x465bc4u: goto label_465bc4;
        case 0x465bc8u: goto label_465bc8;
        case 0x465bccu: goto label_465bcc;
        case 0x465bd0u: goto label_465bd0;
        case 0x465bd4u: goto label_465bd4;
        case 0x465bd8u: goto label_465bd8;
        case 0x465bdcu: goto label_465bdc;
        case 0x465be0u: goto label_465be0;
        case 0x465be4u: goto label_465be4;
        case 0x465be8u: goto label_465be8;
        case 0x465becu: goto label_465bec;
        case 0x465bf0u: goto label_465bf0;
        case 0x465bf4u: goto label_465bf4;
        case 0x465bf8u: goto label_465bf8;
        case 0x465bfcu: goto label_465bfc;
        case 0x465c00u: goto label_465c00;
        case 0x465c04u: goto label_465c04;
        case 0x465c08u: goto label_465c08;
        case 0x465c0cu: goto label_465c0c;
        case 0x465c10u: goto label_465c10;
        case 0x465c14u: goto label_465c14;
        case 0x465c18u: goto label_465c18;
        case 0x465c1cu: goto label_465c1c;
        case 0x465c20u: goto label_465c20;
        case 0x465c24u: goto label_465c24;
        case 0x465c28u: goto label_465c28;
        case 0x465c2cu: goto label_465c2c;
        case 0x465c30u: goto label_465c30;
        case 0x465c34u: goto label_465c34;
        case 0x465c38u: goto label_465c38;
        case 0x465c3cu: goto label_465c3c;
        case 0x465c40u: goto label_465c40;
        case 0x465c44u: goto label_465c44;
        case 0x465c48u: goto label_465c48;
        case 0x465c4cu: goto label_465c4c;
        case 0x465c50u: goto label_465c50;
        case 0x465c54u: goto label_465c54;
        case 0x465c58u: goto label_465c58;
        case 0x465c5cu: goto label_465c5c;
        case 0x465c60u: goto label_465c60;
        case 0x465c64u: goto label_465c64;
        case 0x465c68u: goto label_465c68;
        case 0x465c6cu: goto label_465c6c;
        case 0x465c70u: goto label_465c70;
        case 0x465c74u: goto label_465c74;
        case 0x465c78u: goto label_465c78;
        case 0x465c7cu: goto label_465c7c;
        case 0x465c80u: goto label_465c80;
        case 0x465c84u: goto label_465c84;
        case 0x465c88u: goto label_465c88;
        case 0x465c8cu: goto label_465c8c;
        case 0x465c90u: goto label_465c90;
        case 0x465c94u: goto label_465c94;
        case 0x465c98u: goto label_465c98;
        case 0x465c9cu: goto label_465c9c;
        case 0x465ca0u: goto label_465ca0;
        case 0x465ca4u: goto label_465ca4;
        case 0x465ca8u: goto label_465ca8;
        case 0x465cacu: goto label_465cac;
        case 0x465cb0u: goto label_465cb0;
        case 0x465cb4u: goto label_465cb4;
        case 0x465cb8u: goto label_465cb8;
        case 0x465cbcu: goto label_465cbc;
        case 0x465cc0u: goto label_465cc0;
        case 0x465cc4u: goto label_465cc4;
        case 0x465cc8u: goto label_465cc8;
        case 0x465cccu: goto label_465ccc;
        case 0x465cd0u: goto label_465cd0;
        case 0x465cd4u: goto label_465cd4;
        case 0x465cd8u: goto label_465cd8;
        case 0x465cdcu: goto label_465cdc;
        case 0x465ce0u: goto label_465ce0;
        case 0x465ce4u: goto label_465ce4;
        case 0x465ce8u: goto label_465ce8;
        case 0x465cecu: goto label_465cec;
        case 0x465cf0u: goto label_465cf0;
        case 0x465cf4u: goto label_465cf4;
        case 0x465cf8u: goto label_465cf8;
        case 0x465cfcu: goto label_465cfc;
        case 0x465d00u: goto label_465d00;
        case 0x465d04u: goto label_465d04;
        case 0x465d08u: goto label_465d08;
        case 0x465d0cu: goto label_465d0c;
        case 0x465d10u: goto label_465d10;
        case 0x465d14u: goto label_465d14;
        case 0x465d18u: goto label_465d18;
        case 0x465d1cu: goto label_465d1c;
        case 0x465d20u: goto label_465d20;
        case 0x465d24u: goto label_465d24;
        case 0x465d28u: goto label_465d28;
        case 0x465d2cu: goto label_465d2c;
        case 0x465d30u: goto label_465d30;
        case 0x465d34u: goto label_465d34;
        case 0x465d38u: goto label_465d38;
        case 0x465d3cu: goto label_465d3c;
        case 0x465d40u: goto label_465d40;
        case 0x465d44u: goto label_465d44;
        case 0x465d48u: goto label_465d48;
        case 0x465d4cu: goto label_465d4c;
        case 0x465d50u: goto label_465d50;
        case 0x465d54u: goto label_465d54;
        case 0x465d58u: goto label_465d58;
        case 0x465d5cu: goto label_465d5c;
        case 0x465d60u: goto label_465d60;
        case 0x465d64u: goto label_465d64;
        case 0x465d68u: goto label_465d68;
        case 0x465d6cu: goto label_465d6c;
        case 0x465d70u: goto label_465d70;
        case 0x465d74u: goto label_465d74;
        case 0x465d78u: goto label_465d78;
        case 0x465d7cu: goto label_465d7c;
        case 0x465d80u: goto label_465d80;
        case 0x465d84u: goto label_465d84;
        case 0x465d88u: goto label_465d88;
        case 0x465d8cu: goto label_465d8c;
        case 0x465d90u: goto label_465d90;
        case 0x465d94u: goto label_465d94;
        case 0x465d98u: goto label_465d98;
        case 0x465d9cu: goto label_465d9c;
        case 0x465da0u: goto label_465da0;
        case 0x465da4u: goto label_465da4;
        case 0x465da8u: goto label_465da8;
        case 0x465dacu: goto label_465dac;
        case 0x465db0u: goto label_465db0;
        case 0x465db4u: goto label_465db4;
        case 0x465db8u: goto label_465db8;
        case 0x465dbcu: goto label_465dbc;
        case 0x465dc0u: goto label_465dc0;
        case 0x465dc4u: goto label_465dc4;
        case 0x465dc8u: goto label_465dc8;
        case 0x465dccu: goto label_465dcc;
        case 0x465dd0u: goto label_465dd0;
        case 0x465dd4u: goto label_465dd4;
        case 0x465dd8u: goto label_465dd8;
        case 0x465ddcu: goto label_465ddc;
        case 0x465de0u: goto label_465de0;
        case 0x465de4u: goto label_465de4;
        case 0x465de8u: goto label_465de8;
        case 0x465decu: goto label_465dec;
        case 0x465df0u: goto label_465df0;
        case 0x465df4u: goto label_465df4;
        case 0x465df8u: goto label_465df8;
        case 0x465dfcu: goto label_465dfc;
        case 0x465e00u: goto label_465e00;
        case 0x465e04u: goto label_465e04;
        case 0x465e08u: goto label_465e08;
        case 0x465e0cu: goto label_465e0c;
        case 0x465e10u: goto label_465e10;
        case 0x465e14u: goto label_465e14;
        case 0x465e18u: goto label_465e18;
        case 0x465e1cu: goto label_465e1c;
        case 0x465e20u: goto label_465e20;
        case 0x465e24u: goto label_465e24;
        case 0x465e28u: goto label_465e28;
        case 0x465e2cu: goto label_465e2c;
        case 0x465e30u: goto label_465e30;
        case 0x465e34u: goto label_465e34;
        case 0x465e38u: goto label_465e38;
        case 0x465e3cu: goto label_465e3c;
        case 0x465e40u: goto label_465e40;
        case 0x465e44u: goto label_465e44;
        case 0x465e48u: goto label_465e48;
        case 0x465e4cu: goto label_465e4c;
        case 0x465e50u: goto label_465e50;
        case 0x465e54u: goto label_465e54;
        case 0x465e58u: goto label_465e58;
        case 0x465e5cu: goto label_465e5c;
        case 0x465e60u: goto label_465e60;
        case 0x465e64u: goto label_465e64;
        case 0x465e68u: goto label_465e68;
        case 0x465e6cu: goto label_465e6c;
        case 0x465e70u: goto label_465e70;
        case 0x465e74u: goto label_465e74;
        case 0x465e78u: goto label_465e78;
        case 0x465e7cu: goto label_465e7c;
        case 0x465e80u: goto label_465e80;
        case 0x465e84u: goto label_465e84;
        case 0x465e88u: goto label_465e88;
        case 0x465e8cu: goto label_465e8c;
        case 0x465e90u: goto label_465e90;
        case 0x465e94u: goto label_465e94;
        case 0x465e98u: goto label_465e98;
        case 0x465e9cu: goto label_465e9c;
        case 0x465ea0u: goto label_465ea0;
        case 0x465ea4u: goto label_465ea4;
        case 0x465ea8u: goto label_465ea8;
        case 0x465eacu: goto label_465eac;
        case 0x465eb0u: goto label_465eb0;
        case 0x465eb4u: goto label_465eb4;
        case 0x465eb8u: goto label_465eb8;
        case 0x465ebcu: goto label_465ebc;
        case 0x465ec0u: goto label_465ec0;
        case 0x465ec4u: goto label_465ec4;
        case 0x465ec8u: goto label_465ec8;
        case 0x465eccu: goto label_465ecc;
        case 0x465ed0u: goto label_465ed0;
        case 0x465ed4u: goto label_465ed4;
        case 0x465ed8u: goto label_465ed8;
        case 0x465edcu: goto label_465edc;
        case 0x465ee0u: goto label_465ee0;
        case 0x465ee4u: goto label_465ee4;
        case 0x465ee8u: goto label_465ee8;
        case 0x465eecu: goto label_465eec;
        case 0x465ef0u: goto label_465ef0;
        case 0x465ef4u: goto label_465ef4;
        case 0x465ef8u: goto label_465ef8;
        case 0x465efcu: goto label_465efc;
        case 0x465f00u: goto label_465f00;
        case 0x465f04u: goto label_465f04;
        case 0x465f08u: goto label_465f08;
        case 0x465f0cu: goto label_465f0c;
        case 0x465f10u: goto label_465f10;
        case 0x465f14u: goto label_465f14;
        case 0x465f18u: goto label_465f18;
        case 0x465f1cu: goto label_465f1c;
        case 0x465f20u: goto label_465f20;
        case 0x465f24u: goto label_465f24;
        case 0x465f28u: goto label_465f28;
        case 0x465f2cu: goto label_465f2c;
        case 0x465f30u: goto label_465f30;
        case 0x465f34u: goto label_465f34;
        case 0x465f38u: goto label_465f38;
        case 0x465f3cu: goto label_465f3c;
        case 0x465f40u: goto label_465f40;
        case 0x465f44u: goto label_465f44;
        case 0x465f48u: goto label_465f48;
        case 0x465f4cu: goto label_465f4c;
        case 0x465f50u: goto label_465f50;
        case 0x465f54u: goto label_465f54;
        case 0x465f58u: goto label_465f58;
        case 0x465f5cu: goto label_465f5c;
        case 0x465f60u: goto label_465f60;
        case 0x465f64u: goto label_465f64;
        case 0x465f68u: goto label_465f68;
        case 0x465f6cu: goto label_465f6c;
        case 0x465f70u: goto label_465f70;
        case 0x465f74u: goto label_465f74;
        case 0x465f78u: goto label_465f78;
        case 0x465f7cu: goto label_465f7c;
        case 0x465f80u: goto label_465f80;
        case 0x465f84u: goto label_465f84;
        case 0x465f88u: goto label_465f88;
        case 0x465f8cu: goto label_465f8c;
        case 0x465f90u: goto label_465f90;
        case 0x465f94u: goto label_465f94;
        case 0x465f98u: goto label_465f98;
        case 0x465f9cu: goto label_465f9c;
        case 0x465fa0u: goto label_465fa0;
        case 0x465fa4u: goto label_465fa4;
        case 0x465fa8u: goto label_465fa8;
        case 0x465facu: goto label_465fac;
        case 0x465fb0u: goto label_465fb0;
        case 0x465fb4u: goto label_465fb4;
        case 0x465fb8u: goto label_465fb8;
        case 0x465fbcu: goto label_465fbc;
        case 0x465fc0u: goto label_465fc0;
        case 0x465fc4u: goto label_465fc4;
        case 0x465fc8u: goto label_465fc8;
        case 0x465fccu: goto label_465fcc;
        case 0x465fd0u: goto label_465fd0;
        case 0x465fd4u: goto label_465fd4;
        case 0x465fd8u: goto label_465fd8;
        case 0x465fdcu: goto label_465fdc;
        case 0x465fe0u: goto label_465fe0;
        case 0x465fe4u: goto label_465fe4;
        case 0x465fe8u: goto label_465fe8;
        case 0x465fecu: goto label_465fec;
        case 0x465ff0u: goto label_465ff0;
        case 0x465ff4u: goto label_465ff4;
        case 0x465ff8u: goto label_465ff8;
        case 0x465ffcu: goto label_465ffc;
        case 0x466000u: goto label_466000;
        case 0x466004u: goto label_466004;
        case 0x466008u: goto label_466008;
        case 0x46600cu: goto label_46600c;
        case 0x466010u: goto label_466010;
        case 0x466014u: goto label_466014;
        case 0x466018u: goto label_466018;
        case 0x46601cu: goto label_46601c;
        case 0x466020u: goto label_466020;
        case 0x466024u: goto label_466024;
        case 0x466028u: goto label_466028;
        case 0x46602cu: goto label_46602c;
        case 0x466030u: goto label_466030;
        case 0x466034u: goto label_466034;
        case 0x466038u: goto label_466038;
        case 0x46603cu: goto label_46603c;
        case 0x466040u: goto label_466040;
        case 0x466044u: goto label_466044;
        case 0x466048u: goto label_466048;
        case 0x46604cu: goto label_46604c;
        case 0x466050u: goto label_466050;
        case 0x466054u: goto label_466054;
        case 0x466058u: goto label_466058;
        case 0x46605cu: goto label_46605c;
        case 0x466060u: goto label_466060;
        case 0x466064u: goto label_466064;
        case 0x466068u: goto label_466068;
        case 0x46606cu: goto label_46606c;
        case 0x466070u: goto label_466070;
        case 0x466074u: goto label_466074;
        case 0x466078u: goto label_466078;
        case 0x46607cu: goto label_46607c;
        case 0x466080u: goto label_466080;
        case 0x466084u: goto label_466084;
        case 0x466088u: goto label_466088;
        case 0x46608cu: goto label_46608c;
        case 0x466090u: goto label_466090;
        case 0x466094u: goto label_466094;
        case 0x466098u: goto label_466098;
        case 0x46609cu: goto label_46609c;
        case 0x4660a0u: goto label_4660a0;
        case 0x4660a4u: goto label_4660a4;
        case 0x4660a8u: goto label_4660a8;
        case 0x4660acu: goto label_4660ac;
        case 0x4660b0u: goto label_4660b0;
        case 0x4660b4u: goto label_4660b4;
        case 0x4660b8u: goto label_4660b8;
        case 0x4660bcu: goto label_4660bc;
        case 0x4660c0u: goto label_4660c0;
        case 0x4660c4u: goto label_4660c4;
        case 0x4660c8u: goto label_4660c8;
        case 0x4660ccu: goto label_4660cc;
        case 0x4660d0u: goto label_4660d0;
        case 0x4660d4u: goto label_4660d4;
        case 0x4660d8u: goto label_4660d8;
        case 0x4660dcu: goto label_4660dc;
        case 0x4660e0u: goto label_4660e0;
        case 0x4660e4u: goto label_4660e4;
        case 0x4660e8u: goto label_4660e8;
        case 0x4660ecu: goto label_4660ec;
        case 0x4660f0u: goto label_4660f0;
        case 0x4660f4u: goto label_4660f4;
        case 0x4660f8u: goto label_4660f8;
        case 0x4660fcu: goto label_4660fc;
        case 0x466100u: goto label_466100;
        case 0x466104u: goto label_466104;
        case 0x466108u: goto label_466108;
        case 0x46610cu: goto label_46610c;
        case 0x466110u: goto label_466110;
        case 0x466114u: goto label_466114;
        case 0x466118u: goto label_466118;
        case 0x46611cu: goto label_46611c;
        case 0x466120u: goto label_466120;
        case 0x466124u: goto label_466124;
        case 0x466128u: goto label_466128;
        case 0x46612cu: goto label_46612c;
        case 0x466130u: goto label_466130;
        case 0x466134u: goto label_466134;
        case 0x466138u: goto label_466138;
        case 0x46613cu: goto label_46613c;
        case 0x466140u: goto label_466140;
        case 0x466144u: goto label_466144;
        case 0x466148u: goto label_466148;
        case 0x46614cu: goto label_46614c;
        case 0x466150u: goto label_466150;
        case 0x466154u: goto label_466154;
        case 0x466158u: goto label_466158;
        case 0x46615cu: goto label_46615c;
        case 0x466160u: goto label_466160;
        case 0x466164u: goto label_466164;
        case 0x466168u: goto label_466168;
        case 0x46616cu: goto label_46616c;
        case 0x466170u: goto label_466170;
        case 0x466174u: goto label_466174;
        case 0x466178u: goto label_466178;
        case 0x46617cu: goto label_46617c;
        case 0x466180u: goto label_466180;
        case 0x466184u: goto label_466184;
        case 0x466188u: goto label_466188;
        case 0x46618cu: goto label_46618c;
        case 0x466190u: goto label_466190;
        case 0x466194u: goto label_466194;
        case 0x466198u: goto label_466198;
        case 0x46619cu: goto label_46619c;
        case 0x4661a0u: goto label_4661a0;
        case 0x4661a4u: goto label_4661a4;
        case 0x4661a8u: goto label_4661a8;
        case 0x4661acu: goto label_4661ac;
        case 0x4661b0u: goto label_4661b0;
        case 0x4661b4u: goto label_4661b4;
        case 0x4661b8u: goto label_4661b8;
        case 0x4661bcu: goto label_4661bc;
        case 0x4661c0u: goto label_4661c0;
        case 0x4661c4u: goto label_4661c4;
        case 0x4661c8u: goto label_4661c8;
        case 0x4661ccu: goto label_4661cc;
        case 0x4661d0u: goto label_4661d0;
        case 0x4661d4u: goto label_4661d4;
        case 0x4661d8u: goto label_4661d8;
        case 0x4661dcu: goto label_4661dc;
        case 0x4661e0u: goto label_4661e0;
        case 0x4661e4u: goto label_4661e4;
        case 0x4661e8u: goto label_4661e8;
        case 0x4661ecu: goto label_4661ec;
        case 0x4661f0u: goto label_4661f0;
        case 0x4661f4u: goto label_4661f4;
        case 0x4661f8u: goto label_4661f8;
        case 0x4661fcu: goto label_4661fc;
        case 0x466200u: goto label_466200;
        case 0x466204u: goto label_466204;
        case 0x466208u: goto label_466208;
        case 0x46620cu: goto label_46620c;
        case 0x466210u: goto label_466210;
        case 0x466214u: goto label_466214;
        case 0x466218u: goto label_466218;
        case 0x46621cu: goto label_46621c;
        case 0x466220u: goto label_466220;
        case 0x466224u: goto label_466224;
        case 0x466228u: goto label_466228;
        case 0x46622cu: goto label_46622c;
        case 0x466230u: goto label_466230;
        case 0x466234u: goto label_466234;
        case 0x466238u: goto label_466238;
        case 0x46623cu: goto label_46623c;
        default: break;
    }

    ctx->pc = 0x4659b0u;

label_4659b0:
    // 0x4659b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4659b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4659b4:
    // 0x4659b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4659b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4659b8:
    // 0x4659b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4659b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4659bc:
    // 0x4659bc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4659bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4659c0:
    // 0x4659c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4659c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4659c4:
    // 0x4659c4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_4659c8:
    if (ctx->pc == 0x4659C8u) {
        ctx->pc = 0x4659C8u;
            // 0x4659c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4659CCu;
        goto label_4659cc;
    }
    ctx->pc = 0x4659C4u;
    {
        const bool branch_taken_0x4659c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4659C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4659C4u;
            // 0x4659c8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4659c4) {
            ctx->pc = 0x465A08u;
            goto label_465a08;
        }
    }
    ctx->pc = 0x4659CCu;
label_4659cc:
    // 0x4659cc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x4659ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_4659d0:
    // 0x4659d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4659d4:
    if (ctx->pc == 0x4659D4u) {
        ctx->pc = 0x4659D8u;
        goto label_4659d8;
    }
    ctx->pc = 0x4659D0u;
    {
        const bool branch_taken_0x4659d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4659d0) {
            ctx->pc = 0x4659E0u;
            goto label_4659e0;
        }
    }
    ctx->pc = 0x4659D8u;
label_4659d8:
    // 0x4659d8: 0xc07507c  jal         func_1D41F0
label_4659dc:
    if (ctx->pc == 0x4659DCu) {
        ctx->pc = 0x4659DCu;
            // 0x4659dc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x4659E0u;
        goto label_4659e0;
    }
    ctx->pc = 0x4659D8u;
    SET_GPR_U32(ctx, 31, 0x4659E0u);
    ctx->pc = 0x4659DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4659D8u;
            // 0x4659dc: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4659E0u; }
        if (ctx->pc != 0x4659E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4659E0u; }
        if (ctx->pc != 0x4659E0u) { return; }
    }
    ctx->pc = 0x4659E0u;
label_4659e0:
    // 0x4659e0: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
label_4659e4:
    if (ctx->pc == 0x4659E4u) {
        ctx->pc = 0x4659E4u;
            // 0x4659e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4659E8u;
        goto label_4659e8;
    }
    ctx->pc = 0x4659E0u;
    {
        const bool branch_taken_0x4659e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4659e0) {
            ctx->pc = 0x4659E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4659E0u;
            // 0x4659e4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4659F4u;
            goto label_4659f4;
        }
    }
    ctx->pc = 0x4659E8u;
label_4659e8:
    // 0x4659e8: 0xc07507c  jal         func_1D41F0
label_4659ec:
    if (ctx->pc == 0x4659ECu) {
        ctx->pc = 0x4659ECu;
            // 0x4659ec: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x4659F0u;
        goto label_4659f0;
    }
    ctx->pc = 0x4659E8u;
    SET_GPR_U32(ctx, 31, 0x4659F0u);
    ctx->pc = 0x4659ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4659E8u;
            // 0x4659ec: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4659F0u; }
        if (ctx->pc != 0x4659F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4659F0u; }
        if (ctx->pc != 0x4659F0u) { return; }
    }
    ctx->pc = 0x4659F0u;
label_4659f0:
    // 0x4659f0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4659f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4659f4:
    // 0x4659f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4659f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4659f8:
    // 0x4659f8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4659fc:
    if (ctx->pc == 0x4659FCu) {
        ctx->pc = 0x4659FCu;
            // 0x4659fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465A00u;
        goto label_465a00;
    }
    ctx->pc = 0x4659F8u;
    {
        const bool branch_taken_0x4659f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4659f8) {
            ctx->pc = 0x4659FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4659F8u;
            // 0x4659fc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465A0Cu;
            goto label_465a0c;
        }
    }
    ctx->pc = 0x465A00u;
label_465a00:
    // 0x465a00: 0xc0400a8  jal         func_1002A0
label_465a04:
    if (ctx->pc == 0x465A04u) {
        ctx->pc = 0x465A04u;
            // 0x465a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465A08u;
        goto label_465a08;
    }
    ctx->pc = 0x465A00u;
    SET_GPR_U32(ctx, 31, 0x465A08u);
    ctx->pc = 0x465A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465A00u;
            // 0x465a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465A08u; }
        if (ctx->pc != 0x465A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465A08u; }
        if (ctx->pc != 0x465A08u) { return; }
    }
    ctx->pc = 0x465A08u;
label_465a08:
    // 0x465a08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465a08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465a0c:
    // 0x465a0c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x465a0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_465a10:
    // 0x465a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465a14:
    // 0x465a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465a18:
    // 0x465a18: 0x3e00008  jr          $ra
label_465a1c:
    if (ctx->pc == 0x465A1Cu) {
        ctx->pc = 0x465A1Cu;
            // 0x465a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x465A20u;
        goto label_465a20;
    }
    ctx->pc = 0x465A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465A18u;
            // 0x465a1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465A20u;
label_465a20:
    // 0x465a20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x465a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_465a24:
    // 0x465a24: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x465a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_465a28:
    // 0x465a28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465a2c:
    // 0x465a2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465a30:
    // 0x465a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x465a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465a34:
    // 0x465a34: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
label_465a38:
    if (ctx->pc == 0x465A38u) {
        ctx->pc = 0x465A38u;
            // 0x465a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465A3Cu;
        goto label_465a3c;
    }
    ctx->pc = 0x465A34u;
    {
        const bool branch_taken_0x465a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x465A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465A34u;
            // 0x465a38: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465a34) {
            ctx->pc = 0x465AE8u;
            goto label_465ae8;
        }
    }
    ctx->pc = 0x465A3Cu;
label_465a3c:
    // 0x465a3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x465a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_465a40:
    // 0x465a40: 0x2442e780  addiu       $v0, $v0, -0x1880
    ctx->pc = 0x465a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961024));
label_465a44:
    // 0x465a44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x465a44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_465a48:
    // 0x465a48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465a48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465a4c:
    // 0x465a4c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x465a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_465a50:
    // 0x465a50: 0x320f809  jalr        $t9
label_465a54:
    if (ctx->pc == 0x465A54u) {
        ctx->pc = 0x465A58u;
        goto label_465a58;
    }
    ctx->pc = 0x465A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465A58u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465A58u; }
            if (ctx->pc != 0x465A58u) { return; }
        }
        }
    }
    ctx->pc = 0x465A58u;
label_465a58:
    // 0x465a58: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x465a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_465a5c:
    // 0x465a5c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_465a60:
    if (ctx->pc == 0x465A60u) {
        ctx->pc = 0x465A64u;
        goto label_465a64;
    }
    ctx->pc = 0x465A5Cu;
    {
        const bool branch_taken_0x465a5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465a5c) {
            ctx->pc = 0x465AACu;
            goto label_465aac;
        }
    }
    ctx->pc = 0x465A64u;
label_465a64:
    // 0x465a64: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x465a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_465a68:
    // 0x465a68: 0x2442e820  addiu       $v0, $v0, -0x17E0
    ctx->pc = 0x465a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961184));
label_465a6c:
    // 0x465a6c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_465a70:
    if (ctx->pc == 0x465A70u) {
        ctx->pc = 0x465A70u;
            // 0x465a70: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x465A74u;
        goto label_465a74;
    }
    ctx->pc = 0x465A6Cu;
    {
        const bool branch_taken_0x465a6c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x465A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465A6Cu;
            // 0x465a70: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465a6c) {
            ctx->pc = 0x465AACu;
            goto label_465aac;
        }
    }
    ctx->pc = 0x465A74u;
label_465a74:
    // 0x465a74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465a78:
    // 0x465a78: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x465a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
label_465a7c:
    // 0x465a7c: 0xc0d37dc  jal         func_34DF70
label_465a80:
    if (ctx->pc == 0x465A80u) {
        ctx->pc = 0x465A80u;
            // 0x465a80: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x465A84u;
        goto label_465a84;
    }
    ctx->pc = 0x465A7Cu;
    SET_GPR_U32(ctx, 31, 0x465A84u);
    ctx->pc = 0x465A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465A7Cu;
            // 0x465a80: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34DF70u;
    if (runtime->hasFunction(0x34DF70u)) {
        auto targetFn = runtime->lookupFunction(0x34DF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465A84u; }
        if (ctx->pc != 0x465A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034DF70_0x34df70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465A84u; }
        if (ctx->pc != 0x465A84u) { return; }
    }
    ctx->pc = 0x465A84u;
label_465a84:
    // 0x465a84: 0x26230050  addiu       $v1, $s1, 0x50
    ctx->pc = 0x465a84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_465a88:
    // 0x465a88: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_465a8c:
    if (ctx->pc == 0x465A8Cu) {
        ctx->pc = 0x465A90u;
        goto label_465a90;
    }
    ctx->pc = 0x465A88u;
    {
        const bool branch_taken_0x465a88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x465a88) {
            ctx->pc = 0x465AACu;
            goto label_465aac;
        }
    }
    ctx->pc = 0x465A90u;
label_465a90:
    // 0x465a90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465a94:
    // 0x465a94: 0x244224a0  addiu       $v0, $v0, 0x24A0
    ctx->pc = 0x465a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9376));
label_465a98:
    // 0x465a98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_465a9c:
    if (ctx->pc == 0x465A9Cu) {
        ctx->pc = 0x465A9Cu;
            // 0x465a9c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x465AA0u;
        goto label_465aa0;
    }
    ctx->pc = 0x465A98u;
    {
        const bool branch_taken_0x465a98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465A98u;
            // 0x465a9c: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465a98) {
            ctx->pc = 0x465AACu;
            goto label_465aac;
        }
    }
    ctx->pc = 0x465AA0u;
label_465aa0:
    // 0x465aa0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465aa4:
    // 0x465aa4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x465aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_465aa8:
    // 0x465aa8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x465aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_465aac:
    // 0x465aac: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_465ab0:
    if (ctx->pc == 0x465AB0u) {
        ctx->pc = 0x465AB0u;
            // 0x465ab0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x465AB4u;
        goto label_465ab4;
    }
    ctx->pc = 0x465AACu;
    {
        const bool branch_taken_0x465aac = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x465aac) {
            ctx->pc = 0x465AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465AACu;
            // 0x465ab0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465AD4u;
            goto label_465ad4;
        }
    }
    ctx->pc = 0x465AB4u;
label_465ab4:
    // 0x465ab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465ab8:
    // 0x465ab8: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x465ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_465abc:
    // 0x465abc: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_465ac0:
    if (ctx->pc == 0x465AC0u) {
        ctx->pc = 0x465AC0u;
            // 0x465ac0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x465AC4u;
        goto label_465ac4;
    }
    ctx->pc = 0x465ABCu;
    {
        const bool branch_taken_0x465abc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x465AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465ABCu;
            // 0x465ac0: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465abc) {
            ctx->pc = 0x465AD0u;
            goto label_465ad0;
        }
    }
    ctx->pc = 0x465AC4u;
label_465ac4:
    // 0x465ac4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x465ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_465ac8:
    // 0x465ac8: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x465ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_465acc:
    // 0x465acc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x465accu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_465ad0:
    // 0x465ad0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x465ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_465ad4:
    // 0x465ad4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x465ad4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_465ad8:
    // 0x465ad8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_465adc:
    if (ctx->pc == 0x465ADCu) {
        ctx->pc = 0x465ADCu;
            // 0x465adc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465AE0u;
        goto label_465ae0;
    }
    ctx->pc = 0x465AD8u;
    {
        const bool branch_taken_0x465ad8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x465ad8) {
            ctx->pc = 0x465ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465AD8u;
            // 0x465adc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465AECu;
            goto label_465aec;
        }
    }
    ctx->pc = 0x465AE0u;
label_465ae0:
    // 0x465ae0: 0xc0400a8  jal         func_1002A0
label_465ae4:
    if (ctx->pc == 0x465AE4u) {
        ctx->pc = 0x465AE4u;
            // 0x465ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465AE8u;
        goto label_465ae8;
    }
    ctx->pc = 0x465AE0u;
    SET_GPR_U32(ctx, 31, 0x465AE8u);
    ctx->pc = 0x465AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465AE0u;
            // 0x465ae4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465AE8u; }
        if (ctx->pc != 0x465AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465AE8u; }
        if (ctx->pc != 0x465AE8u) { return; }
    }
    ctx->pc = 0x465AE8u;
label_465ae8:
    // 0x465ae8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x465ae8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465aec:
    // 0x465aec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x465aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_465af0:
    // 0x465af0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465af0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465af4:
    // 0x465af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465af8:
    // 0x465af8: 0x3e00008  jr          $ra
label_465afc:
    if (ctx->pc == 0x465AFCu) {
        ctx->pc = 0x465AFCu;
            // 0x465afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x465B00u;
        goto label_465b00;
    }
    ctx->pc = 0x465AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465AF8u;
            // 0x465afc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465B00u;
label_465b00:
    // 0x465b00: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x465b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_465b04:
    // 0x465b04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x465b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_465b08:
    // 0x465b08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x465b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_465b0c:
    // 0x465b0c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x465b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_465b10:
    // 0x465b10: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x465b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_465b14:
    // 0x465b14: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x465b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_465b18:
    // 0x465b18: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x465b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_465b1c:
    // 0x465b1c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x465b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_465b20:
    // 0x465b20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x465b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_465b24:
    // 0x465b24: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x465b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_465b28:
    // 0x465b28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x465b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_465b2c:
    // 0x465b2c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x465b2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_465b30:
    // 0x465b30: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x465b30u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_465b34:
    // 0x465b34: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x465b34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_465b38:
    // 0x465b38: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x465b38u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_465b3c:
    // 0x465b3c: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_465b40:
    if (ctx->pc == 0x465B40u) {
        ctx->pc = 0x465B40u;
            // 0x465b40: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465B44u;
        goto label_465b44;
    }
    ctx->pc = 0x465B3Cu;
    {
        const bool branch_taken_0x465b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x465B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465B3Cu;
            // 0x465b40: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465b3c) {
            ctx->pc = 0x465B8Cu;
            goto label_465b8c;
        }
    }
    ctx->pc = 0x465B44u;
label_465b44:
    // 0x465b44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x465b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_465b48:
    // 0x465b48: 0x50a30071  beql        $a1, $v1, . + 4 + (0x71 << 2)
label_465b4c:
    if (ctx->pc == 0x465B4Cu) {
        ctx->pc = 0x465B4Cu;
            // 0x465b4c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x465B50u;
        goto label_465b50;
    }
    ctx->pc = 0x465B48u;
    {
        const bool branch_taken_0x465b48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x465b48) {
            ctx->pc = 0x465B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465B48u;
            // 0x465b4c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465D10u;
            goto label_465d10;
        }
    }
    ctx->pc = 0x465B50u;
label_465b50:
    // 0x465b50: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x465b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_465b54:
    // 0x465b54: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_465b58:
    if (ctx->pc == 0x465B58u) {
        ctx->pc = 0x465B5Cu;
        goto label_465b5c;
    }
    ctx->pc = 0x465B54u;
    {
        const bool branch_taken_0x465b54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x465b54) {
            ctx->pc = 0x465B64u;
            goto label_465b64;
        }
    }
    ctx->pc = 0x465B5Cu;
label_465b5c:
    // 0x465b5c: 0x1000006b  b           . + 4 + (0x6B << 2)
label_465b60:
    if (ctx->pc == 0x465B60u) {
        ctx->pc = 0x465B64u;
        goto label_465b64;
    }
    ctx->pc = 0x465B5Cu;
    {
        const bool branch_taken_0x465b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465b5c) {
            ctx->pc = 0x465D0Cu;
            goto label_465d0c;
        }
    }
    ctx->pc = 0x465B64u;
label_465b64:
    // 0x465b64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x465b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_465b68:
    // 0x465b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465b6c:
    // 0x465b6c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x465b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_465b70:
    // 0x465b70: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x465b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_465b74:
    // 0x465b74: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x465b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_465b78:
    // 0x465b78: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x465b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_465b7c:
    // 0x465b7c: 0x320f809  jalr        $t9
label_465b80:
    if (ctx->pc == 0x465B80u) {
        ctx->pc = 0x465B80u;
            // 0x465b80: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x465B84u;
        goto label_465b84;
    }
    ctx->pc = 0x465B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465B84u);
        ctx->pc = 0x465B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465B7Cu;
            // 0x465b80: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x465B84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465B84u; }
            if (ctx->pc != 0x465B84u) { return; }
        }
        }
    }
    ctx->pc = 0x465B84u;
label_465b84:
    // 0x465b84: 0x10000061  b           . + 4 + (0x61 << 2)
label_465b88:
    if (ctx->pc == 0x465B88u) {
        ctx->pc = 0x465B8Cu;
        goto label_465b8c;
    }
    ctx->pc = 0x465B84u;
    {
        const bool branch_taken_0x465b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465b84) {
            ctx->pc = 0x465D0Cu;
            goto label_465d0c;
        }
    }
    ctx->pc = 0x465B8Cu;
label_465b8c:
    // 0x465b8c: 0x8eb00070  lw          $s0, 0x70($s5)
    ctx->pc = 0x465b8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_465b90:
    // 0x465b90: 0x1200005e  beqz        $s0, . + 4 + (0x5E << 2)
label_465b94:
    if (ctx->pc == 0x465B94u) {
        ctx->pc = 0x465B98u;
        goto label_465b98;
    }
    ctx->pc = 0x465B90u;
    {
        const bool branch_taken_0x465b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x465b90) {
            ctx->pc = 0x465D0Cu;
            goto label_465d0c;
        }
    }
    ctx->pc = 0x465B98u;
label_465b98:
    // 0x465b98: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x465b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_465b9c:
    // 0x465b9c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x465b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_465ba0:
    // 0x465ba0: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x465ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_465ba4:
    // 0x465ba4: 0x26b60084  addiu       $s6, $s5, 0x84
    ctx->pc = 0x465ba4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 132));
label_465ba8:
    // 0x465ba8: 0x8c77e378  lw          $s7, -0x1C88($v1)
    ctx->pc = 0x465ba8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_465bac:
    // 0x465bac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x465bacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465bb0:
    // 0x465bb0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465bb4:
    // 0x465bb4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465bb8:
    // 0x465bb8: 0x8ca60130  lw          $a2, 0x130($a1)
    ctx->pc = 0x465bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_465bbc:
    // 0x465bbc: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x465bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_465bc0:
    // 0x465bc0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x465bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_465bc4:
    // 0x465bc4: 0x8c64d120  lw          $a0, -0x2EE0($v1)
    ctx->pc = 0x465bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_465bc8:
    // 0x465bc8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x465bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_465bcc:
    // 0x465bcc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x465bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_465bd0:
    // 0x465bd0: 0x3c033e99  lui         $v1, 0x3E99
    ctx->pc = 0x465bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16025 << 16));
label_465bd4:
    // 0x465bd4: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x465bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_465bd8:
    // 0x465bd8: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x465bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_465bdc:
    // 0x465bdc: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x465bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_465be0:
    // 0x465be0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x465be0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465be4:
    // 0x465be4: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x465be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_465be8:
    // 0x465be8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x465be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465bec:
    // 0x465bec: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x465becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_465bf0:
    // 0x465bf0: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x465bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_465bf4:
    // 0x465bf4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x465bf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_465bf8:
    // 0x465bf8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x465bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_465bfc:
    // 0x465bfc: 0x46010542  mul.s       $f21, $f0, $f1
    ctx->pc = 0x465bfcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_465c00:
    // 0x465c00: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x465c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_465c04:
    // 0x465c04: 0x24be0010  addiu       $fp, $a1, 0x10
    ctx->pc = 0x465c04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_465c08:
    // 0x465c08: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x465c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_465c0c:
    // 0x465c0c: 0xac80e3d8  sw          $zero, -0x1C28($a0)
    ctx->pc = 0x465c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960088), GPR_U32(ctx, 0));
label_465c10:
    // 0x465c10: 0xac60e3c0  sw          $zero, -0x1C40($v1)
    ctx->pc = 0x465c10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 0));
label_465c14:
    // 0x465c14: 0x8ea30074  lw          $v1, 0x74($s5)
    ctx->pc = 0x465c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_465c18:
    // 0x465c18: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x465c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_465c1c:
    // 0x465c1c: 0x2442e7b0  addiu       $v0, $v0, -0x1850
    ctx->pc = 0x465c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
label_465c20:
    // 0x465c20: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x465c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_465c24:
    // 0x465c24: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x465c24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_465c28:
    // 0x465c28: 0x90a4006c  lbu         $a0, 0x6C($a1)
    ctx->pc = 0x465c28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 108)));
label_465c2c:
    // 0x465c2c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x465c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_465c30:
    // 0x465c30: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x465c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_465c34:
    // 0x465c34: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x465c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_465c38:
    // 0x465c38: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x465c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_465c3c:
    // 0x465c3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x465c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_465c40:
    // 0x465c40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x465c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_465c44:
    // 0x465c44: 0x90530000  lbu         $s3, 0x0($v0)
    ctx->pc = 0x465c44u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_465c48:
    // 0x465c48: 0x1a60001f  blez        $s3, . + 4 + (0x1F << 2)
label_465c4c:
    if (ctx->pc == 0x465C4Cu) {
        ctx->pc = 0x465C50u;
        goto label_465c50;
    }
    ctx->pc = 0x465C48u;
    {
        const bool branch_taken_0x465c48 = (GPR_S32(ctx, 19) <= 0);
        if (branch_taken_0x465c48) {
            ctx->pc = 0x465CC8u;
            goto label_465cc8;
        }
    }
    ctx->pc = 0x465C50u;
label_465c50:
    // 0x465c50: 0x8cb20068  lw          $s2, 0x68($a1)
    ctx->pc = 0x465c50u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_465c54:
    // 0x465c54: 0x92421ea0  lbu         $v0, 0x1EA0($s2)
    ctx->pc = 0x465c54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7840)));
label_465c58:
    // 0x465c58: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_465c5c:
    if (ctx->pc == 0x465C5Cu) {
        ctx->pc = 0x465C60u;
        goto label_465c60;
    }
    ctx->pc = 0x465C58u;
    {
        const bool branch_taken_0x465c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x465c58) {
            ctx->pc = 0x465CC8u;
            goto label_465cc8;
        }
    }
    ctx->pc = 0x465C60u;
label_465c60:
    // 0x465c60: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x465c60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_465c64:
    // 0x465c64: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x465c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_465c68:
    // 0x465c68: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_465c6c:
    if (ctx->pc == 0x465C6Cu) {
        ctx->pc = 0x465C6Cu;
            // 0x465c6c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x465C70u;
        goto label_465c70;
    }
    ctx->pc = 0x465C68u;
    {
        const bool branch_taken_0x465c68 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x465c68) {
            ctx->pc = 0x465C6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465C68u;
            // 0x465c6c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465C7Cu;
            goto label_465c7c;
        }
    }
    ctx->pc = 0x465C70u;
label_465c70:
    // 0x465c70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x465c70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465c74:
    // 0x465c74: 0x10000007  b           . + 4 + (0x7 << 2)
label_465c78:
    if (ctx->pc == 0x465C78u) {
        ctx->pc = 0x465C78u;
            // 0x465c78: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x465C7Cu;
        goto label_465c7c;
    }
    ctx->pc = 0x465C74u;
    {
        const bool branch_taken_0x465c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465C74u;
            // 0x465c78: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x465c74) {
            ctx->pc = 0x465C94u;
            goto label_465c94;
        }
    }
    ctx->pc = 0x465C7Cu;
label_465c7c:
    // 0x465c7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x465c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_465c80:
    // 0x465c80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x465c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_465c84:
    // 0x465c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x465c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465c88:
    // 0x465c88: 0x0  nop
    ctx->pc = 0x465c88u;
    // NOP
label_465c8c:
    // 0x465c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x465c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_465c90:
    // 0x465c90: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x465c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_465c94:
    // 0x465c94: 0x4600ad02  mul.s       $f20, $f21, $f0
    ctx->pc = 0x465c94u;
    ctx->f[20] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_465c98:
    // 0x465c98: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x465c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_465c9c:
    // 0x465c9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x465c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_465ca0:
    // 0x465ca0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x465ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_465ca4:
    // 0x465ca4: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x465ca4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_465ca8:
    // 0x465ca8: 0x3c0402d  daddu       $t0, $fp, $zero
    ctx->pc = 0x465ca8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_465cac:
    // 0x465cac: 0x27a900d0  addiu       $t1, $sp, 0xD0
    ctx->pc = 0x465cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_465cb0:
    // 0x465cb0: 0xc118b54  jal         func_462D50
label_465cb4:
    if (ctx->pc == 0x465CB4u) {
        ctx->pc = 0x465CB4u;
            // 0x465cb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x465CB8u;
        goto label_465cb8;
    }
    ctx->pc = 0x465CB0u;
    SET_GPR_U32(ctx, 31, 0x465CB8u);
    ctx->pc = 0x465CB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465CB0u;
            // 0x465cb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x462D50u;
    if (runtime->hasFunction(0x462D50u)) {
        auto targetFn = runtime->lookupFunction(0x462D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465CB8u; }
        if (ctx->pc != 0x465CB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00462D50_0x462d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465CB8u; }
        if (ctx->pc != 0x465CB8u) { return; }
    }
    ctx->pc = 0x465CB8u;
label_465cb8:
    // 0x465cb8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x465cb8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_465cbc:
    // 0x465cbc: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
label_465cc0:
    if (ctx->pc == 0x465CC0u) {
        ctx->pc = 0x465CC0u;
            // 0x465cc0: 0x26520310  addiu       $s2, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->pc = 0x465CC4u;
        goto label_465cc4;
    }
    ctx->pc = 0x465CBCu;
    {
        const bool branch_taken_0x465cbc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x465CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465CBCu;
            // 0x465cc0: 0x26520310  addiu       $s2, $s2, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465cbc) {
            ctx->pc = 0x465C98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465c98;
        }
    }
    ctx->pc = 0x465CC4u;
label_465cc4:
    // 0x465cc4: 0x0  nop
    ctx->pc = 0x465cc4u;
    // NOP
label_465cc8:
    // 0x465cc8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x465cc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_465ccc:
    // 0x465ccc: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x465cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_465cd0:
    // 0x465cd0: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_465cd4:
    if (ctx->pc == 0x465CD4u) {
        ctx->pc = 0x465CD4u;
            // 0x465cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x465CD8u;
        goto label_465cd8;
    }
    ctx->pc = 0x465CD0u;
    {
        const bool branch_taken_0x465cd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x465CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465CD0u;
            // 0x465cd4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465cd0) {
            ctx->pc = 0x465C14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465c14;
        }
    }
    ctx->pc = 0x465CD8u;
label_465cd8:
    // 0x465cd8: 0xc04e738  jal         func_139CE0
label_465cdc:
    if (ctx->pc == 0x465CDCu) {
        ctx->pc = 0x465CDCu;
            // 0x465cdc: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->pc = 0x465CE0u;
        goto label_465ce0;
    }
    ctx->pc = 0x465CD8u;
    SET_GPR_U32(ctx, 31, 0x465CE0u);
    ctx->pc = 0x465CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465CD8u;
            // 0x465cdc: 0x8ec40004  lw          $a0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465CE0u; }
        if (ctx->pc != 0x465CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465CE0u; }
        if (ctx->pc != 0x465CE0u) { return; }
    }
    ctx->pc = 0x465CE0u;
label_465ce0:
    // 0x465ce0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x465ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_465ce4:
    // 0x465ce4: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x465ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_465ce8:
    // 0x465ce8: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_465cec:
    if (ctx->pc == 0x465CECu) {
        ctx->pc = 0x465CECu;
            // 0x465cec: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x465CF0u;
        goto label_465cf0;
    }
    ctx->pc = 0x465CE8u;
    {
        const bool branch_taken_0x465ce8 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x465CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465CE8u;
            // 0x465cec: 0x8ec40000  lw          $a0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ce8) {
            ctx->pc = 0x465D0Cu;
            goto label_465d0c;
        }
    }
    ctx->pc = 0x465CF0u;
label_465cf0:
    // 0x465cf0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x465cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_465cf4:
    // 0x465cf4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465cf8:
    // 0x465cf8: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x465cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_465cfc:
    // 0x465cfc: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x465cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_465d00:
    // 0x465d00: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x465d00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_465d04:
    // 0x465d04: 0xc055990  jal         func_156640
label_465d08:
    if (ctx->pc == 0x465D08u) {
        ctx->pc = 0x465D08u;
            // 0x465d08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465D0Cu;
        goto label_465d0c;
    }
    ctx->pc = 0x465D04u;
    SET_GPR_U32(ctx, 31, 0x465D0Cu);
    ctx->pc = 0x465D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465D04u;
            // 0x465d08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465D0Cu; }
        if (ctx->pc != 0x465D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465D0Cu; }
        if (ctx->pc != 0x465D0Cu) { return; }
    }
    ctx->pc = 0x465D0Cu;
label_465d0c:
    // 0x465d0c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x465d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_465d10:
    // 0x465d10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x465d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_465d14:
    // 0x465d14: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x465d14u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_465d18:
    // 0x465d18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x465d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_465d1c:
    // 0x465d1c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x465d1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_465d20:
    // 0x465d20: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x465d20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_465d24:
    // 0x465d24: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x465d24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_465d28:
    // 0x465d28: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x465d28u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_465d2c:
    // 0x465d2c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x465d2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_465d30:
    // 0x465d30: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x465d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_465d34:
    // 0x465d34: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x465d34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465d38:
    // 0x465d38: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x465d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465d3c:
    // 0x465d3c: 0x3e00008  jr          $ra
label_465d40:
    if (ctx->pc == 0x465D40u) {
        ctx->pc = 0x465D40u;
            // 0x465d40: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x465D44u;
        goto label_465d44;
    }
    ctx->pc = 0x465D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465D3Cu;
            // 0x465d40: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465D44u;
label_465d44:
    // 0x465d44: 0x0  nop
    ctx->pc = 0x465d44u;
    // NOP
label_465d48:
    // 0x465d48: 0x0  nop
    ctx->pc = 0x465d48u;
    // NOP
label_465d4c:
    // 0x465d4c: 0x0  nop
    ctx->pc = 0x465d4cu;
    // NOP
label_465d50:
    // 0x465d50: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x465d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_465d54:
    // 0x465d54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x465d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_465d58:
    // 0x465d58: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x465d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_465d5c:
    // 0x465d5c: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x465d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_465d60:
    // 0x465d60: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x465d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_465d64:
    // 0x465d64: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x465d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_465d68:
    // 0x465d68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x465d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_465d6c:
    // 0x465d6c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_465d70:
    // 0x465d70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465d74:
    // 0x465d74: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465d78:
    // 0x465d78: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x465d78u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_465d7c:
    // 0x465d7c: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_465d80:
    if (ctx->pc == 0x465D80u) {
        ctx->pc = 0x465D80u;
            // 0x465d80: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465D84u;
        goto label_465d84;
    }
    ctx->pc = 0x465D7Cu;
    {
        const bool branch_taken_0x465d7c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x465D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465D7Cu;
            // 0x465d80: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465d7c) {
            ctx->pc = 0x465DB0u;
            goto label_465db0;
        }
    }
    ctx->pc = 0x465D84u;
label_465d84:
    // 0x465d84: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x465d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_465d88:
    // 0x465d88: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_465d8c:
    if (ctx->pc == 0x465D8Cu) {
        ctx->pc = 0x465D8Cu;
            // 0x465d8c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x465D90u;
        goto label_465d90;
    }
    ctx->pc = 0x465D88u;
    {
        const bool branch_taken_0x465d88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x465d88) {
            ctx->pc = 0x465D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465D88u;
            // 0x465d8c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465DA4u;
            goto label_465da4;
        }
    }
    ctx->pc = 0x465D90u;
label_465d90:
    // 0x465d90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x465d90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_465d94:
    // 0x465d94: 0x10a3006c  beq         $a1, $v1, . + 4 + (0x6C << 2)
label_465d98:
    if (ctx->pc == 0x465D98u) {
        ctx->pc = 0x465D9Cu;
        goto label_465d9c;
    }
    ctx->pc = 0x465D94u;
    {
        const bool branch_taken_0x465d94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x465d94) {
            ctx->pc = 0x465F48u;
            goto label_465f48;
        }
    }
    ctx->pc = 0x465D9Cu;
label_465d9c:
    // 0x465d9c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_465da0:
    if (ctx->pc == 0x465DA0u) {
        ctx->pc = 0x465DA4u;
        goto label_465da4;
    }
    ctx->pc = 0x465D9Cu;
    {
        const bool branch_taken_0x465d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465d9c) {
            ctx->pc = 0x465F48u;
            goto label_465f48;
        }
    }
    ctx->pc = 0x465DA4u;
label_465da4:
    // 0x465da4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x465da4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_465da8:
    // 0x465da8: 0x320f809  jalr        $t9
label_465dac:
    if (ctx->pc == 0x465DACu) {
        ctx->pc = 0x465DB0u;
        goto label_465db0;
    }
    ctx->pc = 0x465DA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465DB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465DB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465DB0u; }
            if (ctx->pc != 0x465DB0u) { return; }
        }
        }
    }
    ctx->pc = 0x465DB0u;
label_465db0:
    // 0x465db0: 0x8eb60070  lw          $s6, 0x70($s5)
    ctx->pc = 0x465db0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 112)));
label_465db4:
    // 0x465db4: 0x12c00064  beqz        $s6, . + 4 + (0x64 << 2)
label_465db8:
    if (ctx->pc == 0x465DB8u) {
        ctx->pc = 0x465DBCu;
        goto label_465dbc;
    }
    ctx->pc = 0x465DB4u;
    {
        const bool branch_taken_0x465db4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x465db4) {
            ctx->pc = 0x465F48u;
            goto label_465f48;
        }
    }
    ctx->pc = 0x465DBCu;
label_465dbc:
    // 0x465dbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x465dbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465dc0:
    // 0x465dc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x465dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465dc4:
    // 0x465dc4: 0x8ea40074  lw          $a0, 0x74($s5)
    ctx->pc = 0x465dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 116)));
label_465dc8:
    // 0x465dc8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x465dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_465dcc:
    // 0x465dcc: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x465dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_465dd0:
    // 0x465dd0: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x465dd0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465dd4:
    // 0x465dd4: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x465dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_465dd8:
    // 0x465dd8: 0x10830007  beq         $a0, $v1, . + 4 + (0x7 << 2)
label_465ddc:
    if (ctx->pc == 0x465DDCu) {
        ctx->pc = 0x465DE0u;
        goto label_465de0;
    }
    ctx->pc = 0x465DD8u;
    {
        const bool branch_taken_0x465dd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x465dd8) {
            ctx->pc = 0x465DF8u;
            goto label_465df8;
        }
    }
    ctx->pc = 0x465DE0u;
label_465de0:
    // 0x465de0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_465de4:
    if (ctx->pc == 0x465DE4u) {
        ctx->pc = 0x465DE8u;
        goto label_465de8;
    }
    ctx->pc = 0x465DE0u;
    {
        const bool branch_taken_0x465de0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x465de0) {
            ctx->pc = 0x465DF0u;
            goto label_465df0;
        }
    }
    ctx->pc = 0x465DE8u;
label_465de8:
    // 0x465de8: 0x10000053  b           . + 4 + (0x53 << 2)
label_465dec:
    if (ctx->pc == 0x465DECu) {
        ctx->pc = 0x465DF0u;
        goto label_465df0;
    }
    ctx->pc = 0x465DE8u;
    {
        const bool branch_taken_0x465de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x465de8) {
            ctx->pc = 0x465F38u;
            goto label_465f38;
        }
    }
    ctx->pc = 0x465DF0u;
label_465df0:
    // 0x465df0: 0xae030060  sw          $v1, 0x60($s0)
    ctx->pc = 0x465df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 3));
label_465df4:
    // 0x465df4: 0x0  nop
    ctx->pc = 0x465df4u;
    // NOP
label_465df8:
    // 0x465df8: 0x9207006c  lbu         $a3, 0x6C($s0)
    ctx->pc = 0x465df8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_465dfc:
    // 0x465dfc: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x465dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_465e00:
    // 0x465e00: 0x2605005c  addiu       $a1, $s0, 0x5C
    ctx->pc = 0x465e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
label_465e04:
    // 0x465e04: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x465e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465e08:
    // 0x465e08: 0x2484e7b0  addiu       $a0, $a0, -0x1850
    ctx->pc = 0x465e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961072));
label_465e0c:
    // 0x465e0c: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x465e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_465e10:
    // 0x465e10: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x465e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_465e14:
    // 0x465e14: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x465e14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_465e18:
    // 0x465e18: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x465e18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_465e1c:
    // 0x465e1c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x465e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_465e20:
    // 0x465e20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x465e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_465e24:
    // 0x465e24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465e28:
    // 0x465e28: 0x90860000  lbu         $a2, 0x0($a0)
    ctx->pc = 0x465e28u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_465e2c:
    // 0x465e2c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x465e2cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_465e30:
    // 0x465e30: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_465e34:
    if (ctx->pc == 0x465E34u) {
        ctx->pc = 0x465E34u;
            // 0x465e34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x465E38u;
        goto label_465e38;
    }
    ctx->pc = 0x465E30u;
    {
        const bool branch_taken_0x465e30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x465E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465E30u;
            // 0x465e34: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465e30) {
            ctx->pc = 0x465E3Cu;
            goto label_465e3c;
        }
    }
    ctx->pc = 0x465E38u;
label_465e38:
    // 0x465e38: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x465e38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465e3c:
    // 0x465e3c: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_465e40:
    if (ctx->pc == 0x465E40u) {
        ctx->pc = 0x465E40u;
            // 0x465e40: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x465E44u;
        goto label_465e44;
    }
    ctx->pc = 0x465E3Cu;
    {
        const bool branch_taken_0x465e3c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x465e3c) {
            ctx->pc = 0x465E40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465E3Cu;
            // 0x465e40: 0x32042  srl         $a0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465E50u;
            goto label_465e50;
        }
    }
    ctx->pc = 0x465E44u;
label_465e44:
    // 0x465e44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x465e44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465e48:
    // 0x465e48: 0x10000007  b           . + 4 + (0x7 << 2)
label_465e4c:
    if (ctx->pc == 0x465E4Cu) {
        ctx->pc = 0x465E4Cu;
            // 0x465e4c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x465E50u;
        goto label_465e50;
    }
    ctx->pc = 0x465E48u;
    {
        const bool branch_taken_0x465e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x465E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465E48u;
            // 0x465e4c: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x465e48) {
            ctx->pc = 0x465E68u;
            goto label_465e68;
        }
    }
    ctx->pc = 0x465E50u;
label_465e50:
    // 0x465e50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x465e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_465e54:
    // 0x465e54: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x465e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_465e58:
    // 0x465e58: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x465e58u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465e5c:
    // 0x465e5c: 0x0  nop
    ctx->pc = 0x465e5cu;
    // NOP
label_465e60:
    // 0x465e60: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x465e60u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_465e64:
    // 0x465e64: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x465e64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_465e68:
    // 0x465e68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x465e68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_465e6c:
    // 0x465e6c: 0x30d300ff  andi        $s3, $a2, 0xFF
    ctx->pc = 0x465e6cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_465e70:
    // 0x465e70: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x465e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_465e74:
    // 0x465e74: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x465e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_465e78:
    // 0x465e78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x465e78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_465e7c:
    // 0x465e7c: 0x0  nop
    ctx->pc = 0x465e7cu;
    // NOP
label_465e80:
    // 0x465e80: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x465e80u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_465e84:
    // 0x465e84: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x465e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_465e88:
    // 0x465e88: 0x4600101d  msub.s      $f0, $f2, $f0
    ctx->pc = 0x465e88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
label_465e8c:
    // 0x465e8c: 0x1a60002a  blez        $s3, . + 4 + (0x2A << 2)
label_465e90:
    if (ctx->pc == 0x465E90u) {
        ctx->pc = 0x465E90u;
            // 0x465e90: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x465E94u;
        goto label_465e94;
    }
    ctx->pc = 0x465E8Cu;
    {
        const bool branch_taken_0x465e8c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x465E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465E8Cu;
            // 0x465e90: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x465e8c) {
            ctx->pc = 0x465F38u;
            goto label_465f38;
        }
    }
    ctx->pc = 0x465E94u;
label_465e94:
    // 0x465e94: 0x8e120068  lw          $s2, 0x68($s0)
    ctx->pc = 0x465e94u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_465e98:
    // 0x465e98: 0x92431ea0  lbu         $v1, 0x1EA0($s2)
    ctx->pc = 0x465e98u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7840)));
label_465e9c:
    // 0x465e9c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_465ea0:
    if (ctx->pc == 0x465EA0u) {
        ctx->pc = 0x465EA4u;
        goto label_465ea4;
    }
    ctx->pc = 0x465E9Cu;
    {
        const bool branch_taken_0x465e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x465e9c) {
            ctx->pc = 0x465EC8u;
            goto label_465ec8;
        }
    }
    ctx->pc = 0x465EA4u;
label_465ea4:
    // 0x465ea4: 0x0  nop
    ctx->pc = 0x465ea4u;
    // NOP
label_465ea8:
    // 0x465ea8: 0xc0e3658  jal         func_38D960
label_465eac:
    if (ctx->pc == 0x465EACu) {
        ctx->pc = 0x465EACu;
            // 0x465eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x465EB0u;
        goto label_465eb0;
    }
    ctx->pc = 0x465EA8u;
    SET_GPR_U32(ctx, 31, 0x465EB0u);
    ctx->pc = 0x465EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465EA8u;
            // 0x465eac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D960u;
    if (runtime->hasFunction(0x38D960u)) {
        auto targetFn = runtime->lookupFunction(0x38D960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465EB0u; }
        if (ctx->pc != 0x465EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D960_0x38d960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465EB0u; }
        if (ctx->pc != 0x465EB0u) { return; }
    }
    ctx->pc = 0x465EB0u;
label_465eb0:
    // 0x465eb0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x465eb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_465eb4:
    // 0x465eb4: 0x26520310  addiu       $s2, $s2, 0x310
    ctx->pc = 0x465eb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 784));
label_465eb8:
    // 0x465eb8: 0x0  nop
    ctx->pc = 0x465eb8u;
    // NOP
label_465ebc:
    // 0x465ebc: 0x1660fffa  bnez        $s3, . + 4 + (-0x6 << 2)
label_465ec0:
    if (ctx->pc == 0x465EC0u) {
        ctx->pc = 0x465EC4u;
        goto label_465ec4;
    }
    ctx->pc = 0x465EBCu;
    {
        const bool branch_taken_0x465ebc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x465ebc) {
            ctx->pc = 0x465EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465ea8;
        }
    }
    ctx->pc = 0x465EC4u;
label_465ec4:
    // 0x465ec4: 0x0  nop
    ctx->pc = 0x465ec4u;
    // NOP
label_465ec8:
    // 0x465ec8: 0x9206006c  lbu         $a2, 0x6C($s0)
    ctx->pc = 0x465ec8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_465ecc:
    // 0x465ecc: 0x8e070068  lw          $a3, 0x68($s0)
    ctx->pc = 0x465eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_465ed0:
    // 0x465ed0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x465ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_465ed4:
    // 0x465ed4: 0x2484e7b0  addiu       $a0, $a0, -0x1850
    ctx->pc = 0x465ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961072));
label_465ed8:
    // 0x465ed8: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x465ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_465edc:
    // 0x465edc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x465edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_465ee0:
    // 0x465ee0: 0x90e31ea0  lbu         $v1, 0x1EA0($a3)
    ctx->pc = 0x465ee0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7840)));
label_465ee4:
    // 0x465ee4: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x465ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_465ee8:
    // 0x465ee8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x465ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_465eec:
    // 0x465eec: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x465eecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_465ef0:
    // 0x465ef0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x465ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_465ef4:
    // 0x465ef4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_465ef8:
    if (ctx->pc == 0x465EF8u) {
        ctx->pc = 0x465EF8u;
            // 0x465ef8: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x465EFCu;
        goto label_465efc;
    }
    ctx->pc = 0x465EF4u;
    {
        const bool branch_taken_0x465ef4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465EF4u;
            // 0x465ef8: 0x90840000  lbu         $a0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465ef4) {
            ctx->pc = 0x465F38u;
            goto label_465f38;
        }
    }
    ctx->pc = 0x465EFCu;
label_465efc:
    // 0x465efc: 0x8ce300d0  lw          $v1, 0xD0($a3)
    ctx->pc = 0x465efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
label_465f00:
    // 0x465f00: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x465f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_465f04:
    // 0x465f04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x465f04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_465f08:
    // 0x465f08: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x465f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_465f0c:
    // 0x465f0c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x465f0cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_465f10:
    // 0x465f10: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x465f10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_465f14:
    // 0x465f14: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x465f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_465f18:
    // 0x465f18: 0x0  nop
    ctx->pc = 0x465f18u;
    // NOP
label_465f1c:
    // 0x465f1c: 0x0  nop
    ctx->pc = 0x465f1cu;
    // NOP
label_465f20:
    // 0x465f20: 0x0  nop
    ctx->pc = 0x465f20u;
    // NOP
label_465f24:
    // 0x465f24: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
label_465f28:
    if (ctx->pc == 0x465F28u) {
        ctx->pc = 0x465F2Cu;
        goto label_465f2c;
    }
    ctx->pc = 0x465F24u;
    {
        const bool branch_taken_0x465f24 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x465f24) {
            ctx->pc = 0x465F10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465f10;
        }
    }
    ctx->pc = 0x465F2Cu;
label_465f2c:
    // 0x465f2c: 0xa41826  xor         $v1, $a1, $a0
    ctx->pc = 0x465f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
label_465f30:
    // 0x465f30: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x465f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_465f34:
    // 0x465f34: 0xa0e31ea0  sb          $v1, 0x1EA0($a3)
    ctx->pc = 0x465f34u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 7840), (uint8_t)GPR_U32(ctx, 3));
label_465f38:
    // 0x465f38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x465f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_465f3c:
    // 0x465f3c: 0x296182b  sltu        $v1, $s4, $s6
    ctx->pc = 0x465f3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_465f40:
    // 0x465f40: 0x1460ffa0  bnez        $v1, . + 4 + (-0x60 << 2)
label_465f44:
    if (ctx->pc == 0x465F44u) {
        ctx->pc = 0x465F44u;
            // 0x465f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x465F48u;
        goto label_465f48;
    }
    ctx->pc = 0x465F40u;
    {
        const bool branch_taken_0x465f40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x465F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465F40u;
            // 0x465f44: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f40) {
            ctx->pc = 0x465DC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_465dc4;
        }
    }
    ctx->pc = 0x465F48u;
label_465f48:
    // 0x465f48: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x465f48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_465f4c:
    // 0x465f4c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x465f4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_465f50:
    // 0x465f50: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x465f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_465f54:
    // 0x465f54: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x465f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_465f58:
    // 0x465f58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x465f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_465f5c:
    // 0x465f5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x465f5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_465f60:
    // 0x465f60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x465f60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_465f64:
    // 0x465f64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x465f64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_465f68:
    // 0x465f68: 0x3e00008  jr          $ra
label_465f6c:
    if (ctx->pc == 0x465F6Cu) {
        ctx->pc = 0x465F6Cu;
            // 0x465f6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x465F70u;
        goto label_465f70;
    }
    ctx->pc = 0x465F68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x465F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465F68u;
            // 0x465f6c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x465F70u;
label_465f70:
    // 0x465f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x465f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_465f74:
    // 0x465f74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x465f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_465f78:
    // 0x465f78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x465f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_465f7c:
    // 0x465f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x465f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_465f80:
    // 0x465f80: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x465f80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_465f84:
    // 0x465f84: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x465f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_465f88:
    // 0x465f88: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x465f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_465f8c:
    // 0x465f8c: 0x1060006c  beqz        $v1, . + 4 + (0x6C << 2)
label_465f90:
    if (ctx->pc == 0x465F90u) {
        ctx->pc = 0x465F90u;
            // 0x465f90: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->pc = 0x465F94u;
        goto label_465f94;
    }
    ctx->pc = 0x465F8Cu;
    {
        const bool branch_taken_0x465f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x465F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x465F8Cu;
            // 0x465f90: 0x24910084  addiu       $s1, $a0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x465f8c) {
            ctx->pc = 0x466140u;
            goto label_466140;
        }
    }
    ctx->pc = 0x465F94u;
label_465f94:
    // 0x465f94: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x465f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_465f98:
    // 0x465f98: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x465f98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_465f9c:
    // 0x465f9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x465f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_465fa0:
    // 0x465fa0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x465fa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_465fa4:
    // 0x465fa4: 0x320f809  jalr        $t9
label_465fa8:
    if (ctx->pc == 0x465FA8u) {
        ctx->pc = 0x465FACu;
        goto label_465fac;
    }
    ctx->pc = 0x465FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x465FACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x465FACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x465FACu; }
            if (ctx->pc != 0x465FACu) { return; }
        }
        }
    }
    ctx->pc = 0x465FACu;
label_465fac:
    // 0x465fac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x465facu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_465fb0:
    // 0x465fb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x465fb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_465fb4:
    // 0x465fb4: 0xc075128  jal         func_1D44A0
label_465fb8:
    if (ctx->pc == 0x465FB8u) {
        ctx->pc = 0x465FB8u;
            // 0x465fb8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x465FBCu;
        goto label_465fbc;
    }
    ctx->pc = 0x465FB4u;
    SET_GPR_U32(ctx, 31, 0x465FBCu);
    ctx->pc = 0x465FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x465FB4u;
            // 0x465fb8: 0x26450004  addiu       $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465FBCu; }
        if (ctx->pc != 0x465FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x465FBCu; }
        if (ctx->pc != 0x465FBCu) { return; }
    }
    ctx->pc = 0x465FBCu;
label_465fbc:
    // 0x465fbc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x465fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_465fc0:
    // 0x465fc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465fc4:
    // 0x465fc4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x465fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_465fc8:
    // 0x465fc8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x465fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_465fcc:
    // 0x465fcc: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x465fccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_465fd0:
    // 0x465fd0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_465fd4:
    if (ctx->pc == 0x465FD4u) {
        ctx->pc = 0x465FD4u;
            // 0x465fd4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x465FD8u;
        goto label_465fd8;
    }
    ctx->pc = 0x465FD0u;
    {
        const bool branch_taken_0x465fd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x465fd0) {
            ctx->pc = 0x465FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465FD0u;
            // 0x465fd4: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x465FE4u;
            goto label_465fe4;
        }
    }
    ctx->pc = 0x465FD8u;
label_465fd8:
    // 0x465fd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465fdc:
    // 0x465fdc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x465fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_465fe0:
    // 0x465fe0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x465fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_465fe4:
    // 0x465fe4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_465fe8:
    // 0x465fe8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x465fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_465fec:
    // 0x465fec: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x465fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_465ff0:
    // 0x465ff0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x465ff0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_465ff4:
    // 0x465ff4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_465ff8:
    if (ctx->pc == 0x465FF8u) {
        ctx->pc = 0x465FF8u;
            // 0x465ff8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x465FFCu;
        goto label_465ffc;
    }
    ctx->pc = 0x465FF4u;
    {
        const bool branch_taken_0x465ff4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x465ff4) {
            ctx->pc = 0x465FF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x465FF4u;
            // 0x465ff8: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466008u;
            goto label_466008;
        }
    }
    ctx->pc = 0x465FFCu;
label_465ffc:
    // 0x465ffc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x465ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466000:
    // 0x466000: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x466000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_466004:
    // 0x466004: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x466004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_466008:
    // 0x466008: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46600c:
    // 0x46600c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x46600cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_466010:
    // 0x466010: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x466010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_466014:
    // 0x466014: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x466014u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_466018:
    // 0x466018: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_46601c:
    if (ctx->pc == 0x46601Cu) {
        ctx->pc = 0x46601Cu;
            // 0x46601c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x466020u;
        goto label_466020;
    }
    ctx->pc = 0x466018u;
    {
        const bool branch_taken_0x466018 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466018) {
            ctx->pc = 0x46601Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466018u;
            // 0x46601c: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46602Cu;
            goto label_46602c;
        }
    }
    ctx->pc = 0x466020u;
label_466020:
    // 0x466020: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466024:
    // 0x466024: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x466024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_466028:
    // 0x466028: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x466028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_46602c:
    // 0x46602c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x46602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466030:
    // 0x466030: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x466030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_466034:
    // 0x466034: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x466034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_466038:
    // 0x466038: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x466038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_46603c:
    // 0x46603c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x46603cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_466040:
    // 0x466040: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_466044:
    if (ctx->pc == 0x466044u) {
        ctx->pc = 0x466044u;
            // 0x466044: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x466048u;
        goto label_466048;
    }
    ctx->pc = 0x466040u;
    {
        const bool branch_taken_0x466040 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466040) {
            ctx->pc = 0x466044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466040u;
            // 0x466044: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466054u;
            goto label_466054;
        }
    }
    ctx->pc = 0x466048u;
label_466048:
    // 0x466048: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_46604c:
    // 0x46604c: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x46604cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_466050:
    // 0x466050: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x466050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_466054:
    // 0x466054: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466058:
    // 0x466058: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x466058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_46605c:
    // 0x46605c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x46605cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_466060:
    // 0x466060: 0x701818  mult        $v1, $v1, $s0
    ctx->pc = 0x466060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_466064:
    // 0x466064: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x466064u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_466068:
    // 0x466068: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_46606c:
    if (ctx->pc == 0x46606Cu) {
        ctx->pc = 0x46606Cu;
            // 0x46606c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->pc = 0x466070u;
        goto label_466070;
    }
    ctx->pc = 0x466068u;
    {
        const bool branch_taken_0x466068 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466068) {
            ctx->pc = 0x46606Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466068u;
            // 0x46606c: 0x8e420020  lw          $v0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x46607Cu;
            goto label_46607c;
        }
    }
    ctx->pc = 0x466070u;
label_466070:
    // 0x466070: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x466070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_466074:
    // 0x466074: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x466074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_466078:
    // 0x466078: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x466078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_46607c:
    // 0x46607c: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x46607cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_466080:
    // 0x466080: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x466080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_466084:
    // 0x466084: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x466084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466088:
    // 0x466088: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x466088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_46608c:
    // 0x46608c: 0xc074f30  jal         func_1D3CC0
label_466090:
    if (ctx->pc == 0x466090u) {
        ctx->pc = 0x466090u;
            // 0x466090: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x466094u;
        goto label_466094;
    }
    ctx->pc = 0x46608Cu;
    SET_GPR_U32(ctx, 31, 0x466094u);
    ctx->pc = 0x466090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x46608Cu;
            // 0x466090: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466094u; }
        if (ctx->pc != 0x466094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x466094u; }
        if (ctx->pc != 0x466094u) { return; }
    }
    ctx->pc = 0x466094u;
label_466094:
    // 0x466094: 0x8e460020  lw          $a2, 0x20($s2)
    ctx->pc = 0x466094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_466098:
    // 0x466098: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x466098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_46609c:
    // 0x46609c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x46609cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4660a0:
    // 0x4660a0: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x4660a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_4660a4:
    // 0x4660a4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x4660a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_4660a8:
    // 0x4660a8: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x4660a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_4660ac:
    // 0x4660ac: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x4660acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_4660b0:
    // 0x4660b0: 0xc0751b8  jal         func_1D46E0
label_4660b4:
    if (ctx->pc == 0x4660B4u) {
        ctx->pc = 0x4660B4u;
            // 0x4660b4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x4660B8u;
        goto label_4660b8;
    }
    ctx->pc = 0x4660B0u;
    SET_GPR_U32(ctx, 31, 0x4660B8u);
    ctx->pc = 0x4660B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4660B0u;
            // 0x4660b4: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4660B8u; }
        if (ctx->pc != 0x4660B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4660B8u; }
        if (ctx->pc != 0x4660B8u) { return; }
    }
    ctx->pc = 0x4660B8u;
label_4660b8:
    // 0x4660b8: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4660b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4660bc:
    // 0x4660bc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4660bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4660c0:
    // 0x4660c0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x4660c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_4660c4:
    // 0x4660c4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4660c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4660c8:
    // 0x4660c8: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4660c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4660cc:
    // 0x4660cc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4660ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4660d0:
    // 0x4660d0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4660d4:
    if (ctx->pc == 0x4660D4u) {
        ctx->pc = 0x4660D4u;
            // 0x4660d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x4660D8u;
        goto label_4660d8;
    }
    ctx->pc = 0x4660D0u;
    {
        const bool branch_taken_0x4660d0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4660d0) {
            ctx->pc = 0x4660D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4660D0u;
            // 0x4660d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4660E4u;
            goto label_4660e4;
        }
    }
    ctx->pc = 0x4660D8u;
label_4660d8:
    // 0x4660d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4660d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4660dc:
    // 0x4660dc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4660dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4660e0:
    // 0x4660e0: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x4660e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_4660e4:
    // 0x4660e4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4660e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4660e8:
    // 0x4660e8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4660e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4660ec:
    // 0x4660ec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4660ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4660f0:
    // 0x4660f0: 0x902018  mult        $a0, $a0, $s0
    ctx->pc = 0x4660f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4660f4:
    // 0x4660f4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4660f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4660f8:
    // 0x4660f8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4660fc:
    if (ctx->pc == 0x4660FCu) {
        ctx->pc = 0x466100u;
        goto label_466100;
    }
    ctx->pc = 0x4660F8u;
    {
        const bool branch_taken_0x4660f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4660f8) {
            ctx->pc = 0x466108u;
            goto label_466108;
        }
    }
    ctx->pc = 0x466100u;
label_466100:
    // 0x466100: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x466100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_466104:
    // 0x466104: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x466104u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_466108:
    // 0x466108: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x466108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46610c:
    // 0x46610c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x46610cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_466110:
    // 0x466110: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x466110u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_466114:
    // 0x466114: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_466118:
    if (ctx->pc == 0x466118u) {
        ctx->pc = 0x46611Cu;
        goto label_46611c;
    }
    ctx->pc = 0x466114u;
    {
        const bool branch_taken_0x466114 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466114) {
            ctx->pc = 0x466124u;
            goto label_466124;
        }
    }
    ctx->pc = 0x46611Cu;
label_46611c:
    // 0x46611c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x46611cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_466120:
    // 0x466120: 0xac70e3c8  sw          $s0, -0x1C38($v1)
    ctx->pc = 0x466120u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 16));
label_466124:
    // 0x466124: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x466124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_466128:
    // 0x466128: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x466128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_46612c:
    // 0x46612c: 0x70082b  sltu        $at, $v1, $s0
    ctx->pc = 0x46612cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_466130:
    // 0x466130: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_466134:
    if (ctx->pc == 0x466134u) {
        ctx->pc = 0x466134u;
            // 0x466134: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x466138u;
        goto label_466138;
    }
    ctx->pc = 0x466130u;
    {
        const bool branch_taken_0x466130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x466130) {
            ctx->pc = 0x466134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x466130u;
            // 0x466134: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x466144u;
            goto label_466144;
        }
    }
    ctx->pc = 0x466138u;
label_466138:
    // 0x466138: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x466138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_46613c:
    // 0x46613c: 0xac70e3d0  sw          $s0, -0x1C30($v1)
    ctx->pc = 0x46613cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 16));
label_466140:
    // 0x466140: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x466140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_466144:
    // 0x466144: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x466144u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466148:
    // 0x466148: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_46614c:
    // 0x46614c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46614cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466150:
    // 0x466150: 0x3e00008  jr          $ra
label_466154:
    if (ctx->pc == 0x466154u) {
        ctx->pc = 0x466154u;
            // 0x466154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x466158u;
        goto label_466158;
    }
    ctx->pc = 0x466150u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x466154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466150u;
            // 0x466154: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x466158u;
label_466158:
    // 0x466158: 0x0  nop
    ctx->pc = 0x466158u;
    // NOP
label_46615c:
    // 0x46615c: 0x0  nop
    ctx->pc = 0x46615cu;
    // NOP
label_466160:
    // 0x466160: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x466160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_466164:
    // 0x466164: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x466164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_466168:
    // 0x466168: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x466168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_46616c:
    // 0x46616c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x46616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_466170:
    // 0x466170: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x466170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_466174:
    // 0x466174: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x466174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_466178:
    // 0x466178: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x466178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_46617c:
    // 0x46617c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46617cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_466180:
    // 0x466180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x466180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_466184:
    // 0x466184: 0x8c910070  lw          $s1, 0x70($a0)
    ctx->pc = 0x466184u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_466188:
    // 0x466188: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
label_46618c:
    if (ctx->pc == 0x46618Cu) {
        ctx->pc = 0x46618Cu;
            // 0x46618c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x466190u;
        goto label_466190;
    }
    ctx->pc = 0x466188u;
    {
        const bool branch_taken_0x466188 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x46618Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466188u;
            // 0x46618c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x466188) {
            ctx->pc = 0x466218u;
            goto label_466218;
        }
    }
    ctx->pc = 0x466190u;
label_466190:
    // 0x466190: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x466190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466194:
    // 0x466194: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x466194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_466198:
    // 0x466198: 0x8ec40074  lw          $a0, 0x74($s6)
    ctx->pc = 0x466198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 116)));
label_46619c:
    // 0x46619c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x46619cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4661a0:
    // 0x4661a0: 0x2463e7b0  addiu       $v1, $v1, -0x1850
    ctx->pc = 0x4661a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961072));
label_4661a4:
    // 0x4661a4: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x4661a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_4661a8:
    // 0x4661a8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4661a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4661ac:
    // 0x4661ac: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x4661acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4661b0:
    // 0x4661b0: 0xa0801ea0  sb          $zero, 0x1EA0($a0)
    ctx->pc = 0x4661b0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 7840), (uint8_t)GPR_U32(ctx, 0));
label_4661b4:
    // 0x4661b4: 0x9205006c  lbu         $a1, 0x6C($s0)
    ctx->pc = 0x4661b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 108)));
label_4661b8:
    // 0x4661b8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x4661b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4661bc:
    // 0x4661bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4661bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4661c0:
    // 0x4661c0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x4661c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_4661c4:
    // 0x4661c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4661c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4661c8:
    // 0x4661c8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4661c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4661cc:
    // 0x4661cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4661ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4661d0:
    // 0x4661d0: 0x90740000  lbu         $s4, 0x0($v1)
    ctx->pc = 0x4661d0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_4661d4:
    // 0x4661d4: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_4661d8:
    if (ctx->pc == 0x4661D8u) {
        ctx->pc = 0x4661DCu;
        goto label_4661dc;
    }
    ctx->pc = 0x4661D4u;
    {
        const bool branch_taken_0x4661d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4661d4) {
            ctx->pc = 0x466200u;
            goto label_466200;
        }
    }
    ctx->pc = 0x4661DCu;
label_4661dc:
    // 0x4661dc: 0x8e130068  lw          $s3, 0x68($s0)
    ctx->pc = 0x4661dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_4661e0:
    // 0x4661e0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4661e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4661e4:
    // 0x4661e4: 0x8f39004c  lw          $t9, 0x4C($t9)
    ctx->pc = 0x4661e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 76)));
label_4661e8:
    // 0x4661e8: 0x320f809  jalr        $t9
label_4661ec:
    if (ctx->pc == 0x4661ECu) {
        ctx->pc = 0x4661ECu;
            // 0x4661ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4661F0u;
        goto label_4661f0;
    }
    ctx->pc = 0x4661E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4661F0u);
        ctx->pc = 0x4661ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4661E8u;
            // 0x4661ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4661F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4661F0u; }
            if (ctx->pc != 0x4661F0u) { return; }
        }
        }
    }
    ctx->pc = 0x4661F0u;
label_4661f0:
    // 0x4661f0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x4661f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_4661f4:
    // 0x4661f4: 0x1680fffa  bnez        $s4, . + 4 + (-0x6 << 2)
label_4661f8:
    if (ctx->pc == 0x4661F8u) {
        ctx->pc = 0x4661F8u;
            // 0x4661f8: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->pc = 0x4661FCu;
        goto label_4661fc;
    }
    ctx->pc = 0x4661F4u;
    {
        const bool branch_taken_0x4661f4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x4661F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4661F4u;
            // 0x4661f8: 0x26730310  addiu       $s3, $s3, 0x310 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4661f4) {
            ctx->pc = 0x4661E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4661e0;
        }
    }
    ctx->pc = 0x4661FCu;
label_4661fc:
    // 0x4661fc: 0x0  nop
    ctx->pc = 0x4661fcu;
    // NOP
label_466200:
    // 0x466200: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x466200u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_466204:
    // 0x466204: 0x2b1182b  sltu        $v1, $s5, $s1
    ctx->pc = 0x466204u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_466208:
    // 0x466208: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x466208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
label_46620c:
    // 0x46620c: 0x1460ffe2  bnez        $v1, . + 4 + (-0x1E << 2)
label_466210:
    if (ctx->pc == 0x466210u) {
        ctx->pc = 0x466210u;
            // 0x466210: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x466214u;
        goto label_466214;
    }
    ctx->pc = 0x46620Cu;
    {
        const bool branch_taken_0x46620c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x466210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x46620Cu;
            // 0x466210: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46620c) {
            ctx->pc = 0x466198u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_466198;
        }
    }
    ctx->pc = 0x466214u;
label_466214:
    // 0x466214: 0x0  nop
    ctx->pc = 0x466214u;
    // NOP
label_466218:
    // 0x466218: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x466218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_46621c:
    // 0x46621c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x46621cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_466220:
    // 0x466220: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x466220u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_466224:
    // 0x466224: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x466224u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_466228:
    // 0x466228: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x466228u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_46622c:
    // 0x46622c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x46622cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_466230:
    // 0x466230: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x466230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_466234:
    // 0x466234: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x466234u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_466238:
    // 0x466238: 0x3e00008  jr          $ra
label_46623c:
    if (ctx->pc == 0x46623Cu) {
        ctx->pc = 0x46623Cu;
            // 0x46623c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x466240u;
        goto label_fallthrough_0x466238;
    }
    ctx->pc = 0x466238u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46623Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x466238u;
            // 0x46623c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x466238:
    ctx->pc = 0x466240u;
}
