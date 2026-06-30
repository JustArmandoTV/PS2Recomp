#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00485A20
// Address: 0x485a20 - 0x4864a0
void sub_00485A20_0x485a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00485A20_0x485a20");
#endif

    switch (ctx->pc) {
        case 0x485a20u: goto label_485a20;
        case 0x485a24u: goto label_485a24;
        case 0x485a28u: goto label_485a28;
        case 0x485a2cu: goto label_485a2c;
        case 0x485a30u: goto label_485a30;
        case 0x485a34u: goto label_485a34;
        case 0x485a38u: goto label_485a38;
        case 0x485a3cu: goto label_485a3c;
        case 0x485a40u: goto label_485a40;
        case 0x485a44u: goto label_485a44;
        case 0x485a48u: goto label_485a48;
        case 0x485a4cu: goto label_485a4c;
        case 0x485a50u: goto label_485a50;
        case 0x485a54u: goto label_485a54;
        case 0x485a58u: goto label_485a58;
        case 0x485a5cu: goto label_485a5c;
        case 0x485a60u: goto label_485a60;
        case 0x485a64u: goto label_485a64;
        case 0x485a68u: goto label_485a68;
        case 0x485a6cu: goto label_485a6c;
        case 0x485a70u: goto label_485a70;
        case 0x485a74u: goto label_485a74;
        case 0x485a78u: goto label_485a78;
        case 0x485a7cu: goto label_485a7c;
        case 0x485a80u: goto label_485a80;
        case 0x485a84u: goto label_485a84;
        case 0x485a88u: goto label_485a88;
        case 0x485a8cu: goto label_485a8c;
        case 0x485a90u: goto label_485a90;
        case 0x485a94u: goto label_485a94;
        case 0x485a98u: goto label_485a98;
        case 0x485a9cu: goto label_485a9c;
        case 0x485aa0u: goto label_485aa0;
        case 0x485aa4u: goto label_485aa4;
        case 0x485aa8u: goto label_485aa8;
        case 0x485aacu: goto label_485aac;
        case 0x485ab0u: goto label_485ab0;
        case 0x485ab4u: goto label_485ab4;
        case 0x485ab8u: goto label_485ab8;
        case 0x485abcu: goto label_485abc;
        case 0x485ac0u: goto label_485ac0;
        case 0x485ac4u: goto label_485ac4;
        case 0x485ac8u: goto label_485ac8;
        case 0x485accu: goto label_485acc;
        case 0x485ad0u: goto label_485ad0;
        case 0x485ad4u: goto label_485ad4;
        case 0x485ad8u: goto label_485ad8;
        case 0x485adcu: goto label_485adc;
        case 0x485ae0u: goto label_485ae0;
        case 0x485ae4u: goto label_485ae4;
        case 0x485ae8u: goto label_485ae8;
        case 0x485aecu: goto label_485aec;
        case 0x485af0u: goto label_485af0;
        case 0x485af4u: goto label_485af4;
        case 0x485af8u: goto label_485af8;
        case 0x485afcu: goto label_485afc;
        case 0x485b00u: goto label_485b00;
        case 0x485b04u: goto label_485b04;
        case 0x485b08u: goto label_485b08;
        case 0x485b0cu: goto label_485b0c;
        case 0x485b10u: goto label_485b10;
        case 0x485b14u: goto label_485b14;
        case 0x485b18u: goto label_485b18;
        case 0x485b1cu: goto label_485b1c;
        case 0x485b20u: goto label_485b20;
        case 0x485b24u: goto label_485b24;
        case 0x485b28u: goto label_485b28;
        case 0x485b2cu: goto label_485b2c;
        case 0x485b30u: goto label_485b30;
        case 0x485b34u: goto label_485b34;
        case 0x485b38u: goto label_485b38;
        case 0x485b3cu: goto label_485b3c;
        case 0x485b40u: goto label_485b40;
        case 0x485b44u: goto label_485b44;
        case 0x485b48u: goto label_485b48;
        case 0x485b4cu: goto label_485b4c;
        case 0x485b50u: goto label_485b50;
        case 0x485b54u: goto label_485b54;
        case 0x485b58u: goto label_485b58;
        case 0x485b5cu: goto label_485b5c;
        case 0x485b60u: goto label_485b60;
        case 0x485b64u: goto label_485b64;
        case 0x485b68u: goto label_485b68;
        case 0x485b6cu: goto label_485b6c;
        case 0x485b70u: goto label_485b70;
        case 0x485b74u: goto label_485b74;
        case 0x485b78u: goto label_485b78;
        case 0x485b7cu: goto label_485b7c;
        case 0x485b80u: goto label_485b80;
        case 0x485b84u: goto label_485b84;
        case 0x485b88u: goto label_485b88;
        case 0x485b8cu: goto label_485b8c;
        case 0x485b90u: goto label_485b90;
        case 0x485b94u: goto label_485b94;
        case 0x485b98u: goto label_485b98;
        case 0x485b9cu: goto label_485b9c;
        case 0x485ba0u: goto label_485ba0;
        case 0x485ba4u: goto label_485ba4;
        case 0x485ba8u: goto label_485ba8;
        case 0x485bacu: goto label_485bac;
        case 0x485bb0u: goto label_485bb0;
        case 0x485bb4u: goto label_485bb4;
        case 0x485bb8u: goto label_485bb8;
        case 0x485bbcu: goto label_485bbc;
        case 0x485bc0u: goto label_485bc0;
        case 0x485bc4u: goto label_485bc4;
        case 0x485bc8u: goto label_485bc8;
        case 0x485bccu: goto label_485bcc;
        case 0x485bd0u: goto label_485bd0;
        case 0x485bd4u: goto label_485bd4;
        case 0x485bd8u: goto label_485bd8;
        case 0x485bdcu: goto label_485bdc;
        case 0x485be0u: goto label_485be0;
        case 0x485be4u: goto label_485be4;
        case 0x485be8u: goto label_485be8;
        case 0x485becu: goto label_485bec;
        case 0x485bf0u: goto label_485bf0;
        case 0x485bf4u: goto label_485bf4;
        case 0x485bf8u: goto label_485bf8;
        case 0x485bfcu: goto label_485bfc;
        case 0x485c00u: goto label_485c00;
        case 0x485c04u: goto label_485c04;
        case 0x485c08u: goto label_485c08;
        case 0x485c0cu: goto label_485c0c;
        case 0x485c10u: goto label_485c10;
        case 0x485c14u: goto label_485c14;
        case 0x485c18u: goto label_485c18;
        case 0x485c1cu: goto label_485c1c;
        case 0x485c20u: goto label_485c20;
        case 0x485c24u: goto label_485c24;
        case 0x485c28u: goto label_485c28;
        case 0x485c2cu: goto label_485c2c;
        case 0x485c30u: goto label_485c30;
        case 0x485c34u: goto label_485c34;
        case 0x485c38u: goto label_485c38;
        case 0x485c3cu: goto label_485c3c;
        case 0x485c40u: goto label_485c40;
        case 0x485c44u: goto label_485c44;
        case 0x485c48u: goto label_485c48;
        case 0x485c4cu: goto label_485c4c;
        case 0x485c50u: goto label_485c50;
        case 0x485c54u: goto label_485c54;
        case 0x485c58u: goto label_485c58;
        case 0x485c5cu: goto label_485c5c;
        case 0x485c60u: goto label_485c60;
        case 0x485c64u: goto label_485c64;
        case 0x485c68u: goto label_485c68;
        case 0x485c6cu: goto label_485c6c;
        case 0x485c70u: goto label_485c70;
        case 0x485c74u: goto label_485c74;
        case 0x485c78u: goto label_485c78;
        case 0x485c7cu: goto label_485c7c;
        case 0x485c80u: goto label_485c80;
        case 0x485c84u: goto label_485c84;
        case 0x485c88u: goto label_485c88;
        case 0x485c8cu: goto label_485c8c;
        case 0x485c90u: goto label_485c90;
        case 0x485c94u: goto label_485c94;
        case 0x485c98u: goto label_485c98;
        case 0x485c9cu: goto label_485c9c;
        case 0x485ca0u: goto label_485ca0;
        case 0x485ca4u: goto label_485ca4;
        case 0x485ca8u: goto label_485ca8;
        case 0x485cacu: goto label_485cac;
        case 0x485cb0u: goto label_485cb0;
        case 0x485cb4u: goto label_485cb4;
        case 0x485cb8u: goto label_485cb8;
        case 0x485cbcu: goto label_485cbc;
        case 0x485cc0u: goto label_485cc0;
        case 0x485cc4u: goto label_485cc4;
        case 0x485cc8u: goto label_485cc8;
        case 0x485cccu: goto label_485ccc;
        case 0x485cd0u: goto label_485cd0;
        case 0x485cd4u: goto label_485cd4;
        case 0x485cd8u: goto label_485cd8;
        case 0x485cdcu: goto label_485cdc;
        case 0x485ce0u: goto label_485ce0;
        case 0x485ce4u: goto label_485ce4;
        case 0x485ce8u: goto label_485ce8;
        case 0x485cecu: goto label_485cec;
        case 0x485cf0u: goto label_485cf0;
        case 0x485cf4u: goto label_485cf4;
        case 0x485cf8u: goto label_485cf8;
        case 0x485cfcu: goto label_485cfc;
        case 0x485d00u: goto label_485d00;
        case 0x485d04u: goto label_485d04;
        case 0x485d08u: goto label_485d08;
        case 0x485d0cu: goto label_485d0c;
        case 0x485d10u: goto label_485d10;
        case 0x485d14u: goto label_485d14;
        case 0x485d18u: goto label_485d18;
        case 0x485d1cu: goto label_485d1c;
        case 0x485d20u: goto label_485d20;
        case 0x485d24u: goto label_485d24;
        case 0x485d28u: goto label_485d28;
        case 0x485d2cu: goto label_485d2c;
        case 0x485d30u: goto label_485d30;
        case 0x485d34u: goto label_485d34;
        case 0x485d38u: goto label_485d38;
        case 0x485d3cu: goto label_485d3c;
        case 0x485d40u: goto label_485d40;
        case 0x485d44u: goto label_485d44;
        case 0x485d48u: goto label_485d48;
        case 0x485d4cu: goto label_485d4c;
        case 0x485d50u: goto label_485d50;
        case 0x485d54u: goto label_485d54;
        case 0x485d58u: goto label_485d58;
        case 0x485d5cu: goto label_485d5c;
        case 0x485d60u: goto label_485d60;
        case 0x485d64u: goto label_485d64;
        case 0x485d68u: goto label_485d68;
        case 0x485d6cu: goto label_485d6c;
        case 0x485d70u: goto label_485d70;
        case 0x485d74u: goto label_485d74;
        case 0x485d78u: goto label_485d78;
        case 0x485d7cu: goto label_485d7c;
        case 0x485d80u: goto label_485d80;
        case 0x485d84u: goto label_485d84;
        case 0x485d88u: goto label_485d88;
        case 0x485d8cu: goto label_485d8c;
        case 0x485d90u: goto label_485d90;
        case 0x485d94u: goto label_485d94;
        case 0x485d98u: goto label_485d98;
        case 0x485d9cu: goto label_485d9c;
        case 0x485da0u: goto label_485da0;
        case 0x485da4u: goto label_485da4;
        case 0x485da8u: goto label_485da8;
        case 0x485dacu: goto label_485dac;
        case 0x485db0u: goto label_485db0;
        case 0x485db4u: goto label_485db4;
        case 0x485db8u: goto label_485db8;
        case 0x485dbcu: goto label_485dbc;
        case 0x485dc0u: goto label_485dc0;
        case 0x485dc4u: goto label_485dc4;
        case 0x485dc8u: goto label_485dc8;
        case 0x485dccu: goto label_485dcc;
        case 0x485dd0u: goto label_485dd0;
        case 0x485dd4u: goto label_485dd4;
        case 0x485dd8u: goto label_485dd8;
        case 0x485ddcu: goto label_485ddc;
        case 0x485de0u: goto label_485de0;
        case 0x485de4u: goto label_485de4;
        case 0x485de8u: goto label_485de8;
        case 0x485decu: goto label_485dec;
        case 0x485df0u: goto label_485df0;
        case 0x485df4u: goto label_485df4;
        case 0x485df8u: goto label_485df8;
        case 0x485dfcu: goto label_485dfc;
        case 0x485e00u: goto label_485e00;
        case 0x485e04u: goto label_485e04;
        case 0x485e08u: goto label_485e08;
        case 0x485e0cu: goto label_485e0c;
        case 0x485e10u: goto label_485e10;
        case 0x485e14u: goto label_485e14;
        case 0x485e18u: goto label_485e18;
        case 0x485e1cu: goto label_485e1c;
        case 0x485e20u: goto label_485e20;
        case 0x485e24u: goto label_485e24;
        case 0x485e28u: goto label_485e28;
        case 0x485e2cu: goto label_485e2c;
        case 0x485e30u: goto label_485e30;
        case 0x485e34u: goto label_485e34;
        case 0x485e38u: goto label_485e38;
        case 0x485e3cu: goto label_485e3c;
        case 0x485e40u: goto label_485e40;
        case 0x485e44u: goto label_485e44;
        case 0x485e48u: goto label_485e48;
        case 0x485e4cu: goto label_485e4c;
        case 0x485e50u: goto label_485e50;
        case 0x485e54u: goto label_485e54;
        case 0x485e58u: goto label_485e58;
        case 0x485e5cu: goto label_485e5c;
        case 0x485e60u: goto label_485e60;
        case 0x485e64u: goto label_485e64;
        case 0x485e68u: goto label_485e68;
        case 0x485e6cu: goto label_485e6c;
        case 0x485e70u: goto label_485e70;
        case 0x485e74u: goto label_485e74;
        case 0x485e78u: goto label_485e78;
        case 0x485e7cu: goto label_485e7c;
        case 0x485e80u: goto label_485e80;
        case 0x485e84u: goto label_485e84;
        case 0x485e88u: goto label_485e88;
        case 0x485e8cu: goto label_485e8c;
        case 0x485e90u: goto label_485e90;
        case 0x485e94u: goto label_485e94;
        case 0x485e98u: goto label_485e98;
        case 0x485e9cu: goto label_485e9c;
        case 0x485ea0u: goto label_485ea0;
        case 0x485ea4u: goto label_485ea4;
        case 0x485ea8u: goto label_485ea8;
        case 0x485eacu: goto label_485eac;
        case 0x485eb0u: goto label_485eb0;
        case 0x485eb4u: goto label_485eb4;
        case 0x485eb8u: goto label_485eb8;
        case 0x485ebcu: goto label_485ebc;
        case 0x485ec0u: goto label_485ec0;
        case 0x485ec4u: goto label_485ec4;
        case 0x485ec8u: goto label_485ec8;
        case 0x485eccu: goto label_485ecc;
        case 0x485ed0u: goto label_485ed0;
        case 0x485ed4u: goto label_485ed4;
        case 0x485ed8u: goto label_485ed8;
        case 0x485edcu: goto label_485edc;
        case 0x485ee0u: goto label_485ee0;
        case 0x485ee4u: goto label_485ee4;
        case 0x485ee8u: goto label_485ee8;
        case 0x485eecu: goto label_485eec;
        case 0x485ef0u: goto label_485ef0;
        case 0x485ef4u: goto label_485ef4;
        case 0x485ef8u: goto label_485ef8;
        case 0x485efcu: goto label_485efc;
        case 0x485f00u: goto label_485f00;
        case 0x485f04u: goto label_485f04;
        case 0x485f08u: goto label_485f08;
        case 0x485f0cu: goto label_485f0c;
        case 0x485f10u: goto label_485f10;
        case 0x485f14u: goto label_485f14;
        case 0x485f18u: goto label_485f18;
        case 0x485f1cu: goto label_485f1c;
        case 0x485f20u: goto label_485f20;
        case 0x485f24u: goto label_485f24;
        case 0x485f28u: goto label_485f28;
        case 0x485f2cu: goto label_485f2c;
        case 0x485f30u: goto label_485f30;
        case 0x485f34u: goto label_485f34;
        case 0x485f38u: goto label_485f38;
        case 0x485f3cu: goto label_485f3c;
        case 0x485f40u: goto label_485f40;
        case 0x485f44u: goto label_485f44;
        case 0x485f48u: goto label_485f48;
        case 0x485f4cu: goto label_485f4c;
        case 0x485f50u: goto label_485f50;
        case 0x485f54u: goto label_485f54;
        case 0x485f58u: goto label_485f58;
        case 0x485f5cu: goto label_485f5c;
        case 0x485f60u: goto label_485f60;
        case 0x485f64u: goto label_485f64;
        case 0x485f68u: goto label_485f68;
        case 0x485f6cu: goto label_485f6c;
        case 0x485f70u: goto label_485f70;
        case 0x485f74u: goto label_485f74;
        case 0x485f78u: goto label_485f78;
        case 0x485f7cu: goto label_485f7c;
        case 0x485f80u: goto label_485f80;
        case 0x485f84u: goto label_485f84;
        case 0x485f88u: goto label_485f88;
        case 0x485f8cu: goto label_485f8c;
        case 0x485f90u: goto label_485f90;
        case 0x485f94u: goto label_485f94;
        case 0x485f98u: goto label_485f98;
        case 0x485f9cu: goto label_485f9c;
        case 0x485fa0u: goto label_485fa0;
        case 0x485fa4u: goto label_485fa4;
        case 0x485fa8u: goto label_485fa8;
        case 0x485facu: goto label_485fac;
        case 0x485fb0u: goto label_485fb0;
        case 0x485fb4u: goto label_485fb4;
        case 0x485fb8u: goto label_485fb8;
        case 0x485fbcu: goto label_485fbc;
        case 0x485fc0u: goto label_485fc0;
        case 0x485fc4u: goto label_485fc4;
        case 0x485fc8u: goto label_485fc8;
        case 0x485fccu: goto label_485fcc;
        case 0x485fd0u: goto label_485fd0;
        case 0x485fd4u: goto label_485fd4;
        case 0x485fd8u: goto label_485fd8;
        case 0x485fdcu: goto label_485fdc;
        case 0x485fe0u: goto label_485fe0;
        case 0x485fe4u: goto label_485fe4;
        case 0x485fe8u: goto label_485fe8;
        case 0x485fecu: goto label_485fec;
        case 0x485ff0u: goto label_485ff0;
        case 0x485ff4u: goto label_485ff4;
        case 0x485ff8u: goto label_485ff8;
        case 0x485ffcu: goto label_485ffc;
        case 0x486000u: goto label_486000;
        case 0x486004u: goto label_486004;
        case 0x486008u: goto label_486008;
        case 0x48600cu: goto label_48600c;
        case 0x486010u: goto label_486010;
        case 0x486014u: goto label_486014;
        case 0x486018u: goto label_486018;
        case 0x48601cu: goto label_48601c;
        case 0x486020u: goto label_486020;
        case 0x486024u: goto label_486024;
        case 0x486028u: goto label_486028;
        case 0x48602cu: goto label_48602c;
        case 0x486030u: goto label_486030;
        case 0x486034u: goto label_486034;
        case 0x486038u: goto label_486038;
        case 0x48603cu: goto label_48603c;
        case 0x486040u: goto label_486040;
        case 0x486044u: goto label_486044;
        case 0x486048u: goto label_486048;
        case 0x48604cu: goto label_48604c;
        case 0x486050u: goto label_486050;
        case 0x486054u: goto label_486054;
        case 0x486058u: goto label_486058;
        case 0x48605cu: goto label_48605c;
        case 0x486060u: goto label_486060;
        case 0x486064u: goto label_486064;
        case 0x486068u: goto label_486068;
        case 0x48606cu: goto label_48606c;
        case 0x486070u: goto label_486070;
        case 0x486074u: goto label_486074;
        case 0x486078u: goto label_486078;
        case 0x48607cu: goto label_48607c;
        case 0x486080u: goto label_486080;
        case 0x486084u: goto label_486084;
        case 0x486088u: goto label_486088;
        case 0x48608cu: goto label_48608c;
        case 0x486090u: goto label_486090;
        case 0x486094u: goto label_486094;
        case 0x486098u: goto label_486098;
        case 0x48609cu: goto label_48609c;
        case 0x4860a0u: goto label_4860a0;
        case 0x4860a4u: goto label_4860a4;
        case 0x4860a8u: goto label_4860a8;
        case 0x4860acu: goto label_4860ac;
        case 0x4860b0u: goto label_4860b0;
        case 0x4860b4u: goto label_4860b4;
        case 0x4860b8u: goto label_4860b8;
        case 0x4860bcu: goto label_4860bc;
        case 0x4860c0u: goto label_4860c0;
        case 0x4860c4u: goto label_4860c4;
        case 0x4860c8u: goto label_4860c8;
        case 0x4860ccu: goto label_4860cc;
        case 0x4860d0u: goto label_4860d0;
        case 0x4860d4u: goto label_4860d4;
        case 0x4860d8u: goto label_4860d8;
        case 0x4860dcu: goto label_4860dc;
        case 0x4860e0u: goto label_4860e0;
        case 0x4860e4u: goto label_4860e4;
        case 0x4860e8u: goto label_4860e8;
        case 0x4860ecu: goto label_4860ec;
        case 0x4860f0u: goto label_4860f0;
        case 0x4860f4u: goto label_4860f4;
        case 0x4860f8u: goto label_4860f8;
        case 0x4860fcu: goto label_4860fc;
        case 0x486100u: goto label_486100;
        case 0x486104u: goto label_486104;
        case 0x486108u: goto label_486108;
        case 0x48610cu: goto label_48610c;
        case 0x486110u: goto label_486110;
        case 0x486114u: goto label_486114;
        case 0x486118u: goto label_486118;
        case 0x48611cu: goto label_48611c;
        case 0x486120u: goto label_486120;
        case 0x486124u: goto label_486124;
        case 0x486128u: goto label_486128;
        case 0x48612cu: goto label_48612c;
        case 0x486130u: goto label_486130;
        case 0x486134u: goto label_486134;
        case 0x486138u: goto label_486138;
        case 0x48613cu: goto label_48613c;
        case 0x486140u: goto label_486140;
        case 0x486144u: goto label_486144;
        case 0x486148u: goto label_486148;
        case 0x48614cu: goto label_48614c;
        case 0x486150u: goto label_486150;
        case 0x486154u: goto label_486154;
        case 0x486158u: goto label_486158;
        case 0x48615cu: goto label_48615c;
        case 0x486160u: goto label_486160;
        case 0x486164u: goto label_486164;
        case 0x486168u: goto label_486168;
        case 0x48616cu: goto label_48616c;
        case 0x486170u: goto label_486170;
        case 0x486174u: goto label_486174;
        case 0x486178u: goto label_486178;
        case 0x48617cu: goto label_48617c;
        case 0x486180u: goto label_486180;
        case 0x486184u: goto label_486184;
        case 0x486188u: goto label_486188;
        case 0x48618cu: goto label_48618c;
        case 0x486190u: goto label_486190;
        case 0x486194u: goto label_486194;
        case 0x486198u: goto label_486198;
        case 0x48619cu: goto label_48619c;
        case 0x4861a0u: goto label_4861a0;
        case 0x4861a4u: goto label_4861a4;
        case 0x4861a8u: goto label_4861a8;
        case 0x4861acu: goto label_4861ac;
        case 0x4861b0u: goto label_4861b0;
        case 0x4861b4u: goto label_4861b4;
        case 0x4861b8u: goto label_4861b8;
        case 0x4861bcu: goto label_4861bc;
        case 0x4861c0u: goto label_4861c0;
        case 0x4861c4u: goto label_4861c4;
        case 0x4861c8u: goto label_4861c8;
        case 0x4861ccu: goto label_4861cc;
        case 0x4861d0u: goto label_4861d0;
        case 0x4861d4u: goto label_4861d4;
        case 0x4861d8u: goto label_4861d8;
        case 0x4861dcu: goto label_4861dc;
        case 0x4861e0u: goto label_4861e0;
        case 0x4861e4u: goto label_4861e4;
        case 0x4861e8u: goto label_4861e8;
        case 0x4861ecu: goto label_4861ec;
        case 0x4861f0u: goto label_4861f0;
        case 0x4861f4u: goto label_4861f4;
        case 0x4861f8u: goto label_4861f8;
        case 0x4861fcu: goto label_4861fc;
        case 0x486200u: goto label_486200;
        case 0x486204u: goto label_486204;
        case 0x486208u: goto label_486208;
        case 0x48620cu: goto label_48620c;
        case 0x486210u: goto label_486210;
        case 0x486214u: goto label_486214;
        case 0x486218u: goto label_486218;
        case 0x48621cu: goto label_48621c;
        case 0x486220u: goto label_486220;
        case 0x486224u: goto label_486224;
        case 0x486228u: goto label_486228;
        case 0x48622cu: goto label_48622c;
        case 0x486230u: goto label_486230;
        case 0x486234u: goto label_486234;
        case 0x486238u: goto label_486238;
        case 0x48623cu: goto label_48623c;
        case 0x486240u: goto label_486240;
        case 0x486244u: goto label_486244;
        case 0x486248u: goto label_486248;
        case 0x48624cu: goto label_48624c;
        case 0x486250u: goto label_486250;
        case 0x486254u: goto label_486254;
        case 0x486258u: goto label_486258;
        case 0x48625cu: goto label_48625c;
        case 0x486260u: goto label_486260;
        case 0x486264u: goto label_486264;
        case 0x486268u: goto label_486268;
        case 0x48626cu: goto label_48626c;
        case 0x486270u: goto label_486270;
        case 0x486274u: goto label_486274;
        case 0x486278u: goto label_486278;
        case 0x48627cu: goto label_48627c;
        case 0x486280u: goto label_486280;
        case 0x486284u: goto label_486284;
        case 0x486288u: goto label_486288;
        case 0x48628cu: goto label_48628c;
        case 0x486290u: goto label_486290;
        case 0x486294u: goto label_486294;
        case 0x486298u: goto label_486298;
        case 0x48629cu: goto label_48629c;
        case 0x4862a0u: goto label_4862a0;
        case 0x4862a4u: goto label_4862a4;
        case 0x4862a8u: goto label_4862a8;
        case 0x4862acu: goto label_4862ac;
        case 0x4862b0u: goto label_4862b0;
        case 0x4862b4u: goto label_4862b4;
        case 0x4862b8u: goto label_4862b8;
        case 0x4862bcu: goto label_4862bc;
        case 0x4862c0u: goto label_4862c0;
        case 0x4862c4u: goto label_4862c4;
        case 0x4862c8u: goto label_4862c8;
        case 0x4862ccu: goto label_4862cc;
        case 0x4862d0u: goto label_4862d0;
        case 0x4862d4u: goto label_4862d4;
        case 0x4862d8u: goto label_4862d8;
        case 0x4862dcu: goto label_4862dc;
        case 0x4862e0u: goto label_4862e0;
        case 0x4862e4u: goto label_4862e4;
        case 0x4862e8u: goto label_4862e8;
        case 0x4862ecu: goto label_4862ec;
        case 0x4862f0u: goto label_4862f0;
        case 0x4862f4u: goto label_4862f4;
        case 0x4862f8u: goto label_4862f8;
        case 0x4862fcu: goto label_4862fc;
        case 0x486300u: goto label_486300;
        case 0x486304u: goto label_486304;
        case 0x486308u: goto label_486308;
        case 0x48630cu: goto label_48630c;
        case 0x486310u: goto label_486310;
        case 0x486314u: goto label_486314;
        case 0x486318u: goto label_486318;
        case 0x48631cu: goto label_48631c;
        case 0x486320u: goto label_486320;
        case 0x486324u: goto label_486324;
        case 0x486328u: goto label_486328;
        case 0x48632cu: goto label_48632c;
        case 0x486330u: goto label_486330;
        case 0x486334u: goto label_486334;
        case 0x486338u: goto label_486338;
        case 0x48633cu: goto label_48633c;
        case 0x486340u: goto label_486340;
        case 0x486344u: goto label_486344;
        case 0x486348u: goto label_486348;
        case 0x48634cu: goto label_48634c;
        case 0x486350u: goto label_486350;
        case 0x486354u: goto label_486354;
        case 0x486358u: goto label_486358;
        case 0x48635cu: goto label_48635c;
        case 0x486360u: goto label_486360;
        case 0x486364u: goto label_486364;
        case 0x486368u: goto label_486368;
        case 0x48636cu: goto label_48636c;
        case 0x486370u: goto label_486370;
        case 0x486374u: goto label_486374;
        case 0x486378u: goto label_486378;
        case 0x48637cu: goto label_48637c;
        case 0x486380u: goto label_486380;
        case 0x486384u: goto label_486384;
        case 0x486388u: goto label_486388;
        case 0x48638cu: goto label_48638c;
        case 0x486390u: goto label_486390;
        case 0x486394u: goto label_486394;
        case 0x486398u: goto label_486398;
        case 0x48639cu: goto label_48639c;
        case 0x4863a0u: goto label_4863a0;
        case 0x4863a4u: goto label_4863a4;
        case 0x4863a8u: goto label_4863a8;
        case 0x4863acu: goto label_4863ac;
        case 0x4863b0u: goto label_4863b0;
        case 0x4863b4u: goto label_4863b4;
        case 0x4863b8u: goto label_4863b8;
        case 0x4863bcu: goto label_4863bc;
        case 0x4863c0u: goto label_4863c0;
        case 0x4863c4u: goto label_4863c4;
        case 0x4863c8u: goto label_4863c8;
        case 0x4863ccu: goto label_4863cc;
        case 0x4863d0u: goto label_4863d0;
        case 0x4863d4u: goto label_4863d4;
        case 0x4863d8u: goto label_4863d8;
        case 0x4863dcu: goto label_4863dc;
        case 0x4863e0u: goto label_4863e0;
        case 0x4863e4u: goto label_4863e4;
        case 0x4863e8u: goto label_4863e8;
        case 0x4863ecu: goto label_4863ec;
        case 0x4863f0u: goto label_4863f0;
        case 0x4863f4u: goto label_4863f4;
        case 0x4863f8u: goto label_4863f8;
        case 0x4863fcu: goto label_4863fc;
        case 0x486400u: goto label_486400;
        case 0x486404u: goto label_486404;
        case 0x486408u: goto label_486408;
        case 0x48640cu: goto label_48640c;
        case 0x486410u: goto label_486410;
        case 0x486414u: goto label_486414;
        case 0x486418u: goto label_486418;
        case 0x48641cu: goto label_48641c;
        case 0x486420u: goto label_486420;
        case 0x486424u: goto label_486424;
        case 0x486428u: goto label_486428;
        case 0x48642cu: goto label_48642c;
        case 0x486430u: goto label_486430;
        case 0x486434u: goto label_486434;
        case 0x486438u: goto label_486438;
        case 0x48643cu: goto label_48643c;
        case 0x486440u: goto label_486440;
        case 0x486444u: goto label_486444;
        case 0x486448u: goto label_486448;
        case 0x48644cu: goto label_48644c;
        case 0x486450u: goto label_486450;
        case 0x486454u: goto label_486454;
        case 0x486458u: goto label_486458;
        case 0x48645cu: goto label_48645c;
        case 0x486460u: goto label_486460;
        case 0x486464u: goto label_486464;
        case 0x486468u: goto label_486468;
        case 0x48646cu: goto label_48646c;
        case 0x486470u: goto label_486470;
        case 0x486474u: goto label_486474;
        case 0x486478u: goto label_486478;
        case 0x48647cu: goto label_48647c;
        case 0x486480u: goto label_486480;
        case 0x486484u: goto label_486484;
        case 0x486488u: goto label_486488;
        case 0x48648cu: goto label_48648c;
        case 0x486490u: goto label_486490;
        case 0x486494u: goto label_486494;
        case 0x486498u: goto label_486498;
        case 0x48649cu: goto label_48649c;
        default: break;
    }

    ctx->pc = 0x485a20u;

