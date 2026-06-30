#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00220950
// Address: 0x220950 - 0x221200
void sub_00220950_0x220950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00220950_0x220950");
#endif

    switch (ctx->pc) {
        case 0x220950u: goto label_220950;
        case 0x220954u: goto label_220954;
        case 0x220958u: goto label_220958;
        case 0x22095cu: goto label_22095c;
        case 0x220960u: goto label_220960;
        case 0x220964u: goto label_220964;
        case 0x220968u: goto label_220968;
        case 0x22096cu: goto label_22096c;
        case 0x220970u: goto label_220970;
        case 0x220974u: goto label_220974;
        case 0x220978u: goto label_220978;
        case 0x22097cu: goto label_22097c;
        case 0x220980u: goto label_220980;
        case 0x220984u: goto label_220984;
        case 0x220988u: goto label_220988;
        case 0x22098cu: goto label_22098c;
        case 0x220990u: goto label_220990;
        case 0x220994u: goto label_220994;
        case 0x220998u: goto label_220998;
        case 0x22099cu: goto label_22099c;
        case 0x2209a0u: goto label_2209a0;
        case 0x2209a4u: goto label_2209a4;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209acu: goto label_2209ac;
        case 0x2209b0u: goto label_2209b0;
        case 0x2209b4u: goto label_2209b4;
        case 0x2209b8u: goto label_2209b8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209c0u: goto label_2209c0;
        case 0x2209c4u: goto label_2209c4;
        case 0x2209c8u: goto label_2209c8;
        case 0x2209ccu: goto label_2209cc;
        case 0x2209d0u: goto label_2209d0;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209d8u: goto label_2209d8;
        case 0x2209dcu: goto label_2209dc;
        case 0x2209e0u: goto label_2209e0;
        case 0x2209e4u: goto label_2209e4;
        case 0x2209e8u: goto label_2209e8;
        case 0x2209ecu: goto label_2209ec;
        case 0x2209f0u: goto label_2209f0;
        case 0x2209f4u: goto label_2209f4;
        case 0x2209f8u: goto label_2209f8;
        case 0x2209fcu: goto label_2209fc;
        case 0x220a00u: goto label_220a00;
        case 0x220a04u: goto label_220a04;
        case 0x220a08u: goto label_220a08;
        case 0x220a0cu: goto label_220a0c;
        case 0x220a10u: goto label_220a10;
        case 0x220a14u: goto label_220a14;
        case 0x220a18u: goto label_220a18;
        case 0x220a1cu: goto label_220a1c;
        case 0x220a20u: goto label_220a20;
        case 0x220a24u: goto label_220a24;
        case 0x220a28u: goto label_220a28;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a30u: goto label_220a30;
        case 0x220a34u: goto label_220a34;
        case 0x220a38u: goto label_220a38;
        case 0x220a3cu: goto label_220a3c;
        case 0x220a40u: goto label_220a40;
        case 0x220a44u: goto label_220a44;
        case 0x220a48u: goto label_220a48;
        case 0x220a4cu: goto label_220a4c;
        case 0x220a50u: goto label_220a50;
        case 0x220a54u: goto label_220a54;
        case 0x220a58u: goto label_220a58;
        case 0x220a5cu: goto label_220a5c;
        case 0x220a60u: goto label_220a60;
        case 0x220a64u: goto label_220a64;
        case 0x220a68u: goto label_220a68;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a70u: goto label_220a70;
        case 0x220a74u: goto label_220a74;
        case 0x220a78u: goto label_220a78;
        case 0x220a7cu: goto label_220a7c;
        case 0x220a80u: goto label_220a80;
        case 0x220a84u: goto label_220a84;
        case 0x220a88u: goto label_220a88;
        case 0x220a8cu: goto label_220a8c;
        case 0x220a90u: goto label_220a90;
        case 0x220a94u: goto label_220a94;
        case 0x220a98u: goto label_220a98;
        case 0x220a9cu: goto label_220a9c;
        case 0x220aa0u: goto label_220aa0;
        case 0x220aa4u: goto label_220aa4;
        case 0x220aa8u: goto label_220aa8;
        case 0x220aacu: goto label_220aac;
        case 0x220ab0u: goto label_220ab0;
        case 0x220ab4u: goto label_220ab4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220abcu: goto label_220abc;
        case 0x220ac0u: goto label_220ac0;
        case 0x220ac4u: goto label_220ac4;
        case 0x220ac8u: goto label_220ac8;
        case 0x220accu: goto label_220acc;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ad4u: goto label_220ad4;
        case 0x220ad8u: goto label_220ad8;
        case 0x220adcu: goto label_220adc;
        case 0x220ae0u: goto label_220ae0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220ae8u: goto label_220ae8;
        case 0x220aecu: goto label_220aec;
        case 0x220af0u: goto label_220af0;
        case 0x220af4u: goto label_220af4;
        case 0x220af8u: goto label_220af8;
        case 0x220afcu: goto label_220afc;
        case 0x220b00u: goto label_220b00;
        case 0x220b04u: goto label_220b04;
        case 0x220b08u: goto label_220b08;
        case 0x220b0cu: goto label_220b0c;
        case 0x220b10u: goto label_220b10;
        case 0x220b14u: goto label_220b14;
        case 0x220b18u: goto label_220b18;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b20u: goto label_220b20;
        case 0x220b24u: goto label_220b24;
        case 0x220b28u: goto label_220b28;
        case 0x220b2cu: goto label_220b2c;
        case 0x220b30u: goto label_220b30;
        case 0x220b34u: goto label_220b34;
        case 0x220b38u: goto label_220b38;
        case 0x220b3cu: goto label_220b3c;
        case 0x220b40u: goto label_220b40;
        case 0x220b44u: goto label_220b44;
        case 0x220b48u: goto label_220b48;
        case 0x220b4cu: goto label_220b4c;
        case 0x220b50u: goto label_220b50;
        case 0x220b54u: goto label_220b54;
        case 0x220b58u: goto label_220b58;
        case 0x220b5cu: goto label_220b5c;
        case 0x220b60u: goto label_220b60;
        case 0x220b64u: goto label_220b64;
        case 0x220b68u: goto label_220b68;
        case 0x220b6cu: goto label_220b6c;
        case 0x220b70u: goto label_220b70;
        case 0x220b74u: goto label_220b74;
        case 0x220b78u: goto label_220b78;
        case 0x220b7cu: goto label_220b7c;
        case 0x220b80u: goto label_220b80;
        case 0x220b84u: goto label_220b84;
        case 0x220b88u: goto label_220b88;
        case 0x220b8cu: goto label_220b8c;
        case 0x220b90u: goto label_220b90;
        case 0x220b94u: goto label_220b94;
        case 0x220b98u: goto label_220b98;
        case 0x220b9cu: goto label_220b9c;
        case 0x220ba0u: goto label_220ba0;
        case 0x220ba4u: goto label_220ba4;
        case 0x220ba8u: goto label_220ba8;
        case 0x220bacu: goto label_220bac;
        case 0x220bb0u: goto label_220bb0;
        case 0x220bb4u: goto label_220bb4;
        case 0x220bb8u: goto label_220bb8;
        case 0x220bbcu: goto label_220bbc;
        case 0x220bc0u: goto label_220bc0;
        case 0x220bc4u: goto label_220bc4;
        case 0x220bc8u: goto label_220bc8;
        case 0x220bccu: goto label_220bcc;
        case 0x220bd0u: goto label_220bd0;
        case 0x220bd4u: goto label_220bd4;
        case 0x220bd8u: goto label_220bd8;
        case 0x220bdcu: goto label_220bdc;
        case 0x220be0u: goto label_220be0;
        case 0x220be4u: goto label_220be4;
        case 0x220be8u: goto label_220be8;
        case 0x220becu: goto label_220bec;
        case 0x220bf0u: goto label_220bf0;
        case 0x220bf4u: goto label_220bf4;
        case 0x220bf8u: goto label_220bf8;
        case 0x220bfcu: goto label_220bfc;
        case 0x220c00u: goto label_220c00;
        case 0x220c04u: goto label_220c04;
        case 0x220c08u: goto label_220c08;
        case 0x220c0cu: goto label_220c0c;
        case 0x220c10u: goto label_220c10;
        case 0x220c14u: goto label_220c14;
        case 0x220c18u: goto label_220c18;
        case 0x220c1cu: goto label_220c1c;
        case 0x220c20u: goto label_220c20;
        case 0x220c24u: goto label_220c24;
        case 0x220c28u: goto label_220c28;
        case 0x220c2cu: goto label_220c2c;
        case 0x220c30u: goto label_220c30;
        case 0x220c34u: goto label_220c34;
        case 0x220c38u: goto label_220c38;
        case 0x220c3cu: goto label_220c3c;
        case 0x220c40u: goto label_220c40;
        case 0x220c44u: goto label_220c44;
        case 0x220c48u: goto label_220c48;
        case 0x220c4cu: goto label_220c4c;
        case 0x220c50u: goto label_220c50;
        case 0x220c54u: goto label_220c54;
        case 0x220c58u: goto label_220c58;
        case 0x220c5cu: goto label_220c5c;
        case 0x220c60u: goto label_220c60;
        case 0x220c64u: goto label_220c64;
        case 0x220c68u: goto label_220c68;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c70u: goto label_220c70;
        case 0x220c74u: goto label_220c74;
        case 0x220c78u: goto label_220c78;
        case 0x220c7cu: goto label_220c7c;
        case 0x220c80u: goto label_220c80;
        case 0x220c84u: goto label_220c84;
        case 0x220c88u: goto label_220c88;
        case 0x220c8cu: goto label_220c8c;
        case 0x220c90u: goto label_220c90;
        case 0x220c94u: goto label_220c94;
        case 0x220c98u: goto label_220c98;
        case 0x220c9cu: goto label_220c9c;
        case 0x220ca0u: goto label_220ca0;
        case 0x220ca4u: goto label_220ca4;
        case 0x220ca8u: goto label_220ca8;
        case 0x220cacu: goto label_220cac;
        case 0x220cb0u: goto label_220cb0;
        case 0x220cb4u: goto label_220cb4;
        case 0x220cb8u: goto label_220cb8;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cc0u: goto label_220cc0;
        case 0x220cc4u: goto label_220cc4;
        case 0x220cc8u: goto label_220cc8;
        case 0x220cccu: goto label_220ccc;
        case 0x220cd0u: goto label_220cd0;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cd8u: goto label_220cd8;
        case 0x220cdcu: goto label_220cdc;
        case 0x220ce0u: goto label_220ce0;
        case 0x220ce4u: goto label_220ce4;
        case 0x220ce8u: goto label_220ce8;
        case 0x220cecu: goto label_220cec;
        case 0x220cf0u: goto label_220cf0;
        case 0x220cf4u: goto label_220cf4;
        case 0x220cf8u: goto label_220cf8;
        case 0x220cfcu: goto label_220cfc;
        case 0x220d00u: goto label_220d00;
        case 0x220d04u: goto label_220d04;
        case 0x220d08u: goto label_220d08;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d10u: goto label_220d10;
        case 0x220d14u: goto label_220d14;
        case 0x220d18u: goto label_220d18;
        case 0x220d1cu: goto label_220d1c;
        case 0x220d20u: goto label_220d20;
        case 0x220d24u: goto label_220d24;
        case 0x220d28u: goto label_220d28;
        case 0x220d2cu: goto label_220d2c;
        case 0x220d30u: goto label_220d30;
        case 0x220d34u: goto label_220d34;
        case 0x220d38u: goto label_220d38;
        case 0x220d3cu: goto label_220d3c;
        case 0x220d40u: goto label_220d40;
        case 0x220d44u: goto label_220d44;
        case 0x220d48u: goto label_220d48;
        case 0x220d4cu: goto label_220d4c;
        case 0x220d50u: goto label_220d50;
        case 0x220d54u: goto label_220d54;
        case 0x220d58u: goto label_220d58;
        case 0x220d5cu: goto label_220d5c;
        case 0x220d60u: goto label_220d60;
        case 0x220d64u: goto label_220d64;
        case 0x220d68u: goto label_220d68;
        case 0x220d6cu: goto label_220d6c;
        case 0x220d70u: goto label_220d70;
        case 0x220d74u: goto label_220d74;
        case 0x220d78u: goto label_220d78;
        case 0x220d7cu: goto label_220d7c;
        case 0x220d80u: goto label_220d80;
        case 0x220d84u: goto label_220d84;
        case 0x220d88u: goto label_220d88;
        case 0x220d8cu: goto label_220d8c;
        case 0x220d90u: goto label_220d90;
        case 0x220d94u: goto label_220d94;
        case 0x220d98u: goto label_220d98;
        case 0x220d9cu: goto label_220d9c;
        case 0x220da0u: goto label_220da0;
        case 0x220da4u: goto label_220da4;
        case 0x220da8u: goto label_220da8;
        case 0x220dacu: goto label_220dac;
        case 0x220db0u: goto label_220db0;
        case 0x220db4u: goto label_220db4;
        case 0x220db8u: goto label_220db8;
        case 0x220dbcu: goto label_220dbc;
        case 0x220dc0u: goto label_220dc0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220dc8u: goto label_220dc8;
        case 0x220dccu: goto label_220dcc;
        case 0x220dd0u: goto label_220dd0;
        case 0x220dd4u: goto label_220dd4;
        case 0x220dd8u: goto label_220dd8;
        case 0x220ddcu: goto label_220ddc;
        case 0x220de0u: goto label_220de0;
        case 0x220de4u: goto label_220de4;
        case 0x220de8u: goto label_220de8;
        case 0x220decu: goto label_220dec;
        case 0x220df0u: goto label_220df0;
        case 0x220df4u: goto label_220df4;
        case 0x220df8u: goto label_220df8;
        case 0x220dfcu: goto label_220dfc;
        case 0x220e00u: goto label_220e00;
        case 0x220e04u: goto label_220e04;
        case 0x220e08u: goto label_220e08;
        case 0x220e0cu: goto label_220e0c;
        case 0x220e10u: goto label_220e10;
        case 0x220e14u: goto label_220e14;
        case 0x220e18u: goto label_220e18;
        case 0x220e1cu: goto label_220e1c;
        case 0x220e20u: goto label_220e20;
        case 0x220e24u: goto label_220e24;
        case 0x220e28u: goto label_220e28;
        case 0x220e2cu: goto label_220e2c;
        case 0x220e30u: goto label_220e30;
        case 0x220e34u: goto label_220e34;
        case 0x220e38u: goto label_220e38;
        case 0x220e3cu: goto label_220e3c;
        case 0x220e40u: goto label_220e40;
        case 0x220e44u: goto label_220e44;
        case 0x220e48u: goto label_220e48;
        case 0x220e4cu: goto label_220e4c;
        case 0x220e50u: goto label_220e50;
        case 0x220e54u: goto label_220e54;
        case 0x220e58u: goto label_220e58;
        case 0x220e5cu: goto label_220e5c;
        case 0x220e60u: goto label_220e60;
        case 0x220e64u: goto label_220e64;
        case 0x220e68u: goto label_220e68;
        case 0x220e6cu: goto label_220e6c;
        case 0x220e70u: goto label_220e70;
        case 0x220e74u: goto label_220e74;
        case 0x220e78u: goto label_220e78;
        case 0x220e7cu: goto label_220e7c;
        case 0x220e80u: goto label_220e80;
        case 0x220e84u: goto label_220e84;
        case 0x220e88u: goto label_220e88;
        case 0x220e8cu: goto label_220e8c;
        case 0x220e90u: goto label_220e90;
        case 0x220e94u: goto label_220e94;
        case 0x220e98u: goto label_220e98;
        case 0x220e9cu: goto label_220e9c;
        case 0x220ea0u: goto label_220ea0;
        case 0x220ea4u: goto label_220ea4;
        case 0x220ea8u: goto label_220ea8;
        case 0x220eacu: goto label_220eac;
        case 0x220eb0u: goto label_220eb0;
        case 0x220eb4u: goto label_220eb4;
        case 0x220eb8u: goto label_220eb8;
        case 0x220ebcu: goto label_220ebc;
        case 0x220ec0u: goto label_220ec0;
        case 0x220ec4u: goto label_220ec4;
        case 0x220ec8u: goto label_220ec8;
        case 0x220eccu: goto label_220ecc;
        case 0x220ed0u: goto label_220ed0;
        case 0x220ed4u: goto label_220ed4;
        case 0x220ed8u: goto label_220ed8;
        case 0x220edcu: goto label_220edc;
        case 0x220ee0u: goto label_220ee0;
        case 0x220ee4u: goto label_220ee4;
        case 0x220ee8u: goto label_220ee8;
        case 0x220eecu: goto label_220eec;
        case 0x220ef0u: goto label_220ef0;
        case 0x220ef4u: goto label_220ef4;
        case 0x220ef8u: goto label_220ef8;
        case 0x220efcu: goto label_220efc;
        case 0x220f00u: goto label_220f00;
        case 0x220f04u: goto label_220f04;
        case 0x220f08u: goto label_220f08;
        case 0x220f0cu: goto label_220f0c;
        case 0x220f10u: goto label_220f10;
        case 0x220f14u: goto label_220f14;
        case 0x220f18u: goto label_220f18;
        case 0x220f1cu: goto label_220f1c;
        case 0x220f20u: goto label_220f20;
        case 0x220f24u: goto label_220f24;
        case 0x220f28u: goto label_220f28;
        case 0x220f2cu: goto label_220f2c;
        case 0x220f30u: goto label_220f30;
        case 0x220f34u: goto label_220f34;
        case 0x220f38u: goto label_220f38;
        case 0x220f3cu: goto label_220f3c;
        case 0x220f40u: goto label_220f40;
        case 0x220f44u: goto label_220f44;
        case 0x220f48u: goto label_220f48;
        case 0x220f4cu: goto label_220f4c;
        case 0x220f50u: goto label_220f50;
        case 0x220f54u: goto label_220f54;
        case 0x220f58u: goto label_220f58;
        case 0x220f5cu: goto label_220f5c;
        case 0x220f60u: goto label_220f60;
        case 0x220f64u: goto label_220f64;
        case 0x220f68u: goto label_220f68;
        case 0x220f6cu: goto label_220f6c;
        case 0x220f70u: goto label_220f70;
        case 0x220f74u: goto label_220f74;
        case 0x220f78u: goto label_220f78;
        case 0x220f7cu: goto label_220f7c;
        case 0x220f80u: goto label_220f80;
        case 0x220f84u: goto label_220f84;
        case 0x220f88u: goto label_220f88;
        case 0x220f8cu: goto label_220f8c;
        case 0x220f90u: goto label_220f90;
        case 0x220f94u: goto label_220f94;
        case 0x220f98u: goto label_220f98;
        case 0x220f9cu: goto label_220f9c;
        case 0x220fa0u: goto label_220fa0;
        case 0x220fa4u: goto label_220fa4;
        case 0x220fa8u: goto label_220fa8;
        case 0x220facu: goto label_220fac;
        case 0x220fb0u: goto label_220fb0;
        case 0x220fb4u: goto label_220fb4;
        case 0x220fb8u: goto label_220fb8;
        case 0x220fbcu: goto label_220fbc;
        case 0x220fc0u: goto label_220fc0;
        case 0x220fc4u: goto label_220fc4;
        case 0x220fc8u: goto label_220fc8;
        case 0x220fccu: goto label_220fcc;
        case 0x220fd0u: goto label_220fd0;
        case 0x220fd4u: goto label_220fd4;
        case 0x220fd8u: goto label_220fd8;
        case 0x220fdcu: goto label_220fdc;
        case 0x220fe0u: goto label_220fe0;
        case 0x220fe4u: goto label_220fe4;
        case 0x220fe8u: goto label_220fe8;
        case 0x220fecu: goto label_220fec;
        case 0x220ff0u: goto label_220ff0;
        case 0x220ff4u: goto label_220ff4;
        case 0x220ff8u: goto label_220ff8;
        case 0x220ffcu: goto label_220ffc;
        case 0x221000u: goto label_221000;
        case 0x221004u: goto label_221004;
        case 0x221008u: goto label_221008;
        case 0x22100cu: goto label_22100c;
        case 0x221010u: goto label_221010;
        case 0x221014u: goto label_221014;
        case 0x221018u: goto label_221018;
        case 0x22101cu: goto label_22101c;
        case 0x221020u: goto label_221020;
        case 0x221024u: goto label_221024;
        case 0x221028u: goto label_221028;
        case 0x22102cu: goto label_22102c;
        case 0x221030u: goto label_221030;
        case 0x221034u: goto label_221034;
        case 0x221038u: goto label_221038;
        case 0x22103cu: goto label_22103c;
        case 0x221040u: goto label_221040;
        case 0x221044u: goto label_221044;
        case 0x221048u: goto label_221048;
        case 0x22104cu: goto label_22104c;
        case 0x221050u: goto label_221050;
        case 0x221054u: goto label_221054;
        case 0x221058u: goto label_221058;
        case 0x22105cu: goto label_22105c;
        case 0x221060u: goto label_221060;
        case 0x221064u: goto label_221064;
        case 0x221068u: goto label_221068;
        case 0x22106cu: goto label_22106c;
        case 0x221070u: goto label_221070;
        case 0x221074u: goto label_221074;
        case 0x221078u: goto label_221078;
        case 0x22107cu: goto label_22107c;
        case 0x221080u: goto label_221080;
        case 0x221084u: goto label_221084;
        case 0x221088u: goto label_221088;
        case 0x22108cu: goto label_22108c;
        case 0x221090u: goto label_221090;
        case 0x221094u: goto label_221094;
        case 0x221098u: goto label_221098;
        case 0x22109cu: goto label_22109c;
        case 0x2210a0u: goto label_2210a0;
        case 0x2210a4u: goto label_2210a4;
        case 0x2210a8u: goto label_2210a8;
        case 0x2210acu: goto label_2210ac;
        case 0x2210b0u: goto label_2210b0;
        case 0x2210b4u: goto label_2210b4;
        case 0x2210b8u: goto label_2210b8;
        case 0x2210bcu: goto label_2210bc;
        case 0x2210c0u: goto label_2210c0;
        case 0x2210c4u: goto label_2210c4;
        case 0x2210c8u: goto label_2210c8;
        case 0x2210ccu: goto label_2210cc;
        case 0x2210d0u: goto label_2210d0;
        case 0x2210d4u: goto label_2210d4;
        case 0x2210d8u: goto label_2210d8;
        case 0x2210dcu: goto label_2210dc;
        case 0x2210e0u: goto label_2210e0;
        case 0x2210e4u: goto label_2210e4;
        case 0x2210e8u: goto label_2210e8;
        case 0x2210ecu: goto label_2210ec;
        case 0x2210f0u: goto label_2210f0;
        case 0x2210f4u: goto label_2210f4;
        case 0x2210f8u: goto label_2210f8;
        case 0x2210fcu: goto label_2210fc;
        case 0x221100u: goto label_221100;
        case 0x221104u: goto label_221104;
        case 0x221108u: goto label_221108;
        case 0x22110cu: goto label_22110c;
        case 0x221110u: goto label_221110;
        case 0x221114u: goto label_221114;
        case 0x221118u: goto label_221118;
        case 0x22111cu: goto label_22111c;
        case 0x221120u: goto label_221120;
        case 0x221124u: goto label_221124;
        case 0x221128u: goto label_221128;
        case 0x22112cu: goto label_22112c;
        case 0x221130u: goto label_221130;
        case 0x221134u: goto label_221134;
        case 0x221138u: goto label_221138;
        case 0x22113cu: goto label_22113c;
        case 0x221140u: goto label_221140;
        case 0x221144u: goto label_221144;
        case 0x221148u: goto label_221148;
        case 0x22114cu: goto label_22114c;
        case 0x221150u: goto label_221150;
        case 0x221154u: goto label_221154;
        case 0x221158u: goto label_221158;
        case 0x22115cu: goto label_22115c;
        case 0x221160u: goto label_221160;
        case 0x221164u: goto label_221164;
        case 0x221168u: goto label_221168;
        case 0x22116cu: goto label_22116c;
        case 0x221170u: goto label_221170;
        case 0x221174u: goto label_221174;
        case 0x221178u: goto label_221178;
        case 0x22117cu: goto label_22117c;
        case 0x221180u: goto label_221180;
        case 0x221184u: goto label_221184;
        case 0x221188u: goto label_221188;
        case 0x22118cu: goto label_22118c;
        case 0x221190u: goto label_221190;
        case 0x221194u: goto label_221194;
        case 0x221198u: goto label_221198;
        case 0x22119cu: goto label_22119c;
        case 0x2211a0u: goto label_2211a0;
        case 0x2211a4u: goto label_2211a4;
        case 0x2211a8u: goto label_2211a8;
        case 0x2211acu: goto label_2211ac;
        case 0x2211b0u: goto label_2211b0;
        case 0x2211b4u: goto label_2211b4;
        case 0x2211b8u: goto label_2211b8;
        case 0x2211bcu: goto label_2211bc;
        case 0x2211c0u: goto label_2211c0;
        case 0x2211c4u: goto label_2211c4;
        case 0x2211c8u: goto label_2211c8;
        case 0x2211ccu: goto label_2211cc;
        case 0x2211d0u: goto label_2211d0;
        case 0x2211d4u: goto label_2211d4;
        case 0x2211d8u: goto label_2211d8;
        case 0x2211dcu: goto label_2211dc;
        case 0x2211e0u: goto label_2211e0;
        case 0x2211e4u: goto label_2211e4;
        case 0x2211e8u: goto label_2211e8;
        case 0x2211ecu: goto label_2211ec;
        case 0x2211f0u: goto label_2211f0;
        case 0x2211f4u: goto label_2211f4;
        case 0x2211f8u: goto label_2211f8;
        case 0x2211fcu: goto label_2211fc;
        default: break;
    }

    ctx->pc = 0x220950u;

