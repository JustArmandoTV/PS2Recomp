#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00417A20
// Address: 0x417a20 - 0x4195c0
void sub_00417A20_0x417a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00417A20_0x417a20");
#endif

    switch (ctx->pc) {
        case 0x417a20u: goto label_417a20;
        case 0x417a24u: goto label_417a24;
        case 0x417a28u: goto label_417a28;
        case 0x417a2cu: goto label_417a2c;
        case 0x417a30u: goto label_417a30;
        case 0x417a34u: goto label_417a34;
        case 0x417a38u: goto label_417a38;
        case 0x417a3cu: goto label_417a3c;
        case 0x417a40u: goto label_417a40;
        case 0x417a44u: goto label_417a44;
        case 0x417a48u: goto label_417a48;
        case 0x417a4cu: goto label_417a4c;
        case 0x417a50u: goto label_417a50;
        case 0x417a54u: goto label_417a54;
        case 0x417a58u: goto label_417a58;
        case 0x417a5cu: goto label_417a5c;
        case 0x417a60u: goto label_417a60;
        case 0x417a64u: goto label_417a64;
        case 0x417a68u: goto label_417a68;
        case 0x417a6cu: goto label_417a6c;
        case 0x417a70u: goto label_417a70;
        case 0x417a74u: goto label_417a74;
        case 0x417a78u: goto label_417a78;
        case 0x417a7cu: goto label_417a7c;
        case 0x417a80u: goto label_417a80;
        case 0x417a84u: goto label_417a84;
        case 0x417a88u: goto label_417a88;
        case 0x417a8cu: goto label_417a8c;
        case 0x417a90u: goto label_417a90;
        case 0x417a94u: goto label_417a94;
        case 0x417a98u: goto label_417a98;
        case 0x417a9cu: goto label_417a9c;
        case 0x417aa0u: goto label_417aa0;
        case 0x417aa4u: goto label_417aa4;
        case 0x417aa8u: goto label_417aa8;
        case 0x417aacu: goto label_417aac;
        case 0x417ab0u: goto label_417ab0;
        case 0x417ab4u: goto label_417ab4;
        case 0x417ab8u: goto label_417ab8;
        case 0x417abcu: goto label_417abc;
        case 0x417ac0u: goto label_417ac0;
        case 0x417ac4u: goto label_417ac4;
        case 0x417ac8u: goto label_417ac8;
        case 0x417accu: goto label_417acc;
        case 0x417ad0u: goto label_417ad0;
        case 0x417ad4u: goto label_417ad4;
        case 0x417ad8u: goto label_417ad8;
        case 0x417adcu: goto label_417adc;
        case 0x417ae0u: goto label_417ae0;
        case 0x417ae4u: goto label_417ae4;
        case 0x417ae8u: goto label_417ae8;
        case 0x417aecu: goto label_417aec;
        case 0x417af0u: goto label_417af0;
        case 0x417af4u: goto label_417af4;
        case 0x417af8u: goto label_417af8;
        case 0x417afcu: goto label_417afc;
        case 0x417b00u: goto label_417b00;
        case 0x417b04u: goto label_417b04;
        case 0x417b08u: goto label_417b08;
        case 0x417b0cu: goto label_417b0c;
        case 0x417b10u: goto label_417b10;
        case 0x417b14u: goto label_417b14;
        case 0x417b18u: goto label_417b18;
        case 0x417b1cu: goto label_417b1c;
        case 0x417b20u: goto label_417b20;
        case 0x417b24u: goto label_417b24;
        case 0x417b28u: goto label_417b28;
        case 0x417b2cu: goto label_417b2c;
        case 0x417b30u: goto label_417b30;
        case 0x417b34u: goto label_417b34;
        case 0x417b38u: goto label_417b38;
        case 0x417b3cu: goto label_417b3c;
        case 0x417b40u: goto label_417b40;
        case 0x417b44u: goto label_417b44;
        case 0x417b48u: goto label_417b48;
        case 0x417b4cu: goto label_417b4c;
        case 0x417b50u: goto label_417b50;
        case 0x417b54u: goto label_417b54;
        case 0x417b58u: goto label_417b58;
        case 0x417b5cu: goto label_417b5c;
        case 0x417b60u: goto label_417b60;
        case 0x417b64u: goto label_417b64;
        case 0x417b68u: goto label_417b68;
        case 0x417b6cu: goto label_417b6c;
        case 0x417b70u: goto label_417b70;
        case 0x417b74u: goto label_417b74;
        case 0x417b78u: goto label_417b78;
        case 0x417b7cu: goto label_417b7c;
        case 0x417b80u: goto label_417b80;
        case 0x417b84u: goto label_417b84;
        case 0x417b88u: goto label_417b88;
        case 0x417b8cu: goto label_417b8c;
        case 0x417b90u: goto label_417b90;
        case 0x417b94u: goto label_417b94;
        case 0x417b98u: goto label_417b98;
        case 0x417b9cu: goto label_417b9c;
        case 0x417ba0u: goto label_417ba0;
        case 0x417ba4u: goto label_417ba4;
        case 0x417ba8u: goto label_417ba8;
        case 0x417bacu: goto label_417bac;
        case 0x417bb0u: goto label_417bb0;
        case 0x417bb4u: goto label_417bb4;
        case 0x417bb8u: goto label_417bb8;
        case 0x417bbcu: goto label_417bbc;
        case 0x417bc0u: goto label_417bc0;
        case 0x417bc4u: goto label_417bc4;
        case 0x417bc8u: goto label_417bc8;
        case 0x417bccu: goto label_417bcc;
        case 0x417bd0u: goto label_417bd0;
        case 0x417bd4u: goto label_417bd4;
        case 0x417bd8u: goto label_417bd8;
        case 0x417bdcu: goto label_417bdc;
        case 0x417be0u: goto label_417be0;
        case 0x417be4u: goto label_417be4;
        case 0x417be8u: goto label_417be8;
        case 0x417becu: goto label_417bec;
        case 0x417bf0u: goto label_417bf0;
        case 0x417bf4u: goto label_417bf4;
        case 0x417bf8u: goto label_417bf8;
        case 0x417bfcu: goto label_417bfc;
        case 0x417c00u: goto label_417c00;
        case 0x417c04u: goto label_417c04;
        case 0x417c08u: goto label_417c08;
        case 0x417c0cu: goto label_417c0c;
        case 0x417c10u: goto label_417c10;
        case 0x417c14u: goto label_417c14;
        case 0x417c18u: goto label_417c18;
        case 0x417c1cu: goto label_417c1c;
        case 0x417c20u: goto label_417c20;
        case 0x417c24u: goto label_417c24;
        case 0x417c28u: goto label_417c28;
        case 0x417c2cu: goto label_417c2c;
        case 0x417c30u: goto label_417c30;
        case 0x417c34u: goto label_417c34;
        case 0x417c38u: goto label_417c38;
        case 0x417c3cu: goto label_417c3c;
        case 0x417c40u: goto label_417c40;
        case 0x417c44u: goto label_417c44;
        case 0x417c48u: goto label_417c48;
        case 0x417c4cu: goto label_417c4c;
        case 0x417c50u: goto label_417c50;
        case 0x417c54u: goto label_417c54;
        case 0x417c58u: goto label_417c58;
        case 0x417c5cu: goto label_417c5c;
        case 0x417c60u: goto label_417c60;
        case 0x417c64u: goto label_417c64;
        case 0x417c68u: goto label_417c68;
        case 0x417c6cu: goto label_417c6c;
        case 0x417c70u: goto label_417c70;
        case 0x417c74u: goto label_417c74;
        case 0x417c78u: goto label_417c78;
        case 0x417c7cu: goto label_417c7c;
        case 0x417c80u: goto label_417c80;
        case 0x417c84u: goto label_417c84;
        case 0x417c88u: goto label_417c88;
        case 0x417c8cu: goto label_417c8c;
        case 0x417c90u: goto label_417c90;
        case 0x417c94u: goto label_417c94;
        case 0x417c98u: goto label_417c98;
        case 0x417c9cu: goto label_417c9c;
        case 0x417ca0u: goto label_417ca0;
        case 0x417ca4u: goto label_417ca4;
        case 0x417ca8u: goto label_417ca8;
        case 0x417cacu: goto label_417cac;
        case 0x417cb0u: goto label_417cb0;
        case 0x417cb4u: goto label_417cb4;
        case 0x417cb8u: goto label_417cb8;
        case 0x417cbcu: goto label_417cbc;
        case 0x417cc0u: goto label_417cc0;
        case 0x417cc4u: goto label_417cc4;
        case 0x417cc8u: goto label_417cc8;
        case 0x417cccu: goto label_417ccc;
        case 0x417cd0u: goto label_417cd0;
        case 0x417cd4u: goto label_417cd4;
        case 0x417cd8u: goto label_417cd8;
        case 0x417cdcu: goto label_417cdc;
        case 0x417ce0u: goto label_417ce0;
        case 0x417ce4u: goto label_417ce4;
        case 0x417ce8u: goto label_417ce8;
        case 0x417cecu: goto label_417cec;
        case 0x417cf0u: goto label_417cf0;
        case 0x417cf4u: goto label_417cf4;
        case 0x417cf8u: goto label_417cf8;
        case 0x417cfcu: goto label_417cfc;
        case 0x417d00u: goto label_417d00;
        case 0x417d04u: goto label_417d04;
        case 0x417d08u: goto label_417d08;
        case 0x417d0cu: goto label_417d0c;
        case 0x417d10u: goto label_417d10;
        case 0x417d14u: goto label_417d14;
        case 0x417d18u: goto label_417d18;
        case 0x417d1cu: goto label_417d1c;
        case 0x417d20u: goto label_417d20;
        case 0x417d24u: goto label_417d24;
        case 0x417d28u: goto label_417d28;
        case 0x417d2cu: goto label_417d2c;
        case 0x417d30u: goto label_417d30;
        case 0x417d34u: goto label_417d34;
        case 0x417d38u: goto label_417d38;
        case 0x417d3cu: goto label_417d3c;
        case 0x417d40u: goto label_417d40;
        case 0x417d44u: goto label_417d44;
        case 0x417d48u: goto label_417d48;
        case 0x417d4cu: goto label_417d4c;
        case 0x417d50u: goto label_417d50;
        case 0x417d54u: goto label_417d54;
        case 0x417d58u: goto label_417d58;
        case 0x417d5cu: goto label_417d5c;
        case 0x417d60u: goto label_417d60;
        case 0x417d64u: goto label_417d64;
        case 0x417d68u: goto label_417d68;
        case 0x417d6cu: goto label_417d6c;
        case 0x417d70u: goto label_417d70;
        case 0x417d74u: goto label_417d74;
        case 0x417d78u: goto label_417d78;
        case 0x417d7cu: goto label_417d7c;
        case 0x417d80u: goto label_417d80;
        case 0x417d84u: goto label_417d84;
        case 0x417d88u: goto label_417d88;
        case 0x417d8cu: goto label_417d8c;
        case 0x417d90u: goto label_417d90;
        case 0x417d94u: goto label_417d94;
        case 0x417d98u: goto label_417d98;
        case 0x417d9cu: goto label_417d9c;
        case 0x417da0u: goto label_417da0;
        case 0x417da4u: goto label_417da4;
        case 0x417da8u: goto label_417da8;
        case 0x417dacu: goto label_417dac;
        case 0x417db0u: goto label_417db0;
        case 0x417db4u: goto label_417db4;
        case 0x417db8u: goto label_417db8;
        case 0x417dbcu: goto label_417dbc;
        case 0x417dc0u: goto label_417dc0;
        case 0x417dc4u: goto label_417dc4;
        case 0x417dc8u: goto label_417dc8;
        case 0x417dccu: goto label_417dcc;
        case 0x417dd0u: goto label_417dd0;
        case 0x417dd4u: goto label_417dd4;
        case 0x417dd8u: goto label_417dd8;
        case 0x417ddcu: goto label_417ddc;
        case 0x417de0u: goto label_417de0;
        case 0x417de4u: goto label_417de4;
        case 0x417de8u: goto label_417de8;
        case 0x417decu: goto label_417dec;
        case 0x417df0u: goto label_417df0;
        case 0x417df4u: goto label_417df4;
        case 0x417df8u: goto label_417df8;
        case 0x417dfcu: goto label_417dfc;
        case 0x417e00u: goto label_417e00;
        case 0x417e04u: goto label_417e04;
        case 0x417e08u: goto label_417e08;
        case 0x417e0cu: goto label_417e0c;
        case 0x417e10u: goto label_417e10;
        case 0x417e14u: goto label_417e14;
        case 0x417e18u: goto label_417e18;
        case 0x417e1cu: goto label_417e1c;
        case 0x417e20u: goto label_417e20;
        case 0x417e24u: goto label_417e24;
        case 0x417e28u: goto label_417e28;
        case 0x417e2cu: goto label_417e2c;
        case 0x417e30u: goto label_417e30;
        case 0x417e34u: goto label_417e34;
        case 0x417e38u: goto label_417e38;
        case 0x417e3cu: goto label_417e3c;
        case 0x417e40u: goto label_417e40;
        case 0x417e44u: goto label_417e44;
        case 0x417e48u: goto label_417e48;
        case 0x417e4cu: goto label_417e4c;
        case 0x417e50u: goto label_417e50;
        case 0x417e54u: goto label_417e54;
        case 0x417e58u: goto label_417e58;
        case 0x417e5cu: goto label_417e5c;
        case 0x417e60u: goto label_417e60;
        case 0x417e64u: goto label_417e64;
        case 0x417e68u: goto label_417e68;
        case 0x417e6cu: goto label_417e6c;
        case 0x417e70u: goto label_417e70;
        case 0x417e74u: goto label_417e74;
        case 0x417e78u: goto label_417e78;
        case 0x417e7cu: goto label_417e7c;
        case 0x417e80u: goto label_417e80;
        case 0x417e84u: goto label_417e84;
        case 0x417e88u: goto label_417e88;
        case 0x417e8cu: goto label_417e8c;
        case 0x417e90u: goto label_417e90;
        case 0x417e94u: goto label_417e94;
        case 0x417e98u: goto label_417e98;
        case 0x417e9cu: goto label_417e9c;
        case 0x417ea0u: goto label_417ea0;
        case 0x417ea4u: goto label_417ea4;
        case 0x417ea8u: goto label_417ea8;
        case 0x417eacu: goto label_417eac;
        case 0x417eb0u: goto label_417eb0;
        case 0x417eb4u: goto label_417eb4;
        case 0x417eb8u: goto label_417eb8;
        case 0x417ebcu: goto label_417ebc;
        case 0x417ec0u: goto label_417ec0;
        case 0x417ec4u: goto label_417ec4;
        case 0x417ec8u: goto label_417ec8;
        case 0x417eccu: goto label_417ecc;
        case 0x417ed0u: goto label_417ed0;
        case 0x417ed4u: goto label_417ed4;
        case 0x417ed8u: goto label_417ed8;
        case 0x417edcu: goto label_417edc;
        case 0x417ee0u: goto label_417ee0;
        case 0x417ee4u: goto label_417ee4;
        case 0x417ee8u: goto label_417ee8;
        case 0x417eecu: goto label_417eec;
        case 0x417ef0u: goto label_417ef0;
        case 0x417ef4u: goto label_417ef4;
        case 0x417ef8u: goto label_417ef8;
        case 0x417efcu: goto label_417efc;
        case 0x417f00u: goto label_417f00;
        case 0x417f04u: goto label_417f04;
        case 0x417f08u: goto label_417f08;
        case 0x417f0cu: goto label_417f0c;
        case 0x417f10u: goto label_417f10;
        case 0x417f14u: goto label_417f14;
        case 0x417f18u: goto label_417f18;
        case 0x417f1cu: goto label_417f1c;
        case 0x417f20u: goto label_417f20;
        case 0x417f24u: goto label_417f24;
        case 0x417f28u: goto label_417f28;
        case 0x417f2cu: goto label_417f2c;
        case 0x417f30u: goto label_417f30;
        case 0x417f34u: goto label_417f34;
        case 0x417f38u: goto label_417f38;
        case 0x417f3cu: goto label_417f3c;
        case 0x417f40u: goto label_417f40;
        case 0x417f44u: goto label_417f44;
        case 0x417f48u: goto label_417f48;
        case 0x417f4cu: goto label_417f4c;
        case 0x417f50u: goto label_417f50;
        case 0x417f54u: goto label_417f54;
        case 0x417f58u: goto label_417f58;
        case 0x417f5cu: goto label_417f5c;
        case 0x417f60u: goto label_417f60;
        case 0x417f64u: goto label_417f64;
        case 0x417f68u: goto label_417f68;
        case 0x417f6cu: goto label_417f6c;
        case 0x417f70u: goto label_417f70;
        case 0x417f74u: goto label_417f74;
        case 0x417f78u: goto label_417f78;
        case 0x417f7cu: goto label_417f7c;
        case 0x417f80u: goto label_417f80;
        case 0x417f84u: goto label_417f84;
        case 0x417f88u: goto label_417f88;
        case 0x417f8cu: goto label_417f8c;
        case 0x417f90u: goto label_417f90;
        case 0x417f94u: goto label_417f94;
        case 0x417f98u: goto label_417f98;
        case 0x417f9cu: goto label_417f9c;
        case 0x417fa0u: goto label_417fa0;
        case 0x417fa4u: goto label_417fa4;
        case 0x417fa8u: goto label_417fa8;
        case 0x417facu: goto label_417fac;
        case 0x417fb0u: goto label_417fb0;
        case 0x417fb4u: goto label_417fb4;
        case 0x417fb8u: goto label_417fb8;
        case 0x417fbcu: goto label_417fbc;
        case 0x417fc0u: goto label_417fc0;
        case 0x417fc4u: goto label_417fc4;
        case 0x417fc8u: goto label_417fc8;
        case 0x417fccu: goto label_417fcc;
        case 0x417fd0u: goto label_417fd0;
        case 0x417fd4u: goto label_417fd4;
        case 0x417fd8u: goto label_417fd8;
        case 0x417fdcu: goto label_417fdc;
        case 0x417fe0u: goto label_417fe0;
        case 0x417fe4u: goto label_417fe4;
        case 0x417fe8u: goto label_417fe8;
        case 0x417fecu: goto label_417fec;
        case 0x417ff0u: goto label_417ff0;
        case 0x417ff4u: goto label_417ff4;
        case 0x417ff8u: goto label_417ff8;
        case 0x417ffcu: goto label_417ffc;
        case 0x418000u: goto label_418000;
        case 0x418004u: goto label_418004;
        case 0x418008u: goto label_418008;
        case 0x41800cu: goto label_41800c;
        case 0x418010u: goto label_418010;
        case 0x418014u: goto label_418014;
        case 0x418018u: goto label_418018;
        case 0x41801cu: goto label_41801c;
        case 0x418020u: goto label_418020;
        case 0x418024u: goto label_418024;
        case 0x418028u: goto label_418028;
        case 0x41802cu: goto label_41802c;
        case 0x418030u: goto label_418030;
        case 0x418034u: goto label_418034;
        case 0x418038u: goto label_418038;
        case 0x41803cu: goto label_41803c;
        case 0x418040u: goto label_418040;
        case 0x418044u: goto label_418044;
        case 0x418048u: goto label_418048;
        case 0x41804cu: goto label_41804c;
        case 0x418050u: goto label_418050;
        case 0x418054u: goto label_418054;
        case 0x418058u: goto label_418058;
        case 0x41805cu: goto label_41805c;
        case 0x418060u: goto label_418060;
        case 0x418064u: goto label_418064;
        case 0x418068u: goto label_418068;
        case 0x41806cu: goto label_41806c;
        case 0x418070u: goto label_418070;
        case 0x418074u: goto label_418074;
        case 0x418078u: goto label_418078;
        case 0x41807cu: goto label_41807c;
        case 0x418080u: goto label_418080;
        case 0x418084u: goto label_418084;
        case 0x418088u: goto label_418088;
        case 0x41808cu: goto label_41808c;
        case 0x418090u: goto label_418090;
        case 0x418094u: goto label_418094;
        case 0x418098u: goto label_418098;
        case 0x41809cu: goto label_41809c;
        case 0x4180a0u: goto label_4180a0;
        case 0x4180a4u: goto label_4180a4;
        case 0x4180a8u: goto label_4180a8;
        case 0x4180acu: goto label_4180ac;
        case 0x4180b0u: goto label_4180b0;
        case 0x4180b4u: goto label_4180b4;
        case 0x4180b8u: goto label_4180b8;
        case 0x4180bcu: goto label_4180bc;
        case 0x4180c0u: goto label_4180c0;
        case 0x4180c4u: goto label_4180c4;
        case 0x4180c8u: goto label_4180c8;
        case 0x4180ccu: goto label_4180cc;
        case 0x4180d0u: goto label_4180d0;
        case 0x4180d4u: goto label_4180d4;
        case 0x4180d8u: goto label_4180d8;
        case 0x4180dcu: goto label_4180dc;
        case 0x4180e0u: goto label_4180e0;
        case 0x4180e4u: goto label_4180e4;
        case 0x4180e8u: goto label_4180e8;
        case 0x4180ecu: goto label_4180ec;
        case 0x4180f0u: goto label_4180f0;
        case 0x4180f4u: goto label_4180f4;
        case 0x4180f8u: goto label_4180f8;
        case 0x4180fcu: goto label_4180fc;
        case 0x418100u: goto label_418100;
        case 0x418104u: goto label_418104;
        case 0x418108u: goto label_418108;
        case 0x41810cu: goto label_41810c;
        case 0x418110u: goto label_418110;
        case 0x418114u: goto label_418114;
        case 0x418118u: goto label_418118;
        case 0x41811cu: goto label_41811c;
        case 0x418120u: goto label_418120;
        case 0x418124u: goto label_418124;
        case 0x418128u: goto label_418128;
        case 0x41812cu: goto label_41812c;
        case 0x418130u: goto label_418130;
        case 0x418134u: goto label_418134;
        case 0x418138u: goto label_418138;
        case 0x41813cu: goto label_41813c;
        case 0x418140u: goto label_418140;
        case 0x418144u: goto label_418144;
        case 0x418148u: goto label_418148;
        case 0x41814cu: goto label_41814c;
        case 0x418150u: goto label_418150;
        case 0x418154u: goto label_418154;
        case 0x418158u: goto label_418158;
        case 0x41815cu: goto label_41815c;
        case 0x418160u: goto label_418160;
        case 0x418164u: goto label_418164;
        case 0x418168u: goto label_418168;
        case 0x41816cu: goto label_41816c;
        case 0x418170u: goto label_418170;
        case 0x418174u: goto label_418174;
        case 0x418178u: goto label_418178;
        case 0x41817cu: goto label_41817c;
        case 0x418180u: goto label_418180;
        case 0x418184u: goto label_418184;
        case 0x418188u: goto label_418188;
        case 0x41818cu: goto label_41818c;
        case 0x418190u: goto label_418190;
        case 0x418194u: goto label_418194;
        case 0x418198u: goto label_418198;
        case 0x41819cu: goto label_41819c;
        case 0x4181a0u: goto label_4181a0;
        case 0x4181a4u: goto label_4181a4;
        case 0x4181a8u: goto label_4181a8;
        case 0x4181acu: goto label_4181ac;
        case 0x4181b0u: goto label_4181b0;
        case 0x4181b4u: goto label_4181b4;
        case 0x4181b8u: goto label_4181b8;
        case 0x4181bcu: goto label_4181bc;
        case 0x4181c0u: goto label_4181c0;
        case 0x4181c4u: goto label_4181c4;
        case 0x4181c8u: goto label_4181c8;
        case 0x4181ccu: goto label_4181cc;
        case 0x4181d0u: goto label_4181d0;
        case 0x4181d4u: goto label_4181d4;
        case 0x4181d8u: goto label_4181d8;
        case 0x4181dcu: goto label_4181dc;
        case 0x4181e0u: goto label_4181e0;
        case 0x4181e4u: goto label_4181e4;
        case 0x4181e8u: goto label_4181e8;
        case 0x4181ecu: goto label_4181ec;
        case 0x4181f0u: goto label_4181f0;
        case 0x4181f4u: goto label_4181f4;
        case 0x4181f8u: goto label_4181f8;
        case 0x4181fcu: goto label_4181fc;
        case 0x418200u: goto label_418200;
        case 0x418204u: goto label_418204;
        case 0x418208u: goto label_418208;
        case 0x41820cu: goto label_41820c;
        case 0x418210u: goto label_418210;
        case 0x418214u: goto label_418214;
        case 0x418218u: goto label_418218;
        case 0x41821cu: goto label_41821c;
        case 0x418220u: goto label_418220;
        case 0x418224u: goto label_418224;
        case 0x418228u: goto label_418228;
        case 0x41822cu: goto label_41822c;
        case 0x418230u: goto label_418230;
        case 0x418234u: goto label_418234;
        case 0x418238u: goto label_418238;
        case 0x41823cu: goto label_41823c;
        case 0x418240u: goto label_418240;
        case 0x418244u: goto label_418244;
        case 0x418248u: goto label_418248;
        case 0x41824cu: goto label_41824c;
        case 0x418250u: goto label_418250;
        case 0x418254u: goto label_418254;
        case 0x418258u: goto label_418258;
        case 0x41825cu: goto label_41825c;
        case 0x418260u: goto label_418260;
        case 0x418264u: goto label_418264;
        case 0x418268u: goto label_418268;
        case 0x41826cu: goto label_41826c;
        case 0x418270u: goto label_418270;
        case 0x418274u: goto label_418274;
        case 0x418278u: goto label_418278;
        case 0x41827cu: goto label_41827c;
        case 0x418280u: goto label_418280;
        case 0x418284u: goto label_418284;
        case 0x418288u: goto label_418288;
        case 0x41828cu: goto label_41828c;
        case 0x418290u: goto label_418290;
        case 0x418294u: goto label_418294;
        case 0x418298u: goto label_418298;
        case 0x41829cu: goto label_41829c;
        case 0x4182a0u: goto label_4182a0;
        case 0x4182a4u: goto label_4182a4;
        case 0x4182a8u: goto label_4182a8;
        case 0x4182acu: goto label_4182ac;
        case 0x4182b0u: goto label_4182b0;
        case 0x4182b4u: goto label_4182b4;
        case 0x4182b8u: goto label_4182b8;
        case 0x4182bcu: goto label_4182bc;
        case 0x4182c0u: goto label_4182c0;
        case 0x4182c4u: goto label_4182c4;
        case 0x4182c8u: goto label_4182c8;
        case 0x4182ccu: goto label_4182cc;
        case 0x4182d0u: goto label_4182d0;
        case 0x4182d4u: goto label_4182d4;
        case 0x4182d8u: goto label_4182d8;
        case 0x4182dcu: goto label_4182dc;
        case 0x4182e0u: goto label_4182e0;
        case 0x4182e4u: goto label_4182e4;
        case 0x4182e8u: goto label_4182e8;
        case 0x4182ecu: goto label_4182ec;
        case 0x4182f0u: goto label_4182f0;
        case 0x4182f4u: goto label_4182f4;
        case 0x4182f8u: goto label_4182f8;
        case 0x4182fcu: goto label_4182fc;
        case 0x418300u: goto label_418300;
        case 0x418304u: goto label_418304;
        case 0x418308u: goto label_418308;
        case 0x41830cu: goto label_41830c;
        case 0x418310u: goto label_418310;
        case 0x418314u: goto label_418314;
        case 0x418318u: goto label_418318;
        case 0x41831cu: goto label_41831c;
        case 0x418320u: goto label_418320;
        case 0x418324u: goto label_418324;
        case 0x418328u: goto label_418328;
        case 0x41832cu: goto label_41832c;
        case 0x418330u: goto label_418330;
        case 0x418334u: goto label_418334;
        case 0x418338u: goto label_418338;
        case 0x41833cu: goto label_41833c;
        case 0x418340u: goto label_418340;
        case 0x418344u: goto label_418344;
        case 0x418348u: goto label_418348;
        case 0x41834cu: goto label_41834c;
        case 0x418350u: goto label_418350;
        case 0x418354u: goto label_418354;
        case 0x418358u: goto label_418358;
        case 0x41835cu: goto label_41835c;
        case 0x418360u: goto label_418360;
        case 0x418364u: goto label_418364;
        case 0x418368u: goto label_418368;
        case 0x41836cu: goto label_41836c;
        case 0x418370u: goto label_418370;
        case 0x418374u: goto label_418374;
        case 0x418378u: goto label_418378;
        case 0x41837cu: goto label_41837c;
        case 0x418380u: goto label_418380;
        case 0x418384u: goto label_418384;
        case 0x418388u: goto label_418388;
        case 0x41838cu: goto label_41838c;
        case 0x418390u: goto label_418390;
        case 0x418394u: goto label_418394;
        case 0x418398u: goto label_418398;
        case 0x41839cu: goto label_41839c;
        case 0x4183a0u: goto label_4183a0;
        case 0x4183a4u: goto label_4183a4;
        case 0x4183a8u: goto label_4183a8;
        case 0x4183acu: goto label_4183ac;
        case 0x4183b0u: goto label_4183b0;
        case 0x4183b4u: goto label_4183b4;
        case 0x4183b8u: goto label_4183b8;
        case 0x4183bcu: goto label_4183bc;
        case 0x4183c0u: goto label_4183c0;
        case 0x4183c4u: goto label_4183c4;
        case 0x4183c8u: goto label_4183c8;
        case 0x4183ccu: goto label_4183cc;
        case 0x4183d0u: goto label_4183d0;
        case 0x4183d4u: goto label_4183d4;
        case 0x4183d8u: goto label_4183d8;
        case 0x4183dcu: goto label_4183dc;
        case 0x4183e0u: goto label_4183e0;
        case 0x4183e4u: goto label_4183e4;
        case 0x4183e8u: goto label_4183e8;
        case 0x4183ecu: goto label_4183ec;
        case 0x4183f0u: goto label_4183f0;
        case 0x4183f4u: goto label_4183f4;
        case 0x4183f8u: goto label_4183f8;
        case 0x4183fcu: goto label_4183fc;
        case 0x418400u: goto label_418400;
        case 0x418404u: goto label_418404;
        case 0x418408u: goto label_418408;
        case 0x41840cu: goto label_41840c;
        case 0x418410u: goto label_418410;
        case 0x418414u: goto label_418414;
        case 0x418418u: goto label_418418;
        case 0x41841cu: goto label_41841c;
        case 0x418420u: goto label_418420;
        case 0x418424u: goto label_418424;
        case 0x418428u: goto label_418428;
        case 0x41842cu: goto label_41842c;
        case 0x418430u: goto label_418430;
        case 0x418434u: goto label_418434;
        case 0x418438u: goto label_418438;
        case 0x41843cu: goto label_41843c;
        case 0x418440u: goto label_418440;
        case 0x418444u: goto label_418444;
        case 0x418448u: goto label_418448;
        case 0x41844cu: goto label_41844c;
        case 0x418450u: goto label_418450;
        case 0x418454u: goto label_418454;
        case 0x418458u: goto label_418458;
        case 0x41845cu: goto label_41845c;
        case 0x418460u: goto label_418460;
        case 0x418464u: goto label_418464;
        case 0x418468u: goto label_418468;
        case 0x41846cu: goto label_41846c;
        case 0x418470u: goto label_418470;
        case 0x418474u: goto label_418474;
        case 0x418478u: goto label_418478;
        case 0x41847cu: goto label_41847c;
        case 0x418480u: goto label_418480;
        case 0x418484u: goto label_418484;
        case 0x418488u: goto label_418488;
        case 0x41848cu: goto label_41848c;
        case 0x418490u: goto label_418490;
        case 0x418494u: goto label_418494;
        case 0x418498u: goto label_418498;
        case 0x41849cu: goto label_41849c;
        case 0x4184a0u: goto label_4184a0;
        case 0x4184a4u: goto label_4184a4;
        case 0x4184a8u: goto label_4184a8;
        case 0x4184acu: goto label_4184ac;
        case 0x4184b0u: goto label_4184b0;
        case 0x4184b4u: goto label_4184b4;
        case 0x4184b8u: goto label_4184b8;
        case 0x4184bcu: goto label_4184bc;
        case 0x4184c0u: goto label_4184c0;
        case 0x4184c4u: goto label_4184c4;
        case 0x4184c8u: goto label_4184c8;
        case 0x4184ccu: goto label_4184cc;
        case 0x4184d0u: goto label_4184d0;
        case 0x4184d4u: goto label_4184d4;
        case 0x4184d8u: goto label_4184d8;
        case 0x4184dcu: goto label_4184dc;
        case 0x4184e0u: goto label_4184e0;
        case 0x4184e4u: goto label_4184e4;
        case 0x4184e8u: goto label_4184e8;
        case 0x4184ecu: goto label_4184ec;
        case 0x4184f0u: goto label_4184f0;
        case 0x4184f4u: goto label_4184f4;
        case 0x4184f8u: goto label_4184f8;
        case 0x4184fcu: goto label_4184fc;
        case 0x418500u: goto label_418500;
        case 0x418504u: goto label_418504;
        case 0x418508u: goto label_418508;
        case 0x41850cu: goto label_41850c;
        case 0x418510u: goto label_418510;
        case 0x418514u: goto label_418514;
        case 0x418518u: goto label_418518;
        case 0x41851cu: goto label_41851c;
        case 0x418520u: goto label_418520;
        case 0x418524u: goto label_418524;
        case 0x418528u: goto label_418528;
        case 0x41852cu: goto label_41852c;
        case 0x418530u: goto label_418530;
        case 0x418534u: goto label_418534;
        case 0x418538u: goto label_418538;
        case 0x41853cu: goto label_41853c;
        case 0x418540u: goto label_418540;
        case 0x418544u: goto label_418544;
        case 0x418548u: goto label_418548;
        case 0x41854cu: goto label_41854c;
        case 0x418550u: goto label_418550;
        case 0x418554u: goto label_418554;
        case 0x418558u: goto label_418558;
        case 0x41855cu: goto label_41855c;
        case 0x418560u: goto label_418560;
        case 0x418564u: goto label_418564;
        case 0x418568u: goto label_418568;
        case 0x41856cu: goto label_41856c;
        case 0x418570u: goto label_418570;
        case 0x418574u: goto label_418574;
        case 0x418578u: goto label_418578;
        case 0x41857cu: goto label_41857c;
        case 0x418580u: goto label_418580;
        case 0x418584u: goto label_418584;
        case 0x418588u: goto label_418588;
        case 0x41858cu: goto label_41858c;
        case 0x418590u: goto label_418590;
        case 0x418594u: goto label_418594;
        case 0x418598u: goto label_418598;
        case 0x41859cu: goto label_41859c;
        case 0x4185a0u: goto label_4185a0;
        case 0x4185a4u: goto label_4185a4;
        case 0x4185a8u: goto label_4185a8;
        case 0x4185acu: goto label_4185ac;
        case 0x4185b0u: goto label_4185b0;
        case 0x4185b4u: goto label_4185b4;
        case 0x4185b8u: goto label_4185b8;
        case 0x4185bcu: goto label_4185bc;
        case 0x4185c0u: goto label_4185c0;
        case 0x4185c4u: goto label_4185c4;
        case 0x4185c8u: goto label_4185c8;
        case 0x4185ccu: goto label_4185cc;
        case 0x4185d0u: goto label_4185d0;
        case 0x4185d4u: goto label_4185d4;
        case 0x4185d8u: goto label_4185d8;
        case 0x4185dcu: goto label_4185dc;
        case 0x4185e0u: goto label_4185e0;
        case 0x4185e4u: goto label_4185e4;
        case 0x4185e8u: goto label_4185e8;
        case 0x4185ecu: goto label_4185ec;
        case 0x4185f0u: goto label_4185f0;
        case 0x4185f4u: goto label_4185f4;
        case 0x4185f8u: goto label_4185f8;
        case 0x4185fcu: goto label_4185fc;
        case 0x418600u: goto label_418600;
        case 0x418604u: goto label_418604;
        case 0x418608u: goto label_418608;
        case 0x41860cu: goto label_41860c;
        case 0x418610u: goto label_418610;
        case 0x418614u: goto label_418614;
        case 0x418618u: goto label_418618;
        case 0x41861cu: goto label_41861c;
        case 0x418620u: goto label_418620;
        case 0x418624u: goto label_418624;
        case 0x418628u: goto label_418628;
        case 0x41862cu: goto label_41862c;
        case 0x418630u: goto label_418630;
        case 0x418634u: goto label_418634;
        case 0x418638u: goto label_418638;
        case 0x41863cu: goto label_41863c;
        case 0x418640u: goto label_418640;
        case 0x418644u: goto label_418644;
        case 0x418648u: goto label_418648;
        case 0x41864cu: goto label_41864c;
        case 0x418650u: goto label_418650;
        case 0x418654u: goto label_418654;
        case 0x418658u: goto label_418658;
        case 0x41865cu: goto label_41865c;
        case 0x418660u: goto label_418660;
        case 0x418664u: goto label_418664;
        case 0x418668u: goto label_418668;
        case 0x41866cu: goto label_41866c;
        case 0x418670u: goto label_418670;
        case 0x418674u: goto label_418674;
        case 0x418678u: goto label_418678;
        case 0x41867cu: goto label_41867c;
        case 0x418680u: goto label_418680;
        case 0x418684u: goto label_418684;
        case 0x418688u: goto label_418688;
        case 0x41868cu: goto label_41868c;
        case 0x418690u: goto label_418690;
        case 0x418694u: goto label_418694;
        case 0x418698u: goto label_418698;
        case 0x41869cu: goto label_41869c;
        case 0x4186a0u: goto label_4186a0;
        case 0x4186a4u: goto label_4186a4;
        case 0x4186a8u: goto label_4186a8;
        case 0x4186acu: goto label_4186ac;
        case 0x4186b0u: goto label_4186b0;
        case 0x4186b4u: goto label_4186b4;
        case 0x4186b8u: goto label_4186b8;
        case 0x4186bcu: goto label_4186bc;
        case 0x4186c0u: goto label_4186c0;
        case 0x4186c4u: goto label_4186c4;
        case 0x4186c8u: goto label_4186c8;
        case 0x4186ccu: goto label_4186cc;
        case 0x4186d0u: goto label_4186d0;
        case 0x4186d4u: goto label_4186d4;
        case 0x4186d8u: goto label_4186d8;
        case 0x4186dcu: goto label_4186dc;
        case 0x4186e0u: goto label_4186e0;
        case 0x4186e4u: goto label_4186e4;
        case 0x4186e8u: goto label_4186e8;
        case 0x4186ecu: goto label_4186ec;
        case 0x4186f0u: goto label_4186f0;
        case 0x4186f4u: goto label_4186f4;
        case 0x4186f8u: goto label_4186f8;
        case 0x4186fcu: goto label_4186fc;
        case 0x418700u: goto label_418700;
        case 0x418704u: goto label_418704;
        case 0x418708u: goto label_418708;
        case 0x41870cu: goto label_41870c;
        case 0x418710u: goto label_418710;
        case 0x418714u: goto label_418714;
        case 0x418718u: goto label_418718;
        case 0x41871cu: goto label_41871c;
        case 0x418720u: goto label_418720;
        case 0x418724u: goto label_418724;
        case 0x418728u: goto label_418728;
        case 0x41872cu: goto label_41872c;
        case 0x418730u: goto label_418730;
        case 0x418734u: goto label_418734;
        case 0x418738u: goto label_418738;
        case 0x41873cu: goto label_41873c;
        case 0x418740u: goto label_418740;
        case 0x418744u: goto label_418744;
        case 0x418748u: goto label_418748;
        case 0x41874cu: goto label_41874c;
        case 0x418750u: goto label_418750;
        case 0x418754u: goto label_418754;
        case 0x418758u: goto label_418758;
        case 0x41875cu: goto label_41875c;
        case 0x418760u: goto label_418760;
        case 0x418764u: goto label_418764;
        case 0x418768u: goto label_418768;
        case 0x41876cu: goto label_41876c;
        case 0x418770u: goto label_418770;
        case 0x418774u: goto label_418774;
        case 0x418778u: goto label_418778;
        case 0x41877cu: goto label_41877c;
        case 0x418780u: goto label_418780;
        case 0x418784u: goto label_418784;
        case 0x418788u: goto label_418788;
        case 0x41878cu: goto label_41878c;
        case 0x418790u: goto label_418790;
        case 0x418794u: goto label_418794;
        case 0x418798u: goto label_418798;
        case 0x41879cu: goto label_41879c;
        case 0x4187a0u: goto label_4187a0;
        case 0x4187a4u: goto label_4187a4;
        case 0x4187a8u: goto label_4187a8;
        case 0x4187acu: goto label_4187ac;
        case 0x4187b0u: goto label_4187b0;
        case 0x4187b4u: goto label_4187b4;
        case 0x4187b8u: goto label_4187b8;
        case 0x4187bcu: goto label_4187bc;
        case 0x4187c0u: goto label_4187c0;
        case 0x4187c4u: goto label_4187c4;
        case 0x4187c8u: goto label_4187c8;
        case 0x4187ccu: goto label_4187cc;
        case 0x4187d0u: goto label_4187d0;
        case 0x4187d4u: goto label_4187d4;
        case 0x4187d8u: goto label_4187d8;
        case 0x4187dcu: goto label_4187dc;
        case 0x4187e0u: goto label_4187e0;
        case 0x4187e4u: goto label_4187e4;
        case 0x4187e8u: goto label_4187e8;
        case 0x4187ecu: goto label_4187ec;
        case 0x4187f0u: goto label_4187f0;
        case 0x4187f4u: goto label_4187f4;
        case 0x4187f8u: goto label_4187f8;
        case 0x4187fcu: goto label_4187fc;
        case 0x418800u: goto label_418800;
        case 0x418804u: goto label_418804;
        case 0x418808u: goto label_418808;
        case 0x41880cu: goto label_41880c;
        case 0x418810u: goto label_418810;
        case 0x418814u: goto label_418814;
        case 0x418818u: goto label_418818;
        case 0x41881cu: goto label_41881c;
        case 0x418820u: goto label_418820;
        case 0x418824u: goto label_418824;
        case 0x418828u: goto label_418828;
        case 0x41882cu: goto label_41882c;
        case 0x418830u: goto label_418830;
        case 0x418834u: goto label_418834;
        case 0x418838u: goto label_418838;
        case 0x41883cu: goto label_41883c;
        case 0x418840u: goto label_418840;
        case 0x418844u: goto label_418844;
        case 0x418848u: goto label_418848;
        case 0x41884cu: goto label_41884c;
        case 0x418850u: goto label_418850;
        case 0x418854u: goto label_418854;
        case 0x418858u: goto label_418858;
        case 0x41885cu: goto label_41885c;
        case 0x418860u: goto label_418860;
        case 0x418864u: goto label_418864;
        case 0x418868u: goto label_418868;
        case 0x41886cu: goto label_41886c;
        case 0x418870u: goto label_418870;
        case 0x418874u: goto label_418874;
        case 0x418878u: goto label_418878;
        case 0x41887cu: goto label_41887c;
        case 0x418880u: goto label_418880;
        case 0x418884u: goto label_418884;
        case 0x418888u: goto label_418888;
        case 0x41888cu: goto label_41888c;
        case 0x418890u: goto label_418890;
        case 0x418894u: goto label_418894;
        case 0x418898u: goto label_418898;
        case 0x41889cu: goto label_41889c;
        case 0x4188a0u: goto label_4188a0;
        case 0x4188a4u: goto label_4188a4;
        case 0x4188a8u: goto label_4188a8;
        case 0x4188acu: goto label_4188ac;
        case 0x4188b0u: goto label_4188b0;
        case 0x4188b4u: goto label_4188b4;
        case 0x4188b8u: goto label_4188b8;
        case 0x4188bcu: goto label_4188bc;
        case 0x4188c0u: goto label_4188c0;
        case 0x4188c4u: goto label_4188c4;
        case 0x4188c8u: goto label_4188c8;
        case 0x4188ccu: goto label_4188cc;
        case 0x4188d0u: goto label_4188d0;
        case 0x4188d4u: goto label_4188d4;
        case 0x4188d8u: goto label_4188d8;
        case 0x4188dcu: goto label_4188dc;
        case 0x4188e0u: goto label_4188e0;
        case 0x4188e4u: goto label_4188e4;
        case 0x4188e8u: goto label_4188e8;
        case 0x4188ecu: goto label_4188ec;
        case 0x4188f0u: goto label_4188f0;
        case 0x4188f4u: goto label_4188f4;
        case 0x4188f8u: goto label_4188f8;
        case 0x4188fcu: goto label_4188fc;
        case 0x418900u: goto label_418900;
        case 0x418904u: goto label_418904;
        case 0x418908u: goto label_418908;
        case 0x41890cu: goto label_41890c;
        case 0x418910u: goto label_418910;
        case 0x418914u: goto label_418914;
        case 0x418918u: goto label_418918;
        case 0x41891cu: goto label_41891c;
        case 0x418920u: goto label_418920;
        case 0x418924u: goto label_418924;
        case 0x418928u: goto label_418928;
        case 0x41892cu: goto label_41892c;
        case 0x418930u: goto label_418930;
        case 0x418934u: goto label_418934;
        case 0x418938u: goto label_418938;
        case 0x41893cu: goto label_41893c;
        case 0x418940u: goto label_418940;
        case 0x418944u: goto label_418944;
        case 0x418948u: goto label_418948;
        case 0x41894cu: goto label_41894c;
        case 0x418950u: goto label_418950;
        case 0x418954u: goto label_418954;
        case 0x418958u: goto label_418958;
        case 0x41895cu: goto label_41895c;
        case 0x418960u: goto label_418960;
        case 0x418964u: goto label_418964;
        case 0x418968u: goto label_418968;
        case 0x41896cu: goto label_41896c;
        case 0x418970u: goto label_418970;
        case 0x418974u: goto label_418974;
        case 0x418978u: goto label_418978;
        case 0x41897cu: goto label_41897c;
        case 0x418980u: goto label_418980;
        case 0x418984u: goto label_418984;
        case 0x418988u: goto label_418988;
        case 0x41898cu: goto label_41898c;
        case 0x418990u: goto label_418990;
        case 0x418994u: goto label_418994;
        case 0x418998u: goto label_418998;
        case 0x41899cu: goto label_41899c;
        case 0x4189a0u: goto label_4189a0;
        case 0x4189a4u: goto label_4189a4;
        case 0x4189a8u: goto label_4189a8;
        case 0x4189acu: goto label_4189ac;
        case 0x4189b0u: goto label_4189b0;
        case 0x4189b4u: goto label_4189b4;
        case 0x4189b8u: goto label_4189b8;
        case 0x4189bcu: goto label_4189bc;
        case 0x4189c0u: goto label_4189c0;
        case 0x4189c4u: goto label_4189c4;
        case 0x4189c8u: goto label_4189c8;
        case 0x4189ccu: goto label_4189cc;
        case 0x4189d0u: goto label_4189d0;
        case 0x4189d4u: goto label_4189d4;
        case 0x4189d8u: goto label_4189d8;
        case 0x4189dcu: goto label_4189dc;
        case 0x4189e0u: goto label_4189e0;
        case 0x4189e4u: goto label_4189e4;
        case 0x4189e8u: goto label_4189e8;
        case 0x4189ecu: goto label_4189ec;
        case 0x4189f0u: goto label_4189f0;
        case 0x4189f4u: goto label_4189f4;
        case 0x4189f8u: goto label_4189f8;
        case 0x4189fcu: goto label_4189fc;
        case 0x418a00u: goto label_418a00;
        case 0x418a04u: goto label_418a04;
        case 0x418a08u: goto label_418a08;
        case 0x418a0cu: goto label_418a0c;
        case 0x418a10u: goto label_418a10;
        case 0x418a14u: goto label_418a14;
        case 0x418a18u: goto label_418a18;
        case 0x418a1cu: goto label_418a1c;
        case 0x418a20u: goto label_418a20;
        case 0x418a24u: goto label_418a24;
        case 0x418a28u: goto label_418a28;
        case 0x418a2cu: goto label_418a2c;
        case 0x418a30u: goto label_418a30;
        case 0x418a34u: goto label_418a34;
        case 0x418a38u: goto label_418a38;
        case 0x418a3cu: goto label_418a3c;
        case 0x418a40u: goto label_418a40;
        case 0x418a44u: goto label_418a44;
        case 0x418a48u: goto label_418a48;
        case 0x418a4cu: goto label_418a4c;
        case 0x418a50u: goto label_418a50;
        case 0x418a54u: goto label_418a54;
        case 0x418a58u: goto label_418a58;
        case 0x418a5cu: goto label_418a5c;
        case 0x418a60u: goto label_418a60;
        case 0x418a64u: goto label_418a64;
        case 0x418a68u: goto label_418a68;
        case 0x418a6cu: goto label_418a6c;
        case 0x418a70u: goto label_418a70;
        case 0x418a74u: goto label_418a74;
        case 0x418a78u: goto label_418a78;
        case 0x418a7cu: goto label_418a7c;
        case 0x418a80u: goto label_418a80;
        case 0x418a84u: goto label_418a84;
        case 0x418a88u: goto label_418a88;
        case 0x418a8cu: goto label_418a8c;
        case 0x418a90u: goto label_418a90;
        case 0x418a94u: goto label_418a94;
        case 0x418a98u: goto label_418a98;
        case 0x418a9cu: goto label_418a9c;
        case 0x418aa0u: goto label_418aa0;
        case 0x418aa4u: goto label_418aa4;
        case 0x418aa8u: goto label_418aa8;
        case 0x418aacu: goto label_418aac;
        case 0x418ab0u: goto label_418ab0;
        case 0x418ab4u: goto label_418ab4;
        case 0x418ab8u: goto label_418ab8;
        case 0x418abcu: goto label_418abc;
        case 0x418ac0u: goto label_418ac0;
        case 0x418ac4u: goto label_418ac4;
        case 0x418ac8u: goto label_418ac8;
        case 0x418accu: goto label_418acc;
        case 0x418ad0u: goto label_418ad0;
        case 0x418ad4u: goto label_418ad4;
        case 0x418ad8u: goto label_418ad8;
        case 0x418adcu: goto label_418adc;
        case 0x418ae0u: goto label_418ae0;
        case 0x418ae4u: goto label_418ae4;
        case 0x418ae8u: goto label_418ae8;
        case 0x418aecu: goto label_418aec;
        case 0x418af0u: goto label_418af0;
        case 0x418af4u: goto label_418af4;
        case 0x418af8u: goto label_418af8;
        case 0x418afcu: goto label_418afc;
        case 0x418b00u: goto label_418b00;
        case 0x418b04u: goto label_418b04;
        case 0x418b08u: goto label_418b08;
        case 0x418b0cu: goto label_418b0c;
        case 0x418b10u: goto label_418b10;
        case 0x418b14u: goto label_418b14;
        case 0x418b18u: goto label_418b18;
        case 0x418b1cu: goto label_418b1c;
        case 0x418b20u: goto label_418b20;
        case 0x418b24u: goto label_418b24;
        case 0x418b28u: goto label_418b28;
        case 0x418b2cu: goto label_418b2c;
        case 0x418b30u: goto label_418b30;
        case 0x418b34u: goto label_418b34;
        case 0x418b38u: goto label_418b38;
        case 0x418b3cu: goto label_418b3c;
        case 0x418b40u: goto label_418b40;
        case 0x418b44u: goto label_418b44;
        case 0x418b48u: goto label_418b48;
        case 0x418b4cu: goto label_418b4c;
        case 0x418b50u: goto label_418b50;
        case 0x418b54u: goto label_418b54;
        case 0x418b58u: goto label_418b58;
        case 0x418b5cu: goto label_418b5c;
        case 0x418b60u: goto label_418b60;
        case 0x418b64u: goto label_418b64;
        case 0x418b68u: goto label_418b68;
        case 0x418b6cu: goto label_418b6c;
        case 0x418b70u: goto label_418b70;
        case 0x418b74u: goto label_418b74;
        case 0x418b78u: goto label_418b78;
        case 0x418b7cu: goto label_418b7c;
        case 0x418b80u: goto label_418b80;
        case 0x418b84u: goto label_418b84;
        case 0x418b88u: goto label_418b88;
        case 0x418b8cu: goto label_418b8c;
        case 0x418b90u: goto label_418b90;
        case 0x418b94u: goto label_418b94;
        case 0x418b98u: goto label_418b98;
        case 0x418b9cu: goto label_418b9c;
        case 0x418ba0u: goto label_418ba0;
        case 0x418ba4u: goto label_418ba4;
        case 0x418ba8u: goto label_418ba8;
        case 0x418bacu: goto label_418bac;
        case 0x418bb0u: goto label_418bb0;
        case 0x418bb4u: goto label_418bb4;
        case 0x418bb8u: goto label_418bb8;
        case 0x418bbcu: goto label_418bbc;
        case 0x418bc0u: goto label_418bc0;
        case 0x418bc4u: goto label_418bc4;
        case 0x418bc8u: goto label_418bc8;
        case 0x418bccu: goto label_418bcc;
        case 0x418bd0u: goto label_418bd0;
        case 0x418bd4u: goto label_418bd4;
        case 0x418bd8u: goto label_418bd8;
        case 0x418bdcu: goto label_418bdc;
        case 0x418be0u: goto label_418be0;
        case 0x418be4u: goto label_418be4;
        case 0x418be8u: goto label_418be8;
        case 0x418becu: goto label_418bec;
        case 0x418bf0u: goto label_418bf0;
        case 0x418bf4u: goto label_418bf4;
        case 0x418bf8u: goto label_418bf8;
        case 0x418bfcu: goto label_418bfc;
        case 0x418c00u: goto label_418c00;
        case 0x418c04u: goto label_418c04;
        case 0x418c08u: goto label_418c08;
        case 0x418c0cu: goto label_418c0c;
        case 0x418c10u: goto label_418c10;
        case 0x418c14u: goto label_418c14;
        case 0x418c18u: goto label_418c18;
        case 0x418c1cu: goto label_418c1c;
        case 0x418c20u: goto label_418c20;
        case 0x418c24u: goto label_418c24;
        case 0x418c28u: goto label_418c28;
        case 0x418c2cu: goto label_418c2c;
        case 0x418c30u: goto label_418c30;
        case 0x418c34u: goto label_418c34;
        case 0x418c38u: goto label_418c38;
        case 0x418c3cu: goto label_418c3c;
        case 0x418c40u: goto label_418c40;
        case 0x418c44u: goto label_418c44;
        case 0x418c48u: goto label_418c48;
        case 0x418c4cu: goto label_418c4c;
        case 0x418c50u: goto label_418c50;
        case 0x418c54u: goto label_418c54;
        case 0x418c58u: goto label_418c58;
        case 0x418c5cu: goto label_418c5c;
        case 0x418c60u: goto label_418c60;
        case 0x418c64u: goto label_418c64;
        case 0x418c68u: goto label_418c68;
        case 0x418c6cu: goto label_418c6c;
        case 0x418c70u: goto label_418c70;
        case 0x418c74u: goto label_418c74;
        case 0x418c78u: goto label_418c78;
        case 0x418c7cu: goto label_418c7c;
        case 0x418c80u: goto label_418c80;
        case 0x418c84u: goto label_418c84;
        case 0x418c88u: goto label_418c88;
        case 0x418c8cu: goto label_418c8c;
        case 0x418c90u: goto label_418c90;
        case 0x418c94u: goto label_418c94;
        case 0x418c98u: goto label_418c98;
        case 0x418c9cu: goto label_418c9c;
        case 0x418ca0u: goto label_418ca0;
        case 0x418ca4u: goto label_418ca4;
        case 0x418ca8u: goto label_418ca8;
        case 0x418cacu: goto label_418cac;
        case 0x418cb0u: goto label_418cb0;
        case 0x418cb4u: goto label_418cb4;
        case 0x418cb8u: goto label_418cb8;
        case 0x418cbcu: goto label_418cbc;
        case 0x418cc0u: goto label_418cc0;
        case 0x418cc4u: goto label_418cc4;
        case 0x418cc8u: goto label_418cc8;
        case 0x418cccu: goto label_418ccc;
        case 0x418cd0u: goto label_418cd0;
        case 0x418cd4u: goto label_418cd4;
        case 0x418cd8u: goto label_418cd8;
        case 0x418cdcu: goto label_418cdc;
        case 0x418ce0u: goto label_418ce0;
        case 0x418ce4u: goto label_418ce4;
        case 0x418ce8u: goto label_418ce8;
        case 0x418cecu: goto label_418cec;
        case 0x418cf0u: goto label_418cf0;
        case 0x418cf4u: goto label_418cf4;
        case 0x418cf8u: goto label_418cf8;
        case 0x418cfcu: goto label_418cfc;
        case 0x418d00u: goto label_418d00;
        case 0x418d04u: goto label_418d04;
        case 0x418d08u: goto label_418d08;
        case 0x418d0cu: goto label_418d0c;
        case 0x418d10u: goto label_418d10;
        case 0x418d14u: goto label_418d14;
        case 0x418d18u: goto label_418d18;
        case 0x418d1cu: goto label_418d1c;
        case 0x418d20u: goto label_418d20;
        case 0x418d24u: goto label_418d24;
        case 0x418d28u: goto label_418d28;
        case 0x418d2cu: goto label_418d2c;
        case 0x418d30u: goto label_418d30;
        case 0x418d34u: goto label_418d34;
        case 0x418d38u: goto label_418d38;
        case 0x418d3cu: goto label_418d3c;
        case 0x418d40u: goto label_418d40;
        case 0x418d44u: goto label_418d44;
        case 0x418d48u: goto label_418d48;
        case 0x418d4cu: goto label_418d4c;
        case 0x418d50u: goto label_418d50;
        case 0x418d54u: goto label_418d54;
        case 0x418d58u: goto label_418d58;
        case 0x418d5cu: goto label_418d5c;
        case 0x418d60u: goto label_418d60;
        case 0x418d64u: goto label_418d64;
        case 0x418d68u: goto label_418d68;
        case 0x418d6cu: goto label_418d6c;
        case 0x418d70u: goto label_418d70;
        case 0x418d74u: goto label_418d74;
        case 0x418d78u: goto label_418d78;
        case 0x418d7cu: goto label_418d7c;
        case 0x418d80u: goto label_418d80;
        case 0x418d84u: goto label_418d84;
        case 0x418d88u: goto label_418d88;
        case 0x418d8cu: goto label_418d8c;
        case 0x418d90u: goto label_418d90;
        case 0x418d94u: goto label_418d94;
        case 0x418d98u: goto label_418d98;
        case 0x418d9cu: goto label_418d9c;
        case 0x418da0u: goto label_418da0;
        case 0x418da4u: goto label_418da4;
        case 0x418da8u: goto label_418da8;
        case 0x418dacu: goto label_418dac;
        case 0x418db0u: goto label_418db0;
        case 0x418db4u: goto label_418db4;
        case 0x418db8u: goto label_418db8;
        case 0x418dbcu: goto label_418dbc;
        case 0x418dc0u: goto label_418dc0;
        case 0x418dc4u: goto label_418dc4;
        case 0x418dc8u: goto label_418dc8;
        case 0x418dccu: goto label_418dcc;
        case 0x418dd0u: goto label_418dd0;
        case 0x418dd4u: goto label_418dd4;
        case 0x418dd8u: goto label_418dd8;
        case 0x418ddcu: goto label_418ddc;
        case 0x418de0u: goto label_418de0;
        case 0x418de4u: goto label_418de4;
        case 0x418de8u: goto label_418de8;
        case 0x418decu: goto label_418dec;
        case 0x418df0u: goto label_418df0;
        case 0x418df4u: goto label_418df4;
        case 0x418df8u: goto label_418df8;
        case 0x418dfcu: goto label_418dfc;
        case 0x418e00u: goto label_418e00;
        case 0x418e04u: goto label_418e04;
        case 0x418e08u: goto label_418e08;
        case 0x418e0cu: goto label_418e0c;
        case 0x418e10u: goto label_418e10;
        case 0x418e14u: goto label_418e14;
        case 0x418e18u: goto label_418e18;
        case 0x418e1cu: goto label_418e1c;
        case 0x418e20u: goto label_418e20;
        case 0x418e24u: goto label_418e24;
        case 0x418e28u: goto label_418e28;
        case 0x418e2cu: goto label_418e2c;
        case 0x418e30u: goto label_418e30;
        case 0x418e34u: goto label_418e34;
        case 0x418e38u: goto label_418e38;
        case 0x418e3cu: goto label_418e3c;
        case 0x418e40u: goto label_418e40;
        case 0x418e44u: goto label_418e44;
        case 0x418e48u: goto label_418e48;
        case 0x418e4cu: goto label_418e4c;
        case 0x418e50u: goto label_418e50;
        case 0x418e54u: goto label_418e54;
        case 0x418e58u: goto label_418e58;
        case 0x418e5cu: goto label_418e5c;
        case 0x418e60u: goto label_418e60;
        case 0x418e64u: goto label_418e64;
        case 0x418e68u: goto label_418e68;
        case 0x418e6cu: goto label_418e6c;
        case 0x418e70u: goto label_418e70;
        case 0x418e74u: goto label_418e74;
        case 0x418e78u: goto label_418e78;
        case 0x418e7cu: goto label_418e7c;
        case 0x418e80u: goto label_418e80;
        case 0x418e84u: goto label_418e84;
        case 0x418e88u: goto label_418e88;
        case 0x418e8cu: goto label_418e8c;
        case 0x418e90u: goto label_418e90;
        case 0x418e94u: goto label_418e94;
        case 0x418e98u: goto label_418e98;
        case 0x418e9cu: goto label_418e9c;
        case 0x418ea0u: goto label_418ea0;
        case 0x418ea4u: goto label_418ea4;
        case 0x418ea8u: goto label_418ea8;
        case 0x418eacu: goto label_418eac;
        case 0x418eb0u: goto label_418eb0;
        case 0x418eb4u: goto label_418eb4;
        case 0x418eb8u: goto label_418eb8;
        case 0x418ebcu: goto label_418ebc;
        case 0x418ec0u: goto label_418ec0;
        case 0x418ec4u: goto label_418ec4;
        case 0x418ec8u: goto label_418ec8;
        case 0x418eccu: goto label_418ecc;
        case 0x418ed0u: goto label_418ed0;
        case 0x418ed4u: goto label_418ed4;
        case 0x418ed8u: goto label_418ed8;
        case 0x418edcu: goto label_418edc;
        case 0x418ee0u: goto label_418ee0;
        case 0x418ee4u: goto label_418ee4;
        case 0x418ee8u: goto label_418ee8;
        case 0x418eecu: goto label_418eec;
        case 0x418ef0u: goto label_418ef0;
        case 0x418ef4u: goto label_418ef4;
        case 0x418ef8u: goto label_418ef8;
        case 0x418efcu: goto label_418efc;
        case 0x418f00u: goto label_418f00;
        case 0x418f04u: goto label_418f04;
        case 0x418f08u: goto label_418f08;
        case 0x418f0cu: goto label_418f0c;
        case 0x418f10u: goto label_418f10;
        case 0x418f14u: goto label_418f14;
        case 0x418f18u: goto label_418f18;
        case 0x418f1cu: goto label_418f1c;
        case 0x418f20u: goto label_418f20;
        case 0x418f24u: goto label_418f24;
        case 0x418f28u: goto label_418f28;
        case 0x418f2cu: goto label_418f2c;
        case 0x418f30u: goto label_418f30;
        case 0x418f34u: goto label_418f34;
        case 0x418f38u: goto label_418f38;
        case 0x418f3cu: goto label_418f3c;
        case 0x418f40u: goto label_418f40;
        case 0x418f44u: goto label_418f44;
        case 0x418f48u: goto label_418f48;
        case 0x418f4cu: goto label_418f4c;
        case 0x418f50u: goto label_418f50;
        case 0x418f54u: goto label_418f54;
        case 0x418f58u: goto label_418f58;
        case 0x418f5cu: goto label_418f5c;
        case 0x418f60u: goto label_418f60;
        case 0x418f64u: goto label_418f64;
        case 0x418f68u: goto label_418f68;
        case 0x418f6cu: goto label_418f6c;
        case 0x418f70u: goto label_418f70;
        case 0x418f74u: goto label_418f74;
        case 0x418f78u: goto label_418f78;
        case 0x418f7cu: goto label_418f7c;
        case 0x418f80u: goto label_418f80;
        case 0x418f84u: goto label_418f84;
        case 0x418f88u: goto label_418f88;
        case 0x418f8cu: goto label_418f8c;
        case 0x418f90u: goto label_418f90;
        case 0x418f94u: goto label_418f94;
        case 0x418f98u: goto label_418f98;
        case 0x418f9cu: goto label_418f9c;
        case 0x418fa0u: goto label_418fa0;
        case 0x418fa4u: goto label_418fa4;
        case 0x418fa8u: goto label_418fa8;
        case 0x418facu: goto label_418fac;
        case 0x418fb0u: goto label_418fb0;
        case 0x418fb4u: goto label_418fb4;
        case 0x418fb8u: goto label_418fb8;
        case 0x418fbcu: goto label_418fbc;
        case 0x418fc0u: goto label_418fc0;
        case 0x418fc4u: goto label_418fc4;
        case 0x418fc8u: goto label_418fc8;
        case 0x418fccu: goto label_418fcc;
        case 0x418fd0u: goto label_418fd0;
        case 0x418fd4u: goto label_418fd4;
        case 0x418fd8u: goto label_418fd8;
        case 0x418fdcu: goto label_418fdc;
        case 0x418fe0u: goto label_418fe0;
        case 0x418fe4u: goto label_418fe4;
        case 0x418fe8u: goto label_418fe8;
        case 0x418fecu: goto label_418fec;
        case 0x418ff0u: goto label_418ff0;
        case 0x418ff4u: goto label_418ff4;
        case 0x418ff8u: goto label_418ff8;
        case 0x418ffcu: goto label_418ffc;
        case 0x419000u: goto label_419000;
        case 0x419004u: goto label_419004;
        case 0x419008u: goto label_419008;
        case 0x41900cu: goto label_41900c;
        case 0x419010u: goto label_419010;
        case 0x419014u: goto label_419014;
        case 0x419018u: goto label_419018;
        case 0x41901cu: goto label_41901c;
        case 0x419020u: goto label_419020;
        case 0x419024u: goto label_419024;
        case 0x419028u: goto label_419028;
        case 0x41902cu: goto label_41902c;
        case 0x419030u: goto label_419030;
        case 0x419034u: goto label_419034;
        case 0x419038u: goto label_419038;
        case 0x41903cu: goto label_41903c;
        case 0x419040u: goto label_419040;
        case 0x419044u: goto label_419044;
        case 0x419048u: goto label_419048;
        case 0x41904cu: goto label_41904c;
        case 0x419050u: goto label_419050;
        case 0x419054u: goto label_419054;
        case 0x419058u: goto label_419058;
        case 0x41905cu: goto label_41905c;
        case 0x419060u: goto label_419060;
        case 0x419064u: goto label_419064;
        case 0x419068u: goto label_419068;
        case 0x41906cu: goto label_41906c;
        case 0x419070u: goto label_419070;
        case 0x419074u: goto label_419074;
        case 0x419078u: goto label_419078;
        case 0x41907cu: goto label_41907c;
        case 0x419080u: goto label_419080;
        case 0x419084u: goto label_419084;
        case 0x419088u: goto label_419088;
        case 0x41908cu: goto label_41908c;
        case 0x419090u: goto label_419090;
        case 0x419094u: goto label_419094;
        case 0x419098u: goto label_419098;
        case 0x41909cu: goto label_41909c;
        case 0x4190a0u: goto label_4190a0;
        case 0x4190a4u: goto label_4190a4;
        case 0x4190a8u: goto label_4190a8;
        case 0x4190acu: goto label_4190ac;
        case 0x4190b0u: goto label_4190b0;
        case 0x4190b4u: goto label_4190b4;
        case 0x4190b8u: goto label_4190b8;
        case 0x4190bcu: goto label_4190bc;
        case 0x4190c0u: goto label_4190c0;
        case 0x4190c4u: goto label_4190c4;
        case 0x4190c8u: goto label_4190c8;
        case 0x4190ccu: goto label_4190cc;
        case 0x4190d0u: goto label_4190d0;
        case 0x4190d4u: goto label_4190d4;
        case 0x4190d8u: goto label_4190d8;
        case 0x4190dcu: goto label_4190dc;
        case 0x4190e0u: goto label_4190e0;
        case 0x4190e4u: goto label_4190e4;
        case 0x4190e8u: goto label_4190e8;
        case 0x4190ecu: goto label_4190ec;
        case 0x4190f0u: goto label_4190f0;
        case 0x4190f4u: goto label_4190f4;
        case 0x4190f8u: goto label_4190f8;
        case 0x4190fcu: goto label_4190fc;
        case 0x419100u: goto label_419100;
        case 0x419104u: goto label_419104;
        case 0x419108u: goto label_419108;
        case 0x41910cu: goto label_41910c;
        case 0x419110u: goto label_419110;
        case 0x419114u: goto label_419114;
        case 0x419118u: goto label_419118;
        case 0x41911cu: goto label_41911c;
        case 0x419120u: goto label_419120;
        case 0x419124u: goto label_419124;
        case 0x419128u: goto label_419128;
        case 0x41912cu: goto label_41912c;
        case 0x419130u: goto label_419130;
        case 0x419134u: goto label_419134;
        case 0x419138u: goto label_419138;
        case 0x41913cu: goto label_41913c;
        case 0x419140u: goto label_419140;
        case 0x419144u: goto label_419144;
        case 0x419148u: goto label_419148;
        case 0x41914cu: goto label_41914c;
        case 0x419150u: goto label_419150;
        case 0x419154u: goto label_419154;
        case 0x419158u: goto label_419158;
        case 0x41915cu: goto label_41915c;
        case 0x419160u: goto label_419160;
        case 0x419164u: goto label_419164;
        case 0x419168u: goto label_419168;
        case 0x41916cu: goto label_41916c;
        case 0x419170u: goto label_419170;
        case 0x419174u: goto label_419174;
        case 0x419178u: goto label_419178;
        case 0x41917cu: goto label_41917c;
        case 0x419180u: goto label_419180;
        case 0x419184u: goto label_419184;
        case 0x419188u: goto label_419188;
        case 0x41918cu: goto label_41918c;
        case 0x419190u: goto label_419190;
        case 0x419194u: goto label_419194;
        case 0x419198u: goto label_419198;
        case 0x41919cu: goto label_41919c;
        case 0x4191a0u: goto label_4191a0;
        case 0x4191a4u: goto label_4191a4;
        case 0x4191a8u: goto label_4191a8;
        case 0x4191acu: goto label_4191ac;
        case 0x4191b0u: goto label_4191b0;
        case 0x4191b4u: goto label_4191b4;
        case 0x4191b8u: goto label_4191b8;
        case 0x4191bcu: goto label_4191bc;
        case 0x4191c0u: goto label_4191c0;
        case 0x4191c4u: goto label_4191c4;
        case 0x4191c8u: goto label_4191c8;
        case 0x4191ccu: goto label_4191cc;
        case 0x4191d0u: goto label_4191d0;
        case 0x4191d4u: goto label_4191d4;
        case 0x4191d8u: goto label_4191d8;
        case 0x4191dcu: goto label_4191dc;
        case 0x4191e0u: goto label_4191e0;
        case 0x4191e4u: goto label_4191e4;
        case 0x4191e8u: goto label_4191e8;
        case 0x4191ecu: goto label_4191ec;
        case 0x4191f0u: goto label_4191f0;
        case 0x4191f4u: goto label_4191f4;
        case 0x4191f8u: goto label_4191f8;
        case 0x4191fcu: goto label_4191fc;
        case 0x419200u: goto label_419200;
        case 0x419204u: goto label_419204;
        case 0x419208u: goto label_419208;
        case 0x41920cu: goto label_41920c;
        case 0x419210u: goto label_419210;
        case 0x419214u: goto label_419214;
        case 0x419218u: goto label_419218;
        case 0x41921cu: goto label_41921c;
        case 0x419220u: goto label_419220;
        case 0x419224u: goto label_419224;
        case 0x419228u: goto label_419228;
        case 0x41922cu: goto label_41922c;
        case 0x419230u: goto label_419230;
        case 0x419234u: goto label_419234;
        case 0x419238u: goto label_419238;
        case 0x41923cu: goto label_41923c;
        case 0x419240u: goto label_419240;
        case 0x419244u: goto label_419244;
        case 0x419248u: goto label_419248;
        case 0x41924cu: goto label_41924c;
        case 0x419250u: goto label_419250;
        case 0x419254u: goto label_419254;
        case 0x419258u: goto label_419258;
        case 0x41925cu: goto label_41925c;
        case 0x419260u: goto label_419260;
        case 0x419264u: goto label_419264;
        case 0x419268u: goto label_419268;
        case 0x41926cu: goto label_41926c;
        case 0x419270u: goto label_419270;
        case 0x419274u: goto label_419274;
        case 0x419278u: goto label_419278;
        case 0x41927cu: goto label_41927c;
        case 0x419280u: goto label_419280;
        case 0x419284u: goto label_419284;
        case 0x419288u: goto label_419288;
        case 0x41928cu: goto label_41928c;
        case 0x419290u: goto label_419290;
        case 0x419294u: goto label_419294;
        case 0x419298u: goto label_419298;
        case 0x41929cu: goto label_41929c;
        case 0x4192a0u: goto label_4192a0;
        case 0x4192a4u: goto label_4192a4;
        case 0x4192a8u: goto label_4192a8;
        case 0x4192acu: goto label_4192ac;
        case 0x4192b0u: goto label_4192b0;
        case 0x4192b4u: goto label_4192b4;
        case 0x4192b8u: goto label_4192b8;
        case 0x4192bcu: goto label_4192bc;
        case 0x4192c0u: goto label_4192c0;
        case 0x4192c4u: goto label_4192c4;
        case 0x4192c8u: goto label_4192c8;
        case 0x4192ccu: goto label_4192cc;
        case 0x4192d0u: goto label_4192d0;
        case 0x4192d4u: goto label_4192d4;
        case 0x4192d8u: goto label_4192d8;
        case 0x4192dcu: goto label_4192dc;
        case 0x4192e0u: goto label_4192e0;
        case 0x4192e4u: goto label_4192e4;
        case 0x4192e8u: goto label_4192e8;
        case 0x4192ecu: goto label_4192ec;
        case 0x4192f0u: goto label_4192f0;
        case 0x4192f4u: goto label_4192f4;
        case 0x4192f8u: goto label_4192f8;
        case 0x4192fcu: goto label_4192fc;
        case 0x419300u: goto label_419300;
        case 0x419304u: goto label_419304;
        case 0x419308u: goto label_419308;
        case 0x41930cu: goto label_41930c;
        case 0x419310u: goto label_419310;
        case 0x419314u: goto label_419314;
        case 0x419318u: goto label_419318;
        case 0x41931cu: goto label_41931c;
        case 0x419320u: goto label_419320;
        case 0x419324u: goto label_419324;
        case 0x419328u: goto label_419328;
        case 0x41932cu: goto label_41932c;
        case 0x419330u: goto label_419330;
        case 0x419334u: goto label_419334;
        case 0x419338u: goto label_419338;
        case 0x41933cu: goto label_41933c;
        case 0x419340u: goto label_419340;
        case 0x419344u: goto label_419344;
        case 0x419348u: goto label_419348;
        case 0x41934cu: goto label_41934c;
        case 0x419350u: goto label_419350;
        case 0x419354u: goto label_419354;
        case 0x419358u: goto label_419358;
        case 0x41935cu: goto label_41935c;
        case 0x419360u: goto label_419360;
        case 0x419364u: goto label_419364;
        case 0x419368u: goto label_419368;
        case 0x41936cu: goto label_41936c;
        case 0x419370u: goto label_419370;
        case 0x419374u: goto label_419374;
        case 0x419378u: goto label_419378;
        case 0x41937cu: goto label_41937c;
        case 0x419380u: goto label_419380;
        case 0x419384u: goto label_419384;
        case 0x419388u: goto label_419388;
        case 0x41938cu: goto label_41938c;
        case 0x419390u: goto label_419390;
        case 0x419394u: goto label_419394;
        case 0x419398u: goto label_419398;
        case 0x41939cu: goto label_41939c;
        case 0x4193a0u: goto label_4193a0;
        case 0x4193a4u: goto label_4193a4;
        case 0x4193a8u: goto label_4193a8;
        case 0x4193acu: goto label_4193ac;
        case 0x4193b0u: goto label_4193b0;
        case 0x4193b4u: goto label_4193b4;
        case 0x4193b8u: goto label_4193b8;
        case 0x4193bcu: goto label_4193bc;
        case 0x4193c0u: goto label_4193c0;
        case 0x4193c4u: goto label_4193c4;
        case 0x4193c8u: goto label_4193c8;
        case 0x4193ccu: goto label_4193cc;
        case 0x4193d0u: goto label_4193d0;
        case 0x4193d4u: goto label_4193d4;
        case 0x4193d8u: goto label_4193d8;
        case 0x4193dcu: goto label_4193dc;
        case 0x4193e0u: goto label_4193e0;
        case 0x4193e4u: goto label_4193e4;
        case 0x4193e8u: goto label_4193e8;
        case 0x4193ecu: goto label_4193ec;
        case 0x4193f0u: goto label_4193f0;
        case 0x4193f4u: goto label_4193f4;
        case 0x4193f8u: goto label_4193f8;
        case 0x4193fcu: goto label_4193fc;
        case 0x419400u: goto label_419400;
        case 0x419404u: goto label_419404;
        case 0x419408u: goto label_419408;
        case 0x41940cu: goto label_41940c;
        case 0x419410u: goto label_419410;
        case 0x419414u: goto label_419414;
        case 0x419418u: goto label_419418;
        case 0x41941cu: goto label_41941c;
        case 0x419420u: goto label_419420;
        case 0x419424u: goto label_419424;
        case 0x419428u: goto label_419428;
        case 0x41942cu: goto label_41942c;
        case 0x419430u: goto label_419430;
        case 0x419434u: goto label_419434;
        case 0x419438u: goto label_419438;
        case 0x41943cu: goto label_41943c;
        case 0x419440u: goto label_419440;
        case 0x419444u: goto label_419444;
        case 0x419448u: goto label_419448;
        case 0x41944cu: goto label_41944c;
        case 0x419450u: goto label_419450;
        case 0x419454u: goto label_419454;
        case 0x419458u: goto label_419458;
        case 0x41945cu: goto label_41945c;
        case 0x419460u: goto label_419460;
        case 0x419464u: goto label_419464;
        case 0x419468u: goto label_419468;
        case 0x41946cu: goto label_41946c;
        case 0x419470u: goto label_419470;
        case 0x419474u: goto label_419474;
        case 0x419478u: goto label_419478;
        case 0x41947cu: goto label_41947c;
        case 0x419480u: goto label_419480;
        case 0x419484u: goto label_419484;
        case 0x419488u: goto label_419488;
        case 0x41948cu: goto label_41948c;
        case 0x419490u: goto label_419490;
        case 0x419494u: goto label_419494;
        case 0x419498u: goto label_419498;
        case 0x41949cu: goto label_41949c;
        case 0x4194a0u: goto label_4194a0;
        case 0x4194a4u: goto label_4194a4;
        case 0x4194a8u: goto label_4194a8;
        case 0x4194acu: goto label_4194ac;
        case 0x4194b0u: goto label_4194b0;
        case 0x4194b4u: goto label_4194b4;
        case 0x4194b8u: goto label_4194b8;
        case 0x4194bcu: goto label_4194bc;
        case 0x4194c0u: goto label_4194c0;
        case 0x4194c4u: goto label_4194c4;
        case 0x4194c8u: goto label_4194c8;
        case 0x4194ccu: goto label_4194cc;
        case 0x4194d0u: goto label_4194d0;
        case 0x4194d4u: goto label_4194d4;
        case 0x4194d8u: goto label_4194d8;
        case 0x4194dcu: goto label_4194dc;
        case 0x4194e0u: goto label_4194e0;
        case 0x4194e4u: goto label_4194e4;
        case 0x4194e8u: goto label_4194e8;
        case 0x4194ecu: goto label_4194ec;
        case 0x4194f0u: goto label_4194f0;
        case 0x4194f4u: goto label_4194f4;
        case 0x4194f8u: goto label_4194f8;
        case 0x4194fcu: goto label_4194fc;
        case 0x419500u: goto label_419500;
        case 0x419504u: goto label_419504;
        case 0x419508u: goto label_419508;
        case 0x41950cu: goto label_41950c;
        case 0x419510u: goto label_419510;
        case 0x419514u: goto label_419514;
        case 0x419518u: goto label_419518;
        case 0x41951cu: goto label_41951c;
        case 0x419520u: goto label_419520;
        case 0x419524u: goto label_419524;
        case 0x419528u: goto label_419528;
        case 0x41952cu: goto label_41952c;
        case 0x419530u: goto label_419530;
        case 0x419534u: goto label_419534;
        case 0x419538u: goto label_419538;
        case 0x41953cu: goto label_41953c;
        case 0x419540u: goto label_419540;
        case 0x419544u: goto label_419544;
        case 0x419548u: goto label_419548;
        case 0x41954cu: goto label_41954c;
        case 0x419550u: goto label_419550;
        case 0x419554u: goto label_419554;
        case 0x419558u: goto label_419558;
        case 0x41955cu: goto label_41955c;
        case 0x419560u: goto label_419560;
        case 0x419564u: goto label_419564;
        case 0x419568u: goto label_419568;
        case 0x41956cu: goto label_41956c;
        case 0x419570u: goto label_419570;
        case 0x419574u: goto label_419574;
        case 0x419578u: goto label_419578;
        case 0x41957cu: goto label_41957c;
        case 0x419580u: goto label_419580;
        case 0x419584u: goto label_419584;
        case 0x419588u: goto label_419588;
        case 0x41958cu: goto label_41958c;
        case 0x419590u: goto label_419590;
        case 0x419594u: goto label_419594;
        case 0x419598u: goto label_419598;
        case 0x41959cu: goto label_41959c;
        case 0x4195a0u: goto label_4195a0;
        case 0x4195a4u: goto label_4195a4;
        case 0x4195a8u: goto label_4195a8;
        case 0x4195acu: goto label_4195ac;
        case 0x4195b0u: goto label_4195b0;
        case 0x4195b4u: goto label_4195b4;
        case 0x4195b8u: goto label_4195b8;
        case 0x4195bcu: goto label_4195bc;
        default: break;
    }

    ctx->pc = 0x417a20u;