label_485a20:
    // 0x485a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x485a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_485a24:
    // 0x485a24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x485a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_485a28:
    // 0x485a28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x485a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_485a2c:
    // 0x485a2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x485a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_485a30:
    // 0x485a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_485a34:
    // 0x485a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x485a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485a38:
    // 0x485a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485a3c:
    // 0x485a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485a40:
    // 0x485a40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x485a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_485a44:
    // 0x485a44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x485a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_485a48:
    // 0x485a48: 0xc10ca68  jal         func_4329A0
label_485a4c:
    if (ctx->pc == 0x485A4Cu) {
        ctx->pc = 0x485A4Cu;
            // 0x485a4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x485A50u;
        goto label_485a50;
    }
    ctx->pc = 0x485A48u;
    SET_GPR_U32(ctx, 31, 0x485A50u);
    ctx->pc = 0x485A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485A48u;
            // 0x485a4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485A50u; }
        if (ctx->pc != 0x485A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485A50u; }
        if (ctx->pc != 0x485A50u) { return; }
    }
    ctx->pc = 0x485A50u;
label_485a50:
    // 0x485a50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x485a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_485a54:
    // 0x485a54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x485a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_485a58:
    // 0x485a58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x485a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_485a5c:
    // 0x485a5c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x485a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_485a60:
    // 0x485a60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x485a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_485a64:
    // 0x485a64: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x485a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_485a68:
    // 0x485a68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x485a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_485a6c:
    // 0x485a6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x485a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_485a70:
    // 0x485a70: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x485a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_485a74:
    // 0x485a74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x485a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_485a78:
    // 0x485a78: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x485a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_485a7c:
    // 0x485a7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x485a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485a80:
    // 0x485a80: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x485a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_485a84:
    // 0x485a84: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x485a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_485a88:
    // 0x485a88: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x485a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_485a8c:
    // 0x485a8c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x485a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_485a90:
    // 0x485a90: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x485a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_485a94:
    // 0x485a94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x485a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_485a98:
    // 0x485a98: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x485a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_485a9c:
    // 0x485a9c: 0xc0582cc  jal         func_160B30
