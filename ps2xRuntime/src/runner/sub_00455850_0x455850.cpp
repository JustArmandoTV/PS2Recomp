#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00455850
// Address: 0x455850 - 0x456f80
void sub_00455850_0x455850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00455850_0x455850");
#endif

    switch (ctx->pc) {
        case 0x455850u: goto label_455850;
        case 0x455854u: goto label_455854;
        case 0x455858u: goto label_455858;
        case 0x45585cu: goto label_45585c;
        case 0x455860u: goto label_455860;
        case 0x455864u: goto label_455864;
        case 0x455868u: goto label_455868;
        case 0x45586cu: goto label_45586c;
        case 0x455870u: goto label_455870;
        case 0x455874u: goto label_455874;
        case 0x455878u: goto label_455878;
        case 0x45587cu: goto label_45587c;
        case 0x455880u: goto label_455880;
        case 0x455884u: goto label_455884;
        case 0x455888u: goto label_455888;
        case 0x45588cu: goto label_45588c;
        case 0x455890u: goto label_455890;
        case 0x455894u: goto label_455894;
        case 0x455898u: goto label_455898;
        case 0x45589cu: goto label_45589c;
        case 0x4558a0u: goto label_4558a0;
        case 0x4558a4u: goto label_4558a4;
        case 0x4558a8u: goto label_4558a8;
        case 0x4558acu: goto label_4558ac;
        case 0x4558b0u: goto label_4558b0;
        case 0x4558b4u: goto label_4558b4;
        case 0x4558b8u: goto label_4558b8;
        case 0x4558bcu: goto label_4558bc;
        case 0x4558c0u: goto label_4558c0;
        case 0x4558c4u: goto label_4558c4;
        case 0x4558c8u: goto label_4558c8;
        case 0x4558ccu: goto label_4558cc;
        case 0x4558d0u: goto label_4558d0;
        case 0x4558d4u: goto label_4558d4;
        case 0x4558d8u: goto label_4558d8;
        case 0x4558dcu: goto label_4558dc;
        case 0x4558e0u: goto label_4558e0;
        case 0x4558e4u: goto label_4558e4;
        case 0x4558e8u: goto label_4558e8;
        case 0x4558ecu: goto label_4558ec;
        case 0x4558f0u: goto label_4558f0;
        case 0x4558f4u: goto label_4558f4;
        case 0x4558f8u: goto label_4558f8;
        case 0x4558fcu: goto label_4558fc;
        case 0x455900u: goto label_455900;
        case 0x455904u: goto label_455904;
        case 0x455908u: goto label_455908;
        case 0x45590cu: goto label_45590c;
        case 0x455910u: goto label_455910;
        case 0x455914u: goto label_455914;
        case 0x455918u: goto label_455918;
        case 0x45591cu: goto label_45591c;
        case 0x455920u: goto label_455920;
        case 0x455924u: goto label_455924;
        case 0x455928u: goto label_455928;
        case 0x45592cu: goto label_45592c;
        case 0x455930u: goto label_455930;
        case 0x455934u: goto label_455934;
        case 0x455938u: goto label_455938;
        case 0x45593cu: goto label_45593c;
        case 0x455940u: goto label_455940;
        case 0x455944u: goto label_455944;
        case 0x455948u: goto label_455948;
        case 0x45594cu: goto label_45594c;
        case 0x455950u: goto label_455950;
        case 0x455954u: goto label_455954;
        case 0x455958u: goto label_455958;
        case 0x45595cu: goto label_45595c;
        case 0x455960u: goto label_455960;
        case 0x455964u: goto label_455964;
        case 0x455968u: goto label_455968;
        case 0x45596cu: goto label_45596c;
        case 0x455970u: goto label_455970;
        case 0x455974u: goto label_455974;
        case 0x455978u: goto label_455978;
        case 0x45597cu: goto label_45597c;
        case 0x455980u: goto label_455980;
        case 0x455984u: goto label_455984;
        case 0x455988u: goto label_455988;
        case 0x45598cu: goto label_45598c;
        case 0x455990u: goto label_455990;
        case 0x455994u: goto label_455994;
        case 0x455998u: goto label_455998;
        case 0x45599cu: goto label_45599c;
        case 0x4559a0u: goto label_4559a0;
        case 0x4559a4u: goto label_4559a4;
        case 0x4559a8u: goto label_4559a8;
        case 0x4559acu: goto label_4559ac;
        case 0x4559b0u: goto label_4559b0;
        case 0x4559b4u: goto label_4559b4;
        case 0x4559b8u: goto label_4559b8;
        case 0x4559bcu: goto label_4559bc;
        case 0x4559c0u: goto label_4559c0;
        case 0x4559c4u: goto label_4559c4;
        case 0x4559c8u: goto label_4559c8;
        case 0x4559ccu: goto label_4559cc;
        case 0x4559d0u: goto label_4559d0;
        case 0x4559d4u: goto label_4559d4;
        case 0x4559d8u: goto label_4559d8;
        case 0x4559dcu: goto label_4559dc;
        case 0x4559e0u: goto label_4559e0;
        case 0x4559e4u: goto label_4559e4;
        case 0x4559e8u: goto label_4559e8;
        case 0x4559ecu: goto label_4559ec;
        case 0x4559f0u: goto label_4559f0;
        case 0x4559f4u: goto label_4559f4;
        case 0x4559f8u: goto label_4559f8;
        case 0x4559fcu: goto label_4559fc;
        case 0x455a00u: goto label_455a00;
        case 0x455a04u: goto label_455a04;
        case 0x455a08u: goto label_455a08;
        case 0x455a0cu: goto label_455a0c;
        case 0x455a10u: goto label_455a10;
        case 0x455a14u: goto label_455a14;
        case 0x455a18u: goto label_455a18;
        case 0x455a1cu: goto label_455a1c;
        case 0x455a20u: goto label_455a20;
        case 0x455a24u: goto label_455a24;
        case 0x455a28u: goto label_455a28;
        case 0x455a2cu: goto label_455a2c;
        case 0x455a30u: goto label_455a30;
        case 0x455a34u: goto label_455a34;
        case 0x455a38u: goto label_455a38;
        case 0x455a3cu: goto label_455a3c;
        case 0x455a40u: goto label_455a40;
        case 0x455a44u: goto label_455a44;
        case 0x455a48u: goto label_455a48;
        case 0x455a4cu: goto label_455a4c;
        case 0x455a50u: goto label_455a50;
        case 0x455a54u: goto label_455a54;
        case 0x455a58u: goto label_455a58;
        case 0x455a5cu: goto label_455a5c;
        case 0x455a60u: goto label_455a60;
        case 0x455a64u: goto label_455a64;
        case 0x455a68u: goto label_455a68;
        case 0x455a6cu: goto label_455a6c;
        case 0x455a70u: goto label_455a70;
        case 0x455a74u: goto label_455a74;
        case 0x455a78u: goto label_455a78;
        case 0x455a7cu: goto label_455a7c;
        case 0x455a80u: goto label_455a80;
        case 0x455a84u: goto label_455a84;
        case 0x455a88u: goto label_455a88;
        case 0x455a8cu: goto label_455a8c;
        case 0x455a90u: goto label_455a90;
        case 0x455a94u: goto label_455a94;
        case 0x455a98u: goto label_455a98;
        case 0x455a9cu: goto label_455a9c;
        case 0x455aa0u: goto label_455aa0;
        case 0x455aa4u: goto label_455aa4;
        case 0x455aa8u: goto label_455aa8;
        case 0x455aacu: goto label_455aac;
        case 0x455ab0u: goto label_455ab0;
        case 0x455ab4u: goto label_455ab4;
        case 0x455ab8u: goto label_455ab8;
        case 0x455abcu: goto label_455abc;
        case 0x455ac0u: goto label_455ac0;
        case 0x455ac4u: goto label_455ac4;
        case 0x455ac8u: goto label_455ac8;
        case 0x455accu: goto label_455acc;
        case 0x455ad0u: goto label_455ad0;
        case 0x455ad4u: goto label_455ad4;
        case 0x455ad8u: goto label_455ad8;
        case 0x455adcu: goto label_455adc;
        case 0x455ae0u: goto label_455ae0;
        case 0x455ae4u: goto label_455ae4;
        case 0x455ae8u: goto label_455ae8;
        case 0x455aecu: goto label_455aec;
        case 0x455af0u: goto label_455af0;
        case 0x455af4u: goto label_455af4;
        case 0x455af8u: goto label_455af8;
        case 0x455afcu: goto label_455afc;
        case 0x455b00u: goto label_455b00;
        case 0x455b04u: goto label_455b04;
        case 0x455b08u: goto label_455b08;
        case 0x455b0cu: goto label_455b0c;
        case 0x455b10u: goto label_455b10;
        case 0x455b14u: goto label_455b14;
        case 0x455b18u: goto label_455b18;
        case 0x455b1cu: goto label_455b1c;
        case 0x455b20u: goto label_455b20;
        case 0x455b24u: goto label_455b24;
        case 0x455b28u: goto label_455b28;
        case 0x455b2cu: goto label_455b2c;
        case 0x455b30u: goto label_455b30;
        case 0x455b34u: goto label_455b34;
        case 0x455b38u: goto label_455b38;
        case 0x455b3cu: goto label_455b3c;
        case 0x455b40u: goto label_455b40;
        case 0x455b44u: goto label_455b44;
        case 0x455b48u: goto label_455b48;
        case 0x455b4cu: goto label_455b4c;
        case 0x455b50u: goto label_455b50;
        case 0x455b54u: goto label_455b54;
        case 0x455b58u: goto label_455b58;
        case 0x455b5cu: goto label_455b5c;
        case 0x455b60u: goto label_455b60;
        case 0x455b64u: goto label_455b64;
        case 0x455b68u: goto label_455b68;
        case 0x455b6cu: goto label_455b6c;
        case 0x455b70u: goto label_455b70;
        case 0x455b74u: goto label_455b74;
        case 0x455b78u: goto label_455b78;
        case 0x455b7cu: goto label_455b7c;
        case 0x455b80u: goto label_455b80;
        case 0x455b84u: goto label_455b84;
        case 0x455b88u: goto label_455b88;
        case 0x455b8cu: goto label_455b8c;
        case 0x455b90u: goto label_455b90;
        case 0x455b94u: goto label_455b94;
        case 0x455b98u: goto label_455b98;
        case 0x455b9cu: goto label_455b9c;
        case 0x455ba0u: goto label_455ba0;
        case 0x455ba4u: goto label_455ba4;
        case 0x455ba8u: goto label_455ba8;
        case 0x455bacu: goto label_455bac;
        case 0x455bb0u: goto label_455bb0;
        case 0x455bb4u: goto label_455bb4;
        case 0x455bb8u: goto label_455bb8;
        case 0x455bbcu: goto label_455bbc;
        case 0x455bc0u: goto label_455bc0;
        case 0x455bc4u: goto label_455bc4;
        case 0x455bc8u: goto label_455bc8;
        case 0x455bccu: goto label_455bcc;
        case 0x455bd0u: goto label_455bd0;
        case 0x455bd4u: goto label_455bd4;
        case 0x455bd8u: goto label_455bd8;
        case 0x455bdcu: goto label_455bdc;
        case 0x455be0u: goto label_455be0;
        case 0x455be4u: goto label_455be4;
        case 0x455be8u: goto label_455be8;
        case 0x455becu: goto label_455bec;
        case 0x455bf0u: goto label_455bf0;
        case 0x455bf4u: goto label_455bf4;
        case 0x455bf8u: goto label_455bf8;
        case 0x455bfcu: goto label_455bfc;
        case 0x455c00u: goto label_455c00;
        case 0x455c04u: goto label_455c04;
        case 0x455c08u: goto label_455c08;
        case 0x455c0cu: goto label_455c0c;
        case 0x455c10u: goto label_455c10;
        case 0x455c14u: goto label_455c14;
        case 0x455c18u: goto label_455c18;
        case 0x455c1cu: goto label_455c1c;
        case 0x455c20u: goto label_455c20;
        case 0x455c24u: goto label_455c24;
        case 0x455c28u: goto label_455c28;
        case 0x455c2cu: goto label_455c2c;
        case 0x455c30u: goto label_455c30;
        case 0x455c34u: goto label_455c34;
        case 0x455c38u: goto label_455c38;
        case 0x455c3cu: goto label_455c3c;
        case 0x455c40u: goto label_455c40;
        case 0x455c44u: goto label_455c44;
        case 0x455c48u: goto label_455c48;
        case 0x455c4cu: goto label_455c4c;
        case 0x455c50u: goto label_455c50;
        case 0x455c54u: goto label_455c54;
        case 0x455c58u: goto label_455c58;
        case 0x455c5cu: goto label_455c5c;
        case 0x455c60u: goto label_455c60;
        case 0x455c64u: goto label_455c64;
        case 0x455c68u: goto label_455c68;
        case 0x455c6cu: goto label_455c6c;
        case 0x455c70u: goto label_455c70;
        case 0x455c74u: goto label_455c74;
        case 0x455c78u: goto label_455c78;
        case 0x455c7cu: goto label_455c7c;
        case 0x455c80u: goto label_455c80;
        case 0x455c84u: goto label_455c84;
        case 0x455c88u: goto label_455c88;
        case 0x455c8cu: goto label_455c8c;
        case 0x455c90u: goto label_455c90;
        case 0x455c94u: goto label_455c94;
        case 0x455c98u: goto label_455c98;
        case 0x455c9cu: goto label_455c9c;
        case 0x455ca0u: goto label_455ca0;
        case 0x455ca4u: goto label_455ca4;
        case 0x455ca8u: goto label_455ca8;
        case 0x455cacu: goto label_455cac;
        case 0x455cb0u: goto label_455cb0;
        case 0x455cb4u: goto label_455cb4;
        case 0x455cb8u: goto label_455cb8;
        case 0x455cbcu: goto label_455cbc;
        case 0x455cc0u: goto label_455cc0;
        case 0x455cc4u: goto label_455cc4;
        case 0x455cc8u: goto label_455cc8;
        case 0x455cccu: goto label_455ccc;
        case 0x455cd0u: goto label_455cd0;
        case 0x455cd4u: goto label_455cd4;
        case 0x455cd8u: goto label_455cd8;
        case 0x455cdcu: goto label_455cdc;
        case 0x455ce0u: goto label_455ce0;
        case 0x455ce4u: goto label_455ce4;
        case 0x455ce8u: goto label_455ce8;
        case 0x455cecu: goto label_455cec;
        case 0x455cf0u: goto label_455cf0;
        case 0x455cf4u: goto label_455cf4;
        case 0x455cf8u: goto label_455cf8;
        case 0x455cfcu: goto label_455cfc;
        case 0x455d00u: goto label_455d00;
        case 0x455d04u: goto label_455d04;
        case 0x455d08u: goto label_455d08;
        case 0x455d0cu: goto label_455d0c;
        case 0x455d10u: goto label_455d10;
        case 0x455d14u: goto label_455d14;
        case 0x455d18u: goto label_455d18;
        case 0x455d1cu: goto label_455d1c;
        case 0x455d20u: goto label_455d20;
        case 0x455d24u: goto label_455d24;
        case 0x455d28u: goto label_455d28;
        case 0x455d2cu: goto label_455d2c;
        case 0x455d30u: goto label_455d30;
        case 0x455d34u: goto label_455d34;
        case 0x455d38u: goto label_455d38;
        case 0x455d3cu: goto label_455d3c;
        case 0x455d40u: goto label_455d40;
        case 0x455d44u: goto label_455d44;
        case 0x455d48u: goto label_455d48;
        case 0x455d4cu: goto label_455d4c;
        case 0x455d50u: goto label_455d50;
        case 0x455d54u: goto label_455d54;
        case 0x455d58u: goto label_455d58;
        case 0x455d5cu: goto label_455d5c;
        case 0x455d60u: goto label_455d60;
        case 0x455d64u: goto label_455d64;
        case 0x455d68u: goto label_455d68;
        case 0x455d6cu: goto label_455d6c;
        case 0x455d70u: goto label_455d70;
        case 0x455d74u: goto label_455d74;
        case 0x455d78u: goto label_455d78;
        case 0x455d7cu: goto label_455d7c;
        case 0x455d80u: goto label_455d80;
        case 0x455d84u: goto label_455d84;
        case 0x455d88u: goto label_455d88;
        case 0x455d8cu: goto label_455d8c;
        case 0x455d90u: goto label_455d90;
        case 0x455d94u: goto label_455d94;
        case 0x455d98u: goto label_455d98;
        case 0x455d9cu: goto label_455d9c;
        case 0x455da0u: goto label_455da0;
        case 0x455da4u: goto label_455da4;
        case 0x455da8u: goto label_455da8;
        case 0x455dacu: goto label_455dac;
        case 0x455db0u: goto label_455db0;
        case 0x455db4u: goto label_455db4;
        case 0x455db8u: goto label_455db8;
        case 0x455dbcu: goto label_455dbc;
        case 0x455dc0u: goto label_455dc0;
        case 0x455dc4u: goto label_455dc4;
        case 0x455dc8u: goto label_455dc8;
        case 0x455dccu: goto label_455dcc;
        case 0x455dd0u: goto label_455dd0;
        case 0x455dd4u: goto label_455dd4;
        case 0x455dd8u: goto label_455dd8;
        case 0x455ddcu: goto label_455ddc;
        case 0x455de0u: goto label_455de0;
        case 0x455de4u: goto label_455de4;
        case 0x455de8u: goto label_455de8;
        case 0x455decu: goto label_455dec;
        case 0x455df0u: goto label_455df0;
        case 0x455df4u: goto label_455df4;
        case 0x455df8u: goto label_455df8;
        case 0x455dfcu: goto label_455dfc;
        case 0x455e00u: goto label_455e00;
        case 0x455e04u: goto label_455e04;
        case 0x455e08u: goto label_455e08;
        case 0x455e0cu: goto label_455e0c;
        case 0x455e10u: goto label_455e10;
        case 0x455e14u: goto label_455e14;
        case 0x455e18u: goto label_455e18;
        case 0x455e1cu: goto label_455e1c;
        case 0x455e20u: goto label_455e20;
        case 0x455e24u: goto label_455e24;
        case 0x455e28u: goto label_455e28;
        case 0x455e2cu: goto label_455e2c;
        case 0x455e30u: goto label_455e30;
        case 0x455e34u: goto label_455e34;
        case 0x455e38u: goto label_455e38;
        case 0x455e3cu: goto label_455e3c;
        case 0x455e40u: goto label_455e40;
        case 0x455e44u: goto label_455e44;
        case 0x455e48u: goto label_455e48;
        case 0x455e4cu: goto label_455e4c;
        case 0x455e50u: goto label_455e50;
        case 0x455e54u: goto label_455e54;
        case 0x455e58u: goto label_455e58;
        case 0x455e5cu: goto label_455e5c;
        case 0x455e60u: goto label_455e60;
        case 0x455e64u: goto label_455e64;
        case 0x455e68u: goto label_455e68;
        case 0x455e6cu: goto label_455e6c;
        case 0x455e70u: goto label_455e70;
        case 0x455e74u: goto label_455e74;
        case 0x455e78u: goto label_455e78;
        case 0x455e7cu: goto label_455e7c;
        case 0x455e80u: goto label_455e80;
        case 0x455e84u: goto label_455e84;
        case 0x455e88u: goto label_455e88;
        case 0x455e8cu: goto label_455e8c;
        case 0x455e90u: goto label_455e90;
        case 0x455e94u: goto label_455e94;
        case 0x455e98u: goto label_455e98;
        case 0x455e9cu: goto label_455e9c;
        case 0x455ea0u: goto label_455ea0;
        case 0x455ea4u: goto label_455ea4;
        case 0x455ea8u: goto label_455ea8;
        case 0x455eacu: goto label_455eac;
        case 0x455eb0u: goto label_455eb0;
        case 0x455eb4u: goto label_455eb4;
        case 0x455eb8u: goto label_455eb8;
        case 0x455ebcu: goto label_455ebc;
        case 0x455ec0u: goto label_455ec0;
        case 0x455ec4u: goto label_455ec4;
        case 0x455ec8u: goto label_455ec8;
        case 0x455eccu: goto label_455ecc;
        case 0x455ed0u: goto label_455ed0;
        case 0x455ed4u: goto label_455ed4;
        case 0x455ed8u: goto label_455ed8;
        case 0x455edcu: goto label_455edc;
        case 0x455ee0u: goto label_455ee0;
        case 0x455ee4u: goto label_455ee4;
        case 0x455ee8u: goto label_455ee8;
        case 0x455eecu: goto label_455eec;
        case 0x455ef0u: goto label_455ef0;
        case 0x455ef4u: goto label_455ef4;
        case 0x455ef8u: goto label_455ef8;
        case 0x455efcu: goto label_455efc;
        case 0x455f00u: goto label_455f00;
        case 0x455f04u: goto label_455f04;
        case 0x455f08u: goto label_455f08;
        case 0x455f0cu: goto label_455f0c;
        case 0x455f10u: goto label_455f10;
        case 0x455f14u: goto label_455f14;
        case 0x455f18u: goto label_455f18;
        case 0x455f1cu: goto label_455f1c;
        case 0x455f20u: goto label_455f20;
        case 0x455f24u: goto label_455f24;
        case 0x455f28u: goto label_455f28;
        case 0x455f2cu: goto label_455f2c;
        case 0x455f30u: goto label_455f30;
        case 0x455f34u: goto label_455f34;
        case 0x455f38u: goto label_455f38;
        case 0x455f3cu: goto label_455f3c;
        case 0x455f40u: goto label_455f40;
        case 0x455f44u: goto label_455f44;
        case 0x455f48u: goto label_455f48;
        case 0x455f4cu: goto label_455f4c;
        case 0x455f50u: goto label_455f50;
        case 0x455f54u: goto label_455f54;
        case 0x455f58u: goto label_455f58;
        case 0x455f5cu: goto label_455f5c;
        case 0x455f60u: goto label_455f60;
        case 0x455f64u: goto label_455f64;
        case 0x455f68u: goto label_455f68;
        case 0x455f6cu: goto label_455f6c;
        case 0x455f70u: goto label_455f70;
        case 0x455f74u: goto label_455f74;
        case 0x455f78u: goto label_455f78;
        case 0x455f7cu: goto label_455f7c;
        case 0x455f80u: goto label_455f80;
        case 0x455f84u: goto label_455f84;
        case 0x455f88u: goto label_455f88;
        case 0x455f8cu: goto label_455f8c;
        case 0x455f90u: goto label_455f90;
        case 0x455f94u: goto label_455f94;
        case 0x455f98u: goto label_455f98;
        case 0x455f9cu: goto label_455f9c;
        case 0x455fa0u: goto label_455fa0;
        case 0x455fa4u: goto label_455fa4;
        case 0x455fa8u: goto label_455fa8;
        case 0x455facu: goto label_455fac;
        case 0x455fb0u: goto label_455fb0;
        case 0x455fb4u: goto label_455fb4;
        case 0x455fb8u: goto label_455fb8;
        case 0x455fbcu: goto label_455fbc;
        case 0x455fc0u: goto label_455fc0;
        case 0x455fc4u: goto label_455fc4;
        case 0x455fc8u: goto label_455fc8;
        case 0x455fccu: goto label_455fcc;
        case 0x455fd0u: goto label_455fd0;
        case 0x455fd4u: goto label_455fd4;
        case 0x455fd8u: goto label_455fd8;
        case 0x455fdcu: goto label_455fdc;
        case 0x455fe0u: goto label_455fe0;
        case 0x455fe4u: goto label_455fe4;
        case 0x455fe8u: goto label_455fe8;
        case 0x455fecu: goto label_455fec;
        case 0x455ff0u: goto label_455ff0;
        case 0x455ff4u: goto label_455ff4;
        case 0x455ff8u: goto label_455ff8;
        case 0x455ffcu: goto label_455ffc;
        case 0x456000u: goto label_456000;
        case 0x456004u: goto label_456004;
        case 0x456008u: goto label_456008;
        case 0x45600cu: goto label_45600c;
        case 0x456010u: goto label_456010;
        case 0x456014u: goto label_456014;
        case 0x456018u: goto label_456018;
        case 0x45601cu: goto label_45601c;
        case 0x456020u: goto label_456020;
        case 0x456024u: goto label_456024;
        case 0x456028u: goto label_456028;
        case 0x45602cu: goto label_45602c;
        case 0x456030u: goto label_456030;
        case 0x456034u: goto label_456034;
        case 0x456038u: goto label_456038;
        case 0x45603cu: goto label_45603c;
        case 0x456040u: goto label_456040;
        case 0x456044u: goto label_456044;
        case 0x456048u: goto label_456048;
        case 0x45604cu: goto label_45604c;
        case 0x456050u: goto label_456050;
        case 0x456054u: goto label_456054;
        case 0x456058u: goto label_456058;
        case 0x45605cu: goto label_45605c;
        case 0x456060u: goto label_456060;
        case 0x456064u: goto label_456064;
        case 0x456068u: goto label_456068;
        case 0x45606cu: goto label_45606c;
        case 0x456070u: goto label_456070;
        case 0x456074u: goto label_456074;
        case 0x456078u: goto label_456078;
        case 0x45607cu: goto label_45607c;
        case 0x456080u: goto label_456080;
        case 0x456084u: goto label_456084;
        case 0x456088u: goto label_456088;
        case 0x45608cu: goto label_45608c;
        case 0x456090u: goto label_456090;
        case 0x456094u: goto label_456094;
        case 0x456098u: goto label_456098;
        case 0x45609cu: goto label_45609c;
        case 0x4560a0u: goto label_4560a0;
        case 0x4560a4u: goto label_4560a4;
        case 0x4560a8u: goto label_4560a8;
        case 0x4560acu: goto label_4560ac;
        case 0x4560b0u: goto label_4560b0;
        case 0x4560b4u: goto label_4560b4;
        case 0x4560b8u: goto label_4560b8;
        case 0x4560bcu: goto label_4560bc;
        case 0x4560c0u: goto label_4560c0;
        case 0x4560c4u: goto label_4560c4;
        case 0x4560c8u: goto label_4560c8;
        case 0x4560ccu: goto label_4560cc;
        case 0x4560d0u: goto label_4560d0;
        case 0x4560d4u: goto label_4560d4;
        case 0x4560d8u: goto label_4560d8;
        case 0x4560dcu: goto label_4560dc;
        case 0x4560e0u: goto label_4560e0;
        case 0x4560e4u: goto label_4560e4;
        case 0x4560e8u: goto label_4560e8;
        case 0x4560ecu: goto label_4560ec;
        case 0x4560f0u: goto label_4560f0;
        case 0x4560f4u: goto label_4560f4;
        case 0x4560f8u: goto label_4560f8;
        case 0x4560fcu: goto label_4560fc;
        case 0x456100u: goto label_456100;
        case 0x456104u: goto label_456104;
        case 0x456108u: goto label_456108;
        case 0x45610cu: goto label_45610c;
        case 0x456110u: goto label_456110;
        case 0x456114u: goto label_456114;
        case 0x456118u: goto label_456118;
        case 0x45611cu: goto label_45611c;
        case 0x456120u: goto label_456120;
        case 0x456124u: goto label_456124;
        case 0x456128u: goto label_456128;
        case 0x45612cu: goto label_45612c;
        case 0x456130u: goto label_456130;
        case 0x456134u: goto label_456134;
        case 0x456138u: goto label_456138;
        case 0x45613cu: goto label_45613c;
        case 0x456140u: goto label_456140;
        case 0x456144u: goto label_456144;
        case 0x456148u: goto label_456148;
        case 0x45614cu: goto label_45614c;
        case 0x456150u: goto label_456150;
        case 0x456154u: goto label_456154;
        case 0x456158u: goto label_456158;
        case 0x45615cu: goto label_45615c;
        case 0x456160u: goto label_456160;
        case 0x456164u: goto label_456164;
        case 0x456168u: goto label_456168;
        case 0x45616cu: goto label_45616c;
        case 0x456170u: goto label_456170;
        case 0x456174u: goto label_456174;
        case 0x456178u: goto label_456178;
        case 0x45617cu: goto label_45617c;
        case 0x456180u: goto label_456180;
        case 0x456184u: goto label_456184;
        case 0x456188u: goto label_456188;
        case 0x45618cu: goto label_45618c;
        case 0x456190u: goto label_456190;
        case 0x456194u: goto label_456194;
        case 0x456198u: goto label_456198;
        case 0x45619cu: goto label_45619c;
        case 0x4561a0u: goto label_4561a0;
        case 0x4561a4u: goto label_4561a4;
        case 0x4561a8u: goto label_4561a8;
        case 0x4561acu: goto label_4561ac;
        case 0x4561b0u: goto label_4561b0;
        case 0x4561b4u: goto label_4561b4;
        case 0x4561b8u: goto label_4561b8;
        case 0x4561bcu: goto label_4561bc;
        case 0x4561c0u: goto label_4561c0;
        case 0x4561c4u: goto label_4561c4;
        case 0x4561c8u: goto label_4561c8;
        case 0x4561ccu: goto label_4561cc;
        case 0x4561d0u: goto label_4561d0;
        case 0x4561d4u: goto label_4561d4;
        case 0x4561d8u: goto label_4561d8;
        case 0x4561dcu: goto label_4561dc;
        case 0x4561e0u: goto label_4561e0;
        case 0x4561e4u: goto label_4561e4;
        case 0x4561e8u: goto label_4561e8;
        case 0x4561ecu: goto label_4561ec;
        case 0x4561f0u: goto label_4561f0;
        case 0x4561f4u: goto label_4561f4;
        case 0x4561f8u: goto label_4561f8;
        case 0x4561fcu: goto label_4561fc;
        case 0x456200u: goto label_456200;
        case 0x456204u: goto label_456204;
        case 0x456208u: goto label_456208;
        case 0x45620cu: goto label_45620c;
        case 0x456210u: goto label_456210;
        case 0x456214u: goto label_456214;
        case 0x456218u: goto label_456218;
        case 0x45621cu: goto label_45621c;
        case 0x456220u: goto label_456220;
        case 0x456224u: goto label_456224;
        case 0x456228u: goto label_456228;
        case 0x45622cu: goto label_45622c;
        case 0x456230u: goto label_456230;
        case 0x456234u: goto label_456234;
        case 0x456238u: goto label_456238;
        case 0x45623cu: goto label_45623c;
        case 0x456240u: goto label_456240;
        case 0x456244u: goto label_456244;
        case 0x456248u: goto label_456248;
        case 0x45624cu: goto label_45624c;
        case 0x456250u: goto label_456250;
        case 0x456254u: goto label_456254;
        case 0x456258u: goto label_456258;
        case 0x45625cu: goto label_45625c;
        case 0x456260u: goto label_456260;
        case 0x456264u: goto label_456264;
        case 0x456268u: goto label_456268;
        case 0x45626cu: goto label_45626c;
        case 0x456270u: goto label_456270;
        case 0x456274u: goto label_456274;
        case 0x456278u: goto label_456278;
        case 0x45627cu: goto label_45627c;
        case 0x456280u: goto label_456280;
        case 0x456284u: goto label_456284;
        case 0x456288u: goto label_456288;
        case 0x45628cu: goto label_45628c;
        case 0x456290u: goto label_456290;
        case 0x456294u: goto label_456294;
        case 0x456298u: goto label_456298;
        case 0x45629cu: goto label_45629c;
        case 0x4562a0u: goto label_4562a0;
        case 0x4562a4u: goto label_4562a4;
        case 0x4562a8u: goto label_4562a8;
        case 0x4562acu: goto label_4562ac;
        case 0x4562b0u: goto label_4562b0;
        case 0x4562b4u: goto label_4562b4;
        case 0x4562b8u: goto label_4562b8;
        case 0x4562bcu: goto label_4562bc;
        case 0x4562c0u: goto label_4562c0;
        case 0x4562c4u: goto label_4562c4;
        case 0x4562c8u: goto label_4562c8;
        case 0x4562ccu: goto label_4562cc;
        case 0x4562d0u: goto label_4562d0;
        case 0x4562d4u: goto label_4562d4;
        case 0x4562d8u: goto label_4562d8;
        case 0x4562dcu: goto label_4562dc;
        case 0x4562e0u: goto label_4562e0;
        case 0x4562e4u: goto label_4562e4;
        case 0x4562e8u: goto label_4562e8;
        case 0x4562ecu: goto label_4562ec;
        case 0x4562f0u: goto label_4562f0;
        case 0x4562f4u: goto label_4562f4;
        case 0x4562f8u: goto label_4562f8;
        case 0x4562fcu: goto label_4562fc;
        case 0x456300u: goto label_456300;
        case 0x456304u: goto label_456304;
        case 0x456308u: goto label_456308;
        case 0x45630cu: goto label_45630c;
        case 0x456310u: goto label_456310;
        case 0x456314u: goto label_456314;
        case 0x456318u: goto label_456318;
        case 0x45631cu: goto label_45631c;
        case 0x456320u: goto label_456320;
        case 0x456324u: goto label_456324;
        case 0x456328u: goto label_456328;
        case 0x45632cu: goto label_45632c;
        case 0x456330u: goto label_456330;
        case 0x456334u: goto label_456334;
        case 0x456338u: goto label_456338;
        case 0x45633cu: goto label_45633c;
        case 0x456340u: goto label_456340;
        case 0x456344u: goto label_456344;
        case 0x456348u: goto label_456348;
        case 0x45634cu: goto label_45634c;
        case 0x456350u: goto label_456350;
        case 0x456354u: goto label_456354;
        case 0x456358u: goto label_456358;
        case 0x45635cu: goto label_45635c;
        case 0x456360u: goto label_456360;
        case 0x456364u: goto label_456364;
        case 0x456368u: goto label_456368;
        case 0x45636cu: goto label_45636c;
        case 0x456370u: goto label_456370;
        case 0x456374u: goto label_456374;
        case 0x456378u: goto label_456378;
        case 0x45637cu: goto label_45637c;
        case 0x456380u: goto label_456380;
        case 0x456384u: goto label_456384;
        case 0x456388u: goto label_456388;
        case 0x45638cu: goto label_45638c;
        case 0x456390u: goto label_456390;
        case 0x456394u: goto label_456394;
        case 0x456398u: goto label_456398;
        case 0x45639cu: goto label_45639c;
        case 0x4563a0u: goto label_4563a0;
        case 0x4563a4u: goto label_4563a4;
        case 0x4563a8u: goto label_4563a8;
        case 0x4563acu: goto label_4563ac;
        case 0x4563b0u: goto label_4563b0;
        case 0x4563b4u: goto label_4563b4;
        case 0x4563b8u: goto label_4563b8;
        case 0x4563bcu: goto label_4563bc;
        case 0x4563c0u: goto label_4563c0;
        case 0x4563c4u: goto label_4563c4;
        case 0x4563c8u: goto label_4563c8;
        case 0x4563ccu: goto label_4563cc;
        case 0x4563d0u: goto label_4563d0;
        case 0x4563d4u: goto label_4563d4;
        case 0x4563d8u: goto label_4563d8;
        case 0x4563dcu: goto label_4563dc;
        case 0x4563e0u: goto label_4563e0;
        case 0x4563e4u: goto label_4563e4;
        case 0x4563e8u: goto label_4563e8;
        case 0x4563ecu: goto label_4563ec;
        case 0x4563f0u: goto label_4563f0;
        case 0x4563f4u: goto label_4563f4;
        case 0x4563f8u: goto label_4563f8;
        case 0x4563fcu: goto label_4563fc;
        case 0x456400u: goto label_456400;
        case 0x456404u: goto label_456404;
        case 0x456408u: goto label_456408;
        case 0x45640cu: goto label_45640c;
        case 0x456410u: goto label_456410;
        case 0x456414u: goto label_456414;
        case 0x456418u: goto label_456418;
        case 0x45641cu: goto label_45641c;
        case 0x456420u: goto label_456420;
        case 0x456424u: goto label_456424;
        case 0x456428u: goto label_456428;
        case 0x45642cu: goto label_45642c;
        case 0x456430u: goto label_456430;
        case 0x456434u: goto label_456434;
        case 0x456438u: goto label_456438;
        case 0x45643cu: goto label_45643c;
        case 0x456440u: goto label_456440;
        case 0x456444u: goto label_456444;
        case 0x456448u: goto label_456448;
        case 0x45644cu: goto label_45644c;
        case 0x456450u: goto label_456450;
        case 0x456454u: goto label_456454;
        case 0x456458u: goto label_456458;
        case 0x45645cu: goto label_45645c;
        case 0x456460u: goto label_456460;
        case 0x456464u: goto label_456464;
        case 0x456468u: goto label_456468;
        case 0x45646cu: goto label_45646c;
        case 0x456470u: goto label_456470;
        case 0x456474u: goto label_456474;
        case 0x456478u: goto label_456478;
        case 0x45647cu: goto label_45647c;
        case 0x456480u: goto label_456480;
        case 0x456484u: goto label_456484;
        case 0x456488u: goto label_456488;
        case 0x45648cu: goto label_45648c;
        case 0x456490u: goto label_456490;
        case 0x456494u: goto label_456494;
        case 0x456498u: goto label_456498;
        case 0x45649cu: goto label_45649c;
        case 0x4564a0u: goto label_4564a0;
        case 0x4564a4u: goto label_4564a4;
        case 0x4564a8u: goto label_4564a8;
        case 0x4564acu: goto label_4564ac;
        case 0x4564b0u: goto label_4564b0;
        case 0x4564b4u: goto label_4564b4;
        case 0x4564b8u: goto label_4564b8;
        case 0x4564bcu: goto label_4564bc;
        case 0x4564c0u: goto label_4564c0;
        case 0x4564c4u: goto label_4564c4;
        case 0x4564c8u: goto label_4564c8;
        case 0x4564ccu: goto label_4564cc;
        case 0x4564d0u: goto label_4564d0;
        case 0x4564d4u: goto label_4564d4;
        case 0x4564d8u: goto label_4564d8;
        case 0x4564dcu: goto label_4564dc;
        case 0x4564e0u: goto label_4564e0;
        case 0x4564e4u: goto label_4564e4;
        case 0x4564e8u: goto label_4564e8;
        case 0x4564ecu: goto label_4564ec;
        case 0x4564f0u: goto label_4564f0;
        case 0x4564f4u: goto label_4564f4;
        case 0x4564f8u: goto label_4564f8;
        case 0x4564fcu: goto label_4564fc;
        case 0x456500u: goto label_456500;
        case 0x456504u: goto label_456504;
        case 0x456508u: goto label_456508;
        case 0x45650cu: goto label_45650c;
        case 0x456510u: goto label_456510;
        case 0x456514u: goto label_456514;
        case 0x456518u: goto label_456518;
        case 0x45651cu: goto label_45651c;
        case 0x456520u: goto label_456520;
        case 0x456524u: goto label_456524;
        case 0x456528u: goto label_456528;
        case 0x45652cu: goto label_45652c;
        case 0x456530u: goto label_456530;
        case 0x456534u: goto label_456534;
        case 0x456538u: goto label_456538;
        case 0x45653cu: goto label_45653c;
        case 0x456540u: goto label_456540;
        case 0x456544u: goto label_456544;
        case 0x456548u: goto label_456548;
        case 0x45654cu: goto label_45654c;
        case 0x456550u: goto label_456550;
        case 0x456554u: goto label_456554;
        case 0x456558u: goto label_456558;
        case 0x45655cu: goto label_45655c;
        case 0x456560u: goto label_456560;
        case 0x456564u: goto label_456564;
        case 0x456568u: goto label_456568;
        case 0x45656cu: goto label_45656c;
        case 0x456570u: goto label_456570;
        case 0x456574u: goto label_456574;
        case 0x456578u: goto label_456578;
        case 0x45657cu: goto label_45657c;
        case 0x456580u: goto label_456580;
        case 0x456584u: goto label_456584;
        case 0x456588u: goto label_456588;
        case 0x45658cu: goto label_45658c;
        case 0x456590u: goto label_456590;
        case 0x456594u: goto label_456594;
        case 0x456598u: goto label_456598;
        case 0x45659cu: goto label_45659c;
        case 0x4565a0u: goto label_4565a0;
        case 0x4565a4u: goto label_4565a4;
        case 0x4565a8u: goto label_4565a8;
        case 0x4565acu: goto label_4565ac;
        case 0x4565b0u: goto label_4565b0;
        case 0x4565b4u: goto label_4565b4;
        case 0x4565b8u: goto label_4565b8;
        case 0x4565bcu: goto label_4565bc;
        case 0x4565c0u: goto label_4565c0;
        case 0x4565c4u: goto label_4565c4;
        case 0x4565c8u: goto label_4565c8;
        case 0x4565ccu: goto label_4565cc;
        case 0x4565d0u: goto label_4565d0;
        case 0x4565d4u: goto label_4565d4;
        case 0x4565d8u: goto label_4565d8;
        case 0x4565dcu: goto label_4565dc;
        case 0x4565e0u: goto label_4565e0;
        case 0x4565e4u: goto label_4565e4;
        case 0x4565e8u: goto label_4565e8;
        case 0x4565ecu: goto label_4565ec;
        case 0x4565f0u: goto label_4565f0;
        case 0x4565f4u: goto label_4565f4;
        case 0x4565f8u: goto label_4565f8;
        case 0x4565fcu: goto label_4565fc;
        case 0x456600u: goto label_456600;
        case 0x456604u: goto label_456604;
        case 0x456608u: goto label_456608;
        case 0x45660cu: goto label_45660c;
        case 0x456610u: goto label_456610;
        case 0x456614u: goto label_456614;
        case 0x456618u: goto label_456618;
        case 0x45661cu: goto label_45661c;
        case 0x456620u: goto label_456620;
        case 0x456624u: goto label_456624;
        case 0x456628u: goto label_456628;
        case 0x45662cu: goto label_45662c;
        case 0x456630u: goto label_456630;
        case 0x456634u: goto label_456634;
        case 0x456638u: goto label_456638;
        case 0x45663cu: goto label_45663c;
        case 0x456640u: goto label_456640;
        case 0x456644u: goto label_456644;
        case 0x456648u: goto label_456648;
        case 0x45664cu: goto label_45664c;
        case 0x456650u: goto label_456650;
        case 0x456654u: goto label_456654;
        case 0x456658u: goto label_456658;
        case 0x45665cu: goto label_45665c;
        case 0x456660u: goto label_456660;
        case 0x456664u: goto label_456664;
        case 0x456668u: goto label_456668;
        case 0x45666cu: goto label_45666c;
        case 0x456670u: goto label_456670;
        case 0x456674u: goto label_456674;
        case 0x456678u: goto label_456678;
        case 0x45667cu: goto label_45667c;
        case 0x456680u: goto label_456680;
        case 0x456684u: goto label_456684;
        case 0x456688u: goto label_456688;
        case 0x45668cu: goto label_45668c;
        case 0x456690u: goto label_456690;
        case 0x456694u: goto label_456694;
        case 0x456698u: goto label_456698;
        case 0x45669cu: goto label_45669c;
        case 0x4566a0u: goto label_4566a0;
        case 0x4566a4u: goto label_4566a4;
        case 0x4566a8u: goto label_4566a8;
        case 0x4566acu: goto label_4566ac;
        case 0x4566b0u: goto label_4566b0;
        case 0x4566b4u: goto label_4566b4;
        case 0x4566b8u: goto label_4566b8;
        case 0x4566bcu: goto label_4566bc;
        case 0x4566c0u: goto label_4566c0;
        case 0x4566c4u: goto label_4566c4;
        case 0x4566c8u: goto label_4566c8;
        case 0x4566ccu: goto label_4566cc;
        case 0x4566d0u: goto label_4566d0;
        case 0x4566d4u: goto label_4566d4;
        case 0x4566d8u: goto label_4566d8;
        case 0x4566dcu: goto label_4566dc;
        case 0x4566e0u: goto label_4566e0;
        case 0x4566e4u: goto label_4566e4;
        case 0x4566e8u: goto label_4566e8;
        case 0x4566ecu: goto label_4566ec;
        case 0x4566f0u: goto label_4566f0;
        case 0x4566f4u: goto label_4566f4;
        case 0x4566f8u: goto label_4566f8;
        case 0x4566fcu: goto label_4566fc;
        case 0x456700u: goto label_456700;
        case 0x456704u: goto label_456704;
        case 0x456708u: goto label_456708;
        case 0x45670cu: goto label_45670c;
        case 0x456710u: goto label_456710;
        case 0x456714u: goto label_456714;
        case 0x456718u: goto label_456718;
        case 0x45671cu: goto label_45671c;
        case 0x456720u: goto label_456720;
        case 0x456724u: goto label_456724;
        case 0x456728u: goto label_456728;
        case 0x45672cu: goto label_45672c;
        case 0x456730u: goto label_456730;
        case 0x456734u: goto label_456734;
        case 0x456738u: goto label_456738;
        case 0x45673cu: goto label_45673c;
        case 0x456740u: goto label_456740;
        case 0x456744u: goto label_456744;
        case 0x456748u: goto label_456748;
        case 0x45674cu: goto label_45674c;
        case 0x456750u: goto label_456750;
        case 0x456754u: goto label_456754;
        case 0x456758u: goto label_456758;
        case 0x45675cu: goto label_45675c;
        case 0x456760u: goto label_456760;
        case 0x456764u: goto label_456764;
        case 0x456768u: goto label_456768;
        case 0x45676cu: goto label_45676c;
        case 0x456770u: goto label_456770;
        case 0x456774u: goto label_456774;
        case 0x456778u: goto label_456778;
        case 0x45677cu: goto label_45677c;
        case 0x456780u: goto label_456780;
        case 0x456784u: goto label_456784;
        case 0x456788u: goto label_456788;
        case 0x45678cu: goto label_45678c;
        case 0x456790u: goto label_456790;
        case 0x456794u: goto label_456794;
        case 0x456798u: goto label_456798;
        case 0x45679cu: goto label_45679c;
        case 0x4567a0u: goto label_4567a0;
        case 0x4567a4u: goto label_4567a4;
        case 0x4567a8u: goto label_4567a8;
        case 0x4567acu: goto label_4567ac;
        case 0x4567b0u: goto label_4567b0;
        case 0x4567b4u: goto label_4567b4;
        case 0x4567b8u: goto label_4567b8;
        case 0x4567bcu: goto label_4567bc;
        case 0x4567c0u: goto label_4567c0;
        case 0x4567c4u: goto label_4567c4;
        case 0x4567c8u: goto label_4567c8;
        case 0x4567ccu: goto label_4567cc;
        case 0x4567d0u: goto label_4567d0;
        case 0x4567d4u: goto label_4567d4;
        case 0x4567d8u: goto label_4567d8;
        case 0x4567dcu: goto label_4567dc;
        case 0x4567e0u: goto label_4567e0;
        case 0x4567e4u: goto label_4567e4;
        case 0x4567e8u: goto label_4567e8;
        case 0x4567ecu: goto label_4567ec;
        case 0x4567f0u: goto label_4567f0;
        case 0x4567f4u: goto label_4567f4;
        case 0x4567f8u: goto label_4567f8;
        case 0x4567fcu: goto label_4567fc;
        case 0x456800u: goto label_456800;
        case 0x456804u: goto label_456804;
        case 0x456808u: goto label_456808;
        case 0x45680cu: goto label_45680c;
        case 0x456810u: goto label_456810;
        case 0x456814u: goto label_456814;
        case 0x456818u: goto label_456818;
        case 0x45681cu: goto label_45681c;
        case 0x456820u: goto label_456820;
        case 0x456824u: goto label_456824;
        case 0x456828u: goto label_456828;
        case 0x45682cu: goto label_45682c;
        case 0x456830u: goto label_456830;
        case 0x456834u: goto label_456834;
        case 0x456838u: goto label_456838;
        case 0x45683cu: goto label_45683c;
        case 0x456840u: goto label_456840;
        case 0x456844u: goto label_456844;
        case 0x456848u: goto label_456848;
        case 0x45684cu: goto label_45684c;
        case 0x456850u: goto label_456850;
        case 0x456854u: goto label_456854;
        case 0x456858u: goto label_456858;
        case 0x45685cu: goto label_45685c;
        case 0x456860u: goto label_456860;
        case 0x456864u: goto label_456864;
        case 0x456868u: goto label_456868;
        case 0x45686cu: goto label_45686c;
        case 0x456870u: goto label_456870;
        case 0x456874u: goto label_456874;
        case 0x456878u: goto label_456878;
        case 0x45687cu: goto label_45687c;
        case 0x456880u: goto label_456880;
        case 0x456884u: goto label_456884;
        case 0x456888u: goto label_456888;
        case 0x45688cu: goto label_45688c;
        case 0x456890u: goto label_456890;
        case 0x456894u: goto label_456894;
        case 0x456898u: goto label_456898;
        case 0x45689cu: goto label_45689c;
        case 0x4568a0u: goto label_4568a0;
        case 0x4568a4u: goto label_4568a4;
        case 0x4568a8u: goto label_4568a8;
        case 0x4568acu: goto label_4568ac;
        case 0x4568b0u: goto label_4568b0;
        case 0x4568b4u: goto label_4568b4;
        case 0x4568b8u: goto label_4568b8;
        case 0x4568bcu: goto label_4568bc;
        case 0x4568c0u: goto label_4568c0;
        case 0x4568c4u: goto label_4568c4;
        case 0x4568c8u: goto label_4568c8;
        case 0x4568ccu: goto label_4568cc;
        case 0x4568d0u: goto label_4568d0;
        case 0x4568d4u: goto label_4568d4;
        case 0x4568d8u: goto label_4568d8;
        case 0x4568dcu: goto label_4568dc;
        case 0x4568e0u: goto label_4568e0;
        case 0x4568e4u: goto label_4568e4;
        case 0x4568e8u: goto label_4568e8;
        case 0x4568ecu: goto label_4568ec;
        case 0x4568f0u: goto label_4568f0;
        case 0x4568f4u: goto label_4568f4;
        case 0x4568f8u: goto label_4568f8;
        case 0x4568fcu: goto label_4568fc;
        case 0x456900u: goto label_456900;
        case 0x456904u: goto label_456904;
        case 0x456908u: goto label_456908;
        case 0x45690cu: goto label_45690c;
        case 0x456910u: goto label_456910;
        case 0x456914u: goto label_456914;
        case 0x456918u: goto label_456918;
        case 0x45691cu: goto label_45691c;
        case 0x456920u: goto label_456920;
        case 0x456924u: goto label_456924;
        case 0x456928u: goto label_456928;
        case 0x45692cu: goto label_45692c;
        case 0x456930u: goto label_456930;
        case 0x456934u: goto label_456934;
        case 0x456938u: goto label_456938;
        case 0x45693cu: goto label_45693c;
        case 0x456940u: goto label_456940;
        case 0x456944u: goto label_456944;
        case 0x456948u: goto label_456948;
        case 0x45694cu: goto label_45694c;
        case 0x456950u: goto label_456950;
        case 0x456954u: goto label_456954;
        case 0x456958u: goto label_456958;
        case 0x45695cu: goto label_45695c;
        case 0x456960u: goto label_456960;
        case 0x456964u: goto label_456964;
        case 0x456968u: goto label_456968;
        case 0x45696cu: goto label_45696c;
        case 0x456970u: goto label_456970;
        case 0x456974u: goto label_456974;
        case 0x456978u: goto label_456978;
        case 0x45697cu: goto label_45697c;
        case 0x456980u: goto label_456980;
        case 0x456984u: goto label_456984;
        case 0x456988u: goto label_456988;
        case 0x45698cu: goto label_45698c;
        case 0x456990u: goto label_456990;
        case 0x456994u: goto label_456994;
        case 0x456998u: goto label_456998;
        case 0x45699cu: goto label_45699c;
        case 0x4569a0u: goto label_4569a0;
        case 0x4569a4u: goto label_4569a4;
        case 0x4569a8u: goto label_4569a8;
        case 0x4569acu: goto label_4569ac;
        case 0x4569b0u: goto label_4569b0;
        case 0x4569b4u: goto label_4569b4;
        case 0x4569b8u: goto label_4569b8;
        case 0x4569bcu: goto label_4569bc;
        case 0x4569c0u: goto label_4569c0;
        case 0x4569c4u: goto label_4569c4;
        case 0x4569c8u: goto label_4569c8;
        case 0x4569ccu: goto label_4569cc;
        case 0x4569d0u: goto label_4569d0;
        case 0x4569d4u: goto label_4569d4;
        case 0x4569d8u: goto label_4569d8;
        case 0x4569dcu: goto label_4569dc;
        case 0x4569e0u: goto label_4569e0;
        case 0x4569e4u: goto label_4569e4;
        case 0x4569e8u: goto label_4569e8;
        case 0x4569ecu: goto label_4569ec;
        case 0x4569f0u: goto label_4569f0;
        case 0x4569f4u: goto label_4569f4;
        case 0x4569f8u: goto label_4569f8;
        case 0x4569fcu: goto label_4569fc;
        case 0x456a00u: goto label_456a00;
        case 0x456a04u: goto label_456a04;
        case 0x456a08u: goto label_456a08;
        case 0x456a0cu: goto label_456a0c;
        case 0x456a10u: goto label_456a10;
        case 0x456a14u: goto label_456a14;
        case 0x456a18u: goto label_456a18;
        case 0x456a1cu: goto label_456a1c;
        case 0x456a20u: goto label_456a20;
        case 0x456a24u: goto label_456a24;
        case 0x456a28u: goto label_456a28;
        case 0x456a2cu: goto label_456a2c;
        case 0x456a30u: goto label_456a30;
        case 0x456a34u: goto label_456a34;
        case 0x456a38u: goto label_456a38;
        case 0x456a3cu: goto label_456a3c;
        case 0x456a40u: goto label_456a40;
        case 0x456a44u: goto label_456a44;
        case 0x456a48u: goto label_456a48;
        case 0x456a4cu: goto label_456a4c;
        case 0x456a50u: goto label_456a50;
        case 0x456a54u: goto label_456a54;
        case 0x456a58u: goto label_456a58;
        case 0x456a5cu: goto label_456a5c;
        case 0x456a60u: goto label_456a60;
        case 0x456a64u: goto label_456a64;
        case 0x456a68u: goto label_456a68;
        case 0x456a6cu: goto label_456a6c;
        case 0x456a70u: goto label_456a70;
        case 0x456a74u: goto label_456a74;
        case 0x456a78u: goto label_456a78;
        case 0x456a7cu: goto label_456a7c;
        case 0x456a80u: goto label_456a80;
        case 0x456a84u: goto label_456a84;
        case 0x456a88u: goto label_456a88;
        case 0x456a8cu: goto label_456a8c;
        case 0x456a90u: goto label_456a90;
        case 0x456a94u: goto label_456a94;
        case 0x456a98u: goto label_456a98;
        case 0x456a9cu: goto label_456a9c;
        case 0x456aa0u: goto label_456aa0;
        case 0x456aa4u: goto label_456aa4;
        case 0x456aa8u: goto label_456aa8;
        case 0x456aacu: goto label_456aac;
        case 0x456ab0u: goto label_456ab0;
        case 0x456ab4u: goto label_456ab4;
        case 0x456ab8u: goto label_456ab8;
        case 0x456abcu: goto label_456abc;
        case 0x456ac0u: goto label_456ac0;
        case 0x456ac4u: goto label_456ac4;
        case 0x456ac8u: goto label_456ac8;
        case 0x456accu: goto label_456acc;
        case 0x456ad0u: goto label_456ad0;
        case 0x456ad4u: goto label_456ad4;
        case 0x456ad8u: goto label_456ad8;
        case 0x456adcu: goto label_456adc;
        case 0x456ae0u: goto label_456ae0;
        case 0x456ae4u: goto label_456ae4;
        case 0x456ae8u: goto label_456ae8;
        case 0x456aecu: goto label_456aec;
        case 0x456af0u: goto label_456af0;
        case 0x456af4u: goto label_456af4;
        case 0x456af8u: goto label_456af8;
        case 0x456afcu: goto label_456afc;
        case 0x456b00u: goto label_456b00;
        case 0x456b04u: goto label_456b04;
        case 0x456b08u: goto label_456b08;
        case 0x456b0cu: goto label_456b0c;
        case 0x456b10u: goto label_456b10;
        case 0x456b14u: goto label_456b14;
        case 0x456b18u: goto label_456b18;
        case 0x456b1cu: goto label_456b1c;
        case 0x456b20u: goto label_456b20;
        case 0x456b24u: goto label_456b24;
        case 0x456b28u: goto label_456b28;
        case 0x456b2cu: goto label_456b2c;
        case 0x456b30u: goto label_456b30;
        case 0x456b34u: goto label_456b34;
        case 0x456b38u: goto label_456b38;
        case 0x456b3cu: goto label_456b3c;
        case 0x456b40u: goto label_456b40;
        case 0x456b44u: goto label_456b44;
        case 0x456b48u: goto label_456b48;
        case 0x456b4cu: goto label_456b4c;
        case 0x456b50u: goto label_456b50;
        case 0x456b54u: goto label_456b54;
        case 0x456b58u: goto label_456b58;
        case 0x456b5cu: goto label_456b5c;
        case 0x456b60u: goto label_456b60;
        case 0x456b64u: goto label_456b64;
        case 0x456b68u: goto label_456b68;
        case 0x456b6cu: goto label_456b6c;
        case 0x456b70u: goto label_456b70;
        case 0x456b74u: goto label_456b74;
        case 0x456b78u: goto label_456b78;
        case 0x456b7cu: goto label_456b7c;
        case 0x456b80u: goto label_456b80;
        case 0x456b84u: goto label_456b84;
        case 0x456b88u: goto label_456b88;
        case 0x456b8cu: goto label_456b8c;
        case 0x456b90u: goto label_456b90;
        case 0x456b94u: goto label_456b94;
        case 0x456b98u: goto label_456b98;
        case 0x456b9cu: goto label_456b9c;
        case 0x456ba0u: goto label_456ba0;
        case 0x456ba4u: goto label_456ba4;
        case 0x456ba8u: goto label_456ba8;
        case 0x456bacu: goto label_456bac;
        case 0x456bb0u: goto label_456bb0;
        case 0x456bb4u: goto label_456bb4;
        case 0x456bb8u: goto label_456bb8;
        case 0x456bbcu: goto label_456bbc;
        case 0x456bc0u: goto label_456bc0;
        case 0x456bc4u: goto label_456bc4;
        case 0x456bc8u: goto label_456bc8;
        case 0x456bccu: goto label_456bcc;
        case 0x456bd0u: goto label_456bd0;
        case 0x456bd4u: goto label_456bd4;
        case 0x456bd8u: goto label_456bd8;
        case 0x456bdcu: goto label_456bdc;
        case 0x456be0u: goto label_456be0;
        case 0x456be4u: goto label_456be4;
        case 0x456be8u: goto label_456be8;
        case 0x456becu: goto label_456bec;
        case 0x456bf0u: goto label_456bf0;
        case 0x456bf4u: goto label_456bf4;
        case 0x456bf8u: goto label_456bf8;
        case 0x456bfcu: goto label_456bfc;
        case 0x456c00u: goto label_456c00;
        case 0x456c04u: goto label_456c04;
        case 0x456c08u: goto label_456c08;
        case 0x456c0cu: goto label_456c0c;
        case 0x456c10u: goto label_456c10;
        case 0x456c14u: goto label_456c14;
        case 0x456c18u: goto label_456c18;
        case 0x456c1cu: goto label_456c1c;
        case 0x456c20u: goto label_456c20;
        case 0x456c24u: goto label_456c24;
        case 0x456c28u: goto label_456c28;
        case 0x456c2cu: goto label_456c2c;
        case 0x456c30u: goto label_456c30;
        case 0x456c34u: goto label_456c34;
        case 0x456c38u: goto label_456c38;
        case 0x456c3cu: goto label_456c3c;
        case 0x456c40u: goto label_456c40;
        case 0x456c44u: goto label_456c44;
        case 0x456c48u: goto label_456c48;
        case 0x456c4cu: goto label_456c4c;
        case 0x456c50u: goto label_456c50;
        case 0x456c54u: goto label_456c54;
        case 0x456c58u: goto label_456c58;
        case 0x456c5cu: goto label_456c5c;
        case 0x456c60u: goto label_456c60;
        case 0x456c64u: goto label_456c64;
        case 0x456c68u: goto label_456c68;
        case 0x456c6cu: goto label_456c6c;
        case 0x456c70u: goto label_456c70;
        case 0x456c74u: goto label_456c74;
        case 0x456c78u: goto label_456c78;
        case 0x456c7cu: goto label_456c7c;
        case 0x456c80u: goto label_456c80;
        case 0x456c84u: goto label_456c84;
        case 0x456c88u: goto label_456c88;
        case 0x456c8cu: goto label_456c8c;
        case 0x456c90u: goto label_456c90;
        case 0x456c94u: goto label_456c94;
        case 0x456c98u: goto label_456c98;
        case 0x456c9cu: goto label_456c9c;
        case 0x456ca0u: goto label_456ca0;
        case 0x456ca4u: goto label_456ca4;
        case 0x456ca8u: goto label_456ca8;
        case 0x456cacu: goto label_456cac;
        case 0x456cb0u: goto label_456cb0;
        case 0x456cb4u: goto label_456cb4;
        case 0x456cb8u: goto label_456cb8;
        case 0x456cbcu: goto label_456cbc;
        case 0x456cc0u: goto label_456cc0;
        case 0x456cc4u: goto label_456cc4;
        case 0x456cc8u: goto label_456cc8;
        case 0x456cccu: goto label_456ccc;
        case 0x456cd0u: goto label_456cd0;
        case 0x456cd4u: goto label_456cd4;
        case 0x456cd8u: goto label_456cd8;
        case 0x456cdcu: goto label_456cdc;
        case 0x456ce0u: goto label_456ce0;
        case 0x456ce4u: goto label_456ce4;
        case 0x456ce8u: goto label_456ce8;
        case 0x456cecu: goto label_456cec;
        case 0x456cf0u: goto label_456cf0;
        case 0x456cf4u: goto label_456cf4;
        case 0x456cf8u: goto label_456cf8;
        case 0x456cfcu: goto label_456cfc;
        case 0x456d00u: goto label_456d00;
        case 0x456d04u: goto label_456d04;
        case 0x456d08u: goto label_456d08;
        case 0x456d0cu: goto label_456d0c;
        case 0x456d10u: goto label_456d10;
        case 0x456d14u: goto label_456d14;
        case 0x456d18u: goto label_456d18;
        case 0x456d1cu: goto label_456d1c;
        case 0x456d20u: goto label_456d20;
        case 0x456d24u: goto label_456d24;
        case 0x456d28u: goto label_456d28;
        case 0x456d2cu: goto label_456d2c;
        case 0x456d30u: goto label_456d30;
        case 0x456d34u: goto label_456d34;
        case 0x456d38u: goto label_456d38;
        case 0x456d3cu: goto label_456d3c;
        case 0x456d40u: goto label_456d40;
        case 0x456d44u: goto label_456d44;
        case 0x456d48u: goto label_456d48;
        case 0x456d4cu: goto label_456d4c;
        case 0x456d50u: goto label_456d50;
        case 0x456d54u: goto label_456d54;
        case 0x456d58u: goto label_456d58;
        case 0x456d5cu: goto label_456d5c;
        case 0x456d60u: goto label_456d60;
        case 0x456d64u: goto label_456d64;
        case 0x456d68u: goto label_456d68;
        case 0x456d6cu: goto label_456d6c;
        case 0x456d70u: goto label_456d70;
        case 0x456d74u: goto label_456d74;
        case 0x456d78u: goto label_456d78;
        case 0x456d7cu: goto label_456d7c;
        case 0x456d80u: goto label_456d80;
        case 0x456d84u: goto label_456d84;
        case 0x456d88u: goto label_456d88;
        case 0x456d8cu: goto label_456d8c;
        case 0x456d90u: goto label_456d90;
        case 0x456d94u: goto label_456d94;
        case 0x456d98u: goto label_456d98;
        case 0x456d9cu: goto label_456d9c;
        case 0x456da0u: goto label_456da0;
        case 0x456da4u: goto label_456da4;
        case 0x456da8u: goto label_456da8;
        case 0x456dacu: goto label_456dac;
        case 0x456db0u: goto label_456db0;
        case 0x456db4u: goto label_456db4;
        case 0x456db8u: goto label_456db8;
        case 0x456dbcu: goto label_456dbc;
        case 0x456dc0u: goto label_456dc0;
        case 0x456dc4u: goto label_456dc4;
        case 0x456dc8u: goto label_456dc8;
        case 0x456dccu: goto label_456dcc;
        case 0x456dd0u: goto label_456dd0;
        case 0x456dd4u: goto label_456dd4;
        case 0x456dd8u: goto label_456dd8;
        case 0x456ddcu: goto label_456ddc;
        case 0x456de0u: goto label_456de0;
        case 0x456de4u: goto label_456de4;
        case 0x456de8u: goto label_456de8;
        case 0x456decu: goto label_456dec;
        case 0x456df0u: goto label_456df0;
        case 0x456df4u: goto label_456df4;
        case 0x456df8u: goto label_456df8;
        case 0x456dfcu: goto label_456dfc;
        case 0x456e00u: goto label_456e00;
        case 0x456e04u: goto label_456e04;
        case 0x456e08u: goto label_456e08;
        case 0x456e0cu: goto label_456e0c;
        case 0x456e10u: goto label_456e10;
        case 0x456e14u: goto label_456e14;
        case 0x456e18u: goto label_456e18;
        case 0x456e1cu: goto label_456e1c;
        case 0x456e20u: goto label_456e20;
        case 0x456e24u: goto label_456e24;
        case 0x456e28u: goto label_456e28;
        case 0x456e2cu: goto label_456e2c;
        case 0x456e30u: goto label_456e30;
        case 0x456e34u: goto label_456e34;
        case 0x456e38u: goto label_456e38;
        case 0x456e3cu: goto label_456e3c;
        case 0x456e40u: goto label_456e40;
        case 0x456e44u: goto label_456e44;
        case 0x456e48u: goto label_456e48;
        case 0x456e4cu: goto label_456e4c;
        case 0x456e50u: goto label_456e50;
        case 0x456e54u: goto label_456e54;
        case 0x456e58u: goto label_456e58;
        case 0x456e5cu: goto label_456e5c;
        case 0x456e60u: goto label_456e60;
        case 0x456e64u: goto label_456e64;
        case 0x456e68u: goto label_456e68;
        case 0x456e6cu: goto label_456e6c;
        case 0x456e70u: goto label_456e70;
        case 0x456e74u: goto label_456e74;
        case 0x456e78u: goto label_456e78;
        case 0x456e7cu: goto label_456e7c;
        case 0x456e80u: goto label_456e80;
        case 0x456e84u: goto label_456e84;
        case 0x456e88u: goto label_456e88;
        case 0x456e8cu: goto label_456e8c;
        case 0x456e90u: goto label_456e90;
        case 0x456e94u: goto label_456e94;
        case 0x456e98u: goto label_456e98;
        case 0x456e9cu: goto label_456e9c;
        case 0x456ea0u: goto label_456ea0;
        case 0x456ea4u: goto label_456ea4;
        case 0x456ea8u: goto label_456ea8;
        case 0x456eacu: goto label_456eac;
        case 0x456eb0u: goto label_456eb0;
        case 0x456eb4u: goto label_456eb4;
        case 0x456eb8u: goto label_456eb8;
        case 0x456ebcu: goto label_456ebc;
        case 0x456ec0u: goto label_456ec0;
        case 0x456ec4u: goto label_456ec4;
        case 0x456ec8u: goto label_456ec8;
        case 0x456eccu: goto label_456ecc;
        case 0x456ed0u: goto label_456ed0;
        case 0x456ed4u: goto label_456ed4;
        case 0x456ed8u: goto label_456ed8;
        case 0x456edcu: goto label_456edc;
        case 0x456ee0u: goto label_456ee0;
        case 0x456ee4u: goto label_456ee4;
        case 0x456ee8u: goto label_456ee8;
        case 0x456eecu: goto label_456eec;
        case 0x456ef0u: goto label_456ef0;
        case 0x456ef4u: goto label_456ef4;
        case 0x456ef8u: goto label_456ef8;
        case 0x456efcu: goto label_456efc;
        case 0x456f00u: goto label_456f00;
        case 0x456f04u: goto label_456f04;
        case 0x456f08u: goto label_456f08;
        case 0x456f0cu: goto label_456f0c;
        case 0x456f10u: goto label_456f10;
        case 0x456f14u: goto label_456f14;
        case 0x456f18u: goto label_456f18;
        case 0x456f1cu: goto label_456f1c;
        case 0x456f20u: goto label_456f20;
        case 0x456f24u: goto label_456f24;
        case 0x456f28u: goto label_456f28;
        case 0x456f2cu: goto label_456f2c;
        case 0x456f30u: goto label_456f30;
        case 0x456f34u: goto label_456f34;
        case 0x456f38u: goto label_456f38;
        case 0x456f3cu: goto label_456f3c;
        case 0x456f40u: goto label_456f40;
        case 0x456f44u: goto label_456f44;
        case 0x456f48u: goto label_456f48;
        case 0x456f4cu: goto label_456f4c;
        case 0x456f50u: goto label_456f50;
        case 0x456f54u: goto label_456f54;
        case 0x456f58u: goto label_456f58;
        case 0x456f5cu: goto label_456f5c;
        case 0x456f60u: goto label_456f60;
        case 0x456f64u: goto label_456f64;
        case 0x456f68u: goto label_456f68;
        case 0x456f6cu: goto label_456f6c;
        case 0x456f70u: goto label_456f70;
        case 0x456f74u: goto label_456f74;
        case 0x456f78u: goto label_456f78;
        case 0x456f7cu: goto label_456f7c;
        default: break;
    }

    ctx->pc = 0x455850u;

