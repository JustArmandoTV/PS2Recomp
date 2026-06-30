#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C7940
// Address: 0x1c7940 - 0x1c7f10
void sub_001C7940_0x1c7940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C7940_0x1c7940");
#endif

    switch (ctx->pc) {
        case 0x1c7940u: goto label_1c7940;
        case 0x1c7944u: goto label_1c7944;
        case 0x1c7948u: goto label_1c7948;
        case 0x1c794cu: goto label_1c794c;
        case 0x1c7950u: goto label_1c7950;
        case 0x1c7954u: goto label_1c7954;
        case 0x1c7958u: goto label_1c7958;
        case 0x1c795cu: goto label_1c795c;
        case 0x1c7960u: goto label_1c7960;
        case 0x1c7964u: goto label_1c7964;
        case 0x1c7968u: goto label_1c7968;
        case 0x1c796cu: goto label_1c796c;
        case 0x1c7970u: goto label_1c7970;
        case 0x1c7974u: goto label_1c7974;
        case 0x1c7978u: goto label_1c7978;
        case 0x1c797cu: goto label_1c797c;
        case 0x1c7980u: goto label_1c7980;
        case 0x1c7984u: goto label_1c7984;
        case 0x1c7988u: goto label_1c7988;
        case 0x1c798cu: goto label_1c798c;
        case 0x1c7990u: goto label_1c7990;
        case 0x1c7994u: goto label_1c7994;
        case 0x1c7998u: goto label_1c7998;
        case 0x1c799cu: goto label_1c799c;
        case 0x1c79a0u: goto label_1c79a0;
        case 0x1c79a4u: goto label_1c79a4;
        case 0x1c79a8u: goto label_1c79a8;
        case 0x1c79acu: goto label_1c79ac;
        case 0x1c79b0u: goto label_1c79b0;
        case 0x1c79b4u: goto label_1c79b4;
        case 0x1c79b8u: goto label_1c79b8;
        case 0x1c79bcu: goto label_1c79bc;
        case 0x1c79c0u: goto label_1c79c0;
        case 0x1c79c4u: goto label_1c79c4;
        case 0x1c79c8u: goto label_1c79c8;
        case 0x1c79ccu: goto label_1c79cc;
        case 0x1c79d0u: goto label_1c79d0;
        case 0x1c79d4u: goto label_1c79d4;
        case 0x1c79d8u: goto label_1c79d8;
        case 0x1c79dcu: goto label_1c79dc;
        case 0x1c79e0u: goto label_1c79e0;
        case 0x1c79e4u: goto label_1c79e4;
        case 0x1c79e8u: goto label_1c79e8;
        case 0x1c79ecu: goto label_1c79ec;
        case 0x1c79f0u: goto label_1c79f0;
        case 0x1c79f4u: goto label_1c79f4;
        case 0x1c79f8u: goto label_1c79f8;
        case 0x1c79fcu: goto label_1c79fc;
        case 0x1c7a00u: goto label_1c7a00;
        case 0x1c7a04u: goto label_1c7a04;
        case 0x1c7a08u: goto label_1c7a08;
        case 0x1c7a0cu: goto label_1c7a0c;
        case 0x1c7a10u: goto label_1c7a10;
        case 0x1c7a14u: goto label_1c7a14;
        case 0x1c7a18u: goto label_1c7a18;
        case 0x1c7a1cu: goto label_1c7a1c;
        case 0x1c7a20u: goto label_1c7a20;
        case 0x1c7a24u: goto label_1c7a24;
        case 0x1c7a28u: goto label_1c7a28;
        case 0x1c7a2cu: goto label_1c7a2c;
        case 0x1c7a30u: goto label_1c7a30;
        case 0x1c7a34u: goto label_1c7a34;
        case 0x1c7a38u: goto label_1c7a38;
        case 0x1c7a3cu: goto label_1c7a3c;
        case 0x1c7a40u: goto label_1c7a40;
        case 0x1c7a44u: goto label_1c7a44;
        case 0x1c7a48u: goto label_1c7a48;
        case 0x1c7a4cu: goto label_1c7a4c;
        case 0x1c7a50u: goto label_1c7a50;
        case 0x1c7a54u: goto label_1c7a54;
        case 0x1c7a58u: goto label_1c7a58;
        case 0x1c7a5cu: goto label_1c7a5c;
        case 0x1c7a60u: goto label_1c7a60;
        case 0x1c7a64u: goto label_1c7a64;
        case 0x1c7a68u: goto label_1c7a68;
        case 0x1c7a6cu: goto label_1c7a6c;
        case 0x1c7a70u: goto label_1c7a70;
        case 0x1c7a74u: goto label_1c7a74;
        case 0x1c7a78u: goto label_1c7a78;
        case 0x1c7a7cu: goto label_1c7a7c;
        case 0x1c7a80u: goto label_1c7a80;
        case 0x1c7a84u: goto label_1c7a84;
        case 0x1c7a88u: goto label_1c7a88;
        case 0x1c7a8cu: goto label_1c7a8c;
        case 0x1c7a90u: goto label_1c7a90;
        case 0x1c7a94u: goto label_1c7a94;
        case 0x1c7a98u: goto label_1c7a98;
        case 0x1c7a9cu: goto label_1c7a9c;
        case 0x1c7aa0u: goto label_1c7aa0;
        case 0x1c7aa4u: goto label_1c7aa4;
        case 0x1c7aa8u: goto label_1c7aa8;
        case 0x1c7aacu: goto label_1c7aac;
        case 0x1c7ab0u: goto label_1c7ab0;
        case 0x1c7ab4u: goto label_1c7ab4;
        case 0x1c7ab8u: goto label_1c7ab8;
        case 0x1c7abcu: goto label_1c7abc;
        case 0x1c7ac0u: goto label_1c7ac0;
        case 0x1c7ac4u: goto label_1c7ac4;
        case 0x1c7ac8u: goto label_1c7ac8;
        case 0x1c7accu: goto label_1c7acc;
        case 0x1c7ad0u: goto label_1c7ad0;
        case 0x1c7ad4u: goto label_1c7ad4;
        case 0x1c7ad8u: goto label_1c7ad8;
        case 0x1c7adcu: goto label_1c7adc;
        case 0x1c7ae0u: goto label_1c7ae0;
        case 0x1c7ae4u: goto label_1c7ae4;
        case 0x1c7ae8u: goto label_1c7ae8;
        case 0x1c7aecu: goto label_1c7aec;
        case 0x1c7af0u: goto label_1c7af0;
        case 0x1c7af4u: goto label_1c7af4;
        case 0x1c7af8u: goto label_1c7af8;
        case 0x1c7afcu: goto label_1c7afc;
        case 0x1c7b00u: goto label_1c7b00;
        case 0x1c7b04u: goto label_1c7b04;
        case 0x1c7b08u: goto label_1c7b08;
        case 0x1c7b0cu: goto label_1c7b0c;
        case 0x1c7b10u: goto label_1c7b10;
        case 0x1c7b14u: goto label_1c7b14;
        case 0x1c7b18u: goto label_1c7b18;
        case 0x1c7b1cu: goto label_1c7b1c;
        case 0x1c7b20u: goto label_1c7b20;
        case 0x1c7b24u: goto label_1c7b24;
        case 0x1c7b28u: goto label_1c7b28;
        case 0x1c7b2cu: goto label_1c7b2c;
        case 0x1c7b30u: goto label_1c7b30;
        case 0x1c7b34u: goto label_1c7b34;
        case 0x1c7b38u: goto label_1c7b38;
        case 0x1c7b3cu: goto label_1c7b3c;
        case 0x1c7b40u: goto label_1c7b40;
        case 0x1c7b44u: goto label_1c7b44;
        case 0x1c7b48u: goto label_1c7b48;
        case 0x1c7b4cu: goto label_1c7b4c;
        case 0x1c7b50u: goto label_1c7b50;
        case 0x1c7b54u: goto label_1c7b54;
        case 0x1c7b58u: goto label_1c7b58;
        case 0x1c7b5cu: goto label_1c7b5c;
        case 0x1c7b60u: goto label_1c7b60;
        case 0x1c7b64u: goto label_1c7b64;
        case 0x1c7b68u: goto label_1c7b68;
        case 0x1c7b6cu: goto label_1c7b6c;
        case 0x1c7b70u: goto label_1c7b70;
        case 0x1c7b74u: goto label_1c7b74;
        case 0x1c7b78u: goto label_1c7b78;
        case 0x1c7b7cu: goto label_1c7b7c;
        case 0x1c7b80u: goto label_1c7b80;
        case 0x1c7b84u: goto label_1c7b84;
        case 0x1c7b88u: goto label_1c7b88;
        case 0x1c7b8cu: goto label_1c7b8c;
        case 0x1c7b90u: goto label_1c7b90;
        case 0x1c7b94u: goto label_1c7b94;
        case 0x1c7b98u: goto label_1c7b98;
        case 0x1c7b9cu: goto label_1c7b9c;
        case 0x1c7ba0u: goto label_1c7ba0;
        case 0x1c7ba4u: goto label_1c7ba4;
        case 0x1c7ba8u: goto label_1c7ba8;
        case 0x1c7bacu: goto label_1c7bac;
        case 0x1c7bb0u: goto label_1c7bb0;
        case 0x1c7bb4u: goto label_1c7bb4;
        case 0x1c7bb8u: goto label_1c7bb8;
        case 0x1c7bbcu: goto label_1c7bbc;
        case 0x1c7bc0u: goto label_1c7bc0;
        case 0x1c7bc4u: goto label_1c7bc4;
        case 0x1c7bc8u: goto label_1c7bc8;
        case 0x1c7bccu: goto label_1c7bcc;
        case 0x1c7bd0u: goto label_1c7bd0;
        case 0x1c7bd4u: goto label_1c7bd4;
        case 0x1c7bd8u: goto label_1c7bd8;
        case 0x1c7bdcu: goto label_1c7bdc;
        case 0x1c7be0u: goto label_1c7be0;
        case 0x1c7be4u: goto label_1c7be4;
        case 0x1c7be8u: goto label_1c7be8;
        case 0x1c7becu: goto label_1c7bec;
        case 0x1c7bf0u: goto label_1c7bf0;
        case 0x1c7bf4u: goto label_1c7bf4;
        case 0x1c7bf8u: goto label_1c7bf8;
        case 0x1c7bfcu: goto label_1c7bfc;
        case 0x1c7c00u: goto label_1c7c00;
        case 0x1c7c04u: goto label_1c7c04;
        case 0x1c7c08u: goto label_1c7c08;
        case 0x1c7c0cu: goto label_1c7c0c;
        case 0x1c7c10u: goto label_1c7c10;
        case 0x1c7c14u: goto label_1c7c14;
        case 0x1c7c18u: goto label_1c7c18;
        case 0x1c7c1cu: goto label_1c7c1c;
        case 0x1c7c20u: goto label_1c7c20;
        case 0x1c7c24u: goto label_1c7c24;
        case 0x1c7c28u: goto label_1c7c28;
        case 0x1c7c2cu: goto label_1c7c2c;
        case 0x1c7c30u: goto label_1c7c30;
        case 0x1c7c34u: goto label_1c7c34;
        case 0x1c7c38u: goto label_1c7c38;
        case 0x1c7c3cu: goto label_1c7c3c;
        case 0x1c7c40u: goto label_1c7c40;
        case 0x1c7c44u: goto label_1c7c44;
        case 0x1c7c48u: goto label_1c7c48;
        case 0x1c7c4cu: goto label_1c7c4c;
        case 0x1c7c50u: goto label_1c7c50;
        case 0x1c7c54u: goto label_1c7c54;
        case 0x1c7c58u: goto label_1c7c58;
        case 0x1c7c5cu: goto label_1c7c5c;
        case 0x1c7c60u: goto label_1c7c60;
        case 0x1c7c64u: goto label_1c7c64;
        case 0x1c7c68u: goto label_1c7c68;
        case 0x1c7c6cu: goto label_1c7c6c;
        case 0x1c7c70u: goto label_1c7c70;
        case 0x1c7c74u: goto label_1c7c74;
        case 0x1c7c78u: goto label_1c7c78;
        case 0x1c7c7cu: goto label_1c7c7c;
        case 0x1c7c80u: goto label_1c7c80;
        case 0x1c7c84u: goto label_1c7c84;
        case 0x1c7c88u: goto label_1c7c88;
        case 0x1c7c8cu: goto label_1c7c8c;
        case 0x1c7c90u: goto label_1c7c90;
        case 0x1c7c94u: goto label_1c7c94;
        case 0x1c7c98u: goto label_1c7c98;
        case 0x1c7c9cu: goto label_1c7c9c;
        case 0x1c7ca0u: goto label_1c7ca0;
        case 0x1c7ca4u: goto label_1c7ca4;
        case 0x1c7ca8u: goto label_1c7ca8;
        case 0x1c7cacu: goto label_1c7cac;
        case 0x1c7cb0u: goto label_1c7cb0;
        case 0x1c7cb4u: goto label_1c7cb4;
        case 0x1c7cb8u: goto label_1c7cb8;
        case 0x1c7cbcu: goto label_1c7cbc;
        case 0x1c7cc0u: goto label_1c7cc0;
        case 0x1c7cc4u: goto label_1c7cc4;
        case 0x1c7cc8u: goto label_1c7cc8;
        case 0x1c7cccu: goto label_1c7ccc;
        case 0x1c7cd0u: goto label_1c7cd0;
        case 0x1c7cd4u: goto label_1c7cd4;
        case 0x1c7cd8u: goto label_1c7cd8;
        case 0x1c7cdcu: goto label_1c7cdc;
        case 0x1c7ce0u: goto label_1c7ce0;
        case 0x1c7ce4u: goto label_1c7ce4;
        case 0x1c7ce8u: goto label_1c7ce8;
        case 0x1c7cecu: goto label_1c7cec;
        case 0x1c7cf0u: goto label_1c7cf0;
        case 0x1c7cf4u: goto label_1c7cf4;
        case 0x1c7cf8u: goto label_1c7cf8;
        case 0x1c7cfcu: goto label_1c7cfc;
        case 0x1c7d00u: goto label_1c7d00;
        case 0x1c7d04u: goto label_1c7d04;
        case 0x1c7d08u: goto label_1c7d08;
        case 0x1c7d0cu: goto label_1c7d0c;
        case 0x1c7d10u: goto label_1c7d10;
        case 0x1c7d14u: goto label_1c7d14;
        case 0x1c7d18u: goto label_1c7d18;
        case 0x1c7d1cu: goto label_1c7d1c;
        case 0x1c7d20u: goto label_1c7d20;
        case 0x1c7d24u: goto label_1c7d24;
        case 0x1c7d28u: goto label_1c7d28;
        case 0x1c7d2cu: goto label_1c7d2c;
        case 0x1c7d30u: goto label_1c7d30;
        case 0x1c7d34u: goto label_1c7d34;
        case 0x1c7d38u: goto label_1c7d38;
        case 0x1c7d3cu: goto label_1c7d3c;
        case 0x1c7d40u: goto label_1c7d40;
        case 0x1c7d44u: goto label_1c7d44;
        case 0x1c7d48u: goto label_1c7d48;
        case 0x1c7d4cu: goto label_1c7d4c;
        case 0x1c7d50u: goto label_1c7d50;
        case 0x1c7d54u: goto label_1c7d54;
        case 0x1c7d58u: goto label_1c7d58;
        case 0x1c7d5cu: goto label_1c7d5c;
        case 0x1c7d60u: goto label_1c7d60;
        case 0x1c7d64u: goto label_1c7d64;
        case 0x1c7d68u: goto label_1c7d68;
        case 0x1c7d6cu: goto label_1c7d6c;
        case 0x1c7d70u: goto label_1c7d70;
        case 0x1c7d74u: goto label_1c7d74;
        case 0x1c7d78u: goto label_1c7d78;
        case 0x1c7d7cu: goto label_1c7d7c;
        case 0x1c7d80u: goto label_1c7d80;
        case 0x1c7d84u: goto label_1c7d84;
        case 0x1c7d88u: goto label_1c7d88;
        case 0x1c7d8cu: goto label_1c7d8c;
        case 0x1c7d90u: goto label_1c7d90;
        case 0x1c7d94u: goto label_1c7d94;
        case 0x1c7d98u: goto label_1c7d98;
        case 0x1c7d9cu: goto label_1c7d9c;
        case 0x1c7da0u: goto label_1c7da0;
        case 0x1c7da4u: goto label_1c7da4;
        case 0x1c7da8u: goto label_1c7da8;
        case 0x1c7dacu: goto label_1c7dac;
        case 0x1c7db0u: goto label_1c7db0;
        case 0x1c7db4u: goto label_1c7db4;
        case 0x1c7db8u: goto label_1c7db8;
        case 0x1c7dbcu: goto label_1c7dbc;
        case 0x1c7dc0u: goto label_1c7dc0;
        case 0x1c7dc4u: goto label_1c7dc4;
        case 0x1c7dc8u: goto label_1c7dc8;
        case 0x1c7dccu: goto label_1c7dcc;
        case 0x1c7dd0u: goto label_1c7dd0;
        case 0x1c7dd4u: goto label_1c7dd4;
        case 0x1c7dd8u: goto label_1c7dd8;
        case 0x1c7ddcu: goto label_1c7ddc;
        case 0x1c7de0u: goto label_1c7de0;
        case 0x1c7de4u: goto label_1c7de4;
        case 0x1c7de8u: goto label_1c7de8;
        case 0x1c7decu: goto label_1c7dec;
        case 0x1c7df0u: goto label_1c7df0;
        case 0x1c7df4u: goto label_1c7df4;
        case 0x1c7df8u: goto label_1c7df8;
        case 0x1c7dfcu: goto label_1c7dfc;
        case 0x1c7e00u: goto label_1c7e00;
        case 0x1c7e04u: goto label_1c7e04;
        case 0x1c7e08u: goto label_1c7e08;
        case 0x1c7e0cu: goto label_1c7e0c;
        case 0x1c7e10u: goto label_1c7e10;
        case 0x1c7e14u: goto label_1c7e14;
        case 0x1c7e18u: goto label_1c7e18;
        case 0x1c7e1cu: goto label_1c7e1c;
        case 0x1c7e20u: goto label_1c7e20;
        case 0x1c7e24u: goto label_1c7e24;
        case 0x1c7e28u: goto label_1c7e28;
        case 0x1c7e2cu: goto label_1c7e2c;
        case 0x1c7e30u: goto label_1c7e30;
        case 0x1c7e34u: goto label_1c7e34;
        case 0x1c7e38u: goto label_1c7e38;
        case 0x1c7e3cu: goto label_1c7e3c;
        case 0x1c7e40u: goto label_1c7e40;
        case 0x1c7e44u: goto label_1c7e44;
        case 0x1c7e48u: goto label_1c7e48;
        case 0x1c7e4cu: goto label_1c7e4c;
        case 0x1c7e50u: goto label_1c7e50;
        case 0x1c7e54u: goto label_1c7e54;
        case 0x1c7e58u: goto label_1c7e58;
        case 0x1c7e5cu: goto label_1c7e5c;
        case 0x1c7e60u: goto label_1c7e60;
        case 0x1c7e64u: goto label_1c7e64;
        case 0x1c7e68u: goto label_1c7e68;
        case 0x1c7e6cu: goto label_1c7e6c;
        case 0x1c7e70u: goto label_1c7e70;
        case 0x1c7e74u: goto label_1c7e74;
        case 0x1c7e78u: goto label_1c7e78;
        case 0x1c7e7cu: goto label_1c7e7c;
        case 0x1c7e80u: goto label_1c7e80;
        case 0x1c7e84u: goto label_1c7e84;
        case 0x1c7e88u: goto label_1c7e88;
        case 0x1c7e8cu: goto label_1c7e8c;
        case 0x1c7e90u: goto label_1c7e90;
        case 0x1c7e94u: goto label_1c7e94;
        case 0x1c7e98u: goto label_1c7e98;
        case 0x1c7e9cu: goto label_1c7e9c;
        case 0x1c7ea0u: goto label_1c7ea0;
        case 0x1c7ea4u: goto label_1c7ea4;
        case 0x1c7ea8u: goto label_1c7ea8;
        case 0x1c7eacu: goto label_1c7eac;
        case 0x1c7eb0u: goto label_1c7eb0;
        case 0x1c7eb4u: goto label_1c7eb4;
        case 0x1c7eb8u: goto label_1c7eb8;
        case 0x1c7ebcu: goto label_1c7ebc;
        case 0x1c7ec0u: goto label_1c7ec0;
        case 0x1c7ec4u: goto label_1c7ec4;
        case 0x1c7ec8u: goto label_1c7ec8;
        case 0x1c7eccu: goto label_1c7ecc;
        case 0x1c7ed0u: goto label_1c7ed0;
        case 0x1c7ed4u: goto label_1c7ed4;
        case 0x1c7ed8u: goto label_1c7ed8;
        case 0x1c7edcu: goto label_1c7edc;
        case 0x1c7ee0u: goto label_1c7ee0;
        case 0x1c7ee4u: goto label_1c7ee4;
        case 0x1c7ee8u: goto label_1c7ee8;
        case 0x1c7eecu: goto label_1c7eec;
        case 0x1c7ef0u: goto label_1c7ef0;
        case 0x1c7ef4u: goto label_1c7ef4;
        case 0x1c7ef8u: goto label_1c7ef8;
        case 0x1c7efcu: goto label_1c7efc;
        case 0x1c7f00u: goto label_1c7f00;
        case 0x1c7f04u: goto label_1c7f04;
        case 0x1c7f08u: goto label_1c7f08;
        case 0x1c7f0cu: goto label_1c7f0c;
        default: break;
    }

    ctx->pc = 0x1c7940u;

