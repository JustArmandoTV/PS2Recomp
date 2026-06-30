#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00532970
// Address: 0x532970 - 0x5331f0
void sub_00532970_0x532970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00532970_0x532970");
#endif

    switch (ctx->pc) {
        case 0x532970u: goto label_532970;
        case 0x532974u: goto label_532974;
        case 0x532978u: goto label_532978;
        case 0x53297cu: goto label_53297c;
        case 0x532980u: goto label_532980;
        case 0x532984u: goto label_532984;
        case 0x532988u: goto label_532988;
        case 0x53298cu: goto label_53298c;
        case 0x532990u: goto label_532990;
        case 0x532994u: goto label_532994;
        case 0x532998u: goto label_532998;
        case 0x53299cu: goto label_53299c;
        case 0x5329a0u: goto label_5329a0;
        case 0x5329a4u: goto label_5329a4;
        case 0x5329a8u: goto label_5329a8;
        case 0x5329acu: goto label_5329ac;
        case 0x5329b0u: goto label_5329b0;
        case 0x5329b4u: goto label_5329b4;
        case 0x5329b8u: goto label_5329b8;
        case 0x5329bcu: goto label_5329bc;
        case 0x5329c0u: goto label_5329c0;
        case 0x5329c4u: goto label_5329c4;
        case 0x5329c8u: goto label_5329c8;
        case 0x5329ccu: goto label_5329cc;
        case 0x5329d0u: goto label_5329d0;
        case 0x5329d4u: goto label_5329d4;
        case 0x5329d8u: goto label_5329d8;
        case 0x5329dcu: goto label_5329dc;
        case 0x5329e0u: goto label_5329e0;
        case 0x5329e4u: goto label_5329e4;
        case 0x5329e8u: goto label_5329e8;
        case 0x5329ecu: goto label_5329ec;
        case 0x5329f0u: goto label_5329f0;
        case 0x5329f4u: goto label_5329f4;
        case 0x5329f8u: goto label_5329f8;
        case 0x5329fcu: goto label_5329fc;
        case 0x532a00u: goto label_532a00;
        case 0x532a04u: goto label_532a04;
        case 0x532a08u: goto label_532a08;
        case 0x532a0cu: goto label_532a0c;
        case 0x532a10u: goto label_532a10;
        case 0x532a14u: goto label_532a14;
        case 0x532a18u: goto label_532a18;
        case 0x532a1cu: goto label_532a1c;
        case 0x532a20u: goto label_532a20;
        case 0x532a24u: goto label_532a24;
        case 0x532a28u: goto label_532a28;
        case 0x532a2cu: goto label_532a2c;
        case 0x532a30u: goto label_532a30;
        case 0x532a34u: goto label_532a34;
        case 0x532a38u: goto label_532a38;
        case 0x532a3cu: goto label_532a3c;
        case 0x532a40u: goto label_532a40;
        case 0x532a44u: goto label_532a44;
        case 0x532a48u: goto label_532a48;
        case 0x532a4cu: goto label_532a4c;
        case 0x532a50u: goto label_532a50;
        case 0x532a54u: goto label_532a54;
        case 0x532a58u: goto label_532a58;
        case 0x532a5cu: goto label_532a5c;
        case 0x532a60u: goto label_532a60;
        case 0x532a64u: goto label_532a64;
        case 0x532a68u: goto label_532a68;
        case 0x532a6cu: goto label_532a6c;
        case 0x532a70u: goto label_532a70;
        case 0x532a74u: goto label_532a74;
        case 0x532a78u: goto label_532a78;
        case 0x532a7cu: goto label_532a7c;
        case 0x532a80u: goto label_532a80;
        case 0x532a84u: goto label_532a84;
        case 0x532a88u: goto label_532a88;
        case 0x532a8cu: goto label_532a8c;
        case 0x532a90u: goto label_532a90;
        case 0x532a94u: goto label_532a94;
        case 0x532a98u: goto label_532a98;
        case 0x532a9cu: goto label_532a9c;
        case 0x532aa0u: goto label_532aa0;
        case 0x532aa4u: goto label_532aa4;
        case 0x532aa8u: goto label_532aa8;
        case 0x532aacu: goto label_532aac;
        case 0x532ab0u: goto label_532ab0;
        case 0x532ab4u: goto label_532ab4;
        case 0x532ab8u: goto label_532ab8;
        case 0x532abcu: goto label_532abc;
        case 0x532ac0u: goto label_532ac0;
        case 0x532ac4u: goto label_532ac4;
        case 0x532ac8u: goto label_532ac8;
        case 0x532accu: goto label_532acc;
        case 0x532ad0u: goto label_532ad0;
        case 0x532ad4u: goto label_532ad4;
        case 0x532ad8u: goto label_532ad8;
        case 0x532adcu: goto label_532adc;
        case 0x532ae0u: goto label_532ae0;
        case 0x532ae4u: goto label_532ae4;
        case 0x532ae8u: goto label_532ae8;
        case 0x532aecu: goto label_532aec;
        case 0x532af0u: goto label_532af0;
        case 0x532af4u: goto label_532af4;
        case 0x532af8u: goto label_532af8;
        case 0x532afcu: goto label_532afc;
        case 0x532b00u: goto label_532b00;
        case 0x532b04u: goto label_532b04;
        case 0x532b08u: goto label_532b08;
        case 0x532b0cu: goto label_532b0c;
        case 0x532b10u: goto label_532b10;
        case 0x532b14u: goto label_532b14;
        case 0x532b18u: goto label_532b18;
        case 0x532b1cu: goto label_532b1c;
        case 0x532b20u: goto label_532b20;
        case 0x532b24u: goto label_532b24;
        case 0x532b28u: goto label_532b28;
        case 0x532b2cu: goto label_532b2c;
        case 0x532b30u: goto label_532b30;
        case 0x532b34u: goto label_532b34;
        case 0x532b38u: goto label_532b38;
        case 0x532b3cu: goto label_532b3c;
        case 0x532b40u: goto label_532b40;
        case 0x532b44u: goto label_532b44;
        case 0x532b48u: goto label_532b48;
        case 0x532b4cu: goto label_532b4c;
        case 0x532b50u: goto label_532b50;
        case 0x532b54u: goto label_532b54;
        case 0x532b58u: goto label_532b58;
        case 0x532b5cu: goto label_532b5c;
        case 0x532b60u: goto label_532b60;
        case 0x532b64u: goto label_532b64;
        case 0x532b68u: goto label_532b68;
        case 0x532b6cu: goto label_532b6c;
        case 0x532b70u: goto label_532b70;
        case 0x532b74u: goto label_532b74;
        case 0x532b78u: goto label_532b78;
        case 0x532b7cu: goto label_532b7c;
        case 0x532b80u: goto label_532b80;
        case 0x532b84u: goto label_532b84;
        case 0x532b88u: goto label_532b88;
        case 0x532b8cu: goto label_532b8c;
        case 0x532b90u: goto label_532b90;
        case 0x532b94u: goto label_532b94;
        case 0x532b98u: goto label_532b98;
        case 0x532b9cu: goto label_532b9c;
        case 0x532ba0u: goto label_532ba0;
        case 0x532ba4u: goto label_532ba4;
        case 0x532ba8u: goto label_532ba8;
        case 0x532bacu: goto label_532bac;
        case 0x532bb0u: goto label_532bb0;
        case 0x532bb4u: goto label_532bb4;
        case 0x532bb8u: goto label_532bb8;
        case 0x532bbcu: goto label_532bbc;
        case 0x532bc0u: goto label_532bc0;
        case 0x532bc4u: goto label_532bc4;
        case 0x532bc8u: goto label_532bc8;
        case 0x532bccu: goto label_532bcc;
        case 0x532bd0u: goto label_532bd0;
        case 0x532bd4u: goto label_532bd4;
        case 0x532bd8u: goto label_532bd8;
        case 0x532bdcu: goto label_532bdc;
        case 0x532be0u: goto label_532be0;
        case 0x532be4u: goto label_532be4;
        case 0x532be8u: goto label_532be8;
        case 0x532becu: goto label_532bec;
        case 0x532bf0u: goto label_532bf0;
        case 0x532bf4u: goto label_532bf4;
        case 0x532bf8u: goto label_532bf8;
        case 0x532bfcu: goto label_532bfc;
        case 0x532c00u: goto label_532c00;
        case 0x532c04u: goto label_532c04;
        case 0x532c08u: goto label_532c08;
        case 0x532c0cu: goto label_532c0c;
        case 0x532c10u: goto label_532c10;
        case 0x532c14u: goto label_532c14;
        case 0x532c18u: goto label_532c18;
        case 0x532c1cu: goto label_532c1c;
        case 0x532c20u: goto label_532c20;
        case 0x532c24u: goto label_532c24;
        case 0x532c28u: goto label_532c28;
        case 0x532c2cu: goto label_532c2c;
        case 0x532c30u: goto label_532c30;
        case 0x532c34u: goto label_532c34;
        case 0x532c38u: goto label_532c38;
        case 0x532c3cu: goto label_532c3c;
        case 0x532c40u: goto label_532c40;
        case 0x532c44u: goto label_532c44;
        case 0x532c48u: goto label_532c48;
        case 0x532c4cu: goto label_532c4c;
        case 0x532c50u: goto label_532c50;
        case 0x532c54u: goto label_532c54;
        case 0x532c58u: goto label_532c58;
        case 0x532c5cu: goto label_532c5c;
        case 0x532c60u: goto label_532c60;
        case 0x532c64u: goto label_532c64;
        case 0x532c68u: goto label_532c68;
        case 0x532c6cu: goto label_532c6c;
        case 0x532c70u: goto label_532c70;
        case 0x532c74u: goto label_532c74;
        case 0x532c78u: goto label_532c78;
        case 0x532c7cu: goto label_532c7c;
        case 0x532c80u: goto label_532c80;
        case 0x532c84u: goto label_532c84;
        case 0x532c88u: goto label_532c88;
        case 0x532c8cu: goto label_532c8c;
        case 0x532c90u: goto label_532c90;
        case 0x532c94u: goto label_532c94;
        case 0x532c98u: goto label_532c98;
        case 0x532c9cu: goto label_532c9c;
        case 0x532ca0u: goto label_532ca0;
        case 0x532ca4u: goto label_532ca4;
        case 0x532ca8u: goto label_532ca8;
        case 0x532cacu: goto label_532cac;
        case 0x532cb0u: goto label_532cb0;
        case 0x532cb4u: goto label_532cb4;
        case 0x532cb8u: goto label_532cb8;
        case 0x532cbcu: goto label_532cbc;
        case 0x532cc0u: goto label_532cc0;
        case 0x532cc4u: goto label_532cc4;
        case 0x532cc8u: goto label_532cc8;
        case 0x532cccu: goto label_532ccc;
        case 0x532cd0u: goto label_532cd0;
        case 0x532cd4u: goto label_532cd4;
        case 0x532cd8u: goto label_532cd8;
        case 0x532cdcu: goto label_532cdc;
        case 0x532ce0u: goto label_532ce0;
        case 0x532ce4u: goto label_532ce4;
        case 0x532ce8u: goto label_532ce8;
        case 0x532cecu: goto label_532cec;
        case 0x532cf0u: goto label_532cf0;
        case 0x532cf4u: goto label_532cf4;
        case 0x532cf8u: goto label_532cf8;
        case 0x532cfcu: goto label_532cfc;
        case 0x532d00u: goto label_532d00;
        case 0x532d04u: goto label_532d04;
        case 0x532d08u: goto label_532d08;
        case 0x532d0cu: goto label_532d0c;
        case 0x532d10u: goto label_532d10;
        case 0x532d14u: goto label_532d14;
        case 0x532d18u: goto label_532d18;
        case 0x532d1cu: goto label_532d1c;
        case 0x532d20u: goto label_532d20;
        case 0x532d24u: goto label_532d24;
        case 0x532d28u: goto label_532d28;
        case 0x532d2cu: goto label_532d2c;
        case 0x532d30u: goto label_532d30;
        case 0x532d34u: goto label_532d34;
        case 0x532d38u: goto label_532d38;
        case 0x532d3cu: goto label_532d3c;
        case 0x532d40u: goto label_532d40;
        case 0x532d44u: goto label_532d44;
        case 0x532d48u: goto label_532d48;
        case 0x532d4cu: goto label_532d4c;
        case 0x532d50u: goto label_532d50;
        case 0x532d54u: goto label_532d54;
        case 0x532d58u: goto label_532d58;
        case 0x532d5cu: goto label_532d5c;
        case 0x532d60u: goto label_532d60;
        case 0x532d64u: goto label_532d64;
        case 0x532d68u: goto label_532d68;
        case 0x532d6cu: goto label_532d6c;
        case 0x532d70u: goto label_532d70;
        case 0x532d74u: goto label_532d74;
        case 0x532d78u: goto label_532d78;
        case 0x532d7cu: goto label_532d7c;
        case 0x532d80u: goto label_532d80;
        case 0x532d84u: goto label_532d84;
        case 0x532d88u: goto label_532d88;
        case 0x532d8cu: goto label_532d8c;
        case 0x532d90u: goto label_532d90;
        case 0x532d94u: goto label_532d94;
        case 0x532d98u: goto label_532d98;
        case 0x532d9cu: goto label_532d9c;
        case 0x532da0u: goto label_532da0;
        case 0x532da4u: goto label_532da4;
        case 0x532da8u: goto label_532da8;
        case 0x532dacu: goto label_532dac;
        case 0x532db0u: goto label_532db0;
        case 0x532db4u: goto label_532db4;
        case 0x532db8u: goto label_532db8;
        case 0x532dbcu: goto label_532dbc;
        case 0x532dc0u: goto label_532dc0;
        case 0x532dc4u: goto label_532dc4;
        case 0x532dc8u: goto label_532dc8;
        case 0x532dccu: goto label_532dcc;
        case 0x532dd0u: goto label_532dd0;
        case 0x532dd4u: goto label_532dd4;
        case 0x532dd8u: goto label_532dd8;
        case 0x532ddcu: goto label_532ddc;
        case 0x532de0u: goto label_532de0;
        case 0x532de4u: goto label_532de4;
        case 0x532de8u: goto label_532de8;
        case 0x532decu: goto label_532dec;
        case 0x532df0u: goto label_532df0;
        case 0x532df4u: goto label_532df4;
        case 0x532df8u: goto label_532df8;
        case 0x532dfcu: goto label_532dfc;
        case 0x532e00u: goto label_532e00;
        case 0x532e04u: goto label_532e04;
        case 0x532e08u: goto label_532e08;
        case 0x532e0cu: goto label_532e0c;
        case 0x532e10u: goto label_532e10;
        case 0x532e14u: goto label_532e14;
        case 0x532e18u: goto label_532e18;
        case 0x532e1cu: goto label_532e1c;
        case 0x532e20u: goto label_532e20;
        case 0x532e24u: goto label_532e24;
        case 0x532e28u: goto label_532e28;
        case 0x532e2cu: goto label_532e2c;
        case 0x532e30u: goto label_532e30;
        case 0x532e34u: goto label_532e34;
        case 0x532e38u: goto label_532e38;
        case 0x532e3cu: goto label_532e3c;
        case 0x532e40u: goto label_532e40;
        case 0x532e44u: goto label_532e44;
        case 0x532e48u: goto label_532e48;
        case 0x532e4cu: goto label_532e4c;
        case 0x532e50u: goto label_532e50;
        case 0x532e54u: goto label_532e54;
        case 0x532e58u: goto label_532e58;
        case 0x532e5cu: goto label_532e5c;
        case 0x532e60u: goto label_532e60;
        case 0x532e64u: goto label_532e64;
        case 0x532e68u: goto label_532e68;
        case 0x532e6cu: goto label_532e6c;
        case 0x532e70u: goto label_532e70;
        case 0x532e74u: goto label_532e74;
        case 0x532e78u: goto label_532e78;
        case 0x532e7cu: goto label_532e7c;
        case 0x532e80u: goto label_532e80;
        case 0x532e84u: goto label_532e84;
        case 0x532e88u: goto label_532e88;
        case 0x532e8cu: goto label_532e8c;
        case 0x532e90u: goto label_532e90;
        case 0x532e94u: goto label_532e94;
        case 0x532e98u: goto label_532e98;
        case 0x532e9cu: goto label_532e9c;
        case 0x532ea0u: goto label_532ea0;
        case 0x532ea4u: goto label_532ea4;
        case 0x532ea8u: goto label_532ea8;
        case 0x532eacu: goto label_532eac;
        case 0x532eb0u: goto label_532eb0;
        case 0x532eb4u: goto label_532eb4;
        case 0x532eb8u: goto label_532eb8;
        case 0x532ebcu: goto label_532ebc;
        case 0x532ec0u: goto label_532ec0;
        case 0x532ec4u: goto label_532ec4;
        case 0x532ec8u: goto label_532ec8;
        case 0x532eccu: goto label_532ecc;
        case 0x532ed0u: goto label_532ed0;
        case 0x532ed4u: goto label_532ed4;
        case 0x532ed8u: goto label_532ed8;
        case 0x532edcu: goto label_532edc;
        case 0x532ee0u: goto label_532ee0;
        case 0x532ee4u: goto label_532ee4;
        case 0x532ee8u: goto label_532ee8;
        case 0x532eecu: goto label_532eec;
        case 0x532ef0u: goto label_532ef0;
        case 0x532ef4u: goto label_532ef4;
        case 0x532ef8u: goto label_532ef8;
        case 0x532efcu: goto label_532efc;
        case 0x532f00u: goto label_532f00;
        case 0x532f04u: goto label_532f04;
        case 0x532f08u: goto label_532f08;
        case 0x532f0cu: goto label_532f0c;
        case 0x532f10u: goto label_532f10;
        case 0x532f14u: goto label_532f14;
        case 0x532f18u: goto label_532f18;
        case 0x532f1cu: goto label_532f1c;
        case 0x532f20u: goto label_532f20;
        case 0x532f24u: goto label_532f24;
        case 0x532f28u: goto label_532f28;
        case 0x532f2cu: goto label_532f2c;
        case 0x532f30u: goto label_532f30;
        case 0x532f34u: goto label_532f34;
        case 0x532f38u: goto label_532f38;
        case 0x532f3cu: goto label_532f3c;
        case 0x532f40u: goto label_532f40;
        case 0x532f44u: goto label_532f44;
        case 0x532f48u: goto label_532f48;
        case 0x532f4cu: goto label_532f4c;
        case 0x532f50u: goto label_532f50;
        case 0x532f54u: goto label_532f54;
        case 0x532f58u: goto label_532f58;
        case 0x532f5cu: goto label_532f5c;
        case 0x532f60u: goto label_532f60;
        case 0x532f64u: goto label_532f64;
        case 0x532f68u: goto label_532f68;
        case 0x532f6cu: goto label_532f6c;
        case 0x532f70u: goto label_532f70;
        case 0x532f74u: goto label_532f74;
        case 0x532f78u: goto label_532f78;
        case 0x532f7cu: goto label_532f7c;
        case 0x532f80u: goto label_532f80;
        case 0x532f84u: goto label_532f84;
        case 0x532f88u: goto label_532f88;
        case 0x532f8cu: goto label_532f8c;
        case 0x532f90u: goto label_532f90;
        case 0x532f94u: goto label_532f94;
        case 0x532f98u: goto label_532f98;
        case 0x532f9cu: goto label_532f9c;
        case 0x532fa0u: goto label_532fa0;
        case 0x532fa4u: goto label_532fa4;
        case 0x532fa8u: goto label_532fa8;
        case 0x532facu: goto label_532fac;
        case 0x532fb0u: goto label_532fb0;
        case 0x532fb4u: goto label_532fb4;
        case 0x532fb8u: goto label_532fb8;
        case 0x532fbcu: goto label_532fbc;
        case 0x532fc0u: goto label_532fc0;
        case 0x532fc4u: goto label_532fc4;
        case 0x532fc8u: goto label_532fc8;
        case 0x532fccu: goto label_532fcc;
        case 0x532fd0u: goto label_532fd0;
        case 0x532fd4u: goto label_532fd4;
        case 0x532fd8u: goto label_532fd8;
        case 0x532fdcu: goto label_532fdc;
        case 0x532fe0u: goto label_532fe0;
        case 0x532fe4u: goto label_532fe4;
        case 0x532fe8u: goto label_532fe8;
        case 0x532fecu: goto label_532fec;
        case 0x532ff0u: goto label_532ff0;
        case 0x532ff4u: goto label_532ff4;
        case 0x532ff8u: goto label_532ff8;
        case 0x532ffcu: goto label_532ffc;
        case 0x533000u: goto label_533000;
        case 0x533004u: goto label_533004;
        case 0x533008u: goto label_533008;
        case 0x53300cu: goto label_53300c;
        case 0x533010u: goto label_533010;
        case 0x533014u: goto label_533014;
        case 0x533018u: goto label_533018;
        case 0x53301cu: goto label_53301c;
        case 0x533020u: goto label_533020;
        case 0x533024u: goto label_533024;
        case 0x533028u: goto label_533028;
        case 0x53302cu: goto label_53302c;
        case 0x533030u: goto label_533030;
        case 0x533034u: goto label_533034;
        case 0x533038u: goto label_533038;
        case 0x53303cu: goto label_53303c;
        case 0x533040u: goto label_533040;
        case 0x533044u: goto label_533044;
        case 0x533048u: goto label_533048;
        case 0x53304cu: goto label_53304c;
        case 0x533050u: goto label_533050;
        case 0x533054u: goto label_533054;
        case 0x533058u: goto label_533058;
        case 0x53305cu: goto label_53305c;
        case 0x533060u: goto label_533060;
        case 0x533064u: goto label_533064;
        case 0x533068u: goto label_533068;
        case 0x53306cu: goto label_53306c;
        case 0x533070u: goto label_533070;
        case 0x533074u: goto label_533074;
        case 0x533078u: goto label_533078;
        case 0x53307cu: goto label_53307c;
        case 0x533080u: goto label_533080;
        case 0x533084u: goto label_533084;
        case 0x533088u: goto label_533088;
        case 0x53308cu: goto label_53308c;
        case 0x533090u: goto label_533090;
        case 0x533094u: goto label_533094;
        case 0x533098u: goto label_533098;
        case 0x53309cu: goto label_53309c;
        case 0x5330a0u: goto label_5330a0;
        case 0x5330a4u: goto label_5330a4;
        case 0x5330a8u: goto label_5330a8;
        case 0x5330acu: goto label_5330ac;
        case 0x5330b0u: goto label_5330b0;
        case 0x5330b4u: goto label_5330b4;
        case 0x5330b8u: goto label_5330b8;
        case 0x5330bcu: goto label_5330bc;
        case 0x5330c0u: goto label_5330c0;
        case 0x5330c4u: goto label_5330c4;
        case 0x5330c8u: goto label_5330c8;
        case 0x5330ccu: goto label_5330cc;
        case 0x5330d0u: goto label_5330d0;
        case 0x5330d4u: goto label_5330d4;
        case 0x5330d8u: goto label_5330d8;
        case 0x5330dcu: goto label_5330dc;
        case 0x5330e0u: goto label_5330e0;
        case 0x5330e4u: goto label_5330e4;
        case 0x5330e8u: goto label_5330e8;
        case 0x5330ecu: goto label_5330ec;
        case 0x5330f0u: goto label_5330f0;
        case 0x5330f4u: goto label_5330f4;
        case 0x5330f8u: goto label_5330f8;
        case 0x5330fcu: goto label_5330fc;
        case 0x533100u: goto label_533100;
        case 0x533104u: goto label_533104;
        case 0x533108u: goto label_533108;
        case 0x53310cu: goto label_53310c;
        case 0x533110u: goto label_533110;
        case 0x533114u: goto label_533114;
        case 0x533118u: goto label_533118;
        case 0x53311cu: goto label_53311c;
        case 0x533120u: goto label_533120;
        case 0x533124u: goto label_533124;
        case 0x533128u: goto label_533128;
        case 0x53312cu: goto label_53312c;
        case 0x533130u: goto label_533130;
        case 0x533134u: goto label_533134;
        case 0x533138u: goto label_533138;
        case 0x53313cu: goto label_53313c;
        case 0x533140u: goto label_533140;
        case 0x533144u: goto label_533144;
        case 0x533148u: goto label_533148;
        case 0x53314cu: goto label_53314c;
        case 0x533150u: goto label_533150;
        case 0x533154u: goto label_533154;
        case 0x533158u: goto label_533158;
        case 0x53315cu: goto label_53315c;
        case 0x533160u: goto label_533160;
        case 0x533164u: goto label_533164;
        case 0x533168u: goto label_533168;
        case 0x53316cu: goto label_53316c;
        case 0x533170u: goto label_533170;
        case 0x533174u: goto label_533174;
        case 0x533178u: goto label_533178;
        case 0x53317cu: goto label_53317c;
        case 0x533180u: goto label_533180;
        case 0x533184u: goto label_533184;
        case 0x533188u: goto label_533188;
        case 0x53318cu: goto label_53318c;
        case 0x533190u: goto label_533190;
        case 0x533194u: goto label_533194;
        case 0x533198u: goto label_533198;
        case 0x53319cu: goto label_53319c;
        case 0x5331a0u: goto label_5331a0;
        case 0x5331a4u: goto label_5331a4;
        case 0x5331a8u: goto label_5331a8;
        case 0x5331acu: goto label_5331ac;
        case 0x5331b0u: goto label_5331b0;
        case 0x5331b4u: goto label_5331b4;
        case 0x5331b8u: goto label_5331b8;
        case 0x5331bcu: goto label_5331bc;
        case 0x5331c0u: goto label_5331c0;
        case 0x5331c4u: goto label_5331c4;
        case 0x5331c8u: goto label_5331c8;
        case 0x5331ccu: goto label_5331cc;
        case 0x5331d0u: goto label_5331d0;
        case 0x5331d4u: goto label_5331d4;
        case 0x5331d8u: goto label_5331d8;
        case 0x5331dcu: goto label_5331dc;
        case 0x5331e0u: goto label_5331e0;
        case 0x5331e4u: goto label_5331e4;
        case 0x5331e8u: goto label_5331e8;
        case 0x5331ecu: goto label_5331ec;
        default: break;
    }

    ctx->pc = 0x532970u;