label_455850:
    // 0x455850: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x455850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_455854:
    // 0x455854: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x455854u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_455858:
    // 0x455858: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x455858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_45585c:
    // 0x45585c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x45585cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_455860:
    // 0x455860: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x455860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_455864:
    // 0x455864: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x455864u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455868:
    // 0x455868: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_45586c:
    // 0x45586c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45586cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_455870:
    // 0x455870: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x455870u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_455874:
    // 0x455874: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x455874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_455878:
    // 0x455878: 0xc10ca68  jal         func_4329A0
label_45587c:
    if (ctx->pc == 0x45587Cu) {
        ctx->pc = 0x45587Cu;
            // 0x45587c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x455880u;
        goto label_455880;
    }
    ctx->pc = 0x455878u;
    SET_GPR_U32(ctx, 31, 0x455880u);
    ctx->pc = 0x45587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455878u;
            // 0x45587c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455880u; }
        if (ctx->pc != 0x455880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455880u; }
        if (ctx->pc != 0x455880u) { return; }
    }
    ctx->pc = 0x455880u;
label_455880:
    // 0x455880: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x455880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_455884:
    // 0x455884: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x455884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_455888:
    // 0x455888: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x455888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_45588c:
    // 0x45588c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x45588cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_455890:
    // 0x455890: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x455890u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_455894:
    // 0x455894: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x455894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_455898:
    // 0x455898: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x455898u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_45589c:
    // 0x45589c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x45589cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4558a0:
    // 0x4558a0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4558a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4558a4:
    // 0x4558a4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4558a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4558a8:
    // 0x4558a8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4558a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4558ac:
    // 0x4558ac: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4558acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4558b0:
    // 0x4558b0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4558b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4558b4:
    // 0x4558b4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4558b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4558b8:
    // 0x4558b8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4558b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4558bc:
    // 0x4558bc: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4558bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4558c0:
    // 0x4558c0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4558c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4558c4:
    // 0x4558c4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4558c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4558c8:
    // 0x4558c8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4558c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4558cc:
    // 0x4558cc: 0xc0582cc  jal         func_160B30
