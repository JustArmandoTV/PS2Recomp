#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00377A00
// Address: 0x377a00 - 0x378410
void sub_00377A00_0x377a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377A00_0x377a00");
#endif

    switch (ctx->pc) {
        case 0x377a00u: goto label_377a00;
        case 0x377a04u: goto label_377a04;
        case 0x377a08u: goto label_377a08;
        case 0x377a0cu: goto label_377a0c;
        case 0x377a10u: goto label_377a10;
        case 0x377a14u: goto label_377a14;
        case 0x377a18u: goto label_377a18;
        case 0x377a1cu: goto label_377a1c;
        case 0x377a20u: goto label_377a20;
        case 0x377a24u: goto label_377a24;
        case 0x377a28u: goto label_377a28;
        case 0x377a2cu: goto label_377a2c;
        case 0x377a30u: goto label_377a30;
        case 0x377a34u: goto label_377a34;
        case 0x377a38u: goto label_377a38;
        case 0x377a3cu: goto label_377a3c;
        case 0x377a40u: goto label_377a40;
        case 0x377a44u: goto label_377a44;
        case 0x377a48u: goto label_377a48;
        case 0x377a4cu: goto label_377a4c;
        case 0x377a50u: goto label_377a50;
        case 0x377a54u: goto label_377a54;
        case 0x377a58u: goto label_377a58;
        case 0x377a5cu: goto label_377a5c;
        case 0x377a60u: goto label_377a60;
        case 0x377a64u: goto label_377a64;
        case 0x377a68u: goto label_377a68;
        case 0x377a6cu: goto label_377a6c;
        case 0x377a70u: goto label_377a70;
        case 0x377a74u: goto label_377a74;
        case 0x377a78u: goto label_377a78;
        case 0x377a7cu: goto label_377a7c;
        case 0x377a80u: goto label_377a80;
        case 0x377a84u: goto label_377a84;
        case 0x377a88u: goto label_377a88;
        case 0x377a8cu: goto label_377a8c;
        case 0x377a90u: goto label_377a90;
        case 0x377a94u: goto label_377a94;
        case 0x377a98u: goto label_377a98;
        case 0x377a9cu: goto label_377a9c;
        case 0x377aa0u: goto label_377aa0;
        case 0x377aa4u: goto label_377aa4;
        case 0x377aa8u: goto label_377aa8;
        case 0x377aacu: goto label_377aac;
        case 0x377ab0u: goto label_377ab0;
        case 0x377ab4u: goto label_377ab4;
        case 0x377ab8u: goto label_377ab8;
        case 0x377abcu: goto label_377abc;
        case 0x377ac0u: goto label_377ac0;
        case 0x377ac4u: goto label_377ac4;
        case 0x377ac8u: goto label_377ac8;
        case 0x377accu: goto label_377acc;
        case 0x377ad0u: goto label_377ad0;
        case 0x377ad4u: goto label_377ad4;
        case 0x377ad8u: goto label_377ad8;
        case 0x377adcu: goto label_377adc;
        case 0x377ae0u: goto label_377ae0;
        case 0x377ae4u: goto label_377ae4;
        case 0x377ae8u: goto label_377ae8;
        case 0x377aecu: goto label_377aec;
        case 0x377af0u: goto label_377af0;
        case 0x377af4u: goto label_377af4;
        case 0x377af8u: goto label_377af8;
        case 0x377afcu: goto label_377afc;
        case 0x377b00u: goto label_377b00;
        case 0x377b04u: goto label_377b04;
        case 0x377b08u: goto label_377b08;
        case 0x377b0cu: goto label_377b0c;
        case 0x377b10u: goto label_377b10;
        case 0x377b14u: goto label_377b14;
        case 0x377b18u: goto label_377b18;
        case 0x377b1cu: goto label_377b1c;
        case 0x377b20u: goto label_377b20;
        case 0x377b24u: goto label_377b24;
        case 0x377b28u: goto label_377b28;
        case 0x377b2cu: goto label_377b2c;
        case 0x377b30u: goto label_377b30;
        case 0x377b34u: goto label_377b34;
        case 0x377b38u: goto label_377b38;
        case 0x377b3cu: goto label_377b3c;
        case 0x377b40u: goto label_377b40;
        case 0x377b44u: goto label_377b44;
        case 0x377b48u: goto label_377b48;
        case 0x377b4cu: goto label_377b4c;
        case 0x377b50u: goto label_377b50;
        case 0x377b54u: goto label_377b54;
        case 0x377b58u: goto label_377b58;
        case 0x377b5cu: goto label_377b5c;
        case 0x377b60u: goto label_377b60;
        case 0x377b64u: goto label_377b64;
        case 0x377b68u: goto label_377b68;
        case 0x377b6cu: goto label_377b6c;
        case 0x377b70u: goto label_377b70;
        case 0x377b74u: goto label_377b74;
        case 0x377b78u: goto label_377b78;
        case 0x377b7cu: goto label_377b7c;
        case 0x377b80u: goto label_377b80;
        case 0x377b84u: goto label_377b84;
        case 0x377b88u: goto label_377b88;
        case 0x377b8cu: goto label_377b8c;
        case 0x377b90u: goto label_377b90;
        case 0x377b94u: goto label_377b94;
        case 0x377b98u: goto label_377b98;
        case 0x377b9cu: goto label_377b9c;
        case 0x377ba0u: goto label_377ba0;
        case 0x377ba4u: goto label_377ba4;
        case 0x377ba8u: goto label_377ba8;
        case 0x377bacu: goto label_377bac;
        case 0x377bb0u: goto label_377bb0;
        case 0x377bb4u: goto label_377bb4;
        case 0x377bb8u: goto label_377bb8;
        case 0x377bbcu: goto label_377bbc;
        case 0x377bc0u: goto label_377bc0;
        case 0x377bc4u: goto label_377bc4;
        case 0x377bc8u: goto label_377bc8;
        case 0x377bccu: goto label_377bcc;
        case 0x377bd0u: goto label_377bd0;
        case 0x377bd4u: goto label_377bd4;
        case 0x377bd8u: goto label_377bd8;
        case 0x377bdcu: goto label_377bdc;
        case 0x377be0u: goto label_377be0;
        case 0x377be4u: goto label_377be4;
        case 0x377be8u: goto label_377be8;
        case 0x377becu: goto label_377bec;
        case 0x377bf0u: goto label_377bf0;
        case 0x377bf4u: goto label_377bf4;
        case 0x377bf8u: goto label_377bf8;
        case 0x377bfcu: goto label_377bfc;
        case 0x377c00u: goto label_377c00;
        case 0x377c04u: goto label_377c04;
        case 0x377c08u: goto label_377c08;
        case 0x377c0cu: goto label_377c0c;
        case 0x377c10u: goto label_377c10;
        case 0x377c14u: goto label_377c14;
        case 0x377c18u: goto label_377c18;
        case 0x377c1cu: goto label_377c1c;
        case 0x377c20u: goto label_377c20;
        case 0x377c24u: goto label_377c24;
        case 0x377c28u: goto label_377c28;
        case 0x377c2cu: goto label_377c2c;
        case 0x377c30u: goto label_377c30;
        case 0x377c34u: goto label_377c34;
        case 0x377c38u: goto label_377c38;
        case 0x377c3cu: goto label_377c3c;
        case 0x377c40u: goto label_377c40;
        case 0x377c44u: goto label_377c44;
        case 0x377c48u: goto label_377c48;
        case 0x377c4cu: goto label_377c4c;
        case 0x377c50u: goto label_377c50;
        case 0x377c54u: goto label_377c54;
        case 0x377c58u: goto label_377c58;
        case 0x377c5cu: goto label_377c5c;
        case 0x377c60u: goto label_377c60;
        case 0x377c64u: goto label_377c64;
        case 0x377c68u: goto label_377c68;
        case 0x377c6cu: goto label_377c6c;
        case 0x377c70u: goto label_377c70;
        case 0x377c74u: goto label_377c74;
        case 0x377c78u: goto label_377c78;
        case 0x377c7cu: goto label_377c7c;
        case 0x377c80u: goto label_377c80;
        case 0x377c84u: goto label_377c84;
        case 0x377c88u: goto label_377c88;
        case 0x377c8cu: goto label_377c8c;
        case 0x377c90u: goto label_377c90;
        case 0x377c94u: goto label_377c94;
        case 0x377c98u: goto label_377c98;
        case 0x377c9cu: goto label_377c9c;
        case 0x377ca0u: goto label_377ca0;
        case 0x377ca4u: goto label_377ca4;
        case 0x377ca8u: goto label_377ca8;
        case 0x377cacu: goto label_377cac;
        case 0x377cb0u: goto label_377cb0;
        case 0x377cb4u: goto label_377cb4;
        case 0x377cb8u: goto label_377cb8;
        case 0x377cbcu: goto label_377cbc;
        case 0x377cc0u: goto label_377cc0;
        case 0x377cc4u: goto label_377cc4;
        case 0x377cc8u: goto label_377cc8;
        case 0x377cccu: goto label_377ccc;
        case 0x377cd0u: goto label_377cd0;
        case 0x377cd4u: goto label_377cd4;
        case 0x377cd8u: goto label_377cd8;
        case 0x377cdcu: goto label_377cdc;
        case 0x377ce0u: goto label_377ce0;
        case 0x377ce4u: goto label_377ce4;
        case 0x377ce8u: goto label_377ce8;
        case 0x377cecu: goto label_377cec;
        case 0x377cf0u: goto label_377cf0;
        case 0x377cf4u: goto label_377cf4;
        case 0x377cf8u: goto label_377cf8;
        case 0x377cfcu: goto label_377cfc;
        case 0x377d00u: goto label_377d00;
        case 0x377d04u: goto label_377d04;
        case 0x377d08u: goto label_377d08;
        case 0x377d0cu: goto label_377d0c;
        case 0x377d10u: goto label_377d10;
        case 0x377d14u: goto label_377d14;
        case 0x377d18u: goto label_377d18;
        case 0x377d1cu: goto label_377d1c;
        case 0x377d20u: goto label_377d20;
        case 0x377d24u: goto label_377d24;
        case 0x377d28u: goto label_377d28;
        case 0x377d2cu: goto label_377d2c;
        case 0x377d30u: goto label_377d30;
        case 0x377d34u: goto label_377d34;
        case 0x377d38u: goto label_377d38;
        case 0x377d3cu: goto label_377d3c;
        case 0x377d40u: goto label_377d40;
        case 0x377d44u: goto label_377d44;
        case 0x377d48u: goto label_377d48;
        case 0x377d4cu: goto label_377d4c;
        case 0x377d50u: goto label_377d50;
        case 0x377d54u: goto label_377d54;
        case 0x377d58u: goto label_377d58;
        case 0x377d5cu: goto label_377d5c;
        case 0x377d60u: goto label_377d60;
        case 0x377d64u: goto label_377d64;
        case 0x377d68u: goto label_377d68;
        case 0x377d6cu: goto label_377d6c;
        case 0x377d70u: goto label_377d70;
        case 0x377d74u: goto label_377d74;
        case 0x377d78u: goto label_377d78;
        case 0x377d7cu: goto label_377d7c;
        case 0x377d80u: goto label_377d80;
        case 0x377d84u: goto label_377d84;
        case 0x377d88u: goto label_377d88;
        case 0x377d8cu: goto label_377d8c;
        case 0x377d90u: goto label_377d90;
        case 0x377d94u: goto label_377d94;
        case 0x377d98u: goto label_377d98;
        case 0x377d9cu: goto label_377d9c;
        case 0x377da0u: goto label_377da0;
        case 0x377da4u: goto label_377da4;
        case 0x377da8u: goto label_377da8;
        case 0x377dacu: goto label_377dac;
        case 0x377db0u: goto label_377db0;
        case 0x377db4u: goto label_377db4;
        case 0x377db8u: goto label_377db8;
        case 0x377dbcu: goto label_377dbc;
        case 0x377dc0u: goto label_377dc0;
        case 0x377dc4u: goto label_377dc4;
        case 0x377dc8u: goto label_377dc8;
        case 0x377dccu: goto label_377dcc;
        case 0x377dd0u: goto label_377dd0;
        case 0x377dd4u: goto label_377dd4;
        case 0x377dd8u: goto label_377dd8;
        case 0x377ddcu: goto label_377ddc;
        case 0x377de0u: goto label_377de0;
        case 0x377de4u: goto label_377de4;
        case 0x377de8u: goto label_377de8;
        case 0x377decu: goto label_377dec;
        case 0x377df0u: goto label_377df0;
        case 0x377df4u: goto label_377df4;
        case 0x377df8u: goto label_377df8;
        case 0x377dfcu: goto label_377dfc;
        case 0x377e00u: goto label_377e00;
        case 0x377e04u: goto label_377e04;
        case 0x377e08u: goto label_377e08;
        case 0x377e0cu: goto label_377e0c;
        case 0x377e10u: goto label_377e10;
        case 0x377e14u: goto label_377e14;
        case 0x377e18u: goto label_377e18;
        case 0x377e1cu: goto label_377e1c;
        case 0x377e20u: goto label_377e20;
        case 0x377e24u: goto label_377e24;
        case 0x377e28u: goto label_377e28;
        case 0x377e2cu: goto label_377e2c;
        case 0x377e30u: goto label_377e30;
        case 0x377e34u: goto label_377e34;
        case 0x377e38u: goto label_377e38;
        case 0x377e3cu: goto label_377e3c;
        case 0x377e40u: goto label_377e40;
        case 0x377e44u: goto label_377e44;
        case 0x377e48u: goto label_377e48;
        case 0x377e4cu: goto label_377e4c;
        case 0x377e50u: goto label_377e50;
        case 0x377e54u: goto label_377e54;
        case 0x377e58u: goto label_377e58;
        case 0x377e5cu: goto label_377e5c;
        case 0x377e60u: goto label_377e60;
        case 0x377e64u: goto label_377e64;
        case 0x377e68u: goto label_377e68;
        case 0x377e6cu: goto label_377e6c;
        case 0x377e70u: goto label_377e70;
        case 0x377e74u: goto label_377e74;
        case 0x377e78u: goto label_377e78;
        case 0x377e7cu: goto label_377e7c;
        case 0x377e80u: goto label_377e80;
        case 0x377e84u: goto label_377e84;
        case 0x377e88u: goto label_377e88;
        case 0x377e8cu: goto label_377e8c;
        case 0x377e90u: goto label_377e90;
        case 0x377e94u: goto label_377e94;
        case 0x377e98u: goto label_377e98;
        case 0x377e9cu: goto label_377e9c;
        case 0x377ea0u: goto label_377ea0;
        case 0x377ea4u: goto label_377ea4;
        case 0x377ea8u: goto label_377ea8;
        case 0x377eacu: goto label_377eac;
        case 0x377eb0u: goto label_377eb0;
        case 0x377eb4u: goto label_377eb4;
        case 0x377eb8u: goto label_377eb8;
        case 0x377ebcu: goto label_377ebc;
        case 0x377ec0u: goto label_377ec0;
        case 0x377ec4u: goto label_377ec4;
        case 0x377ec8u: goto label_377ec8;
        case 0x377eccu: goto label_377ecc;
        case 0x377ed0u: goto label_377ed0;
        case 0x377ed4u: goto label_377ed4;
        case 0x377ed8u: goto label_377ed8;
        case 0x377edcu: goto label_377edc;
        case 0x377ee0u: goto label_377ee0;
        case 0x377ee4u: goto label_377ee4;
        case 0x377ee8u: goto label_377ee8;
        case 0x377eecu: goto label_377eec;
        case 0x377ef0u: goto label_377ef0;
        case 0x377ef4u: goto label_377ef4;
        case 0x377ef8u: goto label_377ef8;
        case 0x377efcu: goto label_377efc;
        case 0x377f00u: goto label_377f00;
        case 0x377f04u: goto label_377f04;
        case 0x377f08u: goto label_377f08;
        case 0x377f0cu: goto label_377f0c;
        case 0x377f10u: goto label_377f10;
        case 0x377f14u: goto label_377f14;
        case 0x377f18u: goto label_377f18;
        case 0x377f1cu: goto label_377f1c;
        case 0x377f20u: goto label_377f20;
        case 0x377f24u: goto label_377f24;
        case 0x377f28u: goto label_377f28;
        case 0x377f2cu: goto label_377f2c;
        case 0x377f30u: goto label_377f30;
        case 0x377f34u: goto label_377f34;
        case 0x377f38u: goto label_377f38;
        case 0x377f3cu: goto label_377f3c;
        case 0x377f40u: goto label_377f40;
        case 0x377f44u: goto label_377f44;
        case 0x377f48u: goto label_377f48;
        case 0x377f4cu: goto label_377f4c;
        case 0x377f50u: goto label_377f50;
        case 0x377f54u: goto label_377f54;
        case 0x377f58u: goto label_377f58;
        case 0x377f5cu: goto label_377f5c;
        case 0x377f60u: goto label_377f60;
        case 0x377f64u: goto label_377f64;
        case 0x377f68u: goto label_377f68;
        case 0x377f6cu: goto label_377f6c;
        case 0x377f70u: goto label_377f70;
        case 0x377f74u: goto label_377f74;
        case 0x377f78u: goto label_377f78;
        case 0x377f7cu: goto label_377f7c;
        case 0x377f80u: goto label_377f80;
        case 0x377f84u: goto label_377f84;
        case 0x377f88u: goto label_377f88;
        case 0x377f8cu: goto label_377f8c;
        case 0x377f90u: goto label_377f90;
        case 0x377f94u: goto label_377f94;
        case 0x377f98u: goto label_377f98;
        case 0x377f9cu: goto label_377f9c;
        case 0x377fa0u: goto label_377fa0;
        case 0x377fa4u: goto label_377fa4;
        case 0x377fa8u: goto label_377fa8;
        case 0x377facu: goto label_377fac;
        case 0x377fb0u: goto label_377fb0;
        case 0x377fb4u: goto label_377fb4;
        case 0x377fb8u: goto label_377fb8;
        case 0x377fbcu: goto label_377fbc;
        case 0x377fc0u: goto label_377fc0;
        case 0x377fc4u: goto label_377fc4;
        case 0x377fc8u: goto label_377fc8;
        case 0x377fccu: goto label_377fcc;
        case 0x377fd0u: goto label_377fd0;
        case 0x377fd4u: goto label_377fd4;
        case 0x377fd8u: goto label_377fd8;
        case 0x377fdcu: goto label_377fdc;
        case 0x377fe0u: goto label_377fe0;
        case 0x377fe4u: goto label_377fe4;
        case 0x377fe8u: goto label_377fe8;
        case 0x377fecu: goto label_377fec;
        case 0x377ff0u: goto label_377ff0;
        case 0x377ff4u: goto label_377ff4;
        case 0x377ff8u: goto label_377ff8;
        case 0x377ffcu: goto label_377ffc;
        case 0x378000u: goto label_378000;
        case 0x378004u: goto label_378004;
        case 0x378008u: goto label_378008;
        case 0x37800cu: goto label_37800c;
        case 0x378010u: goto label_378010;
        case 0x378014u: goto label_378014;
        case 0x378018u: goto label_378018;
        case 0x37801cu: goto label_37801c;
        case 0x378020u: goto label_378020;
        case 0x378024u: goto label_378024;
        case 0x378028u: goto label_378028;
        case 0x37802cu: goto label_37802c;
        case 0x378030u: goto label_378030;
        case 0x378034u: goto label_378034;
        case 0x378038u: goto label_378038;
        case 0x37803cu: goto label_37803c;
        case 0x378040u: goto label_378040;
        case 0x378044u: goto label_378044;
        case 0x378048u: goto label_378048;
        case 0x37804cu: goto label_37804c;
        case 0x378050u: goto label_378050;
        case 0x378054u: goto label_378054;
        case 0x378058u: goto label_378058;
        case 0x37805cu: goto label_37805c;
        case 0x378060u: goto label_378060;
        case 0x378064u: goto label_378064;
        case 0x378068u: goto label_378068;
        case 0x37806cu: goto label_37806c;
        case 0x378070u: goto label_378070;
        case 0x378074u: goto label_378074;
        case 0x378078u: goto label_378078;
        case 0x37807cu: goto label_37807c;
        case 0x378080u: goto label_378080;
        case 0x378084u: goto label_378084;
        case 0x378088u: goto label_378088;
        case 0x37808cu: goto label_37808c;
        case 0x378090u: goto label_378090;
        case 0x378094u: goto label_378094;
        case 0x378098u: goto label_378098;
        case 0x37809cu: goto label_37809c;
        case 0x3780a0u: goto label_3780a0;
        case 0x3780a4u: goto label_3780a4;
        case 0x3780a8u: goto label_3780a8;
        case 0x3780acu: goto label_3780ac;
        case 0x3780b0u: goto label_3780b0;
        case 0x3780b4u: goto label_3780b4;
        case 0x3780b8u: goto label_3780b8;
        case 0x3780bcu: goto label_3780bc;
        case 0x3780c0u: goto label_3780c0;
        case 0x3780c4u: goto label_3780c4;
        case 0x3780c8u: goto label_3780c8;
        case 0x3780ccu: goto label_3780cc;
        case 0x3780d0u: goto label_3780d0;
        case 0x3780d4u: goto label_3780d4;
        case 0x3780d8u: goto label_3780d8;
        case 0x3780dcu: goto label_3780dc;
        case 0x3780e0u: goto label_3780e0;
        case 0x3780e4u: goto label_3780e4;
        case 0x3780e8u: goto label_3780e8;
        case 0x3780ecu: goto label_3780ec;
        case 0x3780f0u: goto label_3780f0;
        case 0x3780f4u: goto label_3780f4;
        case 0x3780f8u: goto label_3780f8;
        case 0x3780fcu: goto label_3780fc;
        case 0x378100u: goto label_378100;
        case 0x378104u: goto label_378104;
        case 0x378108u: goto label_378108;
        case 0x37810cu: goto label_37810c;
        case 0x378110u: goto label_378110;
        case 0x378114u: goto label_378114;
        case 0x378118u: goto label_378118;
        case 0x37811cu: goto label_37811c;
        case 0x378120u: goto label_378120;
        case 0x378124u: goto label_378124;
        case 0x378128u: goto label_378128;
        case 0x37812cu: goto label_37812c;
        case 0x378130u: goto label_378130;
        case 0x378134u: goto label_378134;
        case 0x378138u: goto label_378138;
        case 0x37813cu: goto label_37813c;
        case 0x378140u: goto label_378140;
        case 0x378144u: goto label_378144;
        case 0x378148u: goto label_378148;
        case 0x37814cu: goto label_37814c;
        case 0x378150u: goto label_378150;
        case 0x378154u: goto label_378154;
        case 0x378158u: goto label_378158;
        case 0x37815cu: goto label_37815c;
        case 0x378160u: goto label_378160;
        case 0x378164u: goto label_378164;
        case 0x378168u: goto label_378168;
        case 0x37816cu: goto label_37816c;
        case 0x378170u: goto label_378170;
        case 0x378174u: goto label_378174;
        case 0x378178u: goto label_378178;
        case 0x37817cu: goto label_37817c;
        case 0x378180u: goto label_378180;
        case 0x378184u: goto label_378184;
        case 0x378188u: goto label_378188;
        case 0x37818cu: goto label_37818c;
        case 0x378190u: goto label_378190;
        case 0x378194u: goto label_378194;
        case 0x378198u: goto label_378198;
        case 0x37819cu: goto label_37819c;
        case 0x3781a0u: goto label_3781a0;
        case 0x3781a4u: goto label_3781a4;
        case 0x3781a8u: goto label_3781a8;
        case 0x3781acu: goto label_3781ac;
        case 0x3781b0u: goto label_3781b0;
        case 0x3781b4u: goto label_3781b4;
        case 0x3781b8u: goto label_3781b8;
        case 0x3781bcu: goto label_3781bc;
        case 0x3781c0u: goto label_3781c0;
        case 0x3781c4u: goto label_3781c4;
        case 0x3781c8u: goto label_3781c8;
        case 0x3781ccu: goto label_3781cc;
        case 0x3781d0u: goto label_3781d0;
        case 0x3781d4u: goto label_3781d4;
        case 0x3781d8u: goto label_3781d8;
        case 0x3781dcu: goto label_3781dc;
        case 0x3781e0u: goto label_3781e0;
        case 0x3781e4u: goto label_3781e4;
        case 0x3781e8u: goto label_3781e8;
        case 0x3781ecu: goto label_3781ec;
        case 0x3781f0u: goto label_3781f0;
        case 0x3781f4u: goto label_3781f4;
        case 0x3781f8u: goto label_3781f8;
        case 0x3781fcu: goto label_3781fc;
        case 0x378200u: goto label_378200;
        case 0x378204u: goto label_378204;
        case 0x378208u: goto label_378208;
        case 0x37820cu: goto label_37820c;
        case 0x378210u: goto label_378210;
        case 0x378214u: goto label_378214;
        case 0x378218u: goto label_378218;
        case 0x37821cu: goto label_37821c;
        case 0x378220u: goto label_378220;
        case 0x378224u: goto label_378224;
        case 0x378228u: goto label_378228;
        case 0x37822cu: goto label_37822c;
        case 0x378230u: goto label_378230;
        case 0x378234u: goto label_378234;
        case 0x378238u: goto label_378238;
        case 0x37823cu: goto label_37823c;
        case 0x378240u: goto label_378240;
        case 0x378244u: goto label_378244;
        case 0x378248u: goto label_378248;
        case 0x37824cu: goto label_37824c;
        case 0x378250u: goto label_378250;
        case 0x378254u: goto label_378254;
        case 0x378258u: goto label_378258;
        case 0x37825cu: goto label_37825c;
        case 0x378260u: goto label_378260;
        case 0x378264u: goto label_378264;
        case 0x378268u: goto label_378268;
        case 0x37826cu: goto label_37826c;
        case 0x378270u: goto label_378270;
        case 0x378274u: goto label_378274;
        case 0x378278u: goto label_378278;
        case 0x37827cu: goto label_37827c;
        case 0x378280u: goto label_378280;
        case 0x378284u: goto label_378284;
        case 0x378288u: goto label_378288;
        case 0x37828cu: goto label_37828c;
        case 0x378290u: goto label_378290;
        case 0x378294u: goto label_378294;
        case 0x378298u: goto label_378298;
        case 0x37829cu: goto label_37829c;
        case 0x3782a0u: goto label_3782a0;
        case 0x3782a4u: goto label_3782a4;
        case 0x3782a8u: goto label_3782a8;
        case 0x3782acu: goto label_3782ac;
        case 0x3782b0u: goto label_3782b0;
        case 0x3782b4u: goto label_3782b4;
        case 0x3782b8u: goto label_3782b8;
        case 0x3782bcu: goto label_3782bc;
        case 0x3782c0u: goto label_3782c0;
        case 0x3782c4u: goto label_3782c4;
        case 0x3782c8u: goto label_3782c8;
        case 0x3782ccu: goto label_3782cc;
        case 0x3782d0u: goto label_3782d0;
        case 0x3782d4u: goto label_3782d4;
        case 0x3782d8u: goto label_3782d8;
        case 0x3782dcu: goto label_3782dc;
        case 0x3782e0u: goto label_3782e0;
        case 0x3782e4u: goto label_3782e4;
        case 0x3782e8u: goto label_3782e8;
        case 0x3782ecu: goto label_3782ec;
        case 0x3782f0u: goto label_3782f0;
        case 0x3782f4u: goto label_3782f4;
        case 0x3782f8u: goto label_3782f8;
        case 0x3782fcu: goto label_3782fc;
        case 0x378300u: goto label_378300;
        case 0x378304u: goto label_378304;
        case 0x378308u: goto label_378308;
        case 0x37830cu: goto label_37830c;
        case 0x378310u: goto label_378310;
        case 0x378314u: goto label_378314;
        case 0x378318u: goto label_378318;
        case 0x37831cu: goto label_37831c;
        case 0x378320u: goto label_378320;
        case 0x378324u: goto label_378324;
        case 0x378328u: goto label_378328;
        case 0x37832cu: goto label_37832c;
        case 0x378330u: goto label_378330;
        case 0x378334u: goto label_378334;
        case 0x378338u: goto label_378338;
        case 0x37833cu: goto label_37833c;
        case 0x378340u: goto label_378340;
        case 0x378344u: goto label_378344;
        case 0x378348u: goto label_378348;
        case 0x37834cu: goto label_37834c;
        case 0x378350u: goto label_378350;
        case 0x378354u: goto label_378354;
        case 0x378358u: goto label_378358;
        case 0x37835cu: goto label_37835c;
        case 0x378360u: goto label_378360;
        case 0x378364u: goto label_378364;
        case 0x378368u: goto label_378368;
        case 0x37836cu: goto label_37836c;
        case 0x378370u: goto label_378370;
        case 0x378374u: goto label_378374;
        case 0x378378u: goto label_378378;
        case 0x37837cu: goto label_37837c;
        case 0x378380u: goto label_378380;
        case 0x378384u: goto label_378384;
        case 0x378388u: goto label_378388;
        case 0x37838cu: goto label_37838c;
        case 0x378390u: goto label_378390;
        case 0x378394u: goto label_378394;
        case 0x378398u: goto label_378398;
        case 0x37839cu: goto label_37839c;
        case 0x3783a0u: goto label_3783a0;
        case 0x3783a4u: goto label_3783a4;
        case 0x3783a8u: goto label_3783a8;
        case 0x3783acu: goto label_3783ac;
        case 0x3783b0u: goto label_3783b0;
        case 0x3783b4u: goto label_3783b4;
        case 0x3783b8u: goto label_3783b8;
        case 0x3783bcu: goto label_3783bc;
        case 0x3783c0u: goto label_3783c0;
        case 0x3783c4u: goto label_3783c4;
        case 0x3783c8u: goto label_3783c8;
        case 0x3783ccu: goto label_3783cc;
        case 0x3783d0u: goto label_3783d0;
        case 0x3783d4u: goto label_3783d4;
        case 0x3783d8u: goto label_3783d8;
        case 0x3783dcu: goto label_3783dc;
        case 0x3783e0u: goto label_3783e0;
        case 0x3783e4u: goto label_3783e4;
        case 0x3783e8u: goto label_3783e8;
        case 0x3783ecu: goto label_3783ec;
        case 0x3783f0u: goto label_3783f0;
        case 0x3783f4u: goto label_3783f4;
        case 0x3783f8u: goto label_3783f8;
        case 0x3783fcu: goto label_3783fc;
        case 0x378400u: goto label_378400;
        case 0x378404u: goto label_378404;
        case 0x378408u: goto label_378408;
        case 0x37840cu: goto label_37840c;
        default: break;
    }

    ctx->pc = 0x377a00u;

