#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00566960
// Address: 0x566960 - 0x567420
void sub_00566960_0x566960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00566960_0x566960");
#endif

    switch (ctx->pc) {
        case 0x566960u: goto label_566960;
        case 0x566964u: goto label_566964;
        case 0x566968u: goto label_566968;
        case 0x56696cu: goto label_56696c;
        case 0x566970u: goto label_566970;
        case 0x566974u: goto label_566974;
        case 0x566978u: goto label_566978;
        case 0x56697cu: goto label_56697c;
        case 0x566980u: goto label_566980;
        case 0x566984u: goto label_566984;
        case 0x566988u: goto label_566988;
        case 0x56698cu: goto label_56698c;
        case 0x566990u: goto label_566990;
        case 0x566994u: goto label_566994;
        case 0x566998u: goto label_566998;
        case 0x56699cu: goto label_56699c;
        case 0x5669a0u: goto label_5669a0;
        case 0x5669a4u: goto label_5669a4;
        case 0x5669a8u: goto label_5669a8;
        case 0x5669acu: goto label_5669ac;
        case 0x5669b0u: goto label_5669b0;
        case 0x5669b4u: goto label_5669b4;
        case 0x5669b8u: goto label_5669b8;
        case 0x5669bcu: goto label_5669bc;
        case 0x5669c0u: goto label_5669c0;
        case 0x5669c4u: goto label_5669c4;
        case 0x5669c8u: goto label_5669c8;
        case 0x5669ccu: goto label_5669cc;
        case 0x5669d0u: goto label_5669d0;
        case 0x5669d4u: goto label_5669d4;
        case 0x5669d8u: goto label_5669d8;
        case 0x5669dcu: goto label_5669dc;
        case 0x5669e0u: goto label_5669e0;
        case 0x5669e4u: goto label_5669e4;
        case 0x5669e8u: goto label_5669e8;
        case 0x5669ecu: goto label_5669ec;
        case 0x5669f0u: goto label_5669f0;
        case 0x5669f4u: goto label_5669f4;
        case 0x5669f8u: goto label_5669f8;
        case 0x5669fcu: goto label_5669fc;
        case 0x566a00u: goto label_566a00;
        case 0x566a04u: goto label_566a04;
        case 0x566a08u: goto label_566a08;
        case 0x566a0cu: goto label_566a0c;
        case 0x566a10u: goto label_566a10;
        case 0x566a14u: goto label_566a14;
        case 0x566a18u: goto label_566a18;
        case 0x566a1cu: goto label_566a1c;
        case 0x566a20u: goto label_566a20;
        case 0x566a24u: goto label_566a24;
        case 0x566a28u: goto label_566a28;
        case 0x566a2cu: goto label_566a2c;
        case 0x566a30u: goto label_566a30;
        case 0x566a34u: goto label_566a34;
        case 0x566a38u: goto label_566a38;
        case 0x566a3cu: goto label_566a3c;
        case 0x566a40u: goto label_566a40;
        case 0x566a44u: goto label_566a44;
        case 0x566a48u: goto label_566a48;
        case 0x566a4cu: goto label_566a4c;
        case 0x566a50u: goto label_566a50;
        case 0x566a54u: goto label_566a54;
        case 0x566a58u: goto label_566a58;
        case 0x566a5cu: goto label_566a5c;
        case 0x566a60u: goto label_566a60;
        case 0x566a64u: goto label_566a64;
        case 0x566a68u: goto label_566a68;
        case 0x566a6cu: goto label_566a6c;
        case 0x566a70u: goto label_566a70;
        case 0x566a74u: goto label_566a74;
        case 0x566a78u: goto label_566a78;
        case 0x566a7cu: goto label_566a7c;
        case 0x566a80u: goto label_566a80;
        case 0x566a84u: goto label_566a84;
        case 0x566a88u: goto label_566a88;
        case 0x566a8cu: goto label_566a8c;
        case 0x566a90u: goto label_566a90;
        case 0x566a94u: goto label_566a94;
        case 0x566a98u: goto label_566a98;
        case 0x566a9cu: goto label_566a9c;
        case 0x566aa0u: goto label_566aa0;
        case 0x566aa4u: goto label_566aa4;
        case 0x566aa8u: goto label_566aa8;
        case 0x566aacu: goto label_566aac;
        case 0x566ab0u: goto label_566ab0;
        case 0x566ab4u: goto label_566ab4;
        case 0x566ab8u: goto label_566ab8;
        case 0x566abcu: goto label_566abc;
        case 0x566ac0u: goto label_566ac0;
        case 0x566ac4u: goto label_566ac4;
        case 0x566ac8u: goto label_566ac8;
        case 0x566accu: goto label_566acc;
        case 0x566ad0u: goto label_566ad0;
        case 0x566ad4u: goto label_566ad4;
        case 0x566ad8u: goto label_566ad8;
        case 0x566adcu: goto label_566adc;
        case 0x566ae0u: goto label_566ae0;
        case 0x566ae4u: goto label_566ae4;
        case 0x566ae8u: goto label_566ae8;
        case 0x566aecu: goto label_566aec;
        case 0x566af0u: goto label_566af0;
        case 0x566af4u: goto label_566af4;
        case 0x566af8u: goto label_566af8;
        case 0x566afcu: goto label_566afc;
        case 0x566b00u: goto label_566b00;
        case 0x566b04u: goto label_566b04;
        case 0x566b08u: goto label_566b08;
        case 0x566b0cu: goto label_566b0c;
        case 0x566b10u: goto label_566b10;
        case 0x566b14u: goto label_566b14;
        case 0x566b18u: goto label_566b18;
        case 0x566b1cu: goto label_566b1c;
        case 0x566b20u: goto label_566b20;
        case 0x566b24u: goto label_566b24;
        case 0x566b28u: goto label_566b28;
        case 0x566b2cu: goto label_566b2c;
        case 0x566b30u: goto label_566b30;
        case 0x566b34u: goto label_566b34;
        case 0x566b38u: goto label_566b38;
        case 0x566b3cu: goto label_566b3c;
        case 0x566b40u: goto label_566b40;
        case 0x566b44u: goto label_566b44;
        case 0x566b48u: goto label_566b48;
        case 0x566b4cu: goto label_566b4c;
        case 0x566b50u: goto label_566b50;
        case 0x566b54u: goto label_566b54;
        case 0x566b58u: goto label_566b58;
        case 0x566b5cu: goto label_566b5c;
        case 0x566b60u: goto label_566b60;
        case 0x566b64u: goto label_566b64;
        case 0x566b68u: goto label_566b68;
        case 0x566b6cu: goto label_566b6c;
        case 0x566b70u: goto label_566b70;
        case 0x566b74u: goto label_566b74;
        case 0x566b78u: goto label_566b78;
        case 0x566b7cu: goto label_566b7c;
        case 0x566b80u: goto label_566b80;
        case 0x566b84u: goto label_566b84;
        case 0x566b88u: goto label_566b88;
        case 0x566b8cu: goto label_566b8c;
        case 0x566b90u: goto label_566b90;
        case 0x566b94u: goto label_566b94;
        case 0x566b98u: goto label_566b98;
        case 0x566b9cu: goto label_566b9c;
        case 0x566ba0u: goto label_566ba0;
        case 0x566ba4u: goto label_566ba4;
        case 0x566ba8u: goto label_566ba8;
        case 0x566bacu: goto label_566bac;
        case 0x566bb0u: goto label_566bb0;
        case 0x566bb4u: goto label_566bb4;
        case 0x566bb8u: goto label_566bb8;
        case 0x566bbcu: goto label_566bbc;
        case 0x566bc0u: goto label_566bc0;
        case 0x566bc4u: goto label_566bc4;
        case 0x566bc8u: goto label_566bc8;
        case 0x566bccu: goto label_566bcc;
        case 0x566bd0u: goto label_566bd0;
        case 0x566bd4u: goto label_566bd4;
        case 0x566bd8u: goto label_566bd8;
        case 0x566bdcu: goto label_566bdc;
        case 0x566be0u: goto label_566be0;
        case 0x566be4u: goto label_566be4;
        case 0x566be8u: goto label_566be8;
        case 0x566becu: goto label_566bec;
        case 0x566bf0u: goto label_566bf0;
        case 0x566bf4u: goto label_566bf4;
        case 0x566bf8u: goto label_566bf8;
        case 0x566bfcu: goto label_566bfc;
        case 0x566c00u: goto label_566c00;
        case 0x566c04u: goto label_566c04;
        case 0x566c08u: goto label_566c08;
        case 0x566c0cu: goto label_566c0c;
        case 0x566c10u: goto label_566c10;
        case 0x566c14u: goto label_566c14;
        case 0x566c18u: goto label_566c18;
        case 0x566c1cu: goto label_566c1c;
        case 0x566c20u: goto label_566c20;
        case 0x566c24u: goto label_566c24;
        case 0x566c28u: goto label_566c28;
        case 0x566c2cu: goto label_566c2c;
        case 0x566c30u: goto label_566c30;
        case 0x566c34u: goto label_566c34;
        case 0x566c38u: goto label_566c38;
        case 0x566c3cu: goto label_566c3c;
        case 0x566c40u: goto label_566c40;
        case 0x566c44u: goto label_566c44;
        case 0x566c48u: goto label_566c48;
        case 0x566c4cu: goto label_566c4c;
        case 0x566c50u: goto label_566c50;
        case 0x566c54u: goto label_566c54;
        case 0x566c58u: goto label_566c58;
        case 0x566c5cu: goto label_566c5c;
        case 0x566c60u: goto label_566c60;
        case 0x566c64u: goto label_566c64;
        case 0x566c68u: goto label_566c68;
        case 0x566c6cu: goto label_566c6c;
        case 0x566c70u: goto label_566c70;
        case 0x566c74u: goto label_566c74;
        case 0x566c78u: goto label_566c78;
        case 0x566c7cu: goto label_566c7c;
        case 0x566c80u: goto label_566c80;
        case 0x566c84u: goto label_566c84;
        case 0x566c88u: goto label_566c88;
        case 0x566c8cu: goto label_566c8c;
        case 0x566c90u: goto label_566c90;
        case 0x566c94u: goto label_566c94;
        case 0x566c98u: goto label_566c98;
        case 0x566c9cu: goto label_566c9c;
        case 0x566ca0u: goto label_566ca0;
        case 0x566ca4u: goto label_566ca4;
        case 0x566ca8u: goto label_566ca8;
        case 0x566cacu: goto label_566cac;
        case 0x566cb0u: goto label_566cb0;
        case 0x566cb4u: goto label_566cb4;
        case 0x566cb8u: goto label_566cb8;
        case 0x566cbcu: goto label_566cbc;
        case 0x566cc0u: goto label_566cc0;
        case 0x566cc4u: goto label_566cc4;
        case 0x566cc8u: goto label_566cc8;
        case 0x566cccu: goto label_566ccc;
        case 0x566cd0u: goto label_566cd0;
        case 0x566cd4u: goto label_566cd4;
        case 0x566cd8u: goto label_566cd8;
        case 0x566cdcu: goto label_566cdc;
        case 0x566ce0u: goto label_566ce0;
        case 0x566ce4u: goto label_566ce4;
        case 0x566ce8u: goto label_566ce8;
        case 0x566cecu: goto label_566cec;
        case 0x566cf0u: goto label_566cf0;
        case 0x566cf4u: goto label_566cf4;
        case 0x566cf8u: goto label_566cf8;
        case 0x566cfcu: goto label_566cfc;
        case 0x566d00u: goto label_566d00;
        case 0x566d04u: goto label_566d04;
        case 0x566d08u: goto label_566d08;
        case 0x566d0cu: goto label_566d0c;
        case 0x566d10u: goto label_566d10;
        case 0x566d14u: goto label_566d14;
        case 0x566d18u: goto label_566d18;
        case 0x566d1cu: goto label_566d1c;
        case 0x566d20u: goto label_566d20;
        case 0x566d24u: goto label_566d24;
        case 0x566d28u: goto label_566d28;
        case 0x566d2cu: goto label_566d2c;
        case 0x566d30u: goto label_566d30;
        case 0x566d34u: goto label_566d34;
        case 0x566d38u: goto label_566d38;
        case 0x566d3cu: goto label_566d3c;
        case 0x566d40u: goto label_566d40;
        case 0x566d44u: goto label_566d44;
        case 0x566d48u: goto label_566d48;
        case 0x566d4cu: goto label_566d4c;
        case 0x566d50u: goto label_566d50;
        case 0x566d54u: goto label_566d54;
        case 0x566d58u: goto label_566d58;
        case 0x566d5cu: goto label_566d5c;
        case 0x566d60u: goto label_566d60;
        case 0x566d64u: goto label_566d64;
        case 0x566d68u: goto label_566d68;
        case 0x566d6cu: goto label_566d6c;
        case 0x566d70u: goto label_566d70;
        case 0x566d74u: goto label_566d74;
        case 0x566d78u: goto label_566d78;
        case 0x566d7cu: goto label_566d7c;
        case 0x566d80u: goto label_566d80;
        case 0x566d84u: goto label_566d84;
        case 0x566d88u: goto label_566d88;
        case 0x566d8cu: goto label_566d8c;
        case 0x566d90u: goto label_566d90;
        case 0x566d94u: goto label_566d94;
        case 0x566d98u: goto label_566d98;
        case 0x566d9cu: goto label_566d9c;
        case 0x566da0u: goto label_566da0;
        case 0x566da4u: goto label_566da4;
        case 0x566da8u: goto label_566da8;
        case 0x566dacu: goto label_566dac;
        case 0x566db0u: goto label_566db0;
        case 0x566db4u: goto label_566db4;
        case 0x566db8u: goto label_566db8;
        case 0x566dbcu: goto label_566dbc;
        case 0x566dc0u: goto label_566dc0;
        case 0x566dc4u: goto label_566dc4;
        case 0x566dc8u: goto label_566dc8;
        case 0x566dccu: goto label_566dcc;
        case 0x566dd0u: goto label_566dd0;
        case 0x566dd4u: goto label_566dd4;
        case 0x566dd8u: goto label_566dd8;
        case 0x566ddcu: goto label_566ddc;
        case 0x566de0u: goto label_566de0;
        case 0x566de4u: goto label_566de4;
        case 0x566de8u: goto label_566de8;
        case 0x566decu: goto label_566dec;
        case 0x566df0u: goto label_566df0;
        case 0x566df4u: goto label_566df4;
        case 0x566df8u: goto label_566df8;
        case 0x566dfcu: goto label_566dfc;
        case 0x566e00u: goto label_566e00;
        case 0x566e04u: goto label_566e04;
        case 0x566e08u: goto label_566e08;
        case 0x566e0cu: goto label_566e0c;
        case 0x566e10u: goto label_566e10;
        case 0x566e14u: goto label_566e14;
        case 0x566e18u: goto label_566e18;
        case 0x566e1cu: goto label_566e1c;
        case 0x566e20u: goto label_566e20;
        case 0x566e24u: goto label_566e24;
        case 0x566e28u: goto label_566e28;
        case 0x566e2cu: goto label_566e2c;
        case 0x566e30u: goto label_566e30;
        case 0x566e34u: goto label_566e34;
        case 0x566e38u: goto label_566e38;
        case 0x566e3cu: goto label_566e3c;
        case 0x566e40u: goto label_566e40;
        case 0x566e44u: goto label_566e44;
        case 0x566e48u: goto label_566e48;
        case 0x566e4cu: goto label_566e4c;
        case 0x566e50u: goto label_566e50;
        case 0x566e54u: goto label_566e54;
        case 0x566e58u: goto label_566e58;
        case 0x566e5cu: goto label_566e5c;
        case 0x566e60u: goto label_566e60;
        case 0x566e64u: goto label_566e64;
        case 0x566e68u: goto label_566e68;
        case 0x566e6cu: goto label_566e6c;
        case 0x566e70u: goto label_566e70;
        case 0x566e74u: goto label_566e74;
        case 0x566e78u: goto label_566e78;
        case 0x566e7cu: goto label_566e7c;
        case 0x566e80u: goto label_566e80;
        case 0x566e84u: goto label_566e84;
        case 0x566e88u: goto label_566e88;
        case 0x566e8cu: goto label_566e8c;
        case 0x566e90u: goto label_566e90;
        case 0x566e94u: goto label_566e94;
        case 0x566e98u: goto label_566e98;
        case 0x566e9cu: goto label_566e9c;
        case 0x566ea0u: goto label_566ea0;
        case 0x566ea4u: goto label_566ea4;
        case 0x566ea8u: goto label_566ea8;
        case 0x566eacu: goto label_566eac;
        case 0x566eb0u: goto label_566eb0;
        case 0x566eb4u: goto label_566eb4;
        case 0x566eb8u: goto label_566eb8;
        case 0x566ebcu: goto label_566ebc;
        case 0x566ec0u: goto label_566ec0;
        case 0x566ec4u: goto label_566ec4;
        case 0x566ec8u: goto label_566ec8;
        case 0x566eccu: goto label_566ecc;
        case 0x566ed0u: goto label_566ed0;
        case 0x566ed4u: goto label_566ed4;
        case 0x566ed8u: goto label_566ed8;
        case 0x566edcu: goto label_566edc;
        case 0x566ee0u: goto label_566ee0;
        case 0x566ee4u: goto label_566ee4;
        case 0x566ee8u: goto label_566ee8;
        case 0x566eecu: goto label_566eec;
        case 0x566ef0u: goto label_566ef0;
        case 0x566ef4u: goto label_566ef4;
        case 0x566ef8u: goto label_566ef8;
        case 0x566efcu: goto label_566efc;
        case 0x566f00u: goto label_566f00;
        case 0x566f04u: goto label_566f04;
        case 0x566f08u: goto label_566f08;
        case 0x566f0cu: goto label_566f0c;
        case 0x566f10u: goto label_566f10;
        case 0x566f14u: goto label_566f14;
        case 0x566f18u: goto label_566f18;
        case 0x566f1cu: goto label_566f1c;
        case 0x566f20u: goto label_566f20;
        case 0x566f24u: goto label_566f24;
        case 0x566f28u: goto label_566f28;
        case 0x566f2cu: goto label_566f2c;
        case 0x566f30u: goto label_566f30;
        case 0x566f34u: goto label_566f34;
        case 0x566f38u: goto label_566f38;
        case 0x566f3cu: goto label_566f3c;
        case 0x566f40u: goto label_566f40;
        case 0x566f44u: goto label_566f44;
        case 0x566f48u: goto label_566f48;
        case 0x566f4cu: goto label_566f4c;
        case 0x566f50u: goto label_566f50;
        case 0x566f54u: goto label_566f54;
        case 0x566f58u: goto label_566f58;
        case 0x566f5cu: goto label_566f5c;
        case 0x566f60u: goto label_566f60;
        case 0x566f64u: goto label_566f64;
        case 0x566f68u: goto label_566f68;
        case 0x566f6cu: goto label_566f6c;
        case 0x566f70u: goto label_566f70;
        case 0x566f74u: goto label_566f74;
        case 0x566f78u: goto label_566f78;
        case 0x566f7cu: goto label_566f7c;
        case 0x566f80u: goto label_566f80;
        case 0x566f84u: goto label_566f84;
        case 0x566f88u: goto label_566f88;
        case 0x566f8cu: goto label_566f8c;
        case 0x566f90u: goto label_566f90;
        case 0x566f94u: goto label_566f94;
        case 0x566f98u: goto label_566f98;
        case 0x566f9cu: goto label_566f9c;
        case 0x566fa0u: goto label_566fa0;
        case 0x566fa4u: goto label_566fa4;
        case 0x566fa8u: goto label_566fa8;
        case 0x566facu: goto label_566fac;
        case 0x566fb0u: goto label_566fb0;
        case 0x566fb4u: goto label_566fb4;
        case 0x566fb8u: goto label_566fb8;
        case 0x566fbcu: goto label_566fbc;
        case 0x566fc0u: goto label_566fc0;
        case 0x566fc4u: goto label_566fc4;
        case 0x566fc8u: goto label_566fc8;
        case 0x566fccu: goto label_566fcc;
        case 0x566fd0u: goto label_566fd0;
        case 0x566fd4u: goto label_566fd4;
        case 0x566fd8u: goto label_566fd8;
        case 0x566fdcu: goto label_566fdc;
        case 0x566fe0u: goto label_566fe0;
        case 0x566fe4u: goto label_566fe4;
        case 0x566fe8u: goto label_566fe8;
        case 0x566fecu: goto label_566fec;
        case 0x566ff0u: goto label_566ff0;
        case 0x566ff4u: goto label_566ff4;
        case 0x566ff8u: goto label_566ff8;
        case 0x566ffcu: goto label_566ffc;
        case 0x567000u: goto label_567000;
        case 0x567004u: goto label_567004;
        case 0x567008u: goto label_567008;
        case 0x56700cu: goto label_56700c;
        case 0x567010u: goto label_567010;
        case 0x567014u: goto label_567014;
        case 0x567018u: goto label_567018;
        case 0x56701cu: goto label_56701c;
        case 0x567020u: goto label_567020;
        case 0x567024u: goto label_567024;
        case 0x567028u: goto label_567028;
        case 0x56702cu: goto label_56702c;
        case 0x567030u: goto label_567030;
        case 0x567034u: goto label_567034;
        case 0x567038u: goto label_567038;
        case 0x56703cu: goto label_56703c;
        case 0x567040u: goto label_567040;
        case 0x567044u: goto label_567044;
        case 0x567048u: goto label_567048;
        case 0x56704cu: goto label_56704c;
        case 0x567050u: goto label_567050;
        case 0x567054u: goto label_567054;
        case 0x567058u: goto label_567058;
        case 0x56705cu: goto label_56705c;
        case 0x567060u: goto label_567060;
        case 0x567064u: goto label_567064;
        case 0x567068u: goto label_567068;
        case 0x56706cu: goto label_56706c;
        case 0x567070u: goto label_567070;
        case 0x567074u: goto label_567074;
        case 0x567078u: goto label_567078;
        case 0x56707cu: goto label_56707c;
        case 0x567080u: goto label_567080;
        case 0x567084u: goto label_567084;
        case 0x567088u: goto label_567088;
        case 0x56708cu: goto label_56708c;
        case 0x567090u: goto label_567090;
        case 0x567094u: goto label_567094;
        case 0x567098u: goto label_567098;
        case 0x56709cu: goto label_56709c;
        case 0x5670a0u: goto label_5670a0;
        case 0x5670a4u: goto label_5670a4;
        case 0x5670a8u: goto label_5670a8;
        case 0x5670acu: goto label_5670ac;
        case 0x5670b0u: goto label_5670b0;
        case 0x5670b4u: goto label_5670b4;
        case 0x5670b8u: goto label_5670b8;
        case 0x5670bcu: goto label_5670bc;
        case 0x5670c0u: goto label_5670c0;
        case 0x5670c4u: goto label_5670c4;
        case 0x5670c8u: goto label_5670c8;
        case 0x5670ccu: goto label_5670cc;
        case 0x5670d0u: goto label_5670d0;
        case 0x5670d4u: goto label_5670d4;
        case 0x5670d8u: goto label_5670d8;
        case 0x5670dcu: goto label_5670dc;
        case 0x5670e0u: goto label_5670e0;
        case 0x5670e4u: goto label_5670e4;
        case 0x5670e8u: goto label_5670e8;
        case 0x5670ecu: goto label_5670ec;
        case 0x5670f0u: goto label_5670f0;
        case 0x5670f4u: goto label_5670f4;
        case 0x5670f8u: goto label_5670f8;
        case 0x5670fcu: goto label_5670fc;
        case 0x567100u: goto label_567100;
        case 0x567104u: goto label_567104;
        case 0x567108u: goto label_567108;
        case 0x56710cu: goto label_56710c;
        case 0x567110u: goto label_567110;
        case 0x567114u: goto label_567114;
        case 0x567118u: goto label_567118;
        case 0x56711cu: goto label_56711c;
        case 0x567120u: goto label_567120;
        case 0x567124u: goto label_567124;
        case 0x567128u: goto label_567128;
        case 0x56712cu: goto label_56712c;
        case 0x567130u: goto label_567130;
        case 0x567134u: goto label_567134;
        case 0x567138u: goto label_567138;
        case 0x56713cu: goto label_56713c;
        case 0x567140u: goto label_567140;
        case 0x567144u: goto label_567144;
        case 0x567148u: goto label_567148;
        case 0x56714cu: goto label_56714c;
        case 0x567150u: goto label_567150;
        case 0x567154u: goto label_567154;
        case 0x567158u: goto label_567158;
        case 0x56715cu: goto label_56715c;
        case 0x567160u: goto label_567160;
        case 0x567164u: goto label_567164;
        case 0x567168u: goto label_567168;
        case 0x56716cu: goto label_56716c;
        case 0x567170u: goto label_567170;
        case 0x567174u: goto label_567174;
        case 0x567178u: goto label_567178;
        case 0x56717cu: goto label_56717c;
        case 0x567180u: goto label_567180;
        case 0x567184u: goto label_567184;
        case 0x567188u: goto label_567188;
        case 0x56718cu: goto label_56718c;
        case 0x567190u: goto label_567190;
        case 0x567194u: goto label_567194;
        case 0x567198u: goto label_567198;
        case 0x56719cu: goto label_56719c;
        case 0x5671a0u: goto label_5671a0;
        case 0x5671a4u: goto label_5671a4;
        case 0x5671a8u: goto label_5671a8;
        case 0x5671acu: goto label_5671ac;
        case 0x5671b0u: goto label_5671b0;
        case 0x5671b4u: goto label_5671b4;
        case 0x5671b8u: goto label_5671b8;
        case 0x5671bcu: goto label_5671bc;
        case 0x5671c0u: goto label_5671c0;
        case 0x5671c4u: goto label_5671c4;
        case 0x5671c8u: goto label_5671c8;
        case 0x5671ccu: goto label_5671cc;
        case 0x5671d0u: goto label_5671d0;
        case 0x5671d4u: goto label_5671d4;
        case 0x5671d8u: goto label_5671d8;
        case 0x5671dcu: goto label_5671dc;
        case 0x5671e0u: goto label_5671e0;
        case 0x5671e4u: goto label_5671e4;
        case 0x5671e8u: goto label_5671e8;
        case 0x5671ecu: goto label_5671ec;
        case 0x5671f0u: goto label_5671f0;
        case 0x5671f4u: goto label_5671f4;
        case 0x5671f8u: goto label_5671f8;
        case 0x5671fcu: goto label_5671fc;
        case 0x567200u: goto label_567200;
        case 0x567204u: goto label_567204;
        case 0x567208u: goto label_567208;
        case 0x56720cu: goto label_56720c;
        case 0x567210u: goto label_567210;
        case 0x567214u: goto label_567214;
        case 0x567218u: goto label_567218;
        case 0x56721cu: goto label_56721c;
        case 0x567220u: goto label_567220;
        case 0x567224u: goto label_567224;
        case 0x567228u: goto label_567228;
        case 0x56722cu: goto label_56722c;
        case 0x567230u: goto label_567230;
        case 0x567234u: goto label_567234;
        case 0x567238u: goto label_567238;
        case 0x56723cu: goto label_56723c;
        case 0x567240u: goto label_567240;
        case 0x567244u: goto label_567244;
        case 0x567248u: goto label_567248;
        case 0x56724cu: goto label_56724c;
        case 0x567250u: goto label_567250;
        case 0x567254u: goto label_567254;
        case 0x567258u: goto label_567258;
        case 0x56725cu: goto label_56725c;
        case 0x567260u: goto label_567260;
        case 0x567264u: goto label_567264;
        case 0x567268u: goto label_567268;
        case 0x56726cu: goto label_56726c;
        case 0x567270u: goto label_567270;
        case 0x567274u: goto label_567274;
        case 0x567278u: goto label_567278;
        case 0x56727cu: goto label_56727c;
        case 0x567280u: goto label_567280;
        case 0x567284u: goto label_567284;
        case 0x567288u: goto label_567288;
        case 0x56728cu: goto label_56728c;
        case 0x567290u: goto label_567290;
        case 0x567294u: goto label_567294;
        case 0x567298u: goto label_567298;
        case 0x56729cu: goto label_56729c;
        case 0x5672a0u: goto label_5672a0;
        case 0x5672a4u: goto label_5672a4;
        case 0x5672a8u: goto label_5672a8;
        case 0x5672acu: goto label_5672ac;
        case 0x5672b0u: goto label_5672b0;
        case 0x5672b4u: goto label_5672b4;
        case 0x5672b8u: goto label_5672b8;
        case 0x5672bcu: goto label_5672bc;
        case 0x5672c0u: goto label_5672c0;
        case 0x5672c4u: goto label_5672c4;
        case 0x5672c8u: goto label_5672c8;
        case 0x5672ccu: goto label_5672cc;
        case 0x5672d0u: goto label_5672d0;
        case 0x5672d4u: goto label_5672d4;
        case 0x5672d8u: goto label_5672d8;
        case 0x5672dcu: goto label_5672dc;
        case 0x5672e0u: goto label_5672e0;
        case 0x5672e4u: goto label_5672e4;
        case 0x5672e8u: goto label_5672e8;
        case 0x5672ecu: goto label_5672ec;
        case 0x5672f0u: goto label_5672f0;
        case 0x5672f4u: goto label_5672f4;
        case 0x5672f8u: goto label_5672f8;
        case 0x5672fcu: goto label_5672fc;
        case 0x567300u: goto label_567300;
        case 0x567304u: goto label_567304;
        case 0x567308u: goto label_567308;
        case 0x56730cu: goto label_56730c;
        case 0x567310u: goto label_567310;
        case 0x567314u: goto label_567314;
        case 0x567318u: goto label_567318;
        case 0x56731cu: goto label_56731c;
        case 0x567320u: goto label_567320;
        case 0x567324u: goto label_567324;
        case 0x567328u: goto label_567328;
        case 0x56732cu: goto label_56732c;
        case 0x567330u: goto label_567330;
        case 0x567334u: goto label_567334;
        case 0x567338u: goto label_567338;
        case 0x56733cu: goto label_56733c;
        case 0x567340u: goto label_567340;
        case 0x567344u: goto label_567344;
        case 0x567348u: goto label_567348;
        case 0x56734cu: goto label_56734c;
        case 0x567350u: goto label_567350;
        case 0x567354u: goto label_567354;
        case 0x567358u: goto label_567358;
        case 0x56735cu: goto label_56735c;
        case 0x567360u: goto label_567360;
        case 0x567364u: goto label_567364;
        case 0x567368u: goto label_567368;
        case 0x56736cu: goto label_56736c;
        case 0x567370u: goto label_567370;
        case 0x567374u: goto label_567374;
        case 0x567378u: goto label_567378;
        case 0x56737cu: goto label_56737c;
        case 0x567380u: goto label_567380;
        case 0x567384u: goto label_567384;
        case 0x567388u: goto label_567388;
        case 0x56738cu: goto label_56738c;
        case 0x567390u: goto label_567390;
        case 0x567394u: goto label_567394;
        case 0x567398u: goto label_567398;
        case 0x56739cu: goto label_56739c;
        case 0x5673a0u: goto label_5673a0;
        case 0x5673a4u: goto label_5673a4;
        case 0x5673a8u: goto label_5673a8;
        case 0x5673acu: goto label_5673ac;
        case 0x5673b0u: goto label_5673b0;
        case 0x5673b4u: goto label_5673b4;
        case 0x5673b8u: goto label_5673b8;
        case 0x5673bcu: goto label_5673bc;
        case 0x5673c0u: goto label_5673c0;
        case 0x5673c4u: goto label_5673c4;
        case 0x5673c8u: goto label_5673c8;
        case 0x5673ccu: goto label_5673cc;
        case 0x5673d0u: goto label_5673d0;
        case 0x5673d4u: goto label_5673d4;
        case 0x5673d8u: goto label_5673d8;
        case 0x5673dcu: goto label_5673dc;
        case 0x5673e0u: goto label_5673e0;
        case 0x5673e4u: goto label_5673e4;
        case 0x5673e8u: goto label_5673e8;
        case 0x5673ecu: goto label_5673ec;
        case 0x5673f0u: goto label_5673f0;
        case 0x5673f4u: goto label_5673f4;
        case 0x5673f8u: goto label_5673f8;
        case 0x5673fcu: goto label_5673fc;
        case 0x567400u: goto label_567400;
        case 0x567404u: goto label_567404;
        case 0x567408u: goto label_567408;
        case 0x56740cu: goto label_56740c;
        case 0x567410u: goto label_567410;
        case 0x567414u: goto label_567414;
        case 0x567418u: goto label_567418;
        case 0x56741cu: goto label_56741c;
        default: break;
    }

    ctx->pc = 0x566960u;