label_532970:
    // 0x532970: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x532970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_532974:
    // 0x532974: 0x3c0800be  lui         $t0, 0xBE
    ctx->pc = 0x532974u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)190 << 16));
label_532978:
    // 0x532978: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x532978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_53297c:
    // 0x53297c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53297cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532980:
    // 0x532980: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x532980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_532984:
    // 0x532984: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532984u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532988:
    // 0x532988: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x532988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53298c:
    // 0x53298c: 0x2508b610  addiu       $t0, $t0, -0x49F0
    ctx->pc = 0x53298cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294948368));
label_532990:
    // 0x532990: 0x8c49cf98  lw          $t1, -0x3068($v0)
    ctx->pc = 0x532990u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532994:
    // 0x532994: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x532994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_532998:
    // 0x532998: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x532998u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_53299c:
    // 0x53299c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x53299cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_5329a0:
    // 0x5329a0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x5329a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_5329a4:
    // 0x5329a4: 0xac69cf98  sw          $t1, -0x3068($v1)
    ctx->pc = 0x5329a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 9));
label_5329a8:
    // 0x5329a8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x5329a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_5329ac:
    // 0x5329ac: 0x8c42cf98  lw          $v0, -0x3068($v0)
    ctx->pc = 0x5329acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_5329b0:
    // 0x5329b0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5329b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5329b4:
    // 0x5329b4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x5329b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_5329b8:
    // 0x5329b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x5329b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5329bc:
    // 0x5329bc: 0x10670181  beq         $v1, $a3, . + 4 + (0x181 << 2)