label_377a00:
    // 0x377a00: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x377a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_377a04:
    // 0x377a04: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x377a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_377a08:
    // 0x377a08: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x377a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_377a0c:
    // 0x377a0c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x377a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_377a10:
    // 0x377a10: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x377a10u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_377a14:
    // 0x377a14: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x377a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_377a18:
    // 0x377a18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x377a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_377a1c:
    // 0x377a1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_377a20:
    // 0x377a20: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377a20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_377a24:
    // 0x377a24: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x377a24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377a28:
    // 0x377a28: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_377a2c:
    // 0x377a2c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x377a2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_377a30:
    // 0x377a30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377a34:
    // 0x377a34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x377a34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_377a38:
    // 0x377a38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377a3c:
    // 0x377a3c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x377a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_377a40:
    // 0x377a40: 0x8c830060  lw          $v1, 0x60($a0)
    ctx->pc = 0x377a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_377a44:
    // 0x377a44: 0x14600066  bnez        $v1, . + 4 + (0x66 << 2)
label_377a48:
    if (ctx->pc == 0x377A48u) {
        ctx->pc = 0x377A48u;
            // 0x377a48: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377A4Cu;
        goto label_377a4c;
    }
    ctx->pc = 0x377A44u;
    {
        const bool branch_taken_0x377a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377A44u;
            // 0x377a48: 0x120802d  daddu       $s0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377a44) {
            ctx->pc = 0x377BE0u;
            goto label_377be0;
        }
    }
    ctx->pc = 0x377A4Cu;