label_566960:
    // 0x566960: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x566960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_566964:
    // 0x566964: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_566968:
    // 0x566968: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x566968u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_56696c:
    // 0x56696c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x56696cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_566970:
    // 0x566970: 0x46800160  cvt.s.w     $f5, $f0
    ctx->pc = 0x566970u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_566974:
    // 0x566974: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x566974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_566978:
    // 0x566978: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x566978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_56697c:
    // 0x56697c: 0x3c060067  lui         $a2, 0x67
    ctx->pc = 0x56697cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)103 << 16));
label_566980:
    // 0x566980: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x566980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_566984:
    // 0x566984: 0x24c6fc10  addiu       $a2, $a2, -0x3F0
    ctx->pc = 0x566984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966288));
label_566988:
    // 0x566988: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x566988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_56698c:
    // 0x56698c: 0x3c110067  lui         $s1, 0x67
    ctx->pc = 0x56698cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)103 << 16));
label_566990:
    // 0x566990: 0x2631fc00  addiu       $s1, $s1, -0x400
    ctx->pc = 0x566990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294966272));
label_566994:
    // 0x566994: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x566994u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566998:
    // 0x566998: 0x0  nop
    ctx->pc = 0x566998u;
    // NOP
label_56699c:
    // 0x56699c: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x56699cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5669a0:
    // 0x5669a0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x5669a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5669a4:
    // 0x5669a4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x5669a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_5669a8:
    // 0x5669a8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5669a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5669ac:
    // 0x5669ac: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x5669acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_5669b0:
    // 0x5669b0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x5669b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_5669b4:
    // 0x5669b4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x5669b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5669b8:
    // 0x5669b8: 0x8c490e80  lw          $t1, 0xE80($v0)
    ctx->pc = 0x5669b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_5669bc:
    // 0x5669bc: 0x90700116  lbu         $s0, 0x116($v1)
    ctx->pc = 0x5669bcu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 278)));