label_1c7940:
    // 0x1c7940: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c7940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1c7944:
    // 0x1c7944: 0x3e00008  jr          $ra
label_1c7948:
    if (ctx->pc == 0x1C7948u) {
        ctx->pc = 0x1C7948u;
            // 0x1c7948: 0x2442c048  addiu       $v0, $v0, -0x3FB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950984));
        ctx->pc = 0x1C794Cu;
        goto label_1c794c;
    }
    ctx->pc = 0x1C7944u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7944u;
            // 0x1c7948: 0x2442c048  addiu       $v0, $v0, -0x3FB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950984));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C794Cu;
label_1c794c:
    // 0x1c794c: 0x0  nop
    ctx->pc = 0x1c794cu;
    // NOP
label_1c7950:
    // 0x1c7950: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7954:
    // 0x1c7954: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7958:
    // 0x1c7958: 0xc071e50  jal         func_1C7940
label_1c795c:
    if (ctx->pc == 0x1C795Cu) {
        ctx->pc = 0x1C7960u;
        goto label_1c7960;
    }
    ctx->pc = 0x1C7958u;
    SET_GPR_U32(ctx, 31, 0x1C7960u);
    ctx->pc = 0x1C7940u;
    goto label_1c7940;
    ctx->pc = 0x1C7960u;
label_1c7960:
    // 0x1c7960: 0x3c03006e  lui         $v1, 0x6E
    ctx->pc = 0x1c7960u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)110 << 16));
label_1c7964:
    // 0x1c7964: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7964u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7968:
    // 0x1c7968: 0x24633050  addiu       $v1, $v1, 0x3050
    ctx->pc = 0x1c7968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12368));