label_377a4c:
    // 0x377a4c: 0x8e760000  lw          $s6, 0x0($s3)
    ctx->pc = 0x377a4cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_377a50:
    // 0x377a50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377a50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377a54:
    // 0x377a54: 0xc04f278  jal         func_13C9E0
label_377a58:
    if (ctx->pc == 0x377A58u) {
        ctx->pc = 0x377A58u;
            // 0x377a58: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x377A5Cu;
        goto label_377a5c;
    }
    ctx->pc = 0x377A54u;
    SET_GPR_U32(ctx, 31, 0x377A5Cu);
    ctx->pc = 0x377A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377A54u;
            // 0x377a58: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A5Cu; }
        if (ctx->pc != 0x377A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A5Cu; }
        if (ctx->pc != 0x377A5Cu) { return; }
    }
    ctx->pc = 0x377A5Cu;
label_377a5c:
    // 0x377a5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377a60:
    // 0x377a60: 0xc04ce80  jal         func_133A00
label_377a64:
    if (ctx->pc == 0x377A64u) {
        ctx->pc = 0x377A64u;
            // 0x377a64: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->pc = 0x377A68u;
        goto label_377a68;
    }
    ctx->pc = 0x377A60u;
    SET_GPR_U32(ctx, 31, 0x377A68u);
    ctx->pc = 0x377A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377A60u;
            // 0x377a64: 0x26850010  addiu       $a1, $s4, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A68u; }
        if (ctx->pc != 0x377A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A68u; }
        if (ctx->pc != 0x377A68u) { return; }
    }
    ctx->pc = 0x377A68u;
label_377a68:
    // 0x377a68: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x377a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_377a6c:
    // 0x377a6c: 0x9286004c  lbu         $a2, 0x4C($s4)
    ctx->pc = 0x377a6cu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 76)));
label_377a70:
    // 0x377a70: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x377a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_377a74:
    // 0x377a74: 0x8e770000  lw          $s7, 0x0($s3)
    ctx->pc = 0x377a74u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_377a78:
    // 0x377a78: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x377a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_377a7c:
    // 0x377a7c: 0x8c750130  lw          $s5, 0x130($v1)
    ctx->pc = 0x377a7cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_377a80:
    // 0x377a80: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x377a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_377a84:
    // 0x377a84: 0xc07698c  jal         func_1DA630
label_377a88:
    if (ctx->pc == 0x377A88u) {
        ctx->pc = 0x377A88u;
            // 0x377a88: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377A8Cu;
        goto label_377a8c;
    }
    ctx->pc = 0x377A84u;
    SET_GPR_U32(ctx, 31, 0x377A8Cu);
    ctx->pc = 0x377A88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377A84u;
            // 0x377a88: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A8Cu; }
        if (ctx->pc != 0x377A8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377A8Cu; }
        if (ctx->pc != 0x377A8Cu) { return; }
    }
    ctx->pc = 0x377A8Cu;
label_377a8c:
    // 0x377a8c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x377a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_377a90:
    // 0x377a90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_377a94:
    if (ctx->pc == 0x377A94u) {
        ctx->pc = 0x377A98u;
        goto label_377a98;
    }
    ctx->pc = 0x377A90u;
    {
        const bool branch_taken_0x377a90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x377a90) {
            ctx->pc = 0x377AA0u;
            goto label_377aa0;
        }
    }
    ctx->pc = 0x377A98u;
label_377a98:
    // 0x377a98: 0x10000033  b           . + 4 + (0x33 << 2)
label_377a9c:
    if (ctx->pc == 0x377A9Cu) {
        ctx->pc = 0x377A9Cu;
            // 0x377a9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x377AA0u;
        goto label_377aa0;
    }
    ctx->pc = 0x377A98u;
    {
        const bool branch_taken_0x377a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377A98u;
            // 0x377a9c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377a98) {
            ctx->pc = 0x377B68u;
            goto label_377b68;
        }
    }
    ctx->pc = 0x377AA0u;
label_377aa0:
    // 0x377aa0: 0xc0576f4  jal         func_15DBD0
label_377aa4:
    if (ctx->pc == 0x377AA4u) {
        ctx->pc = 0x377AA8u;
        goto label_377aa8;
    }
    ctx->pc = 0x377AA0u;
    SET_GPR_U32(ctx, 31, 0x377AA8u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377AA8u; }
        if (ctx->pc != 0x377AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377AA8u; }
        if (ctx->pc != 0x377AA8u) { return; }
    }
    ctx->pc = 0x377AA8u;
label_377aa8:
    // 0x377aa8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x377aa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_377aac:
    // 0x377aac: 0xc076984  jal         func_1DA610
label_377ab0:
    if (ctx->pc == 0x377AB0u) {
        ctx->pc = 0x377AB0u;
            // 0x377ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377AB4u;
        goto label_377ab4;
    }
    ctx->pc = 0x377AACu;
    SET_GPR_U32(ctx, 31, 0x377AB4u);
    ctx->pc = 0x377AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377AACu;
            // 0x377ab0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377AB4u; }
        if (ctx->pc != 0x377AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377AB4u; }
        if (ctx->pc != 0x377AB4u) { return; }
    }
    ctx->pc = 0x377AB4u;
label_377ab4:
    // 0x377ab4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x377ab4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377ab8:
    // 0x377ab8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x377ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_377abc:
    // 0x377abc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x377abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_377ac0:
    // 0x377ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x377ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377ac4:
    // 0x377ac4: 0xc4421ab0  lwc1        $f2, 0x1AB0($v0)
    ctx->pc = 0x377ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377ac8:
    // 0x377ac8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x377ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377acc:
    // 0x377acc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x377accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_377ad0:
    // 0x377ad0: 0xc4411ab8  lwc1        $f1, 0x1AB8($v0)
    ctx->pc = 0x377ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377ad4:
    // 0x377ad4: 0xe7a200e0  swc1        $f2, 0xE0($sp)
    ctx->pc = 0x377ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_377ad8:
    // 0x377ad8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x377ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_377adc:
    // 0x377adc: 0xc4401abc  lwc1        $f0, 0x1ABC($v0)
    ctx->pc = 0x377adcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 6844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377ae0:
    // 0x377ae0: 0xe7a100e8  swc1        $f1, 0xE8($sp)
    ctx->pc = 0x377ae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_377ae4:
    // 0x377ae4: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x377ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_377ae8:
    // 0x377ae8: 0x8c421ab4  lw          $v0, 0x1AB4($v0)
    ctx->pc = 0x377ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6836)));
label_377aec:
    // 0x377aec: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x377aecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_377af0:
    // 0x377af0: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x377af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_377af4:
    // 0x377af4: 0xc6e00004  lwc1        $f0, 0x4($s7)
    ctx->pc = 0x377af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377af8:
    // 0x377af8: 0xc04cca0  jal         func_133280
label_377afc:
    if (ctx->pc == 0x377AFCu) {
        ctx->pc = 0x377AFCu;
            // 0x377afc: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->pc = 0x377B00u;
        goto label_377b00;
    }
    ctx->pc = 0x377AF8u;
    SET_GPR_U32(ctx, 31, 0x377B00u);
    ctx->pc = 0x377AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377AF8u;
            // 0x377afc: 0xe7a000e4  swc1        $f0, 0xE4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B00u; }
        if (ctx->pc != 0x377B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B00u; }
        if (ctx->pc != 0x377B00u) { return; }
    }
    ctx->pc = 0x377B00u;
label_377b00:
    // 0x377b00: 0xc076980  jal         func_1DA600
label_377b04:
    if (ctx->pc == 0x377B04u) {
        ctx->pc = 0x377B04u;
            // 0x377b04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377B08u;
        goto label_377b08;
    }
    ctx->pc = 0x377B00u;
    SET_GPR_U32(ctx, 31, 0x377B08u);
    ctx->pc = 0x377B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B00u;
            // 0x377b04: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B08u; }
        if (ctx->pc != 0x377B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B08u; }
        if (ctx->pc != 0x377B08u) { return; }
    }
    ctx->pc = 0x377B08u;
label_377b08:
    // 0x377b08: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x377b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_377b0c:
    // 0x377b0c: 0xc04cc34  jal         func_1330D0
label_377b10:
    if (ctx->pc == 0x377B10u) {
        ctx->pc = 0x377B10u;
            // 0x377b10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377B14u;
        goto label_377b14;
    }
    ctx->pc = 0x377B0Cu;
    SET_GPR_U32(ctx, 31, 0x377B14u);
    ctx->pc = 0x377B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B0Cu;
            // 0x377b10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B14u; }
        if (ctx->pc != 0x377B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B14u; }
        if (ctx->pc != 0x377B14u) { return; }
    }
    ctx->pc = 0x377B14u;
label_377b14:
    // 0x377b14: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x377b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_377b18:
    // 0x377b18: 0xc4615070  lwc1        $f1, 0x5070($v1)
    ctx->pc = 0x377b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377b1c:
    // 0x377b1c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x377b1cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_377b20:
    // 0x377b20: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_377b24:
    if (ctx->pc == 0x377B24u) {
        ctx->pc = 0x377B24u;
            // 0x377b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377B28u;
        goto label_377b28;
    }
    ctx->pc = 0x377B20u;
    {
        const bool branch_taken_0x377b20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x377b20) {
            ctx->pc = 0x377B24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377B20u;
            // 0x377b24: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377B30u;
            goto label_377b30;
        }
    }
    ctx->pc = 0x377B28u;
label_377b28:
    // 0x377b28: 0x1000000f  b           . + 4 + (0xF << 2)
label_377b2c:
    if (ctx->pc == 0x377B2Cu) {
        ctx->pc = 0x377B2Cu;
            // 0x377b2c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x377B30u;
        goto label_377b30;
    }
    ctx->pc = 0x377B28u;
    {
        const bool branch_taken_0x377b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377B28u;
            // 0x377b2c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b28) {
            ctx->pc = 0x377B68u;
            goto label_377b68;
        }
    }
    ctx->pc = 0x377B30u;
label_377b30:
    // 0x377b30: 0xc07697c  jal         func_1DA5F0
label_377b34:
    if (ctx->pc == 0x377B34u) {
        ctx->pc = 0x377B38u;
        goto label_377b38;
    }
    ctx->pc = 0x377B30u;
    SET_GPR_U32(ctx, 31, 0x377B38u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B38u; }
        if (ctx->pc != 0x377B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B38u; }
        if (ctx->pc != 0x377B38u) { return; }
    }
    ctx->pc = 0x377B38u;
label_377b38:
    // 0x377b38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377b3c:
    // 0x377b3c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x377b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_377b40:
    // 0x377b40: 0xc04cd60  jal         func_133580
label_377b44:
    if (ctx->pc == 0x377B44u) {
        ctx->pc = 0x377B44u;
            // 0x377b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377B48u;
        goto label_377b48;
    }
    ctx->pc = 0x377B40u;
    SET_GPR_U32(ctx, 31, 0x377B48u);
    ctx->pc = 0x377B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B40u;
            // 0x377b44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B48u; }
        if (ctx->pc != 0x377B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B48u; }
        if (ctx->pc != 0x377B48u) { return; }
    }
    ctx->pc = 0x377B48u;
label_377b48:
    // 0x377b48: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x377b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_377b4c:
    // 0x377b4c: 0xc04c650  jal         func_131940
label_377b50:
    if (ctx->pc == 0x377B50u) {
        ctx->pc = 0x377B50u;
            // 0x377b50: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x377B54u;
        goto label_377b54;
    }
    ctx->pc = 0x377B4Cu;
    SET_GPR_U32(ctx, 31, 0x377B54u);
    ctx->pc = 0x377B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B4Cu;
            // 0x377b50: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B54u; }
        if (ctx->pc != 0x377B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B54u; }
        if (ctx->pc != 0x377B54u) { return; }
    }
    ctx->pc = 0x377B54u;
label_377b54:
    // 0x377b54: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x377b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_377b58:
    // 0x377b58: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x377b58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_377b5c:
    // 0x377b5c: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x377b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_377b60:
    // 0x377b60: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_377b64:
    // 0x377b64: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_377b68:
    // 0x377b68: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x377b68u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_377b6c:
    // 0x377b6c: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_377b70:
    if (ctx->pc == 0x377B70u) {
        ctx->pc = 0x377B70u;
            // 0x377b70: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->pc = 0x377B74u;
        goto label_377b74;
    }
    ctx->pc = 0x377B6Cu;
    {
        const bool branch_taken_0x377b6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x377B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377B6Cu;
            // 0x377b70: 0xae830044  sw          $v1, 0x44($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b6c) {
            ctx->pc = 0x377BE0u;
            goto label_377be0;
        }
    }
    ctx->pc = 0x377B74u;