label_417a20:
    // 0x417a20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x417a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_417a24:
    // 0x417a24: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x417a24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_417a28:
    // 0x417a28: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x417a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_417a2c:
    // 0x417a2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x417a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_417a30:
    // 0x417a30: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x417a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_417a34:
    // 0x417a34: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x417a34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_417a38:
    // 0x417a38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_417a3c:
    // 0x417a3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_417a40:
    // 0x417a40: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x417a40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_417a44:
    // 0x417a44: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x417a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_417a48:
    // 0x417a48: 0xc10ca68  jal         func_4329A0
label_417a4c:
    if (ctx->pc == 0x417A4Cu) {
        ctx->pc = 0x417A4Cu;
            // 0x417a4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x417A50u;
        goto label_417a50;
    }
    ctx->pc = 0x417A48u;
    SET_GPR_U32(ctx, 31, 0x417A50u);
    ctx->pc = 0x417A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417A48u;
            // 0x417a4c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417A50u; }
        if (ctx->pc != 0x417A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417A50u; }
        if (ctx->pc != 0x417A50u) { return; }
    }
    ctx->pc = 0x417A50u;
label_417a50:
    // 0x417a50: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x417a50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_417a54:
    // 0x417a54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x417a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_417a58:
    // 0x417a58: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x417a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_417a5c:
    // 0x417a5c: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x417a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_417a60:
    // 0x417a60: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x417a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_417a64:
    // 0x417a64: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x417a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_417a68:
    // 0x417a68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x417a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_417a6c:
    // 0x417a6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x417a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_417a70:
    // 0x417a70: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x417a70u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_417a74:
    // 0x417a74: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x417a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_417a78:
    // 0x417a78: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x417a78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_417a7c:
    // 0x417a7c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x417a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_417a80:
    // 0x417a80: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x417a80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_417a84:
    // 0x417a84: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x417a84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_417a88:
    // 0x417a88: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x417a88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_417a8c:
    // 0x417a8c: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x417a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_417a90:
    // 0x417a90: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x417a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_417a94:
    // 0x417a94: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x417a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_417a98:
    // 0x417a98: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x417a98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_417a9c:
    // 0x417a9c: 0xc0582cc  jal         func_160B30