label_4558d0:
    if (ctx->pc == 0x4558D0u) {
        ctx->pc = 0x4558D0u;
            // 0x4558d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x4558D4u;
        goto label_4558d4;
    }
    ctx->pc = 0x4558CCu;
    SET_GPR_U32(ctx, 31, 0x4558D4u);
    ctx->pc = 0x4558D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4558CCu;
            // 0x4558d0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4558D4u; }
        if (ctx->pc != 0x4558D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4558D4u; }
        if (ctx->pc != 0x4558D4u) { return; }
    }
    ctx->pc = 0x4558D4u;
label_4558d4:
    // 0x4558d4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4558d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4558d8:
    // 0x4558d8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x4558d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_4558dc:
    // 0x4558dc: 0x2463e160  addiu       $v1, $v1, -0x1EA0
    ctx->pc = 0x4558dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959456));
label_4558e0:
    // 0x4558e0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x4558e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_4558e4:
    // 0x4558e4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x4558e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_4558e8:
    // 0x4558e8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4558e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4558ec:
    // 0x4558ec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4558ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4558f0:
    // 0x4558f0: 0xac4475b8  sw          $a0, 0x75B8($v0)
    ctx->pc = 0x4558f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30136), GPR_U32(ctx, 4));
label_4558f4:
    // 0x4558f4: 0x2463e170  addiu       $v1, $v1, -0x1E90
    ctx->pc = 0x4558f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959472));
label_4558f8:
    // 0x4558f8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4558f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4558fc:
    // 0x4558fc: 0x2442e1a8  addiu       $v0, $v0, -0x1E58
    ctx->pc = 0x4558fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959528));
label_455900:
    // 0x455900: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x455900u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_455904:
    // 0x455904: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x455904u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_455908:
    // 0x455908: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x455908u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_45590c:
    // 0x45590c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x45590cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_455910:
    // 0x455910: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x455910u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_455914:
    // 0x455914: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x455914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_455918:
    // 0x455918: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x455918u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_45591c:
    // 0x45591c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x45591cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_455920:
    // 0x455920: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x455920u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_455924:
    // 0x455924: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x455924u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_455928:
    // 0x455928: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x455928u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_45592c:
    // 0x45592c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x45592cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_455930:
    // 0x455930: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x455930u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_455934:
    // 0x455934: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_455938:
    if (ctx->pc == 0x455938u) {
        ctx->pc = 0x45593Cu;
        goto label_45593c;
    }
    ctx->pc = 0x455934u;
    {
        const bool branch_taken_0x455934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x455934) {
            ctx->pc = 0x4559C8u;
            goto label_4559c8;
        }
    }
    ctx->pc = 0x45593Cu;
label_45593c:
    // 0x45593c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x45593cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_455940:
    // 0x455940: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x455940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_455944:
    // 0x455944: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x455944u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_455948:
    // 0x455948: 0xc040138  jal         func_1004E0
label_45594c:
    if (ctx->pc == 0x45594Cu) {
        ctx->pc = 0x45594Cu;
            // 0x45594c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x455950u;
        goto label_455950;
    }
    ctx->pc = 0x455948u;
    SET_GPR_U32(ctx, 31, 0x455950u);
    ctx->pc = 0x45594Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455948u;
            // 0x45594c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455950u; }
        if (ctx->pc != 0x455950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455950u; }
        if (ctx->pc != 0x455950u) { return; }
    }
    ctx->pc = 0x455950u;
label_455950:
    // 0x455950: 0x3c050045  lui         $a1, 0x45
    ctx->pc = 0x455950u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)69 << 16));
label_455954:
    // 0x455954: 0x3c060045  lui         $a2, 0x45
    ctx->pc = 0x455954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)69 << 16));
label_455958:
    // 0x455958: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x455958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_45595c:
    // 0x45595c: 0x24a559f0  addiu       $a1, $a1, 0x59F0
    ctx->pc = 0x45595cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23024));
label_455960:
    // 0x455960: 0x24c64d10  addiu       $a2, $a2, 0x4D10
    ctx->pc = 0x455960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19728));
label_455964:
    // 0x455964: 0x24070110  addiu       $a3, $zero, 0x110
    ctx->pc = 0x455964u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_455968:
    // 0x455968: 0xc040840  jal         func_102100
label_45596c:
    if (ctx->pc == 0x45596Cu) {
        ctx->pc = 0x45596Cu;
            // 0x45596c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455970u;
        goto label_455970;
    }
    ctx->pc = 0x455968u;
    SET_GPR_U32(ctx, 31, 0x455970u);
    ctx->pc = 0x45596Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455968u;
            // 0x45596c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455970u; }
        if (ctx->pc != 0x455970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455970u; }
        if (ctx->pc != 0x455970u) { return; }
    }
    ctx->pc = 0x455970u;
label_455970:
    // 0x455970: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x455970u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_455974:
    // 0x455974: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x455974u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455978:
    // 0x455978: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x455978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_45597c:
    // 0x45597c: 0xc0788fc  jal         func_1E23F0
label_455980:
    if (ctx->pc == 0x455980u) {
        ctx->pc = 0x455980u;
            // 0x455980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455984u;
        goto label_455984;
    }
    ctx->pc = 0x45597Cu;
    SET_GPR_U32(ctx, 31, 0x455984u);
    ctx->pc = 0x455980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45597Cu;
            // 0x455980: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455984u; }
        if (ctx->pc != 0x455984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455984u; }
        if (ctx->pc != 0x455984u) { return; }
    }
    ctx->pc = 0x455984u;
label_455984:
    // 0x455984: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x455984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_455988:
    // 0x455988: 0xc0788fc  jal         func_1E23F0
label_45598c:
    if (ctx->pc == 0x45598Cu) {
        ctx->pc = 0x45598Cu;
            // 0x45598c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455990u;
        goto label_455990;
    }
    ctx->pc = 0x455988u;
    SET_GPR_U32(ctx, 31, 0x455990u);
    ctx->pc = 0x45598Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455988u;
            // 0x45598c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455990u; }
        if (ctx->pc != 0x455990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455990u; }
        if (ctx->pc != 0x455990u) { return; }
    }
    ctx->pc = 0x455990u;
label_455990:
    // 0x455990: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x455990u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_455994:
    // 0x455994: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x455994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_455998:
    // 0x455998: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x455998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_45599c:
    // 0x45599c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x45599cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4559a0:
    // 0x4559a0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4559a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4559a4:
    // 0x4559a4: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4559a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4559a8:
    // 0x4559a8: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4559a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4559ac:
    // 0x4559ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4559acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4559b0:
    // 0x4559b0: 0xc0a997c  jal         func_2A65F0
label_4559b4:
    if (ctx->pc == 0x4559B4u) {
        ctx->pc = 0x4559B4u;
            // 0x4559b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4559B8u;
        goto label_4559b8;
    }
    ctx->pc = 0x4559B0u;
    SET_GPR_U32(ctx, 31, 0x4559B8u);
    ctx->pc = 0x4559B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4559B0u;
            // 0x4559b4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4559B8u; }
        if (ctx->pc != 0x4559B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4559B8u; }
        if (ctx->pc != 0x4559B8u) { return; }
    }
    ctx->pc = 0x4559B8u;
label_4559b8:
    // 0x4559b8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4559b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4559bc:
    // 0x4559bc: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4559bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4559c0:
    // 0x4559c0: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4559c4:
    if (ctx->pc == 0x4559C4u) {
        ctx->pc = 0x4559C4u;
            // 0x4559c4: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x4559C8u;
        goto label_4559c8;
    }
    ctx->pc = 0x4559C0u;
    {
        const bool branch_taken_0x4559c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4559C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4559C0u;
            // 0x4559c4: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4559c0) {
            ctx->pc = 0x455994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_455994;
        }
    }
    ctx->pc = 0x4559C8u;
label_4559c8:
    // 0x4559c8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x4559c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4559cc:
    // 0x4559cc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4559ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4559d0:
    // 0x4559d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4559d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4559d4:
    // 0x4559d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4559d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4559d8:
    // 0x4559d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4559d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4559dc:
    // 0x4559dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4559dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4559e0:
    // 0x4559e0: 0x3e00008  jr          $ra
label_4559e4:
    if (ctx->pc == 0x4559E4u) {
        ctx->pc = 0x4559E4u;
            // 0x4559e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4559E8u;
        goto label_4559e8;
    }
    ctx->pc = 0x4559E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4559E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4559E0u;
            // 0x4559e4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4559E8u;
label_4559e8:
    // 0x4559e8: 0x0  nop
    ctx->pc = 0x4559e8u;
    // NOP
label_4559ec:
    // 0x4559ec: 0x0  nop
    ctx->pc = 0x4559ecu;
    // NOP
label_4559f0:
    // 0x4559f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4559f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4559f4:
    // 0x4559f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4559f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4559f8:
    // 0x4559f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4559f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4559fc:
    // 0x4559fc: 0xc0b1370  jal         func_2C4DC0
label_455a00:
    if (ctx->pc == 0x455A00u) {
        ctx->pc = 0x455A00u;
            // 0x455a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455A04u;
        goto label_455a04;
    }
    ctx->pc = 0x4559FCu;
    SET_GPR_U32(ctx, 31, 0x455A04u);
    ctx->pc = 0x455A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4559FCu;
            // 0x455a00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (runtime->hasFunction(0x2C4DC0u)) {
        auto targetFn = runtime->lookupFunction(0x2C4DC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455A04u; }
        if (ctx->pc != 0x455A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C4DC0_0x2c4dc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455A04u; }
        if (ctx->pc != 0x455A04u) { return; }
    }
    ctx->pc = 0x455A04u;
label_455a04:
    // 0x455a04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x455a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_455a08:
    // 0x455a08: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x455a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_455a0c:
    // 0x455a0c: 0x24638470  addiu       $v1, $v1, -0x7B90
    ctx->pc = 0x455a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935664));
label_455a10:
    // 0x455a10: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x455a10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_455a14:
    // 0x455a14: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x455a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_455a18:
    // 0x455a18: 0x244284b0  addiu       $v0, $v0, -0x7B50
    ctx->pc = 0x455a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935728));
label_455a1c:
    // 0x455a1c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x455a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_455a20:
    // 0x455a20: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x455a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_455a24:
    // 0x455a24: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x455a24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_455a28:
    // 0x455a28: 0x24a5e0b0  addiu       $a1, $a1, -0x1F50
    ctx->pc = 0x455a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959280));
label_455a2c:
    // 0x455a2c: 0xa20000d4  sb          $zero, 0xD4($s0)
    ctx->pc = 0x455a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 212), (uint8_t)GPR_U32(ctx, 0));
label_455a30:
    // 0x455a30: 0x2484e0f0  addiu       $a0, $a0, -0x1F10
    ctx->pc = 0x455a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959344));
label_455a34:
    // 0x455a34: 0xa20000d5  sb          $zero, 0xD5($s0)
    ctx->pc = 0x455a34u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 213), (uint8_t)GPR_U32(ctx, 0));
label_455a38:
    // 0x455a38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x455a38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455a3c:
    // 0x455a3c: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x455a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_455a40:
    // 0x455a40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x455a40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455a44:
    // 0x455a44: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x455a44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_455a48:
    // 0x455a48: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x455a48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_455a4c:
    // 0x455a4c: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x455a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_455a50:
    // 0x455a50: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x455a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_455a54:
    // 0x455a54: 0xa203010a  sb          $v1, 0x10A($s0)
    ctx->pc = 0x455a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 266), (uint8_t)GPR_U32(ctx, 3));
label_455a58:
    // 0x455a58: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x455a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_455a5c:
    // 0x455a5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455a5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455a60:
    // 0x455a60: 0x3e00008  jr          $ra
label_455a64:
    if (ctx->pc == 0x455A64u) {
        ctx->pc = 0x455A64u;
            // 0x455a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x455A68u;
        goto label_455a68;
    }
    ctx->pc = 0x455A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455A60u;
            // 0x455a64: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x455A68u;
label_455a68:
    // 0x455a68: 0x0  nop
    ctx->pc = 0x455a68u;
    // NOP
label_455a6c:
    // 0x455a6c: 0x0  nop
    ctx->pc = 0x455a6cu;
    // NOP
label_455a70:
    // 0x455a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x455a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_455a74:
    // 0x455a74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x455a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_455a78:
    // 0x455a78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x455a78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_455a7c:
    // 0x455a7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x455a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455a80:
    // 0x455a80: 0x8c8400f0  lw          $a0, 0xF0($a0)
    ctx->pc = 0x455a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 240)));
label_455a84:
    // 0x455a84: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_455a88:
    if (ctx->pc == 0x455A88u) {
        ctx->pc = 0x455A88u;
            // 0x455a88: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x455A8Cu;
        goto label_455a8c;
    }
    ctx->pc = 0x455A84u;
    {
        const bool branch_taken_0x455a84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455a84) {
            ctx->pc = 0x455A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455A84u;
            // 0x455a88: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455AA4u;
            goto label_455aa4;
        }
    }
    ctx->pc = 0x455A8Cu;
label_455a8c:
    // 0x455a8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x455a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_455a90:
    // 0x455a90: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x455a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_455a94:
    // 0x455a94: 0x320f809  jalr        $t9
label_455a98:
    if (ctx->pc == 0x455A98u) {
        ctx->pc = 0x455A98u;
            // 0x455a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455A9Cu;
        goto label_455a9c;
    }
    ctx->pc = 0x455A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x455A9Cu);
        ctx->pc = 0x455A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455A94u;
            // 0x455a98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x455A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x455A9Cu; }
            if (ctx->pc != 0x455A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x455A9Cu;
label_455a9c:
    // 0x455a9c: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x455a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_455aa0:
    // 0x455aa0: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x455aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_455aa4:
    // 0x455aa4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_455aa8:
    if (ctx->pc == 0x455AA8u) {
        ctx->pc = 0x455AA8u;
            // 0x455aa8: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->pc = 0x455AACu;
        goto label_455aac;
    }
    ctx->pc = 0x455AA4u;
    {
        const bool branch_taken_0x455aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455aa4) {
            ctx->pc = 0x455AA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455AA4u;
            // 0x455aa8: 0xae0000ec  sw          $zero, 0xEC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455AC0u;
            goto label_455ac0;
        }
    }
    ctx->pc = 0x455AACu;
label_455aac:
    // 0x455aac: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x455aacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_455ab0:
    // 0x455ab0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x455ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_455ab4:
    // 0x455ab4: 0x320f809  jalr        $t9
label_455ab8:
    if (ctx->pc == 0x455AB8u) {
        ctx->pc = 0x455AB8u;
            // 0x455ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x455ABCu;
        goto label_455abc;
    }
    ctx->pc = 0x455AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x455ABCu);
        ctx->pc = 0x455AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455AB4u;
            // 0x455ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x455ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x455ABCu; }
            if (ctx->pc != 0x455ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x455ABCu;
label_455abc:
    // 0x455abc: 0xae0000ec  sw          $zero, 0xEC($s0)
    ctx->pc = 0x455abcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 236), GPR_U32(ctx, 0));
label_455ac0:
    // 0x455ac0: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x455ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_455ac4:
    // 0x455ac4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_455ac8:
    if (ctx->pc == 0x455AC8u) {
        ctx->pc = 0x455AC8u;
            // 0x455ac8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x455ACCu;
        goto label_455acc;
    }
    ctx->pc = 0x455AC4u;
    {
        const bool branch_taken_0x455ac4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455ac4) {
            ctx->pc = 0x455AC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455AC4u;
            // 0x455ac8: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455AE0u;
            goto label_455ae0;
        }
    }
    ctx->pc = 0x455ACCu;
label_455acc:
    // 0x455acc: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x455accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_455ad0:
    // 0x455ad0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x455ad0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_455ad4:
    // 0x455ad4: 0x320f809  jalr        $t9
label_455ad8:
    if (ctx->pc == 0x455AD8u) {
        ctx->pc = 0x455AD8u;
            // 0x455ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x455ADCu;
        goto label_455adc;
    }
    ctx->pc = 0x455AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x455ADCu);
        ctx->pc = 0x455AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455AD4u;
            // 0x455ad8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x455ADCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x455ADCu; }
            if (ctx->pc != 0x455ADCu) { return; }
        }
        }
    }
    ctx->pc = 0x455ADCu;
label_455adc:
    // 0x455adc: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x455adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_455ae0:
    // 0x455ae0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x455ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_455ae4:
    // 0x455ae4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_455ae8:
    if (ctx->pc == 0x455AE8u) {
        ctx->pc = 0x455AE8u;
            // 0x455ae8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x455AECu;
        goto label_455aec;
    }
    ctx->pc = 0x455AE4u;
    {
        const bool branch_taken_0x455ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x455ae4) {
            ctx->pc = 0x455AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455AE4u;
            // 0x455ae8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455B00u;
            goto label_455b00;
        }
    }
    ctx->pc = 0x455AECu;
label_455aec:
    // 0x455aec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x455aecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_455af0:
    // 0x455af0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x455af0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_455af4:
    // 0x455af4: 0x320f809  jalr        $t9
label_455af8:
    if (ctx->pc == 0x455AF8u) {
        ctx->pc = 0x455AF8u;
            // 0x455af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x455AFCu;
        goto label_455afc;
    }
    ctx->pc = 0x455AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x455AFCu);
        ctx->pc = 0x455AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455AF4u;
            // 0x455af8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x455AFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x455AFCu; }
            if (ctx->pc != 0x455AFCu) { return; }
        }
        }
    }
    ctx->pc = 0x455AFCu;
label_455afc:
    // 0x455afc: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x455afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_455b00:
    // 0x455b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x455b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_455b04:
    // 0x455b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x455b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_455b08:
    // 0x455b08: 0x3e00008  jr          $ra
label_455b0c:
    if (ctx->pc == 0x455B0Cu) {
        ctx->pc = 0x455B0Cu;
            // 0x455b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x455B10u;
        goto label_455b10;
    }
    ctx->pc = 0x455B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x455B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455B08u;
            // 0x455b0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x455B10u;
label_455b10:
    // 0x455b10: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x455b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
label_455b14:
    // 0x455b14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x455b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_455b18:
    // 0x455b18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x455b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_455b1c:
    // 0x455b1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x455b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_455b20:
    // 0x455b20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x455b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_455b24:
    // 0x455b24: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x455b24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_455b28:
    // 0x455b28: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x455b28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_455b2c:
    // 0x455b2c: 0xc0892d0  jal         func_224B40
label_455b30:
    if (ctx->pc == 0x455B30u) {
        ctx->pc = 0x455B30u;
            // 0x455b30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x455B34u;
        goto label_455b34;
    }
    ctx->pc = 0x455B2Cu;
    SET_GPR_U32(ctx, 31, 0x455B34u);
    ctx->pc = 0x455B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B2Cu;
            // 0x455b30: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B34u; }
        if (ctx->pc != 0x455B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B34u; }
        if (ctx->pc != 0x455B34u) { return; }
    }
    ctx->pc = 0x455B34u;
label_455b34:
    // 0x455b34: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x455b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_455b38:
    // 0x455b38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x455b38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_455b3c:
    // 0x455b3c: 0x8c4275b8  lw          $v0, 0x75B8($v0)
    ctx->pc = 0x455b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30136)));
label_455b40:
    // 0x455b40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x455b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_455b44:
    // 0x455b44: 0x8c70e3e0  lw          $s0, -0x1C20($v1)
    ctx->pc = 0x455b44u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960096)));
label_455b48:
    // 0x455b48: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x455b48u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_455b4c:
    // 0x455b4c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x455b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_455b50:
    // 0x455b50: 0xc0b6e68  jal         func_2DB9A0
label_455b54:
    if (ctx->pc == 0x455B54u) {
        ctx->pc = 0x455B54u;
            // 0x455b54: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->pc = 0x455B58u;
        goto label_455b58;
    }
    ctx->pc = 0x455B50u;
    SET_GPR_U32(ctx, 31, 0x455B58u);
    ctx->pc = 0x455B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B50u;
            // 0x455b54: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B58u; }
        if (ctx->pc != 0x455B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B58u; }
        if (ctx->pc != 0x455B58u) { return; }
    }
    ctx->pc = 0x455B58u;
label_455b58:
    // 0x455b58: 0xc0b6dac  jal         func_2DB6B0
label_455b5c:
    if (ctx->pc == 0x455B5Cu) {
        ctx->pc = 0x455B5Cu;
            // 0x455b5c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x455B60u;
        goto label_455b60;
    }
    ctx->pc = 0x455B58u;
    SET_GPR_U32(ctx, 31, 0x455B60u);
    ctx->pc = 0x455B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B58u;
            // 0x455b5c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B60u; }
        if (ctx->pc != 0x455B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B60u; }
        if (ctx->pc != 0x455B60u) { return; }
    }
    ctx->pc = 0x455B60u;
label_455b60:
    // 0x455b60: 0xc0cac94  jal         func_32B250
label_455b64:
    if (ctx->pc == 0x455B64u) {
        ctx->pc = 0x455B64u;
            // 0x455b64: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x455B68u;
        goto label_455b68;
    }
    ctx->pc = 0x455B60u;
    SET_GPR_U32(ctx, 31, 0x455B68u);
    ctx->pc = 0x455B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B60u;
            // 0x455b64: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B68u; }
        if (ctx->pc != 0x455B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B68u; }
        if (ctx->pc != 0x455B68u) { return; }
    }
    ctx->pc = 0x455B68u;
label_455b68:
    // 0x455b68: 0xc0cac84  jal         func_32B210
label_455b6c:
    if (ctx->pc == 0x455B6Cu) {
        ctx->pc = 0x455B6Cu;
            // 0x455b6c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x455B70u;
        goto label_455b70;
    }
    ctx->pc = 0x455B68u;
    SET_GPR_U32(ctx, 31, 0x455B70u);
    ctx->pc = 0x455B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B68u;
            // 0x455b6c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B70u; }
        if (ctx->pc != 0x455B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B70u; }
        if (ctx->pc != 0x455B70u) { return; }
    }
    ctx->pc = 0x455B70u;
label_455b70:
    // 0x455b70: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x455b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_455b74:
    // 0x455b74: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x455b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_455b78:
    // 0x455b78: 0xc44cc930  lwc1        $f12, -0x36D0($v0)
    ctx->pc = 0x455b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_455b7c:
    // 0x455b7c: 0xc0a5a68  jal         func_2969A0
label_455b80:
    if (ctx->pc == 0x455B80u) {
        ctx->pc = 0x455B80u;
            // 0x455b80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x455B84u;
        goto label_455b84;
    }
    ctx->pc = 0x455B7Cu;
    SET_GPR_U32(ctx, 31, 0x455B84u);
    ctx->pc = 0x455B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455B7Cu;
            // 0x455b80: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B84u; }
        if (ctx->pc != 0x455B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455B84u; }
        if (ctx->pc != 0x455B84u) { return; }
    }
    ctx->pc = 0x455B84u;
label_455b84:
    // 0x455b84: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x455b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_455b88:
    // 0x455b88: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x455b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455b8c:
    // 0x455b8c: 0x8c4475b8  lw          $a0, 0x75B8($v0)
    ctx->pc = 0x455b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30136)));
label_455b90:
    // 0x455b90: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x455b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455b94:
    // 0x455b94: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x455b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455b98:
    // 0x455b98: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x455b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_455b9c:
    // 0x455b9c: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x455b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455ba0:
    // 0x455ba0: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x455ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_455ba4:
    // 0x455ba4: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x455ba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_455ba8:
    // 0x455ba8: 0x3c023f05  lui         $v0, 0x3F05
    ctx->pc = 0x455ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16133 << 16));