label_5329c0:
    if (ctx->pc == 0x5329C0u) {
        ctx->pc = 0x5329C0u;
            // 0x5329c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5329C4u;
        goto label_5329c4;
    }
    ctx->pc = 0x5329BCu;
    {
        const bool branch_taken_0x5329bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        ctx->pc = 0x5329C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5329BCu;
            // 0x5329c0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5329bc) {
            ctx->pc = 0x532FC4u;
            goto label_532fc4;
        }
    }
    ctx->pc = 0x5329C4u;
label_5329c4:
    // 0x5329c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x5329c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5329c8:
    // 0x5329c8: 0x10620147  beq         $v1, $v0, . + 4 + (0x147 << 2)
label_5329cc:
    if (ctx->pc == 0x5329CCu) {
        ctx->pc = 0x5329D0u;
        goto label_5329d0;
    }
    ctx->pc = 0x5329C8u;
    {
        const bool branch_taken_0x5329c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5329c8) {
            ctx->pc = 0x532EE8u;
            goto label_532ee8;
        }
    }
    ctx->pc = 0x5329D0u;
label_5329d0:
    // 0x5329d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5329d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5329d4:
    // 0x5329d4: 0x106200dc  beq         $v1, $v0, . + 4 + (0xDC << 2)
label_5329d8:
    if (ctx->pc == 0x5329D8u) {
        ctx->pc = 0x5329DCu;
        goto label_5329dc;
    }
    ctx->pc = 0x5329D4u;
    {
        const bool branch_taken_0x5329d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5329d4) {
            ctx->pc = 0x532D48u;
            goto label_532d48;
        }
    }
    ctx->pc = 0x5329DCu;
label_5329dc:
    // 0x5329dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5329dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5329e0:
    // 0x5329e0: 0x10620070  beq         $v1, $v0, . + 4 + (0x70 << 2)
label_5329e4:
    if (ctx->pc == 0x5329E4u) {
        ctx->pc = 0x5329E8u;
        goto label_5329e8;
    }
    ctx->pc = 0x5329E0u;
    {
        const bool branch_taken_0x5329e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5329e0) {
            ctx->pc = 0x532BA4u;
            goto label_532ba4;
        }
    }
    ctx->pc = 0x5329E8u;
label_5329e8:
    // 0x5329e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_5329ec:
    if (ctx->pc == 0x5329ECu) {
        ctx->pc = 0x5329F0u;
        goto label_5329f0;
    }
    ctx->pc = 0x5329E8u;
    {
        const bool branch_taken_0x5329e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5329e8) {
            ctx->pc = 0x5329F8u;
            goto label_5329f8;
        }
    }
    ctx->pc = 0x5329F0u;
label_5329f0:
    // 0x5329f0: 0x10000186  b           . + 4 + (0x186 << 2)
label_5329f4:
    if (ctx->pc == 0x5329F4u) {
        ctx->pc = 0x5329F8u;
        goto label_5329f8;
    }
    ctx->pc = 0x5329F0u;
    {
        const bool branch_taken_0x5329f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5329f0) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x5329F8u;
label_5329f8:
    // 0x5329f8: 0xc14d2a4  jal         func_534A90
label_5329fc:
    if (ctx->pc == 0x5329FCu) {
        ctx->pc = 0x532A00u;
        goto label_532a00;
    }
    ctx->pc = 0x5329F8u;
    SET_GPR_U32(ctx, 31, 0x532A00u);
    ctx->pc = 0x534A90u;
    if (runtime->hasFunction(0x534A90u)) {
        auto targetFn = runtime->lookupFunction(0x534A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532A00u; }
        if (ctx->pc != 0x532A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534A90_0x534a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532A00u; }
        if (ctx->pc != 0x532A00u) { return; }
    }
    ctx->pc = 0x532A00u;
label_532a00:
    // 0x532a00: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x532a00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_532a04:
    // 0x532a04: 0x1443002d  bne         $v0, $v1, . + 4 + (0x2D << 2)
label_532a08:
    if (ctx->pc == 0x532A08u) {
        ctx->pc = 0x532A08u;
            // 0x532a08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x532A0Cu;
        goto label_532a0c;
    }
    ctx->pc = 0x532A04u;
    {
        const bool branch_taken_0x532a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x532A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532A04u;
            // 0x532a08: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532a04) {
            ctx->pc = 0x532ABCu;
            goto label_532abc;
        }
    }
    ctx->pc = 0x532A0Cu;
label_532a0c:
    // 0x532a0c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532a10:
    // 0x532a10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532a14:
    // 0x532a14: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x532a14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_532a18:
    // 0x532a18: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532a18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532a1c:
    // 0x532a1c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x532a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_532a20:
    // 0x532a20: 0x320f809  jalr        $t9
label_532a24:
    if (ctx->pc == 0x532A24u) {
        ctx->pc = 0x532A24u;
            // 0x532a24: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->pc = 0x532A28u;
        goto label_532a28;
    }
    ctx->pc = 0x532A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532A28u);
        ctx->pc = 0x532A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532A20u;
            // 0x532a24: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532A28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532A28u; }
            if (ctx->pc != 0x532A28u) { return; }
        }
        }
    }
    ctx->pc = 0x532A28u;
label_532a28:
    // 0x532a28: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532a28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532a2c:
    // 0x532a2c: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532a30:
    // 0x532a30: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532a34:
    if (ctx->pc == 0x532A34u) {
        ctx->pc = 0x532A34u;
            // 0x532a34: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532A38u;
        goto label_532a38;
    }
    ctx->pc = 0x532A30u;
    {
        const bool branch_taken_0x532a30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532a30) {
            ctx->pc = 0x532A34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532A30u;
            // 0x532a34: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532A68u;
            goto label_532a68;
        }
    }
    ctx->pc = 0x532A38u;
label_532a38:
    // 0x532a38: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532a3c:
    // 0x532a3c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532a40:
    if (ctx->pc == 0x532A40u) {
        ctx->pc = 0x532A44u;
        goto label_532a44;
    }
    ctx->pc = 0x532A3Cu;
    {
        const bool branch_taken_0x532a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532a3c) {
            ctx->pc = 0x532A64u;
            goto label_532a64;
        }
    }
    ctx->pc = 0x532A44u;
label_532a44:
    // 0x532a44: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532a48:
    // 0x532a48: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532a4c:
    if (ctx->pc == 0x532A4Cu) {
        ctx->pc = 0x532A50u;
        goto label_532a50;
    }
    ctx->pc = 0x532A48u;
    {
        const bool branch_taken_0x532a48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532a48) {
            ctx->pc = 0x532A64u;
            goto label_532a64;
        }
    }
    ctx->pc = 0x532A50u;
label_532a50:
    // 0x532a50: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532a54:
    // 0x532a54: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532a58:
    if (ctx->pc == 0x532A58u) {
        ctx->pc = 0x532A5Cu;
        goto label_532a5c;
    }
    ctx->pc = 0x532A54u;
    {
        const bool branch_taken_0x532a54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532a54) {
            ctx->pc = 0x532A64u;
            goto label_532a64;
        }
    }
    ctx->pc = 0x532A5Cu;
label_532a5c:
    // 0x532a5c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532a60:
    if (ctx->pc == 0x532A60u) {
        ctx->pc = 0x532A60u;
            // 0x532a60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532A64u;
        goto label_532a64;
    }
    ctx->pc = 0x532A5Cu;
    {
        const bool branch_taken_0x532a5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532a5c) {
            ctx->pc = 0x532A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532A5Cu;
            // 0x532a60: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532A68u;
            goto label_532a68;
        }
    }
    ctx->pc = 0x532A64u;
label_532a64:
    // 0x532a64: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532a68:
    // 0x532a68: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532a6c:
    // 0x532a6c: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532a70:
    if (ctx->pc == 0x532A70u) {
        ctx->pc = 0x532A70u;
            // 0x532a70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532A74u;
        goto label_532a74;
    }
    ctx->pc = 0x532A6Cu;
    {
        const bool branch_taken_0x532a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532A70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532A6Cu;
            // 0x532a70: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532a6c) {
            ctx->pc = 0x532A98u;
            goto label_532a98;
        }
    }
    ctx->pc = 0x532A74u;
label_532a74:
    // 0x532a74: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532a74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532a78:
    // 0x532a78: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532a7c:
    // 0x532a7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532a80:
    // 0x532a80: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532a84:
    // 0x532a84: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532a88:
    // 0x532a88: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532a8c:
    // 0x532a8c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532a90:
    // 0x532a90: 0x10000164  b           . + 4 + (0x164 << 2)