label_485aa0:
    if (ctx->pc == 0x485AA0u) {
        ctx->pc = 0x485AA0u;
            // 0x485aa0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x485AA4u;
        goto label_485aa4;
    }
    ctx->pc = 0x485A9Cu;
    SET_GPR_U32(ctx, 31, 0x485AA4u);
    ctx->pc = 0x485AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485A9Cu;
            // 0x485aa0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485AA4u; }
        if (ctx->pc != 0x485AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485AA4u; }
        if (ctx->pc != 0x485AA4u) { return; }
    }
    ctx->pc = 0x485AA4u;
label_485aa4:
    // 0x485aa4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x485aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_485aa8:
    // 0x485aa8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x485aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_485aac:
    // 0x485aac: 0x2463f4e0  addiu       $v1, $v1, -0xB20
    ctx->pc = 0x485aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964448));
label_485ab0:
    // 0x485ab0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x485ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_485ab4:
    // 0x485ab4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x485ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_485ab8:
    // 0x485ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x485ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_485abc:
    // 0x485abc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x485abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_485ac0:
    // 0x485ac0: 0xac447ba0  sw          $a0, 0x7BA0($v0)
    ctx->pc = 0x485ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31648), GPR_U32(ctx, 4));
label_485ac4:
    // 0x485ac4: 0x2463f4f0  addiu       $v1, $v1, -0xB10
    ctx->pc = 0x485ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964464));
label_485ac8:
    // 0x485ac8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x485ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_485acc:
    // 0x485acc: 0x2442f528  addiu       $v0, $v0, -0xAD8
    ctx->pc = 0x485accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964520));
label_485ad0:
    // 0x485ad0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x485ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_485ad4:
    // 0x485ad4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x485ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_485ad8:
    // 0x485ad8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x485ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_485adc:
    // 0x485adc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x485adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_485ae0:
    // 0x485ae0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x485ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_485ae4:
    // 0x485ae4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x485ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_485ae8:
    // 0x485ae8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x485ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_485aec:
    // 0x485aec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x485aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_485af0:
    // 0x485af0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x485af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_485af4:
    // 0x485af4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x485af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_485af8:
    // 0x485af8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x485af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_485afc:
    // 0x485afc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x485afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_485b00:
    // 0x485b00: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x485b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_485b04:
    // 0x485b04: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_485b08:
    if (ctx->pc == 0x485B08u) {
        ctx->pc = 0x485B0Cu;
        goto label_485b0c;
    }
    ctx->pc = 0x485B04u;
    {
        const bool branch_taken_0x485b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x485b04) {
            ctx->pc = 0x485B98u;
            goto label_485b98;
        }
    }
    ctx->pc = 0x485B0Cu;
label_485b0c:
    // 0x485b0c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x485b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_485b10:
    // 0x485b10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x485b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_485b14:
    // 0x485b14: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x485b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_485b18:
    // 0x485b18: 0xc040138  jal         func_1004E0
label_485b1c:
    if (ctx->pc == 0x485B1Cu) {
        ctx->pc = 0x485B1Cu;
            // 0x485b1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x485B20u;
        goto label_485b20;
    }
    ctx->pc = 0x485B18u;
    SET_GPR_U32(ctx, 31, 0x485B20u);
    ctx->pc = 0x485B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485B18u;
            // 0x485b1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B20u; }
        if (ctx->pc != 0x485B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B20u; }
        if (ctx->pc != 0x485B20u) { return; }
    }
    ctx->pc = 0x485B20u;
label_485b20:
    // 0x485b20: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x485b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
label_485b24:
    // 0x485b24: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x485b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
label_485b28:
    // 0x485b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x485b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485b2c:
    // 0x485b2c: 0x24a55bc0  addiu       $a1, $a1, 0x5BC0
    ctx->pc = 0x485b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23488));
label_485b30:
    // 0x485b30: 0x24c653a0  addiu       $a2, $a2, 0x53A0
    ctx->pc = 0x485b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 21408));
label_485b34:
    // 0x485b34: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x485b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_485b38:
    // 0x485b38: 0xc040840  jal         func_102100
label_485b3c:
    if (ctx->pc == 0x485B3Cu) {
        ctx->pc = 0x485B3Cu;
            // 0x485b3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485B40u;
        goto label_485b40;
    }
    ctx->pc = 0x485B38u;
    SET_GPR_U32(ctx, 31, 0x485B40u);
    ctx->pc = 0x485B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485B38u;
            // 0x485b3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B40u; }
        if (ctx->pc != 0x485B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B40u; }
        if (ctx->pc != 0x485B40u) { return; }
    }
    ctx->pc = 0x485B40u;
label_485b40:
    // 0x485b40: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x485b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_485b44:
    // 0x485b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x485b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485b48:
    // 0x485b48: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x485b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_485b4c:
    // 0x485b4c: 0xc0788fc  jal         func_1E23F0
label_485b50:
    if (ctx->pc == 0x485B50u) {
        ctx->pc = 0x485B50u;
            // 0x485b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485B54u;
        goto label_485b54;
    }
    ctx->pc = 0x485B4Cu;
    SET_GPR_U32(ctx, 31, 0x485B54u);
    ctx->pc = 0x485B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485B4Cu;
            // 0x485b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B54u; }
        if (ctx->pc != 0x485B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B54u; }
        if (ctx->pc != 0x485B54u) { return; }
    }
    ctx->pc = 0x485B54u;
label_485b54:
    // 0x485b54: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x485b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_485b58:
    // 0x485b58: 0xc0788fc  jal         func_1E23F0
label_485b5c:
    if (ctx->pc == 0x485B5Cu) {
        ctx->pc = 0x485B5Cu;
            // 0x485b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485B60u;
        goto label_485b60;
    }
    ctx->pc = 0x485B58u;
    SET_GPR_U32(ctx, 31, 0x485B60u);
    ctx->pc = 0x485B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485B58u;
            // 0x485b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B60u; }
        if (ctx->pc != 0x485B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B60u; }
        if (ctx->pc != 0x485B60u) { return; }
    }
    ctx->pc = 0x485B60u;
label_485b60:
    // 0x485b60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x485b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485b64:
    // 0x485b64: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x485b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_485b68:
    // 0x485b68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x485b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_485b6c:
    // 0x485b6c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x485b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_485b70:
    // 0x485b70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x485b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485b74:
    // 0x485b74: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x485b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_485b78:
    // 0x485b78: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x485b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_485b7c:
    // 0x485b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x485b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_485b80:
    // 0x485b80: 0xc0a997c  jal         func_2A65F0