label_220950:
    // 0x220950: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x220950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
label_220954:
    // 0x220954: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x220954u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_220958:
    // 0x220958: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x220958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_22095c:
    // 0x22095c: 0x211c0  sll         $v0, $v0, 7
    ctx->pc = 0x22095cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 7));
label_220960:
    // 0x220960: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x220960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_220964:
    // 0x220964: 0x24420090  addiu       $v0, $v0, 0x90
    ctx->pc = 0x220964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_220968:
    // 0x220968: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x220968u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_22096c:
    // 0x22096c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x22096cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_220970:
    // 0x220970: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x220970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_220974:
    // 0x220974: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x220974u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_220978:
    // 0x220978: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x220978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_22097c:
    // 0x22097c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x22097cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_220980:
    // 0x220980: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x220980u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_220984:
    // 0x220984: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x220984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_220988:
    // 0x220988: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x220988u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22098c:
    // 0x22098c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x22098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_220990:
    // 0x220990: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x220990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_220994:
    // 0x220994: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x220994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_220998:
    // 0x220998: 0x7fa200f0  sq          $v0, 0xF0($sp)
    ctx->pc = 0x220998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
label_22099c:
    // 0x22099c: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2209a0:
    // 0x2209a0: 0xafa4012c  sw          $a0, 0x12C($sp)
    ctx->pc = 0x2209a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 300), GPR_U32(ctx, 4));
