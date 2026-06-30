#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004B9AF0
// Address: 0x4b9af0 - 0x4ba450
void sub_004B9AF0_0x4b9af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004B9AF0_0x4b9af0");
#endif

    switch (ctx->pc) {
        case 0x4b9af0u: goto label_4b9af0;
        case 0x4b9af4u: goto label_4b9af4;
        case 0x4b9af8u: goto label_4b9af8;
        case 0x4b9afcu: goto label_4b9afc;
        case 0x4b9b00u: goto label_4b9b00;
        case 0x4b9b04u: goto label_4b9b04;
        case 0x4b9b08u: goto label_4b9b08;
        case 0x4b9b0cu: goto label_4b9b0c;
        case 0x4b9b10u: goto label_4b9b10;
        case 0x4b9b14u: goto label_4b9b14;
        case 0x4b9b18u: goto label_4b9b18;
        case 0x4b9b1cu: goto label_4b9b1c;
        case 0x4b9b20u: goto label_4b9b20;
        case 0x4b9b24u: goto label_4b9b24;
        case 0x4b9b28u: goto label_4b9b28;
        case 0x4b9b2cu: goto label_4b9b2c;
        case 0x4b9b30u: goto label_4b9b30;
        case 0x4b9b34u: goto label_4b9b34;
        case 0x4b9b38u: goto label_4b9b38;
        case 0x4b9b3cu: goto label_4b9b3c;
        case 0x4b9b40u: goto label_4b9b40;
        case 0x4b9b44u: goto label_4b9b44;
        case 0x4b9b48u: goto label_4b9b48;
        case 0x4b9b4cu: goto label_4b9b4c;
        case 0x4b9b50u: goto label_4b9b50;
        case 0x4b9b54u: goto label_4b9b54;
        case 0x4b9b58u: goto label_4b9b58;
        case 0x4b9b5cu: goto label_4b9b5c;
        case 0x4b9b60u: goto label_4b9b60;
        case 0x4b9b64u: goto label_4b9b64;
        case 0x4b9b68u: goto label_4b9b68;
        case 0x4b9b6cu: goto label_4b9b6c;
        case 0x4b9b70u: goto label_4b9b70;
        case 0x4b9b74u: goto label_4b9b74;
        case 0x4b9b78u: goto label_4b9b78;
        case 0x4b9b7cu: goto label_4b9b7c;
        case 0x4b9b80u: goto label_4b9b80;
        case 0x4b9b84u: goto label_4b9b84;
        case 0x4b9b88u: goto label_4b9b88;
        case 0x4b9b8cu: goto label_4b9b8c;
        case 0x4b9b90u: goto label_4b9b90;
        case 0x4b9b94u: goto label_4b9b94;
        case 0x4b9b98u: goto label_4b9b98;
        case 0x4b9b9cu: goto label_4b9b9c;
        case 0x4b9ba0u: goto label_4b9ba0;
        case 0x4b9ba4u: goto label_4b9ba4;
        case 0x4b9ba8u: goto label_4b9ba8;
        case 0x4b9bacu: goto label_4b9bac;
        case 0x4b9bb0u: goto label_4b9bb0;
        case 0x4b9bb4u: goto label_4b9bb4;
        case 0x4b9bb8u: goto label_4b9bb8;
        case 0x4b9bbcu: goto label_4b9bbc;
        case 0x4b9bc0u: goto label_4b9bc0;
        case 0x4b9bc4u: goto label_4b9bc4;
        case 0x4b9bc8u: goto label_4b9bc8;
        case 0x4b9bccu: goto label_4b9bcc;
        case 0x4b9bd0u: goto label_4b9bd0;
        case 0x4b9bd4u: goto label_4b9bd4;
        case 0x4b9bd8u: goto label_4b9bd8;
        case 0x4b9bdcu: goto label_4b9bdc;
        case 0x4b9be0u: goto label_4b9be0;
        case 0x4b9be4u: goto label_4b9be4;
        case 0x4b9be8u: goto label_4b9be8;
        case 0x4b9becu: goto label_4b9bec;
        case 0x4b9bf0u: goto label_4b9bf0;
        case 0x4b9bf4u: goto label_4b9bf4;
        case 0x4b9bf8u: goto label_4b9bf8;
        case 0x4b9bfcu: goto label_4b9bfc;
        case 0x4b9c00u: goto label_4b9c00;
        case 0x4b9c04u: goto label_4b9c04;
        case 0x4b9c08u: goto label_4b9c08;
        case 0x4b9c0cu: goto label_4b9c0c;
        case 0x4b9c10u: goto label_4b9c10;
        case 0x4b9c14u: goto label_4b9c14;
        case 0x4b9c18u: goto label_4b9c18;
        case 0x4b9c1cu: goto label_4b9c1c;
        case 0x4b9c20u: goto label_4b9c20;
        case 0x4b9c24u: goto label_4b9c24;
        case 0x4b9c28u: goto label_4b9c28;
        case 0x4b9c2cu: goto label_4b9c2c;
        case 0x4b9c30u: goto label_4b9c30;
        case 0x4b9c34u: goto label_4b9c34;
        case 0x4b9c38u: goto label_4b9c38;
        case 0x4b9c3cu: goto label_4b9c3c;
        case 0x4b9c40u: goto label_4b9c40;
        case 0x4b9c44u: goto label_4b9c44;
        case 0x4b9c48u: goto label_4b9c48;
        case 0x4b9c4cu: goto label_4b9c4c;
        case 0x4b9c50u: goto label_4b9c50;
        case 0x4b9c54u: goto label_4b9c54;
        case 0x4b9c58u: goto label_4b9c58;
        case 0x4b9c5cu: goto label_4b9c5c;
        case 0x4b9c60u: goto label_4b9c60;
        case 0x4b9c64u: goto label_4b9c64;
        case 0x4b9c68u: goto label_4b9c68;
        case 0x4b9c6cu: goto label_4b9c6c;
        case 0x4b9c70u: goto label_4b9c70;
        case 0x4b9c74u: goto label_4b9c74;
        case 0x4b9c78u: goto label_4b9c78;
        case 0x4b9c7cu: goto label_4b9c7c;
        case 0x4b9c80u: goto label_4b9c80;
        case 0x4b9c84u: goto label_4b9c84;
        case 0x4b9c88u: goto label_4b9c88;
        case 0x4b9c8cu: goto label_4b9c8c;
        case 0x4b9c90u: goto label_4b9c90;
        case 0x4b9c94u: goto label_4b9c94;
        case 0x4b9c98u: goto label_4b9c98;
        case 0x4b9c9cu: goto label_4b9c9c;
        case 0x4b9ca0u: goto label_4b9ca0;
        case 0x4b9ca4u: goto label_4b9ca4;
        case 0x4b9ca8u: goto label_4b9ca8;
        case 0x4b9cacu: goto label_4b9cac;
        case 0x4b9cb0u: goto label_4b9cb0;
        case 0x4b9cb4u: goto label_4b9cb4;
        case 0x4b9cb8u: goto label_4b9cb8;
        case 0x4b9cbcu: goto label_4b9cbc;
        case 0x4b9cc0u: goto label_4b9cc0;
        case 0x4b9cc4u: goto label_4b9cc4;
        case 0x4b9cc8u: goto label_4b9cc8;
        case 0x4b9cccu: goto label_4b9ccc;
        case 0x4b9cd0u: goto label_4b9cd0;
        case 0x4b9cd4u: goto label_4b9cd4;
        case 0x4b9cd8u: goto label_4b9cd8;
        case 0x4b9cdcu: goto label_4b9cdc;
        case 0x4b9ce0u: goto label_4b9ce0;
        case 0x4b9ce4u: goto label_4b9ce4;
        case 0x4b9ce8u: goto label_4b9ce8;
        case 0x4b9cecu: goto label_4b9cec;
        case 0x4b9cf0u: goto label_4b9cf0;
        case 0x4b9cf4u: goto label_4b9cf4;
        case 0x4b9cf8u: goto label_4b9cf8;
        case 0x4b9cfcu: goto label_4b9cfc;
        case 0x4b9d00u: goto label_4b9d00;
        case 0x4b9d04u: goto label_4b9d04;
        case 0x4b9d08u: goto label_4b9d08;
        case 0x4b9d0cu: goto label_4b9d0c;
        case 0x4b9d10u: goto label_4b9d10;
        case 0x4b9d14u: goto label_4b9d14;
        case 0x4b9d18u: goto label_4b9d18;
        case 0x4b9d1cu: goto label_4b9d1c;
        case 0x4b9d20u: goto label_4b9d20;
        case 0x4b9d24u: goto label_4b9d24;
        case 0x4b9d28u: goto label_4b9d28;
        case 0x4b9d2cu: goto label_4b9d2c;
        case 0x4b9d30u: goto label_4b9d30;
        case 0x4b9d34u: goto label_4b9d34;
        case 0x4b9d38u: goto label_4b9d38;
        case 0x4b9d3cu: goto label_4b9d3c;
        case 0x4b9d40u: goto label_4b9d40;
        case 0x4b9d44u: goto label_4b9d44;
        case 0x4b9d48u: goto label_4b9d48;
        case 0x4b9d4cu: goto label_4b9d4c;
        case 0x4b9d50u: goto label_4b9d50;
        case 0x4b9d54u: goto label_4b9d54;
        case 0x4b9d58u: goto label_4b9d58;
        case 0x4b9d5cu: goto label_4b9d5c;
        case 0x4b9d60u: goto label_4b9d60;
        case 0x4b9d64u: goto label_4b9d64;
        case 0x4b9d68u: goto label_4b9d68;
        case 0x4b9d6cu: goto label_4b9d6c;
        case 0x4b9d70u: goto label_4b9d70;
        case 0x4b9d74u: goto label_4b9d74;
        case 0x4b9d78u: goto label_4b9d78;
        case 0x4b9d7cu: goto label_4b9d7c;
        case 0x4b9d80u: goto label_4b9d80;
        case 0x4b9d84u: goto label_4b9d84;
        case 0x4b9d88u: goto label_4b9d88;
        case 0x4b9d8cu: goto label_4b9d8c;
        case 0x4b9d90u: goto label_4b9d90;
        case 0x4b9d94u: goto label_4b9d94;
        case 0x4b9d98u: goto label_4b9d98;
        case 0x4b9d9cu: goto label_4b9d9c;
        case 0x4b9da0u: goto label_4b9da0;
        case 0x4b9da4u: goto label_4b9da4;
        case 0x4b9da8u: goto label_4b9da8;
        case 0x4b9dacu: goto label_4b9dac;
        case 0x4b9db0u: goto label_4b9db0;
        case 0x4b9db4u: goto label_4b9db4;
        case 0x4b9db8u: goto label_4b9db8;
        case 0x4b9dbcu: goto label_4b9dbc;
        case 0x4b9dc0u: goto label_4b9dc0;
        case 0x4b9dc4u: goto label_4b9dc4;
        case 0x4b9dc8u: goto label_4b9dc8;
        case 0x4b9dccu: goto label_4b9dcc;
        case 0x4b9dd0u: goto label_4b9dd0;
        case 0x4b9dd4u: goto label_4b9dd4;
        case 0x4b9dd8u: goto label_4b9dd8;
        case 0x4b9ddcu: goto label_4b9ddc;
        case 0x4b9de0u: goto label_4b9de0;
        case 0x4b9de4u: goto label_4b9de4;
        case 0x4b9de8u: goto label_4b9de8;
        case 0x4b9decu: goto label_4b9dec;
        case 0x4b9df0u: goto label_4b9df0;
        case 0x4b9df4u: goto label_4b9df4;
        case 0x4b9df8u: goto label_4b9df8;
        case 0x4b9dfcu: goto label_4b9dfc;
        case 0x4b9e00u: goto label_4b9e00;
        case 0x4b9e04u: goto label_4b9e04;
        case 0x4b9e08u: goto label_4b9e08;
        case 0x4b9e0cu: goto label_4b9e0c;
        case 0x4b9e10u: goto label_4b9e10;
        case 0x4b9e14u: goto label_4b9e14;
        case 0x4b9e18u: goto label_4b9e18;
        case 0x4b9e1cu: goto label_4b9e1c;
        case 0x4b9e20u: goto label_4b9e20;
        case 0x4b9e24u: goto label_4b9e24;
        case 0x4b9e28u: goto label_4b9e28;
        case 0x4b9e2cu: goto label_4b9e2c;
        case 0x4b9e30u: goto label_4b9e30;
        case 0x4b9e34u: goto label_4b9e34;
        case 0x4b9e38u: goto label_4b9e38;
        case 0x4b9e3cu: goto label_4b9e3c;
        case 0x4b9e40u: goto label_4b9e40;
        case 0x4b9e44u: goto label_4b9e44;
        case 0x4b9e48u: goto label_4b9e48;
        case 0x4b9e4cu: goto label_4b9e4c;
        case 0x4b9e50u: goto label_4b9e50;
        case 0x4b9e54u: goto label_4b9e54;
        case 0x4b9e58u: goto label_4b9e58;
        case 0x4b9e5cu: goto label_4b9e5c;
        case 0x4b9e60u: goto label_4b9e60;
        case 0x4b9e64u: goto label_4b9e64;
        case 0x4b9e68u: goto label_4b9e68;
        case 0x4b9e6cu: goto label_4b9e6c;
        case 0x4b9e70u: goto label_4b9e70;
        case 0x4b9e74u: goto label_4b9e74;
        case 0x4b9e78u: goto label_4b9e78;
        case 0x4b9e7cu: goto label_4b9e7c;
        case 0x4b9e80u: goto label_4b9e80;
        case 0x4b9e84u: goto label_4b9e84;
        case 0x4b9e88u: goto label_4b9e88;
        case 0x4b9e8cu: goto label_4b9e8c;
        case 0x4b9e90u: goto label_4b9e90;
        case 0x4b9e94u: goto label_4b9e94;
        case 0x4b9e98u: goto label_4b9e98;
        case 0x4b9e9cu: goto label_4b9e9c;
        case 0x4b9ea0u: goto label_4b9ea0;
        case 0x4b9ea4u: goto label_4b9ea4;
        case 0x4b9ea8u: goto label_4b9ea8;
        case 0x4b9eacu: goto label_4b9eac;
        case 0x4b9eb0u: goto label_4b9eb0;
        case 0x4b9eb4u: goto label_4b9eb4;
        case 0x4b9eb8u: goto label_4b9eb8;
        case 0x4b9ebcu: goto label_4b9ebc;
        case 0x4b9ec0u: goto label_4b9ec0;
        case 0x4b9ec4u: goto label_4b9ec4;
        case 0x4b9ec8u: goto label_4b9ec8;
        case 0x4b9eccu: goto label_4b9ecc;
        case 0x4b9ed0u: goto label_4b9ed0;
        case 0x4b9ed4u: goto label_4b9ed4;
        case 0x4b9ed8u: goto label_4b9ed8;
        case 0x4b9edcu: goto label_4b9edc;
        case 0x4b9ee0u: goto label_4b9ee0;
        case 0x4b9ee4u: goto label_4b9ee4;
        case 0x4b9ee8u: goto label_4b9ee8;
        case 0x4b9eecu: goto label_4b9eec;
        case 0x4b9ef0u: goto label_4b9ef0;
        case 0x4b9ef4u: goto label_4b9ef4;
        case 0x4b9ef8u: goto label_4b9ef8;
        case 0x4b9efcu: goto label_4b9efc;
        case 0x4b9f00u: goto label_4b9f00;
        case 0x4b9f04u: goto label_4b9f04;
        case 0x4b9f08u: goto label_4b9f08;
        case 0x4b9f0cu: goto label_4b9f0c;
        case 0x4b9f10u: goto label_4b9f10;
        case 0x4b9f14u: goto label_4b9f14;
        case 0x4b9f18u: goto label_4b9f18;
        case 0x4b9f1cu: goto label_4b9f1c;
        case 0x4b9f20u: goto label_4b9f20;
        case 0x4b9f24u: goto label_4b9f24;
        case 0x4b9f28u: goto label_4b9f28;
        case 0x4b9f2cu: goto label_4b9f2c;
        case 0x4b9f30u: goto label_4b9f30;
        case 0x4b9f34u: goto label_4b9f34;
        case 0x4b9f38u: goto label_4b9f38;
        case 0x4b9f3cu: goto label_4b9f3c;
        case 0x4b9f40u: goto label_4b9f40;
        case 0x4b9f44u: goto label_4b9f44;
        case 0x4b9f48u: goto label_4b9f48;
        case 0x4b9f4cu: goto label_4b9f4c;
        case 0x4b9f50u: goto label_4b9f50;
        case 0x4b9f54u: goto label_4b9f54;
        case 0x4b9f58u: goto label_4b9f58;
        case 0x4b9f5cu: goto label_4b9f5c;
        case 0x4b9f60u: goto label_4b9f60;
        case 0x4b9f64u: goto label_4b9f64;
        case 0x4b9f68u: goto label_4b9f68;
        case 0x4b9f6cu: goto label_4b9f6c;
        case 0x4b9f70u: goto label_4b9f70;
        case 0x4b9f74u: goto label_4b9f74;
        case 0x4b9f78u: goto label_4b9f78;
        case 0x4b9f7cu: goto label_4b9f7c;
        case 0x4b9f80u: goto label_4b9f80;
        case 0x4b9f84u: goto label_4b9f84;
        case 0x4b9f88u: goto label_4b9f88;
        case 0x4b9f8cu: goto label_4b9f8c;
        case 0x4b9f90u: goto label_4b9f90;
        case 0x4b9f94u: goto label_4b9f94;
        case 0x4b9f98u: goto label_4b9f98;
        case 0x4b9f9cu: goto label_4b9f9c;
        case 0x4b9fa0u: goto label_4b9fa0;
        case 0x4b9fa4u: goto label_4b9fa4;
        case 0x4b9fa8u: goto label_4b9fa8;
        case 0x4b9facu: goto label_4b9fac;
        case 0x4b9fb0u: goto label_4b9fb0;
        case 0x4b9fb4u: goto label_4b9fb4;
        case 0x4b9fb8u: goto label_4b9fb8;
        case 0x4b9fbcu: goto label_4b9fbc;
        case 0x4b9fc0u: goto label_4b9fc0;
        case 0x4b9fc4u: goto label_4b9fc4;
        case 0x4b9fc8u: goto label_4b9fc8;
        case 0x4b9fccu: goto label_4b9fcc;
        case 0x4b9fd0u: goto label_4b9fd0;
        case 0x4b9fd4u: goto label_4b9fd4;
        case 0x4b9fd8u: goto label_4b9fd8;
        case 0x4b9fdcu: goto label_4b9fdc;
        case 0x4b9fe0u: goto label_4b9fe0;
        case 0x4b9fe4u: goto label_4b9fe4;
        case 0x4b9fe8u: goto label_4b9fe8;
        case 0x4b9fecu: goto label_4b9fec;
        case 0x4b9ff0u: goto label_4b9ff0;
        case 0x4b9ff4u: goto label_4b9ff4;
        case 0x4b9ff8u: goto label_4b9ff8;
        case 0x4b9ffcu: goto label_4b9ffc;
        case 0x4ba000u: goto label_4ba000;
        case 0x4ba004u: goto label_4ba004;
        case 0x4ba008u: goto label_4ba008;
        case 0x4ba00cu: goto label_4ba00c;
        case 0x4ba010u: goto label_4ba010;
        case 0x4ba014u: goto label_4ba014;
        case 0x4ba018u: goto label_4ba018;
        case 0x4ba01cu: goto label_4ba01c;
        case 0x4ba020u: goto label_4ba020;
        case 0x4ba024u: goto label_4ba024;
        case 0x4ba028u: goto label_4ba028;
        case 0x4ba02cu: goto label_4ba02c;
        case 0x4ba030u: goto label_4ba030;
        case 0x4ba034u: goto label_4ba034;
        case 0x4ba038u: goto label_4ba038;
        case 0x4ba03cu: goto label_4ba03c;
        case 0x4ba040u: goto label_4ba040;
        case 0x4ba044u: goto label_4ba044;
        case 0x4ba048u: goto label_4ba048;
        case 0x4ba04cu: goto label_4ba04c;
        case 0x4ba050u: goto label_4ba050;
        case 0x4ba054u: goto label_4ba054;
        case 0x4ba058u: goto label_4ba058;
        case 0x4ba05cu: goto label_4ba05c;
        case 0x4ba060u: goto label_4ba060;
        case 0x4ba064u: goto label_4ba064;
        case 0x4ba068u: goto label_4ba068;
        case 0x4ba06cu: goto label_4ba06c;
        case 0x4ba070u: goto label_4ba070;
        case 0x4ba074u: goto label_4ba074;
        case 0x4ba078u: goto label_4ba078;
        case 0x4ba07cu: goto label_4ba07c;
        case 0x4ba080u: goto label_4ba080;
        case 0x4ba084u: goto label_4ba084;
        case 0x4ba088u: goto label_4ba088;
        case 0x4ba08cu: goto label_4ba08c;
        case 0x4ba090u: goto label_4ba090;
        case 0x4ba094u: goto label_4ba094;
        case 0x4ba098u: goto label_4ba098;
        case 0x4ba09cu: goto label_4ba09c;
        case 0x4ba0a0u: goto label_4ba0a0;
        case 0x4ba0a4u: goto label_4ba0a4;
        case 0x4ba0a8u: goto label_4ba0a8;
        case 0x4ba0acu: goto label_4ba0ac;
        case 0x4ba0b0u: goto label_4ba0b0;
        case 0x4ba0b4u: goto label_4ba0b4;
        case 0x4ba0b8u: goto label_4ba0b8;
        case 0x4ba0bcu: goto label_4ba0bc;
        case 0x4ba0c0u: goto label_4ba0c0;
        case 0x4ba0c4u: goto label_4ba0c4;
        case 0x4ba0c8u: goto label_4ba0c8;
        case 0x4ba0ccu: goto label_4ba0cc;
        case 0x4ba0d0u: goto label_4ba0d0;
        case 0x4ba0d4u: goto label_4ba0d4;
        case 0x4ba0d8u: goto label_4ba0d8;
        case 0x4ba0dcu: goto label_4ba0dc;
        case 0x4ba0e0u: goto label_4ba0e0;
        case 0x4ba0e4u: goto label_4ba0e4;
        case 0x4ba0e8u: goto label_4ba0e8;
        case 0x4ba0ecu: goto label_4ba0ec;
        case 0x4ba0f0u: goto label_4ba0f0;
        case 0x4ba0f4u: goto label_4ba0f4;
        case 0x4ba0f8u: goto label_4ba0f8;
        case 0x4ba0fcu: goto label_4ba0fc;
        case 0x4ba100u: goto label_4ba100;
        case 0x4ba104u: goto label_4ba104;
        case 0x4ba108u: goto label_4ba108;
        case 0x4ba10cu: goto label_4ba10c;
        case 0x4ba110u: goto label_4ba110;
        case 0x4ba114u: goto label_4ba114;
        case 0x4ba118u: goto label_4ba118;
        case 0x4ba11cu: goto label_4ba11c;
        case 0x4ba120u: goto label_4ba120;
        case 0x4ba124u: goto label_4ba124;
        case 0x4ba128u: goto label_4ba128;
        case 0x4ba12cu: goto label_4ba12c;
        case 0x4ba130u: goto label_4ba130;
        case 0x4ba134u: goto label_4ba134;
        case 0x4ba138u: goto label_4ba138;
        case 0x4ba13cu: goto label_4ba13c;
        case 0x4ba140u: goto label_4ba140;
        case 0x4ba144u: goto label_4ba144;
        case 0x4ba148u: goto label_4ba148;
        case 0x4ba14cu: goto label_4ba14c;
        case 0x4ba150u: goto label_4ba150;
        case 0x4ba154u: goto label_4ba154;
        case 0x4ba158u: goto label_4ba158;
        case 0x4ba15cu: goto label_4ba15c;
        case 0x4ba160u: goto label_4ba160;
        case 0x4ba164u: goto label_4ba164;
        case 0x4ba168u: goto label_4ba168;
        case 0x4ba16cu: goto label_4ba16c;
        case 0x4ba170u: goto label_4ba170;
        case 0x4ba174u: goto label_4ba174;
        case 0x4ba178u: goto label_4ba178;
        case 0x4ba17cu: goto label_4ba17c;
        case 0x4ba180u: goto label_4ba180;
        case 0x4ba184u: goto label_4ba184;
        case 0x4ba188u: goto label_4ba188;
        case 0x4ba18cu: goto label_4ba18c;
        case 0x4ba190u: goto label_4ba190;
        case 0x4ba194u: goto label_4ba194;
        case 0x4ba198u: goto label_4ba198;
        case 0x4ba19cu: goto label_4ba19c;
        case 0x4ba1a0u: goto label_4ba1a0;
        case 0x4ba1a4u: goto label_4ba1a4;
        case 0x4ba1a8u: goto label_4ba1a8;
        case 0x4ba1acu: goto label_4ba1ac;
        case 0x4ba1b0u: goto label_4ba1b0;
        case 0x4ba1b4u: goto label_4ba1b4;
        case 0x4ba1b8u: goto label_4ba1b8;
        case 0x4ba1bcu: goto label_4ba1bc;
        case 0x4ba1c0u: goto label_4ba1c0;
        case 0x4ba1c4u: goto label_4ba1c4;
        case 0x4ba1c8u: goto label_4ba1c8;
        case 0x4ba1ccu: goto label_4ba1cc;
        case 0x4ba1d0u: goto label_4ba1d0;
        case 0x4ba1d4u: goto label_4ba1d4;
        case 0x4ba1d8u: goto label_4ba1d8;
        case 0x4ba1dcu: goto label_4ba1dc;
        case 0x4ba1e0u: goto label_4ba1e0;
        case 0x4ba1e4u: goto label_4ba1e4;
        case 0x4ba1e8u: goto label_4ba1e8;
        case 0x4ba1ecu: goto label_4ba1ec;
        case 0x4ba1f0u: goto label_4ba1f0;
        case 0x4ba1f4u: goto label_4ba1f4;
        case 0x4ba1f8u: goto label_4ba1f8;
        case 0x4ba1fcu: goto label_4ba1fc;
        case 0x4ba200u: goto label_4ba200;
        case 0x4ba204u: goto label_4ba204;
        case 0x4ba208u: goto label_4ba208;
        case 0x4ba20cu: goto label_4ba20c;
        case 0x4ba210u: goto label_4ba210;
        case 0x4ba214u: goto label_4ba214;
        case 0x4ba218u: goto label_4ba218;
        case 0x4ba21cu: goto label_4ba21c;
        case 0x4ba220u: goto label_4ba220;
        case 0x4ba224u: goto label_4ba224;
        case 0x4ba228u: goto label_4ba228;
        case 0x4ba22cu: goto label_4ba22c;
        case 0x4ba230u: goto label_4ba230;
        case 0x4ba234u: goto label_4ba234;
        case 0x4ba238u: goto label_4ba238;
        case 0x4ba23cu: goto label_4ba23c;
        case 0x4ba240u: goto label_4ba240;
        case 0x4ba244u: goto label_4ba244;
        case 0x4ba248u: goto label_4ba248;
        case 0x4ba24cu: goto label_4ba24c;
        case 0x4ba250u: goto label_4ba250;
        case 0x4ba254u: goto label_4ba254;
        case 0x4ba258u: goto label_4ba258;
        case 0x4ba25cu: goto label_4ba25c;
        case 0x4ba260u: goto label_4ba260;
        case 0x4ba264u: goto label_4ba264;
        case 0x4ba268u: goto label_4ba268;
        case 0x4ba26cu: goto label_4ba26c;
        case 0x4ba270u: goto label_4ba270;
        case 0x4ba274u: goto label_4ba274;
        case 0x4ba278u: goto label_4ba278;
        case 0x4ba27cu: goto label_4ba27c;
        case 0x4ba280u: goto label_4ba280;
        case 0x4ba284u: goto label_4ba284;
        case 0x4ba288u: goto label_4ba288;
        case 0x4ba28cu: goto label_4ba28c;
        case 0x4ba290u: goto label_4ba290;
        case 0x4ba294u: goto label_4ba294;
        case 0x4ba298u: goto label_4ba298;
        case 0x4ba29cu: goto label_4ba29c;
        case 0x4ba2a0u: goto label_4ba2a0;
        case 0x4ba2a4u: goto label_4ba2a4;
        case 0x4ba2a8u: goto label_4ba2a8;
        case 0x4ba2acu: goto label_4ba2ac;
        case 0x4ba2b0u: goto label_4ba2b0;
        case 0x4ba2b4u: goto label_4ba2b4;
        case 0x4ba2b8u: goto label_4ba2b8;
        case 0x4ba2bcu: goto label_4ba2bc;
        case 0x4ba2c0u: goto label_4ba2c0;
        case 0x4ba2c4u: goto label_4ba2c4;
        case 0x4ba2c8u: goto label_4ba2c8;
        case 0x4ba2ccu: goto label_4ba2cc;
        case 0x4ba2d0u: goto label_4ba2d0;
        case 0x4ba2d4u: goto label_4ba2d4;
        case 0x4ba2d8u: goto label_4ba2d8;
        case 0x4ba2dcu: goto label_4ba2dc;
        case 0x4ba2e0u: goto label_4ba2e0;
        case 0x4ba2e4u: goto label_4ba2e4;
        case 0x4ba2e8u: goto label_4ba2e8;
        case 0x4ba2ecu: goto label_4ba2ec;
        case 0x4ba2f0u: goto label_4ba2f0;
        case 0x4ba2f4u: goto label_4ba2f4;
        case 0x4ba2f8u: goto label_4ba2f8;
        case 0x4ba2fcu: goto label_4ba2fc;
        case 0x4ba300u: goto label_4ba300;
        case 0x4ba304u: goto label_4ba304;
        case 0x4ba308u: goto label_4ba308;
        case 0x4ba30cu: goto label_4ba30c;
        case 0x4ba310u: goto label_4ba310;
        case 0x4ba314u: goto label_4ba314;
        case 0x4ba318u: goto label_4ba318;
        case 0x4ba31cu: goto label_4ba31c;
        case 0x4ba320u: goto label_4ba320;
        case 0x4ba324u: goto label_4ba324;
        case 0x4ba328u: goto label_4ba328;
        case 0x4ba32cu: goto label_4ba32c;
        case 0x4ba330u: goto label_4ba330;
        case 0x4ba334u: goto label_4ba334;
        case 0x4ba338u: goto label_4ba338;
        case 0x4ba33cu: goto label_4ba33c;
        case 0x4ba340u: goto label_4ba340;
        case 0x4ba344u: goto label_4ba344;
        case 0x4ba348u: goto label_4ba348;
        case 0x4ba34cu: goto label_4ba34c;
        case 0x4ba350u: goto label_4ba350;
        case 0x4ba354u: goto label_4ba354;
        case 0x4ba358u: goto label_4ba358;
        case 0x4ba35cu: goto label_4ba35c;
        case 0x4ba360u: goto label_4ba360;
        case 0x4ba364u: goto label_4ba364;
        case 0x4ba368u: goto label_4ba368;
        case 0x4ba36cu: goto label_4ba36c;
        case 0x4ba370u: goto label_4ba370;
        case 0x4ba374u: goto label_4ba374;
        case 0x4ba378u: goto label_4ba378;
        case 0x4ba37cu: goto label_4ba37c;
        case 0x4ba380u: goto label_4ba380;
        case 0x4ba384u: goto label_4ba384;
        case 0x4ba388u: goto label_4ba388;
        case 0x4ba38cu: goto label_4ba38c;
        case 0x4ba390u: goto label_4ba390;
        case 0x4ba394u: goto label_4ba394;
        case 0x4ba398u: goto label_4ba398;
        case 0x4ba39cu: goto label_4ba39c;
        case 0x4ba3a0u: goto label_4ba3a0;
        case 0x4ba3a4u: goto label_4ba3a4;
        case 0x4ba3a8u: goto label_4ba3a8;
        case 0x4ba3acu: goto label_4ba3ac;
        case 0x4ba3b0u: goto label_4ba3b0;
        case 0x4ba3b4u: goto label_4ba3b4;
        case 0x4ba3b8u: goto label_4ba3b8;
        case 0x4ba3bcu: goto label_4ba3bc;
        case 0x4ba3c0u: goto label_4ba3c0;
        case 0x4ba3c4u: goto label_4ba3c4;
        case 0x4ba3c8u: goto label_4ba3c8;
        case 0x4ba3ccu: goto label_4ba3cc;
        case 0x4ba3d0u: goto label_4ba3d0;
        case 0x4ba3d4u: goto label_4ba3d4;
        case 0x4ba3d8u: goto label_4ba3d8;
        case 0x4ba3dcu: goto label_4ba3dc;
        case 0x4ba3e0u: goto label_4ba3e0;
        case 0x4ba3e4u: goto label_4ba3e4;
        case 0x4ba3e8u: goto label_4ba3e8;
        case 0x4ba3ecu: goto label_4ba3ec;
        case 0x4ba3f0u: goto label_4ba3f0;
        case 0x4ba3f4u: goto label_4ba3f4;
        case 0x4ba3f8u: goto label_4ba3f8;
        case 0x4ba3fcu: goto label_4ba3fc;
        case 0x4ba400u: goto label_4ba400;
        case 0x4ba404u: goto label_4ba404;
        case 0x4ba408u: goto label_4ba408;
        case 0x4ba40cu: goto label_4ba40c;
        case 0x4ba410u: goto label_4ba410;
        case 0x4ba414u: goto label_4ba414;
        case 0x4ba418u: goto label_4ba418;
        case 0x4ba41cu: goto label_4ba41c;
        case 0x4ba420u: goto label_4ba420;
        case 0x4ba424u: goto label_4ba424;
        case 0x4ba428u: goto label_4ba428;
        case 0x4ba42cu: goto label_4ba42c;
        case 0x4ba430u: goto label_4ba430;
        case 0x4ba434u: goto label_4ba434;
        case 0x4ba438u: goto label_4ba438;
        case 0x4ba43cu: goto label_4ba43c;
        case 0x4ba440u: goto label_4ba440;
        case 0x4ba444u: goto label_4ba444;
        case 0x4ba448u: goto label_4ba448;
        case 0x4ba44cu: goto label_4ba44c;
        default: break;
    }

    ctx->pc = 0x4b9af0u;