label_485b84:
    if (ctx->pc == 0x485B84u) {
        ctx->pc = 0x485B84u;
            // 0x485b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x485B88u;
        goto label_485b88;
    }
    ctx->pc = 0x485B80u;
    SET_GPR_U32(ctx, 31, 0x485B88u);
    ctx->pc = 0x485B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485B80u;
            // 0x485b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B88u; }
        if (ctx->pc != 0x485B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485B88u; }
        if (ctx->pc != 0x485B88u) { return; }
    }
    ctx->pc = 0x485B88u;
label_485b88:
    // 0x485b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x485b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_485b8c:
    // 0x485b8c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x485b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_485b90:
    // 0x485b90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_485b94:
    if (ctx->pc == 0x485B94u) {
        ctx->pc = 0x485B94u;
            // 0x485b94: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->pc = 0x485B98u;
        goto label_485b98;
    }
    ctx->pc = 0x485B90u;
    {
        const bool branch_taken_0x485b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x485B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485B90u;
            // 0x485b94: 0x265200f0  addiu       $s2, $s2, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485b90) {
            ctx->pc = 0x485B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_485b64;
        }
    }
    ctx->pc = 0x485B98u;
label_485b98:
    // 0x485b98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x485b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_485b9c:
    // 0x485b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x485b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_485ba0:
    // 0x485ba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x485ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_485ba4:
    // 0x485ba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x485ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_485ba8:
    // 0x485ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x485ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_485bac:
    // 0x485bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485bb0:
    // 0x485bb0: 0x3e00008  jr          $ra
label_485bb4:
    if (ctx->pc == 0x485BB4u) {
        ctx->pc = 0x485BB4u;
            // 0x485bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x485BB8u;
        goto label_485bb8;
    }
    ctx->pc = 0x485BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485BB0u;
            // 0x485bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485BB8u;
label_485bb8:
    // 0x485bb8: 0x0  nop
    ctx->pc = 0x485bb8u;
    // NOP
label_485bbc:
    // 0x485bbc: 0x0  nop
    ctx->pc = 0x485bbcu;
    // NOP
label_485bc0:
    // 0x485bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_485bc4:
    // 0x485bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_485bc8:
    // 0x485bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485bcc:
    // 0x485bcc: 0xc0b1370  jal         func_2C4DC0
label_485bd0:
    if (ctx->pc == 0x485BD0u) {
        ctx->pc = 0x485BD0u;
            // 0x485bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485BD4u;
        goto label_485bd4;
    }
    ctx->pc = 0x485BCCu;
    SET_GPR_U32(ctx, 31, 0x485BD4u);
    ctx->pc = 0x485BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485BCCu;
            // 0x485bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485BD4u; }
        if (ctx->pc != 0x485BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485BD4u; }
        if (ctx->pc != 0x485BD4u) { return; }
    }
    ctx->pc = 0x485BD4u;
label_485bd4:
    // 0x485bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x485bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_485bd8:
    // 0x485bd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x485bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_485bdc:
    // 0x485bdc: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x485bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_485be0:
    // 0x485be0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x485be0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_485be4:
    // 0x485be4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x485be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_485be8:
    // 0x485be8: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x485be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_485bec:
    // 0x485bec: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x485becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_485bf0:
    // 0x485bf0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x485bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_485bf4:
    // 0x485bf4: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x485bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_485bf8:
    // 0x485bf8: 0x24a5f430  addiu       $a1, $a1, -0xBD0
    ctx->pc = 0x485bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964272));
label_485bfc:
    // 0x485bfc: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x485bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_485c00:
    // 0x485c00: 0x2484f470  addiu       $a0, $a0, -0xB90
    ctx->pc = 0x485c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964336));
label_485c04:
    // 0x485c04: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x485c04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_485c08:
    // 0x485c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x485c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485c0c:
    // 0x485c0c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x485c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_485c10:
    // 0x485c10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x485c10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485c14:
    // 0x485c14: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x485c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_485c18:
    // 0x485c18: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x485c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_485c1c:
    // 0x485c1c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x485c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_485c20:
    // 0x485c20: 0xa20300e8  sb          $v1, 0xE8($s0)
    ctx->pc = 0x485c20u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 3));
label_485c24:
    // 0x485c24: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485c24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485c28:
    // 0x485c28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485c2c:
    // 0x485c2c: 0x3e00008  jr          $ra
label_485c30:
    if (ctx->pc == 0x485C30u) {
        ctx->pc = 0x485C30u;
            // 0x485c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x485C34u;
        goto label_485c34;
    }
    ctx->pc = 0x485C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485C2Cu;
            // 0x485c30: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485C34u;
label_485c34:
    // 0x485c34: 0x0  nop
    ctx->pc = 0x485c34u;
    // NOP
label_485c38:
    // 0x485c38: 0x0  nop
    ctx->pc = 0x485c38u;
    // NOP
label_485c3c:
    // 0x485c3c: 0x0  nop
    ctx->pc = 0x485c3cu;
    // NOP
label_485c40:
    // 0x485c40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x485c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_485c44:
    // 0x485c44: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x485c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_485c48:
    // 0x485c48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x485c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_485c4c:
    // 0x485c4c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x485c4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485c50:
    // 0x485c50: 0x8c8400e4  lw          $a0, 0xE4($a0)
    ctx->pc = 0x485c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 228)));
label_485c54:
    // 0x485c54: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_485c58:
    if (ctx->pc == 0x485C58u) {
        ctx->pc = 0x485C58u;
            // 0x485c58: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x485C5Cu;
        goto label_485c5c;
    }
    ctx->pc = 0x485C54u;
    {
        const bool branch_taken_0x485c54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x485c54) {
            ctx->pc = 0x485C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485C54u;
            // 0x485c58: 0xae0000e4  sw          $zero, 0xE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485C70u;
            goto label_485c70;
        }
    }
    ctx->pc = 0x485C5Cu;
label_485c5c:
    // 0x485c5c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x485c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_485c60:
    // 0x485c60: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x485c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_485c64:
    // 0x485c64: 0x320f809  jalr        $t9
label_485c68:
    if (ctx->pc == 0x485C68u) {
        ctx->pc = 0x485C68u;
            // 0x485c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485C6Cu;
        goto label_485c6c;
    }
    ctx->pc = 0x485C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485C6Cu);
        ctx->pc = 0x485C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485C64u;
            // 0x485c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485C6Cu; }
            if (ctx->pc != 0x485C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x485C6Cu;
label_485c6c:
    // 0x485c6c: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x485c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_485c70:
    // 0x485c70: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x485c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_485c74:
    // 0x485c74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_485c78:
    if (ctx->pc == 0x485C78u) {
        ctx->pc = 0x485C78u;
            // 0x485c78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x485C7Cu;
        goto label_485c7c;
    }
    ctx->pc = 0x485C74u;
    {
        const bool branch_taken_0x485c74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x485c74) {
            ctx->pc = 0x485C78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485C74u;
            // 0x485c78: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485C90u;
            goto label_485c90;
        }
    }
    ctx->pc = 0x485C7Cu;
label_485c7c:
    // 0x485c7c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x485c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_485c80:
    // 0x485c80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x485c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_485c84:
    // 0x485c84: 0x320f809  jalr        $t9
label_485c88:
    if (ctx->pc == 0x485C88u) {
        ctx->pc = 0x485C88u;
            // 0x485c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485C8Cu;
        goto label_485c8c;
    }
    ctx->pc = 0x485C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485C8Cu);
        ctx->pc = 0x485C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485C84u;
            // 0x485c88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485C8Cu; }
            if (ctx->pc != 0x485C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x485C8Cu;
label_485c8c:
    // 0x485c8c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x485c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_485c90:
    // 0x485c90: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x485c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_485c94:
    // 0x485c94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_485c98:
    if (ctx->pc == 0x485C98u) {
        ctx->pc = 0x485C98u;
            // 0x485c98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x485C9Cu;
        goto label_485c9c;
    }
    ctx->pc = 0x485C94u;
    {
        const bool branch_taken_0x485c94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x485c94) {
            ctx->pc = 0x485C98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485C94u;
            // 0x485c98: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x485CB0u;
            goto label_485cb0;
        }
    }
    ctx->pc = 0x485C9Cu;
label_485c9c:
    // 0x485c9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x485c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_485ca0:
    // 0x485ca0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x485ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_485ca4:
    // 0x485ca4: 0x320f809  jalr        $t9
label_485ca8:
    if (ctx->pc == 0x485CA8u) {
        ctx->pc = 0x485CA8u;
            // 0x485ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485CACu;
        goto label_485cac;
    }
    ctx->pc = 0x485CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x485CACu);
        ctx->pc = 0x485CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485CA4u;
            // 0x485ca8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x485CACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x485CACu; }
            if (ctx->pc != 0x485CACu) { return; }
        }
        }
    }
    ctx->pc = 0x485CACu;
label_485cac:
    // 0x485cac: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x485cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_485cb0:
    // 0x485cb0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x485cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_485cb4:
    // 0x485cb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x485cb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_485cb8:
    // 0x485cb8: 0x3e00008  jr          $ra
label_485cbc:
    if (ctx->pc == 0x485CBCu) {
        ctx->pc = 0x485CBCu;
            // 0x485cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x485CC0u;
        goto label_485cc0;
    }
    ctx->pc = 0x485CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x485CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485CB8u;
            // 0x485cbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x485CC0u;
label_485cc0:
    // 0x485cc0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x485cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_485cc4:
    // 0x485cc4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x485cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_485cc8:
    // 0x485cc8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x485cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_485ccc:
    // 0x485ccc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x485cccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_485cd0:
    // 0x485cd0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x485cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_485cd4:
    // 0x485cd4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x485cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_485cd8:
    // 0x485cd8: 0xc0892d0  jal         func_224B40
label_485cdc:
    if (ctx->pc == 0x485CDCu) {
        ctx->pc = 0x485CDCu;
            // 0x485cdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x485CE0u;
        goto label_485ce0;
    }
    ctx->pc = 0x485CD8u;
    SET_GPR_U32(ctx, 31, 0x485CE0u);
    ctx->pc = 0x485CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485CD8u;
            // 0x485cdc: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485CE0u; }
        if (ctx->pc != 0x485CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485CE0u; }
        if (ctx->pc != 0x485CE0u) { return; }
    }
    ctx->pc = 0x485CE0u;
label_485ce0:
    // 0x485ce0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x485ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_485ce4:
    // 0x485ce4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x485ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_485ce8:
    // 0x485ce8: 0x8c427ba0  lw          $v0, 0x7BA0($v0)
    ctx->pc = 0x485ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31648)));
label_485cec:
    // 0x485cec: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x485cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_485cf0:
    // 0x485cf0: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x485cf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_485cf4:
    // 0x485cf4: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x485cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_485cf8:
    // 0x485cf8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x485cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_485cfc:
    // 0x485cfc: 0xc0b6e68  jal         func_2DB9A0
label_485d00:
    if (ctx->pc == 0x485D00u) {
        ctx->pc = 0x485D00u;
            // 0x485d00: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x485D04u;
        goto label_485d04;
    }
    ctx->pc = 0x485CFCu;
    SET_GPR_U32(ctx, 31, 0x485D04u);
    ctx->pc = 0x485D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485CFCu;
            // 0x485d00: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D04u; }
        if (ctx->pc != 0x485D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D04u; }
        if (ctx->pc != 0x485D04u) { return; }
    }
    ctx->pc = 0x485D04u;
label_485d04:
    // 0x485d04: 0xc0b6dac  jal         func_2DB6B0
label_485d08:
    if (ctx->pc == 0x485D08u) {
        ctx->pc = 0x485D08u;
            // 0x485d08: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x485D0Cu;
        goto label_485d0c;
    }
    ctx->pc = 0x485D04u;
    SET_GPR_U32(ctx, 31, 0x485D0Cu);
    ctx->pc = 0x485D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485D04u;
            // 0x485d08: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D0Cu; }
        if (ctx->pc != 0x485D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D0Cu; }
        if (ctx->pc != 0x485D0Cu) { return; }
    }
    ctx->pc = 0x485D0Cu;
label_485d0c:
    // 0x485d0c: 0xc0cac94  jal         func_32B250
label_485d10:
    if (ctx->pc == 0x485D10u) {
        ctx->pc = 0x485D10u;
            // 0x485d10: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x485D14u;
        goto label_485d14;
    }
    ctx->pc = 0x485D0Cu;
    SET_GPR_U32(ctx, 31, 0x485D14u);
    ctx->pc = 0x485D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485D0Cu;
            // 0x485d10: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D14u; }
        if (ctx->pc != 0x485D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D14u; }
        if (ctx->pc != 0x485D14u) { return; }
    }
    ctx->pc = 0x485D14u;
label_485d14:
    // 0x485d14: 0xc0cac84  jal         func_32B210
label_485d18:
    if (ctx->pc == 0x485D18u) {
        ctx->pc = 0x485D18u;
            // 0x485d18: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x485D1Cu;
        goto label_485d1c;
    }
    ctx->pc = 0x485D14u;
    SET_GPR_U32(ctx, 31, 0x485D1Cu);
    ctx->pc = 0x485D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485D14u;
            // 0x485d18: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D1Cu; }
        if (ctx->pc != 0x485D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D1Cu; }
        if (ctx->pc != 0x485D1Cu) { return; }
    }
    ctx->pc = 0x485D1Cu;
label_485d1c:
    // 0x485d1c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x485d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_485d20:
    // 0x485d20: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x485d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_485d24:
    // 0x485d24: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x485d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_485d28:
    // 0x485d28: 0xc0a5a68  jal         func_2969A0