label_2209a4:
    // 0x2209a4: 0x8ce40014  lw          $a0, 0x14($a3)
    ctx->pc = 0x2209a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_2209a8:
    // 0x2209a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2209a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2209ac:
    // 0x2209ac: 0x8c66ea28  lw          $a2, -0x15D8($v1)
    ctx->pc = 0x2209acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961704)));
label_2209b0:
    // 0x2209b0: 0x7fa200e0  sq          $v0, 0xE0($sp)
    ctx->pc = 0x2209b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
label_2209b4:
    // 0x2209b4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x2209b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2209b8:
    // 0x2209b8: 0xafa50128  sw          $a1, 0x128($sp)
    ctx->pc = 0x2209b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 296), GPR_U32(ctx, 5));
label_2209bc:
    // 0x2209bc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2209bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2209c0:
    // 0x2209c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2209c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2209c4:
    // 0x2209c4: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x2209c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_2209c8:
    // 0x2209c8: 0x2404fff0  addiu       $a0, $zero, -0x10
    ctx->pc = 0x2209c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2209cc:
    // 0x2209cc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2209ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2209d0:
    // 0x2209d0: 0xa0c50010  sb          $a1, 0x10($a2)
    ctx->pc = 0x2209d0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 5));
label_2209d4:
    // 0x2209d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2209d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2209d8:
    // 0x2209d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2209d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2209dc:
    // 0x2209dc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x2209dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_2209e0:
    // 0x2209e0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2209e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_2209e4:
    // 0x2209e4: 0xafa80124  sw          $t0, 0x124($sp)
    ctx->pc = 0x2209e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 8));
label_2209e8:
    // 0x2209e8: 0xafa90120  sw          $t1, 0x120($sp)
    ctx->pc = 0x2209e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 9));
label_2209ec:
    // 0x2209ec: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x2209ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_2209f0:
    // 0x2209f0: 0x8c62ea28  lw          $v0, -0x15D8($v1)
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961704)));
label_2209f4:
    // 0x2209f4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x2209f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2209f8:
    // 0x2209f8: 0xafa0011c  sw          $zero, 0x11C($sp)
    ctx->pc = 0x2209f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
label_2209fc:
    // 0x2209fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2209fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_220a00:
    // 0x220a00: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x220a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
label_220a04:
    // 0x220a04: 0x72601628  paddub      $v0, $s3, $zero
    ctx->pc = 0x220a04u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
label_220a08:
    // 0x220a08: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x220a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220a0c:
    // 0x220a0c: 0x7ba200f0  lq          $v0, 0xF0($sp)
    ctx->pc = 0x220a0cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_220a10:
    // 0x220a10: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x220a10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220a14:
    // 0x220a14: 0x262b821  addu        $s7, $s3, $v0
    ctx->pc = 0x220a14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_220a18:
    // 0x220a18: 0x7ba200e0  lq          $v0, 0xE0($sp)
    ctx->pc = 0x220a18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_220a1c:
    // 0x220a1c: 0x2e29821  addu        $s3, $s7, $v0
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_220a20:
    // 0x220a20: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220a24:
    // 0x220a24: 0x0  nop
    ctx->pc = 0x220a24u;
    // NOP
label_220a28:
    // 0x220a28: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x220a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_220a2c:
    // 0x220a2c: 0x2621821  addu        $v1, $s3, $v0
    ctx->pc = 0x220a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_220a30:
    // 0x220a30: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x220a30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_220a34:
    // 0x220a34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x220a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_220a38:
    // 0x220a38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x220a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_220a3c:
    // 0x220a3c: 0x54400183  bnel        $v0, $zero, . + 4 + (0x183 << 2)
label_220a40:
    if (ctx->pc == 0x220A40u) {
        ctx->pc = 0x220A40u;
            // 0x220a40: 0x2f0102b  sltu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x220A44u;
        goto label_220a44;
    }
    ctx->pc = 0x220A3Cu;
    {
        const bool branch_taken_0x220a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220a3c) {
            ctx->pc = 0x220A40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220A3Cu;
            // 0x220a40: 0x2f0102b  sltu        $v0, $s7, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22104Cu;
            goto label_22104c;
        }
    }
    ctx->pc = 0x220A44u;
label_220a44:
    // 0x220a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220a48:
    // 0x220a48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x220a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220a4c:
    // 0x220a4c: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x220a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_220a50:
    // 0x220a50: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x220a50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
label_220a54:
    // 0x220a54: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x220a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_220a58:
    // 0x220a58: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x220a58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_220a5c:
    // 0x220a5c: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x220a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_220a60:
    // 0x220a60: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x220a60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_220a64:
    // 0x220a64: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x220a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_220a68:
    // 0x220a68: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x220a68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_220a6c:
    // 0x220a6c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x220a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_220a70:
    // 0x220a70: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x220a70u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_220a74:
    // 0x220a74: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x220a74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_220a78:
    // 0x220a78: 0xae400028  sw          $zero, 0x28($s2)
    ctx->pc = 0x220a78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 0));
label_220a7c:
    // 0x220a7c: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x220a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_220a80:
    // 0x220a80: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x220a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
label_220a84:
    // 0x220a84: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x220a84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_220a88:
    // 0x220a88: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x220a88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_220a8c:
    // 0x220a8c: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x220a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_220a90:
    // 0x220a90: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x220a90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_220a94:
    // 0x220a94: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x220a94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_220a98:
    // 0x220a98: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x220a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_220a9c:
    // 0x220a9c: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x220a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_220aa0:
    // 0x220aa0: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x220aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_220aa4:
    // 0x220aa4: 0xae400060  sw          $zero, 0x60($s2)
    ctx->pc = 0x220aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 0));
label_220aa8:
    // 0x220aa8: 0xae400064  sw          $zero, 0x64($s2)
    ctx->pc = 0x220aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 0));
label_220aac:
    // 0x220aac: 0xae400068  sw          $zero, 0x68($s2)
    ctx->pc = 0x220aacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 0));
label_220ab0:
    // 0x220ab0: 0xae40006c  sw          $zero, 0x6C($s2)
    ctx->pc = 0x220ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 0));
label_220ab4:
    // 0x220ab4: 0xae400070  sw          $zero, 0x70($s2)
    ctx->pc = 0x220ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 112), GPR_U32(ctx, 0));
label_220ab8:
    // 0x220ab8: 0xae400074  sw          $zero, 0x74($s2)
    ctx->pc = 0x220ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 0));
label_220abc:
    // 0x220abc: 0xae400078  sw          $zero, 0x78($s2)
    ctx->pc = 0x220abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 120), GPR_U32(ctx, 0));
label_220ac0:
    // 0x220ac0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220ac4:
    // 0x220ac4: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
label_220ac8:
    if (ctx->pc == 0x220AC8u) {
        ctx->pc = 0x220AC8u;
            // 0x220ac8: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->pc = 0x220ACCu;
        goto label_220acc;
    }
    ctx->pc = 0x220AC4u;
    {
        const bool branch_taken_0x220ac4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220AC4u;
            // 0x220ac8: 0xae40007c  sw          $zero, 0x7C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ac4) {
            ctx->pc = 0x220B08u;
            goto label_220b08;
        }
    }
    ctx->pc = 0x220ACCu;
label_220acc:
    // 0x220acc: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x220accu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_220ad0:
    // 0x220ad0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x220ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_220ad4:
    // 0x220ad4: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x220ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_220ad8:
    // 0x220ad8: 0x321c0  sll         $a0, $v1, 7
    ctx->pc = 0x220ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
label_220adc:
    // 0x220adc: 0x24430068  addiu       $v1, $v0, 0x68
    ctx->pc = 0x220adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 104));
label_220ae0:
    // 0x220ae0: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x220ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
label_220ae4:
    // 0x220ae4: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
label_220ae8:
    if (ctx->pc == 0x220AE8u) {
        ctx->pc = 0x220AECu;
        goto label_220aec;
    }
    ctx->pc = 0x220AE4u;
    {
        const bool branch_taken_0x220ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x220ae4) {
            ctx->pc = 0x220AF0u;
            goto label_220af0;
        }
    }
    ctx->pc = 0x220AECu;