label_532a94:
    if (ctx->pc == 0x532A94u) {
        ctx->pc = 0x532A94u;
            // 0x532a94: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532A98u;
        goto label_532a98;
    }
    ctx->pc = 0x532A90u;
    {
        const bool branch_taken_0x532a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532A90u;
            // 0x532a94: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532a90) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532A98u;
label_532a98:
    // 0x532a98: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532a9c:
    // 0x532a9c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x532a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_532aa0:
    // 0x532aa0: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532aa4:
    // 0x532aa4: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532aa8:
    // 0x532aa8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532aac:
    // 0x532aac: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532ab0:
    // 0x532ab0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532ab4:
    // 0x532ab4: 0x10000155  b           . + 4 + (0x155 << 2)
label_532ab8:
    if (ctx->pc == 0x532AB8u) {
        ctx->pc = 0x532AB8u;
            // 0x532ab8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532ABCu;
        goto label_532abc;
    }
    ctx->pc = 0x532AB4u;
    {
        const bool branch_taken_0x532ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532AB4u;
            // 0x532ab8: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532ab4) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532ABCu;
label_532abc:
    // 0x532abc: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_532ac0:
    if (ctx->pc == 0x532AC0u) {
        ctx->pc = 0x532AC0u;
            // 0x532ac0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532AC4u;
        goto label_532ac4;
    }
    ctx->pc = 0x532ABCu;
    {
        const bool branch_taken_0x532abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x532abc) {
            ctx->pc = 0x532AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532ABCu;
            // 0x532ac0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532AF0u;
            goto label_532af0;
        }
    }
    ctx->pc = 0x532AC4u;
label_532ac4:
    // 0x532ac4: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x532ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_532ac8:
    // 0x532ac8: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_532acc:
    if (ctx->pc == 0x532ACCu) {
        ctx->pc = 0x532AD0u;
        goto label_532ad0;
    }
    ctx->pc = 0x532AC8u;
    {
        const bool branch_taken_0x532ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x532ac8) {
            ctx->pc = 0x532AD4u;
            goto label_532ad4;
        }
    }
    ctx->pc = 0x532AD0u;
label_532ad0:
    // 0x532ad0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x532ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_532ad4:
    // 0x532ad4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532ad8:
    // 0x532ad8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532adc:
    // 0x532adc: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532ae0:
    // 0x532ae0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532ae4:
    // 0x532ae4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532ae8:
    // 0x532ae8: 0x1000014e  b           . + 4 + (0x14E << 2)
label_532aec:
    if (ctx->pc == 0x532AECu) {
        ctx->pc = 0x532AECu;
            // 0x532aec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532AF0u;
        goto label_532af0;
    }
    ctx->pc = 0x532AE8u;
    {
        const bool branch_taken_0x532ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532AE8u;
            // 0x532aec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532ae8) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532AF0u;
label_532af0:
    // 0x532af0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532af4:
    // 0x532af4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x532af4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_532af8:
    // 0x532af8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532af8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532afc:
    // 0x532afc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532afcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532b00:
    // 0x532b00: 0x26250350  addiu       $a1, $s1, 0x350
    ctx->pc = 0x532b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
label_532b04:
    // 0x532b04: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x532b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_532b08:
    // 0x532b08: 0x320f809  jalr        $t9
label_532b0c:
    if (ctx->pc == 0x532B0Cu) {
        ctx->pc = 0x532B0Cu;
            // 0x532b0c: 0xac40b638  sw          $zero, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 0));
        ctx->pc = 0x532B10u;
        goto label_532b10;
    }
    ctx->pc = 0x532B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532B10u);
        ctx->pc = 0x532B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532B08u;
            // 0x532b0c: 0xac40b638  sw          $zero, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532B10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532B10u; }
            if (ctx->pc != 0x532B10u) { return; }
        }
        }
    }
    ctx->pc = 0x532B10u;
label_532b10:
    // 0x532b10: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532b14:
    // 0x532b14: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532b18:
    // 0x532b18: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532b1c:
    if (ctx->pc == 0x532B1Cu) {
        ctx->pc = 0x532B1Cu;
            // 0x532b1c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532B20u;
        goto label_532b20;
    }
    ctx->pc = 0x532B18u;
    {
        const bool branch_taken_0x532b18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532b18) {
            ctx->pc = 0x532B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532B18u;
            // 0x532b1c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532B50u;
            goto label_532b50;
        }
    }
    ctx->pc = 0x532B20u;
label_532b20:
    // 0x532b20: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532b24:
    // 0x532b24: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532b28:
    if (ctx->pc == 0x532B28u) {
        ctx->pc = 0x532B2Cu;
        goto label_532b2c;
    }
    ctx->pc = 0x532B24u;
    {
        const bool branch_taken_0x532b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532b24) {
            ctx->pc = 0x532B4Cu;
            goto label_532b4c;
        }
    }
    ctx->pc = 0x532B2Cu;
label_532b2c:
    // 0x532b2c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532b30:
    // 0x532b30: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532b34:
    if (ctx->pc == 0x532B34u) {
        ctx->pc = 0x532B38u;
        goto label_532b38;
    }
    ctx->pc = 0x532B30u;
    {
        const bool branch_taken_0x532b30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532b30) {
            ctx->pc = 0x532B4Cu;
            goto label_532b4c;
        }
    }
    ctx->pc = 0x532B38u;
label_532b38:
    // 0x532b38: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532b3c:
    // 0x532b3c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532b40:
    if (ctx->pc == 0x532B40u) {
        ctx->pc = 0x532B44u;
        goto label_532b44;
    }
    ctx->pc = 0x532B3Cu;
    {
        const bool branch_taken_0x532b3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532b3c) {
            ctx->pc = 0x532B4Cu;
            goto label_532b4c;
        }
    }
    ctx->pc = 0x532B44u;
label_532b44:
    // 0x532b44: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532b48:
    if (ctx->pc == 0x532B48u) {
        ctx->pc = 0x532B48u;
            // 0x532b48: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532B4Cu;
        goto label_532b4c;
    }
    ctx->pc = 0x532B44u;
    {
        const bool branch_taken_0x532b44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532b44) {
            ctx->pc = 0x532B48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532B44u;
            // 0x532b48: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532B50u;
            goto label_532b50;
        }
    }
    ctx->pc = 0x532B4Cu;
label_532b4c:
    // 0x532b4c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532b50:
    // 0x532b50: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532b54:
    // 0x532b54: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532b58:
    if (ctx->pc == 0x532B58u) {
        ctx->pc = 0x532B58u;
            // 0x532b58: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532B5Cu;
        goto label_532b5c;
    }
    ctx->pc = 0x532B54u;
    {
        const bool branch_taken_0x532b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532B54u;
            // 0x532b58: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532b54) {
            ctx->pc = 0x532B80u;
            goto label_532b80;
        }
    }
    ctx->pc = 0x532B5Cu;
label_532b5c:
    // 0x532b5c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532b60:
    // 0x532b60: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532b60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532b64:
    // 0x532b64: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532b64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532b68:
    // 0x532b68: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532b6c:
    // 0x532b6c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532b70:
    // 0x532b70: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532b74:
    // 0x532b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532b78:
    // 0x532b78: 0x1000012a  b           . + 4 + (0x12A << 2)
label_532b7c:
    if (ctx->pc == 0x532B7Cu) {
        ctx->pc = 0x532B7Cu;
            // 0x532b7c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532B80u;
        goto label_532b80;
    }
    ctx->pc = 0x532B78u;
    {
        const bool branch_taken_0x532b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532B78u;
            // 0x532b7c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532b78) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532B80u;
label_532b80:
    // 0x532b80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532b84:
    // 0x532b84: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x532b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532b88:
    // 0x532b88: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532b8c:
    // 0x532b8c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532b90:
    // 0x532b90: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532b90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532b94:
    // 0x532b94: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532b98:
    // 0x532b98: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532b9c:
    // 0x532b9c: 0x1000011b  b           . + 4 + (0x11B << 2)
label_532ba0:
    if (ctx->pc == 0x532BA0u) {
        ctx->pc = 0x532BA0u;
            // 0x532ba0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532BA4u;
        goto label_532ba4;
    }
    ctx->pc = 0x532B9Cu;
    {
        const bool branch_taken_0x532b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532B9Cu;
            // 0x532ba0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532b9c) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532BA4u;
label_532ba4:
    // 0x532ba4: 0xc14d270  jal         func_5349C0
label_532ba8:
    if (ctx->pc == 0x532BA8u) {
        ctx->pc = 0x532BACu;
        goto label_532bac;
    }
    ctx->pc = 0x532BA4u;
    SET_GPR_U32(ctx, 31, 0x532BACu);
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532BACu; }
        if (ctx->pc != 0x532BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532BACu; }
        if (ctx->pc != 0x532BACu) { return; }
    }
    ctx->pc = 0x532BACu;
label_532bac:
    // 0x532bac: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x532bacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_532bb0:
    // 0x532bb0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532bb4:
    // 0x532bb4: 0x9223034e  lbu         $v1, 0x34E($s1)
    ctx->pc = 0x532bb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 846)));
label_532bb8:
    // 0x532bb8: 0x8c44b638  lw          $a0, -0x49C8($v0)
    ctx->pc = 0x532bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948408)));
label_532bbc:
    // 0x532bbc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x532bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_532bc0:
    // 0x532bc0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532bc4:
    // 0x532bc4: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x532bc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_532bc8:
    // 0x532bc8: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_532bcc:
    if (ctx->pc == 0x532BCCu) {
        ctx->pc = 0x532BCCu;
            // 0x532bcc: 0xac44b638  sw          $a0, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 4));
        ctx->pc = 0x532BD0u;
        goto label_532bd0;
    }
    ctx->pc = 0x532BC8u;
    {
        const bool branch_taken_0x532bc8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x532BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532BC8u;
            // 0x532bcc: 0xac44b638  sw          $a0, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532bc8) {
            ctx->pc = 0x532C90u;
            goto label_532c90;
        }
    }
    ctx->pc = 0x532BD0u;
label_532bd0:
    // 0x532bd0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532bd4:
    // 0x532bd4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x532bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_532bd8:
    // 0x532bd8: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x532bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_532bdc:
    // 0x532bdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x532bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_532be0:
    // 0x532be0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532be0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532be4:
    // 0x532be4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x532be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_532be8:
    // 0x532be8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x532be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_532bec:
    // 0x532bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532bf0:
    // 0x532bf0: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x532bf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_532bf4:
    // 0x532bf4: 0x320f809  jalr        $t9
label_532bf8:
    if (ctx->pc == 0x532BF8u) {
        ctx->pc = 0x532BF8u;
            // 0x532bf8: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->pc = 0x532BFCu;
        goto label_532bfc;
    }
    ctx->pc = 0x532BF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532BFCu);
        ctx->pc = 0x532BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532BF4u;
            // 0x532bf8: 0x24450350  addiu       $a1, $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 848));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532BFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532BFCu; }
            if (ctx->pc != 0x532BFCu) { return; }
        }
        }
    }
    ctx->pc = 0x532BFCu;
label_532bfc:
    // 0x532bfc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532c00:
    // 0x532c00: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532c04:
    // 0x532c04: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532c08:
    if (ctx->pc == 0x532C08u) {
        ctx->pc = 0x532C08u;
            // 0x532c08: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532C0Cu;
        goto label_532c0c;
    }
    ctx->pc = 0x532C04u;
    {
        const bool branch_taken_0x532c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532c04) {
            ctx->pc = 0x532C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532C04u;
            // 0x532c08: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532C3Cu;
            goto label_532c3c;
        }
    }
    ctx->pc = 0x532C0Cu;
label_532c0c:
    // 0x532c0c: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532c10:
    // 0x532c10: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532c14:
    if (ctx->pc == 0x532C14u) {
        ctx->pc = 0x532C18u;
        goto label_532c18;
    }
    ctx->pc = 0x532C10u;
    {
        const bool branch_taken_0x532c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532c10) {
            ctx->pc = 0x532C38u;
            goto label_532c38;
        }
    }
    ctx->pc = 0x532C18u;
label_532c18:
    // 0x532c18: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532c1c:
    // 0x532c1c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532c20:
    if (ctx->pc == 0x532C20u) {
        ctx->pc = 0x532C24u;
        goto label_532c24;
    }
    ctx->pc = 0x532C1Cu;
    {
        const bool branch_taken_0x532c1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532c1c) {
            ctx->pc = 0x532C38u;
            goto label_532c38;
        }
    }
    ctx->pc = 0x532C24u;