label_485d2c:
    if (ctx->pc == 0x485D2Cu) {
        ctx->pc = 0x485D2Cu;
            // 0x485d2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x485D30u;
        goto label_485d30;
    }
    ctx->pc = 0x485D28u;
    SET_GPR_U32(ctx, 31, 0x485D30u);
    ctx->pc = 0x485D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485D28u;
            // 0x485d2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D30u; }
        if (ctx->pc != 0x485D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485D30u; }
        if (ctx->pc != 0x485D30u) { return; }
    }
    ctx->pc = 0x485D30u;
label_485d30:
    // 0x485d30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x485d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_485d34:
    // 0x485d34: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x485d34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485d38:
    // 0x485d38: 0x8c437ba0  lw          $v1, 0x7BA0($v0)
    ctx->pc = 0x485d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31648)));
label_485d3c:
    // 0x485d3c: 0xc7ac0090  lwc1        $f12, 0x90($sp)
    ctx->pc = 0x485d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_485d40:
    // 0x485d40: 0xc7ab0094  lwc1        $f11, 0x94($sp)
    ctx->pc = 0x485d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_485d44:
    // 0x485d44: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x485d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_485d48:
    // 0x485d48: 0xc7aa0098  lwc1        $f10, 0x98($sp)
    ctx->pc = 0x485d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_485d4c:
    // 0x485d4c: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x485d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_485d50:
    // 0x485d50: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x485d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_485d54:
    // 0x485d54: 0x34481eb8  ori         $t0, $v0, 0x1EB8
    ctx->pc = 0x485d54u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_485d58:
    // 0x485d58: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x485d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_485d5c:
    // 0x485d5c: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x485d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
label_485d60:
    // 0x485d60: 0x34470120  ori         $a3, $v0, 0x120
    ctx->pc = 0x485d60u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_485d64:
    // 0x485d64: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x485d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_485d68:
    // 0x485d68: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485d6c:
    // 0x485d6c: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x485d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485d70:
    // 0x485d70: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x485d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_485d74:
    // 0x485d74: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x485d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485d78:
    // 0x485d78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x485d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_485d7c:
    // 0x485d7c: 0xc7a9009c  lwc1        $f9, 0x9C($sp)
    ctx->pc = 0x485d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_485d80:
    // 0x485d80: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x485d80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_485d84:
    // 0x485d84: 0xc7a800a0  lwc1        $f8, 0xA0($sp)
    ctx->pc = 0x485d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_485d88:
    // 0x485d88: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x485d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_485d8c:
    // 0x485d8c: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x485d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_485d90:
    // 0x485d90: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x485d90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_485d94:
    // 0x485d94: 0xe7a200d8  swc1        $f2, 0xD8($sp)
    ctx->pc = 0x485d94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_485d98:
    // 0x485d98: 0xc650002c  lwc1        $f16, 0x2C($s2)
    ctx->pc = 0x485d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_485d9c:
    // 0x485d9c: 0xc64f0028  lwc1        $f15, 0x28($s2)
    ctx->pc = 0x485d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_485da0:
    // 0x485da0: 0xc64e0024  lwc1        $f14, 0x24($s2)
    ctx->pc = 0x485da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_485da4:
    // 0x485da4: 0xc64d0020  lwc1        $f13, 0x20($s2)
    ctx->pc = 0x485da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_485da8:
    // 0x485da8: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x485da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485dac:
    // 0x485dac: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x485dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_485db0:
    // 0x485db0: 0xc7a100bc  lwc1        $f1, 0xBC($sp)
    ctx->pc = 0x485db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485db4:
    // 0x485db4: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x485db4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_485db8:
    // 0x485db8: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x485db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_485dbc:
    // 0x485dbc: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x485dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_485dc0:
    // 0x485dc0: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x485dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485dc4:
    // 0x485dc4: 0xafa700c0  sw          $a3, 0xC0($sp)
    ctx->pc = 0x485dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 7));
label_485dc8:
    // 0x485dc8: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x485dc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_485dcc:
    // 0x485dcc: 0xa3a30172  sb          $v1, 0x172($sp)
    ctx->pc = 0x485dccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 3));
label_485dd0:
    // 0x485dd0: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x485dd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_485dd4:
    // 0x485dd4: 0xe7a0014c  swc1        $f0, 0x14C($sp)
    ctx->pc = 0x485dd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_485dd8:
    // 0x485dd8: 0xc7a700a4  lwc1        $f7, 0xA4($sp)
    ctx->pc = 0x485dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_485ddc:
    // 0x485ddc: 0xc7a600a8  lwc1        $f6, 0xA8($sp)
    ctx->pc = 0x485ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_485de0:
    // 0x485de0: 0xc7a500ac  lwc1        $f5, 0xAC($sp)
    ctx->pc = 0x485de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_485de4:
    // 0x485de4: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x485de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_485de8:
    // 0x485de8: 0xc7a300b4  lwc1        $f3, 0xB4($sp)
    ctx->pc = 0x485de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_485dec:
    // 0x485dec: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x485decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_485df0:
    // 0x485df0: 0xc7a10088  lwc1        $f1, 0x88($sp)
    ctx->pc = 0x485df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485df4:
    // 0x485df4: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x485df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485df8:
    // 0x485df8: 0xe7ad00e0  swc1        $f13, 0xE0($sp)
    ctx->pc = 0x485df8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_485dfc:
    // 0x485dfc: 0xe7ae00e4  swc1        $f14, 0xE4($sp)
    ctx->pc = 0x485dfcu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_485e00:
    // 0x485e00: 0xe7af00e8  swc1        $f15, 0xE8($sp)
    ctx->pc = 0x485e00u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_485e04:
    // 0x485e04: 0xe7b000ec  swc1        $f16, 0xEC($sp)
    ctx->pc = 0x485e04u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_485e08:
    // 0x485e08: 0xe7ac0110  swc1        $f12, 0x110($sp)
    ctx->pc = 0x485e08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_485e0c:
    // 0x485e0c: 0xe7ab0114  swc1        $f11, 0x114($sp)
    ctx->pc = 0x485e0cu;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_485e10:
    // 0x485e10: 0xe7aa0118  swc1        $f10, 0x118($sp)
    ctx->pc = 0x485e10u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_485e14:
    // 0x485e14: 0xe7a9011c  swc1        $f9, 0x11C($sp)
    ctx->pc = 0x485e14u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_485e18:
    // 0x485e18: 0xe7a80120  swc1        $f8, 0x120($sp)
    ctx->pc = 0x485e18u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_485e1c:
    // 0x485e1c: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x485e1cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_485e20:
    // 0x485e20: 0xe7a60128  swc1        $f6, 0x128($sp)
    ctx->pc = 0x485e20u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_485e24:
    // 0x485e24: 0xe7a5012c  swc1        $f5, 0x12C($sp)
    ctx->pc = 0x485e24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_485e28:
    // 0x485e28: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x485e28u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_485e2c:
    // 0x485e2c: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x485e2cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_485e30:
    // 0x485e30: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x485e30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_485e34:
    // 0x485e34: 0xe7a10148  swc1        $f1, 0x148($sp)
    ctx->pc = 0x485e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_485e38:
    // 0x485e38: 0xc0a7a88  jal         func_29EA20
label_485e3c:
    if (ctx->pc == 0x485E3Cu) {
        ctx->pc = 0x485E3Cu;
            // 0x485e3c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x485E40u;
        goto label_485e40;
    }
    ctx->pc = 0x485E38u;
    SET_GPR_U32(ctx, 31, 0x485E40u);
    ctx->pc = 0x485E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485E38u;
            // 0x485e3c: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E40u; }
        if (ctx->pc != 0x485E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E40u; }
        if (ctx->pc != 0x485E40u) { return; }
    }
    ctx->pc = 0x485E40u;
label_485e40:
    // 0x485e40: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x485e40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_485e44:
    // 0x485e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x485e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485e48:
    // 0x485e48: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_485e4c:
    if (ctx->pc == 0x485E4Cu) {
        ctx->pc = 0x485E4Cu;
            // 0x485e4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x485E50u;
        goto label_485e50;
    }
    ctx->pc = 0x485E48u;
    {
        const bool branch_taken_0x485e48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x485E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485E48u;
            // 0x485e4c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485e48) {
            ctx->pc = 0x485E98u;
            goto label_485e98;
        }
    }
    ctx->pc = 0x485E50u;
label_485e50:
    // 0x485e50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485e54:
    // 0x485e54: 0xc088ef4  jal         func_223BD0
label_485e58:
    if (ctx->pc == 0x485E58u) {
        ctx->pc = 0x485E58u;
            // 0x485e58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x485E5Cu;
        goto label_485e5c;
    }
    ctx->pc = 0x485E54u;
    SET_GPR_U32(ctx, 31, 0x485E5Cu);
    ctx->pc = 0x485E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485E54u;
            // 0x485e58: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E5Cu; }
        if (ctx->pc != 0x485E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E5Cu; }
        if (ctx->pc != 0x485E5Cu) { return; }
    }
    ctx->pc = 0x485E5Cu;
label_485e5c:
    // 0x485e5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x485e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_485e60:
    // 0x485e60: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x485e60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_485e64:
    // 0x485e64: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x485e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_485e68:
    // 0x485e68: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x485e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_485e6c:
    // 0x485e6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x485e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_485e70:
    // 0x485e70: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x485e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_485e74:
    // 0x485e74: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485e78:
    // 0x485e78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x485e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_485e7c:
    // 0x485e7c: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x485e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_485e80:
    // 0x485e80: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x485e80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_485e84:
    // 0x485e84: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x485e84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_485e88:
    // 0x485e88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x485e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_485e8c:
    // 0x485e8c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x485e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_485e90:
    // 0x485e90: 0xc088b38  jal         func_222CE0
label_485e94:
    if (ctx->pc == 0x485E94u) {
        ctx->pc = 0x485E94u;
            // 0x485e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485E98u;
        goto label_485e98;
    }
    ctx->pc = 0x485E90u;
    SET_GPR_U32(ctx, 31, 0x485E98u);
    ctx->pc = 0x485E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485E90u;
            // 0x485e94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E98u; }
        if (ctx->pc != 0x485E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485E98u; }
        if (ctx->pc != 0x485E98u) { return; }
    }
    ctx->pc = 0x485E98u;
label_485e98:
    // 0x485e98: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x485e98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_485e9c:
    // 0x485e9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485ea0:
    // 0x485ea0: 0xc08c164  jal         func_230590
label_485ea4:
    if (ctx->pc == 0x485EA4u) {
        ctx->pc = 0x485EA4u;
            // 0x485ea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x485EA8u;
        goto label_485ea8;
    }
    ctx->pc = 0x485EA0u;
    SET_GPR_U32(ctx, 31, 0x485EA8u);
    ctx->pc = 0x485EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485EA0u;
            // 0x485ea4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485EA8u; }
        if (ctx->pc != 0x485EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485EA8u; }
        if (ctx->pc != 0x485EA8u) { return; }
    }
    ctx->pc = 0x485EA8u;
label_485ea8:
    // 0x485ea8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485eac:
    // 0x485eac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x485eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_485eb0:
    // 0x485eb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x485eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_485eb4:
    // 0x485eb4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x485eb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_485eb8:
    // 0x485eb8: 0xc08914c  jal         func_224530
label_485ebc:
    if (ctx->pc == 0x485EBCu) {
        ctx->pc = 0x485EBCu;
            // 0x485ebc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x485EC0u;
        goto label_485ec0;
    }
    ctx->pc = 0x485EB8u;
    SET_GPR_U32(ctx, 31, 0x485EC0u);
    ctx->pc = 0x485EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485EB8u;
            // 0x485ebc: 0xae200200  sw          $zero, 0x200($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485EC0u; }
        if (ctx->pc != 0x485EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485EC0u; }
        if (ctx->pc != 0x485EC0u) { return; }
    }
    ctx->pc = 0x485EC0u;
label_485ec0:
    // 0x485ec0: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x485ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_485ec4:
    // 0x485ec4: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x485ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_485ec8:
    // 0x485ec8: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x485ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_485ecc:
    // 0x485ecc: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x485eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_485ed0:
    // 0x485ed0: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x485ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_485ed4:
    // 0x485ed4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485ed8:
    // 0x485ed8: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x485ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_485edc:
    // 0x485edc: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x485edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_485ee0:
    // 0x485ee0: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x485ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_485ee4:
    // 0x485ee4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x485ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_485ee8:
    // 0x485ee8: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x485ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485eec:
    // 0x485eec: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x485eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485ef0:
    // 0x485ef0: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x485ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_485ef4:
    // 0x485ef4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x485ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_485ef8:
    // 0x485ef8: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x485ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_485efc:
    // 0x485efc: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x485efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_485f00:
    // 0x485f00: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x485f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_485f04:
    // 0x485f04: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x485f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_485f08:
    // 0x485f08: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x485f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485f0c:
    // 0x485f0c: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x485f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_485f10:
    // 0x485f10: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x485f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_485f14:
    // 0x485f14: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x485f14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_485f18:
    // 0x485f18: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x485f18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_485f1c:
    // 0x485f1c: 0xc0892b0  jal         func_224AC0
label_485f20:
    if (ctx->pc == 0x485F20u) {
        ctx->pc = 0x485F20u;
            // 0x485f20: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x485F24u;
        goto label_485f24;
    }
    ctx->pc = 0x485F1Cu;
    SET_GPR_U32(ctx, 31, 0x485F24u);
    ctx->pc = 0x485F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485F1Cu;
            // 0x485f20: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F24u; }
        if (ctx->pc != 0x485F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F24u; }
        if (ctx->pc != 0x485F24u) { return; }
    }
    ctx->pc = 0x485F24u;
label_485f24:
    // 0x485f24: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x485f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_485f28:
    // 0x485f28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x485f28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485f2c:
    // 0x485f2c: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x485f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_485f30:
    // 0x485f30: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x485f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_485f34:
    // 0x485f34: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x485f34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_485f38:
    // 0x485f38: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x485f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_485f3c:
    // 0x485f3c: 0xc0891d8  jal         func_224760