label_220aec:
    // 0x220aec: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x220aecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_220af0:
    // 0x220af0: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x220af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220af4:
    // 0x220af4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x220af4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_220af8:
    // 0x220af8: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x220af8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_220afc:
    // 0x220afc: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_220b00:
    if (ctx->pc == 0x220B00u) {
        ctx->pc = 0x220B00u;
            // 0x220b00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x220B04u;
        goto label_220b04;
    }
    ctx->pc = 0x220AFCu;
    {
        const bool branch_taken_0x220afc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220AFCu;
            // 0x220b00: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220afc) {
            ctx->pc = 0x220AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220ad0;
        }
    }
    ctx->pc = 0x220B04u;
label_220b04:
    // 0x220b04: 0x0  nop
    ctx->pc = 0x220b04u;
    // NOP
label_220b08:
    // 0x220b08: 0x8fa4012c  lw          $a0, 0x12C($sp)
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_220b0c:
    // 0x220b0c: 0x8fa50124  lw          $a1, 0x124($sp)
    ctx->pc = 0x220b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_220b10:
    // 0x220b10: 0x240700a0  addiu       $a3, $zero, 0xA0
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_220b14:
    // 0x220b14: 0x8fa60120  lw          $a2, 0x120($sp)
    ctx->pc = 0x220b14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220b18:
    // 0x220b18: 0xc08a2cc  jal         func_228B30
label_220b1c:
    if (ctx->pc == 0x220B1Cu) {
        ctx->pc = 0x220B1Cu;
            // 0x220b1c: 0x26480080  addiu       $t0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x220B20u;
        goto label_220b20;
    }
    ctx->pc = 0x220B18u;
    SET_GPR_U32(ctx, 31, 0x220B20u);
    ctx->pc = 0x220B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220B18u;
            // 0x220b1c: 0x26480080  addiu       $t0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228B30u;
    if (runtime->hasFunction(0x228B30u)) {
        auto targetFn = runtime->lookupFunction(0x228B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B20u; }
        if (ctx->pc != 0x220B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228B30_0x228b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220B20u; }
        if (ctx->pc != 0x220B20u) { return; }
    }
    ctx->pc = 0x220B20u;
label_220b20:
    // 0x220b20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220b24:
    // 0x220b24: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x220b24u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_220b28:
    // 0x220b28: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x220b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_220b2c:
    // 0x220b2c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
label_220b30:
    if (ctx->pc == 0x220B30u) {
        ctx->pc = 0x220B30u;
            // 0x220b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220B34u;
        goto label_220b34;
    }
    ctx->pc = 0x220B2Cu;
    {
        const bool branch_taken_0x220b2c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B2Cu;
            // 0x220b30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b2c) {
            ctx->pc = 0x220B58u;
            goto label_220b58;
        }
    }
    ctx->pc = 0x220B34u;
label_220b34:
    // 0x220b34: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x220b34u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220b38:
    // 0x220b38: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x220b38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_220b3c:
    // 0x220b3c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x220b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_220b40:
    // 0x220b40: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x220b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_220b44:
    // 0x220b44: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x220b44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_220b48:
    // 0x220b48: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x220b48u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_220b4c:
    // 0x220b4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_220b50:
    if (ctx->pc == 0x220B50u) {
        ctx->pc = 0x220B54u;
        goto label_220b54;
    }
    ctx->pc = 0x220B4Cu;
    {
        const bool branch_taken_0x220b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220b4c) {
            ctx->pc = 0x220B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220b38;
        }
    }
    ctx->pc = 0x220B54u;
label_220b54:
    // 0x220b54: 0x0  nop
    ctx->pc = 0x220b54u;
    // NOP
label_220b58:
    // 0x220b58: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x220b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220b5c:
    // 0x220b5c: 0x8fb60124  lw          $s6, 0x124($sp)
    ctx->pc = 0x220b5cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_220b60:
    // 0x220b60: 0xafb7055c  sw          $s7, 0x55C($sp)
    ctx->pc = 0x220b60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 23));
label_220b64:
    // 0x220b64: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220b68:
    // 0x220b68: 0x27a2013c  addiu       $v0, $sp, 0x13C
    ctx->pc = 0x220b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_220b6c:
    // 0x220b6c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x220b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_220b70:
    // 0x220b70: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x220b70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_220b74:
    // 0x220b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220b78:
    // 0x220b78: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x220b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_220b7c:
    // 0x220b7c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x220b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_220b80:
    // 0x220b80: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x220b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_220b84:
    // 0x220b84: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x220b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_220b88:
    // 0x220b88: 0xafa20138  sw          $v0, 0x138($sp)
    ctx->pc = 0x220b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 312), GPR_U32(ctx, 2));
label_220b8c:
    // 0x220b8c: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x220b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_220b90:
    // 0x220b90: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x220b90u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_220b94:
    // 0x220b94: 0x1020008a  beqz        $at, . + 4 + (0x8A << 2)
label_220b98:
    if (ctx->pc == 0x220B98u) {
        ctx->pc = 0x220B98u;
            // 0x220b98: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->pc = 0x220B9Cu;
        goto label_220b9c;
    }
    ctx->pc = 0x220B94u;
    {
        const bool branch_taken_0x220b94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220B94u;
            // 0x220b98: 0xafa00134  sw          $zero, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b94) {
            ctx->pc = 0x220DC0u;
            goto label_220dc0;
        }
    }
    ctx->pc = 0x220B9Cu;
label_220b9c:
    // 0x220b9c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x220b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_220ba0:
    // 0x220ba0: 0x8c500070  lw          $s0, 0x70($v0)
    ctx->pc = 0x220ba0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_220ba4:
    // 0x220ba4: 0x94430074  lhu         $v1, 0x74($v0)
    ctx->pc = 0x220ba4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 116)));
label_220ba8:
    // 0x220ba8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x220ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_220bac:
    // 0x220bac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220bb0:
    // 0x220bb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x220bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_220bb4:
    // 0x220bb4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x220bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_220bb8:
    // 0x220bb8: 0x202082b  sltu        $at, $s0, $v0
    ctx->pc = 0x220bb8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_220bbc:
    // 0x220bbc: 0x1020007a  beqz        $at, . + 4 + (0x7A << 2)
label_220bc0:
    if (ctx->pc == 0x220BC0u) {
        ctx->pc = 0x220BC0u;
            // 0x220bc0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x220BC4u;
        goto label_220bc4;
    }
    ctx->pc = 0x220BBCu;
    {
        const bool branch_taken_0x220bbc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220BBCu;
            // 0x220bc0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bbc) {
            ctx->pc = 0x220DA8u;
            goto label_220da8;
        }
    }
    ctx->pc = 0x220BC4u;
label_220bc4:
    // 0x220bc4: 0x0  nop
    ctx->pc = 0x220bc4u;
    // NOP
label_220bc8:
    // 0x220bc8: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x220bc8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_220bcc:
    // 0x220bcc: 0x30420005  andi        $v0, $v0, 0x5
    ctx->pc = 0x220bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)5);
label_220bd0:
    // 0x220bd0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_220bd4:
    if (ctx->pc == 0x220BD4u) {
        ctx->pc = 0x220BD8u;
        goto label_220bd8;
    }
    ctx->pc = 0x220BD0u;
    {
        const bool branch_taken_0x220bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220bd0) {
            ctx->pc = 0x220C68u;
            goto label_220c68;
        }
    }
    ctx->pc = 0x220BD8u;
label_220bd8:
    // 0x220bd8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220bdc:
    // 0x220bdc: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x220bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_220be0:
    // 0x220be0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x220be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_220be4:
    // 0x220be4: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x220be4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_220be8:
    // 0x220be8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220bec:
    // 0x220bec: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x220becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_220bf0:
    // 0x220bf0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x220bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_220bf4:
    // 0x220bf4: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x220bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_220bf8:
    // 0x220bf8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_220bfc:
    // 0x220bfc: 0xaea20030  sw          $v0, 0x30($s5)
    ctx->pc = 0x220bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
label_220c00:
    // 0x220c00: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x220c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_220c04:
    // 0x220c04: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x220c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_220c08:
    // 0x220c08: 0xaea20034  sw          $v0, 0x34($s5)
    ctx->pc = 0x220c08u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 2));
label_220c0c:
    // 0x220c0c: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x220c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_220c10:
    // 0x220c10: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x220c10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
label_220c14:
    // 0x220c14: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x220c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_220c18:
    // 0x220c18: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x220c18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
label_220c1c:
    // 0x220c1c: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x220c1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_220c20:
    // 0x220c20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x220c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_220c24:
    // 0x220c24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_220c28:
    if (ctx->pc == 0x220C28u) {
        ctx->pc = 0x220C2Cu;
        goto label_220c2c;
    }
    ctx->pc = 0x220C24u;
    {
        const bool branch_taken_0x220c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c24) {
            ctx->pc = 0x220C40u;
            goto label_220c40;
        }
    }
    ctx->pc = 0x220C2Cu;
label_220c2c:
    // 0x220c2c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220c30:
    // 0x220c30: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x220c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_220c34:
    // 0x220c34: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x220c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_220c38:
    // 0x220c38: 0xc087b30  jal         func_21ECC0
label_220c3c:
    if (ctx->pc == 0x220C3Cu) {
        ctx->pc = 0x220C3Cu;
            // 0x220c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220C40u;
        goto label_220c40;
    }
    ctx->pc = 0x220C38u;
    SET_GPR_U32(ctx, 31, 0x220C40u);
    ctx->pc = 0x220C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C38u;
            // 0x220c3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21ECC0u;
    if (runtime->hasFunction(0x21ECC0u)) {
        auto targetFn = runtime->lookupFunction(0x21ECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C40u; }
        if (ctx->pc != 0x220C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021ECC0_0x21ecc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C40u; }
        if (ctx->pc != 0x220C40u) { return; }
    }
    ctx->pc = 0x220C40u;
label_220c40:
    // 0x220c40: 0x92020012  lbu         $v0, 0x12($s0)
    ctx->pc = 0x220c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 18)));
label_220c44:
    // 0x220c44: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x220c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_220c48:
    // 0x220c48: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_220c4c:
    if (ctx->pc == 0x220C4Cu) {
        ctx->pc = 0x220C50u;
        goto label_220c50;
    }
    ctx->pc = 0x220C48u;
    {
        const bool branch_taken_0x220c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220c48) {
            ctx->pc = 0x220C68u;
            goto label_220c68;
        }
    }
    ctx->pc = 0x220C50u;
label_220c50:
    // 0x220c50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220c54:
    // 0x220c54: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x220c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_220c58:
    // 0x220c58: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x220c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_220c5c:
    // 0x220c5c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_220c60:
    // 0x220c60: 0x320f809  jalr        $t9
label_220c64:
    if (ctx->pc == 0x220C64u) {
        ctx->pc = 0x220C64u;
            // 0x220c64: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220C68u;
        goto label_220c68;
    }
    ctx->pc = 0x220C60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x220C68u);
        ctx->pc = 0x220C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220C60u;
            // 0x220c64: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x220C68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x220C68u; }
            if (ctx->pc != 0x220C68u) { return; }
        }
        }
    }
    ctx->pc = 0x220C68u;
label_220c68:
    // 0x220c68: 0x92020013  lbu         $v0, 0x13($s0)
    ctx->pc = 0x220c68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 19)));
label_220c6c:
    // 0x220c6c: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x220c6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_220c70:
    // 0x220c70: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_220c74:
    if (ctx->pc == 0x220C74u) {
        ctx->pc = 0x220C78u;
        goto label_220c78;
    }
    ctx->pc = 0x220C70u;
    {
        const bool branch_taken_0x220c70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220c70) {
            ctx->pc = 0x220CC0u;
            goto label_220cc0;
        }
    }
    ctx->pc = 0x220C78u;
label_220c78:
    // 0x220c78: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_220c7c:
    // 0x220c7c: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x220c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_220c80:
    // 0x220c80: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x220c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