label_5669c0:
    // 0x5669c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5669c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5669c4:
    // 0x5669c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5669c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5669c8:
    // 0x5669c8: 0xc504000c  lwc1        $f4, 0xC($t0)
    ctx->pc = 0x5669c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_5669cc:
    // 0x5669cc: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x5669ccu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5669d0:
    // 0x5669d0: 0xc5030008  lwc1        $f3, 0x8($t0)
    ctx->pc = 0x5669d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_5669d4:
    // 0x5669d4: 0x46042840  add.s       $f1, $f5, $f4
    ctx->pc = 0x5669d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
label_5669d8:
    // 0x5669d8: 0x4602181c  madd.s      $f0, $f3, $f2
    ctx->pc = 0x5669d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
label_5669dc:
    // 0x5669dc: 0xe4800070  swc1        $f0, 0x70($a0)
    ctx->pc = 0x5669dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 112), bits); }
label_5669e0:
    // 0x5669e0: 0xe4810074  swc1        $f1, 0x74($a0)
    ctx->pc = 0x5669e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 116), bits); }
label_5669e4:
    // 0x5669e4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x5669e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
label_5669e8:
    // 0x5669e8: 0x8d230cc0  lw          $v1, 0xCC0($t1)
    ctx->pc = 0x5669e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 3264)));
label_5669ec:
    // 0x5669ec: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_5669f0:
    if (ctx->pc == 0x5669F0u) {
        ctx->pc = 0x5669F0u;
            // 0x5669f0: 0x24920040  addiu       $s2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->pc = 0x5669F4u;
        goto label_5669f4;
    }
    ctx->pc = 0x5669ECu;
    {
        const bool branch_taken_0x5669ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x5669F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5669ECu;
            // 0x5669f0: 0x24920040  addiu       $s2, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5669ec) {
            ctx->pc = 0x566A04u;
            goto label_566a04;
        }
    }
    ctx->pc = 0x5669F4u;
label_5669f4:
    // 0x5669f4: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_5669f8:
    if (ctx->pc == 0x5669F8u) {
        ctx->pc = 0x5669F8u;
            // 0x5669f8: 0x24d30030  addiu       $s3, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->pc = 0x5669FCu;
        goto label_5669fc;
    }
    ctx->pc = 0x5669F4u;
    {
        const bool branch_taken_0x5669f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5669f4) {
            ctx->pc = 0x5669F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5669F4u;
            // 0x5669f8: 0x24d30030  addiu       $s3, $a2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566A08u;
            goto label_566a08;
        }
    }
    ctx->pc = 0x5669FCu;
label_5669fc:
    // 0x5669fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_566a00:
    if (ctx->pc == 0x566A00u) {
        ctx->pc = 0x566A00u;
            // 0x566a00: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x566A04u;
        goto label_566a04;
    }
    ctx->pc = 0x5669FCu;
    {
        const bool branch_taken_0x5669fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5669FCu;
            // 0x566a00: 0xc6610008  lwc1        $f1, 0x8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5669fc) {
            ctx->pc = 0x566A0Cu;
            goto label_566a0c;
        }
    }
    ctx->pc = 0x566A04u;
label_566a04:
    // 0x566a04: 0x24d30050  addiu       $s3, $a2, 0x50
    ctx->pc = 0x566a04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
label_566a08:
    // 0x566a08: 0xc6610008  lwc1        $f1, 0x8($s3)
    ctx->pc = 0x566a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_566a0c:
    // 0x566a0c: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x566a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_566a10:
    // 0x566a10: 0xc660000c  lwc1        $f0, 0xC($s3)
    ctx->pc = 0x566a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_566a14:
    // 0x566a14: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x566a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_566a18:
    // 0x566a18: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x566a18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_566a1c:
    // 0x566a1c: 0x8c44aad0  lw          $a0, -0x5530($v0)
    ctx->pc = 0x566a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945488)));
label_566a20:
    // 0x566a20: 0x46011542  mul.s       $f21, $f2, $f1
    ctx->pc = 0x566a20u;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_566a24:
    // 0x566a24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x566a24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566a28:
    // 0x566a28: 0xc0506ac  jal         func_141AB0
label_566a2c:
    if (ctx->pc == 0x566A2Cu) {
        ctx->pc = 0x566A2Cu;
            // 0x566a2c: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->pc = 0x566A30u;
        goto label_566a30;
    }
    ctx->pc = 0x566A28u;
    SET_GPR_U32(ctx, 31, 0x566A30u);
    ctx->pc = 0x566A2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566A28u;
            // 0x566a2c: 0x46001502  mul.s       $f20, $f2, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566A30u; }
        if (ctx->pc != 0x566A30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566A30u; }
        if (ctx->pc != 0x566A30u) { return; }
    }
    ctx->pc = 0x566A30u;
label_566a30:
    // 0x566a30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566a34:
    // 0x566a34: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x566a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566a38:
    // 0x566a38: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566a3c:
    // 0x566a3c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x566a3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_566a40:
    // 0x566a40: 0x320f809  jalr        $t9
label_566a44:
    if (ctx->pc == 0x566A44u) {
        ctx->pc = 0x566A44u;
            // 0x566a44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x566A48u;
        goto label_566a48;
    }
    ctx->pc = 0x566A40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566A48u);
        ctx->pc = 0x566A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566A40u;
            // 0x566a44: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x566A48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566A48u; }
            if (ctx->pc != 0x566A48u) { return; }
        }
        }
    }
    ctx->pc = 0x566A48u;
label_566a48:
    // 0x566a48: 0x86240000  lh          $a0, 0x0($s1)
    ctx->pc = 0x566a48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_566a4c:
    // 0x566a4c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x566a4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_566a50:
    // 0x566a50: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x566a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_566a54:
    // 0x566a54: 0x86280002  lh          $t0, 0x2($s1)
    ctx->pc = 0x566a54u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_566a58:
    // 0x566a58: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x566a58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_566a5c:
    // 0x566a5c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x566a5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_566a60:
    // 0x566a60: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x566a60u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566a64:
    // 0x566a64: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x566a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_566a68:
    // 0x566a68: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x566a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
label_566a6c:
    // 0x566a6c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x566a6cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_566a70:
    // 0x566a70: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x566a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_566a74:
    // 0x566a74: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x566a74u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566a78:
    // 0x566a78: 0x0  nop
    ctx->pc = 0x566a78u;
    // NOP
label_566a7c:
    // 0x566a7c: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x566a7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
label_566a80:
    // 0x566a80: 0x4600ab07  neg.s       $f12, $f21
    ctx->pc = 0x566a80u;
    ctx->f[12] = FPU_NEG_S(ctx->f[21]);
label_566a84:
    // 0x566a84: 0x4600ab86  mov.s       $f14, $f21
    ctx->pc = 0x566a84u;
    ctx->f[14] = FPU_MOV_S(ctx->f[21]);
label_566a88:
    // 0x566a88: 0x4600a3c6  mov.s       $f15, $f20
    ctx->pc = 0x566a88u;
    ctx->f[15] = FPU_MOV_S(ctx->f[20]);
label_566a8c:
    // 0x566a8c: 0x44829000  mtc1        $v0, $f18
    ctx->pc = 0x566a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_566a90:
    // 0x566a90: 0xc0bc284  jal         func_2F0A10
label_566a94:
    if (ctx->pc == 0x566A94u) {
        ctx->pc = 0x566A94u;
            // 0x566a94: 0x4600a347  neg.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[20]);
        ctx->pc = 0x566A98u;
        goto label_566a98;
    }
    ctx->pc = 0x566A90u;
    SET_GPR_U32(ctx, 31, 0x566A98u);
    ctx->pc = 0x566A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566A90u;
            // 0x566a94: 0x4600a347  neg.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F0A10u;
    if (runtime->hasFunction(0x2F0A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F0A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566A98u; }
        if (ctx->pc != 0x566A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F0A10_0x2f0a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566A98u; }
        if (ctx->pc != 0x566A98u) { return; }
    }
    ctx->pc = 0x566A98u;
label_566a98:
    // 0x566a98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566a9c:
    // 0x566a9c: 0x8c4489e0  lw          $a0, -0x7620($v0)
    ctx->pc = 0x566a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_566aa0:
    // 0x566aa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566aa4:
    // 0x566aa4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x566aa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_566aa8:
    // 0x566aa8: 0x320f809  jalr        $t9
label_566aac:
    if (ctx->pc == 0x566AACu) {
        ctx->pc = 0x566AB0u;
        goto label_566ab0;
    }
    ctx->pc = 0x566AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566AB0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566AB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566AB0u; }
            if (ctx->pc != 0x566AB0u) { return; }
        }
        }
    }
    ctx->pc = 0x566AB0u;
label_566ab0:
    // 0x566ab0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x566ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_566ab4:
    // 0x566ab4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x566ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_566ab8:
    // 0x566ab8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x566ab8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_566abc:
    // 0x566abc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x566abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_566ac0:
    // 0x566ac0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x566ac0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_566ac4:
    // 0x566ac4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x566ac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_566ac8:
    // 0x566ac8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x566ac8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566acc:
    // 0x566acc: 0x3e00008  jr          $ra
label_566ad0:
    if (ctx->pc == 0x566AD0u) {
        ctx->pc = 0x566AD0u;
            // 0x566ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x566AD4u;
        goto label_566ad4;
    }
    ctx->pc = 0x566ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566ACCu;
            // 0x566ad0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566AD4u;
label_566ad4:
    // 0x566ad4: 0x0  nop
    ctx->pc = 0x566ad4u;
    // NOP
label_566ad8:
    // 0x566ad8: 0x0  nop
    ctx->pc = 0x566ad8u;
    // NOP
label_566adc:
    // 0x566adc: 0x0  nop
    ctx->pc = 0x566adcu;
    // NOP
label_566ae0:
    // 0x566ae0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x566ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_566ae4:
    // 0x566ae4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x566ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_566ae8:
    // 0x566ae8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x566ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_566aec:
    // 0x566aec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x566aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_566af0:
    // 0x566af0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x566af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_566af4:
    // 0x566af4: 0x90830370  lbu         $v1, 0x370($a0)
    ctx->pc = 0x566af4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 880)));
label_566af8:
    // 0x566af8: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_566afc:
    if (ctx->pc == 0x566AFCu) {
        ctx->pc = 0x566AFCu;
            // 0x566afc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566B00u;
        goto label_566b00;
    }
    ctx->pc = 0x566AF8u;
    {
        const bool branch_taken_0x566af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x566AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566AF8u;
            // 0x566afc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566af8) {
            ctx->pc = 0x566B3Cu;
            goto label_566b3c;
        }
    }
    ctx->pc = 0x566B00u;
label_566b00:
    // 0x566b00: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x566b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_566b04:
    // 0x566b04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x566b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566b08:
    // 0x566b08: 0x8c500110  lw          $s0, 0x110($v0)
    ctx->pc = 0x566b08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_566b0c:
    // 0x566b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x566b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_566b10:
    // 0x566b10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x566b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_566b14:
    // 0x566b14: 0xc0eb654  jal         func_3AD950
label_566b18:
    if (ctx->pc == 0x566B18u) {
        ctx->pc = 0x566B18u;
            // 0x566b18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566B1Cu;
        goto label_566b1c;
    }
    ctx->pc = 0x566B14u;
    SET_GPR_U32(ctx, 31, 0x566B1Cu);
    ctx->pc = 0x566B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566B14u;
            // 0x566b18: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3AD950u;
    if (runtime->hasFunction(0x3AD950u)) {
        auto targetFn = runtime->lookupFunction(0x3AD950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566B1Cu; }
        if (ctx->pc != 0x566B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003AD950_0x3ad950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566B1Cu; }
        if (ctx->pc != 0x566B1Cu) { return; }
    }
    ctx->pc = 0x566B1Cu;
label_566b1c:
    // 0x566b1c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x566b1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_566b20:
    // 0x566b20: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x566b20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_566b24:
    // 0x566b24: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_566b28:
    if (ctx->pc == 0x566B28u) {
        ctx->pc = 0x566B28u;
            // 0x566b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566B2Cu;
        goto label_566b2c;
    }
    ctx->pc = 0x566B24u;
    {
        const bool branch_taken_0x566b24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x566b24) {
            ctx->pc = 0x566B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566B24u;
            // 0x566b28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_566b10;
        }
    }
    ctx->pc = 0x566B2Cu;
label_566b2c:
    // 0x566b2c: 0x8e590374  lw          $t9, 0x374($s2)
    ctx->pc = 0x566b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 884)));
label_566b30:
    // 0x566b30: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x566b30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_566b34:
    // 0x566b34: 0x320f809  jalr        $t9
label_566b38:
    if (ctx->pc == 0x566B38u) {
        ctx->pc = 0x566B38u;
            // 0x566b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566B3Cu;
        goto label_566b3c;
    }
    ctx->pc = 0x566B34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566B3Cu);
        ctx->pc = 0x566B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566B34u;
            // 0x566b38: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x566B3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566B3Cu; }
            if (ctx->pc != 0x566B3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x566B3Cu;
label_566b3c:
    // 0x566b3c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x566b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_566b40:
    // 0x566b40: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x566b40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_566b44:
    // 0x566b44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x566b44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566b48:
    // 0x566b48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566b48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_566b4c:
    // 0x566b4c: 0x3e00008  jr          $ra
label_566b50:
    if (ctx->pc == 0x566B50u) {
        ctx->pc = 0x566B50u;
            // 0x566b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x566B54u;
        goto label_566b54;
    }
    ctx->pc = 0x566B4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566B4Cu;
            // 0x566b50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566B54u;
label_566b54:
    // 0x566b54: 0x0  nop
    ctx->pc = 0x566b54u;
    // NOP
label_566b58:
    // 0x566b58: 0x0  nop
    ctx->pc = 0x566b58u;
    // NOP
label_566b5c:
    // 0x566b5c: 0x0  nop
    ctx->pc = 0x566b5cu;
    // NOP
label_566b60:
    // 0x566b60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x566b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_566b64:
    // 0x566b64: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x566b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_566b68:
    // 0x566b68: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x566b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_566b6c:
    // 0x566b6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x566b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_566b70:
    // 0x566b70: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x566b70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_566b74:
    // 0x566b74: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
label_566b78:
    if (ctx->pc == 0x566B78u) {
        ctx->pc = 0x566B78u;
            // 0x566b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566B7Cu;
        goto label_566b7c;
    }
    ctx->pc = 0x566B74u;
    {
        const bool branch_taken_0x566b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x566B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566B74u;
            // 0x566b78: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566b74) {
            ctx->pc = 0x566BA8u;
            goto label_566ba8;
        }
    }
    ctx->pc = 0x566B7Cu;
label_566b7c:
    // 0x566b7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x566b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_566b80:
    // 0x566b80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x566b80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566b84:
    // 0x566b84: 0x24427fa0  addiu       $v0, $v0, 0x7FA0
    ctx->pc = 0x566b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32672));
label_566b88:
    // 0x566b88: 0xc0ccf5c  jal         func_333D70
label_566b8c:
    if (ctx->pc == 0x566B8Cu) {
        ctx->pc = 0x566B8Cu;
            // 0x566b8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x566B90u;
        goto label_566b90;
    }
    ctx->pc = 0x566B88u;
    SET_GPR_U32(ctx, 31, 0x566B90u);
    ctx->pc = 0x566B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566B88u;
            // 0x566b8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x333D70u;
    if (runtime->hasFunction(0x333D70u)) {
        auto targetFn = runtime->lookupFunction(0x333D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566B90u; }
        if (ctx->pc != 0x566B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00333D70_0x333d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566B90u; }
        if (ctx->pc != 0x566B90u) { return; }
    }
    ctx->pc = 0x566B90u;
label_566b90:
    // 0x566b90: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x566b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_566b94:
    // 0x566b94: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x566b94u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_566b98:
    // 0x566b98: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_566b9c:
    if (ctx->pc == 0x566B9Cu) {
        ctx->pc = 0x566B9Cu;
            // 0x566b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566BA0u;
        goto label_566ba0;
    }
    ctx->pc = 0x566B98u;
    {
        const bool branch_taken_0x566b98 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x566b98) {
            ctx->pc = 0x566B9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566B98u;
            // 0x566b9c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566BACu;
            goto label_566bac;
        }
    }
    ctx->pc = 0x566BA0u;