label_377b74:
    // 0x377b74: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x377b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_377b78:
    // 0x377b78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x377b78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377b7c:
    // 0x377b7c: 0xc04cd60  jal         func_133580
label_377b80:
    if (ctx->pc == 0x377B80u) {
        ctx->pc = 0x377B80u;
            // 0x377b80: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x377B84u;
        goto label_377b84;
    }
    ctx->pc = 0x377B7Cu;
    SET_GPR_U32(ctx, 31, 0x377B84u);
    ctx->pc = 0x377B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B7Cu;
            // 0x377b80: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B84u; }
        if (ctx->pc != 0x377B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B84u; }
        if (ctx->pc != 0x377B84u) { return; }
    }
    ctx->pc = 0x377B84u;
label_377b84:
    // 0x377b84: 0x8ec50028  lw          $a1, 0x28($s6)
    ctx->pc = 0x377b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
label_377b88:
    // 0x377b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x377b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377b8c:
    // 0x377b8c: 0xc04e4a4  jal         func_139290
label_377b90:
    if (ctx->pc == 0x377B90u) {
        ctx->pc = 0x377B90u;
            // 0x377b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377B94u;
        goto label_377b94;
    }
    ctx->pc = 0x377B8Cu;
    SET_GPR_U32(ctx, 31, 0x377B94u);
    ctx->pc = 0x377B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377B8Cu;
            // 0x377b90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B94u; }
        if (ctx->pc != 0x377B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377B94u; }
        if (ctx->pc != 0x377B94u) { return; }
    }
    ctx->pc = 0x377B94u;
label_377b94:
    // 0x377b94: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x377b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_377b98:
    // 0x377b98: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x377b98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
label_377b9c:
    // 0x377b9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x377b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_377ba0:
    // 0x377ba0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x377ba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377ba4:
    // 0x377ba4: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x377ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_377ba8:
    // 0x377ba8: 0x2508e350  addiu       $t0, $t0, -0x1CB0
    ctx->pc = 0x377ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959952));
label_377bac:
    // 0x377bac: 0xc04cfcc  jal         func_133F30
label_377bb0:
    if (ctx->pc == 0x377BB0u) {
        ctx->pc = 0x377BB0u;
            // 0x377bb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377BB4u;
        goto label_377bb4;
    }
    ctx->pc = 0x377BACu;
    SET_GPR_U32(ctx, 31, 0x377BB4u);
    ctx->pc = 0x377BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377BACu;
            // 0x377bb0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133F30u;
    if (runtime->hasFunction(0x133F30u)) {
        auto targetFn = runtime->lookupFunction(0x133F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BB4u; }
        if (ctx->pc != 0x377BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133F30_0x133f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BB4u; }
        if (ctx->pc != 0x377BB4u) { return; }
    }
    ctx->pc = 0x377BB4u;
label_377bb4:
    // 0x377bb4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x377bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_377bb8:
    // 0x377bb8: 0xc66c001c  lwc1        $f12, 0x1C($s3)
    ctx->pc = 0x377bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_377bbc:
    // 0x377bbc: 0x8e660014  lw          $a2, 0x14($s3)
    ctx->pc = 0x377bbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_377bc0:
    // 0x377bc0: 0xc054bbc  jal         func_152EF0
label_377bc4:
    if (ctx->pc == 0x377BC4u) {
        ctx->pc = 0x377BC4u;
            // 0x377bc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377BC8u;
        goto label_377bc8;
    }
    ctx->pc = 0x377BC0u;
    SET_GPR_U32(ctx, 31, 0x377BC8u);
    ctx->pc = 0x377BC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377BC0u;
            // 0x377bc4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BC8u; }
        if (ctx->pc != 0x377BC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BC8u; }
        if (ctx->pc != 0x377BC8u) { return; }
    }
    ctx->pc = 0x377BC8u;
label_377bc8:
    // 0x377bc8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x377bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_377bcc:
    // 0x377bcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x377bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_377bd0:
    // 0x377bd0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x377bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377bd4:
    // 0x377bd4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x377bd4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_377bd8:
    // 0x377bd8: 0xc054c2c  jal         func_1530B0
label_377bdc:
    if (ctx->pc == 0x377BDCu) {
        ctx->pc = 0x377BDCu;
            // 0x377bdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377BE0u;
        goto label_377be0;
    }
    ctx->pc = 0x377BD8u;
    SET_GPR_U32(ctx, 31, 0x377BE0u);
    ctx->pc = 0x377BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377BD8u;
            // 0x377bdc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BE0u; }
        if (ctx->pc != 0x377BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377BE0u; }
        if (ctx->pc != 0x377BE0u) { return; }
    }
    ctx->pc = 0x377BE0u;
label_377be0:
    // 0x377be0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x377be0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_377be4:
    // 0x377be4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x377be4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_377be8:
    // 0x377be8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x377be8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_377bec:
    // 0x377bec: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x377becu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_377bf0:
    // 0x377bf0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x377bf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_377bf4:
    // 0x377bf4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377bf4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_377bf8:
    // 0x377bf8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377bf8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_377bfc:
    // 0x377bfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377bfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_377c00:
    // 0x377c00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377c00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377c04:
    // 0x377c04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377c08:
    // 0x377c08: 0x3e00008  jr          $ra
label_377c0c:
    if (ctx->pc == 0x377C0Cu) {
        ctx->pc = 0x377C0Cu;
            // 0x377c0c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x377C10u;
        goto label_377c10;
    }
    ctx->pc = 0x377C08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377C08u;
            // 0x377c0c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377C10u;
label_377c10:
    // 0x377c10: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x377c10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_377c14:
    // 0x377c14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x377c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_377c18:
    // 0x377c18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x377c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_377c1c:
    // 0x377c1c: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x377c1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_377c20:
    // 0x377c20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377c24:
    // 0x377c24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377c28:
    // 0x377c28: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377c28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377c2c:
    // 0x377c2c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x377c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_377c30:
    // 0x377c30: 0xc0a7a88  jal         func_29EA20
label_377c34:
    if (ctx->pc == 0x377C34u) {
        ctx->pc = 0x377C34u;
            // 0x377c34: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x377C38u;
        goto label_377c38;
    }
    ctx->pc = 0x377C30u;
    SET_GPR_U32(ctx, 31, 0x377C38u);
    ctx->pc = 0x377C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377C30u;
            // 0x377c34: 0x2406002f  addiu       $a2, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C38u; }
        if (ctx->pc != 0x377C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C38u; }
        if (ctx->pc != 0x377C38u) { return; }
    }
    ctx->pc = 0x377C38u;
label_377c38:
    // 0x377c38: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x377c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_377c3c:
    // 0x377c3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x377c3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377c40:
    // 0x377c40: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_377c44:
    if (ctx->pc == 0x377C44u) {
        ctx->pc = 0x377C44u;
            // 0x377c44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x377C48u;
        goto label_377c48;
    }
    ctx->pc = 0x377C40u;
    {
        const bool branch_taken_0x377c40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377C40u;
            // 0x377c44: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c40) {
            ctx->pc = 0x377C80u;
            goto label_377c80;
        }
    }
    ctx->pc = 0x377C48u;
label_377c48:
    // 0x377c48: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x377c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_377c4c:
    // 0x377c4c: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x377c4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_377c50:
    // 0x377c50: 0x8c430cd8  lw          $v1, 0xCD8($v0)
    ctx->pc = 0x377c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3288)));
label_377c54:
    // 0x377c54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377c58:
    // 0x377c58: 0x24c6d6e0  addiu       $a2, $a2, -0x2920
    ctx->pc = 0x377c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956768));
label_377c5c:
    // 0x377c5c: 0x8c65005c  lw          $a1, 0x5C($v1)
    ctx->pc = 0x377c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_377c60:
    // 0x377c60: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x377c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_377c64:
    // 0x377c64: 0xc08afe0  jal         func_22BF80
label_377c68:
    if (ctx->pc == 0x377C68u) {
        ctx->pc = 0x377C68u;
            // 0x377c68: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->pc = 0x377C6Cu;
        goto label_377c6c;
    }
    ctx->pc = 0x377C64u;
    SET_GPR_U32(ctx, 31, 0x377C6Cu);
    ctx->pc = 0x377C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377C64u;
            // 0x377c68: 0x34470020  ori         $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BF80u;
    if (runtime->hasFunction(0x22BF80u)) {
        auto targetFn = runtime->lookupFunction(0x22BF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C6Cu; }
        if (ctx->pc != 0x377C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BF80_0x22bf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C6Cu; }
        if (ctx->pc != 0x377C6Cu) { return; }
    }
    ctx->pc = 0x377C6Cu;
label_377c6c:
    // 0x377c6c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x377c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_377c70:
    // 0x377c70: 0x244225d0  addiu       $v0, $v0, 0x25D0
    ctx->pc = 0x377c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9680));
label_377c74:
    // 0x377c74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x377c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_377c78:
    // 0x377c78: 0xae000140  sw          $zero, 0x140($s0)
    ctx->pc = 0x377c78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 320), GPR_U32(ctx, 0));
label_377c7c:
    // 0x377c7c: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x377c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_377c80:
    // 0x377c80: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x377c80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_377c84:
    // 0x377c84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x377c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_377c88:
    // 0x377c88: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x377c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_377c8c:
    // 0x377c8c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x377c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_377c90:
    // 0x377c90: 0xc08c798  jal         func_231E60
label_377c94:
    if (ctx->pc == 0x377C94u) {
        ctx->pc = 0x377C94u;
            // 0x377c94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377C98u;
        goto label_377c98;
    }
    ctx->pc = 0x377C90u;
    SET_GPR_U32(ctx, 31, 0x377C98u);
    ctx->pc = 0x377C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377C90u;
            // 0x377c94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231E60u;
    if (runtime->hasFunction(0x231E60u)) {
        auto targetFn = runtime->lookupFunction(0x231E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C98u; }
        if (ctx->pc != 0x377C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231E60_0x231e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377C98u; }
        if (ctx->pc != 0x377C98u) { return; }
    }
    ctx->pc = 0x377C98u;
label_377c98:
    // 0x377c98: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x377c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_377c9c:
    // 0x377c9c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x377c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_377ca0:
    // 0x377ca0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x377ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377ca4:
    // 0x377ca4: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x377ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_377ca8:
    // 0x377ca8: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x377ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377cac:
    // 0x377cac: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x377cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377cb0:
    // 0x377cb0: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x377cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_377cb4:
    // 0x377cb4: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x377cb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_377cb8:
    // 0x377cb8: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x377cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_377cbc:
    // 0x377cbc: 0xe7a3007c  swc1        $f3, 0x7C($sp)
    ctx->pc = 0x377cbcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_377cc0:
    // 0x377cc0: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x377cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377cc4:
    // 0x377cc4: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x377cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377cc8:
    // 0x377cc8: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x377cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377ccc:
    // 0x377ccc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x377cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_377cd0:
    // 0x377cd0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x377cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_377cd4:
    // 0x377cd4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x377cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_377cd8:
    // 0x377cd8: 0xc0a3830  jal         func_28E0C0
label_377cdc:
    if (ctx->pc == 0x377CDCu) {
        ctx->pc = 0x377CDCu;
            // 0x377cdc: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->pc = 0x377CE0u;
        goto label_377ce0;
    }
    ctx->pc = 0x377CD8u;
    SET_GPR_U32(ctx, 31, 0x377CE0u);
    ctx->pc = 0x377CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377CD8u;
            // 0x377cdc: 0xe7a20068  swc1        $f2, 0x68($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377CE0u; }
        if (ctx->pc != 0x377CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377CE0u; }
        if (ctx->pc != 0x377CE0u) { return; }
    }
    ctx->pc = 0x377CE0u;
label_377ce0:
    // 0x377ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377ce4:
    // 0x377ce4: 0xc08af10  jal         func_22BC40
label_377ce8:
    if (ctx->pc == 0x377CE8u) {
        ctx->pc = 0x377CE8u;
            // 0x377ce8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x377CECu;
        goto label_377cec;
    }
    ctx->pc = 0x377CE4u;
    SET_GPR_U32(ctx, 31, 0x377CECu);
    ctx->pc = 0x377CE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377CE4u;
            // 0x377ce8: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BC40u;
    if (runtime->hasFunction(0x22BC40u)) {
        auto targetFn = runtime->lookupFunction(0x22BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377CECu; }
        if (ctx->pc != 0x377CECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022BC40_0x22bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377CECu; }
        if (ctx->pc != 0x377CECu) { return; }
    }
    ctx->pc = 0x377CECu;
label_377cec:
    // 0x377cec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x377cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_377cf0:
    // 0x377cf0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377cf0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377cf4:
    // 0x377cf4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377cf8:
    // 0x377cf8: 0x3e00008  jr          $ra
label_377cfc:
    if (ctx->pc == 0x377CFCu) {
        ctx->pc = 0x377CFCu;
            // 0x377cfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x377D00u;
        goto label_377d00;
    }
    ctx->pc = 0x377CF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377CFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377CF8u;
            // 0x377cfc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377D00u;
label_377d00:
    // 0x377d00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_377d04:
    // 0x377d04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x377d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_377d08:
    // 0x377d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_377d0c:
    // 0x377d0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x377d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_377d10:
    // 0x377d10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377d14:
    // 0x377d14: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x377d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_377d18:
    // 0x377d18: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x377d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_377d1c:
    // 0x377d1c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x377d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_377d20:
    // 0x377d20: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x377d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
label_377d24:
    // 0x377d24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x377d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377d28:
    // 0x377d28: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x377d28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_377d2c:
    // 0x377d2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x377d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377d30:
    // 0x377d30: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x377d30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
label_377d34:
    // 0x377d34: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x377d34u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_377d38:
    // 0x377d38: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x377d38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_377d3c:
    // 0x377d3c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x377d3cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_377d40:
    // 0x377d40: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x377d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
label_377d44:
    // 0x377d44: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x377d44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
label_377d48:
    // 0x377d48: 0xc04cbd8  jal         func_132F60
label_377d4c:
    if (ctx->pc == 0x377D4Cu) {
        ctx->pc = 0x377D4Cu;
            // 0x377d4c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x377D50u;
        goto label_377d50;
    }
    ctx->pc = 0x377D48u;
    SET_GPR_U32(ctx, 31, 0x377D50u);
    ctx->pc = 0x377D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377D48u;
            // 0x377d4c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D50u; }
        if (ctx->pc != 0x377D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D50u; }
        if (ctx->pc != 0x377D50u) { return; }
    }
    ctx->pc = 0x377D50u;
label_377d50:
    // 0x377d50: 0xc04c968  jal         func_1325A0