label_220c84:
    // 0x220c84: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x220c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_220c88:
    // 0x220c88: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_220c8c:
    if (ctx->pc == 0x220C8Cu) {
        ctx->pc = 0x220C90u;
        goto label_220c90;
    }
    ctx->pc = 0x220C88u;
    {
        const bool branch_taken_0x220c88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x220c88) {
            ctx->pc = 0x220CA0u;
            goto label_220ca0;
        }
    }
    ctx->pc = 0x220C90u;
label_220c90:
    // 0x220c90: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x220c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_220c94:
    // 0x220c94: 0xc0a728c  jal         func_29CA30
label_220c98:
    if (ctx->pc == 0x220C98u) {
        ctx->pc = 0x220C98u;
            // 0x220c98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x220C9Cu;
        goto label_220c9c;
    }
    ctx->pc = 0x220C94u;
    SET_GPR_U32(ctx, 31, 0x220C9Cu);
    ctx->pc = 0x220C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220C94u;
            // 0x220c98: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29CA30u;
    if (runtime->hasFunction(0x29CA30u)) {
        auto targetFn = runtime->lookupFunction(0x29CA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C9Cu; }
        if (ctx->pc != 0x220C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029CA30_0x29ca30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220C9Cu; }
        if (ctx->pc != 0x220C9Cu) { return; }
    }
    ctx->pc = 0x220C9Cu;
label_220c9c:
    // 0x220c9c: 0x0  nop
    ctx->pc = 0x220c9cu;
    // NOP
label_220ca0:
    // 0x220ca0: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x220ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_220ca4:
    // 0x220ca4: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x220ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_220ca8:
    // 0x220ca8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x220ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_220cac:
    // 0x220cac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_220cb0:
    // 0x220cb0: 0xafa40134  sw          $a0, 0x134($sp)
    ctx->pc = 0x220cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 4));
label_220cb4:
    // 0x220cb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220cb8:
    // 0x220cb8: 0x10000035  b           . + 4 + (0x35 << 2)
label_220cbc:
    if (ctx->pc == 0x220CBCu) {
        ctx->pc = 0x220CBCu;
            // 0x220cbc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x220CC0u;
        goto label_220cc0;
    }
    ctx->pc = 0x220CB8u;
    {
        const bool branch_taken_0x220cb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220CB8u;
            // 0x220cbc: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cb8) {
            ctx->pc = 0x220D90u;
            goto label_220d90;
        }
    }
    ctx->pc = 0x220CC0u;
label_220cc0:
    // 0x220cc0: 0x8fa4055c  lw          $a0, 0x55C($sp)
    ctx->pc = 0x220cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_220cc4:
    // 0x220cc4: 0x91102b  sltu        $v0, $a0, $s1
    ctx->pc = 0x220cc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_220cc8:
    // 0x220cc8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_220ccc:
    if (ctx->pc == 0x220CCCu) {
        ctx->pc = 0x220CD0u;
        goto label_220cd0;
    }
    ctx->pc = 0x220CC8u;
    {
        const bool branch_taken_0x220cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220cc8) {
            ctx->pc = 0x220CE8u;
            goto label_220ce8;
        }
    }
    ctx->pc = 0x220CD0u;
label_220cd0:
    // 0x220cd0: 0x2841823  subu        $v1, $s4, $a0
    ctx->pc = 0x220cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_220cd4:
    // 0x220cd4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x220cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220cd8:
    // 0x220cd8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x220cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_220cdc:
    // 0x220cdc: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x220cdcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220ce0:
    // 0x220ce0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x220ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_220ce4:
    // 0x220ce4: 0xafb4055c  sw          $s4, 0x55C($sp)
    ctx->pc = 0x220ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 20));
label_220ce8:
    // 0x220ce8: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x220ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_220cec:
    // 0x220cec: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x220cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_220cf0:
    // 0x220cf0: 0x8cc40068  lw          $a0, 0x68($a2)
    ctx->pc = 0x220cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_220cf4:
    // 0x220cf4: 0x24c300b0  addiu       $v1, $a2, 0xB0
    ctx->pc = 0x220cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
label_220cf8:
    // 0x220cf8: 0x24a200b0  addiu       $v0, $a1, 0xB0
    ctx->pc = 0x220cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 176));
label_220cfc:
    // 0x220cfc: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_220d00:
    // 0x220d00: 0xaea40030  sw          $a0, 0x30($s5)
    ctx->pc = 0x220d00u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 4));
label_220d04:
    // 0x220d04: 0x8ca40068  lw          $a0, 0x68($a1)
    ctx->pc = 0x220d04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_220d08:
    // 0x220d08: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x220d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_220d0c:
    // 0x220d0c: 0xaea40034  sw          $a0, 0x34($s5)
    ctx->pc = 0x220d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 4));
label_220d10:
    // 0x220d10: 0xaea30038  sw          $v1, 0x38($s5)
    ctx->pc = 0x220d10u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 3));
label_220d14:
    // 0x220d14: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x220d14u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
label_220d18:
    // 0x220d18: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x220d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_220d1c:
    // 0x220d1c: 0xaea20048  sw          $v0, 0x48($s5)
    ctx->pc = 0x220d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
label_220d20:
    // 0x220d20: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x220d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_220d24:
    // 0x220d24: 0xaea2004c  sw          $v0, 0x4C($s5)
    ctx->pc = 0x220d24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 2));
label_220d28:
    // 0x220d28: 0x8cc20068  lw          $v0, 0x68($a2)
    ctx->pc = 0x220d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_220d2c:
    // 0x220d2c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x220d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_220d30:
    // 0x220d30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x220d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_220d34:
    // 0x220d34: 0xaea20050  sw          $v0, 0x50($s5)
    ctx->pc = 0x220d34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 2));
label_220d38:
    // 0x220d38: 0x8ca20068  lw          $v0, 0x68($a1)
    ctx->pc = 0x220d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 104)));
label_220d3c:
    // 0x220d3c: 0x211c2  srl         $v0, $v0, 7
    ctx->pc = 0x220d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 7));
label_220d40:
    // 0x220d40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_220d44:
    // 0x220d44: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x220d44u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_220d48:
    // 0x220d48: 0x8ea2004c  lw          $v0, 0x4C($s5)
    ctx->pc = 0x220d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_220d4c:
    // 0x220d4c: 0xaea20058  sw          $v0, 0x58($s5)
    ctx->pc = 0x220d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 2));
label_220d50:
    // 0x220d50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_220d54:
    // 0x220d54: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x220d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_220d58:
    // 0x220d58: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x220d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_220d5c:
    // 0x220d5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x220d5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_220d60:
    // 0x220d60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_220d64:
    if (ctx->pc == 0x220D64u) {
        ctx->pc = 0x220D64u;
            // 0x220d64: 0x96050010  lhu         $a1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x220D68u;
        goto label_220d68;
    }
    ctx->pc = 0x220D60u;
    {
        const bool branch_taken_0x220d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220D60u;
            // 0x220d64: 0x96050010  lhu         $a1, 0x10($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d60) {
            ctx->pc = 0x220D80u;
            goto label_220d80;
        }
    }
    ctx->pc = 0x220D68u;
label_220d68:
    // 0x220d68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220d6c:
    // 0x220d6c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_220d70:
    // 0x220d70: 0xc0847da  jal         func_211F68
label_220d74:
    if (ctx->pc == 0x220D74u) {
        ctx->pc = 0x220D74u;
            // 0x220d74: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->pc = 0x220D78u;
        goto label_220d78;
    }
    ctx->pc = 0x220D70u;
    SET_GPR_U32(ctx, 31, 0x220D78u);
    ctx->pc = 0x220D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D70u;
            // 0x220d74: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D78u; }
        if (ctx->pc != 0x220D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D78u; }
        if (ctx->pc != 0x220D78u) { return; }
    }
    ctx->pc = 0x220D78u;
label_220d78:
    // 0x220d78: 0x10000005  b           . + 4 + (0x5 << 2)
label_220d7c:
    if (ctx->pc == 0x220D7Cu) {
        ctx->pc = 0x220D80u;
        goto label_220d80;
    }
    ctx->pc = 0x220D78u;
    {
        const bool branch_taken_0x220d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220d78) {
            ctx->pc = 0x220D90u;
            goto label_220d90;
        }
    }
    ctx->pc = 0x220D80u;
label_220d80:
    // 0x220d80: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x220d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_220d84:
    // 0x220d84: 0xc08349e  jal         func_20D278
label_220d88:
    if (ctx->pc == 0x220D88u) {
        ctx->pc = 0x220D88u;
            // 0x220d88: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->pc = 0x220D8Cu;
        goto label_220d8c;
    }
    ctx->pc = 0x220D84u;
    SET_GPR_U32(ctx, 31, 0x220D8Cu);
    ctx->pc = 0x220D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220D84u;
            // 0x220d88: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    if (runtime->hasFunction(0x20D278u)) {
        auto targetFn = runtime->lookupFunction(0x20D278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D8Cu; }
        if (ctx->pc != 0x220D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D278_0x20d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220D8Cu; }
        if (ctx->pc != 0x220D8Cu) { return; }
    }
    ctx->pc = 0x220D8Cu;
label_220d8c:
    // 0x220d8c: 0x0  nop
    ctx->pc = 0x220d8cu;
    // NOP
label_220d90:
    // 0x220d90: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x220d90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_220d94:
    // 0x220d94: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x220d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_220d98:
    // 0x220d98: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x220d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_220d9c:
    // 0x220d9c: 0x1440ff8a  bnez        $v0, . + 4 + (-0x76 << 2)
label_220da0:
    if (ctx->pc == 0x220DA0u) {
        ctx->pc = 0x220DA4u;
        goto label_220da4;
    }
    ctx->pc = 0x220D9Cu;
    {
        const bool branch_taken_0x220d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220d9c) {
            ctx->pc = 0x220BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220bc8;
        }
    }
    ctx->pc = 0x220DA4u;
label_220da4:
    // 0x220da4: 0x0  nop
    ctx->pc = 0x220da4u;
    // NOP
label_220da8:
    // 0x220da8: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x220da8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_220dac:
    // 0x220dac: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x220dacu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
label_220db0:
    // 0x220db0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_220db4:
    // 0x220db4: 0x5440ff7a  bnel        $v0, $zero, . + 4 + (-0x86 << 2)
label_220db8:
    if (ctx->pc == 0x220DB8u) {
        ctx->pc = 0x220DB8u;
            // 0x220db8: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x220DBCu;
        goto label_220dbc;
    }
    ctx->pc = 0x220DB4u;
    {
        const bool branch_taken_0x220db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220db4) {
            ctx->pc = 0x220DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220DB4u;
            // 0x220db8: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220BA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220ba0;
        }
    }
    ctx->pc = 0x220DBCu;
label_220dbc:
    // 0x220dbc: 0x0  nop
    ctx->pc = 0x220dbcu;
    // NOP
label_220dc0:
    // 0x220dc0: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x220dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_220dc4:
    // 0x220dc4: 0x18400040  blez        $v0, . + 4 + (0x40 << 2)
label_220dc8:
    if (ctx->pc == 0x220DC8u) {
        ctx->pc = 0x220DC8u;
            // 0x220dc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220DCCu;
        goto label_220dcc;
    }
    ctx->pc = 0x220DC4u;
    {
        const bool branch_taken_0x220dc4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x220DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DC4u;
            // 0x220dc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220dc4) {
            ctx->pc = 0x220EC8u;
            goto label_220ec8;
        }
    }
    ctx->pc = 0x220DCCu;
label_220dcc:
    // 0x220dcc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x220dccu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220dd0:
    // 0x220dd0: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x220dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_220dd4:
    // 0x220dd4: 0x8fa5055c  lw          $a1, 0x55C($sp)
    ctx->pc = 0x220dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_220dd8:
    // 0x220dd8: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x220dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_220ddc:
    // 0x220ddc: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x220ddcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_220de0:
    // 0x220de0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_220de4:
    if (ctx->pc == 0x220DE4u) {
        ctx->pc = 0x220DE4u;
            // 0x220de4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x220DE8u;
        goto label_220de8;
    }
    ctx->pc = 0x220DE0u;
    {
        const bool branch_taken_0x220de0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x220DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220DE0u;
            // 0x220de4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220de0) {
            ctx->pc = 0x220E00u;
            goto label_220e00;
        }
    }
    ctx->pc = 0x220DE8u;