label_566ba0:
    // 0x566ba0: 0xc0400a8  jal         func_1002A0
label_566ba4:
    if (ctx->pc == 0x566BA4u) {
        ctx->pc = 0x566BA4u;
            // 0x566ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566BA8u;
        goto label_566ba8;
    }
    ctx->pc = 0x566BA0u;
    SET_GPR_U32(ctx, 31, 0x566BA8u);
    ctx->pc = 0x566BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566BA0u;
            // 0x566ba4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566BA8u; }
        if (ctx->pc != 0x566BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566BA8u; }
        if (ctx->pc != 0x566BA8u) { return; }
    }
    ctx->pc = 0x566BA8u;
label_566ba8:
    // 0x566ba8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x566ba8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_566bac:
    // 0x566bac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x566bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_566bb0:
    // 0x566bb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x566bb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566bb4:
    // 0x566bb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x566bb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_566bb8:
    // 0x566bb8: 0x3e00008  jr          $ra
label_566bbc:
    if (ctx->pc == 0x566BBCu) {
        ctx->pc = 0x566BBCu;
            // 0x566bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x566BC0u;
        goto label_566bc0;
    }
    ctx->pc = 0x566BB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566BB8u;
            // 0x566bbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566BC0u;
label_566bc0:
    // 0x566bc0: 0x8c820cc0  lw          $v0, 0xCC0($a0)
    ctx->pc = 0x566bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3264)));
label_566bc4:
    // 0x566bc4: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x566bc4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_566bc8:
    // 0x566bc8: 0x50e00022  beql        $a3, $zero, . + 4 + (0x22 << 2)
label_566bcc:
    if (ctx->pc == 0x566BCCu) {
        ctx->pc = 0x566BCCu;
            // 0x566bcc: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x566BD0u;
        goto label_566bd0;
    }
    ctx->pc = 0x566BC8u;
    {
        const bool branch_taken_0x566bc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x566bc8) {
            ctx->pc = 0x566BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566BC8u;
            // 0x566bcc: 0xc4810844  lwc1        $f1, 0x844($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x566C54u;
            goto label_566c54;
        }
    }
    ctx->pc = 0x566BD0u;
label_566bd0:
    // 0x566bd0: 0xc4810844  lwc1        $f1, 0x844($a0)
    ctx->pc = 0x566bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_566bd4:
    // 0x566bd4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x566bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_566bd8:
    // 0x566bd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x566bd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566bdc:
    // 0x566bdc: 0x0  nop
    ctx->pc = 0x566bdcu;
    // NOP
label_566be0:
    // 0x566be0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x566be0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_566be4:
    // 0x566be4: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_566be8:
    if (ctx->pc == 0x566BE8u) {
        ctx->pc = 0x566BE8u;
            // 0x566be8: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->pc = 0x566BECu;
        goto label_566bec;
    }
    ctx->pc = 0x566BE4u;
    {
        const bool branch_taken_0x566be4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x566BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566BE4u;
            // 0x566be8: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566be4) {
            ctx->pc = 0x566BFCu;
            goto label_566bfc;
        }
    }
    ctx->pc = 0x566BECu;
label_566bec:
    // 0x566bec: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566becu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566bf0:
    // 0x566bf0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x566bf0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_566bf4:
    // 0x566bf4: 0x10000008  b           . + 4 + (0x8 << 2)
label_566bf8:
    if (ctx->pc == 0x566BF8u) {
        ctx->pc = 0x566BF8u;
            // 0x566bf8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x566BFCu;
        goto label_566bfc;
    }
    ctx->pc = 0x566BF4u;
    {
        const bool branch_taken_0x566bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566BF4u;
            // 0x566bf8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566bf4) {
            ctx->pc = 0x566C18u;
            goto label_566c18;
        }
    }
    ctx->pc = 0x566BFCu;
label_566bfc:
    // 0x566bfc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x566bfcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_566c00:
    // 0x566c00: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x566c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_566c04:
    // 0x566c04: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566c04u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566c08:
    // 0x566c08: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x566c08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_566c0c:
    // 0x566c0c: 0x0  nop
    ctx->pc = 0x566c0cu;
    // NOP
label_566c10:
    // 0x566c10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x566c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_566c14:
    // 0x566c14: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x566c14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566c18:
    // 0x566c18: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x566c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_566c1c:
    // 0x566c1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x566c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_566c20:
    // 0x566c20: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x566c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_566c24:
    // 0x566c24: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x566c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_566c28:
    // 0x566c28: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x566c28u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_566c2c:
    // 0x566c2c: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x566c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_566c30:
    // 0x566c30: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x566c30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_566c34:
    // 0x566c34: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x566c34u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_566c38:
    // 0x566c38: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x566c38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566c3c:
    // 0x566c3c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x566c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_566c40:
    // 0x566c40: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x566c40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_566c44:
    // 0x566c44: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x566c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_566c48:
    // 0x566c48: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x566c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_566c4c:
    // 0x566c4c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_566c50:
    if (ctx->pc == 0x566C50u) {
        ctx->pc = 0x566C50u;
            // 0x566c50: 0xe21023  subu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->pc = 0x566C54u;
        goto label_566c54;
    }
    ctx->pc = 0x566C4Cu;
    {
        const bool branch_taken_0x566c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566C4Cu;
            // 0x566c50: 0xe21023  subu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566c4c) {
            ctx->pc = 0x566CCCu;
            goto label_566ccc;
        }
    }
    ctx->pc = 0x566C54u;
label_566c54:
    // 0x566c54: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x566c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_566c58:
    // 0x566c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x566c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_566c5c:
    // 0x566c5c: 0x0  nop
    ctx->pc = 0x566c5cu;
    // NOP
label_566c60:
    // 0x566c60: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x566c60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_566c64:
    // 0x566c64: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_566c68:
    if (ctx->pc == 0x566C68u) {
        ctx->pc = 0x566C68u;
            // 0x566c68: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->pc = 0x566C6Cu;
        goto label_566c6c;
    }
    ctx->pc = 0x566C64u;
    {
        const bool branch_taken_0x566c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x566C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566C64u;
            // 0x566c68: 0x24860838  addiu       $a2, $a0, 0x838 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 2104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566c64) {
            ctx->pc = 0x566C7Cu;
            goto label_566c7c;
        }
    }
    ctx->pc = 0x566C6Cu;
label_566c6c:
    // 0x566c6c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566c6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566c70:
    // 0x566c70: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x566c70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_566c74:
    // 0x566c74: 0x10000008  b           . + 4 + (0x8 << 2)
label_566c78:
    if (ctx->pc == 0x566C78u) {
        ctx->pc = 0x566C78u;
            // 0x566c78: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x566C7Cu;
        goto label_566c7c;
    }
    ctx->pc = 0x566C74u;
    {
        const bool branch_taken_0x566c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566C74u;
            // 0x566c78: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566c74) {
            ctx->pc = 0x566C98u;
            goto label_566c98;
        }
    }
    ctx->pc = 0x566C7Cu;
label_566c7c:
    // 0x566c7c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x566c7cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_566c80:
    // 0x566c80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x566c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_566c84:
    // 0x566c84: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566c84u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566c88:
    // 0x566c88: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x566c88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_566c8c:
    // 0x566c8c: 0x0  nop
    ctx->pc = 0x566c8cu;
    // NOP
label_566c90:
    // 0x566c90: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x566c90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_566c94:
    // 0x566c94: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x566c94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566c98:
    // 0x566c98: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x566c98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_566c9c:
    // 0x566c9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x566c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_566ca0:
    // 0x566ca0: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x566ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_566ca4:
    // 0x566ca4: 0x52140  sll         $a0, $a1, 5
    ctx->pc = 0x566ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
label_566ca8:
    // 0x566ca8: 0x23040  sll         $a2, $v0, 1
    ctx->pc = 0x566ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_566cac:
    // 0x566cac: 0x3402ea60  ori         $v0, $zero, 0xEA60
    ctx->pc = 0x566cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_566cb0:
    // 0x566cb0: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x566cb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_566cb4:
    // 0x566cb4: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x566cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_566cb8:
    // 0x566cb8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x566cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_566cbc:
    // 0x566cbc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x566cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_566cc0:
    // 0x566cc0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x566cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_566cc4:
    // 0x566cc4: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x566cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_566cc8:
    // 0x566cc8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x566cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_566ccc:
    // 0x566ccc: 0x3e00008  jr          $ra
label_566cd0:
    if (ctx->pc == 0x566CD0u) {
        ctx->pc = 0x566CD4u;
        goto label_566cd4;
    }
    ctx->pc = 0x566CCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566CD4u;
label_566cd4:
    // 0x566cd4: 0x0  nop
    ctx->pc = 0x566cd4u;
    // NOP
label_566cd8:
    // 0x566cd8: 0x0  nop
    ctx->pc = 0x566cd8u;
    // NOP
label_566cdc:
    // 0x566cdc: 0x0  nop
    ctx->pc = 0x566cdcu;
    // NOP
label_566ce0:
    // 0x566ce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x566ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_566ce4:
    // 0x566ce4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x566ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_566ce8:
    // 0x566ce8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x566ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_566cec:
    // 0x566cec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x566cecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_566cf0:
    // 0x566cf0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x566cf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_566cf4:
    // 0x566cf4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x566cf4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_566cf8:
    // 0x566cf8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x566cf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_566cfc:
    // 0x566cfc: 0x8c840cc4  lw          $a0, 0xCC4($a0)
    ctx->pc = 0x566cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_566d00:
    // 0x566d00: 0x2c810002  sltiu       $at, $a0, 0x2
    ctx->pc = 0x566d00u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_566d04:
    // 0x566d04: 0x10200010  beqz        $at, . + 4 + (0x10 << 2)
label_566d08:
    if (ctx->pc == 0x566D08u) {
        ctx->pc = 0x566D08u;
            // 0x566d08: 0x8c708a08  lw          $s0, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->pc = 0x566D0Cu;
        goto label_566d0c;
    }
    ctx->pc = 0x566D04u;
    {
        const bool branch_taken_0x566d04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x566D08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566D04u;
            // 0x566d08: 0x8c708a08  lw          $s0, -0x75F8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566d04) {
            ctx->pc = 0x566D48u;
            goto label_566d48;
        }
    }
    ctx->pc = 0x566D0Cu;
label_566d0c:
    // 0x566d0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x566d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_566d10:
    // 0x566d10: 0x92250cc9  lbu         $a1, 0xCC9($s1)
    ctx->pc = 0x566d10u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3273)));
label_566d14:
    // 0x566d14: 0x8c639764  lw          $v1, -0x689C($v1)
    ctx->pc = 0x566d14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940516)));
label_566d18:
    // 0x566d18: 0x30630402  andi        $v1, $v1, 0x402
    ctx->pc = 0x566d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1026);
label_566d1c:
    // 0x566d1c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x566d1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_566d20:
    // 0x566d20: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x566d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_566d24:
    // 0x566d24: 0xa2230cc9  sb          $v1, 0xCC9($s1)
    ctx->pc = 0x566d24u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3273), (uint8_t)GPR_U32(ctx, 3));
label_566d28:
    // 0x566d28: 0x92240cc9  lbu         $a0, 0xCC9($s1)
    ctx->pc = 0x566d28u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3273)));
label_566d2c:
    // 0x566d2c: 0xa41826  xor         $v1, $a1, $a0
    ctx->pc = 0x566d2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
label_566d30:
    // 0x566d30: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x566d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_566d34:
    // 0x566d34: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_566d38:
    if (ctx->pc == 0x566D38u) {
        ctx->pc = 0x566D38u;
            // 0x566d38: 0x8e230cc4  lw          $v1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->pc = 0x566D3Cu;
        goto label_566d3c;
    }
    ctx->pc = 0x566D34u;
    {
        const bool branch_taken_0x566d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x566d34) {
            ctx->pc = 0x566D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566D34u;
            // 0x566d38: 0x8e230cc4  lw          $v1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566D4Cu;
            goto label_566d4c;
        }
    }
    ctx->pc = 0x566D3Cu;
label_566d3c:
    // 0x566d3c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x566d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_566d40:
    // 0x566d40: 0xc073234  jal         func_1CC8D0
label_566d44:
    if (ctx->pc == 0x566D44u) {
        ctx->pc = 0x566D44u;
            // 0x566d44: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->pc = 0x566D48u;
        goto label_566d48;
    }
    ctx->pc = 0x566D40u;
    SET_GPR_U32(ctx, 31, 0x566D48u);
    ctx->pc = 0x566D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566D40u;
            // 0x566d44: 0x344400a9  ori         $a0, $v0, 0xA9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)169);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566D48u; }
        if (ctx->pc != 0x566D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566D48u; }
        if (ctx->pc != 0x566D48u) { return; }
    }
    ctx->pc = 0x566D48u;
label_566d48:
    // 0x566d48: 0x8e230cc4  lw          $v1, 0xCC4($s1)
    ctx->pc = 0x566d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_566d4c:
    // 0x566d4c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x566d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566d50:
    // 0x566d50: 0x5064005a  beql        $v1, $a0, . + 4 + (0x5A << 2)
label_566d54:
    if (ctx->pc == 0x566D54u) {
        ctx->pc = 0x566D54u;
            // 0x566d54: 0x92230cc9  lbu         $v1, 0xCC9($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3273)));
        ctx->pc = 0x566D58u;
        goto label_566d58;
    }
    ctx->pc = 0x566D50u;
    {
        const bool branch_taken_0x566d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x566d50) {
            ctx->pc = 0x566D54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566D50u;
            // 0x566d54: 0x92230cc9  lbu         $v1, 0xCC9($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3273)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566EBCu;
            goto label_566ebc;
        }
    }
    ctx->pc = 0x566D58u;
label_566d58:
    // 0x566d58: 0x50600003  beql        $v1, $zero, . + 4 + (0x3 << 2)
label_566d5c:
    if (ctx->pc == 0x566D5Cu) {
        ctx->pc = 0x566D5Cu;
            // 0x566d5c: 0x92230ccb  lbu         $v1, 0xCCB($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3275)));
        ctx->pc = 0x566D60u;
        goto label_566d60;
    }
    ctx->pc = 0x566D58u;
    {
        const bool branch_taken_0x566d58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x566d58) {
            ctx->pc = 0x566D5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566D58u;
            // 0x566d5c: 0x92230ccb  lbu         $v1, 0xCCB($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3275)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566D68u;
            goto label_566d68;
        }
    }
    ctx->pc = 0x566D60u;
label_566d60:
    // 0x566d60: 0x1000005f  b           . + 4 + (0x5F << 2)
label_566d64:
    if (ctx->pc == 0x566D64u) {
        ctx->pc = 0x566D64u;
            // 0x566d64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x566D68u;
        goto label_566d68;
    }
    ctx->pc = 0x566D60u;
    {
        const bool branch_taken_0x566d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566D60u;
            // 0x566d64: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566d60) {
            ctx->pc = 0x566EE0u;
            goto label_566ee0;
        }
    }
    ctx->pc = 0x566D68u;
label_566d68:
    // 0x566d68: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_566d6c:
    if (ctx->pc == 0x566D6Cu) {
        ctx->pc = 0x566D6Cu;
            // 0x566d6c: 0x92230010  lbu         $v1, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x566D70u;
        goto label_566d70;
    }
    ctx->pc = 0x566D68u;
    {
        const bool branch_taken_0x566d68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x566d68) {
            ctx->pc = 0x566D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566D68u;
            // 0x566d6c: 0x92230010  lbu         $v1, 0x10($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566D7Cu;
            goto label_566d7c;
        }
    }
    ctx->pc = 0x566D70u;
label_566d70:
    // 0x566d70: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x566d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_566d74:
    // 0x566d74: 0x10000059  b           . + 4 + (0x59 << 2)
label_566d78:
    if (ctx->pc == 0x566D78u) {
        ctx->pc = 0x566D78u;
            // 0x566d78: 0xae230cc4  sw          $v1, 0xCC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 3));
        ctx->pc = 0x566D7Cu;
        goto label_566d7c;
    }
    ctx->pc = 0x566D74u;
    {
        const bool branch_taken_0x566d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566D74u;
            // 0x566d78: 0xae230cc4  sw          $v1, 0xCC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566d74) {
            ctx->pc = 0x566EDCu;
            goto label_566edc;
        }
    }
    ctx->pc = 0x566D7Cu;
label_566d7c:
    // 0x566d7c: 0x2c63000b  sltiu       $v1, $v1, 0xB
    ctx->pc = 0x566d7cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_566d80:
    // 0x566d80: 0x14600056  bnez        $v1, . + 4 + (0x56 << 2)
label_566d84:
    if (ctx->pc == 0x566D84u) {
        ctx->pc = 0x566D88u;
        goto label_566d88;
    }
    ctx->pc = 0x566D80u;
    {
        const bool branch_taken_0x566d80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x566d80) {
            ctx->pc = 0x566EDCu;
            goto label_566edc;
        }
    }
    ctx->pc = 0x566D88u;