label_377d54:
    if (ctx->pc == 0x377D54u) {
        ctx->pc = 0x377D54u;
            // 0x377d54: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x377D58u;
        goto label_377d58;
    }
    ctx->pc = 0x377D50u;
    SET_GPR_U32(ctx, 31, 0x377D58u);
    ctx->pc = 0x377D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377D50u;
            // 0x377d54: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D58u; }
        if (ctx->pc != 0x377D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377D58u; }
        if (ctx->pc != 0x377D58u) { return; }
    }
    ctx->pc = 0x377D58u;
label_377d58:
    // 0x377d58: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x377d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_377d5c:
    // 0x377d5c: 0x3c080064  lui         $t0, 0x64
    ctx->pc = 0x377d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)100 << 16));
label_377d60:
    // 0x377d60: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x377d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_377d64:
    // 0x377d64: 0x3c07006a  lui         $a3, 0x6A
    ctx->pc = 0x377d64u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)106 << 16));
label_377d68:
    // 0x377d68: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x377d68u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
label_377d6c:
    // 0x377d6c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x377d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_377d70:
    // 0x377d70: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x377d70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_377d74:
    // 0x377d74: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x377d74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_377d78:
    // 0x377d78: 0x8c490788  lw          $t1, 0x788($v0)
    ctx->pc = 0x377d78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1928)));
label_377d7c:
    // 0x377d7c: 0x2508c560  addiu       $t0, $t0, -0x3AA0
    ctx->pc = 0x377d7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952288));
label_377d80:
    // 0x377d80: 0x24e72660  addiu       $a3, $a3, 0x2660
    ctx->pc = 0x377d80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 9824));
label_377d84:
    // 0x377d84: 0x24c62670  addiu       $a2, $a2, 0x2670
    ctx->pc = 0x377d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9840));
label_377d88:
    // 0x377d88: 0x24a526b0  addiu       $a1, $a1, 0x26B0
    ctx->pc = 0x377d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9904));
label_377d8c:
    // 0x377d8c: 0x24847140  addiu       $a0, $a0, 0x7140
    ctx->pc = 0x377d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28992));
label_377d90:
    // 0x377d90: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x377d90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_377d94:
    // 0x377d94: 0x24637180  addiu       $v1, $v1, 0x7180
    ctx->pc = 0x377d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29056));
label_377d98:
    // 0x377d98: 0x91080000  lbu         $t0, 0x0($t0)
    ctx->pc = 0x377d98u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_377d9c:
    // 0x377d9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x377d9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377da0:
    // 0x377da0: 0xa208004d  sb          $t0, 0x4D($s0)
    ctx->pc = 0x377da0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 8));
label_377da4:
    // 0x377da4: 0xae070054  sw          $a3, 0x54($s0)
    ctx->pc = 0x377da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 7));
label_377da8:
    // 0x377da8: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x377da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_377dac:
    // 0x377dac: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x377dacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_377db0:
    // 0x377db0: 0xae050054  sw          $a1, 0x54($s0)
    ctx->pc = 0x377db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 5));
label_377db4:
    // 0x377db4: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x377db4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_377db8:
    // 0x377db8: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x377db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_377dbc:
    // 0x377dbc: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x377dbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
label_377dc0:
    // 0x377dc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_377dc4:
    // 0x377dc4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377dc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377dc8:
    // 0x377dc8: 0x3e00008  jr          $ra
label_377dcc:
    if (ctx->pc == 0x377DCCu) {
        ctx->pc = 0x377DCCu;
            // 0x377dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x377DD0u;
        goto label_377dd0;
    }
    ctx->pc = 0x377DC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377DC8u;
            // 0x377dcc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377DD0u;
label_377dd0:
    // 0x377dd0: 0x3e00008  jr          $ra
label_377dd4:
    if (ctx->pc == 0x377DD4u) {
        ctx->pc = 0x377DD4u;
            // 0x377dd4: 0x24026983  addiu       $v0, $zero, 0x6983 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27011));
        ctx->pc = 0x377DD8u;
        goto label_377dd8;
    }
    ctx->pc = 0x377DD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377DD0u;
            // 0x377dd4: 0x24026983  addiu       $v0, $zero, 0x6983 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 27011));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377DD8u;
label_377dd8:
    // 0x377dd8: 0x0  nop
    ctx->pc = 0x377dd8u;
    // NOP
label_377ddc:
    // 0x377ddc: 0x0  nop
    ctx->pc = 0x377ddcu;
    // NOP
label_377de0:
    // 0x377de0: 0x80ae52c  j           func_2B94B0
label_377de4:
    if (ctx->pc == 0x377DE4u) {
        ctx->pc = 0x377DE4u;
            // 0x377de4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x377DE8u;
        goto label_377de8;
    }
    ctx->pc = 0x377DE0u;
    ctx->pc = 0x377DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377DE0u;
            // 0x377de4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B94B0u;
    {
        auto targetFn = runtime->lookupFunction(0x2B94B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377DE8u;
label_377de8:
    // 0x377de8: 0x0  nop
    ctx->pc = 0x377de8u;
    // NOP
label_377dec:
    // 0x377dec: 0x0  nop
    ctx->pc = 0x377decu;
    // NOP
label_377df0:
    // 0x377df0: 0x80ddd20  j           func_377480
label_377df4:
    if (ctx->pc == 0x377DF4u) {
        ctx->pc = 0x377DF4u;
            // 0x377df4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x377DF8u;
        goto label_377df8;
    }
    ctx->pc = 0x377DF0u;
    ctx->pc = 0x377DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377DF0u;
            // 0x377df4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377480u;
    {
        auto targetFn = runtime->lookupFunction(0x377480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377DF8u;
label_377df8:
    // 0x377df8: 0x0  nop
    ctx->pc = 0x377df8u;
    // NOP
label_377dfc:
    // 0x377dfc: 0x0  nop
    ctx->pc = 0x377dfcu;
    // NOP
label_377e00:
    // 0x377e00: 0x80ddd18  j           func_377460
label_377e04:
    if (ctx->pc == 0x377E04u) {
        ctx->pc = 0x377E04u;
            // 0x377e04: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->pc = 0x377E08u;
        goto label_377e08;
    }
    ctx->pc = 0x377E00u;
    ctx->pc = 0x377E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377E00u;
            // 0x377e04: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377460u;
    {
        auto targetFn = runtime->lookupFunction(0x377460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377E08u;
label_377e08:
    // 0x377e08: 0x0  nop
    ctx->pc = 0x377e08u;
    // NOP
label_377e0c:
    // 0x377e0c: 0x0  nop
    ctx->pc = 0x377e0cu;
    // NOP
label_377e10:
    // 0x377e10: 0x80ddd1c  j           func_377470
label_377e14:
    if (ctx->pc == 0x377E14u) {
        ctx->pc = 0x377E14u;
            // 0x377e14: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->pc = 0x377E18u;
        goto label_377e18;
    }
    ctx->pc = 0x377E10u;
    ctx->pc = 0x377E14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377E10u;
            // 0x377e14: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377470u;
    {
        auto targetFn = runtime->lookupFunction(0x377470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377E18u;
label_377e18:
    // 0x377e18: 0x0  nop
    ctx->pc = 0x377e18u;
    // NOP
label_377e1c:
    // 0x377e1c: 0x0  nop
    ctx->pc = 0x377e1cu;
    // NOP
label_377e20:
    // 0x377e20: 0x80ddd20  j           func_377480
label_377e24:
    if (ctx->pc == 0x377E24u) {
        ctx->pc = 0x377E24u;
            // 0x377e24: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->pc = 0x377E28u;
        goto label_377e28;
    }
    ctx->pc = 0x377E20u;
    ctx->pc = 0x377E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377E20u;
            // 0x377e24: 0x2484ff58  addiu       $a0, $a0, -0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377480u;
    {
        auto targetFn = runtime->lookupFunction(0x377480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377E28u;
label_377e28:
    // 0x377e28: 0x0  nop
    ctx->pc = 0x377e28u;
    // NOP
label_377e2c:
    // 0x377e2c: 0x0  nop
    ctx->pc = 0x377e2cu;
    // NOP
label_377e30:
    // 0x377e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377e34:
    // 0x377e34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x377e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_377e38:
    // 0x377e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377e3c:
    // 0x377e3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377e40:
    // 0x377e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377e44:
    // 0x377e44: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
label_377e48:
    if (ctx->pc == 0x377E48u) {
        ctx->pc = 0x377E48u;
            // 0x377e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377E4Cu;
        goto label_377e4c;
    }
    ctx->pc = 0x377E44u;
    {
        const bool branch_taken_0x377e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x377E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377E44u;
            // 0x377e48: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e44) {
            ctx->pc = 0x377E88u;
            goto label_377e88;
        }
    }
    ctx->pc = 0x377E4Cu;
label_377e4c:
    // 0x377e4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x377e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_377e50:
    // 0x377e50: 0x24427190  addiu       $v0, $v0, 0x7190
    ctx->pc = 0x377e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29072));
label_377e54:
    // 0x377e54: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_377e58:
    if (ctx->pc == 0x377E58u) {
        ctx->pc = 0x377E58u;
            // 0x377e58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x377E5Cu;
        goto label_377e5c;
    }
    ctx->pc = 0x377E54u;
    {
        const bool branch_taken_0x377e54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x377E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377E54u;
            // 0x377e58: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377e54) {
            ctx->pc = 0x377E70u;
            goto label_377e70;
        }
    }
    ctx->pc = 0x377E5Cu;
label_377e5c:
    // 0x377e5c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x377e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_377e60:
    // 0x377e60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377e64:
    // 0x377e64: 0x2442ceb0  addiu       $v0, $v0, -0x3150
    ctx->pc = 0x377e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954672));
label_377e68:
    // 0x377e68: 0xc057a68  jal         func_15E9A0
label_377e6c:
    if (ctx->pc == 0x377E6Cu) {
        ctx->pc = 0x377E6Cu;
            // 0x377e6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x377E70u;
        goto label_377e70;
    }
    ctx->pc = 0x377E68u;
    SET_GPR_U32(ctx, 31, 0x377E70u);
    ctx->pc = 0x377E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377E68u;
            // 0x377e6c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15E9A0u;
    if (runtime->hasFunction(0x15E9A0u)) {
        auto targetFn = runtime->lookupFunction(0x15E9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E70u; }
        if (ctx->pc != 0x377E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015E9A0_0x15e9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E70u; }
        if (ctx->pc != 0x377E70u) { return; }
    }
    ctx->pc = 0x377E70u;
label_377e70:
    // 0x377e70: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x377e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_377e74:
    // 0x377e74: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x377e74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_377e78:
    // 0x377e78: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_377e7c:
    if (ctx->pc == 0x377E7Cu) {
        ctx->pc = 0x377E7Cu;
            // 0x377e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377E80u;
        goto label_377e80;
    }
    ctx->pc = 0x377E78u;
    {
        const bool branch_taken_0x377e78 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x377e78) {
            ctx->pc = 0x377E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377E78u;
            // 0x377e7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377E8Cu;
            goto label_377e8c;
        }
    }
    ctx->pc = 0x377E80u;
label_377e80:
    // 0x377e80: 0xc0400a8  jal         func_1002A0
label_377e84:
    if (ctx->pc == 0x377E84u) {
        ctx->pc = 0x377E84u;
            // 0x377e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377E88u;
        goto label_377e88;
    }
    ctx->pc = 0x377E80u;
    SET_GPR_U32(ctx, 31, 0x377E88u);
    ctx->pc = 0x377E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377E80u;
            // 0x377e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E88u; }
        if (ctx->pc != 0x377E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377E88u; }
        if (ctx->pc != 0x377E88u) { return; }
    }
    ctx->pc = 0x377E88u;
label_377e88:
    // 0x377e88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377e88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377e8c:
    // 0x377e8c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x377e8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_377e90:
    // 0x377e90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x377e90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377e94:
    // 0x377e94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377e98:
    // 0x377e98: 0x3e00008  jr          $ra
label_377e9c:
    if (ctx->pc == 0x377E9Cu) {
        ctx->pc = 0x377E9Cu;
            // 0x377e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x377EA0u;
        goto label_377ea0;
    }
    ctx->pc = 0x377E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377E98u;
            // 0x377e9c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377EA0u;
label_377ea0:
    // 0x377ea0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x377ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_377ea4:
    // 0x377ea4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x377ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_377ea8:
    // 0x377ea8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x377ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_377eac:
    // 0x377eac: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x377eacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_377eb0:
    // 0x377eb0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x377eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_377eb4:
    // 0x377eb4: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x377eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_377eb8:
    // 0x377eb8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x377eb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_377ebc:
    // 0x377ebc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x377ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_377ec0:
    // 0x377ec0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x377ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_377ec4:
    // 0x377ec4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x377ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_377ec8:
    // 0x377ec8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377ecc:
    // 0x377ecc: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x377eccu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_377ed0:
    // 0x377ed0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x377ed0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_377ed4:
    // 0x377ed4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x377ed4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_377ed8:
    // 0x377ed8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x377ed8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_377edc:
    // 0x377edc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x377edcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_377ee0:
    // 0x377ee0: 0x8c7689f0  lw          $s6, -0x7610($v1)
    ctx->pc = 0x377ee0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_377ee4:
    // 0x377ee4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x377ee4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_377ee8:
    // 0x377ee8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x377ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_377eec:
    // 0x377eec: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
label_377ef0:
    if (ctx->pc == 0x377EF0u) {
        ctx->pc = 0x377EF0u;
            // 0x377ef0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377EF4u;
        goto label_377ef4;
    }
    ctx->pc = 0x377EECu;
    {
        const bool branch_taken_0x377eec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x377EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377EECu;
            // 0x377ef0: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377eec) {
            ctx->pc = 0x377F38u;
            goto label_377f38;
        }
    }
    ctx->pc = 0x377EF4u;
label_377ef4:
    // 0x377ef4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x377ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_377ef8:
    // 0x377ef8: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_377efc:
    if (ctx->pc == 0x377EFCu) {
        ctx->pc = 0x377F00u;
        goto label_377f00;
    }
    ctx->pc = 0x377EF8u;
    {
        const bool branch_taken_0x377ef8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x377ef8) {
            ctx->pc = 0x377F08u;
            goto label_377f08;
        }
    }
    ctx->pc = 0x377F00u;
label_377f00:
    // 0x377f00: 0x10000133  b           . + 4 + (0x133 << 2)
label_377f04:
    if (ctx->pc == 0x377F04u) {
        ctx->pc = 0x377F04u;
            // 0x377f04: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x377F08u;
        goto label_377f08;
    }
    ctx->pc = 0x377F00u;
    {
        const bool branch_taken_0x377f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377F04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377F00u;
            // 0x377f04: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f00) {
            ctx->pc = 0x3783D0u;
            goto label_3783d0;
        }
    }
    ctx->pc = 0x377F08u;
label_377f08:
    // 0x377f08: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x377f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377f0c:
    // 0x377f0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x377f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377f10:
    // 0x377f10: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x377f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_377f14:
    // 0x377f14: 0x8c630cb4  lw          $v1, 0xCB4($v1)
    ctx->pc = 0x377f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3252)));
