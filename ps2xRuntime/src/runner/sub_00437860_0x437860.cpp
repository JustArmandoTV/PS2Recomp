#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00437860
// Address: 0x437860 - 0x438f10
void sub_00437860_0x437860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00437860_0x437860");
#endif

    switch (ctx->pc) {
        case 0x437860u: goto label_437860;
        case 0x437864u: goto label_437864;
        case 0x437868u: goto label_437868;
        case 0x43786cu: goto label_43786c;
        case 0x437870u: goto label_437870;
        case 0x437874u: goto label_437874;
        case 0x437878u: goto label_437878;
        case 0x43787cu: goto label_43787c;
        case 0x437880u: goto label_437880;
        case 0x437884u: goto label_437884;
        case 0x437888u: goto label_437888;
        case 0x43788cu: goto label_43788c;
        case 0x437890u: goto label_437890;
        case 0x437894u: goto label_437894;
        case 0x437898u: goto label_437898;
        case 0x43789cu: goto label_43789c;
        case 0x4378a0u: goto label_4378a0;
        case 0x4378a4u: goto label_4378a4;
        case 0x4378a8u: goto label_4378a8;
        case 0x4378acu: goto label_4378ac;
        case 0x4378b0u: goto label_4378b0;
        case 0x4378b4u: goto label_4378b4;
        case 0x4378b8u: goto label_4378b8;
        case 0x4378bcu: goto label_4378bc;
        case 0x4378c0u: goto label_4378c0;
        case 0x4378c4u: goto label_4378c4;
        case 0x4378c8u: goto label_4378c8;
        case 0x4378ccu: goto label_4378cc;
        case 0x4378d0u: goto label_4378d0;
        case 0x4378d4u: goto label_4378d4;
        case 0x4378d8u: goto label_4378d8;
        case 0x4378dcu: goto label_4378dc;
        case 0x4378e0u: goto label_4378e0;
        case 0x4378e4u: goto label_4378e4;
        case 0x4378e8u: goto label_4378e8;
        case 0x4378ecu: goto label_4378ec;
        case 0x4378f0u: goto label_4378f0;
        case 0x4378f4u: goto label_4378f4;
        case 0x4378f8u: goto label_4378f8;
        case 0x4378fcu: goto label_4378fc;
        case 0x437900u: goto label_437900;
        case 0x437904u: goto label_437904;
        case 0x437908u: goto label_437908;
        case 0x43790cu: goto label_43790c;
        case 0x437910u: goto label_437910;
        case 0x437914u: goto label_437914;
        case 0x437918u: goto label_437918;
        case 0x43791cu: goto label_43791c;
        case 0x437920u: goto label_437920;
        case 0x437924u: goto label_437924;
        case 0x437928u: goto label_437928;
        case 0x43792cu: goto label_43792c;
        case 0x437930u: goto label_437930;
        case 0x437934u: goto label_437934;
        case 0x437938u: goto label_437938;
        case 0x43793cu: goto label_43793c;
        case 0x437940u: goto label_437940;
        case 0x437944u: goto label_437944;
        case 0x437948u: goto label_437948;
        case 0x43794cu: goto label_43794c;
        case 0x437950u: goto label_437950;
        case 0x437954u: goto label_437954;
        case 0x437958u: goto label_437958;
        case 0x43795cu: goto label_43795c;
        case 0x437960u: goto label_437960;
        case 0x437964u: goto label_437964;
        case 0x437968u: goto label_437968;
        case 0x43796cu: goto label_43796c;
        case 0x437970u: goto label_437970;
        case 0x437974u: goto label_437974;
        case 0x437978u: goto label_437978;
        case 0x43797cu: goto label_43797c;
        case 0x437980u: goto label_437980;
        case 0x437984u: goto label_437984;
        case 0x437988u: goto label_437988;
        case 0x43798cu: goto label_43798c;
        case 0x437990u: goto label_437990;
        case 0x437994u: goto label_437994;
        case 0x437998u: goto label_437998;
        case 0x43799cu: goto label_43799c;
        case 0x4379a0u: goto label_4379a0;
        case 0x4379a4u: goto label_4379a4;
        case 0x4379a8u: goto label_4379a8;
        case 0x4379acu: goto label_4379ac;
        case 0x4379b0u: goto label_4379b0;
        case 0x4379b4u: goto label_4379b4;
        case 0x4379b8u: goto label_4379b8;
        case 0x4379bcu: goto label_4379bc;
        case 0x4379c0u: goto label_4379c0;
        case 0x4379c4u: goto label_4379c4;
        case 0x4379c8u: goto label_4379c8;
        case 0x4379ccu: goto label_4379cc;
        case 0x4379d0u: goto label_4379d0;
        case 0x4379d4u: goto label_4379d4;
        case 0x4379d8u: goto label_4379d8;
        case 0x4379dcu: goto label_4379dc;
        case 0x4379e0u: goto label_4379e0;
        case 0x4379e4u: goto label_4379e4;
        case 0x4379e8u: goto label_4379e8;
        case 0x4379ecu: goto label_4379ec;
        case 0x4379f0u: goto label_4379f0;
        case 0x4379f4u: goto label_4379f4;
        case 0x4379f8u: goto label_4379f8;
        case 0x4379fcu: goto label_4379fc;
        case 0x437a00u: goto label_437a00;
        case 0x437a04u: goto label_437a04;
        case 0x437a08u: goto label_437a08;
        case 0x437a0cu: goto label_437a0c;
        case 0x437a10u: goto label_437a10;
        case 0x437a14u: goto label_437a14;
        case 0x437a18u: goto label_437a18;
        case 0x437a1cu: goto label_437a1c;
        case 0x437a20u: goto label_437a20;
        case 0x437a24u: goto label_437a24;
        case 0x437a28u: goto label_437a28;
        case 0x437a2cu: goto label_437a2c;
        case 0x437a30u: goto label_437a30;
        case 0x437a34u: goto label_437a34;
        case 0x437a38u: goto label_437a38;
        case 0x437a3cu: goto label_437a3c;
        case 0x437a40u: goto label_437a40;
        case 0x437a44u: goto label_437a44;
        case 0x437a48u: goto label_437a48;
        case 0x437a4cu: goto label_437a4c;
        case 0x437a50u: goto label_437a50;
        case 0x437a54u: goto label_437a54;
        case 0x437a58u: goto label_437a58;
        case 0x437a5cu: goto label_437a5c;
        case 0x437a60u: goto label_437a60;
        case 0x437a64u: goto label_437a64;
        case 0x437a68u: goto label_437a68;
        case 0x437a6cu: goto label_437a6c;
        case 0x437a70u: goto label_437a70;
        case 0x437a74u: goto label_437a74;
        case 0x437a78u: goto label_437a78;
        case 0x437a7cu: goto label_437a7c;
        case 0x437a80u: goto label_437a80;
        case 0x437a84u: goto label_437a84;
        case 0x437a88u: goto label_437a88;
        case 0x437a8cu: goto label_437a8c;
        case 0x437a90u: goto label_437a90;
        case 0x437a94u: goto label_437a94;
        case 0x437a98u: goto label_437a98;
        case 0x437a9cu: goto label_437a9c;
        case 0x437aa0u: goto label_437aa0;
        case 0x437aa4u: goto label_437aa4;
        case 0x437aa8u: goto label_437aa8;
        case 0x437aacu: goto label_437aac;
        case 0x437ab0u: goto label_437ab0;
        case 0x437ab4u: goto label_437ab4;
        case 0x437ab8u: goto label_437ab8;
        case 0x437abcu: goto label_437abc;
        case 0x437ac0u: goto label_437ac0;
        case 0x437ac4u: goto label_437ac4;
        case 0x437ac8u: goto label_437ac8;
        case 0x437accu: goto label_437acc;
        case 0x437ad0u: goto label_437ad0;
        case 0x437ad4u: goto label_437ad4;
        case 0x437ad8u: goto label_437ad8;
        case 0x437adcu: goto label_437adc;
        case 0x437ae0u: goto label_437ae0;
        case 0x437ae4u: goto label_437ae4;
        case 0x437ae8u: goto label_437ae8;
        case 0x437aecu: goto label_437aec;
        case 0x437af0u: goto label_437af0;
        case 0x437af4u: goto label_437af4;
        case 0x437af8u: goto label_437af8;
        case 0x437afcu: goto label_437afc;
        case 0x437b00u: goto label_437b00;
        case 0x437b04u: goto label_437b04;
        case 0x437b08u: goto label_437b08;
        case 0x437b0cu: goto label_437b0c;
        case 0x437b10u: goto label_437b10;
        case 0x437b14u: goto label_437b14;
        case 0x437b18u: goto label_437b18;
        case 0x437b1cu: goto label_437b1c;
        case 0x437b20u: goto label_437b20;
        case 0x437b24u: goto label_437b24;
        case 0x437b28u: goto label_437b28;
        case 0x437b2cu: goto label_437b2c;
        case 0x437b30u: goto label_437b30;
        case 0x437b34u: goto label_437b34;
        case 0x437b38u: goto label_437b38;
        case 0x437b3cu: goto label_437b3c;
        case 0x437b40u: goto label_437b40;
        case 0x437b44u: goto label_437b44;
        case 0x437b48u: goto label_437b48;
        case 0x437b4cu: goto label_437b4c;
        case 0x437b50u: goto label_437b50;
        case 0x437b54u: goto label_437b54;
        case 0x437b58u: goto label_437b58;
        case 0x437b5cu: goto label_437b5c;
        case 0x437b60u: goto label_437b60;
        case 0x437b64u: goto label_437b64;
        case 0x437b68u: goto label_437b68;
        case 0x437b6cu: goto label_437b6c;
        case 0x437b70u: goto label_437b70;
        case 0x437b74u: goto label_437b74;
        case 0x437b78u: goto label_437b78;
        case 0x437b7cu: goto label_437b7c;
        case 0x437b80u: goto label_437b80;
        case 0x437b84u: goto label_437b84;
        case 0x437b88u: goto label_437b88;
        case 0x437b8cu: goto label_437b8c;
        case 0x437b90u: goto label_437b90;
        case 0x437b94u: goto label_437b94;
        case 0x437b98u: goto label_437b98;
        case 0x437b9cu: goto label_437b9c;
        case 0x437ba0u: goto label_437ba0;
        case 0x437ba4u: goto label_437ba4;
        case 0x437ba8u: goto label_437ba8;
        case 0x437bacu: goto label_437bac;
        case 0x437bb0u: goto label_437bb0;
        case 0x437bb4u: goto label_437bb4;
        case 0x437bb8u: goto label_437bb8;
        case 0x437bbcu: goto label_437bbc;
        case 0x437bc0u: goto label_437bc0;
        case 0x437bc4u: goto label_437bc4;
        case 0x437bc8u: goto label_437bc8;
        case 0x437bccu: goto label_437bcc;
        case 0x437bd0u: goto label_437bd0;
        case 0x437bd4u: goto label_437bd4;
        case 0x437bd8u: goto label_437bd8;
        case 0x437bdcu: goto label_437bdc;
        case 0x437be0u: goto label_437be0;
        case 0x437be4u: goto label_437be4;
        case 0x437be8u: goto label_437be8;
        case 0x437becu: goto label_437bec;
        case 0x437bf0u: goto label_437bf0;
        case 0x437bf4u: goto label_437bf4;
        case 0x437bf8u: goto label_437bf8;
        case 0x437bfcu: goto label_437bfc;
        case 0x437c00u: goto label_437c00;
        case 0x437c04u: goto label_437c04;
        case 0x437c08u: goto label_437c08;
        case 0x437c0cu: goto label_437c0c;
        case 0x437c10u: goto label_437c10;
        case 0x437c14u: goto label_437c14;
        case 0x437c18u: goto label_437c18;
        case 0x437c1cu: goto label_437c1c;
        case 0x437c20u: goto label_437c20;
        case 0x437c24u: goto label_437c24;
        case 0x437c28u: goto label_437c28;
        case 0x437c2cu: goto label_437c2c;
        case 0x437c30u: goto label_437c30;
        case 0x437c34u: goto label_437c34;
        case 0x437c38u: goto label_437c38;
        case 0x437c3cu: goto label_437c3c;
        case 0x437c40u: goto label_437c40;
        case 0x437c44u: goto label_437c44;
        case 0x437c48u: goto label_437c48;
        case 0x437c4cu: goto label_437c4c;
        case 0x437c50u: goto label_437c50;
        case 0x437c54u: goto label_437c54;
        case 0x437c58u: goto label_437c58;
        case 0x437c5cu: goto label_437c5c;
        case 0x437c60u: goto label_437c60;
        case 0x437c64u: goto label_437c64;
        case 0x437c68u: goto label_437c68;
        case 0x437c6cu: goto label_437c6c;
        case 0x437c70u: goto label_437c70;
        case 0x437c74u: goto label_437c74;
        case 0x437c78u: goto label_437c78;
        case 0x437c7cu: goto label_437c7c;
        case 0x437c80u: goto label_437c80;
        case 0x437c84u: goto label_437c84;
        case 0x437c88u: goto label_437c88;
        case 0x437c8cu: goto label_437c8c;
        case 0x437c90u: goto label_437c90;
        case 0x437c94u: goto label_437c94;
        case 0x437c98u: goto label_437c98;
        case 0x437c9cu: goto label_437c9c;
        case 0x437ca0u: goto label_437ca0;
        case 0x437ca4u: goto label_437ca4;
        case 0x437ca8u: goto label_437ca8;
        case 0x437cacu: goto label_437cac;
        case 0x437cb0u: goto label_437cb0;
        case 0x437cb4u: goto label_437cb4;
        case 0x437cb8u: goto label_437cb8;
        case 0x437cbcu: goto label_437cbc;
        case 0x437cc0u: goto label_437cc0;
        case 0x437cc4u: goto label_437cc4;
        case 0x437cc8u: goto label_437cc8;
        case 0x437cccu: goto label_437ccc;
        case 0x437cd0u: goto label_437cd0;
        case 0x437cd4u: goto label_437cd4;
        case 0x437cd8u: goto label_437cd8;
        case 0x437cdcu: goto label_437cdc;
        case 0x437ce0u: goto label_437ce0;
        case 0x437ce4u: goto label_437ce4;
        case 0x437ce8u: goto label_437ce8;
        case 0x437cecu: goto label_437cec;
        case 0x437cf0u: goto label_437cf0;
        case 0x437cf4u: goto label_437cf4;
        case 0x437cf8u: goto label_437cf8;
        case 0x437cfcu: goto label_437cfc;
        case 0x437d00u: goto label_437d00;
        case 0x437d04u: goto label_437d04;
        case 0x437d08u: goto label_437d08;
        case 0x437d0cu: goto label_437d0c;
        case 0x437d10u: goto label_437d10;
        case 0x437d14u: goto label_437d14;
        case 0x437d18u: goto label_437d18;
        case 0x437d1cu: goto label_437d1c;
        case 0x437d20u: goto label_437d20;
        case 0x437d24u: goto label_437d24;
        case 0x437d28u: goto label_437d28;
        case 0x437d2cu: goto label_437d2c;
        case 0x437d30u: goto label_437d30;
        case 0x437d34u: goto label_437d34;
        case 0x437d38u: goto label_437d38;
        case 0x437d3cu: goto label_437d3c;
        case 0x437d40u: goto label_437d40;
        case 0x437d44u: goto label_437d44;
        case 0x437d48u: goto label_437d48;
        case 0x437d4cu: goto label_437d4c;
        case 0x437d50u: goto label_437d50;
        case 0x437d54u: goto label_437d54;
        case 0x437d58u: goto label_437d58;
        case 0x437d5cu: goto label_437d5c;
        case 0x437d60u: goto label_437d60;
        case 0x437d64u: goto label_437d64;
        case 0x437d68u: goto label_437d68;
        case 0x437d6cu: goto label_437d6c;
        case 0x437d70u: goto label_437d70;
        case 0x437d74u: goto label_437d74;
        case 0x437d78u: goto label_437d78;
        case 0x437d7cu: goto label_437d7c;
        case 0x437d80u: goto label_437d80;
        case 0x437d84u: goto label_437d84;
        case 0x437d88u: goto label_437d88;
        case 0x437d8cu: goto label_437d8c;
        case 0x437d90u: goto label_437d90;
        case 0x437d94u: goto label_437d94;
        case 0x437d98u: goto label_437d98;
        case 0x437d9cu: goto label_437d9c;
        case 0x437da0u: goto label_437da0;
        case 0x437da4u: goto label_437da4;
        case 0x437da8u: goto label_437da8;
        case 0x437dacu: goto label_437dac;
        case 0x437db0u: goto label_437db0;
        case 0x437db4u: goto label_437db4;
        case 0x437db8u: goto label_437db8;
        case 0x437dbcu: goto label_437dbc;
        case 0x437dc0u: goto label_437dc0;
        case 0x437dc4u: goto label_437dc4;
        case 0x437dc8u: goto label_437dc8;
        case 0x437dccu: goto label_437dcc;
        case 0x437dd0u: goto label_437dd0;
        case 0x437dd4u: goto label_437dd4;
        case 0x437dd8u: goto label_437dd8;
        case 0x437ddcu: goto label_437ddc;
        case 0x437de0u: goto label_437de0;
        case 0x437de4u: goto label_437de4;
        case 0x437de8u: goto label_437de8;
        case 0x437decu: goto label_437dec;
        case 0x437df0u: goto label_437df0;
        case 0x437df4u: goto label_437df4;
        case 0x437df8u: goto label_437df8;
        case 0x437dfcu: goto label_437dfc;
        case 0x437e00u: goto label_437e00;
        case 0x437e04u: goto label_437e04;
        case 0x437e08u: goto label_437e08;
        case 0x437e0cu: goto label_437e0c;
        case 0x437e10u: goto label_437e10;
        case 0x437e14u: goto label_437e14;
        case 0x437e18u: goto label_437e18;
        case 0x437e1cu: goto label_437e1c;
        case 0x437e20u: goto label_437e20;
        case 0x437e24u: goto label_437e24;
        case 0x437e28u: goto label_437e28;
        case 0x437e2cu: goto label_437e2c;
        case 0x437e30u: goto label_437e30;
        case 0x437e34u: goto label_437e34;
        case 0x437e38u: goto label_437e38;
        case 0x437e3cu: goto label_437e3c;
        case 0x437e40u: goto label_437e40;
        case 0x437e44u: goto label_437e44;
        case 0x437e48u: goto label_437e48;
        case 0x437e4cu: goto label_437e4c;
        case 0x437e50u: goto label_437e50;
        case 0x437e54u: goto label_437e54;
        case 0x437e58u: goto label_437e58;
        case 0x437e5cu: goto label_437e5c;
        case 0x437e60u: goto label_437e60;
        case 0x437e64u: goto label_437e64;
        case 0x437e68u: goto label_437e68;
        case 0x437e6cu: goto label_437e6c;
        case 0x437e70u: goto label_437e70;
        case 0x437e74u: goto label_437e74;
        case 0x437e78u: goto label_437e78;
        case 0x437e7cu: goto label_437e7c;
        case 0x437e80u: goto label_437e80;
        case 0x437e84u: goto label_437e84;
        case 0x437e88u: goto label_437e88;
        case 0x437e8cu: goto label_437e8c;
        case 0x437e90u: goto label_437e90;
        case 0x437e94u: goto label_437e94;
        case 0x437e98u: goto label_437e98;
        case 0x437e9cu: goto label_437e9c;
        case 0x437ea0u: goto label_437ea0;
        case 0x437ea4u: goto label_437ea4;
        case 0x437ea8u: goto label_437ea8;
        case 0x437eacu: goto label_437eac;
        case 0x437eb0u: goto label_437eb0;
        case 0x437eb4u: goto label_437eb4;
        case 0x437eb8u: goto label_437eb8;
        case 0x437ebcu: goto label_437ebc;
        case 0x437ec0u: goto label_437ec0;
        case 0x437ec4u: goto label_437ec4;
        case 0x437ec8u: goto label_437ec8;
        case 0x437eccu: goto label_437ecc;
        case 0x437ed0u: goto label_437ed0;
        case 0x437ed4u: goto label_437ed4;
        case 0x437ed8u: goto label_437ed8;
        case 0x437edcu: goto label_437edc;
        case 0x437ee0u: goto label_437ee0;
        case 0x437ee4u: goto label_437ee4;
        case 0x437ee8u: goto label_437ee8;
        case 0x437eecu: goto label_437eec;
        case 0x437ef0u: goto label_437ef0;
        case 0x437ef4u: goto label_437ef4;
        case 0x437ef8u: goto label_437ef8;
        case 0x437efcu: goto label_437efc;
        case 0x437f00u: goto label_437f00;
        case 0x437f04u: goto label_437f04;
        case 0x437f08u: goto label_437f08;
        case 0x437f0cu: goto label_437f0c;
        case 0x437f10u: goto label_437f10;
        case 0x437f14u: goto label_437f14;
        case 0x437f18u: goto label_437f18;
        case 0x437f1cu: goto label_437f1c;
        case 0x437f20u: goto label_437f20;
        case 0x437f24u: goto label_437f24;
        case 0x437f28u: goto label_437f28;
        case 0x437f2cu: goto label_437f2c;
        case 0x437f30u: goto label_437f30;
        case 0x437f34u: goto label_437f34;
        case 0x437f38u: goto label_437f38;
        case 0x437f3cu: goto label_437f3c;
        case 0x437f40u: goto label_437f40;
        case 0x437f44u: goto label_437f44;
        case 0x437f48u: goto label_437f48;
        case 0x437f4cu: goto label_437f4c;
        case 0x437f50u: goto label_437f50;
        case 0x437f54u: goto label_437f54;
        case 0x437f58u: goto label_437f58;
        case 0x437f5cu: goto label_437f5c;
        case 0x437f60u: goto label_437f60;
        case 0x437f64u: goto label_437f64;
        case 0x437f68u: goto label_437f68;
        case 0x437f6cu: goto label_437f6c;
        case 0x437f70u: goto label_437f70;
        case 0x437f74u: goto label_437f74;
        case 0x437f78u: goto label_437f78;
        case 0x437f7cu: goto label_437f7c;
        case 0x437f80u: goto label_437f80;
        case 0x437f84u: goto label_437f84;
        case 0x437f88u: goto label_437f88;
        case 0x437f8cu: goto label_437f8c;
        case 0x437f90u: goto label_437f90;
        case 0x437f94u: goto label_437f94;
        case 0x437f98u: goto label_437f98;
        case 0x437f9cu: goto label_437f9c;
        case 0x437fa0u: goto label_437fa0;
        case 0x437fa4u: goto label_437fa4;
        case 0x437fa8u: goto label_437fa8;
        case 0x437facu: goto label_437fac;
        case 0x437fb0u: goto label_437fb0;
        case 0x437fb4u: goto label_437fb4;
        case 0x437fb8u: goto label_437fb8;
        case 0x437fbcu: goto label_437fbc;
        case 0x437fc0u: goto label_437fc0;
        case 0x437fc4u: goto label_437fc4;
        case 0x437fc8u: goto label_437fc8;
        case 0x437fccu: goto label_437fcc;
        case 0x437fd0u: goto label_437fd0;
        case 0x437fd4u: goto label_437fd4;
        case 0x437fd8u: goto label_437fd8;
        case 0x437fdcu: goto label_437fdc;
        case 0x437fe0u: goto label_437fe0;
        case 0x437fe4u: goto label_437fe4;
        case 0x437fe8u: goto label_437fe8;
        case 0x437fecu: goto label_437fec;
        case 0x437ff0u: goto label_437ff0;
        case 0x437ff4u: goto label_437ff4;
        case 0x437ff8u: goto label_437ff8;
        case 0x437ffcu: goto label_437ffc;
        case 0x438000u: goto label_438000;
        case 0x438004u: goto label_438004;
        case 0x438008u: goto label_438008;
        case 0x43800cu: goto label_43800c;
        case 0x438010u: goto label_438010;
        case 0x438014u: goto label_438014;
        case 0x438018u: goto label_438018;
        case 0x43801cu: goto label_43801c;
        case 0x438020u: goto label_438020;
        case 0x438024u: goto label_438024;
        case 0x438028u: goto label_438028;
        case 0x43802cu: goto label_43802c;
        case 0x438030u: goto label_438030;
        case 0x438034u: goto label_438034;
        case 0x438038u: goto label_438038;
        case 0x43803cu: goto label_43803c;
        case 0x438040u: goto label_438040;
        case 0x438044u: goto label_438044;
        case 0x438048u: goto label_438048;
        case 0x43804cu: goto label_43804c;
        case 0x438050u: goto label_438050;
        case 0x438054u: goto label_438054;
        case 0x438058u: goto label_438058;
        case 0x43805cu: goto label_43805c;
        case 0x438060u: goto label_438060;
        case 0x438064u: goto label_438064;
        case 0x438068u: goto label_438068;
        case 0x43806cu: goto label_43806c;
        case 0x438070u: goto label_438070;
        case 0x438074u: goto label_438074;
        case 0x438078u: goto label_438078;
        case 0x43807cu: goto label_43807c;
        case 0x438080u: goto label_438080;
        case 0x438084u: goto label_438084;
        case 0x438088u: goto label_438088;
        case 0x43808cu: goto label_43808c;
        case 0x438090u: goto label_438090;
        case 0x438094u: goto label_438094;
        case 0x438098u: goto label_438098;
        case 0x43809cu: goto label_43809c;
        case 0x4380a0u: goto label_4380a0;
        case 0x4380a4u: goto label_4380a4;
        case 0x4380a8u: goto label_4380a8;
        case 0x4380acu: goto label_4380ac;
        case 0x4380b0u: goto label_4380b0;
        case 0x4380b4u: goto label_4380b4;
        case 0x4380b8u: goto label_4380b8;
        case 0x4380bcu: goto label_4380bc;
        case 0x4380c0u: goto label_4380c0;
        case 0x4380c4u: goto label_4380c4;
        case 0x4380c8u: goto label_4380c8;
        case 0x4380ccu: goto label_4380cc;
        case 0x4380d0u: goto label_4380d0;
        case 0x4380d4u: goto label_4380d4;
        case 0x4380d8u: goto label_4380d8;
        case 0x4380dcu: goto label_4380dc;
        case 0x4380e0u: goto label_4380e0;
        case 0x4380e4u: goto label_4380e4;
        case 0x4380e8u: goto label_4380e8;
        case 0x4380ecu: goto label_4380ec;
        case 0x4380f0u: goto label_4380f0;
        case 0x4380f4u: goto label_4380f4;
        case 0x4380f8u: goto label_4380f8;
        case 0x4380fcu: goto label_4380fc;
        case 0x438100u: goto label_438100;
        case 0x438104u: goto label_438104;
        case 0x438108u: goto label_438108;
        case 0x43810cu: goto label_43810c;
        case 0x438110u: goto label_438110;
        case 0x438114u: goto label_438114;
        case 0x438118u: goto label_438118;
        case 0x43811cu: goto label_43811c;
        case 0x438120u: goto label_438120;
        case 0x438124u: goto label_438124;
        case 0x438128u: goto label_438128;
        case 0x43812cu: goto label_43812c;
        case 0x438130u: goto label_438130;
        case 0x438134u: goto label_438134;
        case 0x438138u: goto label_438138;
        case 0x43813cu: goto label_43813c;
        case 0x438140u: goto label_438140;
        case 0x438144u: goto label_438144;
        case 0x438148u: goto label_438148;
        case 0x43814cu: goto label_43814c;
        case 0x438150u: goto label_438150;
        case 0x438154u: goto label_438154;
        case 0x438158u: goto label_438158;
        case 0x43815cu: goto label_43815c;
        case 0x438160u: goto label_438160;
        case 0x438164u: goto label_438164;
        case 0x438168u: goto label_438168;
        case 0x43816cu: goto label_43816c;
        case 0x438170u: goto label_438170;
        case 0x438174u: goto label_438174;
        case 0x438178u: goto label_438178;
        case 0x43817cu: goto label_43817c;
        case 0x438180u: goto label_438180;
        case 0x438184u: goto label_438184;
        case 0x438188u: goto label_438188;
        case 0x43818cu: goto label_43818c;
        case 0x438190u: goto label_438190;
        case 0x438194u: goto label_438194;
        case 0x438198u: goto label_438198;
        case 0x43819cu: goto label_43819c;
        case 0x4381a0u: goto label_4381a0;
        case 0x4381a4u: goto label_4381a4;
        case 0x4381a8u: goto label_4381a8;
        case 0x4381acu: goto label_4381ac;
        case 0x4381b0u: goto label_4381b0;
        case 0x4381b4u: goto label_4381b4;
        case 0x4381b8u: goto label_4381b8;
        case 0x4381bcu: goto label_4381bc;
        case 0x4381c0u: goto label_4381c0;
        case 0x4381c4u: goto label_4381c4;
        case 0x4381c8u: goto label_4381c8;
        case 0x4381ccu: goto label_4381cc;
        case 0x4381d0u: goto label_4381d0;
        case 0x4381d4u: goto label_4381d4;
        case 0x4381d8u: goto label_4381d8;
        case 0x4381dcu: goto label_4381dc;
        case 0x4381e0u: goto label_4381e0;
        case 0x4381e4u: goto label_4381e4;
        case 0x4381e8u: goto label_4381e8;
        case 0x4381ecu: goto label_4381ec;
        case 0x4381f0u: goto label_4381f0;
        case 0x4381f4u: goto label_4381f4;
        case 0x4381f8u: goto label_4381f8;
        case 0x4381fcu: goto label_4381fc;
        case 0x438200u: goto label_438200;
        case 0x438204u: goto label_438204;
        case 0x438208u: goto label_438208;
        case 0x43820cu: goto label_43820c;
        case 0x438210u: goto label_438210;
        case 0x438214u: goto label_438214;
        case 0x438218u: goto label_438218;
        case 0x43821cu: goto label_43821c;
        case 0x438220u: goto label_438220;
        case 0x438224u: goto label_438224;
        case 0x438228u: goto label_438228;
        case 0x43822cu: goto label_43822c;
        case 0x438230u: goto label_438230;
        case 0x438234u: goto label_438234;
        case 0x438238u: goto label_438238;
        case 0x43823cu: goto label_43823c;
        case 0x438240u: goto label_438240;
        case 0x438244u: goto label_438244;
        case 0x438248u: goto label_438248;
        case 0x43824cu: goto label_43824c;
        case 0x438250u: goto label_438250;
        case 0x438254u: goto label_438254;
        case 0x438258u: goto label_438258;
        case 0x43825cu: goto label_43825c;
        case 0x438260u: goto label_438260;
        case 0x438264u: goto label_438264;
        case 0x438268u: goto label_438268;
        case 0x43826cu: goto label_43826c;
        case 0x438270u: goto label_438270;
        case 0x438274u: goto label_438274;
        case 0x438278u: goto label_438278;
        case 0x43827cu: goto label_43827c;
        case 0x438280u: goto label_438280;
        case 0x438284u: goto label_438284;
        case 0x438288u: goto label_438288;
        case 0x43828cu: goto label_43828c;
        case 0x438290u: goto label_438290;
        case 0x438294u: goto label_438294;
        case 0x438298u: goto label_438298;
        case 0x43829cu: goto label_43829c;
        case 0x4382a0u: goto label_4382a0;
        case 0x4382a4u: goto label_4382a4;
        case 0x4382a8u: goto label_4382a8;
        case 0x4382acu: goto label_4382ac;
        case 0x4382b0u: goto label_4382b0;
        case 0x4382b4u: goto label_4382b4;
        case 0x4382b8u: goto label_4382b8;
        case 0x4382bcu: goto label_4382bc;
        case 0x4382c0u: goto label_4382c0;
        case 0x4382c4u: goto label_4382c4;
        case 0x4382c8u: goto label_4382c8;
        case 0x4382ccu: goto label_4382cc;
        case 0x4382d0u: goto label_4382d0;
        case 0x4382d4u: goto label_4382d4;
        case 0x4382d8u: goto label_4382d8;
        case 0x4382dcu: goto label_4382dc;
        case 0x4382e0u: goto label_4382e0;
        case 0x4382e4u: goto label_4382e4;
        case 0x4382e8u: goto label_4382e8;
        case 0x4382ecu: goto label_4382ec;
        case 0x4382f0u: goto label_4382f0;
        case 0x4382f4u: goto label_4382f4;
        case 0x4382f8u: goto label_4382f8;
        case 0x4382fcu: goto label_4382fc;
        case 0x438300u: goto label_438300;
        case 0x438304u: goto label_438304;
        case 0x438308u: goto label_438308;
        case 0x43830cu: goto label_43830c;
        case 0x438310u: goto label_438310;
        case 0x438314u: goto label_438314;
        case 0x438318u: goto label_438318;
        case 0x43831cu: goto label_43831c;
        case 0x438320u: goto label_438320;
        case 0x438324u: goto label_438324;
        case 0x438328u: goto label_438328;
        case 0x43832cu: goto label_43832c;
        case 0x438330u: goto label_438330;
        case 0x438334u: goto label_438334;
        case 0x438338u: goto label_438338;
        case 0x43833cu: goto label_43833c;
        case 0x438340u: goto label_438340;
        case 0x438344u: goto label_438344;
        case 0x438348u: goto label_438348;
        case 0x43834cu: goto label_43834c;
        case 0x438350u: goto label_438350;
        case 0x438354u: goto label_438354;
        case 0x438358u: goto label_438358;
        case 0x43835cu: goto label_43835c;
        case 0x438360u: goto label_438360;
        case 0x438364u: goto label_438364;
        case 0x438368u: goto label_438368;
        case 0x43836cu: goto label_43836c;
        case 0x438370u: goto label_438370;
        case 0x438374u: goto label_438374;
        case 0x438378u: goto label_438378;
        case 0x43837cu: goto label_43837c;
        case 0x438380u: goto label_438380;
        case 0x438384u: goto label_438384;
        case 0x438388u: goto label_438388;
        case 0x43838cu: goto label_43838c;
        case 0x438390u: goto label_438390;
        case 0x438394u: goto label_438394;
        case 0x438398u: goto label_438398;
        case 0x43839cu: goto label_43839c;
        case 0x4383a0u: goto label_4383a0;
        case 0x4383a4u: goto label_4383a4;
        case 0x4383a8u: goto label_4383a8;
        case 0x4383acu: goto label_4383ac;
        case 0x4383b0u: goto label_4383b0;
        case 0x4383b4u: goto label_4383b4;
        case 0x4383b8u: goto label_4383b8;
        case 0x4383bcu: goto label_4383bc;
        case 0x4383c0u: goto label_4383c0;
        case 0x4383c4u: goto label_4383c4;
        case 0x4383c8u: goto label_4383c8;
        case 0x4383ccu: goto label_4383cc;
        case 0x4383d0u: goto label_4383d0;
        case 0x4383d4u: goto label_4383d4;
        case 0x4383d8u: goto label_4383d8;
        case 0x4383dcu: goto label_4383dc;
        case 0x4383e0u: goto label_4383e0;
        case 0x4383e4u: goto label_4383e4;
        case 0x4383e8u: goto label_4383e8;
        case 0x4383ecu: goto label_4383ec;
        case 0x4383f0u: goto label_4383f0;
        case 0x4383f4u: goto label_4383f4;
        case 0x4383f8u: goto label_4383f8;
        case 0x4383fcu: goto label_4383fc;
        case 0x438400u: goto label_438400;
        case 0x438404u: goto label_438404;
        case 0x438408u: goto label_438408;
        case 0x43840cu: goto label_43840c;
        case 0x438410u: goto label_438410;
        case 0x438414u: goto label_438414;
        case 0x438418u: goto label_438418;
        case 0x43841cu: goto label_43841c;
        case 0x438420u: goto label_438420;
        case 0x438424u: goto label_438424;
        case 0x438428u: goto label_438428;
        case 0x43842cu: goto label_43842c;
        case 0x438430u: goto label_438430;
        case 0x438434u: goto label_438434;
        case 0x438438u: goto label_438438;
        case 0x43843cu: goto label_43843c;
        case 0x438440u: goto label_438440;
        case 0x438444u: goto label_438444;
        case 0x438448u: goto label_438448;
        case 0x43844cu: goto label_43844c;
        case 0x438450u: goto label_438450;
        case 0x438454u: goto label_438454;
        case 0x438458u: goto label_438458;
        case 0x43845cu: goto label_43845c;
        case 0x438460u: goto label_438460;
        case 0x438464u: goto label_438464;
        case 0x438468u: goto label_438468;
        case 0x43846cu: goto label_43846c;
        case 0x438470u: goto label_438470;
        case 0x438474u: goto label_438474;
        case 0x438478u: goto label_438478;
        case 0x43847cu: goto label_43847c;
        case 0x438480u: goto label_438480;
        case 0x438484u: goto label_438484;
        case 0x438488u: goto label_438488;
        case 0x43848cu: goto label_43848c;
        case 0x438490u: goto label_438490;
        case 0x438494u: goto label_438494;
        case 0x438498u: goto label_438498;
        case 0x43849cu: goto label_43849c;
        case 0x4384a0u: goto label_4384a0;
        case 0x4384a4u: goto label_4384a4;
        case 0x4384a8u: goto label_4384a8;
        case 0x4384acu: goto label_4384ac;
        case 0x4384b0u: goto label_4384b0;
        case 0x4384b4u: goto label_4384b4;
        case 0x4384b8u: goto label_4384b8;
        case 0x4384bcu: goto label_4384bc;
        case 0x4384c0u: goto label_4384c0;
        case 0x4384c4u: goto label_4384c4;
        case 0x4384c8u: goto label_4384c8;
        case 0x4384ccu: goto label_4384cc;
        case 0x4384d0u: goto label_4384d0;
        case 0x4384d4u: goto label_4384d4;
        case 0x4384d8u: goto label_4384d8;
        case 0x4384dcu: goto label_4384dc;
        case 0x4384e0u: goto label_4384e0;
        case 0x4384e4u: goto label_4384e4;
        case 0x4384e8u: goto label_4384e8;
        case 0x4384ecu: goto label_4384ec;
        case 0x4384f0u: goto label_4384f0;
        case 0x4384f4u: goto label_4384f4;
        case 0x4384f8u: goto label_4384f8;
        case 0x4384fcu: goto label_4384fc;
        case 0x438500u: goto label_438500;
        case 0x438504u: goto label_438504;
        case 0x438508u: goto label_438508;
        case 0x43850cu: goto label_43850c;
        case 0x438510u: goto label_438510;
        case 0x438514u: goto label_438514;
        case 0x438518u: goto label_438518;
        case 0x43851cu: goto label_43851c;
        case 0x438520u: goto label_438520;
        case 0x438524u: goto label_438524;
        case 0x438528u: goto label_438528;
        case 0x43852cu: goto label_43852c;
        case 0x438530u: goto label_438530;
        case 0x438534u: goto label_438534;
        case 0x438538u: goto label_438538;
        case 0x43853cu: goto label_43853c;
        case 0x438540u: goto label_438540;
        case 0x438544u: goto label_438544;
        case 0x438548u: goto label_438548;
        case 0x43854cu: goto label_43854c;
        case 0x438550u: goto label_438550;
        case 0x438554u: goto label_438554;
        case 0x438558u: goto label_438558;
        case 0x43855cu: goto label_43855c;
        case 0x438560u: goto label_438560;
        case 0x438564u: goto label_438564;
        case 0x438568u: goto label_438568;
        case 0x43856cu: goto label_43856c;
        case 0x438570u: goto label_438570;
        case 0x438574u: goto label_438574;
        case 0x438578u: goto label_438578;
        case 0x43857cu: goto label_43857c;
        case 0x438580u: goto label_438580;
        case 0x438584u: goto label_438584;
        case 0x438588u: goto label_438588;
        case 0x43858cu: goto label_43858c;
        case 0x438590u: goto label_438590;
        case 0x438594u: goto label_438594;
        case 0x438598u: goto label_438598;
        case 0x43859cu: goto label_43859c;
        case 0x4385a0u: goto label_4385a0;
        case 0x4385a4u: goto label_4385a4;
        case 0x4385a8u: goto label_4385a8;
        case 0x4385acu: goto label_4385ac;
        case 0x4385b0u: goto label_4385b0;
        case 0x4385b4u: goto label_4385b4;
        case 0x4385b8u: goto label_4385b8;
        case 0x4385bcu: goto label_4385bc;
        case 0x4385c0u: goto label_4385c0;
        case 0x4385c4u: goto label_4385c4;
        case 0x4385c8u: goto label_4385c8;
        case 0x4385ccu: goto label_4385cc;
        case 0x4385d0u: goto label_4385d0;
        case 0x4385d4u: goto label_4385d4;
        case 0x4385d8u: goto label_4385d8;
        case 0x4385dcu: goto label_4385dc;
        case 0x4385e0u: goto label_4385e0;
        case 0x4385e4u: goto label_4385e4;
        case 0x4385e8u: goto label_4385e8;
        case 0x4385ecu: goto label_4385ec;
        case 0x4385f0u: goto label_4385f0;
        case 0x4385f4u: goto label_4385f4;
        case 0x4385f8u: goto label_4385f8;
        case 0x4385fcu: goto label_4385fc;
        case 0x438600u: goto label_438600;
        case 0x438604u: goto label_438604;
        case 0x438608u: goto label_438608;
        case 0x43860cu: goto label_43860c;
        case 0x438610u: goto label_438610;
        case 0x438614u: goto label_438614;
        case 0x438618u: goto label_438618;
        case 0x43861cu: goto label_43861c;
        case 0x438620u: goto label_438620;
        case 0x438624u: goto label_438624;
        case 0x438628u: goto label_438628;
        case 0x43862cu: goto label_43862c;
        case 0x438630u: goto label_438630;
        case 0x438634u: goto label_438634;
        case 0x438638u: goto label_438638;
        case 0x43863cu: goto label_43863c;
        case 0x438640u: goto label_438640;
        case 0x438644u: goto label_438644;
        case 0x438648u: goto label_438648;
        case 0x43864cu: goto label_43864c;
        case 0x438650u: goto label_438650;
        case 0x438654u: goto label_438654;
        case 0x438658u: goto label_438658;
        case 0x43865cu: goto label_43865c;
        case 0x438660u: goto label_438660;
        case 0x438664u: goto label_438664;
        case 0x438668u: goto label_438668;
        case 0x43866cu: goto label_43866c;
        case 0x438670u: goto label_438670;
        case 0x438674u: goto label_438674;
        case 0x438678u: goto label_438678;
        case 0x43867cu: goto label_43867c;
        case 0x438680u: goto label_438680;
        case 0x438684u: goto label_438684;
        case 0x438688u: goto label_438688;
        case 0x43868cu: goto label_43868c;
        case 0x438690u: goto label_438690;
        case 0x438694u: goto label_438694;
        case 0x438698u: goto label_438698;
        case 0x43869cu: goto label_43869c;
        case 0x4386a0u: goto label_4386a0;
        case 0x4386a4u: goto label_4386a4;
        case 0x4386a8u: goto label_4386a8;
        case 0x4386acu: goto label_4386ac;
        case 0x4386b0u: goto label_4386b0;
        case 0x4386b4u: goto label_4386b4;
        case 0x4386b8u: goto label_4386b8;
        case 0x4386bcu: goto label_4386bc;
        case 0x4386c0u: goto label_4386c0;
        case 0x4386c4u: goto label_4386c4;
        case 0x4386c8u: goto label_4386c8;
        case 0x4386ccu: goto label_4386cc;
        case 0x4386d0u: goto label_4386d0;
        case 0x4386d4u: goto label_4386d4;
        case 0x4386d8u: goto label_4386d8;
        case 0x4386dcu: goto label_4386dc;
        case 0x4386e0u: goto label_4386e0;
        case 0x4386e4u: goto label_4386e4;
        case 0x4386e8u: goto label_4386e8;
        case 0x4386ecu: goto label_4386ec;
        case 0x4386f0u: goto label_4386f0;
        case 0x4386f4u: goto label_4386f4;
        case 0x4386f8u: goto label_4386f8;
        case 0x4386fcu: goto label_4386fc;
        case 0x438700u: goto label_438700;
        case 0x438704u: goto label_438704;
        case 0x438708u: goto label_438708;
        case 0x43870cu: goto label_43870c;
        case 0x438710u: goto label_438710;
        case 0x438714u: goto label_438714;
        case 0x438718u: goto label_438718;
        case 0x43871cu: goto label_43871c;
        case 0x438720u: goto label_438720;
        case 0x438724u: goto label_438724;
        case 0x438728u: goto label_438728;
        case 0x43872cu: goto label_43872c;
        case 0x438730u: goto label_438730;
        case 0x438734u: goto label_438734;
        case 0x438738u: goto label_438738;
        case 0x43873cu: goto label_43873c;
        case 0x438740u: goto label_438740;
        case 0x438744u: goto label_438744;
        case 0x438748u: goto label_438748;
        case 0x43874cu: goto label_43874c;
        case 0x438750u: goto label_438750;
        case 0x438754u: goto label_438754;
        case 0x438758u: goto label_438758;
        case 0x43875cu: goto label_43875c;
        case 0x438760u: goto label_438760;
        case 0x438764u: goto label_438764;
        case 0x438768u: goto label_438768;
        case 0x43876cu: goto label_43876c;
        case 0x438770u: goto label_438770;
        case 0x438774u: goto label_438774;
        case 0x438778u: goto label_438778;
        case 0x43877cu: goto label_43877c;
        case 0x438780u: goto label_438780;
        case 0x438784u: goto label_438784;
        case 0x438788u: goto label_438788;
        case 0x43878cu: goto label_43878c;
        case 0x438790u: goto label_438790;
        case 0x438794u: goto label_438794;
        case 0x438798u: goto label_438798;
        case 0x43879cu: goto label_43879c;
        case 0x4387a0u: goto label_4387a0;
        case 0x4387a4u: goto label_4387a4;
        case 0x4387a8u: goto label_4387a8;
        case 0x4387acu: goto label_4387ac;
        case 0x4387b0u: goto label_4387b0;
        case 0x4387b4u: goto label_4387b4;
        case 0x4387b8u: goto label_4387b8;
        case 0x4387bcu: goto label_4387bc;
        case 0x4387c0u: goto label_4387c0;
        case 0x4387c4u: goto label_4387c4;
        case 0x4387c8u: goto label_4387c8;
        case 0x4387ccu: goto label_4387cc;
        case 0x4387d0u: goto label_4387d0;
        case 0x4387d4u: goto label_4387d4;
        case 0x4387d8u: goto label_4387d8;
        case 0x4387dcu: goto label_4387dc;
        case 0x4387e0u: goto label_4387e0;
        case 0x4387e4u: goto label_4387e4;
        case 0x4387e8u: goto label_4387e8;
        case 0x4387ecu: goto label_4387ec;
        case 0x4387f0u: goto label_4387f0;
        case 0x4387f4u: goto label_4387f4;
        case 0x4387f8u: goto label_4387f8;
        case 0x4387fcu: goto label_4387fc;
        case 0x438800u: goto label_438800;
        case 0x438804u: goto label_438804;
        case 0x438808u: goto label_438808;
        case 0x43880cu: goto label_43880c;
        case 0x438810u: goto label_438810;
        case 0x438814u: goto label_438814;
        case 0x438818u: goto label_438818;
        case 0x43881cu: goto label_43881c;
        case 0x438820u: goto label_438820;
        case 0x438824u: goto label_438824;
        case 0x438828u: goto label_438828;
        case 0x43882cu: goto label_43882c;
        case 0x438830u: goto label_438830;
        case 0x438834u: goto label_438834;
        case 0x438838u: goto label_438838;
        case 0x43883cu: goto label_43883c;
        case 0x438840u: goto label_438840;
        case 0x438844u: goto label_438844;
        case 0x438848u: goto label_438848;
        case 0x43884cu: goto label_43884c;
        case 0x438850u: goto label_438850;
        case 0x438854u: goto label_438854;
        case 0x438858u: goto label_438858;
        case 0x43885cu: goto label_43885c;
        case 0x438860u: goto label_438860;
        case 0x438864u: goto label_438864;
        case 0x438868u: goto label_438868;
        case 0x43886cu: goto label_43886c;
        case 0x438870u: goto label_438870;
        case 0x438874u: goto label_438874;
        case 0x438878u: goto label_438878;
        case 0x43887cu: goto label_43887c;
        case 0x438880u: goto label_438880;
        case 0x438884u: goto label_438884;
        case 0x438888u: goto label_438888;
        case 0x43888cu: goto label_43888c;
        case 0x438890u: goto label_438890;
        case 0x438894u: goto label_438894;
        case 0x438898u: goto label_438898;
        case 0x43889cu: goto label_43889c;
        case 0x4388a0u: goto label_4388a0;
        case 0x4388a4u: goto label_4388a4;
        case 0x4388a8u: goto label_4388a8;
        case 0x4388acu: goto label_4388ac;
        case 0x4388b0u: goto label_4388b0;
        case 0x4388b4u: goto label_4388b4;
        case 0x4388b8u: goto label_4388b8;
        case 0x4388bcu: goto label_4388bc;
        case 0x4388c0u: goto label_4388c0;
        case 0x4388c4u: goto label_4388c4;
        case 0x4388c8u: goto label_4388c8;
        case 0x4388ccu: goto label_4388cc;
        case 0x4388d0u: goto label_4388d0;
        case 0x4388d4u: goto label_4388d4;
        case 0x4388d8u: goto label_4388d8;
        case 0x4388dcu: goto label_4388dc;
        case 0x4388e0u: goto label_4388e0;
        case 0x4388e4u: goto label_4388e4;
        case 0x4388e8u: goto label_4388e8;
        case 0x4388ecu: goto label_4388ec;
        case 0x4388f0u: goto label_4388f0;
        case 0x4388f4u: goto label_4388f4;
        case 0x4388f8u: goto label_4388f8;
        case 0x4388fcu: goto label_4388fc;
        case 0x438900u: goto label_438900;
        case 0x438904u: goto label_438904;
        case 0x438908u: goto label_438908;
        case 0x43890cu: goto label_43890c;
        case 0x438910u: goto label_438910;
        case 0x438914u: goto label_438914;
        case 0x438918u: goto label_438918;
        case 0x43891cu: goto label_43891c;
        case 0x438920u: goto label_438920;
        case 0x438924u: goto label_438924;
        case 0x438928u: goto label_438928;
        case 0x43892cu: goto label_43892c;
        case 0x438930u: goto label_438930;
        case 0x438934u: goto label_438934;
        case 0x438938u: goto label_438938;
        case 0x43893cu: goto label_43893c;
        case 0x438940u: goto label_438940;
        case 0x438944u: goto label_438944;
        case 0x438948u: goto label_438948;
        case 0x43894cu: goto label_43894c;
        case 0x438950u: goto label_438950;
        case 0x438954u: goto label_438954;
        case 0x438958u: goto label_438958;
        case 0x43895cu: goto label_43895c;
        case 0x438960u: goto label_438960;
        case 0x438964u: goto label_438964;
        case 0x438968u: goto label_438968;
        case 0x43896cu: goto label_43896c;
        case 0x438970u: goto label_438970;
        case 0x438974u: goto label_438974;
        case 0x438978u: goto label_438978;
        case 0x43897cu: goto label_43897c;
        case 0x438980u: goto label_438980;
        case 0x438984u: goto label_438984;
        case 0x438988u: goto label_438988;
        case 0x43898cu: goto label_43898c;
        case 0x438990u: goto label_438990;
        case 0x438994u: goto label_438994;
        case 0x438998u: goto label_438998;
        case 0x43899cu: goto label_43899c;
        case 0x4389a0u: goto label_4389a0;
        case 0x4389a4u: goto label_4389a4;
        case 0x4389a8u: goto label_4389a8;
        case 0x4389acu: goto label_4389ac;
        case 0x4389b0u: goto label_4389b0;
        case 0x4389b4u: goto label_4389b4;
        case 0x4389b8u: goto label_4389b8;
        case 0x4389bcu: goto label_4389bc;
        case 0x4389c0u: goto label_4389c0;
        case 0x4389c4u: goto label_4389c4;
        case 0x4389c8u: goto label_4389c8;
        case 0x4389ccu: goto label_4389cc;
        case 0x4389d0u: goto label_4389d0;
        case 0x4389d4u: goto label_4389d4;
        case 0x4389d8u: goto label_4389d8;
        case 0x4389dcu: goto label_4389dc;
        case 0x4389e0u: goto label_4389e0;
        case 0x4389e4u: goto label_4389e4;
        case 0x4389e8u: goto label_4389e8;
        case 0x4389ecu: goto label_4389ec;
        case 0x4389f0u: goto label_4389f0;
        case 0x4389f4u: goto label_4389f4;
        case 0x4389f8u: goto label_4389f8;
        case 0x4389fcu: goto label_4389fc;
        case 0x438a00u: goto label_438a00;
        case 0x438a04u: goto label_438a04;
        case 0x438a08u: goto label_438a08;
        case 0x438a0cu: goto label_438a0c;
        case 0x438a10u: goto label_438a10;
        case 0x438a14u: goto label_438a14;
        case 0x438a18u: goto label_438a18;
        case 0x438a1cu: goto label_438a1c;
        case 0x438a20u: goto label_438a20;
        case 0x438a24u: goto label_438a24;
        case 0x438a28u: goto label_438a28;
        case 0x438a2cu: goto label_438a2c;
        case 0x438a30u: goto label_438a30;
        case 0x438a34u: goto label_438a34;
        case 0x438a38u: goto label_438a38;
        case 0x438a3cu: goto label_438a3c;
        case 0x438a40u: goto label_438a40;
        case 0x438a44u: goto label_438a44;
        case 0x438a48u: goto label_438a48;
        case 0x438a4cu: goto label_438a4c;
        case 0x438a50u: goto label_438a50;
        case 0x438a54u: goto label_438a54;
        case 0x438a58u: goto label_438a58;
        case 0x438a5cu: goto label_438a5c;
        case 0x438a60u: goto label_438a60;
        case 0x438a64u: goto label_438a64;
        case 0x438a68u: goto label_438a68;
        case 0x438a6cu: goto label_438a6c;
        case 0x438a70u: goto label_438a70;
        case 0x438a74u: goto label_438a74;
        case 0x438a78u: goto label_438a78;
        case 0x438a7cu: goto label_438a7c;
        case 0x438a80u: goto label_438a80;
        case 0x438a84u: goto label_438a84;
        case 0x438a88u: goto label_438a88;
        case 0x438a8cu: goto label_438a8c;
        case 0x438a90u: goto label_438a90;
        case 0x438a94u: goto label_438a94;
        case 0x438a98u: goto label_438a98;
        case 0x438a9cu: goto label_438a9c;
        case 0x438aa0u: goto label_438aa0;
        case 0x438aa4u: goto label_438aa4;
        case 0x438aa8u: goto label_438aa8;
        case 0x438aacu: goto label_438aac;
        case 0x438ab0u: goto label_438ab0;
        case 0x438ab4u: goto label_438ab4;
        case 0x438ab8u: goto label_438ab8;
        case 0x438abcu: goto label_438abc;
        case 0x438ac0u: goto label_438ac0;
        case 0x438ac4u: goto label_438ac4;
        case 0x438ac8u: goto label_438ac8;
        case 0x438accu: goto label_438acc;
        case 0x438ad0u: goto label_438ad0;
        case 0x438ad4u: goto label_438ad4;
        case 0x438ad8u: goto label_438ad8;
        case 0x438adcu: goto label_438adc;
        case 0x438ae0u: goto label_438ae0;
        case 0x438ae4u: goto label_438ae4;
        case 0x438ae8u: goto label_438ae8;
        case 0x438aecu: goto label_438aec;
        case 0x438af0u: goto label_438af0;
        case 0x438af4u: goto label_438af4;
        case 0x438af8u: goto label_438af8;
        case 0x438afcu: goto label_438afc;
        case 0x438b00u: goto label_438b00;
        case 0x438b04u: goto label_438b04;
        case 0x438b08u: goto label_438b08;
        case 0x438b0cu: goto label_438b0c;
        case 0x438b10u: goto label_438b10;
        case 0x438b14u: goto label_438b14;
        case 0x438b18u: goto label_438b18;
        case 0x438b1cu: goto label_438b1c;
        case 0x438b20u: goto label_438b20;
        case 0x438b24u: goto label_438b24;
        case 0x438b28u: goto label_438b28;
        case 0x438b2cu: goto label_438b2c;
        case 0x438b30u: goto label_438b30;
        case 0x438b34u: goto label_438b34;
        case 0x438b38u: goto label_438b38;
        case 0x438b3cu: goto label_438b3c;
        case 0x438b40u: goto label_438b40;
        case 0x438b44u: goto label_438b44;
        case 0x438b48u: goto label_438b48;
        case 0x438b4cu: goto label_438b4c;
        case 0x438b50u: goto label_438b50;
        case 0x438b54u: goto label_438b54;
        case 0x438b58u: goto label_438b58;
        case 0x438b5cu: goto label_438b5c;
        case 0x438b60u: goto label_438b60;
        case 0x438b64u: goto label_438b64;
        case 0x438b68u: goto label_438b68;
        case 0x438b6cu: goto label_438b6c;
        case 0x438b70u: goto label_438b70;
        case 0x438b74u: goto label_438b74;
        case 0x438b78u: goto label_438b78;
        case 0x438b7cu: goto label_438b7c;
        case 0x438b80u: goto label_438b80;
        case 0x438b84u: goto label_438b84;
        case 0x438b88u: goto label_438b88;
        case 0x438b8cu: goto label_438b8c;
        case 0x438b90u: goto label_438b90;
        case 0x438b94u: goto label_438b94;
        case 0x438b98u: goto label_438b98;
        case 0x438b9cu: goto label_438b9c;
        case 0x438ba0u: goto label_438ba0;
        case 0x438ba4u: goto label_438ba4;
        case 0x438ba8u: goto label_438ba8;
        case 0x438bacu: goto label_438bac;
        case 0x438bb0u: goto label_438bb0;
        case 0x438bb4u: goto label_438bb4;
        case 0x438bb8u: goto label_438bb8;
        case 0x438bbcu: goto label_438bbc;
        case 0x438bc0u: goto label_438bc0;
        case 0x438bc4u: goto label_438bc4;
        case 0x438bc8u: goto label_438bc8;
        case 0x438bccu: goto label_438bcc;
        case 0x438bd0u: goto label_438bd0;
        case 0x438bd4u: goto label_438bd4;
        case 0x438bd8u: goto label_438bd8;
        case 0x438bdcu: goto label_438bdc;
        case 0x438be0u: goto label_438be0;
        case 0x438be4u: goto label_438be4;
        case 0x438be8u: goto label_438be8;
        case 0x438becu: goto label_438bec;
        case 0x438bf0u: goto label_438bf0;
        case 0x438bf4u: goto label_438bf4;
        case 0x438bf8u: goto label_438bf8;
        case 0x438bfcu: goto label_438bfc;
        case 0x438c00u: goto label_438c00;
        case 0x438c04u: goto label_438c04;
        case 0x438c08u: goto label_438c08;
        case 0x438c0cu: goto label_438c0c;
        case 0x438c10u: goto label_438c10;
        case 0x438c14u: goto label_438c14;
        case 0x438c18u: goto label_438c18;
        case 0x438c1cu: goto label_438c1c;
        case 0x438c20u: goto label_438c20;
        case 0x438c24u: goto label_438c24;
        case 0x438c28u: goto label_438c28;
        case 0x438c2cu: goto label_438c2c;
        case 0x438c30u: goto label_438c30;
        case 0x438c34u: goto label_438c34;
        case 0x438c38u: goto label_438c38;
        case 0x438c3cu: goto label_438c3c;
        case 0x438c40u: goto label_438c40;
        case 0x438c44u: goto label_438c44;
        case 0x438c48u: goto label_438c48;
        case 0x438c4cu: goto label_438c4c;
        case 0x438c50u: goto label_438c50;
        case 0x438c54u: goto label_438c54;
        case 0x438c58u: goto label_438c58;
        case 0x438c5cu: goto label_438c5c;
        case 0x438c60u: goto label_438c60;
        case 0x438c64u: goto label_438c64;
        case 0x438c68u: goto label_438c68;
        case 0x438c6cu: goto label_438c6c;
        case 0x438c70u: goto label_438c70;
        case 0x438c74u: goto label_438c74;
        case 0x438c78u: goto label_438c78;
        case 0x438c7cu: goto label_438c7c;
        case 0x438c80u: goto label_438c80;
        case 0x438c84u: goto label_438c84;
        case 0x438c88u: goto label_438c88;
        case 0x438c8cu: goto label_438c8c;
        case 0x438c90u: goto label_438c90;
        case 0x438c94u: goto label_438c94;
        case 0x438c98u: goto label_438c98;
        case 0x438c9cu: goto label_438c9c;
        case 0x438ca0u: goto label_438ca0;
        case 0x438ca4u: goto label_438ca4;
        case 0x438ca8u: goto label_438ca8;
        case 0x438cacu: goto label_438cac;
        case 0x438cb0u: goto label_438cb0;
        case 0x438cb4u: goto label_438cb4;
        case 0x438cb8u: goto label_438cb8;
        case 0x438cbcu: goto label_438cbc;
        case 0x438cc0u: goto label_438cc0;
        case 0x438cc4u: goto label_438cc4;
        case 0x438cc8u: goto label_438cc8;
        case 0x438cccu: goto label_438ccc;
        case 0x438cd0u: goto label_438cd0;
        case 0x438cd4u: goto label_438cd4;
        case 0x438cd8u: goto label_438cd8;
        case 0x438cdcu: goto label_438cdc;
        case 0x438ce0u: goto label_438ce0;
        case 0x438ce4u: goto label_438ce4;
        case 0x438ce8u: goto label_438ce8;
        case 0x438cecu: goto label_438cec;
        case 0x438cf0u: goto label_438cf0;
        case 0x438cf4u: goto label_438cf4;
        case 0x438cf8u: goto label_438cf8;
        case 0x438cfcu: goto label_438cfc;
        case 0x438d00u: goto label_438d00;
        case 0x438d04u: goto label_438d04;
        case 0x438d08u: goto label_438d08;
        case 0x438d0cu: goto label_438d0c;
        case 0x438d10u: goto label_438d10;
        case 0x438d14u: goto label_438d14;
        case 0x438d18u: goto label_438d18;
        case 0x438d1cu: goto label_438d1c;
        case 0x438d20u: goto label_438d20;
        case 0x438d24u: goto label_438d24;
        case 0x438d28u: goto label_438d28;
        case 0x438d2cu: goto label_438d2c;
        case 0x438d30u: goto label_438d30;
        case 0x438d34u: goto label_438d34;
        case 0x438d38u: goto label_438d38;
        case 0x438d3cu: goto label_438d3c;
        case 0x438d40u: goto label_438d40;
        case 0x438d44u: goto label_438d44;
        case 0x438d48u: goto label_438d48;
        case 0x438d4cu: goto label_438d4c;
        case 0x438d50u: goto label_438d50;
        case 0x438d54u: goto label_438d54;
        case 0x438d58u: goto label_438d58;
        case 0x438d5cu: goto label_438d5c;
        case 0x438d60u: goto label_438d60;
        case 0x438d64u: goto label_438d64;
        case 0x438d68u: goto label_438d68;
        case 0x438d6cu: goto label_438d6c;
        case 0x438d70u: goto label_438d70;
        case 0x438d74u: goto label_438d74;
        case 0x438d78u: goto label_438d78;
        case 0x438d7cu: goto label_438d7c;
        case 0x438d80u: goto label_438d80;
        case 0x438d84u: goto label_438d84;
        case 0x438d88u: goto label_438d88;
        case 0x438d8cu: goto label_438d8c;
        case 0x438d90u: goto label_438d90;
        case 0x438d94u: goto label_438d94;
        case 0x438d98u: goto label_438d98;
        case 0x438d9cu: goto label_438d9c;
        case 0x438da0u: goto label_438da0;
        case 0x438da4u: goto label_438da4;
        case 0x438da8u: goto label_438da8;
        case 0x438dacu: goto label_438dac;
        case 0x438db0u: goto label_438db0;
        case 0x438db4u: goto label_438db4;
        case 0x438db8u: goto label_438db8;
        case 0x438dbcu: goto label_438dbc;
        case 0x438dc0u: goto label_438dc0;
        case 0x438dc4u: goto label_438dc4;
        case 0x438dc8u: goto label_438dc8;
        case 0x438dccu: goto label_438dcc;
        case 0x438dd0u: goto label_438dd0;
        case 0x438dd4u: goto label_438dd4;
        case 0x438dd8u: goto label_438dd8;
        case 0x438ddcu: goto label_438ddc;
        case 0x438de0u: goto label_438de0;
        case 0x438de4u: goto label_438de4;
        case 0x438de8u: goto label_438de8;
        case 0x438decu: goto label_438dec;
        case 0x438df0u: goto label_438df0;
        case 0x438df4u: goto label_438df4;
        case 0x438df8u: goto label_438df8;
        case 0x438dfcu: goto label_438dfc;
        case 0x438e00u: goto label_438e00;
        case 0x438e04u: goto label_438e04;
        case 0x438e08u: goto label_438e08;
        case 0x438e0cu: goto label_438e0c;
        case 0x438e10u: goto label_438e10;
        case 0x438e14u: goto label_438e14;
        case 0x438e18u: goto label_438e18;
        case 0x438e1cu: goto label_438e1c;
        case 0x438e20u: goto label_438e20;
        case 0x438e24u: goto label_438e24;
        case 0x438e28u: goto label_438e28;
        case 0x438e2cu: goto label_438e2c;
        case 0x438e30u: goto label_438e30;
        case 0x438e34u: goto label_438e34;
        case 0x438e38u: goto label_438e38;
        case 0x438e3cu: goto label_438e3c;
        case 0x438e40u: goto label_438e40;
        case 0x438e44u: goto label_438e44;
        case 0x438e48u: goto label_438e48;
        case 0x438e4cu: goto label_438e4c;
        case 0x438e50u: goto label_438e50;
        case 0x438e54u: goto label_438e54;
        case 0x438e58u: goto label_438e58;
        case 0x438e5cu: goto label_438e5c;
        case 0x438e60u: goto label_438e60;
        case 0x438e64u: goto label_438e64;
        case 0x438e68u: goto label_438e68;
        case 0x438e6cu: goto label_438e6c;
        case 0x438e70u: goto label_438e70;
        case 0x438e74u: goto label_438e74;
        case 0x438e78u: goto label_438e78;
        case 0x438e7cu: goto label_438e7c;
        case 0x438e80u: goto label_438e80;
        case 0x438e84u: goto label_438e84;
        case 0x438e88u: goto label_438e88;
        case 0x438e8cu: goto label_438e8c;
        case 0x438e90u: goto label_438e90;
        case 0x438e94u: goto label_438e94;
        case 0x438e98u: goto label_438e98;
        case 0x438e9cu: goto label_438e9c;
        case 0x438ea0u: goto label_438ea0;
        case 0x438ea4u: goto label_438ea4;
        case 0x438ea8u: goto label_438ea8;
        case 0x438eacu: goto label_438eac;
        case 0x438eb0u: goto label_438eb0;
        case 0x438eb4u: goto label_438eb4;
        case 0x438eb8u: goto label_438eb8;
        case 0x438ebcu: goto label_438ebc;
        case 0x438ec0u: goto label_438ec0;
        case 0x438ec4u: goto label_438ec4;
        case 0x438ec8u: goto label_438ec8;
        case 0x438eccu: goto label_438ecc;
        case 0x438ed0u: goto label_438ed0;
        case 0x438ed4u: goto label_438ed4;
        case 0x438ed8u: goto label_438ed8;
        case 0x438edcu: goto label_438edc;
        case 0x438ee0u: goto label_438ee0;
        case 0x438ee4u: goto label_438ee4;
        case 0x438ee8u: goto label_438ee8;
        case 0x438eecu: goto label_438eec;
        case 0x438ef0u: goto label_438ef0;
        case 0x438ef4u: goto label_438ef4;
        case 0x438ef8u: goto label_438ef8;
        case 0x438efcu: goto label_438efc;
        case 0x438f00u: goto label_438f00;
        case 0x438f04u: goto label_438f04;
        case 0x438f08u: goto label_438f08;
        case 0x438f0cu: goto label_438f0c;
        default: break;
    }

    ctx->pc = 0x437860u;