label_417aa0:
    if (ctx->pc == 0x417AA0u) {
        ctx->pc = 0x417AA0u;
            // 0x417aa0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x417AA4u;
        goto label_417aa4;
    }
    ctx->pc = 0x417A9Cu;
    SET_GPR_U32(ctx, 31, 0x417AA4u);
    ctx->pc = 0x417AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417A9Cu;
            // 0x417aa0: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417AA4u; }
        if (ctx->pc != 0x417AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417AA4u; }
        if (ctx->pc != 0x417AA4u) { return; }
    }
    ctx->pc = 0x417AA4u;
label_417aa4:
    // 0x417aa4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x417aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_417aa8:
    // 0x417aa8: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x417aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_417aac:
    // 0x417aac: 0x2463b448  addiu       $v1, $v1, -0x4BB8
    ctx->pc = 0x417aacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947912));
label_417ab0:
    // 0x417ab0: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x417ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_417ab4:
    // 0x417ab4: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x417ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_417ab8:
    // 0x417ab8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x417ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_417abc:
    // 0x417abc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x417abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_417ac0:
    // 0x417ac0: 0xac447310  sw          $a0, 0x7310($v0)
    ctx->pc = 0x417ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 29456), GPR_U32(ctx, 4));
label_417ac4:
    // 0x417ac4: 0x2463b460  addiu       $v1, $v1, -0x4BA0
    ctx->pc = 0x417ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947936));
label_417ac8:
    // 0x417ac8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x417ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_417acc:
    // 0x417acc: 0x2442b498  addiu       $v0, $v0, -0x4B68
    ctx->pc = 0x417accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947992));
label_417ad0:
    // 0x417ad0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x417ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_417ad4:
    // 0x417ad4: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x417ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_417ad8:
    // 0x417ad8: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x417ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_417adc:
    // 0x417adc: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x417adcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_417ae0:
    // 0x417ae0: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x417ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_417ae4:
    // 0x417ae4: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x417ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_417ae8:
    // 0x417ae8: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x417ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_417aec:
    // 0x417aec: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x417aecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_417af0:
    // 0x417af0: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x417af0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_417af4:
    // 0x417af4: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x417af4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_417af8:
    // 0x417af8: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x417af8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_417afc:
    // 0x417afc: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x417afcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_417b00:
    // 0x417b00: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x417b00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_417b04:
    // 0x417b04: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_417b08:
    if (ctx->pc == 0x417B08u) {
        ctx->pc = 0x417B0Cu;
        goto label_417b0c;
    }
    ctx->pc = 0x417B04u;
    {
        const bool branch_taken_0x417b04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x417b04) {
            ctx->pc = 0x417B98u;
            goto label_417b98;
        }
    }
    ctx->pc = 0x417B0Cu;
label_417b0c:
    // 0x417b0c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x417b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_417b10:
    // 0x417b10: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x417b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_417b14:
    // 0x417b14: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x417b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_417b18:
    // 0x417b18: 0xc040138  jal         func_1004E0
label_417b1c:
    if (ctx->pc == 0x417B1Cu) {
        ctx->pc = 0x417B1Cu;
            // 0x417b1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x417B20u;
        goto label_417b20;
    }
    ctx->pc = 0x417B18u;
    SET_GPR_U32(ctx, 31, 0x417B20u);
    ctx->pc = 0x417B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417B18u;
            // 0x417b1c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B20u; }
        if (ctx->pc != 0x417B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B20u; }
        if (ctx->pc != 0x417B20u) { return; }
    }
    ctx->pc = 0x417B20u;
label_417b20:
    // 0x417b20: 0x3c050041  lui         $a1, 0x41
    ctx->pc = 0x417b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65 << 16));
label_417b24:
    // 0x417b24: 0x3c060041  lui         $a2, 0x41
    ctx->pc = 0x417b24u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65 << 16));
label_417b28:
    // 0x417b28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x417b28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417b2c:
    // 0x417b2c: 0x24a57bc0  addiu       $a1, $a1, 0x7BC0
    ctx->pc = 0x417b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31680));
label_417b30:
    // 0x417b30: 0x24c66be0  addiu       $a2, $a2, 0x6BE0
    ctx->pc = 0x417b30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 27616));
label_417b34:
    // 0x417b34: 0x240700e0  addiu       $a3, $zero, 0xE0
    ctx->pc = 0x417b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_417b38:
    // 0x417b38: 0xc040840  jal         func_102100
label_417b3c:
    if (ctx->pc == 0x417B3Cu) {
        ctx->pc = 0x417B3Cu;
            // 0x417b3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417B40u;
        goto label_417b40;
    }
    ctx->pc = 0x417B38u;
    SET_GPR_U32(ctx, 31, 0x417B40u);
    ctx->pc = 0x417B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417B38u;
            // 0x417b3c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B40u; }
        if (ctx->pc != 0x417B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B40u; }
        if (ctx->pc != 0x417B40u) { return; }
    }
    ctx->pc = 0x417B40u;
label_417b40:
    // 0x417b40: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x417b40u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_417b44:
    // 0x417b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x417b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417b48:
    // 0x417b48: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x417b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_417b4c:
    // 0x417b4c: 0xc0788fc  jal         func_1E23F0
label_417b50:
    if (ctx->pc == 0x417B50u) {
        ctx->pc = 0x417B50u;
            // 0x417b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417B54u;
        goto label_417b54;
    }
    ctx->pc = 0x417B4Cu;
    SET_GPR_U32(ctx, 31, 0x417B54u);
    ctx->pc = 0x417B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417B4Cu;
            // 0x417b50: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B54u; }
        if (ctx->pc != 0x417B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B54u; }
        if (ctx->pc != 0x417B54u) { return; }
    }
    ctx->pc = 0x417B54u;
label_417b54:
    // 0x417b54: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x417b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_417b58:
    // 0x417b58: 0xc0788fc  jal         func_1E23F0
label_417b5c:
    if (ctx->pc == 0x417B5Cu) {
        ctx->pc = 0x417B5Cu;
            // 0x417b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417B60u;
        goto label_417b60;
    }
    ctx->pc = 0x417B58u;
    SET_GPR_U32(ctx, 31, 0x417B60u);
    ctx->pc = 0x417B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417B58u;
            // 0x417b5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B60u; }
        if (ctx->pc != 0x417B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B60u; }
        if (ctx->pc != 0x417B60u) { return; }
    }
    ctx->pc = 0x417B60u;
label_417b60:
    // 0x417b60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x417b60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417b64:
    // 0x417b64: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x417b64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_417b68:
    // 0x417b68: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x417b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_417b6c:
    // 0x417b6c: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x417b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_417b70:
    // 0x417b70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x417b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417b74:
    // 0x417b74: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x417b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_417b78:
    // 0x417b78: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x417b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_417b7c:
    // 0x417b7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x417b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_417b80:
    // 0x417b80: 0xc0a997c  jal         func_2A65F0
label_417b84:
    if (ctx->pc == 0x417B84u) {
        ctx->pc = 0x417B84u;
            // 0x417b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x417B88u;
        goto label_417b88;
    }
    ctx->pc = 0x417B80u;
    SET_GPR_U32(ctx, 31, 0x417B88u);
    ctx->pc = 0x417B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417B80u;
            // 0x417b84: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B88u; }
        if (ctx->pc != 0x417B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417B88u; }
        if (ctx->pc != 0x417B88u) { return; }
    }
    ctx->pc = 0x417B88u;
label_417b88:
    // 0x417b88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x417b88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_417b8c:
    // 0x417b8c: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x417b8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_417b90:
    // 0x417b90: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_417b94:
    if (ctx->pc == 0x417B94u) {
        ctx->pc = 0x417B94u;
            // 0x417b94: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->pc = 0x417B98u;
        goto label_417b98;
    }
    ctx->pc = 0x417B90u;
    {
        const bool branch_taken_0x417b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x417B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417B90u;
            // 0x417b94: 0x265200e0  addiu       $s2, $s2, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417b90) {
            ctx->pc = 0x417B64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_417b64;
        }
    }
    ctx->pc = 0x417B98u;
label_417b98:
    // 0x417b98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x417b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_417b9c:
    // 0x417b9c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x417b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_417ba0:
    // 0x417ba0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x417ba0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_417ba4:
    // 0x417ba4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x417ba4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_417ba8:
    // 0x417ba8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x417ba8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417bac:
    // 0x417bac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417bacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_417bb0:
    // 0x417bb0: 0x3e00008  jr          $ra
label_417bb4:
    if (ctx->pc == 0x417BB4u) {
        ctx->pc = 0x417BB4u;
            // 0x417bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x417BB8u;
        goto label_417bb8;
    }
    ctx->pc = 0x417BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417BB0u;
            // 0x417bb4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417BB8u;
label_417bb8:
    // 0x417bb8: 0x0  nop
    ctx->pc = 0x417bb8u;
    // NOP
label_417bbc:
    // 0x417bbc: 0x0  nop
    ctx->pc = 0x417bbcu;
    // NOP
label_417bc0:
    // 0x417bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x417bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_417bc4:
    // 0x417bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x417bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_417bc8:
    // 0x417bc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_417bcc:
    // 0x417bcc: 0xc0aeebc  jal         func_2BBAF0
label_417bd0:
    if (ctx->pc == 0x417BD0u) {
        ctx->pc = 0x417BD0u;
            // 0x417bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417BD4u;
        goto label_417bd4;
    }
    ctx->pc = 0x417BCCu;
    SET_GPR_U32(ctx, 31, 0x417BD4u);
    ctx->pc = 0x417BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417BCCu;
            // 0x417bd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BD4u; }
        if (ctx->pc != 0x417BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BD4u; }
        if (ctx->pc != 0x417BD4u) { return; }
    }
    ctx->pc = 0x417BD4u;
label_417bd4:
    // 0x417bd4: 0xc0aeeb4  jal         func_2BBAD0
label_417bd8:
    if (ctx->pc == 0x417BD8u) {
        ctx->pc = 0x417BD8u;
            // 0x417bd8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x417BDCu;
        goto label_417bdc;
    }
    ctx->pc = 0x417BD4u;
    SET_GPR_U32(ctx, 31, 0x417BDCu);
    ctx->pc = 0x417BD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417BD4u;
            // 0x417bd8: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BDCu; }
        if (ctx->pc != 0x417BDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BDCu; }
        if (ctx->pc != 0x417BDCu) { return; }
    }
    ctx->pc = 0x417BDCu;
label_417bdc:
    // 0x417bdc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x417bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_417be0:
    // 0x417be0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x417be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_417be4:
    // 0x417be4: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x417be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_417be8:
    // 0x417be8: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x417be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_417bec:
    // 0x417bec: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x417becu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_417bf0:
    // 0x417bf0: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x417bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_417bf4:
    // 0x417bf4: 0xc0aeea4  jal         func_2BBA90
label_417bf8:
    if (ctx->pc == 0x417BF8u) {
        ctx->pc = 0x417BF8u;
            // 0x417bf8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x417BFCu;
        goto label_417bfc;
    }
    ctx->pc = 0x417BF4u;
    SET_GPR_U32(ctx, 31, 0x417BFCu);
    ctx->pc = 0x417BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417BF4u;
            // 0x417bf8: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BFCu; }
        if (ctx->pc != 0x417BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417BFCu; }
        if (ctx->pc != 0x417BFCu) { return; }
    }
    ctx->pc = 0x417BFCu;
label_417bfc:
    // 0x417bfc: 0xc0aee8c  jal         func_2BBA30
label_417c00:
    if (ctx->pc == 0x417C00u) {
        ctx->pc = 0x417C00u;
            // 0x417c00: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x417C04u;
        goto label_417c04;
    }
    ctx->pc = 0x417BFCu;
    SET_GPR_U32(ctx, 31, 0x417C04u);
    ctx->pc = 0x417C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417BFCu;
            // 0x417c00: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C04u; }
        if (ctx->pc != 0x417C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C04u; }
        if (ctx->pc != 0x417C04u) { return; }
    }
    ctx->pc = 0x417C04u;
label_417c04:
    // 0x417c04: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x417c04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_417c08:
    // 0x417c08: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x417c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_417c0c:
    // 0x417c0c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x417c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_417c10:
    // 0x417c10: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x417c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_417c14:
    // 0x417c14: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x417c14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_417c18:
    // 0x417c18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x417c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417c1c:
    // 0x417c1c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x417c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_417c20:
    // 0x417c20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x417c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_417c24:
    // 0x417c24: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x417c24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_417c28:
    // 0x417c28: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x417c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_417c2c:
    // 0x417c2c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x417c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_417c30:
    // 0x417c30: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x417c30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_417c34:
    // 0x417c34: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x417c34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_417c38:
    // 0x417c38: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x417c38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_417c3c:
    // 0x417c3c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x417c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_417c40:
    // 0x417c40: 0xc0775b8  jal         func_1DD6E0
label_417c44:
    if (ctx->pc == 0x417C44u) {
        ctx->pc = 0x417C44u;
            // 0x417c44: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x417C48u;
        goto label_417c48;
    }
    ctx->pc = 0x417C40u;
    SET_GPR_U32(ctx, 31, 0x417C48u);
    ctx->pc = 0x417C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417C40u;
            // 0x417c44: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C48u; }
        if (ctx->pc != 0x417C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C48u; }
        if (ctx->pc != 0x417C48u) { return; }
    }
    ctx->pc = 0x417C48u;
label_417c48:
    // 0x417c48: 0xc077314  jal         func_1DCC50
label_417c4c:
    if (ctx->pc == 0x417C4Cu) {
        ctx->pc = 0x417C4Cu;
            // 0x417c4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x417C50u;
        goto label_417c50;
    }
    ctx->pc = 0x417C48u;
    SET_GPR_U32(ctx, 31, 0x417C50u);
    ctx->pc = 0x417C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417C48u;
            // 0x417c4c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C50u; }
        if (ctx->pc != 0x417C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417C50u; }
        if (ctx->pc != 0x417C50u) { return; }
    }
    ctx->pc = 0x417C50u;
label_417c50:
    // 0x417c50: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x417c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_417c54:
    // 0x417c54: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x417c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_417c58:
    // 0x417c58: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x417c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_417c5c:
    // 0x417c5c: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x417c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_417c60:
    // 0x417c60: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x417c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_417c64:
    // 0x417c64: 0x8e0600c8  lw          $a2, 0xC8($s0)
    ctx->pc = 0x417c64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_417c68:
    // 0x417c68: 0x90470000  lbu         $a3, 0x0($v0)
    ctx->pc = 0x417c68u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_417c6c:
    // 0x417c6c: 0x24a5b500  addiu       $a1, $a1, -0x4B00
    ctx->pc = 0x417c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948096));
label_417c70:
    // 0x417c70: 0x2484b540  addiu       $a0, $a0, -0x4AC0
    ctx->pc = 0x417c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948160));
label_417c74:
    // 0x417c74: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x417c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417c78:
    // 0x417c78: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x417c78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_417c7c:
    // 0x417c7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x417c7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417c80:
    // 0x417c80: 0xae0600c8  sw          $a2, 0xC8($s0)
    ctx->pc = 0x417c80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 6));
label_417c84:
    // 0x417c84: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x417c84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_417c88:
    // 0x417c88: 0xae040054  sw          $a0, 0x54($s0)
    ctx->pc = 0x417c88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 4));
label_417c8c:
    // 0x417c8c: 0xae0300d0  sw          $v1, 0xD0($s0)
    ctx->pc = 0x417c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 3));
label_417c90:
    // 0x417c90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x417c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_417c94:
    // 0x417c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_417c98:
    // 0x417c98: 0x3e00008  jr          $ra
label_417c9c:
    if (ctx->pc == 0x417C9Cu) {
        ctx->pc = 0x417C9Cu;
            // 0x417c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x417CA0u;
        goto label_417ca0;
    }
    ctx->pc = 0x417C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417C98u;
            // 0x417c9c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417CA0u;
label_417ca0:
    // 0x417ca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x417ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_417ca4:
    // 0x417ca4: 0x8c430e80  lw          $v1, 0xE80($v0)
    ctx->pc = 0x417ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_417ca8:
    // 0x417ca8: 0x90630c6a  lbu         $v1, 0xC6A($v1)
    ctx->pc = 0x417ca8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3178)));
label_417cac:
    // 0x417cac: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x417cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_417cb0:
    // 0x417cb0: 0x2442c4b8  addiu       $v0, $v0, -0x3B48
    ctx->pc = 0x417cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952120));
label_417cb4:
    // 0x417cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x417cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_417cb8:
    // 0x417cb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x417cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_417cbc:
    // 0x417cbc: 0x8073234  j           func_1CC8D0
label_417cc0:
    if (ctx->pc == 0x417CC0u) {
        ctx->pc = 0x417CC0u;
            // 0x417cc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x417CC4u;
        goto label_417cc4;
    }
    ctx->pc = 0x417CBCu;
    ctx->pc = 0x417CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417CBCu;
            // 0x417cc0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x417CC4u;
label_417cc4:
    // 0x417cc4: 0x0  nop
    ctx->pc = 0x417cc4u;
    // NOP
label_417cc8:
    // 0x417cc8: 0x0  nop
    ctx->pc = 0x417cc8u;
    // NOP
label_417ccc:
    // 0x417ccc: 0x0  nop
    ctx->pc = 0x417cccu;
    // NOP
label_417cd0:
    // 0x417cd0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x417cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_417cd4:
    // 0x417cd4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x417cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_417cd8:
    // 0x417cd8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_417cdc:
    // 0x417cdc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_417ce0:
    // 0x417ce0: 0x8c90009c  lw          $s0, 0x9C($a0)
    ctx->pc = 0x417ce0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_417ce4:
    // 0x417ce4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_417ce8:
    if (ctx->pc == 0x417CE8u) {
        ctx->pc = 0x417CE8u;
            // 0x417ce8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417CECu;
        goto label_417cec;
    }
    ctx->pc = 0x417CE4u;
    {
        const bool branch_taken_0x417ce4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x417CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417CE4u;
            // 0x417ce8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417ce4) {
            ctx->pc = 0x417D1Cu;
            goto label_417d1c;
        }
    }
    ctx->pc = 0x417CECu;
label_417cec:
    // 0x417cec: 0xc04008c  jal         func_100230
label_417cf0:
    if (ctx->pc == 0x417CF0u) {
        ctx->pc = 0x417CF0u;
            // 0x417cf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x417CF4u;
        goto label_417cf4;
    }
    ctx->pc = 0x417CECu;
    SET_GPR_U32(ctx, 31, 0x417CF4u);
    ctx->pc = 0x417CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417CECu;
            // 0x417cf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100230u;
    if (runtime->hasFunction(0x100230u)) {
        auto targetFn = runtime->lookupFunction(0x100230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417CF4u; }
        if (ctx->pc != 0x417CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100230_0x100230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417CF4u; }
        if (ctx->pc != 0x417CF4u) { return; }
    }
    ctx->pc = 0x417CF4u;
label_417cf4:
    // 0x417cf4: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x417cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_417cf8:
    // 0x417cf8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x417cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_417cfc:
    // 0x417cfc: 0xc0407c0  jal         func_101F00
label_417d00:
    if (ctx->pc == 0x417D00u) {
        ctx->pc = 0x417D00u;
            // 0x417d00: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x417D04u;
        goto label_417d04;
    }
    ctx->pc = 0x417CFCu;
    SET_GPR_U32(ctx, 31, 0x417D04u);
    ctx->pc = 0x417D00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417CFCu;
            // 0x417d00: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D04u; }
        if (ctx->pc != 0x417D04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D04u; }
        if (ctx->pc != 0x417D04u) { return; }
    }
    ctx->pc = 0x417D04u;
label_417d04:
    // 0x417d04: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x417d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_417d08:
    // 0x417d08: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x417d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
label_417d0c:
    // 0x417d0c: 0xc0407c0  jal         func_101F00
label_417d10:
    if (ctx->pc == 0x417D10u) {
        ctx->pc = 0x417D10u;
            // 0x417d10: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->pc = 0x417D14u;
        goto label_417d14;
    }
    ctx->pc = 0x417D0Cu;
    SET_GPR_U32(ctx, 31, 0x417D14u);
    ctx->pc = 0x417D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417D0Cu;
            // 0x417d10: 0x24a5b390  addiu       $a1, $a1, -0x4C70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947728));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D14u; }
        if (ctx->pc != 0x417D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D14u; }
        if (ctx->pc != 0x417D14u) { return; }
    }
    ctx->pc = 0x417D14u;
label_417d14:
    // 0x417d14: 0xc0400a8  jal         func_1002A0
label_417d18:
    if (ctx->pc == 0x417D18u) {
        ctx->pc = 0x417D18u;
            // 0x417d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417D1Cu;
        goto label_417d1c;
    }
    ctx->pc = 0x417D14u;
    SET_GPR_U32(ctx, 31, 0x417D1Cu);
    ctx->pc = 0x417D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417D14u;
            // 0x417d18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D1Cu; }
        if (ctx->pc != 0x417D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417D1Cu; }
        if (ctx->pc != 0x417D1Cu) { return; }
    }
    ctx->pc = 0x417D1Cu;
label_417d1c:
    // 0x417d1c: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x417d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_417d20:
    // 0x417d20: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x417d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_417d24:
    // 0x417d24: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_417d28:
    if (ctx->pc == 0x417D28u) {
        ctx->pc = 0x417D28u;
            // 0x417d28: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x417D2Cu;
        goto label_417d2c;
    }
    ctx->pc = 0x417D24u;
    {
        const bool branch_taken_0x417d24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x417d24) {
            ctx->pc = 0x417D28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x417D24u;
            // 0x417d28: 0xae2000a0  sw          $zero, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417D40u;
            goto label_417d40;
        }
    }
    ctx->pc = 0x417D2Cu;
label_417d2c:
    // 0x417d2c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x417d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_417d30:
    // 0x417d30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x417d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_417d34:
    // 0x417d34: 0x320f809  jalr        $t9
label_417d38:
    if (ctx->pc == 0x417D38u) {
        ctx->pc = 0x417D38u;
            // 0x417d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x417D3Cu;
        goto label_417d3c;
    }
    ctx->pc = 0x417D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x417D3Cu);
        ctx->pc = 0x417D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417D34u;
            // 0x417d38: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x417D3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x417D3Cu; }
            if (ctx->pc != 0x417D3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x417D3Cu;
label_417d3c:
    // 0x417d3c: 0xae2000a0  sw          $zero, 0xA0($s1)
    ctx->pc = 0x417d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 0));
label_417d40:
    // 0x417d40: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x417d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_417d44:
    // 0x417d44: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_417d48:
    if (ctx->pc == 0x417D48u) {
        ctx->pc = 0x417D48u;
            // 0x417d48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x417D4Cu;
        goto label_417d4c;
    }
    ctx->pc = 0x417D44u;
    {
        const bool branch_taken_0x417d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x417d44) {
            ctx->pc = 0x417D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x417D44u;
            // 0x417d48: 0xae200050  sw          $zero, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x417D60u;
            goto label_417d60;
        }
    }
    ctx->pc = 0x417D4Cu;
label_417d4c:
    // 0x417d4c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x417d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_417d50:
    // 0x417d50: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x417d50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_417d54:
    // 0x417d54: 0x320f809  jalr        $t9
label_417d58:
    if (ctx->pc == 0x417D58u) {
        ctx->pc = 0x417D58u;
            // 0x417d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x417D5Cu;
        goto label_417d5c;
    }
    ctx->pc = 0x417D54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x417D5Cu);
        ctx->pc = 0x417D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417D54u;
            // 0x417d58: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x417D5Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x417D5Cu; }
            if (ctx->pc != 0x417D5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x417D5Cu;
label_417d5c:
    // 0x417d5c: 0xae200050  sw          $zero, 0x50($s1)
    ctx->pc = 0x417d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 0));
label_417d60:
    // 0x417d60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x417d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_417d64:
    // 0x417d64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x417d64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_417d68:
    // 0x417d68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x417d68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_417d6c:
    // 0x417d6c: 0x3e00008  jr          $ra
label_417d70:
    if (ctx->pc == 0x417D70u) {
        ctx->pc = 0x417D70u;
            // 0x417d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x417D74u;
        goto label_417d74;
    }
    ctx->pc = 0x417D6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x417D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417D6Cu;
            // 0x417d70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x417D74u;
label_417d74:
    // 0x417d74: 0x0  nop
    ctx->pc = 0x417d74u;
    // NOP
label_417d78:
    // 0x417d78: 0x0  nop
    ctx->pc = 0x417d78u;
    // NOP
label_417d7c:
    // 0x417d7c: 0x0  nop
    ctx->pc = 0x417d7cu;
    // NOP
label_417d80:
    // 0x417d80: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x417d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_417d84:
    // 0x417d84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x417d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_417d88:
    // 0x417d88: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x417d88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_417d8c:
    // 0x417d8c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x417d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_417d90:
    // 0x417d90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x417d90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_417d94:
    // 0x417d94: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x417d94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_417d98:
    // 0x417d98: 0xc0892d0  jal         func_224B40
label_417d9c:
    if (ctx->pc == 0x417D9Cu) {
        ctx->pc = 0x417D9Cu;
            // 0x417d9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x417DA0u;
        goto label_417da0;
    }
    ctx->pc = 0x417D98u;
    SET_GPR_U32(ctx, 31, 0x417DA0u);
    ctx->pc = 0x417D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417D98u;
            // 0x417d9c: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DA0u; }
        if (ctx->pc != 0x417DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DA0u; }
        if (ctx->pc != 0x417DA0u) { return; }
    }
    ctx->pc = 0x417DA0u;
label_417da0:
    // 0x417da0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x417da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_417da4:
    // 0x417da4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x417da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_417da8:
    // 0x417da8: 0x8c427310  lw          $v0, 0x7310($v0)
    ctx->pc = 0x417da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29456)));
label_417dac:
    // 0x417dac: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x417dacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_417db0:
    // 0x417db0: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x417db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_417db4:
    // 0x417db4: 0xc0b6e68  jal         func_2DB9A0
label_417db8:
    if (ctx->pc == 0x417DB8u) {
        ctx->pc = 0x417DB8u;
            // 0x417db8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->pc = 0x417DBCu;
        goto label_417dbc;
    }
    ctx->pc = 0x417DB4u;
    SET_GPR_U32(ctx, 31, 0x417DBCu);
    ctx->pc = 0x417DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417DB4u;
            // 0x417db8: 0xafa00074  sw          $zero, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DBCu; }
        if (ctx->pc != 0x417DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DBCu; }
        if (ctx->pc != 0x417DBCu) { return; }
    }
    ctx->pc = 0x417DBCu;
label_417dbc:
    // 0x417dbc: 0xc0b6dac  jal         func_2DB6B0
label_417dc0:
    if (ctx->pc == 0x417DC0u) {
        ctx->pc = 0x417DC0u;
            // 0x417dc0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x417DC4u;
        goto label_417dc4;
    }
    ctx->pc = 0x417DBCu;
    SET_GPR_U32(ctx, 31, 0x417DC4u);
    ctx->pc = 0x417DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417DBCu;
            // 0x417dc0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DC4u; }
        if (ctx->pc != 0x417DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DC4u; }
        if (ctx->pc != 0x417DC4u) { return; }
    }
    ctx->pc = 0x417DC4u;
label_417dc4:
    // 0x417dc4: 0xc0cac94  jal         func_32B250
label_417dc8:
    if (ctx->pc == 0x417DC8u) {
        ctx->pc = 0x417DC8u;
            // 0x417dc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x417DCCu;
        goto label_417dcc;
    }
    ctx->pc = 0x417DC4u;
    SET_GPR_U32(ctx, 31, 0x417DCCu);
    ctx->pc = 0x417DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417DC4u;
            // 0x417dc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DCCu; }
        if (ctx->pc != 0x417DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DCCu; }
        if (ctx->pc != 0x417DCCu) { return; }
    }
    ctx->pc = 0x417DCCu;
label_417dcc:
    // 0x417dcc: 0xc0cac84  jal         func_32B210