label_377f18:
    // 0x377f18: 0x1065012c  beq         $v1, $a1, . + 4 + (0x12C << 2)
label_377f1c:
    if (ctx->pc == 0x377F1Cu) {
        ctx->pc = 0x377F20u;
        goto label_377f20;
    }
    ctx->pc = 0x377F18u;
    {
        const bool branch_taken_0x377f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x377f18) {
            ctx->pc = 0x3783CCu;
            goto label_3783cc;
        }
    }
    ctx->pc = 0x377F20u;
label_377f20:
    // 0x377f20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x377f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_377f24:
    // 0x377f24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x377f24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_377f28:
    // 0x377f28: 0x320f809  jalr        $t9
label_377f2c:
    if (ctx->pc == 0x377F2Cu) {
        ctx->pc = 0x377F30u;
        goto label_377f30;
    }
    ctx->pc = 0x377F28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x377F30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x377F30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x377F30u; }
            if (ctx->pc != 0x377F30u) { return; }
        }
        }
    }
    ctx->pc = 0x377F30u;
label_377f30:
    // 0x377f30: 0x10000126  b           . + 4 + (0x126 << 2)
label_377f34:
    if (ctx->pc == 0x377F34u) {
        ctx->pc = 0x377F38u;
        goto label_377f38;
    }
    ctx->pc = 0x377F30u;
    {
        const bool branch_taken_0x377f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377f30) {
            ctx->pc = 0x3783CCu;
            goto label_3783cc;
        }
    }
    ctx->pc = 0x377F38u;
label_377f38:
    // 0x377f38: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x377f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_377f3c:
    // 0x377f3c: 0x8ea40058  lw          $a0, 0x58($s5)
    ctx->pc = 0x377f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_377f40:
    // 0x377f40: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x377f40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_377f44:
    // 0x377f44: 0x30841c00  andi        $a0, $a0, 0x1C00
    ctx->pc = 0x377f44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7168);
label_377f48:
    // 0x377f48: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x377f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_377f4c:
    // 0x377f4c: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
label_377f50:
    if (ctx->pc == 0x377F50u) {
        ctx->pc = 0x377F50u;
            // 0x377f50: 0x8cb40130  lw          $s4, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->pc = 0x377F54u;
        goto label_377f54;
    }
    ctx->pc = 0x377F4Cu;
    {
        const bool branch_taken_0x377f4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x377F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377F4Cu;
            // 0x377f50: 0x8cb40130  lw          $s4, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f4c) {
            ctx->pc = 0x377FF8u;
            goto label_377ff8;
        }
    }
    ctx->pc = 0x377F54u;
label_377f54:
    // 0x377f54: 0x24030c00  addiu       $v1, $zero, 0xC00
    ctx->pc = 0x377f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3072));
label_377f58:
    // 0x377f58: 0x1083001f  beq         $a0, $v1, . + 4 + (0x1F << 2)
label_377f5c:
    if (ctx->pc == 0x377F5Cu) {
        ctx->pc = 0x377F60u;
        goto label_377f60;
    }
    ctx->pc = 0x377F58u;
    {
        const bool branch_taken_0x377f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377f58) {
            ctx->pc = 0x377FD8u;
            goto label_377fd8;
        }
    }
    ctx->pc = 0x377F60u;
label_377f60:
    // 0x377f60: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x377f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_377f64:
    // 0x377f64: 0x10830006  beq         $a0, $v1, . + 4 + (0x6 << 2)
label_377f68:
    if (ctx->pc == 0x377F68u) {
        ctx->pc = 0x377F6Cu;
        goto label_377f6c;
    }
    ctx->pc = 0x377F64u;
    {
        const bool branch_taken_0x377f64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377f64) {
            ctx->pc = 0x377F80u;
            goto label_377f80;
        }
    }
    ctx->pc = 0x377F6Cu;
label_377f6c:
    // 0x377f6c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x377f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_377f70:
    // 0x377f70: 0x50830023  beql        $a0, $v1, . + 4 + (0x23 << 2)
label_377f74:
    if (ctx->pc == 0x377F74u) {
        ctx->pc = 0x377F74u;
            // 0x377f74: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x377F78u;
        goto label_377f78;
    }
    ctx->pc = 0x377F70u;
    {
        const bool branch_taken_0x377f70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377f70) {
            ctx->pc = 0x377F74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377F70u;
            // 0x377f74: 0x64030001  daddiu      $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
            ctx->pc = 0x378000u;
            goto label_378000;
        }
    }
    ctx->pc = 0x377F78u;
label_377f78:
    // 0x377f78: 0x10000021  b           . + 4 + (0x21 << 2)
label_377f7c:
    if (ctx->pc == 0x377F7Cu) {
        ctx->pc = 0x377F7Cu;
            // 0x377f7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377F80u;
        goto label_377f80;
    }
    ctx->pc = 0x377F78u;
    {
        const bool branch_taken_0x377f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377F78u;
            // 0x377f7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f78) {
            ctx->pc = 0x378000u;
            goto label_378000;
        }
    }
    ctx->pc = 0x377F80u;
label_377f80:
    // 0x377f80: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x377f80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377f84:
    // 0x377f84: 0x92a5005d  lbu         $a1, 0x5D($s5)
    ctx->pc = 0x377f84u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 93)));
label_377f88:
    // 0x377f88: 0x8c640ea4  lw          $a0, 0xEA4($v1)
    ctx->pc = 0x377f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3748)));
label_377f8c:
    // 0x377f8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x377f8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377f90:
    // 0x377f90: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x377f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_377f94:
    // 0x377f94: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x377f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_377f98:
    // 0x377f98: 0x80630461  lb          $v1, 0x461($v1)
    ctx->pc = 0x377f98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1121)));
label_377f9c:
    // 0x377f9c: 0x18a0000c  blez        $a1, . + 4 + (0xC << 2)
label_377fa0:
    if (ctx->pc == 0x377FA0u) {
        ctx->pc = 0x377FA0u;
            // 0x377fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377FA4u;
        goto label_377fa4;
    }
    ctx->pc = 0x377F9Cu;
    {
        const bool branch_taken_0x377f9c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x377FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377F9Cu;
            // 0x377fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377f9c) {
            ctx->pc = 0x377FD0u;
            goto label_377fd0;
        }
    }
    ctx->pc = 0x377FA4u;
label_377fa4:
    // 0x377fa4: 0x3263c  dsll32      $a0, $v1, 24
    ctx->pc = 0x377fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 24));
label_377fa8:
    // 0x377fa8: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x377fa8u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
label_377fac:
    // 0x377fac: 0x2a61821  addu        $v1, $s5, $a2
    ctx->pc = 0x377facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
label_377fb0:
    // 0x377fb0: 0x8063005e  lb          $v1, 0x5E($v1)
    ctx->pc = 0x377fb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 94)));
label_377fb4:
    // 0x377fb4: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_377fb8:
    if (ctx->pc == 0x377FB8u) {
        ctx->pc = 0x377FB8u;
            // 0x377fb8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->pc = 0x377FBCu;
        goto label_377fbc;
    }
    ctx->pc = 0x377FB4u;
    {
        const bool branch_taken_0x377fb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377fb4) {
            ctx->pc = 0x377FB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377FB4u;
            // 0x377fb8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377FC4u;
            goto label_377fc4;
        }
    }
    ctx->pc = 0x377FBCu;
label_377fbc:
    // 0x377fbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_377fc0:
    if (ctx->pc == 0x377FC0u) {
        ctx->pc = 0x377FC0u;
            // 0x377fc0: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x377FC4u;
        goto label_377fc4;
    }
    ctx->pc = 0x377FBCu;
    {
        const bool branch_taken_0x377fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377FBCu;
            // 0x377fc0: 0x64070001  daddiu      $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377fbc) {
            ctx->pc = 0x377FD0u;
            goto label_377fd0;
        }
    }
    ctx->pc = 0x377FC4u;
label_377fc4:
    // 0x377fc4: 0xc5182a  slt         $v1, $a2, $a1
    ctx->pc = 0x377fc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_377fc8:
    // 0x377fc8: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
label_377fcc:
    if (ctx->pc == 0x377FCCu) {
        ctx->pc = 0x377FCCu;
            // 0x377fcc: 0x2a61821  addu        $v1, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->pc = 0x377FD0u;
        goto label_377fd0;
    }
    ctx->pc = 0x377FC8u;
    {
        const bool branch_taken_0x377fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x377fc8) {
            ctx->pc = 0x377FCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377FC8u;
            // 0x377fcc: 0x2a61821  addu        $v1, $s5, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377FB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_377fb0;
        }
    }
    ctx->pc = 0x377FD0u;
label_377fd0:
    // 0x377fd0: 0x1000000b  b           . + 4 + (0xB << 2)
label_377fd4:
    if (ctx->pc == 0x377FD4u) {
        ctx->pc = 0x377FD4u;
            // 0x377fd4: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x377FD8u;
        goto label_377fd8;
    }
    ctx->pc = 0x377FD0u;
    {
        const bool branch_taken_0x377fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377FD0u;
            // 0x377fd4: 0x30e300ff  andi        $v1, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377fd0) {
            ctx->pc = 0x378000u;
            goto label_378000;
        }
    }
    ctx->pc = 0x377FD8u;
label_377fd8:
    // 0x377fd8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x377fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377fdc:
    // 0x377fdc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x377fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377fe0:
    // 0x377fe0: 0x90656080  lbu         $a1, 0x6080($v1)
    ctx->pc = 0x377fe0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24704)));
label_377fe4:
    // 0x377fe4: 0x2841804  sllv        $v1, $a0, $s4
    ctx->pc = 0x377fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 20) & 0x1F));
label_377fe8:
    // 0x377fe8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x377fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_377fec:
    // 0x377fec: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x377fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_377ff0:
    // 0x377ff0: 0x10000003  b           . + 4 + (0x3 << 2)
label_377ff4:
    if (ctx->pc == 0x377FF4u) {
        ctx->pc = 0x377FF4u;
            // 0x377ff4: 0x3182a  slt         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->pc = 0x377FF8u;
        goto label_377ff8;
    }
    ctx->pc = 0x377FF0u;
    {
        const bool branch_taken_0x377ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377FF0u;
            // 0x377ff4: 0x3182a  slt         $v1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ff0) {
            ctx->pc = 0x378000u;
            goto label_378000;
        }
    }
    ctx->pc = 0x377FF8u;
label_377ff8:
    // 0x377ff8: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377ffc:
    // 0x377ffc: 0x90636088  lbu         $v1, 0x6088($v1)
    ctx->pc = 0x377ffcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 24712)));
label_378000:
    // 0x378000: 0x106000f2  beqz        $v1, . + 4 + (0xF2 << 2)
label_378004:
    if (ctx->pc == 0x378004u) {
        ctx->pc = 0x378008u;
        goto label_378008;
    }
    ctx->pc = 0x378000u;
    {
        const bool branch_taken_0x378000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x378000) {
            ctx->pc = 0x3783CCu;
            goto label_3783cc;
        }
    }
    ctx->pc = 0x378008u;
label_378008:
    // 0x378008: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x378008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37800c:
    // 0x37800c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37800cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_378010:
    // 0x378010: 0x8c458a08  lw          $a1, -0x75F8($v0)
    ctx->pc = 0x378010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_378014:
    // 0x378014: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x378014u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_378018:
    // 0x378018: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x378018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_37801c:
    // 0x37801c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x37801cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_378020:
    // 0x378020: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x378020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_378024:
    // 0x378024: 0x8c900050  lw          $s0, 0x50($a0)
    ctx->pc = 0x378024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_378028:
    // 0x378028: 0xa0600004  sb          $zero, 0x4($v1)
    ctx->pc = 0x378028u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 0));
label_37802c:
    // 0x37802c: 0x8c446078  lw          $a0, 0x6078($v0)
    ctx->pc = 0x37802cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24696)));
label_378030:
    // 0x378030: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_378034:
    if (ctx->pc == 0x378034u) {
        ctx->pc = 0x378034u;
            // 0x378034: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x378038u;
        goto label_378038;
    }
    ctx->pc = 0x378030u;
    {
        const bool branch_taken_0x378030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x378034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378030u;
            // 0x378034: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378030) {
            ctx->pc = 0x378044u;
            goto label_378044;
        }
    }
    ctx->pc = 0x378038u;
label_378038:
    // 0x378038: 0xc0506ac  jal         func_141AB0
label_37803c:
    if (ctx->pc == 0x37803Cu) {
        ctx->pc = 0x37803Cu;
            // 0x37803c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378040u;
        goto label_378040;
    }
    ctx->pc = 0x378038u;
    SET_GPR_U32(ctx, 31, 0x378040u);
    ctx->pc = 0x37803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378038u;
            // 0x37803c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AB0u;
    if (runtime->hasFunction(0x141AB0u)) {
        auto targetFn = runtime->lookupFunction(0x141AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378040u; }
        if (ctx->pc != 0x378040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AB0_0x141ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378040u; }
        if (ctx->pc != 0x378040u) { return; }
    }
    ctx->pc = 0x378040u;
label_378040:
    // 0x378040: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x378040u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_378044:
    // 0x378044: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x378044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_378048:
    // 0x378048: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x378048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37804c:
    // 0x37804c: 0x2832004  sllv        $a0, $v1, $s4
    ctx->pc = 0x37804cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 20) & 0x1F));
label_378050:
    // 0x378050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x378050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378054:
    // 0x378054: 0x90436080  lbu         $v1, 0x6080($v0)
    ctx->pc = 0x378054u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24704)));
label_378058:
    // 0x378058: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x378058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_37805c:
    // 0x37805c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x37805cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378060:
    // 0x378060: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x378060u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378064:
    // 0x378064: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x378064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_378068:
    // 0x378068: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x378068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_37806c:
    // 0x37806c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37806cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_378070:
    // 0x378070: 0xc0506b8  jal         func_141AE0
label_378074:
    if (ctx->pc == 0x378074u) {
        ctx->pc = 0x378074u;
            // 0x378074: 0xa0436080  sb          $v1, 0x6080($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24704), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x378078u;
        goto label_378078;
    }
    ctx->pc = 0x378070u;
    SET_GPR_U32(ctx, 31, 0x378078u);
    ctx->pc = 0x378074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378070u;
            // 0x378074: 0xa0436080  sb          $v1, 0x6080($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 24704), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378078u; }
        if (ctx->pc != 0x378078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378078u; }
        if (ctx->pc != 0x378078u) { return; }
    }
    ctx->pc = 0x378078u;
label_378078:
    // 0x378078: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x378078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_37807c:
    // 0x37807c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37807cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_378080:
    // 0x378080: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
label_378084:
    if (ctx->pc == 0x378084u) {
        ctx->pc = 0x378084u;
            // 0x378084: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->pc = 0x378088u;
        goto label_378088;
    }
    ctx->pc = 0x378080u;
    {
        const bool branch_taken_0x378080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378080) {
            ctx->pc = 0x378084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378080u;
            // 0x378084: 0x8ea20058  lw          $v0, 0x58($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378218u;
            goto label_378218;
        }
    }
    ctx->pc = 0x378088u;