label_455bac:
    // 0x455bac: 0x34471eb8  ori         $a3, $v0, 0x1EB8
    ctx->pc = 0x455bacu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7864);
label_455bb0:
    // 0x455bb0: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x455bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_455bb4:
    // 0x455bb4: 0xafa900e4  sw          $t1, 0xE4($sp)
    ctx->pc = 0x455bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 9));
label_455bb8:
    // 0x455bb8: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x455bb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_455bbc:
    // 0x455bbc: 0xc6690018  lwc1        $f9, 0x18($s3)
    ctx->pc = 0x455bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_455bc0:
    // 0x455bc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x455bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_455bc4:
    // 0x455bc4: 0xc6680014  lwc1        $f8, 0x14($s3)
    ctx->pc = 0x455bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_455bc8:
    // 0x455bc8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x455bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_455bcc:
    // 0x455bcc: 0xc6670010  lwc1        $f7, 0x10($s3)
    ctx->pc = 0x455bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_455bd0:
    // 0x455bd0: 0xc7a600b0  lwc1        $f6, 0xB0($sp)
    ctx->pc = 0x455bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_455bd4:
    // 0x455bd4: 0xc7a500b4  lwc1        $f5, 0xB4($sp)
    ctx->pc = 0x455bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_455bd8:
    // 0x455bd8: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x455bd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_455bdc:
    // 0x455bdc: 0xa3a80190  sb          $t0, 0x190($sp)
    ctx->pc = 0x455bdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 8));
label_455be0:
    // 0x455be0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x455be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455be4:
    // 0x455be4: 0xafa7018c  sw          $a3, 0x18C($sp)
    ctx->pc = 0x455be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 7));
label_455be8:
    // 0x455be8: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x455be8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_455bec:
    // 0x455bec: 0xafa300e0  sw          $v1, 0xE0($sp)
    ctx->pc = 0x455becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 3));
label_455bf0:
    // 0x455bf0: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x455bf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_455bf4:
    // 0x455bf4: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x455bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_455bf8:
    // 0x455bf8: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x455bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_455bfc:
    // 0x455bfc: 0xc7a200cc  lwc1        $f2, 0xCC($sp)
    ctx->pc = 0x455bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455c00:
    // 0x455c00: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x455c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455c04:
    // 0x455c04: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x455c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455c08:
    // 0x455c08: 0xe7a2014c  swc1        $f2, 0x14C($sp)
    ctx->pc = 0x455c08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_455c0c:
    // 0x455c0c: 0xe7a10150  swc1        $f1, 0x150($sp)
    ctx->pc = 0x455c0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_455c10:
    // 0x455c10: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x455c10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_455c14:
    // 0x455c14: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x455c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455c18:
    // 0x455c18: 0xc7a100dc  lwc1        $f1, 0xDC($sp)
    ctx->pc = 0x455c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455c1c:
    // 0x455c1c: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x455c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455c20:
    // 0x455c20: 0xe7a20158  swc1        $f2, 0x158($sp)
    ctx->pc = 0x455c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_455c24:
    // 0x455c24: 0xe7a1015c  swc1        $f1, 0x15C($sp)
    ctx->pc = 0x455c24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_455c28:
    // 0x455c28: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x455c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_455c2c:
    // 0x455c2c: 0xc7a400b8  lwc1        $f4, 0xB8($sp)
    ctx->pc = 0x455c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_455c30:
    // 0x455c30: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x455c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_455c34:
    // 0x455c34: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x455c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455c38:
    // 0x455c38: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x455c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455c3c:
    // 0x455c3c: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x455c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455c40:
    // 0x455c40: 0xe7a700f0  swc1        $f7, 0xF0($sp)
    ctx->pc = 0x455c40u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_455c44:
    // 0x455c44: 0xe7a800f4  swc1        $f8, 0xF4($sp)
    ctx->pc = 0x455c44u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_455c48:
    // 0x455c48: 0xe7a900f8  swc1        $f9, 0xF8($sp)
    ctx->pc = 0x455c48u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_455c4c:
    // 0x455c4c: 0xe7a60130  swc1        $f6, 0x130($sp)
    ctx->pc = 0x455c4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_455c50:
    // 0x455c50: 0xe7a50134  swc1        $f5, 0x134($sp)
    ctx->pc = 0x455c50u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_455c54:
    // 0x455c54: 0xe7a40138  swc1        $f4, 0x138($sp)
    ctx->pc = 0x455c54u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_455c58:
    // 0x455c58: 0xe7a3013c  swc1        $f3, 0x13C($sp)
    ctx->pc = 0x455c58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_455c5c:
    // 0x455c5c: 0xe7a20164  swc1        $f2, 0x164($sp)
    ctx->pc = 0x455c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_455c60:
    // 0x455c60: 0xe7a10168  swc1        $f1, 0x168($sp)
    ctx->pc = 0x455c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_455c64:
    // 0x455c64: 0xc0a7a88  jal         func_29EA20
label_455c68:
    if (ctx->pc == 0x455C68u) {
        ctx->pc = 0x455C68u;
            // 0x455c68: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->pc = 0x455C6Cu;
        goto label_455c6c;
    }
    ctx->pc = 0x455C64u;
    SET_GPR_U32(ctx, 31, 0x455C6Cu);
    ctx->pc = 0x455C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455C64u;
            // 0x455c68: 0xe7a00170  swc1        $f0, 0x170($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455C6Cu; }
        if (ctx->pc != 0x455C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455C6Cu; }
        if (ctx->pc != 0x455C6Cu) { return; }
    }
    ctx->pc = 0x455C6Cu;
label_455c6c:
    // 0x455c6c: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x455c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_455c70:
    // 0x455c70: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x455c70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455c74:
    // 0x455c74: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_455c78:
    if (ctx->pc == 0x455C78u) {
        ctx->pc = 0x455C78u;
            // 0x455c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x455C7Cu;
        goto label_455c7c;
    }
    ctx->pc = 0x455C74u;
    {
        const bool branch_taken_0x455c74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x455C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455C74u;
            // 0x455c78: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455c74) {
            ctx->pc = 0x455CC4u;
            goto label_455cc4;
        }
    }
    ctx->pc = 0x455C7Cu;
label_455c7c:
    // 0x455c7c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x455c7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455c80:
    // 0x455c80: 0xc088ef4  jal         func_223BD0
label_455c84:
    if (ctx->pc == 0x455C84u) {
        ctx->pc = 0x455C84u;
            // 0x455c84: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x455C88u;
        goto label_455c88;
    }
    ctx->pc = 0x455C80u;
    SET_GPR_U32(ctx, 31, 0x455C88u);
    ctx->pc = 0x455C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455C80u;
            // 0x455c84: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455C88u; }
        if (ctx->pc != 0x455C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455C88u; }
        if (ctx->pc != 0x455C88u) { return; }
    }
    ctx->pc = 0x455C88u;
label_455c88:
    // 0x455c88: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x455c88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_455c8c:
    // 0x455c8c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x455c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_455c90:
    // 0x455c90: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x455c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_455c94:
    // 0x455c94: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x455c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_455c98:
    // 0x455c98: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x455c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_455c9c:
    // 0x455c9c: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x455c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_455ca0:
    // 0x455ca0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x455ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_455ca4:
    // 0x455ca4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x455ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_455ca8:
    // 0x455ca8: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x455ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_455cac:
    // 0x455cac: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x455cacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_455cb0:
    // 0x455cb0: 0xae33000c  sw          $s3, 0xC($s1)
    ctx->pc = 0x455cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 19));
label_455cb4:
    // 0x455cb4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x455cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_455cb8:
    // 0x455cb8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x455cb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_455cbc:
    // 0x455cbc: 0xc088b38  jal         func_222CE0
label_455cc0:
    if (ctx->pc == 0x455CC0u) {
        ctx->pc = 0x455CC0u;
            // 0x455cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455CC4u;
        goto label_455cc4;
    }
    ctx->pc = 0x455CBCu;
    SET_GPR_U32(ctx, 31, 0x455CC4u);
    ctx->pc = 0x455CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455CBCu;
            // 0x455cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CC4u; }
        if (ctx->pc != 0x455CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CC4u; }
        if (ctx->pc != 0x455CC4u) { return; }
    }
    ctx->pc = 0x455CC4u;
label_455cc4:
    // 0x455cc4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x455cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_455cc8:
    // 0x455cc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455cc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455ccc:
    // 0x455ccc: 0xc08c164  jal         func_230590
label_455cd0:
    if (ctx->pc == 0x455CD0u) {
        ctx->pc = 0x455CD0u;
            // 0x455cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x455CD4u;
        goto label_455cd4;
    }
    ctx->pc = 0x455CCCu;
    SET_GPR_U32(ctx, 31, 0x455CD4u);
    ctx->pc = 0x455CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455CCCu;
            // 0x455cd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CD4u; }
        if (ctx->pc != 0x455CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CD4u; }
        if (ctx->pc != 0x455CD4u) { return; }
    }
    ctx->pc = 0x455CD4u;
label_455cd4:
    // 0x455cd4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x455cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_455cd8:
    // 0x455cd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x455cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455cdc:
    // 0x455cdc: 0x24425f20  addiu       $v0, $v0, 0x5F20
    ctx->pc = 0x455cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24352));
label_455ce0:
    // 0x455ce0: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x455ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_455ce4:
    // 0x455ce4: 0xae220200  sw          $v0, 0x200($s1)
    ctx->pc = 0x455ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 2));
label_455ce8:
    // 0x455ce8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x455ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455cec:
    // 0x455cec: 0xc08914c  jal         func_224530
label_455cf0:
    if (ctx->pc == 0x455CF0u) {
        ctx->pc = 0x455CF0u;
            // 0x455cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455CF4u;
        goto label_455cf4;
    }
    ctx->pc = 0x455CECu;
    SET_GPR_U32(ctx, 31, 0x455CF4u);
    ctx->pc = 0x455CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455CECu;
            // 0x455cf0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CF4u; }
        if (ctx->pc != 0x455CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455CF4u; }
        if (ctx->pc != 0x455CF4u) { return; }
    }
    ctx->pc = 0x455CF4u;
label_455cf4:
    // 0x455cf4: 0x3c0343d1  lui         $v1, 0x43D1
    ctx->pc = 0x455cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17361 << 16));
label_455cf8:
    // 0x455cf8: 0x3c023e32  lui         $v0, 0x3E32
    ctx->pc = 0x455cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15922 << 16));
label_455cfc:
    // 0x455cfc: 0x34637084  ori         $v1, $v1, 0x7084
    ctx->pc = 0x455cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28804);
label_455d00:
    // 0x455d00: 0x3442b8c2  ori         $v0, $v0, 0xB8C2
    ctx->pc = 0x455d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47298);
label_455d04:
    // 0x455d04: 0xae230154  sw          $v1, 0x154($s1)
    ctx->pc = 0x455d04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 340), GPR_U32(ctx, 3));
label_455d08:
    // 0x455d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x455d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455d0c:
    // 0x455d0c: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x455d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_455d10:
    // 0x455d10: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x455d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_455d14:
    // 0x455d14: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x455d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455d18:
    // 0x455d18: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x455d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_455d1c:
    // 0x455d1c: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x455d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455d20:
    // 0x455d20: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x455d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455d24:
    // 0x455d24: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x455d24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_455d28:
    // 0x455d28: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x455d28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_455d2c:
    // 0x455d2c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x455d2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_455d30:
    // 0x455d30: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x455d30u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_455d34:
    // 0x455d34: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x455d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_455d38:
    // 0x455d38: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x455d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455d3c:
    // 0x455d3c: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x455d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455d40:
    // 0x455d40: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x455d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455d44:
    // 0x455d44: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x455d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_455d48:
    // 0x455d48: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x455d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_455d4c:
    // 0x455d4c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x455d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_455d50:
    // 0x455d50: 0xc0892b0  jal         func_224AC0
label_455d54:
    if (ctx->pc == 0x455D54u) {
        ctx->pc = 0x455D54u;
            // 0x455d54: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x455D58u;
        goto label_455d58;
    }
    ctx->pc = 0x455D50u;
    SET_GPR_U32(ctx, 31, 0x455D58u);
    ctx->pc = 0x455D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455D50u;
            // 0x455d54: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D58u; }
        if (ctx->pc != 0x455D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D58u; }
        if (ctx->pc != 0x455D58u) { return; }
    }
    ctx->pc = 0x455D58u;
label_455d58:
    // 0x455d58: 0xae710050  sw          $s1, 0x50($s3)
    ctx->pc = 0x455d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 17));
label_455d5c:
    // 0x455d5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x455d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_455d60:
    // 0x455d60: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x455d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_455d64:
    // 0x455d64: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x455d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_455d68:
    // 0x455d68: 0xc0a7a88  jal         func_29EA20
label_455d6c:
    if (ctx->pc == 0x455D6Cu) {
        ctx->pc = 0x455D6Cu;
            // 0x455d6c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x455D70u;
        goto label_455d70;
    }
    ctx->pc = 0x455D68u;
    SET_GPR_U32(ctx, 31, 0x455D70u);
    ctx->pc = 0x455D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455D68u;
            // 0x455d6c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D70u; }
        if (ctx->pc != 0x455D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D70u; }
        if (ctx->pc != 0x455D70u) { return; }
    }
    ctx->pc = 0x455D70u;
label_455d70:
    // 0x455d70: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x455d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_455d74:
    // 0x455d74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x455d74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_455d78:
    // 0x455d78: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_455d7c:
    if (ctx->pc == 0x455D7Cu) {
        ctx->pc = 0x455D7Cu;
            // 0x455d7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x455D80u;
        goto label_455d80;
    }
    ctx->pc = 0x455D78u;
    {
        const bool branch_taken_0x455d78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x455D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455D78u;
            // 0x455d7c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455d78) {
            ctx->pc = 0x455D9Cu;
            goto label_455d9c;
        }
    }
    ctx->pc = 0x455D80u;
label_455d80:
    // 0x455d80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x455d80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_455d84:
    // 0x455d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x455d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_455d88:
    // 0x455d88: 0xc0869d0  jal         func_21A740
label_455d8c:
    if (ctx->pc == 0x455D8Cu) {
        ctx->pc = 0x455D8Cu;
            // 0x455d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455D90u;
        goto label_455d90;
    }
    ctx->pc = 0x455D88u;
    SET_GPR_U32(ctx, 31, 0x455D90u);
    ctx->pc = 0x455D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455D88u;
            // 0x455d8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D90u; }
        if (ctx->pc != 0x455D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455D90u; }
        if (ctx->pc != 0x455D90u) { return; }
    }
    ctx->pc = 0x455D90u;
label_455d90:
    // 0x455d90: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x455d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_455d94:
    // 0x455d94: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x455d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_455d98:
    // 0x455d98: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x455d98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_455d9c:
    // 0x455d9c: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x455d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_455da0:
    // 0x455da0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x455da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_455da4:
    // 0x455da4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x455da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_455da8:
    // 0x455da8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x455da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_455dac:
    // 0x455dac: 0xc08c650  jal         func_231940
label_455db0:
    if (ctx->pc == 0x455DB0u) {
        ctx->pc = 0x455DB0u;
            // 0x455db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455DB4u;
        goto label_455db4;
    }
    ctx->pc = 0x455DACu;
    SET_GPR_U32(ctx, 31, 0x455DB4u);
    ctx->pc = 0x455DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455DACu;
            // 0x455db0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455DB4u; }
        if (ctx->pc != 0x455DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455DB4u; }
        if (ctx->pc != 0x455DB4u) { return; }
    }
    ctx->pc = 0x455DB4u;
label_455db4:
    // 0x455db4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x455db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_455db8:
    // 0x455db8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x455db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_455dbc:
    // 0x455dbc: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x455dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_455dc0:
    // 0x455dc0: 0x8c440968  lw          $a0, 0x968($v0)
    ctx->pc = 0x455dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2408)));
label_455dc4:
    // 0x455dc4: 0x54830024  bnel        $a0, $v1, . + 4 + (0x24 << 2)
label_455dc8:
    if (ctx->pc == 0x455DC8u) {
        ctx->pc = 0x455DC8u;
            // 0x455dc8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x455DCCu;
        goto label_455dcc;
    }
    ctx->pc = 0x455DC4u;
    {
        const bool branch_taken_0x455dc4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x455dc4) {
            ctx->pc = 0x455DC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455DC4u;
            // 0x455dc8: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455E58u;
            goto label_455e58;
        }
    }
    ctx->pc = 0x455DCCu;
label_455dcc:
    // 0x455dcc: 0xc040180  jal         func_100600
label_455dd0:
    if (ctx->pc == 0x455DD0u) {
        ctx->pc = 0x455DD0u;
            // 0x455dd0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x455DD4u;
        goto label_455dd4;
    }
    ctx->pc = 0x455DCCu;
    SET_GPR_U32(ctx, 31, 0x455DD4u);
    ctx->pc = 0x455DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455DCCu;
            // 0x455dd0: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455DD4u; }
        if (ctx->pc != 0x455DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455DD4u; }
        if (ctx->pc != 0x455DD4u) { return; }
    }
    ctx->pc = 0x455DD4u;
label_455dd4:
    // 0x455dd4: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_455dd8:
    if (ctx->pc == 0x455DD8u) {
        ctx->pc = 0x455DD8u;
            // 0x455dd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455DDCu;
        goto label_455ddc;
    }
    ctx->pc = 0x455DD4u;
    {
        const bool branch_taken_0x455dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455DD4u;
            // 0x455dd8: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455dd4) {
            ctx->pc = 0x455E44u;
            goto label_455e44;
        }
    }
    ctx->pc = 0x455DDCu;
label_455ddc:
    // 0x455ddc: 0x8e670050  lw          $a3, 0x50($s3)
    ctx->pc = 0x455ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_455de0:
    // 0x455de0: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x455de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_455de4:
    // 0x455de4: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x455de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_455de8:
    // 0x455de8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x455de8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_455dec:
    // 0x455dec: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x455decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_455df0:
    // 0x455df0: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x455df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_455df4:
    // 0x455df4: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x455df4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
label_455df8:
    // 0x455df8: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x455df8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_455dfc:
    // 0x455dfc: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x455dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_455e00:
    // 0x455e00: 0x24a5deb0  addiu       $a1, $a1, -0x2150
    ctx->pc = 0x455e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958768));
label_455e04:
    // 0x455e04: 0xae470024  sw          $a3, 0x24($s2)
    ctx->pc = 0x455e04u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 7));
label_455e08:
    // 0x455e08: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x455e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_455e0c:
    // 0x455e0c: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x455e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
label_455e10:
    // 0x455e10: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x455e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_455e14:
    // 0x455e14: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x455e14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_455e18:
    // 0x455e18: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x455e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_455e1c:
    // 0x455e1c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x455e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_455e20:
    // 0x455e20: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x455e20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_455e24:
    // 0x455e24: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x455e24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_455e28:
    // 0x455e28: 0xae45003c  sw          $a1, 0x3C($s2)
    ctx->pc = 0x455e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 5));
label_455e2c:
    // 0x455e2c: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x455e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_455e30:
    // 0x455e30: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x455e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_455e34:
    // 0x455e34: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x455e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_455e38:
    // 0x455e38: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x455e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_455e3c:
    // 0x455e3c: 0xc04c968  jal         func_1325A0
label_455e40:
    if (ctx->pc == 0x455E40u) {
        ctx->pc = 0x455E40u;
            // 0x455e40: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x455E44u;
        goto label_455e44;
    }
    ctx->pc = 0x455E3Cu;
    SET_GPR_U32(ctx, 31, 0x455E44u);
    ctx->pc = 0x455E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455E3Cu;
            // 0x455e40: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455E44u; }
        if (ctx->pc != 0x455E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455E44u; }
        if (ctx->pc != 0x455E44u) { return; }
    }
    ctx->pc = 0x455E44u;
label_455e44:
    // 0x455e44: 0x3c023f0c  lui         $v0, 0x3F0C
    ctx->pc = 0x455e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16140 << 16));
label_455e48:
    // 0x455e48: 0xae7200a0  sw          $s2, 0xA0($s3)
    ctx->pc = 0x455e48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 18));
label_455e4c:
    // 0x455e4c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x455e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_455e50:
    // 0x455e50: 0x10000025  b           . + 4 + (0x25 << 2)
label_455e54:
    if (ctx->pc == 0x455E54u) {
        ctx->pc = 0x455E54u;
            // 0x455e54: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x455E58u;
        goto label_455e58;
    }
    ctx->pc = 0x455E50u;
    {
        const bool branch_taken_0x455e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455E50u;
            // 0x455e54: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455e50) {
            ctx->pc = 0x455EE8u;
            goto label_455ee8;
        }
    }
    ctx->pc = 0x455E58u;
label_455e58:
    // 0x455e58: 0x54820024  bnel        $a0, $v0, . + 4 + (0x24 << 2)
label_455e5c:
    if (ctx->pc == 0x455E5Cu) {
        ctx->pc = 0x455E5Cu;
            // 0x455e5c: 0x8e6300b0  lw          $v1, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->pc = 0x455E60u;
        goto label_455e60;
    }
    ctx->pc = 0x455E58u;
    {
        const bool branch_taken_0x455e58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x455e58) {
            ctx->pc = 0x455E5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455E58u;
            // 0x455e5c: 0x8e6300b0  lw          $v1, 0xB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455EECu;
            goto label_455eec;
        }
    }
    ctx->pc = 0x455E60u;
label_455e60:
    // 0x455e60: 0xc040180  jal         func_100600
label_455e64:
    if (ctx->pc == 0x455E64u) {
        ctx->pc = 0x455E64u;
            // 0x455e64: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x455E68u;
        goto label_455e68;
    }
    ctx->pc = 0x455E60u;
    SET_GPR_U32(ctx, 31, 0x455E68u);
    ctx->pc = 0x455E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455E60u;
            // 0x455e64: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455E68u; }
        if (ctx->pc != 0x455E68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455E68u; }
        if (ctx->pc != 0x455E68u) { return; }
    }
    ctx->pc = 0x455E68u;
label_455e68:
    // 0x455e68: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_455e6c:
    if (ctx->pc == 0x455E6Cu) {
        ctx->pc = 0x455E6Cu;
            // 0x455e6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x455E70u;
        goto label_455e70;
    }
    ctx->pc = 0x455E68u;
    {
        const bool branch_taken_0x455e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x455E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455E68u;
            // 0x455e6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455e68) {
            ctx->pc = 0x455ED8u;
            goto label_455ed8;
        }
    }
    ctx->pc = 0x455E70u;
label_455e70:
    // 0x455e70: 0x8e670050  lw          $a3, 0x50($s3)
    ctx->pc = 0x455e70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_455e74:
    // 0x455e74: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x455e74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_455e78:
    // 0x455e78: 0x248421e0  addiu       $a0, $a0, 0x21E0
    ctx->pc = 0x455e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8672));
label_455e7c:
    // 0x455e7c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x455e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_455e80:
    // 0x455e80: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x455e80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_455e84:
    // 0x455e84: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x455e84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_455e88:
    // 0x455e88: 0xae440048  sw          $a0, 0x48($s2)
    ctx->pc = 0x455e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 4));
label_455e8c:
    // 0x455e8c: 0x3c06c000  lui         $a2, 0xC000
    ctx->pc = 0x455e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49152 << 16));
label_455e90:
    // 0x455e90: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x455e90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_455e94:
    // 0x455e94: 0x24a5df30  addiu       $a1, $a1, -0x20D0
    ctx->pc = 0x455e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958896));
label_455e98:
    // 0x455e98: 0xae470024  sw          $a3, 0x24($s2)
    ctx->pc = 0x455e98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 7));
label_455e9c:
    // 0x455e9c: 0x246385d0  addiu       $v1, $v1, -0x7A30
    ctx->pc = 0x455e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936016));
label_455ea0:
    // 0x455ea0: 0xae460028  sw          $a2, 0x28($s2)
    ctx->pc = 0x455ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 6));
label_455ea4:
    // 0x455ea4: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x455ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_455ea8:
    // 0x455ea8: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x455ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_455eac:
    // 0x455eac: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x455eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_455eb0:
    // 0x455eb0: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x455eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_455eb4:
    // 0x455eb4: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x455eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_455eb8:
    // 0x455eb8: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x455eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_455ebc:
    // 0x455ebc: 0xae45003c  sw          $a1, 0x3C($s2)
    ctx->pc = 0x455ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 5));
label_455ec0:
    // 0x455ec0: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x455ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_455ec4:
    // 0x455ec4: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x455ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_455ec8:
    // 0x455ec8: 0xae430048  sw          $v1, 0x48($s2)
    ctx->pc = 0x455ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 3));
label_455ecc:
    // 0x455ecc: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x455eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_455ed0:
    // 0x455ed0: 0xc04c968  jal         func_1325A0
label_455ed4:
    if (ctx->pc == 0x455ED4u) {
        ctx->pc = 0x455ED4u;
            // 0x455ed4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x455ED8u;
        goto label_455ed8;
    }
    ctx->pc = 0x455ED0u;
    SET_GPR_U32(ctx, 31, 0x455ED8u);
    ctx->pc = 0x455ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x455ED0u;
            // 0x455ed4: 0xae420064  sw          $v0, 0x64($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455ED8u; }
        if (ctx->pc != 0x455ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x455ED8u; }
        if (ctx->pc != 0x455ED8u) { return; }
    }
    ctx->pc = 0x455ED8u;
label_455ed8:
    // 0x455ed8: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x455ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_455edc:
    // 0x455edc: 0xae7200a0  sw          $s2, 0xA0($s3)
    ctx->pc = 0x455edcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 160), GPR_U32(ctx, 18));
label_455ee0:
    // 0x455ee0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x455ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_455ee4:
    // 0x455ee4: 0xae420064  sw          $v0, 0x64($s2)
    ctx->pc = 0x455ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 2));
label_455ee8:
    // 0x455ee8: 0x8e6300b0  lw          $v1, 0xB0($s3)
    ctx->pc = 0x455ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_455eec:
    // 0x455eec: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x455eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_455ef0:
    // 0x455ef0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x455ef0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_455ef4:
    // 0x455ef4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x455ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_455ef8:
    // 0x455ef8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x455ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_455efc:
    // 0x455efc: 0xae6200b0  sw          $v0, 0xB0($s3)
    ctx->pc = 0x455efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 2));
label_455f00:
    // 0x455f00: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x455f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_455f04:
    // 0x455f04: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x455f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455f08:
    // 0x455f08: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x455f08u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_455f0c:
    // 0x455f0c: 0x45020013  bc1fl       . + 4 + (0x13 << 2)
label_455f10:
    if (ctx->pc == 0x455F10u) {
        ctx->pc = 0x455F10u;
            // 0x455f10: 0x8e470060  lw          $a3, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->pc = 0x455F14u;
        goto label_455f14;
    }
    ctx->pc = 0x455F0Cu;
    {
        const bool branch_taken_0x455f0c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x455f0c) {
            ctx->pc = 0x455F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x455F0Cu;
            // 0x455f10: 0x8e470060  lw          $a3, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x455F5Cu;
            goto label_455f5c;
        }
    }
    ctx->pc = 0x455F14u;
label_455f14:
    // 0x455f14: 0x8e470060  lw          $a3, 0x60($s2)
    ctx->pc = 0x455f14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
label_455f18:
    // 0x455f18: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x455f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_455f1c:
    // 0x455f1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x455f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455f20:
    // 0x455f20: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x455f20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_455f24:
    // 0x455f24: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x455f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
label_455f28:
    // 0x455f28: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x455f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_455f2c:
    // 0x455f2c: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x455f2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_455f30:
    // 0x455f30: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x455f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
label_455f34:
    // 0x455f34: 0xae460060  sw          $a2, 0x60($s2)
    ctx->pc = 0x455f34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 6));
label_455f38:
    // 0x455f38: 0xae65008c  sw          $a1, 0x8C($s3)
    ctx->pc = 0x455f38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 5));
label_455f3c:
    // 0x455f3c: 0xae640070  sw          $a0, 0x70($s3)
    ctx->pc = 0x455f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 4));
label_455f40:
    // 0x455f40: 0xae630078  sw          $v1, 0x78($s3)
    ctx->pc = 0x455f40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 3));
label_455f44:
    // 0x455f44: 0xae620080  sw          $v0, 0x80($s3)
    ctx->pc = 0x455f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 2));
label_455f48:
    // 0x455f48: 0xa2600068  sb          $zero, 0x68($s3)
    ctx->pc = 0x455f48u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 0));
label_455f4c:
    // 0x455f4c: 0xa2650069  sb          $a1, 0x69($s3)
    ctx->pc = 0x455f4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 5));
label_455f50:
    // 0x455f50: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x455f50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
label_455f54:
    // 0x455f54: 0x10000011  b           . + 4 + (0x11 << 2)
label_455f58:
    if (ctx->pc == 0x455F58u) {
        ctx->pc = 0x455F58u;
            // 0x455f58: 0xa265006b  sb          $a1, 0x6B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x455F5Cu;
        goto label_455f5c;
    }
    ctx->pc = 0x455F54u;
    {
        const bool branch_taken_0x455f54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x455F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x455F54u;
            // 0x455f58: 0xa265006b  sb          $a1, 0x6B($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x455f54) {
            ctx->pc = 0x455F9Cu;
            goto label_455f9c;
        }
    }
    ctx->pc = 0x455F5Cu;
label_455f5c:
    // 0x455f5c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x455f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_455f60:
    // 0x455f60: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x455f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_455f64:
    // 0x455f64: 0x3c054120  lui         $a1, 0x4120
    ctx->pc = 0x455f64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16672 << 16));
label_455f68:
    // 0x455f68: 0x3c044416  lui         $a0, 0x4416
    ctx->pc = 0x455f68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17430 << 16));
label_455f6c:
    // 0x455f6c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x455f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_455f70:
    // 0x455f70: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x455f70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_455f74:
    // 0x455f74: 0xae470060  sw          $a3, 0x60($s2)
    ctx->pc = 0x455f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 7));
label_455f78:
    // 0x455f78: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x455f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_455f7c:
    // 0x455f7c: 0xae66008c  sw          $a2, 0x8C($s3)
    ctx->pc = 0x455f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 6));
label_455f80:
    // 0x455f80: 0xae650070  sw          $a1, 0x70($s3)
    ctx->pc = 0x455f80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 5));
label_455f84:
    // 0x455f84: 0xae640078  sw          $a0, 0x78($s3)
    ctx->pc = 0x455f84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 4));
label_455f88:
    // 0x455f88: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x455f88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
label_455f8c:
    // 0x455f8c: 0xa2620068  sb          $v0, 0x68($s3)
    ctx->pc = 0x455f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 104), (uint8_t)GPR_U32(ctx, 2));
label_455f90:
    // 0x455f90: 0xa2600069  sb          $zero, 0x69($s3)
    ctx->pc = 0x455f90u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 105), (uint8_t)GPR_U32(ctx, 0));
label_455f94:
    // 0x455f94: 0xa260006a  sb          $zero, 0x6A($s3)
    ctx->pc = 0x455f94u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 106), (uint8_t)GPR_U32(ctx, 0));
label_455f98:
    // 0x455f98: 0xa266006b  sb          $a2, 0x6B($s3)
    ctx->pc = 0x455f98u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 107), (uint8_t)GPR_U32(ctx, 6));