label_437860:
    // 0x437860: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x437860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_437864:
    // 0x437864: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x437864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_437868:
    // 0x437868: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x437868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_43786c:
    // 0x43786c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x43786cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_437870:
    // 0x437870: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x437870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_437874:
    // 0x437874: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x437874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_437878:
    // 0x437878: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x437878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_43787c:
    // 0x43787c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x43787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_437880:
    // 0x437880: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x437880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_437884:
    // 0x437884: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x437884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_437888:
    // 0x437888: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x437888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_43788c:
    // 0x43788c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x43788cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_437890:
    // 0x437890: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x437890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_437894:
    // 0x437894: 0x8c9e02d0  lw          $fp, 0x2D0($a0)
    ctx->pc = 0x437894u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_437898:
    // 0x437898: 0x13c000e4  beqz        $fp, . + 4 + (0xE4 << 2)
label_43789c:
    if (ctx->pc == 0x43789Cu) {
        ctx->pc = 0x43789Cu;
            // 0x43789c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4378A0u;
        goto label_4378a0;
    }
    ctx->pc = 0x437898u;
    {
        const bool branch_taken_0x437898 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x43789Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437898u;
            // 0x43789c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437898) {
            ctx->pc = 0x437C2Cu;
            goto label_437c2c;
        }
    }
    ctx->pc = 0x4378A0u;