label_4b9af0:
    // 0x4b9af0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4b9af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4b9af4:
    // 0x4b9af4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4b9af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4b9af8:
    // 0x4b9af8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b9af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b9afc:
    // 0x4b9afc: 0xc0aeebc  jal         func_2BBAF0
label_4b9b00:
    if (ctx->pc == 0x4B9B00u) {
        ctx->pc = 0x4B9B00u;
            // 0x4b9b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9B04u;
        goto label_4b9b04;
    }
    ctx->pc = 0x4B9AFCu;
    SET_GPR_U32(ctx, 31, 0x4B9B04u);
    ctx->pc = 0x4B9B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9AFCu;
            // 0x4b9b00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B04u; }
        if (ctx->pc != 0x4B9B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B04u; }
        if (ctx->pc != 0x4B9B04u) { return; }
    }
    ctx->pc = 0x4B9B04u;
label_4b9b04:
    // 0x4b9b04: 0xc0aeeb4  jal         func_2BBAD0
label_4b9b08:
    if (ctx->pc == 0x4B9B08u) {
        ctx->pc = 0x4B9B08u;
            // 0x4b9b08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x4B9B0Cu;
        goto label_4b9b0c;
    }
    ctx->pc = 0x4B9B04u;
    SET_GPR_U32(ctx, 31, 0x4B9B0Cu);
    ctx->pc = 0x4B9B08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9B04u;
            // 0x4b9b08: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B0Cu; }
        if (ctx->pc != 0x4B9B0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B0Cu; }
        if (ctx->pc != 0x4B9B0Cu) { return; }
    }
    ctx->pc = 0x4B9B0Cu;