label_566d88:
    // 0x566d88: 0x92230cc9  lbu         $v1, 0xCC9($s1)
    ctx->pc = 0x566d88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3273)));
label_566d8c:
    // 0x566d8c: 0x54600048  bnel        $v1, $zero, . + 4 + (0x48 << 2)
label_566d90:
    if (ctx->pc == 0x566D90u) {
        ctx->pc = 0x566D90u;
            // 0x566d90: 0x8e230cc4  lw          $v1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->pc = 0x566D94u;
        goto label_566d94;
    }
    ctx->pc = 0x566D8Cu;
    {
        const bool branch_taken_0x566d8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x566d8c) {
            ctx->pc = 0x566D90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566D8Cu;
            // 0x566d90: 0x8e230cc4  lw          $v1, 0xCC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566EB0u;
            goto label_566eb0;
        }
    }
    ctx->pc = 0x566D94u;
label_566d94:
    // 0x566d94: 0xa2040082  sb          $a0, 0x82($s0)
    ctx->pc = 0x566d94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 4));
label_566d98:
    // 0x566d98: 0xc040180  jal         func_100600
label_566d9c:
    if (ctx->pc == 0x566D9Cu) {
        ctx->pc = 0x566D9Cu;
            // 0x566d9c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x566DA0u;
        goto label_566da0;
    }
    ctx->pc = 0x566D98u;
    SET_GPR_U32(ctx, 31, 0x566DA0u);
    ctx->pc = 0x566D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566D98u;
            // 0x566d9c: 0x2404008c  addiu       $a0, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566DA0u; }
        if (ctx->pc != 0x566DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566DA0u; }
        if (ctx->pc != 0x566DA0u) { return; }
    }
    ctx->pc = 0x566DA0u;
label_566da0:
    // 0x566da0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_566da4:
    if (ctx->pc == 0x566DA4u) {
        ctx->pc = 0x566DA4u;
            // 0x566da4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566DA8u;
        goto label_566da8;
    }
    ctx->pc = 0x566DA0u;
    {
        const bool branch_taken_0x566da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x566DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566DA0u;
            // 0x566da4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566da0) {
            ctx->pc = 0x566E94u;
            goto label_566e94;
        }
    }
    ctx->pc = 0x566DA8u;
label_566da8:
    // 0x566da8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566dac:
    // 0x566dac: 0x3c0343b9  lui         $v1, 0x43B9
    ctx->pc = 0x566dacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17337 << 16));
label_566db0:
    // 0x566db0: 0x8c4789d8  lw          $a3, -0x7628($v0)
    ctx->pc = 0x566db0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937048)));
label_566db4:
    // 0x566db4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x566db4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_566db8:
    // 0x566db8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x566db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_566dbc:
    // 0x566dbc: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x566dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_566dc0:
    // 0x566dc0: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x566dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_566dc4:
    // 0x566dc4: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x566dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_566dc8:
    // 0x566dc8: 0x3445423f  ori         $a1, $v0, 0x423F
    ctx->pc = 0x566dc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_566dcc:
    // 0x566dcc: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x566dccu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_566dd0:
    // 0x566dd0: 0xc10ca68  jal         func_4329A0
label_566dd4:
    if (ctx->pc == 0x566DD4u) {
        ctx->pc = 0x566DD4u;
            // 0x566dd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566DD8u;
        goto label_566dd8;
    }
    ctx->pc = 0x566DD0u;
    SET_GPR_U32(ctx, 31, 0x566DD8u);
    ctx->pc = 0x566DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566DD0u;
            // 0x566dd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566DD8u; }
        if (ctx->pc != 0x566DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566DD8u; }
        if (ctx->pc != 0x566DD8u) { return; }
    }
    ctx->pc = 0x566DD8u;
label_566dd8:
    // 0x566dd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x566dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_566ddc:
    // 0x566ddc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x566ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_566de0:
    // 0x566de0: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x566de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_566de4:
    // 0x566de4: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x566de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
label_566de8:
    // 0x566de8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x566de8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_566dec:
    // 0x566dec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x566decu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_566df0:
    // 0x566df0: 0x24030172  addiu       $v1, $zero, 0x172
    ctx->pc = 0x566df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_566df4:
    // 0x566df4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566df8:
    // 0x566df8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x566df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_566dfc:
    // 0x566dfc: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x566dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_566e00:
    // 0x566e00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566e04:
    // 0x566e04: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x566e04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_566e08:
    // 0x566e08: 0x320f809  jalr        $t9
label_566e0c:
    if (ctx->pc == 0x566E0Cu) {
        ctx->pc = 0x566E10u;
        goto label_566e10;
    }
    ctx->pc = 0x566E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566E10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566E10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566E10u; }
            if (ctx->pc != 0x566E10u) { return; }
        }
        }
    }
    ctx->pc = 0x566E10u;
label_566e10:
    // 0x566e10: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566e10u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_566e14:
    // 0x566e14: 0x240300c9  addiu       $v1, $zero, 0xC9
    ctx->pc = 0x566e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 201));
label_566e18:
    // 0x566e18: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566e1c:
    // 0x566e1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x566e1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_566e20:
    // 0x566e20: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x566e20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_566e24:
    // 0x566e24: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566e24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566e28:
    // 0x566e28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x566e28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_566e2c:
    // 0x566e2c: 0x0  nop
    ctx->pc = 0x566e2cu;
    // NOP
label_566e30:
    // 0x566e30: 0xae040058  sw          $a0, 0x58($s0)
    ctx->pc = 0x566e30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 4));
label_566e34:
    // 0x566e34: 0xae03005c  sw          $v1, 0x5C($s0)
    ctx->pc = 0x566e34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 3));
label_566e38:
    // 0x566e38: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x566e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_566e3c:
    // 0x566e3c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x566e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_566e40:
    // 0x566e40: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x566e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_566e44:
    // 0x566e44: 0x320f809  jalr        $t9
label_566e48:
    if (ctx->pc == 0x566E48u) {
        ctx->pc = 0x566E4Cu;
        goto label_566e4c;
    }
    ctx->pc = 0x566E44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x566E4Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x566E4Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x566E4Cu; }
            if (ctx->pc != 0x566E4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x566E4Cu;
label_566e4c:
    // 0x566e4c: 0x3c03422c  lui         $v1, 0x422C
    ctx->pc = 0x566e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16940 << 16));
label_566e50:
    // 0x566e50: 0x3c024c0a  lui         $v0, 0x4C0A
    ctx->pc = 0x566e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19466 << 16));
label_566e54:
    // 0x566e54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x566e54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_566e58:
    // 0x566e58: 0x34446d80  ori         $a0, $v0, 0x6D80
    ctx->pc = 0x566e58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28032);
label_566e5c:
    // 0x566e5c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x566e5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_566e60:
    // 0x566e60: 0x24030402  addiu       $v1, $zero, 0x402
    ctx->pc = 0x566e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
label_566e64:
    // 0x566e64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x566e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566e68:
    // 0x566e68: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x566e68u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_566e6c:
    // 0x566e6c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x566e6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_566e70:
    // 0x566e70: 0x0  nop
    ctx->pc = 0x566e70u;
    // NOP
label_566e74:
    // 0x566e74: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x566e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_566e78:
    // 0x566e78: 0xae040064  sw          $a0, 0x64($s0)
    ctx->pc = 0x566e78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 4));
label_566e7c:
    // 0x566e7c: 0xae030068  sw          $v1, 0x68($s0)
    ctx->pc = 0x566e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 3));
label_566e80:
    // 0x566e80: 0xae00006c  sw          $zero, 0x6C($s0)
    ctx->pc = 0x566e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 0));
label_566e84:
    // 0x566e84: 0xa2000080  sb          $zero, 0x80($s0)
    ctx->pc = 0x566e84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 0));
label_566e88:
    // 0x566e88: 0xa2000081  sb          $zero, 0x81($s0)
    ctx->pc = 0x566e88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 0));
label_566e8c:
    // 0x566e8c: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x566e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
label_566e90:
    // 0x566e90: 0xae020088  sw          $v0, 0x88($s0)
    ctx->pc = 0x566e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 2));
label_566e94:
    // 0x566e94: 0x3c020015  lui         $v0, 0x15
    ctx->pc = 0x566e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21 << 16));
label_566e98:
    // 0x566e98: 0xc073234  jal         func_1CC8D0
label_566e9c:
    if (ctx->pc == 0x566E9Cu) {
        ctx->pc = 0x566E9Cu;
            // 0x566e9c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x566EA0u;
        goto label_566ea0;
    }
    ctx->pc = 0x566E98u;
    SET_GPR_U32(ctx, 31, 0x566EA0u);
    ctx->pc = 0x566E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566E98u;
            // 0x566e9c: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566EA0u; }
        if (ctx->pc != 0x566EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566EA0u; }
        if (ctx->pc != 0x566EA0u) { return; }
    }
    ctx->pc = 0x566EA0u;
label_566ea0:
    // 0x566ea0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x566ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_566ea4:
    // 0x566ea4: 0x8c63a348  lw          $v1, -0x5CB8($v1)
    ctx->pc = 0x566ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943560)));
label_566ea8:
    // 0x566ea8: 0xa0600038  sb          $zero, 0x38($v1)
    ctx->pc = 0x566ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 56), (uint8_t)GPR_U32(ctx, 0));
label_566eac:
    // 0x566eac: 0x8e230cc4  lw          $v1, 0xCC4($s1)
    ctx->pc = 0x566eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_566eb0:
    // 0x566eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x566eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_566eb4:
    // 0x566eb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_566eb8:
    if (ctx->pc == 0x566EB8u) {
        ctx->pc = 0x566EB8u;
            // 0x566eb8: 0xae230cc4  sw          $v1, 0xCC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 3));
        ctx->pc = 0x566EBCu;
        goto label_566ebc;
    }
    ctx->pc = 0x566EB4u;
    {
        const bool branch_taken_0x566eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566EB4u;
            // 0x566eb8: 0xae230cc4  sw          $v1, 0xCC4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566eb4) {
            ctx->pc = 0x566EDCu;
            goto label_566edc;
        }
    }
    ctx->pc = 0x566EBCu;
label_566ebc:
    // 0x566ebc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_566ec0:
    if (ctx->pc == 0x566EC0u) {
        ctx->pc = 0x566EC4u;
        goto label_566ec4;
    }
    ctx->pc = 0x566EBCu;
    {
        const bool branch_taken_0x566ebc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x566ebc) {
            ctx->pc = 0x566EDCu;
            goto label_566edc;
        }
    }
    ctx->pc = 0x566EC4u;
label_566ec4:
    // 0x566ec4: 0xa2200cca  sb          $zero, 0xCCA($s1)
    ctx->pc = 0x566ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3274), (uint8_t)GPR_U32(ctx, 0));
label_566ec8:
    // 0x566ec8: 0xa2000082  sb          $zero, 0x82($s0)
    ctx->pc = 0x566ec8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 130), (uint8_t)GPR_U32(ctx, 0));
label_566ecc:
    // 0x566ecc: 0xa2200ccb  sb          $zero, 0xCCB($s1)
    ctx->pc = 0x566eccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3275), (uint8_t)GPR_U32(ctx, 0));
label_566ed0:
    // 0x566ed0: 0x8e230cc4  lw          $v1, 0xCC4($s1)
    ctx->pc = 0x566ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3268)));
label_566ed4:
    // 0x566ed4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x566ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_566ed8:
    // 0x566ed8: 0xae230cc4  sw          $v1, 0xCC4($s1)
    ctx->pc = 0x566ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3268), GPR_U32(ctx, 3));
label_566edc:
    // 0x566edc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x566edcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_566ee0:
    // 0x566ee0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x566ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_566ee4:
    // 0x566ee4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x566ee4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_566ee8:
    // 0x566ee8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x566ee8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_566eec:
    // 0x566eec: 0x3e00008  jr          $ra
label_566ef0:
    if (ctx->pc == 0x566EF0u) {
        ctx->pc = 0x566EF0u;
            // 0x566ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x566EF4u;
        goto label_566ef4;
    }
    ctx->pc = 0x566EECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x566EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566EECu;
            // 0x566ef0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x566EF4u;
label_566ef4:
    // 0x566ef4: 0x0  nop
    ctx->pc = 0x566ef4u;
    // NOP
label_566ef8:
    // 0x566ef8: 0x0  nop
    ctx->pc = 0x566ef8u;
    // NOP
label_566efc:
    // 0x566efc: 0x0  nop
    ctx->pc = 0x566efcu;
    // NOP
label_566f00:
    // 0x566f00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x566f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_566f04:
    // 0x566f04: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x566f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_566f08:
    // 0x566f08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x566f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_566f0c:
    // 0x566f0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x566f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_566f10:
    // 0x566f10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x566f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_566f14:
    // 0x566f14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x566f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_566f18:
    // 0x566f18: 0x8c830cc4  lw          $v1, 0xCC4($a0)
    ctx->pc = 0x566f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_566f1c:
    // 0x566f1c: 0x10620067  beq         $v1, $v0, . + 4 + (0x67 << 2)
label_566f20:
    if (ctx->pc == 0x566F20u) {
        ctx->pc = 0x566F20u;
            // 0x566f20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566F24u;
        goto label_566f24;
    }
    ctx->pc = 0x566F1Cu;
    {
        const bool branch_taken_0x566f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x566F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566F1Cu;
            // 0x566f20: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566f1c) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x566F24u;
label_566f24:
    // 0x566f24: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x566f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_566f28:
    // 0x566f28: 0x5062005b  beql        $v1, $v0, . + 4 + (0x5B << 2)
label_566f2c:
    if (ctx->pc == 0x566F2Cu) {
        ctx->pc = 0x566F2Cu;
            // 0x566f2c: 0x92420cc8  lbu         $v0, 0xCC8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->pc = 0x566F30u;
        goto label_566f30;
    }
    ctx->pc = 0x566F28u;
    {
        const bool branch_taken_0x566f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x566f28) {
            ctx->pc = 0x566F2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F28u;
            // 0x566f2c: 0x92420cc8  lbu         $v0, 0xCC8($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3272)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567098u;
            goto label_567098;
        }
    }
    ctx->pc = 0x566F30u;
label_566f30:
    // 0x566f30: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x566f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_566f34:
    // 0x566f34: 0x50620039  beql        $v1, $v0, . + 4 + (0x39 << 2)
label_566f38:
    if (ctx->pc == 0x566F38u) {
        ctx->pc = 0x566F38u;
            // 0x566f38: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->pc = 0x566F3Cu;
        goto label_566f3c;
    }
    ctx->pc = 0x566F34u;
    {
        const bool branch_taken_0x566f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x566f34) {
            ctx->pc = 0x566F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F34u;
            // 0x566f38: 0x240400d4  addiu       $a0, $zero, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56701Cu;
            goto label_56701c;
        }
    }
    ctx->pc = 0x566F3Cu;
label_566f3c:
    // 0x566f3c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x566f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_566f40:
    // 0x566f40: 0x50640003  beql        $v1, $a0, . + 4 + (0x3 << 2)
label_566f44:
    if (ctx->pc == 0x566F44u) {
        ctx->pc = 0x566F44u;
            // 0x566f44: 0x8e420cc0  lw          $v0, 0xCC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3264)));
        ctx->pc = 0x566F48u;
        goto label_566f48;
    }
    ctx->pc = 0x566F40u;
    {
        const bool branch_taken_0x566f40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x566f40) {
            ctx->pc = 0x566F44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F40u;
            // 0x566f44: 0x8e420cc0  lw          $v0, 0xCC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566F50u;
            goto label_566f50;
        }
    }
    ctx->pc = 0x566F48u;
label_566f48:
    // 0x566f48: 0x1000005d  b           . + 4 + (0x5D << 2)
label_566f4c:
    if (ctx->pc == 0x566F4Cu) {
        ctx->pc = 0x566F4Cu;
            // 0x566f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x566F50u;
        goto label_566f50;
    }
    ctx->pc = 0x566F48u;
    {
        const bool branch_taken_0x566f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566F48u;
            // 0x566f4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566f48) {
            ctx->pc = 0x5670C0u;
            goto label_5670c0;
        }
    }
    ctx->pc = 0x566F50u;
label_566f50:
    // 0x566f50: 0x90430010  lbu         $v1, 0x10($v0)
    ctx->pc = 0x566f50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_566f54:
    // 0x566f54: 0x5064001a  beql        $v1, $a0, . + 4 + (0x1A << 2)
label_566f58:
    if (ctx->pc == 0x566F58u) {
        ctx->pc = 0x566F58u;
            // 0x566f58: 0x92420859  lbu         $v0, 0x859($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2137)));
        ctx->pc = 0x566F5Cu;
        goto label_566f5c;
    }
    ctx->pc = 0x566F54u;
    {
        const bool branch_taken_0x566f54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x566f54) {
            ctx->pc = 0x566F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F54u;
            // 0x566f58: 0x92420859  lbu         $v0, 0x859($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2137)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566FC0u;
            goto label_566fc0;
        }
    }
    ctx->pc = 0x566F5Cu;