label_4378a0:
    // 0x4378a0: 0xc6b50200  lwc1        $f21, 0x200($s5)
    ctx->pc = 0x4378a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4378a4:
    // 0x4378a4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4378a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4378a8:
    // 0x4378a8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x4378a8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4378ac:
    // 0x4378ac: 0xc04f26c  jal         func_13C9B0
label_4378b0:
    if (ctx->pc == 0x4378B0u) {
        ctx->pc = 0x4378B0u;
            // 0x4378b0: 0x26b402d8  addiu       $s4, $s5, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 728));
        ctx->pc = 0x4378B4u;
        goto label_4378b4;
    }
    ctx->pc = 0x4378ACu;
    SET_GPR_U32(ctx, 31, 0x4378B4u);
    ctx->pc = 0x4378B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378ACu;
            // 0x4378b0: 0x26b402d8  addiu       $s4, $s5, 0x2D8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378B4u; }
        if (ctx->pc != 0x4378B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378B4u; }
        if (ctx->pc != 0x4378B4u) { return; }
    }
    ctx->pc = 0x4378B4u;
label_4378b4:
    // 0x4378b4: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x4378b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4378b8:
    // 0x4378b8: 0xc04f278  jal         func_13C9E0
label_4378bc:
    if (ctx->pc == 0x4378BCu) {
        ctx->pc = 0x4378BCu;
            // 0x4378bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x4378C0u;
        goto label_4378c0;
    }
    ctx->pc = 0x4378B8u;
    SET_GPR_U32(ctx, 31, 0x4378C0u);
    ctx->pc = 0x4378BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378B8u;
            // 0x4378bc: 0x26a50020  addiu       $a1, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378C0u; }
        if (ctx->pc != 0x4378C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378C0u; }
        if (ctx->pc != 0x4378C0u) { return; }
    }
    ctx->pc = 0x4378C0u;
label_4378c0:
    // 0x4378c0: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4378c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4378c4:
    // 0x4378c4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4378c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4378c8:
    // 0x4378c8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4378c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4378cc:
    // 0x4378cc: 0xc04cca0  jal         func_133280
label_4378d0:
    if (ctx->pc == 0x4378D0u) {
        ctx->pc = 0x4378D0u;
            // 0x4378d0: 0x24c6cf20  addiu       $a2, $a2, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954784));
        ctx->pc = 0x4378D4u;
        goto label_4378d4;
    }
    ctx->pc = 0x4378CCu;
    SET_GPR_U32(ctx, 31, 0x4378D4u);
    ctx->pc = 0x4378D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378CCu;
            // 0x4378d0: 0x24c6cf20  addiu       $a2, $a2, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378D4u; }
        if (ctx->pc != 0x4378D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378D4u; }
        if (ctx->pc != 0x4378D4u) { return; }
    }
    ctx->pc = 0x4378D4u;
label_4378d4:
    // 0x4378d4: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4378d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4378d8:
    // 0x4378d8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4378d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4378dc:
    // 0x4378dc: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x4378dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_4378e0:
    // 0x4378e0: 0xc04cca0  jal         func_133280
label_4378e4:
    if (ctx->pc == 0x4378E4u) {
        ctx->pc = 0x4378E4u;
            // 0x4378e4: 0x24c6cf30  addiu       $a2, $a2, -0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954800));
        ctx->pc = 0x4378E8u;
        goto label_4378e8;
    }
    ctx->pc = 0x4378E0u;
    SET_GPR_U32(ctx, 31, 0x4378E8u);
    ctx->pc = 0x4378E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378E0u;
            // 0x4378e4: 0x24c6cf30  addiu       $a2, $a2, -0x30D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378E8u; }
        if (ctx->pc != 0x4378E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378E8u; }
        if (ctx->pc != 0x4378E8u) { return; }
    }
    ctx->pc = 0x4378E8u;
label_4378e8:
    // 0x4378e8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x4378e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_4378ec:
    // 0x4378ec: 0xc04cc44  jal         func_133110
label_4378f0:
    if (ctx->pc == 0x4378F0u) {
        ctx->pc = 0x4378F0u;
            // 0x4378f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4378F4u;
        goto label_4378f4;
    }
    ctx->pc = 0x4378ECu;
    SET_GPR_U32(ctx, 31, 0x4378F4u);
    ctx->pc = 0x4378F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378ECu;
            // 0x4378f0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378F4u; }
        if (ctx->pc != 0x4378F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4378F4u; }
        if (ctx->pc != 0x4378F4u) { return; }
    }
    ctx->pc = 0x4378F4u;
label_4378f4:
    // 0x4378f4: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4378f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4378f8:
    // 0x4378f8: 0xc04cc44  jal         func_133110
label_4378fc:
    if (ctx->pc == 0x4378FCu) {
        ctx->pc = 0x4378FCu;
            // 0x4378fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437900u;
        goto label_437900;
    }
    ctx->pc = 0x4378F8u;
    SET_GPR_U32(ctx, 31, 0x437900u);
    ctx->pc = 0x4378FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4378F8u;
            // 0x4378fc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437900u; }
        if (ctx->pc != 0x437900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437900u; }
        if (ctx->pc != 0x437900u) { return; }
    }
    ctx->pc = 0x437900u;
label_437900:
    // 0x437900: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x437900u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_437904:
    // 0x437904: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x437904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_437908:
    // 0x437908: 0xc4741360  lwc1        $f20, 0x1360($v1)
    ctx->pc = 0x437908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_43790c:
    // 0x43790c: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x43790cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_437910:
    // 0x437910: 0x126000c1  beqz        $s3, . + 4 + (0xC1 << 2)
label_437914:
    if (ctx->pc == 0x437914u) {
        ctx->pc = 0x437918u;
        goto label_437918;
    }
    ctx->pc = 0x437910u;
    {
        const bool branch_taken_0x437910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x437910) {
            ctx->pc = 0x437C18u;
            goto label_437c18;
        }
    }
    ctx->pc = 0x437918u;
label_437918:
    // 0x437918: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x437918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_43791c:
    // 0x43791c: 0x26b20270  addiu       $s2, $s5, 0x270
    ctx->pc = 0x43791cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 624));
label_437920:
    // 0x437920: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x437920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_437924:
    // 0x437924: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x437924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_437928:
    // 0x437928: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x437928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_43792c:
    // 0x43792c: 0xc0b8024  jal         func_2E0090
label_437930:
    if (ctx->pc == 0x437930u) {
        ctx->pc = 0x437930u;
            // 0x437930: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x437934u;
        goto label_437934;
    }
    ctx->pc = 0x43792Cu;
    SET_GPR_U32(ctx, 31, 0x437934u);
    ctx->pc = 0x437930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43792Cu;
            // 0x437930: 0x4600ab02  mul.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0090u;
    if (runtime->hasFunction(0x2E0090u)) {
        auto targetFn = runtime->lookupFunction(0x2E0090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437934u; }
        if (ctx->pc != 0x437934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0090_0x2e0090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437934u; }
        if (ctx->pc != 0x437934u) { return; }
    }
    ctx->pc = 0x437934u;
label_437934:
    // 0x437934: 0x96430050  lhu         $v1, 0x50($s2)
    ctx->pc = 0x437934u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 80)));
label_437938:
    // 0x437938: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x437938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_43793c:
    // 0x43793c: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_437940:
    if (ctx->pc == 0x437940u) {
        ctx->pc = 0x437944u;
        goto label_437944;
    }
    ctx->pc = 0x43793Cu;
    {
        const bool branch_taken_0x43793c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x43793c) {
            ctx->pc = 0x437968u;
            goto label_437968;
        }
    }
    ctx->pc = 0x437944u;
label_437944:
    // 0x437944: 0x8e640d74  lw          $a0, 0xD74($s3)
    ctx->pc = 0x437944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_437948:
    // 0x437948: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x437948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_43794c:
    // 0x43794c: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x43794cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_437950:
    // 0x437950: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x437950u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_437954:
    // 0x437954: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x437954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_437958:
    // 0x437958: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x437958u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_43795c:
    // 0x43795c: 0x14620028  bne         $v1, $v0, . + 4 + (0x28 << 2)
label_437960:
    if (ctx->pc == 0x437960u) {
        ctx->pc = 0x437964u;
        goto label_437964;
    }
    ctx->pc = 0x43795Cu;
    {
        const bool branch_taken_0x43795c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x43795c) {
            ctx->pc = 0x437A00u;
            goto label_437a00;
        }
    }
    ctx->pc = 0x437964u;
label_437964:
    // 0x437964: 0x0  nop
    ctx->pc = 0x437964u;
    // NOP
label_437968:
    // 0x437968: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x437968u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_43796c:
    // 0x43796c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x43796cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_437970:
    // 0x437970: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x437970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_437974:
    // 0x437974: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x437974u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_437978:
    // 0x437978: 0x320f809  jalr        $t9
label_43797c:
    if (ctx->pc == 0x43797Cu) {
        ctx->pc = 0x43797Cu;
            // 0x43797c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x437980u;
        goto label_437980;
    }
    ctx->pc = 0x437978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x437980u);
        ctx->pc = 0x43797Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437978u;
            // 0x43797c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x437980u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x437980u; }
            if (ctx->pc != 0x437980u) { return; }
        }
        }
    }
    ctx->pc = 0x437980u;
label_437980:
    // 0x437980: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x437980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_437984:
    // 0x437984: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x437984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_437988:
    // 0x437988: 0xae620db8  sw          $v0, 0xDB8($s3)
    ctx->pc = 0x437988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
label_43798c:
    // 0x43798c: 0x8e710d74  lw          $s1, 0xD74($s3)
    ctx->pc = 0x43798cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_437990:
    // 0x437990: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x437990u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_437994:
    // 0x437994: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x437994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_437998:
    // 0x437998: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x437998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_43799c:
    // 0x43799c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x43799cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4379a0:
    // 0x4379a0: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x4379a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4379a4:
    // 0x4379a4: 0xc0a545c  jal         func_295170
label_4379a8:
    if (ctx->pc == 0x4379A8u) {
        ctx->pc = 0x4379A8u;
            // 0x4379a8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4379ACu;
        goto label_4379ac;
    }
    ctx->pc = 0x4379A4u;
    SET_GPR_U32(ctx, 31, 0x4379ACu);
    ctx->pc = 0x4379A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4379A4u;
            // 0x4379a8: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379ACu; }
        if (ctx->pc != 0x4379ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379ACu; }
        if (ctx->pc != 0x4379ACu) { return; }
    }
    ctx->pc = 0x4379ACu;
label_4379ac:
    // 0x4379ac: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x4379acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_4379b0:
    // 0x4379b0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4379b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4379b4:
    // 0x4379b4: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4379b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4379b8:
    // 0x4379b8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4379b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4379bc:
    // 0x4379bc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4379bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4379c0:
    // 0x4379c0: 0xc08bf20  jal         func_22FC80
label_4379c4:
    if (ctx->pc == 0x4379C4u) {
        ctx->pc = 0x4379C4u;
            // 0x4379c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4379C8u;
        goto label_4379c8;
    }
    ctx->pc = 0x4379C0u;
    SET_GPR_U32(ctx, 31, 0x4379C8u);
    ctx->pc = 0x4379C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4379C0u;
            // 0x4379c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379C8u; }
        if (ctx->pc != 0x4379C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379C8u; }
        if (ctx->pc != 0x4379C8u) { return; }
    }
    ctx->pc = 0x4379C8u;
label_4379c8:
    // 0x4379c8: 0x8e620d60  lw          $v0, 0xD60($s3)
    ctx->pc = 0x4379c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_4379cc:
    // 0x4379cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4379ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4379d0:
    // 0x4379d0: 0x26710580  addiu       $s1, $s3, 0x580
    ctx->pc = 0x4379d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_4379d4:
    // 0x4379d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x4379d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4379d8:
    // 0x4379d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4379d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4379dc:
    // 0x4379dc: 0xa043001c  sb          $v1, 0x1C($v0)
    ctx->pc = 0x4379dcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 3));
label_4379e0:
    // 0x4379e0: 0x8e620d9c  lw          $v0, 0xD9C($s3)
    ctx->pc = 0x4379e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_4379e4:
    // 0x4379e4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4379e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4379e8:
    // 0x4379e8: 0xae620d9c  sw          $v0, 0xD9C($s3)
    ctx->pc = 0x4379e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
label_4379ec:
    // 0x4379ec: 0xc0ab808  jal         func_2AE020
label_4379f0:
    if (ctx->pc == 0x4379F0u) {
        ctx->pc = 0x4379F0u;
            // 0x4379f0: 0xae600698  sw          $zero, 0x698($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 0));
        ctx->pc = 0x4379F4u;
        goto label_4379f4;
    }
    ctx->pc = 0x4379ECu;
    SET_GPR_U32(ctx, 31, 0x4379F4u);
    ctx->pc = 0x4379F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4379ECu;
            // 0x4379f0: 0xae600698  sw          $zero, 0x698($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379F4u; }
        if (ctx->pc != 0x4379F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4379F4u; }
        if (ctx->pc != 0x4379F4u) { return; }
    }
    ctx->pc = 0x4379F4u;
label_4379f4:
    // 0x4379f4: 0x10000088  b           . + 4 + (0x88 << 2)
label_4379f8:
    if (ctx->pc == 0x4379F8u) {
        ctx->pc = 0x4379F8u;
            // 0x4379f8: 0xe6340110  swc1        $f20, 0x110($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
        ctx->pc = 0x4379FCu;
        goto label_4379fc;
    }
    ctx->pc = 0x4379F4u;
    {
        const bool branch_taken_0x4379f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4379F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4379F4u;
            // 0x4379f8: 0xe6340110  swc1        $f20, 0x110($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4379f4) {
            ctx->pc = 0x437C18u;
            goto label_437c18;
        }
    }
    ctx->pc = 0x4379FCu;
label_4379fc:
    // 0x4379fc: 0x0  nop
    ctx->pc = 0x4379fcu;
    // NOP
label_437a00:
    // 0x437a00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x437a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_437a04:
    // 0x437a04: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x437a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_437a08:
    // 0x437a08: 0xc60102e8  lwc1        $f1, 0x2E8($s0)
    ctx->pc = 0x437a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437a0c:
    // 0x437a0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x437a0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_437a10:
    // 0x437a10: 0xc4420018  lwc1        $f2, 0x18($v0)
    ctx->pc = 0x437a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_437a14:
    // 0x437a14: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x437a14u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_437a18:
    // 0x437a18: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x437a18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437a1c:
    // 0x437a1c: 0x4500003e  bc1f        . + 4 + (0x3E << 2)
label_437a20:
    if (ctx->pc == 0x437A20u) {
        ctx->pc = 0x437A20u;
            // 0x437a20: 0xe60102e8  swc1        $f1, 0x2E8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
        ctx->pc = 0x437A24u;
        goto label_437a24;
    }
    ctx->pc = 0x437A1Cu;
    {
        const bool branch_taken_0x437a1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x437A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437A1Cu;
            // 0x437a20: 0xe60102e8  swc1        $f1, 0x2E8($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 744), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a1c) {
            ctx->pc = 0x437B18u;
            goto label_437b18;
        }
    }
    ctx->pc = 0x437A24u;
label_437a24:
    // 0x437a24: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x437a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_437a28:
    // 0x437a28: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x437a28u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_437a2c:
    // 0x437a2c: 0xae0202e8  sw          $v0, 0x2E8($s0)
    ctx->pc = 0x437a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 2));
label_437a30:
    // 0x437a30: 0x8e620e34  lw          $v0, 0xE34($s3)
    ctx->pc = 0x437a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3636)));
label_437a34:
    // 0x437a34: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_437a38:
    if (ctx->pc == 0x437A38u) {
        ctx->pc = 0x437A38u;
            // 0x437a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437A3Cu;
        goto label_437a3c;
    }
    ctx->pc = 0x437A34u;
    {
        const bool branch_taken_0x437a34 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x437A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437A34u;
            // 0x437a38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437a34) {
            ctx->pc = 0x437A50u;
            goto label_437a50;
        }
    }
    ctx->pc = 0x437A3Cu;
label_437a3c:
    // 0x437a3c: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x437a3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_437a40:
    // 0x437a40: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_437a44:
    if (ctx->pc == 0x437A44u) {
        ctx->pc = 0x437A48u;
        goto label_437a48;
    }
    ctx->pc = 0x437A40u;
    {
        const bool branch_taken_0x437a40 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x437a40) {
            ctx->pc = 0x437A50u;
            goto label_437a50;
        }
    }
    ctx->pc = 0x437A48u;
label_437a48:
    // 0x437a48: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x437a48u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_437a4c:
    // 0x437a4c: 0x0  nop
    ctx->pc = 0x437a4cu;
    // NOP
label_437a50:
    // 0x437a50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_437a54:
    if (ctx->pc == 0x437A54u) {
        ctx->pc = 0x437A58u;
        goto label_437a58;
    }
    ctx->pc = 0x437A50u;
    {
        const bool branch_taken_0x437a50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x437a50) {
            ctx->pc = 0x437A70u;
            goto label_437a70;
        }
    }
    ctx->pc = 0x437A58u;
label_437a58:
    // 0x437a58: 0xc075eb4  jal         func_1D7AD0
label_437a5c:
    if (ctx->pc == 0x437A5Cu) {
        ctx->pc = 0x437A5Cu;
            // 0x437a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437A60u;
        goto label_437a60;
    }
    ctx->pc = 0x437A58u;
    SET_GPR_U32(ctx, 31, 0x437A60u);
    ctx->pc = 0x437A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437A58u;
            // 0x437a5c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437A60u; }
        if (ctx->pc != 0x437A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437A60u; }
        if (ctx->pc != 0x437A60u) { return; }
    }
    ctx->pc = 0x437A60u;
label_437a60:
    // 0x437a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_437a64:
    if (ctx->pc == 0x437A64u) {
        ctx->pc = 0x437A68u;
        goto label_437a68;
    }
    ctx->pc = 0x437A60u;
    {
        const bool branch_taken_0x437a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437a60) {
            ctx->pc = 0x437A70u;
            goto label_437a70;
        }
    }
    ctx->pc = 0x437A68u;
label_437a68:
    // 0x437a68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x437a68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437a6c:
    // 0x437a6c: 0x0  nop
    ctx->pc = 0x437a6cu;
    // NOP
label_437a70:
    // 0x437a70: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_437a74:
    if (ctx->pc == 0x437A74u) {
        ctx->pc = 0x437A78u;
        goto label_437a78;
    }
    ctx->pc = 0x437A70u;
    {
        const bool branch_taken_0x437a70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x437a70) {
            ctx->pc = 0x437B18u;
            goto label_437b18;
        }
    }
    ctx->pc = 0x437A78u;
label_437a78:
    // 0x437a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x437a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_437a7c:
    // 0x437a7c: 0x8e640d98  lw          $a0, 0xD98($s3)
    ctx->pc = 0x437a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_437a80:
    // 0x437a80: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x437a80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_437a84:
    // 0x437a84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437a88:
    // 0x437a88: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x437a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_437a8c:
    // 0x437a8c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x437a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_437a90:
    // 0x437a90: 0x1c400021  bgtz        $v0, . + 4 + (0x21 << 2)
label_437a94:
    if (ctx->pc == 0x437A94u) {
        ctx->pc = 0x437A98u;
        goto label_437a98;
    }
    ctx->pc = 0x437A90u;
    {
        const bool branch_taken_0x437a90 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x437a90) {
            ctx->pc = 0x437B18u;
            goto label_437b18;
        }
    }
    ctx->pc = 0x437A98u;
label_437a98:
    // 0x437a98: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x437a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_437a9c:
    // 0x437a9c: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x437a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_437aa0:
    // 0x437aa0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x437aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_437aa4:
    // 0x437aa4: 0x245602b8  addiu       $s6, $v0, 0x2B8
    ctx->pc = 0x437aa4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_437aa8:
    // 0x437aa8: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x437aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_437aac:
    // 0x437aac: 0xc040180  jal         func_100600
label_437ab0:
    if (ctx->pc == 0x437AB0u) {
        ctx->pc = 0x437AB0u;
            // 0x437ab0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x437AB4u;
        goto label_437ab4;
    }
    ctx->pc = 0x437AACu;
    SET_GPR_U32(ctx, 31, 0x437AB4u);
    ctx->pc = 0x437AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437AACu;
            // 0x437ab0: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437AB4u; }
        if (ctx->pc != 0x437AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437AB4u; }
        if (ctx->pc != 0x437AB4u) { return; }
    }
    ctx->pc = 0x437AB4u;
label_437ab4:
    // 0x437ab4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_437ab8:
    if (ctx->pc == 0x437AB8u) {
        ctx->pc = 0x437AB8u;
            // 0x437ab8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437ABCu;
        goto label_437abc;
    }
    ctx->pc = 0x437AB4u;
    {
        const bool branch_taken_0x437ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x437AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437AB4u;
            // 0x437ab8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ab4) {
            ctx->pc = 0x437B18u;
            goto label_437b18;
        }
    }
    ctx->pc = 0x437ABCu;
label_437abc:
    // 0x437abc: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x437abcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_437ac0:
    // 0x437ac0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x437ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_437ac4:
    // 0x437ac4: 0x8e760d98  lw          $s6, 0xD98($s3)
    ctx->pc = 0x437ac4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3480)));
label_437ac8:
    // 0x437ac8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x437ac8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437acc:
    // 0x437acc: 0x826911aa  lb          $t1, 0x11AA($s3)
    ctx->pc = 0x437accu;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 4522)));
label_437ad0:
    // 0x437ad0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x437ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_437ad4:
    // 0x437ad4: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x437ad4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_437ad8:
    // 0x437ad8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x437ad8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_437adc:
    // 0x437adc: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x437adcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_437ae0:
    // 0x437ae0: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x437ae0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_437ae4:
    // 0x437ae4: 0xc0b9404  jal         func_2E5010
label_437ae8:
    if (ctx->pc == 0x437AE8u) {
        ctx->pc = 0x437AE8u;
            // 0x437ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437AECu;
        goto label_437aec;
    }
    ctx->pc = 0x437AE4u;
    SET_GPR_U32(ctx, 31, 0x437AECu);
    ctx->pc = 0x437AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437AE4u;
            // 0x437ae8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437AECu; }
        if (ctx->pc != 0x437AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437AECu; }
        if (ctx->pc != 0x437AECu) { return; }
    }
    ctx->pc = 0x437AECu;
label_437aec:
    // 0x437aec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x437aecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437af0:
    // 0x437af0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x437af0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_437af4:
    // 0x437af4: 0x2c21004  sllv        $v0, $v0, $s6
    ctx->pc = 0x437af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 22) & 0x1F));
label_437af8:
    // 0x437af8: 0x24634160  addiu       $v1, $v1, 0x4160
    ctx->pc = 0x437af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16736));
label_437afc:
    // 0x437afc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x437afcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_437b00:
    // 0x437b00: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x437b00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_437b04:
    // 0x437b04: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x437b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_437b08:
    // 0x437b08: 0x90433db0  lbu         $v1, 0x3DB0($v0)
    ctx->pc = 0x437b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 15792)));
label_437b0c:
    // 0x437b0c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x437b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_437b10:
    // 0x437b10: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x437b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_437b14:
    // 0x437b14: 0xa0433db0  sb          $v1, 0x3DB0($v0)
    ctx->pc = 0x437b14u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 15792), (uint8_t)GPR_U32(ctx, 3));
label_437b18:
    // 0x437b18: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x437b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_437b1c:
    // 0x437b1c: 0xae620db8  sw          $v0, 0xDB8($s3)
    ctx->pc = 0x437b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
label_437b20:
    // 0x437b20: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x437b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_437b24:
    // 0x437b24: 0xc6a00200  lwc1        $f0, 0x200($s5)
    ctx->pc = 0x437b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437b28:
    // 0x437b28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x437b28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_437b2c:
    // 0x437b2c: 0xc04cc04  jal         func_133010
label_437b30:
    if (ctx->pc == 0x437B30u) {
        ctx->pc = 0x437B30u;
            // 0x437b30: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->pc = 0x437B34u;
        goto label_437b34;
    }
    ctx->pc = 0x437B2Cu;
    SET_GPR_U32(ctx, 31, 0x437B34u);
    ctx->pc = 0x437B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B2Cu;
            // 0x437b30: 0xe6600de4  swc1        $f0, 0xDE4($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B34u; }
        if (ctx->pc != 0x437B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B34u; }
        if (ctx->pc != 0x437B34u) { return; }
    }
    ctx->pc = 0x437B34u;
label_437b34:
    // 0x437b34: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x437b34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_437b38:
    // 0x437b38: 0xc04cc04  jal         func_133010
label_437b3c:
    if (ctx->pc == 0x437B3Cu) {
        ctx->pc = 0x437B3Cu;
            // 0x437b3c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x437B40u;
        goto label_437b40;
    }
    ctx->pc = 0x437B38u;
    SET_GPR_U32(ctx, 31, 0x437B40u);
    ctx->pc = 0x437B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B38u;
            // 0x437b3c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B40u; }
        if (ctx->pc != 0x437B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B40u; }
        if (ctx->pc != 0x437B40u) { return; }
    }
    ctx->pc = 0x437B40u;
label_437b40:
    // 0x437b40: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x437b40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_437b44:
    // 0x437b44: 0xc04cc04  jal         func_133010
label_437b48:
    if (ctx->pc == 0x437B48u) {
        ctx->pc = 0x437B48u;
            // 0x437b48: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x437B4Cu;
        goto label_437b4c;
    }
    ctx->pc = 0x437B44u;
    SET_GPR_U32(ctx, 31, 0x437B4Cu);
    ctx->pc = 0x437B48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B44u;
            // 0x437b48: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B4Cu; }
        if (ctx->pc != 0x437B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B4Cu; }
        if (ctx->pc != 0x437B4Cu) { return; }
    }
    ctx->pc = 0x437B4Cu;
label_437b4c:
    // 0x437b4c: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x437b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_437b50:
    // 0x437b50: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x437b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_437b54:
    // 0x437b54: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x437b54u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437b58:
    // 0x437b58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x437b58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_437b5c:
    // 0x437b5c: 0xc04cc7c  jal         func_1331F0
label_437b60:
    if (ctx->pc == 0x437B60u) {
        ctx->pc = 0x437B60u;
            // 0x437b60: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x437B64u;
        goto label_437b64;
    }
    ctx->pc = 0x437B5Cu;
    SET_GPR_U32(ctx, 31, 0x437B64u);
    ctx->pc = 0x437B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B5Cu;
            // 0x437b60: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B64u; }
        if (ctx->pc != 0x437B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B64u; }
        if (ctx->pc != 0x437B64u) { return; }
    }
    ctx->pc = 0x437B64u;
label_437b64:
    // 0x437b64: 0xc66103a4  lwc1        $f1, 0x3A4($s3)
    ctx->pc = 0x437b64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437b68:
    // 0x437b68: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x437b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_437b6c:
    // 0x437b6c: 0xc7a000b4  lwc1        $f0, 0xB4($sp)
    ctx->pc = 0x437b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437b70:
    // 0x437b70: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x437b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_437b74:
    // 0x437b74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x437b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_437b78:
    // 0x437b78: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x437b78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_437b7c:
    // 0x437b7c: 0xc04cc90  jal         func_133240
label_437b80:
    if (ctx->pc == 0x437B80u) {
        ctx->pc = 0x437B80u;
            // 0x437b80: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->pc = 0x437B84u;
        goto label_437b84;
    }
    ctx->pc = 0x437B7Cu;
    SET_GPR_U32(ctx, 31, 0x437B84u);
    ctx->pc = 0x437B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B7Cu;
            // 0x437b80: 0xe7a000b4  swc1        $f0, 0xB4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B84u; }
        if (ctx->pc != 0x437B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B84u; }
        if (ctx->pc != 0x437B84u) { return; }
    }
    ctx->pc = 0x437B84u;
label_437b84:
    // 0x437b84: 0x26640340  addiu       $a0, $s3, 0x340
    ctx->pc = 0x437b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 832));
label_437b88:
    // 0x437b88: 0xc04cc04  jal         func_133010
label_437b8c:
    if (ctx->pc == 0x437B8Cu) {
        ctx->pc = 0x437B8Cu;
            // 0x437b8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x437B90u;
        goto label_437b90;
    }
    ctx->pc = 0x437B88u;
    SET_GPR_U32(ctx, 31, 0x437B90u);
    ctx->pc = 0x437B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B88u;
            // 0x437b8c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B90u; }
        if (ctx->pc != 0x437B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B90u; }
        if (ctx->pc != 0x437B90u) { return; }
    }
    ctx->pc = 0x437B90u;
label_437b90:
    // 0x437b90: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x437b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437b94:
    // 0x437b94: 0xc075318  jal         func_1D4C60
label_437b98:
    if (ctx->pc == 0x437B98u) {
        ctx->pc = 0x437B98u;
            // 0x437b98: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->pc = 0x437B9Cu;
        goto label_437b9c;
    }
    ctx->pc = 0x437B94u;
    SET_GPR_U32(ctx, 31, 0x437B9Cu);
    ctx->pc = 0x437B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437B94u;
            // 0x437b98: 0x266502e0  addiu       $a1, $s3, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B9Cu; }
        if (ctx->pc != 0x437B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437B9Cu; }
        if (ctx->pc != 0x437B9Cu) { return; }
    }
    ctx->pc = 0x437B9Cu;
label_437b9c:
    // 0x437b9c: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x437b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437ba0:
    // 0x437ba0: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x437ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_437ba4:
    // 0x437ba4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x437ba4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437ba8:
    // 0x437ba8: 0xc0c6250  jal         func_318940
label_437bac:
    if (ctx->pc == 0x437BACu) {
        ctx->pc = 0x437BACu;
            // 0x437bac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437BB0u;
        goto label_437bb0;
    }
    ctx->pc = 0x437BA8u;
    SET_GPR_U32(ctx, 31, 0x437BB0u);
    ctx->pc = 0x437BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437BA8u;
            // 0x437bac: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BB0u; }
        if (ctx->pc != 0x437BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BB0u; }
        if (ctx->pc != 0x437BB0u) { return; }
    }
    ctx->pc = 0x437BB0u;
label_437bb0:
    // 0x437bb0: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x437bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_437bb4:
    // 0x437bb4: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x437bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437bb8:
    // 0x437bb8: 0xc075378  jal         func_1D4DE0
label_437bbc:
    if (ctx->pc == 0x437BBCu) {
        ctx->pc = 0x437BBCu;
            // 0x437bbc: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->pc = 0x437BC0u;
        goto label_437bc0;
    }
    ctx->pc = 0x437BB8u;
    SET_GPR_U32(ctx, 31, 0x437BC0u);
    ctx->pc = 0x437BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437BB8u;
            // 0x437bbc: 0x26660830  addiu       $a2, $s3, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BC0u; }
        if (ctx->pc != 0x437BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BC0u; }
        if (ctx->pc != 0x437BC0u) { return; }
    }
    ctx->pc = 0x437BC0u;
label_437bc0:
    // 0x437bc0: 0xc6610880  lwc1        $f1, 0x880($s3)
    ctx->pc = 0x437bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437bc4:
    // 0x437bc4: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x437bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_437bc8:
    // 0x437bc8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x437bc8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_437bcc:
    // 0x437bcc: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x437bccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_437bd0:
    // 0x437bd0: 0xc0c753c  jal         func_31D4F0
label_437bd4:
    if (ctx->pc == 0x437BD4u) {
        ctx->pc = 0x437BD4u;
            // 0x437bd4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x437BD8u;
        goto label_437bd8;
    }
    ctx->pc = 0x437BD0u;
    SET_GPR_U32(ctx, 31, 0x437BD8u);
    ctx->pc = 0x437BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437BD0u;
            // 0x437bd4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BD8u; }
        if (ctx->pc != 0x437BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BD8u; }
        if (ctx->pc != 0x437BD8u) { return; }
    }
    ctx->pc = 0x437BD8u;
label_437bd8:
    // 0x437bd8: 0xc66c0930  lwc1        $f12, 0x930($s3)
    ctx->pc = 0x437bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_437bdc:
    // 0x437bdc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x437bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_437be0:
    // 0x437be0: 0xc66d0880  lwc1        $f13, 0x880($s3)
    ctx->pc = 0x437be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_437be4:
    // 0x437be4: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x437be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_437be8:
    // 0x437be8: 0xc0c753c  jal         func_31D4F0
