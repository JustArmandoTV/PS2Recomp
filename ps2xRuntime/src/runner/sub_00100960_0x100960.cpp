#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00100960
// Address: 0x100960 - 0x101650
void sub_00100960_0x100960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100960_0x100960");
#endif

    switch (ctx->pc) {
        case 0x100960u: goto label_100960;
        case 0x100964u: goto label_100964;
        case 0x100968u: goto label_100968;
        case 0x10096cu: goto label_10096c;
        case 0x100970u: goto label_100970;
        case 0x100974u: goto label_100974;
        case 0x100978u: goto label_100978;
        case 0x10097cu: goto label_10097c;
        case 0x100980u: goto label_100980;
        case 0x100984u: goto label_100984;
        case 0x100988u: goto label_100988;
        case 0x10098cu: goto label_10098c;
        case 0x100990u: goto label_100990;
        case 0x100994u: goto label_100994;
        case 0x100998u: goto label_100998;
        case 0x10099cu: goto label_10099c;
        case 0x1009a0u: goto label_1009a0;
        case 0x1009a4u: goto label_1009a4;
        case 0x1009a8u: goto label_1009a8;
        case 0x1009acu: goto label_1009ac;
        case 0x1009b0u: goto label_1009b0;
        case 0x1009b4u: goto label_1009b4;
        case 0x1009b8u: goto label_1009b8;
        case 0x1009bcu: goto label_1009bc;
        case 0x1009c0u: goto label_1009c0;
        case 0x1009c4u: goto label_1009c4;
        case 0x1009c8u: goto label_1009c8;
        case 0x1009ccu: goto label_1009cc;
        case 0x1009d0u: goto label_1009d0;
        case 0x1009d4u: goto label_1009d4;
        case 0x1009d8u: goto label_1009d8;
        case 0x1009dcu: goto label_1009dc;
        case 0x1009e0u: goto label_1009e0;
        case 0x1009e4u: goto label_1009e4;
        case 0x1009e8u: goto label_1009e8;
        case 0x1009ecu: goto label_1009ec;
        case 0x1009f0u: goto label_1009f0;
        case 0x1009f4u: goto label_1009f4;
        case 0x1009f8u: goto label_1009f8;
        case 0x1009fcu: goto label_1009fc;
        case 0x100a00u: goto label_100a00;
        case 0x100a04u: goto label_100a04;
        case 0x100a08u: goto label_100a08;
        case 0x100a0cu: goto label_100a0c;
        case 0x100a10u: goto label_100a10;
        case 0x100a14u: goto label_100a14;
        case 0x100a18u: goto label_100a18;
        case 0x100a1cu: goto label_100a1c;
        case 0x100a20u: goto label_100a20;
        case 0x100a24u: goto label_100a24;
        case 0x100a28u: goto label_100a28;
        case 0x100a2cu: goto label_100a2c;
        case 0x100a30u: goto label_100a30;
        case 0x100a34u: goto label_100a34;
        case 0x100a38u: goto label_100a38;
        case 0x100a3cu: goto label_100a3c;
        case 0x100a40u: goto label_100a40;
        case 0x100a44u: goto label_100a44;
        case 0x100a48u: goto label_100a48;
        case 0x100a4cu: goto label_100a4c;
        case 0x100a50u: goto label_100a50;
        case 0x100a54u: goto label_100a54;
        case 0x100a58u: goto label_100a58;
        case 0x100a5cu: goto label_100a5c;
        case 0x100a60u: goto label_100a60;
        case 0x100a64u: goto label_100a64;
        case 0x100a68u: goto label_100a68;
        case 0x100a6cu: goto label_100a6c;
        case 0x100a70u: goto label_100a70;
        case 0x100a74u: goto label_100a74;
        case 0x100a78u: goto label_100a78;
        case 0x100a7cu: goto label_100a7c;
        case 0x100a80u: goto label_100a80;
        case 0x100a84u: goto label_100a84;
        case 0x100a88u: goto label_100a88;
        case 0x100a8cu: goto label_100a8c;
        case 0x100a90u: goto label_100a90;
        case 0x100a94u: goto label_100a94;
        case 0x100a98u: goto label_100a98;
        case 0x100a9cu: goto label_100a9c;
        case 0x100aa0u: goto label_100aa0;
        case 0x100aa4u: goto label_100aa4;
        case 0x100aa8u: goto label_100aa8;
        case 0x100aacu: goto label_100aac;
        case 0x100ab0u: goto label_100ab0;
        case 0x100ab4u: goto label_100ab4;
        case 0x100ab8u: goto label_100ab8;
        case 0x100abcu: goto label_100abc;
        case 0x100ac0u: goto label_100ac0;
        case 0x100ac4u: goto label_100ac4;
        case 0x100ac8u: goto label_100ac8;
        case 0x100accu: goto label_100acc;
        case 0x100ad0u: goto label_100ad0;
        case 0x100ad4u: goto label_100ad4;
        case 0x100ad8u: goto label_100ad8;
        case 0x100adcu: goto label_100adc;
        case 0x100ae0u: goto label_100ae0;
        case 0x100ae4u: goto label_100ae4;
        case 0x100ae8u: goto label_100ae8;
        case 0x100aecu: goto label_100aec;
        case 0x100af0u: goto label_100af0;
        case 0x100af4u: goto label_100af4;
        case 0x100af8u: goto label_100af8;
        case 0x100afcu: goto label_100afc;
        case 0x100b00u: goto label_100b00;
        case 0x100b04u: goto label_100b04;
        case 0x100b08u: goto label_100b08;
        case 0x100b0cu: goto label_100b0c;
        case 0x100b10u: goto label_100b10;
        case 0x100b14u: goto label_100b14;
        case 0x100b18u: goto label_100b18;
        case 0x100b1cu: goto label_100b1c;
        case 0x100b20u: goto label_100b20;
        case 0x100b24u: goto label_100b24;
        case 0x100b28u: goto label_100b28;
        case 0x100b2cu: goto label_100b2c;
        case 0x100b30u: goto label_100b30;
        case 0x100b34u: goto label_100b34;
        case 0x100b38u: goto label_100b38;
        case 0x100b3cu: goto label_100b3c;
        case 0x100b40u: goto label_100b40;
        case 0x100b44u: goto label_100b44;
        case 0x100b48u: goto label_100b48;
        case 0x100b4cu: goto label_100b4c;
        case 0x100b50u: goto label_100b50;
        case 0x100b54u: goto label_100b54;
        case 0x100b58u: goto label_100b58;
        case 0x100b5cu: goto label_100b5c;
        case 0x100b60u: goto label_100b60;
        case 0x100b64u: goto label_100b64;
        case 0x100b68u: goto label_100b68;
        case 0x100b6cu: goto label_100b6c;
        case 0x100b70u: goto label_100b70;
        case 0x100b74u: goto label_100b74;
        case 0x100b78u: goto label_100b78;
        case 0x100b7cu: goto label_100b7c;
        case 0x100b80u: goto label_100b80;
        case 0x100b84u: goto label_100b84;
        case 0x100b88u: goto label_100b88;
        case 0x100b8cu: goto label_100b8c;
        case 0x100b90u: goto label_100b90;
        case 0x100b94u: goto label_100b94;
        case 0x100b98u: goto label_100b98;
        case 0x100b9cu: goto label_100b9c;
        case 0x100ba0u: goto label_100ba0;
        case 0x100ba4u: goto label_100ba4;
        case 0x100ba8u: goto label_100ba8;
        case 0x100bacu: goto label_100bac;
        case 0x100bb0u: goto label_100bb0;
        case 0x100bb4u: goto label_100bb4;
        case 0x100bb8u: goto label_100bb8;
        case 0x100bbcu: goto label_100bbc;
        case 0x100bc0u: goto label_100bc0;
        case 0x100bc4u: goto label_100bc4;
        case 0x100bc8u: goto label_100bc8;
        case 0x100bccu: goto label_100bcc;
        case 0x100bd0u: goto label_100bd0;
        case 0x100bd4u: goto label_100bd4;
        case 0x100bd8u: goto label_100bd8;
        case 0x100bdcu: goto label_100bdc;
        case 0x100be0u: goto label_100be0;
        case 0x100be4u: goto label_100be4;
        case 0x100be8u: goto label_100be8;
        case 0x100becu: goto label_100bec;
        case 0x100bf0u: goto label_100bf0;
        case 0x100bf4u: goto label_100bf4;
        case 0x100bf8u: goto label_100bf8;
        case 0x100bfcu: goto label_100bfc;
        case 0x100c00u: goto label_100c00;
        case 0x100c04u: goto label_100c04;
        case 0x100c08u: goto label_100c08;
        case 0x100c0cu: goto label_100c0c;
        case 0x100c10u: goto label_100c10;
        case 0x100c14u: goto label_100c14;
        case 0x100c18u: goto label_100c18;
        case 0x100c1cu: goto label_100c1c;
        case 0x100c20u: goto label_100c20;
        case 0x100c24u: goto label_100c24;
        case 0x100c28u: goto label_100c28;
        case 0x100c2cu: goto label_100c2c;
        case 0x100c30u: goto label_100c30;
        case 0x100c34u: goto label_100c34;
        case 0x100c38u: goto label_100c38;
        case 0x100c3cu: goto label_100c3c;
        case 0x100c40u: goto label_100c40;
        case 0x100c44u: goto label_100c44;
        case 0x100c48u: goto label_100c48;
        case 0x100c4cu: goto label_100c4c;
        case 0x100c50u: goto label_100c50;
        case 0x100c54u: goto label_100c54;
        case 0x100c58u: goto label_100c58;
        case 0x100c5cu: goto label_100c5c;
        case 0x100c60u: goto label_100c60;
        case 0x100c64u: goto label_100c64;
        case 0x100c68u: goto label_100c68;
        case 0x100c6cu: goto label_100c6c;
        case 0x100c70u: goto label_100c70;
        case 0x100c74u: goto label_100c74;
        case 0x100c78u: goto label_100c78;
        case 0x100c7cu: goto label_100c7c;
        case 0x100c80u: goto label_100c80;
        case 0x100c84u: goto label_100c84;
        case 0x100c88u: goto label_100c88;
        case 0x100c8cu: goto label_100c8c;
        case 0x100c90u: goto label_100c90;
        case 0x100c94u: goto label_100c94;
        case 0x100c98u: goto label_100c98;
        case 0x100c9cu: goto label_100c9c;
        case 0x100ca0u: goto label_100ca0;
        case 0x100ca4u: goto label_100ca4;
        case 0x100ca8u: goto label_100ca8;
        case 0x100cacu: goto label_100cac;
        case 0x100cb0u: goto label_100cb0;
        case 0x100cb4u: goto label_100cb4;
        case 0x100cb8u: goto label_100cb8;
        case 0x100cbcu: goto label_100cbc;
        case 0x100cc0u: goto label_100cc0;
        case 0x100cc4u: goto label_100cc4;
        case 0x100cc8u: goto label_100cc8;
        case 0x100cccu: goto label_100ccc;
        case 0x100cd0u: goto label_100cd0;
        case 0x100cd4u: goto label_100cd4;
        case 0x100cd8u: goto label_100cd8;
        case 0x100cdcu: goto label_100cdc;
        case 0x100ce0u: goto label_100ce0;
        case 0x100ce4u: goto label_100ce4;
        case 0x100ce8u: goto label_100ce8;
        case 0x100cecu: goto label_100cec;
        case 0x100cf0u: goto label_100cf0;
        case 0x100cf4u: goto label_100cf4;
        case 0x100cf8u: goto label_100cf8;
        case 0x100cfcu: goto label_100cfc;
        case 0x100d00u: goto label_100d00;
        case 0x100d04u: goto label_100d04;
        case 0x100d08u: goto label_100d08;
        case 0x100d0cu: goto label_100d0c;
        case 0x100d10u: goto label_100d10;
        case 0x100d14u: goto label_100d14;
        case 0x100d18u: goto label_100d18;
        case 0x100d1cu: goto label_100d1c;
        case 0x100d20u: goto label_100d20;
        case 0x100d24u: goto label_100d24;
        case 0x100d28u: goto label_100d28;
        case 0x100d2cu: goto label_100d2c;
        case 0x100d30u: goto label_100d30;
        case 0x100d34u: goto label_100d34;
        case 0x100d38u: goto label_100d38;
        case 0x100d3cu: goto label_100d3c;
        case 0x100d40u: goto label_100d40;
        case 0x100d44u: goto label_100d44;
        case 0x100d48u: goto label_100d48;
        case 0x100d4cu: goto label_100d4c;
        case 0x100d50u: goto label_100d50;
        case 0x100d54u: goto label_100d54;
        case 0x100d58u: goto label_100d58;
        case 0x100d5cu: goto label_100d5c;
        case 0x100d60u: goto label_100d60;
        case 0x100d64u: goto label_100d64;
        case 0x100d68u: goto label_100d68;
        case 0x100d6cu: goto label_100d6c;
        case 0x100d70u: goto label_100d70;
        case 0x100d74u: goto label_100d74;
        case 0x100d78u: goto label_100d78;
        case 0x100d7cu: goto label_100d7c;
        case 0x100d80u: goto label_100d80;
        case 0x100d84u: goto label_100d84;
        case 0x100d88u: goto label_100d88;
        case 0x100d8cu: goto label_100d8c;
        case 0x100d90u: goto label_100d90;
        case 0x100d94u: goto label_100d94;
        case 0x100d98u: goto label_100d98;
        case 0x100d9cu: goto label_100d9c;
        case 0x100da0u: goto label_100da0;
        case 0x100da4u: goto label_100da4;
        case 0x100da8u: goto label_100da8;
        case 0x100dacu: goto label_100dac;
        case 0x100db0u: goto label_100db0;
        case 0x100db4u: goto label_100db4;
        case 0x100db8u: goto label_100db8;
        case 0x100dbcu: goto label_100dbc;
        case 0x100dc0u: goto label_100dc0;
        case 0x100dc4u: goto label_100dc4;
        case 0x100dc8u: goto label_100dc8;
        case 0x100dccu: goto label_100dcc;
        case 0x100dd0u: goto label_100dd0;
        case 0x100dd4u: goto label_100dd4;
        case 0x100dd8u: goto label_100dd8;
        case 0x100ddcu: goto label_100ddc;
        case 0x100de0u: goto label_100de0;
        case 0x100de4u: goto label_100de4;
        case 0x100de8u: goto label_100de8;
        case 0x100decu: goto label_100dec;
        case 0x100df0u: goto label_100df0;
        case 0x100df4u: goto label_100df4;
        case 0x100df8u: goto label_100df8;
        case 0x100dfcu: goto label_100dfc;
        case 0x100e00u: goto label_100e00;
        case 0x100e04u: goto label_100e04;
        case 0x100e08u: goto label_100e08;
        case 0x100e0cu: goto label_100e0c;
        case 0x100e10u: goto label_100e10;
        case 0x100e14u: goto label_100e14;
        case 0x100e18u: goto label_100e18;
        case 0x100e1cu: goto label_100e1c;
        case 0x100e20u: goto label_100e20;
        case 0x100e24u: goto label_100e24;
        case 0x100e28u: goto label_100e28;
        case 0x100e2cu: goto label_100e2c;
        case 0x100e30u: goto label_100e30;
        case 0x100e34u: goto label_100e34;
        case 0x100e38u: goto label_100e38;
        case 0x100e3cu: goto label_100e3c;
        case 0x100e40u: goto label_100e40;
        case 0x100e44u: goto label_100e44;
        case 0x100e48u: goto label_100e48;
        case 0x100e4cu: goto label_100e4c;
        case 0x100e50u: goto label_100e50;
        case 0x100e54u: goto label_100e54;
        case 0x100e58u: goto label_100e58;
        case 0x100e5cu: goto label_100e5c;
        case 0x100e60u: goto label_100e60;
        case 0x100e64u: goto label_100e64;
        case 0x100e68u: goto label_100e68;
        case 0x100e6cu: goto label_100e6c;
        case 0x100e70u: goto label_100e70;
        case 0x100e74u: goto label_100e74;
        case 0x100e78u: goto label_100e78;
        case 0x100e7cu: goto label_100e7c;
        case 0x100e80u: goto label_100e80;
        case 0x100e84u: goto label_100e84;
        case 0x100e88u: goto label_100e88;
        case 0x100e8cu: goto label_100e8c;
        case 0x100e90u: goto label_100e90;
        case 0x100e94u: goto label_100e94;
        case 0x100e98u: goto label_100e98;
        case 0x100e9cu: goto label_100e9c;
        case 0x100ea0u: goto label_100ea0;
        case 0x100ea4u: goto label_100ea4;
        case 0x100ea8u: goto label_100ea8;
        case 0x100eacu: goto label_100eac;
        case 0x100eb0u: goto label_100eb0;
        case 0x100eb4u: goto label_100eb4;
        case 0x100eb8u: goto label_100eb8;
        case 0x100ebcu: goto label_100ebc;
        case 0x100ec0u: goto label_100ec0;
        case 0x100ec4u: goto label_100ec4;
        case 0x100ec8u: goto label_100ec8;
        case 0x100eccu: goto label_100ecc;
        case 0x100ed0u: goto label_100ed0;
        case 0x100ed4u: goto label_100ed4;
        case 0x100ed8u: goto label_100ed8;
        case 0x100edcu: goto label_100edc;
        case 0x100ee0u: goto label_100ee0;
        case 0x100ee4u: goto label_100ee4;
        case 0x100ee8u: goto label_100ee8;
        case 0x100eecu: goto label_100eec;
        case 0x100ef0u: goto label_100ef0;
        case 0x100ef4u: goto label_100ef4;
        case 0x100ef8u: goto label_100ef8;
        case 0x100efcu: goto label_100efc;
        case 0x100f00u: goto label_100f00;
        case 0x100f04u: goto label_100f04;
        case 0x100f08u: goto label_100f08;
        case 0x100f0cu: goto label_100f0c;
        case 0x100f10u: goto label_100f10;
        case 0x100f14u: goto label_100f14;
        case 0x100f18u: goto label_100f18;
        case 0x100f1cu: goto label_100f1c;
        case 0x100f20u: goto label_100f20;
        case 0x100f24u: goto label_100f24;
        case 0x100f28u: goto label_100f28;
        case 0x100f2cu: goto label_100f2c;
        case 0x100f30u: goto label_100f30;
        case 0x100f34u: goto label_100f34;
        case 0x100f38u: goto label_100f38;
        case 0x100f3cu: goto label_100f3c;
        case 0x100f40u: goto label_100f40;
        case 0x100f44u: goto label_100f44;
        case 0x100f48u: goto label_100f48;
        case 0x100f4cu: goto label_100f4c;
        case 0x100f50u: goto label_100f50;
        case 0x100f54u: goto label_100f54;
        case 0x100f58u: goto label_100f58;
        case 0x100f5cu: goto label_100f5c;
        case 0x100f60u: goto label_100f60;
        case 0x100f64u: goto label_100f64;
        case 0x100f68u: goto label_100f68;
        case 0x100f6cu: goto label_100f6c;
        case 0x100f70u: goto label_100f70;
        case 0x100f74u: goto label_100f74;
        case 0x100f78u: goto label_100f78;
        case 0x100f7cu: goto label_100f7c;
        case 0x100f80u: goto label_100f80;
        case 0x100f84u: goto label_100f84;
        case 0x100f88u: goto label_100f88;
        case 0x100f8cu: goto label_100f8c;
        case 0x100f90u: goto label_100f90;
        case 0x100f94u: goto label_100f94;
        case 0x100f98u: goto label_100f98;
        case 0x100f9cu: goto label_100f9c;
        case 0x100fa0u: goto label_100fa0;
        case 0x100fa4u: goto label_100fa4;
        case 0x100fa8u: goto label_100fa8;
        case 0x100facu: goto label_100fac;
        case 0x100fb0u: goto label_100fb0;
        case 0x100fb4u: goto label_100fb4;
        case 0x100fb8u: goto label_100fb8;
        case 0x100fbcu: goto label_100fbc;
        case 0x100fc0u: goto label_100fc0;
        case 0x100fc4u: goto label_100fc4;
        case 0x100fc8u: goto label_100fc8;
        case 0x100fccu: goto label_100fcc;
        case 0x100fd0u: goto label_100fd0;
        case 0x100fd4u: goto label_100fd4;
        case 0x100fd8u: goto label_100fd8;
        case 0x100fdcu: goto label_100fdc;
        case 0x100fe0u: goto label_100fe0;
        case 0x100fe4u: goto label_100fe4;
        case 0x100fe8u: goto label_100fe8;
        case 0x100fecu: goto label_100fec;
        case 0x100ff0u: goto label_100ff0;
        case 0x100ff4u: goto label_100ff4;
        case 0x100ff8u: goto label_100ff8;
        case 0x100ffcu: goto label_100ffc;
        case 0x101000u: goto label_101000;
        case 0x101004u: goto label_101004;
        case 0x101008u: goto label_101008;
        case 0x10100cu: goto label_10100c;
        case 0x101010u: goto label_101010;
        case 0x101014u: goto label_101014;
        case 0x101018u: goto label_101018;
        case 0x10101cu: goto label_10101c;
        case 0x101020u: goto label_101020;
        case 0x101024u: goto label_101024;
        case 0x101028u: goto label_101028;
        case 0x10102cu: goto label_10102c;
        case 0x101030u: goto label_101030;
        case 0x101034u: goto label_101034;
        case 0x101038u: goto label_101038;
        case 0x10103cu: goto label_10103c;
        case 0x101040u: goto label_101040;
        case 0x101044u: goto label_101044;
        case 0x101048u: goto label_101048;
        case 0x10104cu: goto label_10104c;
        case 0x101050u: goto label_101050;
        case 0x101054u: goto label_101054;
        case 0x101058u: goto label_101058;
        case 0x10105cu: goto label_10105c;
        case 0x101060u: goto label_101060;
        case 0x101064u: goto label_101064;
        case 0x101068u: goto label_101068;
        case 0x10106cu: goto label_10106c;
        case 0x101070u: goto label_101070;
        case 0x101074u: goto label_101074;
        case 0x101078u: goto label_101078;
        case 0x10107cu: goto label_10107c;
        case 0x101080u: goto label_101080;
        case 0x101084u: goto label_101084;
        case 0x101088u: goto label_101088;
        case 0x10108cu: goto label_10108c;
        case 0x101090u: goto label_101090;
        case 0x101094u: goto label_101094;
        case 0x101098u: goto label_101098;
        case 0x10109cu: goto label_10109c;
        case 0x1010a0u: goto label_1010a0;
        case 0x1010a4u: goto label_1010a4;
        case 0x1010a8u: goto label_1010a8;
        case 0x1010acu: goto label_1010ac;
        case 0x1010b0u: goto label_1010b0;
        case 0x1010b4u: goto label_1010b4;
        case 0x1010b8u: goto label_1010b8;
        case 0x1010bcu: goto label_1010bc;
        case 0x1010c0u: goto label_1010c0;
        case 0x1010c4u: goto label_1010c4;
        case 0x1010c8u: goto label_1010c8;
        case 0x1010ccu: goto label_1010cc;
        case 0x1010d0u: goto label_1010d0;
        case 0x1010d4u: goto label_1010d4;
        case 0x1010d8u: goto label_1010d8;
        case 0x1010dcu: goto label_1010dc;
        case 0x1010e0u: goto label_1010e0;
        case 0x1010e4u: goto label_1010e4;
        case 0x1010e8u: goto label_1010e8;
        case 0x1010ecu: goto label_1010ec;
        case 0x1010f0u: goto label_1010f0;
        case 0x1010f4u: goto label_1010f4;
        case 0x1010f8u: goto label_1010f8;
        case 0x1010fcu: goto label_1010fc;
        case 0x101100u: goto label_101100;
        case 0x101104u: goto label_101104;
        case 0x101108u: goto label_101108;
        case 0x10110cu: goto label_10110c;
        case 0x101110u: goto label_101110;
        case 0x101114u: goto label_101114;
        case 0x101118u: goto label_101118;
        case 0x10111cu: goto label_10111c;
        case 0x101120u: goto label_101120;
        case 0x101124u: goto label_101124;
        case 0x101128u: goto label_101128;
        case 0x10112cu: goto label_10112c;
        case 0x101130u: goto label_101130;
        case 0x101134u: goto label_101134;
        case 0x101138u: goto label_101138;
        case 0x10113cu: goto label_10113c;
        case 0x101140u: goto label_101140;
        case 0x101144u: goto label_101144;
        case 0x101148u: goto label_101148;
        case 0x10114cu: goto label_10114c;
        case 0x101150u: goto label_101150;
        case 0x101154u: goto label_101154;
        case 0x101158u: goto label_101158;
        case 0x10115cu: goto label_10115c;
        case 0x101160u: goto label_101160;
        case 0x101164u: goto label_101164;
        case 0x101168u: goto label_101168;
        case 0x10116cu: goto label_10116c;
        case 0x101170u: goto label_101170;
        case 0x101174u: goto label_101174;
        case 0x101178u: goto label_101178;
        case 0x10117cu: goto label_10117c;
        case 0x101180u: goto label_101180;
        case 0x101184u: goto label_101184;
        case 0x101188u: goto label_101188;
        case 0x10118cu: goto label_10118c;
        case 0x101190u: goto label_101190;
        case 0x101194u: goto label_101194;
        case 0x101198u: goto label_101198;
        case 0x10119cu: goto label_10119c;
        case 0x1011a0u: goto label_1011a0;
        case 0x1011a4u: goto label_1011a4;
        case 0x1011a8u: goto label_1011a8;
        case 0x1011acu: goto label_1011ac;
        case 0x1011b0u: goto label_1011b0;
        case 0x1011b4u: goto label_1011b4;
        case 0x1011b8u: goto label_1011b8;
        case 0x1011bcu: goto label_1011bc;
        case 0x1011c0u: goto label_1011c0;
        case 0x1011c4u: goto label_1011c4;
        case 0x1011c8u: goto label_1011c8;
        case 0x1011ccu: goto label_1011cc;
        case 0x1011d0u: goto label_1011d0;
        case 0x1011d4u: goto label_1011d4;
        case 0x1011d8u: goto label_1011d8;
        case 0x1011dcu: goto label_1011dc;
        case 0x1011e0u: goto label_1011e0;
        case 0x1011e4u: goto label_1011e4;
        case 0x1011e8u: goto label_1011e8;
        case 0x1011ecu: goto label_1011ec;
        case 0x1011f0u: goto label_1011f0;
        case 0x1011f4u: goto label_1011f4;
        case 0x1011f8u: goto label_1011f8;
        case 0x1011fcu: goto label_1011fc;
        case 0x101200u: goto label_101200;
        case 0x101204u: goto label_101204;
        case 0x101208u: goto label_101208;
        case 0x10120cu: goto label_10120c;
        case 0x101210u: goto label_101210;
        case 0x101214u: goto label_101214;
        case 0x101218u: goto label_101218;
        case 0x10121cu: goto label_10121c;
        case 0x101220u: goto label_101220;
        case 0x101224u: goto label_101224;
        case 0x101228u: goto label_101228;
        case 0x10122cu: goto label_10122c;
        case 0x101230u: goto label_101230;
        case 0x101234u: goto label_101234;
        case 0x101238u: goto label_101238;
        case 0x10123cu: goto label_10123c;
        case 0x101240u: goto label_101240;
        case 0x101244u: goto label_101244;
        case 0x101248u: goto label_101248;
        case 0x10124cu: goto label_10124c;
        case 0x101250u: goto label_101250;
        case 0x101254u: goto label_101254;
        case 0x101258u: goto label_101258;
        case 0x10125cu: goto label_10125c;
        case 0x101260u: goto label_101260;
        case 0x101264u: goto label_101264;
        case 0x101268u: goto label_101268;
        case 0x10126cu: goto label_10126c;
        case 0x101270u: goto label_101270;
        case 0x101274u: goto label_101274;
        case 0x101278u: goto label_101278;
        case 0x10127cu: goto label_10127c;
        case 0x101280u: goto label_101280;
        case 0x101284u: goto label_101284;
        case 0x101288u: goto label_101288;
        case 0x10128cu: goto label_10128c;
        case 0x101290u: goto label_101290;
        case 0x101294u: goto label_101294;
        case 0x101298u: goto label_101298;
        case 0x10129cu: goto label_10129c;
        case 0x1012a0u: goto label_1012a0;
        case 0x1012a4u: goto label_1012a4;
        case 0x1012a8u: goto label_1012a8;
        case 0x1012acu: goto label_1012ac;
        case 0x1012b0u: goto label_1012b0;
        case 0x1012b4u: goto label_1012b4;
        case 0x1012b8u: goto label_1012b8;
        case 0x1012bcu: goto label_1012bc;
        case 0x1012c0u: goto label_1012c0;
        case 0x1012c4u: goto label_1012c4;
        case 0x1012c8u: goto label_1012c8;
        case 0x1012ccu: goto label_1012cc;
        case 0x1012d0u: goto label_1012d0;
        case 0x1012d4u: goto label_1012d4;
        case 0x1012d8u: goto label_1012d8;
        case 0x1012dcu: goto label_1012dc;
        case 0x1012e0u: goto label_1012e0;
        case 0x1012e4u: goto label_1012e4;
        case 0x1012e8u: goto label_1012e8;
        case 0x1012ecu: goto label_1012ec;
        case 0x1012f0u: goto label_1012f0;
        case 0x1012f4u: goto label_1012f4;
        case 0x1012f8u: goto label_1012f8;
        case 0x1012fcu: goto label_1012fc;
        case 0x101300u: goto label_101300;
        case 0x101304u: goto label_101304;
        case 0x101308u: goto label_101308;
        case 0x10130cu: goto label_10130c;
        case 0x101310u: goto label_101310;
        case 0x101314u: goto label_101314;
        case 0x101318u: goto label_101318;
        case 0x10131cu: goto label_10131c;
        case 0x101320u: goto label_101320;
        case 0x101324u: goto label_101324;
        case 0x101328u: goto label_101328;
        case 0x10132cu: goto label_10132c;
        case 0x101330u: goto label_101330;
        case 0x101334u: goto label_101334;
        case 0x101338u: goto label_101338;
        case 0x10133cu: goto label_10133c;
        case 0x101340u: goto label_101340;
        case 0x101344u: goto label_101344;
        case 0x101348u: goto label_101348;
        case 0x10134cu: goto label_10134c;
        case 0x101350u: goto label_101350;
        case 0x101354u: goto label_101354;
        case 0x101358u: goto label_101358;
        case 0x10135cu: goto label_10135c;
        case 0x101360u: goto label_101360;
        case 0x101364u: goto label_101364;
        case 0x101368u: goto label_101368;
        case 0x10136cu: goto label_10136c;
        case 0x101370u: goto label_101370;
        case 0x101374u: goto label_101374;
        case 0x101378u: goto label_101378;
        case 0x10137cu: goto label_10137c;
        case 0x101380u: goto label_101380;
        case 0x101384u: goto label_101384;
        case 0x101388u: goto label_101388;
        case 0x10138cu: goto label_10138c;
        case 0x101390u: goto label_101390;
        case 0x101394u: goto label_101394;
        case 0x101398u: goto label_101398;
        case 0x10139cu: goto label_10139c;
        case 0x1013a0u: goto label_1013a0;
        case 0x1013a4u: goto label_1013a4;
        case 0x1013a8u: goto label_1013a8;
        case 0x1013acu: goto label_1013ac;
        case 0x1013b0u: goto label_1013b0;
        case 0x1013b4u: goto label_1013b4;
        case 0x1013b8u: goto label_1013b8;
        case 0x1013bcu: goto label_1013bc;
        case 0x1013c0u: goto label_1013c0;
        case 0x1013c4u: goto label_1013c4;
        case 0x1013c8u: goto label_1013c8;
        case 0x1013ccu: goto label_1013cc;
        case 0x1013d0u: goto label_1013d0;
        case 0x1013d4u: goto label_1013d4;
        case 0x1013d8u: goto label_1013d8;
        case 0x1013dcu: goto label_1013dc;
        case 0x1013e0u: goto label_1013e0;
        case 0x1013e4u: goto label_1013e4;
        case 0x1013e8u: goto label_1013e8;
        case 0x1013ecu: goto label_1013ec;
        case 0x1013f0u: goto label_1013f0;
        case 0x1013f4u: goto label_1013f4;
        case 0x1013f8u: goto label_1013f8;
        case 0x1013fcu: goto label_1013fc;
        case 0x101400u: goto label_101400;
        case 0x101404u: goto label_101404;
        case 0x101408u: goto label_101408;
        case 0x10140cu: goto label_10140c;
        case 0x101410u: goto label_101410;
        case 0x101414u: goto label_101414;
        case 0x101418u: goto label_101418;
        case 0x10141cu: goto label_10141c;
        case 0x101420u: goto label_101420;
        case 0x101424u: goto label_101424;
        case 0x101428u: goto label_101428;
        case 0x10142cu: goto label_10142c;
        case 0x101430u: goto label_101430;
        case 0x101434u: goto label_101434;
        case 0x101438u: goto label_101438;
        case 0x10143cu: goto label_10143c;
        case 0x101440u: goto label_101440;
        case 0x101444u: goto label_101444;
        case 0x101448u: goto label_101448;
        case 0x10144cu: goto label_10144c;
        case 0x101450u: goto label_101450;
        case 0x101454u: goto label_101454;
        case 0x101458u: goto label_101458;
        case 0x10145cu: goto label_10145c;
        case 0x101460u: goto label_101460;
        case 0x101464u: goto label_101464;
        case 0x101468u: goto label_101468;
        case 0x10146cu: goto label_10146c;
        case 0x101470u: goto label_101470;
        case 0x101474u: goto label_101474;
        case 0x101478u: goto label_101478;
        case 0x10147cu: goto label_10147c;
        case 0x101480u: goto label_101480;
        case 0x101484u: goto label_101484;
        case 0x101488u: goto label_101488;
        case 0x10148cu: goto label_10148c;
        case 0x101490u: goto label_101490;
        case 0x101494u: goto label_101494;
        case 0x101498u: goto label_101498;
        case 0x10149cu: goto label_10149c;
        case 0x1014a0u: goto label_1014a0;
        case 0x1014a4u: goto label_1014a4;
        case 0x1014a8u: goto label_1014a8;
        case 0x1014acu: goto label_1014ac;
        case 0x1014b0u: goto label_1014b0;
        case 0x1014b4u: goto label_1014b4;
        case 0x1014b8u: goto label_1014b8;
        case 0x1014bcu: goto label_1014bc;
        case 0x1014c0u: goto label_1014c0;
        case 0x1014c4u: goto label_1014c4;
        case 0x1014c8u: goto label_1014c8;
        case 0x1014ccu: goto label_1014cc;
        case 0x1014d0u: goto label_1014d0;
        case 0x1014d4u: goto label_1014d4;
        case 0x1014d8u: goto label_1014d8;
        case 0x1014dcu: goto label_1014dc;
        case 0x1014e0u: goto label_1014e0;
        case 0x1014e4u: goto label_1014e4;
        case 0x1014e8u: goto label_1014e8;
        case 0x1014ecu: goto label_1014ec;
        case 0x1014f0u: goto label_1014f0;
        case 0x1014f4u: goto label_1014f4;
        case 0x1014f8u: goto label_1014f8;
        case 0x1014fcu: goto label_1014fc;
        case 0x101500u: goto label_101500;
        case 0x101504u: goto label_101504;
        case 0x101508u: goto label_101508;
        case 0x10150cu: goto label_10150c;
        case 0x101510u: goto label_101510;
        case 0x101514u: goto label_101514;
        case 0x101518u: goto label_101518;
        case 0x10151cu: goto label_10151c;
        case 0x101520u: goto label_101520;
        case 0x101524u: goto label_101524;
        case 0x101528u: goto label_101528;
        case 0x10152cu: goto label_10152c;
        case 0x101530u: goto label_101530;
        case 0x101534u: goto label_101534;
        case 0x101538u: goto label_101538;
        case 0x10153cu: goto label_10153c;
        case 0x101540u: goto label_101540;
        case 0x101544u: goto label_101544;
        case 0x101548u: goto label_101548;
        case 0x10154cu: goto label_10154c;
        case 0x101550u: goto label_101550;
        case 0x101554u: goto label_101554;
        case 0x101558u: goto label_101558;
        case 0x10155cu: goto label_10155c;
        case 0x101560u: goto label_101560;
        case 0x101564u: goto label_101564;
        case 0x101568u: goto label_101568;
        case 0x10156cu: goto label_10156c;
        case 0x101570u: goto label_101570;
        case 0x101574u: goto label_101574;
        case 0x101578u: goto label_101578;
        case 0x10157cu: goto label_10157c;
        case 0x101580u: goto label_101580;
        case 0x101584u: goto label_101584;
        case 0x101588u: goto label_101588;
        case 0x10158cu: goto label_10158c;
        case 0x101590u: goto label_101590;
        case 0x101594u: goto label_101594;
        case 0x101598u: goto label_101598;
        case 0x10159cu: goto label_10159c;
        case 0x1015a0u: goto label_1015a0;
        case 0x1015a4u: goto label_1015a4;
        case 0x1015a8u: goto label_1015a8;
        case 0x1015acu: goto label_1015ac;
        case 0x1015b0u: goto label_1015b0;
        case 0x1015b4u: goto label_1015b4;
        case 0x1015b8u: goto label_1015b8;
        case 0x1015bcu: goto label_1015bc;
        case 0x1015c0u: goto label_1015c0;
        case 0x1015c4u: goto label_1015c4;
        case 0x1015c8u: goto label_1015c8;
        case 0x1015ccu: goto label_1015cc;
        case 0x1015d0u: goto label_1015d0;
        case 0x1015d4u: goto label_1015d4;
        case 0x1015d8u: goto label_1015d8;
        case 0x1015dcu: goto label_1015dc;
        case 0x1015e0u: goto label_1015e0;
        case 0x1015e4u: goto label_1015e4;
        case 0x1015e8u: goto label_1015e8;
        case 0x1015ecu: goto label_1015ec;
        case 0x1015f0u: goto label_1015f0;
        case 0x1015f4u: goto label_1015f4;
        case 0x1015f8u: goto label_1015f8;
        case 0x1015fcu: goto label_1015fc;
        case 0x101600u: goto label_101600;
        case 0x101604u: goto label_101604;
        case 0x101608u: goto label_101608;
        case 0x10160cu: goto label_10160c;
        case 0x101610u: goto label_101610;
        case 0x101614u: goto label_101614;
        case 0x101618u: goto label_101618;
        case 0x10161cu: goto label_10161c;
        case 0x101620u: goto label_101620;
        case 0x101624u: goto label_101624;
        case 0x101628u: goto label_101628;
        case 0x10162cu: goto label_10162c;
        case 0x101630u: goto label_101630;
        case 0x101634u: goto label_101634;
        case 0x101638u: goto label_101638;
        case 0x10163cu: goto label_10163c;
        case 0x101640u: goto label_101640;
        case 0x101644u: goto label_101644;
        case 0x101648u: goto label_101648;
        case 0x10164cu: goto label_10164c;
        default: break;
    }

    ctx->pc = 0x100960u;