label_532c24:
    // 0x532c24: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532c28:
    // 0x532c28: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532c2c:
    if (ctx->pc == 0x532C2Cu) {
        ctx->pc = 0x532C30u;
        goto label_532c30;
    }
    ctx->pc = 0x532C28u;
    {
        const bool branch_taken_0x532c28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532c28) {
            ctx->pc = 0x532C38u;
            goto label_532c38;
        }
    }
    ctx->pc = 0x532C30u;
label_532c30:
    // 0x532c30: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532c34:
    if (ctx->pc == 0x532C34u) {
        ctx->pc = 0x532C34u;
            // 0x532c34: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532C38u;
        goto label_532c38;
    }
    ctx->pc = 0x532C30u;
    {
        const bool branch_taken_0x532c30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532c30) {
            ctx->pc = 0x532C34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532C30u;
            // 0x532c34: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532C3Cu;
            goto label_532c3c;
        }
    }
    ctx->pc = 0x532C38u;
label_532c38:
    // 0x532c38: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532c3c:
    // 0x532c3c: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532c40:
    // 0x532c40: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532c44:
    if (ctx->pc == 0x532C44u) {
        ctx->pc = 0x532C44u;
            // 0x532c44: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532C48u;
        goto label_532c48;
    }
    ctx->pc = 0x532C40u;
    {
        const bool branch_taken_0x532c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532C40u;
            // 0x532c44: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532c40) {
            ctx->pc = 0x532C6Cu;
            goto label_532c6c;
        }
    }
    ctx->pc = 0x532C48u;
label_532c48:
    // 0x532c48: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532c4c:
    // 0x532c4c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532c50:
    // 0x532c50: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532c54:
    // 0x532c54: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532c58:
    // 0x532c58: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532c58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532c5c:
    // 0x532c5c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532c60:
    // 0x532c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532c64:
    // 0x532c64: 0x100000ef  b           . + 4 + (0xEF << 2)
label_532c68:
    if (ctx->pc == 0x532C68u) {
        ctx->pc = 0x532C68u;
            // 0x532c68: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532C6Cu;
        goto label_532c6c;
    }
    ctx->pc = 0x532C64u;
    {
        const bool branch_taken_0x532c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532C64u;
            // 0x532c68: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532c64) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532C6Cu;
label_532c6c:
    // 0x532c6c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532c70:
    // 0x532c70: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x532c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532c74:
    // 0x532c74: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532c78:
    // 0x532c78: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532c78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532c7c:
    // 0x532c7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532c80:
    // 0x532c80: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532c84:
    // 0x532c84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532c88:
    // 0x532c88: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_532c8c:
    if (ctx->pc == 0x532C8Cu) {
        ctx->pc = 0x532C8Cu;
            // 0x532c8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532C90u;
        goto label_532c90;
    }
    ctx->pc = 0x532C88u;
    {
        const bool branch_taken_0x532c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532C88u;
            // 0x532c8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532c88) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532C90u;
label_532c90:
    // 0x532c90: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532c90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532c94:
    // 0x532c94: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532c98:
    // 0x532c98: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x532c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_532c9c:
    // 0x532c9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532ca0:
    // 0x532ca0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532ca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532ca4:
    // 0x532ca4: 0x26250068  addiu       $a1, $s1, 0x68
    ctx->pc = 0x532ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
label_532ca8:
    // 0x532ca8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x532ca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_532cac:
    // 0x532cac: 0x320f809  jalr        $t9
label_532cb0:
    if (ctx->pc == 0x532CB0u) {
        ctx->pc = 0x532CB0u;
            // 0x532cb0: 0xac40b638  sw          $zero, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 0));
        ctx->pc = 0x532CB4u;
        goto label_532cb4;
    }
    ctx->pc = 0x532CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532CB4u);
        ctx->pc = 0x532CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532CACu;
            // 0x532cb0: 0xac40b638  sw          $zero, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532CB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532CB4u; }
            if (ctx->pc != 0x532CB4u) { return; }
        }
        }
    }
    ctx->pc = 0x532CB4u;
label_532cb4:
    // 0x532cb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532cb8:
    // 0x532cb8: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532cbc:
    // 0x532cbc: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532cc0:
    if (ctx->pc == 0x532CC0u) {
        ctx->pc = 0x532CC0u;
            // 0x532cc0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532CC4u;
        goto label_532cc4;
    }
    ctx->pc = 0x532CBCu;
    {
        const bool branch_taken_0x532cbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532cbc) {
            ctx->pc = 0x532CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532CBCu;
            // 0x532cc0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532CF4u;
            goto label_532cf4;
        }
    }
    ctx->pc = 0x532CC4u;
label_532cc4:
    // 0x532cc4: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532cc8:
    // 0x532cc8: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532ccc:
    if (ctx->pc == 0x532CCCu) {
        ctx->pc = 0x532CD0u;
        goto label_532cd0;
    }
    ctx->pc = 0x532CC8u;
    {
        const bool branch_taken_0x532cc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532cc8) {
            ctx->pc = 0x532CF0u;
            goto label_532cf0;
        }
    }
    ctx->pc = 0x532CD0u;
label_532cd0:
    // 0x532cd0: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532cd4:
    // 0x532cd4: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532cd8:
    if (ctx->pc == 0x532CD8u) {
        ctx->pc = 0x532CDCu;
        goto label_532cdc;
    }
    ctx->pc = 0x532CD4u;
    {
        const bool branch_taken_0x532cd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532cd4) {
            ctx->pc = 0x532CF0u;
            goto label_532cf0;
        }
    }
    ctx->pc = 0x532CDCu;
label_532cdc:
    // 0x532cdc: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532ce0:
    // 0x532ce0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532ce4:
    if (ctx->pc == 0x532CE4u) {
        ctx->pc = 0x532CE8u;
        goto label_532ce8;
    }
    ctx->pc = 0x532CE0u;
    {
        const bool branch_taken_0x532ce0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532ce0) {
            ctx->pc = 0x532CF0u;
            goto label_532cf0;
        }
    }
    ctx->pc = 0x532CE8u;
label_532ce8:
    // 0x532ce8: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532cec:
    if (ctx->pc == 0x532CECu) {
        ctx->pc = 0x532CECu;
            // 0x532cec: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532CF0u;
        goto label_532cf0;
    }
    ctx->pc = 0x532CE8u;
    {
        const bool branch_taken_0x532ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532ce8) {
            ctx->pc = 0x532CECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532CE8u;
            // 0x532cec: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532CF4u;
            goto label_532cf4;
        }
    }
    ctx->pc = 0x532CF0u;
label_532cf0:
    // 0x532cf0: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532cf4:
    // 0x532cf4: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532cf8:
    // 0x532cf8: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532cfc:
    if (ctx->pc == 0x532CFCu) {
        ctx->pc = 0x532CFCu;
            // 0x532cfc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532D00u;
        goto label_532d00;
    }
    ctx->pc = 0x532CF8u;
    {
        const bool branch_taken_0x532cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532CF8u;
            // 0x532cfc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532cf8) {
            ctx->pc = 0x532D24u;
            goto label_532d24;
        }
    }
    ctx->pc = 0x532D00u;
label_532d00:
    // 0x532d00: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532d04:
    // 0x532d04: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532d08:
    // 0x532d08: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532d08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532d0c:
    // 0x532d0c: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532d10:
    // 0x532d10: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532d14:
    // 0x532d14: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532d18:
    // 0x532d18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532d1c:
    // 0x532d1c: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_532d20:
    if (ctx->pc == 0x532D20u) {
        ctx->pc = 0x532D20u;
            // 0x532d20: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532D24u;
        goto label_532d24;
    }
    ctx->pc = 0x532D1Cu;
    {
        const bool branch_taken_0x532d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532D1Cu;
            // 0x532d20: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532d1c) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532D24u;
label_532d24:
    // 0x532d24: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532d28:
    // 0x532d28: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x532d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_532d2c:
    // 0x532d2c: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532d30:
    // 0x532d30: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532d34:
    // 0x532d34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532d34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532d38:
    // 0x532d38: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532d3c:
    // 0x532d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532d40:
    // 0x532d40: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_532d44:
    if (ctx->pc == 0x532D44u) {
        ctx->pc = 0x532D44u;
            // 0x532d44: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532D48u;
        goto label_532d48;
    }
    ctx->pc = 0x532D40u;
    {
        const bool branch_taken_0x532d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532D40u;
            // 0x532d44: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532d40) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532D48u;
label_532d48:
    // 0x532d48: 0xc14d270  jal         func_5349C0
label_532d4c:
    if (ctx->pc == 0x532D4Cu) {
        ctx->pc = 0x532D50u;
        goto label_532d50;
    }
    ctx->pc = 0x532D48u;
    SET_GPR_U32(ctx, 31, 0x532D50u);
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532D50u; }
        if (ctx->pc != 0x532D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532D50u; }
        if (ctx->pc != 0x532D50u) { return; }
    }
    ctx->pc = 0x532D50u;
label_532d50:
    // 0x532d50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x532d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_532d54:
    // 0x532d54: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532d58:
    // 0x532d58: 0x92230064  lbu         $v1, 0x64($s1)
    ctx->pc = 0x532d58u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 100)));
label_532d5c:
    // 0x532d5c: 0x8c44b638  lw          $a0, -0x49C8($v0)
    ctx->pc = 0x532d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948408)));
label_532d60:
    // 0x532d60: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x532d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_532d64:
    // 0x532d64: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532d68:
    // 0x532d68: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x532d68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_532d6c:
    // 0x532d6c: 0x10200031  beqz        $at, . + 4 + (0x31 << 2)
label_532d70:
    if (ctx->pc == 0x532D70u) {
        ctx->pc = 0x532D70u;
            // 0x532d70: 0xac44b638  sw          $a0, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 4));
        ctx->pc = 0x532D74u;
        goto label_532d74;
    }
    ctx->pc = 0x532D6Cu;
    {
        const bool branch_taken_0x532d6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x532D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532D6Cu;
            // 0x532d70: 0xac44b638  sw          $a0, -0x49C8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948408), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532d6c) {
            ctx->pc = 0x532E34u;
            goto label_532e34;
        }
    }
    ctx->pc = 0x532D74u;
label_532d74:
    // 0x532d74: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532d78:
    // 0x532d78: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x532d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_532d7c:
    // 0x532d7c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x532d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_532d80:
    // 0x532d80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x532d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_532d84:
    // 0x532d84: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532d88:
    // 0x532d88: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x532d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_532d8c:
    // 0x532d8c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x532d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_532d90:
    // 0x532d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532d94:
    // 0x532d94: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x532d94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_532d98:
    // 0x532d98: 0x320f809  jalr        $t9
label_532d9c:
    if (ctx->pc == 0x532D9Cu) {
        ctx->pc = 0x532D9Cu;
            // 0x532d9c: 0x24450068  addiu       $a1, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->pc = 0x532DA0u;
        goto label_532da0;
    }
    ctx->pc = 0x532D98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532DA0u);
        ctx->pc = 0x532D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532D98u;
            // 0x532d9c: 0x24450068  addiu       $a1, $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532DA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532DA0u; }
            if (ctx->pc != 0x532DA0u) { return; }
        }
        }
    }
    ctx->pc = 0x532DA0u;
label_532da0:
    // 0x532da0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532da4:
    // 0x532da4: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532da8:
    // 0x532da8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532dac:
    if (ctx->pc == 0x532DACu) {
        ctx->pc = 0x532DACu;
            // 0x532dac: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532DB0u;
        goto label_532db0;
    }
    ctx->pc = 0x532DA8u;
    {
        const bool branch_taken_0x532da8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532da8) {
            ctx->pc = 0x532DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532DA8u;
            // 0x532dac: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532DE0u;
            goto label_532de0;
        }
    }
    ctx->pc = 0x532DB0u;
label_532db0:
    // 0x532db0: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532db4:
    // 0x532db4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532db8:
    if (ctx->pc == 0x532DB8u) {
        ctx->pc = 0x532DBCu;
        goto label_532dbc;
    }
    ctx->pc = 0x532DB4u;
    {
        const bool branch_taken_0x532db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532db4) {
            ctx->pc = 0x532DDCu;
            goto label_532ddc;
        }
    }
    ctx->pc = 0x532DBCu;