label_437bec:
    if (ctx->pc == 0x437BECu) {
        ctx->pc = 0x437BECu;
            // 0x437bec: 0x2664092c  addiu       $a0, $s3, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
        ctx->pc = 0x437BF0u;
        goto label_437bf0;
    }
    ctx->pc = 0x437BE8u;
    SET_GPR_U32(ctx, 31, 0x437BF0u);
    ctx->pc = 0x437BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437BE8u;
            // 0x437bec: 0x2664092c  addiu       $a0, $s3, 0x92C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BF0u; }
        if (ctx->pc != 0x437BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437BF0u; }
        if (ctx->pc != 0x437BF0u) { return; }
    }
    ctx->pc = 0x437BF0u;
label_437bf0:
    // 0x437bf0: 0x26630890  addiu       $v1, $s3, 0x890
    ctx->pc = 0x437bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_437bf4:
    // 0x437bf4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x437bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_437bf8:
    // 0x437bf8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x437bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437bfc:
    // 0x437bfc: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x437bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_437c00:
    // 0x437c00: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x437c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_437c04:
    // 0x437c04: 0xc0c6250  jal         func_318940
label_437c08:
    if (ctx->pc == 0x437C08u) {
        ctx->pc = 0x437C08u;
            // 0x437c08: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x437C0Cu;
        goto label_437c0c;
    }
    ctx->pc = 0x437C04u;
    SET_GPR_U32(ctx, 31, 0x437C0Cu);
    ctx->pc = 0x437C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437C04u;
            // 0x437c08: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437C0Cu; }
        if (ctx->pc != 0x437C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437C0Cu; }
        if (ctx->pc != 0x437C0Cu) { return; }
    }
    ctx->pc = 0x437C0Cu;
label_437c0c:
    // 0x437c0c: 0x8e630da0  lw          $v1, 0xDA0($s3)
    ctx->pc = 0x437c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_437c10:
    // 0x437c10: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x437c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_437c14:
    // 0x437c14: 0xae630da0  sw          $v1, 0xDA0($s3)
    ctx->pc = 0x437c14u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 3));
label_437c18:
    // 0x437c18: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x437c18u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_437c1c:
    // 0x437c1c: 0x2fe182b  sltu        $v1, $s7, $fp
    ctx->pc = 0x437c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_437c20:
    // 0x437c20: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x437c20u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_437c24:
    // 0x437c24: 0x1460ff39  bnez        $v1, . + 4 + (-0xC7 << 2)
label_437c28:
    if (ctx->pc == 0x437C28u) {
        ctx->pc = 0x437C28u;
            // 0x437c28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x437C2Cu;
        goto label_437c2c;
    }
    ctx->pc = 0x437C24u;
    {
        const bool branch_taken_0x437c24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x437C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437C24u;
            // 0x437c28: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437c24) {
            ctx->pc = 0x43790Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_43790c;
        }
    }
    ctx->pc = 0x437C2Cu;
label_437c2c:
    // 0x437c2c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x437c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_437c30:
    // 0x437c30: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x437c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_437c34:
    // 0x437c34: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x437c34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_437c38:
    // 0x437c38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x437c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_437c3c:
    // 0x437c3c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x437c3cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_437c40:
    // 0x437c40: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x437c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_437c44:
    // 0x437c44: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x437c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_437c48:
    // 0x437c48: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x437c48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_437c4c:
    // 0x437c4c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x437c4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_437c50:
    // 0x437c50: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x437c50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_437c54:
    // 0x437c54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x437c54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_437c58:
    // 0x437c58: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x437c58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_437c5c:
    // 0x437c5c: 0x3e00008  jr          $ra
label_437c60:
    if (ctx->pc == 0x437C60u) {
        ctx->pc = 0x437C60u;
            // 0x437c60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x437C64u;
        goto label_437c64;
    }
    ctx->pc = 0x437C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x437C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437C5Cu;
            // 0x437c60: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x437C64u;
label_437c64:
    // 0x437c64: 0x0  nop
    ctx->pc = 0x437c64u;
    // NOP
label_437c68:
    // 0x437c68: 0x0  nop
    ctx->pc = 0x437c68u;
    // NOP
label_437c6c:
    // 0x437c6c: 0x0  nop
    ctx->pc = 0x437c6cu;
    // NOP
label_437c70:
    // 0x437c70: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x437c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_437c74:
    // 0x437c74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x437c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_437c78:
    // 0x437c78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x437c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_437c7c:
    // 0x437c7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x437c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_437c80:
    // 0x437c80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x437c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_437c84:
    // 0x437c84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x437c84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_437c88:
    // 0x437c88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x437c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_437c8c:
    // 0x437c8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x437c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_437c90:
    // 0x437c90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x437c90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_437c94:
    // 0x437c94: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x437c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_437c98:
    // 0x437c98: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x437c98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_437c9c:
    // 0x437c9c: 0x8c8602d0  lw          $a2, 0x2D0($a0)
    ctx->pc = 0x437c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 720)));
label_437ca0:
    // 0x437ca0: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
label_437ca4:
    if (ctx->pc == 0x437CA4u) {
        ctx->pc = 0x437CA4u;
            // 0x437ca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437CA8u;
        goto label_437ca8;
    }
    ctx->pc = 0x437CA0u;
    {
        const bool branch_taken_0x437ca0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x437CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437CA0u;
            // 0x437ca4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ca0) {
            ctx->pc = 0x437CB0u;
            goto label_437cb0;
        }
    }
    ctx->pc = 0x437CA8u;
label_437ca8:
    // 0x437ca8: 0x1000000d  b           . + 4 + (0xD << 2)
label_437cac:
    if (ctx->pc == 0x437CACu) {
        ctx->pc = 0x437CACu;
            // 0x437cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437CB0u;
        goto label_437cb0;
    }
    ctx->pc = 0x437CA8u;
    {
        const bool branch_taken_0x437ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x437CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437CA8u;
            // 0x437cac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437ca8) {
            ctx->pc = 0x437CE0u;
            goto label_437ce0;
        }
    }
    ctx->pc = 0x437CB0u;
label_437cb0:
    // 0x437cb0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x437cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437cb4:
    // 0x437cb4: 0x260502d8  addiu       $a1, $s0, 0x2D8
    ctx->pc = 0x437cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
label_437cb8:
    // 0x437cb8: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x437cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_437cbc:
    // 0x437cbc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x437cbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_437cc0:
    // 0x437cc0: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x437cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_437cc4:
    // 0x437cc4: 0x932026  xor         $a0, $a0, $s3
    ctx->pc = 0x437cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 19));
label_437cc8:
    // 0x437cc8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x437cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_437ccc:
    // 0x437ccc: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x437cccu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_437cd0:
    // 0x437cd0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x437cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_437cd4:
    // 0x437cd4: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_437cd8:
    if (ctx->pc == 0x437CD8u) {
        ctx->pc = 0x437CD8u;
            // 0x437cd8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x437CDCu;
        goto label_437cdc;
    }
    ctx->pc = 0x437CD4u;
    {
        const bool branch_taken_0x437cd4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x437CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437CD4u;
            // 0x437cd8: 0x3182b  sltu        $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x437cd4) {
            ctx->pc = 0x437CB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_437cb8;
        }
    }
    ctx->pc = 0x437CDCu;
label_437cdc:
    // 0x437cdc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x437cdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_437ce0:
    // 0x437ce0: 0x54600150  bnel        $v1, $zero, . + 4 + (0x150 << 2)
label_437ce4:
    if (ctx->pc == 0x437CE4u) {
        ctx->pc = 0x437CE4u;
            // 0x437ce4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x437CE8u;
        goto label_437ce8;
    }
    ctx->pc = 0x437CE0u;
    {
        const bool branch_taken_0x437ce0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x437ce0) {
            ctx->pc = 0x437CE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437CE0u;
            // 0x437ce4: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438224u;
            goto label_438224;
        }
    }
    ctx->pc = 0x437CE8u;
label_437ce8:
    // 0x437ce8: 0xc04f26c  jal         func_13C9B0
label_437cec:
    if (ctx->pc == 0x437CECu) {
        ctx->pc = 0x437CECu;
            // 0x437cec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x437CF0u;
        goto label_437cf0;
    }
    ctx->pc = 0x437CE8u;
    SET_GPR_U32(ctx, 31, 0x437CF0u);
    ctx->pc = 0x437CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437CE8u;
            // 0x437cec: 0x27a401b0  addiu       $a0, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437CF0u; }
        if (ctx->pc != 0x437CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437CF0u; }
        if (ctx->pc != 0x437CF0u) { return; }
    }
    ctx->pc = 0x437CF0u;
label_437cf0:
    // 0x437cf0: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x437cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_437cf4:
    // 0x437cf4: 0xc04f278  jal         func_13C9E0
label_437cf8:
    if (ctx->pc == 0x437CF8u) {
        ctx->pc = 0x437CF8u;
            // 0x437cf8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x437CFCu;
        goto label_437cfc;
    }
    ctx->pc = 0x437CF4u;
    SET_GPR_U32(ctx, 31, 0x437CFCu);
    ctx->pc = 0x437CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437CF4u;
            // 0x437cf8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437CFCu; }
        if (ctx->pc != 0x437CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437CFCu; }
        if (ctx->pc != 0x437CFCu) { return; }
    }
    ctx->pc = 0x437CFCu;
label_437cfc:
    // 0x437cfc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x437cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_437d00:
    // 0x437d00: 0xc04cce8  jal         func_1333A0
label_437d04:
    if (ctx->pc == 0x437D04u) {
        ctx->pc = 0x437D04u;
            // 0x437d04: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x437D08u;
        goto label_437d08;
    }
    ctx->pc = 0x437D00u;
    SET_GPR_U32(ctx, 31, 0x437D08u);
    ctx->pc = 0x437D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D00u;
            // 0x437d04: 0x27a501b0  addiu       $a1, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D08u; }
        if (ctx->pc != 0x437D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D08u; }
        if (ctx->pc != 0x437D08u) { return; }
    }
    ctx->pc = 0x437D08u;
label_437d08:
    // 0x437d08: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x437d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_437d0c:
    // 0x437d0c: 0xc04ce80  jal         func_133A00
label_437d10:
    if (ctx->pc == 0x437D10u) {
        ctx->pc = 0x437D10u;
            // 0x437d10: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x437D14u;
        goto label_437d14;
    }
    ctx->pc = 0x437D0Cu;
    SET_GPR_U32(ctx, 31, 0x437D14u);
    ctx->pc = 0x437D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D0Cu;
            // 0x437d10: 0x26050010  addiu       $a1, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D14u; }
        if (ctx->pc != 0x437D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D14u; }
        if (ctx->pc != 0x437D14u) { return; }
    }
    ctx->pc = 0x437D14u;
label_437d14:
    // 0x437d14: 0x3c024019  lui         $v0, 0x4019
    ctx->pc = 0x437d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16409 << 16));
label_437d18:
    // 0x437d18: 0x3c034090  lui         $v1, 0x4090
    ctx->pc = 0x437d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16528 << 16));
label_437d1c:
    // 0x437d1c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x437d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_437d20:
    // 0x437d20: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x437d20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_437d24:
    // 0x437d24: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x437d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_437d28:
    // 0x437d28: 0x3c024140  lui         $v0, 0x4140
    ctx->pc = 0x437d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16704 << 16));
label_437d2c:
    // 0x437d2c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x437d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437d30:
    // 0x437d30: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x437d30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_437d34:
    // 0x437d34: 0xc04ce50  jal         func_133940
label_437d38:
    if (ctx->pc == 0x437D38u) {
        ctx->pc = 0x437D38u;
            // 0x437d38: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x437D3Cu;
        goto label_437d3c;
    }
    ctx->pc = 0x437D34u;
    SET_GPR_U32(ctx, 31, 0x437D3Cu);
    ctx->pc = 0x437D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D34u;
            // 0x437d38: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D3Cu; }
        if (ctx->pc != 0x437D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D3Cu; }
        if (ctx->pc != 0x437D3Cu) { return; }
    }
    ctx->pc = 0x437D3Cu;
label_437d3c:
    // 0x437d3c: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x437d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_437d40:
    // 0x437d40: 0xc04ccf4  jal         func_1333D0
label_437d44:
    if (ctx->pc == 0x437D44u) {
        ctx->pc = 0x437D44u;
            // 0x437d44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437D48u;
        goto label_437d48;
    }
    ctx->pc = 0x437D40u;
    SET_GPR_U32(ctx, 31, 0x437D48u);
    ctx->pc = 0x437D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D40u;
            // 0x437d44: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D48u; }
        if (ctx->pc != 0x437D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D48u; }
        if (ctx->pc != 0x437D48u) { return; }
    }
    ctx->pc = 0x437D48u;
label_437d48:
    // 0x437d48: 0x8e720d74  lw          $s2, 0xD74($s3)
    ctx->pc = 0x437d48u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_437d4c:
    // 0x437d4c: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x437d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_437d50:
    // 0x437d50: 0xc0a5440  jal         func_295100
label_437d54:
    if (ctx->pc == 0x437D54u) {
        ctx->pc = 0x437D54u;
            // 0x437d54: 0x8e1102d0  lw          $s1, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->pc = 0x437D58u;
        goto label_437d58;
    }
    ctx->pc = 0x437D50u;
    SET_GPR_U32(ctx, 31, 0x437D58u);
    ctx->pc = 0x437D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D50u;
            // 0x437d54: 0x8e1102d0  lw          $s1, 0x2D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D58u; }
        if (ctx->pc != 0x437D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D58u; }
        if (ctx->pc != 0x437D58u) { return; }
    }
    ctx->pc = 0x437D58u;
label_437d58:
    // 0x437d58: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x437d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_437d5c:
    // 0x437d5c: 0xc0a5440  jal         func_295100
label_437d60:
    if (ctx->pc == 0x437D60u) {
        ctx->pc = 0x437D60u;
            // 0x437d60: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437D64u;
        goto label_437d64;
    }
    ctx->pc = 0x437D5Cu;
    SET_GPR_U32(ctx, 31, 0x437D64u);
    ctx->pc = 0x437D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D5Cu;
            // 0x437d60: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D64u; }
        if (ctx->pc != 0x437D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D64u; }
        if (ctx->pc != 0x437D64u) { return; }
    }
    ctx->pc = 0x437D64u;
label_437d64:
    // 0x437d64: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x437d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_437d68:
    // 0x437d68: 0xc0a5440  jal         func_295100
label_437d6c:
    if (ctx->pc == 0x437D6Cu) {
        ctx->pc = 0x437D6Cu;
            // 0x437d6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437D70u;
        goto label_437d70;
    }
    ctx->pc = 0x437D68u;
    SET_GPR_U32(ctx, 31, 0x437D70u);
    ctx->pc = 0x437D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D68u;
            // 0x437d6c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295100u;
    if (runtime->hasFunction(0x295100u)) {
        auto targetFn = runtime->lookupFunction(0x295100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D70u; }
        if (ctx->pc != 0x437D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295100_0x295100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D70u; }
        if (ctx->pc != 0x437D70u) { return; }
    }
    ctx->pc = 0x437D70u;
label_437d70:
    // 0x437d70: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x437d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_437d74:
    // 0x437d74: 0xc64d0004  lwc1        $f13, 0x4($s2)
    ctx->pc = 0x437d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_437d78:
    // 0x437d78: 0xc6ae0008  lwc1        $f14, 0x8($s5)
    ctx->pc = 0x437d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_437d7c:
    // 0x437d7c: 0xc04cbd8  jal         func_132F60
label_437d80:
    if (ctx->pc == 0x437D80u) {
        ctx->pc = 0x437D80u;
            // 0x437d80: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x437D84u;
        goto label_437d84;
    }
    ctx->pc = 0x437D7Cu;
    SET_GPR_U32(ctx, 31, 0x437D84u);
    ctx->pc = 0x437D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D7Cu;
            // 0x437d80: 0x27a40120  addiu       $a0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D84u; }
        if (ctx->pc != 0x437D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D84u; }
        if (ctx->pc != 0x437D84u) { return; }
    }
    ctx->pc = 0x437D84u;
label_437d84:
    // 0x437d84: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x437d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_437d88:
    // 0x437d88: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x437d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_437d8c:
    // 0x437d8c: 0xc04cca0  jal         func_133280
label_437d90:
    if (ctx->pc == 0x437D90u) {
        ctx->pc = 0x437D90u;
            // 0x437d90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437D94u;
        goto label_437d94;
    }
    ctx->pc = 0x437D8Cu;
    SET_GPR_U32(ctx, 31, 0x437D94u);
    ctx->pc = 0x437D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437D8Cu;
            // 0x437d90: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D94u; }
        if (ctx->pc != 0x437D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437D94u; }
        if (ctx->pc != 0x437D94u) { return; }
    }
    ctx->pc = 0x437D94u;
label_437d94:
    // 0x437d94: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x437d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_437d98:
    // 0x437d98: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x437d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437d9c:
    // 0x437d9c: 0x90440130  lbu         $a0, 0x130($v0)
    ctx->pc = 0x437d9cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 304)));
label_437da0:
    // 0x437da0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x437da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_437da4:
    // 0x437da4: 0x90650131  lbu         $a1, 0x131($v1)
    ctx->pc = 0x437da4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 305)));
label_437da8:
    // 0x437da8: 0x26120270  addiu       $s2, $s0, 0x270
    ctx->pc = 0x437da8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
label_437dac:
    // 0x437dac: 0x27a901fc  addiu       $t1, $sp, 0x1FC
    ctx->pc = 0x437dacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_437db0:
    // 0x437db0: 0x266602c0  addiu       $a2, $s3, 0x2C0
    ctx->pc = 0x437db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_437db4:
    // 0x437db4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x437db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_437db8:
    // 0x437db8: 0xa3a401fc  sb          $a0, 0x1FC($sp)
    ctx->pc = 0x437db8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 508), (uint8_t)GPR_U32(ctx, 4));
label_437dbc:
    // 0x437dbc: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x437dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_437dc0:
    // 0x437dc0: 0x3c0340e0  lui         $v1, 0x40E0
    ctx->pc = 0x437dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16608 << 16));
label_437dc4:
    // 0x437dc4: 0xa3a501fd  sb          $a1, 0x1FD($sp)
    ctx->pc = 0x437dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 509), (uint8_t)GPR_U32(ctx, 5));
label_437dc8:
    // 0x437dc8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x437dc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437dcc:
    // 0x437dcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x437dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_437dd0:
    // 0x437dd0: 0x26670820  addiu       $a3, $s3, 0x820
    ctx->pc = 0x437dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), 2080));
label_437dd4:
    // 0x437dd4: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x437dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_437dd8:
    // 0x437dd8: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x437dd8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_437ddc:
    // 0x437ddc: 0xc0b8704  jal         func_2E1C10
label_437de0:
    if (ctx->pc == 0x437DE0u) {
        ctx->pc = 0x437DE0u;
            // 0x437de0: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437DE4u;
        goto label_437de4;
    }
    ctx->pc = 0x437DDCu;
    SET_GPR_U32(ctx, 31, 0x437DE4u);
    ctx->pc = 0x437DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437DDCu;
            // 0x437de0: 0x100582d  daddu       $t3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1C10u;
    if (runtime->hasFunction(0x2E1C10u)) {
        auto targetFn = runtime->lookupFunction(0x2E1C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437DE4u; }
        if (ctx->pc != 0x437DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1C10_0x2e1c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437DE4u; }
        if (ctx->pc != 0x437DE4u) { return; }
    }
    ctx->pc = 0x437DE4u;
label_437de4:
    // 0x437de4: 0x8e630d74  lw          $v1, 0xD74($s3)
    ctx->pc = 0x437de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_437de8:
    // 0x437de8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x437de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_437dec:
    // 0x437dec: 0x906302a1  lbu         $v1, 0x2A1($v1)
    ctx->pc = 0x437decu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 673)));
label_437df0:
    // 0x437df0: 0x54620039  bnel        $v1, $v0, . + 4 + (0x39 << 2)
label_437df4:
    if (ctx->pc == 0x437DF4u) {
        ctx->pc = 0x437DF4u;
            // 0x437df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437DF8u;
        goto label_437df8;
    }
    ctx->pc = 0x437DF0u;
    {
        const bool branch_taken_0x437df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x437df0) {
            ctx->pc = 0x437DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437DF0u;
            // 0x437df4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437ED8u;
            goto label_437ed8;
        }
    }
    ctx->pc = 0x437DF8u;
label_437df8:
    // 0x437df8: 0x96420056  lhu         $v0, 0x56($s2)
    ctx->pc = 0x437df8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 86)));
label_437dfc:
    // 0x437dfc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_437e00:
    if (ctx->pc == 0x437E00u) {
        ctx->pc = 0x437E04u;
        goto label_437e04;
    }
    ctx->pc = 0x437DFCu;
    {
        const bool branch_taken_0x437dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437dfc) {
            ctx->pc = 0x437ED4u;
            goto label_437ed4;
        }
    }
    ctx->pc = 0x437E04u;
label_437e04:
    // 0x437e04: 0x8e620a6c  lw          $v0, 0xA6C($s3)
    ctx->pc = 0x437e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2668)));
label_437e08:
    // 0x437e08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x437e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_437e0c:
    // 0x437e0c: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
label_437e10:
    if (ctx->pc == 0x437E10u) {
        ctx->pc = 0x437E14u;
        goto label_437e14;
    }
    ctx->pc = 0x437E0Cu;
    {
        const bool branch_taken_0x437e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x437e0c) {
            ctx->pc = 0x437ED4u;
            goto label_437ed4;
        }
    }
    ctx->pc = 0x437E14u;
label_437e14:
    // 0x437e14: 0x8e620a74  lw          $v0, 0xA74($s3)
    ctx->pc = 0x437e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2676)));
label_437e18:
    // 0x437e18: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x437e18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_437e1c:
    // 0x437e1c: 0x1420002d  bnez        $at, . + 4 + (0x2D << 2)
label_437e20:
    if (ctx->pc == 0x437E20u) {
        ctx->pc = 0x437E24u;
        goto label_437e24;
    }
    ctx->pc = 0x437E1Cu;
    {
        const bool branch_taken_0x437e1c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x437e1c) {
            ctx->pc = 0x437ED4u;
            goto label_437ed4;
        }
    }
    ctx->pc = 0x437E24u;
label_437e24:
    // 0x437e24: 0xc7a10128  lwc1        $f1, 0x128($sp)
    ctx->pc = 0x437e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437e28:
    // 0x437e28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x437e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_437e2c:
    // 0x437e2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x437e2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_437e30:
    // 0x437e30: 0x0  nop
    ctx->pc = 0x437e30u;
    // NOP
label_437e34:
    // 0x437e34: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x437e34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437e38:
    // 0x437e38: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_437e3c:
    if (ctx->pc == 0x437E3Cu) {
        ctx->pc = 0x437E3Cu;
            // 0x437e3c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x437E40u;
        goto label_437e40;
    }
    ctx->pc = 0x437E38u;
    {
        const bool branch_taken_0x437e38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x437e38) {
            ctx->pc = 0x437E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437E38u;
            // 0x437e3c: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437E48u;
            goto label_437e48;
        }
    }
    ctx->pc = 0x437E40u;
label_437e40:
    // 0x437e40: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x437e40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437e44:
    // 0x437e44: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x437e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_437e48:
    // 0x437e48: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x437e48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_437e4c:
    // 0x437e4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x437e4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_437e50:
    // 0x437e50: 0x0  nop
    ctx->pc = 0x437e50u;
    // NOP
label_437e54:
    // 0x437e54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x437e54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437e58:
    // 0x437e58: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_437e5c:
    if (ctx->pc == 0x437E5Cu) {
        ctx->pc = 0x437E5Cu;
            // 0x437e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x437E60u;
        goto label_437e60;
    }
    ctx->pc = 0x437E58u;
    {
        const bool branch_taken_0x437e58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x437E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437E58u;
            // 0x437e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e58) {
            ctx->pc = 0x437E64u;
            goto label_437e64;
        }
    }
    ctx->pc = 0x437E60u;
label_437e60:
    // 0x437e60: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x437e60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437e64:
    // 0x437e64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x437e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_437e68:
    // 0x437e68: 0x2e220004  sltiu       $v0, $s1, 0x4
    ctx->pc = 0x437e68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_437e6c:
    // 0x437e6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x437e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_437e70:
    // 0x437e70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x437e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_437e74:
    // 0x437e74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x437e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_437e78:
    // 0x437e78: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x437e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_437e7c:
    // 0x437e7c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_437e80:
    if (ctx->pc == 0x437E80u) {
        ctx->pc = 0x437E84u;
        goto label_437e84;
    }
    ctx->pc = 0x437E7Cu;
    {
        const bool branch_taken_0x437e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x437e7c) {
            ctx->pc = 0x437ED4u;
            goto label_437ed4;
        }
    }
    ctx->pc = 0x437E84u;
label_437e84:
    // 0x437e84: 0xc7a10124  lwc1        $f1, 0x124($sp)
    ctx->pc = 0x437e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_437e88:
    // 0x437e88: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x437e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_437e8c:
    // 0x437e8c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x437e8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_437e90:
    // 0x437e90: 0x0  nop
    ctx->pc = 0x437e90u;
    // NOP
label_437e94:
    // 0x437e94: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x437e94u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437e98:
    // 0x437e98: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_437e9c:
    if (ctx->pc == 0x437E9Cu) {
        ctx->pc = 0x437E9Cu;
            // 0x437e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x437EA0u;
        goto label_437ea0;
    }
    ctx->pc = 0x437E98u;
    {
        const bool branch_taken_0x437e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x437E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437E98u;
            // 0x437e9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437e98) {
            ctx->pc = 0x437EA4u;
            goto label_437ea4;
        }
    }
    ctx->pc = 0x437EA0u;
label_437ea0:
    // 0x437ea0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x437ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437ea4:
    // 0x437ea4: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x437ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_437ea8:
    // 0x437ea8: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x437ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_437eac:
    // 0x437eac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x437eacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_437eb0:
    // 0x437eb0: 0x0  nop
    ctx->pc = 0x437eb0u;
    // NOP
label_437eb4:
    // 0x437eb4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x437eb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_437eb8:
    // 0x437eb8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_437ebc:
    if (ctx->pc == 0x437EBCu) {
        ctx->pc = 0x437EBCu;
            // 0x437ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x437EC0u;
        goto label_437ec0;
    }
    ctx->pc = 0x437EB8u;
    {
        const bool branch_taken_0x437eb8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x437EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x437EB8u;
            // 0x437ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x437eb8) {
            ctx->pc = 0x437EC4u;
            goto label_437ec4;
        }
    }
    ctx->pc = 0x437EC0u;
label_437ec0:
    // 0x437ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x437ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_437ec4:
    // 0x437ec4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x437ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_437ec8:
    // 0x437ec8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x437ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_437ecc:
    // 0x437ecc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_437ed0:
    if (ctx->pc == 0x437ED0u) {
        ctx->pc = 0x437ED0u;
            // 0x437ed0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x437ED4u;
        goto label_437ed4;
    }
    ctx->pc = 0x437ECCu;
    {
        const bool branch_taken_0x437ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x437ecc) {
            ctx->pc = 0x437ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x437ECCu;
            // 0x437ed0: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x437EECu;
            goto label_437eec;
        }
    }
    ctx->pc = 0x437ED4u;
label_437ed4:
    // 0x437ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x437ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_437ed8:
    // 0x437ed8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x437ed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_437edc:
    // 0x437edc: 0xc0e34b0  jal         func_38D2C0
label_437ee0:
    if (ctx->pc == 0x437EE0u) {
        ctx->pc = 0x437EE0u;
            // 0x437ee0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437EE4u;
        goto label_437ee4;
    }
    ctx->pc = 0x437EDCu;
    SET_GPR_U32(ctx, 31, 0x437EE4u);
    ctx->pc = 0x437EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437EDCu;
            // 0x437ee0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D2C0u;
    if (runtime->hasFunction(0x38D2C0u)) {
        auto targetFn = runtime->lookupFunction(0x38D2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437EE4u; }
        if (ctx->pc != 0x437EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D2C0_0x38d2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437EE4u; }
        if (ctx->pc != 0x437EE4u) { return; }
    }
    ctx->pc = 0x437EE4u;
label_437ee4:
    // 0x437ee4: 0x100000ce  b           . + 4 + (0xCE << 2)
label_437ee8:
    if (ctx->pc == 0x437EE8u) {
        ctx->pc = 0x437EECu;
        goto label_437eec;
    }
    ctx->pc = 0x437EE4u;
    {
        const bool branch_taken_0x437ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x437ee4) {
            ctx->pc = 0x438220u;
            goto label_438220;
        }
    }
    ctx->pc = 0x437EECu;
label_437eec:
    // 0x437eec: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x437eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_437ef0:
    // 0x437ef0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x437ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_437ef4:
    // 0x437ef4: 0xac5302d8  sw          $s3, 0x2D8($v0)
    ctx->pc = 0x437ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 728), GPR_U32(ctx, 19));
label_437ef8:
    // 0x437ef8: 0x8e620d60  lw          $v0, 0xD60($s3)
    ctx->pc = 0x437ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_437efc:
    // 0x437efc: 0xa040001c  sb          $zero, 0x1C($v0)
    ctx->pc = 0x437efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 28), (uint8_t)GPR_U32(ctx, 0));
label_437f00:
    // 0x437f00: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x437f00u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_437f04:
    // 0x437f04: 0xc0dc9bc  jal         func_3726F0
label_437f08:
    if (ctx->pc == 0x437F08u) {
        ctx->pc = 0x437F08u;
            // 0x437f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437F0Cu;
        goto label_437f0c;
    }
    ctx->pc = 0x437F04u;
    SET_GPR_U32(ctx, 31, 0x437F0Cu);
    ctx->pc = 0x437F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F04u;
            // 0x437f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3726F0u;
    if (runtime->hasFunction(0x3726F0u)) {
        auto targetFn = runtime->lookupFunction(0x3726F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F0Cu; }
        if (ctx->pc != 0x437F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003726F0_0x3726f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F0Cu; }
        if (ctx->pc != 0x437F0Cu) { return; }
    }
    ctx->pc = 0x437F0Cu;
label_437f0c:
    // 0x437f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x437f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_437f10:
    // 0x437f10: 0xc0dc9a0  jal         func_372680
label_437f14:
    if (ctx->pc == 0x437F14u) {
        ctx->pc = 0x437F14u;
            // 0x437f14: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x437F18u;
        goto label_437f18;
    }
    ctx->pc = 0x437F10u;
    SET_GPR_U32(ctx, 31, 0x437F18u);
    ctx->pc = 0x437F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F10u;
            // 0x437f14: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x372680u;
    if (runtime->hasFunction(0x372680u)) {
        auto targetFn = runtime->lookupFunction(0x372680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F18u; }
        if (ctx->pc != 0x437F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00372680_0x372680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F18u; }
        if (ctx->pc != 0x437F18u) { return; }
    }
    ctx->pc = 0x437F18u;
label_437f18:
    // 0x437f18: 0x8e630d9c  lw          $v1, 0xD9C($s3)
    ctx->pc = 0x437f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_437f1c:
    // 0x437f1c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x437f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_437f20:
    // 0x437f20: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x437f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_437f24:
    // 0x437f24: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x437f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_437f28:
    // 0x437f28: 0x24a5cf30  addiu       $a1, $a1, -0x30D0
    ctx->pc = 0x437f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954800));
label_437f2c:
    // 0x437f2c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x437f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_437f30:
    // 0x437f30: 0xc04cc04  jal         func_133010
label_437f34:
    if (ctx->pc == 0x437F34u) {
        ctx->pc = 0x437F34u;
            // 0x437f34: 0xae620d9c  sw          $v0, 0xD9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
        ctx->pc = 0x437F38u;
        goto label_437f38;
    }
    ctx->pc = 0x437F30u;
    SET_GPR_U32(ctx, 31, 0x437F38u);
    ctx->pc = 0x437F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F30u;
            // 0x437f34: 0xae620d9c  sw          $v0, 0xD9C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F38u; }
        if (ctx->pc != 0x437F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F38u; }
        if (ctx->pc != 0x437F38u) { return; }
    }
    ctx->pc = 0x437F38u;
label_437f38:
    // 0x437f38: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x437f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_437f3c:
    // 0x437f3c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x437f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_437f40:
    // 0x437f40: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x437f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_437f44:
    // 0x437f44: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x437f44u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_437f48:
    // 0x437f48: 0xc04f278  jal         func_13C9E0
label_437f4c:
    if (ctx->pc == 0x437F4Cu) {
        ctx->pc = 0x437F4Cu;
            // 0x437f4c: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->pc = 0x437F50u;
        goto label_437f50;
    }
    ctx->pc = 0x437F48u;
    SET_GPR_U32(ctx, 31, 0x437F50u);
    ctx->pc = 0x437F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F48u;
            // 0x437f4c: 0xe7a00110  swc1        $f0, 0x110($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F50u; }
        if (ctx->pc != 0x437F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F50u; }
        if (ctx->pc != 0x437F50u) { return; }
    }
    ctx->pc = 0x437F50u;
label_437f50:
    // 0x437f50: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x437f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_437f54:
    // 0x437f54: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x437f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_437f58:
    // 0x437f58: 0xc04cca0  jal         func_133280
label_437f5c:
    if (ctx->pc == 0x437F5Cu) {
        ctx->pc = 0x437F5Cu;
            // 0x437f5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437F60u;
        goto label_437f60;
    }
    ctx->pc = 0x437F58u;
    SET_GPR_U32(ctx, 31, 0x437F60u);
    ctx->pc = 0x437F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F58u;
            // 0x437f5c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F60u; }
        if (ctx->pc != 0x437F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F60u; }
        if (ctx->pc != 0x437F60u) { return; }
    }
    ctx->pc = 0x437F60u;
label_437f60:
    // 0x437f60: 0x266402e0  addiu       $a0, $s3, 0x2E0
    ctx->pc = 0x437f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 736));
label_437f64:
    // 0x437f64: 0xc04cc04  jal         func_133010
label_437f68:
    if (ctx->pc == 0x437F68u) {
        ctx->pc = 0x437F68u;
            // 0x437f68: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x437F6Cu;
        goto label_437f6c;
    }
    ctx->pc = 0x437F64u;
    SET_GPR_U32(ctx, 31, 0x437F6Cu);
    ctx->pc = 0x437F68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F64u;
            // 0x437f68: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F6Cu; }
        if (ctx->pc != 0x437F6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F6Cu; }
        if (ctx->pc != 0x437F6Cu) { return; }
    }
    ctx->pc = 0x437F6Cu;