label_100960:
    // 0x100960: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x100960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_100964:
    // 0x100964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100968:
    // 0x100968: 0xc04024c  jal         func_100930
label_10096c:
    if (ctx->pc == 0x10096Cu) {
        ctx->pc = 0x10096Cu;
            // 0x10096c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x100970u;
        goto label_100970;
    }
    ctx->pc = 0x100968u;
    SET_GPR_U32(ctx, 31, 0x100970u);
    ctx->pc = 0x10096Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100968u;
            // 0x10096c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100930u;
    if (runtime->hasFunction(0x100930u)) {
        auto targetFn = runtime->lookupFunction(0x100930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100970u; }
        if (ctx->pc != 0x100970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100930_0x100930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100970u; }
        if (ctx->pc != 0x100970u) { return; }
    }
    ctx->pc = 0x100970u;
label_100970:
    // 0x100970: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_100974:
    // 0x100974: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_100978:
    // 0x100978: 0x246310f0  addiu       $v1, $v1, 0x10F0
    ctx->pc = 0x100978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4336));
label_10097c:
    // 0x10097c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x10097cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100980:
    // 0x100980: 0xac4367e8  sw          $v1, 0x67E8($v0)
    ctx->pc = 0x100980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26600), GPR_U32(ctx, 3));
label_100984:
    // 0x100984: 0x248410e0  addiu       $a0, $a0, 0x10E0
    ctx->pc = 0x100984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4320));