label_1c796c:
    // 0x1c796c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1c796cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_1c7970:
    // 0x1c7970: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1c7970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1c7974:
    // 0x1c7974: 0x2482a5e8  addiu       $v0, $a0, -0x5A18
    ctx->pc = 0x1c7974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944232));
label_1c7978:
    // 0x1c7978: 0x3e00008  jr          $ra
label_1c797c:
    if (ctx->pc == 0x1C797Cu) {
        ctx->pc = 0x1C797Cu;
            // 0x1c797c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7980u;
        goto label_1c7980;
    }
    ctx->pc = 0x1C7978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7978u;
            // 0x1c797c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7980u;
label_1c7980:
    // 0x1c7980: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c7984:
    // 0x1c7984: 0x3e00008  jr          $ra
label_1c7988:
    if (ctx->pc == 0x1C7988u) {
        ctx->pc = 0x1C7988u;
            // 0x1c7988: 0x2442a650  addiu       $v0, $v0, -0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944336));
        ctx->pc = 0x1C798Cu;
        goto label_1c798c;
    }
    ctx->pc = 0x1C7984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7984u;
            // 0x1c7988: 0x2442a650  addiu       $v0, $v0, -0x59B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C798Cu;
label_1c798c:
    // 0x1c798c: 0x0  nop
    ctx->pc = 0x1c798cu;
    // NOP
label_1c7990:
    // 0x1c7990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7994:
    // 0x1c7994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7998:
    // 0x1c7998: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c799c:
    // 0x1c799c: 0x8070610  j           func_1C1840
label_1c79a0:
    if (ctx->pc == 0x1C79A0u) {
        ctx->pc = 0x1C79A0u;
            // 0x1c79a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C79A4u;
        goto label_1c79a4;
    }
    ctx->pc = 0x1C799Cu;
    ctx->pc = 0x1C79A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C799Cu;
            // 0x1c79a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1840u;
    if (runtime->hasFunction(0x1C1840u)) {
        auto targetFn = runtime->lookupFunction(0x1C1840u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C1840_0x1c1840(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C79A4u;
label_1c79a4:
    // 0x1c79a4: 0x0  nop
    ctx->pc = 0x1c79a4u;
    // NOP
label_1c79a8:
    // 0x1c79a8: 0x3e00008  jr          $ra
label_1c79ac:
    if (ctx->pc == 0x1C79ACu) {
        ctx->pc = 0x1C79B0u;
        goto label_1c79b0;
    }
    ctx->pc = 0x1C79A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C79B0u;
label_1c79b0:
    // 0x1c79b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c79b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c79b4:
    // 0x1c79b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c79b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c79b8:
    // 0x1c79b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c79b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c79bc:
    // 0x1c79bc: 0x8070626  j           func_1C1898
label_1c79c0:
    if (ctx->pc == 0x1C79C0u) {
        ctx->pc = 0x1C79C0u;
            // 0x1c79c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C79C4u;
        goto label_1c79c4;
    }
    ctx->pc = 0x1C79BCu;
    ctx->pc = 0x1C79C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79BCu;
            // 0x1c79c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1898u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1898u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C79C4u;
label_1c79c4:
    // 0x1c79c4: 0x0  nop
    ctx->pc = 0x1c79c4u;
    // NOP
label_1c79c8:
    // 0x1c79c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c79c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c79cc:
    // 0x1c79cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c79ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c79d0:
    // 0x1c79d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c79d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c79d4:
    // 0x1c79d4: 0x80705a6  j           func_1C1698
label_1c79d8:
    if (ctx->pc == 0x1C79D8u) {
        ctx->pc = 0x1C79D8u;
            // 0x1c79d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C79DCu;
        goto label_1c79dc;
    }
    ctx->pc = 0x1C79D4u;
    ctx->pc = 0x1C79D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79D4u;
            // 0x1c79d8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1698u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C79DCu;
label_1c79dc:
    // 0x1c79dc: 0x0  nop
    ctx->pc = 0x1c79dcu;
    // NOP
label_1c79e0:
    // 0x1c79e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c79e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c79e4:
    // 0x1c79e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c79e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c79e8:
    // 0x1c79e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c79e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c79ec:
    // 0x1c79ec: 0x80705ea  j           func_1C17A8
label_1c79f0:
    if (ctx->pc == 0x1C79F0u) {
        ctx->pc = 0x1C79F0u;
            // 0x1c79f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C79F4u;
        goto label_1c79f4;
    }
    ctx->pc = 0x1C79ECu;
    ctx->pc = 0x1C79F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C79ECu;
            // 0x1c79f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C17A8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C17A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C79F4u;
label_1c79f4:
    // 0x1c79f4: 0x0  nop
    ctx->pc = 0x1c79f4u;
    // NOP
label_1c79f8:
    // 0x1c79f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c79f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c79fc:
    // 0x1c79fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c79fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7a00:
    // 0x1c7a00: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
label_1c7a04:
    if (ctx->pc == 0x1C7A04u) {
        ctx->pc = 0x1C7A04u;
            // 0x1c7a04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C7A08u;
        goto label_1c7a08;
    }
    ctx->pc = 0x1C7A00u;
    {
        const bool branch_taken_0x1c7a00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A00u;
            // 0x1c7a04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a00) {
            ctx->pc = 0x1C7A28u;
            goto label_1c7a28;
        }
    }
    ctx->pc = 0x1C7A08u;
label_1c7a08:
    // 0x1c7a08: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_1c7a0c:
    if (ctx->pc == 0x1C7A0Cu) {
        ctx->pc = 0x1C7A0Cu;
            // 0x1c7a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A10u;
        goto label_1c7a10;
    }
    ctx->pc = 0x1C7A08u;
    {
        const bool branch_taken_0x1c7a08 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A08u;
            // 0x1c7a0c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a08) {
            ctx->pc = 0x1C7A28u;
            goto label_1c7a28;
        }
    }
    ctx->pc = 0x1C7A10u;
label_1c7a10:
    // 0x1c7a10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c7a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7a14:
    // 0x1c7a14: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_1c7a18:
    if (ctx->pc == 0x1C7A18u) {
        ctx->pc = 0x1C7A18u;
            // 0x1c7a18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7A1Cu;
        goto label_1c7a1c;
    }
    ctx->pc = 0x1C7A14u;
    {
        const bool branch_taken_0x1c7a14 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A14u;
            // 0x1c7a18: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a14) {
            ctx->pc = 0x1C7A28u;
            goto label_1c7a28;
        }
    }
    ctx->pc = 0x1C7A1Cu;
label_1c7a1c:
    // 0x1c7a1c: 0x2402ff33  addiu       $v0, $zero, -0xCD
    ctx->pc = 0x1c7a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967091));
label_1c7a20:
    // 0x1c7a20: 0x3e00008  jr          $ra
label_1c7a24:
    if (ctx->pc == 0x1C7A24u) {
        ctx->pc = 0x1C7A24u;
            // 0x1c7a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7A28u;
        goto label_1c7a28;
    }
    ctx->pc = 0x1C7A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A20u;
            // 0x1c7a24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7A28u;
label_1c7a28:
    // 0x1c7a28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7a2c:
    // 0x1c7a2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1c7a2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a30:
    // 0x1c7a30: 0x8070336  j           func_1C0CD8
label_1c7a34:
    if (ctx->pc == 0x1C7A34u) {
        ctx->pc = 0x1C7A34u;
            // 0x1c7a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7A38u;
        goto label_1c7a38;
    }
    ctx->pc = 0x1C7A30u;
    ctx->pc = 0x1C7A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A30u;
            // 0x1c7a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0CD8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C0CD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7A38u;
label_1c7a38:
    // 0x1c7a38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7a3c:
    // 0x1c7a3c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7a40:
    // 0x1c7a40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7a44:
    // 0x1c7a44: 0x8070390  j           func_1C0E40
label_1c7a48:
    if (ctx->pc == 0x1C7A48u) {
        ctx->pc = 0x1C7A48u;
            // 0x1c7a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7A4Cu;
        goto label_1c7a4c;
    }
    ctx->pc = 0x1C7A44u;
    ctx->pc = 0x1C7A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A44u;
            // 0x1c7a48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0E40u;
    {
        auto targetFn = runtime->lookupFunction(0x1C0E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7A4Cu;
label_1c7a4c:
    // 0x1c7a4c: 0x0  nop
    ctx->pc = 0x1c7a4cu;
    // NOP
label_1c7a50:
    // 0x1c7a50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7a54:
    // 0x1c7a54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7a58:
    // 0x1c7a58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7a5c:
    // 0x1c7a5c: 0x80705f4  j           func_1C17D0
label_1c7a60:
    if (ctx->pc == 0x1C7A60u) {
        ctx->pc = 0x1C7A60u;
            // 0x1c7a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7A64u;
        goto label_1c7a64;
    }
    ctx->pc = 0x1C7A5Cu;
    ctx->pc = 0x1C7A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A5Cu;
            // 0x1c7a60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C17D0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C17D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7A64u;
label_1c7a64:
    // 0x1c7a64: 0x0  nop
    ctx->pc = 0x1c7a64u;
    // NOP
label_1c7a68:
    // 0x1c7a68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7a6c:
    // 0x1c7a6c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7a70:
    // 0x1c7a70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7a70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7a74:
    // 0x1c7a74: 0x8070606  j           func_1C1818
label_1c7a78:
    if (ctx->pc == 0x1C7A78u) {
        ctx->pc = 0x1C7A78u;
            // 0x1c7a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7A7Cu;
        goto label_1c7a7c;
    }
    ctx->pc = 0x1C7A74u;
    ctx->pc = 0x1C7A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A74u;
            // 0x1c7a78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1818u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7A7Cu;
label_1c7a7c:
    // 0x1c7a7c: 0x0  nop
    ctx->pc = 0x1c7a7cu;
    // NOP
label_1c7a80:
    // 0x1c7a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7a84:
    // 0x1c7a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7a88:
    // 0x1c7a88: 0xc07061c  jal         func_1C1870
label_1c7a8c:
    if (ctx->pc == 0x1C7A8Cu) {
        ctx->pc = 0x1C7A90u;
        goto label_1c7a90;
    }
    ctx->pc = 0x1C7A88u;
    SET_GPR_U32(ctx, 31, 0x1C7A90u);
    ctx->pc = 0x1C1870u;
    if (runtime->hasFunction(0x1C1870u)) {
        auto targetFn = runtime->lookupFunction(0x1C1870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7A90u; }
        if (ctx->pc != 0x1C7A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1870_0x1c1870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7A90u; }
        if (ctx->pc != 0x1C7A90u) { return; }
    }
    ctx->pc = 0x1C7A90u;
label_1c7a90:
    // 0x1c7a90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c7a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7a94:
    // 0x1c7a94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c7a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7a98:
    // 0x1c7a98: 0x1083000a  beq         $a0, $v1, . + 4 + (0xA << 2)
label_1c7a9c:
    if (ctx->pc == 0x1C7A9Cu) {
        ctx->pc = 0x1C7A9Cu;
            // 0x1c7a9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7AA0u;
        goto label_1c7aa0;
    }
    ctx->pc = 0x1C7A98u;
    {
        const bool branch_taken_0x1c7a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7A98u;
            // 0x1c7a9c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7a98) {
            ctx->pc = 0x1C7AC4u;
            goto label_1c7ac4;
        }
    }
    ctx->pc = 0x1C7AA0u;
label_1c7aa0:
    // 0x1c7aa0: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_1c7aa4:
    if (ctx->pc == 0x1C7AA4u) {
        ctx->pc = 0x1C7AA4u;
            // 0x1c7aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AA8u;
        goto label_1c7aa8;
    }
    ctx->pc = 0x1C7AA0u;
    {
        const bool branch_taken_0x1c7aa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7aa0) {
            ctx->pc = 0x1C7AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AA0u;
            // 0x1c7aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7AC4u;
            goto label_1c7ac4;
        }
    }
    ctx->pc = 0x1C7AA8u;