label_532dbc:
    // 0x532dbc: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532dc0:
    // 0x532dc0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532dc4:
    if (ctx->pc == 0x532DC4u) {
        ctx->pc = 0x532DC8u;
        goto label_532dc8;
    }
    ctx->pc = 0x532DC0u;
    {
        const bool branch_taken_0x532dc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532dc0) {
            ctx->pc = 0x532DDCu;
            goto label_532ddc;
        }
    }
    ctx->pc = 0x532DC8u;
label_532dc8:
    // 0x532dc8: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532dcc:
    // 0x532dcc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532dd0:
    if (ctx->pc == 0x532DD0u) {
        ctx->pc = 0x532DD4u;
        goto label_532dd4;
    }
    ctx->pc = 0x532DCCu;
    {
        const bool branch_taken_0x532dcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532dcc) {
            ctx->pc = 0x532DDCu;
            goto label_532ddc;
        }
    }
    ctx->pc = 0x532DD4u;
label_532dd4:
    // 0x532dd4: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532dd8:
    if (ctx->pc == 0x532DD8u) {
        ctx->pc = 0x532DD8u;
            // 0x532dd8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532DDCu;
        goto label_532ddc;
    }
    ctx->pc = 0x532DD4u;
    {
        const bool branch_taken_0x532dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532dd4) {
            ctx->pc = 0x532DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532DD4u;
            // 0x532dd8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532DE0u;
            goto label_532de0;
        }
    }
    ctx->pc = 0x532DDCu;
label_532ddc:
    // 0x532ddc: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532de0:
    // 0x532de0: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532de4:
    // 0x532de4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532de8:
    if (ctx->pc == 0x532DE8u) {
        ctx->pc = 0x532DE8u;
            // 0x532de8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532DECu;
        goto label_532dec;
    }
    ctx->pc = 0x532DE4u;
    {
        const bool branch_taken_0x532de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532DE4u;
            // 0x532de8: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532de4) {
            ctx->pc = 0x532E10u;
            goto label_532e10;
        }
    }
    ctx->pc = 0x532DECu;
label_532dec:
    // 0x532dec: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532df0:
    // 0x532df0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532df4:
    // 0x532df4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532df8:
    // 0x532df8: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532dfc:
    // 0x532dfc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532e00:
    // 0x532e00: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532e00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532e04:
    // 0x532e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532e08:
    // 0x532e08: 0x10000086  b           . + 4 + (0x86 << 2)
label_532e0c:
    if (ctx->pc == 0x532E0Cu) {
        ctx->pc = 0x532E0Cu;
            // 0x532e0c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532E10u;
        goto label_532e10;
    }
    ctx->pc = 0x532E08u;
    {
        const bool branch_taken_0x532e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532E08u;
            // 0x532e0c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532e08) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532E10u;
label_532e10:
    // 0x532e10: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532e14:
    // 0x532e14: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x532e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_532e18:
    // 0x532e18: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532e1c:
    // 0x532e1c: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532e20:
    // 0x532e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532e24:
    // 0x532e24: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532e28:
    // 0x532e28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532e2c:
    // 0x532e2c: 0x10000077  b           . + 4 + (0x77 << 2)
label_532e30:
    if (ctx->pc == 0x532E30u) {
        ctx->pc = 0x532E30u;
            // 0x532e30: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532E34u;
        goto label_532e34;
    }
    ctx->pc = 0x532E2Cu;
    {
        const bool branch_taken_0x532e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532E2Cu;
            // 0x532e30: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532e2c) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532E34u;
label_532e34:
    // 0x532e34: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532e38:
    // 0x532e38: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x532e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_532e3c:
    // 0x532e3c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x532e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_532e40:
    // 0x532e40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532e44:
    // 0x532e44: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532e48:
    // 0x532e48: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x532e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_532e4c:
    // 0x532e4c: 0x320f809  jalr        $t9
label_532e50:
    if (ctx->pc == 0x532E50u) {
        ctx->pc = 0x532E50u;
            // 0x532e50: 0x24a5d078  addiu       $a1, $a1, -0x2F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955128));
        ctx->pc = 0x532E54u;
        goto label_532e54;
    }
    ctx->pc = 0x532E4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532E54u);
        ctx->pc = 0x532E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532E4Cu;
            // 0x532e50: 0x24a5d078  addiu       $a1, $a1, -0x2F88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532E54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532E54u; }
            if (ctx->pc != 0x532E54u) { return; }
        }
        }
    }
    ctx->pc = 0x532E54u;
label_532e54:
    // 0x532e54: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532e58:
    // 0x532e58: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532e5c:
    // 0x532e5c: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532e60:
    if (ctx->pc == 0x532E60u) {
        ctx->pc = 0x532E60u;
            // 0x532e60: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532E64u;
        goto label_532e64;
    }
    ctx->pc = 0x532E5Cu;
    {
        const bool branch_taken_0x532e5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532e5c) {
            ctx->pc = 0x532E60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532E5Cu;
            // 0x532e60: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532E94u;
            goto label_532e94;
        }
    }
    ctx->pc = 0x532E64u;
label_532e64:
    // 0x532e64: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532e68:
    // 0x532e68: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532e6c:
    if (ctx->pc == 0x532E6Cu) {
        ctx->pc = 0x532E70u;
        goto label_532e70;
    }
    ctx->pc = 0x532E68u;
    {
        const bool branch_taken_0x532e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532e68) {
            ctx->pc = 0x532E90u;
            goto label_532e90;
        }
    }
    ctx->pc = 0x532E70u;
label_532e70:
    // 0x532e70: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532e74:
    // 0x532e74: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532e78:
    if (ctx->pc == 0x532E78u) {
        ctx->pc = 0x532E7Cu;
        goto label_532e7c;
    }
    ctx->pc = 0x532E74u;
    {
        const bool branch_taken_0x532e74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532e74) {
            ctx->pc = 0x532E90u;
            goto label_532e90;
        }
    }
    ctx->pc = 0x532E7Cu;
label_532e7c:
    // 0x532e7c: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532e80:
    // 0x532e80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532e84:
    if (ctx->pc == 0x532E84u) {
        ctx->pc = 0x532E88u;
        goto label_532e88;
    }
    ctx->pc = 0x532E80u;
    {
        const bool branch_taken_0x532e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532e80) {
            ctx->pc = 0x532E90u;
            goto label_532e90;
        }
    }
    ctx->pc = 0x532E88u;
label_532e88:
    // 0x532e88: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532e8c:
    if (ctx->pc == 0x532E8Cu) {
        ctx->pc = 0x532E8Cu;
            // 0x532e8c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532E90u;
        goto label_532e90;
    }
    ctx->pc = 0x532E88u;
    {
        const bool branch_taken_0x532e88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532e88) {
            ctx->pc = 0x532E8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532E88u;
            // 0x532e8c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532E94u;
            goto label_532e94;
        }
    }
    ctx->pc = 0x532E90u;
label_532e90:
    // 0x532e90: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532e94:
    // 0x532e94: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532e98:
    // 0x532e98: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532e9c:
    if (ctx->pc == 0x532E9Cu) {
        ctx->pc = 0x532E9Cu;
            // 0x532e9c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532EA0u;
        goto label_532ea0;
    }
    ctx->pc = 0x532E98u;
    {
        const bool branch_taken_0x532e98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532E98u;
            // 0x532e9c: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532e98) {
            ctx->pc = 0x532EC4u;
            goto label_532ec4;
        }
    }
    ctx->pc = 0x532EA0u;
label_532ea0:
    // 0x532ea0: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532ea4:
    // 0x532ea4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532ea8:
    // 0x532ea8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532eac:
    // 0x532eac: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532eacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532eb0:
    // 0x532eb0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532eb4:
    // 0x532eb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532eb8:
    // 0x532eb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532ebc:
    // 0x532ebc: 0x10000059  b           . + 4 + (0x59 << 2)
label_532ec0:
    if (ctx->pc == 0x532EC0u) {
        ctx->pc = 0x532EC0u;
            // 0x532ec0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532EC4u;
        goto label_532ec4;
    }
    ctx->pc = 0x532EBCu;
    {
        const bool branch_taken_0x532ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532EBCu;
            // 0x532ec0: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532ebc) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532EC4u;
label_532ec4:
    // 0x532ec4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532ec8:
    // 0x532ec8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x532ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_532ecc:
    // 0x532ecc: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532eccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532ed0:
    // 0x532ed0: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532ed4:
    // 0x532ed4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532ed8:
    // 0x532ed8: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532edc:
    // 0x532edc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532ee0:
    // 0x532ee0: 0x1000004a  b           . + 4 + (0x4A << 2)
label_532ee4:
    if (ctx->pc == 0x532EE4u) {
        ctx->pc = 0x532EE4u;
            // 0x532ee4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532EE8u;
        goto label_532ee8;
    }
    ctx->pc = 0x532EE0u;
    {
        const bool branch_taken_0x532ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532EE0u;
            // 0x532ee4: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532ee0) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532EE8u;
label_532ee8:
    // 0x532ee8: 0xc14d2a4  jal         func_534A90
label_532eec:
    if (ctx->pc == 0x532EECu) {
        ctx->pc = 0x532EF0u;
        goto label_532ef0;
    }
    ctx->pc = 0x532EE8u;
    SET_GPR_U32(ctx, 31, 0x532EF0u);
    ctx->pc = 0x534A90u;
    if (runtime->hasFunction(0x534A90u)) {
        auto targetFn = runtime->lookupFunction(0x534A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532EF0u; }
        if (ctx->pc != 0x532EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00534A90_0x534a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532EF0u; }
        if (ctx->pc != 0x532EF0u) { return; }
    }
    ctx->pc = 0x532EF0u;
label_532ef0:
    // 0x532ef0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_532ef4:
    if (ctx->pc == 0x532EF4u) {
        ctx->pc = 0x532EF4u;
            // 0x532ef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x532EF8u;
        goto label_532ef8;
    }
    ctx->pc = 0x532EF0u;
    {
        const bool branch_taken_0x532ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x532EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532EF0u;
            // 0x532ef4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532ef0) {
            ctx->pc = 0x532F14u;
            goto label_532f14;
        }
    }
    ctx->pc = 0x532EF8u;
label_532ef8:
    // 0x532ef8: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532efc:
    // 0x532efc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532f00:
    // 0x532f00: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532f04:
    // 0x532f04: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532f08:
    // 0x532f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532f0c:
    // 0x532f0c: 0x10000045  b           . + 4 + (0x45 << 2)
label_532f10:
    if (ctx->pc == 0x532F10u) {
        ctx->pc = 0x532F10u;
            // 0x532f10: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532F14u;
        goto label_532f14;
    }
    ctx->pc = 0x532F0Cu;
    {
        const bool branch_taken_0x532f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532F0Cu;
            // 0x532f10: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532f0c) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532F14u;
label_532f14:
    // 0x532f14: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532f18:
    // 0x532f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x532f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_532f1c:
    // 0x532f1c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x532f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_532f20:
    // 0x532f20: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x532f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_532f24:
    // 0x532f24: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x532f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_532f28:
    // 0x532f28: 0x320f809  jalr        $t9
label_532f2c:
    if (ctx->pc == 0x532F2Cu) {
        ctx->pc = 0x532F2Cu;
            // 0x532f2c: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->pc = 0x532F30u;
        goto label_532f30;
    }
    ctx->pc = 0x532F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x532F30u);
        ctx->pc = 0x532F2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532F28u;
            // 0x532f2c: 0x26250338  addiu       $a1, $s1, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x532F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x532F30u; }
            if (ctx->pc != 0x532F30u) { return; }
        }
        }
    }
    ctx->pc = 0x532F30u;
label_532f30:
    // 0x532f30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x532f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_532f34:
    // 0x532f34: 0x2402ff2e  addiu       $v0, $zero, -0xD2
    ctx->pc = 0x532f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_532f38:
    // 0x532f38: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
label_532f3c:
    if (ctx->pc == 0x532F3Cu) {
        ctx->pc = 0x532F3Cu;
            // 0x532f3c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x532F40u;
        goto label_532f40;
    }
    ctx->pc = 0x532F38u;
    {
        const bool branch_taken_0x532f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532f38) {
            ctx->pc = 0x532F3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532F38u;
            // 0x532f3c: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532F70u;
            goto label_532f70;
        }
    }
    ctx->pc = 0x532F40u;