label_417dd0:
    if (ctx->pc == 0x417DD0u) {
        ctx->pc = 0x417DD0u;
            // 0x417dd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x417DD4u;
        goto label_417dd4;
    }
    ctx->pc = 0x417DCCu;
    SET_GPR_U32(ctx, 31, 0x417DD4u);
    ctx->pc = 0x417DD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417DCCu;
            // 0x417dd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DD4u; }
        if (ctx->pc != 0x417DD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DD4u; }
        if (ctx->pc != 0x417DD4u) { return; }
    }
    ctx->pc = 0x417DD4u;
label_417dd4:
    // 0x417dd4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x417dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_417dd8:
    // 0x417dd8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x417dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_417ddc:
    // 0x417ddc: 0xc44cc910  lwc1        $f12, -0x36F0($v0)
    ctx->pc = 0x417ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_417de0:
    // 0x417de0: 0xc0a5a68  jal         func_2969A0
label_417de4:
    if (ctx->pc == 0x417DE4u) {
        ctx->pc = 0x417DE4u;
            // 0x417de4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x417DE8u;
        goto label_417de8;
    }
    ctx->pc = 0x417DE0u;
    SET_GPR_U32(ctx, 31, 0x417DE8u);
    ctx->pc = 0x417DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417DE0u;
            // 0x417de4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2969A0u;
    if (runtime->hasFunction(0x2969A0u)) {
        auto targetFn = runtime->lookupFunction(0x2969A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DE8u; }
        if (ctx->pc != 0x417DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002969A0_0x2969a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417DE8u; }
        if (ctx->pc != 0x417DE8u) { return; }
    }
    ctx->pc = 0x417DE8u;
label_417de8:
    // 0x417de8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x417de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_417dec:
    // 0x417dec: 0x3c0a42c8  lui         $t2, 0x42C8
    ctx->pc = 0x417decu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17096 << 16));
label_417df0:
    // 0x417df0: 0x8c437310  lw          $v1, 0x7310($v0)
    ctx->pc = 0x417df0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29456)));
label_417df4:
    // 0x417df4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x417df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417df8:
    // 0x417df8: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x417df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417dfc:
    // 0x417dfc: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x417dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417e00:
    // 0x417e00: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x417e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417e04:
    // 0x417e04: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x417e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_417e08:
    // 0x417e08: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x417e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_417e0c:
    // 0x417e0c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x417e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_417e10:
    // 0x417e10: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x417e10u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_417e14:
    // 0x417e14: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x417e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_417e18:
    // 0x417e18: 0x3c020121  lui         $v0, 0x121
    ctx->pc = 0x417e18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)289 << 16));
label_417e1c:
    // 0x417e1c: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x417e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_417e20:
    // 0x417e20: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x417e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
label_417e24:
    // 0x417e24: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x417e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_417e28:
    // 0x417e28: 0xc62a0018  lwc1        $f10, 0x18($s1)
    ctx->pc = 0x417e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_417e2c:
    // 0x417e2c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417e30:
    // 0x417e30: 0xc6290014  lwc1        $f9, 0x14($s1)
    ctx->pc = 0x417e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_417e34:
    // 0x417e34: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x417e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_417e38:
    // 0x417e38: 0xc6280010  lwc1        $f8, 0x10($s1)
    ctx->pc = 0x417e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_417e3c:
    // 0x417e3c: 0xc7a70090  lwc1        $f7, 0x90($sp)
    ctx->pc = 0x417e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_417e40:
    // 0x417e40: 0xc7a60094  lwc1        $f6, 0x94($sp)
    ctx->pc = 0x417e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_417e44:
    // 0x417e44: 0xe7a20124  swc1        $f2, 0x124($sp)
    ctx->pc = 0x417e44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_417e48:
    // 0x417e48: 0xafaa0168  sw          $t2, 0x168($sp)
    ctx->pc = 0x417e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 10));
label_417e4c:
    // 0x417e4c: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x417e4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_417e50:
    // 0x417e50: 0xa3a90170  sb          $t1, 0x170($sp)
    ctx->pc = 0x417e50u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 9));
label_417e54:
    // 0x417e54: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x417e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_417e58:
    // 0x417e58: 0xafa8016c  sw          $t0, 0x16C($sp)
    ctx->pc = 0x417e58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 8));
label_417e5c:
    // 0x417e5c: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x417e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417e60:
    // 0x417e60: 0xa3a70172  sb          $a3, 0x172($sp)
    ctx->pc = 0x417e60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 370), (uint8_t)GPR_U32(ctx, 7));
label_417e64:
    // 0x417e64: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x417e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417e68:
    // 0x417e68: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x417e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_417e6c:
    // 0x417e6c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x417e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417e70:
    // 0x417e70: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x417e70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_417e74:
    // 0x417e74: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x417e74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_417e78:
    // 0x417e78: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x417e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_417e7c:
    // 0x417e7c: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x417e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_417e80:
    // 0x417e80: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x417e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417e84:
    // 0x417e84: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x417e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417e88:
    // 0x417e88: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x417e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417e8c:
    // 0x417e8c: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x417e8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_417e90:
    // 0x417e90: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x417e90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_417e94:
    // 0x417e94: 0xe7a00144  swc1        $f0, 0x144($sp)
    ctx->pc = 0x417e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_417e98:
    // 0x417e98: 0xc7a50098  lwc1        $f5, 0x98($sp)
    ctx->pc = 0x417e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_417e9c:
    // 0x417e9c: 0xc7a4009c  lwc1        $f4, 0x9C($sp)
    ctx->pc = 0x417e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_417ea0:
    // 0x417ea0: 0xc7a300a0  lwc1        $f3, 0xA0($sp)
    ctx->pc = 0x417ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_417ea4:
    // 0x417ea4: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x417ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417ea8:
    // 0x417ea8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x417ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417eac:
    // 0x417eac: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x417eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417eb0:
    // 0x417eb0: 0xe7a800d0  swc1        $f8, 0xD0($sp)
    ctx->pc = 0x417eb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_417eb4:
    // 0x417eb4: 0xe7a900d4  swc1        $f9, 0xD4($sp)
    ctx->pc = 0x417eb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_417eb8:
    // 0x417eb8: 0xe7aa00d8  swc1        $f10, 0xD8($sp)
    ctx->pc = 0x417eb8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_417ebc:
    // 0x417ebc: 0xe7a70110  swc1        $f7, 0x110($sp)
    ctx->pc = 0x417ebcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_417ec0:
    // 0x417ec0: 0xe7a60114  swc1        $f6, 0x114($sp)
    ctx->pc = 0x417ec0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_417ec4:
    // 0x417ec4: 0xe7a50118  swc1        $f5, 0x118($sp)
    ctx->pc = 0x417ec4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_417ec8:
    // 0x417ec8: 0xe7a4011c  swc1        $f4, 0x11C($sp)
    ctx->pc = 0x417ec8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_417ecc:
    // 0x417ecc: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x417eccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_417ed0:
    // 0x417ed0: 0xe7a20148  swc1        $f2, 0x148($sp)
    ctx->pc = 0x417ed0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_417ed4:
    // 0x417ed4: 0xe7a1014c  swc1        $f1, 0x14C($sp)
    ctx->pc = 0x417ed4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_417ed8:
    // 0x417ed8: 0xc0a7a88  jal         func_29EA20
label_417edc:
    if (ctx->pc == 0x417EDCu) {
        ctx->pc = 0x417EDCu;
            // 0x417edc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->pc = 0x417EE0u;
        goto label_417ee0;
    }
    ctx->pc = 0x417ED8u;
    SET_GPR_U32(ctx, 31, 0x417EE0u);
    ctx->pc = 0x417EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417ED8u;
            // 0x417edc: 0xe7a00150  swc1        $f0, 0x150($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417EE0u; }
        if (ctx->pc != 0x417EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417EE0u; }
        if (ctx->pc != 0x417EE0u) { return; }
    }
    ctx->pc = 0x417EE0u;
label_417ee0:
    // 0x417ee0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x417ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_417ee4:
    // 0x417ee4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x417ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417ee8:
    // 0x417ee8: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_417eec:
    if (ctx->pc == 0x417EECu) {
        ctx->pc = 0x417EECu;
            // 0x417eec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x417EF0u;
        goto label_417ef0;
    }
    ctx->pc = 0x417EE8u;
    {
        const bool branch_taken_0x417ee8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x417EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417EE8u;
            // 0x417eec: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417ee8) {
            ctx->pc = 0x417F38u;
            goto label_417f38;
        }
    }
    ctx->pc = 0x417EF0u;
label_417ef0:
    // 0x417ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417ef4:
    // 0x417ef4: 0xc088ef4  jal         func_223BD0
label_417ef8:
    if (ctx->pc == 0x417EF8u) {
        ctx->pc = 0x417EF8u;
            // 0x417ef8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x417EFCu;
        goto label_417efc;
    }
    ctx->pc = 0x417EF4u;
    SET_GPR_U32(ctx, 31, 0x417EFCu);
    ctx->pc = 0x417EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417EF4u;
            // 0x417ef8: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417EFCu; }
        if (ctx->pc != 0x417EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417EFCu; }
        if (ctx->pc != 0x417EFCu) { return; }
    }
    ctx->pc = 0x417EFCu;
label_417efc:
    // 0x417efc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x417efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_417f00:
    // 0x417f00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x417f00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_417f04:
    // 0x417f04: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x417f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_417f08:
    // 0x417f08: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x417f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_417f0c:
    // 0x417f0c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x417f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_417f10:
    // 0x417f10: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x417f10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_417f14:
    // 0x417f14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417f18:
    // 0x417f18: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x417f18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_417f1c:
    // 0x417f1c: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x417f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_417f20:
    // 0x417f20: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x417f20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_417f24:
    // 0x417f24: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x417f24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_417f28:
    // 0x417f28: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x417f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_417f2c:
    // 0x417f2c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x417f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_417f30:
    // 0x417f30: 0xc088b38  jal         func_222CE0
label_417f34:
    if (ctx->pc == 0x417F34u) {
        ctx->pc = 0x417F34u;
            // 0x417f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x417F38u;
        goto label_417f38;
    }
    ctx->pc = 0x417F30u;
    SET_GPR_U32(ctx, 31, 0x417F38u);
    ctx->pc = 0x417F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417F30u;
            // 0x417f34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F38u; }
        if (ctx->pc != 0x417F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F38u; }
        if (ctx->pc != 0x417F38u) { return; }
    }
    ctx->pc = 0x417F38u;
label_417f38:
    // 0x417f38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417f3c:
    // 0x417f3c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x417f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_417f40:
    // 0x417f40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x417f40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_417f44:
    // 0x417f44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x417f44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_417f48:
    // 0x417f48: 0xc08914c  jal         func_224530
label_417f4c:
    if (ctx->pc == 0x417F4Cu) {
        ctx->pc = 0x417F4Cu;
            // 0x417f4c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x417F50u;
        goto label_417f50;
    }
    ctx->pc = 0x417F48u;
    SET_GPR_U32(ctx, 31, 0x417F50u);
    ctx->pc = 0x417F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417F48u;
            // 0x417f4c: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F50u; }
        if (ctx->pc != 0x417F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F50u; }
        if (ctx->pc != 0x417F50u) { return; }
    }
    ctx->pc = 0x417F50u;
label_417f50:
    // 0x417f50: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x417f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417f54:
    // 0x417f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417f58:
    // 0x417f58: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x417f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417f5c:
    // 0x417f5c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x417f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_417f60:
    // 0x417f60: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x417f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417f64:
    // 0x417f64: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x417f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_417f68:
    // 0x417f68: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x417f68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_417f6c:
    // 0x417f6c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x417f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_417f70:
    // 0x417f70: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x417f70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_417f74:
    // 0x417f74: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x417f74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_417f78:
    // 0x417f78: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x417f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_417f7c:
    // 0x417f7c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x417f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_417f80:
    // 0x417f80: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x417f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_417f84:
    // 0x417f84: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x417f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_417f88:
    // 0x417f88: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x417f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_417f8c:
    // 0x417f8c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x417f8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_417f90:
    // 0x417f90: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x417f90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_417f94:
    // 0x417f94: 0xc0892b0  jal         func_224AC0
label_417f98:
    if (ctx->pc == 0x417F98u) {
        ctx->pc = 0x417F98u;
            // 0x417f98: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x417F9Cu;
        goto label_417f9c;
    }
    ctx->pc = 0x417F94u;
    SET_GPR_U32(ctx, 31, 0x417F9Cu);
    ctx->pc = 0x417F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417F94u;
            // 0x417f98: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F9Cu; }
        if (ctx->pc != 0x417F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417F9Cu; }
        if (ctx->pc != 0x417F9Cu) { return; }
    }
    ctx->pc = 0x417F9Cu;
label_417f9c:
    // 0x417f9c: 0x3c02bf00  lui         $v0, 0xBF00
    ctx->pc = 0x417f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48896 << 16));
label_417fa0:
    // 0x417fa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x417fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417fa4:
    // 0x417fa4: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x417fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_417fa8:
    // 0x417fa8: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x417fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_417fac:
    // 0x417fac: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x417facu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
label_417fb0:
    // 0x417fb0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x417fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_417fb4:
    // 0x417fb4: 0xc0891d8  jal         func_224760
label_417fb8:
    if (ctx->pc == 0x417FB8u) {
        ctx->pc = 0x417FB8u;
            // 0x417fb8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->pc = 0x417FBCu;
        goto label_417fbc;
    }
    ctx->pc = 0x417FB4u;
    SET_GPR_U32(ctx, 31, 0x417FBCu);
    ctx->pc = 0x417FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417FB4u;
            // 0x417fb8: 0xafa0006c  sw          $zero, 0x6C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FBCu; }
        if (ctx->pc != 0x417FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FBCu; }
        if (ctx->pc != 0x417FBCu) { return; }
    }
    ctx->pc = 0x417FBCu;
label_417fbc:
    // 0x417fbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417fc0:
    // 0x417fc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x417fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_417fc4:
    // 0x417fc4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x417fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_417fc8:
    // 0x417fc8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x417fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_417fcc:
    // 0x417fcc: 0xc08c164  jal         func_230590
label_417fd0:
    if (ctx->pc == 0x417FD0u) {
        ctx->pc = 0x417FD0u;
            // 0x417fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x417FD4u;
        goto label_417fd4;
    }
    ctx->pc = 0x417FCCu;
    SET_GPR_U32(ctx, 31, 0x417FD4u);
    ctx->pc = 0x417FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417FCCu;
            // 0x417fd0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FD4u; }
        if (ctx->pc != 0x417FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FD4u; }
        if (ctx->pc != 0x417FD4u) { return; }
    }
    ctx->pc = 0x417FD4u;
label_417fd4:
    // 0x417fd4: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x417fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_417fd8:
    // 0x417fd8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x417fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_417fdc:
    // 0x417fdc: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x417fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_417fe0:
    // 0x417fe0: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x417fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_417fe4:
    // 0x417fe4: 0xc0a7a88  jal         func_29EA20
label_417fe8:
    if (ctx->pc == 0x417FE8u) {
        ctx->pc = 0x417FE8u;
            // 0x417fe8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x417FECu;
        goto label_417fec;
    }
    ctx->pc = 0x417FE4u;
    SET_GPR_U32(ctx, 31, 0x417FECu);
    ctx->pc = 0x417FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x417FE4u;
            // 0x417fe8: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FECu; }
        if (ctx->pc != 0x417FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x417FECu; }
        if (ctx->pc != 0x417FECu) { return; }
    }
    ctx->pc = 0x417FECu;
label_417fec:
    // 0x417fec: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x417fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_417ff0:
    // 0x417ff0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x417ff0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_417ff4:
    // 0x417ff4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_417ff8:
    if (ctx->pc == 0x417FF8u) {
        ctx->pc = 0x417FF8u;
            // 0x417ff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x417FFCu;
        goto label_417ffc;
    }
    ctx->pc = 0x417FF4u;
    {
        const bool branch_taken_0x417ff4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x417FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x417FF4u;
            // 0x417ff8: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x417ff4) {
            ctx->pc = 0x418018u;
            goto label_418018;
        }
    }
    ctx->pc = 0x417FFCu;
label_417ffc:
    // 0x417ffc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x417ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_418000:
    // 0x418000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x418000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_418004:
    // 0x418004: 0xc0869d0  jal         func_21A740
label_418008:
    if (ctx->pc == 0x418008u) {
        ctx->pc = 0x418008u;
            // 0x418008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41800Cu;
        goto label_41800c;
    }
    ctx->pc = 0x418004u;
    SET_GPR_U32(ctx, 31, 0x41800Cu);
    ctx->pc = 0x418008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418004u;
            // 0x418008: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41800Cu; }
        if (ctx->pc != 0x41800Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41800Cu; }
        if (ctx->pc != 0x41800Cu) { return; }
    }
    ctx->pc = 0x41800Cu;
label_41800c:
    // 0x41800c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x41800cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_418010:
    // 0x418010: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x418010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_418014:
    // 0x418014: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x418014u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_418018:
    // 0x418018: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x418018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_41801c:
    // 0x41801c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41801cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418020:
    // 0x418020: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x418020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_418024:
    // 0x418024: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x418024u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_418028:
    // 0x418028: 0xc08c650  jal         func_231940
label_41802c:
    if (ctx->pc == 0x41802Cu) {
        ctx->pc = 0x41802Cu;
            // 0x41802c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418030u;
        goto label_418030;
    }
    ctx->pc = 0x418028u;
    SET_GPR_U32(ctx, 31, 0x418030u);
    ctx->pc = 0x41802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418028u;
            // 0x41802c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418030u; }
        if (ctx->pc != 0x418030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418030u; }
        if (ctx->pc != 0x418030u) { return; }
    }
    ctx->pc = 0x418030u;
label_418030:
    // 0x418030: 0xc040180  jal         func_100600
label_418034:
    if (ctx->pc == 0x418034u) {
        ctx->pc = 0x418034u;
            // 0x418034: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x418038u;
        goto label_418038;
    }
    ctx->pc = 0x418030u;
    SET_GPR_U32(ctx, 31, 0x418038u);
    ctx->pc = 0x418034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418030u;
            // 0x418034: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418038u; }
        if (ctx->pc != 0x418038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418038u; }
        if (ctx->pc != 0x418038u) { return; }
    }
    ctx->pc = 0x418038u;
label_418038:
    // 0x418038: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_41803c:
    if (ctx->pc == 0x41803Cu) {
        ctx->pc = 0x41803Cu;
            // 0x41803c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x418040u;
        goto label_418040;
    }
    ctx->pc = 0x418038u;
    {
        const bool branch_taken_0x418038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x418038) {
            ctx->pc = 0x41803Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418038u;
            // 0x41803c: 0xae2200a0  sw          $v0, 0xA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418088u;
            goto label_418088;
        }
    }
    ctx->pc = 0x418040u;
label_418040:
    // 0x418040: 0x8e260050  lw          $a2, 0x50($s1)
    ctx->pc = 0x418040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_418044:
    // 0x418044: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x418044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_418048:
    // 0x418048: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x418048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_41804c:
    // 0x41804c: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x41804cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_418050:
    // 0x418050: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x418050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_418054:
    // 0x418054: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x418054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_418058:
    // 0x418058: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x418058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_41805c:
    // 0x41805c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x41805cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_418060:
    // 0x418060: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x418060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_418064:
    // 0x418064: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x418064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_418068:
    // 0x418068: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x418068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_41806c:
    // 0x41806c: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x41806cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_418070:
    // 0x418070: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x418070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_418074:
    // 0x418074: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x418074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_418078:
    // 0x418078: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x418078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_41807c:
    // 0x41807c: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x41807cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_418080:
    // 0x418080: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x418080u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_418084:
    // 0x418084: 0xae2200a0  sw          $v0, 0xA0($s1)
    ctx->pc = 0x418084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 2));
label_418088:
    // 0x418088: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x418088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_41808c:
    // 0x41808c: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x41808cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_418090:
    // 0x418090: 0x2402fffb  addiu       $v0, $zero, -0x5
    ctx->pc = 0x418090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_418094:
    // 0x418094: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x418094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_418098:
    // 0x418098: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x418098u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_41809c:
    // 0x41809c: 0xc040180  jal         func_100600
label_4180a0:
    if (ctx->pc == 0x4180A0u) {
        ctx->pc = 0x4180A0u;
            // 0x4180a0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x4180A4u;
        goto label_4180a4;
    }
    ctx->pc = 0x41809Cu;
    SET_GPR_U32(ctx, 31, 0x4180A4u);
    ctx->pc = 0x4180A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41809Cu;
            // 0x4180a0: 0xae2200b0  sw          $v0, 0xB0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180A4u; }
        if (ctx->pc != 0x4180A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180A4u; }
        if (ctx->pc != 0x4180A4u) { return; }
    }
    ctx->pc = 0x4180A4u;
label_4180a4:
    // 0x4180a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4180a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4180a8:
    // 0x4180a8: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4180ac:
    if (ctx->pc == 0x4180ACu) {
        ctx->pc = 0x4180B0u;
        goto label_4180b0;
    }
    ctx->pc = 0x4180A8u;
    {
        const bool branch_taken_0x4180a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4180a8) {
            ctx->pc = 0x418128u;
            goto label_418128;
        }
    }
    ctx->pc = 0x4180B0u;
label_4180b0:
    // 0x4180b0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x4180b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_4180b4:
    // 0x4180b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4180b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4180b8:
    // 0x4180b8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4180b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_4180bc:
    // 0x4180bc: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x4180bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4180c0:
    // 0x4180c0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4180c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_4180c4:
    // 0x4180c4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x4180c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_4180c8:
    // 0x4180c8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x4180c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_4180cc:
    // 0x4180cc: 0xc040138  jal         func_1004E0
label_4180d0:
    if (ctx->pc == 0x4180D0u) {
        ctx->pc = 0x4180D0u;
            // 0x4180d0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4180D4u;
        goto label_4180d4;
    }
    ctx->pc = 0x4180CCu;
    SET_GPR_U32(ctx, 31, 0x4180D4u);
    ctx->pc = 0x4180D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4180CCu;
            // 0x4180d0: 0xa2000020  sb          $zero, 0x20($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 32), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180D4u; }
        if (ctx->pc != 0x4180D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180D4u; }
        if (ctx->pc != 0x4180D4u) { return; }
    }
    ctx->pc = 0x4180D4u;
label_4180d4:
    // 0x4180d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x4180d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_4180d8:
    // 0x4180d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4180d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4180dc:
    // 0x4180dc: 0xc040138  jal         func_1004E0
label_4180e0:
    if (ctx->pc == 0x4180E0u) {
        ctx->pc = 0x4180E0u;
            // 0x4180e0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->pc = 0x4180E4u;
        goto label_4180e4;
    }
    ctx->pc = 0x4180DCu;
    SET_GPR_U32(ctx, 31, 0x4180E4u);
    ctx->pc = 0x4180E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4180DCu;
            // 0x4180e0: 0x24040130  addiu       $a0, $zero, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180E4u; }
        if (ctx->pc != 0x4180E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4180E4u; }
        if (ctx->pc != 0x4180E4u) { return; }
    }
    ctx->pc = 0x4180E4u;
label_4180e4:
    // 0x4180e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x4180e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_4180e8:
    // 0x4180e8: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x4180e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
label_4180ec:
    // 0x4180ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4180ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4180f0:
    // 0x4180f0: 0x24a583b0  addiu       $a1, $a1, -0x7C50
    ctx->pc = 0x4180f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935472));
label_4180f4:
    // 0x4180f4: 0x24c6b410  addiu       $a2, $a2, -0x4BF0
    ctx->pc = 0x4180f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947856));
label_4180f8:
    // 0x4180f8: 0x24070060  addiu       $a3, $zero, 0x60
    ctx->pc = 0x4180f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_4180fc:
    // 0x4180fc: 0xc040840  jal         func_102100
label_418100:
    if (ctx->pc == 0x418100u) {
        ctx->pc = 0x418100u;
            // 0x418100: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x418104u;
        goto label_418104;
    }
    ctx->pc = 0x4180FCu;
    SET_GPR_U32(ctx, 31, 0x418104u);
    ctx->pc = 0x418100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4180FCu;
            // 0x418100: 0x24080003  addiu       $t0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418104u; }
        if (ctx->pc != 0x418104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418104u; }
        if (ctx->pc != 0x418104u) { return; }
    }
    ctx->pc = 0x418104u;
label_418104:
    // 0x418104: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x418104u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_418108:
    // 0x418108: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x418108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41810c:
    // 0x41810c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x41810cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_418110:
    // 0x418110: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x418110u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_418114:
    // 0x418114: 0x28830003  slti        $v1, $a0, 0x3
    ctx->pc = 0x418114u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_418118:
    // 0x418118: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x418118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_41811c:
    // 0x41811c: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x41811cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_418120:
    // 0x418120: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_418124:
    if (ctx->pc == 0x418124u) {
        ctx->pc = 0x418128u;
        goto label_418128;
    }
    ctx->pc = 0x418120u;
    {
        const bool branch_taken_0x418120 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x418120) {
            ctx->pc = 0x41810Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_41810c;
        }
    }
    ctx->pc = 0x418128u;
label_418128:
    // 0x418128: 0xae30009c  sw          $s0, 0x9C($s1)
    ctx->pc = 0x418128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 16));
label_41812c:
    // 0x41812c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x41812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_418130:
    // 0x418130: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x418130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_418134:
    // 0x418134: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x418134u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_418138:
    // 0x418138: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x418138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41813c:
    // 0x41813c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x41813cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_418140:
    // 0x418140: 0xc0e7d2c  jal         func_39F4B0
label_418144:
    if (ctx->pc == 0x418144u) {
        ctx->pc = 0x418144u;
            // 0x418144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418148u;
        goto label_418148;
    }
    ctx->pc = 0x418140u;
    SET_GPR_U32(ctx, 31, 0x418148u);
    ctx->pc = 0x418144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418140u;
            // 0x418144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418148u; }
        if (ctx->pc != 0x418148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418148u; }
        if (ctx->pc != 0x418148u) { return; }
    }
    ctx->pc = 0x418148u;
label_418148:
    // 0x418148: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x418148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41814c:
    // 0x41814c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x41814cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_418150:
    // 0x418150: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x418150u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_418154:
    // 0x418154: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x418154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_418158:
    // 0x418158: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x418158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41815c:
    // 0x41815c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41815cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_418160:
    // 0x418160: 0xc0e7d2c  jal         func_39F4B0
label_418164:
    if (ctx->pc == 0x418164u) {
        ctx->pc = 0x418164u;
            // 0x418164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418168u;
        goto label_418168;
    }
    ctx->pc = 0x418160u;
    SET_GPR_U32(ctx, 31, 0x418168u);
    ctx->pc = 0x418164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418160u;
            // 0x418164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418168u; }
        if (ctx->pc != 0x418168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418168u; }
        if (ctx->pc != 0x418168u) { return; }
    }
    ctx->pc = 0x418168u;
label_418168:
    // 0x418168: 0x8e23009c  lw          $v1, 0x9C($s1)
    ctx->pc = 0x418168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_41816c:
    // 0x41816c: 0x3c024334  lui         $v0, 0x4334
    ctx->pc = 0x41816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17204 << 16));
label_418170:
    // 0x418170: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x418170u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_418174:
    // 0x418174: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x418174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_418178:
    // 0x418178: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x418178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_41817c:
    // 0x41817c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x41817cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_418180:
    // 0x418180: 0xc0e7d2c  jal         func_39F4B0
label_418184:
    if (ctx->pc == 0x418184u) {
        ctx->pc = 0x418184u;
            // 0x418184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418188u;
        goto label_418188;
    }
    ctx->pc = 0x418180u;
    SET_GPR_U32(ctx, 31, 0x418188u);
    ctx->pc = 0x418184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418180u;
            // 0x418184: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x39F4B0u;
    if (runtime->hasFunction(0x39F4B0u)) {
        auto targetFn = runtime->lookupFunction(0x39F4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418188u; }
        if (ctx->pc != 0x418188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0039F4B0_0x39f4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418188u; }
        if (ctx->pc != 0x418188u) { return; }
    }
    ctx->pc = 0x418188u;
label_418188:
    // 0x418188: 0x8e2800b0  lw          $t0, 0xB0($s1)
    ctx->pc = 0x418188u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_41818c:
    // 0x41818c: 0x2407fff7  addiu       $a3, $zero, -0x9
    ctx->pc = 0x41818cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_418190:
    // 0x418190: 0x2406f9ff  addiu       $a2, $zero, -0x601
    ctx->pc = 0x418190u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_418194:
    // 0x418194: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x418194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_418198:
    // 0x418198: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x418198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_41819c:
    // 0x41819c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x41819cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
label_4181a0:
    // 0x4181a0: 0x1073824  and         $a3, $t0, $a3
    ctx->pc = 0x4181a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & GPR_U64(ctx, 7));
label_4181a4:
    // 0x4181a4: 0x34e70008  ori         $a3, $a3, 0x8
    ctx->pc = 0x4181a4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
label_4181a8:
    // 0x4181a8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x4181a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
label_4181ac:
    // 0x4181ac: 0xae2700b0  sw          $a3, 0xB0($s1)
    ctx->pc = 0x4181acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 7));
label_4181b0:
    // 0x4181b0: 0x34c60600  ori         $a2, $a2, 0x600
    ctx->pc = 0x4181b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1536);
label_4181b4:
    // 0x4181b4: 0xae2600b0  sw          $a2, 0xB0($s1)
    ctx->pc = 0x4181b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 6));
label_4181b8:
    // 0x4181b8: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x4181b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_4181bc:
    // 0x4181bc: 0xae240070  sw          $a0, 0x70($s1)
    ctx->pc = 0x4181bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 4));
label_4181c0:
    // 0x4181c0: 0xae230078  sw          $v1, 0x78($s1)
    ctx->pc = 0x4181c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
label_4181c4:
    // 0x4181c4: 0xae230080  sw          $v1, 0x80($s1)
    ctx->pc = 0x4181c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 3));
label_4181c8:
    // 0x4181c8: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x4181c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_4181cc:
    // 0x4181cc: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x4181ccu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4181d0:
    // 0x4181d0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_4181d4:
    if (ctx->pc == 0x4181D4u) {
        ctx->pc = 0x4181D4u;
            // 0x4181d4: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4181D8u;
        goto label_4181d8;
    }
    ctx->pc = 0x4181D0u;
    {
        const bool branch_taken_0x4181d0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4181D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4181D0u;
            // 0x4181d4: 0xae2300d4  sw          $v1, 0xD4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4181d0) {
            ctx->pc = 0x4181DCu;
            goto label_4181dc;
        }
    }
    ctx->pc = 0x4181D8u;
label_4181d8:
    // 0x4181d8: 0xae2000d4  sw          $zero, 0xD4($s1)
    ctx->pc = 0x4181d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 0));
label_4181dc:
    // 0x4181dc: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x4181dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_4181e0:
    // 0x4181e0: 0x2403ffdf  addiu       $v1, $zero, -0x21
    ctx->pc = 0x4181e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4181e4:
    // 0x4181e4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4181e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4181e8:
    // 0x4181e8: 0xae2300b0  sw          $v1, 0xB0($s1)
    ctx->pc = 0x4181e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 3));
label_4181ec:
    // 0x4181ec: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x4181ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_4181f0:
    // 0x4181f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4181f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4181f4:
    // 0x4181f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4181f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4181f8:
    // 0x4181f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4181f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4181fc:
    // 0x4181fc: 0x3e00008  jr          $ra
label_418200:
    if (ctx->pc == 0x418200u) {
        ctx->pc = 0x418200u;
            // 0x418200: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x418204u;
        goto label_418204;
    }
    ctx->pc = 0x4181FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4181FCu;
            // 0x418200: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x418204u;
label_418204:
    // 0x418204: 0x0  nop
    ctx->pc = 0x418204u;
    // NOP
label_418208:
    // 0x418208: 0x0  nop
    ctx->pc = 0x418208u;
    // NOP
label_41820c:
    // 0x41820c: 0x0  nop
    ctx->pc = 0x41820cu;
    // NOP
label_418210:
    // 0x418210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x418210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_418214:
    // 0x418214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_418218:
    // 0x418218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x418218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_41821c:
    // 0x41821c: 0xc0e3580  jal         func_38D600
label_418220:
    if (ctx->pc == 0x418220u) {
        ctx->pc = 0x418220u;
            // 0x418220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418224u;
        goto label_418224;
    }
    ctx->pc = 0x41821Cu;
    SET_GPR_U32(ctx, 31, 0x418224u);
    ctx->pc = 0x418220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41821Cu;
            // 0x418220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418224u; }
        if (ctx->pc != 0x418224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418224u; }
        if (ctx->pc != 0x418224u) { return; }
    }
    ctx->pc = 0x418224u;
label_418224:
    // 0x418224: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x418224u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_418228:
    // 0x418228: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x418228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_41822c:
    // 0x41822c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x41822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418230:
    // 0x418230: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x418230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_418234:
    // 0x418234: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x418234u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_418238:
    // 0x418238: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x418238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_41823c:
    // 0x41823c: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x41823cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_418240:
    // 0x418240: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x418240u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_418244:
    // 0x418244: 0xa2040065  sb          $a0, 0x65($s0)
    ctx->pc = 0x418244u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 4));
label_418248:
    // 0x418248: 0xa2000068  sb          $zero, 0x68($s0)
    ctx->pc = 0x418248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 0));
label_41824c:
    // 0x41824c: 0xa2030069  sb          $v1, 0x69($s0)
    ctx->pc = 0x41824cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 3));
label_418250:
    // 0x418250: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x418250u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_418254:
    // 0x418254: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x418254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_418258:
    // 0x418258: 0x3e00008  jr          $ra
label_41825c:
    if (ctx->pc == 0x41825Cu) {
        ctx->pc = 0x41825Cu;
            // 0x41825c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x418260u;
        goto label_418260;
    }
    ctx->pc = 0x418258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41825Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418258u;
            // 0x41825c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x418260u;
label_418260:
    // 0x418260: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x418260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_418264:
    // 0x418264: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x418264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_418268:
    // 0x418268: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x418268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_41826c:
    // 0x41826c: 0xc0baaa0  jal         func_2EAA80
label_418270:
    if (ctx->pc == 0x418270u) {
        ctx->pc = 0x418270u;
            // 0x418270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x418274u;
        goto label_418274;
    }
    ctx->pc = 0x41826Cu;
    SET_GPR_U32(ctx, 31, 0x418274u);
    ctx->pc = 0x418270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41826Cu;
            // 0x418270: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418274u; }
        if (ctx->pc != 0x418274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418274u; }
        if (ctx->pc != 0x418274u) { return; }
    }
    ctx->pc = 0x418274u;
label_418274:
    // 0x418274: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x418274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_418278:
    // 0x418278: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x418278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_41827c:
    // 0x41827c: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x41827cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_418280:
    // 0x418280: 0x2463c4c0  addiu       $v1, $v1, -0x3B40
    ctx->pc = 0x418280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952128));
label_418284:
    // 0x418284: 0x90420c6a  lbu         $v0, 0xC6A($v0)
    ctx->pc = 0x418284u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3178)));
label_418288:
    // 0x418288: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x418288u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_41828c:
    // 0x41828c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x41828cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_418290:
    // 0x418290: 0xc073234  jal         func_1CC8D0
label_418294:
    if (ctx->pc == 0x418294u) {
        ctx->pc = 0x418294u;
            // 0x418294: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x418298u;
        goto label_418298;
    }
    ctx->pc = 0x418290u;
    SET_GPR_U32(ctx, 31, 0x418298u);
    ctx->pc = 0x418294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418290u;
            // 0x418294: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418298u; }
        if (ctx->pc != 0x418298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418298u; }
        if (ctx->pc != 0x418298u) { return; }
    }
    ctx->pc = 0x418298u;
label_418298:
    // 0x418298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x418298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_41829c:
    // 0x41829c: 0x3e00008  jr          $ra
label_4182a0:
    if (ctx->pc == 0x4182A0u) {
        ctx->pc = 0x4182A0u;
            // 0x4182a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x4182A4u;
        goto label_4182a4;
    }
    ctx->pc = 0x41829Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4182A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41829Cu;
            // 0x4182a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4182A4u;
label_4182a4:
    // 0x4182a4: 0x0  nop
    ctx->pc = 0x4182a4u;
    // NOP
label_4182a8:
    // 0x4182a8: 0x0  nop
    ctx->pc = 0x4182a8u;
    // NOP
label_4182ac:
    // 0x4182ac: 0x0  nop
    ctx->pc = 0x4182acu;
    // NOP
label_4182b0:
    // 0x4182b0: 0x8c8500d0  lw          $a1, 0xD0($a0)
    ctx->pc = 0x4182b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_4182b4:
    // 0x4182b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4182b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4182b8:
    // 0x4182b8: 0x10a3001e  beq         $a1, $v1, . + 4 + (0x1E << 2)
label_4182bc:
    if (ctx->pc == 0x4182BCu) {
        ctx->pc = 0x4182C0u;
        goto label_4182c0;
    }
    ctx->pc = 0x4182B8u;
    {
        const bool branch_taken_0x4182b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4182b8) {
            ctx->pc = 0x418334u;
            goto label_418334;
        }
    }
    ctx->pc = 0x4182C0u;
label_4182c0:
    // 0x4182c0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_4182c4:
    if (ctx->pc == 0x4182C4u) {
        ctx->pc = 0x4182C8u;
        goto label_4182c8;
    }
    ctx->pc = 0x4182C0u;
    {
        const bool branch_taken_0x4182c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4182c0) {
            ctx->pc = 0x4182D0u;
            goto label_4182d0;
        }
    }
    ctx->pc = 0x4182C8u;