label_455f9c:
    // 0x455f9c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455fa0:
    // 0x455fa0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x455fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_455fa4:
    // 0x455fa4: 0xc4400410  lwc1        $f0, 0x410($v0)
    ctx->pc = 0x455fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455fa8:
    // 0x455fa8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x455fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_455fac:
    // 0x455fac: 0xc4610414  lwc1        $f1, 0x414($v1)
    ctx->pc = 0x455facu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455fb0:
    // 0x455fb0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455fb4:
    // 0x455fb4: 0xc4420418  lwc1        $f2, 0x418($v0)
    ctx->pc = 0x455fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1048)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_455fb8:
    // 0x455fb8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x455fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_455fbc:
    // 0x455fbc: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x455fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_455fc0:
    // 0x455fc0: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x455fc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_455fc4:
    // 0x455fc4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455fc8:
    // 0x455fc8: 0xc4410420  lwc1        $f1, 0x420($v0)
    ctx->pc = 0x455fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455fcc:
    // 0x455fcc: 0xc460041c  lwc1        $f0, 0x41C($v1)
    ctx->pc = 0x455fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1052)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455fd0:
    // 0x455fd0: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x455fd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_455fd4:
    // 0x455fd4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455fd8:
    // 0x455fd8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x455fd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_455fdc:
    // 0x455fdc: 0xc4400424  lwc1        $f0, 0x424($v0)
    ctx->pc = 0x455fdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455fe0:
    // 0x455fe0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x455fe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_455fe4:
    // 0x455fe4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455fe8:
    // 0x455fe8: 0xc4410428  lwc1        $f1, 0x428($v0)
    ctx->pc = 0x455fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1064)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_455fec:
    // 0x455fec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x455fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_455ff0:
    // 0x455ff0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x455ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_455ff4:
    // 0x455ff4: 0xc440042c  lwc1        $f0, 0x42C($v0)
    ctx->pc = 0x455ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1068)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_455ff8:
    // 0x455ff8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x455ff8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_455ffc:
    // 0x455ffc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x455ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_456000:
    // 0x456000: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x456000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_456004:
    // 0x456004: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x456004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_456008:
    // 0x456008: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x456008u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_45600c:
    // 0x45600c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45600cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_456010:
    // 0x456010: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x456010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_456014:
    // 0x456014: 0xc040180  jal         func_100600
label_456018:
    if (ctx->pc == 0x456018u) {
        ctx->pc = 0x456018u;
            // 0x456018: 0x24500070  addiu       $s0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->pc = 0x45601Cu;
        goto label_45601c;
    }
    ctx->pc = 0x456014u;
    SET_GPR_U32(ctx, 31, 0x45601Cu);
    ctx->pc = 0x456018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456014u;
            // 0x456018: 0x24500070  addiu       $s0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45601Cu; }
        if (ctx->pc != 0x45601Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45601Cu; }
        if (ctx->pc != 0x45601Cu) { return; }
    }
    ctx->pc = 0x45601Cu;
label_45601c:
    // 0x45601c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x45601cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456020:
    // 0x456020: 0x5220000f  beql        $s1, $zero, . + 4 + (0xF << 2)
label_456024:
    if (ctx->pc == 0x456024u) {
        ctx->pc = 0x456024u;
            // 0x456024: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->pc = 0x456028u;
        goto label_456028;
    }
    ctx->pc = 0x456020u;
    {
        const bool branch_taken_0x456020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x456020) {
            ctx->pc = 0x456024u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456020u;
            // 0x456024: 0x3c03461c  lui         $v1, 0x461C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456060u;
            goto label_456060;
        }
    }
    ctx->pc = 0x456028u;
label_456028:
    // 0x456028: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x456028u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_45602c:
    // 0x45602c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x45602cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_456030:
    // 0x456030: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x456030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_456034:
    // 0x456034: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x456034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_456038:
    // 0x456038: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x456038u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_45603c:
    // 0x45603c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x45603cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_456040:
    // 0x456040: 0xc040138  jal         func_1004E0
label_456044:
    if (ctx->pc == 0x456044u) {
        ctx->pc = 0x456044u;
            // 0x456044: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x456048u;
        goto label_456048;
    }
    ctx->pc = 0x456040u;
    SET_GPR_U32(ctx, 31, 0x456048u);
    ctx->pc = 0x456044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456040u;
            // 0x456044: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456048u; }
        if (ctx->pc != 0x456048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456048u; }
        if (ctx->pc != 0x456048u) { return; }
    }
    ctx->pc = 0x456048u;
label_456048:
    // 0x456048: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x456048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_45604c:
    // 0x45604c: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x45604cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_456050:
    // 0x456050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x456050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456054:
    // 0x456054: 0xc04a576  jal         func_1295D8
label_456058:
    if (ctx->pc == 0x456058u) {
        ctx->pc = 0x456058u;
            // 0x456058: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x45605Cu;
        goto label_45605c;
    }
    ctx->pc = 0x456054u;
    SET_GPR_U32(ctx, 31, 0x45605Cu);
    ctx->pc = 0x456058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456054u;
            // 0x456058: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45605Cu; }
        if (ctx->pc != 0x45605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45605Cu; }
        if (ctx->pc != 0x45605Cu) { return; }
    }
    ctx->pc = 0x45605Cu;
label_45605c:
    // 0x45605c: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x45605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_456060:
    // 0x456060: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x456060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_456064:
    // 0x456064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x456064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_456068:
    // 0x456068: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x456068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_45606c:
    // 0x45606c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x45606cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_456070:
    // 0x456070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x456070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456074:
    // 0x456074: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x456074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_456078:
    // 0x456078: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x456078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45607c:
    // 0x45607c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x45607cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_456080:
    // 0x456080: 0xc122cd8  jal         func_48B360
label_456084:
    if (ctx->pc == 0x456084u) {
        ctx->pc = 0x456084u;
            // 0x456084: 0xae7100ec  sw          $s1, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 17));
        ctx->pc = 0x456088u;
        goto label_456088;
    }
    ctx->pc = 0x456080u;
    SET_GPR_U32(ctx, 31, 0x456088u);
    ctx->pc = 0x456084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456080u;
            // 0x456084: 0xae7100ec  sw          $s1, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456088u; }
        if (ctx->pc != 0x456088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456088u; }
        if (ctx->pc != 0x456088u) { return; }
    }
    ctx->pc = 0x456088u;
label_456088:
    // 0x456088: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x456088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_45608c:
    // 0x45608c: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x45608cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_456090:
    // 0x456090: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x456090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_456094:
    // 0x456094: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x456094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_456098:
    // 0x456098: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x456098u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_45609c:
    // 0x45609c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x45609cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4560a0:
    // 0x4560a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4560a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4560a4:
    // 0x4560a4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4560a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4560a8:
    // 0x4560a8: 0xc122cd8  jal         func_48B360
label_4560ac:
    if (ctx->pc == 0x4560ACu) {
        ctx->pc = 0x4560ACu;
            // 0x4560ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4560B0u;
        goto label_4560b0;
    }
    ctx->pc = 0x4560A8u;
    SET_GPR_U32(ctx, 31, 0x4560B0u);
    ctx->pc = 0x4560ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4560A8u;
            // 0x4560ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4560B0u; }
        if (ctx->pc != 0x4560B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4560B0u; }
        if (ctx->pc != 0x4560B0u) { return; }
    }
    ctx->pc = 0x4560B0u;
label_4560b0:
    // 0x4560b0: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x4560b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_4560b4:
    // 0x4560b4: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x4560b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_4560b8:
    // 0x4560b8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4560b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4560bc:
    // 0x4560bc: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x4560bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_4560c0:
    // 0x4560c0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4560c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4560c4:
    // 0x4560c4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x4560c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4560c8:
    // 0x4560c8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4560c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4560cc:
    // 0x4560cc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4560ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4560d0:
    // 0x4560d0: 0xc122cd8  jal         func_48B360
label_4560d4:
    if (ctx->pc == 0x4560D4u) {
        ctx->pc = 0x4560D4u;
            // 0x4560d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4560D8u;
        goto label_4560d8;
    }
    ctx->pc = 0x4560D0u;
    SET_GPR_U32(ctx, 31, 0x4560D8u);
    ctx->pc = 0x4560D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4560D0u;
            // 0x4560d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4560D8u; }
        if (ctx->pc != 0x4560D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4560D8u; }
        if (ctx->pc != 0x4560D8u) { return; }
    }
    ctx->pc = 0x4560D8u;
label_4560d8:
    // 0x4560d8: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x4560d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_4560dc:
    // 0x4560dc: 0x8e6400ec  lw          $a0, 0xEC($s3)
    ctx->pc = 0x4560dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_4560e0:
    // 0x4560e0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x4560e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_4560e4:
    // 0x4560e4: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x4560e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4560e8:
    // 0x4560e8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4560e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4560ec:
    // 0x4560ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4560ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4560f0:
    // 0x4560f0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4560f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4560f4:
    // 0x4560f4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4560f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4560f8:
    // 0x4560f8: 0xc122cd8  jal         func_48B360
label_4560fc:
    if (ctx->pc == 0x4560FCu) {
        ctx->pc = 0x4560FCu;
            // 0x4560fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x456100u;
        goto label_456100;
    }
    ctx->pc = 0x4560F8u;
    SET_GPR_U32(ctx, 31, 0x456100u);
    ctx->pc = 0x4560FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4560F8u;
            // 0x4560fc: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456100u; }
        if (ctx->pc != 0x456100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456100u; }
        if (ctx->pc != 0x456100u) { return; }
    }
    ctx->pc = 0x456100u;
label_456100:
    // 0x456100: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x456100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_456104:
    // 0x456104: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x456104u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_456108:
    // 0x456108: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x456108u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_45610c:
    // 0x45610c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x45610cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456110:
    // 0x456110: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456114:
    // 0x456114: 0x3e00008  jr          $ra
label_456118:
    if (ctx->pc == 0x456118u) {
        ctx->pc = 0x456118u;
            // 0x456118: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x45611Cu;
        goto label_45611c;
    }
    ctx->pc = 0x456114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456114u;
            // 0x456118: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45611Cu;
label_45611c:
    // 0x45611c: 0x0  nop
    ctx->pc = 0x45611cu;
    // NOP
label_456120:
    // 0x456120: 0x8c86003c  lw          $a2, 0x3C($a0)
    ctx->pc = 0x456120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_456124:
    // 0x456124: 0x3c05447a  lui         $a1, 0x447A
    ctx->pc = 0x456124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17530 << 16));
label_456128:
    // 0x456128: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x456128u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_45612c:
    // 0x45612c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x45612cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_456130:
    // 0x456130: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x456130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_456134:
    // 0x456134: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x456134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_456138:
    // 0x456138: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x456138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45613c:
    // 0x45613c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x45613cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_456140:
    // 0x456140: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x456140u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456144:
    // 0x456144: 0x24a55f60  addiu       $a1, $a1, 0x5F60
    ctx->pc = 0x456144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24416));
label_456148:
    // 0x456148: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x456148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_45614c:
    // 0x45614c: 0x46000864  .word       0x46000864                   # cvt.w.s     $f1, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45614cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_456150:
    // 0x456150: 0x3c0642b4  lui         $a2, 0x42B4
    ctx->pc = 0x456150u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17076 << 16));
label_456154:
    // 0x456154: 0x44080800  mfc1        $t0, $f1
    ctx->pc = 0x456154u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
label_456158:
    // 0x456158: 0x0  nop
    ctx->pc = 0x456158u;
    // NOP
label_45615c:
    // 0x45615c: 0xac880104  sw          $t0, 0x104($a0)
    ctx->pc = 0x45615cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 8));
label_456160:
    // 0x456160: 0x8c88003c  lw          $t0, 0x3C($a0)
    ctx->pc = 0x456160u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_456164:
    // 0x456164: 0xc5010010  lwc1        $f1, 0x10($t0)
    ctx->pc = 0x456164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456168:
    // 0x456168: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x456168u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_45616c:
    // 0x45616c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x45616cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_456170:
    // 0x456170: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x456170u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_456174:
    // 0x456174: 0xa08700cc  sb          $a3, 0xCC($a0)
    ctx->pc = 0x456174u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 204), (uint8_t)GPR_U32(ctx, 7));
label_456178:
    // 0x456178: 0xac8600c4  sw          $a2, 0xC4($a0)
    ctx->pc = 0x456178u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 6));
label_45617c:
    // 0x45617c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x45617cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_456180:
    // 0x456180: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x456180u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_456184:
    // 0x456184: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x456184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_456188:
    // 0x456188: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x456188u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_45618c:
    // 0x45618c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x45618cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_456190:
    // 0x456190: 0x3e00008  jr          $ra
label_456194:
    if (ctx->pc == 0x456194u) {
        ctx->pc = 0x456194u;
            // 0x456194: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->pc = 0x456198u;
        goto label_456198;
    }
    ctx->pc = 0x456190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456190u;
            // 0x456194: 0xac8300c8  sw          $v1, 0xC8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456198u;
label_456198:
    // 0x456198: 0x0  nop
    ctx->pc = 0x456198u;
    // NOP
label_45619c:
    // 0x45619c: 0x0  nop
    ctx->pc = 0x45619cu;
    // NOP
label_4561a0:
    // 0x4561a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4561a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4561a4:
    // 0x4561a4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4561a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4561a8:
    // 0x4561a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4561a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4561ac:
    // 0x4561ac: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4561acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4561b0:
    // 0x4561b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4561b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4561b4:
    // 0x4561b4: 0x24c6dff0  addiu       $a2, $a2, -0x2010
    ctx->pc = 0x4561b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959088));
label_4561b8:
    // 0x4561b8: 0xc4a202c0  lwc1        $f2, 0x2C0($a1)
    ctx->pc = 0x4561b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4561bc:
    // 0x4561bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4561bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4561c0:
    // 0x4561c0: 0xc4a102c4  lwc1        $f1, 0x2C4($a1)
    ctx->pc = 0x4561c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4561c4:
    // 0x4561c4: 0xc4a002c8  lwc1        $f0, 0x2C8($a1)
    ctx->pc = 0x4561c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4561c8:
    // 0x4561c8: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x4561c8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4561cc:
    // 0x4561cc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4561ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4561d0:
    // 0x4561d0: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x4561d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4561d4:
    // 0x4561d4: 0xc4a20300  lwc1        $f2, 0x300($a1)
    ctx->pc = 0x4561d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4561d8:
    // 0x4561d8: 0xc4a10304  lwc1        $f1, 0x304($a1)
    ctx->pc = 0x4561d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4561dc:
    // 0x4561dc: 0xc4a00308  lwc1        $f0, 0x308($a1)
    ctx->pc = 0x4561dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4561e0:
    // 0x4561e0: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x4561e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4561e4:
    // 0x4561e4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x4561e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4561e8:
    // 0x4561e8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4561e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4561ec:
    // 0x4561ec: 0xc04cafc  jal         func_132BF0
label_4561f0:
    if (ctx->pc == 0x4561F0u) {
        ctx->pc = 0x4561F0u;
            // 0x4561f0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4561F4u;
        goto label_4561f4;
    }
    ctx->pc = 0x4561ECu;
    SET_GPR_U32(ctx, 31, 0x4561F4u);
    ctx->pc = 0x4561F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4561ECu;
            // 0x4561f0: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4561F4u; }
        if (ctx->pc != 0x4561F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4561F4u; }
        if (ctx->pc != 0x4561F4u) { return; }
    }
    ctx->pc = 0x4561F4u;
label_4561f4:
    // 0x4561f4: 0xc040180  jal         func_100600
label_4561f8:
    if (ctx->pc == 0x4561F8u) {
        ctx->pc = 0x4561F8u;
            // 0x4561f8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x4561FCu;
        goto label_4561fc;
    }
    ctx->pc = 0x4561F4u;
    SET_GPR_U32(ctx, 31, 0x4561FCu);
    ctx->pc = 0x4561F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4561F4u;
            // 0x4561f8: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4561FCu; }
        if (ctx->pc != 0x4561FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4561FCu; }
        if (ctx->pc != 0x4561FCu) { return; }
    }
    ctx->pc = 0x4561FCu;
label_4561fc:
    // 0x4561fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4561fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456200:
    // 0x456200: 0x5080002a  beql        $a0, $zero, . + 4 + (0x2A << 2)
label_456204:
    if (ctx->pc == 0x456204u) {
        ctx->pc = 0x456204u;
            // 0x456204: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x456208u;
        goto label_456208;
    }
    ctx->pc = 0x456200u;
    {
        const bool branch_taken_0x456200 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x456200) {
            ctx->pc = 0x456204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456200u;
            // 0x456204: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4562ACu;
            goto label_4562ac;
        }
    }
    ctx->pc = 0x456208u;
label_456208:
    // 0x456208: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x456208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_45620c:
    // 0x45620c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x45620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_456210:
    // 0x456210: 0xc441e030  lwc1        $f1, -0x1FD0($v0)
    ctx->pc = 0x456210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456214:
    // 0x456214: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x456214u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456218:
    // 0x456218: 0x0  nop
    ctx->pc = 0x456218u;
    // NOP
label_45621c:
    // 0x45621c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45621cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456220:
    // 0x456220: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_456224:
    if (ctx->pc == 0x456224u) {
        ctx->pc = 0x456224u;
            // 0x456224: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x456228u;
        goto label_456228;
    }
    ctx->pc = 0x456220u;
    {
        const bool branch_taken_0x456220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x456220) {
            ctx->pc = 0x456224u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456220u;
            // 0x456224: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x456238u;
            goto label_456238;
        }
    }
    ctx->pc = 0x456228u;
label_456228:
    // 0x456228: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x456228u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45622c:
    // 0x45622c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x45622cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_456230:
    // 0x456230: 0x10000006  b           . + 4 + (0x6 << 2)
label_456234:
    if (ctx->pc == 0x456234u) {
        ctx->pc = 0x456238u;
        goto label_456238;
    }
    ctx->pc = 0x456230u;
    {
        const bool branch_taken_0x456230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456230) {
            ctx->pc = 0x45624Cu;
            goto label_45624c;
        }
    }
    ctx->pc = 0x456238u;
label_456238:
    // 0x456238: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x456238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45623c:
    // 0x45623c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45623cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_456240:
    // 0x456240: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x456240u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_456244:
    // 0x456244: 0x0  nop
    ctx->pc = 0x456244u;
    // NOP
label_456248:
    // 0x456248: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x456248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_45624c:
    // 0x45624c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x45624cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_456250:
    // 0x456250: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x456250u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_456254:
    // 0x456254: 0x2442e000  addiu       $v0, $v0, -0x2000
    ctx->pc = 0x456254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959104));
label_456258:
    // 0x456258: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x456258u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_45625c:
    // 0x45625c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x45625cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_456260:
    // 0x456260: 0x26070890  addiu       $a3, $s0, 0x890
    ctx->pc = 0x456260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_456264:
    // 0x456264: 0x3c02c47a  lui         $v0, 0xC47A
    ctx->pc = 0x456264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50298 << 16));
label_456268:
    // 0x456268: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x456268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_45626c:
    // 0x45626c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x45626cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_456270:
    // 0x456270: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x456270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_456274:
    // 0x456274: 0x3c02bf33  lui         $v0, 0xBF33
    ctx->pc = 0x456274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48947 << 16));
label_456278:
    // 0x456278: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x456278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_45627c:
    // 0x45627c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x45627cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_456280:
    // 0x456280: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x456280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_456284:
    // 0x456284: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x456284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_456288:
    // 0x456288: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x456288u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_45628c:
    // 0x45628c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x45628cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_456290:
    // 0x456290: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x456290u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456294:
    // 0x456294: 0x2529e010  addiu       $t1, $t1, -0x1FF0
    ctx->pc = 0x456294u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959120));
label_456298:
    // 0x456298: 0x254ae020  addiu       $t2, $t2, -0x1FE0
    ctx->pc = 0x456298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959136));
label_45629c:
    // 0x45629c: 0x27ab0030  addiu       $t3, $sp, 0x30
    ctx->pc = 0x45629cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4562a0:
    // 0x4562a0: 0xc0db488  jal         func_36D220
label_4562a4:
    if (ctx->pc == 0x4562A4u) {
        ctx->pc = 0x4562A4u;
            // 0x4562a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x4562A8u;
        goto label_4562a8;
    }
    ctx->pc = 0x4562A0u;
    SET_GPR_U32(ctx, 31, 0x4562A8u);
    ctx->pc = 0x4562A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4562A0u;
            // 0x4562a4: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4562A8u; }
        if (ctx->pc != 0x4562A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4562A8u; }
        if (ctx->pc != 0x4562A8u) { return; }
    }
    ctx->pc = 0x4562A8u;
label_4562a8:
    // 0x4562a8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4562a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4562ac:
    // 0x4562ac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4562acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4562b0:
    // 0x4562b0: 0x3e00008  jr          $ra
label_4562b4:
    if (ctx->pc == 0x4562B4u) {
        ctx->pc = 0x4562B4u;
            // 0x4562b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4562B8u;
        goto label_4562b8;
    }
    ctx->pc = 0x4562B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4562B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4562B0u;
            // 0x4562b4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4562B8u;
label_4562b8:
    // 0x4562b8: 0x0  nop
    ctx->pc = 0x4562b8u;
    // NOP
label_4562bc:
    // 0x4562bc: 0x0  nop
    ctx->pc = 0x4562bcu;
    // NOP
label_4562c0:
    // 0x4562c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x4562c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_4562c4:
    // 0x4562c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4562c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4562c8:
    // 0x4562c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4562c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4562cc:
    // 0x4562cc: 0x9083004d  lbu         $v1, 0x4D($a0)
    ctx->pc = 0x4562ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 77)));
label_4562d0:
    // 0x4562d0: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x4562d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_4562d4:
    // 0x4562d4: 0x10600049  beqz        $v1, . + 4 + (0x49 << 2)
label_4562d8:
    if (ctx->pc == 0x4562D8u) {
        ctx->pc = 0x4562D8u;
            // 0x4562d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4562DCu;
        goto label_4562dc;
    }
    ctx->pc = 0x4562D4u;
    {
        const bool branch_taken_0x4562d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4562D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4562D4u;
            // 0x4562d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4562d4) {
            ctx->pc = 0x4563FCu;
            goto label_4563fc;
        }
    }
    ctx->pc = 0x4562DCu;
label_4562dc:
    // 0x4562dc: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x4562dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4562e0:
    // 0x4562e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x4562e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4562e4:
    // 0x4562e4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x4562e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_4562e8:
    // 0x4562e8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x4562e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4562ec:
    // 0x4562ec: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x4562ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_4562f0:
    // 0x4562f0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x4562f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4562f4:
    // 0x4562f4: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x4562f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_4562f8:
    // 0x4562f8: 0xc04f278  jal         func_13C9E0
label_4562fc:
    if (ctx->pc == 0x4562FCu) {
        ctx->pc = 0x4562FCu;
            // 0x4562fc: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x456300u;
        goto label_456300;
    }
    ctx->pc = 0x4562F8u;
    SET_GPR_U32(ctx, 31, 0x456300u);
    ctx->pc = 0x4562FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4562F8u;
            // 0x4562fc: 0x24c50020  addiu       $a1, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456300u; }
        if (ctx->pc != 0x456300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456300u; }
        if (ctx->pc != 0x456300u) { return; }
    }
    ctx->pc = 0x456300u;
label_456300:
    // 0x456300: 0xc6020188  lwc1        $f2, 0x188($s0)
    ctx->pc = 0x456300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_456304:
    // 0x456304: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x456304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
label_456308:
    // 0x456308: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x456308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45630c:
    // 0x45630c: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x45630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_456310:
    // 0x456310: 0xc6000180  lwc1        $f0, 0x180($s0)
    ctx->pc = 0x456310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456314:
    // 0x456314: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x456314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_456318:
    // 0x456318: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x456318u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_45631c:
    // 0x45631c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x45631cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456320:
    // 0x456320: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x456320u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_456324:
    // 0x456324: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x456324u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_456328:
    // 0x456328: 0xc04cb6c  jal         func_132DB0
label_45632c:
    if (ctx->pc == 0x45632Cu) {
        ctx->pc = 0x45632Cu;
            // 0x45632c: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->pc = 0x456330u;
        goto label_456330;
    }
    ctx->pc = 0x456328u;
    SET_GPR_U32(ctx, 31, 0x456330u);
    ctx->pc = 0x45632Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456328u;
            // 0x45632c: 0xe7a20078  swc1        $f2, 0x78($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DB0u;
    if (runtime->hasFunction(0x132DB0u)) {
        auto targetFn = runtime->lookupFunction(0x132DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456330u; }
        if (ctx->pc != 0x456330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132DB0_0x132db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456330u; }
        if (ctx->pc != 0x456330u) { return; }
    }
    ctx->pc = 0x456330u;
label_456330:
    // 0x456330: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x456330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_456334:
    // 0x456334: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x456334u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_456338:
    // 0x456338: 0x24c6dfa8  addiu       $a2, $a2, -0x2058
    ctx->pc = 0x456338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959016));
label_45633c:
    // 0x45633c: 0xc04cafc  jal         func_132BF0
label_456340:
    if (ctx->pc == 0x456340u) {
        ctx->pc = 0x456340u;
            // 0x456340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456344u;
        goto label_456344;
    }
    ctx->pc = 0x45633Cu;
    SET_GPR_U32(ctx, 31, 0x456344u);
    ctx->pc = 0x456340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45633Cu;
            // 0x456340: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132BF0u;
    if (runtime->hasFunction(0x132BF0u)) {
        auto targetFn = runtime->lookupFunction(0x132BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456344u; }
        if (ctx->pc != 0x456344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132BF0_0x132bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456344u; }
        if (ctx->pc != 0x456344u) { return; }
    }
    ctx->pc = 0x456344u;
label_456344:
    // 0x456344: 0xc040180  jal         func_100600
label_456348:
    if (ctx->pc == 0x456348u) {
        ctx->pc = 0x456348u;
            // 0x456348: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->pc = 0x45634Cu;
        goto label_45634c;
    }
    ctx->pc = 0x456344u;
    SET_GPR_U32(ctx, 31, 0x45634Cu);
    ctx->pc = 0x456348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456344u;
            // 0x456348: 0x24040074  addiu       $a0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45634Cu; }
        if (ctx->pc != 0x45634Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45634Cu; }
        if (ctx->pc != 0x45634Cu) { return; }
    }
    ctx->pc = 0x45634Cu;
label_45634c:
    // 0x45634c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x45634cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_456350:
    // 0x456350: 0x5080002b  beql        $a0, $zero, . + 4 + (0x2B << 2)
label_456354:
    if (ctx->pc == 0x456354u) {
        ctx->pc = 0x456354u;
            // 0x456354: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x456358u;
        goto label_456358;
    }
    ctx->pc = 0x456350u;
    {
        const bool branch_taken_0x456350 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x456350) {
            ctx->pc = 0x456354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456350u;
            // 0x456354: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456400u;
            goto label_456400;
        }
    }
    ctx->pc = 0x456358u;
label_456358:
    // 0x456358: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x456358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_45635c:
    // 0x45635c: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x45635cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_456360:
    // 0x456360: 0xc441dfe8  lwc1        $f1, -0x2018($v0)
    ctx->pc = 0x456360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294959080)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456364:
    // 0x456364: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x456364u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456368:
    // 0x456368: 0x0  nop
    ctx->pc = 0x456368u;
    // NOP
label_45636c:
    // 0x45636c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x45636cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456370:
    // 0x456370: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_456374:
    if (ctx->pc == 0x456374u) {
        ctx->pc = 0x456374u;
            // 0x456374: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x456378u;
        goto label_456378;
    }
    ctx->pc = 0x456370u;
    {
        const bool branch_taken_0x456370 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x456370) {
            ctx->pc = 0x456374u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456370u;
            // 0x456374: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x456388u;
            goto label_456388;
        }
    }
    ctx->pc = 0x456378u;
label_456378:
    // 0x456378: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x456378u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_45637c:
    // 0x45637c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x45637cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_456380:
    // 0x456380: 0x10000006  b           . + 4 + (0x6 << 2)
label_456384:
    if (ctx->pc == 0x456384u) {
        ctx->pc = 0x456388u;
        goto label_456388;
    }
    ctx->pc = 0x456380u;
    {
        const bool branch_taken_0x456380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456380) {
            ctx->pc = 0x45639Cu;
            goto label_45639c;
        }
    }
    ctx->pc = 0x456388u;
label_456388:
    // 0x456388: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x456388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_45638c:
    // 0x45638c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x45638cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_456390:
    // 0x456390: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x456390u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_456394:
    // 0x456394: 0x0  nop
    ctx->pc = 0x456394u;
    // NOP
label_456398:
    // 0x456398: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x456398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_45639c:
    // 0x45639c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45639cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4563a0:
    // 0x4563a0: 0x3c023f40  lui         $v0, 0x3F40
    ctx->pc = 0x4563a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16192 << 16));
label_4563a4:
    // 0x4563a4: 0x2463dfb8  addiu       $v1, $v1, -0x2048
    ctx->pc = 0x4563a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959032));
label_4563a8:
    // 0x4563a8: 0x3c090066  lui         $t1, 0x66
    ctx->pc = 0x4563a8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)102 << 16));
label_4563ac:
    // 0x4563ac: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4563acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4563b0:
    // 0x4563b0: 0xffa30000  sd          $v1, 0x0($sp)
    ctx->pc = 0x4563b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 3));
label_4563b4:
    // 0x4563b4: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x4563b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
label_4563b8:
    // 0x4563b8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x4563b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_4563bc:
    // 0x4563bc: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x4563bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4563c0:
    // 0x4563c0: 0x3c0a0066  lui         $t2, 0x66
    ctx->pc = 0x4563c0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)102 << 16));
label_4563c4:
    // 0x4563c4: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x4563c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_4563c8:
    // 0x4563c8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4563c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4563cc:
    // 0x4563cc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x4563ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_4563d0:
    // 0x4563d0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4563d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4563d4:
    // 0x4563d4: 0xc7ac0084  lwc1        $f12, 0x84($sp)
    ctx->pc = 0x4563d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4563d8:
    // 0x4563d8: 0x27a70030  addiu       $a3, $sp, 0x30
    ctx->pc = 0x4563d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_4563dc:
    // 0x4563dc: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x4563dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4563e0:
    // 0x4563e0: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x4563e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4563e4:
    // 0x4563e4: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x4563e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_4563e8:
    // 0x4563e8: 0x2529dfc8  addiu       $t1, $t1, -0x2038
    ctx->pc = 0x4563e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959048));
label_4563ec:
    // 0x4563ec: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x4563ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_4563f0:
    // 0x4563f0: 0x254adfd8  addiu       $t2, $t2, -0x2028
    ctx->pc = 0x4563f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294959064));
label_4563f4:
    // 0x4563f4: 0xc0db488  jal         func_36D220
label_4563f8:
    if (ctx->pc == 0x4563F8u) {
        ctx->pc = 0x4563F8u;
            // 0x4563f8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x4563FCu;
        goto label_4563fc;
    }
    ctx->pc = 0x4563F4u;
    SET_GPR_U32(ctx, 31, 0x4563FCu);
    ctx->pc = 0x4563F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4563F4u;
            // 0x4563f8: 0x27ab0070  addiu       $t3, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D220u;
    if (runtime->hasFunction(0x36D220u)) {
        auto targetFn = runtime->lookupFunction(0x36D220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4563FCu; }
        if (ctx->pc != 0x4563FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D220_0x36d220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4563FCu; }
        if (ctx->pc != 0x4563FCu) { return; }
    }
    ctx->pc = 0x4563FCu;
label_4563fc:
    // 0x4563fc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4563fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_456400:
    // 0x456400: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x456400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456404:
    // 0x456404: 0x3e00008  jr          $ra
label_456408:
    if (ctx->pc == 0x456408u) {
        ctx->pc = 0x456408u;
            // 0x456408: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45640Cu;
        goto label_45640c;
    }
    ctx->pc = 0x456404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456404u;
            // 0x456408: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45640Cu;
label_45640c:
    // 0x45640c: 0x0  nop
    ctx->pc = 0x45640cu;
    // NOP