label_532f40:
    // 0x532f40: 0x2402ff38  addiu       $v0, $zero, -0xC8
    ctx->pc = 0x532f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_532f44:
    // 0x532f44: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_532f48:
    if (ctx->pc == 0x532F48u) {
        ctx->pc = 0x532F4Cu;
        goto label_532f4c;
    }
    ctx->pc = 0x532F44u;
    {
        const bool branch_taken_0x532f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532f44) {
            ctx->pc = 0x532F6Cu;
            goto label_532f6c;
        }
    }
    ctx->pc = 0x532F4Cu;
label_532f4c:
    // 0x532f4c: 0x2402ff9c  addiu       $v0, $zero, -0x64
    ctx->pc = 0x532f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_532f50:
    // 0x532f50: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_532f54:
    if (ctx->pc == 0x532F54u) {
        ctx->pc = 0x532F58u;
        goto label_532f58;
    }
    ctx->pc = 0x532F50u;
    {
        const bool branch_taken_0x532f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532f50) {
            ctx->pc = 0x532F6Cu;
            goto label_532f6c;
        }
    }
    ctx->pc = 0x532F58u;
label_532f58:
    // 0x532f58: 0x2402ffa5  addiu       $v0, $zero, -0x5B
    ctx->pc = 0x532f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_532f5c:
    // 0x532f5c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_532f60:
    if (ctx->pc == 0x532F60u) {
        ctx->pc = 0x532F64u;
        goto label_532f64;
    }
    ctx->pc = 0x532F5Cu;
    {
        const bool branch_taken_0x532f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x532f5c) {
            ctx->pc = 0x532F6Cu;
            goto label_532f6c;
        }
    }
    ctx->pc = 0x532F64u;
label_532f64:
    // 0x532f64: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
label_532f68:
    if (ctx->pc == 0x532F68u) {
        ctx->pc = 0x532F68u;
            // 0x532f68: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x532F6Cu;
        goto label_532f6c;
    }
    ctx->pc = 0x532F64u;
    {
        const bool branch_taken_0x532f64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x532f64) {
            ctx->pc = 0x532F68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x532F64u;
            // 0x532f68: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x532F70u;
            goto label_532f70;
        }
    }
    ctx->pc = 0x532F6Cu;
label_532f6c:
    // 0x532f6c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x532f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532f70:
    // 0x532f70: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x532f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_532f74:
    // 0x532f74: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_532f78:
    if (ctx->pc == 0x532F78u) {
        ctx->pc = 0x532F78u;
            // 0x532f78: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x532F7Cu;
        goto label_532f7c;
    }
    ctx->pc = 0x532F74u;
    {
        const bool branch_taken_0x532f74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x532F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532F74u;
            // 0x532f78: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532f74) {
            ctx->pc = 0x532FA0u;
            goto label_532fa0;
        }
    }
    ctx->pc = 0x532F7Cu;
label_532f7c:
    // 0x532f7c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x532f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_532f80:
    // 0x532f80: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532f80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532f84:
    // 0x532f84: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x532f84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_532f88:
    // 0x532f88: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532f8c:
    // 0x532f8c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532f90:
    // 0x532f90: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532f94:
    // 0x532f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532f98:
    // 0x532f98: 0x10000022  b           . + 4 + (0x22 << 2)
label_532f9c:
    if (ctx->pc == 0x532F9Cu) {
        ctx->pc = 0x532F9Cu;
            // 0x532f9c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532FA0u;
        goto label_532fa0;
    }
    ctx->pc = 0x532F98u;
    {
        const bool branch_taken_0x532f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532F98u;
            // 0x532f9c: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532f98) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532FA0u;
label_532fa0:
    // 0x532fa0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532fa4:
    // 0x532fa4: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x532fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_532fa8:
    // 0x532fa8: 0x8c43cf98  lw          $v1, -0x3068($v0)
    ctx->pc = 0x532fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532fac:
    // 0x532fac: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x532facu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_532fb0:
    // 0x532fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x532fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_532fb4:
    // 0x532fb4: 0x2442b610  addiu       $v0, $v0, -0x49F0
    ctx->pc = 0x532fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948368));
label_532fb8:
    // 0x532fb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x532fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_532fbc:
    // 0x532fbc: 0x10000013  b           . + 4 + (0x13 << 2)
label_532fc0:
    if (ctx->pc == 0x532FC0u) {
        ctx->pc = 0x532FC0u;
            // 0x532fc0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x532FC4u;
        goto label_532fc4;
    }
    ctx->pc = 0x532FBCu;
    {
        const bool branch_taken_0x532fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532FBCu;
            // 0x532fc0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532fbc) {
            ctx->pc = 0x53300Cu;
            goto label_53300c;
        }
    }
    ctx->pc = 0x532FC4u;
label_532fc4:
    // 0x532fc4: 0xc14d270  jal         func_5349C0
label_532fc8:
    if (ctx->pc == 0x532FC8u) {
        ctx->pc = 0x532FCCu;
        goto label_532fcc;
    }
    ctx->pc = 0x532FC4u;
    SET_GPR_U32(ctx, 31, 0x532FCCu);
    ctx->pc = 0x5349C0u;
    if (runtime->hasFunction(0x5349C0u)) {
        auto targetFn = runtime->lookupFunction(0x5349C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532FCCu; }
        if (ctx->pc != 0x532FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005349C0_0x5349c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x532FCCu; }
        if (ctx->pc != 0x532FCCu) { return; }
    }
    ctx->pc = 0x532FCCu;
label_532fcc:
    // 0x532fcc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_532fd0:
    if (ctx->pc == 0x532FD0u) {
        ctx->pc = 0x532FD0u;
            // 0x532fd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x532FD4u;
        goto label_532fd4;
    }
    ctx->pc = 0x532FCCu;
    {
        const bool branch_taken_0x532fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x532FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532FCCu;
            // 0x532fd0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532fcc) {
            ctx->pc = 0x532FF0u;
            goto label_532ff0;
        }
    }
    ctx->pc = 0x532FD4u;
label_532fd4:
    // 0x532fd4: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532fd8:
    // 0x532fd8: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532fdc:
    // 0x532fdc: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532fe0:
    // 0x532fe0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_532fe4:
    // 0x532fe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x532fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_532fe8:
    // 0x532fe8: 0x1000000e  b           . + 4 + (0xE << 2)
label_532fec:
    if (ctx->pc == 0x532FECu) {
        ctx->pc = 0x532FECu;
            // 0x532fec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x532FF0u;
        goto label_532ff0;
    }
    ctx->pc = 0x532FE8u;
    {
        const bool branch_taken_0x532fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x532FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x532FE8u;
            // 0x532fec: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x532fe8) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x532FF0u;
label_532ff0:
    // 0x532ff0: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x532ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_532ff4:
    // 0x532ff4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x532ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_532ff8:
    // 0x532ff8: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x532ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_532ffc:
    // 0x532ffc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x532ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_533000:
    // 0x533000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x533000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533004:
    // 0x533004: 0x10000007  b           . + 4 + (0x7 << 2)
label_533008:
    if (ctx->pc == 0x533008u) {
        ctx->pc = 0x533008u;
            // 0x533008: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->pc = 0x53300Cu;
        goto label_53300c;
    }
    ctx->pc = 0x533004u;
    {
        const bool branch_taken_0x533004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x533008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533004u;
            // 0x533008: 0xac64cf98  sw          $a0, -0x3068($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533004) {
            ctx->pc = 0x533024u;
            goto label_533024;
        }
    }
    ctx->pc = 0x53300Cu;
label_53300c:
    // 0x53300c: 0x3c020063  lui         $v0, 0x63
    ctx->pc = 0x53300cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)99 << 16));
label_533010:
    // 0x533010: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x533010u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533014:
    // 0x533014: 0x8c44cf98  lw          $a0, -0x3068($v0)
    ctx->pc = 0x533014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954904)));
label_533018:
    // 0x533018: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x533018u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_53301c:
    // 0x53301c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x53301cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_533020:
    // 0x533020: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x533020u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_533024:
    // 0x533024: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x533024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_533028:
    // 0x533028: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x533028u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_53302c:
    // 0x53302c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x53302cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_533030:
    // 0x533030: 0x3e00008  jr          $ra
label_533034:
    if (ctx->pc == 0x533034u) {
        ctx->pc = 0x533034u;
            // 0x533034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x533038u;
        goto label_533038;
    }
    ctx->pc = 0x533030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x533034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533030u;
            // 0x533034: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x533038u;
label_533038:
    // 0x533038: 0x0  nop
    ctx->pc = 0x533038u;
    // NOP
label_53303c:
    // 0x53303c: 0x0  nop
    ctx->pc = 0x53303cu;
    // NOP
label_533040:
    // 0x533040: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x533040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_533044:
    // 0x533044: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x533044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_533048:
    // 0x533048: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x533048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53304c:
    // 0x53304c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x53304cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_533050:
    // 0x533050: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x533050u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_533054:
    // 0x533054: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x533054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_533058:
    // 0x533058: 0x320f809  jalr        $t9
label_53305c:
    if (ctx->pc == 0x53305Cu) {
        ctx->pc = 0x53305Cu;
            // 0x53305c: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->pc = 0x533060u;
        goto label_533060;
    }
    ctx->pc = 0x533058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x533060u);
        ctx->pc = 0x53305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533058u;
            // 0x53305c: 0x26050338  addiu       $a1, $s0, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x533060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x533060u; }
            if (ctx->pc != 0x533060u) { return; }
        }
        }
    }
    ctx->pc = 0x533060u;
label_533060:
    // 0x533060: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x533060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
label_533064:
    // 0x533064: 0x3c0500be  lui         $a1, 0xBE
    ctx->pc = 0x533064u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)190 << 16));
label_533068:
    // 0x533068: 0x8c86cf98  lw          $a2, -0x3068($a0)
    ctx->pc = 0x533068u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294954904)));
label_53306c:
    // 0x53306c: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x53306cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_533070:
    // 0x533070: 0x24a5b610  addiu       $a1, $a1, -0x49F0
    ctx->pc = 0x533070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
label_533074:
    // 0x533074: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x533074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_533078:
    // 0x533078: 0x2404ff2e  addiu       $a0, $zero, -0xD2
    ctx->pc = 0x533078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_53307c:
    // 0x53307c: 0xac66cf98  sw          $a2, -0x3068($v1)
    ctx->pc = 0x53307cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 6));
label_533080:
    // 0x533080: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x533080u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_533084:
    // 0x533084: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x533084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_533088:
    // 0x533088: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x533088u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_53308c:
    // 0x53308c: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x53308cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_533090:
    // 0x533090: 0x50a4000d  beql        $a1, $a0, . + 4 + (0xD << 2)
label_533094:
    if (ctx->pc == 0x533094u) {
        ctx->pc = 0x533094u;
            // 0x533094: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x533098u;
        goto label_533098;
    }
    ctx->pc = 0x533090u;
    {
        const bool branch_taken_0x533090 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x533090) {
            ctx->pc = 0x533094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533090u;
            // 0x533094: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5330C8u;
            goto label_5330c8;
        }
    }
    ctx->pc = 0x533098u;
label_533098:
    // 0x533098: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x533098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_53309c:
    // 0x53309c: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
label_5330a0:
    if (ctx->pc == 0x5330A0u) {
        ctx->pc = 0x5330A4u;
        goto label_5330a4;
    }
    ctx->pc = 0x53309Cu;
    {
        const bool branch_taken_0x53309c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x53309c) {
            ctx->pc = 0x5330C4u;
            goto label_5330c4;
        }
    }
    ctx->pc = 0x5330A4u;
label_5330a4:
    // 0x5330a4: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x5330a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_5330a8:
    // 0x5330a8: 0x10a30006  beq         $a1, $v1, . + 4 + (0x6 << 2)
label_5330ac:
    if (ctx->pc == 0x5330ACu) {
        ctx->pc = 0x5330B0u;
        goto label_5330b0;
    }
    ctx->pc = 0x5330A8u;
    {
        const bool branch_taken_0x5330a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5330a8) {
            ctx->pc = 0x5330C4u;
            goto label_5330c4;
        }
    }
    ctx->pc = 0x5330B0u;