label_1c7aa8:
    // 0x1c7aa8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c7aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c7aac:
    // 0x1c7aac: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_1c7ab0:
    if (ctx->pc == 0x1C7AB0u) {
        ctx->pc = 0x1C7AB4u;
        goto label_1c7ab4;
    }
    ctx->pc = 0x1C7AACu;
    {
        const bool branch_taken_0x1c7aac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1c7aac) {
            ctx->pc = 0x1C7AC4u;
            goto label_1c7ac4;
        }
    }
    ctx->pc = 0x1C7AB4u;
label_1c7ab4:
    // 0x1c7ab4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c7ab8:
    if (ctx->pc == 0x1C7AB8u) {
        ctx->pc = 0x1C7AB8u;
            // 0x1c7ab8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1C7ABCu;
        goto label_1c7abc;
    }
    ctx->pc = 0x1C7AB4u;
    {
        const bool branch_taken_0x1c7ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AB4u;
            // 0x1c7ab8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ab4) {
            ctx->pc = 0x1C7AC4u;
            goto label_1c7ac4;
        }
    }
    ctx->pc = 0x1C7ABCu;
label_1c7abc:
    // 0x1c7abc: 0x0  nop
    ctx->pc = 0x1c7abcu;
    // NOP
label_1c7ac0:
    // 0x1c7ac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7ac4:
    // 0x1c7ac4: 0x3e00008  jr          $ra
label_1c7ac8:
    if (ctx->pc == 0x1C7AC8u) {
        ctx->pc = 0x1C7AC8u;
            // 0x1c7ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7ACCu;
        goto label_1c7acc;
    }
    ctx->pc = 0x1C7AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AC4u;
            // 0x1c7ac8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7ACCu;
label_1c7acc:
    // 0x1c7acc: 0x0  nop
    ctx->pc = 0x1c7accu;
    // NOP
label_1c7ad0:
    // 0x1c7ad0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7ad4:
    // 0x1c7ad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7ad8:
    // 0x1c7ad8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7ad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7adc:
    // 0x1c7adc: 0x80706a0  j           func_1C1A80
label_1c7ae0:
    if (ctx->pc == 0x1C7AE0u) {
        ctx->pc = 0x1C7AE0u;
            // 0x1c7ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7AE4u;
        goto label_1c7ae4;
    }
    ctx->pc = 0x1C7ADCu;
    ctx->pc = 0x1C7AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7ADCu;
            // 0x1c7ae0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1A80u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7AE4u;
label_1c7ae4:
    // 0x1c7ae4: 0x0  nop
    ctx->pc = 0x1c7ae4u;
    // NOP
label_1c7ae8:
    // 0x1c7ae8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7aec:
    // 0x1c7aec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7af0:
    // 0x1c7af0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7af4:
    // 0x1c7af4: 0x8070446  j           func_1C1118
label_1c7af8:
    if (ctx->pc == 0x1C7AF8u) {
        ctx->pc = 0x1C7AF8u;
            // 0x1c7af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7AFCu;
        goto label_1c7afc;
    }
    ctx->pc = 0x1C7AF4u;
    ctx->pc = 0x1C7AF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7AF4u;
            // 0x1c7af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1118u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7AFCu;
label_1c7afc:
    // 0x1c7afc: 0x0  nop
    ctx->pc = 0x1c7afcu;
    // NOP
label_1c7b00:
    // 0x1c7b00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7b04:
    // 0x1c7b04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7b08:
    // 0x1c7b08: 0xc070316  jal         func_1C0C58
label_1c7b0c:
    if (ctx->pc == 0x1C7B0Cu) {
        ctx->pc = 0x1C7B10u;
        goto label_1c7b10;
    }
    ctx->pc = 0x1C7B08u;
    SET_GPR_U32(ctx, 31, 0x1C7B10u);
    ctx->pc = 0x1C0C58u;
    if (runtime->hasFunction(0x1C0C58u)) {
        auto targetFn = runtime->lookupFunction(0x1C0C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B10u; }
        if (ctx->pc != 0x1C7B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C0C58_0x1c0c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7B10u; }
        if (ctx->pc != 0x1C7B10u) { return; }
    }
    ctx->pc = 0x1C7B10u;
label_1c7b10:
    // 0x1c7b10: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1c7b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7b14:
    // 0x1c7b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7b18:
    // 0x1c7b18: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1c7b18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_1c7b1c:
    // 0x1c7b1c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1c7b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b20:
    // 0x1c7b20: 0x3e00008  jr          $ra
label_1c7b24:
    if (ctx->pc == 0x1C7B24u) {
        ctx->pc = 0x1C7B24u;
            // 0x1c7b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7B28u;
        goto label_1c7b28;
    }
    ctx->pc = 0x1C7B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B20u;
            // 0x1c7b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7B28u;
label_1c7b28:
    // 0x1c7b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7b2c:
    // 0x1c7b2c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7b30:
    // 0x1c7b30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7b34:
    // 0x1c7b34: 0x8070760  j           func_1C1D80
label_1c7b38:
    if (ctx->pc == 0x1C7B38u) {
        ctx->pc = 0x1C7B38u;
            // 0x1c7b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7B3Cu;
        goto label_1c7b3c;
    }
    ctx->pc = 0x1C7B34u;
    ctx->pc = 0x1C7B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B34u;
            // 0x1c7b38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1D80u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7B3Cu;
label_1c7b3c:
    // 0x1c7b3c: 0x0  nop
    ctx->pc = 0x1c7b3cu;
    // NOP
label_1c7b40:
    // 0x1c7b40: 0x3e00008  jr          $ra
label_1c7b44:
    if (ctx->pc == 0x1C7B44u) {
        ctx->pc = 0x1C7B44u;
            // 0x1c7b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7B48u;
        goto label_1c7b48;
    }
    ctx->pc = 0x1C7B40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B40u;
            // 0x1c7b44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7B48u;
label_1c7b48:
    // 0x1c7b48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7b4c:
    // 0x1c7b4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7b50:
    // 0x1c7b50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7b54:
    // 0x1c7b54: 0x807073a  j           func_1C1CE8
label_1c7b58:
    if (ctx->pc == 0x1C7B58u) {
        ctx->pc = 0x1C7B58u;
            // 0x1c7b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7B5Cu;
        goto label_1c7b5c;
    }
    ctx->pc = 0x1C7B54u;
    ctx->pc = 0x1C7B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B54u;
            // 0x1c7b58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1CE8u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1CE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7B5Cu;
label_1c7b5c:
    // 0x1c7b5c: 0x0  nop
    ctx->pc = 0x1c7b5cu;
    // NOP
label_1c7b60:
    // 0x1c7b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7b64:
    // 0x1c7b64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7b68:
    // 0x1c7b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7b6c:
    // 0x1c7b6c: 0x8070660  j           func_1C1980
label_1c7b70:
    if (ctx->pc == 0x1C7B70u) {
        ctx->pc = 0x1C7B70u;
            // 0x1c7b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7B74u;
        goto label_1c7b74;
    }
    ctx->pc = 0x1C7B6Cu;
    ctx->pc = 0x1C7B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B6Cu;
            // 0x1c7b70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1980u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7B74u;
label_1c7b74:
    // 0x1c7b74: 0x0  nop
    ctx->pc = 0x1c7b74u;
    // NOP
label_1c7b78:
    // 0x1c7b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c7b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c7b7c:
    // 0x1c7b7c: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x1c7b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_1c7b80:
    // 0x1c7b80: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c7b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c7b84:
    // 0x1c7b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c7b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b88:
    // 0x1c7b88: 0x2445c078  addiu       $a1, $v0, -0x3F88
    ctx->pc = 0x1c7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951032));
label_1c7b8c:
    // 0x1c7b8c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c7b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c7b90:
    // 0x1c7b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c7b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1c7b94:
    // 0x1c7b94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c7b94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7b98:
    // 0x1c7b98: 0xc04af96  jal         func_12BE58
label_1c7b9c:
    if (ctx->pc == 0x1C7B9Cu) {
        ctx->pc = 0x1C7B9Cu;
            // 0x1c7b9c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x1C7BA0u;
        goto label_1c7ba0;
    }
    ctx->pc = 0x1C7B98u;
    SET_GPR_U32(ctx, 31, 0x1C7BA0u);
    ctx->pc = 0x1C7B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7B98u;
            // 0x1c7b9c: 0xafa60000  sw          $a2, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BA0u; }
        if (ctx->pc != 0x1C7BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BA0u; }
        if (ctx->pc != 0x1C7BA0u) { return; }
    }
    ctx->pc = 0x1C7BA0u;
label_1c7ba0:
    // 0x1c7ba0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1c7ba4:
    if (ctx->pc == 0x1C7BA4u) {
        ctx->pc = 0x1C7BA4u;
            // 0x1c7ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BA8u;
        goto label_1c7ba8;
    }
    ctx->pc = 0x1C7BA0u;
    {
        const bool branch_taken_0x1c7ba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BA0u;
            // 0x1c7ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ba0) {
            ctx->pc = 0x1C7BB0u;
            goto label_1c7bb0;
        }
    }
    ctx->pc = 0x1C7BA8u;
label_1c7ba8:
    // 0x1c7ba8: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c7bac:
    if (ctx->pc == 0x1C7BACu) {
        ctx->pc = 0x1C7BACu;
            // 0x1c7bac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7BB0u;
        goto label_1c7bb0;
    }
    ctx->pc = 0x1C7BA8u;
    {
        const bool branch_taken_0x1c7ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BA8u;
            // 0x1c7bac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ba8) {
            ctx->pc = 0x1C7C0Cu;
            goto label_1c7c0c;
        }
    }
    ctx->pc = 0x1C7BB0u;
label_1c7bb0:
    // 0x1c7bb0: 0xc04b02e  jal         func_12C0B8
label_1c7bb4:
    if (ctx->pc == 0x1C7BB4u) {
        ctx->pc = 0x1C7BB8u;
        goto label_1c7bb8;
    }
    ctx->pc = 0x1C7BB0u;
    SET_GPR_U32(ctx, 31, 0x1C7BB8u);
    ctx->pc = 0x12C0B8u;
    if (runtime->hasFunction(0x12C0B8u)) {
        auto targetFn = runtime->lookupFunction(0x12C0B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BB8u; }
        if (ctx->pc != 0x1C7BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012C0B8_0x12c0b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BB8u; }
        if (ctx->pc != 0x1C7BB8u) { return; }
    }
    ctx->pc = 0x1C7BB8u;
label_1c7bb8:
    // 0x1c7bb8: 0x3c05001c  lui         $a1, 0x1C
    ctx->pc = 0x1c7bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28 << 16));
label_1c7bbc:
    // 0x1c7bbc: 0x2c430009  sltiu       $v1, $v0, 0x9
    ctx->pc = 0x1c7bbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_1c7bc0:
    // 0x1c7bc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c7bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7bc4:
    // 0x1c7bc4: 0x24a57980  addiu       $a1, $a1, 0x7980
    ctx->pc = 0x1c7bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31104));
label_1c7bc8:
    // 0x1c7bc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c7bc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7bcc:
    // 0x1c7bcc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1c7bd0:
    if (ctx->pc == 0x1C7BD0u) {
        ctx->pc = 0x1C7BD0u;
            // 0x1c7bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BD4u;
        goto label_1c7bd4;
    }
    ctx->pc = 0x1C7BCCu;
    {
        const bool branch_taken_0x1c7bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BCCu;
            // 0x1c7bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bcc) {
            ctx->pc = 0x1C7C0Cu;
            goto label_1c7c0c;
        }
    }
    ctx->pc = 0x1C7BD4u;