label_437f6c:
    // 0x437f6c: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x437f6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437f70:
    // 0x437f70: 0xc075318  jal         func_1D4C60
label_437f74:
    if (ctx->pc == 0x437F74u) {
        ctx->pc = 0x437F74u;
            // 0x437f74: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x437F78u;
        goto label_437f78;
    }
    ctx->pc = 0x437F70u;
    SET_GPR_U32(ctx, 31, 0x437F78u);
    ctx->pc = 0x437F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F70u;
            // 0x437f74: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F78u; }
        if (ctx->pc != 0x437F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F78u; }
        if (ctx->pc != 0x437F78u) { return; }
    }
    ctx->pc = 0x437F78u;
label_437f78:
    // 0x437f78: 0x26650560  addiu       $a1, $s3, 0x560
    ctx->pc = 0x437f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437f7c:
    // 0x437f7c: 0x26640840  addiu       $a0, $s3, 0x840
    ctx->pc = 0x437f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2112));
label_437f80:
    // 0x437f80: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x437f80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437f84:
    // 0x437f84: 0xc0c6250  jal         func_318940
label_437f88:
    if (ctx->pc == 0x437F88u) {
        ctx->pc = 0x437F88u;
            // 0x437f88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437F8Cu;
        goto label_437f8c;
    }
    ctx->pc = 0x437F84u;
    SET_GPR_U32(ctx, 31, 0x437F8Cu);
    ctx->pc = 0x437F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437F84u;
            // 0x437f88: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F8Cu; }
        if (ctx->pc != 0x437F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437F8Cu; }
        if (ctx->pc != 0x437F8Cu) { return; }
    }
    ctx->pc = 0x437F8Cu;
label_437f8c:
    // 0x437f8c: 0x26630890  addiu       $v1, $s3, 0x890
    ctx->pc = 0x437f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 2192));
label_437f90:
    // 0x437f90: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x437f90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_437f94:
    // 0x437f94: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x437f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_437f98:
    // 0x437f98: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x437f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_437f9c:
    // 0x437f9c: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x437f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_437fa0:
    // 0x437fa0: 0xc0c6250  jal         func_318940
label_437fa4:
    if (ctx->pc == 0x437FA4u) {
        ctx->pc = 0x437FA4u;
            // 0x437fa4: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->pc = 0x437FA8u;
        goto label_437fa8;
    }
    ctx->pc = 0x437FA0u;
    SET_GPR_U32(ctx, 31, 0x437FA8u);
    ctx->pc = 0x437FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FA0u;
            // 0x437fa4: 0x26660560  addiu       $a2, $s3, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FA8u; }
        if (ctx->pc != 0x437FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FA8u; }
        if (ctx->pc != 0x437FA8u) { return; }
    }
    ctx->pc = 0x437FA8u;
label_437fa8:
    // 0x437fa8: 0xc0b9210  jal         func_2E4840
label_437fac:
    if (ctx->pc == 0x437FACu) {
        ctx->pc = 0x437FACu;
            // 0x437fac: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->pc = 0x437FB0u;
        goto label_437fb0;
    }
    ctx->pc = 0x437FA8u;
    SET_GPR_U32(ctx, 31, 0x437FB0u);
    ctx->pc = 0x437FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FA8u;
            // 0x437fac: 0x266407e0  addiu       $a0, $s3, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FB0u; }
        if (ctx->pc != 0x437FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FB0u; }
        if (ctx->pc != 0x437FB0u) { return; }
    }
    ctx->pc = 0x437FB0u;
label_437fb0:
    // 0x437fb0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x437fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_437fb4:
    // 0x437fb4: 0xc04f278  jal         func_13C9E0
label_437fb8:
    if (ctx->pc == 0x437FB8u) {
        ctx->pc = 0x437FB8u;
            // 0x437fb8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x437FBCu;
        goto label_437fbc;
    }
    ctx->pc = 0x437FB4u;
    SET_GPR_U32(ctx, 31, 0x437FBCu);
    ctx->pc = 0x437FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FB4u;
            // 0x437fb8: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FBCu; }
        if (ctx->pc != 0x437FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FBCu; }
        if (ctx->pc != 0x437FBCu) { return; }
    }
    ctx->pc = 0x437FBCu;
label_437fbc:
    // 0x437fbc: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x437fbcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_437fc0:
    // 0x437fc0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x437fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_437fc4:
    // 0x437fc4: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x437fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_437fc8:
    // 0x437fc8: 0xc04cca0  jal         func_133280
label_437fcc:
    if (ctx->pc == 0x437FCCu) {
        ctx->pc = 0x437FCCu;
            // 0x437fcc: 0x24c6cf20  addiu       $a2, $a2, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954784));
        ctx->pc = 0x437FD0u;
        goto label_437fd0;
    }
    ctx->pc = 0x437FC8u;
    SET_GPR_U32(ctx, 31, 0x437FD0u);
    ctx->pc = 0x437FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FC8u;
            // 0x437fcc: 0x24c6cf20  addiu       $a2, $a2, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FD0u; }
        if (ctx->pc != 0x437FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FD0u; }
        if (ctx->pc != 0x437FD0u) { return; }
    }
    ctx->pc = 0x437FD0u;
label_437fd0:
    // 0x437fd0: 0x26640560  addiu       $a0, $s3, 0x560
    ctx->pc = 0x437fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1376));
label_437fd4:
    // 0x437fd4: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x437fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_437fd8:
    // 0x437fd8: 0xc075378  jal         func_1D4DE0
label_437fdc:
    if (ctx->pc == 0x437FDCu) {
        ctx->pc = 0x437FDCu;
            // 0x437fdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x437FE0u;
        goto label_437fe0;
    }
    ctx->pc = 0x437FD8u;
    SET_GPR_U32(ctx, 31, 0x437FE0u);
    ctx->pc = 0x437FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FD8u;
            // 0x437fdc: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FE0u; }
        if (ctx->pc != 0x437FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FE0u; }
        if (ctx->pc != 0x437FE0u) { return; }
    }
    ctx->pc = 0x437FE0u;
label_437fe0:
    // 0x437fe0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x437fe0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_437fe4:
    // 0x437fe4: 0x2664092c  addiu       $a0, $s3, 0x92C
    ctx->pc = 0x437fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2348));
label_437fe8:
    // 0x437fe8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x437fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_437fec:
    // 0x437fec: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x437fecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_437ff0:
    // 0x437ff0: 0xc0c753c  jal         func_31D4F0
label_437ff4:
    if (ctx->pc == 0x437FF4u) {
        ctx->pc = 0x437FF4u;
            // 0x437ff4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x437FF8u;
        goto label_437ff8;
    }
    ctx->pc = 0x437FF0u;
    SET_GPR_U32(ctx, 31, 0x437FF8u);
    ctx->pc = 0x437FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x437FF0u;
            // 0x437ff4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FF8u; }
        if (ctx->pc != 0x437FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x437FF8u; }
        if (ctx->pc != 0x437FF8u) { return; }
    }
    ctx->pc = 0x437FF8u;
label_437ff8:
    // 0x437ff8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x437ff8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_437ffc:
    // 0x437ffc: 0x2664087c  addiu       $a0, $s3, 0x87C
    ctx->pc = 0x437ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 2172));
label_438000:
    // 0x438000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x438000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_438004:
    // 0x438004: 0xc0c753c  jal         func_31D4F0
label_438008:
    if (ctx->pc == 0x438008u) {
        ctx->pc = 0x438008u;
            // 0x438008: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x43800Cu;
        goto label_43800c;
    }
    ctx->pc = 0x438004u;
    SET_GPR_U32(ctx, 31, 0x43800Cu);
    ctx->pc = 0x438008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438004u;
            // 0x438008: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43800Cu; }
        if (ctx->pc != 0x43800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43800Cu; }
        if (ctx->pc != 0x43800Cu) { return; }
    }
    ctx->pc = 0x43800Cu;
label_43800c:
    // 0x43800c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x43800cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438010:
    // 0x438010: 0xae600de8  sw          $zero, 0xDE8($s3)
    ctx->pc = 0x438010u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3560), GPR_U32(ctx, 0));
label_438014:
    // 0x438014: 0x26640320  addiu       $a0, $s3, 0x320
    ctx->pc = 0x438014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 800));
label_438018:
    // 0x438018: 0xae600de4  sw          $zero, 0xDE4($s3)
    ctx->pc = 0x438018u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3556), GPR_U32(ctx, 0));
label_43801c:
    // 0x43801c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x43801cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_438020:
    // 0x438020: 0xc04cbd8  jal         func_132F60
label_438024:
    if (ctx->pc == 0x438024u) {
        ctx->pc = 0x438024u;
            // 0x438024: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x438028u;
        goto label_438028;
    }
    ctx->pc = 0x438020u;
    SET_GPR_U32(ctx, 31, 0x438028u);
    ctx->pc = 0x438024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438020u;
            // 0x438024: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438028u; }
        if (ctx->pc != 0x438028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438028u; }
        if (ctx->pc != 0x438028u) { return; }
    }
    ctx->pc = 0x438028u;
label_438028:
    // 0x438028: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x438028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43802c:
    // 0x43802c: 0x26640580  addiu       $a0, $s3, 0x580
    ctx->pc = 0x43802cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 1408));
label_438030:
    // 0x438030: 0xae620db8  sw          $v0, 0xDB8($s3)
    ctx->pc = 0x438030u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3512), GPR_U32(ctx, 2));
label_438034:
    // 0x438034: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x438034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_438038:
    // 0x438038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43803c:
    // 0x43803c: 0xae620698  sw          $v0, 0x698($s3)
    ctx->pc = 0x43803cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1688), GPR_U32(ctx, 2));
label_438040:
    // 0x438040: 0xae600690  sw          $zero, 0x690($s3)
    ctx->pc = 0x438040u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1680), GPR_U32(ctx, 0));
label_438044:
    // 0x438044: 0xc0ab808  jal         func_2AE020
label_438048:
    if (ctx->pc == 0x438048u) {
        ctx->pc = 0x438048u;
            // 0x438048: 0xae60068c  sw          $zero, 0x68C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 0));
        ctx->pc = 0x43804Cu;
        goto label_43804c;
    }
    ctx->pc = 0x438044u;
    SET_GPR_U32(ctx, 31, 0x43804Cu);
    ctx->pc = 0x438048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438044u;
            // 0x438048: 0xae60068c  sw          $zero, 0x68C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1676), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43804Cu; }
        if (ctx->pc != 0x43804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43804Cu; }
        if (ctx->pc != 0x43804Cu) { return; }
    }
    ctx->pc = 0x43804Cu;
label_43804c:
    // 0x43804c: 0x8e660d9c  lw          $a2, 0xD9C($s3)
    ctx->pc = 0x43804cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3484)));
label_438050:
    // 0x438050: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x438050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_438054:
    // 0x438054: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x438054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_438058:
    // 0x438058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x438058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_43805c:
    // 0x43805c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x43805cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_438060:
    // 0x438060: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x438060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_438064:
    // 0x438064: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x438064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_438068:
    // 0x438068: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x438068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_43806c:
    // 0x43806c: 0xae640d9c  sw          $a0, 0xD9C($s3)
    ctx->pc = 0x43806cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3484), GPR_U32(ctx, 4));
label_438070:
    // 0x438070: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x438070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438074:
    // 0x438074: 0x8e710550  lw          $s1, 0x550($s3)
    ctx->pc = 0x438074u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1360)));
label_438078:
    // 0x438078: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x438078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_43807c:
    // 0x43807c: 0x8222010c  lb          $v0, 0x10C($s1)
    ctx->pc = 0x43807cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 268)));
label_438080:
    // 0x438080: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x438080u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_438084:
    // 0x438084: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x438084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_438088:
    // 0x438088: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x438088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43808c:
    // 0x43808c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x43808cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_438090:
    // 0x438090: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x438090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_438094:
    // 0x438094: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x438094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_438098:
    // 0x438098: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x438098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_43809c:
    // 0x43809c: 0x8225010d  lb          $a1, 0x10D($s1)
    ctx->pc = 0x43809cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_4380a0:
    // 0x4380a0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4380a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4380a4:
    // 0x4380a4: 0x320f809  jalr        $t9
label_4380a8:
    if (ctx->pc == 0x4380A8u) {
        ctx->pc = 0x4380A8u;
            // 0x4380a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4380ACu;
        goto label_4380ac;
    }
    ctx->pc = 0x4380A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4380ACu);
        ctx->pc = 0x4380A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4380A4u;
            // 0x4380a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4380ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4380ACu; }
            if (ctx->pc != 0x4380ACu) { return; }
        }
        }
    }
    ctx->pc = 0x4380ACu;
label_4380ac:
    // 0x4380ac: 0x8e390058  lw          $t9, 0x58($s1)
    ctx->pc = 0x4380acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_4380b0:
    // 0x4380b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4380b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4380b4:
    // 0x4380b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x4380b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4380b8:
    // 0x4380b8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4380b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4380bc:
    // 0x4380bc: 0x320f809  jalr        $t9
label_4380c0:
    if (ctx->pc == 0x4380C0u) {
        ctx->pc = 0x4380C0u;
            // 0x4380c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4380C4u;
        goto label_4380c4;
    }
    ctx->pc = 0x4380BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4380C4u);
        ctx->pc = 0x4380C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4380BCu;
            // 0x4380c0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4380C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4380C4u; }
            if (ctx->pc != 0x4380C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4380C4u;
label_4380c4:
    // 0x4380c4: 0x8e620da0  lw          $v0, 0xDA0($s3)
    ctx->pc = 0x4380c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3488)));
label_4380c8:
    // 0x4380c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4380c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4380cc:
    // 0x4380cc: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x4380ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_4380d0:
    // 0x4380d0: 0xae620da0  sw          $v0, 0xDA0($s3)
    ctx->pc = 0x4380d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3488), GPR_U32(ctx, 2));
label_4380d4:
    // 0x4380d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4380d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4380d8:
    // 0x4380d8: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4380d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4380dc:
    // 0x4380dc: 0x320f809  jalr        $t9
label_4380e0:
    if (ctx->pc == 0x4380E0u) {
        ctx->pc = 0x4380E0u;
            // 0x4380e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4380E4u;
        goto label_4380e4;
    }
    ctx->pc = 0x4380DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4380E4u);
        ctx->pc = 0x4380E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4380DCu;
            // 0x4380e0: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4380E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4380E4u; }
            if (ctx->pc != 0x4380E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4380E4u;
label_4380e4:
    // 0x4380e4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4380e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4380e8:
    // 0x4380e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4380e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4380ec:
    // 0x4380ec: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4380ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4380f0:
    // 0x4380f0: 0x320f809  jalr        $t9
label_4380f4:
    if (ctx->pc == 0x4380F4u) {
        ctx->pc = 0x4380F4u;
            // 0x4380f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4380F8u;
        goto label_4380f8;
    }
    ctx->pc = 0x4380F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4380F8u);
        ctx->pc = 0x4380F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4380F0u;
            // 0x4380f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4380F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4380F8u; }
            if (ctx->pc != 0x4380F8u) { return; }
        }
        }
    }
    ctx->pc = 0x4380F8u;
label_4380f8:
    // 0x4380f8: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x4380f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_4380fc:
    // 0x4380fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4380fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_438100:
    // 0x438100: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x438100u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438104:
    // 0x438104: 0x266502c0  addiu       $a1, $s3, 0x2C0
    ctx->pc = 0x438104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_438108:
    // 0x438108: 0xc0b82c4  jal         func_2E0B10
label_43810c:
    if (ctx->pc == 0x43810Cu) {
        ctx->pc = 0x43810Cu;
            // 0x43810c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x438110u;
        goto label_438110;
    }
    ctx->pc = 0x438108u;
    SET_GPR_U32(ctx, 31, 0x438110u);
    ctx->pc = 0x43810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438108u;
            // 0x43810c: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B10u;
    if (runtime->hasFunction(0x2E0B10u)) {
        auto targetFn = runtime->lookupFunction(0x2E0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438110u; }
        if (ctx->pc != 0x438110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0B10_0x2e0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438110u; }
        if (ctx->pc != 0x438110u) { return; }
    }
    ctx->pc = 0x438110u;
label_438110:
    // 0x438110: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x438110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_438114:
    // 0x438114: 0xc04cc04  jal         func_133010
label_438118:
    if (ctx->pc == 0x438118u) {
        ctx->pc = 0x438118u;
            // 0x438118: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x43811Cu;
        goto label_43811c;
    }
    ctx->pc = 0x438114u;
    SET_GPR_U32(ctx, 31, 0x43811Cu);
    ctx->pc = 0x438118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438114u;
            // 0x438118: 0x266502c0  addiu       $a1, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43811Cu; }
        if (ctx->pc != 0x43811Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43811Cu; }
        if (ctx->pc != 0x43811Cu) { return; }
    }
    ctx->pc = 0x43811Cu;
label_43811c:
    // 0x43811c: 0x266402c0  addiu       $a0, $s3, 0x2C0
    ctx->pc = 0x43811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_438120:
    // 0x438120: 0xc04cc04  jal         func_133010
label_438124:
    if (ctx->pc == 0x438124u) {
        ctx->pc = 0x438124u;
            // 0x438124: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x438128u;
        goto label_438128;
    }
    ctx->pc = 0x438120u;
    SET_GPR_U32(ctx, 31, 0x438128u);
    ctx->pc = 0x438124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438120u;
            // 0x438124: 0x26450030  addiu       $a1, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438128u; }
        if (ctx->pc != 0x438128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438128u; }
        if (ctx->pc != 0x438128u) { return; }
    }
    ctx->pc = 0x438128u;
label_438128:
    // 0x438128: 0x3c024060  lui         $v0, 0x4060
    ctx->pc = 0x438128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16480 << 16));
label_43812c:
    // 0x43812c: 0x266402c0  addiu       $a0, $s3, 0x2C0
    ctx->pc = 0x43812cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
label_438130:
    // 0x438130: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x438130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_438134:
    // 0x438134: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x438134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438138:
    // 0x438138: 0xc04cc7c  jal         func_1331F0
label_43813c:
    if (ctx->pc == 0x43813Cu) {
        ctx->pc = 0x43813Cu;
            // 0x43813c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438140u;
        goto label_438140;
    }
    ctx->pc = 0x438138u;
    SET_GPR_U32(ctx, 31, 0x438140u);
    ctx->pc = 0x43813Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438138u;
            // 0x43813c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438140u; }
        if (ctx->pc != 0x438140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438140u; }
        if (ctx->pc != 0x438140u) { return; }
    }
    ctx->pc = 0x438140u;
label_438140:
    // 0x438140: 0x266403a0  addiu       $a0, $s3, 0x3A0
    ctx->pc = 0x438140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 928));
label_438144:
    // 0x438144: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x438144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_438148:
    // 0x438148: 0xc04cc90  jal         func_133240
label_43814c:
    if (ctx->pc == 0x43814Cu) {
        ctx->pc = 0x43814Cu;
            // 0x43814c: 0x266602c0  addiu       $a2, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->pc = 0x438150u;
        goto label_438150;
    }
    ctx->pc = 0x438148u;
    SET_GPR_U32(ctx, 31, 0x438150u);
    ctx->pc = 0x43814Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438148u;
            // 0x43814c: 0x266602c0  addiu       $a2, $s3, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438150u; }
        if (ctx->pc != 0x438150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438150u; }
        if (ctx->pc != 0x438150u) { return; }
    }
    ctx->pc = 0x438150u;
label_438150:
    // 0x438150: 0x8e710d74  lw          $s1, 0xD74($s3)
    ctx->pc = 0x438150u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_438154:
    // 0x438154: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x438154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_438158:
    // 0x438158: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x438158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_43815c:
    // 0x43815c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x43815cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_438160:
    // 0x438160: 0x8e2202c8  lw          $v0, 0x2C8($s1)
    ctx->pc = 0x438160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_438164:
    // 0x438164: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x438164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_438168:
    // 0x438168: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x438168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_43816c:
    // 0x43816c: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x43816cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_438170:
    // 0x438170: 0xc0a545c  jal         func_295170
label_438174:
    if (ctx->pc == 0x438174u) {
        ctx->pc = 0x438174u;
            // 0x438174: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x438178u;
        goto label_438178;
    }
    ctx->pc = 0x438170u;
    SET_GPR_U32(ctx, 31, 0x438178u);
    ctx->pc = 0x438174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438170u;
            // 0x438174: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438178u; }
        if (ctx->pc != 0x438178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438178u; }
        if (ctx->pc != 0x438178u) { return; }
    }
    ctx->pc = 0x438178u;
label_438178:
    // 0x438178: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x438178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_43817c:
    // 0x43817c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43817cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438180:
    // 0x438180: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x438180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_438184:
    // 0x438184: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x438184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_438188:
    // 0x438188: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x438188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43818c:
    // 0x43818c: 0xc08bf20  jal         func_22FC80
label_438190:
    if (ctx->pc == 0x438190u) {
        ctx->pc = 0x438190u;
            // 0x438190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438194u;
        goto label_438194;
    }
    ctx->pc = 0x43818Cu;
    SET_GPR_U32(ctx, 31, 0x438194u);
    ctx->pc = 0x438190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43818Cu;
            // 0x438190: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438194u; }
        if (ctx->pc != 0x438194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438194u; }
        if (ctx->pc != 0x438194u) { return; }
    }
    ctx->pc = 0x438194u;
label_438194:
    // 0x438194: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x438194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_438198:
    // 0x438198: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x438198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43819c:
    // 0x43819c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x43819cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4381a0:
    // 0x4381a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x4381a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_4381a4:
    // 0x4381a4: 0xc0c1590  jal         func_305640
label_4381a8:
    if (ctx->pc == 0x4381A8u) {
        ctx->pc = 0x4381A8u;
            // 0x4381a8: 0xac4002e8  sw          $zero, 0x2E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 0));
        ctx->pc = 0x4381ACu;
        goto label_4381ac;
    }
    ctx->pc = 0x4381A4u;
    SET_GPR_U32(ctx, 31, 0x4381ACu);
    ctx->pc = 0x4381A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4381A4u;
            // 0x4381a8: 0xac4002e8  sw          $zero, 0x2E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4381ACu; }
        if (ctx->pc != 0x4381ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4381ACu; }
        if (ctx->pc != 0x4381ACu) { return; }
    }
    ctx->pc = 0x4381ACu;
label_4381ac:
    // 0x4381ac: 0x8e630d74  lw          $v1, 0xD74($s3)
    ctx->pc = 0x4381acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3444)));
label_4381b0:
    // 0x4381b0: 0x3c050064  lui         $a1, 0x64
    ctx->pc = 0x4381b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)100 << 16));
label_4381b4:
    // 0x4381b4: 0x24a521d0  addiu       $a1, $a1, 0x21D0
    ctx->pc = 0x4381b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8656));
label_4381b8:
    // 0x4381b8: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x4381b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4381bc:
    // 0x4381bc: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x4381bcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_4381c0:
    // 0x4381c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4381c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4381c4:
    // 0x4381c4: 0xa06202c5  sb          $v0, 0x2C5($v1)
    ctx->pc = 0x4381c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 709), (uint8_t)GPR_U32(ctx, 2));
label_4381c8:
    // 0x4381c8: 0x906202c5  lbu         $v0, 0x2C5($v1)
    ctx->pc = 0x4381c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 709)));
label_4381cc:
    // 0x4381cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4381ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4381d0:
    // 0x4381d0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4381d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4381d4:
    // 0x4381d4: 0xc04a508  jal         func_129420
label_4381d8:
    if (ctx->pc == 0x4381D8u) {
        ctx->pc = 0x4381D8u;
            // 0x4381d8: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->pc = 0x4381DCu;
        goto label_4381dc;
    }
    ctx->pc = 0x4381D4u;
    SET_GPR_U32(ctx, 31, 0x4381DCu);
    ctx->pc = 0x4381D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4381D4u;
            // 0x4381d8: 0x24440280  addiu       $a0, $v0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4381DCu; }
        if (ctx->pc != 0x4381DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4381DCu; }
        if (ctx->pc != 0x4381DCu) { return; }
    }
    ctx->pc = 0x4381DCu;
label_4381dc:
    // 0x4381dc: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x4381dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_4381e0:
    // 0x4381e0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4381e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4381e4:
    // 0x4381e4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4381e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4381e8:
    // 0x4381e8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4381e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4381ec:
    // 0x4381ec: 0x320f809  jalr        $t9
label_4381f0:
    if (ctx->pc == 0x4381F0u) {
        ctx->pc = 0x4381F0u;
            // 0x4381f0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4381F4u;
        goto label_4381f4;
    }
    ctx->pc = 0x4381ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4381F4u);
        ctx->pc = 0x4381F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4381ECu;
            // 0x4381f0: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4381F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4381F4u; }
            if (ctx->pc != 0x4381F4u) { return; }
        }
        }
    }
    ctx->pc = 0x4381F4u;
label_4381f4:
    // 0x4381f4: 0x8e640d60  lw          $a0, 0xD60($s3)
    ctx->pc = 0x4381f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3424)));
label_4381f8:
    // 0x4381f8: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x4381f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_4381fc:
    // 0x4381fc: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x4381fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_438200:
    // 0x438200: 0x320f809  jalr        $t9
label_438204:
    if (ctx->pc == 0x438204u) {
        ctx->pc = 0x438204u;
            // 0x438204: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x438208u;
        goto label_438208;
    }
    ctx->pc = 0x438200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438208u);
        ctx->pc = 0x438204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438200u;
            // 0x438204: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x438208u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438208u; }
            if (ctx->pc != 0x438208u) { return; }
        }
        }
    }
    ctx->pc = 0x438208u;
label_438208:
    // 0x438208: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x438208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_43820c:
    // 0x43820c: 0xc07649c  jal         func_1D9270
label_438210:
    if (ctx->pc == 0x438210u) {
        ctx->pc = 0x438210u;
            // 0x438210: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x438214u;
        goto label_438214;
    }
    ctx->pc = 0x43820Cu;
    SET_GPR_U32(ctx, 31, 0x438214u);
    ctx->pc = 0x438210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43820Cu;
            // 0x438210: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438214u; }
        if (ctx->pc != 0x438214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438214u; }
        if (ctx->pc != 0x438214u) { return; }
    }
    ctx->pc = 0x438214u;
label_438214:
    // 0x438214: 0x8e0302d0  lw          $v1, 0x2D0($s0)
    ctx->pc = 0x438214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
label_438218:
    // 0x438218: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x438218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_43821c:
    // 0x43821c: 0xae0302d0  sw          $v1, 0x2D0($s0)
    ctx->pc = 0x43821cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 3));
label_438220:
    // 0x438220: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x438220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_438224:
    // 0x438224: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x438224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_438228:
    // 0x438228: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x438228u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_43822c:
    // 0x43822c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x43822cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_438230:
    // 0x438230: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x438230u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_438234:
    // 0x438234: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x438234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_438238:
    // 0x438238: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x438238u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_43823c:
    // 0x43823c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x43823cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438240:
    // 0x438240: 0x3e00008  jr          $ra
label_438244:
    if (ctx->pc == 0x438244u) {
        ctx->pc = 0x438244u;
            // 0x438244: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x438248u;
        goto label_438248;
    }
    ctx->pc = 0x438240u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438240u;
            // 0x438244: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438248u;
label_438248:
    // 0x438248: 0x0  nop
    ctx->pc = 0x438248u;
    // NOP
label_43824c:
    // 0x43824c: 0x0  nop
    ctx->pc = 0x43824cu;
    // NOP
label_438250:
    // 0x438250: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x438250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_438254:
    // 0x438254: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x438254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_438258:
    // 0x438258: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_43825c:
    // 0x43825c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x43825cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_438260:
    // 0x438260: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x438260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_438264:
    // 0x438264: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_438268:
    if (ctx->pc == 0x438268u) {
        ctx->pc = 0x438268u;
            // 0x438268: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x43826Cu;
        goto label_43826c;
    }
    ctx->pc = 0x438264u;
    {
        const bool branch_taken_0x438264 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x438264) {
            ctx->pc = 0x438268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438264u;
            // 0x438268: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438280u;
            goto label_438280;
        }
    }
    ctx->pc = 0x43826Cu;
label_43826c:
    // 0x43826c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43826cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_438270:
    // 0x438270: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x438270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_438274:
    // 0x438274: 0x320f809  jalr        $t9
label_438278:
    if (ctx->pc == 0x438278u) {
        ctx->pc = 0x438278u;
            // 0x438278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x43827Cu;
        goto label_43827c;
    }
    ctx->pc = 0x438274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43827Cu);
        ctx->pc = 0x438278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438274u;
            // 0x438278: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43827Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43827Cu; }
            if (ctx->pc != 0x43827Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43827Cu;
label_43827c:
    // 0x43827c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x43827cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_438280:
    // 0x438280: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x438280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_438284:
    // 0x438284: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438284u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438288:
    // 0x438288: 0x3e00008  jr          $ra
label_43828c:
    if (ctx->pc == 0x43828Cu) {
        ctx->pc = 0x43828Cu;
            // 0x43828c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x438290u;
        goto label_438290;
    }
    ctx->pc = 0x438288u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43828Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438288u;
            // 0x43828c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438290u;
label_438290:
    // 0x438290: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x438290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_438294:
    // 0x438294: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x438294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_438298:
    // 0x438298: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x438298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_43829c:
    // 0x43829c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x43829cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4382a0:
    // 0x4382a0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4382a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4382a4:
    // 0x4382a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4382a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4382a8:
    // 0x4382a8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x4382a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_4382ac:
    // 0x4382ac: 0xc0892d0  jal         func_224B40
label_4382b0:
    if (ctx->pc == 0x4382B0u) {
        ctx->pc = 0x4382B0u;
            // 0x4382b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x4382B4u;
        goto label_4382b4;
    }
    ctx->pc = 0x4382ACu;
    SET_GPR_U32(ctx, 31, 0x4382B4u);
    ctx->pc = 0x4382B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4382ACu;
            // 0x4382b0: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4382B4u; }
        if (ctx->pc != 0x4382B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4382B4u; }
        if (ctx->pc != 0x4382B4u) { return; }
    }
    ctx->pc = 0x4382B4u;
label_4382b4:
    // 0x4382b4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4382b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4382b8:
    // 0x4382b8: 0x24090006  addiu       $t1, $zero, 0x6
    ctx->pc = 0x4382b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4382bc:
    // 0x4382bc: 0x8c440ce8  lw          $a0, 0xCE8($v0)
    ctx->pc = 0x4382bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3304)));
label_4382c0:
    // 0x4382c0: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x4382c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_4382c4:
    // 0x4382c4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4382c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4382c8:
    // 0x4382c8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x4382c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_4382cc:
    // 0x4382cc: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x4382ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_4382d0:
    // 0x4382d0: 0x8c8a0060  lw          $t2, 0x60($a0)
    ctx->pc = 0x4382d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_4382d4:
    // 0x4382d4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x4382d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_4382d8:
    // 0x4382d8: 0x34470041  ori         $a3, $v0, 0x41
    ctx->pc = 0x4382d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
label_4382dc:
    // 0x4382dc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4382dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4382e0:
    // 0x4382e0: 0xafaa0084  sw          $t2, 0x84($sp)
    ctx->pc = 0x4382e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 10));
label_4382e4:
    // 0x4382e4: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x4382e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4382e8:
    // 0x4382e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x4382e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_4382ec:
    // 0x4382ec: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x4382ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4382f0:
    // 0x4382f0: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x4382f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4382f4:
    // 0x4382f4: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x4382f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_4382f8:
    // 0x4382f8: 0xa3a90130  sb          $t1, 0x130($sp)
    ctx->pc = 0x4382f8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 304), (uint8_t)GPR_U32(ctx, 9));
label_4382fc:
    // 0x4382fc: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x4382fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_438300:
    // 0x438300: 0xafa8012c  sw          $t0, 0x12C($sp)
    ctx->pc = 0x438300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 8));
label_438304:
    // 0x438304: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x438304u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_438308:
    // 0x438308: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x438308u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
label_43830c:
    // 0x43830c: 0xafa30110  sw          $v1, 0x110($sp)
    ctx->pc = 0x43830cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 3));
label_438310:
    // 0x438310: 0xc0a7a88  jal         func_29EA20
label_438314:
    if (ctx->pc == 0x438314u) {
        ctx->pc = 0x438314u;
            // 0x438314: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->pc = 0x438318u;
        goto label_438318;
    }
    ctx->pc = 0x438310u;
    SET_GPR_U32(ctx, 31, 0x438318u);
    ctx->pc = 0x438314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438310u;
            // 0x438314: 0xafa0009c  sw          $zero, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438318u; }
        if (ctx->pc != 0x438318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438318u; }
        if (ctx->pc != 0x438318u) { return; }
    }
    ctx->pc = 0x438318u;
label_438318:
    // 0x438318: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x438318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_43831c:
    // 0x43831c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x43831cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_438320:
    // 0x438320: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_438324:
    if (ctx->pc == 0x438324u) {
        ctx->pc = 0x438324u;
            // 0x438324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x438328u;
        goto label_438328;
    }
    ctx->pc = 0x438320u;
    {
        const bool branch_taken_0x438320 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x438324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438320u;
            // 0x438324: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438320) {
            ctx->pc = 0x438370u;
            goto label_438370;
        }
    }
    ctx->pc = 0x438328u;
label_438328:
    // 0x438328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x438328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43832c:
    // 0x43832c: 0xc088ef4  jal         func_223BD0
label_438330:
    if (ctx->pc == 0x438330u) {
        ctx->pc = 0x438330u;
            // 0x438330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x438334u;
        goto label_438334;
    }
    ctx->pc = 0x43832Cu;
    SET_GPR_U32(ctx, 31, 0x438334u);
    ctx->pc = 0x438330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43832Cu;
            // 0x438330: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438334u; }
        if (ctx->pc != 0x438334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438334u; }
        if (ctx->pc != 0x438334u) { return; }
    }
    ctx->pc = 0x438334u;