label_4182c8:
    // 0x4182c8: 0x1000001a  b           . + 4 + (0x1A << 2)
label_4182cc:
    if (ctx->pc == 0x4182CCu) {
        ctx->pc = 0x4182D0u;
        goto label_4182d0;
    }
    ctx->pc = 0x4182C8u;
    {
        const bool branch_taken_0x4182c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4182c8) {
            ctx->pc = 0x418334u;
            goto label_418334;
        }
    }
    ctx->pc = 0x4182D0u;
label_4182d0:
    // 0x4182d0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4182d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4182d4:
    // 0x4182d4: 0x8c85009c  lw          $a1, 0x9C($a0)
    ctx->pc = 0x4182d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
label_4182d8:
    // 0x4182d8: 0x8c637310  lw          $v1, 0x7310($v1)
    ctx->pc = 0x4182d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29456)));
label_4182dc:
    // 0x4182dc: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x4182dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_4182e0:
    // 0x4182e0: 0x8c690030  lw          $t1, 0x30($v1)
    ctx->pc = 0x4182e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_4182e4:
    // 0x4182e4: 0xaca9000c  sw          $t1, 0xC($a1)
    ctx->pc = 0x4182e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 9));
label_4182e8:
    // 0x4182e8: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4182e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4182ec:
    // 0x4182ec: 0x8cab0000  lw          $t3, 0x0($a1)
    ctx->pc = 0x4182ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4182f0:
    // 0x4182f0: 0x8caa0010  lw          $t2, 0x10($a1)
    ctx->pc = 0x4182f0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_4182f4:
    // 0x4182f4: 0x8d680000  lw          $t0, 0x0($t3)
    ctx->pc = 0x4182f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_4182f8:
    // 0x4182f8: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x4182f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
label_4182fc:
    // 0x4182fc: 0x8c65fdb0  lw          $a1, -0x250($v1)
    ctx->pc = 0x4182fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966704)));
label_418300:
    // 0x418300: 0x8d070018  lw          $a3, 0x18($t0)
    ctx->pc = 0x418300u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_418304:
    // 0x418304: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x418304u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_418308:
    // 0x418308: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x418308u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_41830c:
    // 0x41830c: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x41830cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_418310:
    // 0x418310: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x418310u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_418314:
    // 0x418314: 0x1263021  addu        $a2, $t1, $a2
    ctx->pc = 0x418314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
label_418318:
    // 0x418318: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x418318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_41831c:
    // 0x41831c: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x41831cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_418320:
    // 0x418320: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x418320u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_418324:
    // 0x418324: 0x1d40fff3  bgtz        $t2, . + 4 + (-0xD << 2)
label_418328:
    if (ctx->pc == 0x418328u) {
        ctx->pc = 0x418328u;
            // 0x418328: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x41832Cu;
        goto label_41832c;
    }
    ctx->pc = 0x418324u;
    {
        const bool branch_taken_0x418324 = (GPR_S32(ctx, 10) > 0);
        ctx->pc = 0x418328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418324u;
            // 0x418328: 0xa1050020  sb          $a1, 0x20($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 32), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418324) {
            ctx->pc = 0x4182F4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4182f4;
        }
    }
    ctx->pc = 0x41832Cu;
label_41832c:
    // 0x41832c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x41832cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418330:
    // 0x418330: 0xac8300d0  sw          $v1, 0xD0($a0)
    ctx->pc = 0x418330u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 3));
label_418334:
    // 0x418334: 0x3e00008  jr          $ra
label_418338:
    if (ctx->pc == 0x418338u) {
        ctx->pc = 0x41833Cu;
        goto label_41833c;
    }
    ctx->pc = 0x418334u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41833Cu;
label_41833c:
    // 0x41833c: 0x0  nop
    ctx->pc = 0x41833cu;
    // NOP
label_418340:
    // 0x418340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x418340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_418344:
    // 0x418344: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x418344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_418348:
    // 0x418348: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41834c:
    // 0x41834c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x41834cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_418350:
    // 0x418350: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x418350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_418354:
    // 0x418354: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418358:
    // 0x418358: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x418358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_41835c:
    // 0x41835c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x41835cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418360:
    // 0x418360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x418360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418364:
    // 0x418364: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x418364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_418368:
    // 0x418368: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x418368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_41836c:
    // 0x41836c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x41836cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_418370:
    // 0x418370: 0xc08bff0  jal         func_22FFC0
label_418374:
    if (ctx->pc == 0x418374u) {
        ctx->pc = 0x418374u;
            // 0x418374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418378u;
        goto label_418378;
    }
    ctx->pc = 0x418370u;
    SET_GPR_U32(ctx, 31, 0x418378u);
    ctx->pc = 0x418374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418370u;
            // 0x418374: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418378u; }
        if (ctx->pc != 0x418378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418378u; }
        if (ctx->pc != 0x418378u) { return; }
    }
    ctx->pc = 0x418378u;
label_418378:
    // 0x418378: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x418378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_41837c:
    // 0x41837c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x41837cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_418380:
    // 0x418380: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x418380u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418384:
    // 0x418384: 0xc08914c  jal         func_224530
label_418388:
    if (ctx->pc == 0x418388u) {
        ctx->pc = 0x418388u;
            // 0x418388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41838Cu;
        goto label_41838c;
    }
    ctx->pc = 0x418384u;
    SET_GPR_U32(ctx, 31, 0x41838Cu);
    ctx->pc = 0x418388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418384u;
            // 0x418388: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41838Cu; }
        if (ctx->pc != 0x41838Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41838Cu; }
        if (ctx->pc != 0x41838Cu) { return; }
    }
    ctx->pc = 0x41838Cu;
label_41838c:
    // 0x41838c: 0xc0e393c  jal         func_38E4F0
label_418390:
    if (ctx->pc == 0x418390u) {
        ctx->pc = 0x418390u;
            // 0x418390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418394u;
        goto label_418394;
    }
    ctx->pc = 0x41838Cu;
    SET_GPR_U32(ctx, 31, 0x418394u);
    ctx->pc = 0x418390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41838Cu;
            // 0x418390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418394u; }
        if (ctx->pc != 0x418394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418394u; }
        if (ctx->pc != 0x418394u) { return; }
    }
    ctx->pc = 0x418394u;
label_418394:
    // 0x418394: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x418394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_418398:
    // 0x418398: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x418398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_41839c:
    // 0x41839c: 0x2c610003  sltiu       $at, $v1, 0x3
    ctx->pc = 0x41839cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_4183a0:
    // 0x4183a0: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_4183a4:
    if (ctx->pc == 0x4183A4u) {
        ctx->pc = 0x4183A4u;
            // 0x4183a4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->pc = 0x4183A8u;
        goto label_4183a8;
    }
    ctx->pc = 0x4183A0u;
    {
        const bool branch_taken_0x4183a0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x4183A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4183A0u;
            // 0x4183a4: 0xae0300d4  sw          $v1, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4183a0) {
            ctx->pc = 0x4183ACu;
            goto label_4183ac;
        }
    }
    ctx->pc = 0x4183A8u;
label_4183a8:
    // 0x4183a8: 0xae0000d4  sw          $zero, 0xD4($s0)
    ctx->pc = 0x4183a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 0));
label_4183ac:
    // 0x4183ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4183acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4183b0:
    // 0x4183b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4183b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4183b4:
    // 0x4183b4: 0x3e00008  jr          $ra
label_4183b8:
    if (ctx->pc == 0x4183B8u) {
        ctx->pc = 0x4183B8u;
            // 0x4183b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4183BCu;
        goto label_4183bc;
    }
    ctx->pc = 0x4183B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4183B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4183B4u;
            // 0x4183b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4183BCu;
label_4183bc:
    // 0x4183bc: 0x0  nop
    ctx->pc = 0x4183bcu;
    // NOP
label_4183c0:
    // 0x4183c0: 0x3e00008  jr          $ra
label_4183c4:
    if (ctx->pc == 0x4183C4u) {
        ctx->pc = 0x4183C4u;
            // 0x4183c4: 0x240236ec  addiu       $v0, $zero, 0x36EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14060));
        ctx->pc = 0x4183C8u;
        goto label_4183c8;
    }
    ctx->pc = 0x4183C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4183C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4183C0u;
            // 0x4183c4: 0x240236ec  addiu       $v0, $zero, 0x36EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4183C8u;
label_4183c8:
    // 0x4183c8: 0x0  nop
    ctx->pc = 0x4183c8u;
    // NOP
label_4183cc:
    // 0x4183cc: 0x0  nop
    ctx->pc = 0x4183ccu;
    // NOP
label_4183d0:
    // 0x4183d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4183d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4183d4:
    // 0x4183d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4183d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_4183d8:
    // 0x4183d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4183d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4183dc:
    // 0x4183dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4183dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4183e0:
    // 0x4183e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4183e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4183e4:
    // 0x4183e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4183e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4183e8:
    // 0x4183e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4183e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4183ec:
    // 0x4183ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4183ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4183f0:
    // 0x4183f0: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x4183f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4183f4:
    // 0x4183f4: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_4183f8:
    if (ctx->pc == 0x4183F8u) {
        ctx->pc = 0x4183F8u;
            // 0x4183f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4183FCu;
        goto label_4183fc;
    }
    ctx->pc = 0x4183F4u;
    {
        const bool branch_taken_0x4183f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4183F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4183F4u;
            // 0x4183f8: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4183f4) {
            ctx->pc = 0x418438u;
            goto label_418438;
        }
    }
    ctx->pc = 0x4183FCu;
label_4183fc:
    // 0x4183fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4183fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418400:
    // 0x418400: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x418400u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418404:
    // 0x418404: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x418404u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418408:
    // 0x418408: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x418408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_41840c:
    // 0x41840c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x41840cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_418410:
    // 0x418410: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x418410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_418414:
    // 0x418414: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x418414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_418418:
    // 0x418418: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x418418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_41841c:
    // 0x41841c: 0x320f809  jalr        $t9
label_418420:
    if (ctx->pc == 0x418420u) {
        ctx->pc = 0x418424u;
        goto label_418424;
    }
    ctx->pc = 0x41841Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x418424u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x418424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x418424u; }
            if (ctx->pc != 0x418424u) { return; }
        }
        }
    }
    ctx->pc = 0x418424u;
label_418424:
    // 0x418424: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x418424u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_418428:
    // 0x418428: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x418428u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_41842c:
    // 0x41842c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x41842cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_418430:
    // 0x418430: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_418434:
    if (ctx->pc == 0x418434u) {
        ctx->pc = 0x418434u;
            // 0x418434: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x418438u;
        goto label_418438;
    }
    ctx->pc = 0x418430u;
    {
        const bool branch_taken_0x418430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x418434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418430u;
            // 0x418434: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418430) {
            ctx->pc = 0x418408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_418408;
        }
    }
    ctx->pc = 0x418438u;
label_418438:
    // 0x418438: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x418438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_41843c:
    // 0x41843c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x41843cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_418440:
    // 0x418440: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x418440u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_418444:
    // 0x418444: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x418444u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418448:
    // 0x418448: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x418448u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_41844c:
    // 0x41844c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x41844cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_418450:
    // 0x418450: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x418450u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_418454:
    // 0x418454: 0x3e00008  jr          $ra
label_418458:
    if (ctx->pc == 0x418458u) {
        ctx->pc = 0x418458u;
            // 0x418458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x41845Cu;
        goto label_41845c;
    }
    ctx->pc = 0x418454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418454u;
            // 0x418458: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x41845Cu;
label_41845c:
    // 0x41845c: 0x0  nop
    ctx->pc = 0x41845cu;
    // NOP
label_418460:
    // 0x418460: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418464:
    // 0x418464: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x418464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418468:
    // 0x418468: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x418468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41846c:
    // 0x41846c: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x41846cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_418470:
    // 0x418470: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x418470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_418474:
    // 0x418474: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x418474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_418478:
    // 0x418478: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x418478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_41847c:
    // 0x41847c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x41847cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_418480:
    // 0x418480: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x418480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_418484:
    // 0x418484: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x418484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_418488:
    // 0x418488: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x418488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_41848c:
    // 0x41848c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x41848cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418490:
    // 0x418490: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x418490u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_418494:
    // 0x418494: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x418494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_418498:
    // 0x418498: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x418498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_41849c:
    // 0x41849c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x41849cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_4184a0:
    // 0x4184a0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x4184a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_4184a4:
    // 0x4184a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4184a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4184a8:
    // 0x4184a8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x4184a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_4184ac:
    // 0x4184ac: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x4184acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_4184b0:
    // 0x4184b0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x4184b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_4184b4:
    // 0x4184b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4184b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4184b8:
    // 0x4184b8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x4184b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4184bc:
    // 0x4184bc: 0xc0a997c  jal         func_2A65F0
label_4184c0:
    if (ctx->pc == 0x4184C0u) {
        ctx->pc = 0x4184C0u;
            // 0x4184c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x4184C4u;
        goto label_4184c4;
    }
    ctx->pc = 0x4184BCu;
    SET_GPR_U32(ctx, 31, 0x4184C4u);
    ctx->pc = 0x4184C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4184BCu;
            // 0x4184c0: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4184C4u; }
        if (ctx->pc != 0x4184C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4184C4u; }
        if (ctx->pc != 0x4184C4u) { return; }
    }
    ctx->pc = 0x4184C4u;
label_4184c4:
    // 0x4184c4: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x4184c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_4184c8:
    // 0x4184c8: 0xc0d879c  jal         func_361E70
label_4184cc:
    if (ctx->pc == 0x4184CCu) {
        ctx->pc = 0x4184CCu;
            // 0x4184cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4184D0u;
        goto label_4184d0;
    }
    ctx->pc = 0x4184C8u;
    SET_GPR_U32(ctx, 31, 0x4184D0u);
    ctx->pc = 0x4184CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4184C8u;
            // 0x4184cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4184D0u; }
        if (ctx->pc != 0x4184D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4184D0u; }
        if (ctx->pc != 0x4184D0u) { return; }
    }
    ctx->pc = 0x4184D0u;
label_4184d0:
    // 0x4184d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4184d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4184d4:
    // 0x4184d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4184d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4184d8:
    // 0x4184d8: 0x3e00008  jr          $ra
label_4184dc:
    if (ctx->pc == 0x4184DCu) {
        ctx->pc = 0x4184DCu;
            // 0x4184dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4184E0u;
        goto label_4184e0;
    }
    ctx->pc = 0x4184D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4184DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4184D8u;
            // 0x4184dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4184E0u;
label_4184e0:
    // 0x4184e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4184e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4184e4:
    // 0x4184e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4184e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4184e8:
    // 0x4184e8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4184e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4184ec:
    // 0x4184ec: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x4184ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_4184f0:
    // 0x4184f0: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_4184f4:
    if (ctx->pc == 0x4184F4u) {
        ctx->pc = 0x4184F4u;
            // 0x4184f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4184F8u;
        goto label_4184f8;
    }
    ctx->pc = 0x4184F0u;
    {
        const bool branch_taken_0x4184f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4184F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4184F0u;
            // 0x4184f4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4184f0) {
            ctx->pc = 0x418610u;
            goto label_418610;
        }
    }
    ctx->pc = 0x4184F8u;
label_4184f8:
    // 0x4184f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x4184f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_4184fc:
    // 0x4184fc: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x4184fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_418500:
    // 0x418500: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x418500u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_418504:
    // 0x418504: 0xc075128  jal         func_1D44A0
label_418508:
    if (ctx->pc == 0x418508u) {
        ctx->pc = 0x418508u;
            // 0x418508: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x41850Cu;
        goto label_41850c;
    }
    ctx->pc = 0x418504u;
    SET_GPR_U32(ctx, 31, 0x41850Cu);
    ctx->pc = 0x418508u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418504u;
            // 0x418508: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41850Cu; }
        if (ctx->pc != 0x41850Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41850Cu; }
        if (ctx->pc != 0x41850Cu) { return; }
    }
    ctx->pc = 0x41850Cu;
label_41850c:
    // 0x41850c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x41850cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_418510:
    // 0x418510: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418514:
    // 0x418514: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x418514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_418518:
    // 0x418518: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x418518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_41851c:
    // 0x41851c: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x41851cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_418520:
    // 0x418520: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_418524:
    if (ctx->pc == 0x418524u) {
        ctx->pc = 0x418524u;
            // 0x418524: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x418528u;
        goto label_418528;
    }
    ctx->pc = 0x418520u;
    {
        const bool branch_taken_0x418520 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x418524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418520u;
            // 0x418524: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418520) {
            ctx->pc = 0x418530u;
            goto label_418530;
        }
    }
    ctx->pc = 0x418528u;
label_418528:
    // 0x418528: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41852c:
    // 0x41852c: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x41852cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_418530:
    // 0x418530: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x418530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_418534:
    // 0x418534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418538:
    // 0x418538: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x418538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_41853c:
    // 0x41853c: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x41853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_418540:
    // 0x418540: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x418540u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_418544:
    // 0x418544: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_418548:
    if (ctx->pc == 0x418548u) {
        ctx->pc = 0x418548u;
            // 0x418548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x41854Cu;
        goto label_41854c;
    }
    ctx->pc = 0x418544u;
    {
        const bool branch_taken_0x418544 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x418544) {
            ctx->pc = 0x418548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418544u;
            // 0x418548: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418558u;
            goto label_418558;
        }
    }
    ctx->pc = 0x41854Cu;
label_41854c:
    // 0x41854c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x41854cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418550:
    // 0x418550: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x418550u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_418554:
    // 0x418554: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x418554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_418558:
    // 0x418558: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_41855c:
    // 0x41855c: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x41855cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_418560:
    // 0x418560: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x418560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_418564:
    // 0x418564: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x418564u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_418568:
    // 0x418568: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_41856c:
    if (ctx->pc == 0x41856Cu) {
        ctx->pc = 0x41856Cu;
            // 0x41856c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x418570u;
        goto label_418570;
    }
    ctx->pc = 0x418568u;
    {
        const bool branch_taken_0x418568 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x418568) {
            ctx->pc = 0x41856Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418568u;
            // 0x41856c: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x41857Cu;
            goto label_41857c;
        }
    }
    ctx->pc = 0x418570u;
label_418570:
    // 0x418570: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x418570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_418574:
    // 0x418574: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x418574u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_418578:
    // 0x418578: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x418578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41857c:
    // 0x41857c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x41857cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_418580:
    // 0x418580: 0x320f809  jalr        $t9
label_418584:
    if (ctx->pc == 0x418584u) {
        ctx->pc = 0x418584u;
            // 0x418584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418588u;
        goto label_418588;
    }
    ctx->pc = 0x418580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x418588u);
        ctx->pc = 0x418584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418580u;
            // 0x418584: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x418588u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x418588u; }
            if (ctx->pc != 0x418588u) { return; }
        }
        }
    }
    ctx->pc = 0x418588u;
label_418588:
    // 0x418588: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x418588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_41858c:
    // 0x41858c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x41858cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_418590:
    // 0x418590: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x418590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_418594:
    // 0x418594: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x418594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_418598:
    // 0x418598: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x418598u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_41859c:
    // 0x41859c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x41859cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4185a0:
    // 0x4185a0: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_4185a4:
    if (ctx->pc == 0x4185A4u) {
        ctx->pc = 0x4185A4u;
            // 0x4185a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x4185A8u;
        goto label_4185a8;
    }
    ctx->pc = 0x4185A0u;
    {
        const bool branch_taken_0x4185a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4185a0) {
            ctx->pc = 0x4185A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4185A0u;
            // 0x4185a4: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4185B4u;
            goto label_4185b4;
        }
    }
    ctx->pc = 0x4185A8u;
label_4185a8:
    // 0x4185a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185ac:
    // 0x4185ac: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x4185acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_4185b0:
    // 0x4185b0: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x4185b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_4185b4:
    // 0x4185b4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185b8:
    // 0x4185b8: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x4185b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_4185bc:
    // 0x4185bc: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x4185bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_4185c0:
    // 0x4185c0: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x4185c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_4185c4:
    // 0x4185c4: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x4185c4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_4185c8:
    // 0x4185c8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4185cc:
    if (ctx->pc == 0x4185CCu) {
        ctx->pc = 0x4185D0u;
        goto label_4185d0;
    }
    ctx->pc = 0x4185C8u;
    {
        const bool branch_taken_0x4185c8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4185c8) {
            ctx->pc = 0x4185D8u;
            goto label_4185d8;
        }
    }
    ctx->pc = 0x4185D0u;
label_4185d0:
    // 0x4185d0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185d4:
    // 0x4185d4: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x4185d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_4185d8:
    // 0x4185d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185dc:
    // 0x4185dc: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x4185dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_4185e0:
    // 0x4185e0: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4185e0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4185e4:
    // 0x4185e4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_4185e8:
    if (ctx->pc == 0x4185E8u) {
        ctx->pc = 0x4185ECu;
        goto label_4185ec;
    }
    ctx->pc = 0x4185E4u;
    {
        const bool branch_taken_0x4185e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4185e4) {
            ctx->pc = 0x4185F4u;
            goto label_4185f4;
        }
    }
    ctx->pc = 0x4185ECu;
label_4185ec:
    // 0x4185ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185f0:
    // 0x4185f0: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x4185f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_4185f4:
    // 0x4185f4: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4185f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4185f8:
    // 0x4185f8: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x4185f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_4185fc:
    // 0x4185fc: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4185fcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_418600:
    // 0x418600: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_418604:
    if (ctx->pc == 0x418604u) {
        ctx->pc = 0x418604u;
            // 0x418604: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x418608u;
        goto label_418608;
    }
    ctx->pc = 0x418600u;
    {
        const bool branch_taken_0x418600 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x418600) {
            ctx->pc = 0x418604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418600u;
            // 0x418604: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418614u;
            goto label_418614;
        }
    }
    ctx->pc = 0x418608u;
label_418608:
    // 0x418608: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x418608u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_41860c:
    // 0x41860c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x41860cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_418610:
    // 0x418610: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x418610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_418614:
    // 0x418614: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x418614u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_418618:
    // 0x418618: 0x3e00008  jr          $ra
label_41861c:
    if (ctx->pc == 0x41861Cu) {
        ctx->pc = 0x41861Cu;
            // 0x41861c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x418620u;
        goto label_418620;
    }
    ctx->pc = 0x418618u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418618u;
            // 0x41861c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x418620u;
label_418620:
    // 0x418620: 0x8105af8  j           func_416BE0
label_418624:
    if (ctx->pc == 0x418624u) {
        ctx->pc = 0x418624u;
            // 0x418624: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x418628u;
        goto label_418628;
    }
    ctx->pc = 0x418620u;
    ctx->pc = 0x418624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418620u;
            // 0x418624: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x416BE0u;
    {
        auto targetFn = runtime->lookupFunction(0x416BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x418628u;
label_418628:
    // 0x418628: 0x0  nop
    ctx->pc = 0x418628u;
    // NOP
label_41862c:
    // 0x41862c: 0x0  nop
    ctx->pc = 0x41862cu;
    // NOP
label_418630:
    // 0x418630: 0x8105e1c  j           func_417870
label_418634:
    if (ctx->pc == 0x418634u) {
        ctx->pc = 0x418634u;
            // 0x418634: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x418638u;
        goto label_418638;
    }
    ctx->pc = 0x418630u;
    ctx->pc = 0x418634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418630u;
            // 0x418634: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x417870u;
    {
        auto targetFn = runtime->lookupFunction(0x417870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x418638u;
label_418638:
    // 0x418638: 0x0  nop
    ctx->pc = 0x418638u;
    // NOP
label_41863c:
    // 0x41863c: 0x0  nop
    ctx->pc = 0x41863cu;
    // NOP
label_418640:
    // 0x418640: 0x8105aa0  j           func_416A80
label_418644:
    if (ctx->pc == 0x418644u) {
        ctx->pc = 0x418644u;
            // 0x418644: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x418648u;
        goto label_418648;
    }
    ctx->pc = 0x418640u;
    ctx->pc = 0x418644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418640u;
            // 0x418644: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x416A80u;
    if (runtime->hasFunction(0x416A80u)) {
        auto targetFn = runtime->lookupFunction(0x416A80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00416A80_0x416a80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x418648u;
label_418648:
    // 0x418648: 0x0  nop
    ctx->pc = 0x418648u;
    // NOP
label_41864c:
    // 0x41864c: 0x0  nop
    ctx->pc = 0x41864cu;
    // NOP
label_418650:
    // 0x418650: 0x8105a7c  j           func_4169F0
label_418654:
    if (ctx->pc == 0x418654u) {
        ctx->pc = 0x418654u;
            // 0x418654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x418658u;
        goto label_418658;
    }
    ctx->pc = 0x418650u;
    ctx->pc = 0x418654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418650u;
            // 0x418654: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4169F0u;
    {
        auto targetFn = runtime->lookupFunction(0x4169F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x418658u;
label_418658:
    // 0x418658: 0x0  nop
    ctx->pc = 0x418658u;
    // NOP
label_41865c:
    // 0x41865c: 0x0  nop
    ctx->pc = 0x41865cu;
    // NOP
label_418660:
    // 0x418660: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x418660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_418664:
    // 0x418664: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x418664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_418668:
    // 0x418668: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x418668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_41866c:
    // 0x41866c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x41866cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_418670:
    // 0x418670: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x418670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_418674:
    // 0x418674: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x418674u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_418678:
    // 0x418678: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x418678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_41867c:
    // 0x41867c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41867cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418680:
    // 0x418680: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x418680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_418684:
    // 0x418684: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x418684u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_418688:
    // 0x418688: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x418688u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_41868c:
    // 0x41868c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x41868cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_418690:
    // 0x418690: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x418690u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_418694:
    // 0x418694: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x418694u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_418698:
    // 0x418698: 0x8c430c78  lw          $v1, 0xC78($v0)
    ctx->pc = 0x418698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_41869c:
    // 0x41869c: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x41869cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4186a0:
    // 0x4186a0: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x4186a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_4186a4:
    // 0x4186a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4186a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4186a8:
    // 0x4186a8: 0x8c850d74  lw          $a1, 0xD74($a0)
    ctx->pc = 0x4186a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3444)));
label_4186ac:
    // 0x4186ac: 0x90a302c5  lbu         $v1, 0x2C5($a1)
    ctx->pc = 0x4186acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 709)));
label_4186b0:
    // 0x4186b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x4186b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_4186b4:
    // 0x4186b4: 0xa7a200f4  sh          $v0, 0xF4($sp)
    ctx->pc = 0x4186b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 244), (uint16_t)GPR_U32(ctx, 2));
label_4186b8:
    // 0x4186b8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x4186b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4186bc:
    // 0x4186bc: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x4186bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_4186c0:
    // 0x4186c0: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x4186c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_4186c4:
    // 0x4186c4: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x4186c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
label_4186c8:
    // 0x4186c8: 0x24510280  addiu       $s1, $v0, 0x280
    ctx->pc = 0x4186c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 640));
label_4186cc:
    // 0x4186cc: 0xafa000e8  sw          $zero, 0xE8($sp)
    ctx->pc = 0x4186ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 0));
label_4186d0:
    // 0x4186d0: 0xa7a000f0  sh          $zero, 0xF0($sp)
    ctx->pc = 0x4186d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 240), (uint16_t)GPR_U32(ctx, 0));
label_4186d4:
    // 0x4186d4: 0xa7a000f2  sh          $zero, 0xF2($sp)
    ctx->pc = 0x4186d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 242), (uint16_t)GPR_U32(ctx, 0));
label_4186d8:
    // 0x4186d8: 0xc04cbd8  jal         func_132F60
label_4186dc:
    if (ctx->pc == 0x4186DCu) {
        ctx->pc = 0x4186DCu;
            // 0x4186dc: 0xa7a000f6  sh          $zero, 0xF6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x4186E0u;
        goto label_4186e0;
    }
    ctx->pc = 0x4186D8u;
    SET_GPR_U32(ctx, 31, 0x4186E0u);
    ctx->pc = 0x4186DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4186D8u;
            // 0x4186dc: 0xa7a000f6  sh          $zero, 0xF6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 246), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4186E0u; }
        if (ctx->pc != 0x4186E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4186E0u; }
        if (ctx->pc != 0x4186E0u) { return; }
    }
    ctx->pc = 0x4186E0u;
label_4186e0:
    // 0x4186e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4186e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4186e4:
    // 0x4186e4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4186e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4186e8:
    // 0x4186e8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4186e8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4186ec:
    // 0x4186ec: 0xc04cbd8  jal         func_132F60
label_4186f0:
    if (ctx->pc == 0x4186F0u) {
        ctx->pc = 0x4186F0u;
            // 0x4186f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4186F4u;
        goto label_4186f4;
    }
    ctx->pc = 0x4186ECu;
    SET_GPR_U32(ctx, 31, 0x4186F4u);
    ctx->pc = 0x4186F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4186ECu;
            // 0x4186f0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4186F4u; }
        if (ctx->pc != 0x4186F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4186F4u; }
        if (ctx->pc != 0x4186F4u) { return; }
    }
    ctx->pc = 0x4186F4u;
label_4186f4:
    // 0x4186f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4186f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4186f8:
    // 0x4186f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4186f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4186fc:
    // 0x4186fc: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4186fcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_418700:
    // 0x418700: 0xc04cbd8  jal         func_132F60
label_418704:
    if (ctx->pc == 0x418704u) {
        ctx->pc = 0x418704u;
            // 0x418704: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x418708u;
        goto label_418708;
    }
    ctx->pc = 0x418700u;
    SET_GPR_U32(ctx, 31, 0x418708u);
    ctx->pc = 0x418704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418700u;
            // 0x418704: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418708u; }
        if (ctx->pc != 0x418708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418708u; }
        if (ctx->pc != 0x418708u) { return; }
    }
    ctx->pc = 0x418708u;
label_418708:
    // 0x418708: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x418708u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_41870c:
    // 0x41870c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x41870cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_418710:
    // 0x418710: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x418710u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_418714:
    // 0x418714: 0xc04cbd8  jal         func_132F60
label_418718:
    if (ctx->pc == 0x418718u) {
        ctx->pc = 0x418718u;
            // 0x418718: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x41871Cu;
        goto label_41871c;
    }
    ctx->pc = 0x418714u;
    SET_GPR_U32(ctx, 31, 0x41871Cu);
    ctx->pc = 0x418718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418714u;
            // 0x418718: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41871Cu; }
        if (ctx->pc != 0x41871Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41871Cu; }
        if (ctx->pc != 0x41871Cu) { return; }
    }
    ctx->pc = 0x41871Cu;
label_41871c:
    // 0x41871c: 0x92230004  lbu         $v1, 0x4($s1)
    ctx->pc = 0x41871cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
label_418720:
    // 0x418720: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x418720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_418724:
    // 0x418724: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x418724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418728:
    // 0x418728: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x418728u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41872c:
    // 0x41872c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x41872cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_418730:
    // 0x418730: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x418730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_418734:
    // 0x418734: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x418734u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_418738:
    // 0x418738: 0xc0b7d90  jal         func_2DF640
label_41873c:
    if (ctx->pc == 0x41873Cu) {
        ctx->pc = 0x41873Cu;
            // 0x41873c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->pc = 0x418740u;
        goto label_418740;
    }
    ctx->pc = 0x418738u;
    SET_GPR_U32(ctx, 31, 0x418740u);
    ctx->pc = 0x41873Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418738u;
            // 0x41873c: 0x244602c0  addiu       $a2, $v0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DF640u;
    if (runtime->hasFunction(0x2DF640u)) {
        auto targetFn = runtime->lookupFunction(0x2DF640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418740u; }
        if (ctx->pc != 0x418740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DF640_0x2df640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418740u; }
        if (ctx->pc != 0x418740u) { return; }
    }
    ctx->pc = 0x418740u;
label_418740:
    // 0x418740: 0x92240005  lbu         $a0, 0x5($s1)
    ctx->pc = 0x418740u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 5)));
label_418744:
    // 0x418744: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418748:
    // 0x418748: 0x508300ec  beql        $a0, $v1, . + 4 + (0xEC << 2)
label_41874c:
    if (ctx->pc == 0x41874Cu) {
        ctx->pc = 0x41874Cu;
            // 0x41874c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x418750u;
        goto label_418750;
    }
    ctx->pc = 0x418748u;
    {
        const bool branch_taken_0x418748 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x418748) {
            ctx->pc = 0x41874Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418748u;
            // 0x41874c: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418AFCu;
            goto label_418afc;
        }
    }
    ctx->pc = 0x418750u;
label_418750:
    // 0x418750: 0x50800003  beql        $a0, $zero, . + 4 + (0x3 << 2)
label_418754:
    if (ctx->pc == 0x418754u) {
        ctx->pc = 0x418754u;
            // 0x418754: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->pc = 0x418758u;
        goto label_418758;
    }
    ctx->pc = 0x418750u;
    {
        const bool branch_taken_0x418750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x418750) {
            ctx->pc = 0x418754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418750u;
            // 0x418754: 0x8fa500e0  lw          $a1, 0xE0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418760u;
            goto label_418760;
        }
    }
    ctx->pc = 0x418758u;
label_418758:
    // 0x418758: 0x100001bb  b           . + 4 + (0x1BB << 2)
label_41875c:
    if (ctx->pc == 0x41875Cu) {
        ctx->pc = 0x41875Cu;
            // 0x41875c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x418760u;
        goto label_418760;
    }
    ctx->pc = 0x418758u;
    {
        const bool branch_taken_0x418758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41875Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418758u;
            // 0x41875c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418758) {
            ctx->pc = 0x418E48u;
            goto label_418e48;
        }
    }
    ctx->pc = 0x418760u;
label_418760:
    // 0x418760: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x418760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_418764:
    // 0x418764: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x418764u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418768:
    // 0x418768: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x418768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_41876c:
    // 0x41876c: 0x84a60020  lh          $a2, 0x20($a1)
    ctx->pc = 0x41876cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 32)));
label_418770:
    // 0x418770: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x418770u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_418774:
    // 0x418774: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x418774u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418778:
    // 0x418778: 0x3c033dcc  lui         $v1, 0x3DCC
    ctx->pc = 0x418778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15820 << 16));
label_41877c:
    // 0x41877c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x41877cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_418780:
    // 0x418780: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x418780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418784:
    // 0x418784: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x418784u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_418788:
    // 0x418788: 0x84a50026  lh          $a1, 0x26($a1)
    ctx->pc = 0x418788u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
label_41878c:
    // 0x41878c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x41878cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_418790:
    // 0x418790: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x418790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_418794:
    // 0x418794: 0x46011303  div.s       $f12, $f2, $f1
    ctx->pc = 0x418794u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[12] = ctx->f[2] / ctx->f[1];
label_418798:
    // 0x418798: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x418798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41879c:
    // 0x41879c: 0x0  nop
    ctx->pc = 0x41879cu;
    // NOP
label_4187a0:
    // 0x4187a0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4187a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_4187a4:
    // 0x4187a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4187a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4187a8:
    // 0x4187a8: 0x0  nop
    ctx->pc = 0x4187a8u;
    // NOP
label_4187ac:
    // 0x4187ac: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x4187acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4187b0:
    // 0x4187b0: 0x3c033c8e  lui         $v1, 0x3C8E
    ctx->pc = 0x4187b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15502 << 16));
label_4187b4:
    // 0x4187b4: 0x3463fa35  ori         $v1, $v1, 0xFA35
    ctx->pc = 0x4187b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64053);
label_4187b8:
    // 0x4187b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4187b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4187bc:
    // 0x4187bc: 0x0  nop
    ctx->pc = 0x4187bcu;
    // NOP
label_4187c0:
    // 0x4187c0: 0x46010502  mul.s       $f20, $f0, $f1
    ctx->pc = 0x4187c0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_4187c4:
    // 0x4187c4: 0xc4810e2c  lwc1        $f1, 0xE2C($a0)
    ctx->pc = 0x4187c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4187c8:
    // 0x4187c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4187c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4187cc:
    // 0x4187cc: 0x0  nop
    ctx->pc = 0x4187ccu;
    // NOP
label_4187d0:
    // 0x4187d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x4187d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4187d4:
    // 0x4187d4: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_4187d8:
    if (ctx->pc == 0x4187D8u) {
        ctx->pc = 0x4187D8u;
            // 0x4187d8: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x4187DCu;
        goto label_4187dc;
    }
    ctx->pc = 0x4187D4u;
    {
        const bool branch_taken_0x4187d4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4187d4) {
            ctx->pc = 0x4187D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4187D4u;
            // 0x4187d8: 0x8e440010  lw          $a0, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4187F0u;
            goto label_4187f0;
        }
    }
    ctx->pc = 0x4187DCu;
label_4187dc:
    // 0x4187dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4187dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4187e0:
    // 0x4187e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4187e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4187e4:
    // 0x4187e4: 0xc0767f0  jal         func_1D9FC0
label_4187e8:
    if (ctx->pc == 0x4187E8u) {
        ctx->pc = 0x4187E8u;
            // 0x4187e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x4187ECu;
        goto label_4187ec;
    }
    ctx->pc = 0x4187E4u;
    SET_GPR_U32(ctx, 31, 0x4187ECu);
    ctx->pc = 0x4187E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4187E4u;
            // 0x4187e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4187ECu; }
        if (ctx->pc != 0x4187ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4187ECu; }
        if (ctx->pc != 0x4187ECu) { return; }
    }
    ctx->pc = 0x4187ECu;
label_4187ec:
    // 0x4187ec: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x4187ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_4187f0:
    // 0x4187f0: 0x8c830d60  lw          $v1, 0xD60($a0)
    ctx->pc = 0x4187f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3424)));