label_220de8:
    // 0x220de8: 0x2852023  subu        $a0, $s4, $a1
    ctx->pc = 0x220de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_220dec:
    // 0x220dec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x220decu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_220df0:
    // 0x220df0: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x220df0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
label_220df4:
    // 0x220df4: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x220df4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_220df8:
    // 0x220df8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x220df8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_220dfc:
    // 0x220dfc: 0xafb4055c  sw          $s4, 0x55C($sp)
    ctx->pc = 0x220dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1372), GPR_U32(ctx, 20));
label_220e00:
    // 0x220e00: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x220e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_220e04:
    // 0x220e04: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x220e04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_220e08:
    // 0x220e08: 0x8ce50068  lw          $a1, 0x68($a3)
    ctx->pc = 0x220e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_220e0c:
    // 0x220e0c: 0x24e400b0  addiu       $a0, $a3, 0xB0
    ctx->pc = 0x220e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 176));
label_220e10:
    // 0x220e10: 0x24c300b0  addiu       $v1, $a2, 0xB0
    ctx->pc = 0x220e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 176));
label_220e14:
    // 0x220e14: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x220e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_220e18:
    // 0x220e18: 0xaea50030  sw          $a1, 0x30($s5)
    ctx->pc = 0x220e18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 5));
label_220e1c:
    // 0x220e1c: 0x8cc50068  lw          $a1, 0x68($a2)
    ctx->pc = 0x220e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_220e20:
    // 0x220e20: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x220e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_220e24:
    // 0x220e24: 0xaea50034  sw          $a1, 0x34($s5)
    ctx->pc = 0x220e24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 52), GPR_U32(ctx, 5));
label_220e28:
    // 0x220e28: 0xaea40038  sw          $a0, 0x38($s5)
    ctx->pc = 0x220e28u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 4));
label_220e2c:
    // 0x220e2c: 0xaea3003c  sw          $v1, 0x3C($s5)
    ctx->pc = 0x220e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 3));
label_220e30:
    // 0x220e30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x220e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_220e34:
    // 0x220e34: 0xaea30048  sw          $v1, 0x48($s5)
    ctx->pc = 0x220e34u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 3));
label_220e38:
    // 0x220e38: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x220e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_220e3c:
    // 0x220e3c: 0xaea3004c  sw          $v1, 0x4C($s5)
    ctx->pc = 0x220e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 76), GPR_U32(ctx, 3));
label_220e40:
    // 0x220e40: 0x8ce30068  lw          $v1, 0x68($a3)
    ctx->pc = 0x220e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 104)));
label_220e44:
    // 0x220e44: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x220e44u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_220e48:
    // 0x220e48: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x220e48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_220e4c:
    // 0x220e4c: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x220e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
label_220e50:
    // 0x220e50: 0x8cc30068  lw          $v1, 0x68($a2)
    ctx->pc = 0x220e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 104)));
label_220e54:
    // 0x220e54: 0x319c2  srl         $v1, $v1, 7
    ctx->pc = 0x220e54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 7));
label_220e58:
    // 0x220e58: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x220e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_220e5c:
    // 0x220e5c: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x220e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
label_220e60:
    // 0x220e60: 0x8ea3004c  lw          $v1, 0x4C($s5)
    ctx->pc = 0x220e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 76)));
label_220e64:
    // 0x220e64: 0xaea30058  sw          $v1, 0x58($s5)
    ctx->pc = 0x220e64u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 88), GPR_U32(ctx, 3));
label_220e68:
    // 0x220e68: 0x94450010  lhu         $a1, 0x10($v0)
    ctx->pc = 0x220e68u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_220e6c:
    // 0x220e6c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x220e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_220e70:
    // 0x220e70: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x220e70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_220e74:
    // 0x220e74: 0x38420016  xori        $v0, $v0, 0x16
    ctx->pc = 0x220e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)22);
label_220e78:
    // 0x220e78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x220e78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_220e7c:
    // 0x220e7c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_220e80:
    if (ctx->pc == 0x220E80u) {
        ctx->pc = 0x220E84u;
        goto label_220e84;
    }
    ctx->pc = 0x220E7Cu;
    {
        const bool branch_taken_0x220e7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220e7c) {
            ctx->pc = 0x220EA0u;
            goto label_220ea0;
        }
    }
    ctx->pc = 0x220E84u;
label_220e84:
    // 0x220e84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x220e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220e88:
    // 0x220e88: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x220e88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_220e8c:
    // 0x220e8c: 0xc0847da  jal         func_211F68
label_220e90:
    if (ctx->pc == 0x220E90u) {
        ctx->pc = 0x220E90u;
            // 0x220e90: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->pc = 0x220E94u;
        goto label_220e94;
    }
    ctx->pc = 0x220E8Cu;
    SET_GPR_U32(ctx, 31, 0x220E94u);
    ctx->pc = 0x220E90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220E8Cu;
            // 0x220e90: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x211F68u;
    if (runtime->hasFunction(0x211F68u)) {
        auto targetFn = runtime->lookupFunction(0x211F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E94u; }
        if (ctx->pc != 0x220E94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00211F68_0x211f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220E94u; }
        if (ctx->pc != 0x220E94u) { return; }
    }
    ctx->pc = 0x220E94u;
label_220e94:
    // 0x220e94: 0x10000006  b           . + 4 + (0x6 << 2)
label_220e98:
    if (ctx->pc == 0x220E98u) {
        ctx->pc = 0x220E9Cu;
        goto label_220e9c;
    }
    ctx->pc = 0x220E94u;
    {
        const bool branch_taken_0x220e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x220e94) {
            ctx->pc = 0x220EB0u;
            goto label_220eb0;
        }
    }
    ctx->pc = 0x220E9Cu;
label_220e9c:
    // 0x220e9c: 0x0  nop
    ctx->pc = 0x220e9cu;
    // NOP
label_220ea0:
    // 0x220ea0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x220ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_220ea4:
    // 0x220ea4: 0xc08349e  jal         func_20D278
label_220ea8:
    if (ctx->pc == 0x220EA8u) {
        ctx->pc = 0x220EA8u;
            // 0x220ea8: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->pc = 0x220EACu;
        goto label_220eac;
    }
    ctx->pc = 0x220EA4u;
    SET_GPR_U32(ctx, 31, 0x220EACu);
    ctx->pc = 0x220EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220EA4u;
            // 0x220ea8: 0x27a7055c  addiu       $a3, $sp, 0x55C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1372));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D278u;
    if (runtime->hasFunction(0x20D278u)) {
        auto targetFn = runtime->lookupFunction(0x20D278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EACu; }
        if (ctx->pc != 0x220EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020D278_0x20d278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220EACu; }
        if (ctx->pc != 0x220EACu) { return; }
    }
    ctx->pc = 0x220EACu;
label_220eac:
    // 0x220eac: 0x0  nop
    ctx->pc = 0x220eacu;
    // NOP
label_220eb0:
    // 0x220eb0: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x220eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_220eb4:
    // 0x220eb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x220eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_220eb8:
    // 0x220eb8: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x220eb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_220ebc:
    // 0x220ebc: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_220ec0:
    if (ctx->pc == 0x220EC0u) {
        ctx->pc = 0x220EC0u;
            // 0x220ec0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x220EC4u;
        goto label_220ec4;
    }
    ctx->pc = 0x220EBCu;
    {
        const bool branch_taken_0x220ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220EBCu;
            // 0x220ec0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ebc) {
            ctx->pc = 0x220DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220dd0;
        }
    }
    ctx->pc = 0x220EC4u;
label_220ec4:
    // 0x220ec4: 0x0  nop
    ctx->pc = 0x220ec4u;
    // NOP
label_220ec8:
    // 0x220ec8: 0x8fa3055c  lw          $v1, 0x55C($sp)
    ctx->pc = 0x220ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1372)));
label_220ecc:
    // 0x220ecc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x220eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_220ed0:
    // 0x220ed0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x220ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_220ed4:
    // 0x220ed4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x220ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_220ed8:
    // 0x220ed8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x220ed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_220edc:
    // 0x220edc: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_220ee0:
    if (ctx->pc == 0x220EE0u) {
        ctx->pc = 0x220EE0u;
            // 0x220ee0: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->pc = 0x220EE4u;
        goto label_220ee4;
    }
    ctx->pc = 0x220EDCu;
    {
        const bool branch_taken_0x220edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x220edc) {
            ctx->pc = 0x220EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220EDCu;
            // 0x220ee0: 0x8fa40128  lw          $a0, 0x128($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x220F0Cu;
            goto label_220f0c;
        }
    }
    ctx->pc = 0x220EE4u;
label_220ee4:
    // 0x220ee4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x220ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_220ee8:
    // 0x220ee8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x220ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_220eec:
    // 0x220eec: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x220eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_220ef0:
    // 0x220ef0: 0x24070015  addiu       $a3, $zero, 0x15
    ctx->pc = 0x220ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_220ef4:
    // 0x220ef4: 0x8fa50130  lw          $a1, 0x130($sp)
    ctx->pc = 0x220ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_220ef8:
    // 0x220ef8: 0x310bc  dsll32      $v0, $v1, 2
    ctx->pc = 0x220ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 2));
label_220efc:
    // 0x220efc: 0x210be  dsrl32      $v0, $v0, 2
    ctx->pc = 0x220efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 2));
label_220f00:
    // 0x220f00: 0xc0a7ab4  jal         func_29EAD0
label_220f04:
    if (ctx->pc == 0x220F04u) {
        ctx->pc = 0x220F04u;
            // 0x220f04: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x220F08u;
        goto label_220f08;
    }
    ctx->pc = 0x220F00u;
    SET_GPR_U32(ctx, 31, 0x220F08u);
    ctx->pc = 0x220F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F00u;
            // 0x220f04: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F08u; }
        if (ctx->pc != 0x220F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F08u; }
        if (ctx->pc != 0x220F08u) { return; }
    }
    ctx->pc = 0x220F08u;
label_220f08:
    // 0x220f08: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x220f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_220f0c:
    // 0x220f0c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x220f0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_220f10:
    // 0x220f10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x220f10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220f14:
    // 0x220f14: 0xc085922  jal         func_216488
label_220f18:
    if (ctx->pc == 0x220F18u) {
        ctx->pc = 0x220F18u;
            // 0x220f18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220F1Cu;
        goto label_220f1c;
    }
    ctx->pc = 0x220F14u;
    SET_GPR_U32(ctx, 31, 0x220F1Cu);
    ctx->pc = 0x220F18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220F14u;
            // 0x220f18: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x216488u;
    if (runtime->hasFunction(0x216488u)) {
        auto targetFn = runtime->lookupFunction(0x216488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F1Cu; }
        if (ctx->pc != 0x220F1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00216488_0x216488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220F1Cu; }
        if (ctx->pc != 0x220F1Cu) { return; }
    }
    ctx->pc = 0x220F1Cu;
label_220f1c:
    // 0x220f1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x220f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_220f20:
    // 0x220f20: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x220f20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_220f24:
    // 0x220f24: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x220f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_220f28:
    // 0x220f28: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x220f28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_220f2c:
    // 0x220f2c: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x220f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_220f30:
    // 0x220f30: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x220f30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_220f34:
    // 0x220f34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_220f38:
    if (ctx->pc == 0x220F38u) {
        ctx->pc = 0x220F38u;
            // 0x220f38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x220F3Cu;
        goto label_220f3c;
    }
    ctx->pc = 0x220F34u;
    {
        const bool branch_taken_0x220f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220F34u;
            // 0x220f38: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f34) {
            ctx->pc = 0x220F60u;
            goto label_220f60;
        }
    }
    ctx->pc = 0x220F3Cu;