label_4b9b0c:
    // 0x4b9b0c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4b9b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4b9b10:
    // 0x4b9b10: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4b9b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4b9b14:
    // 0x4b9b14: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4b9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4b9b18:
    // 0x4b9b18: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4b9b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4b9b1c:
    // 0x4b9b1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b9b20:
    // 0x4b9b20: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4b9b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4b9b24:
    // 0x4b9b24: 0xc0aeea4  jal         func_2BBA90
label_4b9b28:
    if (ctx->pc == 0x4B9B28u) {
        ctx->pc = 0x4B9B28u;
            // 0x4b9b28: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4B9B2Cu;
        goto label_4b9b2c;
    }
    ctx->pc = 0x4B9B24u;
    SET_GPR_U32(ctx, 31, 0x4B9B2Cu);
    ctx->pc = 0x4B9B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9B24u;
            // 0x4b9b28: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B2Cu; }
        if (ctx->pc != 0x4B9B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B2Cu; }
        if (ctx->pc != 0x4B9B2Cu) { return; }
    }
    ctx->pc = 0x4B9B2Cu;
label_4b9b2c:
    // 0x4b9b2c: 0xc0aee8c  jal         func_2BBA30
label_4b9b30:
    if (ctx->pc == 0x4B9B30u) {
        ctx->pc = 0x4B9B30u;
            // 0x4b9b30: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4B9B34u;
        goto label_4b9b34;
    }
    ctx->pc = 0x4B9B2Cu;
    SET_GPR_U32(ctx, 31, 0x4B9B34u);
    ctx->pc = 0x4B9B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9B2Cu;
            // 0x4b9b30: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B34u; }
        if (ctx->pc != 0x4B9B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B34u; }
        if (ctx->pc != 0x4B9B34u) { return; }
    }
    ctx->pc = 0x4B9B34u;
label_4b9b34:
    // 0x4b9b34: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4b9b34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4b9b38:
    // 0x4b9b38: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4b9b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4b9b3c:
    // 0x4b9b3c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x4b9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_4b9b40:
    // 0x4b9b40: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4b9b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4b9b44:
    // 0x4b9b44: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x4b9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_4b9b48:
    // 0x4b9b48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b9b4c:
    // 0x4b9b4c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x4b9b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_4b9b50:
    // 0x4b9b50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4b9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4b9b54:
    // 0x4b9b54: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x4b9b54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_4b9b58:
    // 0x4b9b58: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x4b9b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_4b9b5c:
    // 0x4b9b5c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x4b9b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_4b9b60:
    // 0x4b9b60: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x4b9b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_4b9b64:
    // 0x4b9b64: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x4b9b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_4b9b68:
    // 0x4b9b68: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x4b9b68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_4b9b6c:
    // 0x4b9b6c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x4b9b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_4b9b70:
    // 0x4b9b70: 0xc0775b8  jal         func_1DD6E0
label_4b9b74:
    if (ctx->pc == 0x4B9B74u) {
        ctx->pc = 0x4B9B74u;
            // 0x4b9b74: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4B9B78u;
        goto label_4b9b78;
    }
    ctx->pc = 0x4B9B70u;
    SET_GPR_U32(ctx, 31, 0x4B9B78u);
    ctx->pc = 0x4B9B74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9B70u;
            // 0x4b9b74: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B78u; }
        if (ctx->pc != 0x4B9B78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B78u; }
        if (ctx->pc != 0x4B9B78u) { return; }
    }
    ctx->pc = 0x4B9B78u;
label_4b9b78:
    // 0x4b9b78: 0xc077314  jal         func_1DCC50
label_4b9b7c:
    if (ctx->pc == 0x4B9B7Cu) {
        ctx->pc = 0x4B9B7Cu;
            // 0x4b9b7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4B9B80u;
        goto label_4b9b80;
    }
    ctx->pc = 0x4B9B78u;
    SET_GPR_U32(ctx, 31, 0x4B9B80u);
    ctx->pc = 0x4B9B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9B78u;
            // 0x4b9b7c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B80u; }
        if (ctx->pc != 0x4B9B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9B80u; }
        if (ctx->pc != 0x4B9B80u) { return; }
    }
    ctx->pc = 0x4B9B80u;
label_4b9b80:
    // 0x4b9b80: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4b9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4b9b84:
    // 0x4b9b84: 0x8e0700c8  lw          $a3, 0xC8($s0)
    ctx->pc = 0x4b9b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_4b9b88:
    // 0x4b9b88: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4b9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4b9b8c:
    // 0x4b9b8c: 0x260400d0  addiu       $a0, $s0, 0xD0
    ctx->pc = 0x4b9b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 208));
label_4b9b90:
    // 0x4b9b90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4b9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4b9b94:
    // 0x4b9b94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b9b94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9b98:
    // 0x4b9b98: 0x90480000  lbu         $t0, 0x0($v0)
    ctx->pc = 0x4b9b98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_4b9b9c:
    // 0x4b9b9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4b9b9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4b9ba0:
    // 0x4b9ba0: 0x24630d40  addiu       $v1, $v1, 0xD40
    ctx->pc = 0x4b9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3392));
label_4b9ba4:
    // 0x4b9ba4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4b9ba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4b9ba8:
    // 0x4b9ba8: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x4b9ba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_4b9bac:
    // 0x4b9bac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b9bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9bb0:
    // 0x4b9bb0: 0x24420d80  addiu       $v0, $v0, 0xD80
    ctx->pc = 0x4b9bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3456));
label_4b9bb4:
    // 0x4b9bb4: 0xae0700c8  sw          $a3, 0xC8($s0)
    ctx->pc = 0x4b9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 7));
label_4b9bb8:
    // 0x4b9bb8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4b9bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4b9bbc:
    // 0x4b9bbc: 0xc04a576  jal         func_1295D8
label_4b9bc0:
    if (ctx->pc == 0x4B9BC0u) {
        ctx->pc = 0x4B9BC0u;
            // 0x4b9bc0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4B9BC4u;
        goto label_4b9bc4;
    }
    ctx->pc = 0x4B9BBCu;
    SET_GPR_U32(ctx, 31, 0x4B9BC4u);
    ctx->pc = 0x4B9BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9BBCu;
            // 0x4b9bc0: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9BC4u; }
        if (ctx->pc != 0x4B9BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9BC4u; }
        if (ctx->pc != 0x4B9BC4u) { return; }
    }
    ctx->pc = 0x4B9BC4u;
label_4b9bc4:
    // 0x4b9bc4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4b9bc4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4b9bc8:
    // 0x4b9bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4b9bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4b9bcc:
    // 0x4b9bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b9bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9bd0:
    // 0x4b9bd0: 0x3e00008  jr          $ra
label_4b9bd4:
    if (ctx->pc == 0x4B9BD4u) {
        ctx->pc = 0x4B9BD4u;
            // 0x4b9bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4B9BD8u;
        goto label_4b9bd8;
    }
    ctx->pc = 0x4B9BD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9BD0u;
            // 0x4b9bd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9BD8u;