label_5330b0:
    // 0x5330b0: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x5330b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_5330b4:
    // 0x5330b4: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_5330b8:
    if (ctx->pc == 0x5330B8u) {
        ctx->pc = 0x5330BCu;
        goto label_5330bc;
    }
    ctx->pc = 0x5330B4u;
    {
        const bool branch_taken_0x5330b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x5330b4) {
            ctx->pc = 0x5330C4u;
            goto label_5330c4;
        }
    }
    ctx->pc = 0x5330BCu;
label_5330bc:
    // 0x5330bc: 0x50a00002  beql        $a1, $zero, . + 4 + (0x2 << 2)
label_5330c0:
    if (ctx->pc == 0x5330C0u) {
        ctx->pc = 0x5330C0u;
            // 0x5330c0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x5330C4u;
        goto label_5330c4;
    }
    ctx->pc = 0x5330BCu;
    {
        const bool branch_taken_0x5330bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x5330bc) {
            ctx->pc = 0x5330C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5330BCu;
            // 0x5330c0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5330C8u;
            goto label_5330c8;
        }
    }
    ctx->pc = 0x5330C4u;
label_5330c4:
    // 0x5330c4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5330c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5330c8:
    // 0x5330c8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5330c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_5330cc:
    // 0x5330cc: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5330ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5330d0:
    // 0x5330d0: 0x8c64cf98  lw          $a0, -0x3068($v1)
    ctx->pc = 0x5330d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954904)));
label_5330d4:
    // 0x5330d4: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x5330d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_5330d8:
    // 0x5330d8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x5330d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_5330dc:
    // 0x5330dc: 0xac64cf98  sw          $a0, -0x3068($v1)
    ctx->pc = 0x5330dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294954904), GPR_U32(ctx, 4));
label_5330e0:
    // 0x5330e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5330e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5330e4:
    // 0x5330e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5330e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5330e8:
    // 0x5330e8: 0x3e00008  jr          $ra
label_5330ec:
    if (ctx->pc == 0x5330ECu) {
        ctx->pc = 0x5330ECu;
            // 0x5330ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x5330F0u;
        goto label_5330f0;
    }
    ctx->pc = 0x5330E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5330ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5330E8u;
            // 0x5330ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5330F0u;
label_5330f0:
    // 0x5330f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x5330f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_5330f4:
    // 0x5330f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x5330f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5330f8:
    // 0x5330f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x5330f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_5330fc:
    // 0x5330fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x5330fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_533100:
    // 0x533100: 0x8082002c  lb          $v0, 0x2C($a0)
    ctx->pc = 0x533100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
label_533104:
    // 0x533104: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x533104u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_533108:
    // 0x533108: 0x80850024  lb          $a1, 0x24($a0)
    ctx->pc = 0x533108u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 36)));
label_53310c:
    // 0x53310c: 0xc04896a  jal         func_1225A8
label_533110:
    if (ctx->pc == 0x533110u) {
        ctx->pc = 0x533110u;
            // 0x533110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533114u;
        goto label_533114;
    }
    ctx->pc = 0x53310Cu;
    SET_GPR_U32(ctx, 31, 0x533114u);
    ctx->pc = 0x533110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x53310Cu;
            // 0x533110: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1225A8u;
    if (runtime->hasFunction(0x1225A8u)) {
        auto targetFn = runtime->lookupFunction(0x1225A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533114u; }
        if (ctx->pc != 0x533114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001225A8_0x1225a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x533114u; }
        if (ctx->pc != 0x533114u) { return; }
    }
    ctx->pc = 0x533114u;
label_533114:
    // 0x533114: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x533114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_533118:
    // 0x533118: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_53311c:
    if (ctx->pc == 0x53311Cu) {
        ctx->pc = 0x53311Cu;
            // 0x53311c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x533120u;
        goto label_533120;
    }
    ctx->pc = 0x533118u;
    {
        const bool branch_taken_0x533118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x53311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x533118u;
            // 0x53311c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x533118) {
            ctx->pc = 0x53314Cu;
            goto label_53314c;
        }
    }
    ctx->pc = 0x533120u;
label_533120:
    // 0x533120: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x533120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_533124:
    // 0x533124: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_533128:
    if (ctx->pc == 0x533128u) {
        ctx->pc = 0x533128u;
            // 0x533128: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x53312Cu;
        goto label_53312c;
    }
    ctx->pc = 0x533124u;
    {
        const bool branch_taken_0x533124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533124) {
            ctx->pc = 0x533128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533124u;
            // 0x533128: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533150u;
            goto label_533150;
        }
    }
    ctx->pc = 0x53312Cu;
label_53312c:
    // 0x53312c: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x53312cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_533130:
    // 0x533130: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_533134:
    if (ctx->pc == 0x533134u) {
        ctx->pc = 0x533138u;
        goto label_533138;
    }
    ctx->pc = 0x533130u;
    {
        const bool branch_taken_0x533130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x533130) {
            ctx->pc = 0x53314Cu;
            goto label_53314c;
        }
    }
    ctx->pc = 0x533138u;
label_533138:
    // 0x533138: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x533138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_53313c:
    // 0x53313c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_533140:
    if (ctx->pc == 0x533140u) {
        ctx->pc = 0x533144u;
        goto label_533144;
    }
    ctx->pc = 0x53313Cu;
    {
        const bool branch_taken_0x53313c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x53313c) {
            ctx->pc = 0x53314Cu;
            goto label_53314c;
        }
    }
    ctx->pc = 0x533144u;
label_533144:
    // 0x533144: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_533148:
    if (ctx->pc == 0x533148u) {
        ctx->pc = 0x533148u;
            // 0x533148: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->pc = 0x53314Cu;
        goto label_53314c;
    }
    ctx->pc = 0x533144u;
    {
        const bool branch_taken_0x533144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x533144) {
            ctx->pc = 0x533148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x533144u;
            // 0x533148: 0x24030013  addiu       $v1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x533150u;
            goto label_533150;
        }
    }
    ctx->pc = 0x53314Cu;
label_53314c:
    // 0x53314c: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x53314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_533150:
    // 0x533150: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x533150u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_533154:
    // 0x533154: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x533154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_533158:
    // 0x533158: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x533158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_53315c:
    // 0x53315c: 0x3e00008  jr          $ra
label_533160:
    if (ctx->pc == 0x533160u) {
        ctx->pc = 0x533160u;
            // 0x533160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x533164u;
        goto label_533164;
    }
    ctx->pc = 0x53315Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x533160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53315Cu;
            // 0x533160: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x533164u;
label_533164:
    // 0x533164: 0x0  nop
    ctx->pc = 0x533164u;
    // NOP
label_533168:
    // 0x533168: 0x0  nop
    ctx->pc = 0x533168u;
    // NOP
label_53316c:
    // 0x53316c: 0x0  nop
    ctx->pc = 0x53316cu;
    // NOP
label_533170:
    // 0x533170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x533170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_533174:
    // 0x533174: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x533174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_533178:
    // 0x533178: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x533178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_53317c:
    // 0x53317c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
label_533180:
    if (ctx->pc == 0x533180u) {
        ctx->pc = 0x533180u;
            // 0x533180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x533184u;
        goto label_533184;
    }
    ctx->pc = 0x53317Cu;
    {
        const bool branch_taken_0x53317c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x533180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x53317Cu;
            // 0x533180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x53317c) {
            ctx->pc = 0x533188u;
            goto label_533188;
        }
    }
    ctx->pc = 0x533184u;
label_533184:
    // 0x533184: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x533184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_533188:
    // 0x533188: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x533188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_53318c:
    // 0x53318c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x53318cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_533190:
    // 0x533190: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x533190u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_533194:
    // 0x533194: 0xc0486a2  jal         func_121A88
label_533198:
    if (ctx->pc == 0x533198u) {
        ctx->pc = 0x533198u;
            // 0x533198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x53319Cu;
        goto label_53319c;
    }
    ctx->pc = 0x533194u;
    SET_GPR_U32(ctx, 31, 0x53319Cu);
    ctx->pc = 0x533198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x533194u;
            // 0x533198: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x121A88u;
    if (runtime->hasFunction(0x121A88u)) {
        auto targetFn = runtime->lookupFunction(0x121A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53319Cu; }
        if (ctx->pc != 0x53319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00121A88_0x121a88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x53319Cu; }
        if (ctx->pc != 0x53319Cu) { return; }
    }
    ctx->pc = 0x53319Cu;
label_53319c:
    // 0x53319c: 0x2403ff2e  addiu       $v1, $zero, -0xD2
    ctx->pc = 0x53319cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967086));
label_5331a0:
    // 0x5331a0: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
label_5331a4:
    if (ctx->pc == 0x5331A4u) {
        ctx->pc = 0x5331A4u;
            // 0x5331a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x5331A8u;
        goto label_5331a8;
    }
    ctx->pc = 0x5331A0u;
    {
        const bool branch_taken_0x5331a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x5331A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5331A0u;
            // 0x5331a4: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5331a0) {
            ctx->pc = 0x5331D4u;
            goto label_5331d4;
        }
    }
    ctx->pc = 0x5331A8u;
label_5331a8:
    // 0x5331a8: 0x2403ff38  addiu       $v1, $zero, -0xC8
    ctx->pc = 0x5331a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967096));
label_5331ac:
    // 0x5331ac: 0x5043000a  beql        $v0, $v1, . + 4 + (0xA << 2)
label_5331b0:
    if (ctx->pc == 0x5331B0u) {
        ctx->pc = 0x5331B0u;
            // 0x5331b0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x5331B4u;
        goto label_5331b4;
    }
    ctx->pc = 0x5331ACu;
    {
        const bool branch_taken_0x5331ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5331ac) {
            ctx->pc = 0x5331B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5331ACu;
            // 0x5331b0: 0x24030016  addiu       $v1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5331D8u;
            goto label_5331d8;
        }
    }
    ctx->pc = 0x5331B4u;
label_5331b4:
    // 0x5331b4: 0x2403ff9c  addiu       $v1, $zero, -0x64
    ctx->pc = 0x5331b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
label_5331b8:
    // 0x5331b8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_5331bc:
    if (ctx->pc == 0x5331BCu) {
        ctx->pc = 0x5331C0u;
        goto label_5331c0;
    }
    ctx->pc = 0x5331B8u;
    {
        const bool branch_taken_0x5331b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5331b8) {
            ctx->pc = 0x5331D4u;
            goto label_5331d4;
        }
    }
    ctx->pc = 0x5331C0u;
label_5331c0:
    // 0x5331c0: 0x2403ffa5  addiu       $v1, $zero, -0x5B
    ctx->pc = 0x5331c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967205));
label_5331c4:
    // 0x5331c4: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_5331c8:
    if (ctx->pc == 0x5331C8u) {
        ctx->pc = 0x5331CCu;
        goto label_5331cc;
    }
    ctx->pc = 0x5331C4u;
    {
        const bool branch_taken_0x5331c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x5331c4) {
            ctx->pc = 0x5331D4u;
            goto label_5331d4;
        }
    }
    ctx->pc = 0x5331CCu;
label_5331cc:
    // 0x5331cc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_5331d0:
    if (ctx->pc == 0x5331D0u) {
        ctx->pc = 0x5331D0u;
            // 0x5331d0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x5331D4u;
        goto label_5331d4;
    }
    ctx->pc = 0x5331CCu;
    {
        const bool branch_taken_0x5331cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5331cc) {
            ctx->pc = 0x5331D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5331CCu;
            // 0x5331d0: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5331D8u;
            goto label_5331d8;
        }
    }
    ctx->pc = 0x5331D4u;
label_5331d4:
    // 0x5331d4: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x5331d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_5331d8:
    // 0x5331d8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x5331d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_5331dc:
    // 0x5331dc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x5331dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_5331e0:
    // 0x5331e0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5331e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5331e4:
    // 0x5331e4: 0x3e00008  jr          $ra
label_5331e8:
    if (ctx->pc == 0x5331E8u) {
        ctx->pc = 0x5331E8u;
            // 0x5331e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x5331ECu;
        goto label_5331ec;
    }
    ctx->pc = 0x5331E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5331E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5331E4u;
            // 0x5331e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5331ECu;
label_5331ec:
    // 0x5331ec: 0x0  nop
    ctx->pc = 0x5331ecu;
    // NOP
}