label_220f3c:
    // 0x220f3c: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x220f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_220f40:
    // 0x220f40: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x220f40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_220f44:
    // 0x220f44: 0x2463c420  addiu       $v1, $v1, -0x3BE0
    ctx->pc = 0x220f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951968));
label_220f48:
    // 0x220f48: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x220f48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_220f4c:
    // 0x220f4c: 0xc7c00010  lwc1        $f0, 0x10($fp)
    ctx->pc = 0x220f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_220f50:
    // 0x220f50: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x220f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_220f54:
    // 0x220f54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x220f54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_220f58:
    // 0x220f58: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x220f58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_220f5c:
    // 0x220f5c: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x220f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_220f60:
    // 0x220f60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x220f60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_220f64:
    // 0x220f64: 0x3c06006f  lui         $a2, 0x6F
    ctx->pc = 0x220f64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)111 << 16));
label_220f68:
    // 0x220f68: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x220f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_220f6c:
    // 0x220f6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x220f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_220f70:
    // 0x220f70: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x220f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_220f74:
    // 0x220f74: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x220f74u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_220f78:
    // 0x220f78: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_220f7c:
    if (ctx->pc == 0x220F7Cu) {
        ctx->pc = 0x220F7Cu;
            // 0x220f7c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->pc = 0x220F80u;
        goto label_220f80;
    }
    ctx->pc = 0x220F78u;
    {
        const bool branch_taken_0x220f78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x220F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220F78u;
            // 0x220f7c: 0x24c6ea60  addiu       $a2, $a2, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220f78) {
            ctx->pc = 0x220FACu;
            goto label_220fac;
        }
    }
    ctx->pc = 0x220F80u;
label_220f80:
    // 0x220f80: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x220f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220f84:
    // 0x220f84: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x220f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
label_220f88:
    // 0x220f88: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x220f88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_220f8c:
    // 0x220f8c: 0x2484c430  addiu       $a0, $a0, -0x3BD0
    ctx->pc = 0x220f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951984));
label_220f90:
    // 0x220f90: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x220f90u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_220f94:
    // 0x220f94: 0x0  nop
    ctx->pc = 0x220f94u;
    // NOP
label_220f98:
    // 0x220f98: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x220f98u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_220f9c:
    // 0x220f9c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x220f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_220fa0:
    // 0x220fa0: 0x24a30008  addiu       $v1, $a1, 0x8
    ctx->pc = 0x220fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_220fa4:
    // 0x220fa4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x220fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_220fa8:
    // 0x220fa8: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x220fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_220fac:
    // 0x220fac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x220facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220fb0:
    // 0x220fb0: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_220fb4:
    if (ctx->pc == 0x220FB4u) {
        ctx->pc = 0x220FB4u;
            // 0x220fb4: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->pc = 0x220FB8u;
        goto label_220fb8;
    }
    ctx->pc = 0x220FB0u;
    {
        const bool branch_taken_0x220fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x220fb0) {
            ctx->pc = 0x220FB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x220FB0u;
            // 0x220fb4: 0x8fa20118  lw          $v0, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221004u;
            goto label_221004;
        }
    }
    ctx->pc = 0x220FB8u;
label_220fb8:
    // 0x220fb8: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x220fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_220fbc:
    // 0x220fbc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_220fc0:
    // 0x220fc0: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x220fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_220fc4:
    // 0x220fc4: 0xc086848  jal         func_21A120
label_220fc8:
    if (ctx->pc == 0x220FC8u) {
        ctx->pc = 0x220FC8u;
            // 0x220fc8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x220FCCu;
        goto label_220fcc;
    }
    ctx->pc = 0x220FC4u;
    SET_GPR_U32(ctx, 31, 0x220FCCu);
    ctx->pc = 0x220FC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FC4u;
            // 0x220fc8: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A120u;
    if (runtime->hasFunction(0x21A120u)) {
        auto targetFn = runtime->lookupFunction(0x21A120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FCCu; }
        if (ctx->pc != 0x220FCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A120_0x21a120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FCCu; }
        if (ctx->pc != 0x220FCCu) { return; }
    }
    ctx->pc = 0x220FCCu;
label_220fcc:
    // 0x220fcc: 0x8fa40128  lw          $a0, 0x128($sp)
    ctx->pc = 0x220fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
label_220fd0:
    // 0x220fd0: 0x26460080  addiu       $a2, $s2, 0x80
    ctx->pc = 0x220fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_220fd4:
    // 0x220fd4: 0x8fa5012c  lw          $a1, 0x12C($sp)
    ctx->pc = 0x220fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 300)));
label_220fd8:
    // 0x220fd8: 0x8fa70124  lw          $a3, 0x124($sp)
    ctx->pc = 0x220fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_220fdc:
    // 0x220fdc: 0x8fa80120  lw          $t0, 0x120($sp)
    ctx->pc = 0x220fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_220fe0:
    // 0x220fe0: 0xc08a450  jal         func_229140
label_220fe4:
    if (ctx->pc == 0x220FE4u) {
        ctx->pc = 0x220FE4u;
            // 0x220fe4: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x220FE8u;
        goto label_220fe8;
    }
    ctx->pc = 0x220FE0u;
    SET_GPR_U32(ctx, 31, 0x220FE8u);
    ctx->pc = 0x220FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FE0u;
            // 0x220fe4: 0x240900a0  addiu       $t1, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x229140u;
    if (runtime->hasFunction(0x229140u)) {
        auto targetFn = runtime->lookupFunction(0x229140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FE8u; }
        if (ctx->pc != 0x220FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00229140_0x229140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x220FE8u; }
        if (ctx->pc != 0x220FE8u) { return; }
    }
    ctx->pc = 0x220FE8u;
label_220fe8:
    // 0x220fe8: 0x8ee60000  lw          $a2, 0x0($s7)
    ctx->pc = 0x220fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_220fec:
    // 0x220fec: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_220ff0:
    if (ctx->pc == 0x220FF0u) {
        ctx->pc = 0x220FF0u;
            // 0x220ff0: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->pc = 0x220FF4u;
        goto label_220ff4;
    }
    ctx->pc = 0x220FECu;
    {
        const bool branch_taken_0x220fec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x220FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x220FECu;
            // 0x220ff0: 0xafa2011c  sw          $v0, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220fec) {
            ctx->pc = 0x221000u;
            goto label_221000;
        }
    }
    ctx->pc = 0x220FF4u;
label_220ff4:
    // 0x220ff4: 0x8fc40018  lw          $a0, 0x18($fp)
    ctx->pc = 0x220ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_220ff8:
    // 0x220ff8: 0xc08ea14  jal         func_23A850
label_220ffc:
    if (ctx->pc == 0x220FFCu) {
        ctx->pc = 0x220FFCu;
            // 0x220ffc: 0x26e50010  addiu       $a1, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->pc = 0x221000u;
        goto label_221000;
    }
    ctx->pc = 0x220FF8u;
    SET_GPR_U32(ctx, 31, 0x221000u);
    ctx->pc = 0x220FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x220FF8u;
            // 0x220ffc: 0x26e50010  addiu       $a1, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A850u;
    if (runtime->hasFunction(0x23A850u)) {
        auto targetFn = runtime->lookupFunction(0x23A850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221000u; }
        if (ctx->pc != 0x221000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A850_0x23a850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221000u; }
        if (ctx->pc != 0x221000u) { return; }
    }
    ctx->pc = 0x221000u;
label_221000:
    // 0x221000: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x221000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_221004:
    // 0x221004: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_221008:
    if (ctx->pc == 0x221008u) {
        ctx->pc = 0x22100Cu;
        goto label_22100c;
    }
    ctx->pc = 0x221004u;
    {
        const bool branch_taken_0x221004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x221004) {
            ctx->pc = 0x221038u;
            goto label_221038;
        }
    }
    ctx->pc = 0x22100Cu;
label_22100c:
    // 0x22100c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22100cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_221010:
    // 0x221010: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x221010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_221014:
    // 0x221014: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x221014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_221018:
    // 0x221018: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x221018u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_22101c:
    // 0x22101c: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x22101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_221020:
    // 0x221020: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_221024:
    if (ctx->pc == 0x221024u) {
        ctx->pc = 0x221028u;
        goto label_221028;
    }
    ctx->pc = 0x221020u;
    {
        const bool branch_taken_0x221020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x221020) {
            ctx->pc = 0x221038u;
            goto label_221038;
        }
    }
    ctx->pc = 0x221028u;
label_221028:
    // 0x221028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x221028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22102c:
    // 0x22102c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x22102cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_221030:
    // 0x221030: 0x320f809  jalr        $t9
label_221034:
    if (ctx->pc == 0x221034u) {
        ctx->pc = 0x221034u;
            // 0x221034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x221038u;
        goto label_221038;
    }
    ctx->pc = 0x221030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x221038u);
        ctx->pc = 0x221034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221030u;
            // 0x221034: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x221038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221038u; }
            if (ctx->pc != 0x221038u) { return; }
        }
        }
    }
    ctx->pc = 0x221038u;
label_221038:
    // 0x221038: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x221038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_22103c:
    // 0x22103c: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x22103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_221040:
    // 0x221040: 0x8c63ea28  lw          $v1, -0x15D8($v1)
    ctx->pc = 0x221040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961704)));
label_221044:
    // 0x221044: 0x10000060  b           . + 4 + (0x60 << 2)
label_221048:
    if (ctx->pc == 0x221048u) {
        ctx->pc = 0x221048u;
            // 0x221048: 0xa0600010  sb          $zero, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22104Cu;
        goto label_22104c;
    }
    ctx->pc = 0x221044u;
    {
        const bool branch_taken_0x221044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221044u;
            // 0x221048: 0xa0600010  sb          $zero, 0x10($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221044) {
            ctx->pc = 0x2211C8u;
            goto label_2211c8;
        }
    }
    ctx->pc = 0x22104Cu;
label_22104c:
    // 0x22104c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_221050:
    if (ctx->pc == 0x221050u) {
        ctx->pc = 0x221054u;
        goto label_221054;
    }
    ctx->pc = 0x22104Cu;
    {
        const bool branch_taken_0x22104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22104c) {
            ctx->pc = 0x2210B0u;
            goto label_2210b0;
        }
    }
    ctx->pc = 0x221054u;
label_221054:
    // 0x221054: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x221054u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_221058:
    // 0x221058: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x221058u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_22105c:
    // 0x22105c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x22105cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_221060:
    // 0x221060: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x221060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_221064:
    // 0x221064: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x221064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_221068:
    // 0x221068: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x221068u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_22106c:
    // 0x22106c: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x22106cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_221070:
    // 0x221070: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x221070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_221074:
    // 0x221074: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x221074u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_221078:
    // 0x221078: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x221078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22107c:
    // 0x22107c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x22107cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_221080:
    // 0x221080: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_221084:
    if (ctx->pc == 0x221084u) {
        ctx->pc = 0x221088u;
        goto label_221088;
    }
    ctx->pc = 0x221080u;
    {
        const bool branch_taken_0x221080 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221080) {
            ctx->pc = 0x221090u;
            goto label_221090;
        }
    }
    ctx->pc = 0x221088u;
label_221088:
    // 0x221088: 0x10000005  b           . + 4 + (0x5 << 2)
label_22108c:
    if (ctx->pc == 0x22108Cu) {
        ctx->pc = 0x22108Cu;
            // 0x22108c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x221090u;
        goto label_221090;
    }
    ctx->pc = 0x221088u;
    {
        const bool branch_taken_0x221088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22108Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221088u;
            // 0x22108c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221088) {
            ctx->pc = 0x2210A0u;
            goto label_2210a0;
        }
    }
    ctx->pc = 0x221090u;
label_221090:
    // 0x221090: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x221090u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_221094:
    // 0x221094: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x221094u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_221098:
    // 0x221098: 0x320f809  jalr        $t9