label_4b9bd8:
    // 0x4b9bd8: 0x0  nop
    ctx->pc = 0x4b9bd8u;
    // NOP
label_4b9bdc:
    // 0x4b9bdc: 0x0  nop
    ctx->pc = 0x4b9bdcu;
    // NOP
label_4b9be0:
    // 0x4b9be0: 0x812e684  j           func_4B9A10
label_4b9be4:
    if (ctx->pc == 0x4B9BE4u) {
        ctx->pc = 0x4B9BE4u;
            // 0x4b9be4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x4B9BE8u;
        goto label_4b9be8;
    }
    ctx->pc = 0x4B9BE0u;
    ctx->pc = 0x4B9BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9BE0u;
            // 0x4b9be4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4B9A10u;
    if (runtime->hasFunction(0x4B9A10u)) {
        auto targetFn = runtime->lookupFunction(0x4B9A10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_004B9A10_0x4b9a10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x4B9BE8u;
label_4b9be8:
    // 0x4b9be8: 0x0  nop
    ctx->pc = 0x4b9be8u;
    // NOP
label_4b9bec:
    // 0x4b9bec: 0x0  nop
    ctx->pc = 0x4b9becu;
    // NOP
label_4b9bf0:
    // 0x4b9bf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4b9bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4b9bf4:
    // 0x4b9bf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4b9bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4b9bf8:
    // 0x4b9bf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4b9bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4b9bfc:
    // 0x4b9bfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4b9bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4b9c00:
    // 0x4b9c00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4b9c00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c04:
    // 0x4b9c04: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_4b9c08:
    if (ctx->pc == 0x4B9C08u) {
        ctx->pc = 0x4B9C08u;
            // 0x4b9c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C0Cu;
        goto label_4b9c0c;
    }
    ctx->pc = 0x4B9C04u;
    {
        const bool branch_taken_0x4b9c04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9C04u;
            // 0x4b9c08: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9c04) {
            ctx->pc = 0x4B9C38u;
            goto label_4b9c38;
        }
    }
    ctx->pc = 0x4B9C0Cu;
label_4b9c0c:
    // 0x4b9c0c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4b9c10:
    // 0x4b9c10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b9c10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c14:
    // 0x4b9c14: 0x24420de0  addiu       $v0, $v0, 0xDE0
    ctx->pc = 0x4b9c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3552));
label_4b9c18:
    // 0x4b9c18: 0xc0e9fc8  jal         func_3A7F20
label_4b9c1c:
    if (ctx->pc == 0x4B9C1Cu) {
        ctx->pc = 0x4B9C1Cu;
            // 0x4b9c1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x4B9C20u;
        goto label_4b9c20;
    }
    ctx->pc = 0x4B9C18u;
    SET_GPR_U32(ctx, 31, 0x4B9C20u);
    ctx->pc = 0x4B9C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9C18u;
            // 0x4b9c1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A7F20u;
    if (runtime->hasFunction(0x3A7F20u)) {
        auto targetFn = runtime->lookupFunction(0x3A7F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9C20u; }
        if (ctx->pc != 0x4B9C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A7F20_0x3a7f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9C20u; }
        if (ctx->pc != 0x4B9C20u) { return; }
    }
    ctx->pc = 0x4B9C20u;
label_4b9c20:
    // 0x4b9c20: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4b9c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4b9c24:
    // 0x4b9c24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4b9c24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4b9c28:
    // 0x4b9c28: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4b9c2c:
    if (ctx->pc == 0x4B9C2Cu) {
        ctx->pc = 0x4B9C2Cu;
            // 0x4b9c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C30u;
        goto label_4b9c30;
    }
    ctx->pc = 0x4B9C28u;
    {
        const bool branch_taken_0x4b9c28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4b9c28) {
            ctx->pc = 0x4B9C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9C28u;
            // 0x4b9c2c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9C3Cu;
            goto label_4b9c3c;
        }
    }
    ctx->pc = 0x4B9C30u;
label_4b9c30:
    // 0x4b9c30: 0xc0400a8  jal         func_1002A0
label_4b9c34:
    if (ctx->pc == 0x4B9C34u) {
        ctx->pc = 0x4B9C34u;
            // 0x4b9c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9C38u;
        goto label_4b9c38;
    }
    ctx->pc = 0x4B9C30u;
    SET_GPR_U32(ctx, 31, 0x4B9C38u);
    ctx->pc = 0x4B9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9C30u;
            // 0x4b9c34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9C38u; }
        if (ctx->pc != 0x4B9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9C38u; }
        if (ctx->pc != 0x4B9C38u) { return; }
    }
    ctx->pc = 0x4B9C38u;
label_4b9c38:
    // 0x4b9c38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4b9c38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c3c:
    // 0x4b9c3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4b9c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4b9c40:
    // 0x4b9c40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4b9c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4b9c44:
    // 0x4b9c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4b9c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4b9c48:
    // 0x4b9c48: 0x3e00008  jr          $ra
label_4b9c4c:
    if (ctx->pc == 0x4B9C4Cu) {
        ctx->pc = 0x4B9C4Cu;
            // 0x4b9c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4B9C50u;
        goto label_4b9c50;
    }
    ctx->pc = 0x4B9C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4B9C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9C48u;
            // 0x4b9c4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4B9C50u;
label_4b9c50:
    // 0x4b9c50: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x4b9c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_4b9c54:
    // 0x4b9c54: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b9c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b9c58:
    // 0x4b9c58: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4b9c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4b9c5c:
    // 0x4b9c5c: 0x24426b70  addiu       $v0, $v0, 0x6B70
    ctx->pc = 0x4b9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27504));
label_4b9c60:
    // 0x4b9c60: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4b9c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4b9c64:
    // 0x4b9c64: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4b9c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4b9c68:
    // 0x4b9c68: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4b9c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4b9c6c:
    // 0x4b9c6c: 0x30de00ff  andi        $fp, $a2, 0xFF
    ctx->pc = 0x4b9c6cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_4b9c70:
    // 0x4b9c70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4b9c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4b9c74:
    // 0x4b9c74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4b9c74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4b9c78:
    // 0x4b9c78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4b9c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4b9c7c:
    // 0x4b9c7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x4b9c7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c80:
    // 0x4b9c80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4b9c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4b9c84:
    // 0x4b9c84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x4b9c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c88:
    // 0x4b9c88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4b9c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4b9c8c:
    // 0x4b9c8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4b9c8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9c90:
    // 0x4b9c90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4b9c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4b9c94:
    // 0x4b9c94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4b9c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4b9c98:
    // 0x4b9c98: 0x3c110066  lui         $s1, 0x66
    ctx->pc = 0x4b9c98u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)102 << 16));
label_4b9c9c:
    // 0x4b9c9c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x4b9c9cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_4b9ca0:
    // 0x4b9ca0: 0x7fa20110  sq          $v0, 0x110($sp)
    ctx->pc = 0x4b9ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 2));
label_4b9ca4:
    // 0x4b9ca4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x4b9ca4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_4b9ca8:
    // 0x4b9ca8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b9ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b9cac:
    // 0x4b9cac: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4b9cacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4b9cb0:
    // 0x4b9cb0: 0x26316b60  addiu       $s1, $s1, 0x6B60
    ctx->pc = 0x4b9cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27488));
label_4b9cb4:
    // 0x4b9cb4: 0x8c440e80  lw          $a0, 0xE80($v0)
    ctx->pc = 0x4b9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4b9cb8:
    // 0x4b9cb8: 0x3c31025  or          $v0, $fp, $v1
    ctx->pc = 0x4b9cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
label_4b9cbc:
    // 0x4b9cbc: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x4b9cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
label_4b9cc0:
    // 0x4b9cc0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4b9cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4b9cc4:
    // 0x4b9cc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4b9cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4b9cc8:
    // 0x4b9cc8: 0x8c5789e0  lw          $s7, -0x7620($v0)
    ctx->pc = 0x4b9cc8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_4b9ccc:
    // 0x4b9ccc: 0x8c820968  lw          $v0, 0x968($a0)
    ctx->pc = 0x4b9cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2408)));
label_4b9cd0:
    // 0x4b9cd0: 0x8c647c30  lw          $a0, 0x7C30($v1)
    ctx->pc = 0x4b9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 31792)));
label_4b9cd4:
    // 0x4b9cd4: 0xc0506ac  jal         func_141AB0
label_4b9cd8:
    if (ctx->pc == 0x4B9CD8u) {
        ctx->pc = 0x4B9CD8u;
            // 0x4b9cd8: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->pc = 0x4B9CDCu;
        goto label_4b9cdc;
    }
    ctx->pc = 0x4B9CD4u;
    SET_GPR_U32(ctx, 31, 0x4B9CDCu);
    ctx->pc = 0x4B9CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9CD4u;
            // 0x4b9cd8: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9CDCu; }
        if (ctx->pc != 0x4B9CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9CDCu; }
        if (ctx->pc != 0x4B9CDCu) { return; }
    }
    ctx->pc = 0x4B9CDCu;
label_4b9cdc:
    // 0x4b9cdc: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4b9cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4b9ce0:
    // 0x4b9ce0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x4b9ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4b9ce4:
    // 0x4b9ce4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4b9ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4b9ce8:
    // 0x4b9ce8: 0x320f809  jalr        $t9
label_4b9cec:
    if (ctx->pc == 0x4B9CECu) {
        ctx->pc = 0x4B9CECu;
            // 0x4b9cec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4B9CF0u;
        goto label_4b9cf0;
    }
    ctx->pc = 0x4B9CE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9CF0u);
        ctx->pc = 0x4B9CECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9CE8u;
            // 0x4b9cec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9CF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9CF0u; }
            if (ctx->pc != 0x4B9CF0u) { return; }
        }
        }
    }
    ctx->pc = 0x4B9CF0u;
label_4b9cf0:
    // 0x4b9cf0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b9cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b9cf4:
    // 0x4b9cf4: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x4b9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_4b9cf8:
    // 0x4b9cf8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_4b9cfc:
    if (ctx->pc == 0x4B9CFCu) {
        ctx->pc = 0x4B9D00u;
        goto label_4b9d00;
    }
    ctx->pc = 0x4B9CF8u;
    {
        const bool branch_taken_0x4b9cf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9cf8) {
            ctx->pc = 0x4B9E20u;
            goto label_4b9e20;
        }
    }
    ctx->pc = 0x4B9D00u;
label_4b9d00:
    // 0x4b9d00: 0x8c560070  lw          $s6, 0x70($v0)
    ctx->pc = 0x4b9d00u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4b9d04:
    // 0x4b9d04: 0x12c00046  beqz        $s6, . + 4 + (0x46 << 2)
label_4b9d08:
    if (ctx->pc == 0x4B9D08u) {
        ctx->pc = 0x4B9D08u;
            // 0x4b9d08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9D0Cu;
        goto label_4b9d0c;
    }
    ctx->pc = 0x4B9D04u;
    {
        const bool branch_taken_0x4b9d04 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9D04u;
            // 0x4b9d08: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9d04) {
            ctx->pc = 0x4B9E20u;
            goto label_4b9e20;
        }
    }
    ctx->pc = 0x4B9D0Cu;
label_4b9d0c:
    // 0x4b9d0c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x4b9d0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4b9d10:
    // 0x4b9d10: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x4b9d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9d14:
    // 0x4b9d14: 0x24530140  addiu       $s3, $v0, 0x140
    ctx->pc = 0x4b9d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
label_4b9d18:
    // 0x4b9d18: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x4b9d18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4b9d1c:
    // 0x4b9d1c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4b9d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b9d20:
    // 0x4b9d20: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b9d20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b9d24:
    // 0x4b9d24: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x4b9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
label_4b9d28:
    // 0x4b9d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b9d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b9d2c:
    // 0x4b9d2c: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x4b9d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_4b9d30:
    // 0x4b9d30: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b9d34:
    // 0x4b9d34: 0x8c420cd0  lw          $v0, 0xCD0($v0)
    ctx->pc = 0x4b9d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
label_4b9d38:
    // 0x4b9d38: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4b9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4b9d3c:
    // 0x4b9d3c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4b9d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4b9d40:
    // 0x4b9d40: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x4b9d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b9d44:
    // 0x4b9d44: 0x90620090  lbu         $v0, 0x90($v1)
    ctx->pc = 0x4b9d44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
label_4b9d48:
    // 0x4b9d48: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
label_4b9d4c:
    if (ctx->pc == 0x4B9D4Cu) {
        ctx->pc = 0x4B9D50u;
        goto label_4b9d50;
    }
    ctx->pc = 0x4B9D48u;
    {
        const bool branch_taken_0x4b9d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9d48) {
            ctx->pc = 0x4B9E10u;
            goto label_4b9e10;
        }
    }
    ctx->pc = 0x4B9D50u;
label_4b9d50:
    // 0x4b9d50: 0x24650010  addiu       $a1, $v1, 0x10
    ctx->pc = 0x4b9d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4b9d54:
    // 0x4b9d54: 0xc04cc04  jal         func_133010
label_4b9d58:
    if (ctx->pc == 0x4B9D58u) {
        ctx->pc = 0x4B9D58u;
            // 0x4b9d58: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4B9D5Cu;
        goto label_4b9d5c;
    }
    ctx->pc = 0x4B9D54u;
    SET_GPR_U32(ctx, 31, 0x4B9D5Cu);
    ctx->pc = 0x4B9D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9D54u;
            // 0x4b9d58: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9D5Cu; }
        if (ctx->pc != 0x4B9D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9D5Cu; }
        if (ctx->pc != 0x4B9D5Cu) { return; }
    }
    ctx->pc = 0x4B9D5Cu;
label_4b9d5c:
    // 0x4b9d5c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x4b9d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_4b9d60:
    // 0x4b9d60: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b9d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b9d64:
    // 0x4b9d64: 0x27a501dc  addiu       $a1, $sp, 0x1DC
    ctx->pc = 0x4b9d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_4b9d68:
    // 0x4b9d68: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4b9d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b9d6c:
    // 0x4b9d6c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4b9d6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b9d70:
    // 0x4b9d70: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4b9d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b9d74:
    // 0x4b9d74: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x4b9d74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_4b9d78:
    // 0x4b9d78: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4b9d78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4b9d7c:
    // 0x4b9d7c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4b9d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4b9d80:
    // 0x4b9d80: 0x320f809  jalr        $t9