label_100988:
    // 0x100988: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_10098c:
    // 0x10098c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x10098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_100990:
    // 0x100990: 0xac4467f0  sw          $a0, 0x67F0($v0)
    ctx->pc = 0x100990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26608), GPR_U32(ctx, 4));
label_100994:
    // 0x100994: 0x246310d0  addiu       $v1, $v1, 0x10D0
    ctx->pc = 0x100994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4304));
label_100998:
    // 0x100998: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_10099c:
    // 0x10099c: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
label_1009a0:
    // 0x1009a0: 0xac4367f8  sw          $v1, 0x67F8($v0)
    ctx->pc = 0x1009a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26616), GPR_U32(ctx, 3));
label_1009a4:
    // 0x1009a4: 0x24841080  addiu       $a0, $a0, 0x1080
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4224));
label_1009a8:
    // 0x1009a8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1009a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1009ac:
    // 0x1009ac: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_1009b0:
    // 0x1009b0: 0xac4467d8  sw          $a0, 0x67D8($v0)
    ctx->pc = 0x1009b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26584), GPR_U32(ctx, 4));
label_1009b4:
    // 0x1009b4: 0x24631000  addiu       $v1, $v1, 0x1000
    ctx->pc = 0x1009b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4096));
label_1009b8:
    // 0x1009b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1009bc:
    // 0x1009bc: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_1009c0:
    // 0x1009c0: 0xac4367e0  sw          $v1, 0x67E0($v0)
    ctx->pc = 0x1009c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 26592), GPR_U32(ctx, 3));
label_1009c4:
    // 0x1009c4: 0xc0e8860  jal         func_3A2180
label_1009c8:
    if (ctx->pc == 0x1009C8u) {
        ctx->pc = 0x1009C8u;
            // 0x1009c8: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->pc = 0x1009CCu;
        goto label_1009cc;
    }
    ctx->pc = 0x1009C4u;
    SET_GPR_U32(ctx, 31, 0x1009CCu);
    ctx->pc = 0x1009C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1009C4u;
            // 0x1009c8: 0x2405007e  addiu       $a1, $zero, 0x7E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A2180u;
    if (runtime->hasFunction(0x3A2180u)) {
        auto targetFn = runtime->lookupFunction(0x3A2180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009CCu; }
        if (ctx->pc != 0x1009CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A2180_0x3a2180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009CCu; }
        if (ctx->pc != 0x1009CCu) { return; }
    }
    ctx->pc = 0x1009CCu;
label_1009cc:
    // 0x1009cc: 0xc0ab4f4  jal         func_2AD3D0
label_1009d0:
    if (ctx->pc == 0x1009D0u) {
        ctx->pc = 0x1009D0u;
            // 0x1009d0: 0x27a4014c  addiu       $a0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->pc = 0x1009D4u;
        goto label_1009d4;
    }
    ctx->pc = 0x1009CCu;
    SET_GPR_U32(ctx, 31, 0x1009D4u);
    ctx->pc = 0x1009D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1009CCu;
            // 0x1009d0: 0x27a4014c  addiu       $a0, $sp, 0x14C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 332));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD3D0u;
    if (runtime->hasFunction(0x2AD3D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009D4u; }
        if (ctx->pc != 0x1009D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD3D0_0x2ad3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1009D4u; }
        if (ctx->pc != 0x1009D4u) { return; }
    }
    ctx->pc = 0x1009D4u;
label_1009d4:
    // 0x1009d4: 0x27a30140  addiu       $v1, $sp, 0x140
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1009d8:
    // 0x1009d8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1009dc:
    // 0x1009dc: 0xac4389f8  sw          $v1, -0x7608($v0)
    ctx->pc = 0x1009dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), GPR_U32(ctx, 3));
label_1009e0:
    // 0x1009e0: 0x27a40144  addiu       $a0, $sp, 0x144
    ctx->pc = 0x1009e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
label_1009e4:
    // 0x1009e4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1009e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1009e8:
    // 0x1009e8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1009e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1009ec:
    // 0x1009ec: 0xac447530  sw          $a0, 0x7530($v0)
    ctx->pc = 0x1009ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30000), GPR_U32(ctx, 4));
label_1009f0:
    // 0x1009f0: 0x2463cbd0  addiu       $v1, $v1, -0x3430
    ctx->pc = 0x1009f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953936));
label_1009f4:
    // 0x1009f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1009f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1009f8:
    // 0x1009f8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x1009f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_1009fc:
    // 0x1009fc: 0x2442cbdc  addiu       $v0, $v0, -0x3424
    ctx->pc = 0x1009fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953948));
label_100a00:
    // 0x100a00: 0x24030082  addiu       $v1, $zero, 0x82
    ctx->pc = 0x100a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_100a04:
    // 0x100a04: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x100a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_100a08:
    // 0x100a08: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x100a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_100a0c:
    // 0x100a0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x100a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_100a10:
    // 0x100a10: 0xc057630  jal         func_15D8C0
label_100a14:
    if (ctx->pc == 0x100A14u) {
        ctx->pc = 0x100A14u;
            // 0x100a14: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x100A18u;
        goto label_100a18;
    }
    ctx->pc = 0x100A10u;
    SET_GPR_U32(ctx, 31, 0x100A18u);
    ctx->pc = 0x100A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A10u;
            // 0x100a14: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D8C0u;
    if (runtime->hasFunction(0x15D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x15D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A18u; }
        if (ctx->pc != 0x100A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D8C0_0x15d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A18u; }
        if (ctx->pc != 0x100A18u) { return; }
    }
    ctx->pc = 0x100A18u;
label_100a18:
    // 0x100a18: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_100a1c:
    // 0x100a1c: 0x2442fffa  addiu       $v0, $v0, -0x6
    ctx->pc = 0x100a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967290));
label_100a20:
    // 0x100a20: 0x2c410005  sltiu       $at, $v0, 0x5
    ctx->pc = 0x100a20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_100a24:
    // 0x100a24: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_100a28:
    if (ctx->pc == 0x100A28u) {
        ctx->pc = 0x100A28u;
            // 0x100a28: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x100A2Cu;
        goto label_100a2c;
    }
    ctx->pc = 0x100A24u;
    {
        const bool branch_taken_0x100a24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a24) {
            ctx->pc = 0x100A28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100A24u;
            // 0x100a28: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100A38u;
            goto label_100a38;
        }
    }
    ctx->pc = 0x100A2Cu;
label_100a2c:
    // 0x100a2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100a30:
    // 0x100a30: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x100a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
label_100a34:
    // 0x100a34: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x100a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_100a38:
    // 0x100a38: 0xc0a8a70  jal         func_2A29C0
label_100a3c:
    if (ctx->pc == 0x100A3Cu) {
        ctx->pc = 0x100A40u;
        goto label_100a40;
    }
    ctx->pc = 0x100A38u;
    SET_GPR_U32(ctx, 31, 0x100A40u);
    ctx->pc = 0x2A29C0u;
    if (runtime->hasFunction(0x2A29C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A29C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A40u; }
        if (ctx->pc != 0x100A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A29C0_0x2a29c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A40u; }
        if (ctx->pc != 0x100A40u) { return; }
    }
    ctx->pc = 0x100A40u;
label_100a40:
    // 0x100a40: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x100a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_100a44:
    // 0x100a44: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x100a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_100a48:
    // 0x100a48: 0xc040188  jal         func_100620
label_100a4c:
    if (ctx->pc == 0x100A4Cu) {
        ctx->pc = 0x100A4Cu;
            // 0x100a4c: 0x3445cccc  ori         $a1, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->pc = 0x100A50u;
        goto label_100a50;
    }
    ctx->pc = 0x100A48u;
    SET_GPR_U32(ctx, 31, 0x100A50u);
    ctx->pc = 0x100A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A48u;
            // 0x100a4c: 0x3445cccc  ori         $a1, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100620u;
    if (runtime->hasFunction(0x100620u)) {
        auto targetFn = runtime->lookupFunction(0x100620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A50u; }
        if (ctx->pc != 0x100A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100620_0x100620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A50u; }
        if (ctx->pc != 0x100A50u) { return; }
    }
    ctx->pc = 0x100A50u;
label_100a50:
    // 0x100a50: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x100a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_100a54:
    // 0x100a54: 0xc040160  jal         func_100580
label_100a58:
    if (ctx->pc == 0x100A58u) {
        ctx->pc = 0x100A58u;
            // 0x100a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x100A5Cu;
        goto label_100a5c;
    }
    ctx->pc = 0x100A54u;
    SET_GPR_U32(ctx, 31, 0x100A5Cu);
    ctx->pc = 0x100A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100A54u;
            // 0x100a58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A5Cu; }
        if (ctx->pc != 0x100A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100A5Cu; }
        if (ctx->pc != 0x100A5Cu) { return; }
    }
    ctx->pc = 0x100A5Cu;
label_100a5c:
    // 0x100a5c: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_100a60:
    if (ctx->pc == 0x100A60u) {
        ctx->pc = 0x100A60u;
            // 0x100a60: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x100A64u;
        goto label_100a64;
    }
    ctx->pc = 0x100A5Cu;
    {
        const bool branch_taken_0x100a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a5c) {
            ctx->pc = 0x100A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100A5Cu;
            // 0x100a60: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100AA8u;
            goto label_100aa8;
        }
    }
    ctx->pc = 0x100A64u;
label_100a64:
    // 0x100a64: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100a64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_100a68:
    // 0x100a68: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x100a68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_100a6c:
    // 0x100a6c: 0x2484cbb8  addiu       $a0, $a0, -0x3448
    ctx->pc = 0x100a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953912));
label_100a70:
    // 0x100a70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x100a70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_100a74:
    // 0x100a74: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100a74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_100a78:
    // 0x100a78: 0xac6289e0  sw          $v0, -0x7620($v1)
    ctx->pc = 0x100a78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937056), GPR_U32(ctx, 2));
label_100a7c:
    // 0x100a7c: 0x2484cb90  addiu       $a0, $a0, -0x3470
    ctx->pc = 0x100a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953872));
label_100a80:
    // 0x100a80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x100a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100a84:
    // 0x100a84: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x100a84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_100a88:
    // 0x100a88: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100a88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_100a8c:
    // 0x100a8c: 0xa0430004  sb          $v1, 0x4($v0)
    ctx->pc = 0x100a8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 3));
label_100a90:
    // 0x100a90: 0x2484f940  addiu       $a0, $a0, -0x6C0
    ctx->pc = 0x100a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965568));
label_100a94:
    // 0x100a94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100a94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100a98:
    // 0x100a98: 0x2463f94c  addiu       $v1, $v1, -0x6B4
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965580));
label_100a9c:
    // 0x100a9c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x100a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_100aa0:
    // 0x100aa0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x100aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_100aa4:
    // 0x100aa4: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_100aa8:
    // 0x100aa8: 0xc040160  jal         func_100580
label_100aac:
    if (ctx->pc == 0x100AACu) {
        ctx->pc = 0x100AACu;
            // 0x100aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x100AB0u;
        goto label_100ab0;
    }
    ctx->pc = 0x100AA8u;
    SET_GPR_U32(ctx, 31, 0x100AB0u);
    ctx->pc = 0x100AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AA8u;
            // 0x100aac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AB0u; }
        if (ctx->pc != 0x100AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AB0u; }
        if (ctx->pc != 0x100AB0u) { return; }
    }
    ctx->pc = 0x100AB0u;
label_100ab0:
    // 0x100ab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_100ab4:
    if (ctx->pc == 0x100AB4u) {
        ctx->pc = 0x100AB8u;
        goto label_100ab8;
    }
    ctx->pc = 0x100AB0u;
    {
        const bool branch_taken_0x100ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ab0) {
            ctx->pc = 0x100AC0u;
            goto label_100ac0;
        }
    }
    ctx->pc = 0x100AB8u;
label_100ab8:
    // 0x100ab8: 0xc074380  jal         func_1D0E00
label_100abc:
    if (ctx->pc == 0x100ABCu) {
        ctx->pc = 0x100ABCu;
            // 0x100abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100AC0u;
        goto label_100ac0;
    }
    ctx->pc = 0x100AB8u;
    SET_GPR_U32(ctx, 31, 0x100AC0u);
    ctx->pc = 0x100ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AB8u;
            // 0x100abc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0E00u;
    if (runtime->hasFunction(0x1D0E00u)) {
        auto targetFn = runtime->lookupFunction(0x1D0E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AC0u; }
        if (ctx->pc != 0x100AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0E00_0x1d0e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AC0u; }
        if (ctx->pc != 0x100AC0u) { return; }
    }
    ctx->pc = 0x100AC0u;
label_100ac0:
    // 0x100ac0: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_100ac4:
    // 0x100ac4: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x100ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_100ac8:
    // 0x100ac8: 0x24840eb0  addiu       $a0, $a0, 0xEB0
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3760));
label_100acc:
    // 0x100acc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100ad0:
    // 0x100ad0: 0xc0751b8  jal         func_1D46E0
label_100ad4:
    if (ctx->pc == 0x100AD4u) {
        ctx->pc = 0x100AD4u;
            // 0x100ad4: 0x24c6ff80  addiu       $a2, $a2, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
        ctx->pc = 0x100AD8u;
        goto label_100ad8;
    }
    ctx->pc = 0x100AD0u;
    SET_GPR_U32(ctx, 31, 0x100AD8u);
    ctx->pc = 0x100AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100AD0u;
            // 0x100ad4: 0x24c6ff80  addiu       $a2, $a2, -0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD8u; }
        if (ctx->pc != 0x100AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100AD8u; }
        if (ctx->pc != 0x100AD8u) { return; }
    }
    ctx->pc = 0x100AD8u;
label_100ad8:
    // 0x100ad8: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x100ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_100adc:
    // 0x100adc: 0x3c040068  lui         $a0, 0x68
    ctx->pc = 0x100adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)104 << 16));
label_100ae0:
    // 0x100ae0: 0x246311b0  addiu       $v1, $v1, 0x11B0
    ctx->pc = 0x100ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4528));
label_100ae4:
    // 0x100ae4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100ae8:
    // 0x100ae8: 0xac430c60  sw          $v1, 0xC60($v0)
    ctx->pc = 0x100ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3168), GPR_U32(ctx, 3));
label_100aec:
    // 0x100aec: 0x2484f500  addiu       $a0, $a0, -0xB00
    ctx->pc = 0x100aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964480));
label_100af0:
    // 0x100af0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x100af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_100af4:
    // 0x100af4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100af8:
    // 0x100af8: 0xac640ec0  sw          $a0, 0xEC0($v1)
    ctx->pc = 0x100af8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 3776), GPR_U32(ctx, 4));
label_100afc:
    // 0x100afc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100afcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100b00:
    // 0x100b00: 0x2404040c  addiu       $a0, $zero, 0x40C
    ctx->pc = 0x100b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
label_100b04:
    // 0x100b04: 0xc040160  jal         func_100580
label_100b08:
    if (ctx->pc == 0x100B08u) {
        ctx->pc = 0x100B08u;
            // 0x100b08: 0xac400eb8  sw          $zero, 0xEB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3768), GPR_U32(ctx, 0));
        ctx->pc = 0x100B0Cu;
        goto label_100b0c;
    }
    ctx->pc = 0x100B04u;
    SET_GPR_U32(ctx, 31, 0x100B0Cu);
    ctx->pc = 0x100B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B04u;
            // 0x100b08: 0xac400eb8  sw          $zero, 0xEB8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 3768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B0Cu; }
        if (ctx->pc != 0x100B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B0Cu; }
        if (ctx->pc != 0x100B0Cu) { return; }
    }
    ctx->pc = 0x100B0Cu;