label_22109c:
    if (ctx->pc == 0x22109Cu) {
        ctx->pc = 0x2210A0u;
        goto label_2210a0;
    }
    ctx->pc = 0x221098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2210A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2210A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2210A0u; }
            if (ctx->pc != 0x2210A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2210A0u;
label_2210a0:
    // 0x2210a0: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2210a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2210a4:
    // 0x2210a4: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2210a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_2210a8:
    // 0x2210a8: 0x1000fe58  b           . + 4 + (-0x1A8 << 2)
label_2210ac:
    if (ctx->pc == 0x2210ACu) {
        ctx->pc = 0x2210ACu;
            // 0x2210ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2210B0u;
        goto label_2210b0;
    }
    ctx->pc = 0x2210A8u;
    {
        const bool branch_taken_0x2210a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210A8u;
            // 0x2210ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210a8) {
            ctx->pc = 0x220A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a0c;
        }
    }
    ctx->pc = 0x2210B0u;
label_2210b0:
    // 0x2210b0: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x2210b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
label_2210b4:
    // 0x2210b4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x2210b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2210b8:
    // 0x2210b8: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2210bc:
    if (ctx->pc == 0x2210BCu) {
        ctx->pc = 0x2210BCu;
            // 0x2210bc: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x2210C0u;
        goto label_2210c0;
    }
    ctx->pc = 0x2210B8u;
    {
        const bool branch_taken_0x2210b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2210BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210B8u;
            // 0x2210bc: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210b8) {
            ctx->pc = 0x221170u;
            goto label_221170;
        }
    }
    ctx->pc = 0x2210C0u;
label_2210c0:
    // 0x2210c0: 0x8fc2000c  lw          $v0, 0xC($fp)
    ctx->pc = 0x2210c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_2210c4:
    // 0x2210c4: 0x2171823  subu        $v1, $s0, $s7
    ctx->pc = 0x2210c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2210c8:
    // 0x2210c8: 0x738823  subu        $s1, $v1, $s3
    ctx->pc = 0x2210c8u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2210cc:
    // 0x2210cc: 0x1a200003  blez        $s1, . + 4 + (0x3 << 2)
label_2210d0:
    if (ctx->pc == 0x2210D0u) {
        ctx->pc = 0x2210D0u;
            // 0x2210d0: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x2210D4u;
        goto label_2210d4;
    }
    ctx->pc = 0x2210CCu;
    {
        const bool branch_taken_0x2210cc = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2210D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210CCu;
            // 0x2210d0: 0x531821  addu        $v1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210cc) {
            ctx->pc = 0x2210DCu;
            goto label_2210dc;
        }
    }
    ctx->pc = 0x2210D4u;
label_2210d4:
    // 0x2210d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2210d8:
    if (ctx->pc == 0x2210D8u) {
        ctx->pc = 0x2210D8u;
            // 0x2210d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2210DCu;
        goto label_2210dc;
    }
    ctx->pc = 0x2210D4u;
    {
        const bool branch_taken_0x2210d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2210D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2210D4u;
            // 0x2210d8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2210d4) {
            ctx->pc = 0x2210E0u;
            goto label_2210e0;
        }
    }
    ctx->pc = 0x2210DCu;
label_2210dc:
    // 0x2210dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2210dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2210e0:
    // 0x2210e0: 0x62b023  subu        $s6, $v1, $v0
    ctx->pc = 0x2210e0u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2210e4:
    // 0x2210e4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2210e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2210e8:
    // 0x2210e8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x2210e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_2210ec:
    // 0x2210ec: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x2210ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2210f0:
    // 0x2210f0: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x2210f0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2210f4:
    // 0x2210f4: 0x26830010  addiu       $v1, $s4, 0x10
    ctx->pc = 0x2210f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_2210f8:
    // 0x2210f8: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x2210f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_2210fc:
    // 0x2210fc: 0x622824  and         $a1, $v1, $v0
    ctx->pc = 0x2210fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_221100:
    // 0x221100: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x221100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_221104:
    // 0x221104: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x221104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_221108:
    // 0x221108: 0x453021  addu        $a2, $v0, $a1
    ctx->pc = 0x221108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_22110c:
    // 0x22110c: 0x66082b  sltu        $at, $v1, $a2
    ctx->pc = 0x22110cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_221110:
    // 0x221110: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_221114:
    if (ctx->pc == 0x221114u) {
        ctx->pc = 0x221118u;
        goto label_221118;
    }
    ctx->pc = 0x221110u;
    {
        const bool branch_taken_0x221110 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x221110) {
            ctx->pc = 0x221120u;
            goto label_221120;
        }
    }
    ctx->pc = 0x221118u;
label_221118:
    // 0x221118: 0x10000005  b           . + 4 + (0x5 << 2)
label_22111c:
    if (ctx->pc == 0x22111Cu) {
        ctx->pc = 0x22111Cu;
            // 0x22111c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->pc = 0x221120u;
        goto label_221120;
    }
    ctx->pc = 0x221118u;
    {
        const bool branch_taken_0x221118 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22111Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221118u;
            // 0x22111c: 0xac86000c  sw          $a2, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221118) {
            ctx->pc = 0x221130u;
            goto label_221130;
        }
    }
    ctx->pc = 0x221120u;
label_221120:
    // 0x221120: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x221120u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_221124:
    // 0x221124: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x221124u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_221128:
    // 0x221128: 0x320f809  jalr        $t9
label_22112c:
    if (ctx->pc == 0x22112Cu) {
        ctx->pc = 0x221130u;
        goto label_221130;
    }
    ctx->pc = 0x221128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x221130u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x221130u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x221130u; }
            if (ctx->pc != 0x221130u) { return; }
        }
        }
    }
    ctx->pc = 0x221130u;
label_221130:
    // 0x221130: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
label_221134:
    if (ctx->pc == 0x221134u) {
        ctx->pc = 0x221134u;
            // 0x221134: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x221138u;
        goto label_221138;
    }
    ctx->pc = 0x221130u;
    {
        const bool branch_taken_0x221130 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x221134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221130u;
            // 0x221134: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221130) {
            ctx->pc = 0x221158u;
            goto label_221158;
        }
    }
    ctx->pc = 0x221138u;
label_221138:
    // 0x221138: 0x8fc3000c  lw          $v1, 0xC($fp)
    ctx->pc = 0x221138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_22113c:
    // 0x22113c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x22113cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_221140:
    // 0x221140: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x221140u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_221144:
    // 0x221144: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x221144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221148:
    // 0x221148: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x221148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_22114c:
    // 0x22114c: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x22114cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221150:
    // 0x221150: 0x1000fe35  b           . + 4 + (-0x1CB << 2)
label_221154:
    if (ctx->pc == 0x221154u) {
        ctx->pc = 0x221154u;
            // 0x221154: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x221158u;
        goto label_221158;
    }
    ctx->pc = 0x221150u;
    {
        const bool branch_taken_0x221150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221150u;
            // 0x221154: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221150) {
            ctx->pc = 0x220A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a28;
        }
    }
    ctx->pc = 0x221158u;
label_221158:
    // 0x221158: 0x2138823  subu        $s1, $s0, $s3
    ctx->pc = 0x221158u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_22115c:
    // 0x22115c: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x22115cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_221160:
    // 0x221160: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x221160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_221164:
    // 0x221164: 0x1000fe30  b           . + 4 + (-0x1D0 << 2)
label_221168:
    if (ctx->pc == 0x221168u) {
        ctx->pc = 0x221168u;
            // 0x221168: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22116Cu;
        goto label_22116c;
    }
    ctx->pc = 0x221164u;
    {
        const bool branch_taken_0x221164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221164u;
            // 0x221168: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221164) {
            ctx->pc = 0x220A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a28;
        }
    }
    ctx->pc = 0x22116Cu;
label_22116c:
    // 0x22116c: 0x0  nop
    ctx->pc = 0x22116cu;
    // NOP
label_221170:
    // 0x221170: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x221170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_221174:
    // 0x221174: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x221174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_221178:
    // 0x221178: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x221178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_22117c:
    // 0x22117c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x22117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_221180:
    // 0x221180: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x221180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_221184:
    // 0x221184: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x221184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_221188:
    // 0x221188: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x221188u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_22118c:
    // 0x22118c: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_221190:
    if (ctx->pc == 0x221190u) {
        ctx->pc = 0x221194u;
        goto label_221194;
    }
    ctx->pc = 0x22118Cu;
    {
        const bool branch_taken_0x22118c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x22118c) {
            ctx->pc = 0x2211A0u;
            goto label_2211a0;
        }
    }
    ctx->pc = 0x221194u;
label_221194:
    // 0x221194: 0x10000006  b           . + 4 + (0x6 << 2)
label_221198:
    if (ctx->pc == 0x221198u) {
        ctx->pc = 0x221198u;
            // 0x221198: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x22119Cu;
        goto label_22119c;
    }
    ctx->pc = 0x221194u;
    {
        const bool branch_taken_0x221194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221194u;
            // 0x221198: 0xac83000c  sw          $v1, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221194) {
            ctx->pc = 0x2211B0u;
            goto label_2211b0;
        }
    }
    ctx->pc = 0x22119Cu;
label_22119c:
    // 0x22119c: 0x0  nop
    ctx->pc = 0x22119cu;
    // NOP
label_2211a0:
    // 0x2211a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2211a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2211a4:
    // 0x2211a4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2211a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2211a8:
    // 0x2211a8: 0x320f809  jalr        $t9
label_2211ac:
    if (ctx->pc == 0x2211ACu) {
        ctx->pc = 0x2211ACu;
            // 0x2211ac: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->pc = 0x2211B0u;
        goto label_2211b0;
    }
    ctx->pc = 0x2211A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2211B0u);
        ctx->pc = 0x2211ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2211A8u;
            // 0x2211ac: 0x8fa50100  lw          $a1, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2211B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2211B0u; }
            if (ctx->pc != 0x2211B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2211B0u;
label_2211b0:
    // 0x2211b0: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x2211b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2211b4:
    // 0x2211b4: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x2211b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_2211b8:
    // 0x2211b8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2211b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2211bc:
    // 0x2211bc: 0x1000fe1a  b           . + 4 + (-0x1E6 << 2)
label_2211c0:
    if (ctx->pc == 0x2211C0u) {
        ctx->pc = 0x2211C0u;
            // 0x2211c0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x2211C4u;
        goto label_2211c4;
    }
    ctx->pc = 0x2211BCu;
    {
        const bool branch_taken_0x2211bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2211C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2211BCu;
            // 0x2211c0: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2211bc) {
            ctx->pc = 0x220A28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_220a28;
        }
    }
    ctx->pc = 0x2211C4u;
label_2211c4:
    // 0x2211c4: 0x0  nop
    ctx->pc = 0x2211c4u;
    // NOP
label_2211c8:
    // 0x2211c8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2211c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2211cc:
    // 0x2211cc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2211ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2211d0:
    // 0x2211d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2211d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2211d4:
    // 0x2211d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2211d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2211d8:
    // 0x2211d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2211d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2211dc:
    // 0x2211dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2211dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2211e0:
    // 0x2211e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2211e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2211e4:
    // 0x2211e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2211e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2211e8:
    // 0x2211e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2211e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2211ec:
    // 0x2211ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2211ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2211f0:
    // 0x2211f0: 0x3e00008  jr          $ra
label_2211f4:
    if (ctx->pc == 0x2211F4u) {
        ctx->pc = 0x2211F4u;
            // 0x2211f4: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->pc = 0x2211F8u;
        goto label_2211f8;
    }
    ctx->pc = 0x2211F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2211F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2211F0u;
            // 0x2211f4: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2211F8u;
label_2211f8:
    // 0x2211f8: 0x0  nop
    ctx->pc = 0x2211f8u;
    // NOP
label_2211fc:
    // 0x2211fc: 0x0  nop
    ctx->pc = 0x2211fcu;
    // NOP
}