label_566f5c:
    // 0x566f5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x566f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566f60:
    // 0x566f60: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_566f64:
    if (ctx->pc == 0x566F64u) {
        ctx->pc = 0x566F64u;
            // 0x566f64: 0x8e43077c  lw          $v1, 0x77C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
        ctx->pc = 0x566F68u;
        goto label_566f68;
    }
    ctx->pc = 0x566F60u;
    {
        const bool branch_taken_0x566f60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x566f60) {
            ctx->pc = 0x566F64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F60u;
            // 0x566f64: 0x8e43077c  lw          $v1, 0x77C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566F70u;
            goto label_566f70;
        }
    }
    ctx->pc = 0x566F68u;
label_566f68:
    // 0x566f68: 0x10000018  b           . + 4 + (0x18 << 2)
label_566f6c:
    if (ctx->pc == 0x566F6Cu) {
        ctx->pc = 0x566F70u;
        goto label_566f70;
    }
    ctx->pc = 0x566F68u;
    {
        const bool branch_taken_0x566f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x566f68) {
            ctx->pc = 0x566FCCu;
            goto label_566fcc;
        }
    }
    ctx->pc = 0x566F70u;
label_566f70:
    // 0x566f70: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x566f70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_566f74:
    // 0x566f74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x566f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_566f78:
    // 0x566f78: 0x24840e80  addiu       $a0, $a0, 0xE80
    ctx->pc = 0x566f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3712));
label_566f7c:
    // 0x566f7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x566f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_566f80:
    // 0x566f80: 0x8c420da0  lw          $v0, 0xDA0($v0)
    ctx->pc = 0x566f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3488)));
label_566f84:
    // 0x566f84: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x566f84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_566f88:
    // 0x566f88: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x566f88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_566f8c:
    // 0x566f8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x566f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_566f90:
    // 0x566f90: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_566f94:
    if (ctx->pc == 0x566F94u) {
        ctx->pc = 0x566F94u;
            // 0x566f94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x566F98u;
        goto label_566f98;
    }
    ctx->pc = 0x566F90u;
    {
        const bool branch_taken_0x566f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x566f90) {
            ctx->pc = 0x566F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566F90u;
            // 0x566f94: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x566FACu;
            goto label_566fac;
        }
    }
    ctx->pc = 0x566F98u;
label_566f98:
    // 0x566f98: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_566f9c:
    if (ctx->pc == 0x566F9Cu) {
        ctx->pc = 0x566FA0u;
        goto label_566fa0;
    }
    ctx->pc = 0x566F98u;
    {
        const bool branch_taken_0x566f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x566f98) {
            ctx->pc = 0x566FCCu;
            goto label_566fcc;
        }
    }
    ctx->pc = 0x566FA0u;
label_566fa0:
    // 0x566fa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x566fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566fa4:
    // 0x566fa4: 0x10000009  b           . + 4 + (0x9 << 2)
label_566fa8:
    if (ctx->pc == 0x566FA8u) {
        ctx->pc = 0x566FA8u;
            // 0x566fa8: 0xae420cbc  sw          $v0, 0xCBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3260), GPR_U32(ctx, 2));
        ctx->pc = 0x566FACu;
        goto label_566fac;
    }
    ctx->pc = 0x566FA4u;
    {
        const bool branch_taken_0x566fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x566FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566FA4u;
            // 0x566fa8: 0xae420cbc  sw          $v0, 0xCBC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3260), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566fa4) {
            ctx->pc = 0x566FCCu;
            goto label_566fcc;
        }
    }
    ctx->pc = 0x566FACu;
label_566fac:
    // 0x566fac: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x566facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_566fb0:
    // 0x566fb0: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_566fb4:
    if (ctx->pc == 0x566FB4u) {
        ctx->pc = 0x566FB4u;
            // 0x566fb4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x566FB8u;
        goto label_566fb8;
    }
    ctx->pc = 0x566FB0u;
    {
        const bool branch_taken_0x566fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x566FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566FB0u;
            // 0x566fb4: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566fb0) {
            ctx->pc = 0x566F7Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_566f7c;
        }
    }
    ctx->pc = 0x566FB8u;
label_566fb8:
    // 0x566fb8: 0x10000004  b           . + 4 + (0x4 << 2)
label_566fbc:
    if (ctx->pc == 0x566FBCu) {
        ctx->pc = 0x566FC0u;
        goto label_566fc0;
    }
    ctx->pc = 0x566FB8u;
    {
        const bool branch_taken_0x566fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x566fb8) {
            ctx->pc = 0x566FCCu;
            goto label_566fcc;
        }
    }
    ctx->pc = 0x566FC0u;
label_566fc0:
    // 0x566fc0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_566fc4:
    if (ctx->pc == 0x566FC4u) {
        ctx->pc = 0x566FC8u;
        goto label_566fc8;
    }
    ctx->pc = 0x566FC0u;
    {
        const bool branch_taken_0x566fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x566fc0) {
            ctx->pc = 0x566FCCu;
            goto label_566fcc;
        }
    }
    ctx->pc = 0x566FC8u;
label_566fc8:
    // 0x566fc8: 0xae440cbc  sw          $a0, 0xCBC($s2)
    ctx->pc = 0x566fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3260), GPR_U32(ctx, 4));
label_566fcc:
    // 0x566fcc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x566fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_566fd0:
    // 0x566fd0: 0x8e430cbc  lw          $v1, 0xCBC($s2)
    ctx->pc = 0x566fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_566fd4:
    // 0x566fd4: 0x8c440e84  lw          $a0, 0xE84($v0)
    ctx->pc = 0x566fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3716)));
label_566fd8:
    // 0x566fd8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x566fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_566fdc:
    // 0x566fdc: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_566fe0:
    if (ctx->pc == 0x566FE0u) {
        ctx->pc = 0x566FE0u;
            // 0x566fe0: 0x8c820da0  lw          $v0, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->pc = 0x566FE4u;
        goto label_566fe4;
    }
    ctx->pc = 0x566FDCu;
    {
        const bool branch_taken_0x566fdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x566fdc) {
            ctx->pc = 0x566FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x566FDCu;
            // 0x566fe0: 0x8c820da0  lw          $v0, 0xDA0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x567004u;
            goto label_567004;
        }
    }
    ctx->pc = 0x566FE4u;
label_566fe4:
    // 0x566fe4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x566fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_566fe8:
    // 0x566fe8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x566fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_566fec:
    // 0x566fec: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x566fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_566ff0:
    // 0x566ff0: 0xc076098  jal         func_1D8260
label_566ff4:
    if (ctx->pc == 0x566FF4u) {
        ctx->pc = 0x566FF4u;
            // 0x566ff4: 0xa0430080  sb          $v1, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x566FF8u;
        goto label_566ff8;
    }
    ctx->pc = 0x566FF0u;
    SET_GPR_U32(ctx, 31, 0x566FF8u);
    ctx->pc = 0x566FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x566FF0u;
            // 0x566ff4: 0xa0430080  sb          $v1, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8260u;
    if (runtime->hasFunction(0x1D8260u)) {
        auto targetFn = runtime->lookupFunction(0x1D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566FF8u; }
        if (ctx->pc != 0x566FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D8260_0x1d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x566FF8u; }
        if (ctx->pc != 0x566FF8u) { return; }
    }
    ctx->pc = 0x566FF8u;
label_566ff8:
    // 0x566ff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x566ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_566ffc:
    // 0x566ffc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_567000:
    if (ctx->pc == 0x567000u) {
        ctx->pc = 0x567000u;
            // 0x567000: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->pc = 0x567004u;
        goto label_567004;
    }
    ctx->pc = 0x566FFCu;
    {
        const bool branch_taken_0x566ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x567000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x566FFCu;
            // 0x567000: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x566ffc) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x567004u;
label_567004:
    // 0x567004: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x567004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_567008:
    // 0x567008: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_56700c:
    if (ctx->pc == 0x56700Cu) {
        ctx->pc = 0x567010u;
        goto label_567010;
    }
    ctx->pc = 0x567008u;
    {
        const bool branch_taken_0x567008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x567008) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x567010u;
label_567010:
    // 0x567010: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x567010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_567014:
    // 0x567014: 0x10000029  b           . + 4 + (0x29 << 2)
label_567018:
    if (ctx->pc == 0x567018u) {
        ctx->pc = 0x567018u;
            // 0x567018: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->pc = 0x56701Cu;
        goto label_56701c;
    }
    ctx->pc = 0x567014u;
    {
        const bool branch_taken_0x567014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x567018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567014u;
            // 0x567018: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567014) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x56701Cu;
label_56701c:
    // 0x56701c: 0xc040180  jal         func_100600
label_567020:
    if (ctx->pc == 0x567020u) {
        ctx->pc = 0x567020u;
            // 0x567020: 0xa2400cc8  sb          $zero, 0xCC8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3272), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x567024u;
        goto label_567024;
    }
    ctx->pc = 0x56701Cu;
    SET_GPR_U32(ctx, 31, 0x567024u);
    ctx->pc = 0x567020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56701Cu;
            // 0x567020: 0xa2400cc8  sb          $zero, 0xCC8($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 3272), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567024u; }
        if (ctx->pc != 0x567024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567024u; }
        if (ctx->pc != 0x567024u) { return; }
    }
    ctx->pc = 0x567024u;
label_567024:
    // 0x567024: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_567028:
    if (ctx->pc == 0x567028u) {
        ctx->pc = 0x567028u;
            // 0x567028: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56702Cu;
        goto label_56702c;
    }
    ctx->pc = 0x567024u;
    {
        const bool branch_taken_0x567024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x567028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567024u;
            // 0x567028: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567024) {
            ctx->pc = 0x56708Cu;
            goto label_56708c;
        }
    }
    ctx->pc = 0x56702Cu;
label_56702c:
    // 0x56702c: 0x3c02000a  lui         $v0, 0xA
    ctx->pc = 0x56702cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)10 << 16));
label_567030:
    // 0x567030: 0x8e500cbc  lw          $s0, 0xCBC($s2)
    ctx->pc = 0x567030u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3260)));
label_567034:
    // 0x567034: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x567034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567038:
    // 0x567038: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x567038u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_56703c:
    // 0x56703c: 0x3445af29  ori         $a1, $v0, 0xAF29
    ctx->pc = 0x56703cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44841);
label_567040:
    // 0x567040: 0xc10ca68  jal         func_4329A0
label_567044:
    if (ctx->pc == 0x567044u) {
        ctx->pc = 0x567044u;
            // 0x567044: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x567048u;
        goto label_567048;
    }
    ctx->pc = 0x567040u;
    SET_GPR_U32(ctx, 31, 0x567048u);
    ctx->pc = 0x567044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567040u;
            // 0x567044: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567048u; }
        if (ctx->pc != 0x567048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567048u; }
        if (ctx->pc != 0x567048u) { return; }
    }
    ctx->pc = 0x567048u;
label_567048:
    // 0x567048: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x567048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_56704c:
    // 0x56704c: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x56704cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_567050:
    // 0x567050: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x567050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_567054:
    // 0x567054: 0xc148880  jal         func_522200
label_567058:
    if (ctx->pc == 0x567058u) {
        ctx->pc = 0x567058u;
            // 0x567058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x56705Cu;
        goto label_56705c;
    }
    ctx->pc = 0x567054u;
    SET_GPR_U32(ctx, 31, 0x56705Cu);
    ctx->pc = 0x567058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567054u;
            // 0x567058: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x522200u;
    if (runtime->hasFunction(0x522200u)) {
        auto targetFn = runtime->lookupFunction(0x522200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56705Cu; }
        if (ctx->pc != 0x56705Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00522200_0x522200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56705Cu; }
        if (ctx->pc != 0x56705Cu) { return; }
    }
    ctx->pc = 0x56705Cu;
label_56705c:
    // 0x56705c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56705cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_567060:
    // 0x567060: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x567060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_567064:
    // 0x567064: 0x24425580  addiu       $v0, $v0, 0x5580
    ctx->pc = 0x567064u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21888));
label_567068:
    // 0x567068: 0x246355b0  addiu       $v1, $v1, 0x55B0
    ctx->pc = 0x567068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21936));
label_56706c:
    // 0x56706c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x56706cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_567070:
    // 0x567070: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x567070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_567074:
    // 0x567074: 0xae230054  sw          $v1, 0x54($s1)
    ctx->pc = 0x567074u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 3));
label_567078:
    // 0x567078: 0x26420cc8  addiu       $v0, $s2, 0xCC8
    ctx->pc = 0x567078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 3272));
label_56707c:
    // 0x56707c: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x56707cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_567080:
    // 0x567080: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x567080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_567084:
    // 0x567084: 0xc156828  jal         func_55A0A0
label_567088:
    if (ctx->pc == 0x567088u) {
        ctx->pc = 0x567088u;
            // 0x567088: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x56708Cu;
        goto label_56708c;
    }
    ctx->pc = 0x567084u;
    SET_GPR_U32(ctx, 31, 0x56708Cu);
    ctx->pc = 0x567088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567084u;
            // 0x567088: 0xae2000d0  sw          $zero, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x55A0A0u;
    if (runtime->hasFunction(0x55A0A0u)) {
        auto targetFn = runtime->lookupFunction(0x55A0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56708Cu; }
        if (ctx->pc != 0x56708Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0055A0A0_0x55a0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56708Cu; }
        if (ctx->pc != 0x56708Cu) { return; }
    }
    ctx->pc = 0x56708Cu;
label_56708c:
    // 0x56708c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x56708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_567090:
    // 0x567090: 0x1000000a  b           . + 4 + (0xA << 2)
label_567094:
    if (ctx->pc == 0x567094u) {
        ctx->pc = 0x567094u;
            // 0x567094: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->pc = 0x567098u;
        goto label_567098;
    }
    ctx->pc = 0x567090u;
    {
        const bool branch_taken_0x567090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x567094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567090u;
            // 0x567094: 0xae420cc4  sw          $v0, 0xCC4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567090) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x567098u;
label_567098:
    // 0x567098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x567098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_56709c:
    // 0x56709c: 0x14450007  bne         $v0, $a1, . + 4 + (0x7 << 2)
label_5670a0:
    if (ctx->pc == 0x5670A0u) {
        ctx->pc = 0x5670A4u;
        goto label_5670a4;
    }
    ctx->pc = 0x56709Cu;
    {
        const bool branch_taken_0x56709c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x56709c) {
            ctx->pc = 0x5670BCu;
            goto label_5670bc;
        }
    }
    ctx->pc = 0x5670A4u;
label_5670a4:
    // 0x5670a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5670a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5670a8:
    // 0x5670a8: 0x8f390074  lw          $t9, 0x74($t9)
    ctx->pc = 0x5670a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 116)));
label_5670ac:
    // 0x5670ac: 0x320f809  jalr        $t9
label_5670b0:
    if (ctx->pc == 0x5670B0u) {
        ctx->pc = 0x5670B4u;
        goto label_5670b4;
    }
    ctx->pc = 0x5670ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5670B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5670B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5670B4u; }
            if (ctx->pc != 0x5670B4u) { return; }
        }
        }
    }
    ctx->pc = 0x5670B4u;
label_5670b4:
    // 0x5670b4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x5670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5670b8:
    // 0x5670b8: 0xae420cc4  sw          $v0, 0xCC4($s2)
    ctx->pc = 0x5670b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 3268), GPR_U32(ctx, 2));
label_5670bc:
    // 0x5670bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5670bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5670c0:
    // 0x5670c0: 0xc0cb834  jal         func_32E0D0
label_5670c4:
    if (ctx->pc == 0x5670C4u) {
        ctx->pc = 0x5670C8u;
        goto label_5670c8;
    }
    ctx->pc = 0x5670C0u;
    SET_GPR_U32(ctx, 31, 0x5670C8u);
    ctx->pc = 0x32E0D0u;
    if (runtime->hasFunction(0x32E0D0u)) {
        auto targetFn = runtime->lookupFunction(0x32E0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5670C8u; }
        if (ctx->pc != 0x5670C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032E0D0_0x32e0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5670C8u; }
        if (ctx->pc != 0x5670C8u) { return; }
    }
    ctx->pc = 0x5670C8u;
label_5670c8:
    // 0x5670c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5670c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5670cc:
    // 0x5670cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x5670ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5670d0:
    // 0x5670d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5670d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5670d4:
    // 0x5670d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5670d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5670d8:
    // 0x5670d8: 0x3e00008  jr          $ra
label_5670dc:
    if (ctx->pc == 0x5670DCu) {
        ctx->pc = 0x5670DCu;
            // 0x5670dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x5670E0u;
        goto label_5670e0;
    }
    ctx->pc = 0x5670D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5670DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5670D8u;
            // 0x5670dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5670E0u;
label_5670e0:
    // 0x5670e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5670e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5670e4:
    // 0x5670e4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x5670e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5670e8:
    // 0x5670e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5670e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5670ec:
    // 0x5670ec: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5670ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5670f0:
    // 0x5670f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5670f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_5670f4:
    // 0x5670f4: 0xac830cbc  sw          $v1, 0xCBC($a0)
    ctx->pc = 0x5670f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3260), GPR_U32(ctx, 3));