label_438334:
    // 0x438334: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x438334u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_438338:
    // 0x438338: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x438338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_43833c:
    // 0x43833c: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x43833cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_438340:
    // 0x438340: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x438340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_438344:
    // 0x438344: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x438344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_438348:
    // 0x438348: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x438348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_43834c:
    // 0x43834c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43834cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438350:
    // 0x438350: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x438350u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_438354:
    // 0x438354: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x438354u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_438358:
    // 0x438358: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x438358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_43835c:
    // 0x43835c: 0xae13000c  sw          $s3, 0xC($s0)
    ctx->pc = 0x43835cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 19));
label_438360:
    // 0x438360: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x438360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_438364:
    // 0x438364: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x438364u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_438368:
    // 0x438368: 0xc088b38  jal         func_222CE0
label_43836c:
    if (ctx->pc == 0x43836Cu) {
        ctx->pc = 0x43836Cu;
            // 0x43836c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438370u;
        goto label_438370;
    }
    ctx->pc = 0x438368u;
    SET_GPR_U32(ctx, 31, 0x438370u);
    ctx->pc = 0x43836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438368u;
            // 0x43836c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438370u; }
        if (ctx->pc != 0x438370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438370u; }
        if (ctx->pc != 0x438370u) { return; }
    }
    ctx->pc = 0x438370u;
label_438370:
    // 0x438370: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x438370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_438374:
    // 0x438374: 0x3c0246bb  lui         $v0, 0x46BB
    ctx->pc = 0x438374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18107 << 16));
label_438378:
    // 0x438378: 0x246321a0  addiu       $v1, $v1, 0x21A0
    ctx->pc = 0x438378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8608));
label_43837c:
    // 0x43837c: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x43837cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_438380:
    // 0x438380: 0xae030200  sw          $v1, 0x200($s0)
    ctx->pc = 0x438380u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 3));
label_438384:
    // 0x438384: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x438384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_438388:
    // 0x438388: 0xae020154  sw          $v0, 0x154($s0)
    ctx->pc = 0x438388u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 2));
label_43838c:
    // 0x43838c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x43838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_438390:
    // 0x438390: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x438390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_438394:
    // 0x438394: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x438394u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_438398:
    // 0x438398: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x438398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_43839c:
    // 0x43839c: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x43839cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
label_4383a0:
    // 0x4383a0: 0xc6620018  lwc1        $f2, 0x18($s3)
    ctx->pc = 0x4383a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4383a4:
    // 0x4383a4: 0xc6610014  lwc1        $f1, 0x14($s3)
    ctx->pc = 0x4383a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4383a8:
    // 0x4383a8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x4383a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4383ac:
    // 0x4383ac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x4383acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_4383b0:
    // 0x4383b0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4383b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4383b4:
    // 0x4383b4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x4383b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_4383b8:
    // 0x4383b8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x4383b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_4383bc:
    // 0x4383bc: 0xc663002c  lwc1        $f3, 0x2C($s3)
    ctx->pc = 0x4383bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4383c0:
    // 0x4383c0: 0xc6620028  lwc1        $f2, 0x28($s3)
    ctx->pc = 0x4383c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4383c4:
    // 0x4383c4: 0xc6610024  lwc1        $f1, 0x24($s3)
    ctx->pc = 0x4383c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4383c8:
    // 0x4383c8: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x4383c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4383cc:
    // 0x4383cc: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4383ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4383d0:
    // 0x4383d0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4383d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4383d4:
    // 0x4383d4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4383d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4383d8:
    // 0x4383d8: 0xc0892b0  jal         func_224AC0
label_4383dc:
    if (ctx->pc == 0x4383DCu) {
        ctx->pc = 0x4383DCu;
            // 0x4383dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x4383E0u;
        goto label_4383e0;
    }
    ctx->pc = 0x4383D8u;
    SET_GPR_U32(ctx, 31, 0x4383E0u);
    ctx->pc = 0x4383DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4383D8u;
            // 0x4383dc: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4383E0u; }
        if (ctx->pc != 0x4383E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4383E0u; }
        if (ctx->pc != 0x4383E0u) { return; }
    }
    ctx->pc = 0x4383E0u;
label_4383e0:
    // 0x4383e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4383e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4383e4:
    // 0x4383e4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x4383e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_4383e8:
    // 0x4383e8: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x4383e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_4383ec:
    // 0x4383ec: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x4383ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_4383f0:
    // 0x4383f0: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x4383f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_4383f4:
    // 0x4383f4: 0xc0891d8  jal         func_224760
label_4383f8:
    if (ctx->pc == 0x4383F8u) {
        ctx->pc = 0x4383F8u;
            // 0x4383f8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x4383FCu;
        goto label_4383fc;
    }
    ctx->pc = 0x4383F4u;
    SET_GPR_U32(ctx, 31, 0x4383FCu);
    ctx->pc = 0x4383F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4383F4u;
            // 0x4383f8: 0xafa0007c  sw          $zero, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4383FCu; }
        if (ctx->pc != 0x4383FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4383FCu; }
        if (ctx->pc != 0x4383FCu) { return; }
    }
    ctx->pc = 0x4383FCu;
label_4383fc:
    // 0x4383fc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4383fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438400:
    // 0x438400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x438400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_438404:
    // 0x438404: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x438404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_438408:
    // 0x438408: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x438408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_43840c:
    // 0x43840c: 0xc08c164  jal         func_230590
label_438410:
    if (ctx->pc == 0x438410u) {
        ctx->pc = 0x438410u;
            // 0x438410: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x438414u;
        goto label_438414;
    }
    ctx->pc = 0x43840Cu;
    SET_GPR_U32(ctx, 31, 0x438414u);
    ctx->pc = 0x438410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43840Cu;
            // 0x438410: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438414u; }
        if (ctx->pc != 0x438414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438414u; }
        if (ctx->pc != 0x438414u) { return; }
    }
    ctx->pc = 0x438414u;
label_438414:
    // 0x438414: 0xae700050  sw          $s0, 0x50($s3)
    ctx->pc = 0x438414u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 16));
label_438418:
    // 0x438418: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x438418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_43841c:
    // 0x43841c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x43841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_438420:
    // 0x438420: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x438420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_438424:
    // 0x438424: 0xc0a7a88  jal         func_29EA20
label_438428:
    if (ctx->pc == 0x438428u) {
        ctx->pc = 0x438428u;
            // 0x438428: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x43842Cu;
        goto label_43842c;
    }
    ctx->pc = 0x438424u;
    SET_GPR_U32(ctx, 31, 0x43842Cu);
    ctx->pc = 0x438428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438424u;
            // 0x438428: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43842Cu; }
        if (ctx->pc != 0x43842Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43842Cu; }
        if (ctx->pc != 0x43842Cu) { return; }
    }
    ctx->pc = 0x43842Cu;
label_43842c:
    // 0x43842c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x43842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_438430:
    // 0x438430: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x438430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_438434:
    // 0x438434: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_438438:
    if (ctx->pc == 0x438438u) {
        ctx->pc = 0x438438u;
            // 0x438438: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x43843Cu;
        goto label_43843c;
    }
    ctx->pc = 0x438434u;
    {
        const bool branch_taken_0x438434 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x438438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438434u;
            // 0x438438: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438434) {
            ctx->pc = 0x438458u;
            goto label_438458;
        }
    }
    ctx->pc = 0x43843Cu;
label_43843c:
    // 0x43843c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x43843cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_438440:
    // 0x438440: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x438440u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_438444:
    // 0x438444: 0xc0869d0  jal         func_21A740
label_438448:
    if (ctx->pc == 0x438448u) {
        ctx->pc = 0x438448u;
            // 0x438448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x43844Cu;
        goto label_43844c;
    }
    ctx->pc = 0x438444u;
    SET_GPR_U32(ctx, 31, 0x43844Cu);
    ctx->pc = 0x438448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438444u;
            // 0x438448: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43844Cu; }
        if (ctx->pc != 0x43844Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43844Cu; }
        if (ctx->pc != 0x43844Cu) { return; }
    }
    ctx->pc = 0x43844Cu;
label_43844c:
    // 0x43844c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x43844cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_438450:
    // 0x438450: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x438450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_438454:
    // 0x438454: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x438454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_438458:
    // 0x438458: 0xae110210  sw          $s1, 0x210($s0)
    ctx->pc = 0x438458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 17));
label_43845c:
    // 0x43845c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x43845cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438460:
    // 0x438460: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x438460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_438464:
    // 0x438464: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x438464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_438468:
    // 0x438468: 0xc08c650  jal         func_231940
label_43846c:
    if (ctx->pc == 0x43846Cu) {
        ctx->pc = 0x43846Cu;
            // 0x43846c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438470u;
        goto label_438470;
    }
    ctx->pc = 0x438468u;
    SET_GPR_U32(ctx, 31, 0x438470u);
    ctx->pc = 0x43846Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438468u;
            // 0x43846c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438470u; }
        if (ctx->pc != 0x438470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438470u; }
        if (ctx->pc != 0x438470u) { return; }
    }
    ctx->pc = 0x438470u;
label_438470:
    // 0x438470: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x438470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_438474:
    // 0x438474: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x438474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_438478:
    // 0x438478: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_43847c:
    if (ctx->pc == 0x43847Cu) {
        ctx->pc = 0x438480u;
        goto label_438480;
    }
    ctx->pc = 0x438478u;
    {
        const bool branch_taken_0x438478 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x438478) {
            ctx->pc = 0x4384F0u;
            goto label_4384f0;
        }
    }
    ctx->pc = 0x438480u;
label_438480:
    // 0x438480: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x438480u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
label_438484:
    // 0x438484: 0x3c100061  lui         $s0, 0x61
    ctx->pc = 0x438484u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)97 << 16));
label_438488:
    // 0x438488: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x438488u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_43848c:
    // 0x43848c: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x43848cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_438490:
    // 0x438490: 0x261000f0  addiu       $s0, $s0, 0xF0
    ctx->pc = 0x438490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_438494:
    // 0x438494: 0xc040180  jal         func_100600
label_438498:
    if (ctx->pc == 0x438498u) {
        ctx->pc = 0x438498u;
            // 0x438498: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->pc = 0x43849Cu;
        goto label_43849c;
    }
    ctx->pc = 0x438494u;
    SET_GPR_U32(ctx, 31, 0x43849Cu);
    ctx->pc = 0x438498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438494u;
            // 0x438498: 0x240404c0  addiu       $a0, $zero, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43849Cu; }
        if (ctx->pc != 0x43849Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43849Cu; }
        if (ctx->pc != 0x43849Cu) { return; }
    }
    ctx->pc = 0x43849Cu;
label_43849c:
    // 0x43849c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x43849cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4384a0:
    // 0x4384a0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_4384a4:
    if (ctx->pc == 0x4384A4u) {
        ctx->pc = 0x4384A8u;
        goto label_4384a8;
    }
    ctx->pc = 0x4384A0u;
    {
        const bool branch_taken_0x4384a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4384a0) {
            ctx->pc = 0x4384C0u;
            goto label_4384c0;
        }
    }
    ctx->pc = 0x4384A8u;
label_4384a8:
    // 0x4384a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4384a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4384ac:
    // 0x4384ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4384acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4384b0:
    // 0x4384b0: 0xc0c3f60  jal         func_30FD80
label_4384b4:
    if (ctx->pc == 0x4384B4u) {
        ctx->pc = 0x4384B4u;
            // 0x4384b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4384B8u;
        goto label_4384b8;
    }
    ctx->pc = 0x4384B0u;
    SET_GPR_U32(ctx, 31, 0x4384B8u);
    ctx->pc = 0x4384B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4384B0u;
            // 0x4384b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FD80u;
    if (runtime->hasFunction(0x30FD80u)) {
        auto targetFn = runtime->lookupFunction(0x30FD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4384B8u; }
        if (ctx->pc != 0x4384B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0030FD80_0x30fd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4384B8u; }
        if (ctx->pc != 0x4384B8u) { return; }
    }
    ctx->pc = 0x4384B8u;
label_4384b8:
    // 0x4384b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4384b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4384bc:
    // 0x4384bc: 0x0  nop
    ctx->pc = 0x4384bcu;
    // NOP
label_4384c0:
    // 0x4384c0: 0xae640340  sw          $a0, 0x340($s3)
    ctx->pc = 0x4384c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 832), GPR_U32(ctx, 4));
label_4384c4:
    // 0x4384c4: 0xac9000d4  sw          $s0, 0xD4($a0)
    ctx->pc = 0x4384c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 16));
label_4384c8:
    // 0x4384c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4384c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_4384cc:
    // 0x4384cc: 0x8e650340  lw          $a1, 0x340($s3)
    ctx->pc = 0x4384ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 832)));
label_4384d0:
    // 0x4384d0: 0x2a430002  slti        $v1, $s2, 0x2
    ctx->pc = 0x4384d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
label_4384d4:
    // 0x4384d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x4384d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_4384d8:
    // 0x4384d8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x4384d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_4384dc:
    // 0x4384dc: 0x94a40064  lhu         $a0, 0x64($a1)
    ctx->pc = 0x4384dcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 100)));
label_4384e0:
    // 0x4384e0: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x4384e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_4384e4:
    // 0x4384e4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x4384e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
label_4384e8:
    // 0x4384e8: 0x1460ffea  bnez        $v1, . + 4 + (-0x16 << 2)
label_4384ec:
    if (ctx->pc == 0x4384ECu) {
        ctx->pc = 0x4384ECu;
            // 0x4384ec: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x4384F0u;
        goto label_4384f0;
    }
    ctx->pc = 0x4384E8u;
    {
        const bool branch_taken_0x4384e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4384ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4384E8u;
            // 0x4384ec: 0xa4a40064  sh          $a0, 0x64($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 100), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4384e8) {
            ctx->pc = 0x438494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438494;
        }
    }
    ctx->pc = 0x4384F0u;
label_4384f0:
    // 0x4384f0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4384f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4384f4:
    // 0x4384f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4384f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4384f8:
    // 0x4384f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4384f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4384fc:
    // 0x4384fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4384fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438500:
    // 0x438500: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438504:
    // 0x438504: 0x3e00008  jr          $ra
label_438508:
    if (ctx->pc == 0x438508u) {
        ctx->pc = 0x438508u;
            // 0x438508: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x43850Cu;
        goto label_43850c;
    }
    ctx->pc = 0x438504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438504u;
            // 0x438508: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x43850Cu;
label_43850c:
    // 0x43850c: 0x0  nop
    ctx->pc = 0x43850cu;
    // NOP
label_438510:
    // 0x438510: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x438510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_438514:
    // 0x438514: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x438514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_438518:
    // 0x438518: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x438518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_43851c:
    // 0x43851c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x43851cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_438520:
    // 0x438520: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x438520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438524:
    // 0x438524: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_438528:
    // 0x438528: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x438528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_43852c:
    // 0x43852c: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x43852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_438530:
    // 0x438530: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x438530u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_438534:
    // 0x438534: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_438538:
    if (ctx->pc == 0x438538u) {
        ctx->pc = 0x438538u;
            // 0x438538: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x43853Cu;
        goto label_43853c;
    }
    ctx->pc = 0x438534u;
    {
        const bool branch_taken_0x438534 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x438538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438534u;
            // 0x438538: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438534) {
            ctx->pc = 0x43854Cu;
            goto label_43854c;
        }
    }
    ctx->pc = 0x43853Cu;
label_43853c:
    // 0x43853c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x43853cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_438540:
    // 0x438540: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x438540u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_438544:
    // 0x438544: 0x10000008  b           . + 4 + (0x8 << 2)
label_438548:
    if (ctx->pc == 0x438548u) {
        ctx->pc = 0x438548u;
            // 0x438548: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x43854Cu;
        goto label_43854c;
    }
    ctx->pc = 0x438544u;
    {
        const bool branch_taken_0x438544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438544u;
            // 0x438548: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x438544) {
            ctx->pc = 0x438568u;
            goto label_438568;
        }
    }
    ctx->pc = 0x43854Cu;
label_43854c:
    // 0x43854c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x43854cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_438550:
    // 0x438550: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x438550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_438554:
    // 0x438554: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x438554u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_438558:
    // 0x438558: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x438558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_43855c:
    // 0x43855c: 0x0  nop
    ctx->pc = 0x43855cu;
    // NOP
label_438560:
    // 0x438560: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x438560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_438564:
    // 0x438564: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x438564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_438568:
    // 0x438568: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x438568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_43856c:
    // 0x43856c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x43856cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_438570:
    // 0x438570: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x438570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_438574:
    // 0x438574: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x438574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_438578:
    // 0x438578: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x438578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43857c:
    // 0x43857c: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x43857cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_438580:
    // 0x438580: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x438580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_438584:
    // 0x438584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x438584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_438588:
    // 0x438588: 0x0  nop
    ctx->pc = 0x438588u;
    // NOP
label_43858c:
    // 0x43858c: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x43858cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_438590:
    // 0x438590: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x438590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_438594:
    // 0x438594: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x438594u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_438598:
    // 0x438598: 0x0  nop
    ctx->pc = 0x438598u;
    // NOP
label_43859c:
    // 0x43859c: 0x0  nop
    ctx->pc = 0x43859cu;
    // NOP
label_4385a0:
    // 0x4385a0: 0xc0d8aac  jal         func_362AB0
label_4385a4:
    if (ctx->pc == 0x4385A4u) {
        ctx->pc = 0x4385A8u;
        goto label_4385a8;
    }
    ctx->pc = 0x4385A0u;
    SET_GPR_U32(ctx, 31, 0x4385A8u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385A8u; }
        if (ctx->pc != 0x4385A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385A8u; }
        if (ctx->pc != 0x4385A8u) { return; }
    }
    ctx->pc = 0x4385A8u;
label_4385a8:
    // 0x4385a8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x4385a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4385ac:
    // 0x4385ac: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x4385acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
label_4385b0:
    // 0x4385b0: 0xc0b8160  jal         func_2E0580
label_4385b4:
    if (ctx->pc == 0x4385B4u) {
        ctx->pc = 0x4385B4u;
            // 0x4385b4: 0xe62c02f8  swc1        $f12, 0x2F8($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 760), bits); }
        ctx->pc = 0x4385B8u;
        goto label_4385b8;
    }
    ctx->pc = 0x4385B0u;
    SET_GPR_U32(ctx, 31, 0x4385B8u);
    ctx->pc = 0x4385B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4385B0u;
            // 0x4385b4: 0xe62c02f8  swc1        $f12, 0x2F8($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 760), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385B8u; }
        if (ctx->pc != 0x4385B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385B8u; }
        if (ctx->pc != 0x4385B8u) { return; }
    }
    ctx->pc = 0x4385B8u;
label_4385b8:
    // 0x4385b8: 0xc60c0150  lwc1        $f12, 0x150($s0)
    ctx->pc = 0x4385b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4385bc:
    // 0x4385bc: 0xc60d0154  lwc1        $f13, 0x154($s0)
    ctx->pc = 0x4385bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_4385c0:
    // 0x4385c0: 0xc60e0158  lwc1        $f14, 0x158($s0)
    ctx->pc = 0x4385c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_4385c4:
    // 0x4385c4: 0xc04cbd8  jal         func_132F60
label_4385c8:
    if (ctx->pc == 0x4385C8u) {
        ctx->pc = 0x4385C8u;
            // 0x4385c8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x4385CCu;
        goto label_4385cc;
    }
    ctx->pc = 0x4385C4u;
    SET_GPR_U32(ctx, 31, 0x4385CCu);
    ctx->pc = 0x4385C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4385C4u;
            // 0x4385c8: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385CCu; }
        if (ctx->pc != 0x4385CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4385CCu; }
        if (ctx->pc != 0x4385CCu) { return; }
    }
    ctx->pc = 0x4385CCu;
label_4385cc:
    // 0x4385cc: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x4385ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_4385d0:
    // 0x4385d0: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x4385d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_4385d4:
    // 0x4385d4: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x4385d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_4385d8:
    // 0x4385d8: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x4385d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_4385dc:
    // 0x4385dc: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x4385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4385e0:
    // 0x4385e0: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x4385e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_4385e4:
    // 0x4385e4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4385e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4385e8:
    // 0x4385e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4385e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4385ec:
    // 0x4385ec: 0x0  nop
    ctx->pc = 0x4385ecu;
    // NOP
label_4385f0:
    // 0x4385f0: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x4385f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_4385f4:
    // 0x4385f4: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x4385f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_4385f8:
    // 0x4385f8: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x4385f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4385fc:
    // 0x4385fc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x4385fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_438600:
    // 0x438600: 0xc04c720  jal         func_131C80
label_438604:
    if (ctx->pc == 0x438604u) {
        ctx->pc = 0x438604u;
            // 0x438604: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->pc = 0x438608u;
        goto label_438608;
    }
    ctx->pc = 0x438600u;
    SET_GPR_U32(ctx, 31, 0x438608u);
    ctx->pc = 0x438604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438600u;
            // 0x438604: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438608u; }
        if (ctx->pc != 0x438608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438608u; }
        if (ctx->pc != 0x438608u) { return; }
    }
    ctx->pc = 0x438608u;
label_438608:
    // 0x438608: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x438608u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_43860c:
    // 0x43860c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x43860cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_438610:
    // 0x438610: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x438610u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_438614:
    // 0x438614: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x438614u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_438618:
    // 0x438618: 0xa2230066  sb          $v1, 0x66($s1)
    ctx->pc = 0x438618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 102), (uint8_t)GPR_U32(ctx, 3));
label_43861c:
    // 0x43861c: 0xa2200067  sb          $zero, 0x67($s1)
    ctx->pc = 0x43861cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 103), (uint8_t)GPR_U32(ctx, 0));
label_438620:
    // 0x438620: 0xa2230068  sb          $v1, 0x68($s1)
    ctx->pc = 0x438620u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 104), (uint8_t)GPR_U32(ctx, 3));
label_438624:
    // 0x438624: 0xa2200069  sb          $zero, 0x69($s1)
    ctx->pc = 0x438624u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 105), (uint8_t)GPR_U32(ctx, 0));
label_438628:
    // 0x438628: 0xa223006a  sb          $v1, 0x6A($s1)
    ctx->pc = 0x438628u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 106), (uint8_t)GPR_U32(ctx, 3));
label_43862c:
    // 0x43862c: 0xa220006b  sb          $zero, 0x6B($s1)
    ctx->pc = 0x43862cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 107), (uint8_t)GPR_U32(ctx, 0));
label_438630:
    // 0x438630: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x438630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_438634:
    // 0x438634: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438634u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438638:
    // 0x438638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43863c:
    // 0x43863c: 0x3e00008  jr          $ra
label_438640:
    if (ctx->pc == 0x438640u) {
        ctx->pc = 0x438640u;
            // 0x438640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x438644u;
        goto label_438644;
    }
    ctx->pc = 0x43863Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43863Cu;
            // 0x438640: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438644u;
label_438644:
    // 0x438644: 0x0  nop
    ctx->pc = 0x438644u;
    // NOP
label_438648:
    // 0x438648: 0x0  nop
    ctx->pc = 0x438648u;
    // NOP
label_43864c:
    // 0x43864c: 0x0  nop
    ctx->pc = 0x43864cu;
    // NOP
label_438650:
    // 0x438650: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x438650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_438654:
    // 0x438654: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x438654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_438658:
    // 0x438658: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x438658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43865c:
    // 0x43865c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43865cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438660:
    // 0x438660: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_438664:
    // 0x438664: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x438664u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_438668:
    // 0x438668: 0xc0e393c  jal         func_38E4F0
label_43866c:
    if (ctx->pc == 0x43866Cu) {
        ctx->pc = 0x43866Cu;
            // 0x43866c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->pc = 0x438670u;
        goto label_438670;
    }
    ctx->pc = 0x438668u;
    SET_GPR_U32(ctx, 31, 0x438670u);
    ctx->pc = 0x43866Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438668u;
            // 0x43866c: 0x263000e0  addiu       $s0, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438670u; }
        if (ctx->pc != 0x438670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438670u; }
        if (ctx->pc != 0x438670u) { return; }
    }
    ctx->pc = 0x438670u;
label_438670:
    // 0x438670: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x438670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_438674:
    // 0x438674: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x438674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_438678:
    // 0x438678: 0xae2300d0  sw          $v1, 0xD0($s1)
    ctx->pc = 0x438678u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 3));
label_43867c:
    // 0x43867c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x43867cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_438680:
    // 0x438680: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x438680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_438684:
    // 0x438684: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x438684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_438688:
    // 0x438688: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x438688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_43868c:
    // 0x43868c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x43868cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_438690:
    // 0x438690: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x438690u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_438694:
    // 0x438694: 0x0  nop
    ctx->pc = 0x438694u;
    // NOP
label_438698:
    // 0x438698: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x438698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_43869c:
    // 0x43869c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x43869cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_4386a0:
    // 0x4386a0: 0x0  nop
    ctx->pc = 0x4386a0u;
    // NOP
label_4386a4:
    // 0x4386a4: 0x0  nop
    ctx->pc = 0x4386a4u;
    // NOP
label_4386a8:
    // 0x4386a8: 0xc0d8a84  jal         func_362A10
label_4386ac:
    if (ctx->pc == 0x4386ACu) {
        ctx->pc = 0x4386ACu;
            // 0x4386ac: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->pc = 0x4386B0u;
        goto label_4386b0;
    }
    ctx->pc = 0x4386A8u;
    SET_GPR_U32(ctx, 31, 0x4386B0u);
    ctx->pc = 0x4386ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4386A8u;
            // 0x4386ac: 0xe6000120  swc1        $f0, 0x120($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x362A10u;
    if (runtime->hasFunction(0x362A10u)) {
        auto targetFn = runtime->lookupFunction(0x362A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386B0u; }
        if (ctx->pc != 0x4386B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362A10_0x362a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386B0u; }
        if (ctx->pc != 0x4386B0u) { return; }
    }
    ctx->pc = 0x4386B0u;
label_4386b0:
    // 0x4386b0: 0xc62c02f8  lwc1        $f12, 0x2F8($s1)
    ctx->pc = 0x4386b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4386b4:
    // 0x4386b4: 0xc0b8160  jal         func_2E0580
label_4386b8:
    if (ctx->pc == 0x4386B8u) {
        ctx->pc = 0x4386B8u;
            // 0x4386b8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->pc = 0x4386BCu;
        goto label_4386bc;
    }
    ctx->pc = 0x4386B4u;
    SET_GPR_U32(ctx, 31, 0x4386BCu);
    ctx->pc = 0x4386B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4386B4u;
            // 0x4386b8: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0580u;
    if (runtime->hasFunction(0x2E0580u)) {
        auto targetFn = runtime->lookupFunction(0x2E0580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386BCu; }
        if (ctx->pc != 0x4386BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0580_0x2e0580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386BCu; }
        if (ctx->pc != 0x4386BCu) { return; }
    }
    ctx->pc = 0x4386BCu;
label_4386bc:
    // 0x4386bc: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x4386bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_4386c0:
    // 0x4386c0: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x4386c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_4386c4:
    // 0x4386c4: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x4386c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_4386c8:
    // 0x4386c8: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x4386c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_4386cc:
    // 0x4386cc: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x4386ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4386d0:
    // 0x4386d0: 0xc088b74  jal         func_222DD0
label_4386d4:
    if (ctx->pc == 0x4386D4u) {
        ctx->pc = 0x4386D4u;
            // 0x4386d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4386D8u;
        goto label_4386d8;
    }
    ctx->pc = 0x4386D0u;
    SET_GPR_U32(ctx, 31, 0x4386D8u);
    ctx->pc = 0x4386D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4386D0u;
            // 0x4386d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386D8u; }
        if (ctx->pc != 0x4386D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386D8u; }
        if (ctx->pc != 0x4386D8u) { return; }
    }
    ctx->pc = 0x4386D8u;
label_4386d8:
    // 0x4386d8: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4386d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4386dc:
    // 0x4386dc: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4386dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_4386e0:
    // 0x4386e0: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x4386e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_4386e4:
    // 0x4386e4: 0x320f809  jalr        $t9
label_4386e8:
    if (ctx->pc == 0x4386E8u) {
        ctx->pc = 0x4386E8u;
            // 0x4386e8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x4386ECu;
        goto label_4386ec;
    }
    ctx->pc = 0x4386E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4386ECu);
        ctx->pc = 0x4386E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4386E4u;
            // 0x4386e8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4386ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4386ECu; }
            if (ctx->pc != 0x4386ECu) { return; }
        }
        }
    }
    ctx->pc = 0x4386ECu;
label_4386ec:
    // 0x4386ec: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x4386ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_4386f0:
    // 0x4386f0: 0xc088b74  jal         func_222DD0
label_4386f4:
    if (ctx->pc == 0x4386F4u) {
        ctx->pc = 0x4386F4u;
            // 0x4386f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4386F8u;
        goto label_4386f8;
    }
    ctx->pc = 0x4386F0u;
    SET_GPR_U32(ctx, 31, 0x4386F8u);
    ctx->pc = 0x4386F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4386F0u;
            // 0x4386f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386F8u; }
        if (ctx->pc != 0x4386F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4386F8u; }
        if (ctx->pc != 0x4386F8u) { return; }
    }
    ctx->pc = 0x4386F8u;
label_4386f8:
    // 0x4386f8: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x4386f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_4386fc:
    // 0x4386fc: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x4386fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_438700:
    // 0x438700: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x438700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_438704:
    // 0x438704: 0x320f809  jalr        $t9
label_438708:
    if (ctx->pc == 0x438708u) {
        ctx->pc = 0x438708u;
            // 0x438708: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x43870Cu;
        goto label_43870c;
    }
    ctx->pc = 0x438704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43870Cu);
        ctx->pc = 0x438708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438704u;
            // 0x438708: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x43870Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43870Cu; }
            if (ctx->pc != 0x43870Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43870Cu;
label_43870c:
    // 0x43870c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x43870cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_438710:
    // 0x438710: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x438710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_438714:
    // 0x438714: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x438714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_438718:
    // 0x438718: 0xc08914c  jal         func_224530
label_43871c:
    if (ctx->pc == 0x43871Cu) {
        ctx->pc = 0x43871Cu;
            // 0x43871c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438720u;
        goto label_438720;
    }
    ctx->pc = 0x438718u;
    SET_GPR_U32(ctx, 31, 0x438720u);
    ctx->pc = 0x43871Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438718u;
            // 0x43871c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438720u; }
        if (ctx->pc != 0x438720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438720u; }
        if (ctx->pc != 0x438720u) { return; }
    }
    ctx->pc = 0x438720u;
label_438720:
    // 0x438720: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x438720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_438724:
    // 0x438724: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x438724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_438728:
    // 0x438728: 0x34430041  ori         $v1, $v0, 0x41
    ctx->pc = 0x438728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65);
label_43872c:
    // 0x43872c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x43872cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_438730:
    // 0x438730: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x438730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438734:
    // 0x438734: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x438734u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_438738:
    // 0x438738: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x438738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_43873c:
    // 0x43873c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x43873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_438740:
    // 0x438740: 0xc08bff0  jal         func_22FFC0
label_438744:
    if (ctx->pc == 0x438744u) {
        ctx->pc = 0x438744u;
            // 0x438744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438748u;
        goto label_438748;
    }
    ctx->pc = 0x438740u;
    SET_GPR_U32(ctx, 31, 0x438748u);
    ctx->pc = 0x438744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438740u;
            // 0x438744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438748u; }
        if (ctx->pc != 0x438748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438748u; }
        if (ctx->pc != 0x438748u) { return; }
    }
    ctx->pc = 0x438748u;
label_438748:
    // 0x438748: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x438748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_43874c:
    // 0x43874c: 0xc04cc04  jal         func_133010
label_438750:
    if (ctx->pc == 0x438750u) {
        ctx->pc = 0x438750u;
            // 0x438750: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->pc = 0x438754u;
        goto label_438754;
    }
    ctx->pc = 0x43874Cu;
    SET_GPR_U32(ctx, 31, 0x438754u);
    ctx->pc = 0x438750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43874Cu;
            // 0x438750: 0x260500f0  addiu       $a1, $s0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438754u; }
        if (ctx->pc != 0x438754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438754u; }
        if (ctx->pc != 0x438754u) { return; }
    }
    ctx->pc = 0x438754u;
label_438754:
    // 0x438754: 0x3c024053  lui         $v0, 0x4053
    ctx->pc = 0x438754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16467 << 16));
label_438758:
    // 0x438758: 0x26050090  addiu       $a1, $s0, 0x90
    ctx->pc = 0x438758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
label_43875c:
    // 0x43875c: 0x34433333  ori         $v1, $v0, 0x3333
    ctx->pc = 0x43875cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_438760:
    // 0x438760: 0x26240020  addiu       $a0, $s1, 0x20
    ctx->pc = 0x438760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_438764:
    // 0x438764: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x438764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_438768:
    // 0x438768: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x438768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_43876c:
    // 0x43876c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x43876cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_438770:
    // 0x438770: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x438770u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_438774:
    // 0x438774: 0x0  nop
    ctx->pc = 0x438774u;
    // NOP
label_438778:
    // 0x438778: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x438778u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_43877c:
    // 0x43877c: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x43877cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_438780:
    // 0x438780: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x438780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_438784:
    // 0x438784: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x438784u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_438788:
    // 0x438788: 0xc04c720  jal         func_131C80
label_43878c:
    if (ctx->pc == 0x43878Cu) {
        ctx->pc = 0x43878Cu;
            // 0x43878c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->pc = 0x438790u;
        goto label_438790;
    }
    ctx->pc = 0x438788u;
    SET_GPR_U32(ctx, 31, 0x438790u);
    ctx->pc = 0x43878Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438788u;
            // 0x43878c: 0xe6200010  swc1        $f0, 0x10($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438790u; }
        if (ctx->pc != 0x438790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438790u; }
        if (ctx->pc != 0x438790u) { return; }
    }
    ctx->pc = 0x438790u;