label_1c7bd4:
    // 0x1c7bd4: 0xc05e100  jal         func_178400
label_1c7bd8:
    if (ctx->pc == 0x1C7BD8u) {
        ctx->pc = 0x1C7BDCu;
        goto label_1c7bdc;
    }
    ctx->pc = 0x1C7BD4u;
    SET_GPR_U32(ctx, 31, 0x1C7BDCu);
    ctx->pc = 0x178400u;
    if (runtime->hasFunction(0x178400u)) {
        auto targetFn = runtime->lookupFunction(0x178400u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BDCu; }
        if (ctx->pc != 0x1C7BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178400_0x178400(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BDCu; }
        if (ctx->pc != 0x1C7BDCu) { return; }
    }
    ctx->pc = 0x1C7BDCu;
label_1c7bdc:
    // 0x1c7bdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1c7bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c7be0:
    // 0x1c7be0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c7be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7be4:
    // 0x1c7be4: 0xc070528  jal         func_1C14A0
label_1c7be8:
    if (ctx->pc == 0x1C7BE8u) {
        ctx->pc = 0x1C7BE8u;
            // 0x1c7be8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BECu;
        goto label_1c7bec;
    }
    ctx->pc = 0x1C7BE4u;
    SET_GPR_U32(ctx, 31, 0x1C7BECu);
    ctx->pc = 0x1C7BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BE4u;
            // 0x1c7be8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C14A0u;
    if (runtime->hasFunction(0x1C14A0u)) {
        auto targetFn = runtime->lookupFunction(0x1C14A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BECu; }
        if (ctx->pc != 0x1C7BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C14A0_0x1c14a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7BECu; }
        if (ctx->pc != 0x1C7BECu) { return; }
    }
    ctx->pc = 0x1C7BECu;
label_1c7bec:
    // 0x1c7bec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c7becu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c7bf0:
    // 0x1c7bf0: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_1c7bf4:
    if (ctx->pc == 0x1C7BF4u) {
        ctx->pc = 0x1C7BF4u;
            // 0x1c7bf4: 0x2402ff98  addiu       $v0, $zero, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
        ctx->pc = 0x1C7BF8u;
        goto label_1c7bf8;
    }
    ctx->pc = 0x1C7BF0u;
    {
        const bool branch_taken_0x1c7bf0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BF0u;
            // 0x1c7bf4: 0x2402ff98  addiu       $v0, $zero, -0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7bf0) {
            ctx->pc = 0x1C7C08u;
            goto label_1c7c08;
        }
    }
    ctx->pc = 0x1C7BF8u;
label_1c7bf8:
    // 0x1c7bf8: 0x52020004  beql        $s0, $v0, . + 4 + (0x4 << 2)
label_1c7bfc:
    if (ctx->pc == 0x1C7BFCu) {
        ctx->pc = 0x1C7BFCu;
            // 0x1c7bfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C00u;
        goto label_1c7c00;
    }
    ctx->pc = 0x1C7BF8u;
    {
        const bool branch_taken_0x1c7bf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1c7bf8) {
            ctx->pc = 0x1C7BFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7BF8u;
            // 0x1c7bfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C0Cu;
            goto label_1c7c0c;
        }
    }
    ctx->pc = 0x1C7C00u;
label_1c7c00:
    // 0x1c7c00: 0xc05e196  jal         func_178658
label_1c7c04:
    if (ctx->pc == 0x1C7C04u) {
        ctx->pc = 0x1C7C04u;
            // 0x1c7c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C08u;
        goto label_1c7c08;
    }
    ctx->pc = 0x1C7C00u;
    SET_GPR_U32(ctx, 31, 0x1C7C08u);
    ctx->pc = 0x1C7C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C00u;
            // 0x1c7c04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178658u;
    if (runtime->hasFunction(0x178658u)) {
        auto targetFn = runtime->lookupFunction(0x178658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C08u; }
        if (ctx->pc != 0x1C7C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178658_0x178658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C08u; }
        if (ctx->pc != 0x1C7C08u) { return; }
    }
    ctx->pc = 0x1C7C08u;
label_1c7c08:
    // 0x1c7c08: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1c7c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c7c0c:
    // 0x1c7c0c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c7c0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c7c10:
    // 0x1c7c10: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c7c10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c7c14:
    // 0x1c7c14: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c7c14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c7c18:
    // 0x1c7c18: 0x3e00008  jr          $ra
label_1c7c1c:
    if (ctx->pc == 0x1C7C1Cu) {
        ctx->pc = 0x1C7C1Cu;
            // 0x1c7c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C7C20u;
        goto label_1c7c20;
    }
    ctx->pc = 0x1C7C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C18u;
            // 0x1c7c1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7C20u;
label_1c7c20:
    // 0x1c7c20: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x1c7c20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_1c7c24:
    // 0x1c7c24: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7c24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7c28:
    // 0x1c7c28: 0x24a5c078  addiu       $a1, $a1, -0x3F88
    ctx->pc = 0x1c7c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951032));
label_1c7c2c:
    // 0x1c7c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c7c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c7c30:
    // 0x1c7c30: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1c7c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1c7c34:
    // 0x1c7c34: 0xc04af96  jal         func_12BE58
label_1c7c38:
    if (ctx->pc == 0x1C7C38u) {
        ctx->pc = 0x1C7C38u;
            // 0x1c7c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C3Cu;
        goto label_1c7c3c;
    }
    ctx->pc = 0x1C7C34u;
    SET_GPR_U32(ctx, 31, 0x1C7C3Cu);
    ctx->pc = 0x1C7C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C34u;
            // 0x1c7c38: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12BE58u;
    if (runtime->hasFunction(0x12BE58u)) {
        auto targetFn = runtime->lookupFunction(0x12BE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C3Cu; }
        if (ctx->pc != 0x1C7C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012BE58_0x12be58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C3Cu; }
        if (ctx->pc != 0x1C7C3Cu) { return; }
    }
    ctx->pc = 0x1C7C3Cu;
label_1c7c3c:
    // 0x1c7c3c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1c7c40:
    if (ctx->pc == 0x1C7C40u) {
        ctx->pc = 0x1C7C40u;
            // 0x1c7c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C44u;
        goto label_1c7c44;
    }
    ctx->pc = 0x1C7C3Cu;
    {
        const bool branch_taken_0x1c7c3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C3Cu;
            // 0x1c7c40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c3c) {
            ctx->pc = 0x1C7C50u;
            goto label_1c7c50;
        }
    }
    ctx->pc = 0x1C7C44u;
label_1c7c44:
    // 0x1c7c44: 0x10000009  b           . + 4 + (0x9 << 2)
label_1c7c48:
    if (ctx->pc == 0x1C7C48u) {
        ctx->pc = 0x1C7C48u;
            // 0x1c7c48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7C4Cu;
        goto label_1c7c4c;
    }
    ctx->pc = 0x1C7C44u;
    {
        const bool branch_taken_0x1c7c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C44u;
            // 0x1c7c48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c44) {
            ctx->pc = 0x1C7C6Cu;
            goto label_1c7c6c;
        }
    }
    ctx->pc = 0x1C7C4Cu;
label_1c7c4c:
    // 0x1c7c4c: 0x0  nop
    ctx->pc = 0x1c7c4cu;
    // NOP
label_1c7c50:
    // 0x1c7c50: 0xc070554  jal         func_1C1550
label_1c7c54:
    if (ctx->pc == 0x1C7C54u) {
        ctx->pc = 0x1C7C58u;
        goto label_1c7c58;
    }
    ctx->pc = 0x1C7C50u;
    SET_GPR_U32(ctx, 31, 0x1C7C58u);
    ctx->pc = 0x1C1550u;
    if (runtime->hasFunction(0x1C1550u)) {
        auto targetFn = runtime->lookupFunction(0x1C1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C58u; }
        if (ctx->pc != 0x1C7C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1550_0x1c1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C58u; }
        if (ctx->pc != 0x1C7C58u) { return; }
    }
    ctx->pc = 0x1C7C58u;
label_1c7c58:
    // 0x1c7c58: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1c7c5c:
    if (ctx->pc == 0x1C7C5Cu) {
        ctx->pc = 0x1C7C5Cu;
            // 0x1c7c5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7C60u;
        goto label_1c7c60;
    }
    ctx->pc = 0x1C7C58u;
    {
        const bool branch_taken_0x1c7c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c7c58) {
            ctx->pc = 0x1C7C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C58u;
            // 0x1c7c5c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C7C70u;
            goto label_1c7c70;
        }
    }
    ctx->pc = 0x1C7C60u;
label_1c7c60:
    // 0x1c7c60: 0xc05e196  jal         func_178658
label_1c7c64:
    if (ctx->pc == 0x1C7C64u) {
        ctx->pc = 0x1C7C64u;
            // 0x1c7c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C68u;
        goto label_1c7c68;
    }
    ctx->pc = 0x1C7C60u;
    SET_GPR_U32(ctx, 31, 0x1C7C68u);
    ctx->pc = 0x1C7C64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C60u;
            // 0x1c7c64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178658u;
    if (runtime->hasFunction(0x178658u)) {
        auto targetFn = runtime->lookupFunction(0x178658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C68u; }
        if (ctx->pc != 0x1C7C68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00178658_0x178658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7C68u; }
        if (ctx->pc != 0x1C7C68u) { return; }
    }
    ctx->pc = 0x1C7C68u;
label_1c7c68:
    // 0x1c7c68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7c6c:
    // 0x1c7c6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c7c6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7c70:
    // 0x1c7c70: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c7c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c7c74:
    // 0x1c7c74: 0x3e00008  jr          $ra
label_1c7c78:
    if (ctx->pc == 0x1C7C78u) {
        ctx->pc = 0x1C7C78u;
            // 0x1c7c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7C7Cu;
        goto label_1c7c7c;
    }
    ctx->pc = 0x1C7C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C74u;
            // 0x1c7c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7C7Cu;
label_1c7c7c:
    // 0x1c7c7c: 0x0  nop
    ctx->pc = 0x1c7c7cu;
    // NOP
label_1c7c80:
    // 0x1c7c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7c84:
    // 0x1c7c84: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1c7c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c7c88:
    // 0x1c7c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c7c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c7c8c:
    // 0x1c7c8c: 0x10a2005c  beq         $a1, $v0, . + 4 + (0x5C << 2)
label_1c7c90:
    if (ctx->pc == 0x1C7C90u) {
        ctx->pc = 0x1C7C90u;
            // 0x1c7c90: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C94u;
        goto label_1c7c94;
    }
    ctx->pc = 0x1C7C8Cu;
    {
        const bool branch_taken_0x1c7c8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C8Cu;
            // 0x1c7c90: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c8c) {
            ctx->pc = 0x1C7E00u;
            goto label_1c7e00;
        }
    }
    ctx->pc = 0x1C7C94u;
label_1c7c94:
    // 0x1c7c94: 0x28a20065  slti        $v0, $a1, 0x65
    ctx->pc = 0x1c7c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)101) ? 1 : 0);
label_1c7c98:
    // 0x1c7c98: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1c7c9c:
    if (ctx->pc == 0x1C7C9Cu) {
        ctx->pc = 0x1C7C9Cu;
            // 0x1c7c9c: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->pc = 0x1C7CA0u;
        goto label_1c7ca0;
    }
    ctx->pc = 0x1C7C98u;
    {
        const bool branch_taken_0x1c7c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7C98u;
            // 0x1c7c9c: 0x240200cb  addiu       $v0, $zero, 0xCB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 203));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7c98) {
            ctx->pc = 0x1C7CF0u;
            goto label_1c7cf0;
        }
    }
    ctx->pc = 0x1C7CA0u;