label_4b9d84:
    if (ctx->pc == 0x4B9D84u) {
        ctx->pc = 0x4B9D84u;
            // 0x4b9d84: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4B9D88u;
        goto label_4b9d88;
    }
    ctx->pc = 0x4B9D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9D88u);
        ctx->pc = 0x4B9D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9D80u;
            // 0x4b9d84: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9D88u; }
            if (ctx->pc != 0x4B9D88u) { return; }
        }
        }
    }
    ctx->pc = 0x4B9D88u;
label_4b9d88:
    // 0x4b9d88: 0xc6620008  lwc1        $f2, 0x8($s3)
    ctx->pc = 0x4b9d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4b9d8c:
    // 0x4b9d8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4b9d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4b9d90:
    // 0x4b9d90: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4b9d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4b9d94:
    // 0x4b9d94: 0x87a301de  lh          $v1, 0x1DE($sp)
    ctx->pc = 0x4b9d94u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 478)));
label_4b9d98:
    // 0x4b9d98: 0x87a201dc  lh          $v0, 0x1DC($sp)
    ctx->pc = 0x4b9d98u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 476)));
label_4b9d9c:
    // 0x4b9d9c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4b9d9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4b9da0:
    // 0x4b9da0: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x4b9da0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_4b9da4:
    // 0x4b9da4: 0x86280000  lh          $t0, 0x0($s1)
    ctx->pc = 0x4b9da4u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4b9da8:
    // 0x4b9da8: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x4b9da8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_4b9dac:
    // 0x4b9dac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x4b9dacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4b9db0:
    // 0x4b9db0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4b9db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9db4:
    // 0x4b9db4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4b9db4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b9db8:
    // 0x4b9db8: 0x0  nop
    ctx->pc = 0x4b9db8u;
    // NOP
label_4b9dbc:
    // 0x4b9dbc: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4b9dbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4b9dc0:
    // 0x4b9dc0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b9dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b9dc4:
    // 0x4b9dc4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b9dc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9dc8:
    // 0x4b9dc8: 0x0  nop
    ctx->pc = 0x4b9dc8u;
    // NOP
label_4b9dcc:
    // 0x4b9dcc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4b9dccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4b9dd0:
    // 0x4b9dd0: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x4b9dd0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4b9dd4:
    // 0x4b9dd4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4b9dd4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9dd8:
    // 0x4b9dd8: 0x0  nop
    ctx->pc = 0x4b9dd8u;
    // NOP
label_4b9ddc:
    // 0x4b9ddc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4b9ddcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4b9de0:
    // 0x4b9de0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b9de0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9de4:
    // 0x4b9de4: 0x0  nop
    ctx->pc = 0x4b9de4u;
    // NOP
label_4b9de8:
    // 0x4b9de8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4b9de8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4b9dec:
    // 0x4b9dec: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x4b9decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b9df0:
    // 0x4b9df0: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x4b9df0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_4b9df4:
    // 0x4b9df4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4b9df4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4b9df8:
    // 0x4b9df8: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x4b9df8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4b9dfc:
    // 0x4b9dfc: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x4b9dfcu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4b9e00:
    // 0x4b9e00: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4b9e00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4b9e04:
    // 0x4b9e04: 0xc0bc284  jal         func_2F0A10
label_4b9e08:
    if (ctx->pc == 0x4B9E08u) {
        ctx->pc = 0x4B9E08u;
            // 0x4b9e08: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4B9E0Cu;
        goto label_4b9e0c;
    }
    ctx->pc = 0x4B9E04u;
    SET_GPR_U32(ctx, 31, 0x4B9E0Cu);
    ctx->pc = 0x4B9E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9E04u;
            // 0x4b9e08: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9E0Cu; }
        if (ctx->pc != 0x4B9E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9E0Cu; }
        if (ctx->pc != 0x4B9E0Cu) { return; }
    }
    ctx->pc = 0x4B9E0Cu;
label_4b9e0c:
    // 0x4b9e0c: 0x0  nop
    ctx->pc = 0x4b9e0cu;
    // NOP
label_4b9e10:
    // 0x4b9e10: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4b9e10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4b9e14:
    // 0x4b9e14: 0x256102b  sltu        $v0, $s2, $s6
    ctx->pc = 0x4b9e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
label_4b9e18:
    // 0x4b9e18: 0x1440ffc5  bnez        $v0, . + 4 + (-0x3B << 2)
label_4b9e1c:
    if (ctx->pc == 0x4B9E1Cu) {
        ctx->pc = 0x4B9E1Cu;
            // 0x4b9e1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x4B9E20u;
        goto label_4b9e20;
    }
    ctx->pc = 0x4B9E18u;
    {
        const bool branch_taken_0x4b9e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4B9E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9E18u;
            // 0x4b9e1c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9e18) {
            ctx->pc = 0x4B9D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9d30;
        }
    }
    ctx->pc = 0x4B9E20u;
label_4b9e20:
    // 0x4b9e20: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b9e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b9e24:
    // 0x4b9e24: 0x8c427330  lw          $v0, 0x7330($v0)
    ctx->pc = 0x4b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29488)));
label_4b9e28:
    // 0x4b9e28: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_4b9e2c:
    if (ctx->pc == 0x4B9E2Cu) {
        ctx->pc = 0x4B9E30u;
        goto label_4b9e30;
    }
    ctx->pc = 0x4B9E28u;
    {
        const bool branch_taken_0x4b9e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9e28) {
            ctx->pc = 0x4BA1C0u;
            goto label_4ba1c0;
        }
    }
    ctx->pc = 0x4B9E30u;
label_4b9e30:
    // 0x4b9e30: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x4b9e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4b9e34:
    // 0x4b9e34: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4b9e34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9e38:
    // 0x4b9e38: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_4b9e3c:
    if (ctx->pc == 0x4B9E3Cu) {
        ctx->pc = 0x4B9E3Cu;
            // 0x4b9e3c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->pc = 0x4B9E40u;
        goto label_4b9e40;
    }
    ctx->pc = 0x4B9E38u;
    {
        const bool branch_taken_0x4b9e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9E38u;
            // 0x4b9e3c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9e38) {
            ctx->pc = 0x4BA1C0u;
            goto label_4ba1c0;
        }
    }
    ctx->pc = 0x4B9E40u;
label_4b9e40:
    // 0x4b9e40: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x4b9e40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4b9e44:
    // 0x4b9e44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4b9e44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9e48:
    // 0x4b9e48: 0x24520170  addiu       $s2, $v0, 0x170
    ctx->pc = 0x4b9e48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_4b9e4c:
    // 0x4b9e4c: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x4b9e4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4b9e50:
    // 0x4b9e50: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4b9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4b9e54:
    // 0x4b9e54: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4b9e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4b9e58:
    // 0x4b9e58: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x4b9e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
label_4b9e5c:
    // 0x4b9e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4b9e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4b9e60:
    // 0x4b9e60: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x4b9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_4b9e64:
    // 0x4b9e64: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4b9e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4b9e68:
    // 0x4b9e68: 0x8c427330  lw          $v0, 0x7330($v0)
    ctx->pc = 0x4b9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29488)));
label_4b9e6c:
    // 0x4b9e6c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4b9e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4b9e70:
    // 0x4b9e70: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4b9e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4b9e74:
    // 0x4b9e74: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4b9e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4b9e78:
    // 0x4b9e78: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x4b9e78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_4b9e7c:
    // 0x4b9e7c: 0x104000ca  beqz        $v0, . + 4 + (0xCA << 2)
label_4b9e80:
    if (ctx->pc == 0x4B9E80u) {
        ctx->pc = 0x4B9E84u;
        goto label_4b9e84;
    }
    ctx->pc = 0x4B9E7Cu;
    {
        const bool branch_taken_0x4b9e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4b9e7c) {
            ctx->pc = 0x4BA1A8u;
            goto label_4ba1a8;
        }
    }
    ctx->pc = 0x4B9E84u;
label_4b9e84:
    // 0x4b9e84: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4b9e84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4b9e88:
    // 0x4b9e88: 0xc04cc04  jal         func_133010
label_4b9e8c:
    if (ctx->pc == 0x4B9E8Cu) {
        ctx->pc = 0x4B9E8Cu;
            // 0x4b9e8c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4B9E90u;
        goto label_4b9e90;
    }
    ctx->pc = 0x4B9E88u;
    SET_GPR_U32(ctx, 31, 0x4B9E90u);
    ctx->pc = 0x4B9E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9E88u;
            // 0x4b9e8c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9E90u; }
        if (ctx->pc != 0x4B9E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9E90u; }
        if (ctx->pc != 0x4B9E90u) { return; }
    }
    ctx->pc = 0x4B9E90u;
label_4b9e90:
    // 0x4b9e90: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x4b9e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_4b9e94:
    // 0x4b9e94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4b9e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4b9e98:
    // 0x4b9e98: 0x27a501dc  addiu       $a1, $sp, 0x1DC
    ctx->pc = 0x4b9e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_4b9e9c:
    // 0x4b9e9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4b9e9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4b9ea0:
    // 0x4b9ea0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4b9ea0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4b9ea4:
    // 0x4b9ea4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4b9ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4b9ea8:
    // 0x4b9ea8: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x4b9ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_4b9eac:
    // 0x4b9eac: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4b9eacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4b9eb0:
    // 0x4b9eb0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4b9eb0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4b9eb4:
    // 0x4b9eb4: 0x320f809  jalr        $t9
label_4b9eb8:
    if (ctx->pc == 0x4B9EB8u) {
        ctx->pc = 0x4B9EB8u;
            // 0x4b9eb8: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4B9EBCu;
        goto label_4b9ebc;
    }
    ctx->pc = 0x4B9EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4B9EBCu);
        ctx->pc = 0x4B9EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9EB4u;
            // 0x4b9eb8: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4B9EBCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EBCu; }
            if (ctx->pc != 0x4B9EBCu) { return; }
        }
        }
    }
    ctx->pc = 0x4B9EBCu;
label_4b9ebc:
    // 0x4b9ebc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x4b9ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4b9ec0:
    // 0x4b9ec0: 0xc04f278  jal         func_13C9E0
label_4b9ec4:
    if (ctx->pc == 0x4B9EC4u) {
        ctx->pc = 0x4B9EC4u;
            // 0x4b9ec4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x4B9EC8u;
        goto label_4b9ec8;
    }
    ctx->pc = 0x4B9EC0u;
    SET_GPR_U32(ctx, 31, 0x4B9EC8u);
    ctx->pc = 0x4B9EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9EC0u;
            // 0x4b9ec4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EC8u; }
        if (ctx->pc != 0x4B9EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EC8u; }
        if (ctx->pc != 0x4B9EC8u) { return; }
    }
    ctx->pc = 0x4B9EC8u;
label_4b9ec8:
    // 0x4b9ec8: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4b9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4b9ecc:
    // 0x4b9ecc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4b9eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4b9ed0:
    // 0x4b9ed0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x4b9ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4b9ed4:
    // 0x4b9ed4: 0xc04cca0  jal         func_133280
label_4b9ed8:
    if (ctx->pc == 0x4B9ED8u) {
        ctx->pc = 0x4B9ED8u;
            // 0x4b9ed8: 0x24c66db0  addiu       $a2, $a2, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28080));
        ctx->pc = 0x4B9EDCu;
        goto label_4b9edc;
    }
    ctx->pc = 0x4B9ED4u;
    SET_GPR_U32(ctx, 31, 0x4B9EDCu);
    ctx->pc = 0x4B9ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9ED4u;
            // 0x4b9ed8: 0x24c66db0  addiu       $a2, $a2, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EDCu; }
        if (ctx->pc != 0x4B9EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EDCu; }
        if (ctx->pc != 0x4B9EDCu) { return; }
    }
    ctx->pc = 0x4B9EDCu;
label_4b9edc:
    // 0x4b9edc: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b9edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b9ee0:
    // 0x4b9ee0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4b9ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4b9ee4:
    // 0x4b9ee4: 0xc04cc08  jal         func_133020
label_4b9ee8:
    if (ctx->pc == 0x4B9EE8u) {
        ctx->pc = 0x4B9EE8u;
            // 0x4b9ee8: 0x24a56dc0  addiu       $a1, $a1, 0x6DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28096));
        ctx->pc = 0x4B9EECu;
        goto label_4b9eec;
    }
    ctx->pc = 0x4B9EE4u;
    SET_GPR_U32(ctx, 31, 0x4B9EECu);
    ctx->pc = 0x4B9EE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9EE4u;
            // 0x4b9ee8: 0x24a56dc0  addiu       $a1, $a1, 0x6DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EECu; }
        if (ctx->pc != 0x4B9EECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9EECu; }
        if (ctx->pc != 0x4B9EECu) { return; }
    }
    ctx->pc = 0x4B9EECu;
label_4b9eec:
    // 0x4b9eec: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4b9eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b9ef0:
    // 0x4b9ef0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4b9ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b9ef4:
    // 0x4b9ef4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x4b9ef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b9ef8:
    // 0x4b9ef8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4b9efc:
    if (ctx->pc == 0x4B9EFCu) {
        ctx->pc = 0x4B9EFCu;
            // 0x4b9efc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x4B9F00u;
        goto label_4b9f00;
    }
    ctx->pc = 0x4B9EF8u;
    {
        const bool branch_taken_0x4b9ef8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4B9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9EF8u;
            // 0x4b9efc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9ef8) {
            ctx->pc = 0x4B9F04u;
            goto label_4b9f04;
        }
    }
    ctx->pc = 0x4B9F00u;
label_4b9f00:
    // 0x4b9f00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4b9f00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9f04:
    // 0x4b9f04: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4b9f08:
    if (ctx->pc == 0x4B9F08u) {
        ctx->pc = 0x4B9F08u;
            // 0x4b9f08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4B9F0Cu;
        goto label_4b9f0c;
    }
    ctx->pc = 0x4B9F04u;
    {
        const bool branch_taken_0x4b9f04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4b9f04) {
            ctx->pc = 0x4B9F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9F04u;
            // 0x4b9f08: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4B9F18u;
            goto label_4b9f18;
        }
    }
    ctx->pc = 0x4B9F0Cu;
label_4b9f0c:
    // 0x4b9f0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b9f0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f10:
    // 0x4b9f10: 0x10000007  b           . + 4 + (0x7 << 2)