label_485f40:
    if (ctx->pc == 0x485F40u) {
        ctx->pc = 0x485F40u;
            // 0x485f40: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x485F44u;
        goto label_485f44;
    }
    ctx->pc = 0x485F3Cu;
    SET_GPR_U32(ctx, 31, 0x485F44u);
    ctx->pc = 0x485F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485F3Cu;
            // 0x485f40: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F44u; }
        if (ctx->pc != 0x485F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F44u; }
        if (ctx->pc != 0x485F44u) { return; }
    }
    ctx->pc = 0x485F44u;
label_485f44:
    // 0x485f44: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x485f44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_485f48:
    // 0x485f48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485f4c:
    // 0x485f4c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x485f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_485f50:
    // 0x485f50: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x485f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_485f54:
    // 0x485f54: 0xc0a7a88  jal         func_29EA20
label_485f58:
    if (ctx->pc == 0x485F58u) {
        ctx->pc = 0x485F58u;
            // 0x485f58: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x485F5Cu;
        goto label_485f5c;
    }
    ctx->pc = 0x485F54u;
    SET_GPR_U32(ctx, 31, 0x485F5Cu);
    ctx->pc = 0x485F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485F54u;
            // 0x485f58: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F5Cu; }
        if (ctx->pc != 0x485F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F5Cu; }
        if (ctx->pc != 0x485F5Cu) { return; }
    }
    ctx->pc = 0x485F5Cu;
label_485f5c:
    // 0x485f5c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x485f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_485f60:
    // 0x485f60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x485f60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_485f64:
    // 0x485f64: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_485f68:
    if (ctx->pc == 0x485F68u) {
        ctx->pc = 0x485F68u;
            // 0x485f68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x485F6Cu;
        goto label_485f6c;
    }
    ctx->pc = 0x485F64u;
    {
        const bool branch_taken_0x485f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x485F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485F64u;
            // 0x485f68: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485f64) {
            ctx->pc = 0x485F88u;
            goto label_485f88;
        }
    }
    ctx->pc = 0x485F6Cu;
label_485f6c:
    // 0x485f6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x485f6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_485f70:
    // 0x485f70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x485f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_485f74:
    // 0x485f74: 0xc0869d0  jal         func_21A740
label_485f78:
    if (ctx->pc == 0x485F78u) {
        ctx->pc = 0x485F78u;
            // 0x485f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485F7Cu;
        goto label_485f7c;
    }
    ctx->pc = 0x485F74u;
    SET_GPR_U32(ctx, 31, 0x485F7Cu);
    ctx->pc = 0x485F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485F74u;
            // 0x485f78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F7Cu; }
        if (ctx->pc != 0x485F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485F7Cu; }
        if (ctx->pc != 0x485F7Cu) { return; }
    }
    ctx->pc = 0x485F7Cu;
label_485f7c:
    // 0x485f7c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x485f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_485f80:
    // 0x485f80: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x485f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_485f84:
    // 0x485f84: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x485f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_485f88:
    // 0x485f88: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x485f88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_485f8c:
    // 0x485f8c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x485f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_485f90:
    // 0x485f90: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x485f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_485f94:
    // 0x485f94: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x485f94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_485f98:
    // 0x485f98: 0xc08c650  jal         func_231940
label_485f9c:
    if (ctx->pc == 0x485F9Cu) {
        ctx->pc = 0x485F9Cu;
            // 0x485f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485FA0u;
        goto label_485fa0;
    }
    ctx->pc = 0x485F98u;
    SET_GPR_U32(ctx, 31, 0x485FA0u);
    ctx->pc = 0x485F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485F98u;
            // 0x485f9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485FA0u; }
        if (ctx->pc != 0x485FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485FA0u; }
        if (ctx->pc != 0x485FA0u) { return; }
    }
    ctx->pc = 0x485FA0u;
label_485fa0:
    // 0x485fa0: 0xc040180  jal         func_100600
label_485fa4:
    if (ctx->pc == 0x485FA4u) {
        ctx->pc = 0x485FA4u;
            // 0x485fa4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x485FA8u;
        goto label_485fa8;
    }
    ctx->pc = 0x485FA0u;
    SET_GPR_U32(ctx, 31, 0x485FA8u);
    ctx->pc = 0x485FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x485FA0u;
            // 0x485fa4: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485FA8u; }
        if (ctx->pc != 0x485FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x485FA8u; }
        if (ctx->pc != 0x485FA8u) { return; }
    }
    ctx->pc = 0x485FA8u;
label_485fa8:
    // 0x485fa8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_485fac:
    if (ctx->pc == 0x485FACu) {
        ctx->pc = 0x485FACu;
            // 0x485fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x485FB0u;
        goto label_485fb0;
    }
    ctx->pc = 0x485FA8u;
    {
        const bool branch_taken_0x485fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x485FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485FA8u;
            // 0x485fac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485fa8) {
            ctx->pc = 0x486068u;
            goto label_486068;
        }
    }
    ctx->pc = 0x485FB0u;
label_485fb0:
    // 0x485fb0: 0xc6410034  lwc1        $f1, 0x34($s2)
    ctx->pc = 0x485fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_485fb4:
    // 0x485fb4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x485fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_485fb8:
    // 0x485fb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x485fb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_485fbc:
    // 0x485fbc: 0x0  nop
    ctx->pc = 0x485fbcu;
    // NOP
label_485fc0:
    // 0x485fc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x485fc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_485fc4:
    // 0x485fc4: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_485fc8:
    if (ctx->pc == 0x485FC8u) {
        ctx->pc = 0x485FC8u;
            // 0x485fc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x485FCCu;
        goto label_485fcc;
    }
    ctx->pc = 0x485FC4u;
    {
        const bool branch_taken_0x485fc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x485fc4) {
            ctx->pc = 0x485FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x485FC4u;
            // 0x485fc8: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x485FDCu;
            goto label_485fdc;
        }
    }
    ctx->pc = 0x485FCCu;
label_485fcc:
    // 0x485fcc: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x485fccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_485fd0:
    // 0x485fd0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x485fd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_485fd4:
    // 0x485fd4: 0x10000007  b           . + 4 + (0x7 << 2)
label_485fd8:
    if (ctx->pc == 0x485FD8u) {
        ctx->pc = 0x485FD8u;
            // 0x485fd8: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x485FDCu;
        goto label_485fdc;
    }
    ctx->pc = 0x485FD4u;
    {
        const bool branch_taken_0x485fd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x485FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x485FD4u;
            // 0x485fd8: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x485fd4) {
            ctx->pc = 0x485FF4u;
            goto label_485ff4;
        }
    }
    ctx->pc = 0x485FDCu;
label_485fdc:
    // 0x485fdc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x485fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_485fe0:
    // 0x485fe0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x485fe0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_485fe4:
    // 0x485fe4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x485fe4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_485fe8:
    // 0x485fe8: 0x0  nop
    ctx->pc = 0x485fe8u;
    // NOP
label_485fec:
    // 0x485fec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x485fecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_485ff0:
    // 0x485ff0: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x485ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_485ff4:
    // 0x485ff4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x485ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_485ff8:
    // 0x485ff8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x485ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_485ffc:
    // 0x485ffc: 0x8e450050  lw          $a1, 0x50($s2)
    ctx->pc = 0x485ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_486000:
    // 0x486000: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x486000u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_486004:
    // 0x486004: 0x2463fc10  addiu       $v1, $v1, -0x3F0
    ctx->pc = 0x486004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966288));
label_486008:
    // 0x486008: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x486008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_48600c:
    // 0x48600c: 0x643021  addu        $a2, $v1, $a0
    ctx->pc = 0x48600cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_486010:
    // 0x486010: 0x244221e0  addiu       $v0, $v0, 0x21E0
    ctx->pc = 0x486010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8672));
label_486014:
    // 0x486014: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x486014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_486018:
    // 0x486018: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x486018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
label_48601c:
    // 0x48601c: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x48601cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_486020:
    // 0x486020: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x486020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_486024:
    // 0x486024: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x486024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_486028:
    // 0x486028: 0xae050024  sw          $a1, 0x24($s0)
    ctx->pc = 0x486028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 5));
label_48602c:
    // 0x48602c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x48602cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_486030:
    // 0x486030: 0xae040028  sw          $a0, 0x28($s0)
    ctx->pc = 0x486030u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 4));
label_486034:
    // 0x486034: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x486034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_486038:
    // 0x486038: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x486038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_48603c:
    // 0x48603c: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x48603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_486040:
    // 0x486040: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x486040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_486044:
    // 0x486044: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x486044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_486048:
    // 0x486048: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x486048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
label_48604c:
    // 0x48604c: 0xae06003c  sw          $a2, 0x3C($s0)
    ctx->pc = 0x48604cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 6));
label_486050:
    // 0x486050: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x486050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_486054:
    // 0x486054: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x486054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
label_486058:
    // 0x486058: 0xae030048  sw          $v1, 0x48($s0)
    ctx->pc = 0x486058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
label_48605c:
    // 0x48605c: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x48605cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_486060:
    // 0x486060: 0xc04c968  jal         func_1325A0
label_486064:
    if (ctx->pc == 0x486064u) {
        ctx->pc = 0x486064u;
            // 0x486064: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x486068u;
        goto label_486068;
    }
    ctx->pc = 0x486060u;
    SET_GPR_U32(ctx, 31, 0x486068u);
    ctx->pc = 0x486064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486060u;
            // 0x486064: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486068u; }
        if (ctx->pc != 0x486068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486068u; }
        if (ctx->pc != 0x486068u) { return; }
    }
    ctx->pc = 0x486068u;
label_486068:
    // 0x486068: 0xae5000a0  sw          $s0, 0xA0($s2)
    ctx->pc = 0x486068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 16));
label_48606c:
    // 0x48606c: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x48606cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_486070:
    // 0x486070: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x486070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_486074:
    // 0x486074: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x486074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486078:
    // 0x486078: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x486078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_48607c:
    // 0x48607c: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x48607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_486080:
    // 0x486080: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x486080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_486084:
    // 0x486084: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x486084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_486088:
    // 0x486088: 0xae4200b0  sw          $v0, 0xB0($s2)
    ctx->pc = 0x486088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
label_48608c:
    // 0x48608c: 0xc6410030  lwc1        $f1, 0x30($s2)
    ctx->pc = 0x48608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486090:
    // 0x486090: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x486090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486094:
    // 0x486094: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_486098:
    if (ctx->pc == 0x486098u) {
        ctx->pc = 0x486098u;
            // 0x486098: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->pc = 0x48609Cu;
        goto label_48609c;
    }
    ctx->pc = 0x486094u;
    {
        const bool branch_taken_0x486094 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x486094) {
            ctx->pc = 0x486098u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486094u;
            // 0x486098: 0x8e070060  lw          $a3, 0x60($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4860E4u;
            goto label_4860e4;
        }
    }
    ctx->pc = 0x48609Cu;
label_48609c:
    // 0x48609c: 0x8e070060  lw          $a3, 0x60($s0)
    ctx->pc = 0x48609cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_4860a0:
    // 0x4860a0: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x4860a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4860a4:
    // 0x4860a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4860a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4860a8:
    // 0x4860a8: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x4860a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_4860ac:
    // 0x4860ac: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x4860acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_4860b0:
    // 0x4860b0: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x4860b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_4860b4:
    // 0x4860b4: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4860b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4860b8:
    // 0x4860b8: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x4860b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_4860bc:
    // 0x4860bc: 0xae060060  sw          $a2, 0x60($s0)
    ctx->pc = 0x4860bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 6));
label_4860c0:
    // 0x4860c0: 0xae45008c  sw          $a1, 0x8C($s2)
    ctx->pc = 0x4860c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 5));
label_4860c4:
    // 0x4860c4: 0xae440070  sw          $a0, 0x70($s2)
    ctx->pc = 0x4860c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 4));
label_4860c8:
    // 0x4860c8: 0xae430078  sw          $v1, 0x78($s2)
    ctx->pc = 0x4860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 3));
label_4860cc:
    // 0x4860cc: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x4860ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
label_4860d0:
    // 0x4860d0: 0xa2400068  sb          $zero, 0x68($s2)
    ctx->pc = 0x4860d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 0));
label_4860d4:
    // 0x4860d4: 0xa2450069  sb          $a1, 0x69($s2)
    ctx->pc = 0x4860d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 5));
label_4860d8:
    // 0x4860d8: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x4860d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_4860dc:
    // 0x4860dc: 0x10000011  b           . + 4 + (0x11 << 2)
label_4860e0:
    if (ctx->pc == 0x4860E0u) {
        ctx->pc = 0x4860E0u;
            // 0x4860e0: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x4860E4u;
        goto label_4860e4;
    }
    ctx->pc = 0x4860DCu;
    {
        const bool branch_taken_0x4860dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4860E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4860DCu;
            // 0x4860e0: 0xa245006b  sb          $a1, 0x6B($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4860dc) {
            ctx->pc = 0x486124u;
            goto label_486124;
        }
    }
    ctx->pc = 0x4860E4u;
label_4860e4:
    // 0x4860e4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x4860e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_4860e8:
    // 0x4860e8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4860e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4860ec:
    // 0x4860ec: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x4860ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_4860f0:
    // 0x4860f0: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x4860f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_4860f4:
    // 0x4860f4: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x4860f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_4860f8:
    // 0x4860f8: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x4860f8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_4860fc:
    // 0x4860fc: 0xae070060  sw          $a3, 0x60($s0)
    ctx->pc = 0x4860fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 7));