label_5670f8:
    // 0x5670f8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x5670f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5670fc:
    // 0x5670fc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5670fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_567100:
    // 0x567100: 0xc0cc888  jal         func_332220
label_567104:
    if (ctx->pc == 0x567104u) {
        ctx->pc = 0x567104u;
            // 0x567104: 0xa0400080  sb          $zero, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x567108u;
        goto label_567108;
    }
    ctx->pc = 0x567100u;
    SET_GPR_U32(ctx, 31, 0x567108u);
    ctx->pc = 0x567104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567100u;
            // 0x567104: 0xa0400080  sb          $zero, 0x80($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 128), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x332220u;
    if (runtime->hasFunction(0x332220u)) {
        auto targetFn = runtime->lookupFunction(0x332220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567108u; }
        if (ctx->pc != 0x567108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00332220_0x332220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567108u; }
        if (ctx->pc != 0x567108u) { return; }
    }
    ctx->pc = 0x567108u;
label_567108:
    // 0x567108: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x567108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56710c:
    // 0x56710c: 0xae030cbc  sw          $v1, 0xCBC($s0)
    ctx->pc = 0x56710cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3260), GPR_U32(ctx, 3));
label_567110:
    // 0x567110: 0xae000cc4  sw          $zero, 0xCC4($s0)
    ctx->pc = 0x567110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3268), GPR_U32(ctx, 0));
label_567114:
    // 0x567114: 0x8e030cc0  lw          $v1, 0xCC0($s0)
    ctx->pc = 0x567114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3264)));
label_567118:
    // 0x567118: 0x8c660008  lw          $a2, 0x8($v1)
    ctx->pc = 0x567118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_56711c:
    // 0x56711c: 0x50c00024  beql        $a2, $zero, . + 4 + (0x24 << 2)
label_567120:
    if (ctx->pc == 0x567120u) {
        ctx->pc = 0x567120u;
            // 0x567120: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x567124u;
        goto label_567124;
    }
    ctx->pc = 0x56711Cu;
    {
        const bool branch_taken_0x56711c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x56711c) {
            ctx->pc = 0x567120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x56711Cu;
            // 0x567120: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5671B0u;
            goto label_5671b0;
        }
    }
    ctx->pc = 0x567124u;
label_567124:
    // 0x567124: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x567124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_567128:
    // 0x567128: 0x3c021062  lui         $v0, 0x1062
    ctx->pc = 0x567128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4194 << 16));
label_56712c:
    // 0x56712c: 0xc3001b  divu        $zero, $a2, $v1
    ctx->pc = 0x56712cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_567130:
    // 0x567130: 0x34444dd3  ori         $a0, $v0, 0x4DD3
    ctx->pc = 0x567130u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19923);
label_567134:
    // 0x567134: 0x3c028888  lui         $v0, 0x8888
    ctx->pc = 0x567134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34952 << 16));
label_567138:
    // 0x567138: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x567138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
label_56713c:
    // 0x56713c: 0x2810  mfhi        $a1
    ctx->pc = 0x56713cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_567140:
    // 0x567140: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x567140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_567144:
    // 0x567144: 0x860019  multu       $a0, $a2
    ctx->pc = 0x567144u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 4) * (uint64_t)GPR_U32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_567148:
    // 0x567148: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x567148u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_56714c:
    // 0x56714c: 0x0  nop
    ctx->pc = 0x56714cu;
    // NOP
label_567150:
    // 0x567150: 0x2010  mfhi        $a0
    ctx->pc = 0x567150u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_567154:
    // 0x567154: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x567154u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_567158:
    // 0x567158: 0x440019  multu       $v0, $a0
    ctx->pc = 0x567158u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_56715c:
    // 0x56715c: 0x1010  mfhi        $v0
    ctx->pc = 0x56715cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_567160:
    // 0x567160: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x567160u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_567164:
    // 0x567164: 0x21942  srl         $v1, $v0, 5
    ctx->pc = 0x567164u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
label_567168:
    // 0x567168: 0x0  nop
    ctx->pc = 0x567168u;
    // NOP
label_56716c:
    // 0x56716c: 0x1010  mfhi        $v0
    ctx->pc = 0x56716cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_567170:
    // 0x567170: 0x28610100  slti        $at, $v1, 0x100
    ctx->pc = 0x567170u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_567174:
    // 0x567174: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_567178:
    if (ctx->pc == 0x567178u) {
        ctx->pc = 0x567178u;
            // 0x567178: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x56717Cu;
        goto label_56717c;
    }
    ctx->pc = 0x567174u;
    {
        const bool branch_taken_0x567174 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x567178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567174u;
            // 0x567178: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x567174) {
            ctx->pc = 0x567188u;
            goto label_567188;
        }
    }
    ctx->pc = 0x56717Cu;
label_56717c:
    // 0x56717c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x56717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_567180:
    // 0x567180: 0x640503e7  daddiu      $a1, $zero, 0x3E7
    ctx->pc = 0x567180u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)999);
label_567184:
    // 0x567184: 0x6402003b  daddiu      $v0, $zero, 0x3B
    ctx->pc = 0x567184u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)59);
label_567188:
    // 0x567188: 0x30a8ffff  andi        $t0, $a1, 0xFFFF
    ctx->pc = 0x567188u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_56718c:
    // 0x56718c: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x56718cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_567190:
    // 0x567190: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x567190u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_567194:
    // 0x567194: 0x304700ff  andi        $a3, $v0, 0xFF
    ctx->pc = 0x567194u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_567198:
    // 0x567198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x567198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_56719c:
    // 0x56719c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x56719cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5671a0:
    // 0x5671a0: 0x120502d  daddu       $t2, $t1, $zero
    ctx->pc = 0x5671a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_5671a4:
    // 0x5671a4: 0xc0cc878  jal         func_3321E0
label_5671a8:
    if (ctx->pc == 0x5671A8u) {
        ctx->pc = 0x5671A8u;
            // 0x5671a8: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->pc = 0x5671ACu;
        goto label_5671ac;
    }
    ctx->pc = 0x5671A4u;
    SET_GPR_U32(ctx, 31, 0x5671ACu);
    ctx->pc = 0x5671A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5671A4u;
            // 0x5671a8: 0x240b0063  addiu       $t3, $zero, 0x63 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3321E0u;
    if (runtime->hasFunction(0x3321E0u)) {
        auto targetFn = runtime->lookupFunction(0x3321E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5671ACu; }
        if (ctx->pc != 0x5671ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003321E0_0x3321e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5671ACu; }
        if (ctx->pc != 0x5671ACu) { return; }
    }
    ctx->pc = 0x5671ACu;
label_5671ac:
    // 0x5671ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5671acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5671b0:
    // 0x5671b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5671b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5671b4:
    // 0x5671b4: 0x3e00008  jr          $ra
label_5671b8:
    if (ctx->pc == 0x5671B8u) {
        ctx->pc = 0x5671B8u;
            // 0x5671b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5671BCu;
        goto label_5671bc;
    }
    ctx->pc = 0x5671B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5671B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5671B4u;
            // 0x5671b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5671BCu;
label_5671bc:
    // 0x5671bc: 0x0  nop
    ctx->pc = 0x5671bcu;
    // NOP
label_5671c0:
    // 0x5671c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x5671c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_5671c4:
    // 0x5671c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x5671c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_5671c8:
    // 0x5671c8: 0x8c820cc4  lw          $v0, 0xCC4($a0)
    ctx->pc = 0x5671c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3268)));
label_5671cc:
    // 0x5671cc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x5671ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_5671d0:
    // 0x5671d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_5671d4:
    if (ctx->pc == 0x5671D4u) {
        ctx->pc = 0x5671D8u;
        goto label_5671d8;
    }
    ctx->pc = 0x5671D0u;
    {
        const bool branch_taken_0x5671d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x5671d0) {
            ctx->pc = 0x5671E0u;
            goto label_5671e0;
        }
    }
    ctx->pc = 0x5671D8u;
label_5671d8:
    // 0x5671d8: 0x10000003  b           . + 4 + (0x3 << 2)
label_5671dc:
    if (ctx->pc == 0x5671DCu) {
        ctx->pc = 0x5671DCu;
            // 0x5671dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5671E0u;
        goto label_5671e0;
    }
    ctx->pc = 0x5671D8u;
    {
        const bool branch_taken_0x5671d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5671DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5671D8u;
            // 0x5671dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5671d8) {
            ctx->pc = 0x5671E8u;
            goto label_5671e8;
        }
    }
    ctx->pc = 0x5671E0u;
label_5671e0:
    // 0x5671e0: 0xc0cc460  jal         func_331180
label_5671e4:
    if (ctx->pc == 0x5671E4u) {
        ctx->pc = 0x5671E8u;
        goto label_5671e8;
    }
    ctx->pc = 0x5671E0u;
    SET_GPR_U32(ctx, 31, 0x5671E8u);
    ctx->pc = 0x331180u;
    if (runtime->hasFunction(0x331180u)) {
        auto targetFn = runtime->lookupFunction(0x331180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5671E8u; }
        if (ctx->pc != 0x5671E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00331180_0x331180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5671E8u; }
        if (ctx->pc != 0x5671E8u) { return; }
    }
    ctx->pc = 0x5671E8u;
label_5671e8:
    // 0x5671e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x5671e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_5671ec:
    // 0x5671ec: 0x3e00008  jr          $ra
label_5671f0:
    if (ctx->pc == 0x5671F0u) {
        ctx->pc = 0x5671F0u;
            // 0x5671f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x5671F4u;
        goto label_5671f4;
    }
    ctx->pc = 0x5671ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5671F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5671ECu;
            // 0x5671f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5671F4u;
label_5671f4:
    // 0x5671f4: 0x0  nop
    ctx->pc = 0x5671f4u;
    // NOP
label_5671f8:
    // 0x5671f8: 0x0  nop
    ctx->pc = 0x5671f8u;
    // NOP
label_5671fc:
    // 0x5671fc: 0x0  nop
    ctx->pc = 0x5671fcu;
    // NOP
label_567200:
    // 0x567200: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x567200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_567204:
    // 0x567204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x567204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_567208:
    // 0x567208: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_56720c:
    // 0x56720c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x56720cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_567210:
    // 0x567210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x567210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_567214:
    // 0x567214: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_567218:
    if (ctx->pc == 0x567218u) {
        ctx->pc = 0x567218u;
            // 0x567218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56721Cu;
        goto label_56721c;
    }
    ctx->pc = 0x567214u;
    {
        const bool branch_taken_0x567214 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x567218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567214u;
            // 0x567218: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567214) {
            ctx->pc = 0x567258u;
            goto label_567258;
        }
    }
    ctx->pc = 0x56721Cu;
label_56721c:
    // 0x56721c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x56721cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_567220:
    // 0x567220: 0x24428060  addiu       $v0, $v0, -0x7FA0
    ctx->pc = 0x567220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934624));
label_567224:
    // 0x567224: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_567228:
    if (ctx->pc == 0x567228u) {
        ctx->pc = 0x567228u;
            // 0x567228: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x56722Cu;
        goto label_56722c;
    }
    ctx->pc = 0x567224u;
    {
        const bool branch_taken_0x567224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x567228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567224u;
            // 0x567228: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567224) {
            ctx->pc = 0x567240u;
            goto label_567240;
        }
    }
    ctx->pc = 0x56722Cu;
label_56722c:
    // 0x56722c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x56722cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_567230:
    // 0x567230: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x567230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567234:
    // 0x567234: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x567234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_567238:
    // 0x567238: 0xc057a68  jal         func_15E9A0
label_56723c:
    if (ctx->pc == 0x56723Cu) {
        ctx->pc = 0x56723Cu;
            // 0x56723c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x567240u;
        goto label_567240;
    }
    ctx->pc = 0x567238u;
    SET_GPR_U32(ctx, 31, 0x567240u);
    ctx->pc = 0x56723Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567238u;
            // 0x56723c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567240u; }
        if (ctx->pc != 0x567240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567240u; }
        if (ctx->pc != 0x567240u) { return; }
    }
    ctx->pc = 0x567240u;
label_567240:
    // 0x567240: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x567240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_567244:
    // 0x567244: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x567244u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_567248:
    // 0x567248: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_56724c:
    if (ctx->pc == 0x56724Cu) {
        ctx->pc = 0x56724Cu;
            // 0x56724c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567250u;
        goto label_567250;
    }
    ctx->pc = 0x567248u;
    {
        const bool branch_taken_0x567248 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x567248) {
            ctx->pc = 0x56724Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x567248u;
            // 0x56724c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x56725Cu;
            goto label_56725c;
        }
    }
    ctx->pc = 0x567250u;
label_567250:
    // 0x567250: 0xc0400a8  jal         func_1002A0
label_567254:
    if (ctx->pc == 0x567254u) {
        ctx->pc = 0x567254u;
            // 0x567254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567258u;
        goto label_567258;
    }
    ctx->pc = 0x567250u;
    SET_GPR_U32(ctx, 31, 0x567258u);
    ctx->pc = 0x567254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567250u;
            // 0x567254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567258u; }
        if (ctx->pc != 0x567258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567258u; }
        if (ctx->pc != 0x567258u) { return; }
    }
    ctx->pc = 0x567258u;
label_567258:
    // 0x567258: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x567258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_56725c:
    // 0x56725c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x56725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_567260:
    // 0x567260: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x567260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567264:
    // 0x567264: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567264u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_567268:
    // 0x567268: 0x3e00008  jr          $ra
label_56726c:
    if (ctx->pc == 0x56726Cu) {
        ctx->pc = 0x56726Cu;
            // 0x56726c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x567270u;
        goto label_567270;
    }
    ctx->pc = 0x567268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x56726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567268u;
            // 0x56726c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x567270u;
label_567270:
    // 0x567270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x567270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_567274:
    // 0x567274: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x567274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_567278:
    // 0x567278: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x567278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_56727c:
    // 0x56727c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x56727cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_567280:
    // 0x567280: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x567280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_567284:
    // 0x567284: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x567284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_567288:
    // 0x567288: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x567288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_56728c:
    // 0x56728c: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x56728cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_567290:
    // 0x567290: 0x10a30053  beq         $a1, $v1, . + 4 + (0x53 << 2)
label_567294:
    if (ctx->pc == 0x567294u) {
        ctx->pc = 0x567294u;
            // 0x567294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567298u;
        goto label_567298;
    }
    ctx->pc = 0x567290u;
    {
        const bool branch_taken_0x567290 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x567294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567290u;
            // 0x567294: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x567290) {
            ctx->pc = 0x5673E0u;
            goto label_5673e0;
        }
    }
    ctx->pc = 0x567298u;
label_567298:
    // 0x567298: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x567298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_56729c:
    // 0x56729c: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5672a0:
    if (ctx->pc == 0x5672A0u) {
        ctx->pc = 0x5672A4u;
        goto label_5672a4;
    }
    ctx->pc = 0x56729Cu;
    {
        const bool branch_taken_0x56729c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x56729c) {
            ctx->pc = 0x5672ACu;
            goto label_5672ac;
        }
    }
    ctx->pc = 0x5672A4u;
label_5672a4:
    // 0x5672a4: 0x10000057  b           . + 4 + (0x57 << 2)
label_5672a8:
    if (ctx->pc == 0x5672A8u) {
        ctx->pc = 0x5672A8u;
            // 0x5672a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x5672ACu;
        goto label_5672ac;
    }
    ctx->pc = 0x5672A4u;
    {
        const bool branch_taken_0x5672a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5672A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5672A4u;
            // 0x5672a8: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5672a4) {
            ctx->pc = 0x567404u;
            goto label_567404;
        }
    }
    ctx->pc = 0x5672ACu;
label_5672ac:
    // 0x5672ac: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5672acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5672b0:
    // 0x5672b0: 0x8c44e3e8  lw          $a0, -0x1C18($v0)
    ctx->pc = 0x5672b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_5672b4:
    // 0x5672b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x5672b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_5672b8:
    // 0x5672b8: 0x8f390040  lw          $t9, 0x40($t9)
    ctx->pc = 0x5672b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 64)));
label_5672bc:
    // 0x5672bc: 0x320f809  jalr        $t9
label_5672c0:
    if (ctx->pc == 0x5672C0u) {
        ctx->pc = 0x5672C4u;
        goto label_5672c4;
    }
    ctx->pc = 0x5672BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5672C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x5672C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5672C4u; }
            if (ctx->pc != 0x5672C4u) { return; }
        }
        }
    }
    ctx->pc = 0x5672C4u;
label_5672c4:
    // 0x5672c4: 0xc077318  jal         func_1DCC60
label_5672c8:
    if (ctx->pc == 0x5672C8u) {
        ctx->pc = 0x5672CCu;
        goto label_5672cc;
    }
    ctx->pc = 0x5672C4u;
    SET_GPR_U32(ctx, 31, 0x5672CCu);
    ctx->pc = 0x1DCC60u;
    if (runtime->hasFunction(0x1DCC60u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672CCu; }
        if (ctx->pc != 0x5672CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC60_0x1dcc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672CCu; }
        if (ctx->pc != 0x5672CCu) { return; }
    }
    ctx->pc = 0x5672CCu;