label_456410:
    // 0x456410: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_456414:
    // 0x456414: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x456414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456418:
    // 0x456418: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_45641c:
    // 0x45641c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x45641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456420:
    // 0x456420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x456420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456424:
    // 0x456424: 0xc0ba938  jal         func_2EA4E0
label_456428:
    if (ctx->pc == 0x456428u) {
        ctx->pc = 0x456428u;
            // 0x456428: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x45642Cu;
        goto label_45642c;
    }
    ctx->pc = 0x456424u;
    SET_GPR_U32(ctx, 31, 0x45642Cu);
    ctx->pc = 0x456428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456424u;
            // 0x456428: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EA4E0u;
    if (runtime->hasFunction(0x2EA4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2EA4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45642Cu; }
        if (ctx->pc != 0x45642Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EA4E0_0x2ea4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45642Cu; }
        if (ctx->pc != 0x45642Cu) { return; }
    }
    ctx->pc = 0x45642Cu;
label_45642c:
    // 0x45642c: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x45642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_456430:
    // 0x456430: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_456434:
    if (ctx->pc == 0x456434u) {
        ctx->pc = 0x456434u;
            // 0x456434: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x456438u;
        goto label_456438;
    }
    ctx->pc = 0x456430u;
    {
        const bool branch_taken_0x456430 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x456430) {
            ctx->pc = 0x456434u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456430u;
            // 0x456434: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456450u;
            goto label_456450;
        }
    }
    ctx->pc = 0x456438u;
label_456438:
    // 0x456438: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x456438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_45643c:
    // 0x45643c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x45643cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_456440:
    // 0x456440: 0x320f809  jalr        $t9
label_456444:
    if (ctx->pc == 0x456444u) {
        ctx->pc = 0x456444u;
            // 0x456444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456448u;
        goto label_456448;
    }
    ctx->pc = 0x456440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x456448u);
        ctx->pc = 0x456444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456440u;
            // 0x456444: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x456448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x456448u; }
            if (ctx->pc != 0x456448u) { return; }
        }
        }
    }
    ctx->pc = 0x456448u;
label_456448:
    // 0x456448: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x456448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_45644c:
    // 0x45644c: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x45644cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_456450:
    // 0x456450: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x456450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_456454:
    // 0x456454: 0xc122d2c  jal         func_48B4B0
label_456458:
    if (ctx->pc == 0x456458u) {
        ctx->pc = 0x456458u;
            // 0x456458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45645Cu;
        goto label_45645c;
    }
    ctx->pc = 0x456454u;
    SET_GPR_U32(ctx, 31, 0x45645Cu);
    ctx->pc = 0x456458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456454u;
            // 0x456458: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45645Cu; }
        if (ctx->pc != 0x45645Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45645Cu; }
        if (ctx->pc != 0x45645Cu) { return; }
    }
    ctx->pc = 0x45645Cu;
label_45645c:
    // 0x45645c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x45645cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456460:
    // 0x456460: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456460u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456464:
    // 0x456464: 0x3e00008  jr          $ra
label_456468:
    if (ctx->pc == 0x456468u) {
        ctx->pc = 0x456468u;
            // 0x456468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x45646Cu;
        goto label_45646c;
    }
    ctx->pc = 0x456464u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456464u;
            // 0x456468: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x45646Cu;
label_45646c:
    // 0x45646c: 0x0  nop
    ctx->pc = 0x45646cu;
    // NOP
label_456470:
    // 0x456470: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_456474:
    // 0x456474: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456478:
    // 0x456478: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456478u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_45647c:
    // 0x45647c: 0x90830109  lbu         $v1, 0x109($a0)
    ctx->pc = 0x45647cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 265)));
label_456480:
    // 0x456480: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_456484:
    if (ctx->pc == 0x456484u) {
        ctx->pc = 0x456484u;
            // 0x456484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456488u;
        goto label_456488;
    }
    ctx->pc = 0x456480u;
    {
        const bool branch_taken_0x456480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456480u;
            // 0x456484: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456480) {
            ctx->pc = 0x4564C4u;
            goto label_4564c4;
        }
    }
    ctx->pc = 0x456488u;
label_456488:
    // 0x456488: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x456488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45648c:
    // 0x45648c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x45648cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_456490:
    // 0x456490: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x456490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_456494:
    // 0x456494: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x456494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_456498:
    // 0x456498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45649c:
    // 0x45649c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45649cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4564a0:
    // 0x4564a0: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x4564a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4564a4:
    // 0x4564a4: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x4564a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_4564a8:
    // 0x4564a8: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x4564a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4564ac:
    // 0x4564ac: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x4564acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_4564b0:
    // 0x4564b0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4564b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4564b4:
    // 0x4564b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4564b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4564b8:
    // 0x4564b8: 0xc08bff0  jal         func_22FFC0
label_4564bc:
    if (ctx->pc == 0x4564BCu) {
        ctx->pc = 0x4564BCu;
            // 0x4564bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4564C0u;
        goto label_4564c0;
    }
    ctx->pc = 0x4564B8u;
    SET_GPR_U32(ctx, 31, 0x4564C0u);
    ctx->pc = 0x4564BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4564B8u;
            // 0x4564bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4564C0u; }
        if (ctx->pc != 0x4564C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4564C0u; }
        if (ctx->pc != 0x4564C0u) { return; }
    }
    ctx->pc = 0x4564C0u;
label_4564c0:
    // 0x4564c0: 0xa2000109  sb          $zero, 0x109($s0)
    ctx->pc = 0x4564c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 265), (uint8_t)GPR_U32(ctx, 0));
label_4564c4:
    // 0x4564c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4564c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4564c8:
    // 0x4564c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4564c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4564cc:
    // 0x4564cc: 0x3e00008  jr          $ra
label_4564d0:
    if (ctx->pc == 0x4564D0u) {
        ctx->pc = 0x4564D0u;
            // 0x4564d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4564D4u;
        goto label_4564d4;
    }
    ctx->pc = 0x4564CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4564D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4564CCu;
            // 0x4564d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4564D4u;
label_4564d4:
    // 0x4564d4: 0x0  nop
    ctx->pc = 0x4564d4u;
    // NOP
label_4564d8:
    // 0x4564d8: 0x0  nop
    ctx->pc = 0x4564d8u;
    // NOP
label_4564dc:
    // 0x4564dc: 0x0  nop
    ctx->pc = 0x4564dcu;
    // NOP
label_4564e0:
    // 0x4564e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4564e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4564e4:
    // 0x4564e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4564e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4564e8:
    // 0x4564e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4564e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4564ec:
    // 0x4564ec: 0x90830109  lbu         $v1, 0x109($a0)
    ctx->pc = 0x4564ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 265)));
label_4564f0:
    // 0x4564f0: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
label_4564f4:
    if (ctx->pc == 0x4564F4u) {
        ctx->pc = 0x4564F4u;
            // 0x4564f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4564F8u;
        goto label_4564f8;
    }
    ctx->pc = 0x4564F0u;
    {
        const bool branch_taken_0x4564f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4564F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4564F0u;
            // 0x4564f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4564f0) {
            ctx->pc = 0x456584u;
            goto label_456584;
        }
    }
    ctx->pc = 0x4564F8u;
label_4564f8:
    // 0x4564f8: 0x8e0500a0  lw          $a1, 0xA0($s0)
    ctx->pc = 0x4564f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4564fc:
    // 0x4564fc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4564fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_456500:
    // 0x456500: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x456500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_456504:
    // 0x456504: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
label_456508:
    if (ctx->pc == 0x456508u) {
        ctx->pc = 0x45650Cu;
        goto label_45650c;
    }
    ctx->pc = 0x456504u;
    {
        const bool branch_taken_0x456504 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x456504) {
            ctx->pc = 0x456584u;
            goto label_456584;
        }
    }
    ctx->pc = 0x45650Cu;
label_45650c:
    // 0x45650c: 0xc4a10028  lwc1        $f1, 0x28($a1)
    ctx->pc = 0x45650cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456510:
    // 0x456510: 0x3c03bf80  lui         $v1, 0xBF80
    ctx->pc = 0x456510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49024 << 16));
label_456514:
    // 0x456514: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x456514u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456518:
    // 0x456518: 0x0  nop
    ctx->pc = 0x456518u;
    // NOP
label_45651c:
    // 0x45651c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x45651cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456520:
    // 0x456520: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_456524:
    if (ctx->pc == 0x456524u) {
        ctx->pc = 0x456524u;
            // 0x456524: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x456528u;
        goto label_456528;
    }
    ctx->pc = 0x456520u;
    {
        const bool branch_taken_0x456520 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x456524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456520u;
            // 0x456524: 0x64040001  daddiu      $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x456520) {
            ctx->pc = 0x456540u;
            goto label_456540;
        }
    }
    ctx->pc = 0x456528u;
label_456528:
    // 0x456528: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x456528u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_45652c:
    // 0x45652c: 0x0  nop
    ctx->pc = 0x45652cu;
    // NOP
label_456530:
    // 0x456530: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x456530u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456534:
    // 0x456534: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_456538:
    if (ctx->pc == 0x456538u) {
        ctx->pc = 0x45653Cu;
        goto label_45653c;
    }
    ctx->pc = 0x456534u;
    {
        const bool branch_taken_0x456534 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x456534) {
            ctx->pc = 0x456540u;
            goto label_456540;
        }
    }
    ctx->pc = 0x45653Cu;
label_45653c:
    // 0x45653c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x45653cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456540:
    // 0x456540: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_456544:
    if (ctx->pc == 0x456544u) {
        ctx->pc = 0x456548u;
        goto label_456548;
    }
    ctx->pc = 0x456540u;
    {
        const bool branch_taken_0x456540 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x456540) {
            ctx->pc = 0x456584u;
            goto label_456584;
        }
    }
    ctx->pc = 0x456548u;
label_456548:
    // 0x456548: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x456548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_45654c:
    // 0x45654c: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x45654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_456550:
    // 0x456550: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x456550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_456554:
    // 0x456554: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x456554u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_456558:
    // 0x456558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_45655c:
    // 0x45655c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x45655cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456560:
    // 0x456560: 0x8ca8002c  lw          $t0, 0x2C($a1)
    ctx->pc = 0x456560u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_456564:
    // 0x456564: 0x1042024  and         $a0, $t0, $a0
    ctx->pc = 0x456564u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & GPR_U64(ctx, 4));
label_456568:
    // 0x456568: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x456568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_45656c:
    // 0x45656c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x45656cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_456570:
    // 0x456570: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x456570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_456574:
    // 0x456574: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x456574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_456578:
    // 0x456578: 0xc08bff0  jal         func_22FFC0
label_45657c:
    if (ctx->pc == 0x45657Cu) {
        ctx->pc = 0x45657Cu;
            // 0x45657c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456580u;
        goto label_456580;
    }
    ctx->pc = 0x456578u;
    SET_GPR_U32(ctx, 31, 0x456580u);
    ctx->pc = 0x45657Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456578u;
            // 0x45657c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456580u; }
        if (ctx->pc != 0x456580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456580u; }
        if (ctx->pc != 0x456580u) { return; }
    }
    ctx->pc = 0x456580u;
label_456580:
    // 0x456580: 0xa2000109  sb          $zero, 0x109($s0)
    ctx->pc = 0x456580u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 265), (uint8_t)GPR_U32(ctx, 0));
label_456584:
    // 0x456584: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x456584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_456588:
    // 0x456588: 0x8c640e80  lw          $a0, 0xE80($v1)
    ctx->pc = 0x456588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_45658c:
    // 0x45658c: 0x8c830788  lw          $v1, 0x788($a0)
    ctx->pc = 0x45658cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1928)));
label_456590:
    // 0x456590: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x456590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_456594:
    // 0x456594: 0x50200023  beql        $at, $zero, . + 4 + (0x23 << 2)
label_456598:
    if (ctx->pc == 0x456598u) {
        ctx->pc = 0x456598u;
            // 0x456598: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x45659Cu;
        goto label_45659c;
    }
    ctx->pc = 0x456594u;
    {
        const bool branch_taken_0x456594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456594) {
            ctx->pc = 0x456598u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456594u;
            // 0x456598: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456624u;
            goto label_456624;
        }
    }
    ctx->pc = 0x45659Cu;
label_45659c:
    // 0x45659c: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x45659cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_4565a0:
    // 0x4565a0: 0x1460001f  bnez        $v1, . + 4 + (0x1F << 2)
label_4565a4:
    if (ctx->pc == 0x4565A4u) {
        ctx->pc = 0x4565A8u;
        goto label_4565a8;
    }
    ctx->pc = 0x4565A0u;
    {
        const bool branch_taken_0x4565a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4565a0) {
            ctx->pc = 0x456620u;
            goto label_456620;
        }
    }
    ctx->pc = 0x4565A8u;
label_4565a8:
    // 0x4565a8: 0x8c840968  lw          $a0, 0x968($a0)
    ctx->pc = 0x4565a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_4565ac:
    // 0x4565ac: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x4565acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_4565b0:
    // 0x4565b0: 0x10830011  beq         $a0, $v1, . + 4 + (0x11 << 2)
label_4565b4:
    if (ctx->pc == 0x4565B4u) {
        ctx->pc = 0x4565B8u;
        goto label_4565b8;
    }
    ctx->pc = 0x4565B0u;
    {
        const bool branch_taken_0x4565b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4565b0) {
            ctx->pc = 0x4565F8u;
            goto label_4565f8;
        }
    }
    ctx->pc = 0x4565B8u;
label_4565b8:
    // 0x4565b8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x4565b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4565bc:
    // 0x4565bc: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_4565c0:
    if (ctx->pc == 0x4565C0u) {
        ctx->pc = 0x4565C4u;
        goto label_4565c4;
    }
    ctx->pc = 0x4565BCu;
    {
        const bool branch_taken_0x4565bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4565bc) {
            ctx->pc = 0x4565CCu;
            goto label_4565cc;
        }
    }
    ctx->pc = 0x4565C4u;
label_4565c4:
    // 0x4565c4: 0x10000016  b           . + 4 + (0x16 << 2)
label_4565c8:
    if (ctx->pc == 0x4565C8u) {
        ctx->pc = 0x4565CCu;
        goto label_4565cc;
    }
    ctx->pc = 0x4565C4u;
    {
        const bool branch_taken_0x4565c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4565c4) {
            ctx->pc = 0x456620u;
            goto label_456620;
        }
    }
    ctx->pc = 0x4565CCu;
label_4565cc:
    // 0x4565cc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4565ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4565d0:
    // 0x4565d0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4565d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4565d4:
    // 0x4565d4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4565d4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4565d8:
    // 0x4565d8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x4565d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_4565dc:
    // 0x4565dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4565dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4565e0:
    // 0x4565e0: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x4565e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4565e4:
    // 0x4565e4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4565e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4565e8:
    // 0x4565e8: 0xc0bb0e8  jal         func_2EC3A0
label_4565ec:
    if (ctx->pc == 0x4565ECu) {
        ctx->pc = 0x4565ECu;
            // 0x4565ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4565F0u;
        goto label_4565f0;
    }
    ctx->pc = 0x4565E8u;
    SET_GPR_U32(ctx, 31, 0x4565F0u);
    ctx->pc = 0x4565ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4565E8u;
            // 0x4565ec: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4565F0u; }
        if (ctx->pc != 0x4565F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4565F0u; }
        if (ctx->pc != 0x4565F0u) { return; }
    }
    ctx->pc = 0x4565F0u;
label_4565f0:
    // 0x4565f0: 0x1000000b  b           . + 4 + (0xB << 2)
label_4565f4:
    if (ctx->pc == 0x4565F4u) {
        ctx->pc = 0x4565F4u;
            // 0x4565f4: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->pc = 0x4565F8u;
        goto label_4565f8;
    }
    ctx->pc = 0x4565F0u;
    {
        const bool branch_taken_0x4565f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4565F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4565F0u;
            // 0x4565f4: 0xae0200f0  sw          $v0, 0xF0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4565f0) {
            ctx->pc = 0x456620u;
            goto label_456620;
        }
    }
    ctx->pc = 0x4565F8u;
label_4565f8:
    // 0x4565f8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4565f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4565fc:
    // 0x4565fc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x4565fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_456600:
    // 0x456600: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x456600u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_456604:
    // 0x456604: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x456604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_456608:
    // 0x456608: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x456608u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_45660c:
    // 0x45660c: 0x26070010  addiu       $a3, $s0, 0x10
    ctx->pc = 0x45660cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_456610:
    // 0x456610: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x456610u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456614:
    // 0x456614: 0xc0bb0e8  jal         func_2EC3A0
label_456618:
    if (ctx->pc == 0x456618u) {
        ctx->pc = 0x456618u;
            // 0x456618: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x45661Cu;
        goto label_45661c;
    }
    ctx->pc = 0x456614u;
    SET_GPR_U32(ctx, 31, 0x45661Cu);
    ctx->pc = 0x456618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456614u;
            // 0x456618: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45661Cu; }
        if (ctx->pc != 0x45661Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45661Cu; }
        if (ctx->pc != 0x45661Cu) { return; }
    }
    ctx->pc = 0x45661Cu;
label_45661c:
    // 0x45661c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x45661cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_456620:
    // 0x456620: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456624:
    // 0x456624: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456624u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456628:
    // 0x456628: 0x3e00008  jr          $ra
label_45662c:
    if (ctx->pc == 0x45662Cu) {
        ctx->pc = 0x45662Cu;
            // 0x45662c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x456630u;
        goto label_456630;
    }
    ctx->pc = 0x456628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45662Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456628u;
            // 0x45662c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456630u;
label_456630:
    // 0x456630: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x456630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_456634:
    // 0x456634: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x456634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456638:
    // 0x456638: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_45663c:
    // 0x45663c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x45663cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456640:
    // 0x456640: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456644:
    // 0x456644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x456644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456648:
    // 0x456648: 0x8c8400e0  lw          $a0, 0xE0($a0)
    ctx->pc = 0x456648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
label_45664c:
    // 0x45664c: 0x50830039  beql        $a0, $v1, . + 4 + (0x39 << 2)
label_456650:
    if (ctx->pc == 0x456650u) {
        ctx->pc = 0x456650u;
            // 0x456650: 0x8e0400e4  lw          $a0, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->pc = 0x456654u;
        goto label_456654;
    }
    ctx->pc = 0x45664Cu;
    {
        const bool branch_taken_0x45664c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x45664c) {
            ctx->pc = 0x456650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45664Cu;
            // 0x456650: 0x8e0400e4  lw          $a0, 0xE4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456734u;
            goto label_456734;
        }
    }
    ctx->pc = 0x456654u;
label_456654:
    // 0x456654: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_456658:
    if (ctx->pc == 0x456658u) {
        ctx->pc = 0x456658u;
            // 0x456658: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->pc = 0x45665Cu;
        goto label_45665c;
    }
    ctx->pc = 0x456654u;
    {
        const bool branch_taken_0x456654 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x456654) {
            ctx->pc = 0x456658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456654u;
            // 0x456658: 0xae0300e0  sw          $v1, 0xE0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456664u;
            goto label_456664;
        }
    }
    ctx->pc = 0x45665Cu;
label_45665c:
    // 0x45665c: 0x1000005a  b           . + 4 + (0x5A << 2)
label_456660:
    if (ctx->pc == 0x456660u) {
        ctx->pc = 0x456660u;
            // 0x456660: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x456664u;
        goto label_456664;
    }
    ctx->pc = 0x45665Cu;
    {
        const bool branch_taken_0x45665c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x456660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x45665Cu;
            // 0x456660: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45665c) {
            ctx->pc = 0x4567C8u;
            goto label_4567c8;
        }
    }
    ctx->pc = 0x456664u;
label_456664:
    // 0x456664: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x456664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_456668:
    // 0x456668: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x456668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_45666c:
    // 0x45666c: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x45666cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
label_456670:
    // 0x456670: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x456670u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_456674:
    // 0x456674: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x456674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_456678:
    // 0x456678: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x456678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_45667c:
    // 0x45667c: 0xc04cc04  jal         func_133010
label_456680:
    if (ctx->pc == 0x456680u) {
        ctx->pc = 0x456680u;
            // 0x456680: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x456684u;
        goto label_456684;
    }
    ctx->pc = 0x45667Cu;
    SET_GPR_U32(ctx, 31, 0x456684u);
    ctx->pc = 0x456680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45667Cu;
            // 0x456680: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456684u; }
        if (ctx->pc != 0x456684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456684u; }
        if (ctx->pc != 0x456684u) { return; }
    }
    ctx->pc = 0x456684u;
label_456684:
    // 0x456684: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x456684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_456688:
    // 0x456688: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x456688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_45668c:
    // 0x45668c: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x45668cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456690:
    // 0x456690: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x456690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_456694:
    // 0x456694: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x456694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456698:
    // 0x456698: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x456698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_45669c:
    // 0x45669c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x45669cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_4566a0:
    // 0x4566a0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x4566a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_4566a4:
    // 0x4566a4: 0xc089290  jal         func_224A40
label_4566a8:
    if (ctx->pc == 0x4566A8u) {
        ctx->pc = 0x4566A8u;
            // 0x4566a8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->pc = 0x4566ACu;
        goto label_4566ac;
    }
    ctx->pc = 0x4566A4u;
    SET_GPR_U32(ctx, 31, 0x4566ACu);
    ctx->pc = 0x4566A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4566A4u;
            // 0x4566a8: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4566ACu; }
        if (ctx->pc != 0x4566ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4566ACu; }
        if (ctx->pc != 0x4566ACu) { return; }
    }
    ctx->pc = 0x4566ACu;
label_4566ac:
    // 0x4566ac: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x4566acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_4566b0:
    // 0x4566b0: 0xc04cc04  jal         func_133010
label_4566b4:
    if (ctx->pc == 0x4566B4u) {
        ctx->pc = 0x4566B4u;
            // 0x4566b4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x4566B8u;
        goto label_4566b8;
    }
    ctx->pc = 0x4566B0u;
    SET_GPR_U32(ctx, 31, 0x4566B8u);
    ctx->pc = 0x4566B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4566B0u;
            // 0x4566b4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4566B8u; }
        if (ctx->pc != 0x4566B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4566B8u; }
        if (ctx->pc != 0x4566B8u) { return; }
    }
    ctx->pc = 0x4566B8u;
label_4566b8:
    // 0x4566b8: 0xae0000e4  sw          $zero, 0xE4($s0)
    ctx->pc = 0x4566b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 0));
label_4566bc:
    // 0x4566bc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4566bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4566c0:
    // 0x4566c0: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x4566c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_4566c4:
    // 0x4566c4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4566c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4566c8:
    // 0x4566c8: 0x2463dce4  addiu       $v1, $v1, -0x231C
    ctx->pc = 0x4566c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958308));
label_4566cc:
    // 0x4566cc: 0x2442dcd4  addiu       $v0, $v0, -0x232C
    ctx->pc = 0x4566ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958292));
label_4566d0:
    // 0x4566d0: 0xc480002c  lwc1        $f0, 0x2C($a0)
    ctx->pc = 0x4566d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4566d4:
    // 0x4566d4: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x4566d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
label_4566d8:
    // 0x4566d8: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x4566d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_4566dc:
    // 0x4566dc: 0xc60000f4  lwc1        $f0, 0xF4($s0)
    ctx->pc = 0x4566dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4566e0:
    // 0x4566e0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x4566e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_4566e4:
    // 0x4566e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4566e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4566e8:
    // 0x4566e8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4566e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_4566ec:
    // 0x4566ec: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x4566ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4566f0:
    // 0x4566f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x4566f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4566f4:
    // 0x4566f4: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x4566f4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_4566f8:
    // 0x4566f8: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x4566f8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_4566fc:
    // 0x4566fc: 0x0  nop
    ctx->pc = 0x4566fcu;
    // NOP
label_456700:
    // 0x456700: 0x0  nop
    ctx->pc = 0x456700u;
    // NOP
label_456704:
    // 0x456704: 0xc047740  jal         func_11DD00
label_456708:
    if (ctx->pc == 0x456708u) {
        ctx->pc = 0x45670Cu;
        goto label_45670c;
    }
    ctx->pc = 0x456704u;
    SET_GPR_U32(ctx, 31, 0x45670Cu);
    ctx->pc = 0x11DD00u;
    if (runtime->hasFunction(0x11DD00u)) {
        auto targetFn = runtime->lookupFunction(0x11DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45670Cu; }
        if (ctx->pc != 0x45670Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DD00_0x11dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45670Cu; }
        if (ctx->pc != 0x45670Cu) { return; }
    }
    ctx->pc = 0x45670Cu;
label_45670c:
    // 0x45670c: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x45670cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
label_456710:
    // 0x456710: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x456710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_456714:
    // 0x456714: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x456714u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456718:
    // 0x456718: 0xc4610028  lwc1        $f1, 0x28($v1)
    ctx->pc = 0x456718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_45671c:
    // 0x45671c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x45671cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_456720:
    // 0x456720: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_456724:
    if (ctx->pc == 0x456724u) {
        ctx->pc = 0x456724u;
            // 0x456724: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->pc = 0x456728u;
        goto label_456728;
    }
    ctx->pc = 0x456720u;
    {
        const bool branch_taken_0x456720 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x456724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456720u;
            // 0x456724: 0xe6010100  swc1        $f1, 0x100($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x456720) {
            ctx->pc = 0x456730u;
            goto label_456730;
        }
    }
    ctx->pc = 0x456728u;
label_456728:
    // 0x456728: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x456728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45672c:
    // 0x45672c: 0xae0300e4  sw          $v1, 0xE4($s0)
    ctx->pc = 0x45672cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 228), GPR_U32(ctx, 3));
label_456730:
    // 0x456730: 0x8e0400e4  lw          $a0, 0xE4($s0)
    ctx->pc = 0x456730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 228)));
label_456734:
    // 0x456734: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x456734u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_456738:
    // 0x456738: 0x5083001b  beql        $a0, $v1, . + 4 + (0x1B << 2)
label_45673c:
    if (ctx->pc == 0x45673Cu) {
        ctx->pc = 0x45673Cu;
            // 0x45673c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->pc = 0x456740u;
        goto label_456740;
    }
    ctx->pc = 0x456738u;
    {
        const bool branch_taken_0x456738 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x456738) {
            ctx->pc = 0x45673Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456738u;
            // 0x45673c: 0x8e0400f0  lw          $a0, 0xF0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4567A8u;
            goto label_4567a8;
        }
    }
    ctx->pc = 0x456740u;
label_456740:
    // 0x456740: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x456740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456744:
    // 0x456744: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_456748:
    if (ctx->pc == 0x456748u) {
        ctx->pc = 0x456748u;
            // 0x456748: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->pc = 0x45674Cu;
        goto label_45674c;
    }
    ctx->pc = 0x456744u;
    {
        const bool branch_taken_0x456744 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x456744) {
            ctx->pc = 0x456748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456744u;
            // 0x456748: 0x8e030050  lw          $v1, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45675Cu;
            goto label_45675c;
        }
    }
    ctx->pc = 0x45674Cu;
label_45674c:
    // 0x45674c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_456750:
    if (ctx->pc == 0x456750u) {
        ctx->pc = 0x456754u;
        goto label_456754;
    }
    ctx->pc = 0x45674Cu;
    {
        const bool branch_taken_0x45674c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x45674c) {
            ctx->pc = 0x4567A4u;
            goto label_4567a4;
        }
    }
    ctx->pc = 0x456754u;
label_456754:
    // 0x456754: 0x10000013  b           . + 4 + (0x13 << 2)
label_456758:
    if (ctx->pc == 0x456758u) {
        ctx->pc = 0x45675Cu;
        goto label_45675c;
    }
    ctx->pc = 0x456754u;
    {
        const bool branch_taken_0x456754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456754) {
            ctx->pc = 0x4567A4u;
            goto label_4567a4;
        }
    }
    ctx->pc = 0x45675Cu;
label_45675c:
    // 0x45675c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x45675cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_456760:
    // 0x456760: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x456760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_456764:
    // 0x456764: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x456764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_456768:
    // 0x456768: 0xc44c0010  lwc1        $f12, 0x10($v0)
    ctx->pc = 0x456768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_45676c:
    // 0x45676c: 0xc089688  jal         func_225A20
label_456770:
    if (ctx->pc == 0x456770u) {
        ctx->pc = 0x456770u;
            // 0x456770: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->pc = 0x456774u;
        goto label_456774;
    }
    ctx->pc = 0x45676Cu;
    SET_GPR_U32(ctx, 31, 0x456774u);
    ctx->pc = 0x456770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45676Cu;
            // 0x456770: 0x246400a0  addiu       $a0, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225A20u;
    if (runtime->hasFunction(0x225A20u)) {
        auto targetFn = runtime->lookupFunction(0x225A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456774u; }
        if (ctx->pc != 0x456774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225A20_0x225a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456774u; }
        if (ctx->pc != 0x456774u) { return; }
    }
    ctx->pc = 0x456774u;
label_456774:
    // 0x456774: 0xc7ac0070  lwc1        $f12, 0x70($sp)
    ctx->pc = 0x456774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_456778:
    // 0x456778: 0xc7ad0074  lwc1        $f13, 0x74($sp)
    ctx->pc = 0x456778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_45677c:
    // 0x45677c: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x45677cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_456780:
    // 0x456780: 0xc04cbd8  jal         func_132F60
label_456784:
    if (ctx->pc == 0x456784u) {
        ctx->pc = 0x456784u;
            // 0x456784: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x456788u;
        goto label_456788;
    }
    ctx->pc = 0x456780u;
    SET_GPR_U32(ctx, 31, 0x456788u);
    ctx->pc = 0x456784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456780u;
            // 0x456784: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456788u; }
        if (ctx->pc != 0x456788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456788u; }
        if (ctx->pc != 0x456788u) { return; }
    }
    ctx->pc = 0x456788u;
label_456788:
    // 0x456788: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x456788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_45678c:
    // 0x45678c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x45678cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_456790:
    // 0x456790: 0xc122ce4  jal         func_48B390
label_456794:
    if (ctx->pc == 0x456794u) {
        ctx->pc = 0x456794u;
            // 0x456794: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x456798u;
        goto label_456798;
    }
    ctx->pc = 0x456790u;
    SET_GPR_U32(ctx, 31, 0x456798u);
    ctx->pc = 0x456794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456790u;
            // 0x456794: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B390u;
    if (runtime->hasFunction(0x48B390u)) {
        auto targetFn = runtime->lookupFunction(0x48B390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456798u; }
        if (ctx->pc != 0x456798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B390_0x48b390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456798u; }
        if (ctx->pc != 0x456798u) { return; }
    }
    ctx->pc = 0x456798u;
label_456798:
    // 0x456798: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x456798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_45679c:
    // 0x45679c: 0xc04cc04  jal         func_133010
label_4567a0:
    if (ctx->pc == 0x4567A0u) {
        ctx->pc = 0x4567A0u;
            // 0x4567a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4567A4u;
        goto label_4567a4;
    }
    ctx->pc = 0x45679Cu;
    SET_GPR_U32(ctx, 31, 0x4567A4u);
    ctx->pc = 0x4567A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45679Cu;
            // 0x4567a0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4567A4u; }
        if (ctx->pc != 0x4567A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4567A4u; }
        if (ctx->pc != 0x4567A4u) { return; }
    }
    ctx->pc = 0x4567A4u;
label_4567a4:
    // 0x4567a4: 0x8e0400f0  lw          $a0, 0xF0($s0)
    ctx->pc = 0x4567a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_4567a8:
    // 0x4567a8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_4567ac:
    if (ctx->pc == 0x4567ACu) {
        ctx->pc = 0x4567B0u;
        goto label_4567b0;
    }
    ctx->pc = 0x4567A8u;
    {
        const bool branch_taken_0x4567a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4567a8) {
            ctx->pc = 0x4567C4u;
            goto label_4567c4;
        }
    }
    ctx->pc = 0x4567B0u;