label_100b0c:
    // 0x100b0c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_100b10:
    if (ctx->pc == 0x100B10u) {
        ctx->pc = 0x100B10u;
            // 0x100b10: 0x24041b20  addiu       $a0, $zero, 0x1B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6944));
        ctx->pc = 0x100B14u;
        goto label_100b14;
    }
    ctx->pc = 0x100B0Cu;
    {
        const bool branch_taken_0x100b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b0c) {
            ctx->pc = 0x100B10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100B0Cu;
            // 0x100b10: 0x24041b20  addiu       $a0, $zero, 0x1B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6944));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100B20u;
            goto label_100b20;
        }
    }
    ctx->pc = 0x100B14u;
label_100b14:
    // 0x100b14: 0xc0fd140  jal         func_3F4500
label_100b18:
    if (ctx->pc == 0x100B18u) {
        ctx->pc = 0x100B18u;
            // 0x100b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100B1Cu;
        goto label_100b1c;
    }
    ctx->pc = 0x100B14u;
    SET_GPR_U32(ctx, 31, 0x100B1Cu);
    ctx->pc = 0x100B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B14u;
            // 0x100b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F4500u;
    if (runtime->hasFunction(0x3F4500u)) {
        auto targetFn = runtime->lookupFunction(0x3F4500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B1Cu; }
        if (ctx->pc != 0x100B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F4500_0x3f4500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B1Cu; }
        if (ctx->pc != 0x100B1Cu) { return; }
    }
    ctx->pc = 0x100B1Cu;
label_100b1c:
    // 0x100b1c: 0x24041b20  addiu       $a0, $zero, 0x1B20
    ctx->pc = 0x100b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6944));
label_100b20:
    // 0x100b20: 0xc040160  jal         func_100580
label_100b24:
    if (ctx->pc == 0x100B24u) {
        ctx->pc = 0x100B24u;
            // 0x100b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x100B28u;
        goto label_100b28;
    }
    ctx->pc = 0x100B20u;
    SET_GPR_U32(ctx, 31, 0x100B28u);
    ctx->pc = 0x100B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B20u;
            // 0x100b24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100580u;
    if (runtime->hasFunction(0x100580u)) {
        auto targetFn = runtime->lookupFunction(0x100580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B28u; }
        if (ctx->pc != 0x100B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100580_0x100580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B28u; }
        if (ctx->pc != 0x100B28u) { return; }
    }
    ctx->pc = 0x100B28u;
label_100b28:
    // 0x100b28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_100b2c:
    if (ctx->pc == 0x100B2Cu) {
        ctx->pc = 0x100B2Cu;
            // 0x100b2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100B30u;
        goto label_100b30;
    }
    ctx->pc = 0x100B28u;
    {
        const bool branch_taken_0x100b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100B28u;
            // 0x100b2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100b28) {
            ctx->pc = 0x100B68u;
            goto label_100b68;
        }
    }
    ctx->pc = 0x100B30u;
label_100b30:
    // 0x100b30: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100b34:
    // 0x100b34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100b38:
    // 0x100b38: 0x2463cb78  addiu       $v1, $v1, -0x3488
    ctx->pc = 0x100b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953848));
label_100b3c:
    // 0x100b3c: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x100b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_100b40:
    // 0x100b40: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_100b44:
    // 0x100b44: 0xc074724  jal         func_1D1C90
label_100b48:
    if (ctx->pc == 0x100B48u) {
        ctx->pc = 0x100B48u;
            // 0x100b48: 0xac5089e8  sw          $s0, -0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937064), GPR_U32(ctx, 16));
        ctx->pc = 0x100B4Cu;
        goto label_100b4c;
    }
    ctx->pc = 0x100B44u;
    SET_GPR_U32(ctx, 31, 0x100B4Cu);
    ctx->pc = 0x100B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B44u;
            // 0x100b48: 0xac5089e8  sw          $s0, -0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1C90u;
    if (runtime->hasFunction(0x1D1C90u)) {
        auto targetFn = runtime->lookupFunction(0x1D1C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B4Cu; }
        if (ctx->pc != 0x100B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1C90_0x1d1c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B4Cu; }
        if (ctx->pc != 0x100B4Cu) { return; }
    }
    ctx->pc = 0x100B4Cu;
label_100b4c:
    // 0x100b4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100b50:
    // 0x100b50: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100b54:
    // 0x100b54: 0x24633d20  addiu       $v1, $v1, 0x3D20
    ctx->pc = 0x100b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15648));
label_100b58:
    // 0x100b58: 0x24423d2c  addiu       $v0, $v0, 0x3D2C
    ctx->pc = 0x100b58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15660));
label_100b5c:
    // 0x100b5c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_100b60:
    // 0x100b60: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x100b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_100b64:
    // 0x100b64: 0xae000318  sw          $zero, 0x318($s0)
    ctx->pc = 0x100b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 792), GPR_U32(ctx, 0));
label_100b68:
    // 0x100b68: 0xc12a290  jal         func_4A8A40
label_100b6c:
    if (ctx->pc == 0x100B6Cu) {
        ctx->pc = 0x100B70u;
        goto label_100b70;
    }
    ctx->pc = 0x100B68u;
    SET_GPR_U32(ctx, 31, 0x100B70u);
    ctx->pc = 0x4A8A40u;
    if (runtime->hasFunction(0x4A8A40u)) {
        auto targetFn = runtime->lookupFunction(0x4A8A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B70u; }
        if (ctx->pc != 0x100B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004A8A40_0x4a8a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B70u; }
        if (ctx->pc != 0x100B70u) { return; }
    }
    ctx->pc = 0x100B70u;
label_100b70:
    // 0x100b70: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x100b70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_100b74:
    // 0x100b74: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x100b74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_100b78:
    // 0x100b78: 0x2484e350  addiu       $a0, $a0, -0x1CB0
    ctx->pc = 0x100b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959952));
label_100b7c:
    // 0x100b7c: 0x24a5a350  addiu       $a1, $a1, -0x5CB0
    ctx->pc = 0x100b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294943568));
label_100b80:
    // 0x100b80: 0xc04e1a8  jal         func_1386A0
label_100b84:
    if (ctx->pc == 0x100B84u) {
        ctx->pc = 0x100B84u;
            // 0x100b84: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x100B88u;
        goto label_100b88;
    }
    ctx->pc = 0x100B80u;
    SET_GPR_U32(ctx, 31, 0x100B88u);
    ctx->pc = 0x100B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B80u;
            // 0x100b84: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1386A0u;
    if (runtime->hasFunction(0x1386A0u)) {
        auto targetFn = runtime->lookupFunction(0x1386A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B88u; }
        if (ctx->pc != 0x100B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001386A0_0x1386a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B88u; }
        if (ctx->pc != 0x100B88u) { return; }
    }
    ctx->pc = 0x100B88u;
label_100b88:
    // 0x100b88: 0x3c020024  lui         $v0, 0x24
    ctx->pc = 0x100b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)36 << 16));
label_100b8c:
    // 0x100b8c: 0xc149d84  jal         func_527610
label_100b90:
    if (ctx->pc == 0x100B90u) {
        ctx->pc = 0x100B90u;
            // 0x100b90: 0x3444cccc  ori         $a0, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->pc = 0x100B94u;
        goto label_100b94;
    }
    ctx->pc = 0x100B8Cu;
    SET_GPR_U32(ctx, 31, 0x100B94u);
    ctx->pc = 0x100B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100B8Cu;
            // 0x100b90: 0x3444cccc  ori         $a0, $v0, 0xCCCC (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52428);
        ctx->in_delay_slot = false;
    ctx->pc = 0x527610u;
    if (runtime->hasFunction(0x527610u)) {
        auto targetFn = runtime->lookupFunction(0x527610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B94u; }
        if (ctx->pc != 0x100B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00527610_0x527610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B94u; }
        if (ctx->pc != 0x100B94u) { return; }
    }
    ctx->pc = 0x100B94u;
label_100b94:
    // 0x100b94: 0xc147110  jal         func_51C440
label_100b98:
    if (ctx->pc == 0x100B98u) {
        ctx->pc = 0x100B9Cu;
        goto label_100b9c;
    }
    ctx->pc = 0x100B94u;
    SET_GPR_U32(ctx, 31, 0x100B9Cu);
    ctx->pc = 0x51C440u;
    if (runtime->hasFunction(0x51C440u)) {
        auto targetFn = runtime->lookupFunction(0x51C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B9Cu; }
        if (ctx->pc != 0x100B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0051C440_0x51c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100B9Cu; }
        if (ctx->pc != 0x100B9Cu) { return; }
    }
    ctx->pc = 0x100B9Cu;
label_100b9c:
    // 0x100b9c: 0xc040248  jal         func_100920
label_100ba0:
    if (ctx->pc == 0x100BA0u) {
        ctx->pc = 0x100BA4u;
        goto label_100ba4;
    }
    ctx->pc = 0x100B9Cu;
    SET_GPR_U32(ctx, 31, 0x100BA4u);
    ctx->pc = 0x100920u;
    if (runtime->hasFunction(0x100920u)) {
        auto targetFn = runtime->lookupFunction(0x100920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BA4u; }
        if (ctx->pc != 0x100BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100920_0x100920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BA4u; }
        if (ctx->pc != 0x100BA4u) { return; }
    }
    ctx->pc = 0x100BA4u;
label_100ba4:
    // 0x100ba4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100ba8:
    // 0x100ba8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100bac:
    // 0x100bac: 0x2442ca20  addiu       $v0, $v0, -0x35E0
    ctx->pc = 0x100bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953504));
label_100bb0:
    // 0x100bb0: 0x2463ca38  addiu       $v1, $v1, -0x35C8
    ctx->pc = 0x100bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953528));
label_100bb4:
    // 0x100bb4: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x100bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_100bb8:
    // 0x100bb8: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x100bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
label_100bbc:
    // 0x100bbc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100bc0:
    // 0x100bc0: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x100bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_100bc4:
    // 0x100bc4: 0xac407378  sw          $zero, 0x7378($v0)
    ctx->pc = 0x100bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29560), GPR_U32(ctx, 0));
label_100bc8:
    // 0x100bc8: 0xc0fe620  jal         func_3F9880
label_100bcc:
    if (ctx->pc == 0x100BCCu) {
        ctx->pc = 0x100BCCu;
            // 0x100bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100BD0u;
        goto label_100bd0;
    }
    ctx->pc = 0x100BC8u;
    SET_GPR_U32(ctx, 31, 0x100BD0u);
    ctx->pc = 0x100BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100BC8u;
            // 0x100bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9880u;
    if (runtime->hasFunction(0x3F9880u)) {
        auto targetFn = runtime->lookupFunction(0x3F9880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BD0u; }
        if (ctx->pc != 0x100BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9880_0x3f9880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100BD0u; }
        if (ctx->pc != 0x100BD0u) { return; }
    }
    ctx->pc = 0x100BD0u;
label_100bd0:
    // 0x100bd0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100bd4:
    // 0x100bd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100bd8:
    // 0x100bd8: 0x2463ca48  addiu       $v1, $v1, -0x35B8
    ctx->pc = 0x100bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953544));
label_100bdc:
    // 0x100bdc: 0xac4089c8  sw          $zero, -0x7638($v0)
    ctx->pc = 0x100bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937032), GPR_U32(ctx, 0));
label_100be0:
    // 0x100be0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x100be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_100be4:
    // 0x100be4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100be8:
    // 0x100be8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100bec:
    // 0x100bec: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_100bf0:
    // 0x100bf0: 0x2463cb20  addiu       $v1, $v1, -0x34E0
    ctx->pc = 0x100bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953760));
label_100bf4:
    // 0x100bf4: 0xac4089f0  sw          $zero, -0x7610($v0)
    ctx->pc = 0x100bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 0));
label_100bf8:
    // 0x100bf8: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x100bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_100bfc:
    // 0x100bfc: 0x2484cb30  addiu       $a0, $a0, -0x34D0
    ctx->pc = 0x100bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
label_100c00:
    // 0x100c00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100c00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100c04:
    // 0x100c04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100c08:
    // 0x100c08: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x100c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
label_100c0c:
    // 0x100c0c: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x100c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
label_100c10:
    // 0x100c10: 0x2442cc3c  addiu       $v0, $v0, -0x33C4
    ctx->pc = 0x100c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954044));
label_100c14:
    // 0x100c14: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x100c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_100c18:
    // 0x100c18: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x100c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_100c1c:
    // 0x100c1c: 0xc043390  jal         func_10CE40
label_100c20:
    if (ctx->pc == 0x100C20u) {
        ctx->pc = 0x100C20u;
            // 0x100c20: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->pc = 0x100C24u;
        goto label_100c24;
    }
    ctx->pc = 0x100C1Cu;
    SET_GPR_U32(ctx, 31, 0x100C24u);
    ctx->pc = 0x100C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100C1Cu;
            // 0x100c20: 0xafa200b4  sw          $v0, 0xB4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C24u; }
        if (ctx->pc != 0x100C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100C24u; }
        if (ctx->pc != 0x100C24u) { return; }
    }
    ctx->pc = 0x100C24u;
label_100c24:
    // 0x100c24: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100c28:
    // 0x100c28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100c28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100c2c:
    // 0x100c2c: 0x2463cad8  addiu       $v1, $v1, -0x3528
    ctx->pc = 0x100c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953688));
label_100c30:
    // 0x100c30: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x100c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
label_100c34:
    // 0x100c34: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x100c34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_100c38:
    // 0x100c38: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x100c38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_100c3c:
    // 0x100c3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100c40:
    // 0x100c40: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x100c40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
label_100c44:
    // 0x100c44: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x100c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
label_100c48:
    // 0x100c48: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100c4c:
    // 0x100c4c: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x100c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_100c50:
    // 0x100c50: 0x2484cab8  addiu       $a0, $a0, -0x3548
    ctx->pc = 0x100c50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953656));
label_100c54:
    // 0x100c54: 0xac408a08  sw          $zero, -0x75F8($v0)
    ctx->pc = 0x100c54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), GPR_U32(ctx, 0));
label_100c58:
    // 0x100c58: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100c5c:
    // 0x100c5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100c60:
    // 0x100c60: 0x2463cc18  addiu       $v1, $v1, -0x33E8
    ctx->pc = 0x100c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954008));
label_100c64:
    // 0x100c64: 0xac407530  sw          $zero, 0x7530($v0)
    ctx->pc = 0x100c64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30000), GPR_U32(ctx, 0));
label_100c68:
    // 0x100c68: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x100c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
label_100c6c:
    // 0x100c6c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100c70:
    // 0x100c70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x100c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_100c74:
    // 0x100c74: 0xac4089f8  sw          $zero, -0x7608($v0)
    ctx->pc = 0x100c74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), GPR_U32(ctx, 0));
label_100c78:
    // 0x100c78: 0xafa4014c  sw          $a0, 0x14C($sp)
    ctx->pc = 0x100c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 4));
label_100c7c:
    // 0x100c7c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x100c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100c80:
    // 0x100c80: 0xac608a00  sw          $zero, -0x7600($v1)
    ctx->pc = 0x100c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294937088), GPR_U32(ctx, 0));
label_100c84:
    // 0x100c84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100c84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100c88:
    // 0x100c88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100c88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100c8c:
    // 0x100c8c: 0x3e00008  jr          $ra
label_100c90:
    if (ctx->pc == 0x100C90u) {
        ctx->pc = 0x100C90u;
            // 0x100c90: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x100C94u;
        goto label_100c94;
    }
    ctx->pc = 0x100C8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100C8Cu;
            // 0x100c90: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100C94u;
label_100c94:
    // 0x100c94: 0x0  nop
    ctx->pc = 0x100c94u;
    // NOP
label_100c98:
    // 0x100c98: 0x0  nop
    ctx->pc = 0x100c98u;
    // NOP
label_100c9c:
    // 0x100c9c: 0x0  nop
    ctx->pc = 0x100c9cu;
    // NOP
label_100ca0:
    // 0x100ca0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100ca4:
    // 0x100ca4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100ca8:
    // 0x100ca8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100cac:
    // 0x100cac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100cb0:
    // 0x100cb0: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_100cb4:
    if (ctx->pc == 0x100CB4u) {
        ctx->pc = 0x100CB4u;
            // 0x100cb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100CB8u;
        goto label_100cb8;
    }
    ctx->pc = 0x100CB0u;
    {
        const bool branch_taken_0x100cb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100cb0) {
            ctx->pc = 0x100CB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100CB0u;
            // 0x100cb4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100CE4u;
            goto label_100ce4;
        }
    }
    ctx->pc = 0x100CB8u;
label_100cb8:
    // 0x100cb8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100cbc:
    // 0x100cbc: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x100cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_100cc0:
    // 0x100cc0: 0x2442cb78  addiu       $v0, $v0, -0x3488
    ctx->pc = 0x100cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953848));
label_100cc4:
    // 0x100cc4: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100cc4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_100cc8:
    // 0x100cc8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100ccc:
    // 0x100ccc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100cccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100cd0:
    // 0x100cd0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_100cd4:
    if (ctx->pc == 0x100CD4u) {
        ctx->pc = 0x100CD4u;
            // 0x100cd4: 0xac4089e8  sw          $zero, -0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937064), GPR_U32(ctx, 0));
        ctx->pc = 0x100CD8u;
        goto label_100cd8;
    }
    ctx->pc = 0x100CD0u;
    {
        const bool branch_taken_0x100cd0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CD0u;
            // 0x100cd4: 0xac4089e8  sw          $zero, -0x7618($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937064), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100cd0) {
            ctx->pc = 0x100CE0u;
            goto label_100ce0;
        }
    }
    ctx->pc = 0x100CD8u;
label_100cd8:
    // 0x100cd8: 0xc0400a8  jal         func_1002A0
label_100cdc:
    if (ctx->pc == 0x100CDCu) {
        ctx->pc = 0x100CE0u;
        goto label_100ce0;
    }
    ctx->pc = 0x100CD8u;
    SET_GPR_U32(ctx, 31, 0x100CE0u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE0u; }
        if (ctx->pc != 0x100CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100CE0u; }
        if (ctx->pc != 0x100CE0u) { return; }
    }
    ctx->pc = 0x100CE0u;
label_100ce0:
    // 0x100ce0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100ce0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100ce4:
    // 0x100ce4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100ce4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100ce8:
    // 0x100ce8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100ce8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100cec:
    // 0x100cec: 0x3e00008  jr          $ra
label_100cf0:
    if (ctx->pc == 0x100CF0u) {
        ctx->pc = 0x100CF0u;
            // 0x100cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100CF4u;
        goto label_100cf4;
    }
    ctx->pc = 0x100CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100CECu;
            // 0x100cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100CF4u;
label_100cf4:
    // 0x100cf4: 0x0  nop
    ctx->pc = 0x100cf4u;
    // NOP