label_378088:
    // 0x378088: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x378088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_37808c:
    // 0x37808c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x37808cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_378090:
    // 0x378090: 0x8c5189f0  lw          $s1, -0x7610($v0)
    ctx->pc = 0x378090u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_378094:
    // 0x378094: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x378094u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378098:
    // 0x378098: 0x27a600bc  addiu       $a2, $sp, 0xBC
    ctx->pc = 0x378098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_37809c:
    // 0x37809c: 0xc0de104  jal         func_378410
label_3780a0:
    if (ctx->pc == 0x3780A0u) {
        ctx->pc = 0x3780A0u;
            // 0x3780a0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->pc = 0x3780A4u;
        goto label_3780a4;
    }
    ctx->pc = 0x37809Cu;
    SET_GPR_U32(ctx, 31, 0x3780A4u);
    ctx->pc = 0x3780A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37809Cu;
            // 0x3780a0: 0xafa000bc  sw          $zero, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x378410u;
    if (runtime->hasFunction(0x378410u)) {
        auto targetFn = runtime->lookupFunction(0x378410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3780A4u; }
        if (ctx->pc != 0x3780A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00378410_0x378410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3780A4u; }
        if (ctx->pc != 0x3780A4u) { return; }
    }
    ctx->pc = 0x3780A4u;
label_3780a4:
    // 0x3780a4: 0x305700ff  andi        $s7, $v0, 0xFF
    ctx->pc = 0x3780a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3780a8:
    // 0x3780a8: 0x12e0005a  beqz        $s7, . + 4 + (0x5A << 2)
label_3780ac:
    if (ctx->pc == 0x3780ACu) {
        ctx->pc = 0x3780B0u;
        goto label_3780b0;
    }
    ctx->pc = 0x3780A8u;
    {
        const bool branch_taken_0x3780a8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x3780a8) {
            ctx->pc = 0x378214u;
            goto label_378214;
        }
    }
    ctx->pc = 0x3780B0u;
label_3780b0:
    // 0x3780b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3780b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3780b4:
    // 0x3780b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3780b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3780b8:
    // 0x3780b8: 0x8f390058  lw          $t9, 0x58($t9)
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 88)));
label_3780bc:
    // 0x3780bc: 0x320f809  jalr        $t9
label_3780c0:
    if (ctx->pc == 0x3780C0u) {
        ctx->pc = 0x3780C0u;
            // 0x3780c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3780C4u;
        goto label_3780c4;
    }
    ctx->pc = 0x3780BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3780C4u);
        ctx->pc = 0x3780C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3780BCu;
            // 0x3780c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3780C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3780C4u; }
            if (ctx->pc != 0x3780C4u) { return; }
        }
        }
    }
    ctx->pc = 0x3780C4u;
label_3780c4:
    // 0x3780c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3780c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3780c8:
    // 0x3780c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3780c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3780cc:
    // 0x3780cc: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x3780ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_3780d0:
    // 0x3780d0: 0x320f809  jalr        $t9
label_3780d4:
    if (ctx->pc == 0x3780D4u) {
        ctx->pc = 0x3780D4u;
            // 0x3780d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3780D8u;
        goto label_3780d8;
    }
    ctx->pc = 0x3780D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3780D8u);
        ctx->pc = 0x3780D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3780D0u;
            // 0x3780d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3780D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3780D8u; }
            if (ctx->pc != 0x3780D8u) { return; }
        }
        }
    }
    ctx->pc = 0x3780D8u;
label_3780d8:
    // 0x3780d8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x3780d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_3780dc:
    // 0x3780dc: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_3780e0:
    if (ctx->pc == 0x3780E0u) {
        ctx->pc = 0x3780E0u;
            // 0x3780e0: 0xc7b500bc  lwc1        $f21, 0xBC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->pc = 0x3780E4u;
        goto label_3780e4;
    }
    ctx->pc = 0x3780DCu;
    {
        const bool branch_taken_0x3780dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x3780E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3780DCu;
            // 0x3780e0: 0xc7b500bc  lwc1        $f21, 0xBC($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780dc) {
            ctx->pc = 0x3780F0u;
            goto label_3780f0;
        }
    }
    ctx->pc = 0x3780E4u;
label_3780e4:
    // 0x3780e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3780e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3780e8:
    // 0x3780e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_3780ec:
    if (ctx->pc == 0x3780ECu) {
        ctx->pc = 0x3780ECu;
            // 0x3780ec: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3780F0u;
        goto label_3780f0;
    }
    ctx->pc = 0x3780E8u;
    {
        const bool branch_taken_0x3780e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3780ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3780E8u;
            // 0x3780ec: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780e8) {
            ctx->pc = 0x37810Cu;
            goto label_37810c;
        }
    }
    ctx->pc = 0x3780F0u;
label_3780f0:
    // 0x3780f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x3780f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_3780f4:
    // 0x3780f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3780f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3780f8:
    // 0x3780f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3780f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3780fc:
    // 0x3780fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3780fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378100:
    // 0x378100: 0x0  nop
    ctx->pc = 0x378100u;
    // NOP
label_378104:
    // 0x378104: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x378104u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_378108:
    // 0x378108: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x378108u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_37810c:
    // 0x37810c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x37810cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_378110:
    // 0x378110: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_378114:
    if (ctx->pc == 0x378114u) {
        ctx->pc = 0x378114u;
            // 0x378114: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x378118u;
        goto label_378118;
    }
    ctx->pc = 0x378110u;
    {
        const bool branch_taken_0x378110 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x378110) {
            ctx->pc = 0x378114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378110u;
            // 0x378114: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378124u;
            goto label_378124;
        }
    }
    ctx->pc = 0x378118u;
label_378118:
    // 0x378118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37811c:
    // 0x37811c: 0x10000007  b           . + 4 + (0x7 << 2)
label_378120:
    if (ctx->pc == 0x378120u) {
        ctx->pc = 0x378120u;
            // 0x378120: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x378124u;
        goto label_378124;
    }
    ctx->pc = 0x37811Cu;
    {
        const bool branch_taken_0x37811c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37811Cu;
            // 0x378120: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37811c) {
            ctx->pc = 0x37813Cu;
            goto label_37813c;
        }
    }
    ctx->pc = 0x378124u;
label_378124:
    // 0x378124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_378128:
    // 0x378128: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378128u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37812c:
    // 0x37812c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37812cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378130:
    // 0x378130: 0x0  nop
    ctx->pc = 0x378130u;
    // NOP
label_378134:
    // 0x378134: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x378134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_378138:
    // 0x378138: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x378138u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_37813c:
    // 0x37813c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x37813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_378140:
    // 0x378140: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_378144:
    if (ctx->pc == 0x378144u) {
        ctx->pc = 0x378144u;
            // 0x378144: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x378148u;
        goto label_378148;
    }
    ctx->pc = 0x378140u;
    {
        const bool branch_taken_0x378140 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x378140) {
            ctx->pc = 0x378144u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378140u;
            // 0x378144: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378154u;
            goto label_378154;
        }
    }
    ctx->pc = 0x378148u;
label_378148:
    // 0x378148: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378148u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37814c:
    // 0x37814c: 0x10000007  b           . + 4 + (0x7 << 2)
label_378150:
    if (ctx->pc == 0x378150u) {
        ctx->pc = 0x378150u;
            // 0x378150: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x378154u;
        goto label_378154;
    }
    ctx->pc = 0x37814Cu;
    {
        const bool branch_taken_0x37814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37814Cu;
            // 0x378150: 0x46800620  cvt.s.w     $f24, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37814c) {
            ctx->pc = 0x37816Cu;
            goto label_37816c;
        }
    }
    ctx->pc = 0x378154u;
label_378154:
    // 0x378154: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_378158:
    // 0x378158: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37815c:
    // 0x37815c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37815cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378160:
    // 0x378160: 0x0  nop
    ctx->pc = 0x378160u;
    // NOP
label_378164:
    // 0x378164: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x378164u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_378168:
    // 0x378168: 0x4618c600  add.s       $f24, $f24, $f24
    ctx->pc = 0x378168u;
    ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[24]);
label_37816c:
    // 0x37816c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x37816cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_378170:
    // 0x378170: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_378174:
    if (ctx->pc == 0x378174u) {
        ctx->pc = 0x378174u;
            // 0x378174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x378178u;
        goto label_378178;
    }
    ctx->pc = 0x378170u;
    {
        const bool branch_taken_0x378170 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x378170) {
            ctx->pc = 0x378174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378170u;
            // 0x378174: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x378184u;
            goto label_378184;
        }
    }
    ctx->pc = 0x378178u;
label_378178:
    // 0x378178: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37817c:
    // 0x37817c: 0x10000007  b           . + 4 + (0x7 << 2)
label_378180:
    if (ctx->pc == 0x378180u) {
        ctx->pc = 0x378180u;
            // 0x378180: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x378184u;
        goto label_378184;
    }
    ctx->pc = 0x37817Cu;
    {
        const bool branch_taken_0x37817c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37817Cu;
            // 0x378180: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37817c) {
            ctx->pc = 0x37819Cu;
            goto label_37819c;
        }
    }
    ctx->pc = 0x378184u;
label_378184:
    // 0x378184: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_378188:
    // 0x378188: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_37818c:
    // 0x37818c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37818cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378190:
    // 0x378190: 0x0  nop
    ctx->pc = 0x378190u;
    // NOP
label_378194:
    // 0x378194: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x378194u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_378198:
    // 0x378198: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x378198u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_37819c:
    // 0x37819c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37819cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_3781a0:
    // 0x3781a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3781a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3781a4:
    // 0x3781a4: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x3781a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_3781a8:
    // 0x3781a8: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x3781a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3781ac:
    // 0x3781ac: 0x24520004  addiu       $s2, $v0, 0x4
    ctx->pc = 0x3781acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_3781b0:
    // 0x3781b0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x3781b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_3781b4:
    // 0x3781b4: 0x320f809  jalr        $t9
label_3781b8:
    if (ctx->pc == 0x3781B8u) {
        ctx->pc = 0x3781B8u;
            // 0x3781b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3781BCu;
        goto label_3781bc;
    }
    ctx->pc = 0x3781B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3781BCu);
        ctx->pc = 0x3781B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3781B4u;
            // 0x3781b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3781BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3781BCu; }
            if (ctx->pc != 0x3781BCu) { return; }
        }
        }
    }
    ctx->pc = 0x3781BCu;
label_3781bc:
    // 0x3781bc: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x3781bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3781c0:
    // 0x3781c0: 0x4617a380  add.s       $f14, $f20, $f23
    ctx->pc = 0x3781c0u;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[23]);
label_3781c4:
    // 0x3781c4: 0x32e300ff  andi        $v1, $s7, 0xFF
    ctx->pc = 0x3781c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_3781c8:
    // 0x3781c8: 0x2402ff00  addiu       $v0, $zero, -0x100
    ctx->pc = 0x3781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_3781cc:
    // 0x3781cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3781ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3781d0:
    // 0x3781d0: 0x622825  or          $a1, $v1, $v0
    ctx->pc = 0x3781d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3781d4:
    // 0x3781d4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x3781d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_3781d8:
    // 0x3781d8: 0x26a600d4  addiu       $a2, $s5, 0xD4
    ctx->pc = 0x3781d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 212));
label_3781dc:
    // 0x3781dc: 0x4616c3c0  add.s       $f15, $f24, $f22
    ctx->pc = 0x3781dcu;
    ctx->f[15] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
label_3781e0:
    // 0x3781e0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3781e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3781e4:
    // 0x3781e4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3781e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_3781e8:
    // 0x3781e8: 0x4600ac06  mov.s       $f16, $f21
    ctx->pc = 0x3781e8u;
    ctx->f[16] = FPU_MOV_S(ctx->f[21]);
label_3781ec:
    // 0x3781ec: 0x320f809  jalr        $t9
label_3781f0:
    if (ctx->pc == 0x3781F0u) {
        ctx->pc = 0x3781F0u;
            // 0x3781f0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x3781F4u;
        goto label_3781f4;
    }
    ctx->pc = 0x3781ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3781F4u);
        ctx->pc = 0x3781F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3781ECu;
            // 0x3781f0: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3781F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3781F4u; }
            if (ctx->pc != 0x3781F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3781F4u;
label_3781f4:
    // 0x3781f4: 0x8e590004  lw          $t9, 0x4($s2)
    ctx->pc = 0x3781f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3781f8:
    // 0x3781f8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3781f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3781fc:
    // 0x3781fc: 0x320f809  jalr        $t9
label_378200:
    if (ctx->pc == 0x378200u) {
        ctx->pc = 0x378200u;
            // 0x378200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378204u;
        goto label_378204;
    }
    ctx->pc = 0x3781FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378204u);
        ctx->pc = 0x378200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3781FCu;
            // 0x378200: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378204u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378204u; }
            if (ctx->pc != 0x378204u) { return; }
        }
        }
    }
    ctx->pc = 0x378204u;
label_378204:
    // 0x378204: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x378204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_378208:
    // 0x378208: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x378208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_37820c:
    // 0x37820c: 0x320f809  jalr        $t9
label_378210:
    if (ctx->pc == 0x378210u) {
        ctx->pc = 0x378210u;
            // 0x378210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378214u;
        goto label_378214;
    }
    ctx->pc = 0x37820Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378214u);
        ctx->pc = 0x378210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37820Cu;
            // 0x378210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378214u; }
            if (ctx->pc != 0x378214u) { return; }
        }
        }
    }
    ctx->pc = 0x378214u;
label_378214:
    // 0x378214: 0x8ea20058  lw          $v0, 0x58($s5)
    ctx->pc = 0x378214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 88)));
label_378218:
    // 0x378218: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x378218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_37821c:
    // 0x37821c: 0x5040005f  beql        $v0, $zero, . + 4 + (0x5F << 2)
label_378220:
    if (ctx->pc == 0x378220u) {
        ctx->pc = 0x378220u;
            // 0x378220: 0x8ed90000  lw          $t9, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->pc = 0x378224u;
        goto label_378224;
    }
    ctx->pc = 0x37821Cu;
    {
        const bool branch_taken_0x37821c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37821c) {
            ctx->pc = 0x378220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37821Cu;
            // 0x378220: 0x8ed90000  lw          $t9, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37839Cu;
            goto label_37839c;
        }
    }
    ctx->pc = 0x378224u;
label_378224:
    // 0x378224: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x378224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_378228:
    // 0x378228: 0xc0de1ac  jal         func_3786B0
label_37822c:
    if (ctx->pc == 0x37822Cu) {
        ctx->pc = 0x37822Cu;
            // 0x37822c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378230u;
        goto label_378230;
    }
    ctx->pc = 0x378228u;
    SET_GPR_U32(ctx, 31, 0x378230u);
    ctx->pc = 0x37822Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x378228u;
            // 0x37822c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3786B0u;
    if (runtime->hasFunction(0x3786B0u)) {
        auto targetFn = runtime->lookupFunction(0x3786B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378230u; }
        if (ctx->pc != 0x378230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003786B0_0x3786b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x378230u; }
        if (ctx->pc != 0x378230u) { return; }
    }
    ctx->pc = 0x378230u;