label_4187f4:
    // 0x4187f4: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x4187f4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_4187f8:
    // 0x4187f8: 0x14600192  bnez        $v1, . + 4 + (0x192 << 2)
label_4187fc:
    if (ctx->pc == 0x4187FCu) {
        ctx->pc = 0x418800u;
        goto label_418800;
    }
    ctx->pc = 0x4187F8u;
    {
        const bool branch_taken_0x4187f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4187f8) {
            ctx->pc = 0x418E44u;
            goto label_418e44;
        }
    }
    ctx->pc = 0x418800u;
label_418800:
    // 0x418800: 0xc4950880  lwc1        $f21, 0x880($a0)
    ctx->pc = 0x418800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_418804:
    // 0x418804: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x418804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_418808:
    // 0x418808: 0x24840560  addiu       $a0, $a0, 0x560
    ctx->pc = 0x418808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1376));
label_41880c:
    // 0x41880c: 0xc075378  jal         func_1D4DE0
label_418810:
    if (ctx->pc == 0x418810u) {
        ctx->pc = 0x418810u;
            // 0x418810: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418814u;
        goto label_418814;
    }
    ctx->pc = 0x41880Cu;
    SET_GPR_U32(ctx, 31, 0x418814u);
    ctx->pc = 0x418810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41880Cu;
            // 0x418810: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418814u; }
        if (ctx->pc != 0x418814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418814u; }
        if (ctx->pc != 0x418814u) { return; }
    }
    ctx->pc = 0x418814u;
label_418814:
    // 0x418814: 0x46150541  sub.s       $f21, $f0, $f21
    ctx->pc = 0x418814u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
label_418818:
    // 0x418818: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x418818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_41881c:
    // 0x41881c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x41881cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_418820:
    // 0x418820: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x418820u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418824:
    // 0x418824: 0x0  nop
    ctx->pc = 0x418824u;
    // NOP
label_418828:
    // 0x418828: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x418828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41882c:
    // 0x41882c: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
label_418830:
    if (ctx->pc == 0x418830u) {
        ctx->pc = 0x418830u;
            // 0x418830: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x418834u;
        goto label_418834;
    }
    ctx->pc = 0x41882Cu;
    {
        const bool branch_taken_0x41882c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x41882c) {
            ctx->pc = 0x418830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41882Cu;
            // 0x418830: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4188E0u;
            goto label_4188e0;
        }
    }
    ctx->pc = 0x418834u;
label_418834:
    // 0x418834: 0x4601a841  sub.s       $f1, $f21, $f1
    ctx->pc = 0x418834u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_418838:
    // 0x418838: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x418838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_41883c:
    // 0x41883c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x41883cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_418840:
    // 0x418840: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x418840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_418844:
    // 0x418844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x418844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418848:
    // 0x418848: 0x0  nop
    ctx->pc = 0x418848u;
    // NOP
label_41884c:
    // 0x41884c: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x41884cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_418850:
    // 0x418850: 0x0  nop
    ctx->pc = 0x418850u;
    // NOP
label_418854:
    // 0x418854: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418858:
    // 0x418858: 0x0  nop
    ctx->pc = 0x418858u;
    // NOP
label_41885c:
    // 0x41885c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41885cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418860:
    // 0x418860: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_418864:
    if (ctx->pc == 0x418864u) {
        ctx->pc = 0x418864u;
            // 0x418864: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x418868u;
        goto label_418868;
    }
    ctx->pc = 0x418860u;
    {
        const bool branch_taken_0x418860 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418860) {
            ctx->pc = 0x418864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418860u;
            // 0x418864: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x418878u;
            goto label_418878;
        }
    }
    ctx->pc = 0x418868u;
label_418868:
    // 0x418868: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x418868u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41886c:
    // 0x41886c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x41886cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_418870:
    // 0x418870: 0x10000006  b           . + 4 + (0x6 << 2)
label_418874:
    if (ctx->pc == 0x418874u) {
        ctx->pc = 0x418878u;
        goto label_418878;
    }
    ctx->pc = 0x418870u;
    {
        const bool branch_taken_0x418870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x418870) {
            ctx->pc = 0x41888Cu;
            goto label_41888c;
        }
    }
    ctx->pc = 0x418878u;
label_418878:
    // 0x418878: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x418878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_41887c:
    // 0x41887c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x41887cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_418880:
    // 0x418880: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x418880u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_418884:
    // 0x418884: 0x0  nop
    ctx->pc = 0x418884u;
    // NOP
label_418888:
    // 0x418888: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x418888u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_41888c:
    // 0x41888c: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_418890:
    if (ctx->pc == 0x418890u) {
        ctx->pc = 0x418890u;
            // 0x418890: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x418894u;
        goto label_418894;
    }
    ctx->pc = 0x41888Cu;
    {
        const bool branch_taken_0x41888c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x41888c) {
            ctx->pc = 0x418890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41888Cu;
            // 0x418890: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4188A0u;
            goto label_4188a0;
        }
    }
    ctx->pc = 0x418894u;
label_418894:
    // 0x418894: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x418894u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418898:
    // 0x418898: 0x10000007  b           . + 4 + (0x7 << 2)
label_41889c:
    if (ctx->pc == 0x41889Cu) {
        ctx->pc = 0x41889Cu;
            // 0x41889c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4188A0u;
        goto label_4188a0;
    }
    ctx->pc = 0x418898u;
    {
        const bool branch_taken_0x418898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41889Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418898u;
            // 0x41889c: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418898) {
            ctx->pc = 0x4188B8u;
            goto label_4188b8;
        }
    }
    ctx->pc = 0x4188A0u;
label_4188a0:
    // 0x4188a0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4188a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4188a4:
    // 0x4188a4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4188a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4188a8:
    // 0x4188a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4188a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4188ac:
    // 0x4188ac: 0x0  nop
    ctx->pc = 0x4188acu;
    // NOP
label_4188b0:
    // 0x4188b0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4188b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4188b4:
    // 0x4188b4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4188b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4188b8:
    // 0x4188b8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4188b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4188bc:
    // 0x4188bc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4188bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4188c0:
    // 0x4188c0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4188c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4188c4:
    // 0x4188c4: 0x0  nop
    ctx->pc = 0x4188c4u;
    // NOP
label_4188c8:
    // 0x4188c8: 0x4602a841  sub.s       $f1, $f21, $f2
    ctx->pc = 0x4188c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[21], ctx->f[2]);
label_4188cc:
    // 0x4188cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4188ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4188d0:
    // 0x4188d0: 0x0  nop
    ctx->pc = 0x4188d0u;
    // NOP
label_4188d4:
    // 0x4188d4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4188d4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4188d8:
    // 0x4188d8: 0x1000004c  b           . + 4 + (0x4C << 2)
label_4188dc:
    if (ctx->pc == 0x4188DCu) {
        ctx->pc = 0x4188DCu;
            // 0x4188dc: 0x4603155d  msub.s      $f21, $f2, $f3 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x4188E0u;
        goto label_4188e0;
    }
    ctx->pc = 0x4188D8u;
    {
        const bool branch_taken_0x4188d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4188DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4188D8u;
            // 0x4188dc: 0x4603155d  msub.s      $f21, $f2, $f3 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4188d8) {
            ctx->pc = 0x418A0Cu;
            goto label_418a0c;
        }
    }
    ctx->pc = 0x4188E0u;
label_4188e0:
    // 0x4188e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4188e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4188e4:
    // 0x4188e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4188e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4188e8:
    // 0x4188e8: 0x0  nop
    ctx->pc = 0x4188e8u;
    // NOP
label_4188ec:
    // 0x4188ec: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x4188ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4188f0:
    // 0x4188f0: 0x45020047  bc1fl       . + 4 + (0x47 << 2)
label_4188f4:
    if (ctx->pc == 0x4188F4u) {
        ctx->pc = 0x4188F4u;
            // 0x4188f4: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->pc = 0x4188F8u;
        goto label_4188f8;
    }
    ctx->pc = 0x4188F0u;
    {
        const bool branch_taken_0x4188f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4188f0) {
            ctx->pc = 0x4188F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4188F0u;
            // 0x4188f4: 0x4600a007  neg.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x418A10u;
            goto label_418a10;
        }
    }
    ctx->pc = 0x4188F8u;
label_4188f8:
    // 0x4188f8: 0x46150840  add.s       $f1, $f1, $f21
    ctx->pc = 0x4188f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_4188fc:
    // 0x4188fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4188fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_418900:
    // 0x418900: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x418900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_418904:
    // 0x418904: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x418904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418908:
    // 0x418908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x418908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41890c:
    // 0x41890c: 0x0  nop
    ctx->pc = 0x41890cu;
    // NOP
label_418910:
    // 0x418910: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x418910u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
label_418914:
    // 0x418914: 0x0  nop
    ctx->pc = 0x418914u;
    // NOP
label_418918:
    // 0x418918: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x418918u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41891c:
    // 0x41891c: 0x0  nop
    ctx->pc = 0x41891cu;
    // NOP
label_418920:
    // 0x418920: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x418920u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418924:
    // 0x418924: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_418928:
    if (ctx->pc == 0x418928u) {
        ctx->pc = 0x41892Cu;
        goto label_41892c;
    }
    ctx->pc = 0x418924u;
    {
        const bool branch_taken_0x418924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418924) {
            ctx->pc = 0x418930u;
            goto label_418930;
        }
    }
    ctx->pc = 0x41892Cu;
label_41892c:
    // 0x41892c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41892cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418930:
    // 0x418930: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_418934:
    if (ctx->pc == 0x418934u) {
        ctx->pc = 0x418934u;
            // 0x418934: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x418938u;
        goto label_418938;
    }
    ctx->pc = 0x418930u;
    {
        const bool branch_taken_0x418930 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x418930) {
            ctx->pc = 0x418934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418930u;
            // 0x418934: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418944u;
            goto label_418944;
        }
    }
    ctx->pc = 0x418938u;
label_418938:
    // 0x418938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41893c:
    // 0x41893c: 0x10000007  b           . + 4 + (0x7 << 2)
label_418940:
    if (ctx->pc == 0x418940u) {
        ctx->pc = 0x418940u;
            // 0x418940: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x418944u;
        goto label_418944;
    }
    ctx->pc = 0x41893Cu;
    {
        const bool branch_taken_0x41893c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41893Cu;
            // 0x418940: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41893c) {
            ctx->pc = 0x41895Cu;
            goto label_41895c;
        }
    }
    ctx->pc = 0x418944u;
label_418944:
    // 0x418944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x418944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_418948:
    // 0x418948: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x418948u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_41894c:
    // 0x41894c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x41894cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418950:
    // 0x418950: 0x0  nop
    ctx->pc = 0x418950u;
    // NOP
label_418954:
    // 0x418954: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x418954u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_418958:
    // 0x418958: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x418958u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_41895c:
    // 0x41895c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x41895cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_418960:
    // 0x418960: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x418960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_418964:
    // 0x418964: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x418964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418968:
    // 0x418968: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x418968u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_41896c:
    // 0x41896c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x41896cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_418970:
    // 0x418970: 0x0  nop
    ctx->pc = 0x418970u;
    // NOP
label_418974:
    // 0x418974: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x418974u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_418978:
    // 0x418978: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x418978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_41897c:
    // 0x41897c: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x41897cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_418980:
    // 0x418980: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x418980u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_418984:
    // 0x418984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418988:
    // 0x418988: 0x0  nop
    ctx->pc = 0x418988u;
    // NOP
label_41898c:
    // 0x41898c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41898cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418990:
    // 0x418990: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_418994:
    if (ctx->pc == 0x418994u) {
        ctx->pc = 0x418994u;
            // 0x418994: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x418998u;
        goto label_418998;
    }
    ctx->pc = 0x418990u;
    {
        const bool branch_taken_0x418990 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418990) {
            ctx->pc = 0x418994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418990u;
            // 0x418994: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4189A8u;
            goto label_4189a8;
        }
    }
    ctx->pc = 0x418998u;
label_418998:
    // 0x418998: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x418998u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_41899c:
    // 0x41899c: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x41899cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4189a0:
    // 0x4189a0: 0x10000006  b           . + 4 + (0x6 << 2)
label_4189a4:
    if (ctx->pc == 0x4189A4u) {
        ctx->pc = 0x4189A8u;
        goto label_4189a8;
    }
    ctx->pc = 0x4189A0u;
    {
        const bool branch_taken_0x4189a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4189a0) {
            ctx->pc = 0x4189BCu;
            goto label_4189bc;
        }
    }
    ctx->pc = 0x4189A8u;
label_4189a8:
    // 0x4189a8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4189a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4189ac:
    // 0x4189ac: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4189acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4189b0:
    // 0x4189b0: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x4189b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_4189b4:
    // 0x4189b4: 0x0  nop
    ctx->pc = 0x4189b4u;
    // NOP
label_4189b8:
    // 0x4189b8: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x4189b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_4189bc:
    // 0x4189bc: 0x4c20004  bltzl       $a2, . + 4 + (0x4 << 2)
label_4189c0:
    if (ctx->pc == 0x4189C0u) {
        ctx->pc = 0x4189C0u;
            // 0x4189c0: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x4189C4u;
        goto label_4189c4;
    }
    ctx->pc = 0x4189BCu;
    {
        const bool branch_taken_0x4189bc = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x4189bc) {
            ctx->pc = 0x4189C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4189BCu;
            // 0x4189c0: 0x61842  srl         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4189D0u;
            goto label_4189d0;
        }
    }
    ctx->pc = 0x4189C4u;
label_4189c4:
    // 0x4189c4: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x4189c4u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4189c8:
    // 0x4189c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4189cc:
    if (ctx->pc == 0x4189CCu) {
        ctx->pc = 0x4189CCu;
            // 0x4189cc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x4189D0u;
        goto label_4189d0;
    }
    ctx->pc = 0x4189C8u;
    {
        const bool branch_taken_0x4189c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4189CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4189C8u;
            // 0x4189cc: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4189c8) {
            ctx->pc = 0x4189E8u;
            goto label_4189e8;
        }
    }
    ctx->pc = 0x4189D0u;
label_4189d0:
    // 0x4189d0: 0x30c20001  andi        $v0, $a2, 0x1
    ctx->pc = 0x4189d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
label_4189d4:
    // 0x4189d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4189d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4189d8:
    // 0x4189d8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4189d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4189dc:
    // 0x4189dc: 0x0  nop
    ctx->pc = 0x4189dcu;
    // NOP
label_4189e0:
    // 0x4189e0: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x4189e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_4189e4:
    // 0x4189e4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x4189e4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_4189e8:
    // 0x4189e8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x4189e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_4189ec:
    // 0x4189ec: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x4189ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_4189f0:
    // 0x4189f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4189f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4189f4:
    // 0x4189f4: 0x0  nop
    ctx->pc = 0x4189f4u;
    // NOP
label_4189f8:
    // 0x4189f8: 0x46151040  add.s       $f1, $f2, $f21
    ctx->pc = 0x4189f8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_4189fc:
    // 0x4189fc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4189fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418a00:
    // 0x418a00: 0x0  nop
    ctx->pc = 0x418a00u;
    // NOP
label_418a04:
    // 0x418a04: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x418a04u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_418a08:
    // 0x418a08: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x418a08u;
    ctx->f[21] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_418a0c:
    // 0x418a0c: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x418a0cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
label_418a10:
    // 0x418a10: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x418a10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418a14:
    // 0x418a14: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_418a18:
    if (ctx->pc == 0x418A18u) {
        ctx->pc = 0x418A1Cu;
        goto label_418a1c;
    }
    ctx->pc = 0x418A14u;
    {
        const bool branch_taken_0x418a14 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418a14) {
            ctx->pc = 0x418A30u;
            goto label_418a30;
        }
    }
    ctx->pc = 0x418A1Cu;
label_418a1c:
    // 0x418a1c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x418a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418a20:
    // 0x418a20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_418a24:
    if (ctx->pc == 0x418A24u) {
        ctx->pc = 0x418A28u;
        goto label_418a28;
    }
    ctx->pc = 0x418A20u;
    {
        const bool branch_taken_0x418a20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418a20) {
            ctx->pc = 0x418A30u;
            goto label_418a30;
        }
    }
    ctx->pc = 0x418A28u;
label_418a28:
    // 0x418a28: 0x10000024  b           . + 4 + (0x24 << 2)
label_418a2c:
    if (ctx->pc == 0x418A2Cu) {
        ctx->pc = 0x418A2Cu;
            // 0x418a2c: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->pc = 0x418A30u;
        goto label_418a30;
    }
    ctx->pc = 0x418A28u;
    {
        const bool branch_taken_0x418a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418A28u;
            // 0x418a2c: 0x8e430010  lw          $v1, 0x10($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418a28) {
            ctx->pc = 0x418ABCu;
            goto label_418abc;
        }
    }
    ctx->pc = 0x418A30u;
label_418a30:
    // 0x418a30: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x418a30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418a34:
    // 0x418a34: 0x0  nop
    ctx->pc = 0x418a34u;
    // NOP
label_418a38:
    // 0x418a38: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x418a38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418a3c:
    // 0x418a3c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_418a40:
    if (ctx->pc == 0x418A40u) {
        ctx->pc = 0x418A40u;
            // 0x418a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x418A44u;
        goto label_418a44;
    }
    ctx->pc = 0x418A3Cu;
    {
        const bool branch_taken_0x418a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x418A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418A3Cu;
            // 0x418a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418a3c) {
            ctx->pc = 0x418A48u;
            goto label_418a48;
        }
    }
    ctx->pc = 0x418A44u;
label_418a44:
    // 0x418a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x418a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418a48:
    // 0x418a48: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_418a4c:
    if (ctx->pc == 0x418A4Cu) {
        ctx->pc = 0x418A4Cu;
            // 0x418a4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x418A50u;
        goto label_418a50;
    }
    ctx->pc = 0x418A48u;
    {
        const bool branch_taken_0x418a48 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x418a48) {
            ctx->pc = 0x418A4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418A48u;
            // 0x418a4c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418A5Cu;
            goto label_418a5c;
        }
    }
    ctx->pc = 0x418A50u;
label_418a50:
    // 0x418a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418a54:
    // 0x418a54: 0x10000007  b           . + 4 + (0x7 << 2)
label_418a58:
    if (ctx->pc == 0x418A58u) {
        ctx->pc = 0x418A58u;
            // 0x418a58: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x418A5Cu;
        goto label_418a5c;
    }
    ctx->pc = 0x418A54u;
    {
        const bool branch_taken_0x418a54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418A54u;
            // 0x418a58: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418a54) {
            ctx->pc = 0x418A74u;
            goto label_418a74;
        }
    }
    ctx->pc = 0x418A5Cu;
label_418a5c:
    // 0x418a5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x418a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_418a60:
    // 0x418a60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x418a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_418a64:
    // 0x418a64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x418a64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418a68:
    // 0x418a68: 0x0  nop
    ctx->pc = 0x418a68u;
    // NOP
label_418a6c:
    // 0x418a6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x418a6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_418a70:
    // 0x418a70: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x418a70u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_418a74:
    // 0x418a74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x418a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_418a78:
    // 0x418a78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418a78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418a7c:
    // 0x418a7c: 0xc049514  jal         func_125450
label_418a80:
    if (ctx->pc == 0x418A80u) {
        ctx->pc = 0x418A80u;
            // 0x418a80: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x418A84u;
        goto label_418a84;
    }
    ctx->pc = 0x418A7Cu;
    SET_GPR_U32(ctx, 31, 0x418A84u);
    ctx->pc = 0x418A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418A7Cu;
            // 0x418a80: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418A84u; }
        if (ctx->pc != 0x418A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418A84u; }
        if (ctx->pc != 0x418A84u) { return; }
    }
    ctx->pc = 0x418A84u;
label_418a84:
    // 0x418a84: 0x3c033ff0  lui         $v1, 0x3FF0
    ctx->pc = 0x418a84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16368 << 16));
label_418a88:
    // 0x418a88: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x418a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_418a8c:
    // 0x418a8c: 0xc049622  jal         func_125888
label_418a90:
    if (ctx->pc == 0x418A90u) {
        ctx->pc = 0x418A90u;
            // 0x418a90: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->pc = 0x418A94u;
        goto label_418a94;
    }
    ctx->pc = 0x418A8Cu;
    SET_GPR_U32(ctx, 31, 0x418A94u);
    ctx->pc = 0x418A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418A8Cu;
            // 0x418a90: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125888u;
    if (runtime->hasFunction(0x125888u)) {
        auto targetFn = runtime->lookupFunction(0x125888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418A94u; }
        if (ctx->pc != 0x418A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125888_0x125888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418A94u; }
        if (ctx->pc != 0x418A94u) { return; }
    }
    ctx->pc = 0x418A94u;
label_418a94:
    // 0x418a94: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x418a94u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_418a98:
    // 0x418a98: 0xc049514  jal         func_125450
label_418a9c:
    if (ctx->pc == 0x418A9Cu) {
        ctx->pc = 0x418A9Cu;
            // 0x418a9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418AA0u;
        goto label_418aa0;
    }
    ctx->pc = 0x418A98u;
    SET_GPR_U32(ctx, 31, 0x418AA0u);
    ctx->pc = 0x418A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418A98u;
            // 0x418a9c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125450u;
    if (runtime->hasFunction(0x125450u)) {
        auto targetFn = runtime->lookupFunction(0x125450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AA0u; }
        if (ctx->pc != 0x418AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125450_0x125450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AA0u; }
        if (ctx->pc != 0x418AA0u) { return; }
    }
    ctx->pc = 0x418AA0u;
label_418aa0:
    // 0x418aa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x418aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_418aa4:
    // 0x418aa4: 0xc04963e  jal         func_1258F8
label_418aa8:
    if (ctx->pc == 0x418AA8u) {
        ctx->pc = 0x418AA8u;
            // 0x418aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418AACu;
        goto label_418aac;
    }
    ctx->pc = 0x418AA4u;
    SET_GPR_U32(ctx, 31, 0x418AACu);
    ctx->pc = 0x418AA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418AA4u;
            // 0x418aa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1258F8u;
    if (runtime->hasFunction(0x1258F8u)) {
        auto targetFn = runtime->lookupFunction(0x1258F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AACu; }
        if (ctx->pc != 0x418AACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001258F8_0x1258f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AACu; }
        if (ctx->pc != 0x418AACu) { return; }
    }
    ctx->pc = 0x418AACu;
label_418aac:
    // 0x418aac: 0xc0497dc  jal         func_125F70
label_418ab0:
    if (ctx->pc == 0x418AB0u) {
        ctx->pc = 0x418AB0u;
            // 0x418ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418AB4u;
        goto label_418ab4;
    }
    ctx->pc = 0x418AACu;
    SET_GPR_U32(ctx, 31, 0x418AB4u);
    ctx->pc = 0x418AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418AACu;
            // 0x418ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F70u;
    if (runtime->hasFunction(0x125F70u)) {
        auto targetFn = runtime->lookupFunction(0x125F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AB4u; }
        if (ctx->pc != 0x418AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F70_0x125f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AB4u; }
        if (ctx->pc != 0x418AB4u) { return; }
    }
    ctx->pc = 0x418AB4u;
label_418ab4:
    // 0x418ab4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x418ab4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_418ab8:
    // 0x418ab8: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x418ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418abc:
    // 0x418abc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x418abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_418ac0:
    // 0x418ac0: 0xc4600880  lwc1        $f0, 0x880($v1)
    ctx->pc = 0x418ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418ac4:
    // 0x418ac4: 0x246207e0  addiu       $v0, $v1, 0x7E0
    ctx->pc = 0x418ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2016));
label_418ac8:
    // 0x418ac8: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x418ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_418acc:
    // 0x418acc: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x418accu;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_418ad0:
    // 0x418ad0: 0xc0c753c  jal         func_31D4F0
label_418ad4:
    if (ctx->pc == 0x418AD4u) {
        ctx->pc = 0x418AD4u;
            // 0x418ad4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x418AD8u;
        goto label_418ad8;
    }
    ctx->pc = 0x418AD0u;
    SET_GPR_U32(ctx, 31, 0x418AD8u);
    ctx->pc = 0x418AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418AD0u;
            // 0x418ad4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AD8u; }
        if (ctx->pc != 0x418AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AD8u; }
        if (ctx->pc != 0x418AD8u) { return; }
    }
    ctx->pc = 0x418AD8u;
label_418ad8:
    // 0x418ad8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x418ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418adc:
    // 0x418adc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x418adcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_418ae0:
    // 0x418ae0: 0xc4400880  lwc1        $f0, 0x880($v0)
    ctx->pc = 0x418ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418ae4:
    // 0x418ae4: 0x2444092c  addiu       $a0, $v0, 0x92C
    ctx->pc = 0x418ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
label_418ae8:
    // 0x418ae8: 0x4600ab00  add.s       $f12, $f21, $f0
    ctx->pc = 0x418ae8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_418aec:
    // 0x418aec: 0xc0c753c  jal         func_31D4F0
label_418af0:
    if (ctx->pc == 0x418AF0u) {
        ctx->pc = 0x418AF0u;
            // 0x418af0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x418AF4u;
        goto label_418af4;
    }
    ctx->pc = 0x418AECu;
    SET_GPR_U32(ctx, 31, 0x418AF4u);
    ctx->pc = 0x418AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418AECu;
            // 0x418af0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AF4u; }
        if (ctx->pc != 0x418AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418AF4u; }
        if (ctx->pc != 0x418AF4u) { return; }
    }
    ctx->pc = 0x418AF4u;
label_418af4:
    // 0x418af4: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_418af8:
    if (ctx->pc == 0x418AF8u) {
        ctx->pc = 0x418AFCu;
        goto label_418afc;
    }
    ctx->pc = 0x418AF4u;
    {
        const bool branch_taken_0x418af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x418af4) {
            ctx->pc = 0x418E44u;
            goto label_418e44;
        }
    }
    ctx->pc = 0x418AFCu;
label_418afc:
    // 0x418afc: 0x8c830d70  lw          $v1, 0xD70($a0)
    ctx->pc = 0x418afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
label_418b00:
    // 0x418b00: 0x8c6300cc  lw          $v1, 0xCC($v1)
    ctx->pc = 0x418b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_418b04:
    // 0x418b04: 0x106000cf  beqz        $v1, . + 4 + (0xCF << 2)
label_418b08:
    if (ctx->pc == 0x418B08u) {
        ctx->pc = 0x418B0Cu;
        goto label_418b0c;
    }
    ctx->pc = 0x418B04u;
    {
        const bool branch_taken_0x418b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x418b04) {
            ctx->pc = 0x418E44u;
            goto label_418e44;
        }
    }
    ctx->pc = 0x418B0Cu;
label_418b0c:
    // 0x418b0c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x418b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_418b10:
    // 0x418b10: 0x248507e0  addiu       $a1, $a0, 0x7E0
    ctx->pc = 0x418b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 2016));
label_418b14:
    // 0x418b14: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x418b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_418b18:
    // 0x418b18: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x418b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_418b1c:
    // 0x418b1c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x418b1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418b20:
    // 0x418b20: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x418b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_418b24:
    // 0x418b24: 0x84c40022  lh          $a0, 0x22($a2)
    ctx->pc = 0x418b24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 34)));
label_418b28:
    // 0x418b28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x418b28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418b2c:
    // 0x418b2c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x418b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_418b30:
    // 0x418b30: 0x84c30026  lh          $v1, 0x26($a2)
    ctx->pc = 0x418b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 38)));
label_418b34:
    // 0x418b34: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418b34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418b38:
    // 0x418b38: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x418b38u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_418b3c:
    // 0x418b3c: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x418b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_418b40:
    // 0x418b40: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x418b40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_418b44:
    // 0x418b44: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x418b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_418b48:
    // 0x418b48: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x418b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_418b4c:
    // 0x418b4c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x418b4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_418b50:
    // 0x418b50: 0x46011583  div.s       $f22, $f2, $f1
    ctx->pc = 0x418b50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[22] = ctx->f[2] / ctx->f[1];
label_418b54:
    // 0x418b54: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x418b54u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418b58:
    // 0x418b58: 0x0  nop
    ctx->pc = 0x418b58u;
    // NOP
label_418b5c:
    // 0x418b5c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x418b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_418b60:
    // 0x418b60: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x418b60u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_418b64:
    // 0x418b64: 0x0  nop
    ctx->pc = 0x418b64u;
    // NOP
label_418b68:
    // 0x418b68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418b68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418b6c:
    // 0x418b6c: 0xc04ccf4  jal         func_1333D0
label_418b70:
    if (ctx->pc == 0x418B70u) {
        ctx->pc = 0x418B70u;
            // 0x418b70: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x418B74u;
        goto label_418b74;
    }
    ctx->pc = 0x418B6Cu;
    SET_GPR_U32(ctx, 31, 0x418B74u);
    ctx->pc = 0x418B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418B6Cu;
            // 0x418b70: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B74u; }
        if (ctx->pc != 0x418B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B74u; }
        if (ctx->pc != 0x418B74u) { return; }
    }
    ctx->pc = 0x418B74u;
label_418b74:
    // 0x418b74: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x418b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_418b78:
    // 0x418b78: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x418b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_418b7c:
    // 0x418b7c: 0xc04cca0  jal         func_133280
label_418b80:
    if (ctx->pc == 0x418B80u) {
        ctx->pc = 0x418B80u;
            // 0x418b80: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x418B84u;
        goto label_418b84;
    }
    ctx->pc = 0x418B7Cu;
    SET_GPR_U32(ctx, 31, 0x418B84u);
    ctx->pc = 0x418B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418B7Cu;
            // 0x418b80: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B84u; }
        if (ctx->pc != 0x418B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B84u; }
        if (ctx->pc != 0x418B84u) { return; }
    }
    ctx->pc = 0x418B84u;
label_418b84:
    // 0x418b84: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x418b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_418b88:
    // 0x418b88: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x418b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_418b8c:
    // 0x418b8c: 0xc04cc08  jal         func_133020
label_418b90:
    if (ctx->pc == 0x418B90u) {
        ctx->pc = 0x418B90u;
            // 0x418b90: 0x2484c550  addiu       $a0, $a0, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
        ctx->pc = 0x418B94u;
        goto label_418b94;
    }
    ctx->pc = 0x418B8Cu;
    SET_GPR_U32(ctx, 31, 0x418B94u);
    ctx->pc = 0x418B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418B8Cu;
            // 0x418b90: 0x2484c550  addiu       $a0, $a0, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B94u; }
        if (ctx->pc != 0x418B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418B94u; }
        if (ctx->pc != 0x418B94u) { return; }
    }
    ctx->pc = 0x418B94u;
label_418b94:
    // 0x418b94: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x418b94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_418b98:
    // 0x418b98: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x418b98u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_418b9c:
    // 0x418b9c: 0xc04cc14  jal         func_133050
label_418ba0:
    if (ctx->pc == 0x418BA0u) {
        ctx->pc = 0x418BA0u;
            // 0x418ba0: 0x2484c550  addiu       $a0, $a0, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
        ctx->pc = 0x418BA4u;
        goto label_418ba4;
    }
    ctx->pc = 0x418B9Cu;
    SET_GPR_U32(ctx, 31, 0x418BA4u);
    ctx->pc = 0x418BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418B9Cu;
            // 0x418ba0: 0x2484c550  addiu       $a0, $a0, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418BA4u; }
        if (ctx->pc != 0x418BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418BA4u; }
        if (ctx->pc != 0x418BA4u) { return; }
    }
    ctx->pc = 0x418BA4u;
label_418ba4:
    // 0x418ba4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x418ba4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_418ba8:
    // 0x418ba8: 0xc04cc14  jal         func_133050
label_418bac:
    if (ctx->pc == 0x418BACu) {
        ctx->pc = 0x418BACu;
            // 0x418bac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x418BB0u;
        goto label_418bb0;
    }
    ctx->pc = 0x418BA8u;
    SET_GPR_U32(ctx, 31, 0x418BB0u);
    ctx->pc = 0x418BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418BA8u;
            // 0x418bac: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418BB0u; }
        if (ctx->pc != 0x418BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418BB0u; }
        if (ctx->pc != 0x418BB0u) { return; }
    }
    ctx->pc = 0x418BB0u;
label_418bb0:
    // 0x418bb0: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x418bb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_418bb4:
    // 0x418bb4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x418bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_418bb8:
    // 0x418bb8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418bbc:
    // 0x418bbc: 0x4600b843  div.s       $f1, $f23, $f0
    ctx->pc = 0x418bbcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[23] * 0.0f); } else ctx->f[1] = ctx->f[23] / ctx->f[0];
label_418bc0:
    // 0x418bc0: 0x0  nop
    ctx->pc = 0x418bc0u;
    // NOP
label_418bc4:
    // 0x418bc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418bc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418bc8:
    // 0x418bc8: 0x0  nop
    ctx->pc = 0x418bc8u;
    // NOP
label_418bcc:
    // 0x418bcc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x418bccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418bd0:
    // 0x418bd0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_418bd4:
    if (ctx->pc == 0x418BD4u) {
        ctx->pc = 0x418BD4u;
            // 0x418bd4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x418BD8u;
        goto label_418bd8;
    }
    ctx->pc = 0x418BD0u;
    {
        const bool branch_taken_0x418bd0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418bd0) {
            ctx->pc = 0x418BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418BD0u;
            // 0x418bd4: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418BE0u;
            goto label_418be0;
        }
    }
    ctx->pc = 0x418BD8u;
label_418bd8:
    // 0x418bd8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x418bd8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418bdc:
    // 0x418bdc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x418bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_418be0:
    // 0x418be0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x418be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_418be4:
    // 0x418be4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418be4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418be8:
    // 0x418be8: 0x0  nop
    ctx->pc = 0x418be8u;
    // NOP
label_418bec:
    // 0x418bec: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x418becu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418bf0:
    // 0x418bf0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_418bf4:
    if (ctx->pc == 0x418BF4u) {
        ctx->pc = 0x418BF4u;
            // 0x418bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x418BF8u;
        goto label_418bf8;
    }
    ctx->pc = 0x418BF0u;
    {
        const bool branch_taken_0x418bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x418BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418BF0u;
            // 0x418bf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418bf0) {
            ctx->pc = 0x418BFCu;
            goto label_418bfc;
        }
    }
    ctx->pc = 0x418BF8u;
label_418bf8:
    // 0x418bf8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x418bf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418bfc:
    // 0x418bfc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x418bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_418c00:
    // 0x418c00: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x418c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_418c04:
    // 0x418c04: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x418c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_418c08:
    // 0x418c08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x418c08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418c0c:
    // 0x418c0c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x418c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_418c10:
    // 0x418c10: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x418c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_418c14:
    // 0x418c14: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x418c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_418c18:
    // 0x418c18: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x418c18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418c1c:
    // 0x418c1c: 0x0  nop
    ctx->pc = 0x418c1cu;
    // NOP
label_418c20:
    // 0x418c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x418c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_418c24:
    // 0x418c24: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x418c24u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_418c28:
    // 0x418c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418c2c:
    // 0x418c2c: 0x0  nop
    ctx->pc = 0x418c2cu;
    // NOP
label_418c30:
    // 0x418c30: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x418c30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_418c34:
    // 0x418c34: 0xc0477fe  jal         func_11DFF8
label_418c38:
    if (ctx->pc == 0x418C38u) {
        ctx->pc = 0x418C38u;
            // 0x418c38: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x418C3Cu;
        goto label_418c3c;
    }
    ctx->pc = 0x418C34u;
    SET_GPR_U32(ctx, 31, 0x418C3Cu);
    ctx->pc = 0x418C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418C34u;
            // 0x418c38: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418C3Cu; }
        if (ctx->pc != 0x418C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418C3Cu; }
        if (ctx->pc != 0x418C3Cu) { return; }
    }
    ctx->pc = 0x418C3Cu;
label_418c3c:
    // 0x418c3c: 0xc7a20050  lwc1        $f2, 0x50($sp)
    ctx->pc = 0x418c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_418c40:
    // 0x418c40: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x418c40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418c44:
    // 0x418c44: 0x0  nop
    ctx->pc = 0x418c44u;
    // NOP
label_418c48:
    // 0x418c48: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x418c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418c4c:
    // 0x418c4c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_418c50:
    if (ctx->pc == 0x418C50u) {
        ctx->pc = 0x418C50u;
            // 0x418c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x418C54u;
        goto label_418c54;
    }
    ctx->pc = 0x418C4Cu;
    {
        const bool branch_taken_0x418c4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x418C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418C4Cu;
            // 0x418c50: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c4c) {
            ctx->pc = 0x418C58u;
            goto label_418c58;
        }
    }
    ctx->pc = 0x418C54u;
label_418c54:
    // 0x418c54: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x418c54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418c58:
    // 0x418c58: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_418c5c:
    if (ctx->pc == 0x418C5Cu) {
        ctx->pc = 0x418C5Cu;
            // 0x418c5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x418C60u;
        goto label_418c60;
    }
    ctx->pc = 0x418C58u;
    {
        const bool branch_taken_0x418c58 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x418c58) {
            ctx->pc = 0x418C5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418C58u;
            // 0x418c5c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418C6Cu;
            goto label_418c6c;
        }
    }
    ctx->pc = 0x418C60u;
label_418c60:
    // 0x418c60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x418c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418c64:
    // 0x418c64: 0x10000007  b           . + 4 + (0x7 << 2)
label_418c68:
    if (ctx->pc == 0x418C68u) {
        ctx->pc = 0x418C68u;
            // 0x418c68: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x418C6Cu;
        goto label_418c6c;
    }
    ctx->pc = 0x418C64u;
    {
        const bool branch_taken_0x418c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418C64u;
            // 0x418c68: 0x468008e0  cvt.s.w     $f3, $f1 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418c64) {
            ctx->pc = 0x418C84u;
            goto label_418c84;
        }
    }
    ctx->pc = 0x418C6Cu;