label_1c7ca0:
    // 0x1c7ca0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c7ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c7ca4:
    // 0x1c7ca4: 0x10a20036  beq         $a1, $v0, . + 4 + (0x36 << 2)
label_1c7ca8:
    if (ctx->pc == 0x1C7CA8u) {
        ctx->pc = 0x1C7CA8u;
            // 0x1c7ca8: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x1C7CACu;
        goto label_1c7cac;
    }
    ctx->pc = 0x1C7CA4u;
    {
        const bool branch_taken_0x1c7ca4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CA4u;
            // 0x1c7ca8: 0x28a20004  slti        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ca4) {
            ctx->pc = 0x1C7D80u;
            goto label_1c7d80;
        }
    }
    ctx->pc = 0x1C7CACu;
label_1c7cac:
    // 0x1c7cac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c7cb0:
    if (ctx->pc == 0x1C7CB0u) {
        ctx->pc = 0x1C7CB0u;
            // 0x1c7cb0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1C7CB4u;
        goto label_1c7cb4;
    }
    ctx->pc = 0x1C7CACu;
    {
        const bool branch_taken_0x1c7cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CACu;
            // 0x1c7cb0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cac) {
            ctx->pc = 0x1C7CD0u;
            goto label_1c7cd0;
        }
    }
    ctx->pc = 0x1C7CB4u;
label_1c7cb4:
    // 0x1c7cb4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c7cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c7cb8:
    // 0x1c7cb8: 0x10a2007b  beq         $a1, $v0, . + 4 + (0x7B << 2)
label_1c7cbc:
    if (ctx->pc == 0x1C7CBCu) {
        ctx->pc = 0x1C7CBCu;
            // 0x1c7cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C7CC0u;
        goto label_1c7cc0;
    }
    ctx->pc = 0x1C7CB8u;
    {
        const bool branch_taken_0x1c7cb8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CB8u;
            // 0x1c7cbc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cb8) {
            ctx->pc = 0x1C7EA8u;
            goto label_1c7ea8;
        }
    }
    ctx->pc = 0x1C7CC0u;
label_1c7cc0:
    // 0x1c7cc0: 0x10a20023  beq         $a1, $v0, . + 4 + (0x23 << 2)
label_1c7cc4:
    if (ctx->pc == 0x1C7CC4u) {
        ctx->pc = 0x1C7CC4u;
            // 0x1c7cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7CC8u;
        goto label_1c7cc8;
    }
    ctx->pc = 0x1C7CC0u;
    {
        const bool branch_taken_0x1c7cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CC0u;
            // 0x1c7cc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cc0) {
            ctx->pc = 0x1C7D50u;
            goto label_1c7d50;
        }
    }
    ctx->pc = 0x1C7CC8u;
label_1c7cc8:
    // 0x1c7cc8: 0x10000079  b           . + 4 + (0x79 << 2)
label_1c7ccc:
    if (ctx->pc == 0x1C7CCCu) {
        ctx->pc = 0x1C7CCCu;
            // 0x1c7ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7CD0u;
        goto label_1c7cd0;
    }
    ctx->pc = 0x1C7CC8u;
    {
        const bool branch_taken_0x1c7cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CC8u;
            // 0x1c7ccc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cc8) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7CD0u;
label_1c7cd0:
    // 0x1c7cd0: 0x10a2003b  beq         $a1, $v0, . + 4 + (0x3B << 2)
label_1c7cd4:
    if (ctx->pc == 0x1C7CD4u) {
        ctx->pc = 0x1C7CD4u;
            // 0x1c7cd4: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x1C7CD8u;
        goto label_1c7cd8;
    }
    ctx->pc = 0x1C7CD0u;
    {
        const bool branch_taken_0x1c7cd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD0u;
            // 0x1c7cd4: 0x28a20005  slti        $v0, $a1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cd0) {
            ctx->pc = 0x1C7DC0u;
            goto label_1c7dc0;
        }
    }
    ctx->pc = 0x1C7CD8u;
label_1c7cd8:
    // 0x1c7cd8: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_1c7cdc:
    if (ctx->pc == 0x1C7CDCu) {
        ctx->pc = 0x1C7CDCu;
            // 0x1c7cdc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1C7CE0u;
        goto label_1c7ce0;
    }
    ctx->pc = 0x1C7CD8u;
    {
        const bool branch_taken_0x1c7cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CD8u;
            // 0x1c7cdc: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cd8) {
            ctx->pc = 0x1C7DA0u;
            goto label_1c7da0;
        }
    }
    ctx->pc = 0x1C7CE0u;
label_1c7ce0:
    // 0x1c7ce0: 0x10a2003f  beq         $a1, $v0, . + 4 + (0x3F << 2)
label_1c7ce4:
    if (ctx->pc == 0x1C7CE4u) {
        ctx->pc = 0x1C7CE4u;
            // 0x1c7ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7CE8u;
        goto label_1c7ce8;
    }
    ctx->pc = 0x1C7CE0u;
    {
        const bool branch_taken_0x1c7ce0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CE0u;
            // 0x1c7ce4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ce0) {
            ctx->pc = 0x1C7DE0u;
            goto label_1c7de0;
        }
    }
    ctx->pc = 0x1C7CE8u;
label_1c7ce8:
    // 0x1c7ce8: 0x10000071  b           . + 4 + (0x71 << 2)
label_1c7cec:
    if (ctx->pc == 0x1C7CECu) {
        ctx->pc = 0x1C7CECu;
            // 0x1c7cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7CF0u;
        goto label_1c7cf0;
    }
    ctx->pc = 0x1C7CE8u;
    {
        const bool branch_taken_0x1c7ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CE8u;
            // 0x1c7cec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ce8) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7CF0u;
label_1c7cf0:
    // 0x1c7cf0: 0x10a20059  beq         $a1, $v0, . + 4 + (0x59 << 2)
label_1c7cf4:
    if (ctx->pc == 0x1C7CF4u) {
        ctx->pc = 0x1C7CF4u;
            // 0x1c7cf4: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->pc = 0x1C7CF8u;
        goto label_1c7cf8;
    }
    ctx->pc = 0x1C7CF0u;
    {
        const bool branch_taken_0x1c7cf0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CF0u;
            // 0x1c7cf4: 0x28a200cc  slti        $v0, $a1, 0xCC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)204) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cf0) {
            ctx->pc = 0x1C7E58u;
            goto label_1c7e58;
        }
    }
    ctx->pc = 0x1C7CF8u;
label_1c7cf8:
    // 0x1c7cf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1c7cfc:
    if (ctx->pc == 0x1C7CFCu) {
        ctx->pc = 0x1C7CFCu;
            // 0x1c7cfc: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->pc = 0x1C7D00u;
        goto label_1c7d00;
    }
    ctx->pc = 0x1C7CF8u;
    {
        const bool branch_taken_0x1c7cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7CF8u;
            // 0x1c7cfc: 0x240200cd  addiu       $v0, $zero, 0xCD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7cf8) {
            ctx->pc = 0x1C7D28u;
            goto label_1c7d28;
        }
    }
    ctx->pc = 0x1C7D00u;
label_1c7d00:
    // 0x1c7d00: 0x240200c9  addiu       $v0, $zero, 0xC9
    ctx->pc = 0x1c7d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_1c7d04:
    // 0x1c7d04: 0x10a20048  beq         $a1, $v0, . + 4 + (0x48 << 2)
label_1c7d08:
    if (ctx->pc == 0x1C7D08u) {
        ctx->pc = 0x1C7D08u;
            // 0x1c7d08: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->pc = 0x1C7D0Cu;
        goto label_1c7d0c;
    }
    ctx->pc = 0x1C7D04u;
    {
        const bool branch_taken_0x1c7d04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D04u;
            // 0x1c7d08: 0x28a200ca  slti        $v0, $a1, 0xCA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)202) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d04) {
            ctx->pc = 0x1C7E28u;
            goto label_1c7e28;
        }
    }
    ctx->pc = 0x1C7D0Cu;
label_1c7d0c:
    // 0x1c7d0c: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1c7d10:
    if (ctx->pc == 0x1C7D10u) {
        ctx->pc = 0x1C7D10u;
            // 0x1c7d10: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x1C7D14u;
        goto label_1c7d14;
    }
    ctx->pc = 0x1C7D0Cu;
    {
        const bool branch_taken_0x1c7d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D0Cu;
            // 0x1c7d10: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d0c) {
            ctx->pc = 0x1C7E40u;
            goto label_1c7e40;
        }
    }
    ctx->pc = 0x1C7D14u;
label_1c7d14:
    // 0x1c7d14: 0x10a2003c  beq         $a1, $v0, . + 4 + (0x3C << 2)
label_1c7d18:
    if (ctx->pc == 0x1C7D18u) {
        ctx->pc = 0x1C7D18u;
            // 0x1c7d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7D1Cu;
        goto label_1c7d1c;
    }
    ctx->pc = 0x1C7D14u;
    {
        const bool branch_taken_0x1c7d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D14u;
            // 0x1c7d18: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d14) {
            ctx->pc = 0x1C7E08u;
            goto label_1c7e08;
        }
    }
    ctx->pc = 0x1C7D1Cu;
label_1c7d1c:
    // 0x1c7d1c: 0x10000064  b           . + 4 + (0x64 << 2)
label_1c7d20:
    if (ctx->pc == 0x1C7D20u) {
        ctx->pc = 0x1C7D20u;
            // 0x1c7d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7D24u;
        goto label_1c7d24;
    }
    ctx->pc = 0x1C7D1Cu;
    {
        const bool branch_taken_0x1c7d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D1Cu;
            // 0x1c7d20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d1c) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7D24u;
label_1c7d24:
    // 0x1c7d24: 0x0  nop
    ctx->pc = 0x1c7d24u;
    // NOP
label_1c7d28:
    // 0x1c7d28: 0x10a20055  beq         $a1, $v0, . + 4 + (0x55 << 2)
label_1c7d2c:
    if (ctx->pc == 0x1C7D2Cu) {
        ctx->pc = 0x1C7D2Cu;
            // 0x1c7d2c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->pc = 0x1C7D30u;
        goto label_1c7d30;
    }
    ctx->pc = 0x1C7D28u;
    {
        const bool branch_taken_0x1c7d28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x1C7D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D28u;
            // 0x1c7d2c: 0x28a200cd  slti        $v0, $a1, 0xCD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)205) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d28) {
            ctx->pc = 0x1C7E80u;
            goto label_1c7e80;
        }
    }
    ctx->pc = 0x1C7D30u;
label_1c7d30:
    // 0x1c7d30: 0x1440004d  bnez        $v0, . + 4 + (0x4D << 2)
label_1c7d34:
    if (ctx->pc == 0x1C7D34u) {
        ctx->pc = 0x1C7D34u;
            // 0x1c7d34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D38u;
        goto label_1c7d38;
    }
    ctx->pc = 0x1C7D30u;
    {
        const bool branch_taken_0x1c7d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D30u;
            // 0x1c7d34: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d30) {
            ctx->pc = 0x1C7E68u;
            goto label_1c7e68;
        }
    }
    ctx->pc = 0x1C7D38u;
label_1c7d38:
    // 0x1c7d38: 0x2403012b  addiu       $v1, $zero, 0x12B
    ctx->pc = 0x1c7d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 299));
label_1c7d3c:
    // 0x1c7d3c: 0x10a3005b  beq         $a1, $v1, . + 4 + (0x5B << 2)