label_4567b0:
    // 0x4567b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4567b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4567b4:
    // 0x4567b4: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4567b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4567b8:
    // 0x4567b8: 0x320f809  jalr        $t9
label_4567bc:
    if (ctx->pc == 0x4567BCu) {
        ctx->pc = 0x4567BCu;
            // 0x4567bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4567C0u;
        goto label_4567c0;
    }
    ctx->pc = 0x4567B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4567C0u);
        ctx->pc = 0x4567BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4567B8u;
            // 0x4567bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4567C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4567C0u; }
            if (ctx->pc != 0x4567C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4567C0u;
label_4567c0:
    // 0x4567c0: 0xae0000f0  sw          $zero, 0xF0($s0)
    ctx->pc = 0x4567c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 0));
label_4567c4:
    // 0x4567c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4567c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4567c8:
    // 0x4567c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4567c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4567cc:
    // 0x4567cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4567ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4567d0:
    // 0x4567d0: 0x3e00008  jr          $ra
label_4567d4:
    if (ctx->pc == 0x4567D4u) {
        ctx->pc = 0x4567D4u;
            // 0x4567d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x4567D8u;
        goto label_4567d8;
    }
    ctx->pc = 0x4567D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4567D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4567D0u;
            // 0x4567d4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4567D8u;
label_4567d8:
    // 0x4567d8: 0x0  nop
    ctx->pc = 0x4567d8u;
    // NOP
label_4567dc:
    // 0x4567dc: 0x0  nop
    ctx->pc = 0x4567dcu;
    // NOP
label_4567e0:
    // 0x4567e0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x4567e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_4567e4:
    // 0x4567e4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4567e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4567e8:
    // 0x4567e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4567e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4567ec:
    // 0x4567ec: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x4567ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_4567f0:
    // 0x4567f0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4567f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4567f4:
    // 0x4567f4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4567f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4567f8:
    // 0x4567f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4567f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4567fc:
    // 0x4567fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4567fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456800:
    // 0x456800: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x456800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_456804:
    // 0x456804: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x456804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456808:
    // 0x456808: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x456808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_45680c:
    // 0x45680c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x45680cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456810:
    // 0x456810: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x456810u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_456814:
    // 0x456814: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x456814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_456818:
    // 0x456818: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x456818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_45681c:
    // 0x45681c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x45681cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_456820:
    // 0x456820: 0xc08bff0  jal         func_22FFC0
label_456824:
    if (ctx->pc == 0x456824u) {
        ctx->pc = 0x456824u;
            // 0x456824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456828u;
        goto label_456828;
    }
    ctx->pc = 0x456820u;
    SET_GPR_U32(ctx, 31, 0x456828u);
    ctx->pc = 0x456824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456820u;
            // 0x456824: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456828u; }
        if (ctx->pc != 0x456828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456828u; }
        if (ctx->pc != 0x456828u) { return; }
    }
    ctx->pc = 0x456828u;
label_456828:
    // 0x456828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x456828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45682c:
    // 0x45682c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x45682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_456830:
    // 0x456830: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x456830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456834:
    // 0x456834: 0xc08914c  jal         func_224530
label_456838:
    if (ctx->pc == 0x456838u) {
        ctx->pc = 0x456838u;
            // 0x456838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x45683Cu;
        goto label_45683c;
    }
    ctx->pc = 0x456834u;
    SET_GPR_U32(ctx, 31, 0x45683Cu);
    ctx->pc = 0x456838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456834u;
            // 0x456838: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45683Cu; }
        if (ctx->pc != 0x45683Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x45683Cu; }
        if (ctx->pc != 0x45683Cu) { return; }
    }
    ctx->pc = 0x45683Cu;
label_45683c:
    // 0x45683c: 0xc0e393c  jal         func_38E4F0
label_456840:
    if (ctx->pc == 0x456840u) {
        ctx->pc = 0x456840u;
            // 0x456840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456844u;
        goto label_456844;
    }
    ctx->pc = 0x45683Cu;
    SET_GPR_U32(ctx, 31, 0x456844u);
    ctx->pc = 0x456840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45683Cu;
            // 0x456840: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456844u; }
        if (ctx->pc != 0x456844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456844u; }
        if (ctx->pc != 0x456844u) { return; }
    }
    ctx->pc = 0x456844u;
label_456844:
    // 0x456844: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x456844u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_456848:
    // 0x456848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x456848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_45684c:
    // 0x45684c: 0xafa00094  sw          $zero, 0x94($sp)
    ctx->pc = 0x45684cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
label_456850:
    // 0x456850: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x456850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_456854:
    // 0x456854: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x456854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_456858:
    // 0x456858: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x456858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_45685c:
    // 0x45685c: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x45685cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_456860:
    // 0x456860: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x456860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_456864:
    // 0x456864: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x456864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456868:
    // 0x456868: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x456868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_45686c:
    // 0x45686c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x45686cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_456870:
    // 0x456870: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x456870u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_456874:
    // 0x456874: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x456874u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_456878:
    // 0x456878: 0xc0892a0  jal         func_224A80
label_45687c:
    if (ctx->pc == 0x45687Cu) {
        ctx->pc = 0x45687Cu;
            // 0x45687c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->pc = 0x456880u;
        goto label_456880;
    }
    ctx->pc = 0x456878u;
    SET_GPR_U32(ctx, 31, 0x456880u);
    ctx->pc = 0x45687Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456878u;
            // 0x45687c: 0xe7a3006c  swc1        $f3, 0x6C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A80u;
    if (runtime->hasFunction(0x224A80u)) {
        auto targetFn = runtime->lookupFunction(0x224A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456880u; }
        if (ctx->pc != 0x456880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A80_0x224a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456880u; }
        if (ctx->pc != 0x456880u) { return; }
    }
    ctx->pc = 0x456880u;
label_456880:
    // 0x456880: 0xc088b74  jal         func_222DD0
label_456884:
    if (ctx->pc == 0x456884u) {
        ctx->pc = 0x456884u;
            // 0x456884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456888u;
        goto label_456888;
    }
    ctx->pc = 0x456880u;
    SET_GPR_U32(ctx, 31, 0x456888u);
    ctx->pc = 0x456884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456880u;
            // 0x456884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456888u; }
        if (ctx->pc != 0x456888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456888u; }
        if (ctx->pc != 0x456888u) { return; }
    }
    ctx->pc = 0x456888u;
label_456888:
    // 0x456888: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x456888u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_45688c:
    // 0x45688c: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x45688cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_456890:
    // 0x456890: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x456890u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_456894:
    // 0x456894: 0x320f809  jalr        $t9
label_456898:
    if (ctx->pc == 0x456898u) {
        ctx->pc = 0x456898u;
            // 0x456898: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x45689Cu;
        goto label_45689c;
    }
    ctx->pc = 0x456894u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x45689Cu);
        ctx->pc = 0x456898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456894u;
            // 0x456898: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x45689Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x45689Cu; }
            if (ctx->pc != 0x45689Cu) { return; }
        }
        }
    }
    ctx->pc = 0x45689Cu;
label_45689c:
    // 0x45689c: 0xc088b74  jal         func_222DD0
label_4568a0:
    if (ctx->pc == 0x4568A0u) {
        ctx->pc = 0x4568A0u;
            // 0x4568a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4568A4u;
        goto label_4568a4;
    }
    ctx->pc = 0x45689Cu;
    SET_GPR_U32(ctx, 31, 0x4568A4u);
    ctx->pc = 0x4568A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x45689Cu;
            // 0x4568a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4568A4u; }
        if (ctx->pc != 0x4568A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4568A4u; }
        if (ctx->pc != 0x4568A4u) { return; }
    }
    ctx->pc = 0x4568A4u;
label_4568a4:
    // 0x4568a4: 0x8e1900a0  lw          $t9, 0xA0($s0)
    ctx->pc = 0x4568a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4568a8:
    // 0x4568a8: 0x260400a0  addiu       $a0, $s0, 0xA0
    ctx->pc = 0x4568a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_4568ac:
    // 0x4568ac: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x4568acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_4568b0:
    // 0x4568b0: 0x320f809  jalr        $t9
label_4568b4:
    if (ctx->pc == 0x4568B4u) {
        ctx->pc = 0x4568B4u;
            // 0x4568b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x4568B8u;
        goto label_4568b8;
    }
    ctx->pc = 0x4568B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4568B8u);
        ctx->pc = 0x4568B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4568B0u;
            // 0x4568b4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4568B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4568B8u; }
            if (ctx->pc != 0x4568B8u) { return; }
        }
        }
    }
    ctx->pc = 0x4568B8u;
label_4568b8:
    // 0x4568b8: 0x3c0443d1  lui         $a0, 0x43D1
    ctx->pc = 0x4568b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17361 << 16));
label_4568bc:
    // 0x4568bc: 0x3c033e32  lui         $v1, 0x3E32
    ctx->pc = 0x4568bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15922 << 16));
label_4568c0:
    // 0x4568c0: 0x34847084  ori         $a0, $a0, 0x7084
    ctx->pc = 0x4568c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28804);
label_4568c4:
    // 0x4568c4: 0x3463b8c2  ori         $v1, $v1, 0xB8C2
    ctx->pc = 0x4568c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47298);
label_4568c8:
    // 0x4568c8: 0xae040154  sw          $a0, 0x154($s0)
    ctx->pc = 0x4568c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 4));
label_4568cc:
    // 0x4568cc: 0xae030158  sw          $v1, 0x158($s0)
    ctx->pc = 0x4568ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 3));
label_4568d0:
    // 0x4568d0: 0x8e2400f0  lw          $a0, 0xF0($s1)
    ctx->pc = 0x4568d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_4568d4:
    // 0x4568d4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_4568d8:
    if (ctx->pc == 0x4568D8u) {
        ctx->pc = 0x4568D8u;
            // 0x4568d8: 0xa2200109  sb          $zero, 0x109($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 265), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4568DCu;
        goto label_4568dc;
    }
    ctx->pc = 0x4568D4u;
    {
        const bool branch_taken_0x4568d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4568d4) {
            ctx->pc = 0x4568D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4568D4u;
            // 0x4568d8: 0xa2200109  sb          $zero, 0x109($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 265), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4568F4u;
            goto label_4568f4;
        }
    }
    ctx->pc = 0x4568DCu;
label_4568dc:
    // 0x4568dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4568dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4568e0:
    // 0x4568e0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4568e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4568e4:
    // 0x4568e4: 0x320f809  jalr        $t9
label_4568e8:
    if (ctx->pc == 0x4568E8u) {
        ctx->pc = 0x4568E8u;
            // 0x4568e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4568ECu;
        goto label_4568ec;
    }
    ctx->pc = 0x4568E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4568ECu);
        ctx->pc = 0x4568E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4568E4u;
            // 0x4568e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4568ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4568ECu; }
            if (ctx->pc != 0x4568ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4568ECu;
label_4568ec:
    // 0x4568ec: 0xae2000f0  sw          $zero, 0xF0($s1)
    ctx->pc = 0x4568ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
label_4568f0:
    // 0x4568f0: 0xa2200109  sb          $zero, 0x109($s1)
    ctx->pc = 0x4568f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 265), (uint8_t)GPR_U32(ctx, 0));
label_4568f4:
    // 0x4568f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4568f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4568f8:
    // 0x4568f8: 0xa2200108  sb          $zero, 0x108($s1)
    ctx->pc = 0x4568f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 264), (uint8_t)GPR_U32(ctx, 0));
label_4568fc:
    // 0x4568fc: 0x8e260040  lw          $a2, 0x40($s1)
    ctx->pc = 0x4568fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_456900:
    // 0x456900: 0xc02826  xor         $a1, $a2, $zero
    ctx->pc = 0x456900u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 0));
label_456904:
    // 0x456904: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x456904u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_456908:
    // 0x456908: 0x51980  sll         $v1, $a1, 6
    ctx->pc = 0x456908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_45690c:
    // 0x45690c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x45690cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_456910:
    // 0x456910: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x456910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_456914:
    // 0x456914: 0xa223004c  sb          $v1, 0x4C($s1)
    ctx->pc = 0x456914u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 3));
label_456918:
    // 0x456918: 0x8e2300e0  lw          $v1, 0xE0($s1)
    ctx->pc = 0x456918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_45691c:
    // 0x45691c: 0x54640073  bnel        $v1, $a0, . + 4 + (0x73 << 2)
label_456920:
    if (ctx->pc == 0x456920u) {
        ctx->pc = 0x456920u;
            // 0x456920: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x456924u;
        goto label_456924;
    }
    ctx->pc = 0x45691Cu;
    {
        const bool branch_taken_0x45691c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x45691c) {
            ctx->pc = 0x456920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45691Cu;
            // 0x456920: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456AECu;
            goto label_456aec;
        }
    }
    ctx->pc = 0x456924u;
label_456924:
    // 0x456924: 0x8e2300e4  lw          $v1, 0xE4($s1)
    ctx->pc = 0x456924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 228)));
label_456928:
    // 0x456928: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x456928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_45692c:
    // 0x45692c: 0x5062005b  beql        $v1, $v0, . + 4 + (0x5B << 2)
label_456930:
    if (ctx->pc == 0x456930u) {
        ctx->pc = 0x456930u;
            // 0x456930: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->pc = 0x456934u;
        goto label_456934;
    }
    ctx->pc = 0x45692Cu;
    {
        const bool branch_taken_0x45692c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x45692c) {
            ctx->pc = 0x456930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45692Cu;
            // 0x456930: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456A9Cu;
            goto label_456a9c;
        }
    }
    ctx->pc = 0x456934u;
label_456934:
    // 0x456934: 0x50640012  beql        $v1, $a0, . + 4 + (0x12 << 2)
label_456938:
    if (ctx->pc == 0x456938u) {
        ctx->pc = 0x456938u;
            // 0x456938: 0x8e2400e8  lw          $a0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->pc = 0x45693Cu;
        goto label_45693c;
    }
    ctx->pc = 0x456934u;
    {
        const bool branch_taken_0x456934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x456934) {
            ctx->pc = 0x456938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456934u;
            // 0x456938: 0x8e2400e8  lw          $a0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456980u;
            goto label_456980;
        }
    }
    ctx->pc = 0x45693Cu;
label_45693c:
    // 0x45693c: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_456940:
    if (ctx->pc == 0x456940u) {
        ctx->pc = 0x456940u;
            // 0x456940: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->pc = 0x456944u;
        goto label_456944;
    }
    ctx->pc = 0x45693Cu;
    {
        const bool branch_taken_0x45693c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x45693c) {
            ctx->pc = 0x456940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x45693Cu;
            // 0x456940: 0x8e2200e8  lw          $v0, 0xE8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 232)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45694Cu;
            goto label_45694c;
        }
    }
    ctx->pc = 0x456944u;
label_456944:
    // 0x456944: 0x1000005c  b           . + 4 + (0x5C << 2)
label_456948:
    if (ctx->pc == 0x456948u) {
        ctx->pc = 0x456948u;
            // 0x456948: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x45694Cu;
        goto label_45694c;
    }
    ctx->pc = 0x456944u;
    {
        const bool branch_taken_0x456944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x456948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456944u;
            // 0x456948: 0xc7a20080  lwc1        $f2, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x456944) {
            ctx->pc = 0x456AB8u;
            goto label_456ab8;
        }
    }
    ctx->pc = 0x45694Cu;
label_45694c:
    // 0x45694c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x45694cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_456950:
    // 0x456950: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x456950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_456954:
    // 0x456954: 0x2463dcd0  addiu       $v1, $v1, -0x2330
    ctx->pc = 0x456954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958288));
label_456958:
    // 0x456958: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x456958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_45695c:
    // 0x45695c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x45695cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_456960:
    // 0x456960: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x456960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_456964:
    // 0x456964: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x456964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_456968:
    // 0x456968: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x456968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_45696c:
    // 0x45696c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x45696cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_456970:
    // 0x456970: 0xc04cc04  jal         func_133010
label_456974:
    if (ctx->pc == 0x456974u) {
        ctx->pc = 0x456974u;
            // 0x456974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x456978u;
        goto label_456978;
    }
    ctx->pc = 0x456970u;
    SET_GPR_U32(ctx, 31, 0x456978u);
    ctx->pc = 0x456974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456970u;
            // 0x456974: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456978u; }
        if (ctx->pc != 0x456978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456978u; }
        if (ctx->pc != 0x456978u) { return; }
    }
    ctx->pc = 0x456978u;
label_456978:
    // 0x456978: 0x1000004e  b           . + 4 + (0x4E << 2)
label_45697c:
    if (ctx->pc == 0x45697Cu) {
        ctx->pc = 0x456980u;
        goto label_456980;
    }
    ctx->pc = 0x456978u;
    {
        const bool branch_taken_0x456978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456978) {
            ctx->pc = 0x456AB4u;
            goto label_456ab4;
        }
    }
    ctx->pc = 0x456980u;
label_456980:
    // 0x456980: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x456980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_456984:
    // 0x456984: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x456984u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_456988:
    // 0x456988: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_45698c:
    if (ctx->pc == 0x45698Cu) {
        ctx->pc = 0x45698Cu;
            // 0x45698c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x456990u;
        goto label_456990;
    }
    ctx->pc = 0x456988u;
    {
        const bool branch_taken_0x456988 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x456988) {
            ctx->pc = 0x45698Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456988u;
            // 0x45698c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x45699Cu;
            goto label_45699c;
        }
    }
    ctx->pc = 0x456990u;
label_456990:
    // 0x456990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x456990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_456994:
    // 0x456994: 0x10000007  b           . + 4 + (0x7 << 2)
label_456998:
    if (ctx->pc == 0x456998u) {
        ctx->pc = 0x456998u;
            // 0x456998: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x45699Cu;
        goto label_45699c;
    }
    ctx->pc = 0x456994u;
    {
        const bool branch_taken_0x456994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x456998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456994u;
            // 0x456998: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x456994) {
            ctx->pc = 0x4569B4u;
            goto label_4569b4;
        }
    }
    ctx->pc = 0x45699Cu;
label_45699c:
    // 0x45699c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x45699cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4569a0:
    // 0x4569a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4569a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4569a4:
    // 0x4569a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4569a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4569a8:
    // 0x4569a8: 0x0  nop
    ctx->pc = 0x4569a8u;
    // NOP
label_4569ac:
    // 0x4569ac: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4569acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4569b0:
    // 0x4569b0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4569b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4569b4:
    // 0x4569b4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4569b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4569b8:
    // 0x4569b8: 0x38820001  xori        $v0, $a0, 0x1
    ctx->pc = 0x4569b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4569bc:
    // 0x4569bc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x4569bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4569c0:
    // 0x4569c0: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x4569c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_4569c4:
    // 0x4569c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4569c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4569c8:
    // 0x4569c8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x4569c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_4569cc:
    // 0x4569cc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4569ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4569d0:
    // 0x4569d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4569d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4569d4:
    // 0x4569d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4569d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4569d8:
    // 0x4569d8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4569d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4569dc:
    // 0x4569dc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4569dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4569e0:
    // 0x4569e0: 0x2463dcd0  addiu       $v1, $v1, -0x2330
    ctx->pc = 0x4569e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958288));
label_4569e4:
    // 0x4569e4: 0xc62000f4  lwc1        $f0, 0xF4($s1)
    ctx->pc = 0x4569e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4569e8:
    // 0x4569e8: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x4569e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_4569ec:
    // 0x4569ec: 0x4603105d  msub.s      $f1, $f2, $f3
    ctx->pc = 0x4569ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_4569f0:
    // 0x4569f0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4569f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4569f4:
    // 0x4569f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4569f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4569f8:
    // 0x4569f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4569f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4569fc:
    // 0x4569fc: 0xc04cc04  jal         func_133010
label_456a00:
    if (ctx->pc == 0x456A00u) {
        ctx->pc = 0x456A00u;
            // 0x456a00: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x456A04u;
        goto label_456a04;
    }
    ctx->pc = 0x4569FCu;
    SET_GPR_U32(ctx, 31, 0x456A04u);
    ctx->pc = 0x456A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4569FCu;
            // 0x456a00: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A04u; }
        if (ctx->pc != 0x456A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A04u; }
        if (ctx->pc != 0x456A04u) { return; }
    }
    ctx->pc = 0x456A04u;
label_456a04:
    // 0x456a04: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x456a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456a08:
    // 0x456a08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x456a08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_456a0c:
    // 0x456a0c: 0xc62300fc  lwc1        $f3, 0xFC($s1)
    ctx->pc = 0x456a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_456a10:
    // 0x456a10: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x456a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_456a14:
    // 0x456a14: 0xc6210100  lwc1        $f1, 0x100($s1)
    ctx->pc = 0x456a14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456a18:
    // 0x456a18: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x456a18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_456a1c:
    // 0x456a1c: 0x0  nop
    ctx->pc = 0x456a1cu;
    // NOP
label_456a20:
    // 0x456a20: 0x46001018  adda.s      $f2, $f0
    ctx->pc = 0x456a20u;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_456a24:
    // 0x456a24: 0x46011801  sub.s       $f0, $f3, $f1
    ctx->pc = 0x456a24u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
label_456a28:
    // 0x456a28: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x456a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_456a2c:
    // 0x456a2c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x456a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_456a30:
    // 0x456a30: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x456a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_456a34:
    // 0x456a34: 0x4600a01c  madd.s      $f0, $f20, $f0
    ctx->pc = 0x456a34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[0]));
label_456a38:
    // 0x456a38: 0xe7b40074  swc1        $f20, 0x74($sp)
    ctx->pc = 0x456a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_456a3c:
    // 0x456a3c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x456a3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_456a40:
    // 0x456a40: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x456a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456a44:
    // 0x456a44: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x456a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456a48:
    // 0x456a48: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x456a48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_456a4c:
    // 0x456a4c: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x456a4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_456a50:
    // 0x456a50: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x456a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_456a54:
    // 0x456a54: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x456a54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_456a58:
    // 0x456a58: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x456a58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_456a5c:
    // 0x456a5c: 0xe7a1007c  swc1        $f1, 0x7C($sp)
    ctx->pc = 0x456a5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_456a60:
    // 0x456a60: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x456a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_456a64:
    // 0x456a64: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x456a64u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_456a68:
    // 0x456a68: 0xc088b74  jal         func_222DD0
label_456a6c:
    if (ctx->pc == 0x456A6Cu) {
        ctx->pc = 0x456A6Cu;
            // 0x456a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456A70u;
        goto label_456a70;
    }
    ctx->pc = 0x456A68u;
    SET_GPR_U32(ctx, 31, 0x456A70u);
    ctx->pc = 0x456A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456A68u;
            // 0x456a6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A70u; }
        if (ctx->pc != 0x456A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A70u; }
        if (ctx->pc != 0x456A70u) { return; }
    }
    ctx->pc = 0x456A70u;
label_456a70:
    // 0x456a70: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x456a70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_456a74:
    // 0x456a74: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x456a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_456a78:
    // 0x456a78: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x456a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_456a7c:
    // 0x456a7c: 0x320f809  jalr        $t9
label_456a80:
    if (ctx->pc == 0x456A80u) {
        ctx->pc = 0x456A80u;
            // 0x456a80: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x456A84u;
        goto label_456a84;
    }
    ctx->pc = 0x456A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x456A84u);
        ctx->pc = 0x456A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456A7Cu;
            // 0x456a80: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x456A84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x456A84u; }
            if (ctx->pc != 0x456A84u) { return; }
        }
        }
    }
    ctx->pc = 0x456A84u;
label_456a84:
    // 0x456a84: 0x8e2400ec  lw          $a0, 0xEC($s1)
    ctx->pc = 0x456a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 236)));
label_456a88:
    // 0x456a88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x456a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_456a8c:
    // 0x456a8c: 0xc122d2c  jal         func_48B4B0
label_456a90:
    if (ctx->pc == 0x456A90u) {
        ctx->pc = 0x456A90u;
            // 0x456a90: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x456A94u;
        goto label_456a94;
    }
    ctx->pc = 0x456A8Cu;
    SET_GPR_U32(ctx, 31, 0x456A94u);
    ctx->pc = 0x456A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456A8Cu;
            // 0x456a90: 0x26260010  addiu       $a2, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A94u; }
        if (ctx->pc != 0x456A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456A94u; }
        if (ctx->pc != 0x456A94u) { return; }
    }
    ctx->pc = 0x456A94u;
label_456a94:
    // 0x456a94: 0x10000007  b           . + 4 + (0x7 << 2)
label_456a98:
    if (ctx->pc == 0x456A98u) {
        ctx->pc = 0x456A9Cu;
        goto label_456a9c;
    }
    ctx->pc = 0x456A94u;
    {
        const bool branch_taken_0x456a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x456a94) {
            ctx->pc = 0x456AB4u;
            goto label_456ab4;
        }
    }
    ctx->pc = 0x456A9Cu;
label_456a9c:
    // 0x456a9c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x456a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_456aa0:
    // 0x456aa0: 0x2442dcd0  addiu       $v0, $v0, -0x2330
    ctx->pc = 0x456aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958288));
label_456aa4:
    // 0x456aa4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x456aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_456aa8:
    // 0x456aa8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x456aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_456aac:
    // 0x456aac: 0xc04cc04  jal         func_133010
label_456ab0:
    if (ctx->pc == 0x456AB0u) {
        ctx->pc = 0x456AB0u;
            // 0x456ab0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x456AB4u;
        goto label_456ab4;
    }
    ctx->pc = 0x456AACu;
    SET_GPR_U32(ctx, 31, 0x456AB4u);
    ctx->pc = 0x456AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456AACu;
            // 0x456ab0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456AB4u; }
        if (ctx->pc != 0x456AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456AB4u; }
        if (ctx->pc != 0x456AB4u) { return; }
    }
    ctx->pc = 0x456AB4u;
label_456ab4:
    // 0x456ab4: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x456ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_456ab8:
    // 0x456ab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x456ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_456abc:
    // 0x456abc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x456abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_456ac0:
    // 0x456ac0: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x456ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_456ac4:
    // 0x456ac4: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x456ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456ac8:
    // 0x456ac8: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x456ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_456acc:
    // 0x456acc: 0xe7a20050  swc1        $f2, 0x50($sp)
    ctx->pc = 0x456accu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_456ad0:
    // 0x456ad0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x456ad0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_456ad4:
    // 0x456ad4: 0xc089290  jal         func_224A40
label_456ad8:
    if (ctx->pc == 0x456AD8u) {
        ctx->pc = 0x456AD8u;
            // 0x456ad8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->pc = 0x456ADCu;
        goto label_456adc;
    }
    ctx->pc = 0x456AD4u;
    SET_GPR_U32(ctx, 31, 0x456ADCu);
    ctx->pc = 0x456AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456AD4u;
            // 0x456ad8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224A40u;
    if (runtime->hasFunction(0x224A40u)) {
        auto targetFn = runtime->lookupFunction(0x224A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456ADCu; }
        if (ctx->pc != 0x456ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224A40_0x224a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456ADCu; }
        if (ctx->pc != 0x456ADCu) { return; }
    }
    ctx->pc = 0x456ADCu;
label_456adc:
    // 0x456adc: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x456adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_456ae0:
    // 0x456ae0: 0xc04cc04  jal         func_133010
label_456ae4:
    if (ctx->pc == 0x456AE4u) {
        ctx->pc = 0x456AE4u;
            // 0x456ae4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x456AE8u;
        goto label_456ae8;
    }
    ctx->pc = 0x456AE0u;
    SET_GPR_U32(ctx, 31, 0x456AE8u);
    ctx->pc = 0x456AE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456AE0u;
            // 0x456ae4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456AE8u; }
        if (ctx->pc != 0x456AE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456AE8u; }
        if (ctx->pc != 0x456AE8u) { return; }
    }
    ctx->pc = 0x456AE8u;
label_456ae8:
    // 0x456ae8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x456ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456aec:
    // 0x456aec: 0xa223010a  sb          $v1, 0x10A($s1)
    ctx->pc = 0x456aecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 266), (uint8_t)GPR_U32(ctx, 3));
label_456af0:
    // 0x456af0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x456af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_456af4:
    // 0x456af4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x456af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_456af8:
    // 0x456af8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x456af8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_456afc:
    // 0x456afc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x456afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_456b00:
    // 0x456b00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x456b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456b04:
    // 0x456b04: 0x3e00008  jr          $ra
label_456b08:
    if (ctx->pc == 0x456B08u) {
        ctx->pc = 0x456B08u;
            // 0x456b08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x456B0Cu;
        goto label_456b0c;
    }
    ctx->pc = 0x456B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456B04u;
            // 0x456b08: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456B0Cu;
label_456b0c:
    // 0x456b0c: 0x0  nop
    ctx->pc = 0x456b0cu;
    // NOP
label_456b10:
    // 0x456b10: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x456b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_456b14:
    // 0x456b14: 0x3e00008  jr          $ra
label_456b18:
    if (ctx->pc == 0x456B18u) {
        ctx->pc = 0x456B18u;
            // 0x456b18: 0x2442de90  addiu       $v0, $v0, -0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
        ctx->pc = 0x456B1Cu;
        goto label_456b1c;
    }
    ctx->pc = 0x456B14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456B14u;
            // 0x456b18: 0x2442de90  addiu       $v0, $v0, -0x2170 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456B1Cu;
label_456b1c:
    // 0x456b1c: 0x0  nop
    ctx->pc = 0x456b1cu;
    // NOP
label_456b20:
    // 0x456b20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_456b24:
    // 0x456b24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456b28:
    // 0x456b28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456b2c:
    // 0x456b2c: 0x90830108  lbu         $v1, 0x108($a0)
    ctx->pc = 0x456b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 264)));
label_456b30:
    // 0x456b30: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_456b34:
    if (ctx->pc == 0x456B34u) {
        ctx->pc = 0x456B34u;
            // 0x456b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456B38u;
        goto label_456b38;
    }
    ctx->pc = 0x456B30u;
    {
        const bool branch_taken_0x456b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x456B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456B30u;
            // 0x456b34: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456b30) {
            ctx->pc = 0x456B50u;
            goto label_456b50;
        }
    }
    ctx->pc = 0x456B38u;
label_456b38:
    // 0x456b38: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x456b38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_456b3c:
    // 0x456b3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x456b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_456b40:
    // 0x456b40: 0xc122d2c  jal         func_48B4B0
label_456b44:
    if (ctx->pc == 0x456B44u) {
        ctx->pc = 0x456B44u;
            // 0x456b44: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x456B48u;
        goto label_456b48;
    }
    ctx->pc = 0x456B40u;
    SET_GPR_U32(ctx, 31, 0x456B48u);
    ctx->pc = 0x456B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456B40u;
            // 0x456b44: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456B48u; }
        if (ctx->pc != 0x456B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456B48u; }
        if (ctx->pc != 0x456B48u) { return; }
    }
    ctx->pc = 0x456B48u;
label_456b48:
    // 0x456b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x456b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456b4c:
    // 0x456b4c: 0xa2030108  sb          $v1, 0x108($s0)
    ctx->pc = 0x456b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 264), (uint8_t)GPR_U32(ctx, 3));
label_456b50:
    // 0x456b50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456b54:
    // 0x456b54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456b54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456b58:
    // 0x456b58: 0x3e00008  jr          $ra
label_456b5c:
    if (ctx->pc == 0x456B5Cu) {
        ctx->pc = 0x456B5Cu;
            // 0x456b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x456B60u;
        goto label_456b60;
    }
    ctx->pc = 0x456B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456B58u;
            // 0x456b5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456B60u;
label_456b60:
    // 0x456b60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_456b64:
    // 0x456b64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x456b64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456b68:
    // 0x456b68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456b6c:
    // 0x456b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456b70:
    // 0x456b70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x456b70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456b74:
    // 0x456b74: 0x90840109  lbu         $a0, 0x109($a0)
    ctx->pc = 0x456b74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 265)));