label_418c6c:
    // 0x418c6c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x418c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_418c70:
    // 0x418c70: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x418c70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_418c74:
    // 0x418c74: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x418c74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418c78:
    // 0x418c78: 0x0  nop
    ctx->pc = 0x418c78u;
    // NOP
label_418c7c:
    // 0x418c7c: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x418c7cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_418c80:
    // 0x418c80: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x418c80u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_418c84:
    // 0x418c84: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x418c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_418c88:
    // 0x418c88: 0x8e460010  lw          $a2, 0x10($s2)
    ctx->pc = 0x418c88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418c8c:
    // 0x418c8c: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x418c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_418c90:
    // 0x418c90: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x418c90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_418c94:
    // 0x418c94: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x418c94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418c98:
    // 0x418c98: 0x8cc20d60  lw          $v0, 0xD60($a2)
    ctx->pc = 0x418c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3424)));
label_418c9c:
    // 0x418c9c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x418c9cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418ca0:
    // 0x418ca0: 0x46140818  adda.s      $f1, $f20
    ctx->pc = 0x418ca0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_418ca4:
    // 0x418ca4: 0x4603109d  msub.s      $f2, $f2, $f3
    ctx->pc = 0x418ca4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_418ca8:
    // 0x418ca8: 0x80420004  lb          $v0, 0x4($v0)
    ctx->pc = 0x418ca8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
label_418cac:
    // 0x418cac: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x418cacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_418cb0:
    // 0x418cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418cb4:
    // 0x418cb4: 0x0  nop
    ctx->pc = 0x418cb4u;
    // NOP
label_418cb8:
    // 0x418cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x418cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_418cbc:
    // 0x418cbc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x418cbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_418cc0:
    // 0x418cc0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x418cc0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418cc4:
    // 0x418cc4: 0x45030012  bc1tl       . + 4 + (0x12 << 2)
label_418cc8:
    if (ctx->pc == 0x418CC8u) {
        ctx->pc = 0x418CC8u;
            // 0x418cc8: 0x46141002  mul.s       $f0, $f2, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
        ctx->pc = 0x418CCCu;
        goto label_418ccc;
    }
    ctx->pc = 0x418CC4u;
    {
        const bool branch_taken_0x418cc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418cc4) {
            ctx->pc = 0x418CC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418CC4u;
            // 0x418cc8: 0x46141002  mul.s       $f0, $f2, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x418D10u;
            goto label_418d10;
        }
    }
    ctx->pc = 0x418CCCu;
label_418ccc:
    // 0x418ccc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x418cccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_418cd0:
    // 0x418cd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x418cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_418cd4:
    // 0x418cd4: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x418cd4u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_418cd8:
    // 0x418cd8: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x418cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_418cdc:
    // 0x418cdc: 0xa0202a  slt         $a0, $a1, $zero
    ctx->pc = 0x418cdcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_418ce0:
    // 0x418ce0: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x418ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_418ce4:
    // 0x418ce4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x418ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_418ce8:
    // 0x418ce8: 0xa31818  mult        $v1, $a1, $v1
    ctx->pc = 0x418ce8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_418cec:
    // 0x418cec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418cecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418cf0:
    // 0x418cf0: 0x3163c  dsll32      $v0, $v1, 24
    ctx->pc = 0x418cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 24));
label_418cf4:
    // 0x418cf4: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x418cf4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_418cf8:
    // 0x418cf8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x418cf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418cfc:
    // 0x418cfc: 0x0  nop
    ctx->pc = 0x418cfcu;
    // NOP
label_418d00:
    // 0x418d00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x418d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_418d04:
    // 0x418d04: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x418d04u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_418d08:
    // 0x418d08: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x418d08u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_418d0c:
    // 0x418d0c: 0x46141002  mul.s       $f0, $f2, $f20
    ctx->pc = 0x418d0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_418d10:
    // 0x418d10: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x418d10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_418d14:
    // 0x418d14: 0x0  nop
    ctx->pc = 0x418d14u;
    // NOP
label_418d18:
    // 0x418d18: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x418d18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418d1c:
    // 0x418d1c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_418d20:
    if (ctx->pc == 0x418D20u) {
        ctx->pc = 0x418D24u;
        goto label_418d24;
    }
    ctx->pc = 0x418D1Cu;
    {
        const bool branch_taken_0x418d1c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418d1c) {
            ctx->pc = 0x418D3Cu;
            goto label_418d3c;
        }
    }
    ctx->pc = 0x418D24u;
label_418d24:
    // 0x418d24: 0x4600adc7  neg.s       $f23, $f21
    ctx->pc = 0x418d24u;
    ctx->f[23] = FPU_NEG_S(ctx->f[21]);
label_418d28:
    // 0x418d28: 0x46170034  c.lt.s      $f0, $f23
    ctx->pc = 0x418d28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418d2c:
    // 0x418d2c: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
label_418d30:
    if (ctx->pc == 0x418D30u) {
        ctx->pc = 0x418D30u;
            // 0x418d30: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x418D34u;
        goto label_418d34;
    }
    ctx->pc = 0x418D2Cu;
    {
        const bool branch_taken_0x418d2c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418d2c) {
            ctx->pc = 0x418D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418D2Cu;
            // 0x418d30: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x418D58u;
            goto label_418d58;
        }
    }
    ctx->pc = 0x418D34u;
label_418d34:
    // 0x418d34: 0x10000009  b           . + 4 + (0x9 << 2)
label_418d38:
    if (ctx->pc == 0x418D38u) {
        ctx->pc = 0x418D38u;
            // 0x418d38: 0xc4c00880  lwc1        $f0, 0x880($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x418D3Cu;
        goto label_418d3c;
    }
    ctx->pc = 0x418D34u;
    {
        const bool branch_taken_0x418d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418D34u;
            // 0x418d38: 0xc4c00880  lwc1        $f0, 0x880($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x418d34) {
            ctx->pc = 0x418D5Cu;
            goto label_418d5c;
        }
    }
    ctx->pc = 0x418D3Cu;
label_418d3c:
    // 0x418d3c: 0x46170036  c.le.s      $f0, $f23
    ctx->pc = 0x418d3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418d40:
    // 0x418d40: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_418d44:
    if (ctx->pc == 0x418D44u) {
        ctx->pc = 0x418D48u;
        goto label_418d48;
    }
    ctx->pc = 0x418D40u;
    {
        const bool branch_taken_0x418d40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418d40) {
            ctx->pc = 0x418D58u;
            goto label_418d58;
        }
    }
    ctx->pc = 0x418D48u;
label_418d48:
    // 0x418d48: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x418d48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418d4c:
    // 0x418d4c: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_418d50:
    if (ctx->pc == 0x418D50u) {
        ctx->pc = 0x418D50u;
            // 0x418d50: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x418D54u;
        goto label_418d54;
    }
    ctx->pc = 0x418D4Cu;
    {
        const bool branch_taken_0x418d4c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x418d4c) {
            ctx->pc = 0x418D50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418D4Cu;
            // 0x418d50: 0x460005c6  mov.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x418D58u;
            goto label_418d58;
        }
    }
    ctx->pc = 0x418D54u;
label_418d54:
    // 0x418d54: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x418d54u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
label_418d58:
    // 0x418d58: 0xc4c00880  lwc1        $f0, 0x880($a2)
    ctx->pc = 0x418d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418d5c:
    // 0x418d5c: 0x24c207e0  addiu       $v0, $a2, 0x7E0
    ctx->pc = 0x418d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2016));
label_418d60:
    // 0x418d60: 0x2444009c  addiu       $a0, $v0, 0x9C
    ctx->pc = 0x418d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
label_418d64:
    // 0x418d64: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x418d64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_418d68:
    // 0x418d68: 0x4600bb00  add.s       $f12, $f23, $f0
    ctx->pc = 0x418d68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_418d6c:
    // 0x418d6c: 0xc0c753c  jal         func_31D4F0
label_418d70:
    if (ctx->pc == 0x418D70u) {
        ctx->pc = 0x418D70u;
            // 0x418d70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x418D74u;
        goto label_418d74;
    }
    ctx->pc = 0x418D6Cu;
    SET_GPR_U32(ctx, 31, 0x418D74u);
    ctx->pc = 0x418D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418D6Cu;
            // 0x418d70: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418D74u; }
        if (ctx->pc != 0x418D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418D74u; }
        if (ctx->pc != 0x418D74u) { return; }
    }
    ctx->pc = 0x418D74u;
label_418d74:
    // 0x418d74: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x418d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418d78:
    // 0x418d78: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x418d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_418d7c:
    // 0x418d7c: 0xc4400880  lwc1        $f0, 0x880($v0)
    ctx->pc = 0x418d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418d80:
    // 0x418d80: 0x2444092c  addiu       $a0, $v0, 0x92C
    ctx->pc = 0x418d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2348));
label_418d84:
    // 0x418d84: 0x4600bb00  add.s       $f12, $f23, $f0
    ctx->pc = 0x418d84u;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[0]);
label_418d88:
    // 0x418d88: 0xc0c753c  jal         func_31D4F0
label_418d8c:
    if (ctx->pc == 0x418D8Cu) {
        ctx->pc = 0x418D8Cu;
            // 0x418d8c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x418D90u;
        goto label_418d90;
    }
    ctx->pc = 0x418D88u;
    SET_GPR_U32(ctx, 31, 0x418D90u);
    ctx->pc = 0x418D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418D88u;
            // 0x418d8c: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418D90u; }
        if (ctx->pc != 0x418D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418D90u; }
        if (ctx->pc != 0x418D90u) { return; }
    }
    ctx->pc = 0x418D90u;
label_418d90:
    // 0x418d90: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x418d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_418d94:
    // 0x418d94: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x418d94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418d98:
    // 0x418d98: 0xc4800e2c  lwc1        $f0, 0xE2C($a0)
    ctx->pc = 0x418d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418d9c:
    // 0x418d9c: 0x46001032  c.eq.s      $f2, $f0
    ctx->pc = 0x418d9cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418da0:
    // 0x418da0: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_418da4:
    if (ctx->pc == 0x418DA4u) {
        ctx->pc = 0x418DA8u;
        goto label_418da8;
    }
    ctx->pc = 0x418DA0u;
    {
        const bool branch_taken_0x418da0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418da0) {
            ctx->pc = 0x418E44u;
            goto label_418e44;
        }
    }
    ctx->pc = 0x418DA8u;
label_418da8:
    // 0x418da8: 0xc4810dec  lwc1        $f1, 0xDEC($a0)
    ctx->pc = 0x418da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_418dac:
    // 0x418dac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x418dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_418db0:
    // 0x418db0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418db0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418db4:
    // 0x418db4: 0x0  nop
    ctx->pc = 0x418db4u;
    // NOP
label_418db8:
    // 0x418db8: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x418db8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_418dbc:
    // 0x418dbc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x418dbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418dc0:
    // 0x418dc0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_418dc4:
    if (ctx->pc == 0x418DC4u) {
        ctx->pc = 0x418DC4u;
            // 0x418dc4: 0x3c023cbd  lui         $v0, 0x3CBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
        ctx->pc = 0x418DC8u;
        goto label_418dc8;
    }
    ctx->pc = 0x418DC0u;
    {
        const bool branch_taken_0x418dc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418dc0) {
            ctx->pc = 0x418DC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418DC0u;
            // 0x418dc4: 0x3c023cbd  lui         $v0, 0x3CBD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418DD0u;
            goto label_418dd0;
        }
    }
    ctx->pc = 0x418DC8u;
label_418dc8:
    // 0x418dc8: 0x460010c6  mov.s       $f3, $f2
    ctx->pc = 0x418dc8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[2]);
label_418dcc:
    // 0x418dcc: 0x3c023cbd  lui         $v0, 0x3CBD
    ctx->pc = 0x418dccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15549 << 16));
label_418dd0:
    // 0x418dd0: 0x3442a12f  ori         $v0, $v0, 0xA12F
    ctx->pc = 0x418dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41263);
label_418dd4:
    // 0x418dd4: 0xc4810de4  lwc1        $f1, 0xDE4($a0)
    ctx->pc = 0x418dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_418dd8:
    // 0x418dd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x418dd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_418ddc:
    // 0x418ddc: 0x0  nop
    ctx->pc = 0x418ddcu;
    // NOP
label_418de0:
    // 0x418de0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x418de0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_418de4:
    // 0x418de4: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_418de8:
    if (ctx->pc == 0x418DE8u) {
        ctx->pc = 0x418DE8u;
            // 0x418de8: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x418DECu;
        goto label_418dec;
    }
    ctx->pc = 0x418DE4u;
    {
        const bool branch_taken_0x418de4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x418de4) {
            ctx->pc = 0x418DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418DE4u;
            // 0x418de8: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418E08u;
            goto label_418e08;
        }
    }
    ctx->pc = 0x418DECu;
label_418dec:
    // 0x418dec: 0x4603b302  mul.s       $f12, $f22, $f3
    ctx->pc = 0x418decu;
    ctx->f[12] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_418df0:
    // 0x418df0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x418df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_418df4:
    // 0x418df4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x418df4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_418df8:
    // 0x418df8: 0xc0767f0  jal         func_1D9FC0
label_418dfc:
    if (ctx->pc == 0x418DFCu) {
        ctx->pc = 0x418DFCu;
            // 0x418dfc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x418E00u;
        goto label_418e00;
    }
    ctx->pc = 0x418DF8u;
    SET_GPR_U32(ctx, 31, 0x418E00u);
    ctx->pc = 0x418DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418DF8u;
            // 0x418dfc: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418E00u; }
        if (ctx->pc != 0x418E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418E00u; }
        if (ctx->pc != 0x418E00u) { return; }
    }
    ctx->pc = 0x418E00u;
label_418e00:
    // 0x418e00: 0x10000010  b           . + 4 + (0x10 << 2)
label_418e04:
    if (ctx->pc == 0x418E04u) {
        ctx->pc = 0x418E08u;
        goto label_418e08;
    }
    ctx->pc = 0x418E00u;
    {
        const bool branch_taken_0x418e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x418e00) {
            ctx->pc = 0x418E44u;
            goto label_418e44;
        }
    }
    ctx->pc = 0x418E08u;
label_418e08:
    // 0x418e08: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x418e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_418e0c:
    // 0x418e0c: 0x34466666  ori         $a2, $v0, 0x6666
    ctx->pc = 0x418e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_418e10:
    // 0x418e10: 0x4603b002  mul.s       $f0, $f22, $f3
    ctx->pc = 0x418e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[3]);
label_418e14:
    // 0x418e14: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x418e14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_418e18:
    // 0x418e18: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x418e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_418e1c:
    // 0x418e1c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x418e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_418e20:
    // 0x418e20: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x418e20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_418e24:
    // 0x418e24: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x418e24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418e28:
    // 0x418e28: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x418e28u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_418e2c:
    // 0x418e2c: 0x0  nop
    ctx->pc = 0x418e2cu;
    // NOP
label_418e30:
    // 0x418e30: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x418e30u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_418e34:
    // 0x418e34: 0x4614185c  madd.s      $f1, $f3, $f20
    ctx->pc = 0x418e34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[20]));
label_418e38:
    // 0x418e38: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x418e38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_418e3c:
    // 0x418e3c: 0xc0767f0  jal         func_1D9FC0
label_418e40:
    if (ctx->pc == 0x418E40u) {
        ctx->pc = 0x418E40u;
            // 0x418e40: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x418E44u;
        goto label_418e44;
    }
    ctx->pc = 0x418E3Cu;
    SET_GPR_U32(ctx, 31, 0x418E44u);
    ctx->pc = 0x418E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418E3Cu;
            // 0x418e40: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC0u;
    if (runtime->hasFunction(0x1D9FC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D9FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418E44u; }
        if (ctx->pc != 0x418E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9FC0_0x1d9fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418E44u; }
        if (ctx->pc != 0x418E44u) { return; }
    }
    ctx->pc = 0x418E44u;
label_418e44:
    // 0x418e44: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x418e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_418e48:
    // 0x418e48: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x418e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_418e4c:
    // 0x418e4c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x418e4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_418e50:
    // 0x418e50: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x418e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_418e54:
    // 0x418e54: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x418e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_418e58:
    // 0x418e58: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x418e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_418e5c:
    // 0x418e5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x418e5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_418e60:
    // 0x418e60: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x418e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_418e64:
    // 0x418e64: 0x3e00008  jr          $ra
label_418e68:
    if (ctx->pc == 0x418E68u) {
        ctx->pc = 0x418E68u;
            // 0x418e68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x418E6Cu;
        goto label_418e6c;
    }
    ctx->pc = 0x418E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418E64u;
            // 0x418e68: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x418E6Cu;
label_418e6c:
    // 0x418e6c: 0x0  nop
    ctx->pc = 0x418e6cu;
    // NOP
label_418e70:
    // 0x418e70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x418e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_418e74:
    // 0x418e74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x418e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_418e78:
    // 0x418e78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x418e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_418e7c:
    // 0x418e7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x418e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_418e80:
    // 0x418e80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x418e80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418e84:
    // 0x418e84: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_418e88:
    if (ctx->pc == 0x418E88u) {
        ctx->pc = 0x418E88u;
            // 0x418e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418E8Cu;
        goto label_418e8c;
    }
    ctx->pc = 0x418E84u;
    {
        const bool branch_taken_0x418e84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418E84u;
            // 0x418e88: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e84) {
            ctx->pc = 0x418EC8u;
            goto label_418ec8;
        }
    }
    ctx->pc = 0x418E8Cu;
label_418e8c:
    // 0x418e8c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x418e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_418e90:
    // 0x418e90: 0x2442b5a0  addiu       $v0, $v0, -0x4A60
    ctx->pc = 0x418e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948256));
label_418e94:
    // 0x418e94: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_418e98:
    if (ctx->pc == 0x418E98u) {
        ctx->pc = 0x418E98u;
            // 0x418e98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x418E9Cu;
        goto label_418e9c;
    }
    ctx->pc = 0x418E94u;
    {
        const bool branch_taken_0x418e94 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x418E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418E94u;
            // 0x418e98: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418e94) {
            ctx->pc = 0x418EB0u;
            goto label_418eb0;
        }
    }
    ctx->pc = 0x418E9Cu;
label_418e9c:
    // 0x418e9c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x418e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_418ea0:
    // 0x418ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x418ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_418ea4:
    // 0x418ea4: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x418ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_418ea8:
    // 0x418ea8: 0xc057a68  jal         func_15E9A0
label_418eac:
    if (ctx->pc == 0x418EACu) {
        ctx->pc = 0x418EACu;
            // 0x418eac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x418EB0u;
        goto label_418eb0;
    }
    ctx->pc = 0x418EA8u;
    SET_GPR_U32(ctx, 31, 0x418EB0u);
    ctx->pc = 0x418EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418EA8u;
            // 0x418eac: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418EB0u; }
        if (ctx->pc != 0x418EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418EB0u; }
        if (ctx->pc != 0x418EB0u) { return; }
    }
    ctx->pc = 0x418EB0u;
label_418eb0:
    // 0x418eb0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x418eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_418eb4:
    // 0x418eb4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x418eb4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_418eb8:
    // 0x418eb8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_418ebc:
    if (ctx->pc == 0x418EBCu) {
        ctx->pc = 0x418EBCu;
            // 0x418ebc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418EC0u;
        goto label_418ec0;
    }
    ctx->pc = 0x418EB8u;
    {
        const bool branch_taken_0x418eb8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x418eb8) {
            ctx->pc = 0x418EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x418EB8u;
            // 0x418ebc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x418ECCu;
            goto label_418ecc;
        }
    }
    ctx->pc = 0x418EC0u;
label_418ec0:
    // 0x418ec0: 0xc0400a8  jal         func_1002A0
label_418ec4:
    if (ctx->pc == 0x418EC4u) {
        ctx->pc = 0x418EC4u;
            // 0x418ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x418EC8u;
        goto label_418ec8;
    }
    ctx->pc = 0x418EC0u;
    SET_GPR_U32(ctx, 31, 0x418EC8u);
    ctx->pc = 0x418EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x418EC0u;
            // 0x418ec4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418EC8u; }
        if (ctx->pc != 0x418EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x418EC8u; }
        if (ctx->pc != 0x418EC8u) { return; }
    }
    ctx->pc = 0x418EC8u;
label_418ec8:
    // 0x418ec8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x418ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_418ecc:
    // 0x418ecc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x418eccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_418ed0:
    // 0x418ed0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x418ed0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_418ed4:
    // 0x418ed4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x418ed4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_418ed8:
    // 0x418ed8: 0x3e00008  jr          $ra
label_418edc:
    if (ctx->pc == 0x418EDCu) {
        ctx->pc = 0x418EDCu;
            // 0x418edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x418EE0u;
        goto label_418ee0;
    }
    ctx->pc = 0x418ED8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x418EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418ED8u;
            // 0x418edc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x418EE0u;
label_418ee0:
    // 0x418ee0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x418ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_418ee4:
    // 0x418ee4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x418ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_418ee8:
    // 0x418ee8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x418ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_418eec:
    // 0x418eec: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x418eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_418ef0:
    // 0x418ef0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x418ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_418ef4:
    // 0x418ef4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x418ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_418ef8:
    // 0x418ef8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x418ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_418efc:
    // 0x418efc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x418efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_418f00:
    // 0x418f00: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x418f00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_418f04:
    // 0x418f04: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x418f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_418f08:
    // 0x418f08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x418f08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_418f0c:
    // 0x418f0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x418f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_418f10:
    // 0x418f10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x418f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_418f14:
    // 0x418f14: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x418f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_418f18:
    // 0x418f18: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x418f18u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_418f1c:
    // 0x418f1c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x418f1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_418f20:
    // 0x418f20: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x418f20u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_418f24:
    // 0x418f24: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_418f28:
    if (ctx->pc == 0x418F28u) {
        ctx->pc = 0x418F2Cu;
        goto label_418f2c;
    }
    ctx->pc = 0x418F24u;
    {
        const bool branch_taken_0x418f24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x418f24) {
            ctx->pc = 0x418F34u;
            goto label_418f34;
        }
    }
    ctx->pc = 0x418F2Cu;
label_418f2c:
    // 0x418f2c: 0x10000123  b           . + 4 + (0x123 << 2)
label_418f30:
    if (ctx->pc == 0x418F30u) {
        ctx->pc = 0x418F30u;
            // 0x418f30: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x418F34u;
        goto label_418f34;
    }
    ctx->pc = 0x418F2Cu;
    {
        const bool branch_taken_0x418f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x418F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418F2Cu;
            // 0x418f30: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418f2c) {
            ctx->pc = 0x4193BCu;
            goto label_4193bc;
        }
    }
    ctx->pc = 0x418F34u;
label_418f34:
    // 0x418f34: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x418f34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_418f38:
    // 0x418f38: 0x8ea5005c  lw          $a1, 0x5C($s5)
    ctx->pc = 0x418f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_418f3c:
    // 0x418f3c: 0x8c63d130  lw          $v1, -0x2ED0($v1)
    ctx->pc = 0x418f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_418f40:
    // 0x418f40: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x418f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_418f44:
    // 0x418f44: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x418f44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_418f48:
    // 0x418f48: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x418f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_418f4c:
    // 0x418f4c: 0x3c060061  lui         $a2, 0x61
    ctx->pc = 0x418f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)97 << 16));
label_418f50:
    // 0x418f50: 0x24840e84  addiu       $a0, $a0, 0xE84
    ctx->pc = 0x418f50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3716));
label_418f54:
    // 0x418f54: 0x8c670130  lw          $a3, 0x130($v1)
    ctx->pc = 0x418f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_418f58:
    // 0x418f58: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x418f58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_418f5c:
    // 0x418f5c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x418f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_418f60:
    // 0x418f60: 0x24690130  addiu       $t1, $v1, 0x130
    ctx->pc = 0x418f60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 304));
label_418f64:
    // 0x418f64: 0x8c970000  lw          $s7, 0x0($a0)
    ctx->pc = 0x418f64u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_418f68:
    // 0x418f68: 0x24480010  addiu       $t0, $v0, 0x10
    ctx->pc = 0x418f68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_418f6c:
    // 0x418f6c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x418f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_418f70:
    // 0x418f70: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x418f70u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_418f74:
    // 0x418f74: 0x24c6fdf0  addiu       $a2, $a2, -0x210
    ctx->pc = 0x418f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294966768));
label_418f78:
    // 0x418f78: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x418f78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_418f7c:
    // 0x418f7c: 0x24040012  addiu       $a0, $zero, 0x12
    ctx->pc = 0x418f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_418f80:
    // 0x418f80: 0x92e20e3d  lbu         $v0, 0xE3D($s7)
    ctx->pc = 0x418f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 3645)));
label_418f84:
    // 0x418f84: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x418f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_418f88:
    // 0x418f88: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x418f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_418f8c:
    // 0x418f8c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x418f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_418f90:
    // 0x418f90: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x418f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_418f94:
    // 0x418f94: 0x24700010  addiu       $s0, $v1, 0x10
    ctx->pc = 0x418f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_418f98:
    // 0x418f98: 0x245e00c0  addiu       $fp, $v0, 0xC0
    ctx->pc = 0x418f98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_418f9c:
    // 0x418f9c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x418f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_418fa0:
    // 0x418fa0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x418fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_418fa4:
    // 0x418fa4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x418fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_418fa8:
    // 0x418fa8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x418fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_418fac:
    // 0x418fac: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x418facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_418fb0:
    // 0x418fb0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x418fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_418fb4:
    // 0x418fb4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_418fb8:
    if (ctx->pc == 0x418FB8u) {
        ctx->pc = 0x418FB8u;
            // 0x418fb8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x418FBCu;
        goto label_418fbc;
    }
    ctx->pc = 0x418FB4u;
    {
        const bool branch_taken_0x418fb4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x418FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x418FB4u;
            // 0x418fb8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x418fb4) {
            ctx->pc = 0x418F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_418f9c;
        }
    }
    ctx->pc = 0x418FBCu;
label_418fbc:
    // 0x418fbc: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x418fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_418fc0:
    // 0x418fc0: 0x3c033f40  lui         $v1, 0x3F40
    ctx->pc = 0x418fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16192 << 16));
label_418fc4:
    // 0x418fc4: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x418fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_418fc8:
    // 0x418fc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x418fc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_418fcc:
    // 0x418fcc: 0xc6a00064  lwc1        $f0, 0x64($s5)
    ctx->pc = 0x418fccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_418fd0:
    // 0x418fd0: 0x8ea3005c  lw          $v1, 0x5C($s5)
    ctx->pc = 0x418fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
label_418fd4:
    // 0x418fd4: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x418fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_418fd8:
    // 0x418fd8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x418fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_418fdc:
    // 0x418fdc: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x418fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_418fe0:
    // 0x418fe0: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x418fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_418fe4:
    // 0x418fe4: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x418fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_418fe8:
    // 0x418fe8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x418fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_418fec:
    // 0x418fec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x418fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_418ff0:
    // 0x418ff0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x418ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_418ff4:
    // 0x418ff4: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x418ff4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_418ff8:
    // 0x418ff8: 0xc4ac01a4  lwc1        $f12, 0x1A4($a1)
    ctx->pc = 0x418ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_418ffc:
    // 0x418ffc: 0xc4ad01a8  lwc1        $f13, 0x1A8($a1)
    ctx->pc = 0x418ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_419000:
    // 0x419000: 0xc4ae01ac  lwc1        $f14, 0x1AC($a1)
    ctx->pc = 0x419000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_419004:
    // 0x419004: 0xc04cbd8  jal         func_132F60
label_419008:
    if (ctx->pc == 0x419008u) {
        ctx->pc = 0x419008u;
            // 0x419008: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x41900Cu;
        goto label_41900c;
    }
    ctx->pc = 0x419004u;
    SET_GPR_U32(ctx, 31, 0x41900Cu);
    ctx->pc = 0x419008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419004u;
            // 0x419008: 0x46000d82  mul.s       $f22, $f1, $f0 (Delay Slot)
        ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41900Cu; }
        if (ctx->pc != 0x41900Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41900Cu; }
        if (ctx->pc != 0x41900Cu) { return; }
    }
    ctx->pc = 0x41900Cu;
label_41900c:
    // 0x41900c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x41900cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_419010:
    // 0x419010: 0xc04cc34  jal         func_1330D0
label_419014:
    if (ctx->pc == 0x419014u) {
        ctx->pc = 0x419014u;
            // 0x419014: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x419018u;
        goto label_419018;
    }
    ctx->pc = 0x419010u;
    SET_GPR_U32(ctx, 31, 0x419018u);
    ctx->pc = 0x419014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419010u;
            // 0x419014: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419018u; }
        if (ctx->pc != 0x419018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419018u; }
        if (ctx->pc != 0x419018u) { return; }
    }
    ctx->pc = 0x419018u;
label_419018:
    // 0x419018: 0x3c03461c  lui         $v1, 0x461C
    ctx->pc = 0x419018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17948 << 16));
label_41901c:
    // 0x41901c: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x41901cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
label_419020:
    // 0x419020: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x419020u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419024:
    // 0x419024: 0x0  nop
    ctx->pc = 0x419024u;
    // NOP
label_419028:
    // 0x419028: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x419028u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_41902c:
    // 0x41902c: 0x450000e2  bc1f        . + 4 + (0xE2 << 2)
label_419030:
    if (ctx->pc == 0x419030u) {
        ctx->pc = 0x419034u;
        goto label_419034;
    }
    ctx->pc = 0x41902Cu;
    {
        const bool branch_taken_0x41902c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x41902c) {
            ctx->pc = 0x4193B8u;
            goto label_4193b8;
        }
    }
    ctx->pc = 0x419034u;
label_419034:
    // 0x419034: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x419034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419038:
    // 0x419038: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x419038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41903c:
    // 0x41903c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41903cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419040:
    // 0x419040: 0xc0506b8  jal         func_141AE0
label_419044:
    if (ctx->pc == 0x419044u) {
        ctx->pc = 0x419044u;
            // 0x419044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419048u;
        goto label_419048;
    }
    ctx->pc = 0x419040u;
    SET_GPR_U32(ctx, 31, 0x419048u);
    ctx->pc = 0x419044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419040u;
            // 0x419044: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419048u; }
        if (ctx->pc != 0x419048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419048u; }
        if (ctx->pc != 0x419048u) { return; }
    }
    ctx->pc = 0x419048u;
label_419048:
    // 0x419048: 0xc0508b0  jal         func_1422C0
label_41904c:
    if (ctx->pc == 0x41904Cu) {
        ctx->pc = 0x41904Cu;
            // 0x41904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419050u;
        goto label_419050;
    }
    ctx->pc = 0x419048u;
    SET_GPR_U32(ctx, 31, 0x419050u);
    ctx->pc = 0x41904Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419048u;
            // 0x41904c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422C0u;
    if (runtime->hasFunction(0x1422C0u)) {
        auto targetFn = runtime->lookupFunction(0x1422C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419050u; }
        if (ctx->pc != 0x419050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422C0_0x1422c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419050u; }
        if (ctx->pc != 0x419050u) { return; }
    }
    ctx->pc = 0x419050u;
label_419050:
    // 0x419050: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x419050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_419054:
    // 0x419054: 0x8c447318  lw          $a0, 0x7318($v0)
    ctx->pc = 0x419054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29464)));
label_419058:
    // 0x419058: 0xc0506ac  jal         func_141AB0
label_41905c:
    if (ctx->pc == 0x41905Cu) {
        ctx->pc = 0x41905Cu;
            // 0x41905c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419060u;
        goto label_419060;
    }
    ctx->pc = 0x419058u;
    SET_GPR_U32(ctx, 31, 0x419060u);
    ctx->pc = 0x41905Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419058u;
            // 0x41905c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419060u; }
        if (ctx->pc != 0x419060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419060u; }
        if (ctx->pc != 0x419060u) { return; }
    }
    ctx->pc = 0x419060u;
label_419060:
    // 0x419060: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x419060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_419064:
    // 0x419064: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x419064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_419068:
    // 0x419068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x419068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41906c:
    // 0x41906c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x41906cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_419070:
    // 0x419070: 0x320f809  jalr        $t9
label_419074:
    if (ctx->pc == 0x419074u) {
        ctx->pc = 0x419074u;
            // 0x419074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x419078u;
        goto label_419078;
    }
    ctx->pc = 0x419070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419078u);
        ctx->pc = 0x419074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419070u;
            // 0x419074: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419078u; }
            if (ctx->pc != 0x419078u) { return; }
        }
        }
    }
    ctx->pc = 0x419078u;
label_419078:
    // 0x419078: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x419078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_41907c:
    // 0x41907c: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x41907cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_419080:
    // 0x419080: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x419080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_419084:
    // 0x419084: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x419084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_419088:
    // 0x419088: 0x320f809  jalr        $t9
label_41908c:
    if (ctx->pc == 0x41908Cu) {
        ctx->pc = 0x41908Cu;
            // 0x41908c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x419090u;
        goto label_419090;
    }
    ctx->pc = 0x419088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419090u);
        ctx->pc = 0x41908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419088u;
            // 0x41908c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419090u; }
            if (ctx->pc != 0x419090u) { return; }
        }
        }
    }
    ctx->pc = 0x419090u;
label_419090:
    // 0x419090: 0xc05068c  jal         func_141A30
label_419094:
    if (ctx->pc == 0x419094u) {
        ctx->pc = 0x419094u;
            // 0x419094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419098u;
        goto label_419098;
    }
    ctx->pc = 0x419090u;
    SET_GPR_U32(ctx, 31, 0x419098u);
    ctx->pc = 0x419094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419090u;
            // 0x419094: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419098u; }
        if (ctx->pc != 0x419098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419098u; }
        if (ctx->pc != 0x419098u) { return; }
    }
    ctx->pc = 0x419098u;
label_419098:
    // 0x419098: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x419098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_41909c:
    // 0x41909c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x41909cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4190a0:
    // 0x4190a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4190a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4190a4:
    // 0x4190a4: 0xc0508b4  jal         func_1422D0
label_4190a8:
    if (ctx->pc == 0x4190A8u) {
        ctx->pc = 0x4190A8u;
            // 0x4190a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4190ACu;
        goto label_4190ac;
    }
    ctx->pc = 0x4190A4u;
    SET_GPR_U32(ctx, 31, 0x4190ACu);
    ctx->pc = 0x4190A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4190A4u;
            // 0x4190a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1422D0u;
    if (runtime->hasFunction(0x1422D0u)) {
        auto targetFn = runtime->lookupFunction(0x1422D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4190ACu; }
        if (ctx->pc != 0x4190ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001422D0_0x1422d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4190ACu; }
        if (ctx->pc != 0x4190ACu) { return; }
    }
    ctx->pc = 0x4190ACu;
label_4190ac:
    // 0x4190ac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4190acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4190b0:
    // 0x4190b0: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x4190b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4190b4:
    // 0x4190b4: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x4190b4u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4190b8:
    // 0x4190b8: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4190b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4190bc:
    // 0x4190bc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x4190bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_4190c0:
    // 0x4190c0: 0x2630006c  addiu       $s0, $s1, 0x6C
    ctx->pc = 0x4190c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4190c4:
    // 0x4190c4: 0xc626006c  lwc1        $f6, 0x6C($s1)
    ctx->pc = 0x4190c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4190c8:
    // 0x4190c8: 0xc6a50064  lwc1        $f5, 0x64($s5)
    ctx->pc = 0x4190c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4190cc:
    // 0x4190cc: 0xc444fe98  lwc1        $f4, -0x168($v0)
    ctx->pc = 0x4190ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_4190d0:
    // 0x4190d0: 0x46163034  c.lt.s      $f6, $f22
    ctx->pc = 0x4190d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4190d4:
    // 0x4190d4: 0x46062801  sub.s       $f0, $f5, $f6
    ctx->pc = 0x4190d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
label_4190d8:
    // 0x4190d8: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x4190d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_4190dc:
    // 0x4190dc: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x4190dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_4190e0:
    // 0x4190e0: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x4190e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_4190e4:
    // 0x4190e4: 0x46002542  mul.s       $f21, $f4, $f0
    ctx->pc = 0x4190e4u;
    ctx->f[21] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_4190e8:
    // 0x4190e8: 0xc441fe88  lwc1        $f1, -0x178($v0)
    ctx->pc = 0x4190e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4190ec:
    // 0x4190ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4190ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4190f0:
    // 0x4190f0: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4190f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_4190f4:
    // 0x4190f4: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x4190f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4190f8:
    // 0x4190f8: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
label_4190fc:
    if (ctx->pc == 0x4190FCu) {
        ctx->pc = 0x4190FCu;
            // 0x4190fc: 0x46021d1c  madd.s      $f20, $f3, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->pc = 0x419100u;
        goto label_419100;
    }
    ctx->pc = 0x4190F8u;
    {
        const bool branch_taken_0x4190f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4190FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4190F8u;
            // 0x4190fc: 0x46021d1c  madd.s      $f20, $f3, $f2 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4190f8) {
            ctx->pc = 0x419170u;
            goto label_419170;
        }
    }
    ctx->pc = 0x419100u;
label_419100:
    // 0x419100: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x419100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_419104:
    // 0x419104: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x419104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_419108:
    // 0x419108: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x419108u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41910c:
    // 0x41910c: 0x0  nop
    ctx->pc = 0x41910cu;
    // NOP
label_419110:
    // 0x419110: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x419110u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_419114:
    // 0x419114: 0x46160043  div.s       $f1, $f0, $f22
    ctx->pc = 0x419114u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[22];
label_419118:
    // 0x419118: 0x0  nop
    ctx->pc = 0x419118u;
    // NOP