label_486100:
    // 0x486100: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x486100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_486104:
    // 0x486104: 0xae46008c  sw          $a2, 0x8C($s2)
    ctx->pc = 0x486104u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 6));
label_486108:
    // 0x486108: 0xae450070  sw          $a1, 0x70($s2)
    ctx->pc = 0x486108u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 5));
label_48610c:
    // 0x48610c: 0xae440078  sw          $a0, 0x78($s2)
    ctx->pc = 0x48610cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 4));
label_486110:
    // 0x486110: 0xae430080  sw          $v1, 0x80($s2)
    ctx->pc = 0x486110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 3));
label_486114:
    // 0x486114: 0xa2420068  sb          $v0, 0x68($s2)
    ctx->pc = 0x486114u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 104), (uint8_t)GPR_U32(ctx, 2));
label_486118:
    // 0x486118: 0xa2400069  sb          $zero, 0x69($s2)
    ctx->pc = 0x486118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 105), (uint8_t)GPR_U32(ctx, 0));
label_48611c:
    // 0x48611c: 0xa240006a  sb          $zero, 0x6A($s2)
    ctx->pc = 0x48611cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 106), (uint8_t)GPR_U32(ctx, 0));
label_486120:
    // 0x486120: 0xa246006b  sb          $a2, 0x6B($s2)
    ctx->pc = 0x486120u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 107), (uint8_t)GPR_U32(ctx, 6));
label_486124:
    // 0x486124: 0xc040180  jal         func_100600
label_486128:
    if (ctx->pc == 0x486128u) {
        ctx->pc = 0x486128u;
            // 0x486128: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x48612Cu;
        goto label_48612c;
    }
    ctx->pc = 0x486124u;
    SET_GPR_U32(ctx, 31, 0x48612Cu);
    ctx->pc = 0x486128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486124u;
            // 0x486128: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48612Cu; }
        if (ctx->pc != 0x48612Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48612Cu; }
        if (ctx->pc != 0x48612Cu) { return; }
    }
    ctx->pc = 0x48612Cu;
label_48612c:
    // 0x48612c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x48612cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486130:
    // 0x486130: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_486134:
    if (ctx->pc == 0x486134u) {
        ctx->pc = 0x486134u;
            // 0x486134: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x486138u;
        goto label_486138;
    }
    ctx->pc = 0x486130u;
    {
        const bool branch_taken_0x486130 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x486130) {
            ctx->pc = 0x486134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486130u;
            // 0x486134: 0x3c02461c  lui         $v0, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486170u;
            goto label_486170;
        }
    }
    ctx->pc = 0x486138u;
label_486138:
    // 0x486138: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x486138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_48613c:
    // 0x48613c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486140:
    // 0x486140: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x486140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_486144:
    // 0x486144: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x486144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_486148:
    // 0x486148: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x486148u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_48614c:
    // 0x48614c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x48614cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_486150:
    // 0x486150: 0xc040138  jal         func_1004E0
label_486154:
    if (ctx->pc == 0x486154u) {
        ctx->pc = 0x486154u;
            // 0x486154: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x486158u;
        goto label_486158;
    }
    ctx->pc = 0x486150u;
    SET_GPR_U32(ctx, 31, 0x486158u);
    ctx->pc = 0x486154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486150u;
            // 0x486154: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486158u; }
        if (ctx->pc != 0x486158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486158u; }
        if (ctx->pc != 0x486158u) { return; }
    }
    ctx->pc = 0x486158u;
label_486158:
    // 0x486158: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x486158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_48615c:
    // 0x48615c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x48615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_486160:
    // 0x486160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x486160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486164:
    // 0x486164: 0xc04a576  jal         func_1295D8
label_486168:
    if (ctx->pc == 0x486168u) {
        ctx->pc = 0x486168u;
            // 0x486168: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x48616Cu;
        goto label_48616c;
    }
    ctx->pc = 0x486164u;
    SET_GPR_U32(ctx, 31, 0x48616Cu);
    ctx->pc = 0x486168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486164u;
            // 0x486168: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48616Cu; }
        if (ctx->pc != 0x48616Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48616Cu; }
        if (ctx->pc != 0x48616Cu) { return; }
    }
    ctx->pc = 0x48616Cu;
label_48616c:
    // 0x48616c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x48616cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_486170:
    // 0x486170: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x486170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_486174:
    // 0x486174: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x486174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_486178:
    // 0x486178: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x486178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_48617c:
    // 0x48617c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x48617cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_486180:
    // 0x486180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x486180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486184:
    // 0x486184: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x486184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
label_486188:
    // 0x486188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x486188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48618c:
    // 0x48618c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x48618cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_486190:
    // 0x486190: 0x344616ae  ori         $a2, $v0, 0x16AE
    ctx->pc = 0x486190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5806);
label_486194:
    // 0x486194: 0xc122cd8  jal         func_48B360
label_486198:
    if (ctx->pc == 0x486198u) {
        ctx->pc = 0x486198u;
            // 0x486198: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->pc = 0x48619Cu;
        goto label_48619c;
    }
    ctx->pc = 0x486194u;
    SET_GPR_U32(ctx, 31, 0x48619Cu);
    ctx->pc = 0x486198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486194u;
            // 0x486198: 0xae5000e4  sw          $s0, 0xE4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48619Cu; }
        if (ctx->pc != 0x48619Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48619Cu; }
        if (ctx->pc != 0x48619Cu) { return; }
    }
    ctx->pc = 0x48619Cu;
label_48619c:
    // 0x48619c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x48619cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4861a0:
    // 0x4861a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4861a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4861a4:
    // 0x4861a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4861a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4861a8:
    // 0x4861a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4861a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4861ac:
    // 0x4861ac: 0x3e00008  jr          $ra
label_4861b0:
    if (ctx->pc == 0x4861B0u) {
        ctx->pc = 0x4861B0u;
            // 0x4861b0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x4861B4u;
        goto label_4861b4;
    }
    ctx->pc = 0x4861ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4861B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4861ACu;
            // 0x4861b0: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4861B4u;
label_4861b4:
    // 0x4861b4: 0x0  nop
    ctx->pc = 0x4861b4u;
    // NOP
label_4861b8:
    // 0x4861b8: 0x0  nop
    ctx->pc = 0x4861b8u;
    // NOP
label_4861bc:
    // 0x4861bc: 0x0  nop
    ctx->pc = 0x4861bcu;
    // NOP
label_4861c0:
    // 0x4861c0: 0x3e00008  jr          $ra
label_4861c4:
    if (ctx->pc == 0x4861C4u) {
        ctx->pc = 0x4861C8u;
        goto label_4861c8;
    }
    ctx->pc = 0x4861C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4861C8u;
label_4861c8:
    // 0x4861c8: 0x0  nop
    ctx->pc = 0x4861c8u;
    // NOP
label_4861cc:
    // 0x4861cc: 0x0  nop
    ctx->pc = 0x4861ccu;
    // NOP
label_4861d0:
    // 0x4861d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4861d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4861d4:
    // 0x4861d4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4861d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4861d8:
    // 0x4861d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4861d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4861dc:
    // 0x4861dc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4861dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4861e0:
    // 0x4861e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4861e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4861e4:
    // 0x4861e4: 0x24c6fd00  addiu       $a2, $a2, -0x300
    ctx->pc = 0x4861e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966528));
label_4861e8:
    // 0x4861e8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x4861e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4861ec:
    // 0x4861ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4861ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4861f0:
    // 0x4861f0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x4861f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4861f4:
    // 0x4861f4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x4861f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4861f8:
    // 0x4861f8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4861f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4861fc:
    // 0x4861fc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4861fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_486200:
    // 0x486200: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x486200u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_486204:
    // 0x486204: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x486204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_486208:
    // 0x486208: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x486208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48620c:
    // 0x48620c: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x48620cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486210:
    // 0x486210: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x486210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_486214:
    // 0x486214: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x486214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486218:
    // 0x486218: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x486218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_48621c:
    // 0x48621c: 0xc04cafc  jal         func_132BF0
label_486220:
    if (ctx->pc == 0x486220u) {
        ctx->pc = 0x486220u;
            // 0x486220: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x486224u;
        goto label_486224;
    }
    ctx->pc = 0x48621Cu;
    SET_GPR_U32(ctx, 31, 0x486224u);
    ctx->pc = 0x486220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48621Cu;
            // 0x486220: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486224u; }
        if (ctx->pc != 0x486224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486224u; }
        if (ctx->pc != 0x486224u) { return; }
    }
    ctx->pc = 0x486224u;
label_486224:
    // 0x486224: 0xc040180  jal         func_100600
label_486228:
    if (ctx->pc == 0x486228u) {
        ctx->pc = 0x486228u;
            // 0x486228: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x48622Cu;
        goto label_48622c;
    }
    ctx->pc = 0x486224u;
    SET_GPR_U32(ctx, 31, 0x48622Cu);
    ctx->pc = 0x486228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486224u;
            // 0x486228: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48622Cu; }
        if (ctx->pc != 0x48622Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48622Cu; }
        if (ctx->pc != 0x48622Cu) { return; }
    }
    ctx->pc = 0x48622Cu;
label_48622c:
    // 0x48622c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x48622cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_486230:
    // 0x486230: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_486234:
    if (ctx->pc == 0x486234u) {
        ctx->pc = 0x486234u;
            // 0x486234: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x486238u;
        goto label_486238;
    }
    ctx->pc = 0x486230u;
    {
        const bool branch_taken_0x486230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x486230) {
            ctx->pc = 0x486234u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486230u;
            // 0x486234: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4862DCu;
            goto label_4862dc;
        }
    }
    ctx->pc = 0x486238u;
label_486238:
    // 0x486238: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x486238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_48623c:
    // 0x48623c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x48623cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_486240:
    // 0x486240: 0xc441fd40  lwc1        $f1, -0x2C0($v0)
    ctx->pc = 0x486240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_486244:
    // 0x486244: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x486244u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_486248:
    // 0x486248: 0x0  nop
    ctx->pc = 0x486248u;
    // NOP
label_48624c:
    // 0x48624c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x48624cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_486250:
    // 0x486250: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_486254:
    if (ctx->pc == 0x486254u) {
        ctx->pc = 0x486254u;
            // 0x486254: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x486258u;
        goto label_486258;
    }
    ctx->pc = 0x486250u;
    {
        const bool branch_taken_0x486250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x486250) {
            ctx->pc = 0x486254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486250u;
            // 0x486254: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x486268u;
            goto label_486268;
        }
    }
    ctx->pc = 0x486258u;
label_486258:
    // 0x486258: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x486258u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_48625c:
    // 0x48625c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x48625cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_486260:
    // 0x486260: 0x10000006  b           . + 4 + (0x6 << 2)
label_486264:
    if (ctx->pc == 0x486264u) {
        ctx->pc = 0x486268u;
        goto label_486268;
    }
    ctx->pc = 0x486260u;
    {
        const bool branch_taken_0x486260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x486260) {
            ctx->pc = 0x48627Cu;
            goto label_48627c;
        }
    }
    ctx->pc = 0x486268u;
label_486268:
    // 0x486268: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x486268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_48626c:
    // 0x48626c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x48626cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_486270:
    // 0x486270: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x486270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_486274:
    // 0x486274: 0x0  nop
    ctx->pc = 0x486274u;
    // NOP
label_486278:
    // 0x486278: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x486278u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_48627c:
    // 0x48627c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x48627cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_486280:
    // 0x486280: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x486280u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_486284:
    // 0x486284: 0x2442fd10  addiu       $v0, $v0, -0x2F0
    ctx->pc = 0x486284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966544));
label_486288:
    // 0x486288: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x486288u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_48628c:
    // 0x48628c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x48628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_486290:
    // 0x486290: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x486290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_486294:
    // 0x486294: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x486294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_486298:
    // 0x486298: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x486298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_48629c:
    // 0x48629c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x48629cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4862a0:
    // 0x4862a0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4862a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4862a4:
    // 0x4862a4: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x4862a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_4862a8:
    // 0x4862a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4862a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4862ac:
    // 0x4862ac: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x4862acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4862b0:
    // 0x4862b0: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x4862b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4862b4:
    // 0x4862b4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4862b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4862b8:
    // 0x4862b8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x4862b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4862bc:
    // 0x4862bc: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4862bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4862c0:
    // 0x4862c0: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x4862c0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4862c4:
    // 0x4862c4: 0x2529fd20  addiu       $t1, $t1, -0x2E0
    ctx->pc = 0x4862c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966560));
label_4862c8:
    // 0x4862c8: 0x254afd30  addiu       $t2, $t2, -0x2D0
    ctx->pc = 0x4862c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294966576));
label_4862cc:
    // 0x4862cc: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x4862ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4862d0:
    // 0x4862d0: 0xc0db488  jal         func_36D220
label_4862d4:
    if (ctx->pc == 0x4862D4u) {
        ctx->pc = 0x4862D4u;
            // 0x4862d4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4862D8u;
        goto label_4862d8;
    }
    ctx->pc = 0x4862D0u;
    SET_GPR_U32(ctx, 31, 0x4862D8u);
    ctx->pc = 0x4862D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4862D0u;
            // 0x4862d4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4862D8u; }
        if (ctx->pc != 0x4862D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4862D8u; }
        if (ctx->pc != 0x4862D8u) { return; }
    }
    ctx->pc = 0x4862D8u;
label_4862d8:
    // 0x4862d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4862d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4862dc:
    // 0x4862dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4862dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4862e0:
    // 0x4862e0: 0x3e00008  jr          $ra
label_4862e4:
    if (ctx->pc == 0x4862E4u) {
        ctx->pc = 0x4862E4u;
            // 0x4862e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4862E8u;
        goto label_4862e8;
    }
    ctx->pc = 0x4862E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4862E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4862E0u;
            // 0x4862e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4862E8u;