label_4b9f14:
    if (ctx->pc == 0x4B9F14u) {
        ctx->pc = 0x4B9F14u;
            // 0x4b9f14: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B9F18u;
        goto label_4b9f18;
    }
    ctx->pc = 0x4B9F10u;
    {
        const bool branch_taken_0x4b9f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4B9F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9F10u;
            // 0x4b9f14: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4b9f10) {
            ctx->pc = 0x4B9F30u;
            goto label_4b9f30;
        }
    }
    ctx->pc = 0x4B9F18u;
label_4b9f18:
    // 0x4b9f18: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4b9f18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4b9f1c:
    // 0x4b9f1c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4b9f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4b9f20:
    // 0x4b9f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b9f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f24:
    // 0x4b9f24: 0x0  nop
    ctx->pc = 0x4b9f24u;
    // NOP
label_4b9f28:
    // 0x4b9f28: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4b9f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4b9f2c:
    // 0x4b9f2c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4b9f2cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_4b9f30:
    // 0x4b9f30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b9f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4b9f34:
    // 0x4b9f34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x4b9f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_4b9f38:
    // 0x4b9f38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b9f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f3c:
    // 0x4b9f3c: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4b9f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4b9f40:
    // 0x4b9f40: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x4b9f40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_4b9f44:
    // 0x4b9f44: 0x87a201de  lh          $v0, 0x1DE($sp)
    ctx->pc = 0x4b9f44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 478)));
label_4b9f48:
    // 0x4b9f48: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4b9f48u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4b9f4c:
    // 0x4b9f4c: 0x0  nop
    ctx->pc = 0x4b9f4cu;
    // NOP
label_4b9f50:
    // 0x4b9f50: 0x46007018  adda.s      $f14, $f0
    ctx->pc = 0x4b9f50u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[0]);
label_4b9f54:
    // 0x4b9f54: 0x87a301dc  lh          $v1, 0x1DC($sp)
    ctx->pc = 0x4b9f54u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 476)));
label_4b9f58:
    // 0x4b9f58: 0x4602081d  msub.s      $f0, $f1, $f2
    ctx->pc = 0x4b9f58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_4b9f5c:
    // 0x4b9f5c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x4b9f5cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_4b9f60:
    // 0x4b9f60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4b9f60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f64:
    // 0x4b9f64: 0x0  nop
    ctx->pc = 0x4b9f64u;
    // NOP
label_4b9f68:
    // 0x4b9f68: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x4b9f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_4b9f6c:
    // 0x4b9f6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b9f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f70:
    // 0x4b9f70: 0xc04f3fc  jal         func_13CFF0
label_4b9f74:
    if (ctx->pc == 0x4B9F74u) {
        ctx->pc = 0x4B9F74u;
            // 0x4b9f74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4B9F78u;
        goto label_4b9f78;
    }
    ctx->pc = 0x4B9F70u;
    SET_GPR_U32(ctx, 31, 0x4B9F78u);
    ctx->pc = 0x4B9F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9F70u;
            // 0x4b9f74: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CFF0u;
    if (runtime->hasFunction(0x13CFF0u)) {
        auto targetFn = runtime->lookupFunction(0x13CFF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9F78u; }
        if (ctx->pc != 0x4B9F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CFF0_0x13cff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9F78u; }
        if (ctx->pc != 0x4B9F78u) { return; }
    }
    ctx->pc = 0x4B9F78u;
label_4b9f78:
    // 0x4b9f78: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x4b9f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_4b9f7c:
    // 0x4b9f7c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4b9f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4b9f80:
    // 0x4b9f80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b9f80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9f84:
    // 0x4b9f84: 0x0  nop
    ctx->pc = 0x4b9f84u;
    // NOP
label_4b9f88:
    // 0x4b9f88: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x4b9f88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b9f8c:
    // 0x4b9f8c: 0x45000058  bc1f        . + 4 + (0x58 << 2)
label_4b9f90:
    if (ctx->pc == 0x4B9F90u) {
        ctx->pc = 0x4B9F94u;
        goto label_4b9f94;
    }
    ctx->pc = 0x4B9F8Cu;
    {
        const bool branch_taken_0x4b9f8c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b9f8c) {
            ctx->pc = 0x4BA0F0u;
            goto label_4ba0f0;
        }
    }
    ctx->pc = 0x4B9F94u;
label_4b9f94:
    // 0x4b9f94: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4b9f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4b9f98:
    // 0x4b9f98: 0xafa00174  sw          $zero, 0x174($sp)
    ctx->pc = 0x4b9f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 0));
label_4b9f9c:
    // 0x4b9f9c: 0xc04cc44  jal         func_133110
label_4b9fa0:
    if (ctx->pc == 0x4B9FA0u) {
        ctx->pc = 0x4B9FA0u;
            // 0x4b9fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4B9FA4u;
        goto label_4b9fa4;
    }
    ctx->pc = 0x4B9F9Cu;
    SET_GPR_U32(ctx, 31, 0x4B9FA4u);
    ctx->pc = 0x4B9FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9F9Cu;
            // 0x4b9fa0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FA4u; }
        if (ctx->pc != 0x4B9FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FA4u; }
        if (ctx->pc != 0x4B9FA4u) { return; }
    }
    ctx->pc = 0x4B9FA4u;
label_4b9fa4:
    // 0x4b9fa4: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4b9fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4b9fa8:
    // 0x4b9fa8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x4b9fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_4b9fac:
    // 0x4b9fac: 0xc04cc08  jal         func_133020
label_4b9fb0:
    if (ctx->pc == 0x4B9FB0u) {
        ctx->pc = 0x4B9FB0u;
            // 0x4b9fb0: 0x24a56db0  addiu       $a1, $a1, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28080));
        ctx->pc = 0x4B9FB4u;
        goto label_4b9fb4;
    }
    ctx->pc = 0x4B9FACu;
    SET_GPR_U32(ctx, 31, 0x4B9FB4u);
    ctx->pc = 0x4B9FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9FACu;
            // 0x4b9fb0: 0x24a56db0  addiu       $a1, $a1, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FB4u; }
        if (ctx->pc != 0x4B9FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FB4u; }
        if (ctx->pc != 0x4B9FB4u) { return; }
    }
    ctx->pc = 0x4B9FB4u;
label_4b9fb4:
    // 0x4b9fb4: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x4b9fb4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_4b9fb8:
    // 0x4b9fb8: 0xc04cc14  jal         func_133050
label_4b9fbc:
    if (ctx->pc == 0x4B9FBCu) {
        ctx->pc = 0x4B9FBCu;
            // 0x4b9fbc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x4B9FC0u;
        goto label_4b9fc0;
    }
    ctx->pc = 0x4B9FB8u;
    SET_GPR_U32(ctx, 31, 0x4B9FC0u);
    ctx->pc = 0x4B9FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9FB8u;
            // 0x4b9fbc: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FC0u; }
        if (ctx->pc != 0x4B9FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FC0u; }
        if (ctx->pc != 0x4B9FC0u) { return; }
    }
    ctx->pc = 0x4B9FC0u;
label_4b9fc0:
    // 0x4b9fc0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4b9fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4b9fc4:
    // 0x4b9fc4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x4b9fc4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_4b9fc8:
    // 0x4b9fc8: 0xc04cc14  jal         func_133050
label_4b9fcc:
    if (ctx->pc == 0x4B9FCCu) {
        ctx->pc = 0x4B9FCCu;
            // 0x4b9fcc: 0x24846db0  addiu       $a0, $a0, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28080));
        ctx->pc = 0x4B9FD0u;
        goto label_4b9fd0;
    }
    ctx->pc = 0x4B9FC8u;
    SET_GPR_U32(ctx, 31, 0x4B9FD0u);
    ctx->pc = 0x4B9FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9FC8u;
            // 0x4b9fcc: 0x24846db0  addiu       $a0, $a0, 0x6DB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FD0u; }
        if (ctx->pc != 0x4B9FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4B9FD0u; }
        if (ctx->pc != 0x4B9FD0u) { return; }
    }
    ctx->pc = 0x4B9FD0u;
label_4b9fd0:
    // 0x4b9fd0: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x4b9fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_4b9fd4:
    // 0x4b9fd4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4b9fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4b9fd8:
    // 0x4b9fd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4b9fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4b9fdc:
    // 0x4b9fdc: 0x4600b043  div.s       $f1, $f22, $f0
    ctx->pc = 0x4b9fdcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[22] * 0.0f); } else ctx->f[1] = ctx->f[22] / ctx->f[0];
label_4b9fe0:
    // 0x4b9fe0: 0x0  nop
    ctx->pc = 0x4b9fe0u;
    // NOP
label_4b9fe4:
    // 0x4b9fe4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4b9fe4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4b9fe8:
    // 0x4b9fe8: 0x0  nop
    ctx->pc = 0x4b9fe8u;
    // NOP
label_4b9fec:
    // 0x4b9fec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4b9fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4b9ff0:
    // 0x4b9ff0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_4b9ff4:
    if (ctx->pc == 0x4B9FF4u) {
        ctx->pc = 0x4B9FF4u;
            // 0x4b9ff4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x4B9FF8u;
        goto label_4b9ff8;
    }
    ctx->pc = 0x4B9FF0u;
    {
        const bool branch_taken_0x4b9ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4b9ff0) {
            ctx->pc = 0x4B9FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4B9FF0u;
            // 0x4b9ff4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA000u;
            goto label_4ba000;
        }
    }
    ctx->pc = 0x4B9FF8u;
label_4b9ff8:
    // 0x4b9ff8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x4b9ff8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4b9ffc:
    // 0x4b9ffc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4b9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4ba000:
    // 0x4ba000: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x4ba000u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4ba004:
    // 0x4ba004: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ba004u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba008:
    // 0x4ba008: 0x0  nop
    ctx->pc = 0x4ba008u;
    // NOP
label_4ba00c:
    // 0x4ba00c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4ba00cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ba010:
    // 0x4ba010: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4ba014:
    if (ctx->pc == 0x4BA014u) {
        ctx->pc = 0x4BA014u;
            // 0x4ba014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BA018u;
        goto label_4ba018;
    }
    ctx->pc = 0x4BA010u;
    {
        const bool branch_taken_0x4ba010 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BA014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA010u;
            // 0x4ba014: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba010) {
            ctx->pc = 0x4BA01Cu;
            goto label_4ba01c;
        }
    }
    ctx->pc = 0x4BA018u;
label_4ba018:
    // 0x4ba018: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ba018u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba01c:
    // 0x4ba01c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4ba01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4ba020:
    // 0x4ba020: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x4ba020u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4ba024:
    // 0x4ba024: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x4ba024u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_4ba028:
    // 0x4ba028: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba028u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba02c:
    // 0x4ba02c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4ba02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4ba030:
    // 0x4ba030: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ba030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ba034:
    // 0x4ba034: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x4ba034u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ba038:
    // 0x4ba038: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4ba038u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba03c:
    // 0x4ba03c: 0x0  nop
    ctx->pc = 0x4ba03cu;
    // NOP
label_4ba040:
    // 0x4ba040: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ba040u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ba044:
    // 0x4ba044: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x4ba044u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ba048:
    // 0x4ba048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4ba048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba04c:
    // 0x4ba04c: 0x0  nop
    ctx->pc = 0x4ba04cu;
    // NOP
label_4ba050:
    // 0x4ba050: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ba050u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ba054:
    // 0x4ba054: 0xc0477fe  jal         func_11DFF8
label_4ba058:
    if (ctx->pc == 0x4BA058u) {
        ctx->pc = 0x4BA058u;
            // 0x4ba058: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x4BA05Cu;
        goto label_4ba05c;
    }
    ctx->pc = 0x4BA054u;
    SET_GPR_U32(ctx, 31, 0x4BA05Cu);
    ctx->pc = 0x4BA058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA054u;
            // 0x4ba058: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA05Cu; }
        if (ctx->pc != 0x4BA05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA05Cu; }
        if (ctx->pc != 0x4BA05Cu) { return; }
    }
    ctx->pc = 0x4BA05Cu;
label_4ba05c:
    // 0x4ba05c: 0xc7a20170  lwc1        $f2, 0x170($sp)
    ctx->pc = 0x4ba05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4ba060:
    // 0x4ba060: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x4ba060u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba064:
    // 0x4ba064: 0x0  nop
    ctx->pc = 0x4ba064u;
    // NOP
label_4ba068:
    // 0x4ba068: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x4ba068u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4ba06c:
    // 0x4ba06c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_4ba070:
    if (ctx->pc == 0x4BA070u) {
        ctx->pc = 0x4BA070u;
            // 0x4ba070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4BA074u;
        goto label_4ba074;
    }
    ctx->pc = 0x4BA06Cu;
    {
        const bool branch_taken_0x4ba06c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4BA070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA06Cu;
            // 0x4ba070: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba06c) {
            ctx->pc = 0x4BA078u;
            goto label_4ba078;
        }
    }
    ctx->pc = 0x4BA074u;
label_4ba074:
    // 0x4ba074: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4ba074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba078:
    // 0x4ba078: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_4ba07c:
    if (ctx->pc == 0x4BA07Cu) {
        ctx->pc = 0x4BA07Cu;
            // 0x4ba07c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x4BA080u;
        goto label_4ba080;
    }
    ctx->pc = 0x4BA078u;
    {
        const bool branch_taken_0x4ba078 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4ba078) {
            ctx->pc = 0x4BA07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA078u;
            // 0x4ba07c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4BA08Cu;
            goto label_4ba08c;
        }
    }
    ctx->pc = 0x4BA080u;
label_4ba080:
    // 0x4ba080: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ba080u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba084:
    // 0x4ba084: 0x10000007  b           . + 4 + (0x7 << 2)
label_4ba088:
    if (ctx->pc == 0x4BA088u) {
        ctx->pc = 0x4BA088u;
            // 0x4ba088: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4BA08Cu;
        goto label_4ba08c;
    }
    ctx->pc = 0x4BA084u;
    {
        const bool branch_taken_0x4ba084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA084u;
            // 0x4ba088: 0x46800960  cvt.s.w     $f5, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba084) {
            ctx->pc = 0x4BA0A4u;
            goto label_4ba0a4;
        }
    }
    ctx->pc = 0x4BA08Cu;
label_4ba08c:
    // 0x4ba08c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4ba08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4ba090:
    // 0x4ba090: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4ba090u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ba094:
    // 0x4ba094: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4ba094u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba098:
    // 0x4ba098: 0x0  nop
    ctx->pc = 0x4ba098u;
    // NOP