label_5672cc:
    // 0x5672cc: 0xc0d105c  jal         func_344170
label_5672d0:
    if (ctx->pc == 0x5672D0u) {
        ctx->pc = 0x5672D4u;
        goto label_5672d4;
    }
    ctx->pc = 0x5672CCu;
    SET_GPR_U32(ctx, 31, 0x5672D4u);
    ctx->pc = 0x344170u;
    if (runtime->hasFunction(0x344170u)) {
        auto targetFn = runtime->lookupFunction(0x344170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672D4u; }
        if (ctx->pc != 0x5672D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00344170_0x344170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672D4u; }
        if (ctx->pc != 0x5672D4u) { return; }
    }
    ctx->pc = 0x5672D4u;
label_5672d4:
    // 0x5672d4: 0xc0f1110  jal         func_3C4440
label_5672d8:
    if (ctx->pc == 0x5672D8u) {
        ctx->pc = 0x5672D8u;
            // 0x5672d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5672DCu;
        goto label_5672dc;
    }
    ctx->pc = 0x5672D4u;
    SET_GPR_U32(ctx, 31, 0x5672DCu);
    ctx->pc = 0x5672D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5672D4u;
            // 0x5672d8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4440u;
    if (runtime->hasFunction(0x3C4440u)) {
        auto targetFn = runtime->lookupFunction(0x3C4440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672DCu; }
        if (ctx->pc != 0x5672DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4440_0x3c4440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672DCu; }
        if (ctx->pc != 0x5672DCu) { return; }
    }
    ctx->pc = 0x5672DCu;
label_5672dc:
    // 0x5672dc: 0xc0b369c  jal         func_2CDA70
label_5672e0:
    if (ctx->pc == 0x5672E0u) {
        ctx->pc = 0x5672E0u;
            // 0x5672e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5672E4u;
        goto label_5672e4;
    }
    ctx->pc = 0x5672DCu;
    SET_GPR_U32(ctx, 31, 0x5672E4u);
    ctx->pc = 0x5672E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5672DCu;
            // 0x5672e0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDA70u;
    if (runtime->hasFunction(0x2CDA70u)) {
        auto targetFn = runtime->lookupFunction(0x2CDA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672E4u; }
        if (ctx->pc != 0x5672E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDA70_0x2cda70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672E4u; }
        if (ctx->pc != 0x5672E4u) { return; }
    }
    ctx->pc = 0x5672E4u;
label_5672e4:
    // 0x5672e4: 0xc159d10  jal         func_567440
label_5672e8:
    if (ctx->pc == 0x5672E8u) {
        ctx->pc = 0x5672E8u;
            // 0x5672e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5672ECu;
        goto label_5672ec;
    }
    ctx->pc = 0x5672E4u;
    SET_GPR_U32(ctx, 31, 0x5672ECu);
    ctx->pc = 0x5672E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5672E4u;
            // 0x5672e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567440u;
    if (runtime->hasFunction(0x567440u)) {
        auto targetFn = runtime->lookupFunction(0x567440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672ECu; }
        if (ctx->pc != 0x5672ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567440_0x567440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672ECu; }
        if (ctx->pc != 0x5672ECu) { return; }
    }
    ctx->pc = 0x5672ECu;
label_5672ec:
    // 0x5672ec: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x5672ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_5672f0:
    // 0x5672f0: 0xc0d2fe0  jal         func_34BF80
label_5672f4:
    if (ctx->pc == 0x5672F4u) {
        ctx->pc = 0x5672F4u;
            // 0x5672f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5672F8u;
        goto label_5672f8;
    }
    ctx->pc = 0x5672F0u;
    SET_GPR_U32(ctx, 31, 0x5672F8u);
    ctx->pc = 0x5672F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5672F0u;
            // 0x5672f4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x34BF80u;
    if (runtime->hasFunction(0x34BF80u)) {
        auto targetFn = runtime->lookupFunction(0x34BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672F8u; }
        if (ctx->pc != 0x5672F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0034BF80_0x34bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5672F8u; }
        if (ctx->pc != 0x5672F8u) { return; }
    }
    ctx->pc = 0x5672F8u;
label_5672f8:
    // 0x5672f8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x5672f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_5672fc:
    // 0x5672fc: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x5672fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_567300:
    // 0x567300: 0xc0f110c  jal         func_3C4430
label_567304:
    if (ctx->pc == 0x567304u) {
        ctx->pc = 0x567304u;
            // 0x567304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567308u;
        goto label_567308;
    }
    ctx->pc = 0x567300u;
    SET_GPR_U32(ctx, 31, 0x567308u);
    ctx->pc = 0x567304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567300u;
            // 0x567304: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567308u; }
        if (ctx->pc != 0x567308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567308u; }
        if (ctx->pc != 0x567308u) { return; }
    }
    ctx->pc = 0x567308u;
label_567308:
    // 0x567308: 0xc159d0c  jal         func_567430
label_56730c:
    if (ctx->pc == 0x56730Cu) {
        ctx->pc = 0x56730Cu;
            // 0x56730c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567310u;
        goto label_567310;
    }
    ctx->pc = 0x567308u;
    SET_GPR_U32(ctx, 31, 0x567310u);
    ctx->pc = 0x56730Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567308u;
            // 0x56730c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567430u;
    if (runtime->hasFunction(0x567430u)) {
        auto targetFn = runtime->lookupFunction(0x567430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567310u; }
        if (ctx->pc != 0x567310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567430_0x567430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567310u; }
        if (ctx->pc != 0x567310u) { return; }
    }
    ctx->pc = 0x567310u;
label_567310:
    // 0x567310: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x567310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_567314:
    // 0x567314: 0xc0506ac  jal         func_141AB0
label_567318:
    if (ctx->pc == 0x567318u) {
        ctx->pc = 0x567318u;
            // 0x567318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56731Cu;
        goto label_56731c;
    }
    ctx->pc = 0x567314u;
    SET_GPR_U32(ctx, 31, 0x56731Cu);
    ctx->pc = 0x567318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567314u;
            // 0x567318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56731Cu; }
        if (ctx->pc != 0x56731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56731Cu; }
        if (ctx->pc != 0x56731Cu) { return; }
    }
    ctx->pc = 0x56731Cu;
label_56731c:
    // 0x56731c: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x56731cu;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_567320:
    // 0x567320: 0x3c034420  lui         $v1, 0x4420
    ctx->pc = 0x567320u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17440 << 16));
label_567324:
    // 0x567324: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x567324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_567328:
    // 0x567328: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x567328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_56732c:
    // 0x56732c: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x56732cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_567330:
    // 0x567330: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x567330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_567334:
    // 0x567334: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x567334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_567338:
    // 0x567338: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x567338u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_56733c:
    // 0x56733c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x56733cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_567340:
    // 0x567340: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x567340u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_567344:
    // 0x567344: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x567344u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_567348:
    // 0x567348: 0x44828000  mtc1        $v0, $f16
    ctx->pc = 0x567348u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_56734c:
    // 0x56734c: 0xc0f10b4  jal         func_3C42D0
label_567350:
    if (ctx->pc == 0x567350u) {
        ctx->pc = 0x567350u;
            // 0x567350: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x567354u;
        goto label_567354;
    }
    ctx->pc = 0x56734Cu;
    SET_GPR_U32(ctx, 31, 0x567354u);
    ctx->pc = 0x567350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56734Cu;
            // 0x567350: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C42D0u;
    if (runtime->hasFunction(0x3C42D0u)) {
        auto targetFn = runtime->lookupFunction(0x3C42D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567354u; }
        if (ctx->pc != 0x567354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C42D0_0x3c42d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567354u; }
        if (ctx->pc != 0x567354u) { return; }
    }
    ctx->pc = 0x567354u;
label_567354:
    // 0x567354: 0x26440004  addiu       $a0, $s2, 0x4
    ctx->pc = 0x567354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_567358:
    // 0x567358: 0xc0f110c  jal         func_3C4430
label_56735c:
    if (ctx->pc == 0x56735Cu) {
        ctx->pc = 0x56735Cu;
            // 0x56735c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x567360u;
        goto label_567360;
    }
    ctx->pc = 0x567358u;
    SET_GPR_U32(ctx, 31, 0x567360u);
    ctx->pc = 0x56735Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567358u;
            // 0x56735c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4430u;
    if (runtime->hasFunction(0x3C4430u)) {
        auto targetFn = runtime->lookupFunction(0x3C4430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567360u; }
        if (ctx->pc != 0x567360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4430_0x3c4430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567360u; }
        if (ctx->pc != 0x567360u) { return; }
    }
    ctx->pc = 0x567360u;
label_567360:
    // 0x567360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x567360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_567364:
    // 0x567364: 0x2405007c  addiu       $a1, $zero, 0x7C
    ctx->pc = 0x567364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_567368:
    // 0x567368: 0xc159d14  jal         func_567450
label_56736c:
    if (ctx->pc == 0x56736Cu) {
        ctx->pc = 0x56736Cu;
            // 0x56736c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567370u;
        goto label_567370;
    }
    ctx->pc = 0x567368u;
    SET_GPR_U32(ctx, 31, 0x567370u);
    ctx->pc = 0x56736Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567368u;
            // 0x56736c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567450u;
    if (runtime->hasFunction(0x567450u)) {
        auto targetFn = runtime->lookupFunction(0x567450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567370u; }
        if (ctx->pc != 0x567370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567450_0x567450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567370u; }
        if (ctx->pc != 0x567370u) { return; }
    }
    ctx->pc = 0x567370u;
label_567370:
    // 0x567370: 0xc0c8f7c  jal         func_323DF0
label_567374:
    if (ctx->pc == 0x567374u) {
        ctx->pc = 0x567378u;
        goto label_567378;
    }
    ctx->pc = 0x567370u;
    SET_GPR_U32(ctx, 31, 0x567378u);
    ctx->pc = 0x323DF0u;
    if (runtime->hasFunction(0x323DF0u)) {
        auto targetFn = runtime->lookupFunction(0x323DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567378u; }
        if (ctx->pc != 0x567378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00323DF0_0x323df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567378u; }
        if (ctx->pc != 0x567378u) { return; }
    }
    ctx->pc = 0x567378u;
label_567378:
    // 0x567378: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x567378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_56737c:
    // 0x56737c: 0xc159d08  jal         func_567420
label_567380:
    if (ctx->pc == 0x567380u) {
        ctx->pc = 0x567380u;
            // 0x567380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x567384u;
        goto label_567384;
    }
    ctx->pc = 0x56737Cu;
    SET_GPR_U32(ctx, 31, 0x567384u);
    ctx->pc = 0x567380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x56737Cu;
            // 0x567380: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567420u;
    if (runtime->hasFunction(0x567420u)) {
        auto targetFn = runtime->lookupFunction(0x567420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567384u; }
        if (ctx->pc != 0x567384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567420_0x567420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567384u; }
        if (ctx->pc != 0x567384u) { return; }
    }
    ctx->pc = 0x567384u;
label_567384:
    // 0x567384: 0xc0f1118  jal         func_3C4460
label_567388:
    if (ctx->pc == 0x567388u) {
        ctx->pc = 0x567388u;
            // 0x567388: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x56738Cu;
        goto label_56738c;
    }
    ctx->pc = 0x567384u;
    SET_GPR_U32(ctx, 31, 0x56738Cu);
    ctx->pc = 0x567388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x567384u;
            // 0x567388: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4460u;
    if (runtime->hasFunction(0x3C4460u)) {
        auto targetFn = runtime->lookupFunction(0x3C4460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56738Cu; }
        if (ctx->pc != 0x56738Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4460_0x3c4460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x56738Cu; }
        if (ctx->pc != 0x56738Cu) { return; }
    }
    ctx->pc = 0x56738Cu;
label_56738c:
    // 0x56738c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x56738cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_567390:
    // 0x567390: 0x3c02438c  lui         $v0, 0x438C
    ctx->pc = 0x567390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17292 << 16));
label_567394:
    // 0x567394: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x567394u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_567398:
    // 0x567398: 0xc0f10e8  jal         func_3C43A0
label_56739c:
    if (ctx->pc == 0x56739Cu) {
        ctx->pc = 0x5673A0u;
        goto label_5673a0;
    }
    ctx->pc = 0x567398u;
    SET_GPR_U32(ctx, 31, 0x5673A0u);
    ctx->pc = 0x3C43A0u;
    if (runtime->hasFunction(0x3C43A0u)) {
        auto targetFn = runtime->lookupFunction(0x3C43A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5673A0u; }
        if (ctx->pc != 0x5673A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C43A0_0x3c43a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5673A0u; }
        if (ctx->pc != 0x5673A0u) { return; }
    }
    ctx->pc = 0x5673A0u;
label_5673a0:
    // 0x5673a0: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x5673a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_5673a4:
    // 0x5673a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x5673a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5673a8:
    // 0x5673a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5673a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5673ac:
    // 0x5673ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x5673acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5673b0:
    // 0x5673b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5673b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5673b4:
    // 0x5673b4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x5673b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5673b8:
    // 0x5673b8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x5673b8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_5673bc:
    // 0x5673bc: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x5673bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5673c0:
    // 0x5673c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x5673c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5673c4:
    // 0x5673c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x5673c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5673c8:
    // 0x5673c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x5673c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5673cc:
    // 0x5673cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x5673ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5673d0:
    // 0x5673d0: 0xc0f1094  jal         func_3C4250
label_5673d4:
    if (ctx->pc == 0x5673D4u) {
        ctx->pc = 0x5673D4u;
            // 0x5673d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5673D8u;
        goto label_5673d8;
    }
    ctx->pc = 0x5673D0u;
    SET_GPR_U32(ctx, 31, 0x5673D8u);
    ctx->pc = 0x5673D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5673D0u;
            // 0x5673d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3C4250u;
    if (runtime->hasFunction(0x3C4250u)) {
        auto targetFn = runtime->lookupFunction(0x3C4250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5673D8u; }
        if (ctx->pc != 0x5673D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003C4250_0x3c4250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5673D8u; }
        if (ctx->pc != 0x5673D8u) { return; }
    }
    ctx->pc = 0x5673D8u;
label_5673d8:
    // 0x5673d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_5673dc:
    if (ctx->pc == 0x5673DCu) {
        ctx->pc = 0x5673E0u;
        goto label_5673e0;
    }
    ctx->pc = 0x5673D8u;
    {
        const bool branch_taken_0x5673d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5673d8) {
            ctx->pc = 0x567400u;
            goto label_567400;
        }
    }
    ctx->pc = 0x5673E0u;
label_5673e0:
    // 0x5673e0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x5673e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_5673e4:
    // 0x5673e4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x5673e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_5673e8:
    // 0x5673e8: 0x9063007d  lbu         $v1, 0x7D($v1)
    ctx->pc = 0x5673e8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 125)));
label_5673ec:
    // 0x5673ec: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_5673f0:
    if (ctx->pc == 0x5673F0u) {
        ctx->pc = 0x5673F4u;
        goto label_5673f4;
    }
    ctx->pc = 0x5673ECu;
    {
        const bool branch_taken_0x5673ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5673ec) {
            ctx->pc = 0x567400u;
            goto label_567400;
        }
    }
    ctx->pc = 0x5673F4u;
label_5673f4:
    // 0x5673f4: 0x24050136  addiu       $a1, $zero, 0x136
    ctx->pc = 0x5673f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 310));
label_5673f8:
    // 0x5673f8: 0xc159d14  jal         func_567450
label_5673fc:
    if (ctx->pc == 0x5673FCu) {
        ctx->pc = 0x5673FCu;
            // 0x5673fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x567400u;
        goto label_567400;
    }
    ctx->pc = 0x5673F8u;
    SET_GPR_U32(ctx, 31, 0x567400u);
    ctx->pc = 0x5673FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5673F8u;
            // 0x5673fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x567450u;
    if (runtime->hasFunction(0x567450u)) {
        auto targetFn = runtime->lookupFunction(0x567450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567400u; }
        if (ctx->pc != 0x567400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00567450_0x567450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x567400u; }
        if (ctx->pc != 0x567400u) { return; }
    }
    ctx->pc = 0x567400u;
label_567400:
    // 0x567400: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x567400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_567404:
    // 0x567404: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x567404u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_567408:
    // 0x567408: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x567408u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_56740c:
    // 0x56740c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x56740cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_567410:
    // 0x567410: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x567410u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_567414:
    // 0x567414: 0x3e00008  jr          $ra
label_567418:
    if (ctx->pc == 0x567418u) {
        ctx->pc = 0x567418u;
            // 0x567418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x56741Cu;
        goto label_56741c;
    }
    ctx->pc = 0x567414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x567418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x567414u;
            // 0x567418: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x56741Cu;
label_56741c:
    // 0x56741c: 0x0  nop
    ctx->pc = 0x56741cu;
    // NOP
}