label_41911c:
    // 0x41911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419120:
    // 0x419120: 0x0  nop
    ctx->pc = 0x419120u;
    // NOP
label_419124:
    // 0x419124: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x419124u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419128:
    // 0x419128: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41912c:
    if (ctx->pc == 0x41912Cu) {
        ctx->pc = 0x41912Cu;
            // 0x41912c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x419130u;
        goto label_419130;
    }
    ctx->pc = 0x419128u;
    {
        const bool branch_taken_0x419128 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x419128) {
            ctx->pc = 0x41912Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419128u;
            // 0x41912c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x419140u;
            goto label_419140;
        }
    }
    ctx->pc = 0x419130u;
label_419130:
    // 0x419130: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x419130u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_419134:
    // 0x419134: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x419134u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_419138:
    // 0x419138: 0x10000007  b           . + 4 + (0x7 << 2)
label_41913c:
    if (ctx->pc == 0x41913Cu) {
        ctx->pc = 0x41913Cu;
            // 0x41913c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x419140u;
        goto label_419140;
    }
    ctx->pc = 0x419138u;
    {
        const bool branch_taken_0x419138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41913Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419138u;
            // 0x41913c: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x419138) {
            ctx->pc = 0x419158u;
            goto label_419158;
        }
    }
    ctx->pc = 0x419140u;
label_419140:
    // 0x419140: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x419140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_419144:
    // 0x419144: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x419144u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_419148:
    // 0x419148: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x419148u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_41914c:
    // 0x41914c: 0x0  nop
    ctx->pc = 0x41914cu;
    // NOP
label_419150:
    // 0x419150: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x419150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_419154:
    // 0x419154: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x419154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_419158:
    // 0x419158: 0x307300ff  andi        $s3, $v1, 0xFF
    ctx->pc = 0x419158u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_41915c:
    // 0x41915c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x41915cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419160:
    // 0x419160: 0x131043  sra         $v0, $s3, 1
    ctx->pc = 0x419160u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), 1));
label_419164:
    // 0x419164: 0x1000001c  b           . + 4 + (0x1C << 2)
label_419168:
    if (ctx->pc == 0x419168u) {
        ctx->pc = 0x419168u;
            // 0x419168: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x41916Cu;
        goto label_41916c;
    }
    ctx->pc = 0x419164u;
    {
        const bool branch_taken_0x419164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419164u;
            // 0x419168: 0x305600ff  andi        $s6, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x419164) {
            ctx->pc = 0x4191D8u;
            goto label_4191d8;
        }
    }
    ctx->pc = 0x41916Cu;
label_41916c:
    // 0x41916c: 0x0  nop
    ctx->pc = 0x41916cu;
    // NOP
label_419170:
    // 0x419170: 0x3c02437f  lui         $v0, 0x437F
    ctx->pc = 0x419170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17279 << 16));
label_419174:
    // 0x419174: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x419174u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419178:
    // 0x419178: 0x0  nop
    ctx->pc = 0x419178u;
    // NOP
label_41917c:
    // 0x41917c: 0x46060802  mul.s       $f0, $f1, $f6
    ctx->pc = 0x41917cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_419180:
    // 0x419180: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x419180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_419184:
    // 0x419184: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x419184u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_419188:
    // 0x419188: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x419188u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_41918c:
    // 0x41918c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x41918cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419190:
    // 0x419190: 0x0  nop
    ctx->pc = 0x419190u;
    // NOP
label_419194:
    // 0x419194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x419194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419198:
    // 0x419198: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_41919c:
    if (ctx->pc == 0x41919Cu) {
        ctx->pc = 0x41919Cu;
            // 0x41919c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x4191A0u;
        goto label_4191a0;
    }
    ctx->pc = 0x419198u;
    {
        const bool branch_taken_0x419198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x419198) {
            ctx->pc = 0x41919Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x419198u;
            // 0x41919c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4191B0u;
            goto label_4191b0;
        }
    }
    ctx->pc = 0x4191A0u;
label_4191a0:
    // 0x4191a0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4191a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4191a4:
    // 0x4191a4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4191a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4191a8:
    // 0x4191a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_4191ac:
    if (ctx->pc == 0x4191ACu) {
        ctx->pc = 0x4191ACu;
            // 0x4191ac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4191B0u;
        goto label_4191b0;
    }
    ctx->pc = 0x4191A8u;
    {
        const bool branch_taken_0x4191a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4191ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4191A8u;
            // 0x4191ac: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4191a8) {
            ctx->pc = 0x4191C8u;
            goto label_4191c8;
        }
    }
    ctx->pc = 0x4191B0u;
label_4191b0:
    // 0x4191b0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x4191b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_4191b4:
    // 0x4191b4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4191b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4191b8:
    // 0x4191b8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x4191b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_4191bc:
    // 0x4191bc: 0x0  nop
    ctx->pc = 0x4191bcu;
    // NOP
label_4191c0:
    // 0x4191c0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x4191c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_4191c4:
    // 0x4191c4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4191c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4191c8:
    // 0x4191c8: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x4191c8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4191cc:
    // 0x4191cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4191ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4191d0:
    // 0x4191d0: 0x121043  sra         $v0, $s2, 1
    ctx->pc = 0x4191d0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 18), 1));
label_4191d4:
    // 0x4191d4: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x4191d4u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4191d8:
    // 0x4191d8: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x4191d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_4191dc:
    // 0x4191dc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4191dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4191e0:
    // 0x4191e0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4191e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4191e4:
    // 0x4191e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x4191e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4191e8:
    // 0x4191e8: 0xc04ce10  jal         func_133840
label_4191ec:
    if (ctx->pc == 0x4191ECu) {
        ctx->pc = 0x4191ECu;
            // 0x4191ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4191F0u;
        goto label_4191f0;
    }
    ctx->pc = 0x4191E8u;
    SET_GPR_U32(ctx, 31, 0x4191F0u);
    ctx->pc = 0x4191ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4191E8u;
            // 0x4191ec: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133840u;
    if (runtime->hasFunction(0x133840u)) {
        auto targetFn = runtime->lookupFunction(0x133840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4191F0u; }
        if (ctx->pc != 0x4191F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133840_0x133840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4191F0u; }
        if (ctx->pc != 0x4191F0u) { return; }
    }
    ctx->pc = 0x4191F0u;
label_4191f0:
    // 0x4191f0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x4191f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4191f4:
    // 0x4191f4: 0xc04ce80  jal         func_133A00
label_4191f8:
    if (ctx->pc == 0x4191F8u) {
        ctx->pc = 0x4191F8u;
            // 0x4191f8: 0x26e502c0  addiu       $a1, $s7, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 704));
        ctx->pc = 0x4191FCu;
        goto label_4191fc;
    }
    ctx->pc = 0x4191F4u;
    SET_GPR_U32(ctx, 31, 0x4191FCu);
    ctx->pc = 0x4191F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4191F4u;
            // 0x4191f8: 0x26e502c0  addiu       $a1, $s7, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4191FCu; }
        if (ctx->pc != 0x4191FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4191FCu; }
        if (ctx->pc != 0x4191FCu) { return; }
    }
    ctx->pc = 0x4191FCu;
label_4191fc:
    // 0x4191fc: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x4191fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_419200:
    // 0x419200: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x419200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_419204:
    // 0x419204: 0x862825  or          $a1, $a0, $a2
    ctx->pc = 0x419204u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_419208:
    // 0x419208: 0x32c300ff  andi        $v1, $s6, 0xFF
    ctx->pc = 0x419208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_41920c:
    // 0x41920c: 0x662025  or          $a0, $v1, $a2
    ctx->pc = 0x41920cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_419210:
    // 0x419210: 0x326200ff  andi        $v0, $s3, 0xFF
    ctx->pc = 0x419210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
label_419214:
    // 0x419214: 0x461825  or          $v1, $v0, $a2
    ctx->pc = 0x419214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_419218:
    // 0x419218: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x419218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_41921c:
    // 0x41921c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41921cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_419220:
    // 0x419220: 0xafa500e4  sw          $a1, 0xE4($sp)
    ctx->pc = 0x419220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 5));
label_419224:
    // 0x419224: 0xc442fe80  lwc1        $f2, -0x180($v0)
    ctx->pc = 0x419224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_419228:
    // 0x419228: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x419228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
label_41922c:
    // 0x41922c: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x41922cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_419230:
    // 0x419230: 0xafa40114  sw          $a0, 0x114($sp)
    ctx->pc = 0x419230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 4));
label_419234:
    // 0x419234: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x419234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_419238:
    // 0x419238: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x419238u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_41923c:
    // 0x41923c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x41923cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_419240:
    // 0x419240: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x419240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_419244:
    // 0x419244: 0xc440fe90  lwc1        $f0, -0x170($v0)
    ctx->pc = 0x419244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294966928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_419248:
    // 0x419248: 0xafa30144  sw          $v1, 0x144($sp)
    ctx->pc = 0x419248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 3));
label_41924c:
    // 0x41924c: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x41924cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_419250:
    // 0x419250: 0xafa3012c  sw          $v1, 0x12C($sp)
    ctx->pc = 0x419250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 3));
label_419254:
    // 0x419254: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x419254u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_419258:
    // 0x419258: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x419258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_41925c:
    // 0x41925c: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x41925cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_419260:
    // 0x419260: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x419260u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_419264:
    // 0x419264: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x419264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_419268:
    // 0x419268: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x419268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_41926c:
    // 0x41926c: 0xe7a100d8  swc1        $f1, 0xD8($sp)
    ctx->pc = 0x41926cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_419270:
    // 0x419270: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x419270u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_419274:
    // 0x419274: 0xe7a300f0  swc1        $f3, 0xF0($sp)
    ctx->pc = 0x419274u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_419278:
    // 0x419278: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x419278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_41927c:
    // 0x41927c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x41927cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_419280:
    // 0x419280: 0x46151080  add.s       $f2, $f2, $f21
    ctx->pc = 0x419280u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[21]);
label_419284:
    // 0x419284: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x419284u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419288:
    // 0x419288: 0x0  nop
    ctx->pc = 0x419288u;
    // NOP
label_41928c:
    // 0x41928c: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x41928cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_419290:
    // 0x419290: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x419290u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_419294:
    // 0x419294: 0x46020802  mul.s       $f0, $f1, $f2
    ctx->pc = 0x419294u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_419298:
    // 0x419298: 0xe7a30120  swc1        $f3, 0x120($sp)
    ctx->pc = 0x419298u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_41929c:
    // 0x41929c: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x41929cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_4192a0:
    // 0x4192a0: 0xe7a20140  swc1        $f2, 0x140($sp)
    ctx->pc = 0x4192a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_4192a4:
    // 0x4192a4: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x4192a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_4192a8:
    // 0x4192a8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x4192a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_4192ac:
    // 0x4192ac: 0xe7b4010c  swc1        $f20, 0x10C($sp)
    ctx->pc = 0x4192acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_4192b0:
    // 0x4192b0: 0xe7b40124  swc1        $f20, 0x124($sp)
    ctx->pc = 0x4192b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_4192b4:
    // 0x4192b4: 0xc04cb9c  jal         func_132E70
label_4192b8:
    if (ctx->pc == 0x4192B8u) {
        ctx->pc = 0x4192B8u;
            // 0x4192b8: 0xe7b4013c  swc1        $f20, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->pc = 0x4192BCu;
        goto label_4192bc;
    }
    ctx->pc = 0x4192B4u;
    SET_GPR_U32(ctx, 31, 0x4192BCu);
    ctx->pc = 0x4192B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4192B4u;
            // 0x4192b8: 0xe7b4013c  swc1        $f20, 0x13C($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192BCu; }
        if (ctx->pc != 0x4192BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192BCu; }
        if (ctx->pc != 0x4192BCu) { return; }
    }
    ctx->pc = 0x4192BCu;
label_4192bc:
    // 0x4192bc: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x4192bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_4192c0:
    // 0x4192c0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x4192c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4192c4:
    // 0x4192c4: 0xc04cb9c  jal         func_132E70
label_4192c8:
    if (ctx->pc == 0x4192C8u) {
        ctx->pc = 0x4192C8u;
            // 0x4192c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4192CCu;
        goto label_4192cc;
    }
    ctx->pc = 0x4192C4u;
    SET_GPR_U32(ctx, 31, 0x4192CCu);
    ctx->pc = 0x4192C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4192C4u;
            // 0x4192c8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192CCu; }
        if (ctx->pc != 0x4192CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192CCu; }
        if (ctx->pc != 0x4192CCu) { return; }
    }
    ctx->pc = 0x4192CCu;
label_4192cc:
    // 0x4192cc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x4192ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4192d0:
    // 0x4192d0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x4192d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4192d4:
    // 0x4192d4: 0xc04cb9c  jal         func_132E70
label_4192d8:
    if (ctx->pc == 0x4192D8u) {
        ctx->pc = 0x4192D8u;
            // 0x4192d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4192DCu;
        goto label_4192dc;
    }
    ctx->pc = 0x4192D4u;
    SET_GPR_U32(ctx, 31, 0x4192DCu);
    ctx->pc = 0x4192D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4192D4u;
            // 0x4192d8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192DCu; }
        if (ctx->pc != 0x4192DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192DCu; }
        if (ctx->pc != 0x4192DCu) { return; }
    }
    ctx->pc = 0x4192DCu;
label_4192dc:
    // 0x4192dc: 0x27a40108  addiu       $a0, $sp, 0x108
    ctx->pc = 0x4192dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
label_4192e0:
    // 0x4192e0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x4192e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4192e4:
    // 0x4192e4: 0xc04cb9c  jal         func_132E70
label_4192e8:
    if (ctx->pc == 0x4192E8u) {
        ctx->pc = 0x4192E8u;
            // 0x4192e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4192ECu;
        goto label_4192ec;
    }
    ctx->pc = 0x4192E4u;
    SET_GPR_U32(ctx, 31, 0x4192ECu);
    ctx->pc = 0x4192E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4192E4u;
            // 0x4192e8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192ECu; }
        if (ctx->pc != 0x4192ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192ECu; }
        if (ctx->pc != 0x4192ECu) { return; }
    }
    ctx->pc = 0x4192ECu;
label_4192ec:
    // 0x4192ec: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x4192ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_4192f0:
    // 0x4192f0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x4192f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4192f4:
    // 0x4192f4: 0xc04cb9c  jal         func_132E70
label_4192f8:
    if (ctx->pc == 0x4192F8u) {
        ctx->pc = 0x4192F8u;
            // 0x4192f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4192FCu;
        goto label_4192fc;
    }
    ctx->pc = 0x4192F4u;
    SET_GPR_U32(ctx, 31, 0x4192FCu);
    ctx->pc = 0x4192F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4192F4u;
            // 0x4192f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192FCu; }
        if (ctx->pc != 0x4192FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4192FCu; }
        if (ctx->pc != 0x4192FCu) { return; }
    }
    ctx->pc = 0x4192FCu;
label_4192fc:
    // 0x4192fc: 0x27a40138  addiu       $a0, $sp, 0x138
    ctx->pc = 0x4192fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_419300:
    // 0x419300: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x419300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_419304:
    // 0x419304: 0xc04cb9c  jal         func_132E70
label_419308:
    if (ctx->pc == 0x419308u) {
        ctx->pc = 0x419308u;
            // 0x419308: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41930Cu;
        goto label_41930c;
    }
    ctx->pc = 0x419304u;
    SET_GPR_U32(ctx, 31, 0x41930Cu);
    ctx->pc = 0x419308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419304u;
            // 0x419308: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132E70u;
    if (runtime->hasFunction(0x132E70u)) {
        auto targetFn = runtime->lookupFunction(0x132E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41930Cu; }
        if (ctx->pc != 0x41930Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132E70_0x132e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x41930Cu; }
        if (ctx->pc != 0x41930Cu) { return; }
    }
    ctx->pc = 0x41930Cu;
label_41930c:
    // 0x41930c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x41930cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_419310:
    // 0x419310: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x419310u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_419314:
    // 0x419314: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x419314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_419318:
    // 0x419318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x419318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41931c:
    // 0x41931c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x41931cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_419320:
    // 0x419320: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x419320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_419324:
    // 0x419324: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x419324u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_419328:
    // 0x419328: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x419328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_41932c:
    // 0x41932c: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x41932cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_419330:
    // 0x419330: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x419330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_419334:
    // 0x419334: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x419334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_419338:
    // 0x419338: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x419338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_41933c:
    // 0x41933c: 0xafa00134  sw          $zero, 0x134($sp)
    ctx->pc = 0x41933cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
label_419340:
    // 0x419340: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x419340u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_419344:
    // 0x419344: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x419344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_419348:
    // 0x419348: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x419348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_41934c:
    // 0x41934c: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x41934cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_419350:
    // 0x419350: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x419350u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_419354:
    // 0x419354: 0xe7a10118  swc1        $f1, 0x118($sp)
    ctx->pc = 0x419354u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_419358:
    // 0x419358: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x419358u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_41935c:
    // 0x41935c: 0xe7a00148  swc1        $f0, 0x148($sp)
    ctx->pc = 0x41935cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_419360:
    // 0x419360: 0xc050a08  jal         func_142820
label_419364:
    if (ctx->pc == 0x419364u) {
        ctx->pc = 0x419364u;
            // 0x419364: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->pc = 0x419368u;
        goto label_419368;
    }
    ctx->pc = 0x419360u;
    SET_GPR_U32(ctx, 31, 0x419368u);
    ctx->pc = 0x419364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x419360u;
            // 0x419364: 0xe7a00130  swc1        $f0, 0x130($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x142820u;
    if (runtime->hasFunction(0x142820u)) {
        auto targetFn = runtime->lookupFunction(0x142820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419368u; }
        if (ctx->pc != 0x419368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142820_0x142820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419368u; }
        if (ctx->pc != 0x419368u) { return; }
    }
    ctx->pc = 0x419368u;
label_419368:
    // 0x419368: 0x86a20060  lh          $v0, 0x60($s5)
    ctx->pc = 0x419368u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
label_41936c:
    // 0x41936c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x41936cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_419370:
    // 0x419370: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x419370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_419374:
    // 0x419374: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
label_419378:
    if (ctx->pc == 0x419378u) {
        ctx->pc = 0x419378u;
            // 0x419378: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x41937Cu;
        goto label_41937c;
    }
    ctx->pc = 0x419374u;
    {
        const bool branch_taken_0x419374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x419378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419374u;
            // 0x419378: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419374) {
            ctx->pc = 0x4190B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4190b4;
        }
    }
    ctx->pc = 0x41937Cu;
label_41937c:
    // 0x41937c: 0xc050a88  jal         func_142A20
label_419380:
    if (ctx->pc == 0x419380u) {
        ctx->pc = 0x419384u;
        goto label_419384;
    }
    ctx->pc = 0x41937Cu;
    SET_GPR_U32(ctx, 31, 0x419384u);
    ctx->pc = 0x142A20u;
    if (runtime->hasFunction(0x142A20u)) {
        auto targetFn = runtime->lookupFunction(0x142A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419384u; }
        if (ctx->pc != 0x419384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00142A20_0x142a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x419384u; }
        if (ctx->pc != 0x419384u) { return; }
    }
    ctx->pc = 0x419384u;
label_419384:
    // 0x419384: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x419384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_419388:
    // 0x419388: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x419388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_41938c:
    // 0x41938c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x41938cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_419390:
    // 0x419390: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x419390u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_419394:
    // 0x419394: 0x320f809  jalr        $t9
label_419398:
    if (ctx->pc == 0x419398u) {
        ctx->pc = 0x41939Cu;
        goto label_41939c;
    }
    ctx->pc = 0x419394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x41939Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x41939Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x41939Cu; }
            if (ctx->pc != 0x41939Cu) { return; }
        }
        }
    }
    ctx->pc = 0x41939Cu;
label_41939c:
    // 0x41939c: 0xc05068c  jal         func_141A30
label_4193a0:
    if (ctx->pc == 0x4193A0u) {
        ctx->pc = 0x4193A0u;
            // 0x4193a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4193A4u;
        goto label_4193a4;
    }
    ctx->pc = 0x41939Cu;
    SET_GPR_U32(ctx, 31, 0x4193A4u);
    ctx->pc = 0x4193A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x41939Cu;
            // 0x4193a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141A30u;
    if (runtime->hasFunction(0x141A30u)) {
        auto targetFn = runtime->lookupFunction(0x141A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4193A4u; }
        if (ctx->pc != 0x4193A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141A30_0x141a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4193A4u; }
        if (ctx->pc != 0x4193A4u) { return; }
    }
    ctx->pc = 0x4193A4u;
label_4193a4:
    // 0x4193a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4193a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4193a8:
    // 0x4193a8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4193a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4193ac:
    // 0x4193ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4193acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4193b0:
    // 0x4193b0: 0xc0506b8  jal         func_141AE0
label_4193b4:
    if (ctx->pc == 0x4193B4u) {
        ctx->pc = 0x4193B4u;
            // 0x4193b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4193B8u;
        goto label_4193b8;
    }
    ctx->pc = 0x4193B0u;
    SET_GPR_U32(ctx, 31, 0x4193B8u);
    ctx->pc = 0x4193B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4193B0u;
            // 0x4193b4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4193B8u; }
        if (ctx->pc != 0x4193B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4193B8u; }
        if (ctx->pc != 0x4193B8u) { return; }
    }
    ctx->pc = 0x4193B8u;
label_4193b8:
    // 0x4193b8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4193b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4193bc:
    // 0x4193bc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x4193bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_4193c0:
    // 0x4193c0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4193c0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4193c4:
    // 0x4193c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x4193c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_4193c8:
    // 0x4193c8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4193c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4193cc:
    // 0x4193cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4193ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4193d0:
    // 0x4193d0: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4193d0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4193d4:
    // 0x4193d4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4193d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4193d8:
    // 0x4193d8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4193d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4193dc:
    // 0x4193dc: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4193dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4193e0:
    // 0x4193e0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4193e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4193e4:
    // 0x4193e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4193e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4193e8:
    // 0x4193e8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4193e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4193ec:
    // 0x4193ec: 0x3e00008  jr          $ra
label_4193f0:
    if (ctx->pc == 0x4193F0u) {
        ctx->pc = 0x4193F0u;
            // 0x4193f0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4193F4u;
        goto label_4193f4;
    }
    ctx->pc = 0x4193ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4193F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4193ECu;
            // 0x4193f0: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4193F4u;
label_4193f4:
    // 0x4193f4: 0x0  nop
    ctx->pc = 0x4193f4u;
    // NOP
label_4193f8:
    // 0x4193f8: 0x0  nop
    ctx->pc = 0x4193f8u;
    // NOP
label_4193fc:
    // 0x4193fc: 0x0  nop
    ctx->pc = 0x4193fcu;
    // NOP
label_419400:
    // 0x419400: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x419400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_419404:
    // 0x419404: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x419404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_419408:
    // 0x419408: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x419408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_41940c:
    // 0x41940c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x41940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_419410:
    // 0x419410: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x419410u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_419414:
    // 0x419414: 0x10a30060  beq         $a1, $v1, . + 4 + (0x60 << 2)
label_419418:
    if (ctx->pc == 0x419418u) {
        ctx->pc = 0x419418u;
            // 0x419418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x41941Cu;
        goto label_41941c;
    }
    ctx->pc = 0x419414u;
    {
        const bool branch_taken_0x419414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x419418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419414u;
            // 0x419418: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419414) {
            ctx->pc = 0x419598u;
            goto label_419598;
        }
    }
    ctx->pc = 0x41941Cu;
label_41941c:
    // 0x41941c: 0x50a00059  beql        $a1, $zero, . + 4 + (0x59 << 2)
label_419420:
    if (ctx->pc == 0x419420u) {
        ctx->pc = 0x419420u;
            // 0x419420: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x419424u;
        goto label_419424;
    }
    ctx->pc = 0x41941Cu;
    {
        const bool branch_taken_0x41941c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x41941c) {
            ctx->pc = 0x419420u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x41941Cu;
            // 0x419420: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x419584u;
            goto label_419584;
        }
    }
    ctx->pc = 0x419424u;
label_419424:
    // 0x419424: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x419424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_419428:
    // 0x419428: 0x10a30014  beq         $a1, $v1, . + 4 + (0x14 << 2)
label_41942c:
    if (ctx->pc == 0x41942Cu) {
        ctx->pc = 0x419430u;
        goto label_419430;
    }
    ctx->pc = 0x419428u;
    {
        const bool branch_taken_0x419428 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419428) {
            ctx->pc = 0x41947Cu;
            goto label_41947c;
        }
    }
    ctx->pc = 0x419430u;
label_419430:
    // 0x419430: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x419430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_419434:
    // 0x419434: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_419438:
    if (ctx->pc == 0x419438u) {
        ctx->pc = 0x41943Cu;
        goto label_41943c;
    }
    ctx->pc = 0x419434u;
    {
        const bool branch_taken_0x419434 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x419434) {
            ctx->pc = 0x419444u;
            goto label_419444;
        }
    }
    ctx->pc = 0x41943Cu;
label_41943c:
    // 0x41943c: 0x1000005c  b           . + 4 + (0x5C << 2)
label_419440:
    if (ctx->pc == 0x419440u) {
        ctx->pc = 0x419440u;
            // 0x419440: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x419444u;
        goto label_419444;
    }
    ctx->pc = 0x41943Cu;
    {
        const bool branch_taken_0x41943c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41943Cu;
            // 0x419440: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41943c) {
            ctx->pc = 0x4195B0u;
            goto label_4195b0;
        }
    }
    ctx->pc = 0x419444u;
label_419444:
    // 0x419444: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x419444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_419448:
    // 0x419448: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x419448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_41944c:
    // 0x41944c: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x41944cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_419450:
    // 0x419450: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x419450u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_419454:
    // 0x419454: 0xc4620018  lwc1        $f2, 0x18($v1)
    ctx->pc = 0x419454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_419458:
    // 0x419458: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x419458u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_41945c:
    // 0x41945c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x41945cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419460:
    // 0x419460: 0x45000052  bc1f        . + 4 + (0x52 << 2)
label_419464:
    if (ctx->pc == 0x419464u) {
        ctx->pc = 0x419464u;
            // 0x419464: 0xe6010068  swc1        $f1, 0x68($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->pc = 0x419468u;
        goto label_419468;
    }
    ctx->pc = 0x419460u;
    {
        const bool branch_taken_0x419460 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x419464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419460u;
            // 0x419464: 0xe6010068  swc1        $f1, 0x68($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419460) {
            ctx->pc = 0x4195ACu;
            goto label_4195ac;
        }
    }
    ctx->pc = 0x419468u;
label_419468:
    // 0x419468: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x419468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_41946c:
    // 0x41946c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x41946cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_419470:
    // 0x419470: 0x320f809  jalr        $t9
label_419474:
    if (ctx->pc == 0x419474u) {
        ctx->pc = 0x419478u;
        goto label_419478;
    }
    ctx->pc = 0x419470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419478u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x419478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419478u; }
            if (ctx->pc != 0x419478u) { return; }
        }
        }
    }
    ctx->pc = 0x419478u;
label_419478:
    // 0x419478: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x419478u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_41947c:
    // 0x41947c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x41947cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_419480:
    // 0x419480: 0x3c053e80  lui         $a1, 0x3E80
    ctx->pc = 0x419480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16000 << 16));
label_419484:
    // 0x419484: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x419484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_419488:
    // 0x419488: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x419488u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_41948c:
    // 0x41948c: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x41948cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_419490:
    // 0x419490: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x419490u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_419494:
    // 0x419494: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x419494u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419498:
    // 0x419498: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x419498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_41949c:
    // 0x41949c: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x41949cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4194a0:
    // 0x4194a0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4194a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4194a4:
    // 0x4194a4: 0xc466fde0  lwc1        $f6, -0x220($v1)
    ctx->pc = 0x4194a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_4194a8:
    // 0x4194a8: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x4194a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_4194ac:
    // 0x4194ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4194acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_4194b0:
    // 0x4194b0: 0x3c04bf80  lui         $a0, 0xBF80
    ctx->pc = 0x4194b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49024 << 16));
label_4194b4:
    // 0x4194b4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4194b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4194b8:
    // 0x4194b8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4194b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4194bc:
    // 0x4194bc: 0x0  nop
    ctx->pc = 0x4194bcu;
    // NOP
label_4194c0:
    // 0x4194c0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x4194c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_4194c4:
    // 0x4194c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x4194c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_4194c8:
    // 0x4194c8: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x4194c8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_4194cc:
    // 0x4194cc: 0x8c668a08  lw          $a2, -0x75F8($v1)
    ctx->pc = 0x4194ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_4194d0:
    // 0x4194d0: 0xc4e0006c  lwc1        $f0, 0x6C($a3)
    ctx->pc = 0x4194d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4194d4:
    // 0x4194d4: 0x24e8006c  addiu       $t0, $a3, 0x6C
    ctx->pc = 0x4194d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 108));
label_4194d8:
    // 0x4194d8: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x4194d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4194dc:
    // 0x4194dc: 0xc4c50018  lwc1        $f5, 0x18($a2)
    ctx->pc = 0x4194dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_4194e0:
    // 0x4194e0: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x4194e0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_4194e4:
    // 0x4194e4: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x4194e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4194e8:
    // 0x4194e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_4194ec:
    if (ctx->pc == 0x4194ECu) {
        ctx->pc = 0x4194ECu;
            // 0x4194ec: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->pc = 0x4194F0u;
        goto label_4194f0;
    }
    ctx->pc = 0x4194E8u;
    {
        const bool branch_taken_0x4194e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4194ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4194E8u;
            // 0x4194ec: 0xe4e0006c  swc1        $f0, 0x6C($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 108), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4194e8) {
            ctx->pc = 0x4194F4u;
            goto label_4194f4;
        }
    }
    ctx->pc = 0x4194F0u;
label_4194f0:
    // 0x4194f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4194f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4194f4:
    // 0x4194f4: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x4194f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
label_4194f8:
    // 0x4194f8: 0x54800009  bnel        $a0, $zero, . + 4 + (0x9 << 2)
label_4194fc:
    if (ctx->pc == 0x4194FCu) {
        ctx->pc = 0x4194FCu;
            // 0x4194fc: 0xc6000054  lwc1        $f0, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x419500u;
        goto label_419500;
    }
    ctx->pc = 0x4194F8u;
    {
        const bool branch_taken_0x4194f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4194f8) {
            ctx->pc = 0x4194FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4194F8u;
            // 0x4194fc: 0xc6000054  lwc1        $f0, 0x54($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x419520u;
            goto label_419520;
        }
    }
    ctx->pc = 0x419500u;
label_419500:
    // 0x419500: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x419500u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
label_419504:
    // 0x419504: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x419504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_419508:
    // 0x419508: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x419508u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_41950c:
    // 0x41950c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x41950cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_419510:
    // 0x419510: 0x320f809  jalr        $t9
label_419514:
    if (ctx->pc == 0x419514u) {
        ctx->pc = 0x419514u;
            // 0x419514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x419518u;
        goto label_419518;
    }
    ctx->pc = 0x419510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419518u);
        ctx->pc = 0x419514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419510u;
            // 0x419514: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x419518u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419518u; }
            if (ctx->pc != 0x419518u) { return; }
        }
        }
    }
    ctx->pc = 0x419518u;
label_419518:
    // 0x419518: 0x10000011  b           . + 4 + (0x11 << 2)
label_41951c:
    if (ctx->pc == 0x41951Cu) {
        ctx->pc = 0x419520u;
        goto label_419520;
    }
    ctx->pc = 0x419518u;
    {
        const bool branch_taken_0x419518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419518) {
            ctx->pc = 0x419560u;
            goto label_419560;
        }
    }
    ctx->pc = 0x419520u;
label_419520:
    // 0x419520: 0x46060036  c.le.s      $f0, $f6
    ctx->pc = 0x419520u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419524:
    // 0x419524: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_419528:
    if (ctx->pc == 0x419528u) {
        ctx->pc = 0x41952Cu;
        goto label_41952c;
    }
    ctx->pc = 0x419524u;
    {
        const bool branch_taken_0x419524 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x419524) {
            ctx->pc = 0x419548u;
            goto label_419548;
        }
    }
    ctx->pc = 0x41952Cu;
label_41952c:
    // 0x41952c: 0xc5000008  lwc1        $f0, 0x8($t0)
    ctx->pc = 0x41952cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_419530:
    // 0x419530: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x419530u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_419534:
    // 0x419534: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x419534u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419538:
    // 0x419538: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_41953c:
    if (ctx->pc == 0x41953Cu) {
        ctx->pc = 0x41953Cu;
            // 0x41953c: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->pc = 0x419540u;
        goto label_419540;
    }
    ctx->pc = 0x419538u;
    {
        const bool branch_taken_0x419538 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x41953Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419538u;
            // 0x41953c: 0xe5000008  swc1        $f0, 0x8($t0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x419538) {
            ctx->pc = 0x419548u;
            goto label_419548;
        }
    }
    ctx->pc = 0x419540u;
label_419540:
    // 0x419540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x419540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_419544:
    // 0x419544: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x419544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_419548:
    // 0x419548: 0x86040060  lh          $a0, 0x60($s0)
    ctx->pc = 0x419548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
label_41954c:
    // 0x41954c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x41954cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_419550:
    // 0x419550: 0x124202a  slt         $a0, $t1, $a0
    ctx->pc = 0x419550u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_419554:
    // 0x419554: 0x1480ffdd  bnez        $a0, . + 4 + (-0x23 << 2)
label_419558:
    if (ctx->pc == 0x419558u) {
        ctx->pc = 0x419558u;
            // 0x419558: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->pc = 0x41955Cu;
        goto label_41955c;
    }
    ctx->pc = 0x419554u;
    {
        const bool branch_taken_0x419554 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x419558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x419554u;
            // 0x419558: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x419554) {
            ctx->pc = 0x4194CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4194cc;
        }
    }
    ctx->pc = 0x41955Cu;
label_41955c:
    // 0x41955c: 0x0  nop
    ctx->pc = 0x41955cu;
    // NOP
label_419560:
    // 0x419560: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x419560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_419564:
    // 0x419564: 0xc461fde0  lwc1        $f1, -0x220($v1)
    ctx->pc = 0x419564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294966752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_419568:
    // 0x419568: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x419568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_41956c:
    // 0x41956c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x41956cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_419570:
    // 0x419570: 0x4501000e  bc1t        . + 4 + (0xE << 2)
label_419574:
    if (ctx->pc == 0x419574u) {
        ctx->pc = 0x419578u;
        goto label_419578;
    }
    ctx->pc = 0x419570u;
    {
        const bool branch_taken_0x419570 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x419570) {
            ctx->pc = 0x4195ACu;
            goto label_4195ac;
        }
    }
    ctx->pc = 0x419578u;
label_419578:
    // 0x419578: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x419578u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_41957c:
    // 0x41957c: 0x1000000b  b           . + 4 + (0xB << 2)
label_419580:
    if (ctx->pc == 0x419580u) {
        ctx->pc = 0x419580u;
            // 0x419580: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->pc = 0x419584u;
        goto label_419584;
    }
    ctx->pc = 0x41957Cu;
    {
        const bool branch_taken_0x41957c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x419580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x41957Cu;
            // 0x419580: 0xe6000054  swc1        $f0, 0x54($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x41957c) {
            ctx->pc = 0x4195ACu;
            goto label_4195ac;
        }
    }
    ctx->pc = 0x419584u;
label_419584:
    // 0x419584: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x419584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_419588:
    // 0x419588: 0x320f809  jalr        $t9
label_41958c:
    if (ctx->pc == 0x41958Cu) {
        ctx->pc = 0x419590u;
        goto label_419590;
    }
    ctx->pc = 0x419588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x419590u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x419590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x419590u; }
            if (ctx->pc != 0x419590u) { return; }
        }
        }
    }
    ctx->pc = 0x419590u;
label_419590:
    // 0x419590: 0x10000006  b           . + 4 + (0x6 << 2)
label_419594:
    if (ctx->pc == 0x419594u) {
        ctx->pc = 0x419598u;
        goto label_419598;
    }
    ctx->pc = 0x419590u;
    {
        const bool branch_taken_0x419590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x419590) {
            ctx->pc = 0x4195ACu;
            goto label_4195ac;
        }
    }
    ctx->pc = 0x419598u;
label_419598:
    // 0x419598: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x419598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_41959c:
    // 0x41959c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x41959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4195a0:
    // 0x4195a0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4195a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4195a4:
    // 0x4195a4: 0xc057b7c  jal         func_15EDF0
label_4195a8:
    if (ctx->pc == 0x4195A8u) {
        ctx->pc = 0x4195A8u;
            // 0x4195a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4195ACu;
        goto label_4195ac;
    }
    ctx->pc = 0x4195A4u;
    SET_GPR_U32(ctx, 31, 0x4195ACu);
    ctx->pc = 0x4195A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4195A4u;
            // 0x4195a8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4195ACu; }
        if (ctx->pc != 0x4195ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4195ACu; }
        if (ctx->pc != 0x4195ACu) { return; }
    }
    ctx->pc = 0x4195ACu;
label_4195ac:
    // 0x4195ac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4195acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4195b0:
    // 0x4195b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4195b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4195b4:
    // 0x4195b4: 0x3e00008  jr          $ra
label_4195b8:
    if (ctx->pc == 0x4195B8u) {
        ctx->pc = 0x4195B8u;
            // 0x4195b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4195BCu;
        goto label_4195bc;
    }
    ctx->pc = 0x4195B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4195B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4195B4u;
            // 0x4195b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4195BCu;
label_4195bc:
    // 0x4195bc: 0x0  nop
    ctx->pc = 0x4195bcu;
    // NOP
}