label_100cf8:
    // 0x100cf8: 0x0  nop
    ctx->pc = 0x100cf8u;
    // NOP
label_100cfc:
    // 0x100cfc: 0x0  nop
    ctx->pc = 0x100cfcu;
    // NOP
label_100d00:
    // 0x100d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100d04:
    // 0x100d04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100d08:
    // 0x100d08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100d0c:
    // 0x100d0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100d0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100d10:
    // 0x100d10: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_100d14:
    if (ctx->pc == 0x100D14u) {
        ctx->pc = 0x100D14u;
            // 0x100d14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100D18u;
        goto label_100d18;
    }
    ctx->pc = 0x100D10u;
    {
        const bool branch_taken_0x100d10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d10) {
            ctx->pc = 0x100D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100D10u;
            // 0x100d14: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100D44u;
            goto label_100d44;
        }
    }
    ctx->pc = 0x100D18u;
label_100d18:
    // 0x100d18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100d18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100d1c:
    // 0x100d1c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x100d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_100d20:
    // 0x100d20: 0x2442cbb8  addiu       $v0, $v0, -0x3448
    ctx->pc = 0x100d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953912));
label_100d24:
    // 0x100d24: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100d24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_100d28:
    // 0x100d28: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100d2c:
    // 0x100d2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100d30:
    // 0x100d30: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_100d34:
    if (ctx->pc == 0x100D34u) {
        ctx->pc = 0x100D34u;
            // 0x100d34: 0xac4089e0  sw          $zero, -0x7620($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937056), GPR_U32(ctx, 0));
        ctx->pc = 0x100D38u;
        goto label_100d38;
    }
    ctx->pc = 0x100D30u;
    {
        const bool branch_taken_0x100d30 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D30u;
            // 0x100d34: 0xac4089e0  sw          $zero, -0x7620($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937056), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d30) {
            ctx->pc = 0x100D40u;
            goto label_100d40;
        }
    }
    ctx->pc = 0x100D38u;
label_100d38:
    // 0x100d38: 0xc0400a8  jal         func_1002A0
label_100d3c:
    if (ctx->pc == 0x100D3Cu) {
        ctx->pc = 0x100D40u;
        goto label_100d40;
    }
    ctx->pc = 0x100D38u;
    SET_GPR_U32(ctx, 31, 0x100D40u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D40u; }
        if (ctx->pc != 0x100D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100D40u; }
        if (ctx->pc != 0x100D40u) { return; }
    }
    ctx->pc = 0x100D40u;
label_100d40:
    // 0x100d40: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100d40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100d44:
    // 0x100d44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100d44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100d48:
    // 0x100d48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100d48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100d4c:
    // 0x100d4c: 0x3e00008  jr          $ra
label_100d50:
    if (ctx->pc == 0x100D50u) {
        ctx->pc = 0x100D50u;
            // 0x100d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100D54u;
        goto label_100d54;
    }
    ctx->pc = 0x100D4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D4Cu;
            // 0x100d50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100D54u;
label_100d54:
    // 0x100d54: 0x0  nop
    ctx->pc = 0x100d54u;
    // NOP
label_100d58:
    // 0x100d58: 0x0  nop
    ctx->pc = 0x100d58u;
    // NOP
label_100d5c:
    // 0x100d5c: 0x0  nop
    ctx->pc = 0x100d5cu;
    // NOP
label_100d60:
    // 0x100d60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100d64:
    // 0x100d64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100d68:
    // 0x100d68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100d6c:
    // 0x100d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100d70:
    // 0x100d70: 0x5200001a  beql        $s0, $zero, . + 4 + (0x1A << 2)
label_100d74:
    if (ctx->pc == 0x100D74u) {
        ctx->pc = 0x100D74u;
            // 0x100d74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100D78u;
        goto label_100d78;
    }
    ctx->pc = 0x100D70u;
    {
        const bool branch_taken_0x100d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d70) {
            ctx->pc = 0x100D74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100D70u;
            // 0x100d74: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100DDCu;
            goto label_100ddc;
        }
    }
    ctx->pc = 0x100D78u;
label_100d78:
    // 0x100d78: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100d7c:
    // 0x100d7c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100d80:
    // 0x100d80: 0x2442f990  addiu       $v0, $v0, -0x670
    ctx->pc = 0x100d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965648));
label_100d84:
    // 0x100d84: 0x2463f99c  addiu       $v1, $v1, -0x664
    ctx->pc = 0x100d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965660));
label_100d88:
    // 0x100d88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100d8c:
    // 0x100d8c: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_100d90:
    // 0x100d90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_100d94:
    if (ctx->pc == 0x100D94u) {
        ctx->pc = 0x100D94u;
            // 0x100d94: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x100D98u;
        goto label_100d98;
    }
    ctx->pc = 0x100D90u;
    {
        const bool branch_taken_0x100d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100D94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100D90u;
            // 0x100d94: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100d90) {
            ctx->pc = 0x100DA4u;
            goto label_100da4;
        }
    }
    ctx->pc = 0x100D98u;
label_100d98:
    // 0x100d98: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100d98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100d9c:
    // 0x100d9c: 0x2442cb30  addiu       $v0, $v0, -0x34D0
    ctx->pc = 0x100d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953776));
label_100da0:
    // 0x100da0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x100da0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_100da4:
    // 0x100da4: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_100da8:
    if (ctx->pc == 0x100DA8u) {
        ctx->pc = 0x100DA8u;
            // 0x100da8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x100DACu;
        goto label_100dac;
    }
    ctx->pc = 0x100DA4u;
    {
        const bool branch_taken_0x100da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100da4) {
            ctx->pc = 0x100DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100DA4u;
            // 0x100da8: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100DC4u;
            goto label_100dc4;
        }
    }
    ctx->pc = 0x100DACu;
label_100dac:
    // 0x100dac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100db0:
    // 0x100db0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100db4:
    // 0x100db4: 0x2463cb20  addiu       $v1, $v1, -0x34E0
    ctx->pc = 0x100db4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953760));
label_100db8:
    // 0x100db8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_100dbc:
    // 0x100dbc: 0xac4089f0  sw          $zero, -0x7610($v0)
    ctx->pc = 0x100dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937072), GPR_U32(ctx, 0));
label_100dc0:
    // 0x100dc0: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x100dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_100dc4:
    // 0x100dc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100dc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_100dc8:
    // 0x100dc8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_100dcc:
    if (ctx->pc == 0x100DCCu) {
        ctx->pc = 0x100DD0u;
        goto label_100dd0;
    }
    ctx->pc = 0x100DC8u;
    {
        const bool branch_taken_0x100dc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100dc8) {
            ctx->pc = 0x100DD8u;
            goto label_100dd8;
        }
    }
    ctx->pc = 0x100DD0u;
label_100dd0:
    // 0x100dd0: 0xc0400a8  jal         func_1002A0
label_100dd4:
    if (ctx->pc == 0x100DD4u) {
        ctx->pc = 0x100DD4u;
            // 0x100dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100DD8u;
        goto label_100dd8;
    }
    ctx->pc = 0x100DD0u;
    SET_GPR_U32(ctx, 31, 0x100DD8u);
    ctx->pc = 0x100DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100DD0u;
            // 0x100dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DD8u; }
        if (ctx->pc != 0x100DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100DD8u; }
        if (ctx->pc != 0x100DD8u) { return; }
    }
    ctx->pc = 0x100DD8u;
label_100dd8:
    // 0x100dd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100dd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100ddc:
    // 0x100ddc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100de0:
    // 0x100de0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100de0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100de4:
    // 0x100de4: 0x3e00008  jr          $ra
label_100de8:
    if (ctx->pc == 0x100DE8u) {
        ctx->pc = 0x100DE8u;
            // 0x100de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100DECu;
        goto label_100dec;
    }
    ctx->pc = 0x100DE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100DE4u;
            // 0x100de8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100DECu;
label_100dec:
    // 0x100dec: 0x0  nop
    ctx->pc = 0x100decu;
    // NOP
label_100df0:
    // 0x100df0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_100df4:
    // 0x100df4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x100df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_100df8:
    // 0x100df8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100dfc:
    // 0x100dfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100e00:
    // 0x100e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x100e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100e04:
    // 0x100e04: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_100e08:
    if (ctx->pc == 0x100E08u) {
        ctx->pc = 0x100E08u;
            // 0x100e08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100E0Cu;
        goto label_100e0c;
    }
    ctx->pc = 0x100E04u;
    {
        const bool branch_taken_0x100e04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x100E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E04u;
            // 0x100e08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100e04) {
            ctx->pc = 0x100E78u;
            goto label_100e78;
        }
    }
    ctx->pc = 0x100E0Cu;
label_100e0c:
    // 0x100e0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100e10:
    // 0x100e10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100e14:
    // 0x100e14: 0x2463cc30  addiu       $v1, $v1, -0x33D0
    ctx->pc = 0x100e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954032));
label_100e18:
    // 0x100e18: 0x2442cc3c  addiu       $v0, $v0, -0x33C4
    ctx->pc = 0x100e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954044));
label_100e1c:
    // 0x100e1c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x100e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_100e20:
    // 0x100e20: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x100e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_100e24:
    // 0x100e24: 0xc043390  jal         func_10CE40
label_100e28:
    if (ctx->pc == 0x100E28u) {
        ctx->pc = 0x100E28u;
            // 0x100e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x100E2Cu;
        goto label_100e2c;
    }
    ctx->pc = 0x100E24u;
    SET_GPR_U32(ctx, 31, 0x100E2Cu);
    ctx->pc = 0x100E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E24u;
            // 0x100e28: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CE40u;
    if (runtime->hasFunction(0x10CE40u)) {
        auto targetFn = runtime->lookupFunction(0x10CE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E2Cu; }
        if (ctx->pc != 0x100E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CE40_0x10ce40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E2Cu; }
        if (ctx->pc != 0x100E2Cu) { return; }
    }
    ctx->pc = 0x100E2Cu;
label_100e2c:
    // 0x100e2c: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x100e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_100e30:
    // 0x100e30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_100e34:
    if (ctx->pc == 0x100E34u) {
        ctx->pc = 0x100E38u;
        goto label_100e38;
    }
    ctx->pc = 0x100E30u;
    {
        const bool branch_taken_0x100e30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e30) {
            ctx->pc = 0x100E44u;
            goto label_100e44;
        }
    }
    ctx->pc = 0x100E38u;
label_100e38:
    // 0x100e38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100e3c:
    // 0x100e3c: 0x2442caf0  addiu       $v0, $v0, -0x3510
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953712));
label_100e40:
    // 0x100e40: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x100e40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_100e44:
    // 0x100e44: 0x52200007  beql        $s1, $zero, . + 4 + (0x7 << 2)
label_100e48:
    if (ctx->pc == 0x100E48u) {
        ctx->pc = 0x100E48u;
            // 0x100e48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x100E4Cu;
        goto label_100e4c;
    }
    ctx->pc = 0x100E44u;
    {
        const bool branch_taken_0x100e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100e44) {
            ctx->pc = 0x100E48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100E44u;
            // 0x100e48: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100E64u;
            goto label_100e64;
        }
    }
    ctx->pc = 0x100E4Cu;
label_100e4c:
    // 0x100e4c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100e50:
    // 0x100e50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100e54:
    // 0x100e54: 0x2463cad8  addiu       $v1, $v1, -0x3528
    ctx->pc = 0x100e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953688));
label_100e58:
    // 0x100e58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x100e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_100e5c:
    // 0x100e5c: 0xac408a08  sw          $zero, -0x75F8($v0)
    ctx->pc = 0x100e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937096), GPR_U32(ctx, 0));
label_100e60:
    // 0x100e60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x100e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_100e64:
    // 0x100e64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_100e68:
    // 0x100e68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_100e6c:
    if (ctx->pc == 0x100E6Cu) {
        ctx->pc = 0x100E6Cu;
            // 0x100e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100E70u;
        goto label_100e70;
    }
    ctx->pc = 0x100E68u;
    {
        const bool branch_taken_0x100e68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100e68) {
            ctx->pc = 0x100E6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100E68u;
            // 0x100e6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100E7Cu;
            goto label_100e7c;
        }
    }
    ctx->pc = 0x100E70u;
label_100e70:
    // 0x100e70: 0xc0400a8  jal         func_1002A0
label_100e74:
    if (ctx->pc == 0x100E74u) {
        ctx->pc = 0x100E74u;
            // 0x100e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100E78u;
        goto label_100e78;
    }
    ctx->pc = 0x100E70u;
    SET_GPR_U32(ctx, 31, 0x100E78u);
    ctx->pc = 0x100E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100E70u;
            // 0x100e74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E78u; }
        if (ctx->pc != 0x100E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100E78u; }
        if (ctx->pc != 0x100E78u) { return; }
    }
    ctx->pc = 0x100E78u;
label_100e78:
    // 0x100e78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x100e78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100e7c:
    // 0x100e7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x100e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_100e80:
    // 0x100e80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100e80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100e84:
    // 0x100e84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100e88:
    // 0x100e88: 0x3e00008  jr          $ra
label_100e8c:
    if (ctx->pc == 0x100E8Cu) {
        ctx->pc = 0x100E8Cu;
            // 0x100e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x100E90u;
        goto label_100e90;
    }
    ctx->pc = 0x100E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100E88u;
            // 0x100e8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100E90u;
label_100e90:
    // 0x100e90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100e94:
    // 0x100e94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100e98:
    // 0x100e98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100e9c:
    // 0x100e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100ea0:
    // 0x100ea0: 0x5200001c  beql        $s0, $zero, . + 4 + (0x1C << 2)
label_100ea4:
    if (ctx->pc == 0x100EA4u) {
        ctx->pc = 0x100EA4u;
            // 0x100ea4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100EA8u;
        goto label_100ea8;
    }
    ctx->pc = 0x100EA0u;
    {
        const bool branch_taken_0x100ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100ea0) {
            ctx->pc = 0x100EA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100EA0u;
            // 0x100ea4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100F14u;
            goto label_100f14;
        }
    }
    ctx->pc = 0x100EA8u;
label_100ea8:
    // 0x100ea8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100eac:
    // 0x100eac: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100eacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100eb0:
    // 0x100eb0: 0x2442cbd0  addiu       $v0, $v0, -0x3430
    ctx->pc = 0x100eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953936));
label_100eb4:
    // 0x100eb4: 0x2463cbdc  addiu       $v1, $v1, -0x3424
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953948));
label_100eb8:
    // 0x100eb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100ebc:
    // 0x100ebc: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x100ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_100ec0:
    // 0x100ec0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_100ec4:
    if (ctx->pc == 0x100EC4u) {
        ctx->pc = 0x100EC4u;
            // 0x100ec4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x100EC8u;
        goto label_100ec8;
    }
    ctx->pc = 0x100EC0u;
    {
        const bool branch_taken_0x100ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x100EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100EC0u;
            // 0x100ec4: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100ec0) {
            ctx->pc = 0x100EDCu;
            goto label_100edc;
        }
    }
    ctx->pc = 0x100EC8u;
label_100ec8:
    // 0x100ec8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100ecc:
    // 0x100ecc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x100eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_100ed0:
    // 0x100ed0: 0x2463cc00  addiu       $v1, $v1, -0x3400
    ctx->pc = 0x100ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953984));
label_100ed4:
    // 0x100ed4: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x100ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_100ed8:
    // 0x100ed8: 0xac407530  sw          $zero, 0x7530($v0)
    ctx->pc = 0x100ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 30000), GPR_U32(ctx, 0));
label_100edc:
    // 0x100edc: 0x52000007  beql        $s0, $zero, . + 4 + (0x7 << 2)
label_100ee0:
    if (ctx->pc == 0x100EE0u) {
        ctx->pc = 0x100EE0u;
            // 0x100ee0: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->pc = 0x100EE4u;
        goto label_100ee4;
    }
    ctx->pc = 0x100EDCu;
    {
        const bool branch_taken_0x100edc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100edc) {
            ctx->pc = 0x100EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100EDCu;
            // 0x100ee0: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100EFCu;
            goto label_100efc;
        }
    }
    ctx->pc = 0x100EE4u;
label_100ee4:
    // 0x100ee4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100ee8:
    // 0x100ee8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100eec:
    // 0x100eec: 0x2463cc18  addiu       $v1, $v1, -0x33E8
    ctx->pc = 0x100eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954008));
label_100ef0:
    // 0x100ef0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_100ef4:
    // 0x100ef4: 0xac4089f8  sw          $zero, -0x7608($v0)
    ctx->pc = 0x100ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), GPR_U32(ctx, 0));
label_100ef8:
    // 0x100ef8: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x100ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_100efc:
    // 0x100efc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100efcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_100f00:
    // 0x100f00: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_100f04:
    if (ctx->pc == 0x100F04u) {
        ctx->pc = 0x100F08u;
        goto label_100f08;
    }
    ctx->pc = 0x100F00u;
    {
        const bool branch_taken_0x100f00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100f00) {
            ctx->pc = 0x100F10u;
            goto label_100f10;
        }
    }
    ctx->pc = 0x100F08u;
label_100f08:
    // 0x100f08: 0xc0400a8  jal         func_1002A0
label_100f0c:
    if (ctx->pc == 0x100F0Cu) {
        ctx->pc = 0x100F0Cu;
            // 0x100f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100F10u;
        goto label_100f10;
    }
    ctx->pc = 0x100F08u;
    SET_GPR_U32(ctx, 31, 0x100F10u);
    ctx->pc = 0x100F0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100F08u;
            // 0x100f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F10u; }
        if (ctx->pc != 0x100F10u) { return; }
    }
    ctx->pc = 0x100F10u;
label_100f10:
    // 0x100f10: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100f10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100f14:
    // 0x100f14: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100f18:
    // 0x100f18: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100f18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100f1c:
    // 0x100f1c: 0x3e00008  jr          $ra
label_100f20:
    if (ctx->pc == 0x100F20u) {
        ctx->pc = 0x100F20u;
            // 0x100f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100F24u;
        goto label_100f24;
    }
    ctx->pc = 0x100F1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F1Cu;
            // 0x100f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100F24u;
label_100f24:
    // 0x100f24: 0x0  nop
    ctx->pc = 0x100f24u;
    // NOP
label_100f28:
    // 0x100f28: 0x0  nop
    ctx->pc = 0x100f28u;
    // NOP
label_100f2c:
    // 0x100f2c: 0x0  nop
    ctx->pc = 0x100f2cu;
    // NOP
label_100f30:
    // 0x100f30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100f34:
    // 0x100f34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100f38:
    // 0x100f38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100f3c:
    // 0x100f3c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100f3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100f40:
    // 0x100f40: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_100f44:
    if (ctx->pc == 0x100F44u) {
        ctx->pc = 0x100F44u;
            // 0x100f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100F48u;
        goto label_100f48;
    }
    ctx->pc = 0x100F40u;
    {
        const bool branch_taken_0x100f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f40) {
            ctx->pc = 0x100F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100F40u;
            // 0x100f44: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100F74u;
            goto label_100f74;
        }
    }
    ctx->pc = 0x100F48u;