label_438790:
    // 0x438790: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x438790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_438794:
    // 0x438794: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x438794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_438798:
    // 0x438798: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x438798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_43879c:
    // 0x43879c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x43879cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4387a0:
    // 0x4387a0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x4387a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4387a4:
    // 0x4387a4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x4387a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_4387a8:
    // 0x4387a8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x4387a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_4387ac:
    // 0x4387ac: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x4387acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_4387b0:
    // 0x4387b0: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x4387b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_4387b4:
    // 0x4387b4: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x4387b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_4387b8:
    // 0x4387b8: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x4387b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_4387bc:
    // 0x4387bc: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x4387bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4387c0:
    // 0x4387c0: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x4387c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4387c4:
    // 0x4387c4: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x4387c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4387c8:
    // 0x4387c8: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x4387c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_4387cc:
    // 0x4387cc: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x4387ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_4387d0:
    // 0x4387d0: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x4387d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_4387d4:
    // 0x4387d4: 0xc0892b0  jal         func_224AC0
label_4387d8:
    if (ctx->pc == 0x4387D8u) {
        ctx->pc = 0x4387D8u;
            // 0x4387d8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x4387DCu;
        goto label_4387dc;
    }
    ctx->pc = 0x4387D4u;
    SET_GPR_U32(ctx, 31, 0x4387DCu);
    ctx->pc = 0x4387D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4387D4u;
            // 0x4387d8: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4387DCu; }
        if (ctx->pc != 0x4387DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4387DCu; }
        if (ctx->pc != 0x4387DCu) { return; }
    }
    ctx->pc = 0x4387DCu;
label_4387dc:
    // 0x4387dc: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x4387dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_4387e0:
    // 0x4387e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4387e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4387e4:
    // 0x4387e4: 0xae2002d8  sw          $zero, 0x2D8($s1)
    ctx->pc = 0x4387e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 728), GPR_U32(ctx, 0));
label_4387e8:
    // 0x4387e8: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x4387e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4387ec:
    // 0x4387ec: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
label_4387f0:
    if (ctx->pc == 0x4387F0u) {
        ctx->pc = 0x4387F0u;
            // 0x4387f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x4387F4u;
        goto label_4387f4;
    }
    ctx->pc = 0x4387ECu;
    {
        const bool branch_taken_0x4387ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4387ec) {
            ctx->pc = 0x4387F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4387ECu;
            // 0x4387f0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438820u;
            goto label_438820;
        }
    }
    ctx->pc = 0x4387F4u;
label_4387f4:
    // 0x4387f4: 0x8e240340  lw          $a0, 0x340($s1)
    ctx->pc = 0x4387f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 832)));
label_4387f8:
    // 0x4387f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4387f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4387fc:
    // 0x4387fc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4387fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_438800:
    // 0x438800: 0x320f809  jalr        $t9
label_438804:
    if (ctx->pc == 0x438804u) {
        ctx->pc = 0x438808u;
        goto label_438808;
    }
    ctx->pc = 0x438800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438808u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x438808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438808u; }
            if (ctx->pc != 0x438808u) { return; }
        }
        }
    }
    ctx->pc = 0x438808u;
label_438808:
    // 0x438808: 0x8e240344  lw          $a0, 0x344($s1)
    ctx->pc = 0x438808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 836)));
label_43880c:
    // 0x43880c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x43880cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_438810:
    // 0x438810: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x438810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_438814:
    // 0x438814: 0x320f809  jalr        $t9
label_438818:
    if (ctx->pc == 0x438818u) {
        ctx->pc = 0x43881Cu;
        goto label_43881c;
    }
    ctx->pc = 0x438814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x43881Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x43881Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x43881Cu; }
            if (ctx->pc != 0x43881Cu) { return; }
        }
        }
    }
    ctx->pc = 0x43881Cu;
label_43881c:
    // 0x43881c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x43881cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_438820:
    // 0x438820: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x438820u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_438824:
    // 0x438824: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438828:
    // 0x438828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43882c:
    // 0x43882c: 0x3e00008  jr          $ra
label_438830:
    if (ctx->pc == 0x438830u) {
        ctx->pc = 0x438830u;
            // 0x438830: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x438834u;
        goto label_438834;
    }
    ctx->pc = 0x43882Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43882Cu;
            // 0x438830: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438834u;
label_438834:
    // 0x438834: 0x0  nop
    ctx->pc = 0x438834u;
    // NOP
label_438838:
    // 0x438838: 0x0  nop
    ctx->pc = 0x438838u;
    // NOP
label_43883c:
    // 0x43883c: 0x0  nop
    ctx->pc = 0x43883cu;
    // NOP
label_438840:
    // 0x438840: 0x3e00008  jr          $ra
label_438844:
    if (ctx->pc == 0x438844u) {
        ctx->pc = 0x438848u;
        goto label_438848;
    }
    ctx->pc = 0x438840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438848u;
label_438848:
    // 0x438848: 0x0  nop
    ctx->pc = 0x438848u;
    // NOP
label_43884c:
    // 0x43884c: 0x0  nop
    ctx->pc = 0x43884cu;
    // NOP
label_438850:
    // 0x438850: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x438850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_438854:
    // 0x438854: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x438854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_438858:
    // 0x438858: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x438858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_43885c:
    // 0x43885c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x43885cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438860:
    // 0x438860: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x438860u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_438864:
    // 0x438864: 0xc0aeebc  jal         func_2BBAF0
label_438868:
    if (ctx->pc == 0x438868u) {
        ctx->pc = 0x438868u;
            // 0x438868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x43886Cu;
        goto label_43886c;
    }
    ctx->pc = 0x438864u;
    SET_GPR_U32(ctx, 31, 0x43886Cu);
    ctx->pc = 0x438868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438864u;
            // 0x438868: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43886Cu; }
        if (ctx->pc != 0x43886Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43886Cu; }
        if (ctx->pc != 0x43886Cu) { return; }
    }
    ctx->pc = 0x43886Cu;
label_43886c:
    // 0x43886c: 0xc0aeeb4  jal         func_2BBAD0
label_438870:
    if (ctx->pc == 0x438870u) {
        ctx->pc = 0x438870u;
            // 0x438870: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->pc = 0x438874u;
        goto label_438874;
    }
    ctx->pc = 0x43886Cu;
    SET_GPR_U32(ctx, 31, 0x438874u);
    ctx->pc = 0x438870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43886Cu;
            // 0x438870: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438874u; }
        if (ctx->pc != 0x438874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438874u; }
        if (ctx->pc != 0x438874u) { return; }
    }
    ctx->pc = 0x438874u;
label_438874:
    // 0x438874: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x438874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_438878:
    // 0x438878: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x438878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43887c:
    // 0x43887c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x43887cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_438880:
    // 0x438880: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x438880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_438884:
    // 0x438884: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438884u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_438888:
    // 0x438888: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x438888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_43888c:
    // 0x43888c: 0xc0aeea4  jal         func_2BBA90
label_438890:
    if (ctx->pc == 0x438890u) {
        ctx->pc = 0x438890u;
            // 0x438890: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x438894u;
        goto label_438894;
    }
    ctx->pc = 0x43888Cu;
    SET_GPR_U32(ctx, 31, 0x438894u);
    ctx->pc = 0x438890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43888Cu;
            // 0x438890: 0xae220054  sw          $v0, 0x54($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438894u; }
        if (ctx->pc != 0x438894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438894u; }
        if (ctx->pc != 0x438894u) { return; }
    }
    ctx->pc = 0x438894u;
label_438894:
    // 0x438894: 0xc0aee8c  jal         func_2BBA30
label_438898:
    if (ctx->pc == 0x438898u) {
        ctx->pc = 0x438898u;
            // 0x438898: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x43889Cu;
        goto label_43889c;
    }
    ctx->pc = 0x438894u;
    SET_GPR_U32(ctx, 31, 0x43889Cu);
    ctx->pc = 0x438898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438894u;
            // 0x438898: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43889Cu; }
        if (ctx->pc != 0x43889Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43889Cu; }
        if (ctx->pc != 0x43889Cu) { return; }
    }
    ctx->pc = 0x43889Cu;
label_43889c:
    // 0x43889c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x43889cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_4388a0:
    // 0x4388a0: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x4388a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_4388a4:
    // 0x4388a4: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x4388a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_4388a8:
    // 0x4388a8: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x4388a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_4388ac:
    // 0x4388ac: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x4388acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_4388b0:
    // 0x4388b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4388b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4388b4:
    // 0x4388b4: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x4388b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_4388b8:
    // 0x4388b8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4388b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4388bc:
    // 0x4388bc: 0xae2000ac  sw          $zero, 0xAC($s1)
    ctx->pc = 0x4388bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 0));
label_4388c0:
    // 0x4388c0: 0xae2500b0  sw          $a1, 0xB0($s1)
    ctx->pc = 0x4388c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 5));
label_4388c4:
    // 0x4388c4: 0xae2000b4  sw          $zero, 0xB4($s1)
    ctx->pc = 0x4388c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 180), GPR_U32(ctx, 0));
label_4388c8:
    // 0x4388c8: 0xae2000b8  sw          $zero, 0xB8($s1)
    ctx->pc = 0x4388c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 184), GPR_U32(ctx, 0));
label_4388cc:
    // 0x4388cc: 0xae2000c0  sw          $zero, 0xC0($s1)
    ctx->pc = 0x4388ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 0));
label_4388d0:
    // 0x4388d0: 0xae2400c4  sw          $a0, 0xC4($s1)
    ctx->pc = 0x4388d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 4));
label_4388d4:
    // 0x4388d4: 0xae2300c8  sw          $v1, 0xC8($s1)
    ctx->pc = 0x4388d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 3));
label_4388d8:
    // 0x4388d8: 0xc0775b8  jal         func_1DD6E0
label_4388dc:
    if (ctx->pc == 0x4388DCu) {
        ctx->pc = 0x4388DCu;
            // 0x4388dc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4388E0u;
        goto label_4388e0;
    }
    ctx->pc = 0x4388D8u;
    SET_GPR_U32(ctx, 31, 0x4388E0u);
    ctx->pc = 0x4388DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4388D8u;
            // 0x4388dc: 0xa22200cc  sb          $v0, 0xCC($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4388E0u; }
        if (ctx->pc != 0x4388E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4388E0u; }
        if (ctx->pc != 0x4388E0u) { return; }
    }
    ctx->pc = 0x4388E0u;
label_4388e0:
    // 0x4388e0: 0xc077314  jal         func_1DCC50
label_4388e4:
    if (ctx->pc == 0x4388E4u) {
        ctx->pc = 0x4388E4u;
            // 0x4388e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4388E8u;
        goto label_4388e8;
    }
    ctx->pc = 0x4388E0u;
    SET_GPR_U32(ctx, 31, 0x4388E8u);
    ctx->pc = 0x4388E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4388E0u;
            // 0x4388e4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4388E8u; }
        if (ctx->pc != 0x4388E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4388E8u; }
        if (ctx->pc != 0x4388E8u) { return; }
    }
    ctx->pc = 0x4388E8u;
label_4388e8:
    // 0x4388e8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x4388e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_4388ec:
    // 0x4388ec: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x4388ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_4388f0:
    // 0x4388f0: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x4388f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_4388f4:
    // 0x4388f4: 0x263200e0  addiu       $s2, $s1, 0xE0
    ctx->pc = 0x4388f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_4388f8:
    // 0x4388f8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x4388f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_4388fc:
    // 0x4388fc: 0x8e2400c8  lw          $a0, 0xC8($s1)
    ctx->pc = 0x4388fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
label_438900:
    // 0x438900: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x438900u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_438904:
    // 0x438904: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x438904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_438908:
    // 0x438908: 0x24a5ccf0  addiu       $a1, $a1, -0x3310
    ctx->pc = 0x438908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954224));
label_43890c:
    // 0x43890c: 0x2463cd30  addiu       $v1, $v1, -0x32D0
    ctx->pc = 0x43890cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954288));
label_438910:
    // 0x438910: 0x26500010  addiu       $s0, $s2, 0x10
    ctx->pc = 0x438910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_438914:
    // 0x438914: 0x863018  mult        $a2, $a0, $a2
    ctx->pc = 0x438914u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_438918:
    // 0x438918: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x438918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_43891c:
    // 0x43891c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x43891cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_438920:
    // 0x438920: 0xae2600c8  sw          $a2, 0xC8($s1)
    ctx->pc = 0x438920u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 6));
label_438924:
    // 0x438924: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x438924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_438928:
    // 0x438928: 0xae250000  sw          $a1, 0x0($s1)
    ctx->pc = 0x438928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 5));
label_43892c:
    // 0x43892c: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x43892cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_438930:
    // 0x438930: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x438930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_438934:
    // 0x438934: 0xae200180  sw          $zero, 0x180($s1)
    ctx->pc = 0x438934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 384), GPR_U32(ctx, 0));
label_438938:
    // 0x438938: 0xae200184  sw          $zero, 0x184($s1)
    ctx->pc = 0x438938u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 388), GPR_U32(ctx, 0));
label_43893c:
    // 0x43893c: 0xc04c968  jal         func_1325A0
label_438940:
    if (ctx->pc == 0x438940u) {
        ctx->pc = 0x438940u;
            // 0x438940: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x438944u;
        goto label_438944;
    }
    ctx->pc = 0x43893Cu;
    SET_GPR_U32(ctx, 31, 0x438944u);
    ctx->pc = 0x438940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43893Cu;
            // 0x438940: 0xa2200188  sb          $zero, 0x188($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 392), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438944u; }
        if (ctx->pc != 0x438944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438944u; }
        if (ctx->pc != 0x438944u) { return; }
    }
    ctx->pc = 0x438944u;
label_438944:
    // 0x438944: 0xc04c968  jal         func_1325A0
label_438948:
    if (ctx->pc == 0x438948u) {
        ctx->pc = 0x438948u;
            // 0x438948: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x43894Cu;
        goto label_43894c;
    }
    ctx->pc = 0x438944u;
    SET_GPR_U32(ctx, 31, 0x43894Cu);
    ctx->pc = 0x438948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438944u;
            // 0x438948: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43894Cu; }
        if (ctx->pc != 0x43894Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43894Cu; }
        if (ctx->pc != 0x43894Cu) { return; }
    }
    ctx->pc = 0x43894Cu;
label_43894c:
    // 0x43894c: 0xc04c968  jal         func_1325A0
label_438950:
    if (ctx->pc == 0x438950u) {
        ctx->pc = 0x438950u;
            // 0x438950: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x438954u;
        goto label_438954;
    }
    ctx->pc = 0x43894Cu;
    SET_GPR_U32(ctx, 31, 0x438954u);
    ctx->pc = 0x438950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43894Cu;
            // 0x438950: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438954u; }
        if (ctx->pc != 0x438954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438954u; }
        if (ctx->pc != 0x438954u) { return; }
    }
    ctx->pc = 0x438954u;
label_438954:
    // 0x438954: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x438954u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_438958:
    // 0x438958: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x438958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_43895c:
    // 0x43895c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x43895cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_438960:
    // 0x438960: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x438960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_438964:
    // 0x438964: 0xc04f26c  jal         func_13C9B0
label_438968:
    if (ctx->pc == 0x438968u) {
        ctx->pc = 0x438968u;
            // 0x438968: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->pc = 0x43896Cu;
        goto label_43896c;
    }
    ctx->pc = 0x438964u;
    SET_GPR_U32(ctx, 31, 0x43896Cu);
    ctx->pc = 0x438968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438964u;
            // 0x438968: 0xae0000a8  sw          $zero, 0xA8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43896Cu; }
        if (ctx->pc != 0x43896Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43896Cu; }
        if (ctx->pc != 0x43896Cu) { return; }
    }
    ctx->pc = 0x43896Cu;
label_43896c:
    // 0x43896c: 0xc04c968  jal         func_1325A0
label_438970:
    if (ctx->pc == 0x438970u) {
        ctx->pc = 0x438970u;
            // 0x438970: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x438974u;
        goto label_438974;
    }
    ctx->pc = 0x43896Cu;
    SET_GPR_U32(ctx, 31, 0x438974u);
    ctx->pc = 0x438970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43896Cu;
            // 0x438970: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438974u; }
        if (ctx->pc != 0x438974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438974u; }
        if (ctx->pc != 0x438974u) { return; }
    }
    ctx->pc = 0x438974u;
label_438974:
    // 0x438974: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x438974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_438978:
    // 0x438978: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x438978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_43897c:
    // 0x43897c: 0xc04cc04  jal         func_133010
label_438980:
    if (ctx->pc == 0x438980u) {
        ctx->pc = 0x438980u;
            // 0x438980: 0x24a5cf20  addiu       $a1, $a1, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
        ctx->pc = 0x438984u;
        goto label_438984;
    }
    ctx->pc = 0x43897Cu;
    SET_GPR_U32(ctx, 31, 0x438984u);
    ctx->pc = 0x438980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43897Cu;
            // 0x438980: 0x24a5cf20  addiu       $a1, $a1, -0x30E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438984u; }
        if (ctx->pc != 0x438984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438984u; }
        if (ctx->pc != 0x438984u) { return; }
    }
    ctx->pc = 0x438984u;
label_438984:
    // 0x438984: 0xae400100  sw          $zero, 0x100($s2)
    ctx->pc = 0x438984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 256), GPR_U32(ctx, 0));
label_438988:
    // 0x438988: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x438988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_43898c:
    // 0x43898c: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x43898cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_438990:
    // 0x438990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x438990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_438994:
    // 0x438994: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x438994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_438998:
    // 0x438998: 0x264400c0  addiu       $a0, $s2, 0xC0
    ctx->pc = 0x438998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 192));
label_43899c:
    // 0x43899c: 0xa6400110  sh          $zero, 0x110($s2)
    ctx->pc = 0x43899cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 272), (uint16_t)GPR_U32(ctx, 0));
label_4389a0:
    // 0x4389a0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4389a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4389a4:
    // 0x4389a4: 0xa6400112  sh          $zero, 0x112($s2)
    ctx->pc = 0x4389a4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 274), (uint16_t)GPR_U32(ctx, 0));
label_4389a8:
    // 0x4389a8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4389a8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4389ac:
    // 0x4389ac: 0xa6420114  sh          $v0, 0x114($s2)
    ctx->pc = 0x4389acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 276), (uint16_t)GPR_U32(ctx, 2));
label_4389b0:
    // 0x4389b0: 0xc04cbd8  jal         func_132F60
label_4389b4:
    if (ctx->pc == 0x4389B4u) {
        ctx->pc = 0x4389B4u;
            // 0x4389b4: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4389B8u;
        goto label_4389b8;
    }
    ctx->pc = 0x4389B0u;
    SET_GPR_U32(ctx, 31, 0x4389B8u);
    ctx->pc = 0x4389B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4389B0u;
            // 0x4389b4: 0xa6400116  sh          $zero, 0x116($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389B8u; }
        if (ctx->pc != 0x4389B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389B8u; }
        if (ctx->pc != 0x4389B8u) { return; }
    }
    ctx->pc = 0x4389B8u;
label_4389b8:
    // 0x4389b8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4389b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4389bc:
    // 0x4389bc: 0x264400d0  addiu       $a0, $s2, 0xD0
    ctx->pc = 0x4389bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_4389c0:
    // 0x4389c0: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4389c0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4389c4:
    // 0x4389c4: 0xc04cbd8  jal         func_132F60
label_4389c8:
    if (ctx->pc == 0x4389C8u) {
        ctx->pc = 0x4389C8u;
            // 0x4389c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4389CCu;
        goto label_4389cc;
    }
    ctx->pc = 0x4389C4u;
    SET_GPR_U32(ctx, 31, 0x4389CCu);
    ctx->pc = 0x4389C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4389C4u;
            // 0x4389c8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389CCu; }
        if (ctx->pc != 0x4389CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389CCu; }
        if (ctx->pc != 0x4389CCu) { return; }
    }
    ctx->pc = 0x4389CCu;
label_4389cc:
    // 0x4389cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4389ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4389d0:
    // 0x4389d0: 0x264400e0  addiu       $a0, $s2, 0xE0
    ctx->pc = 0x4389d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_4389d4:
    // 0x4389d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4389d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4389d8:
    // 0x4389d8: 0xc04cbd8  jal         func_132F60
label_4389dc:
    if (ctx->pc == 0x4389DCu) {
        ctx->pc = 0x4389DCu;
            // 0x4389dc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4389E0u;
        goto label_4389e0;
    }
    ctx->pc = 0x4389D8u;
    SET_GPR_U32(ctx, 31, 0x4389E0u);
    ctx->pc = 0x4389DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4389D8u;
            // 0x4389dc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389E0u; }
        if (ctx->pc != 0x4389E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389E0u; }
        if (ctx->pc != 0x4389E0u) { return; }
    }
    ctx->pc = 0x4389E0u;
label_4389e0:
    // 0x4389e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4389e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4389e4:
    // 0x4389e4: 0x264400f0  addiu       $a0, $s2, 0xF0
    ctx->pc = 0x4389e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 240));
label_4389e8:
    // 0x4389e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4389e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4389ec:
    // 0x4389ec: 0xc04cbd8  jal         func_132F60
label_4389f0:
    if (ctx->pc == 0x4389F0u) {
        ctx->pc = 0x4389F0u;
            // 0x4389f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4389F4u;
        goto label_4389f4;
    }
    ctx->pc = 0x4389ECu;
    SET_GPR_U32(ctx, 31, 0x4389F4u);
    ctx->pc = 0x4389F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4389ECu;
            // 0x4389f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389F4u; }
        if (ctx->pc != 0x4389F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4389F4u; }
        if (ctx->pc != 0x4389F4u) { return; }
    }
    ctx->pc = 0x4389F4u;
label_4389f4:
    // 0x4389f4: 0xae2002b0  sw          $zero, 0x2B0($s1)
    ctx->pc = 0x4389f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 688), GPR_U32(ctx, 0));
label_4389f8:
    // 0x4389f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4389f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4389fc:
    // 0x4389fc: 0xae2002b4  sw          $zero, 0x2B4($s1)
    ctx->pc = 0x4389fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 0));
label_438a00:
    // 0x438a00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x438a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_438a04:
    // 0x438a04: 0xae2002b8  sw          $zero, 0x2B8($s1)
    ctx->pc = 0x438a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
label_438a08:
    // 0x438a08: 0x26240270  addiu       $a0, $s1, 0x270
    ctx->pc = 0x438a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
label_438a0c:
    // 0x438a0c: 0xa62002c0  sh          $zero, 0x2C0($s1)
    ctx->pc = 0x438a0cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 704), (uint16_t)GPR_U32(ctx, 0));
label_438a10:
    // 0x438a10: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x438a10u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_438a14:
    // 0x438a14: 0xa62002c2  sh          $zero, 0x2C2($s1)
    ctx->pc = 0x438a14u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 706), (uint16_t)GPR_U32(ctx, 0));
label_438a18:
    // 0x438a18: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x438a18u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_438a1c:
    // 0x438a1c: 0xa62202c4  sh          $v0, 0x2C4($s1)
    ctx->pc = 0x438a1cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 708), (uint16_t)GPR_U32(ctx, 2));
label_438a20:
    // 0x438a20: 0xc04cbd8  jal         func_132F60
label_438a24:
    if (ctx->pc == 0x438A24u) {
        ctx->pc = 0x438A24u;
            // 0x438a24: 0xa62002c6  sh          $zero, 0x2C6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 710), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x438A28u;
        goto label_438a28;
    }
    ctx->pc = 0x438A20u;
    SET_GPR_U32(ctx, 31, 0x438A28u);
    ctx->pc = 0x438A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A20u;
            // 0x438a24: 0xa62002c6  sh          $zero, 0x2C6($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 710), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A28u; }
        if (ctx->pc != 0x438A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A28u; }
        if (ctx->pc != 0x438A28u) { return; }
    }
    ctx->pc = 0x438A28u;
label_438a28:
    // 0x438a28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x438a28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438a2c:
    // 0x438a2c: 0x26240280  addiu       $a0, $s1, 0x280
    ctx->pc = 0x438a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
label_438a30:
    // 0x438a30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x438a30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_438a34:
    // 0x438a34: 0xc04cbd8  jal         func_132F60
label_438a38:
    if (ctx->pc == 0x438A38u) {
        ctx->pc = 0x438A38u;
            // 0x438a38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x438A3Cu;
        goto label_438a3c;
    }
    ctx->pc = 0x438A34u;
    SET_GPR_U32(ctx, 31, 0x438A3Cu);
    ctx->pc = 0x438A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A34u;
            // 0x438a38: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A3Cu; }
        if (ctx->pc != 0x438A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A3Cu; }
        if (ctx->pc != 0x438A3Cu) { return; }
    }
    ctx->pc = 0x438A3Cu;
label_438a3c:
    // 0x438a3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x438a3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438a40:
    // 0x438a40: 0x26240290  addiu       $a0, $s1, 0x290
    ctx->pc = 0x438a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 656));
label_438a44:
    // 0x438a44: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x438a44u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_438a48:
    // 0x438a48: 0xc04cbd8  jal         func_132F60
label_438a4c:
    if (ctx->pc == 0x438A4Cu) {
        ctx->pc = 0x438A4Cu;
            // 0x438a4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x438A50u;
        goto label_438a50;
    }
    ctx->pc = 0x438A48u;
    SET_GPR_U32(ctx, 31, 0x438A50u);
    ctx->pc = 0x438A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A48u;
            // 0x438a4c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A50u; }
        if (ctx->pc != 0x438A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A50u; }
        if (ctx->pc != 0x438A50u) { return; }
    }
    ctx->pc = 0x438A50u;
label_438a50:
    // 0x438a50: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x438a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_438a54:
    // 0x438a54: 0x262402a0  addiu       $a0, $s1, 0x2A0
    ctx->pc = 0x438a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 672));
label_438a58:
    // 0x438a58: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x438a58u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_438a5c:
    // 0x438a5c: 0xc04cbd8  jal         func_132F60
label_438a60:
    if (ctx->pc == 0x438A60u) {
        ctx->pc = 0x438A60u;
            // 0x438a60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x438A64u;
        goto label_438a64;
    }
    ctx->pc = 0x438A5Cu;
    SET_GPR_U32(ctx, 31, 0x438A64u);
    ctx->pc = 0x438A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A5Cu;
            // 0x438a60: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A64u; }
        if (ctx->pc != 0x438A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A64u; }
        if (ctx->pc != 0x438A64u) { return; }
    }
    ctx->pc = 0x438A64u;
label_438a64:
    // 0x438a64: 0xae2002d0  sw          $zero, 0x2D0($s1)
    ctx->pc = 0x438a64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 0));
label_438a68:
    // 0x438a68: 0x262402d8  addiu       $a0, $s1, 0x2D8
    ctx->pc = 0x438a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
label_438a6c:
    // 0x438a6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x438a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438a70:
    // 0x438a70: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x438a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_438a74:
    // 0x438a74: 0xc04a576  jal         func_1295D8
label_438a78:
    if (ctx->pc == 0x438A78u) {
        ctx->pc = 0x438A78u;
            // 0x438a78: 0xae2002d4  sw          $zero, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
        ctx->pc = 0x438A7Cu;
        goto label_438a7c;
    }
    ctx->pc = 0x438A74u;
    SET_GPR_U32(ctx, 31, 0x438A7Cu);
    ctx->pc = 0x438A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A74u;
            // 0x438a78: 0xae2002d4  sw          $zero, 0x2D4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A7Cu; }
        if (ctx->pc != 0x438A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A7Cu; }
        if (ctx->pc != 0x438A7Cu) { return; }
    }
    ctx->pc = 0x438A7Cu;
label_438a7c:
    // 0x438a7c: 0x262402e8  addiu       $a0, $s1, 0x2E8
    ctx->pc = 0x438a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 744));
label_438a80:
    // 0x438a80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x438a80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438a84:
    // 0x438a84: 0xc04a576  jal         func_1295D8
label_438a88:
    if (ctx->pc == 0x438A88u) {
        ctx->pc = 0x438A88u;
            // 0x438a88: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x438A8Cu;
        goto label_438a8c;
    }
    ctx->pc = 0x438A84u;
    SET_GPR_U32(ctx, 31, 0x438A8Cu);
    ctx->pc = 0x438A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A84u;
            // 0x438a88: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A8Cu; }
        if (ctx->pc != 0x438A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A8Cu; }
        if (ctx->pc != 0x438A8Cu) { return; }
    }
    ctx->pc = 0x438A8Cu;
label_438a8c:
    // 0x438a8c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x438a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_438a90:
    // 0x438a90: 0x26240300  addiu       $a0, $s1, 0x300
    ctx->pc = 0x438a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
label_438a94:
    // 0x438a94: 0xc04cce8  jal         func_1333A0
label_438a98:
    if (ctx->pc == 0x438A98u) {
        ctx->pc = 0x438A98u;
            // 0x438a98: 0x24a5cee0  addiu       $a1, $a1, -0x3120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954720));
        ctx->pc = 0x438A9Cu;
        goto label_438a9c;
    }
    ctx->pc = 0x438A94u;
    SET_GPR_U32(ctx, 31, 0x438A9Cu);
    ctx->pc = 0x438A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438A94u;
            // 0x438a98: 0x24a5cee0  addiu       $a1, $a1, -0x3120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A9Cu; }
        if (ctx->pc != 0x438A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438A9Cu; }
        if (ctx->pc != 0x438A9Cu) { return; }
    }
    ctx->pc = 0x438A9Cu;
label_438a9c:
    // 0x438a9c: 0x26240340  addiu       $a0, $s1, 0x340
    ctx->pc = 0x438a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 832));
label_438aa0:
    // 0x438aa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x438aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438aa4:
    // 0x438aa4: 0xc04a576  jal         func_1295D8
label_438aa8:
    if (ctx->pc == 0x438AA8u) {
        ctx->pc = 0x438AA8u;
            // 0x438aa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x438AACu;
        goto label_438aac;
    }
    ctx->pc = 0x438AA4u;
    SET_GPR_U32(ctx, 31, 0x438AACu);
    ctx->pc = 0x438AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438AA4u;
            // 0x438aa8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438AACu; }
        if (ctx->pc != 0x438AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438AACu; }
        if (ctx->pc != 0x438AACu) { return; }
    }
    ctx->pc = 0x438AACu;
label_438aac:
    // 0x438aac: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x438aacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_438ab0:
    // 0x438ab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x438ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_438ab4:
    // 0x438ab4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x438ab4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_438ab8:
    // 0x438ab8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438ab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438abc:
    // 0x438abc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438abcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438ac0:
    // 0x438ac0: 0x3e00008  jr          $ra
label_438ac4:
    if (ctx->pc == 0x438AC4u) {
        ctx->pc = 0x438AC4u;
            // 0x438ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x438AC8u;
        goto label_438ac8;
    }
    ctx->pc = 0x438AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438AC0u;
            // 0x438ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438AC8u;
label_438ac8:
    // 0x438ac8: 0x0  nop
    ctx->pc = 0x438ac8u;
    // NOP
label_438acc:
    // 0x438acc: 0x0  nop
    ctx->pc = 0x438accu;
    // NOP
label_438ad0:
    // 0x438ad0: 0x3e00008  jr          $ra
label_438ad4:
    if (ctx->pc == 0x438AD4u) {
        ctx->pc = 0x438AD4u;
            // 0x438ad4: 0x24022bd5  addiu       $v0, $zero, 0x2BD5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11221));
        ctx->pc = 0x438AD8u;
        goto label_438ad8;
    }
    ctx->pc = 0x438AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438AD0u;
            // 0x438ad4: 0x24022bd5  addiu       $v0, $zero, 0x2BD5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11221));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438AD8u;
label_438ad8:
    // 0x438ad8: 0x0  nop
    ctx->pc = 0x438ad8u;
    // NOP
label_438adc:
    // 0x438adc: 0x0  nop
    ctx->pc = 0x438adcu;
    // NOP
label_438ae0:
    // 0x438ae0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x438ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_438ae4:
    // 0x438ae4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x438ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_438ae8:
    // 0x438ae8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x438ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438aec:
    // 0x438aec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_438af0:
    // 0x438af0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x438af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_438af4:
    // 0x438af4: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
label_438af8:
    if (ctx->pc == 0x438AF8u) {
        ctx->pc = 0x438AF8u;
            // 0x438af8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438AFCu;
        goto label_438afc;
    }
    ctx->pc = 0x438AF4u;
    {
        const bool branch_taken_0x438af4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x438AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438AF4u;
            // 0x438af8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438af4) {
            ctx->pc = 0x438BD4u;
            goto label_438bd4;
        }
    }
    ctx->pc = 0x438AFCu;
label_438afc:
    // 0x438afc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x438afcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_438b00:
    // 0x438b00: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x438b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_438b04:
    // 0x438b04: 0x2463ccf0  addiu       $v1, $v1, -0x3310
    ctx->pc = 0x438b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954224));
label_438b08:
    // 0x438b08: 0x2442cd30  addiu       $v0, $v0, -0x32D0
    ctx->pc = 0x438b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954288));
label_438b0c:
    // 0x438b0c: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_438b10:
    // 0x438b10: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x438b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_438b14:
    // 0x438b14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x438b14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_438b18:
    // 0x438b18: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x438b18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_438b1c:
    // 0x438b1c: 0x320f809  jalr        $t9
label_438b20:
    if (ctx->pc == 0x438B20u) {
        ctx->pc = 0x438B24u;
        goto label_438b24;
    }
    ctx->pc = 0x438B1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438B24u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x438B24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438B24u; }
            if (ctx->pc != 0x438B24u) { return; }
        }
        }
    }
    ctx->pc = 0x438B24u;
label_438b24:
    // 0x438b24: 0x262200e0  addiu       $v0, $s1, 0xE0
    ctx->pc = 0x438b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
label_438b28:
    // 0x438b28: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_438b2c:
    if (ctx->pc == 0x438B2Cu) {
        ctx->pc = 0x438B30u;
        goto label_438b30;
    }
    ctx->pc = 0x438B28u;
    {
        const bool branch_taken_0x438b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x438b28) {
            ctx->pc = 0x438B3Cu;
            goto label_438b3c;
        }
    }
    ctx->pc = 0x438B30u;
label_438b30:
    // 0x438b30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x438b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_438b34:
    // 0x438b34: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x438b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
label_438b38:
    // 0x438b38: 0xae2200e0  sw          $v0, 0xE0($s1)
    ctx->pc = 0x438b38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 224), GPR_U32(ctx, 2));