label_4862e8:
    // 0x4862e8: 0x0  nop
    ctx->pc = 0x4862e8u;
    // NOP
label_4862ec:
    // 0x4862ec: 0x0  nop
    ctx->pc = 0x4862ecu;
    // NOP
label_4862f0:
    // 0x4862f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4862f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4862f4:
    // 0x4862f4: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x4862f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4862f8:
    // 0x4862f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4862f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4862fc:
    // 0x4862fc: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x4862fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_486300:
    // 0x486300: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x486300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486304:
    // 0x486304: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x486304u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_486308:
    // 0x486308: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x486308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_48630c:
    // 0x48630c: 0xc0bb2e8  jal         func_2ECBA0
label_486310:
    if (ctx->pc == 0x486310u) {
        ctx->pc = 0x486310u;
            // 0x486310: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x486314u;
        goto label_486314;
    }
    ctx->pc = 0x48630Cu;
    SET_GPR_U32(ctx, 31, 0x486314u);
    ctx->pc = 0x486310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48630Cu;
            // 0x486310: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486314u; }
        if (ctx->pc != 0x486314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486314u; }
        if (ctx->pc != 0x486314u) { return; }
    }
    ctx->pc = 0x486314u;
label_486314:
    // 0x486314: 0x920300e8  lbu         $v1, 0xE8($s0)
    ctx->pc = 0x486314u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 232)));
label_486318:
    // 0x486318: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_48631c:
    if (ctx->pc == 0x48631Cu) {
        ctx->pc = 0x48631Cu;
            // 0x48631c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x486320u;
        goto label_486320;
    }
    ctx->pc = 0x486318u;
    {
        const bool branch_taken_0x486318 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x486318) {
            ctx->pc = 0x48631Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486318u;
            // 0x48631c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486338u;
            goto label_486338;
        }
    }
    ctx->pc = 0x486320u;
label_486320:
    // 0x486320: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x486320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_486324:
    // 0x486324: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x486324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_486328:
    // 0x486328: 0xc122d2c  jal         func_48B4B0
label_48632c:
    if (ctx->pc == 0x48632Cu) {
        ctx->pc = 0x48632Cu;
            // 0x48632c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x486330u;
        goto label_486330;
    }
    ctx->pc = 0x486328u;
    SET_GPR_U32(ctx, 31, 0x486330u);
    ctx->pc = 0x48632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486328u;
            // 0x48632c: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486330u; }
        if (ctx->pc != 0x486330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486330u; }
        if (ctx->pc != 0x486330u) { return; }
    }
    ctx->pc = 0x486330u;
label_486330:
    // 0x486330: 0xa20000e8  sb          $zero, 0xE8($s0)
    ctx->pc = 0x486330u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 232), (uint8_t)GPR_U32(ctx, 0));
label_486334:
    // 0x486334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x486334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_486338:
    // 0x486338: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486338u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_48633c:
    // 0x48633c: 0x3e00008  jr          $ra
label_486340:
    if (ctx->pc == 0x486340u) {
        ctx->pc = 0x486340u;
            // 0x486340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x486344u;
        goto label_486344;
    }
    ctx->pc = 0x48633Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x486340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x48633Cu;
            // 0x486340: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486344u;
label_486344:
    // 0x486344: 0x0  nop
    ctx->pc = 0x486344u;
    // NOP
label_486348:
    // 0x486348: 0x0  nop
    ctx->pc = 0x486348u;
    // NOP
label_48634c:
    // 0x48634c: 0x0  nop
    ctx->pc = 0x48634cu;
    // NOP
label_486350:
    // 0x486350: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x486350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_486354:
    // 0x486354: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x486354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486358:
    // 0x486358: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_48635c:
    if (ctx->pc == 0x48635Cu) {
        ctx->pc = 0x486360u;
        goto label_486360;
    }
    ctx->pc = 0x486358u;
    {
        const bool branch_taken_0x486358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x486358) {
            ctx->pc = 0x486368u;
            goto label_486368;
        }
    }
    ctx->pc = 0x486360u;
label_486360:
    // 0x486360: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
label_486364:
    if (ctx->pc == 0x486364u) {
        ctx->pc = 0x486364u;
            // 0x486364: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x486368u;
        goto label_486368;
    }
    ctx->pc = 0x486360u;
    {
        const bool branch_taken_0x486360 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x486360) {
            ctx->pc = 0x486364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x486360u;
            // 0x486364: 0xac8300e0  sw          $v1, 0xE0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x486368u;
            goto label_486368;
        }
    }
    ctx->pc = 0x486368u;
label_486368:
    // 0x486368: 0x3e00008  jr          $ra
label_48636c:
    if (ctx->pc == 0x48636Cu) {
        ctx->pc = 0x486370u;
        goto label_486370;
    }
    ctx->pc = 0x486368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x486370u;
label_486370:
    // 0x486370: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x486370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_486374:
    // 0x486374: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x486374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_486378:
    // 0x486378: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x486378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_48637c:
    // 0x48637c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x48637cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_486380:
    // 0x486380: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x486380u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_486384:
    // 0x486384: 0xc0e393c  jal         func_38E4F0
label_486388:
    if (ctx->pc == 0x486388u) {
        ctx->pc = 0x486388u;
            // 0x486388: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48638Cu;
        goto label_48638c;
    }
    ctx->pc = 0x486384u;
    SET_GPR_U32(ctx, 31, 0x48638Cu);
    ctx->pc = 0x486388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486384u;
            // 0x486388: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48638Cu; }
        if (ctx->pc != 0x48638Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48638Cu; }
        if (ctx->pc != 0x48638Cu) { return; }
    }
    ctx->pc = 0x48638Cu;
label_48638c:
    // 0x48638c: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x48638cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_486390:
    // 0x486390: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x486390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_486394:
    // 0x486394: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x486394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_486398:
    // 0x486398: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x486398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_48639c:
    // 0x48639c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x48639cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_4863a0:
    // 0x4863a0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4863a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4863a4:
    // 0x4863a4: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4863a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4863a8:
    // 0x4863a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4863a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4863ac:
    // 0x4863ac: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x4863acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_4863b0:
    // 0x4863b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4863b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4863b4:
    // 0x4863b4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4863b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4863b8:
    // 0x4863b8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4863b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4863bc:
    // 0x4863bc: 0xc08bff0  jal         func_22FFC0
label_4863c0:
    if (ctx->pc == 0x4863C0u) {
        ctx->pc = 0x4863C0u;
            // 0x4863c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4863C4u;
        goto label_4863c4;
    }
    ctx->pc = 0x4863BCu;
    SET_GPR_U32(ctx, 31, 0x4863C4u);
    ctx->pc = 0x4863C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4863BCu;
            // 0x4863c0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4863C4u; }
        if (ctx->pc != 0x4863C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4863C4u; }
        if (ctx->pc != 0x4863C4u) { return; }
    }
    ctx->pc = 0x4863C4u;
label_4863c4:
    // 0x4863c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4863c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4863c8:
    // 0x4863c8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x4863c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4863cc:
    // 0x4863cc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4863ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4863d0:
    // 0x4863d0: 0xc08914c  jal         func_224530
label_4863d4:
    if (ctx->pc == 0x4863D4u) {
        ctx->pc = 0x4863D4u;
            // 0x4863d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4863D8u;
        goto label_4863d8;
    }
    ctx->pc = 0x4863D0u;
    SET_GPR_U32(ctx, 31, 0x4863D8u);
    ctx->pc = 0x4863D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4863D0u;
            // 0x4863d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4863D8u; }
        if (ctx->pc != 0x4863D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4863D8u; }
        if (ctx->pc != 0x4863D8u) { return; }
    }
    ctx->pc = 0x4863D8u;
label_4863d8:
    // 0x4863d8: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x4863d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4863dc:
    // 0x4863dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4863dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4863e0:
    // 0x4863e0: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x4863e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4863e4:
    // 0x4863e4: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x4863e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4863e8:
    // 0x4863e8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4863e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4863ec:
    // 0x4863ec: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x4863ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4863f0:
    // 0x4863f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4863f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4863f4:
    // 0x4863f4: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x4863f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
label_4863f8:
    // 0x4863f8: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4863f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4863fc:
    // 0x4863fc: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4863fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_486400:
    // 0x486400: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x486400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_486404:
    // 0x486404: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x486404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_486408:
    // 0x486408: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x486408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_48640c:
    // 0x48640c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x48640cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_486410:
    // 0x486410: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x486410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_486414:
    // 0x486414: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x486414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_486418:
    // 0x486418: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x486418u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_48641c:
    // 0x48641c: 0xc0892b0  jal         func_224AC0
label_486420:
    if (ctx->pc == 0x486420u) {
        ctx->pc = 0x486420u;
            // 0x486420: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->pc = 0x486424u;
        goto label_486424;
    }
    ctx->pc = 0x48641Cu;
    SET_GPR_U32(ctx, 31, 0x486424u);
    ctx->pc = 0x486420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x48641Cu;
            // 0x486420: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486424u; }
        if (ctx->pc != 0x486424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486424u; }
        if (ctx->pc != 0x486424u) { return; }
    }
    ctx->pc = 0x486424u;
label_486424:
    // 0x486424: 0xc088b74  jal         func_222DD0
label_486428:
    if (ctx->pc == 0x486428u) {
        ctx->pc = 0x486428u;
            // 0x486428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x48642Cu;
        goto label_48642c;
    }
    ctx->pc = 0x486424u;
    SET_GPR_U32(ctx, 31, 0x48642Cu);
    ctx->pc = 0x486428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486424u;
            // 0x486428: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48642Cu; }
        if (ctx->pc != 0x48642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x48642Cu; }
        if (ctx->pc != 0x48642Cu) { return; }
    }
    ctx->pc = 0x48642Cu;
label_48642c:
    // 0x48642c: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x48642cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_486430:
    // 0x486430: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x486430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_486434:
    // 0x486434: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x486434u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_486438:
    // 0x486438: 0x320f809  jalr        $t9
label_48643c:
    if (ctx->pc == 0x48643Cu) {
        ctx->pc = 0x48643Cu;
            // 0x48643c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x486440u;
        goto label_486440;
    }
    ctx->pc = 0x486438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x486440u);
        ctx->pc = 0x48643Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486438u;
            // 0x48643c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x486440u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x486440u; }
            if (ctx->pc != 0x486440u) { return; }
        }
        }
    }
    ctx->pc = 0x486440u;
label_486440:
    // 0x486440: 0xc088b74  jal         func_222DD0
label_486444:
    if (ctx->pc == 0x486444u) {
        ctx->pc = 0x486444u;
            // 0x486444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x486448u;
        goto label_486448;
    }
    ctx->pc = 0x486440u;
    SET_GPR_U32(ctx, 31, 0x486448u);
    ctx->pc = 0x486444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x486440u;
            // 0x486444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486448u; }
        if (ctx->pc != 0x486448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x486448u; }
        if (ctx->pc != 0x486448u) { return; }
    }
    ctx->pc = 0x486448u;
label_486448:
    // 0x486448: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x486448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_48644c:
    // 0x48644c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x48644cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_486450:
    // 0x486450: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x486450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_486454:
    // 0x486454: 0x320f809  jalr        $t9
label_486458:
    if (ctx->pc == 0x486458u) {
        ctx->pc = 0x486458u;
            // 0x486458: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x48645Cu;
        goto label_48645c;
    }
    ctx->pc = 0x486454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x48645Cu);
        ctx->pc = 0x486458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486454u;
            // 0x486458: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x48645Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x48645Cu; }
            if (ctx->pc != 0x48645Cu) { return; }
        }
        }
    }
    ctx->pc = 0x48645Cu;
label_48645c:
    // 0x48645c: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x48645cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_486460:
    // 0x486460: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x486460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_486464:
    // 0x486464: 0x34857084  ori         $a1, $a0, 0x7084
    ctx->pc = 0x486464u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_486468:
    // 0x486468: 0x3464b8c2  ori         $a0, $v1, 0xB8C2
    ctx->pc = 0x486468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_48646c:
    // 0x48646c: 0xae050154  sw          $a1, 0x154($s0)
    ctx->pc = 0x48646cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 5));
label_486470:
    // 0x486470: 0xae040158  sw          $a0, 0x158($s0)
    ctx->pc = 0x486470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 4));
label_486474:
    // 0x486474: 0x3c033d4c  lui         $v1, 0x3D4C
    ctx->pc = 0x486474u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
label_486478:
    // 0x486478: 0x3464cccd  ori         $a0, $v1, 0xCCCD
    ctx->pc = 0x486478u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_48647c:
    // 0x48647c: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x48647cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
label_486480:
    // 0x486480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x486480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_486484:
    // 0x486484: 0xae040160  sw          $a0, 0x160($s0)
    ctx->pc = 0x486484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 4));
label_486488:
    // 0x486488: 0xa22300e8  sb          $v1, 0xE8($s1)
    ctx->pc = 0x486488u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 232), (uint8_t)GPR_U32(ctx, 3));
label_48648c:
    // 0x48648c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x48648cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_486490:
    // 0x486490: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x486490u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_486494:
    // 0x486494: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x486494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_486498:
    // 0x486498: 0x3e00008  jr          $ra
label_48649c:
    if (ctx->pc == 0x48649Cu) {
        ctx->pc = 0x48649Cu;
            // 0x48649c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4864A0u;
        goto label_fallthrough_0x486498;
    }
    ctx->pc = 0x486498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48649Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x486498u;
            // 0x48649c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x486498:
    ctx->pc = 0x4864A0u;
}