label_100f48:
    // 0x100f48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100f4c:
    // 0x100f4c: 0x51c3c  dsll32      $v1, $a1, 16
    ctx->pc = 0x100f4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 16));
label_100f50:
    // 0x100f50: 0x2442cc18  addiu       $v0, $v0, -0x33E8
    ctx->pc = 0x100f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954008));
label_100f54:
    // 0x100f54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x100f54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_100f58:
    // 0x100f58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x100f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_100f5c:
    // 0x100f5c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100f60:
    // 0x100f60: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_100f64:
    if (ctx->pc == 0x100F64u) {
        ctx->pc = 0x100F64u;
            // 0x100f64: 0xac4089f8  sw          $zero, -0x7608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), GPR_U32(ctx, 0));
        ctx->pc = 0x100F68u;
        goto label_100f68;
    }
    ctx->pc = 0x100F60u;
    {
        const bool branch_taken_0x100f60 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x100F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F60u;
            // 0x100f64: 0xac4089f8  sw          $zero, -0x7608($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100f60) {
            ctx->pc = 0x100F70u;
            goto label_100f70;
        }
    }
    ctx->pc = 0x100F68u;
label_100f68:
    // 0x100f68: 0xc0400a8  jal         func_1002A0
label_100f6c:
    if (ctx->pc == 0x100F6Cu) {
        ctx->pc = 0x100F70u;
        goto label_100f70;
    }
    ctx->pc = 0x100F68u;
    SET_GPR_U32(ctx, 31, 0x100F70u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F70u; }
        if (ctx->pc != 0x100F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100F70u; }
        if (ctx->pc != 0x100F70u) { return; }
    }
    ctx->pc = 0x100F70u;
label_100f70:
    // 0x100f70: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100f70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100f74:
    // 0x100f74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100f74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100f78:
    // 0x100f78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100f78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100f7c:
    // 0x100f7c: 0x3e00008  jr          $ra
label_100f80:
    if (ctx->pc == 0x100F80u) {
        ctx->pc = 0x100F80u;
            // 0x100f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100F84u;
        goto label_100f84;
    }
    ctx->pc = 0x100F7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100F7Cu;
            // 0x100f80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100F84u;
label_100f84:
    // 0x100f84: 0x0  nop
    ctx->pc = 0x100f84u;
    // NOP
label_100f88:
    // 0x100f88: 0x0  nop
    ctx->pc = 0x100f88u;
    // NOP
label_100f8c:
    // 0x100f8c: 0x0  nop
    ctx->pc = 0x100f8cu;
    // NOP
label_100f90:
    // 0x100f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100f94:
    // 0x100f94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100f98:
    // 0x100f98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100f9c:
    // 0x100f9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x100f9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_100fa0:
    // 0x100fa0: 0x52000011  beql        $s0, $zero, . + 4 + (0x11 << 2)
label_100fa4:
    if (ctx->pc == 0x100FA4u) {
        ctx->pc = 0x100FA4u;
            // 0x100fa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100FA8u;
        goto label_100fa8;
    }
    ctx->pc = 0x100FA0u;
    {
        const bool branch_taken_0x100fa0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x100fa0) {
            ctx->pc = 0x100FA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x100FA0u;
            // 0x100fa4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100FE8u;
            goto label_100fe8;
        }
    }
    ctx->pc = 0x100FA8u;
label_100fa8:
    // 0x100fa8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x100fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_100fac:
    // 0x100fac: 0x2442cac8  addiu       $v0, $v0, -0x3538
    ctx->pc = 0x100facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953672));
label_100fb0:
    // 0x100fb0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_100fb4:
    if (ctx->pc == 0x100FB4u) {
        ctx->pc = 0x100FB4u;
            // 0x100fb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x100FB8u;
        goto label_100fb8;
    }
    ctx->pc = 0x100FB0u;
    {
        const bool branch_taken_0x100fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FB0u;
            // 0x100fb4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100fb0) {
            ctx->pc = 0x100FCCu;
            goto label_100fcc;
        }
    }
    ctx->pc = 0x100FB8u;
label_100fb8:
    // 0x100fb8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_100fbc:
    // 0x100fbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_100fc0:
    // 0x100fc0: 0x2463cab8  addiu       $v1, $v1, -0x3548
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953656));
label_100fc4:
    // 0x100fc4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x100fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_100fc8:
    // 0x100fc8: 0xac408a00  sw          $zero, -0x7600($v0)
    ctx->pc = 0x100fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294937088), GPR_U32(ctx, 0));
label_100fcc:
    // 0x100fcc: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x100fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_100fd0:
    // 0x100fd0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x100fd0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_100fd4:
    // 0x100fd4: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_100fd8:
    if (ctx->pc == 0x100FD8u) {
        ctx->pc = 0x100FDCu;
        goto label_100fdc;
    }
    ctx->pc = 0x100FD4u;
    {
        const bool branch_taken_0x100fd4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x100fd4) {
            ctx->pc = 0x100FE4u;
            goto label_100fe4;
        }
    }
    ctx->pc = 0x100FDCu;
label_100fdc:
    // 0x100fdc: 0xc0400a8  jal         func_1002A0
label_100fe0:
    if (ctx->pc == 0x100FE0u) {
        ctx->pc = 0x100FE0u;
            // 0x100fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x100FE4u;
        goto label_100fe4;
    }
    ctx->pc = 0x100FDCu;
    SET_GPR_U32(ctx, 31, 0x100FE4u);
    ctx->pc = 0x100FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100FDCu;
            // 0x100fe0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FE4u; }
        if (ctx->pc != 0x100FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100FE4u; }
        if (ctx->pc != 0x100FE4u) { return; }
    }
    ctx->pc = 0x100FE4u;
label_100fe4:
    // 0x100fe4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100fe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100fe8:
    // 0x100fe8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100fe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100fec:
    // 0x100fec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100ff0:
    // 0x100ff0: 0x3e00008  jr          $ra
label_100ff4:
    if (ctx->pc == 0x100FF4u) {
        ctx->pc = 0x100FF4u;
            // 0x100ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x100FF8u;
        goto label_100ff8;
    }
    ctx->pc = 0x100FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x100FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100FF0u;
            // 0x100ff4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x100FF8u;
label_100ff8:
    // 0x100ff8: 0x0  nop
    ctx->pc = 0x100ff8u;
    // NOP
label_100ffc:
    // 0x100ffc: 0x0  nop
    ctx->pc = 0x100ffcu;
    // NOP
label_101000:
    // 0x101000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x101000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_101004:
    // 0x101004: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_101008:
    if (ctx->pc == 0x101008u) {
        ctx->pc = 0x101008u;
            // 0x101008: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x10100Cu;
        goto label_10100c;
    }
    ctx->pc = 0x101004u;
    {
        const bool branch_taken_0x101004 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x101008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101004u;
            // 0x101008: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101004) {
            ctx->pc = 0x10101Cu;
            goto label_10101c;
        }
    }
    ctx->pc = 0x10100Cu;
label_10100c:
    // 0x10100c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x10100cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_101010:
    // 0x101010: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x101010u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_101014:
    // 0x101014: 0x320f809  jalr        $t9
label_101018:
    if (ctx->pc == 0x101018u) {
        ctx->pc = 0x101018u;
            // 0x101018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x10101Cu;
        goto label_10101c;
    }
    ctx->pc = 0x101014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x10101Cu);
        ctx->pc = 0x101018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101014u;
            // 0x101018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x10101Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x10101Cu; }
            if (ctx->pc != 0x10101Cu) { return; }
        }
        }
    }
    ctx->pc = 0x10101Cu;
label_10101c:
    // 0x10101c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10101cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101020:
    // 0x101020: 0x3e00008  jr          $ra
label_101024:
    if (ctx->pc == 0x101024u) {
        ctx->pc = 0x101024u;
            // 0x101024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x101028u;
        goto label_101028;
    }
    ctx->pc = 0x101020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101020u;
            // 0x101024: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x101028u;
label_101028:
    // 0x101028: 0x0  nop
    ctx->pc = 0x101028u;
    // NOP
label_10102c:
    // 0x10102c: 0x0  nop
    ctx->pc = 0x10102cu;
    // NOP
label_101030:
    // 0x101030: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x101030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_101034:
    // 0x101034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x101034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_101038:
    // 0x101038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_10103c:
    // 0x10103c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10103cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101040:
    // 0x101040: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_101044:
    if (ctx->pc == 0x101044u) {
        ctx->pc = 0x101044u;
            // 0x101044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101048u;
        goto label_101048;
    }
    ctx->pc = 0x101040u;
    {
        const bool branch_taken_0x101040 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x101040) {
            ctx->pc = 0x101044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101040u;
            // 0x101044: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x10106Cu;
            goto label_10106c;
        }
    }
    ctx->pc = 0x101048u;
label_101048:
    // 0x101048: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x101048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_10104c:
    // 0x10104c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10104cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_101050:
    // 0x101050: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x101050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
label_101054:
    // 0x101054: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x101054u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_101058:
    // 0x101058: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_10105c:
    if (ctx->pc == 0x10105Cu) {
        ctx->pc = 0x10105Cu;
            // 0x10105c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x101060u;
        goto label_101060;
    }
    ctx->pc = 0x101058u;
    {
        const bool branch_taken_0x101058 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10105Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101058u;
            // 0x10105c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101058) {
            ctx->pc = 0x101068u;
            goto label_101068;
        }
    }
    ctx->pc = 0x101060u;
label_101060:
    // 0x101060: 0xc0400a8  jal         func_1002A0
label_101064:
    if (ctx->pc == 0x101064u) {
        ctx->pc = 0x101068u;
        goto label_101068;
    }
    ctx->pc = 0x101060u;
    SET_GPR_U32(ctx, 31, 0x101068u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101068u; }
        if (ctx->pc != 0x101068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101068u; }
        if (ctx->pc != 0x101068u) { return; }
    }
    ctx->pc = 0x101068u;
label_101068:
    // 0x101068: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10106c:
    // 0x10106c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10106cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101070:
    // 0x101070: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101070u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101074:
    // 0x101074: 0x3e00008  jr          $ra
label_101078:
    if (ctx->pc == 0x101078u) {
        ctx->pc = 0x101078u;
            // 0x101078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10107Cu;
        goto label_10107c;
    }
    ctx->pc = 0x101074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101074u;
            // 0x101078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10107Cu;
label_10107c:
    // 0x10107c: 0x0  nop
    ctx->pc = 0x10107cu;
    // NOP
label_101080:
    // 0x101080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101084:
    // 0x101084: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101088:
    // 0x101088: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10108c:
    // 0x10108c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10108cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101090:
    // 0x101090: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101090u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101094:
    // 0x101094: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101094u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_101098:
    // 0x101098: 0xc040180  jal         func_100600
label_10109c:
    if (ctx->pc == 0x10109Cu) {
        ctx->pc = 0x10109Cu;
            // 0x10109c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1010A0u;
        goto label_1010a0;
    }
    ctx->pc = 0x101098u;
    SET_GPR_U32(ctx, 31, 0x1010A0u);
    ctx->pc = 0x10109Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101098u;
            // 0x10109c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010A0u; }
        if (ctx->pc != 0x1010A0u) { return; }
    }
    ctx->pc = 0x1010A0u;
label_1010a0:
    // 0x1010a0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1010a4:
    if (ctx->pc == 0x1010A4u) {
        ctx->pc = 0x1010A4u;
            // 0x1010a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1010A8u;
        goto label_1010a8;
    }
    ctx->pc = 0x1010A0u;
    {
        const bool branch_taken_0x1010a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1010a0) {
            ctx->pc = 0x1010A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1010A0u;
            // 0x1010a4: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1010BCu;
            goto label_1010bc;
        }
    }
    ctx->pc = 0x1010A8u;
label_1010a8:
    // 0x1010a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1010a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1010ac:
    // 0x1010ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1010acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1010b0:
    // 0x1010b0: 0xc0ab5a8  jal         func_2AD6A0
label_1010b4:
    if (ctx->pc == 0x1010B4u) {
        ctx->pc = 0x1010B4u;
            // 0x1010b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1010B8u;
        goto label_1010b8;
    }
    ctx->pc = 0x1010B0u;
    SET_GPR_U32(ctx, 31, 0x1010B8u);
    ctx->pc = 0x1010B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010B0u;
            // 0x1010b4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD6A0u;
    if (runtime->hasFunction(0x2AD6A0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B8u; }
        if (ctx->pc != 0x1010B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD6A0_0x2ad6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1010B8u; }
        if (ctx->pc != 0x1010B8u) { return; }
    }
    ctx->pc = 0x1010B8u;
label_1010b8:
    // 0x1010b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1010b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1010bc:
    // 0x1010bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1010bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1010c0:
    // 0x1010c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1010c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1010c4:
    // 0x1010c4: 0x3e00008  jr          $ra
label_1010c8:
    if (ctx->pc == 0x1010C8u) {
        ctx->pc = 0x1010C8u;
            // 0x1010c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1010CCu;
        goto label_1010cc;
    }
    ctx->pc = 0x1010C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1010C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1010C4u;
            // 0x1010c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1010CCu;
label_1010cc:
    // 0x1010cc: 0x0  nop
    ctx->pc = 0x1010ccu;
    // NOP
label_1010d0:
    // 0x1010d0: 0x80430a0  j           func_10C280
label_1010d4:
    if (ctx->pc == 0x1010D4u) {
        ctx->pc = 0x1010D8u;
        goto label_1010d8;
    }
    ctx->pc = 0x1010D0u;
    ctx->pc = 0x10C280u;
    if (runtime->hasFunction(0x10C280u)) {
        auto targetFn = runtime->lookupFunction(0x10C280u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010C280_0x10c280(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1010D8u;
label_1010d8:
    // 0x1010d8: 0x0  nop
    ctx->pc = 0x1010d8u;
    // NOP
label_1010dc:
    // 0x1010dc: 0x0  nop
    ctx->pc = 0x1010dcu;
    // NOP
label_1010e0:
    // 0x1010e0: 0x80434f6  j           func_10D3D8
label_1010e4:
    if (ctx->pc == 0x1010E4u) {
        ctx->pc = 0x1010E8u;
        goto label_1010e8;
    }
    ctx->pc = 0x1010E0u;
    ctx->pc = 0x10D3D8u;
    if (runtime->hasFunction(0x10D3D8u)) {
        auto targetFn = runtime->lookupFunction(0x10D3D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0010D3D8_0x10d3d8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1010E8u;
label_1010e8:
    // 0x1010e8: 0x0  nop
    ctx->pc = 0x1010e8u;
    // NOP
label_1010ec:
    // 0x1010ec: 0x0  nop
    ctx->pc = 0x1010ecu;
    // NOP
label_1010f0:
    // 0x1010f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1010f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1010f4:
    // 0x1010f4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x1010f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_1010f8:
    // 0x1010f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1010f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1010fc:
    // 0x1010fc: 0xc040180  jal         func_100600
label_101100:
    if (ctx->pc == 0x101100u) {
        ctx->pc = 0x101100u;
            // 0x101100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x101104u;
        goto label_101104;
    }
    ctx->pc = 0x1010FCu;
    SET_GPR_U32(ctx, 31, 0x101104u);
    ctx->pc = 0x101100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1010FCu;
            // 0x101100: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101104u; }
        if (ctx->pc != 0x101104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101104u; }
        if (ctx->pc != 0x101104u) { return; }
    }
    ctx->pc = 0x101104u;
label_101104:
    // 0x101104: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_101108:
    if (ctx->pc == 0x101108u) {
        ctx->pc = 0x101108u;
            // 0x101108: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10110Cu;
        goto label_10110c;
    }
    ctx->pc = 0x101104u;
    {
        const bool branch_taken_0x101104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x101108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101104u;
            // 0x101108: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101104) {
            ctx->pc = 0x101128u;
            goto label_101128;
        }
    }
    ctx->pc = 0x10110Cu;
label_10110c:
    // 0x10110c: 0xc0f3f74  jal         func_3CFDD0
label_101110:
    if (ctx->pc == 0x101110u) {
        ctx->pc = 0x101110u;
            // 0x101110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101114u;
        goto label_101114;
    }
    ctx->pc = 0x10110Cu;
    SET_GPR_U32(ctx, 31, 0x101114u);
    ctx->pc = 0x101110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10110Cu;
            // 0x101110: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3CFDD0u;
    if (runtime->hasFunction(0x3CFDD0u)) {
        auto targetFn = runtime->lookupFunction(0x3CFDD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101114u; }
        if (ctx->pc != 0x101114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003CFDD0_0x3cfdd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101114u; }
        if (ctx->pc != 0x101114u) { return; }
    }
    ctx->pc = 0x101114u;
label_101114:
    // 0x101114: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x101114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_101118:
    // 0x101118: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x101118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10111c:
    // 0x10111c: 0x2463ca80  addiu       $v1, $v1, -0x3580
    ctx->pc = 0x10111cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953600));
label_101120:
    // 0x101120: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x101120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_101124:
    // 0x101124: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x101124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_101128:
    // 0x101128: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x101128u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10112c:
    // 0x10112c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10112cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_101130:
    // 0x101130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_101134:
    // 0x101134: 0x3e00008  jr          $ra
label_101138:
    if (ctx->pc == 0x101138u) {
        ctx->pc = 0x101138u;
            // 0x101138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x10113Cu;
        goto label_10113c;
    }
    ctx->pc = 0x101134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101134u;
            // 0x101138: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10113Cu;
label_10113c:
    // 0x10113c: 0x0  nop
    ctx->pc = 0x10113cu;
    // NOP
label_101140:
    // 0x101140: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_101144:
    // 0x101144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x101144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_101148:
    // 0x101148: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_10114c:
    // 0x10114c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10114cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_101150:
    // 0x101150: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x101150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_101154:
    // 0x101154: 0x1220000e  beqz        $s1, . + 4 + (0xE << 2)
label_101158:
    if (ctx->pc == 0x101158u) {
        ctx->pc = 0x101158u;
            // 0x101158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10115Cu;
        goto label_10115c;
    }
    ctx->pc = 0x101154u;
    {
        const bool branch_taken_0x101154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x101158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101154u;
            // 0x101158: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101154) {
            ctx->pc = 0x101190u;
            goto label_101190;
        }
    }
    ctx->pc = 0x10115Cu;
label_10115c:
    // 0x10115c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x10115cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_101160:
    // 0x101160: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x101160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_101164:
    // 0x101164: 0x2463ca60  addiu       $v1, $v1, -0x35A0
    ctx->pc = 0x101164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953568));