label_378230:
    // 0x378230: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x378230u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_378234:
    // 0x378234: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
label_378238:
    if (ctx->pc == 0x378238u) {
        ctx->pc = 0x37823Cu;
        goto label_37823c;
    }
    ctx->pc = 0x378234u;
    {
        const bool branch_taken_0x378234 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x378234) {
            ctx->pc = 0x378398u;
            goto label_378398;
        }
    }
    ctx->pc = 0x37823Cu;
label_37823c:
    // 0x37823c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x37823cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_378240:
    // 0x378240: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x378240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_378244:
    // 0x378244: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x378244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_378248:
    // 0x378248: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x378248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_37824c:
    // 0x37824c: 0x320f809  jalr        $t9
label_378250:
    if (ctx->pc == 0x378250u) {
        ctx->pc = 0x378250u;
            // 0x378250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378254u;
        goto label_378254;
    }
    ctx->pc = 0x37824Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378254u);
        ctx->pc = 0x378250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37824Cu;
            // 0x378250: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378254u; }
            if (ctx->pc != 0x378254u) { return; }
        }
        }
    }
    ctx->pc = 0x378254u;
label_378254:
    // 0x378254: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x378254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_378258:
    // 0x378258: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_37825c:
    if (ctx->pc == 0x37825Cu) {
        ctx->pc = 0x37825Cu;
            // 0x37825c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x378260u;
        goto label_378260;
    }
    ctx->pc = 0x378258u;
    {
        const bool branch_taken_0x378258 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x378258) {
            ctx->pc = 0x37825Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378258u;
            // 0x37825c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37826Cu;
            goto label_37826c;
        }
    }
    ctx->pc = 0x378260u;
label_378260:
    // 0x378260: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378260u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378264:
    // 0x378264: 0x10000007  b           . + 4 + (0x7 << 2)
label_378268:
    if (ctx->pc == 0x378268u) {
        ctx->pc = 0x378268u;
            // 0x378268: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37826Cu;
        goto label_37826c;
    }
    ctx->pc = 0x378264u;
    {
        const bool branch_taken_0x378264 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378264u;
            // 0x378268: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378264) {
            ctx->pc = 0x378284u;
            goto label_378284;
        }
    }
    ctx->pc = 0x37826Cu;
label_37826c:
    // 0x37826c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37826cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_378270:
    // 0x378270: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_378274:
    // 0x378274: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378274u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378278:
    // 0x378278: 0x0  nop
    ctx->pc = 0x378278u;
    // NOP
label_37827c:
    // 0x37827c: 0x46800560  cvt.s.w     $f21, $f0
    ctx->pc = 0x37827cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_378280:
    // 0x378280: 0x4615ad40  add.s       $f21, $f21, $f21
    ctx->pc = 0x378280u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[21]);
label_378284:
    // 0x378284: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x378284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_378288:
    // 0x378288: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_37828c:
    if (ctx->pc == 0x37828Cu) {
        ctx->pc = 0x37828Cu;
            // 0x37828c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x378290u;
        goto label_378290;
    }
    ctx->pc = 0x378288u;
    {
        const bool branch_taken_0x378288 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x378288) {
            ctx->pc = 0x37828Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x378288u;
            // 0x37828c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37829Cu;
            goto label_37829c;
        }
    }
    ctx->pc = 0x378290u;
label_378290:
    // 0x378290: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x378290u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378294:
    // 0x378294: 0x10000007  b           . + 4 + (0x7 << 2)
label_378298:
    if (ctx->pc == 0x378298u) {
        ctx->pc = 0x378298u;
            // 0x378298: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x37829Cu;
        goto label_37829c;
    }
    ctx->pc = 0x378294u;
    {
        const bool branch_taken_0x378294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x378298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378294u;
            // 0x378298: 0x468005a0  cvt.s.w     $f22, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x378294) {
            ctx->pc = 0x3782B4u;
            goto label_3782b4;
        }
    }
    ctx->pc = 0x37829Cu;
label_37829c:
    // 0x37829c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37829cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3782a0:
    // 0x3782a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3782a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3782a4:
    // 0x3782a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3782a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3782a8:
    // 0x3782a8: 0x0  nop
    ctx->pc = 0x3782a8u;
    // NOP
label_3782ac:
    // 0x3782ac: 0x468005a0  cvt.s.w     $f22, $f0
    ctx->pc = 0x3782acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_3782b0:
    // 0x3782b0: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x3782b0u;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_3782b4:
    // 0x3782b4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3782b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3782b8:
    // 0x3782b8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3782bc:
    if (ctx->pc == 0x3782BCu) {
        ctx->pc = 0x3782BCu;
            // 0x3782bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3782C0u;
        goto label_3782c0;
    }
    ctx->pc = 0x3782B8u;
    {
        const bool branch_taken_0x3782b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3782b8) {
            ctx->pc = 0x3782BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3782B8u;
            // 0x3782bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3782CCu;
            goto label_3782cc;
        }
    }
    ctx->pc = 0x3782C0u;
label_3782c0:
    // 0x3782c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3782c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3782c4:
    // 0x3782c4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3782c8:
    if (ctx->pc == 0x3782C8u) {
        ctx->pc = 0x3782C8u;
            // 0x3782c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3782CCu;
        goto label_3782cc;
    }
    ctx->pc = 0x3782C4u;
    {
        const bool branch_taken_0x3782c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3782C4u;
            // 0x3782c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782c4) {
            ctx->pc = 0x3782E4u;
            goto label_3782e4;
        }
    }
    ctx->pc = 0x3782CCu;
label_3782cc:
    // 0x3782cc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3782ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3782d0:
    // 0x3782d0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3782d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3782d4:
    // 0x3782d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3782d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3782d8:
    // 0x3782d8: 0x0  nop
    ctx->pc = 0x3782d8u;
    // NOP
label_3782dc:
    // 0x3782dc: 0x468005e0  cvt.s.w     $f23, $f0
    ctx->pc = 0x3782dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_3782e0:
    // 0x3782e0: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x3782e0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_3782e4:
    // 0x3782e4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3782e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3782e8:
    // 0x3782e8: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_3782ec:
    if (ctx->pc == 0x3782ECu) {
        ctx->pc = 0x3782ECu;
            // 0x3782ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x3782F0u;
        goto label_3782f0;
    }
    ctx->pc = 0x3782E8u;
    {
        const bool branch_taken_0x3782e8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3782e8) {
            ctx->pc = 0x3782ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3782E8u;
            // 0x3782ec: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3782FCu;
            goto label_3782fc;
        }
    }
    ctx->pc = 0x3782F0u;
label_3782f0:
    // 0x3782f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3782f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3782f4:
    // 0x3782f4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3782f8:
    if (ctx->pc == 0x3782F8u) {
        ctx->pc = 0x3782F8u;
            // 0x3782f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3782FCu;
        goto label_3782fc;
    }
    ctx->pc = 0x3782F4u;
    {
        const bool branch_taken_0x3782f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3782F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3782F4u;
            // 0x3782f8: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3782f4) {
            ctx->pc = 0x378314u;
            goto label_378314;
        }
    }
    ctx->pc = 0x3782FCu;
label_3782fc:
    // 0x3782fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3782fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_378300:
    // 0x378300: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x378300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_378304:
    // 0x378304: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x378304u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_378308:
    // 0x378308: 0x0  nop
    ctx->pc = 0x378308u;
    // NOP
label_37830c:
    // 0x37830c: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x37830cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_378310:
    // 0x378310: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x378310u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_378314:
    // 0x378314: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x378314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_378318:
    // 0x378318: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x378318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37831c:
    // 0x37831c: 0x8c4289e0  lw          $v0, -0x7620($v0)
    ctx->pc = 0x37831cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937056)));
label_378320:
    // 0x378320: 0x8c590008  lw          $t9, 0x8($v0)
    ctx->pc = 0x378320u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_378324:
    // 0x378324: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x378324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_378328:
    // 0x378328: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x378328u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_37832c:
    // 0x37832c: 0x320f809  jalr        $t9
label_378330:
    if (ctx->pc == 0x378330u) {
        ctx->pc = 0x378330u;
            // 0x378330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378334u;
        goto label_378334;
    }
    ctx->pc = 0x37832Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378334u);
        ctx->pc = 0x378330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37832Cu;
            // 0x378330: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378334u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378334u; }
            if (ctx->pc != 0x378334u) { return; }
        }
        }
    }
    ctx->pc = 0x378334u;
label_378334:
    // 0x378334: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x378334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_378338:
    // 0x378338: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x378338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_37833c:
    // 0x37833c: 0x4616a380  add.s       $f14, $f20, $f22
    ctx->pc = 0x37833cu;
    ctx->f[14] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
label_378340:
    // 0x378340: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x378340u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_378344:
    // 0x378344: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x378344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_378348:
    // 0x378348: 0x26a600c4  addiu       $a2, $s5, 0xC4
    ctx->pc = 0x378348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
label_37834c:
    // 0x37834c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x37834cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_378350:
    // 0x378350: 0x832825  or          $a1, $a0, $v1
    ctx->pc = 0x378350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_378354:
    // 0x378354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x378354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_378358:
    // 0x378358: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x378358u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37835c:
    // 0x37835c: 0x4615bbc0  add.s       $f15, $f23, $f21
    ctx->pc = 0x37835cu;
    ctx->f[15] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_378360:
    // 0x378360: 0xc45020f0  lwc1        $f16, 0x20F0($v0)
    ctx->pc = 0x378360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_378364:
    // 0x378364: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x378364u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_378368:
    // 0x378368: 0x320f809  jalr        $t9
label_37836c:
    if (ctx->pc == 0x37836Cu) {
        ctx->pc = 0x37836Cu;
            // 0x37836c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x378370u;
        goto label_378370;
    }
    ctx->pc = 0x378368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378370u);
        ctx->pc = 0x37836Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378368u;
            // 0x37836c: 0x4600bb46  mov.s       $f13, $f23 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378370u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378370u; }
            if (ctx->pc != 0x378370u) { return; }
        }
        }
    }
    ctx->pc = 0x378370u;
label_378370:
    // 0x378370: 0x8e190004  lw          $t9, 0x4($s0)
    ctx->pc = 0x378370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_378374:
    // 0x378374: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x378374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_378378:
    // 0x378378: 0x320f809  jalr        $t9
label_37837c:
    if (ctx->pc == 0x37837Cu) {
        ctx->pc = 0x37837Cu;
            // 0x37837c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x378380u;
        goto label_378380;
    }
    ctx->pc = 0x378378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378380u);
        ctx->pc = 0x37837Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378378u;
            // 0x37837c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x378380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378380u; }
            if (ctx->pc != 0x378380u) { return; }
        }
        }
    }
    ctx->pc = 0x378380u;
label_378380:
    // 0x378380: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x378380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_378384:
    // 0x378384: 0x8c4489f0  lw          $a0, -0x7610($v0)
    ctx->pc = 0x378384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_378388:
    // 0x378388: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x378388u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_37838c:
    // 0x37838c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x37838cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_378390:
    // 0x378390: 0x320f809  jalr        $t9
label_378394:
    if (ctx->pc == 0x378394u) {
        ctx->pc = 0x378398u;
        goto label_378398;
    }
    ctx->pc = 0x378390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x378398u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x378398u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x378398u; }
            if (ctx->pc != 0x378398u) { return; }
        }
        }
    }
    ctx->pc = 0x378398u;
label_378398:
    // 0x378398: 0x8ed90000  lw          $t9, 0x0($s6)
    ctx->pc = 0x378398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_37839c:
    // 0x37839c: 0x8f390054  lw          $t9, 0x54($t9)
    ctx->pc = 0x37839cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 84)));
label_3783a0:
    // 0x3783a0: 0x320f809  jalr        $t9
label_3783a4:
    if (ctx->pc == 0x3783A4u) {
        ctx->pc = 0x3783A4u;
            // 0x3783a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3783A8u;
        goto label_3783a8;
    }
    ctx->pc = 0x3783A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3783A8u);
        ctx->pc = 0x3783A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3783A0u;
            // 0x3783a4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3783A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3783A8u; }
            if (ctx->pc != 0x3783A8u) { return; }
        }
        }
    }
    ctx->pc = 0x3783A8u;
label_3783a8:
    // 0x3783a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3783a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3783ac:
    // 0x3783ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3783acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3783b0:
    // 0x3783b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3783b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3783b4:
    // 0x3783b4: 0xc0506b8  jal         func_141AE0
label_3783b8:
    if (ctx->pc == 0x3783B8u) {
        ctx->pc = 0x3783B8u;
            // 0x3783b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3783BCu;
        goto label_3783bc;
    }
    ctx->pc = 0x3783B4u;
    SET_GPR_U32(ctx, 31, 0x3783BCu);
    ctx->pc = 0x3783B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3783B4u;
            // 0x3783b8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141AE0u;
    if (runtime->hasFunction(0x141AE0u)) {
        auto targetFn = runtime->lookupFunction(0x141AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3783BCu; }
        if (ctx->pc != 0x3783BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141AE0_0x141ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3783BCu; }
        if (ctx->pc != 0x3783BCu) { return; }
    }
    ctx->pc = 0x3783BCu;
label_3783bc:
    // 0x3783bc: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3783bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3783c0:
    // 0x3783c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3783c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3783c4:
    // 0x3783c4: 0x8c6389e0  lw          $v1, -0x7620($v1)
    ctx->pc = 0x3783c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937056)));
label_3783c8:
    // 0x3783c8: 0xa0640004  sb          $a0, 0x4($v1)
    ctx->pc = 0x3783c8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 4));
label_3783cc:
    // 0x3783cc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3783ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3783d0:
    // 0x3783d0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x3783d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_3783d4:
    // 0x3783d4: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x3783d4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3783d8:
    // 0x3783d8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x3783d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_3783dc:
    // 0x3783dc: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x3783dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3783e0:
    // 0x3783e0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3783e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_3783e4:
    // 0x3783e4: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x3783e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3783e8:
    // 0x3783e8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3783e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_3783ec:
    // 0x3783ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3783ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3783f0:
    // 0x3783f0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3783f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3783f4:
    // 0x3783f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3783f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3783f8:
    // 0x3783f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3783f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3783fc:
    // 0x3783fc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3783fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_378400:
    // 0x378400: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x378400u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378404:
    // 0x378404: 0x3e00008  jr          $ra
label_378408:
    if (ctx->pc == 0x378408u) {
        ctx->pc = 0x378408u;
            // 0x378408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x37840Cu;
        goto label_37840c;
    }
    ctx->pc = 0x378404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x378408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x378404u;
            // 0x378408: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37840Cu;
label_37840c:
    // 0x37840c: 0x0  nop
    ctx->pc = 0x37840cu;
    // NOP
}