label_4ba09c:
    // 0x4ba09c: 0x46800960  cvt.s.w     $f5, $f1
    ctx->pc = 0x4ba09cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_4ba0a0:
    // 0x4ba0a0: 0x46052940  add.s       $f5, $f5, $f5
    ctx->pc = 0x4ba0a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
label_4ba0a4:
    // 0x4ba0a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4ba0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4ba0a8:
    // 0x4ba0a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x4ba0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_4ba0ac:
    // 0x4ba0ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4ba0acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ba0b0:
    // 0x4ba0b0: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x4ba0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4ba0b4:
    // 0x4ba0b4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4ba0b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ba0b8:
    // 0x4ba0b8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4ba0b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4ba0bc:
    // 0x4ba0bc: 0x46031018  adda.s      $f2, $f3
    ctx->pc = 0x4ba0bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4ba0c0:
    // 0x4ba0c0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x4ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_4ba0c4:
    // 0x4ba0c4: 0x4605209d  msub.s      $f2, $f4, $f5
    ctx->pc = 0x4ba0c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[5]));
label_4ba0c8:
    // 0x4ba0c8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x4ba0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_4ba0cc:
    // 0x4ba0cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x4ba0ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_4ba0d0:
    // 0x4ba0d0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4ba0d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba0d4:
    // 0x4ba0d4: 0x0  nop
    ctx->pc = 0x4ba0d4u;
    // NOP
label_4ba0d8:
    // 0x4ba0d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4ba0d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_4ba0dc:
    // 0x4ba0dc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4ba0dcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4ba0e0:
    // 0x4ba0e0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4ba0e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4ba0e4:
    // 0x4ba0e4: 0xc04cdf0  jal         func_1337C0
label_4ba0e8:
    if (ctx->pc == 0x4BA0E8u) {
        ctx->pc = 0x4BA0E8u;
            // 0x4ba0e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA0ECu;
        goto label_4ba0ec;
    }
    ctx->pc = 0x4BA0E4u;
    SET_GPR_U32(ctx, 31, 0x4BA0ECu);
    ctx->pc = 0x4BA0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA0E4u;
            // 0x4ba0e8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1337C0u;
    if (runtime->hasFunction(0x1337C0u)) {
        auto targetFn = runtime->lookupFunction(0x1337C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA0ECu; }
        if (ctx->pc != 0x4BA0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001337C0_0x1337c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA0ECu; }
        if (ctx->pc != 0x4BA0ECu) { return; }
    }
    ctx->pc = 0x4BA0ECu;
label_4ba0ec:
    // 0x4ba0ec: 0x0  nop
    ctx->pc = 0x4ba0ecu;
    // NOP
label_4ba0f0:
    // 0x4ba0f0: 0x3c043ecc  lui         $a0, 0x3ECC
    ctx->pc = 0x4ba0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16076 << 16));
label_4ba0f4:
    // 0x4ba0f4: 0x3485cccd  ori         $a1, $a0, 0xCCCD
    ctx->pc = 0x4ba0f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)52429);
label_4ba0f8:
    // 0x4ba0f8: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x4ba0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_4ba0fc:
    // 0x4ba0fc: 0x3464999a  ori         $a0, $v1, 0x999A
    ctx->pc = 0x4ba0fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_4ba100:
    // 0x4ba100: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x4ba100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4ba104:
    // 0x4ba104: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4ba104u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba108:
    // 0x4ba108: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4ba108u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4ba10c:
    // 0x4ba10c: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x4ba10cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba110:
    // 0x4ba110: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4ba110u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba114:
    // 0x4ba114: 0x0  nop
    ctx->pc = 0x4ba114u;
    // NOP
label_4ba118:
    // 0x4ba118: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4ba118u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4ba11c:
    // 0x4ba11c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ba11cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba120:
    // 0x4ba120: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x4ba120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_4ba124:
    // 0x4ba124: 0x27a70180  addiu       $a3, $sp, 0x180
    ctx->pc = 0x4ba124u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_4ba128:
    // 0x4ba128: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba128u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba12c:
    // 0x4ba12c: 0x0  nop
    ctx->pc = 0x4ba12cu;
    // NOP
label_4ba130:
    // 0x4ba130: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ba130u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ba134:
    // 0x4ba134: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ba134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ba138:
    // 0x4ba138: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ba138u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba13c:
    // 0x4ba13c: 0x0  nop
    ctx->pc = 0x4ba13cu;
    // NOP
label_4ba140:
    // 0x4ba140: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ba140u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ba144:
    // 0x4ba144: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4ba144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4ba148:
    // 0x4ba148: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x4ba148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ba14c:
    // 0x4ba14c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ba14cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ba150:
    // 0x4ba150: 0x24426d78  addiu       $v0, $v0, 0x6D78
    ctx->pc = 0x4ba150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28024));
label_4ba154:
    // 0x4ba154: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x4ba154u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4ba158:
    // 0x4ba158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ba158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ba15c:
    // 0x4ba15c: 0x46011382  mul.s       $f14, $f2, $f1
    ctx->pc = 0x4ba15cu;
    ctx->f[14] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_4ba160:
    // 0x4ba160: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x4ba160u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ba164:
    // 0x4ba164: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4ba164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ba168:
    // 0x4ba168: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ba16c:
    // 0x4ba16c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4ba16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4ba170:
    // 0x4ba170: 0x3c33025  or          $a2, $fp, $v1
    ctx->pc = 0x4ba170u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
label_4ba174:
    // 0x4ba174: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x4ba174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ba178:
    // 0x4ba178: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ba178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ba17c:
    // 0x4ba17c: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x4ba17cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4ba180:
    // 0x4ba180: 0x461418dc  madd.s      $f3, $f3, $f20
    ctx->pc = 0x4ba180u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_4ba184:
    // 0x4ba184: 0x46001042  mul.s       $f1, $f2, $f0
    ctx->pc = 0x4ba184u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_4ba188:
    // 0x4ba188: 0x24520120  addiu       $s2, $v0, 0x120
    ctx->pc = 0x4ba188u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
label_4ba18c:
    // 0x4ba18c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ba18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ba190:
    // 0x4ba190: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x4ba190u;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
label_4ba194:
    // 0x4ba194: 0x46030342  mul.s       $f13, $f0, $f3
    ctx->pc = 0x4ba194u;
    ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_4ba198:
    // 0x4ba198: 0x46030bc2  mul.s       $f15, $f1, $f3
    ctx->pc = 0x4ba198u;
    ctx->f[15] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_4ba19c:
    // 0x4ba19c: 0xc0bc284  jal         func_2F0A10
label_4ba1a0:
    if (ctx->pc == 0x4BA1A0u) {
        ctx->pc = 0x4BA1A0u;
            // 0x4ba1a0: 0x46007307  neg.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[14]);
        ctx->pc = 0x4BA1A4u;
        goto label_4ba1a4;
    }
    ctx->pc = 0x4BA19Cu;
    SET_GPR_U32(ctx, 31, 0x4BA1A4u);
    ctx->pc = 0x4BA1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA19Cu;
            // 0x4ba1a0: 0x46007307  neg.s       $f12, $f14 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA1A4u; }
        if (ctx->pc != 0x4BA1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA1A4u; }
        if (ctx->pc != 0x4BA1A4u) { return; }
    }
    ctx->pc = 0x4BA1A4u;
label_4ba1a4:
    // 0x4ba1a4: 0x0  nop
    ctx->pc = 0x4ba1a4u;
    // NOP
label_4ba1a8:
    // 0x4ba1a8: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x4ba1a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_4ba1ac:
    // 0x4ba1ac: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4ba1acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4ba1b0:
    // 0x4ba1b0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x4ba1b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ba1b4:
    // 0x4ba1b4: 0x1440ff2b  bnez        $v0, . + 4 + (-0xD5 << 2)
label_4ba1b8:
    if (ctx->pc == 0x4BA1B8u) {
        ctx->pc = 0x4BA1B8u;
            // 0x4ba1b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4BA1BCu;
        goto label_4ba1bc;
    }
    ctx->pc = 0x4BA1B4u;
    {
        const bool branch_taken_0x4ba1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA1B4u;
            // 0x4ba1b8: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba1b4) {
            ctx->pc = 0x4B9E64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4b9e64;
        }
    }
    ctx->pc = 0x4BA1BCu;
label_4ba1bc:
    // 0x4ba1bc: 0x0  nop
    ctx->pc = 0x4ba1bcu;
    // NOP
label_4ba1c0:
    // 0x4ba1c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba1c4:
    // 0x4ba1c4: 0x8c4274a8  lw          $v0, 0x74A8($v0)
    ctx->pc = 0x4ba1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29864)));
label_4ba1c8:
    // 0x4ba1c8: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
label_4ba1cc:
    if (ctx->pc == 0x4BA1CCu) {
        ctx->pc = 0x4BA1D0u;
        goto label_4ba1d0;
    }
    ctx->pc = 0x4BA1C8u;
    {
        const bool branch_taken_0x4ba1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba1c8) {
            ctx->pc = 0x4BA318u;
            goto label_4ba318;
        }
    }
    ctx->pc = 0x4BA1D0u;
label_4ba1d0:
    // 0x4ba1d0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x4ba1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_4ba1d4:
    // 0x4ba1d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4ba1d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba1d8:
    // 0x4ba1d8: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_4ba1dc:
    if (ctx->pc == 0x4BA1DCu) {
        ctx->pc = 0x4BA1DCu;
            // 0x4ba1dc: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x4BA1E0u;
        goto label_4ba1e0;
    }
    ctx->pc = 0x4BA1D8u;
    {
        const bool branch_taken_0x4ba1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4BA1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA1D8u;
            // 0x4ba1dc: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba1d8) {
            ctx->pc = 0x4BA318u;
            goto label_4ba318;
        }
    }
    ctx->pc = 0x4BA1E0u;
label_4ba1e0:
    // 0x4ba1e0: 0x7ba20110  lq          $v0, 0x110($sp)
    ctx->pc = 0x4ba1e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_4ba1e4:
    // 0x4ba1e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4ba1e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba1e8:
    // 0x4ba1e8: 0x24520130  addiu       $s2, $v0, 0x130
    ctx->pc = 0x4ba1e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 304));
label_4ba1ec:
    // 0x4ba1ec: 0x7ba20100  lq          $v0, 0x100($sp)
    ctx->pc = 0x4ba1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_4ba1f0:
    // 0x4ba1f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ba1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba1f4:
    // 0x4ba1f4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ba1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ba1f8:
    // 0x4ba1f8: 0x24426d30  addiu       $v0, $v0, 0x6D30
    ctx->pc = 0x4ba1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27952));
label_4ba1fc:
    // 0x4ba1fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ba1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ba200:
    // 0x4ba200: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4ba200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4ba204:
    // 0x4ba204: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba208:
    // 0x4ba208: 0x8c4274a8  lw          $v0, 0x74A8($v0)
    ctx->pc = 0x4ba208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29864)));
label_4ba20c:
    // 0x4ba20c: 0x8c420074  lw          $v0, 0x74($v0)
    ctx->pc = 0x4ba20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_4ba210:
    // 0x4ba210: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x4ba210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_4ba214:
    // 0x4ba214: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x4ba214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ba218:
    // 0x4ba218: 0x92020090  lbu         $v0, 0x90($s0)
    ctx->pc = 0x4ba218u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 144)));
label_4ba21c:
    // 0x4ba21c: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_4ba220:
    if (ctx->pc == 0x4BA220u) {
        ctx->pc = 0x4BA224u;
        goto label_4ba224;
    }
    ctx->pc = 0x4BA21Cu;
    {
        const bool branch_taken_0x4ba21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4ba21c) {
            ctx->pc = 0x4BA300u;
            goto label_4ba300;
        }
    }
    ctx->pc = 0x4BA224u;
label_4ba224:
    // 0x4ba224: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x4ba224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_4ba228:
    // 0x4ba228: 0xc04cc04  jal         func_133010
label_4ba22c:
    if (ctx->pc == 0x4BA22Cu) {
        ctx->pc = 0x4BA22Cu;
            // 0x4ba22c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x4BA230u;
        goto label_4ba230;
    }
    ctx->pc = 0x4BA228u;
    SET_GPR_U32(ctx, 31, 0x4BA230u);
    ctx->pc = 0x4BA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA228u;
            // 0x4ba22c: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA230u; }
        if (ctx->pc != 0x4BA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA230u; }
        if (ctx->pc != 0x4BA230u) { return; }
    }
    ctx->pc = 0x4BA230u;
label_4ba230:
    // 0x4ba230: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4ba230u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4ba234:
    // 0x4ba234: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4ba234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4ba238:
    // 0x4ba238: 0x27a501dc  addiu       $a1, $sp, 0x1DC
    ctx->pc = 0x4ba238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_4ba23c:
    // 0x4ba23c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x4ba23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4ba240:
    // 0x4ba240: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x4ba240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4ba244:
    // 0x4ba244: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x4ba244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ba248:
    // 0x4ba248: 0xe7a001c4  swc1        $f0, 0x1C4($sp)
    ctx->pc = 0x4ba248u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_4ba24c:
    // 0x4ba24c: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x4ba24cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4ba250:
    // 0x4ba250: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x4ba250u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_4ba254:
    // 0x4ba254: 0x320f809  jalr        $t9
label_4ba258:
    if (ctx->pc == 0x4BA258u) {
        ctx->pc = 0x4BA258u;
            // 0x4ba258: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x4BA25Cu;
        goto label_4ba25c;
    }
    ctx->pc = 0x4BA254u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA25Cu);
        ctx->pc = 0x4BA258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA254u;
            // 0x4ba258: 0x27a801c0  addiu       $t0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA25Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA25Cu; }
            if (ctx->pc != 0x4BA25Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BA25Cu;
label_4ba25c:
    // 0x4ba25c: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x4ba25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4ba260:
    // 0x4ba260: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x4ba260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_4ba264:
    // 0x4ba264: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x4ba264u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4ba268:
    // 0x4ba268: 0x87a401de  lh          $a0, 0x1DE($sp)
    ctx->pc = 0x4ba268u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 478)));
label_4ba26c:
    // 0x4ba26c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x4ba26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_4ba270:
    // 0x4ba270: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4ba270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4ba274:
    // 0x4ba274: 0x460120c2  mul.s       $f3, $f4, $f1
    ctx->pc = 0x4ba274u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