label_101168:
    // 0x101168: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x101168u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_10116c:
    // 0x10116c: 0x8c4267e0  lw          $v0, 0x67E0($v0)
    ctx->pc = 0x10116cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
label_101170:
    // 0x101170: 0x40f809  jalr        $v0
label_101174:
    if (ctx->pc == 0x101174u) {
        ctx->pc = 0x101174u;
            // 0x101174: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->pc = 0x101178u;
        goto label_101178;
    }
    ctx->pc = 0x101170u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x101178u);
        ctx->pc = 0x101174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101170u;
            // 0x101174: 0x8e240020  lw          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101178u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101178u; }
            if (ctx->pc != 0x101178u) { return; }
        }
        }
    }
    ctx->pc = 0x101178u;
label_101178:
    // 0x101178: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x101178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_10117c:
    // 0x10117c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10117cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_101180:
    // 0x101180: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_101184:
    if (ctx->pc == 0x101184u) {
        ctx->pc = 0x101184u;
            // 0x101184: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101188u;
        goto label_101188;
    }
    ctx->pc = 0x101180u;
    {
        const bool branch_taken_0x101180 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x101180) {
            ctx->pc = 0x101184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101180u;
            // 0x101184: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x101194u;
            goto label_101194;
        }
    }
    ctx->pc = 0x101188u;
label_101188:
    // 0x101188: 0xc0400a8  jal         func_1002A0
label_10118c:
    if (ctx->pc == 0x10118Cu) {
        ctx->pc = 0x10118Cu;
            // 0x10118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x101190u;
        goto label_101190;
    }
    ctx->pc = 0x101188u;
    SET_GPR_U32(ctx, 31, 0x101190u);
    ctx->pc = 0x10118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101188u;
            // 0x10118c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101190u; }
        if (ctx->pc != 0x101190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101190u; }
        if (ctx->pc != 0x101190u) { return; }
    }
    ctx->pc = 0x101190u;
label_101190:
    // 0x101190: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x101190u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_101194:
    // 0x101194: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x101194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_101198:
    // 0x101198: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101198u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_10119c:
    // 0x10119c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10119cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1011a0:
    // 0x1011a0: 0x3e00008  jr          $ra
label_1011a4:
    if (ctx->pc == 0x1011A4u) {
        ctx->pc = 0x1011A4u;
            // 0x1011a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1011A8u;
        goto label_1011a8;
    }
    ctx->pc = 0x1011A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1011A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011A0u;
            // 0x1011a4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1011A8u;
label_1011a8:
    // 0x1011a8: 0x0  nop
    ctx->pc = 0x1011a8u;
    // NOP
label_1011ac:
    // 0x1011ac: 0x0  nop
    ctx->pc = 0x1011acu;
    // NOP
label_1011b0:
    // 0x1011b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1011b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1011b4:
    // 0x1011b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1011b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1011b8:
    // 0x1011b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1011b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1011bc:
    // 0x1011bc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1011bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1011c0:
    // 0x1011c0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1011c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1011c4:
    // 0x1011c4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1011c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1011c8:
    // 0x1011c8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1011c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1011cc:
    // 0x1011cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1011ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1011d0:
    // 0x1011d0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1011d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1011d4:
    // 0x1011d4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1011d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1011d8:
    // 0x1011d8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1011d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1011dc:
    // 0x1011dc: 0x8c5189e0  lw          $s1, -0x7620($v0)
    ctx->pc = 0x1011dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_1011e0:
    // 0x1011e0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1011e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1011e4:
    // 0x1011e4: 0x8c4589f0  lw          $a1, -0x7610($v0)
    ctx->pc = 0x1011e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_1011e8:
    // 0x1011e8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x1011e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_1011ec:
    // 0x1011ec: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x1011ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_1011f0:
    // 0x1011f0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1011f4:
    if (ctx->pc == 0x1011F4u) {
        ctx->pc = 0x1011F4u;
            // 0x1011f4: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x1011F8u;
        goto label_1011f8;
    }
    ctx->pc = 0x1011F0u;
    {
        const bool branch_taken_0x1011f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1011F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1011F0u;
            // 0x1011f4: 0x64120001  daddiu      $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1011f0) {
            ctx->pc = 0x1011FCu;
            goto label_1011fc;
        }
    }
    ctx->pc = 0x1011F8u;
label_1011f8:
    // 0x1011f8: 0x905200f0  lbu         $s2, 0xF0($v0)
    ctx->pc = 0x1011f8u;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 240)));
label_1011fc:
    // 0x1011fc: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x1011fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_101200:
    // 0x101200: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x101200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_101204:
    // 0x101204: 0x8c448a08  lw          $a0, -0x75F8($v0)
    ctx->pc = 0x101204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_101208:
    // 0x101208: 0x2463ffa4  addiu       $v1, $v1, -0x5C
    ctx->pc = 0x101208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967204));
label_10120c:
    // 0x10120c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10120cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101210:
    // 0x101210: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x101210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_101214:
    // 0x101214: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x101214u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_101218:
    // 0x101218: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x101218u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_10121c:
    // 0x10121c: 0x2442ffa4  addiu       $v0, $v0, -0x5C
    ctx->pc = 0x10121cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967204));
label_101220:
    // 0x101220: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101220u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101224:
    // 0x101224: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_101228:
    if (ctx->pc == 0x101228u) {
        ctx->pc = 0x101228u;
            // 0x101228: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x10122Cu;
        goto label_10122c;
    }
    ctx->pc = 0x101224u;
    {
        const bool branch_taken_0x101224 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x101228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101224u;
            // 0x101228: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x101224) {
            ctx->pc = 0x1012B4u;
            goto label_1012b4;
        }
    }
    ctx->pc = 0x10122Cu;
label_10122c:
    // 0x10122c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x10122cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_101230:
    // 0x101230: 0x8c440eb0  lw          $a0, 0xEB0($v0)
    ctx->pc = 0x101230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
label_101234:
    // 0x101234: 0xc0506ac  jal         func_141AB0
label_101238:
    if (ctx->pc == 0x101238u) {
        ctx->pc = 0x101238u;
            // 0x101238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10123Cu;
        goto label_10123c;
    }
    ctx->pc = 0x101234u;
    SET_GPR_U32(ctx, 31, 0x10123Cu);
    ctx->pc = 0x101238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101234u;
            // 0x101238: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10123Cu; }
        if (ctx->pc != 0x10123Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10123Cu; }
        if (ctx->pc != 0x10123Cu) { return; }
    }
    ctx->pc = 0x10123Cu;
label_10123c:
    // 0x10123c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x10123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_101240:
    // 0x101240: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x101240u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_101244:
    // 0x101244: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x101244u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_101248:
    // 0x101248: 0x2484e0a0  addiu       $a0, $a0, -0x1F60
    ctx->pc = 0x101248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959264));
label_10124c:
    // 0x10124c: 0x3c02ff28  lui         $v0, 0xFF28
    ctx->pc = 0x10124cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65320 << 16));
label_101250:
    // 0x101250: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x101250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_101254:
    // 0x101254: 0x344564ff  ori         $a1, $v0, 0x64FF
    ctx->pc = 0x101254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25855);
label_101258:
    // 0x101258: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x101258u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_10125c:
    // 0x10125c: 0xc040594  jal         func_101650
label_101260:
    if (ctx->pc == 0x101260u) {
        ctx->pc = 0x101260u;
            // 0x101260: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x101264u;
        goto label_101264;
    }
    ctx->pc = 0x10125Cu;
    SET_GPR_U32(ctx, 31, 0x101264u);
    ctx->pc = 0x101260u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10125Cu;
            // 0x101260: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x101650u;
    if (runtime->hasFunction(0x101650u)) {
        auto targetFn = runtime->lookupFunction(0x101650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101264u; }
        if (ctx->pc != 0x101264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101650_0x101650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101264u; }
        if (ctx->pc != 0x101264u) { return; }
    }
    ctx->pc = 0x101264u;
label_101264:
    // 0x101264: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x101264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_101268:
    // 0x101268: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x101268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_10126c:
    // 0x10126c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x10126cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_101270:
    // 0x101270: 0x2484e0c8  addiu       $a0, $a0, -0x1F38
    ctx->pc = 0x101270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959304));
label_101274:
    // 0x101274: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x101274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
label_101278:
    // 0x101278: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x101278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10127c:
    // 0x10127c: 0x344564ff  ori         $a1, $v0, 0x64FF
    ctx->pc = 0x10127cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)25855);
label_101280:
    // 0x101280: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x101280u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_101284:
    // 0x101284: 0xc040594  jal         func_101650
label_101288:
    if (ctx->pc == 0x101288u) {
        ctx->pc = 0x101288u;
            // 0x101288: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x10128Cu;
        goto label_10128c;
    }
    ctx->pc = 0x101284u;
    SET_GPR_U32(ctx, 31, 0x10128Cu);
    ctx->pc = 0x101288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x101284u;
            // 0x101288: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x101650u;
    if (runtime->hasFunction(0x101650u)) {
        auto targetFn = runtime->lookupFunction(0x101650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101650_0x101650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10128Cu; }
        if (ctx->pc != 0x10128Cu) { return; }
    }
    ctx->pc = 0x10128Cu;
label_10128c:
    // 0x10128c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x10128cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_101290:
    // 0x101290: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x101290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_101294:
    // 0x101294: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x101294u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_101298:
    // 0x101298: 0x2484e0f0  addiu       $a0, $a0, -0x1F10
    ctx->pc = 0x101298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959344));
label_10129c:
    // 0x10129c: 0x3c022d73  lui         $v0, 0x2D73
    ctx->pc = 0x10129cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)11635 << 16));
label_1012a0:
    // 0x1012a0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1012a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1012a4:
    // 0x1012a4: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x1012a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_1012a8:
    // 0x1012a8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1012a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1012ac:
    // 0x1012ac: 0xc040594  jal         func_101650
label_1012b0:
    if (ctx->pc == 0x1012B0u) {
        ctx->pc = 0x1012B0u;
            // 0x1012b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1012B4u;
        goto label_1012b4;
    }
    ctx->pc = 0x1012ACu;
    SET_GPR_U32(ctx, 31, 0x1012B4u);
    ctx->pc = 0x1012B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1012ACu;
            // 0x1012b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x101650u;
    if (runtime->hasFunction(0x101650u)) {
        auto targetFn = runtime->lookupFunction(0x101650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012B4u; }
        if (ctx->pc != 0x1012B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101650_0x101650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012B4u; }
        if (ctx->pc != 0x1012B4u) { return; }
    }
    ctx->pc = 0x1012B4u;
label_1012b4:
    // 0x1012b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x1012b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_1012b8:
    // 0x1012b8: 0x8c440eb0  lw          $a0, 0xEB0($v0)
    ctx->pc = 0x1012b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3760)));
label_1012bc:
    // 0x1012bc: 0xc0506ac  jal         func_141AB0
label_1012c0:
    if (ctx->pc == 0x1012C0u) {
        ctx->pc = 0x1012C0u;
            // 0x1012c0: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x1012C4u;
        goto label_1012c4;
    }
    ctx->pc = 0x1012BCu;
    SET_GPR_U32(ctx, 31, 0x1012C4u);
    ctx->pc = 0x1012C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1012BCu;
            // 0x1012c0: 0x26050001  addiu       $a1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012C4u; }
        if (ctx->pc != 0x1012C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1012C4u; }
        if (ctx->pc != 0x1012C4u) { return; }
    }
    ctx->pc = 0x1012C4u;
label_1012c4:
    // 0x1012c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1012c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1012c8:
    // 0x1012c8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1012c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1012cc:
    // 0x1012cc: 0xc460e130  lwc1        $f0, -0x1ED0($v1)
    ctx->pc = 0x1012ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1012d0:
    // 0x1012d0: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1012d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_1012d4:
    // 0x1012d4: 0xc481e134  lwc1        $f1, -0x1ECC($a0)
    ctx->pc = 0x1012d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294959412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1012d8:
    // 0x1012d8: 0x84a5e152  lh          $a1, -0x1EAE($a1)
    ctx->pc = 0x1012d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294959442)));
label_1012dc:
    // 0x1012dc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1012dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1012e0:
    // 0x1012e0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1012e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1012e4:
    // 0x1012e4: 0xc462e138  lwc1        $f2, -0x1EC8($v1)
    ctx->pc = 0x1012e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1012e8:
    // 0x1012e8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1012e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1012ec:
    // 0x1012ec: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1012ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_1012f0:
    // 0x1012f0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x1012f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1012f4:
    // 0x1012f4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1012f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1012f8:
    // 0x1012f8: 0xc480e13c  lwc1        $f0, -0x1EC4($a0)
    ctx->pc = 0x1012f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294959420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1012fc:
    // 0x1012fc: 0xc461e140  lwc1        $f1, -0x1EC0($v1)
    ctx->pc = 0x1012fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101300:
    // 0x101300: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x101300u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_101304:
    // 0x101304: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x101304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_101308:
    // 0x101308: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x101308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_10130c:
    // 0x10130c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x10130cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101310:
    // 0x101310: 0x8c848a08  lw          $a0, -0x75F8($a0)
    ctx->pc = 0x101310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294937096)));
label_101314:
    // 0x101314: 0xc460e144  lwc1        $f0, -0x1EBC($v1)
    ctx->pc = 0x101314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101318:
    // 0x101318: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x101318u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_10131c:
    // 0x10131c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x10131cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101320:
    // 0x101320: 0xc461e148  lwc1        $f1, -0x1EB8($v1)
    ctx->pc = 0x101320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101324:
    // 0x101324: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x101324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_101328:
    // 0x101328: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_10132c:
    // 0x10132c: 0xc460e14c  lwc1        $f0, -0x1EB4($v1)
    ctx->pc = 0x10132cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294959436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_101330:
    // 0x101330: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x101330u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_101334:
    // 0x101334: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101338:
    // 0x101338: 0x8466e150  lh          $a2, -0x1EB0($v1)
    ctx->pc = 0x101338u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294959440)));
label_10133c:
    // 0x10133c: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x10133cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_101340:
    // 0x101340: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x101340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_101344:
    // 0x101344: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101344u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101348:
    // 0x101348: 0xa7a600ac  sh          $a2, 0xAC($sp)
    ctx->pc = 0x101348u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 6));
label_10134c:
    // 0x10134c: 0x9063e15a  lbu         $v1, -0x1EA6($v1)
    ctx->pc = 0x10134cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959450)));
label_101350:
    // 0x101350: 0x4600004  bltz        $v1, . + 4 + (0x4 << 2)
label_101354:
    if (ctx->pc == 0x101354u) {
        ctx->pc = 0x101354u;
            // 0x101354: 0xa7a500ae  sh          $a1, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x101358u;
        goto label_101358;
    }
    ctx->pc = 0x101350u;
    {
        const bool branch_taken_0x101350 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x101354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101350u;
            // 0x101354: 0xa7a500ae  sh          $a1, 0xAE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x101350) {
            ctx->pc = 0x101364u;
            goto label_101364;
        }
    }
    ctx->pc = 0x101358u;
label_101358:
    // 0x101358: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x101358u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10135c:
    // 0x10135c: 0x10000008  b           . + 4 + (0x8 << 2)
label_101360:
    if (ctx->pc == 0x101360u) {
        ctx->pc = 0x101360u;
            // 0x101360: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x101364u;
        goto label_101364;
    }
    ctx->pc = 0x10135Cu;
    {
        const bool branch_taken_0x10135c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10135Cu;
            // 0x101360: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10135c) {
            ctx->pc = 0x101380u;
            goto label_101380;
        }
    }
    ctx->pc = 0x101364u;
label_101364:
    // 0x101364: 0x32042  srl         $a0, $v1, 1
    ctx->pc = 0x101364u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_101368:
    // 0x101368: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x101368u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_10136c:
    // 0x10136c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x10136cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_101370:
    // 0x101370: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x101370u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101374:
    // 0x101374: 0x0  nop
    ctx->pc = 0x101374u;
    // NOP
label_101378:
    // 0x101378: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x101378u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_10137c:
    // 0x10137c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x10137cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_101380:
    // 0x101380: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x101380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_101384:
    // 0x101384: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x101384u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_101388:
    // 0x101388: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x101388u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10138c:
    // 0x10138c: 0x0  nop
    ctx->pc = 0x10138cu;
    // NOP
label_101390:
    // 0x101390: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x101390u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_101394:
    // 0x101394: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_101398:
    if (ctx->pc == 0x101398u) {
        ctx->pc = 0x101398u;
            // 0x101398: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x10139Cu;
        goto label_10139c;
    }
    ctx->pc = 0x101394u;
    {
        const bool branch_taken_0x101394 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x101394) {
            ctx->pc = 0x101398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101394u;
            // 0x101398: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1013ACu;
            goto label_1013ac;
        }
    }
    ctx->pc = 0x10139Cu;
label_10139c:
    // 0x10139c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x10139cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1013a0:
    // 0x1013a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1013a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1013a4:
    // 0x1013a4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1013a8:
    if (ctx->pc == 0x1013A8u) {
        ctx->pc = 0x1013A8u;
            // 0x1013a8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x1013ACu;
        goto label_1013ac;
    }
    ctx->pc = 0x1013A4u;
    {
        const bool branch_taken_0x1013a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1013A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1013A4u;
            // 0x1013a8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1013a4) {
            ctx->pc = 0x1013C4u;
            goto label_1013c4;
        }
    }
    ctx->pc = 0x1013ACu;
label_1013ac:
    // 0x1013ac: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x1013acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_1013b0:
    // 0x1013b0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1013b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1013b4:
    // 0x1013b4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x1013b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_1013b8:
    // 0x1013b8: 0x0  nop
    ctx->pc = 0x1013b8u;
    // NOP
label_1013bc:
    // 0x1013bc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1013bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1013c0:
    // 0x1013c0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1013c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_1013c4:
    // 0x1013c4: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1013c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1013c8:
    // 0x1013c8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1013c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1013cc:
    // 0x1013cc: 0xa065e15a  sb          $a1, -0x1EA6($v1)
    ctx->pc = 0x1013ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959450), (uint8_t)GPR_U32(ctx, 5));
label_1013d0:
    // 0x1013d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1013d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1013d4:
    // 0x1013d4: 0x9084e15a  lbu         $a0, -0x1EA6($a0)
    ctx->pc = 0x1013d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959450)));
label_1013d8:
    // 0x1013d8: 0x9063e15b  lbu         $v1, -0x1EA5($v1)
    ctx->pc = 0x1013d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959451)));
label_1013dc:
    // 0x1013dc: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1013dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1013e0:
    // 0x1013e0: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
label_1013e4:
    if (ctx->pc == 0x1013E4u) {
        ctx->pc = 0x1013E8u;
        goto label_1013e8;
    }
    ctx->pc = 0x1013E0u;
    {
        const bool branch_taken_0x1013e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1013e0) {
            ctx->pc = 0x10142Cu;
            goto label_10142c;
        }
    }
    ctx->pc = 0x1013E8u;