label_1c7d40:
    if (ctx->pc == 0x1C7D40u) {
        ctx->pc = 0x1C7D40u;
            // 0x1c7d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C7D44u;
        goto label_1c7d44;
    }
    ctx->pc = 0x1C7D3Cu;
    {
        const bool branch_taken_0x1c7d3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C7D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D3Cu;
            // 0x1c7d40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d3c) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7D44u;
label_1c7d44:
    // 0x1c7d44: 0x10000059  b           . + 4 + (0x59 << 2)
label_1c7d48:
    if (ctx->pc == 0x1C7D48u) {
        ctx->pc = 0x1C7D48u;
            // 0x1c7d48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7D4Cu;
        goto label_1c7d4c;
    }
    ctx->pc = 0x1C7D44u;
    {
        const bool branch_taken_0x1c7d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D44u;
            // 0x1c7d48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d44) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7D4Cu;
label_1c7d4c:
    // 0x1c7d4c: 0x0  nop
    ctx->pc = 0x1c7d4cu;
    // NOP
label_1c7d50:
    // 0x1c7d50: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_1c7d54:
    if (ctx->pc == 0x1C7D54u) {
        ctx->pc = 0x1C7D54u;
            // 0x1c7d54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7D58u;
        goto label_1c7d58;
    }
    ctx->pc = 0x1C7D50u;
    {
        const bool branch_taken_0x1c7d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D50u;
            // 0x1c7d54: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d50) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7D58u;
label_1c7d58:
    // 0x1c7d58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1c7d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c7d5c:
    // 0x1c7d5c: 0x10a00054  beqz        $a1, . + 4 + (0x54 << 2)
label_1c7d60:
    if (ctx->pc == 0x1C7D60u) {
        ctx->pc = 0x1C7D64u;
        goto label_1c7d64;
    }
    ctx->pc = 0x1C7D5Cu;
    {
        const bool branch_taken_0x1c7d5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d5c) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7D64u;
label_1c7d64:
    // 0x1c7d64: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c7d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c7d68:
    // 0x1c7d68: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
label_1c7d6c:
    if (ctx->pc == 0x1C7D6Cu) {
        ctx->pc = 0x1C7D70u;
        goto label_1c7d70;
    }
    ctx->pc = 0x1C7D68u;
    {
        const bool branch_taken_0x1c7d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7d68) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7D70u;
label_1c7d70:
    // 0x1c7d70: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x1c7d70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c7d74:
    // 0x1c7d74: 0x8071ede  j           func_1C7B78
label_1c7d78:
    if (ctx->pc == 0x1C7D78u) {
        ctx->pc = 0x1C7D78u;
            // 0x1c7d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7D7Cu;
        goto label_1c7d7c;
    }
    ctx->pc = 0x1C7D74u;
    ctx->pc = 0x1C7D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D74u;
            // 0x1c7d78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7B78u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1c7b78;
    ctx->pc = 0x1C7D7Cu;
label_1c7d7c:
    // 0x1c7d7c: 0x0  nop
    ctx->pc = 0x1c7d7cu;
    // NOP
label_1c7d80:
    // 0x1c7d80: 0x1060004a  beqz        $v1, . + 4 + (0x4A << 2)
label_1c7d84:
    if (ctx->pc == 0x1C7D84u) {
        ctx->pc = 0x1C7D84u;
            // 0x1c7d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7D88u;
        goto label_1c7d88;
    }
    ctx->pc = 0x1C7D80u;
    {
        const bool branch_taken_0x1c7d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D80u;
            // 0x1c7d84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d80) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7D88u;
label_1c7d88:
    // 0x1c7d88: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c7d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c7d8c:
    // 0x1c7d8c: 0x10800047  beqz        $a0, . + 4 + (0x47 << 2)
label_1c7d90:
    if (ctx->pc == 0x1C7D90u) {
        ctx->pc = 0x1C7D90u;
            // 0x1c7d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7D94u;
        goto label_1c7d94;
    }
    ctx->pc = 0x1C7D8Cu;
    {
        const bool branch_taken_0x1c7d8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D8Cu;
            // 0x1c7d90: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7d8c) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7D94u;
label_1c7d94:
    // 0x1c7d94: 0x8071f08  j           func_1C7C20
label_1c7d98:
    if (ctx->pc == 0x1C7D98u) {
        ctx->pc = 0x1C7D98u;
            // 0x1c7d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7D9Cu;
        goto label_1c7d9c;
    }
    ctx->pc = 0x1C7D94u;
    ctx->pc = 0x1C7D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7D94u;
            // 0x1c7d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C7C20u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_1c7c20;
    ctx->pc = 0x1C7D9Cu;
label_1c7d9c:
    // 0x1c7d9c: 0x0  nop
    ctx->pc = 0x1c7d9cu;
    // NOP
label_1c7da0:
    // 0x1c7da0: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
label_1c7da4:
    if (ctx->pc == 0x1C7DA4u) {
        ctx->pc = 0x1C7DA4u;
            // 0x1c7da4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7DA8u;
        goto label_1c7da8;
    }
    ctx->pc = 0x1C7DA0u;
    {
        const bool branch_taken_0x1c7da0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DA0u;
            // 0x1c7da4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7da0) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7DA8u;
label_1c7da8:
    // 0x1c7da8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c7da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c7dac:
    // 0x1c7dac: 0x1080003f  beqz        $a0, . + 4 + (0x3F << 2)
label_1c7db0:
    if (ctx->pc == 0x1C7DB0u) {
        ctx->pc = 0x1C7DB0u;
            // 0x1c7db0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7DB4u;
        goto label_1c7db4;
    }
    ctx->pc = 0x1C7DACu;
    {
        const bool branch_taken_0x1c7dac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DACu;
            // 0x1c7db0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7dac) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7DB4u;
label_1c7db4:
    // 0x1c7db4: 0x807077c  j           func_1C1DF0
label_1c7db8:
    if (ctx->pc == 0x1C7DB8u) {
        ctx->pc = 0x1C7DB8u;
            // 0x1c7db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7DBCu;
        goto label_1c7dbc;
    }
    ctx->pc = 0x1C7DB4u;
    ctx->pc = 0x1C7DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DB4u;
            // 0x1c7db8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1DF0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7DBCu;
label_1c7dbc:
    // 0x1c7dbc: 0x0  nop
    ctx->pc = 0x1c7dbcu;
    // NOP
label_1c7dc0:
    // 0x1c7dc0: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_1c7dc4:
    if (ctx->pc == 0x1C7DC4u) {
        ctx->pc = 0x1C7DC4u;
            // 0x1c7dc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7DC8u;
        goto label_1c7dc8;
    }
    ctx->pc = 0x1C7DC0u;
    {
        const bool branch_taken_0x1c7dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DC0u;
            // 0x1c7dc4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7dc0) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7DC8u;
label_1c7dc8:
    // 0x1c7dc8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c7dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c7dcc:
    // 0x1c7dcc: 0x10800037  beqz        $a0, . + 4 + (0x37 << 2)
label_1c7dd0:
    if (ctx->pc == 0x1C7DD0u) {
        ctx->pc = 0x1C7DD0u;
            // 0x1c7dd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7DD4u;
        goto label_1c7dd4;
    }
    ctx->pc = 0x1C7DCCu;
    {
        const bool branch_taken_0x1c7dcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DCCu;
            // 0x1c7dd0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7dcc) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7DD4u;
label_1c7dd4:
    // 0x1c7dd4: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1c7dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1c7dd8:
    // 0x1c7dd8: 0x80706a8  j           func_1C1AA0
label_1c7ddc:
    if (ctx->pc == 0x1C7DDCu) {
        ctx->pc = 0x1C7DDCu;
            // 0x1c7ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7DE0u;
        goto label_1c7de0;
    }
    ctx->pc = 0x1C7DD8u;
    ctx->pc = 0x1C7DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DD8u;
            // 0x1c7ddc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AA0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C1AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7DE0u;
label_1c7de0:
    // 0x1c7de0: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_1c7de4:
    if (ctx->pc == 0x1C7DE4u) {
        ctx->pc = 0x1C7DE4u;
            // 0x1c7de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7DE8u;
        goto label_1c7de8;
    }
    ctx->pc = 0x1C7DE0u;
    {
        const bool branch_taken_0x1c7de0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DE0u;
            // 0x1c7de4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7de0) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7DE8u;
label_1c7de8:
    // 0x1c7de8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1c7de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c7dec:
    // 0x1c7dec: 0x1080002f  beqz        $a0, . + 4 + (0x2F << 2)
label_1c7df0:
    if (ctx->pc == 0x1C7DF0u) {
        ctx->pc = 0x1C7DF4u;
        goto label_1c7df4;
    }
    ctx->pc = 0x1C7DECu;
    {
        const bool branch_taken_0x1c7dec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7dec) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7DF4u;
label_1c7df4:
    // 0x1c7df4: 0x8070570  j           func_1C15C0
label_1c7df8:
    if (ctx->pc == 0x1C7DF8u) {
        ctx->pc = 0x1C7DF8u;
            // 0x1c7df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7DFCu;
        goto label_1c7dfc;
    }
    ctx->pc = 0x1C7DF4u;
    ctx->pc = 0x1C7DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7DF4u;
            // 0x1c7df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C15C0u;
    {
        auto targetFn = runtime->lookupFunction(0x1C15C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1C7DFCu;
label_1c7dfc:
    // 0x1c7dfc: 0x0  nop
    ctx->pc = 0x1c7dfcu;
    // NOP
label_1c7e00:
    // 0x1c7e00: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1c7e04:
    if (ctx->pc == 0x1C7E04u) {
        ctx->pc = 0x1C7E04u;
            // 0x1c7e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C7E08u;
        goto label_1c7e08;
    }
    ctx->pc = 0x1C7E00u;
    {
        const bool branch_taken_0x1c7e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E00u;
            // 0x1c7e04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e00) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7E08u;
label_1c7e08:
    // 0x1c7e08: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_1c7e0c:
    if (ctx->pc == 0x1C7E0Cu) {
        ctx->pc = 0x1C7E0Cu;
            // 0x1c7e0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7E10u;
        goto label_1c7e10;
    }
    ctx->pc = 0x1C7E08u;
    {
        const bool branch_taken_0x1c7e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E08u;
            // 0x1c7e0c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e08) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7E10u;
label_1c7e10:
    // 0x1c7e10: 0xc07046e  jal         func_1C11B8
label_1c7e14:
    if (ctx->pc == 0x1C7E14u) {
        ctx->pc = 0x1C7E18u;
        goto label_1c7e18;
    }
    ctx->pc = 0x1C7E10u;
    SET_GPR_U32(ctx, 31, 0x1C7E18u);
    ctx->pc = 0x1C11B8u;
    if (runtime->hasFunction(0x1C11B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C11B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E18u; }
        if (ctx->pc != 0x1C7E18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C11B8_0x1c11b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E18u; }
        if (ctx->pc != 0x1C7E18u) { return; }
    }
    ctx->pc = 0x1C7E18u;
label_1c7e18:
    // 0x1c7e18: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c7e18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c7e1c:
    // 0x1c7e1c: 0x10000024  b           . + 4 + (0x24 << 2)
label_1c7e20:
    if (ctx->pc == 0x1C7E20u) {
        ctx->pc = 0x1C7E20u;
            // 0x1c7e20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7E24u;
        goto label_1c7e24;
    }
    ctx->pc = 0x1C7E1Cu;
    {
        const bool branch_taken_0x1c7e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E1Cu;
            // 0x1c7e20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e1c) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7E24u;
label_1c7e24:
    // 0x1c7e24: 0x0  nop
    ctx->pc = 0x1c7e24u;
    // NOP
label_1c7e28:
    // 0x1c7e28: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
label_1c7e2c:
    if (ctx->pc == 0x1C7E2Cu) {
        ctx->pc = 0x1C7E2Cu;
            // 0x1c7e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1C7E30u;
        goto label_1c7e30;
    }
    ctx->pc = 0x1C7E28u;
    {
        const bool branch_taken_0x1c7e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E28u;
            // 0x1c7e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e28) {
            ctx->pc = 0x1C7EACu;
            goto label_1c7eac;
        }
    }
    ctx->pc = 0x1C7E30u;
label_1c7e30:
    // 0x1c7e30: 0xc07046e  jal         func_1C11B8
label_1c7e34:
    if (ctx->pc == 0x1C7E34u) {
        ctx->pc = 0x1C7E38u;
        goto label_1c7e38;
    }
    ctx->pc = 0x1C7E30u;
    SET_GPR_U32(ctx, 31, 0x1C7E38u);
    ctx->pc = 0x1C11B8u;
    if (runtime->hasFunction(0x1C11B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C11B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E38u; }
        if (ctx->pc != 0x1C7E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C11B8_0x1c11b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E38u; }
        if (ctx->pc != 0x1C7E38u) { return; }
    }
    ctx->pc = 0x1C7E38u;
label_1c7e38:
    // 0x1c7e38: 0x10000014  b           . + 4 + (0x14 << 2)
label_1c7e3c:
    if (ctx->pc == 0x1C7E3Cu) {
        ctx->pc = 0x1C7E40u;
        goto label_1c7e40;
    }
    ctx->pc = 0x1C7E38u;
    {
        const bool branch_taken_0x1c7e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e38) {
            ctx->pc = 0x1C7E8Cu;
            goto label_1c7e8c;
        }
    }
    ctx->pc = 0x1C7E40u;
label_1c7e40:
    // 0x1c7e40: 0xc070644  jal         func_1C1910
label_1c7e44:
    if (ctx->pc == 0x1C7E44u) {
        ctx->pc = 0x1C7E44u;
            // 0x1c7e44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E48u;
        goto label_1c7e48;
    }
    ctx->pc = 0x1C7E40u;
    SET_GPR_U32(ctx, 31, 0x1C7E48u);
    ctx->pc = 0x1C7E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E40u;
            // 0x1c7e44: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1910u;
    if (runtime->hasFunction(0x1C1910u)) {
        auto targetFn = runtime->lookupFunction(0x1C1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E48u; }
        if (ctx->pc != 0x1C7E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1910_0x1c1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E48u; }
        if (ctx->pc != 0x1C7E48u) { return; }
    }
    ctx->pc = 0x1C7E48u;
label_1c7e48:
    // 0x1c7e48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c7e48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c7e4c:
    // 0x1c7e4c: 0x10000018  b           . + 4 + (0x18 << 2)
label_1c7e50:
    if (ctx->pc == 0x1C7E50u) {
        ctx->pc = 0x1C7E50u;
            // 0x1c7e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7E54u;
        goto label_1c7e54;
    }
    ctx->pc = 0x1C7E4Cu;
    {
        const bool branch_taken_0x1c7e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E4Cu;
            // 0x1c7e50: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e4c) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7E54u;
label_1c7e54:
    // 0x1c7e54: 0x0  nop
    ctx->pc = 0x1c7e54u;
    // NOP
label_1c7e58:
    // 0x1c7e58: 0xc070644  jal         func_1C1910
label_1c7e5c:
    if (ctx->pc == 0x1C7E5Cu) {
        ctx->pc = 0x1C7E5Cu;
            // 0x1c7e5c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E60u;
        goto label_1c7e60;
    }
    ctx->pc = 0x1C7E58u;
    SET_GPR_U32(ctx, 31, 0x1C7E60u);
    ctx->pc = 0x1C7E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E58u;
            // 0x1c7e5c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1910u;
    if (runtime->hasFunction(0x1C1910u)) {
        auto targetFn = runtime->lookupFunction(0x1C1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E60u; }
        if (ctx->pc != 0x1C7E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1910_0x1c1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E60u; }
        if (ctx->pc != 0x1C7E60u) { return; }
    }
    ctx->pc = 0x1C7E60u;
label_1c7e60:
    // 0x1c7e60: 0x1000000a  b           . + 4 + (0xA << 2)
label_1c7e64:
    if (ctx->pc == 0x1C7E64u) {
        ctx->pc = 0x1C7E68u;
        goto label_1c7e68;
    }
    ctx->pc = 0x1C7E60u;
    {
        const bool branch_taken_0x1c7e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c7e60) {
            ctx->pc = 0x1C7E8Cu;
            goto label_1c7e8c;
        }
    }
    ctx->pc = 0x1C7E68u;
label_1c7e68:
    // 0x1c7e68: 0xc070680  jal         func_1C1A00
label_1c7e6c:
    if (ctx->pc == 0x1C7E6Cu) {
        ctx->pc = 0x1C7E6Cu;
            // 0x1c7e6c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E70u;
        goto label_1c7e70;
    }
    ctx->pc = 0x1C7E68u;
    SET_GPR_U32(ctx, 31, 0x1C7E70u);
    ctx->pc = 0x1C7E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E68u;
            // 0x1c7e6c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1A00u;
    if (runtime->hasFunction(0x1C1A00u)) {
        auto targetFn = runtime->lookupFunction(0x1C1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E70u; }
        if (ctx->pc != 0x1C7E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1A00_0x1c1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E70u; }
        if (ctx->pc != 0x1C7E70u) { return; }
    }
    ctx->pc = 0x1C7E70u;
label_1c7e70:
    // 0x1c7e70: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c7e70u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c7e74:
    // 0x1c7e74: 0x1000000e  b           . + 4 + (0xE << 2)
label_1c7e78:
    if (ctx->pc == 0x1C7E78u) {
        ctx->pc = 0x1C7E78u;
            // 0x1c7e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7E7Cu;
        goto label_1c7e7c;
    }
    ctx->pc = 0x1C7E74u;
    {
        const bool branch_taken_0x1c7e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E74u;
            // 0x1c7e78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7e74) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7E7Cu;
label_1c7e7c:
    // 0x1c7e7c: 0x0  nop
    ctx->pc = 0x1c7e7cu;
    // NOP
label_1c7e80:
    // 0x1c7e80: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x1c7e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1c7e84:
    // 0x1c7e84: 0xc070680  jal         func_1C1A00
label_1c7e88:
    if (ctx->pc == 0x1C7E88u) {
        ctx->pc = 0x1C7E88u;
            // 0x1c7e88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7E8Cu;
        goto label_1c7e8c;
    }
    ctx->pc = 0x1C7E84u;
    SET_GPR_U32(ctx, 31, 0x1C7E8Cu);
    ctx->pc = 0x1C7E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7E84u;
            // 0x1c7e88: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1A00u;
    if (runtime->hasFunction(0x1C1A00u)) {
        auto targetFn = runtime->lookupFunction(0x1C1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E8Cu; }
        if (ctx->pc != 0x1C7E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1A00_0x1c1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C7E8Cu; }
        if (ctx->pc != 0x1C7E8Cu) { return; }
    }
    ctx->pc = 0x1C7E8Cu;
label_1c7e8c:
    // 0x1c7e8c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c7e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1c7e90:
    // 0x1c7e90: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1c7e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_1c7e94:
    // 0x1c7e94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c7e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1c7e98:
    // 0x1c7e98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1c7e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1c7e9c:
    // 0x1c7e9c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1c7e9cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1c7ea0:
    // 0x1c7ea0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1c7ea4:
    if (ctx->pc == 0x1C7EA4u) {
        ctx->pc = 0x1C7EA4u;
            // 0x1c7ea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C7EA8u;
        goto label_1c7ea8;
    }
    ctx->pc = 0x1C7EA0u;
    {
        const bool branch_taken_0x1c7ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EA0u;
            // 0x1c7ea4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ea0) {
            ctx->pc = 0x1C7EB0u;
            goto label_1c7eb0;
        }
    }
    ctx->pc = 0x1C7EA8u;
label_1c7ea8:
    // 0x1c7ea8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1c7ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1c7eac:
    // 0x1c7eac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7eb0:
    // 0x1c7eb0: 0x3e00008  jr          $ra
label_1c7eb4:
    if (ctx->pc == 0x1C7EB4u) {
        ctx->pc = 0x1C7EB4u;
            // 0x1c7eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7EB8u;
        goto label_1c7eb8;
    }
    ctx->pc = 0x1C7EB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EB0u;
            // 0x1c7eb4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7EB8u;
label_1c7eb8:
    // 0x1c7eb8: 0x3e00008  jr          $ra
label_1c7ebc:
    if (ctx->pc == 0x1C7EBCu) {
        ctx->pc = 0x1C7EBCu;
            // 0x1c7ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EC0u;
        goto label_1c7ec0;
    }
    ctx->pc = 0x1C7EB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EB8u;
            // 0x1c7ebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7EC0u;
label_1c7ec0:
    // 0x1c7ec0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c7ec4:
    // 0x1c7ec4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1c7ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1c7ec8:
    // 0x1c7ec8: 0xac44a6bc  sw          $a0, -0x5944($v0)
    ctx->pc = 0x1c7ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944444), GPR_U32(ctx, 4));
label_1c7ecc:
    // 0x1c7ecc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7eccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ed0:
    // 0x1c7ed0: 0x3e00008  jr          $ra
label_1c7ed4:
    if (ctx->pc == 0x1C7ED4u) {
        ctx->pc = 0x1C7ED4u;
            // 0x1c7ed4: 0xac65a6c0  sw          $a1, -0x5940($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944448), GPR_U32(ctx, 5));
        ctx->pc = 0x1C7ED8u;
        goto label_1c7ed8;
    }
    ctx->pc = 0x1C7ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7ED0u;
            // 0x1c7ed4: 0xac65a6c0  sw          $a1, -0x5940($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294944448), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7ED8u;
label_1c7ed8:
    // 0x1c7ed8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c7edc:
    // 0x1c7edc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c7edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c7ee0:
    // 0x1c7ee0: 0x8c43a6bc  lw          $v1, -0x5944($v0)
    ctx->pc = 0x1c7ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944444)));
label_1c7ee4:
    // 0x1c7ee4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c7ee4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c7ee8:
    // 0x1c7ee8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1c7eec:
    if (ctx->pc == 0x1C7EECu) {
        ctx->pc = 0x1C7EECu;
            // 0x1c7eec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C7EF0u;
        goto label_1c7ef0;
    }
    ctx->pc = 0x1C7EE8u;
    {
        const bool branch_taken_0x1c7ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C7EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EE8u;
            // 0x1c7eec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c7ee8) {
            ctx->pc = 0x1C7EFCu;
            goto label_1c7efc;
        }
    }
    ctx->pc = 0x1C7EF0u;
label_1c7ef0:
    // 0x1c7ef0: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1c7ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1c7ef4:
    // 0x1c7ef4: 0x60f809  jalr        $v1
label_1c7ef8:
    if (ctx->pc == 0x1C7EF8u) {
        ctx->pc = 0x1C7EF8u;
            // 0x1c7ef8: 0x8c44a6c0  lw          $a0, -0x5940($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944448)));
        ctx->pc = 0x1C7EFCu;
        goto label_1c7efc;
    }
    ctx->pc = 0x1C7EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C7EFCu);
        ctx->pc = 0x1C7EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7EF4u;
            // 0x1c7ef8: 0x8c44a6c0  lw          $a0, -0x5940($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294944448)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C7EFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C7EFCu; }
            if (ctx->pc != 0x1C7EFCu) { return; }
        }
        }
    }
    ctx->pc = 0x1C7EFCu;
label_1c7efc:
    // 0x1c7efc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c7efcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c7f00:
    // 0x1c7f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c7f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c7f04:
    // 0x1c7f04: 0x3e00008  jr          $ra
label_1c7f08:
    if (ctx->pc == 0x1C7F08u) {
        ctx->pc = 0x1C7F08u;
            // 0x1c7f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C7F0Cu;
        goto label_1c7f0c;
    }
    ctx->pc = 0x1C7F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C7F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C7F04u;
            // 0x1c7f08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C7F0Cu;
label_1c7f0c:
    // 0x1c7f0c: 0x0  nop
    ctx->pc = 0x1c7f0cu;
    // NOP
}