label_4ba278:
    // 0x4ba278: 0x87aa01dc  lh          $t2, 0x1DC($sp)
    ctx->pc = 0x4ba278u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 476)));
label_4ba27c:
    // 0x4ba27c: 0x86290000  lh          $t1, 0x0($s1)
    ctx->pc = 0x4ba27cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba280:
    // 0x4ba280: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4ba280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba284:
    // 0x4ba284: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4ba284u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4ba288:
    // 0x4ba288: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x4ba288u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_4ba28c:
    // 0x4ba28c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x4ba28cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_4ba290:
    // 0x4ba290: 0x24426d88  addiu       $v0, $v0, 0x6D88
    ctx->pc = 0x4ba290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28040));
label_4ba294:
    // 0x4ba294: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x4ba294u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba298:
    // 0x4ba298: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4ba298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4ba29c:
    // 0x4ba29c: 0x468008a0  cvt.s.w     $f2, $f1
    ctx->pc = 0x4ba29cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4ba2a0:
    // 0x4ba2a0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x4ba2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4ba2a4:
    // 0x4ba2a4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x4ba2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ba2a8:
    // 0x4ba2a8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x4ba2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_4ba2ac:
    // 0x4ba2ac: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x4ba2acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_4ba2b0:
    // 0x4ba2b0: 0x3c33025  or          $a2, $fp, $v1
    ctx->pc = 0x4ba2b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) | GPR_U64(ctx, 3));
label_4ba2b4:
    // 0x4ba2b4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4ba2b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba2b8:
    // 0x4ba2b8: 0x0  nop
    ctx->pc = 0x4ba2b8u;
    // NOP
label_4ba2bc:
    // 0x4ba2bc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x4ba2bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4ba2c0:
    // 0x4ba2c0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ba2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ba2c4:
    // 0x4ba2c4: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x4ba2c4u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba2c8:
    // 0x4ba2c8: 0x0  nop
    ctx->pc = 0x4ba2c8u;
    // NOP
label_4ba2cc:
    // 0x4ba2cc: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x4ba2ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_4ba2d0:
    // 0x4ba2d0: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x4ba2d0u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba2d4:
    // 0x4ba2d4: 0x0  nop
    ctx->pc = 0x4ba2d4u;
    // NOP
label_4ba2d8:
    // 0x4ba2d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x4ba2d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_4ba2dc:
    // 0x4ba2dc: 0xc640000c  lwc1        $f0, 0xC($s2)
    ctx->pc = 0x4ba2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4ba2e0:
    // 0x4ba2e0: 0x46031301  sub.s       $f12, $f2, $f3
    ctx->pc = 0x4ba2e0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_4ba2e4:
    // 0x4ba2e4: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4ba2e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4ba2e8:
    // 0x4ba2e8: 0x46031380  add.s       $f14, $f2, $f3
    ctx->pc = 0x4ba2e8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_4ba2ec:
    // 0x4ba2ec: 0x46000b41  sub.s       $f13, $f1, $f0
    ctx->pc = 0x4ba2ecu;
    ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4ba2f0:
    // 0x4ba2f0: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x4ba2f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_4ba2f4:
    // 0x4ba2f4: 0xc0bc284  jal         func_2F0A10
label_4ba2f8:
    if (ctx->pc == 0x4BA2F8u) {
        ctx->pc = 0x4BA2F8u;
            // 0x4ba2f8: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4BA2FCu;
        goto label_4ba2fc;
    }
    ctx->pc = 0x4BA2F4u;
    SET_GPR_U32(ctx, 31, 0x4BA2FCu);
    ctx->pc = 0x4BA2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA2F4u;
            // 0x4ba2f8: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA2FCu; }
        if (ctx->pc != 0x4BA2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA2FCu; }
        if (ctx->pc != 0x4BA2FCu) { return; }
    }
    ctx->pc = 0x4BA2FCu;
label_4ba2fc:
    // 0x4ba2fc: 0x0  nop
    ctx->pc = 0x4ba2fcu;
    // NOP
label_4ba300:
    // 0x4ba300: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x4ba300u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_4ba304:
    // 0x4ba304: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x4ba304u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_4ba308:
    // 0x4ba308: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x4ba308u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4ba30c:
    // 0x4ba30c: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_4ba310:
    if (ctx->pc == 0x4BA310u) {
        ctx->pc = 0x4BA310u;
            // 0x4ba310: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x4BA314u;
        goto label_4ba314;
    }
    ctx->pc = 0x4BA30Cu;
    {
        const bool branch_taken_0x4ba30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4BA310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA30Cu;
            // 0x4ba310: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ba30c) {
            ctx->pc = 0x4BA204u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4ba204;
        }
    }
    ctx->pc = 0x4BA314u;
label_4ba314:
    // 0x4ba314: 0x0  nop
    ctx->pc = 0x4ba314u;
    // NOP
label_4ba318:
    // 0x4ba318: 0x8ef90000  lw          $t9, 0x0($s7)
    ctx->pc = 0x4ba318u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_4ba31c:
    // 0x4ba31c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4ba31cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4ba320:
    // 0x4ba320: 0x320f809  jalr        $t9
label_4ba324:
    if (ctx->pc == 0x4BA324u) {
        ctx->pc = 0x4BA324u;
            // 0x4ba324: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA328u;
        goto label_4ba328;
    }
    ctx->pc = 0x4BA320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA328u);
        ctx->pc = 0x4BA324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA320u;
            // 0x4ba324: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA328u; }
            if (ctx->pc != 0x4BA328u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA328u;
label_4ba328:
    // 0x4ba328: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4ba328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4ba32c:
    // 0x4ba32c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4ba32cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4ba330:
    // 0x4ba330: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4ba330u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4ba334:
    // 0x4ba334: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4ba334u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4ba338:
    // 0x4ba338: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4ba338u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4ba33c:
    // 0x4ba33c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4ba33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4ba340:
    // 0x4ba340: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4ba340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4ba344:
    // 0x4ba344: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4ba344u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4ba348:
    // 0x4ba348: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4ba348u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4ba34c:
    // 0x4ba34c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4ba34cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4ba350:
    // 0x4ba350: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4ba350u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ba354:
    // 0x4ba354: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4ba354u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ba358:
    // 0x4ba358: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4ba358u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba35c:
    // 0x4ba35c: 0x3e00008  jr          $ra
label_4ba360:
    if (ctx->pc == 0x4BA360u) {
        ctx->pc = 0x4BA360u;
            // 0x4ba360: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x4BA364u;
        goto label_4ba364;
    }
    ctx->pc = 0x4BA35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA35Cu;
            // 0x4ba360: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA364u;
label_4ba364:
    // 0x4ba364: 0x0  nop
    ctx->pc = 0x4ba364u;
    // NOP
label_4ba368:
    // 0x4ba368: 0x0  nop
    ctx->pc = 0x4ba368u;
    // NOP
label_4ba36c:
    // 0x4ba36c: 0x0  nop
    ctx->pc = 0x4ba36cu;
    // NOP
label_4ba370:
    // 0x4ba370: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ba370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_4ba374:
    // 0x4ba374: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4ba374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4ba378:
    // 0x4ba378: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ba378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_4ba37c:
    // 0x4ba37c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4ba37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4ba380:
    // 0x4ba380: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4ba380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4ba384:
    // 0x4ba384: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4ba384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4ba388:
    // 0x4ba388: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x4ba388u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4ba38c:
    // 0x4ba38c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4ba38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4ba390:
    // 0x4ba390: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x4ba390u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4ba394:
    // 0x4ba394: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4ba394u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4ba398:
    // 0x4ba398: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4ba398u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4ba39c:
    // 0x4ba39c: 0x8c7189e0  lw          $s1, -0x7620($v1)
    ctx->pc = 0x4ba39cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_4ba3a0:
    // 0x4ba3a0: 0x8c4475b0  lw          $a0, 0x75B0($v0)
    ctx->pc = 0x4ba3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30128)));
label_4ba3a4:
    // 0x4ba3a4: 0xc0506ac  jal         func_141AB0
label_4ba3a8:
    if (ctx->pc == 0x4BA3A8u) {
        ctx->pc = 0x4BA3A8u;
            // 0x4ba3a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA3ACu;
        goto label_4ba3ac;
    }
    ctx->pc = 0x4BA3A4u;
    SET_GPR_U32(ctx, 31, 0x4BA3ACu);
    ctx->pc = 0x4BA3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA3A4u;
            // 0x4ba3a8: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA3ACu; }
        if (ctx->pc != 0x4BA3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA3ACu; }
        if (ctx->pc != 0x4BA3ACu) { return; }
    }
    ctx->pc = 0x4BA3ACu;
label_4ba3ac:
    // 0x4ba3ac: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ba3acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba3b0:
    // 0x4ba3b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4ba3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4ba3b4:
    // 0x4ba3b4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4ba3b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4ba3b8:
    // 0x4ba3b8: 0x320f809  jalr        $t9
label_4ba3bc:
    if (ctx->pc == 0x4BA3BCu) {
        ctx->pc = 0x4BA3BCu;
            // 0x4ba3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4BA3C0u;
        goto label_4ba3c0;
    }
    ctx->pc = 0x4BA3B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA3C0u);
        ctx->pc = 0x4BA3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA3B8u;
            // 0x4ba3bc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA3C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA3C0u; }
            if (ctx->pc != 0x4BA3C0u) { return; }
        }
        }
    }
    ctx->pc = 0x4BA3C0u;
label_4ba3c0:
    // 0x4ba3c0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x4ba3c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba3c4:
    // 0x4ba3c4: 0x3c074280  lui         $a3, 0x4280
    ctx->pc = 0x4ba3c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17024 << 16));
label_4ba3c8:
    // 0x4ba3c8: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4ba3c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4ba3cc:
    // 0x4ba3cc: 0x3c050063  lui         $a1, 0x63
    ctx->pc = 0x4ba3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)99 << 16));
label_4ba3d0:
    // 0x4ba3d0: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x4ba3d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_4ba3d4:
    // 0x4ba3d4: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x4ba3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_4ba3d8:
    // 0x4ba3d8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4ba3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4ba3dc:
    // 0x4ba3dc: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x4ba3dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4ba3e0:
    // 0x4ba3e0: 0x24a5c770  addiu       $a1, $a1, -0x3890
    ctx->pc = 0x4ba3e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952816));
label_4ba3e4:
    // 0x4ba3e4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x4ba3e4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4ba3e8:
    // 0x4ba3e8: 0x0  nop
    ctx->pc = 0x4ba3e8u;
    // NOP
label_4ba3ec:
    // 0x4ba3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4ba3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_4ba3f0:
    // 0x4ba3f0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x4ba3f0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4ba3f4:
    // 0x4ba3f4: 0x0  nop
    ctx->pc = 0x4ba3f4u;
    // NOP
label_4ba3f8:
    // 0x4ba3f8: 0x46011301  sub.s       $f12, $f2, $f1
    ctx->pc = 0x4ba3f8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_4ba3fc:
    // 0x4ba3fc: 0x46020b80  add.s       $f14, $f1, $f2
    ctx->pc = 0x4ba3fcu;
    ctx->f[14] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_4ba400:
    // 0x4ba400: 0x46010341  sub.s       $f13, $f0, $f1
    ctx->pc = 0x4ba400u;
    ctx->f[13] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_4ba404:
    // 0x4ba404: 0xc0bc21c  jal         func_2F0870
label_4ba408:
    if (ctx->pc == 0x4BA408u) {
        ctx->pc = 0x4BA408u;
            // 0x4ba408: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4BA40Cu;
        goto label_4ba40c;
    }
    ctx->pc = 0x4BA404u;
    SET_GPR_U32(ctx, 31, 0x4BA40Cu);
    ctx->pc = 0x4BA408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA404u;
            // 0x4ba408: 0x46000bc0  add.s       $f15, $f1, $f0 (Delay Slot)
        ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0870u;
    if (runtime->hasFunction(0x2F0870u)) {
        auto targetFn = runtime->lookupFunction(0x2F0870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA40Cu; }
        if (ctx->pc != 0x4BA40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0870_0x2f0870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4BA40Cu; }
        if (ctx->pc != 0x4BA40Cu) { return; }
    }
    ctx->pc = 0x4BA40Cu;
label_4ba40c:
    // 0x4ba40c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x4ba40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_4ba410:
    // 0x4ba410: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x4ba410u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_4ba414:
    // 0x4ba414: 0x320f809  jalr        $t9
label_4ba418:
    if (ctx->pc == 0x4BA418u) {
        ctx->pc = 0x4BA418u;
            // 0x4ba418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4BA41Cu;
        goto label_4ba41c;
    }
    ctx->pc = 0x4BA414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4BA41Cu);
        ctx->pc = 0x4BA418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA414u;
            // 0x4ba418: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4BA41Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4BA41Cu; }
            if (ctx->pc != 0x4BA41Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4BA41Cu;
label_4ba41c:
    // 0x4ba41c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ba41cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ba420:
    // 0x4ba420: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4ba420u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4ba424:
    // 0x4ba424: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4ba424u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4ba428:
    // 0x4ba428: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4ba428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4ba42c:
    // 0x4ba42c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4ba42cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4ba430:
    // 0x4ba430: 0x3e00008  jr          $ra
label_4ba434:
    if (ctx->pc == 0x4BA434u) {
        ctx->pc = 0x4BA434u;
            // 0x4ba434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x4BA438u;
        goto label_4ba438;
    }
    ctx->pc = 0x4BA430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4BA434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4BA430u;
            // 0x4ba434: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4BA438u;
label_4ba438:
    // 0x4ba438: 0x0  nop
    ctx->pc = 0x4ba438u;
    // NOP
label_4ba43c:
    // 0x4ba43c: 0x0  nop
    ctx->pc = 0x4ba43cu;
    // NOP
label_4ba440:
    // 0x4ba440: 0x80e9ef0  j           func_3A7BC0
label_4ba444:
    if (ctx->pc == 0x4BA444u) {
        ctx->pc = 0x4BA448u;
        goto label_4ba448;
    }
    ctx->pc = 0x4BA440u;
    ctx->pc = 0x3A7BC0u;
    {
        auto targetFn = runtime->lookupFunction(0x3A7BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x4BA448u;
label_4ba448:
    // 0x4ba448: 0x0  nop
    ctx->pc = 0x4ba448u;
    // NOP
label_4ba44c:
    // 0x4ba44c: 0x0  nop
    ctx->pc = 0x4ba44cu;
    // NOP
}