label_438b3c:
    // 0x438b3c: 0x52200020  beql        $s1, $zero, . + 4 + (0x20 << 2)
label_438b40:
    if (ctx->pc == 0x438B40u) {
        ctx->pc = 0x438B40u;
            // 0x438b40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x438B44u;
        goto label_438b44;
    }
    ctx->pc = 0x438B3Cu;
    {
        const bool branch_taken_0x438b3c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x438b3c) {
            ctx->pc = 0x438B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438B3Cu;
            // 0x438b40: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438BC0u;
            goto label_438bc0;
        }
    }
    ctx->pc = 0x438B44u;
label_438b44:
    // 0x438b44: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x438b44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_438b48:
    // 0x438b48: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x438b48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_438b4c:
    // 0x438b4c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x438b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_438b50:
    // 0x438b50: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x438b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_438b54:
    // 0x438b54: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x438b54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_438b58:
    // 0x438b58: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x438b58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
label_438b5c:
    // 0x438b5c: 0x8e24009c  lw          $a0, 0x9C($s1)
    ctx->pc = 0x438b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_438b60:
    // 0x438b60: 0xc0aecc4  jal         func_2BB310
label_438b64:
    if (ctx->pc == 0x438B64u) {
        ctx->pc = 0x438B64u;
            // 0x438b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x438B68u;
        goto label_438b68;
    }
    ctx->pc = 0x438B60u;
    SET_GPR_U32(ctx, 31, 0x438B68u);
    ctx->pc = 0x438B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438B60u;
            // 0x438b64: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438B68u; }
        if (ctx->pc != 0x438B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438B68u; }
        if (ctx->pc != 0x438B68u) { return; }
    }
    ctx->pc = 0x438B68u;
label_438b68:
    // 0x438b68: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x438b68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_438b6c:
    // 0x438b6c: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x438b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_438b70:
    // 0x438b70: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_438b74:
    if (ctx->pc == 0x438B74u) {
        ctx->pc = 0x438B74u;
            // 0x438b74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x438B78u;
        goto label_438b78;
    }
    ctx->pc = 0x438B70u;
    {
        const bool branch_taken_0x438b70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x438b70) {
            ctx->pc = 0x438B74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438B70u;
            // 0x438b74: 0x2624006c  addiu       $a0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438B8Cu;
            goto label_438b8c;
        }
    }
    ctx->pc = 0x438B78u;
label_438b78:
    // 0x438b78: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x438b78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_438b7c:
    // 0x438b7c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x438b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_438b80:
    // 0x438b80: 0x320f809  jalr        $t9
label_438b84:
    if (ctx->pc == 0x438B84u) {
        ctx->pc = 0x438B84u;
            // 0x438b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x438B88u;
        goto label_438b88;
    }
    ctx->pc = 0x438B80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438B88u);
        ctx->pc = 0x438B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438B80u;
            // 0x438b84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x438B88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438B88u; }
            if (ctx->pc != 0x438B88u) { return; }
        }
        }
    }
    ctx->pc = 0x438B88u;
label_438b88:
    // 0x438b88: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x438b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_438b8c:
    // 0x438b8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x438b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_438b90:
    // 0x438b90: 0xc0aec9c  jal         func_2BB270
label_438b94:
    if (ctx->pc == 0x438B94u) {
        ctx->pc = 0x438B94u;
            // 0x438b94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x438B98u;
        goto label_438b98;
    }
    ctx->pc = 0x438B90u;
    SET_GPR_U32(ctx, 31, 0x438B98u);
    ctx->pc = 0x438B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438B90u;
            // 0x438b94: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438B98u; }
        if (ctx->pc != 0x438B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438B98u; }
        if (ctx->pc != 0x438B98u) { return; }
    }
    ctx->pc = 0x438B98u;
label_438b98:
    // 0x438b98: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x438b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_438b9c:
    // 0x438b9c: 0xc0aec88  jal         func_2BB220
label_438ba0:
    if (ctx->pc == 0x438BA0u) {
        ctx->pc = 0x438BA0u;
            // 0x438ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x438BA4u;
        goto label_438ba4;
    }
    ctx->pc = 0x438B9Cu;
    SET_GPR_U32(ctx, 31, 0x438BA4u);
    ctx->pc = 0x438BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438B9Cu;
            // 0x438ba0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BA4u; }
        if (ctx->pc != 0x438BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BA4u; }
        if (ctx->pc != 0x438BA4u) { return; }
    }
    ctx->pc = 0x438BA4u;
label_438ba4:
    // 0x438ba4: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x438ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_438ba8:
    // 0x438ba8: 0xc0aec0c  jal         func_2BB030
label_438bac:
    if (ctx->pc == 0x438BACu) {
        ctx->pc = 0x438BACu;
            // 0x438bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438BB0u;
        goto label_438bb0;
    }
    ctx->pc = 0x438BA8u;
    SET_GPR_U32(ctx, 31, 0x438BB0u);
    ctx->pc = 0x438BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438BA8u;
            // 0x438bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BB0u; }
        if (ctx->pc != 0x438BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BB0u; }
        if (ctx->pc != 0x438BB0u) { return; }
    }
    ctx->pc = 0x438BB0u;
label_438bb0:
    // 0x438bb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x438bb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_438bb4:
    // 0x438bb4: 0xc0aeaa8  jal         func_2BAAA0
label_438bb8:
    if (ctx->pc == 0x438BB8u) {
        ctx->pc = 0x438BB8u;
            // 0x438bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438BBCu;
        goto label_438bbc;
    }
    ctx->pc = 0x438BB4u;
    SET_GPR_U32(ctx, 31, 0x438BBCu);
    ctx->pc = 0x438BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438BB4u;
            // 0x438bb8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BBCu; }
        if (ctx->pc != 0x438BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BBCu; }
        if (ctx->pc != 0x438BBCu) { return; }
    }
    ctx->pc = 0x438BBCu;
label_438bbc:
    // 0x438bbc: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x438bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_438bc0:
    // 0x438bc0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x438bc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_438bc4:
    // 0x438bc4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_438bc8:
    if (ctx->pc == 0x438BC8u) {
        ctx->pc = 0x438BC8u;
            // 0x438bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438BCCu;
        goto label_438bcc;
    }
    ctx->pc = 0x438BC4u;
    {
        const bool branch_taken_0x438bc4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x438bc4) {
            ctx->pc = 0x438BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438BC4u;
            // 0x438bc8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438BD8u;
            goto label_438bd8;
        }
    }
    ctx->pc = 0x438BCCu;
label_438bcc:
    // 0x438bcc: 0xc0400a8  jal         func_1002A0
label_438bd0:
    if (ctx->pc == 0x438BD0u) {
        ctx->pc = 0x438BD0u;
            // 0x438bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438BD4u;
        goto label_438bd4;
    }
    ctx->pc = 0x438BCCu;
    SET_GPR_U32(ctx, 31, 0x438BD4u);
    ctx->pc = 0x438BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438BCCu;
            // 0x438bd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BD4u; }
        if (ctx->pc != 0x438BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438BD4u; }
        if (ctx->pc != 0x438BD4u) { return; }
    }
    ctx->pc = 0x438BD4u;
label_438bd4:
    // 0x438bd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x438bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_438bd8:
    // 0x438bd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x438bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_438bdc:
    // 0x438bdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438be0:
    // 0x438be0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438be0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438be4:
    // 0x438be4: 0x3e00008  jr          $ra
label_438be8:
    if (ctx->pc == 0x438BE8u) {
        ctx->pc = 0x438BE8u;
            // 0x438be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x438BECu;
        goto label_438bec;
    }
    ctx->pc = 0x438BE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438BE4u;
            // 0x438be8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438BECu;
label_438bec:
    // 0x438bec: 0x0  nop
    ctx->pc = 0x438becu;
    // NOP
label_438bf0:
    // 0x438bf0: 0x810e2b8  j           func_438AE0
label_438bf4:
    if (ctx->pc == 0x438BF4u) {
        ctx->pc = 0x438BF4u;
            // 0x438bf4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x438BF8u;
        goto label_438bf8;
    }
    ctx->pc = 0x438BF0u;
    ctx->pc = 0x438BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438BF0u;
            // 0x438bf4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x438AE0u;
    if (runtime->shouldPreemptGuestExecution()) {
        return;
    }
    goto label_438ae0;
    ctx->pc = 0x438BF8u;
label_438bf8:
    // 0x438bf8: 0x0  nop
    ctx->pc = 0x438bf8u;
    // NOP
label_438bfc:
    // 0x438bfc: 0x0  nop
    ctx->pc = 0x438bfcu;
    // NOP
label_438c00:
    // 0x438c00: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x438c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_438c04:
    // 0x438c04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x438c04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_438c08:
    // 0x438c08: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x438c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_438c0c:
    // 0x438c0c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x438c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_438c10:
    // 0x438c10: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x438c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_438c14:
    // 0x438c14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x438c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_438c18:
    // 0x438c18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x438c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_438c1c:
    // 0x438c1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x438c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_438c20:
    // 0x438c20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x438c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_438c24:
    // 0x438c24: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x438c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_438c28:
    // 0x438c28: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x438c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438c2c:
    // 0x438c2c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_438c30:
    // 0x438c30: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x438c30u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_438c34:
    // 0x438c34: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_438c38:
    if (ctx->pc == 0x438C38u) {
        ctx->pc = 0x438C38u;
            // 0x438c38: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->pc = 0x438C3Cu;
        goto label_438c3c;
    }
    ctx->pc = 0x438C34u;
    {
        const bool branch_taken_0x438c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x438C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438C34u;
            // 0x438c38: 0xafa400dc  sw          $a0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438c34) {
            ctx->pc = 0x438C84u;
            goto label_438c84;
        }
    }
    ctx->pc = 0x438C3Cu;
label_438c3c:
    // 0x438c3c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x438c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_438c40:
    // 0x438c40: 0x50a30064  beql        $a1, $v1, . + 4 + (0x64 << 2)
label_438c44:
    if (ctx->pc == 0x438C44u) {
        ctx->pc = 0x438C44u;
            // 0x438c44: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x438C48u;
        goto label_438c48;
    }
    ctx->pc = 0x438C40u;
    {
        const bool branch_taken_0x438c40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x438c40) {
            ctx->pc = 0x438C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438C40u;
            // 0x438c44: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438DD4u;
            goto label_438dd4;
        }
    }
    ctx->pc = 0x438C48u;
label_438c48:
    // 0x438c48: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x438c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_438c4c:
    // 0x438c4c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_438c50:
    if (ctx->pc == 0x438C50u) {
        ctx->pc = 0x438C54u;
        goto label_438c54;
    }
    ctx->pc = 0x438C4Cu;
    {
        const bool branch_taken_0x438c4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x438c4c) {
            ctx->pc = 0x438C5Cu;
            goto label_438c5c;
        }
    }
    ctx->pc = 0x438C54u;
label_438c54:
    // 0x438c54: 0x1000005e  b           . + 4 + (0x5E << 2)
label_438c58:
    if (ctx->pc == 0x438C58u) {
        ctx->pc = 0x438C5Cu;
        goto label_438c5c;
    }
    ctx->pc = 0x438C54u;
    {
        const bool branch_taken_0x438c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x438c54) {
            ctx->pc = 0x438DD0u;
            goto label_438dd0;
        }
    }
    ctx->pc = 0x438C5Cu;
label_438c5c:
    // 0x438c5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x438c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_438c60:
    // 0x438c60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x438c60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_438c64:
    // 0x438c64: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x438c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_438c68:
    // 0x438c68: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x438c68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_438c6c:
    // 0x438c6c: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x438c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_438c70:
    // 0x438c70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x438c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_438c74:
    // 0x438c74: 0x320f809  jalr        $t9
label_438c78:
    if (ctx->pc == 0x438C78u) {
        ctx->pc = 0x438C78u;
            // 0x438c78: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x438C7Cu;
        goto label_438c7c;
    }
    ctx->pc = 0x438C74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438C7Cu);
        ctx->pc = 0x438C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438C74u;
            // 0x438c78: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x438C7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438C7Cu; }
            if (ctx->pc != 0x438C7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x438C7Cu;
label_438c7c:
    // 0x438c7c: 0x10000054  b           . + 4 + (0x54 << 2)
label_438c80:
    if (ctx->pc == 0x438C80u) {
        ctx->pc = 0x438C84u;
        goto label_438c84;
    }
    ctx->pc = 0x438C7Cu;
    {
        const bool branch_taken_0x438c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x438c7c) {
            ctx->pc = 0x438DD0u;
            goto label_438dd0;
        }
    }
    ctx->pc = 0x438C84u;
label_438c84:
    // 0x438c84: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x438c84u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_438c88:
    // 0x438c88: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x438c88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_438c8c:
    // 0x438c8c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_438c90:
    if (ctx->pc == 0x438C90u) {
        ctx->pc = 0x438C90u;
            // 0x438c90: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x438C94u;
        goto label_438c94;
    }
    ctx->pc = 0x438C8Cu;
    {
        const bool branch_taken_0x438c8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x438C90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438C8Cu;
            // 0x438c90: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438c8c) {
            ctx->pc = 0x438DD0u;
            goto label_438dd0;
        }
    }
    ctx->pc = 0x438C94u;
label_438c94:
    // 0x438c94: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x438c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_438c98:
    // 0x438c98: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x438c98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
label_438c9c:
    // 0x438c9c: 0x8c67d130  lw          $a3, -0x2ED0($v1)
    ctx->pc = 0x438c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_438ca0:
    // 0x438ca0: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x438ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_438ca4:
    // 0x438ca4: 0x8c86d120  lw          $a2, -0x2EE0($a0)
    ctx->pc = 0x438ca4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294955296)));
label_438ca8:
    // 0x438ca8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x438ca8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438cac:
    // 0x438cac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x438cacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438cb0:
    // 0x438cb0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x438cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_438cb4:
    // 0x438cb4: 0x8cfe0130  lw          $fp, 0x130($a3)
    ctx->pc = 0x438cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 304)));
label_438cb8:
    // 0x438cb8: 0x8c630e28  lw          $v1, 0xE28($v1)
    ctx->pc = 0x438cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3624)));
label_438cbc:
    // 0x438cbc: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x438cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_438cc0:
    // 0x438cc0: 0x8cc60010  lw          $a2, 0x10($a2)
    ctx->pc = 0x438cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_438cc4:
    // 0x438cc4: 0x24630084  addiu       $v1, $v1, 0x84
    ctx->pc = 0x438cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 132));
label_438cc8:
    // 0x438cc8: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x438cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_438ccc:
    // 0x438ccc: 0x1e1880  sll         $v1, $fp, 2
    ctx->pc = 0x438cccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_438cd0:
    // 0x438cd0: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x438cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_438cd4:
    // 0x438cd4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x438cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_438cd8:
    // 0x438cd8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x438cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_438cdc:
    // 0x438cdc: 0xaca0e3d8  sw          $zero, -0x1C28($a1)
    ctx->pc = 0x438cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960088), GPR_U32(ctx, 0));
label_438ce0:
    // 0x438ce0: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x438ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_438ce4:
    // 0x438ce4: 0xac80e3c0  sw          $zero, -0x1C40($a0)
    ctx->pc = 0x438ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960064), GPR_U32(ctx, 0));
label_438ce8:
    // 0x438ce8: 0x7ba300a0  lq          $v1, 0xA0($sp)
    ctx->pc = 0x438ce8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_438cec:
    // 0x438cec: 0x8c760000  lw          $s6, 0x0($v1)
    ctx->pc = 0x438cecu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_438cf0:
    // 0x438cf0: 0x8fa300dc  lw          $v1, 0xDC($sp)
    ctx->pc = 0x438cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_438cf4:
    // 0x438cf4: 0x8c630074  lw          $v1, 0x74($v1)
    ctx->pc = 0x438cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_438cf8:
    // 0x438cf8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x438cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_438cfc:
    // 0x438cfc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x438cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_438d00:
    // 0x438d00: 0x8c740064  lw          $s4, 0x64($v1)
    ctx->pc = 0x438d00u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_438d04:
    // 0x438d04: 0x1a80001a  blez        $s4, . + 4 + (0x1A << 2)
label_438d08:
    if (ctx->pc == 0x438D08u) {
        ctx->pc = 0x438D0Cu;
        goto label_438d0c;
    }
    ctx->pc = 0x438D04u;
    {
        const bool branch_taken_0x438d04 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x438d04) {
            ctx->pc = 0x438D70u;
            goto label_438d70;
        }
    }
    ctx->pc = 0x438D0Cu;
label_438d0c:
    // 0x438d0c: 0x8c770068  lw          $s7, 0x68($v1)
    ctx->pc = 0x438d0cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_438d10:
    // 0x438d10: 0x8c720078  lw          $s2, 0x78($v1)
    ctx->pc = 0x438d10u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_438d14:
    // 0x438d14: 0x0  nop
    ctx->pc = 0x438d14u;
    // NOP
label_438d18:
    // 0x438d18: 0x92430010  lbu         $v1, 0x10($s2)
    ctx->pc = 0x438d18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 16)));
label_438d1c:
    // 0x438d1c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_438d20:
    if (ctx->pc == 0x438D20u) {
        ctx->pc = 0x438D24u;
        goto label_438d24;
    }
    ctx->pc = 0x438D1Cu;
    {
        const bool branch_taken_0x438d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x438d1c) {
            ctx->pc = 0x438D60u;
            goto label_438d60;
        }
    }
    ctx->pc = 0x438D24u;
label_438d24:
    // 0x438d24: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x438d24u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_438d28:
    // 0x438d28: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x438d28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_438d2c:
    // 0x438d2c: 0x0  nop
    ctx->pc = 0x438d2cu;
    // NOP
label_438d30:
    // 0x438d30: 0x8fa800c0  lw          $t0, 0xC0($sp)
    ctx->pc = 0x438d30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_438d34:
    // 0x438d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x438d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_438d38:
    // 0x438d38: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x438d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_438d3c:
    // 0x438d3c: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x438d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_438d40:
    // 0x438d40: 0x27a7016c  addiu       $a3, $sp, 0x16C
    ctx->pc = 0x438d40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_438d44:
    // 0x438d44: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x438d44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_438d48:
    // 0x438d48: 0xc10dcd4  jal         func_437350
label_438d4c:
    if (ctx->pc == 0x438D4Cu) {
        ctx->pc = 0x438D4Cu;
            // 0x438d4c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438D50u;
        goto label_438d50;
    }
    ctx->pc = 0x438D48u;
    SET_GPR_U32(ctx, 31, 0x438D50u);
    ctx->pc = 0x438D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438D48u;
            // 0x438d4c: 0x3c0502d  daddu       $t2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x437350u;
    if (runtime->hasFunction(0x437350u)) {
        auto targetFn = runtime->lookupFunction(0x437350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438D50u; }
        if (ctx->pc != 0x438D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00437350_0x437350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438D50u; }
        if (ctx->pc != 0x438D50u) { return; }
    }
    ctx->pc = 0x438D50u;
label_438d50:
    // 0x438d50: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x438d50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_438d54:
    // 0x438d54: 0x1660fff6  bnez        $s3, . + 4 + (-0xA << 2)
label_438d58:
    if (ctx->pc == 0x438D58u) {
        ctx->pc = 0x438D58u;
            // 0x438d58: 0x26310350  addiu       $s1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->pc = 0x438D5Cu;
        goto label_438d5c;
    }
    ctx->pc = 0x438D54u;
    {
        const bool branch_taken_0x438d54 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x438D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438D54u;
            // 0x438d58: 0x26310350  addiu       $s1, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d54) {
            ctx->pc = 0x438D30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438d30;
        }
    }
    ctx->pc = 0x438D5Cu;
label_438d5c:
    // 0x438d5c: 0x0  nop
    ctx->pc = 0x438d5cu;
    // NOP
label_438d60:
    // 0x438d60: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x438d60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_438d64:
    // 0x438d64: 0x1680ffec  bnez        $s4, . + 4 + (-0x14 << 2)
label_438d68:
    if (ctx->pc == 0x438D68u) {
        ctx->pc = 0x438D68u;
            // 0x438d68: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->pc = 0x438D6Cu;
        goto label_438d6c;
    }
    ctx->pc = 0x438D64u;
    {
        const bool branch_taken_0x438d64 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x438D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438D64u;
            // 0x438d68: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d64) {
            ctx->pc = 0x438D18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438d18;
        }
    }
    ctx->pc = 0x438D6Cu;
label_438d6c:
    // 0x438d6c: 0x0  nop
    ctx->pc = 0x438d6cu;
    // NOP
label_438d70:
    // 0x438d70: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x438d70u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_438d74:
    // 0x438d74: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x438d74u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_438d78:
    // 0x438d78: 0x2a3182b  sltu        $v1, $s5, $v1
    ctx->pc = 0x438d78u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_438d7c:
    // 0x438d7c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_438d80:
    if (ctx->pc == 0x438D80u) {
        ctx->pc = 0x438D80u;
            // 0x438d80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x438D84u;
        goto label_438d84;
    }
    ctx->pc = 0x438D7Cu;
    {
        const bool branch_taken_0x438d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x438D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438D7Cu;
            // 0x438d80: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d7c) {
            ctx->pc = 0x438CE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438ce8;
        }
    }
    ctx->pc = 0x438D84u;
label_438d84:
    // 0x438d84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x438d84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_438d88:
    // 0x438d88: 0x8c63e3c0  lw          $v1, -0x1C40($v1)
    ctx->pc = 0x438d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_438d8c:
    // 0x438d8c: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
label_438d90:
    if (ctx->pc == 0x438D90u) {
        ctx->pc = 0x438D94u;
        goto label_438d94;
    }
    ctx->pc = 0x438D8Cu;
    {
        const bool branch_taken_0x438d8c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x438d8c) {
            ctx->pc = 0x438DD0u;
            goto label_438dd0;
        }
    }
    ctx->pc = 0x438D94u;
label_438d94:
    // 0x438d94: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x438d94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_438d98:
    // 0x438d98: 0xc04e738  jal         func_139CE0
label_438d9c:
    if (ctx->pc == 0x438D9Cu) {
        ctx->pc = 0x438D9Cu;
            // 0x438d9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->pc = 0x438DA0u;
        goto label_438da0;
    }
    ctx->pc = 0x438D98u;
    SET_GPR_U32(ctx, 31, 0x438DA0u);
    ctx->pc = 0x438D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438D98u;
            // 0x438d9c: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438DA0u; }
        if (ctx->pc != 0x438DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438DA0u; }
        if (ctx->pc != 0x438DA0u) { return; }
    }
    ctx->pc = 0x438DA0u;
label_438da0:
    // 0x438da0: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x438da0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_438da4:
    // 0x438da4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x438da4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_438da8:
    // 0x438da8: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x438da8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_438dac:
    // 0x438dac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x438dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_438db0:
    // 0x438db0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x438db0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438db4:
    // 0x438db4: 0x8c45e3b0  lw          $a1, -0x1C50($v0)
    ctx->pc = 0x438db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960048)));
label_438db8:
    // 0x438db8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x438db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438dbc:
    // 0x438dbc: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x438dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_438dc0:
    // 0x438dc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x438dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_438dc4:
    // 0x438dc4: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x438dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_438dc8:
    // 0x438dc8: 0xc055ea8  jal         func_157AA0
label_438dcc:
    if (ctx->pc == 0x438DCCu) {
        ctx->pc = 0x438DCCu;
            // 0x438dcc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438DD0u;
        goto label_438dd0;
    }
    ctx->pc = 0x438DC8u;
    SET_GPR_U32(ctx, 31, 0x438DD0u);
    ctx->pc = 0x438DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438DC8u;
            // 0x438dcc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157AA0u;
    if (runtime->hasFunction(0x157AA0u)) {
        auto targetFn = runtime->lookupFunction(0x157AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438DD0u; }
        if (ctx->pc != 0x438DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157AA0_0x157aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438DD0u; }
        if (ctx->pc != 0x438DD0u) { return; }
    }
    ctx->pc = 0x438DD0u;
label_438dd0:
    // 0x438dd0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x438dd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_438dd4:
    // 0x438dd4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x438dd4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_438dd8:
    // 0x438dd8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x438dd8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_438ddc:
    // 0x438ddc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x438ddcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_438de0:
    // 0x438de0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x438de0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_438de4:
    // 0x438de4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x438de4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_438de8:
    // 0x438de8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x438de8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_438dec:
    // 0x438dec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x438decu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_438df0:
    // 0x438df0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438df0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438df4:
    // 0x438df4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438df4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438df8:
    // 0x438df8: 0x3e00008  jr          $ra
label_438dfc:
    if (ctx->pc == 0x438DFCu) {
        ctx->pc = 0x438DFCu;
            // 0x438dfc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x438E00u;
        goto label_438e00;
    }
    ctx->pc = 0x438DF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438DF8u;
            // 0x438dfc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438E00u;
label_438e00:
    // 0x438e00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x438e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_438e04:
    // 0x438e04: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x438e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_438e08:
    // 0x438e08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x438e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_438e0c:
    // 0x438e0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x438e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_438e10:
    // 0x438e10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x438e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_438e14:
    // 0x438e14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x438e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_438e18:
    // 0x438e18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x438e18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_438e1c:
    // 0x438e1c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x438e1cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_438e20:
    // 0x438e20: 0x10a3000c  beq         $a1, $v1, . + 4 + (0xC << 2)
label_438e24:
    if (ctx->pc == 0x438E24u) {
        ctx->pc = 0x438E24u;
            // 0x438e24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x438E28u;
        goto label_438e28;
    }
    ctx->pc = 0x438E20u;
    {
        const bool branch_taken_0x438e20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x438E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438E20u;
            // 0x438e24: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e20) {
            ctx->pc = 0x438E54u;
            goto label_438e54;
        }
    }
    ctx->pc = 0x438E28u;
label_438e28:
    // 0x438e28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x438e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_438e2c:
    // 0x438e2c: 0x50a30006  beql        $a1, $v1, . + 4 + (0x6 << 2)
label_438e30:
    if (ctx->pc == 0x438E30u) {
        ctx->pc = 0x438E30u;
            // 0x438e30: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x438E34u;
        goto label_438e34;
    }
    ctx->pc = 0x438E2Cu;
    {
        const bool branch_taken_0x438e2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x438e2c) {
            ctx->pc = 0x438E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x438E2Cu;
            // 0x438e30: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x438E48u;
            goto label_438e48;
        }
    }
    ctx->pc = 0x438E34u;
label_438e34:
    // 0x438e34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x438e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_438e38:
    // 0x438e38: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_438e3c:
    if (ctx->pc == 0x438E3Cu) {
        ctx->pc = 0x438E40u;
        goto label_438e40;
    }
    ctx->pc = 0x438E38u;
    {
        const bool branch_taken_0x438e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x438e38) {
            ctx->pc = 0x438E88u;
            goto label_438e88;
        }
    }
    ctx->pc = 0x438E40u;
label_438e40:
    // 0x438e40: 0x10000011  b           . + 4 + (0x11 << 2)
label_438e44:
    if (ctx->pc == 0x438E44u) {
        ctx->pc = 0x438E48u;
        goto label_438e48;
    }
    ctx->pc = 0x438E40u;
    {
        const bool branch_taken_0x438e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x438e40) {
            ctx->pc = 0x438E88u;
            goto label_438e88;
        }
    }
    ctx->pc = 0x438E48u;
label_438e48:
    // 0x438e48: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x438e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_438e4c:
    // 0x438e4c: 0x320f809  jalr        $t9
label_438e50:
    if (ctx->pc == 0x438E50u) {
        ctx->pc = 0x438E54u;
        goto label_438e54;
    }
    ctx->pc = 0x438E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x438E54u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x438E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x438E54u; }
            if (ctx->pc != 0x438E54u) { return; }
        }
        }
    }
    ctx->pc = 0x438E54u;
label_438e54:
    // 0x438e54: 0x8e110070  lw          $s1, 0x70($s0)
    ctx->pc = 0x438e54u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_438e58:
    // 0x438e58: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_438e5c:
    if (ctx->pc == 0x438E5Cu) {
        ctx->pc = 0x438E60u;
        goto label_438e60;
    }
    ctx->pc = 0x438E58u;
    {
        const bool branch_taken_0x438e58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x438e58) {
            ctx->pc = 0x438E88u;
            goto label_438e88;
        }
    }
    ctx->pc = 0x438E60u;
label_438e60:
    // 0x438e60: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x438e60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438e64:
    // 0x438e64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x438e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438e68:
    // 0x438e68: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x438e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_438e6c:
    // 0x438e6c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x438e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_438e70:
    // 0x438e70: 0xc10e3c4  jal         func_438F10
label_438e74:
    if (ctx->pc == 0x438E74u) {
        ctx->pc = 0x438E74u;
            // 0x438e74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x438E78u;
        goto label_438e78;
    }
    ctx->pc = 0x438E70u;
    SET_GPR_U32(ctx, 31, 0x438E78u);
    ctx->pc = 0x438E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x438E70u;
            // 0x438e74: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x438F10u;
    if (runtime->hasFunction(0x438F10u)) {
        auto targetFn = runtime->lookupFunction(0x438F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438E78u; }
        if (ctx->pc != 0x438E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00438F10_0x438f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x438E78u; }
        if (ctx->pc != 0x438E78u) { return; }
    }
    ctx->pc = 0x438E78u;
label_438e78:
    // 0x438e78: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x438e78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_438e7c:
    // 0x438e7c: 0x271182b  sltu        $v1, $s3, $s1
    ctx->pc = 0x438e7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_438e80:
    // 0x438e80: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_438e84:
    if (ctx->pc == 0x438E84u) {
        ctx->pc = 0x438E84u;
            // 0x438e84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x438E88u;
        goto label_438e88;
    }
    ctx->pc = 0x438E80u;
    {
        const bool branch_taken_0x438e80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x438E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438E80u;
            // 0x438e84: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e80) {
            ctx->pc = 0x438E68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438e68;
        }
    }
    ctx->pc = 0x438E88u;
label_438e88:
    // 0x438e88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x438e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_438e8c:
    // 0x438e8c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x438e8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_438e90:
    // 0x438e90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x438e90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_438e94:
    // 0x438e94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x438e94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_438e98:
    // 0x438e98: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x438e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_438e9c:
    // 0x438e9c: 0x3e00008  jr          $ra
label_438ea0:
    if (ctx->pc == 0x438EA0u) {
        ctx->pc = 0x438EA0u;
            // 0x438ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x438EA4u;
        goto label_438ea4;
    }
    ctx->pc = 0x438E9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x438EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438E9Cu;
            // 0x438ea0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x438EA4u;
label_438ea4:
    // 0x438ea4: 0x0  nop
    ctx->pc = 0x438ea4u;
    // NOP
label_438ea8:
    // 0x438ea8: 0x0  nop
    ctx->pc = 0x438ea8u;
    // NOP
label_438eac:
    // 0x438eac: 0x0  nop
    ctx->pc = 0x438eacu;
    // NOP
label_438eb0:
    // 0x438eb0: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x438eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_438eb4:
    // 0x438eb4: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
label_438eb8:
    if (ctx->pc == 0x438EB8u) {
        ctx->pc = 0x438EBCu;
        goto label_438ebc;
    }
    ctx->pc = 0x438EB4u;
    {
        const bool branch_taken_0x438eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x438eb4) {
            ctx->pc = 0x438F08u;
            goto label_438f08;
        }
    }
    ctx->pc = 0x438EBCu;
label_438ebc:
    // 0x438ebc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x438ebcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438ec0:
    // 0x438ec0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x438ec0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_438ec4:
    // 0x438ec4: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x438ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_438ec8:
    // 0x438ec8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x438ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_438ecc:
    // 0x438ecc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x438eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_438ed0:
    // 0x438ed0: 0x8c680078  lw          $t0, 0x78($v1)
    ctx->pc = 0x438ed0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_438ed4:
    // 0x438ed4: 0x8c670064  lw          $a3, 0x64($v1)
    ctx->pc = 0x438ed4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_438ed8:
    // 0x438ed8: 0xa1000010  sb          $zero, 0x10($t0)
    ctx->pc = 0x438ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 16), (uint8_t)GPR_U32(ctx, 0));
label_438edc:
    // 0x438edc: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x438edcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_438ee0:
    // 0x438ee0: 0x25080014  addiu       $t0, $t0, 0x14
    ctx->pc = 0x438ee0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 20));
label_438ee4:
    // 0x438ee4: 0x0  nop
    ctx->pc = 0x438ee4u;
    // NOP
label_438ee8:
    // 0x438ee8: 0x0  nop
    ctx->pc = 0x438ee8u;
    // NOP
label_438eec:
    // 0x438eec: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_438ef0:
    if (ctx->pc == 0x438EF0u) {
        ctx->pc = 0x438EF4u;
        goto label_438ef4;
    }
    ctx->pc = 0x438EECu;
    {
        const bool branch_taken_0x438eec = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x438eec) {
            ctx->pc = 0x438ED8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438ed8;
        }
    }
    ctx->pc = 0x438EF4u;
label_438ef4:
    // 0x438ef4: 0xac60005c  sw          $zero, 0x5C($v1)
    ctx->pc = 0x438ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 0));
label_438ef8:
    // 0x438ef8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x438ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_438efc:
    // 0x438efc: 0x125182b  sltu        $v1, $t1, $a1
    ctx->pc = 0x438efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_438f00:
    // 0x438f00: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
label_438f04:
    if (ctx->pc == 0x438F04u) {
        ctx->pc = 0x438F04u;
            // 0x438f04: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x438F08u;
        goto label_438f08;
    }
    ctx->pc = 0x438F00u;
    {
        const bool branch_taken_0x438f00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x438F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x438F00u;
            // 0x438f04: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f00) {
            ctx->pc = 0x438EC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_438ec4;
        }
    }
    ctx->pc = 0x438F08u;
label_438f08:
    // 0x438f08: 0x3e00008  jr          $ra
label_438f0c:
    if (ctx->pc == 0x438F0Cu) {
        ctx->pc = 0x438F10u;
        goto label_fallthrough_0x438f08;
    }
    ctx->pc = 0x438F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x438f08:
    ctx->pc = 0x438F10u;
}