label_456b78:
    // 0x456b78: 0x5083001a  beql        $a0, $v1, . + 4 + (0x1A << 2)
label_456b7c:
    if (ctx->pc == 0x456B7Cu) {
        ctx->pc = 0x456B7Cu;
            // 0x456b7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x456B80u;
        goto label_456b80;
    }
    ctx->pc = 0x456B78u;
    {
        const bool branch_taken_0x456b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x456b78) {
            ctx->pc = 0x456B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456B78u;
            // 0x456b7c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456BE4u;
            goto label_456be4;
        }
    }
    ctx->pc = 0x456B80u;
label_456b80:
    // 0x456b80: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x456b80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_456b84:
    // 0x456b84: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x456b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_456b88:
    // 0x456b88: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x456b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_456b8c:
    // 0x456b8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x456b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456b90:
    // 0x456b90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456b94:
    // 0x456b94: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x456b94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_456b98:
    // 0x456b98: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x456b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_456b9c:
    // 0x456b9c: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x456b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_456ba0:
    // 0x456ba0: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x456ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_456ba4:
    // 0x456ba4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x456ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_456ba8:
    // 0x456ba8: 0xc08bff0  jal         func_22FFC0
label_456bac:
    if (ctx->pc == 0x456BACu) {
        ctx->pc = 0x456BACu;
            // 0x456bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456BB0u;
        goto label_456bb0;
    }
    ctx->pc = 0x456BA8u;
    SET_GPR_U32(ctx, 31, 0x456BB0u);
    ctx->pc = 0x456BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456BA8u;
            // 0x456bac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BB0u; }
        if (ctx->pc != 0x456BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BB0u; }
        if (ctx->pc != 0x456BB0u) { return; }
    }
    ctx->pc = 0x456BB0u;
label_456bb0:
    // 0x456bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x456bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456bb4:
    // 0x456bb4: 0xa2050109  sb          $a1, 0x109($s0)
    ctx->pc = 0x456bb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 265), (uint8_t)GPR_U32(ctx, 5));
label_456bb8:
    // 0x456bb8: 0x9202010a  lbu         $v0, 0x10A($s0)
    ctx->pc = 0x456bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 266)));
label_456bbc:
    // 0x456bbc: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_456bc0:
    if (ctx->pc == 0x456BC0u) {
        ctx->pc = 0x456BC0u;
            // 0x456bc0: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->pc = 0x456BC4u;
        goto label_456bc4;
    }
    ctx->pc = 0x456BBCu;
    {
        const bool branch_taken_0x456bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x456bbc) {
            ctx->pc = 0x456BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456BBCu;
            // 0x456bc0: 0x8e0400ec  lw          $a0, 0xEC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456BD8u;
            goto label_456bd8;
        }
    }
    ctx->pc = 0x456BC4u;
label_456bc4:
    // 0x456bc4: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x456bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_456bc8:
    // 0x456bc8: 0xc122d2c  jal         func_48B4B0
label_456bcc:
    if (ctx->pc == 0x456BCCu) {
        ctx->pc = 0x456BCCu;
            // 0x456bcc: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x456BD0u;
        goto label_456bd0;
    }
    ctx->pc = 0x456BC8u;
    SET_GPR_U32(ctx, 31, 0x456BD0u);
    ctx->pc = 0x456BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456BC8u;
            // 0x456bcc: 0x26060010  addiu       $a2, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BD0u; }
        if (ctx->pc != 0x456BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BD0u; }
        if (ctx->pc != 0x456BD0u) { return; }
    }
    ctx->pc = 0x456BD0u;
label_456bd0:
    // 0x456bd0: 0xa200010a  sb          $zero, 0x10A($s0)
    ctx->pc = 0x456bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 266), (uint8_t)GPR_U32(ctx, 0));
label_456bd4:
    // 0x456bd4: 0x8e0400ec  lw          $a0, 0xEC($s0)
    ctx->pc = 0x456bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 236)));
label_456bd8:
    // 0x456bd8: 0xc122c5c  jal         func_48B170
label_456bdc:
    if (ctx->pc == 0x456BDCu) {
        ctx->pc = 0x456BDCu;
            // 0x456bdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x456BE0u;
        goto label_456be0;
    }
    ctx->pc = 0x456BD8u;
    SET_GPR_U32(ctx, 31, 0x456BE0u);
    ctx->pc = 0x456BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456BD8u;
            // 0x456bdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B170u;
    if (runtime->hasFunction(0x48B170u)) {
        auto targetFn = runtime->lookupFunction(0x48B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BE0u; }
        if (ctx->pc != 0x456BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B170_0x48b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456BE0u; }
        if (ctx->pc != 0x456BE0u) { return; }
    }
    ctx->pc = 0x456BE0u;
label_456be0:
    // 0x456be0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456be4:
    // 0x456be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456be8:
    // 0x456be8: 0x3e00008  jr          $ra
label_456bec:
    if (ctx->pc == 0x456BECu) {
        ctx->pc = 0x456BECu;
            // 0x456bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x456BF0u;
        goto label_456bf0;
    }
    ctx->pc = 0x456BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456BE8u;
            // 0x456bec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456BF0u;
label_456bf0:
    // 0x456bf0: 0x3e00008  jr          $ra
label_456bf4:
    if (ctx->pc == 0x456BF4u) {
        ctx->pc = 0x456BF4u;
            // 0x456bf4: 0x24023e9e  addiu       $v0, $zero, 0x3E9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16030));
        ctx->pc = 0x456BF8u;
        goto label_456bf8;
    }
    ctx->pc = 0x456BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456BF0u;
            // 0x456bf4: 0x24023e9e  addiu       $v0, $zero, 0x3E9E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16030));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456BF8u;
label_456bf8:
    // 0x456bf8: 0x0  nop
    ctx->pc = 0x456bf8u;
    // NOP
label_456bfc:
    // 0x456bfc: 0x0  nop
    ctx->pc = 0x456bfcu;
    // NOP
label_456c00:
    // 0x456c00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x456c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_456c04:
    // 0x456c04: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x456c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_456c08:
    // 0x456c08: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x456c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_456c0c:
    // 0x456c0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x456c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_456c10:
    // 0x456c10: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x456c10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456c14:
    // 0x456c14: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x456c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_456c18:
    // 0x456c18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456c1c:
    // 0x456c1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456c20:
    // 0x456c20: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x456c20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_456c24:
    // 0x456c24: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_456c28:
    if (ctx->pc == 0x456C28u) {
        ctx->pc = 0x456C28u;
            // 0x456c28: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456C2Cu;
        goto label_456c2c;
    }
    ctx->pc = 0x456C24u;
    {
        const bool branch_taken_0x456c24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x456C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456C24u;
            // 0x456c28: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456c24) {
            ctx->pc = 0x456C68u;
            goto label_456c68;
        }
    }
    ctx->pc = 0x456C2Cu;
label_456c2c:
    // 0x456c2c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x456c2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456c30:
    // 0x456c30: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x456c30u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456c34:
    // 0x456c34: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x456c34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456c38:
    // 0x456c38: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x456c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_456c3c:
    // 0x456c3c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x456c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_456c40:
    // 0x456c40: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x456c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_456c44:
    // 0x456c44: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x456c44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_456c48:
    // 0x456c48: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x456c48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_456c4c:
    // 0x456c4c: 0x320f809  jalr        $t9
label_456c50:
    if (ctx->pc == 0x456C50u) {
        ctx->pc = 0x456C54u;
        goto label_456c54;
    }
    ctx->pc = 0x456C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x456C54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x456C54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x456C54u; }
            if (ctx->pc != 0x456C54u) { return; }
        }
        }
    }
    ctx->pc = 0x456C54u;
label_456c54:
    // 0x456c54: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x456c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_456c58:
    // 0x456c58: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x456c58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_456c5c:
    // 0x456c5c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x456c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_456c60:
    // 0x456c60: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_456c64:
    if (ctx->pc == 0x456C64u) {
        ctx->pc = 0x456C64u;
            // 0x456c64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x456C68u;
        goto label_456c68;
    }
    ctx->pc = 0x456C60u;
    {
        const bool branch_taken_0x456c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x456C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456C60u;
            // 0x456c64: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456c60) {
            ctx->pc = 0x456C38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_456c38;
        }
    }
    ctx->pc = 0x456C68u;
label_456c68:
    // 0x456c68: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x456c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_456c6c:
    // 0x456c6c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x456c6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_456c70:
    // 0x456c70: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x456c70u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_456c74:
    // 0x456c74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x456c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_456c78:
    // 0x456c78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x456c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_456c7c:
    // 0x456c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456c80:
    // 0x456c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456c84:
    // 0x456c84: 0x3e00008  jr          $ra
label_456c88:
    if (ctx->pc == 0x456C88u) {
        ctx->pc = 0x456C88u;
            // 0x456c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x456C8Cu;
        goto label_456c8c;
    }
    ctx->pc = 0x456C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456C84u;
            // 0x456c88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456C8Cu;
label_456c8c:
    // 0x456c8c: 0x0  nop
    ctx->pc = 0x456c8cu;
    // NOP
label_456c90:
    // 0x456c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x456c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_456c94:
    // 0x456c94: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x456c94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_456c98:
    // 0x456c98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456c9c:
    // 0x456c9c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x456c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_456ca0:
    // 0x456ca0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456ca4:
    // 0x456ca4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x456ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_456ca8:
    // 0x456ca8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x456ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_456cac:
    // 0x456cac: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x456cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_456cb0:
    // 0x456cb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x456cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_456cb4:
    // 0x456cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x456cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_456cb8:
    // 0x456cb8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x456cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_456cbc:
    // 0x456cbc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x456cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_456cc0:
    // 0x456cc0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x456cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_456cc4:
    // 0x456cc4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x456cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_456cc8:
    // 0x456cc8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x456cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_456ccc:
    // 0x456ccc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x456cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_456cd0:
    // 0x456cd0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x456cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_456cd4:
    // 0x456cd4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x456cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_456cd8:
    // 0x456cd8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x456cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_456cdc:
    // 0x456cdc: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x456cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_456ce0:
    // 0x456ce0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x456ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_456ce4:
    // 0x456ce4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x456ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_456ce8:
    // 0x456ce8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x456ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_456cec:
    // 0x456cec: 0xc0a997c  jal         func_2A65F0
label_456cf0:
    if (ctx->pc == 0x456CF0u) {
        ctx->pc = 0x456CF0u;
            // 0x456cf0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x456CF4u;
        goto label_456cf4;
    }
    ctx->pc = 0x456CECu;
    SET_GPR_U32(ctx, 31, 0x456CF4u);
    ctx->pc = 0x456CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456CECu;
            // 0x456cf0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456CF4u; }
        if (ctx->pc != 0x456CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456CF4u; }
        if (ctx->pc != 0x456CF4u) { return; }
    }
    ctx->pc = 0x456CF4u;
label_456cf4:
    // 0x456cf4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x456cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_456cf8:
    // 0x456cf8: 0xc0d879c  jal         func_361E70
label_456cfc:
    if (ctx->pc == 0x456CFCu) {
        ctx->pc = 0x456CFCu;
            // 0x456cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456D00u;
        goto label_456d00;
    }
    ctx->pc = 0x456CF8u;
    SET_GPR_U32(ctx, 31, 0x456D00u);
    ctx->pc = 0x456CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456CF8u;
            // 0x456cfc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456D00u; }
        if (ctx->pc != 0x456D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456D00u; }
        if (ctx->pc != 0x456D00u) { return; }
    }
    ctx->pc = 0x456D00u;
label_456d00:
    // 0x456d00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456d04:
    // 0x456d04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456d08:
    // 0x456d08: 0x3e00008  jr          $ra
label_456d0c:
    if (ctx->pc == 0x456D0Cu) {
        ctx->pc = 0x456D0Cu;
            // 0x456d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x456D10u;
        goto label_456d10;
    }
    ctx->pc = 0x456D08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456D08u;
            // 0x456d0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456D10u;
label_456d10:
    // 0x456d10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x456d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_456d14:
    // 0x456d14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x456d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_456d18:
    // 0x456d18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456d1c:
    // 0x456d1c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x456d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_456d20:
    // 0x456d20: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_456d24:
    if (ctx->pc == 0x456D24u) {
        ctx->pc = 0x456D24u;
            // 0x456d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456D28u;
        goto label_456d28;
    }
    ctx->pc = 0x456D20u;
    {
        const bool branch_taken_0x456d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456D20u;
            // 0x456d24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456d20) {
            ctx->pc = 0x456E40u;
            goto label_456e40;
        }
    }
    ctx->pc = 0x456D28u;
label_456d28:
    // 0x456d28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x456d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_456d2c:
    // 0x456d2c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x456d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_456d30:
    // 0x456d30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x456d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_456d34:
    // 0x456d34: 0xc075128  jal         func_1D44A0
label_456d38:
    if (ctx->pc == 0x456D38u) {
        ctx->pc = 0x456D38u;
            // 0x456d38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x456D3Cu;
        goto label_456d3c;
    }
    ctx->pc = 0x456D34u;
    SET_GPR_U32(ctx, 31, 0x456D3Cu);
    ctx->pc = 0x456D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456D34u;
            // 0x456d38: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456D3Cu; }
        if (ctx->pc != 0x456D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456D3Cu; }
        if (ctx->pc != 0x456D3Cu) { return; }
    }
    ctx->pc = 0x456D3Cu;
label_456d3c:
    // 0x456d3c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x456d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_456d40:
    // 0x456d40: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456d40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456d44:
    // 0x456d44: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x456d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_456d48:
    // 0x456d48: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x456d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_456d4c:
    // 0x456d4c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x456d4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_456d50:
    // 0x456d50: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_456d54:
    if (ctx->pc == 0x456D54u) {
        ctx->pc = 0x456D54u;
            // 0x456d54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x456D58u;
        goto label_456d58;
    }
    ctx->pc = 0x456D50u;
    {
        const bool branch_taken_0x456d50 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x456D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456D50u;
            // 0x456d54: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456d50) {
            ctx->pc = 0x456D60u;
            goto label_456d60;
        }
    }
    ctx->pc = 0x456D58u;
label_456d58:
    // 0x456d58: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456d5c:
    // 0x456d5c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x456d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_456d60:
    // 0x456d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x456d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_456d64:
    // 0x456d64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456d68:
    // 0x456d68: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x456d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_456d6c:
    // 0x456d6c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x456d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_456d70:
    // 0x456d70: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x456d70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_456d74:
    // 0x456d74: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_456d78:
    if (ctx->pc == 0x456D78u) {
        ctx->pc = 0x456D78u;
            // 0x456d78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x456D7Cu;
        goto label_456d7c;
    }
    ctx->pc = 0x456D74u;
    {
        const bool branch_taken_0x456d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d74) {
            ctx->pc = 0x456D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456D74u;
            // 0x456d78: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456D88u;
            goto label_456d88;
        }
    }
    ctx->pc = 0x456D7Cu;
label_456d7c:
    // 0x456d7c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456d80:
    // 0x456d80: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x456d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_456d84:
    // 0x456d84: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x456d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_456d88:
    // 0x456d88: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456d8c:
    // 0x456d8c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x456d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_456d90:
    // 0x456d90: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x456d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_456d94:
    // 0x456d94: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x456d94u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_456d98:
    // 0x456d98: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_456d9c:
    if (ctx->pc == 0x456D9Cu) {
        ctx->pc = 0x456D9Cu;
            // 0x456d9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x456DA0u;
        goto label_456da0;
    }
    ctx->pc = 0x456D98u;
    {
        const bool branch_taken_0x456d98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456d98) {
            ctx->pc = 0x456D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456D98u;
            // 0x456d9c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456DACu;
            goto label_456dac;
        }
    }
    ctx->pc = 0x456DA0u;
label_456da0:
    // 0x456da0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x456da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_456da4:
    // 0x456da4: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x456da4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_456da8:
    // 0x456da8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x456da8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_456dac:
    // 0x456dac: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x456dacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_456db0:
    // 0x456db0: 0x320f809  jalr        $t9
label_456db4:
    if (ctx->pc == 0x456DB4u) {
        ctx->pc = 0x456DB4u;
            // 0x456db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456DB8u;
        goto label_456db8;
    }
    ctx->pc = 0x456DB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x456DB8u);
        ctx->pc = 0x456DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456DB0u;
            // 0x456db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x456DB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x456DB8u; }
            if (ctx->pc != 0x456DB8u) { return; }
        }
        }
    }
    ctx->pc = 0x456DB8u;
label_456db8:
    // 0x456db8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x456db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_456dbc:
    // 0x456dbc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456dc0:
    // 0x456dc0: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x456dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_456dc4:
    // 0x456dc4: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x456dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_456dc8:
    // 0x456dc8: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x456dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_456dcc:
    // 0x456dcc: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x456dccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_456dd0:
    // 0x456dd0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_456dd4:
    if (ctx->pc == 0x456DD4u) {
        ctx->pc = 0x456DD4u;
            // 0x456dd4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x456DD8u;
        goto label_456dd8;
    }
    ctx->pc = 0x456DD0u;
    {
        const bool branch_taken_0x456dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456dd0) {
            ctx->pc = 0x456DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456DD0u;
            // 0x456dd4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456DE4u;
            goto label_456de4;
        }
    }
    ctx->pc = 0x456DD8u;
label_456dd8:
    // 0x456dd8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456ddc:
    // 0x456ddc: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x456ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_456de0:
    // 0x456de0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x456de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_456de4:
    // 0x456de4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456de8:
    // 0x456de8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x456de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_456dec:
    // 0x456dec: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x456decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_456df0:
    // 0x456df0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x456df0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_456df4:
    // 0x456df4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x456df4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_456df8:
    // 0x456df8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_456dfc:
    if (ctx->pc == 0x456DFCu) {
        ctx->pc = 0x456E00u;
        goto label_456e00;
    }
    ctx->pc = 0x456DF8u;
    {
        const bool branch_taken_0x456df8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456df8) {
            ctx->pc = 0x456E08u;
            goto label_456e08;
        }
    }
    ctx->pc = 0x456E00u;
label_456e00:
    // 0x456e00: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456e00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456e04:
    // 0x456e04: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x456e04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_456e08:
    // 0x456e08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456e0c:
    // 0x456e0c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x456e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_456e10:
    // 0x456e10: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x456e10u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_456e14:
    // 0x456e14: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_456e18:
    if (ctx->pc == 0x456E18u) {
        ctx->pc = 0x456E1Cu;
        goto label_456e1c;
    }
    ctx->pc = 0x456E14u;
    {
        const bool branch_taken_0x456e14 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e14) {
            ctx->pc = 0x456E24u;
            goto label_456e24;
        }
    }
    ctx->pc = 0x456E1Cu;
label_456e1c:
    // 0x456e1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456e20:
    // 0x456e20: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x456e20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_456e24:
    // 0x456e24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456e28:
    // 0x456e28: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x456e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_456e2c:
    // 0x456e2c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x456e2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_456e30:
    // 0x456e30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_456e34:
    if (ctx->pc == 0x456E34u) {
        ctx->pc = 0x456E34u;
            // 0x456e34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x456E38u;
        goto label_456e38;
    }
    ctx->pc = 0x456E30u;
    {
        const bool branch_taken_0x456e30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x456e30) {
            ctx->pc = 0x456E34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456E30u;
            // 0x456e34: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456E44u;
            goto label_456e44;
        }
    }
    ctx->pc = 0x456E38u;
label_456e38:
    // 0x456e38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x456e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_456e3c:
    // 0x456e3c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x456e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_456e40:
    // 0x456e40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x456e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_456e44:
    // 0x456e44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456e44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456e48:
    // 0x456e48: 0x3e00008  jr          $ra
label_456e4c:
    if (ctx->pc == 0x456E4Cu) {
        ctx->pc = 0x456E4Cu;
            // 0x456e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x456E50u;
        goto label_456e50;
    }
    ctx->pc = 0x456E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456E48u;
            // 0x456e4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456E50u;
label_456e50:
    // 0x456e50: 0x81155a8  j           func_4556A0
label_456e54:
    if (ctx->pc == 0x456E54u) {
        ctx->pc = 0x456E54u;
            // 0x456e54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x456E58u;
        goto label_456e58;
    }
    ctx->pc = 0x456E50u;
    ctx->pc = 0x456E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456E50u;
            // 0x456e54: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4556A0u;
    {
        auto targetFn = runtime->lookupFunction(0x4556A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x456E58u;
label_456e58:
    // 0x456e58: 0x0  nop
    ctx->pc = 0x456e58u;
    // NOP
label_456e5c:
    // 0x456e5c: 0x0  nop
    ctx->pc = 0x456e5cu;
    // NOP
label_456e60:
    // 0x456e60: 0x81152ec  j           func_454BB0
label_456e64:
    if (ctx->pc == 0x456E64u) {
        ctx->pc = 0x456E64u;
            // 0x456e64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x456E68u;
        goto label_456e68;
    }
    ctx->pc = 0x456E60u;
    ctx->pc = 0x456E64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456E60u;
            // 0x456e64: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x454BB0u;
    if (runtime->hasFunction(0x454BB0u)) {
        auto targetFn = runtime->lookupFunction(0x454BB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00454BB0_0x454bb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x456E68u;
label_456e68:
    // 0x456e68: 0x0  nop
    ctx->pc = 0x456e68u;
    // NOP
label_456e6c:
    // 0x456e6c: 0x0  nop
    ctx->pc = 0x456e6cu;
    // NOP
label_456e70:
    // 0x456e70: 0x8115344  j           func_454D10
label_456e74:
    if (ctx->pc == 0x456E74u) {
        ctx->pc = 0x456E74u;
            // 0x456e74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x456E78u;
        goto label_456e78;
    }
    ctx->pc = 0x456E70u;
    ctx->pc = 0x456E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456E70u;
            // 0x456e74: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x454D10u;
    {
        auto targetFn = runtime->lookupFunction(0x454D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x456E78u;
label_456e78:
    // 0x456e78: 0x0  nop
    ctx->pc = 0x456e78u;
    // NOP
label_456e7c:
    // 0x456e7c: 0x0  nop
    ctx->pc = 0x456e7cu;
    // NOP
label_456e80:
    // 0x456e80: 0x81152c8  j           func_454B20
label_456e84:
    if (ctx->pc == 0x456E84u) {
        ctx->pc = 0x456E84u;
            // 0x456e84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x456E88u;
        goto label_456e88;
    }
    ctx->pc = 0x456E80u;
    ctx->pc = 0x456E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456E80u;
            // 0x456e84: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x454B20u;
    {
        auto targetFn = runtime->lookupFunction(0x454B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x456E88u;
label_456e88:
    // 0x456e88: 0x0  nop
    ctx->pc = 0x456e88u;
    // NOP
label_456e8c:
    // 0x456e8c: 0x0  nop
    ctx->pc = 0x456e8cu;
    // NOP
label_456e90:
    // 0x456e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x456e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_456e94:
    // 0x456e94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_456e98:
    // 0x456e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456e9c:
    // 0x456e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456ea0:
    // 0x456ea0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x456ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_456ea4:
    // 0x456ea4: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_456ea8:
    if (ctx->pc == 0x456EA8u) {
        ctx->pc = 0x456EA8u;
            // 0x456ea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456EACu;
        goto label_456eac;
    }
    ctx->pc = 0x456EA4u;
    {
        const bool branch_taken_0x456ea4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x456EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456EA4u;
            // 0x456ea8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456ea4) {
            ctx->pc = 0x456EE8u;
            goto label_456ee8;
        }
    }
    ctx->pc = 0x456EACu;
label_456eac:
    // 0x456eac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x456eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_456eb0:
    // 0x456eb0: 0x2442e210  addiu       $v0, $v0, -0x1DF0
    ctx->pc = 0x456eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959632));
label_456eb4:
    // 0x456eb4: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_456eb8:
    if (ctx->pc == 0x456EB8u) {
        ctx->pc = 0x456EB8u;
            // 0x456eb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x456EBCu;
        goto label_456ebc;
    }
    ctx->pc = 0x456EB4u;
    {
        const bool branch_taken_0x456eb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x456EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456EB4u;
            // 0x456eb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456eb4) {
            ctx->pc = 0x456ED0u;
            goto label_456ed0;
        }
    }
    ctx->pc = 0x456EBCu;
label_456ebc:
    // 0x456ebc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x456ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_456ec0:
    // 0x456ec0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x456ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_456ec4:
    // 0x456ec4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x456ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_456ec8:
    // 0x456ec8: 0xc057a68  jal         func_15E9A0
label_456ecc:
    if (ctx->pc == 0x456ECCu) {
        ctx->pc = 0x456ECCu;
            // 0x456ecc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x456ED0u;
        goto label_456ed0;
    }
    ctx->pc = 0x456EC8u;
    SET_GPR_U32(ctx, 31, 0x456ED0u);
    ctx->pc = 0x456ECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456EC8u;
            // 0x456ecc: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456ED0u; }
        if (ctx->pc != 0x456ED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456ED0u; }
        if (ctx->pc != 0x456ED0u) { return; }
    }
    ctx->pc = 0x456ED0u;
label_456ed0:
    // 0x456ed0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x456ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_456ed4:
    // 0x456ed4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x456ed4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_456ed8:
    // 0x456ed8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_456edc:
    if (ctx->pc == 0x456EDCu) {
        ctx->pc = 0x456EDCu;
            // 0x456edc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456EE0u;
        goto label_456ee0;
    }
    ctx->pc = 0x456ED8u;
    {
        const bool branch_taken_0x456ed8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x456ed8) {
            ctx->pc = 0x456EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456ED8u;
            // 0x456edc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456EECu;
            goto label_456eec;
        }
    }
    ctx->pc = 0x456EE0u;
label_456ee0:
    // 0x456ee0: 0xc0400a8  jal         func_1002A0
label_456ee4:
    if (ctx->pc == 0x456EE4u) {
        ctx->pc = 0x456EE4u;
            // 0x456ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456EE8u;
        goto label_456ee8;
    }
    ctx->pc = 0x456EE0u;
    SET_GPR_U32(ctx, 31, 0x456EE8u);
    ctx->pc = 0x456EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456EE0u;
            // 0x456ee4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456EE8u; }
        if (ctx->pc != 0x456EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456EE8u; }
        if (ctx->pc != 0x456EE8u) { return; }
    }
    ctx->pc = 0x456EE8u;
label_456ee8:
    // 0x456ee8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x456ee8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_456eec:
    // 0x456eec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x456eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_456ef0:
    // 0x456ef0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456ef0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456ef4:
    // 0x456ef4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456ef4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456ef8:
    // 0x456ef8: 0x3e00008  jr          $ra
label_456efc:
    if (ctx->pc == 0x456EFCu) {
        ctx->pc = 0x456EFCu;
            // 0x456efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x456F00u;
        goto label_456f00;
    }
    ctx->pc = 0x456EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456EF8u;
            // 0x456efc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456F00u;
label_456f00:
    // 0x456f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x456f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_456f04:
    // 0x456f04: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x456f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_456f08:
    // 0x456f08: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x456f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_456f0c:
    // 0x456f0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x456f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_456f10:
    // 0x456f10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x456f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_456f14:
    // 0x456f14: 0x8c6389d0  lw          $v1, -0x7630($v1)
    ctx->pc = 0x456f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937040)));
label_456f18:
    // 0x456f18: 0x8071008e  lb          $s1, 0x8E($v1)
    ctx->pc = 0x456f18u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 142)));
label_456f1c:
    // 0x456f1c: 0x32230002  andi        $v1, $s1, 0x2
    ctx->pc = 0x456f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_456f20:
    // 0x456f20: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_456f24:
    if (ctx->pc == 0x456F24u) {
        ctx->pc = 0x456F24u;
            // 0x456f24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456F28u;
        goto label_456f28;
    }
    ctx->pc = 0x456F20u;
    {
        const bool branch_taken_0x456f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x456F24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456F20u;
            // 0x456f24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x456f20) {
            ctx->pc = 0x456F40u;
            goto label_456f40;
        }
    }
    ctx->pc = 0x456F28u;
label_456f28:
    // 0x456f28: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x456f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_456f2c:
    // 0x456f2c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x456f2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_456f30:
    // 0x456f30: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_456f34:
    if (ctx->pc == 0x456F34u) {
        ctx->pc = 0x456F34u;
            // 0x456f34: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x456F38u;
        goto label_456f38;
    }
    ctx->pc = 0x456F30u;
    {
        const bool branch_taken_0x456f30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x456f30) {
            ctx->pc = 0x456F34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456F30u;
            // 0x456f34: 0x32230001  andi        $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x456F44u;
            goto label_456f44;
        }
    }
    ctx->pc = 0x456F38u;
label_456f38:
    // 0x456f38: 0xc115cd8  jal         func_457360
label_456f3c:
    if (ctx->pc == 0x456F3Cu) {
        ctx->pc = 0x456F40u;
        goto label_456f40;
    }
    ctx->pc = 0x456F38u;
    SET_GPR_U32(ctx, 31, 0x456F40u);
    ctx->pc = 0x457360u;
    if (runtime->hasFunction(0x457360u)) {
        auto targetFn = runtime->lookupFunction(0x457360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456F40u; }
        if (ctx->pc != 0x456F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00457360_0x457360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456F40u; }
        if (ctx->pc != 0x456F40u) { return; }
    }
    ctx->pc = 0x456F40u;
label_456f40:
    // 0x456f40: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x456f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_456f44:
    // 0x456f44: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
label_456f48:
    if (ctx->pc == 0x456F48u) {
        ctx->pc = 0x456F48u;
            // 0x456f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x456F4Cu;
        goto label_456f4c;
    }
    ctx->pc = 0x456F44u;
    {
        const bool branch_taken_0x456f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x456f44) {
            ctx->pc = 0x456F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x456F44u;
            // 0x456f48: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x456F68u;
            goto label_456f68;
        }
    }
    ctx->pc = 0x456F4Cu;
label_456f4c:
    // 0x456f4c: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x456f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_456f50:
    // 0x456f50: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x456f50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_456f54:
    // 0x456f54: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_456f58:
    if (ctx->pc == 0x456F58u) {
        ctx->pc = 0x456F5Cu;
        goto label_456f5c;
    }
    ctx->pc = 0x456F54u;
    {
        const bool branch_taken_0x456f54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x456f54) {
            ctx->pc = 0x456F64u;
            goto label_456f64;
        }
    }
    ctx->pc = 0x456F5Cu;
label_456f5c:
    // 0x456f5c: 0xc115be0  jal         func_456F80
label_456f60:
    if (ctx->pc == 0x456F60u) {
        ctx->pc = 0x456F60u;
            // 0x456f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x456F64u;
        goto label_456f64;
    }
    ctx->pc = 0x456F5Cu;
    SET_GPR_U32(ctx, 31, 0x456F64u);
    ctx->pc = 0x456F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x456F5Cu;
            // 0x456f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x456F80u;
    if (runtime->hasFunction(0x456F80u)) {
        auto targetFn = runtime->lookupFunction(0x456F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456F64u; }
        if (ctx->pc != 0x456F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00456F80_0x456f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x456F64u; }
        if (ctx->pc != 0x456F64u) { return; }
    }
    ctx->pc = 0x456F64u;
label_456f64:
    // 0x456f64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x456f64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_456f68:
    // 0x456f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x456f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_456f6c:
    // 0x456f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x456f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_456f70:
    // 0x456f70: 0x3e00008  jr          $ra
label_456f74:
    if (ctx->pc == 0x456F74u) {
        ctx->pc = 0x456F74u;
            // 0x456f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x456F78u;
        goto label_456f78;
    }
    ctx->pc = 0x456F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x456F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x456F70u;
            // 0x456f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x456F78u;
label_456f78:
    // 0x456f78: 0x0  nop
    ctx->pc = 0x456f78u;
    // NOP
label_456f7c:
    // 0x456f7c: 0x0  nop
    ctx->pc = 0x456f7cu;
    // NOP
}