label_1013e8:
    // 0x1013e8: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1013e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1013ec:
    // 0x1013ec: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1013ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1013f0:
    // 0x1013f0: 0x9066e158  lbu         $a2, -0x1EA8($v1)
    ctx->pc = 0x1013f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959448)));
label_1013f4:
    // 0x1013f4: 0x3c05005d  lui         $a1, 0x5D
    ctx->pc = 0x1013f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)93 << 16));
label_1013f8:
    // 0x1013f8: 0xa080e15a  sb          $zero, -0x1EA6($a0)
    ctx->pc = 0x1013f8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294959450), (uint8_t)GPR_U32(ctx, 0));
label_1013fc:
    // 0x1013fc: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1013fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_101400:
    // 0x101400: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x101400u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_101404:
    // 0x101404: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101408:
    // 0x101408: 0xa0a6e158  sb          $a2, -0x1EA8($a1)
    ctx->pc = 0x101408u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4294959448), (uint8_t)GPR_U32(ctx, 6));
label_10140c:
    // 0x10140c: 0x9063e159  lbu         $v1, -0x1EA7($v1)
    ctx->pc = 0x10140cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959449)));
label_101410:
    // 0x101410: 0x9084e158  lbu         $a0, -0x1EA8($a0)
    ctx->pc = 0x101410u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959448)));
label_101414:
    // 0x101414: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x101414u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_101418:
    // 0x101418: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_10141c:
    if (ctx->pc == 0x10141Cu) {
        ctx->pc = 0x101420u;
        goto label_101420;
    }
    ctx->pc = 0x101418u;
    {
        const bool branch_taken_0x101418 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x101418) {
            ctx->pc = 0x10142Cu;
            goto label_10142c;
        }
    }
    ctx->pc = 0x101420u;
label_101420:
    // 0x101420: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x101420u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_101424:
    // 0x101424: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101428:
    // 0x101428: 0xa064e158  sb          $a0, -0x1EA8($v1)
    ctx->pc = 0x101428u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294959448), (uint8_t)GPR_U32(ctx, 4));
label_10142c:
    // 0x10142c: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x10142cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_101430:
    // 0x101430: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x101430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_101434:
    // 0x101434: 0x9065e158  lbu         $a1, -0x1EA8($v1)
    ctx->pc = 0x101434u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959448)));
label_101438:
    // 0x101438: 0x10a4001b  beq         $a1, $a0, . + 4 + (0x1B << 2)
label_10143c:
    if (ctx->pc == 0x10143Cu) {
        ctx->pc = 0x101440u;
        goto label_101440;
    }
    ctx->pc = 0x101438u;
    {
        const bool branch_taken_0x101438 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x101438) {
            ctx->pc = 0x1014A8u;
            goto label_1014a8;
        }
    }
    ctx->pc = 0x101440u;
label_101440:
    // 0x101440: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x101440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_101444:
    // 0x101444: 0x50a30023  beql        $a1, $v1, . + 4 + (0x23 << 2)
label_101448:
    if (ctx->pc == 0x101448u) {
        ctx->pc = 0x101448u;
            // 0x101448: 0x641000ff  daddiu      $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
        ctx->pc = 0x10144Cu;
        goto label_10144c;
    }
    ctx->pc = 0x101444u;
    {
        const bool branch_taken_0x101444 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x101444) {
            ctx->pc = 0x101448u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101444u;
            // 0x101448: 0x641000ff  daddiu      $s0, $zero, 0xFF (Delay Slot)
        SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1014D4u;
            goto label_1014d4;
        }
    }
    ctx->pc = 0x10144Cu;
label_10144c:
    // 0x10144c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10144cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_101450:
    // 0x101450: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
label_101454:
    if (ctx->pc == 0x101454u) {
        ctx->pc = 0x101458u;
        goto label_101458;
    }
    ctx->pc = 0x101450u;
    {
        const bool branch_taken_0x101450 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x101450) {
            ctx->pc = 0x10149Cu;
            goto label_10149c;
        }
    }
    ctx->pc = 0x101458u;
label_101458:
    // 0x101458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x101458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10145c:
    // 0x10145c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_101460:
    if (ctx->pc == 0x101460u) {
        ctx->pc = 0x101464u;
        goto label_101464;
    }
    ctx->pc = 0x10145Cu;
    {
        const bool branch_taken_0x10145c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x10145c) {
            ctx->pc = 0x101474u;
            goto label_101474;
        }
    }
    ctx->pc = 0x101464u;
label_101464:
    // 0x101464: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
label_101468:
    if (ctx->pc == 0x101468u) {
        ctx->pc = 0x101468u;
            // 0x101468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x10146Cu;
        goto label_10146c;
    }
    ctx->pc = 0x101464u;
    {
        const bool branch_taken_0x101464 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x101464) {
            ctx->pc = 0x101468u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101464u;
            // 0x101468: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1014D4u;
            goto label_1014d4;
        }
    }
    ctx->pc = 0x10146Cu;
label_10146c:
    // 0x10146c: 0x10000019  b           . + 4 + (0x19 << 2)
label_101470:
    if (ctx->pc == 0x101470u) {
        ctx->pc = 0x101474u;
        goto label_101474;
    }
    ctx->pc = 0x10146Cu;
    {
        const bool branch_taken_0x10146c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10146c) {
            ctx->pc = 0x1014D4u;
            goto label_1014d4;
        }
    }
    ctx->pc = 0x101474u;
label_101474:
    // 0x101474: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x101474u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_101478:
    // 0x101478: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_10147c:
    // 0x10147c: 0x9085e15a  lbu         $a1, -0x1EA6($a0)
    ctx->pc = 0x10147cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959450)));
label_101480:
    // 0x101480: 0x9063e15b  lbu         $v1, -0x1EA5($v1)
    ctx->pc = 0x101480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959451)));
label_101484:
    // 0x101484: 0x52200  sll         $a0, $a1, 8
    ctx->pc = 0x101484u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_101488:
    // 0x101488: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x101488u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_10148c:
    // 0x10148c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x10148cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_101490:
    // 0x101490: 0x1812  mflo        $v1
    ctx->pc = 0x101490u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_101494:
    // 0x101494: 0x1000000f  b           . + 4 + (0xF << 2)
label_101498:
    if (ctx->pc == 0x101498u) {
        ctx->pc = 0x101498u;
            // 0x101498: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x10149Cu;
        goto label_10149c;
    }
    ctx->pc = 0x101494u;
    {
        const bool branch_taken_0x101494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x101498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101494u;
            // 0x101498: 0x307000ff  andi        $s0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x101494) {
            ctx->pc = 0x1014D4u;
            goto label_1014d4;
        }
    }
    ctx->pc = 0x10149Cu;
label_10149c:
    // 0x10149c: 0x641000ff  daddiu      $s0, $zero, 0xFF
    ctx->pc = 0x10149cu;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)255);
label_1014a0:
    // 0x1014a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_1014a4:
    if (ctx->pc == 0x1014A4u) {
        ctx->pc = 0x1014A8u;
        goto label_1014a8;
    }
    ctx->pc = 0x1014A0u;
    {
        const bool branch_taken_0x1014a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1014a0) {
            ctx->pc = 0x1014D4u;
            goto label_1014d4;
        }
    }
    ctx->pc = 0x1014A8u;
label_1014a8:
    // 0x1014a8: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x1014a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
label_1014ac:
    // 0x1014ac: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x1014acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_1014b0:
    // 0x1014b0: 0x9086e15a  lbu         $a2, -0x1EA6($a0)
    ctx->pc = 0x1014b0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294959450)));
label_1014b4:
    // 0x1014b4: 0x9063e15b  lbu         $v1, -0x1EA5($v1)
    ctx->pc = 0x1014b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959451)));
label_1014b8:
    // 0x1014b8: 0x62a00  sll         $a1, $a2, 8
    ctx->pc = 0x1014b8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
label_1014bc:
    // 0x1014bc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1014bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1014c0:
    // 0x1014c0: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x1014c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1014c4:
    // 0x1014c4: 0xa3001a  div         $zero, $a1, $v1
    ctx->pc = 0x1014c4u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1014c8:
    // 0x1014c8: 0x1812  mflo        $v1
    ctx->pc = 0x1014c8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_1014cc:
    // 0x1014cc: 0x831823  subu        $v1, $a0, $v1
    ctx->pc = 0x1014ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1014d0:
    // 0x1014d0: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x1014d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_1014d4:
    // 0x1014d4: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1014d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
label_1014d8:
    // 0x1014d8: 0x3c054300  lui         $a1, 0x4300
    ctx->pc = 0x1014d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17152 << 16));
label_1014dc:
    // 0x1014dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1014dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1014e0:
    // 0x1014e0: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1014e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1014e4:
    // 0x1014e4: 0x46150040  add.s       $f1, $f0, $f21
    ctx->pc = 0x1014e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1014e8:
    // 0x1014e8: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x1014e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_1014ec:
    // 0x1014ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1014ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1014f0:
    // 0x1014f0: 0x0  nop
    ctx->pc = 0x1014f0u;
    // NOP
label_1014f4:
    // 0x1014f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1014f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1014f8:
    // 0x1014f8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1014f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1014fc:
    // 0x1014fc: 0x44150000  mfc1        $s5, $f0
    ctx->pc = 0x1014fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 21, bits); }
label_101500:
    // 0x101500: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x101500u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101504:
    // 0x101504: 0x0  nop
    ctx->pc = 0x101504u;
    // NOP
label_101508:
    // 0x101508: 0x46140040  add.s       $f1, $f0, $f20
    ctx->pc = 0x101508u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_10150c:
    // 0x10150c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x10150cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_101510:
    // 0x101510: 0x0  nop
    ctx->pc = 0x101510u;
    // NOP
label_101514:
    // 0x101514: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x101514u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_101518:
    // 0x101518: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x101518u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_10151c:
    // 0x10151c: 0x44140000  mfc1        $s4, $f0
    ctx->pc = 0x10151cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_101520:
    // 0x101520: 0x5640000c  bnel        $s2, $zero, . + 4 + (0xC << 2)
label_101524:
    if (ctx->pc == 0x101524u) {
        ctx->pc = 0x101524u;
            // 0x101524: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x101528u;
        goto label_101528;
    }
    ctx->pc = 0x101520u;
    {
        const bool branch_taken_0x101520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x101520) {
            ctx->pc = 0x101524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101520u;
            // 0x101524: 0x320400ff  andi        $a0, $s0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x101554u;
            goto label_101554;
        }
    }
    ctx->pc = 0x101528u;
label_101528:
    // 0x101528: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x101528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_10152c:
    // 0x10152c: 0xc0bc0cc  jal         func_2F0330
label_101530:
    if (ctx->pc == 0x101530u) {
        ctx->pc = 0x101530u;
            // 0x101530: 0x8c4489d8  lw          $a0, -0x7628($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
        ctx->pc = 0x101534u;
        goto label_101534;
    }
    ctx->pc = 0x10152Cu;
    SET_GPR_U32(ctx, 31, 0x101534u);
    ctx->pc = 0x101530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10152Cu;
            // 0x101530: 0x8c4489d8  lw          $a0, -0x7628($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0330u;
    if (runtime->hasFunction(0x2F0330u)) {
        auto targetFn = runtime->lookupFunction(0x2F0330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101534u; }
        if (ctx->pc != 0x101534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0330_0x2f0330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x101534u; }
        if (ctx->pc != 0x101534u) { return; }
    }
    ctx->pc = 0x101534u;
label_101534:
    // 0x101534: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x101534u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_101538:
    // 0x101538: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x101538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_10153c:
    // 0x10153c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x10153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_101540:
    // 0x101540: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x101540u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_101544:
    // 0x101544: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x101544u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_101548:
    // 0x101548: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x101548u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_10154c:
    // 0x10154c: 0x2474ffdc  addiu       $s4, $v1, -0x24
    ctx->pc = 0x10154cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967260));
label_101550:
    // 0x101550: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x101550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_101554:
    // 0x101554: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x101554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_101558:
    // 0x101558: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x101558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10155c:
    // 0x10155c: 0x839025  or          $s2, $a0, $v1
    ctx->pc = 0x10155cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_101560:
    // 0x101560: 0x2a610004  slti        $at, $s3, 0x4
    ctx->pc = 0x101560u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_101564:
    // 0x101564: 0x10200028  beqz        $at, . + 4 + (0x28 << 2)
label_101568:
    if (ctx->pc == 0x101568u) {
        ctx->pc = 0x10156Cu;
        goto label_10156c;
    }
    ctx->pc = 0x101564u;
    {
        const bool branch_taken_0x101564 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x101564) {
            ctx->pc = 0x101608u;
            goto label_101608;
        }
    }
    ctx->pc = 0x10156Cu;
label_10156c:
    // 0x10156c: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x10156cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_101570:
    // 0x101570: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x101570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_101574:
    // 0x101574: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x101574u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_101578:
    // 0x101578: 0x320f809  jalr        $t9
label_10157c:
    if (ctx->pc == 0x10157Cu) {
        ctx->pc = 0x10157Cu;
            // 0x10157c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x101580u;
        goto label_101580;
    }
    ctx->pc = 0x101578u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x101580u);
        ctx->pc = 0x10157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101578u;
            // 0x10157c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x101580u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x101580u; }
            if (ctx->pc != 0x101580u) { return; }
        }
        }
    }
    ctx->pc = 0x101580u;
label_101580:
    // 0x101580: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x101580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_101584:
    // 0x101584: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x101584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_101588:
    // 0x101588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x101588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_10158c:
    // 0x10158c: 0x13202b  sltu        $a0, $zero, $s3
    ctx->pc = 0x10158cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_101590:
    // 0x101590: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x101590u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_101594:
    // 0x101594: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x101594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_101598:
    // 0x101598: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x101598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_10159c:
    // 0x10159c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x10159cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1015a0:
    // 0x1015a0: 0x847000ac  lh          $s0, 0xAC($v1)
    ctx->pc = 0x1015a0u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 172)));
label_1015a4:
    // 0x1015a4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x1015a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_1015a8:
    // 0x1015a8: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x1015a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_1015ac:
    // 0x1015ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1015acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1015b0:
    // 0x1015b0: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x1015b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1015b4:
    // 0x1015b4: 0x5d1821  addu        $v1, $v0, $sp
    ctx->pc = 0x1015b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1015b8:
    // 0x1015b8: 0x24660080  addiu       $a2, $v1, 0x80
    ctx->pc = 0x1015b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_1015bc:
    // 0x1015bc: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1015bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1015c0:
    // 0x1015c0: 0x2b01821  addu        $v1, $s5, $s0
    ctx->pc = 0x1015c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_1015c4:
    // 0x1015c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1015c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1015c8:
    // 0x1015c8: 0x0  nop
    ctx->pc = 0x1015c8u;
    // NOP
label_1015cc:
    // 0x1015cc: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x1015ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_1015d0:
    // 0x1015d0: 0x44950000  mtc1        $s5, $f0
    ctx->pc = 0x1015d0u;
    { uint32_t bits = GPR_U32(ctx, 21); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1015d4:
    // 0x1015d4: 0x0  nop
    ctx->pc = 0x1015d4u;
    // NOP
label_1015d8:
    // 0x1015d8: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x1015d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1015dc:
    // 0x1015dc: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1015dcu;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1015e0:
    // 0x1015e0: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x1015e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_1015e4:
    // 0x1015e4: 0x320f809  jalr        $t9
label_1015e8:
    if (ctx->pc == 0x1015E8u) {
        ctx->pc = 0x1015E8u;
            // 0x1015e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1015ECu;
        goto label_1015ec;
    }
    ctx->pc = 0x1015E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1015ECu);
        ctx->pc = 0x1015E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015E4u;
            // 0x1015e8: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1015ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1015ECu; }
            if (ctx->pc != 0x1015ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1015ECu;
label_1015ec:
    // 0x1015ec: 0x8e390008  lw          $t9, 0x8($s1)
    ctx->pc = 0x1015ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1015f0:
    // 0x1015f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1015f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1015f4:
    // 0x1015f4: 0x320f809  jalr        $t9
label_1015f8:
    if (ctx->pc == 0x1015F8u) {
        ctx->pc = 0x1015F8u;
            // 0x1015f8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1015FCu;
        goto label_1015fc;
    }
    ctx->pc = 0x1015F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1015FCu);
        ctx->pc = 0x1015F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1015F4u;
            // 0x1015f8: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1015FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1015FCu; }
            if (ctx->pc != 0x1015FCu) { return; }
        }
        }
    }
    ctx->pc = 0x1015FCu;
label_1015fc:
    // 0x1015fc: 0x101c3c  dsll32      $v1, $s0, 16
    ctx->pc = 0x1015fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 16));
label_101600:
    // 0x101600: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x101600u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
label_101604:
    // 0x101604: 0x2a3a821  addu        $s5, $s5, $v1
    ctx->pc = 0x101604u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
label_101608:
    // 0x101608: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x101608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
label_10160c:
    // 0x10160c: 0x9063e158  lbu         $v1, -0x1EA8($v1)
    ctx->pc = 0x10160cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294959448)));
label_101610:
    // 0x101610: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x101610u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_101614:
    // 0x101614: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x101614u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_101618:
    // 0x101618: 0x5460ffd2  bnel        $v1, $zero, . + 4 + (-0x2E << 2)
label_10161c:
    if (ctx->pc == 0x10161Cu) {
        ctx->pc = 0x10161Cu;
            // 0x10161c: 0x2a610004  slti        $at, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->pc = 0x101620u;
        goto label_101620;
    }
    ctx->pc = 0x101618u;
    {
        const bool branch_taken_0x101618 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x101618) {
            ctx->pc = 0x10161Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x101618u;
            // 0x10161c: 0x2a610004  slti        $at, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x101564u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_101564;
        }
    }
    ctx->pc = 0x101620u;
label_101620:
    // 0x101620: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x101620u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_101624:
    // 0x101624: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x101624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_101628:
    // 0x101628: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x101628u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10162c:
    // 0x10162c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x10162cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_101630:
    // 0x101630: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x101630u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_101634:
    // 0x101634: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x101634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_101638:
    // 0x101638: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x101638u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_10163c:
    // 0x10163c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x10163cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_101640:
    // 0x101640: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x101640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_101644:
    // 0x101644: 0x3e00008  jr          $ra
label_101648:
    if (ctx->pc == 0x101648u) {
        ctx->pc = 0x101648u;
            // 0x101648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x10164Cu;
        goto label_10164c;
    }
    ctx->pc = 0x101644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x101644u;
            // 0x101648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10164Cu;
label_10164c:
    // 0x10164c: 0x0  nop
    ctx->pc = 0x10164cu;
    // NOP
}
