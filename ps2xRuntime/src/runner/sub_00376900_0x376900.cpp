#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00376900
// Address: 0x376900 - 0x377a00
void sub_00376900_0x376900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00376900_0x376900");
#endif

    switch (ctx->pc) {
        case 0x376900u: goto label_376900;
        case 0x376904u: goto label_376904;
        case 0x376908u: goto label_376908;
        case 0x37690cu: goto label_37690c;
        case 0x376910u: goto label_376910;
        case 0x376914u: goto label_376914;
        case 0x376918u: goto label_376918;
        case 0x37691cu: goto label_37691c;
        case 0x376920u: goto label_376920;
        case 0x376924u: goto label_376924;
        case 0x376928u: goto label_376928;
        case 0x37692cu: goto label_37692c;
        case 0x376930u: goto label_376930;
        case 0x376934u: goto label_376934;
        case 0x376938u: goto label_376938;
        case 0x37693cu: goto label_37693c;
        case 0x376940u: goto label_376940;
        case 0x376944u: goto label_376944;
        case 0x376948u: goto label_376948;
        case 0x37694cu: goto label_37694c;
        case 0x376950u: goto label_376950;
        case 0x376954u: goto label_376954;
        case 0x376958u: goto label_376958;
        case 0x37695cu: goto label_37695c;
        case 0x376960u: goto label_376960;
        case 0x376964u: goto label_376964;
        case 0x376968u: goto label_376968;
        case 0x37696cu: goto label_37696c;
        case 0x376970u: goto label_376970;
        case 0x376974u: goto label_376974;
        case 0x376978u: goto label_376978;
        case 0x37697cu: goto label_37697c;
        case 0x376980u: goto label_376980;
        case 0x376984u: goto label_376984;
        case 0x376988u: goto label_376988;
        case 0x37698cu: goto label_37698c;
        case 0x376990u: goto label_376990;
        case 0x376994u: goto label_376994;
        case 0x376998u: goto label_376998;
        case 0x37699cu: goto label_37699c;
        case 0x3769a0u: goto label_3769a0;
        case 0x3769a4u: goto label_3769a4;
        case 0x3769a8u: goto label_3769a8;
        case 0x3769acu: goto label_3769ac;
        case 0x3769b0u: goto label_3769b0;
        case 0x3769b4u: goto label_3769b4;
        case 0x3769b8u: goto label_3769b8;
        case 0x3769bcu: goto label_3769bc;
        case 0x3769c0u: goto label_3769c0;
        case 0x3769c4u: goto label_3769c4;
        case 0x3769c8u: goto label_3769c8;
        case 0x3769ccu: goto label_3769cc;
        case 0x3769d0u: goto label_3769d0;
        case 0x3769d4u: goto label_3769d4;
        case 0x3769d8u: goto label_3769d8;
        case 0x3769dcu: goto label_3769dc;
        case 0x3769e0u: goto label_3769e0;
        case 0x3769e4u: goto label_3769e4;
        case 0x3769e8u: goto label_3769e8;
        case 0x3769ecu: goto label_3769ec;
        case 0x3769f0u: goto label_3769f0;
        case 0x3769f4u: goto label_3769f4;
        case 0x3769f8u: goto label_3769f8;
        case 0x3769fcu: goto label_3769fc;
        case 0x376a00u: goto label_376a00;
        case 0x376a04u: goto label_376a04;
        case 0x376a08u: goto label_376a08;
        case 0x376a0cu: goto label_376a0c;
        case 0x376a10u: goto label_376a10;
        case 0x376a14u: goto label_376a14;
        case 0x376a18u: goto label_376a18;
        case 0x376a1cu: goto label_376a1c;
        case 0x376a20u: goto label_376a20;
        case 0x376a24u: goto label_376a24;
        case 0x376a28u: goto label_376a28;
        case 0x376a2cu: goto label_376a2c;
        case 0x376a30u: goto label_376a30;
        case 0x376a34u: goto label_376a34;
        case 0x376a38u: goto label_376a38;
        case 0x376a3cu: goto label_376a3c;
        case 0x376a40u: goto label_376a40;
        case 0x376a44u: goto label_376a44;
        case 0x376a48u: goto label_376a48;
        case 0x376a4cu: goto label_376a4c;
        case 0x376a50u: goto label_376a50;
        case 0x376a54u: goto label_376a54;
        case 0x376a58u: goto label_376a58;
        case 0x376a5cu: goto label_376a5c;
        case 0x376a60u: goto label_376a60;
        case 0x376a64u: goto label_376a64;
        case 0x376a68u: goto label_376a68;
        case 0x376a6cu: goto label_376a6c;
        case 0x376a70u: goto label_376a70;
        case 0x376a74u: goto label_376a74;
        case 0x376a78u: goto label_376a78;
        case 0x376a7cu: goto label_376a7c;
        case 0x376a80u: goto label_376a80;
        case 0x376a84u: goto label_376a84;
        case 0x376a88u: goto label_376a88;
        case 0x376a8cu: goto label_376a8c;
        case 0x376a90u: goto label_376a90;
        case 0x376a94u: goto label_376a94;
        case 0x376a98u: goto label_376a98;
        case 0x376a9cu: goto label_376a9c;
        case 0x376aa0u: goto label_376aa0;
        case 0x376aa4u: goto label_376aa4;
        case 0x376aa8u: goto label_376aa8;
        case 0x376aacu: goto label_376aac;
        case 0x376ab0u: goto label_376ab0;
        case 0x376ab4u: goto label_376ab4;
        case 0x376ab8u: goto label_376ab8;
        case 0x376abcu: goto label_376abc;
        case 0x376ac0u: goto label_376ac0;
        case 0x376ac4u: goto label_376ac4;
        case 0x376ac8u: goto label_376ac8;
        case 0x376accu: goto label_376acc;
        case 0x376ad0u: goto label_376ad0;
        case 0x376ad4u: goto label_376ad4;
        case 0x376ad8u: goto label_376ad8;
        case 0x376adcu: goto label_376adc;
        case 0x376ae0u: goto label_376ae0;
        case 0x376ae4u: goto label_376ae4;
        case 0x376ae8u: goto label_376ae8;
        case 0x376aecu: goto label_376aec;
        case 0x376af0u: goto label_376af0;
        case 0x376af4u: goto label_376af4;
        case 0x376af8u: goto label_376af8;
        case 0x376afcu: goto label_376afc;
        case 0x376b00u: goto label_376b00;
        case 0x376b04u: goto label_376b04;
        case 0x376b08u: goto label_376b08;
        case 0x376b0cu: goto label_376b0c;
        case 0x376b10u: goto label_376b10;
        case 0x376b14u: goto label_376b14;
        case 0x376b18u: goto label_376b18;
        case 0x376b1cu: goto label_376b1c;
        case 0x376b20u: goto label_376b20;
        case 0x376b24u: goto label_376b24;
        case 0x376b28u: goto label_376b28;
        case 0x376b2cu: goto label_376b2c;
        case 0x376b30u: goto label_376b30;
        case 0x376b34u: goto label_376b34;
        case 0x376b38u: goto label_376b38;
        case 0x376b3cu: goto label_376b3c;
        case 0x376b40u: goto label_376b40;
        case 0x376b44u: goto label_376b44;
        case 0x376b48u: goto label_376b48;
        case 0x376b4cu: goto label_376b4c;
        case 0x376b50u: goto label_376b50;
        case 0x376b54u: goto label_376b54;
        case 0x376b58u: goto label_376b58;
        case 0x376b5cu: goto label_376b5c;
        case 0x376b60u: goto label_376b60;
        case 0x376b64u: goto label_376b64;
        case 0x376b68u: goto label_376b68;
        case 0x376b6cu: goto label_376b6c;
        case 0x376b70u: goto label_376b70;
        case 0x376b74u: goto label_376b74;
        case 0x376b78u: goto label_376b78;
        case 0x376b7cu: goto label_376b7c;
        case 0x376b80u: goto label_376b80;
        case 0x376b84u: goto label_376b84;
        case 0x376b88u: goto label_376b88;
        case 0x376b8cu: goto label_376b8c;
        case 0x376b90u: goto label_376b90;
        case 0x376b94u: goto label_376b94;
        case 0x376b98u: goto label_376b98;
        case 0x376b9cu: goto label_376b9c;
        case 0x376ba0u: goto label_376ba0;
        case 0x376ba4u: goto label_376ba4;
        case 0x376ba8u: goto label_376ba8;
        case 0x376bacu: goto label_376bac;
        case 0x376bb0u: goto label_376bb0;
        case 0x376bb4u: goto label_376bb4;
        case 0x376bb8u: goto label_376bb8;
        case 0x376bbcu: goto label_376bbc;
        case 0x376bc0u: goto label_376bc0;
        case 0x376bc4u: goto label_376bc4;
        case 0x376bc8u: goto label_376bc8;
        case 0x376bccu: goto label_376bcc;
        case 0x376bd0u: goto label_376bd0;
        case 0x376bd4u: goto label_376bd4;
        case 0x376bd8u: goto label_376bd8;
        case 0x376bdcu: goto label_376bdc;
        case 0x376be0u: goto label_376be0;
        case 0x376be4u: goto label_376be4;
        case 0x376be8u: goto label_376be8;
        case 0x376becu: goto label_376bec;
        case 0x376bf0u: goto label_376bf0;
        case 0x376bf4u: goto label_376bf4;
        case 0x376bf8u: goto label_376bf8;
        case 0x376bfcu: goto label_376bfc;
        case 0x376c00u: goto label_376c00;
        case 0x376c04u: goto label_376c04;
        case 0x376c08u: goto label_376c08;
        case 0x376c0cu: goto label_376c0c;
        case 0x376c10u: goto label_376c10;
        case 0x376c14u: goto label_376c14;
        case 0x376c18u: goto label_376c18;
        case 0x376c1cu: goto label_376c1c;
        case 0x376c20u: goto label_376c20;
        case 0x376c24u: goto label_376c24;
        case 0x376c28u: goto label_376c28;
        case 0x376c2cu: goto label_376c2c;
        case 0x376c30u: goto label_376c30;
        case 0x376c34u: goto label_376c34;
        case 0x376c38u: goto label_376c38;
        case 0x376c3cu: goto label_376c3c;
        case 0x376c40u: goto label_376c40;
        case 0x376c44u: goto label_376c44;
        case 0x376c48u: goto label_376c48;
        case 0x376c4cu: goto label_376c4c;
        case 0x376c50u: goto label_376c50;
        case 0x376c54u: goto label_376c54;
        case 0x376c58u: goto label_376c58;
        case 0x376c5cu: goto label_376c5c;
        case 0x376c60u: goto label_376c60;
        case 0x376c64u: goto label_376c64;
        case 0x376c68u: goto label_376c68;
        case 0x376c6cu: goto label_376c6c;
        case 0x376c70u: goto label_376c70;
        case 0x376c74u: goto label_376c74;
        case 0x376c78u: goto label_376c78;
        case 0x376c7cu: goto label_376c7c;
        case 0x376c80u: goto label_376c80;
        case 0x376c84u: goto label_376c84;
        case 0x376c88u: goto label_376c88;
        case 0x376c8cu: goto label_376c8c;
        case 0x376c90u: goto label_376c90;
        case 0x376c94u: goto label_376c94;
        case 0x376c98u: goto label_376c98;
        case 0x376c9cu: goto label_376c9c;
        case 0x376ca0u: goto label_376ca0;
        case 0x376ca4u: goto label_376ca4;
        case 0x376ca8u: goto label_376ca8;
        case 0x376cacu: goto label_376cac;
        case 0x376cb0u: goto label_376cb0;
        case 0x376cb4u: goto label_376cb4;
        case 0x376cb8u: goto label_376cb8;
        case 0x376cbcu: goto label_376cbc;
        case 0x376cc0u: goto label_376cc0;
        case 0x376cc4u: goto label_376cc4;
        case 0x376cc8u: goto label_376cc8;
        case 0x376cccu: goto label_376ccc;
        case 0x376cd0u: goto label_376cd0;
        case 0x376cd4u: goto label_376cd4;
        case 0x376cd8u: goto label_376cd8;
        case 0x376cdcu: goto label_376cdc;
        case 0x376ce0u: goto label_376ce0;
        case 0x376ce4u: goto label_376ce4;
        case 0x376ce8u: goto label_376ce8;
        case 0x376cecu: goto label_376cec;
        case 0x376cf0u: goto label_376cf0;
        case 0x376cf4u: goto label_376cf4;
        case 0x376cf8u: goto label_376cf8;
        case 0x376cfcu: goto label_376cfc;
        case 0x376d00u: goto label_376d00;
        case 0x376d04u: goto label_376d04;
        case 0x376d08u: goto label_376d08;
        case 0x376d0cu: goto label_376d0c;
        case 0x376d10u: goto label_376d10;
        case 0x376d14u: goto label_376d14;
        case 0x376d18u: goto label_376d18;
        case 0x376d1cu: goto label_376d1c;
        case 0x376d20u: goto label_376d20;
        case 0x376d24u: goto label_376d24;
        case 0x376d28u: goto label_376d28;
        case 0x376d2cu: goto label_376d2c;
        case 0x376d30u: goto label_376d30;
        case 0x376d34u: goto label_376d34;
        case 0x376d38u: goto label_376d38;
        case 0x376d3cu: goto label_376d3c;
        case 0x376d40u: goto label_376d40;
        case 0x376d44u: goto label_376d44;
        case 0x376d48u: goto label_376d48;
        case 0x376d4cu: goto label_376d4c;
        case 0x376d50u: goto label_376d50;
        case 0x376d54u: goto label_376d54;
        case 0x376d58u: goto label_376d58;
        case 0x376d5cu: goto label_376d5c;
        case 0x376d60u: goto label_376d60;
        case 0x376d64u: goto label_376d64;
        case 0x376d68u: goto label_376d68;
        case 0x376d6cu: goto label_376d6c;
        case 0x376d70u: goto label_376d70;
        case 0x376d74u: goto label_376d74;
        case 0x376d78u: goto label_376d78;
        case 0x376d7cu: goto label_376d7c;
        case 0x376d80u: goto label_376d80;
        case 0x376d84u: goto label_376d84;
        case 0x376d88u: goto label_376d88;
        case 0x376d8cu: goto label_376d8c;
        case 0x376d90u: goto label_376d90;
        case 0x376d94u: goto label_376d94;
        case 0x376d98u: goto label_376d98;
        case 0x376d9cu: goto label_376d9c;
        case 0x376da0u: goto label_376da0;
        case 0x376da4u: goto label_376da4;
        case 0x376da8u: goto label_376da8;
        case 0x376dacu: goto label_376dac;
        case 0x376db0u: goto label_376db0;
        case 0x376db4u: goto label_376db4;
        case 0x376db8u: goto label_376db8;
        case 0x376dbcu: goto label_376dbc;
        case 0x376dc0u: goto label_376dc0;
        case 0x376dc4u: goto label_376dc4;
        case 0x376dc8u: goto label_376dc8;
        case 0x376dccu: goto label_376dcc;
        case 0x376dd0u: goto label_376dd0;
        case 0x376dd4u: goto label_376dd4;
        case 0x376dd8u: goto label_376dd8;
        case 0x376ddcu: goto label_376ddc;
        case 0x376de0u: goto label_376de0;
        case 0x376de4u: goto label_376de4;
        case 0x376de8u: goto label_376de8;
        case 0x376decu: goto label_376dec;
        case 0x376df0u: goto label_376df0;
        case 0x376df4u: goto label_376df4;
        case 0x376df8u: goto label_376df8;
        case 0x376dfcu: goto label_376dfc;
        case 0x376e00u: goto label_376e00;
        case 0x376e04u: goto label_376e04;
        case 0x376e08u: goto label_376e08;
        case 0x376e0cu: goto label_376e0c;
        case 0x376e10u: goto label_376e10;
        case 0x376e14u: goto label_376e14;
        case 0x376e18u: goto label_376e18;
        case 0x376e1cu: goto label_376e1c;
        case 0x376e20u: goto label_376e20;
        case 0x376e24u: goto label_376e24;
        case 0x376e28u: goto label_376e28;
        case 0x376e2cu: goto label_376e2c;
        case 0x376e30u: goto label_376e30;
        case 0x376e34u: goto label_376e34;
        case 0x376e38u: goto label_376e38;
        case 0x376e3cu: goto label_376e3c;
        case 0x376e40u: goto label_376e40;
        case 0x376e44u: goto label_376e44;
        case 0x376e48u: goto label_376e48;
        case 0x376e4cu: goto label_376e4c;
        case 0x376e50u: goto label_376e50;
        case 0x376e54u: goto label_376e54;
        case 0x376e58u: goto label_376e58;
        case 0x376e5cu: goto label_376e5c;
        case 0x376e60u: goto label_376e60;
        case 0x376e64u: goto label_376e64;
        case 0x376e68u: goto label_376e68;
        case 0x376e6cu: goto label_376e6c;
        case 0x376e70u: goto label_376e70;
        case 0x376e74u: goto label_376e74;
        case 0x376e78u: goto label_376e78;
        case 0x376e7cu: goto label_376e7c;
        case 0x376e80u: goto label_376e80;
        case 0x376e84u: goto label_376e84;
        case 0x376e88u: goto label_376e88;
        case 0x376e8cu: goto label_376e8c;
        case 0x376e90u: goto label_376e90;
        case 0x376e94u: goto label_376e94;
        case 0x376e98u: goto label_376e98;
        case 0x376e9cu: goto label_376e9c;
        case 0x376ea0u: goto label_376ea0;
        case 0x376ea4u: goto label_376ea4;
        case 0x376ea8u: goto label_376ea8;
        case 0x376eacu: goto label_376eac;
        case 0x376eb0u: goto label_376eb0;
        case 0x376eb4u: goto label_376eb4;
        case 0x376eb8u: goto label_376eb8;
        case 0x376ebcu: goto label_376ebc;
        case 0x376ec0u: goto label_376ec0;
        case 0x376ec4u: goto label_376ec4;
        case 0x376ec8u: goto label_376ec8;
        case 0x376eccu: goto label_376ecc;
        case 0x376ed0u: goto label_376ed0;
        case 0x376ed4u: goto label_376ed4;
        case 0x376ed8u: goto label_376ed8;
        case 0x376edcu: goto label_376edc;
        case 0x376ee0u: goto label_376ee0;
        case 0x376ee4u: goto label_376ee4;
        case 0x376ee8u: goto label_376ee8;
        case 0x376eecu: goto label_376eec;
        case 0x376ef0u: goto label_376ef0;
        case 0x376ef4u: goto label_376ef4;
        case 0x376ef8u: goto label_376ef8;
        case 0x376efcu: goto label_376efc;
        case 0x376f00u: goto label_376f00;
        case 0x376f04u: goto label_376f04;
        case 0x376f08u: goto label_376f08;
        case 0x376f0cu: goto label_376f0c;
        case 0x376f10u: goto label_376f10;
        case 0x376f14u: goto label_376f14;
        case 0x376f18u: goto label_376f18;
        case 0x376f1cu: goto label_376f1c;
        case 0x376f20u: goto label_376f20;
        case 0x376f24u: goto label_376f24;
        case 0x376f28u: goto label_376f28;
        case 0x376f2cu: goto label_376f2c;
        case 0x376f30u: goto label_376f30;
        case 0x376f34u: goto label_376f34;
        case 0x376f38u: goto label_376f38;
        case 0x376f3cu: goto label_376f3c;
        case 0x376f40u: goto label_376f40;
        case 0x376f44u: goto label_376f44;
        case 0x376f48u: goto label_376f48;
        case 0x376f4cu: goto label_376f4c;
        case 0x376f50u: goto label_376f50;
        case 0x376f54u: goto label_376f54;
        case 0x376f58u: goto label_376f58;
        case 0x376f5cu: goto label_376f5c;
        case 0x376f60u: goto label_376f60;
        case 0x376f64u: goto label_376f64;
        case 0x376f68u: goto label_376f68;
        case 0x376f6cu: goto label_376f6c;
        case 0x376f70u: goto label_376f70;
        case 0x376f74u: goto label_376f74;
        case 0x376f78u: goto label_376f78;
        case 0x376f7cu: goto label_376f7c;
        case 0x376f80u: goto label_376f80;
        case 0x376f84u: goto label_376f84;
        case 0x376f88u: goto label_376f88;
        case 0x376f8cu: goto label_376f8c;
        case 0x376f90u: goto label_376f90;
        case 0x376f94u: goto label_376f94;
        case 0x376f98u: goto label_376f98;
        case 0x376f9cu: goto label_376f9c;
        case 0x376fa0u: goto label_376fa0;
        case 0x376fa4u: goto label_376fa4;
        case 0x376fa8u: goto label_376fa8;
        case 0x376facu: goto label_376fac;
        case 0x376fb0u: goto label_376fb0;
        case 0x376fb4u: goto label_376fb4;
        case 0x376fb8u: goto label_376fb8;
        case 0x376fbcu: goto label_376fbc;
        case 0x376fc0u: goto label_376fc0;
        case 0x376fc4u: goto label_376fc4;
        case 0x376fc8u: goto label_376fc8;
        case 0x376fccu: goto label_376fcc;
        case 0x376fd0u: goto label_376fd0;
        case 0x376fd4u: goto label_376fd4;
        case 0x376fd8u: goto label_376fd8;
        case 0x376fdcu: goto label_376fdc;
        case 0x376fe0u: goto label_376fe0;
        case 0x376fe4u: goto label_376fe4;
        case 0x376fe8u: goto label_376fe8;
        case 0x376fecu: goto label_376fec;
        case 0x376ff0u: goto label_376ff0;
        case 0x376ff4u: goto label_376ff4;
        case 0x376ff8u: goto label_376ff8;
        case 0x376ffcu: goto label_376ffc;
        case 0x377000u: goto label_377000;
        case 0x377004u: goto label_377004;
        case 0x377008u: goto label_377008;
        case 0x37700cu: goto label_37700c;
        case 0x377010u: goto label_377010;
        case 0x377014u: goto label_377014;
        case 0x377018u: goto label_377018;
        case 0x37701cu: goto label_37701c;
        case 0x377020u: goto label_377020;
        case 0x377024u: goto label_377024;
        case 0x377028u: goto label_377028;
        case 0x37702cu: goto label_37702c;
        case 0x377030u: goto label_377030;
        case 0x377034u: goto label_377034;
        case 0x377038u: goto label_377038;
        case 0x37703cu: goto label_37703c;
        case 0x377040u: goto label_377040;
        case 0x377044u: goto label_377044;
        case 0x377048u: goto label_377048;
        case 0x37704cu: goto label_37704c;
        case 0x377050u: goto label_377050;
        case 0x377054u: goto label_377054;
        case 0x377058u: goto label_377058;
        case 0x37705cu: goto label_37705c;
        case 0x377060u: goto label_377060;
        case 0x377064u: goto label_377064;
        case 0x377068u: goto label_377068;
        case 0x37706cu: goto label_37706c;
        case 0x377070u: goto label_377070;
        case 0x377074u: goto label_377074;
        case 0x377078u: goto label_377078;
        case 0x37707cu: goto label_37707c;
        case 0x377080u: goto label_377080;
        case 0x377084u: goto label_377084;
        case 0x377088u: goto label_377088;
        case 0x37708cu: goto label_37708c;
        case 0x377090u: goto label_377090;
        case 0x377094u: goto label_377094;
        case 0x377098u: goto label_377098;
        case 0x37709cu: goto label_37709c;
        case 0x3770a0u: goto label_3770a0;
        case 0x3770a4u: goto label_3770a4;
        case 0x3770a8u: goto label_3770a8;
        case 0x3770acu: goto label_3770ac;
        case 0x3770b0u: goto label_3770b0;
        case 0x3770b4u: goto label_3770b4;
        case 0x3770b8u: goto label_3770b8;
        case 0x3770bcu: goto label_3770bc;
        case 0x3770c0u: goto label_3770c0;
        case 0x3770c4u: goto label_3770c4;
        case 0x3770c8u: goto label_3770c8;
        case 0x3770ccu: goto label_3770cc;
        case 0x3770d0u: goto label_3770d0;
        case 0x3770d4u: goto label_3770d4;
        case 0x3770d8u: goto label_3770d8;
        case 0x3770dcu: goto label_3770dc;
        case 0x3770e0u: goto label_3770e0;
        case 0x3770e4u: goto label_3770e4;
        case 0x3770e8u: goto label_3770e8;
        case 0x3770ecu: goto label_3770ec;
        case 0x3770f0u: goto label_3770f0;
        case 0x3770f4u: goto label_3770f4;
        case 0x3770f8u: goto label_3770f8;
        case 0x3770fcu: goto label_3770fc;
        case 0x377100u: goto label_377100;
        case 0x377104u: goto label_377104;
        case 0x377108u: goto label_377108;
        case 0x37710cu: goto label_37710c;
        case 0x377110u: goto label_377110;
        case 0x377114u: goto label_377114;
        case 0x377118u: goto label_377118;
        case 0x37711cu: goto label_37711c;
        case 0x377120u: goto label_377120;
        case 0x377124u: goto label_377124;
        case 0x377128u: goto label_377128;
        case 0x37712cu: goto label_37712c;
        case 0x377130u: goto label_377130;
        case 0x377134u: goto label_377134;
        case 0x377138u: goto label_377138;
        case 0x37713cu: goto label_37713c;
        case 0x377140u: goto label_377140;
        case 0x377144u: goto label_377144;
        case 0x377148u: goto label_377148;
        case 0x37714cu: goto label_37714c;
        case 0x377150u: goto label_377150;
        case 0x377154u: goto label_377154;
        case 0x377158u: goto label_377158;
        case 0x37715cu: goto label_37715c;
        case 0x377160u: goto label_377160;
        case 0x377164u: goto label_377164;
        case 0x377168u: goto label_377168;
        case 0x37716cu: goto label_37716c;
        case 0x377170u: goto label_377170;
        case 0x377174u: goto label_377174;
        case 0x377178u: goto label_377178;
        case 0x37717cu: goto label_37717c;
        case 0x377180u: goto label_377180;
        case 0x377184u: goto label_377184;
        case 0x377188u: goto label_377188;
        case 0x37718cu: goto label_37718c;
        case 0x377190u: goto label_377190;
        case 0x377194u: goto label_377194;
        case 0x377198u: goto label_377198;
        case 0x37719cu: goto label_37719c;
        case 0x3771a0u: goto label_3771a0;
        case 0x3771a4u: goto label_3771a4;
        case 0x3771a8u: goto label_3771a8;
        case 0x3771acu: goto label_3771ac;
        case 0x3771b0u: goto label_3771b0;
        case 0x3771b4u: goto label_3771b4;
        case 0x3771b8u: goto label_3771b8;
        case 0x3771bcu: goto label_3771bc;
        case 0x3771c0u: goto label_3771c0;
        case 0x3771c4u: goto label_3771c4;
        case 0x3771c8u: goto label_3771c8;
        case 0x3771ccu: goto label_3771cc;
        case 0x3771d0u: goto label_3771d0;
        case 0x3771d4u: goto label_3771d4;
        case 0x3771d8u: goto label_3771d8;
        case 0x3771dcu: goto label_3771dc;
        case 0x3771e0u: goto label_3771e0;
        case 0x3771e4u: goto label_3771e4;
        case 0x3771e8u: goto label_3771e8;
        case 0x3771ecu: goto label_3771ec;
        case 0x3771f0u: goto label_3771f0;
        case 0x3771f4u: goto label_3771f4;
        case 0x3771f8u: goto label_3771f8;
        case 0x3771fcu: goto label_3771fc;
        case 0x377200u: goto label_377200;
        case 0x377204u: goto label_377204;
        case 0x377208u: goto label_377208;
        case 0x37720cu: goto label_37720c;
        case 0x377210u: goto label_377210;
        case 0x377214u: goto label_377214;
        case 0x377218u: goto label_377218;
        case 0x37721cu: goto label_37721c;
        case 0x377220u: goto label_377220;
        case 0x377224u: goto label_377224;
        case 0x377228u: goto label_377228;
        case 0x37722cu: goto label_37722c;
        case 0x377230u: goto label_377230;
        case 0x377234u: goto label_377234;
        case 0x377238u: goto label_377238;
        case 0x37723cu: goto label_37723c;
        case 0x377240u: goto label_377240;
        case 0x377244u: goto label_377244;
        case 0x377248u: goto label_377248;
        case 0x37724cu: goto label_37724c;
        case 0x377250u: goto label_377250;
        case 0x377254u: goto label_377254;
        case 0x377258u: goto label_377258;
        case 0x37725cu: goto label_37725c;
        case 0x377260u: goto label_377260;
        case 0x377264u: goto label_377264;
        case 0x377268u: goto label_377268;
        case 0x37726cu: goto label_37726c;
        case 0x377270u: goto label_377270;
        case 0x377274u: goto label_377274;
        case 0x377278u: goto label_377278;
        case 0x37727cu: goto label_37727c;
        case 0x377280u: goto label_377280;
        case 0x377284u: goto label_377284;
        case 0x377288u: goto label_377288;
        case 0x37728cu: goto label_37728c;
        case 0x377290u: goto label_377290;
        case 0x377294u: goto label_377294;
        case 0x377298u: goto label_377298;
        case 0x37729cu: goto label_37729c;
        case 0x3772a0u: goto label_3772a0;
        case 0x3772a4u: goto label_3772a4;
        case 0x3772a8u: goto label_3772a8;
        case 0x3772acu: goto label_3772ac;
        case 0x3772b0u: goto label_3772b0;
        case 0x3772b4u: goto label_3772b4;
        case 0x3772b8u: goto label_3772b8;
        case 0x3772bcu: goto label_3772bc;
        case 0x3772c0u: goto label_3772c0;
        case 0x3772c4u: goto label_3772c4;
        case 0x3772c8u: goto label_3772c8;
        case 0x3772ccu: goto label_3772cc;
        case 0x3772d0u: goto label_3772d0;
        case 0x3772d4u: goto label_3772d4;
        case 0x3772d8u: goto label_3772d8;
        case 0x3772dcu: goto label_3772dc;
        case 0x3772e0u: goto label_3772e0;
        case 0x3772e4u: goto label_3772e4;
        case 0x3772e8u: goto label_3772e8;
        case 0x3772ecu: goto label_3772ec;
        case 0x3772f0u: goto label_3772f0;
        case 0x3772f4u: goto label_3772f4;
        case 0x3772f8u: goto label_3772f8;
        case 0x3772fcu: goto label_3772fc;
        case 0x377300u: goto label_377300;
        case 0x377304u: goto label_377304;
        case 0x377308u: goto label_377308;
        case 0x37730cu: goto label_37730c;
        case 0x377310u: goto label_377310;
        case 0x377314u: goto label_377314;
        case 0x377318u: goto label_377318;
        case 0x37731cu: goto label_37731c;
        case 0x377320u: goto label_377320;
        case 0x377324u: goto label_377324;
        case 0x377328u: goto label_377328;
        case 0x37732cu: goto label_37732c;
        case 0x377330u: goto label_377330;
        case 0x377334u: goto label_377334;
        case 0x377338u: goto label_377338;
        case 0x37733cu: goto label_37733c;
        case 0x377340u: goto label_377340;
        case 0x377344u: goto label_377344;
        case 0x377348u: goto label_377348;
        case 0x37734cu: goto label_37734c;
        case 0x377350u: goto label_377350;
        case 0x377354u: goto label_377354;
        case 0x377358u: goto label_377358;
        case 0x37735cu: goto label_37735c;
        case 0x377360u: goto label_377360;
        case 0x377364u: goto label_377364;
        case 0x377368u: goto label_377368;
        case 0x37736cu: goto label_37736c;
        case 0x377370u: goto label_377370;
        case 0x377374u: goto label_377374;
        case 0x377378u: goto label_377378;
        case 0x37737cu: goto label_37737c;
        case 0x377380u: goto label_377380;
        case 0x377384u: goto label_377384;
        case 0x377388u: goto label_377388;
        case 0x37738cu: goto label_37738c;
        case 0x377390u: goto label_377390;
        case 0x377394u: goto label_377394;
        case 0x377398u: goto label_377398;
        case 0x37739cu: goto label_37739c;
        case 0x3773a0u: goto label_3773a0;
        case 0x3773a4u: goto label_3773a4;
        case 0x3773a8u: goto label_3773a8;
        case 0x3773acu: goto label_3773ac;
        case 0x3773b0u: goto label_3773b0;
        case 0x3773b4u: goto label_3773b4;
        case 0x3773b8u: goto label_3773b8;
        case 0x3773bcu: goto label_3773bc;
        case 0x3773c0u: goto label_3773c0;
        case 0x3773c4u: goto label_3773c4;
        case 0x3773c8u: goto label_3773c8;
        case 0x3773ccu: goto label_3773cc;
        case 0x3773d0u: goto label_3773d0;
        case 0x3773d4u: goto label_3773d4;
        case 0x3773d8u: goto label_3773d8;
        case 0x3773dcu: goto label_3773dc;
        case 0x3773e0u: goto label_3773e0;
        case 0x3773e4u: goto label_3773e4;
        case 0x3773e8u: goto label_3773e8;
        case 0x3773ecu: goto label_3773ec;
        case 0x3773f0u: goto label_3773f0;
        case 0x3773f4u: goto label_3773f4;
        case 0x3773f8u: goto label_3773f8;
        case 0x3773fcu: goto label_3773fc;
        case 0x377400u: goto label_377400;
        case 0x377404u: goto label_377404;
        case 0x377408u: goto label_377408;
        case 0x37740cu: goto label_37740c;
        case 0x377410u: goto label_377410;
        case 0x377414u: goto label_377414;
        case 0x377418u: goto label_377418;
        case 0x37741cu: goto label_37741c;
        case 0x377420u: goto label_377420;
        case 0x377424u: goto label_377424;
        case 0x377428u: goto label_377428;
        case 0x37742cu: goto label_37742c;
        case 0x377430u: goto label_377430;
        case 0x377434u: goto label_377434;
        case 0x377438u: goto label_377438;
        case 0x37743cu: goto label_37743c;
        case 0x377440u: goto label_377440;
        case 0x377444u: goto label_377444;
        case 0x377448u: goto label_377448;
        case 0x37744cu: goto label_37744c;
        case 0x377450u: goto label_377450;
        case 0x377454u: goto label_377454;
        case 0x377458u: goto label_377458;
        case 0x37745cu: goto label_37745c;
        case 0x377460u: goto label_377460;
        case 0x377464u: goto label_377464;
        case 0x377468u: goto label_377468;
        case 0x37746cu: goto label_37746c;
        case 0x377470u: goto label_377470;
        case 0x377474u: goto label_377474;
        case 0x377478u: goto label_377478;
        case 0x37747cu: goto label_37747c;
        case 0x377480u: goto label_377480;
        case 0x377484u: goto label_377484;
        case 0x377488u: goto label_377488;
        case 0x37748cu: goto label_37748c;
        case 0x377490u: goto label_377490;
        case 0x377494u: goto label_377494;
        case 0x377498u: goto label_377498;
        case 0x37749cu: goto label_37749c;
        case 0x3774a0u: goto label_3774a0;
        case 0x3774a4u: goto label_3774a4;
        case 0x3774a8u: goto label_3774a8;
        case 0x3774acu: goto label_3774ac;
        case 0x3774b0u: goto label_3774b0;
        case 0x3774b4u: goto label_3774b4;
        case 0x3774b8u: goto label_3774b8;
        case 0x3774bcu: goto label_3774bc;
        case 0x3774c0u: goto label_3774c0;
        case 0x3774c4u: goto label_3774c4;
        case 0x3774c8u: goto label_3774c8;
        case 0x3774ccu: goto label_3774cc;
        case 0x3774d0u: goto label_3774d0;
        case 0x3774d4u: goto label_3774d4;
        case 0x3774d8u: goto label_3774d8;
        case 0x3774dcu: goto label_3774dc;
        case 0x3774e0u: goto label_3774e0;
        case 0x3774e4u: goto label_3774e4;
        case 0x3774e8u: goto label_3774e8;
        case 0x3774ecu: goto label_3774ec;
        case 0x3774f0u: goto label_3774f0;
        case 0x3774f4u: goto label_3774f4;
        case 0x3774f8u: goto label_3774f8;
        case 0x3774fcu: goto label_3774fc;
        case 0x377500u: goto label_377500;
        case 0x377504u: goto label_377504;
        case 0x377508u: goto label_377508;
        case 0x37750cu: goto label_37750c;
        case 0x377510u: goto label_377510;
        case 0x377514u: goto label_377514;
        case 0x377518u: goto label_377518;
        case 0x37751cu: goto label_37751c;
        case 0x377520u: goto label_377520;
        case 0x377524u: goto label_377524;
        case 0x377528u: goto label_377528;
        case 0x37752cu: goto label_37752c;
        case 0x377530u: goto label_377530;
        case 0x377534u: goto label_377534;
        case 0x377538u: goto label_377538;
        case 0x37753cu: goto label_37753c;
        case 0x377540u: goto label_377540;
        case 0x377544u: goto label_377544;
        case 0x377548u: goto label_377548;
        case 0x37754cu: goto label_37754c;
        case 0x377550u: goto label_377550;
        case 0x377554u: goto label_377554;
        case 0x377558u: goto label_377558;
        case 0x37755cu: goto label_37755c;
        case 0x377560u: goto label_377560;
        case 0x377564u: goto label_377564;
        case 0x377568u: goto label_377568;
        case 0x37756cu: goto label_37756c;
        case 0x377570u: goto label_377570;
        case 0x377574u: goto label_377574;
        case 0x377578u: goto label_377578;
        case 0x37757cu: goto label_37757c;
        case 0x377580u: goto label_377580;
        case 0x377584u: goto label_377584;
        case 0x377588u: goto label_377588;
        case 0x37758cu: goto label_37758c;
        case 0x377590u: goto label_377590;
        case 0x377594u: goto label_377594;
        case 0x377598u: goto label_377598;
        case 0x37759cu: goto label_37759c;
        case 0x3775a0u: goto label_3775a0;
        case 0x3775a4u: goto label_3775a4;
        case 0x3775a8u: goto label_3775a8;
        case 0x3775acu: goto label_3775ac;
        case 0x3775b0u: goto label_3775b0;
        case 0x3775b4u: goto label_3775b4;
        case 0x3775b8u: goto label_3775b8;
        case 0x3775bcu: goto label_3775bc;
        case 0x3775c0u: goto label_3775c0;
        case 0x3775c4u: goto label_3775c4;
        case 0x3775c8u: goto label_3775c8;
        case 0x3775ccu: goto label_3775cc;
        case 0x3775d0u: goto label_3775d0;
        case 0x3775d4u: goto label_3775d4;
        case 0x3775d8u: goto label_3775d8;
        case 0x3775dcu: goto label_3775dc;
        case 0x3775e0u: goto label_3775e0;
        case 0x3775e4u: goto label_3775e4;
        case 0x3775e8u: goto label_3775e8;
        case 0x3775ecu: goto label_3775ec;
        case 0x3775f0u: goto label_3775f0;
        case 0x3775f4u: goto label_3775f4;
        case 0x3775f8u: goto label_3775f8;
        case 0x3775fcu: goto label_3775fc;
        case 0x377600u: goto label_377600;
        case 0x377604u: goto label_377604;
        case 0x377608u: goto label_377608;
        case 0x37760cu: goto label_37760c;
        case 0x377610u: goto label_377610;
        case 0x377614u: goto label_377614;
        case 0x377618u: goto label_377618;
        case 0x37761cu: goto label_37761c;
        case 0x377620u: goto label_377620;
        case 0x377624u: goto label_377624;
        case 0x377628u: goto label_377628;
        case 0x37762cu: goto label_37762c;
        case 0x377630u: goto label_377630;
        case 0x377634u: goto label_377634;
        case 0x377638u: goto label_377638;
        case 0x37763cu: goto label_37763c;
        case 0x377640u: goto label_377640;
        case 0x377644u: goto label_377644;
        case 0x377648u: goto label_377648;
        case 0x37764cu: goto label_37764c;
        case 0x377650u: goto label_377650;
        case 0x377654u: goto label_377654;
        case 0x377658u: goto label_377658;
        case 0x37765cu: goto label_37765c;
        case 0x377660u: goto label_377660;
        case 0x377664u: goto label_377664;
        case 0x377668u: goto label_377668;
        case 0x37766cu: goto label_37766c;
        case 0x377670u: goto label_377670;
        case 0x377674u: goto label_377674;
        case 0x377678u: goto label_377678;
        case 0x37767cu: goto label_37767c;
        case 0x377680u: goto label_377680;
        case 0x377684u: goto label_377684;
        case 0x377688u: goto label_377688;
        case 0x37768cu: goto label_37768c;
        case 0x377690u: goto label_377690;
        case 0x377694u: goto label_377694;
        case 0x377698u: goto label_377698;
        case 0x37769cu: goto label_37769c;
        case 0x3776a0u: goto label_3776a0;
        case 0x3776a4u: goto label_3776a4;
        case 0x3776a8u: goto label_3776a8;
        case 0x3776acu: goto label_3776ac;
        case 0x3776b0u: goto label_3776b0;
        case 0x3776b4u: goto label_3776b4;
        case 0x3776b8u: goto label_3776b8;
        case 0x3776bcu: goto label_3776bc;
        case 0x3776c0u: goto label_3776c0;
        case 0x3776c4u: goto label_3776c4;
        case 0x3776c8u: goto label_3776c8;
        case 0x3776ccu: goto label_3776cc;
        case 0x3776d0u: goto label_3776d0;
        case 0x3776d4u: goto label_3776d4;
        case 0x3776d8u: goto label_3776d8;
        case 0x3776dcu: goto label_3776dc;
        case 0x3776e0u: goto label_3776e0;
        case 0x3776e4u: goto label_3776e4;
        case 0x3776e8u: goto label_3776e8;
        case 0x3776ecu: goto label_3776ec;
        case 0x3776f0u: goto label_3776f0;
        case 0x3776f4u: goto label_3776f4;
        case 0x3776f8u: goto label_3776f8;
        case 0x3776fcu: goto label_3776fc;
        case 0x377700u: goto label_377700;
        case 0x377704u: goto label_377704;
        case 0x377708u: goto label_377708;
        case 0x37770cu: goto label_37770c;
        case 0x377710u: goto label_377710;
        case 0x377714u: goto label_377714;
        case 0x377718u: goto label_377718;
        case 0x37771cu: goto label_37771c;
        case 0x377720u: goto label_377720;
        case 0x377724u: goto label_377724;
        case 0x377728u: goto label_377728;
        case 0x37772cu: goto label_37772c;
        case 0x377730u: goto label_377730;
        case 0x377734u: goto label_377734;
        case 0x377738u: goto label_377738;
        case 0x37773cu: goto label_37773c;
        case 0x377740u: goto label_377740;
        case 0x377744u: goto label_377744;
        case 0x377748u: goto label_377748;
        case 0x37774cu: goto label_37774c;
        case 0x377750u: goto label_377750;
        case 0x377754u: goto label_377754;
        case 0x377758u: goto label_377758;
        case 0x37775cu: goto label_37775c;
        case 0x377760u: goto label_377760;
        case 0x377764u: goto label_377764;
        case 0x377768u: goto label_377768;
        case 0x37776cu: goto label_37776c;
        case 0x377770u: goto label_377770;
        case 0x377774u: goto label_377774;
        case 0x377778u: goto label_377778;
        case 0x37777cu: goto label_37777c;
        case 0x377780u: goto label_377780;
        case 0x377784u: goto label_377784;
        case 0x377788u: goto label_377788;
        case 0x37778cu: goto label_37778c;
        case 0x377790u: goto label_377790;
        case 0x377794u: goto label_377794;
        case 0x377798u: goto label_377798;
        case 0x37779cu: goto label_37779c;
        case 0x3777a0u: goto label_3777a0;
        case 0x3777a4u: goto label_3777a4;
        case 0x3777a8u: goto label_3777a8;
        case 0x3777acu: goto label_3777ac;
        case 0x3777b0u: goto label_3777b0;
        case 0x3777b4u: goto label_3777b4;
        case 0x3777b8u: goto label_3777b8;
        case 0x3777bcu: goto label_3777bc;
        case 0x3777c0u: goto label_3777c0;
        case 0x3777c4u: goto label_3777c4;
        case 0x3777c8u: goto label_3777c8;
        case 0x3777ccu: goto label_3777cc;
        case 0x3777d0u: goto label_3777d0;
        case 0x3777d4u: goto label_3777d4;
        case 0x3777d8u: goto label_3777d8;
        case 0x3777dcu: goto label_3777dc;
        case 0x3777e0u: goto label_3777e0;
        case 0x3777e4u: goto label_3777e4;
        case 0x3777e8u: goto label_3777e8;
        case 0x3777ecu: goto label_3777ec;
        case 0x3777f0u: goto label_3777f0;
        case 0x3777f4u: goto label_3777f4;
        case 0x3777f8u: goto label_3777f8;
        case 0x3777fcu: goto label_3777fc;
        case 0x377800u: goto label_377800;
        case 0x377804u: goto label_377804;
        case 0x377808u: goto label_377808;
        case 0x37780cu: goto label_37780c;
        case 0x377810u: goto label_377810;
        case 0x377814u: goto label_377814;
        case 0x377818u: goto label_377818;
        case 0x37781cu: goto label_37781c;
        case 0x377820u: goto label_377820;
        case 0x377824u: goto label_377824;
        case 0x377828u: goto label_377828;
        case 0x37782cu: goto label_37782c;
        case 0x377830u: goto label_377830;
        case 0x377834u: goto label_377834;
        case 0x377838u: goto label_377838;
        case 0x37783cu: goto label_37783c;
        case 0x377840u: goto label_377840;
        case 0x377844u: goto label_377844;
        case 0x377848u: goto label_377848;
        case 0x37784cu: goto label_37784c;
        case 0x377850u: goto label_377850;
        case 0x377854u: goto label_377854;
        case 0x377858u: goto label_377858;
        case 0x37785cu: goto label_37785c;
        case 0x377860u: goto label_377860;
        case 0x377864u: goto label_377864;
        case 0x377868u: goto label_377868;
        case 0x37786cu: goto label_37786c;
        case 0x377870u: goto label_377870;
        case 0x377874u: goto label_377874;
        case 0x377878u: goto label_377878;
        case 0x37787cu: goto label_37787c;
        case 0x377880u: goto label_377880;
        case 0x377884u: goto label_377884;
        case 0x377888u: goto label_377888;
        case 0x37788cu: goto label_37788c;
        case 0x377890u: goto label_377890;
        case 0x377894u: goto label_377894;
        case 0x377898u: goto label_377898;
        case 0x37789cu: goto label_37789c;
        case 0x3778a0u: goto label_3778a0;
        case 0x3778a4u: goto label_3778a4;
        case 0x3778a8u: goto label_3778a8;
        case 0x3778acu: goto label_3778ac;
        case 0x3778b0u: goto label_3778b0;
        case 0x3778b4u: goto label_3778b4;
        case 0x3778b8u: goto label_3778b8;
        case 0x3778bcu: goto label_3778bc;
        case 0x3778c0u: goto label_3778c0;
        case 0x3778c4u: goto label_3778c4;
        case 0x3778c8u: goto label_3778c8;
        case 0x3778ccu: goto label_3778cc;
        case 0x3778d0u: goto label_3778d0;
        case 0x3778d4u: goto label_3778d4;
        case 0x3778d8u: goto label_3778d8;
        case 0x3778dcu: goto label_3778dc;
        case 0x3778e0u: goto label_3778e0;
        case 0x3778e4u: goto label_3778e4;
        case 0x3778e8u: goto label_3778e8;
        case 0x3778ecu: goto label_3778ec;
        case 0x3778f0u: goto label_3778f0;
        case 0x3778f4u: goto label_3778f4;
        case 0x3778f8u: goto label_3778f8;
        case 0x3778fcu: goto label_3778fc;
        case 0x377900u: goto label_377900;
        case 0x377904u: goto label_377904;
        case 0x377908u: goto label_377908;
        case 0x37790cu: goto label_37790c;
        case 0x377910u: goto label_377910;
        case 0x377914u: goto label_377914;
        case 0x377918u: goto label_377918;
        case 0x37791cu: goto label_37791c;
        case 0x377920u: goto label_377920;
        case 0x377924u: goto label_377924;
        case 0x377928u: goto label_377928;
        case 0x37792cu: goto label_37792c;
        case 0x377930u: goto label_377930;
        case 0x377934u: goto label_377934;
        case 0x377938u: goto label_377938;
        case 0x37793cu: goto label_37793c;
        case 0x377940u: goto label_377940;
        case 0x377944u: goto label_377944;
        case 0x377948u: goto label_377948;
        case 0x37794cu: goto label_37794c;
        case 0x377950u: goto label_377950;
        case 0x377954u: goto label_377954;
        case 0x377958u: goto label_377958;
        case 0x37795cu: goto label_37795c;
        case 0x377960u: goto label_377960;
        case 0x377964u: goto label_377964;
        case 0x377968u: goto label_377968;
        case 0x37796cu: goto label_37796c;
        case 0x377970u: goto label_377970;
        case 0x377974u: goto label_377974;
        case 0x377978u: goto label_377978;
        case 0x37797cu: goto label_37797c;
        case 0x377980u: goto label_377980;
        case 0x377984u: goto label_377984;
        case 0x377988u: goto label_377988;
        case 0x37798cu: goto label_37798c;
        case 0x377990u: goto label_377990;
        case 0x377994u: goto label_377994;
        case 0x377998u: goto label_377998;
        case 0x37799cu: goto label_37799c;
        case 0x3779a0u: goto label_3779a0;
        case 0x3779a4u: goto label_3779a4;
        case 0x3779a8u: goto label_3779a8;
        case 0x3779acu: goto label_3779ac;
        case 0x3779b0u: goto label_3779b0;
        case 0x3779b4u: goto label_3779b4;
        case 0x3779b8u: goto label_3779b8;
        case 0x3779bcu: goto label_3779bc;
        case 0x3779c0u: goto label_3779c0;
        case 0x3779c4u: goto label_3779c4;
        case 0x3779c8u: goto label_3779c8;
        case 0x3779ccu: goto label_3779cc;
        case 0x3779d0u: goto label_3779d0;
        case 0x3779d4u: goto label_3779d4;
        case 0x3779d8u: goto label_3779d8;
        case 0x3779dcu: goto label_3779dc;
        case 0x3779e0u: goto label_3779e0;
        case 0x3779e4u: goto label_3779e4;
        case 0x3779e8u: goto label_3779e8;
        case 0x3779ecu: goto label_3779ec;
        case 0x3779f0u: goto label_3779f0;
        case 0x3779f4u: goto label_3779f4;
        case 0x3779f8u: goto label_3779f8;
        case 0x3779fcu: goto label_3779fc;
        default: break;
    }

    ctx->pc = 0x376900u;

label_376900:
    // 0x376900: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x376900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_376904:
    // 0x376904: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_376908:
    // 0x376908: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x376908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_37690c:
    // 0x37690c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x37690cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_376910:
    // 0x376910: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x376910u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_376914:
    // 0x376914: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x376914u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_376918:
    // 0x376918: 0x24900100  addiu       $s0, $a0, 0x100
    ctx->pc = 0x376918u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 256));
label_37691c:
    // 0x37691c: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x37691cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_376920:
    // 0x376920: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x376920u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_376924:
    // 0x376924: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x376924u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_376928:
    // 0x376928: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x376928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37692c:
    // 0x37692c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x37692cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376930:
    // 0x376930: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x376930u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_376934:
    // 0x376934: 0x4601081a  mula.s      $f1, $f1
    ctx->pc = 0x376934u;
    ctx->f[31] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_376938:
    // 0x376938: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x376938u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
label_37693c:
    // 0x37693c: 0x4600001c  madd.s      $f0, $f0, $f0
    ctx->pc = 0x37693cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[0]));
label_376940:
    // 0x376940: 0x46000344  c1          0x344
    ctx->pc = 0x376940u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_376944:
    // 0x376944: 0xc4ac0004  lwc1        $f12, 0x4($a1)
    ctx->pc = 0x376944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_376948:
    // 0x376948: 0x0  nop
    ctx->pc = 0x376948u;
    // NOP
label_37694c:
    // 0x37694c: 0x0  nop
    ctx->pc = 0x37694cu;
    // NOP
label_376950:
    // 0x376950: 0xc04780a  jal         func_11E028
label_376954:
    if (ctx->pc == 0x376954u) {
        ctx->pc = 0x376958u;
        goto label_376958;
    }
    ctx->pc = 0x376950u;
    SET_GPR_U32(ctx, 31, 0x376958u);
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376958u; }
        if (ctx->pc != 0x376958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376958u; }
        if (ctx->pc != 0x376958u) { return; }
    }
    ctx->pc = 0x376958u;
label_376958:
    // 0x376958: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x376958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_37695c:
    // 0x37695c: 0xc62d0008  lwc1        $f13, 0x8($s1)
    ctx->pc = 0x37695cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_376960:
    // 0x376960: 0xc04780a  jal         func_11E028
label_376964:
    if (ctx->pc == 0x376964u) {
        ctx->pc = 0x376964u;
            // 0x376964: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x376968u;
        goto label_376968;
    }
    ctx->pc = 0x376960u;
    SET_GPR_U32(ctx, 31, 0x376968u);
    ctx->pc = 0x376964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376960u;
            // 0x376964: 0x460005c7  neg.s       $f23, $f0 (Delay Slot)
        ctx->f[23] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E028u;
    if (runtime->hasFunction(0x11E028u)) {
        auto targetFn = runtime->lookupFunction(0x11E028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376968u; }
        if (ctx->pc != 0x376968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011E028_0x11e028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376968u; }
        if (ctx->pc != 0x376968u) { return; }
    }
    ctx->pc = 0x376968u;
label_376968:
    // 0x376968: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x376968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_37696c:
    // 0x37696c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x37696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_376970:
    // 0x376970: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x376970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_376974:
    // 0x376974: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x376974u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_376978:
    // 0x376978: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_37697c:
    // 0x37697c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37697cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_376980:
    // 0x376980: 0x0  nop
    ctx->pc = 0x376980u;
    // NOP
label_376984:
    // 0x376984: 0x46170002  mul.s       $f0, $f0, $f23
    ctx->pc = 0x376984u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
label_376988:
    // 0x376988: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376988u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_37698c:
    // 0x37698c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x37698cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_376990:
    // 0x376990: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x376990u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_376994:
    // 0x376994: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x376994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376998:
    // 0x376998: 0xc04c970  jal         func_1325C0
label_37699c:
    if (ctx->pc == 0x37699Cu) {
        ctx->pc = 0x37699Cu;
            // 0x37699c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x3769A0u;
        goto label_3769a0;
    }
    ctx->pc = 0x376998u;
    SET_GPR_U32(ctx, 31, 0x3769A0u);
    ctx->pc = 0x37699Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376998u;
            // 0x37699c: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769A0u; }
        if (ctx->pc != 0x3769A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769A0u; }
        if (ctx->pc != 0x3769A0u) { return; }
    }
    ctx->pc = 0x3769A0u;
label_3769a0:
    // 0x3769a0: 0x3c034622  lui         $v1, 0x4622
    ctx->pc = 0x3769a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17954 << 16));
label_3769a4:
    // 0x3769a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3769a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3769a8:
    // 0x3769a8: 0x3463f983  ori         $v1, $v1, 0xF983
    ctx->pc = 0x3769a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63875);
label_3769ac:
    // 0x3769ac: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x3769acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3769b0:
    // 0x3769b0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3769b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3769b4:
    // 0x3769b4: 0x0  nop
    ctx->pc = 0x3769b4u;
    // NOP
label_3769b8:
    // 0x3769b8: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x3769b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_3769bc:
    // 0x3769bc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3769bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3769c0:
    // 0x3769c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3769c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3769c4:
    // 0x3769c4: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3769c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3769c8:
    // 0x3769c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3769c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3769cc:
    // 0x3769cc: 0xc04c970  jal         func_1325C0
label_3769d0:
    if (ctx->pc == 0x3769D0u) {
        ctx->pc = 0x3769D0u;
            // 0x3769d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x3769D4u;
        goto label_3769d4;
    }
    ctx->pc = 0x3769CCu;
    SET_GPR_U32(ctx, 31, 0x3769D4u);
    ctx->pc = 0x3769D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3769CCu;
            // 0x3769d0: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769D4u; }
        if (ctx->pc != 0x3769D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3769D4u; }
        if (ctx->pc != 0x3769D4u) { return; }
    }
    ctx->pc = 0x3769D4u;
label_3769d4:
    // 0x3769d4: 0x3c034336  lui         $v1, 0x4336
    ctx->pc = 0x3769d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17206 << 16));
label_3769d8:
    // 0x3769d8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x3769d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_3769dc:
    // 0x3769dc: 0x34630b60  ori         $v1, $v1, 0xB60
    ctx->pc = 0x3769dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2912);
label_3769e0:
    // 0x3769e0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x3769e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_3769e4:
    // 0x3769e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3769e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3769e8:
    // 0x3769e8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x3769e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3769ec:
    // 0x3769ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3769ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_3769f0:
    // 0x3769f0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3769f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3769f4:
    // 0x3769f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x3769f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3769f8:
    // 0x3769f8: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3769f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3769fc:
    // 0x3769fc: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x3769fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_376a00:
    // 0x376a00: 0xc04c970  jal         func_1325C0
label_376a04:
    if (ctx->pc == 0x376A04u) {
        ctx->pc = 0x376A04u;
            // 0x376a04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x376A08u;
        goto label_376a08;
    }
    ctx->pc = 0x376A00u;
    SET_GPR_U32(ctx, 31, 0x376A08u);
    ctx->pc = 0x376A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376A00u;
            // 0x376a04: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A08u; }
        if (ctx->pc != 0x376A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A08u; }
        if (ctx->pc != 0x376A08u) { return; }
    }
    ctx->pc = 0x376A08u;
label_376a08:
    // 0x376a08: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x376a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_376a0c:
    // 0x376a0c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x376a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_376a10:
    // 0x376a10: 0xc04c72c  jal         func_131CB0
label_376a14:
    if (ctx->pc == 0x376A14u) {
        ctx->pc = 0x376A14u;
            // 0x376a14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x376A18u;
        goto label_376a18;
    }
    ctx->pc = 0x376A10u;
    SET_GPR_U32(ctx, 31, 0x376A18u);
    ctx->pc = 0x376A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376A10u;
            // 0x376a14: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A18u; }
        if (ctx->pc != 0x376A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A18u; }
        if (ctx->pc != 0x376A18u) { return; }
    }
    ctx->pc = 0x376A18u;
label_376a18:
    // 0x376a18: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x376a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_376a1c:
    // 0x376a1c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x376a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_376a20:
    // 0x376a20: 0xc04c72c  jal         func_131CB0
label_376a24:
    if (ctx->pc == 0x376A24u) {
        ctx->pc = 0x376A24u;
            // 0x376a24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376A28u;
        goto label_376a28;
    }
    ctx->pc = 0x376A20u;
    SET_GPR_U32(ctx, 31, 0x376A28u);
    ctx->pc = 0x376A24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376A20u;
            // 0x376a24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A28u; }
        if (ctx->pc != 0x376A28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A28u; }
        if (ctx->pc != 0x376A28u) { return; }
    }
    ctx->pc = 0x376A28u;
label_376a28:
    // 0x376a28: 0x26040060  addiu       $a0, $s0, 0x60
    ctx->pc = 0x376a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_376a2c:
    // 0x376a2c: 0xc04c74c  jal         func_131D30
label_376a30:
    if (ctx->pc == 0x376A30u) {
        ctx->pc = 0x376A30u;
            // 0x376a30: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x376A34u;
        goto label_376a34;
    }
    ctx->pc = 0x376A2Cu;
    SET_GPR_U32(ctx, 31, 0x376A34u);
    ctx->pc = 0x376A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376A2Cu;
            // 0x376a30: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A34u; }
        if (ctx->pc != 0x376A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A34u; }
        if (ctx->pc != 0x376A34u) { return; }
    }
    ctx->pc = 0x376A34u;
label_376a34:
    // 0x376a34: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x376a34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_376a38:
    // 0x376a38: 0xc04c74c  jal         func_131D30
label_376a3c:
    if (ctx->pc == 0x376A3Cu) {
        ctx->pc = 0x376A3Cu;
            // 0x376a3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x376A40u;
        goto label_376a40;
    }
    ctx->pc = 0x376A38u;
    SET_GPR_U32(ctx, 31, 0x376A40u);
    ctx->pc = 0x376A3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376A38u;
            // 0x376a3c: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A40u; }
        if (ctx->pc != 0x376A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376A40u; }
        if (ctx->pc != 0x376A40u) { return; }
    }
    ctx->pc = 0x376A40u;
label_376a40:
    // 0x376a40: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x376a40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
label_376a44:
    // 0x376a44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x376a44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_376a48:
    // 0x376a48: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x376a48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_376a4c:
    // 0x376a4c: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x376a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376a50:
    // 0x376a50: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x376a50u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_376a54:
    // 0x376a54: 0xe6000094  swc1        $f0, 0x94($s0)
    ctx->pc = 0x376a54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 148), bits); }
label_376a58:
    // 0x376a58: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x376a58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_376a5c:
    // 0x376a5c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x376a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_376a60:
    // 0x376a60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x376a60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_376a64:
    // 0x376a64: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x376a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_376a68:
    // 0x376a68: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x376a68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_376a6c:
    // 0x376a6c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x376a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_376a70:
    // 0x376a70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x376a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_376a74:
    // 0x376a74: 0x3e00008  jr          $ra
label_376a78:
    if (ctx->pc == 0x376A78u) {
        ctx->pc = 0x376A78u;
            // 0x376a78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x376A7Cu;
        goto label_376a7c;
    }
    ctx->pc = 0x376A74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376A74u;
            // 0x376a78: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376A7Cu;
label_376a7c:
    // 0x376a7c: 0x0  nop
    ctx->pc = 0x376a7cu;
    // NOP
label_376a80:
    // 0x376a80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x376a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_376a84:
    // 0x376a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x376a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_376a88:
    // 0x376a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_376a8c:
    // 0x376a8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x376a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_376a90:
    // 0x376a90: 0x8c8400a0  lw          $a0, 0xA0($a0)
    ctx->pc = 0x376a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
label_376a94:
    // 0x376a94: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_376a98:
    if (ctx->pc == 0x376A98u) {
        ctx->pc = 0x376A98u;
            // 0x376a98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x376A9Cu;
        goto label_376a9c;
    }
    ctx->pc = 0x376A94u;
    {
        const bool branch_taken_0x376a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x376a94) {
            ctx->pc = 0x376A98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376A94u;
            // 0x376a98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376AB0u;
            goto label_376ab0;
        }
    }
    ctx->pc = 0x376A9Cu;
label_376a9c:
    // 0x376a9c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x376a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_376aa0:
    // 0x376aa0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x376aa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_376aa4:
    // 0x376aa4: 0x320f809  jalr        $t9
label_376aa8:
    if (ctx->pc == 0x376AA8u) {
        ctx->pc = 0x376AA8u;
            // 0x376aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x376AACu;
        goto label_376aac;
    }
    ctx->pc = 0x376AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376AACu);
        ctx->pc = 0x376AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376AA4u;
            // 0x376aa8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376AACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376AACu; }
            if (ctx->pc != 0x376AACu) { return; }
        }
        }
    }
    ctx->pc = 0x376AACu;
label_376aac:
    // 0x376aac: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x376aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_376ab0:
    // 0x376ab0: 0x8e0402bc  lw          $a0, 0x2BC($s0)
    ctx->pc = 0x376ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 700)));
label_376ab4:
    // 0x376ab4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_376ab8:
    if (ctx->pc == 0x376AB8u) {
        ctx->pc = 0x376AB8u;
            // 0x376ab8: 0xae0002bc  sw          $zero, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
        ctx->pc = 0x376ABCu;
        goto label_376abc;
    }
    ctx->pc = 0x376AB4u;
    {
        const bool branch_taken_0x376ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x376ab4) {
            ctx->pc = 0x376AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376AB4u;
            // 0x376ab8: 0xae0002bc  sw          $zero, 0x2BC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376AD0u;
            goto label_376ad0;
        }
    }
    ctx->pc = 0x376ABCu;
label_376abc:
    // 0x376abc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x376abcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_376ac0:
    // 0x376ac0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x376ac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_376ac4:
    // 0x376ac4: 0x320f809  jalr        $t9
label_376ac8:
    if (ctx->pc == 0x376AC8u) {
        ctx->pc = 0x376AC8u;
            // 0x376ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x376ACCu;
        goto label_376acc;
    }
    ctx->pc = 0x376AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376ACCu);
        ctx->pc = 0x376AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376AC4u;
            // 0x376ac8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376ACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376ACCu; }
            if (ctx->pc != 0x376ACCu) { return; }
        }
        }
    }
    ctx->pc = 0x376ACCu;
label_376acc:
    // 0x376acc: 0xae0002bc  sw          $zero, 0x2BC($s0)
    ctx->pc = 0x376accu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 700), GPR_U32(ctx, 0));
label_376ad0:
    // 0x376ad0: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x376ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_376ad4:
    // 0x376ad4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_376ad8:
    if (ctx->pc == 0x376AD8u) {
        ctx->pc = 0x376AD8u;
            // 0x376ad8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x376ADCu;
        goto label_376adc;
    }
    ctx->pc = 0x376AD4u;
    {
        const bool branch_taken_0x376ad4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x376ad4) {
            ctx->pc = 0x376AD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376AD4u;
            // 0x376ad8: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376AF0u;
            goto label_376af0;
        }
    }
    ctx->pc = 0x376ADCu;
label_376adc:
    // 0x376adc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x376adcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_376ae0:
    // 0x376ae0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x376ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_376ae4:
    // 0x376ae4: 0x320f809  jalr        $t9
label_376ae8:
    if (ctx->pc == 0x376AE8u) {
        ctx->pc = 0x376AE8u;
            // 0x376ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x376AECu;
        goto label_376aec;
    }
    ctx->pc = 0x376AE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376AECu);
        ctx->pc = 0x376AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376AE4u;
            // 0x376ae8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376AECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376AECu; }
            if (ctx->pc != 0x376AECu) { return; }
        }
        }
    }
    ctx->pc = 0x376AECu;
label_376aec:
    // 0x376aec: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x376aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_376af0:
    // 0x376af0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x376af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_376af4:
    // 0x376af4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376af4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376af8:
    // 0x376af8: 0x3e00008  jr          $ra
label_376afc:
    if (ctx->pc == 0x376AFCu) {
        ctx->pc = 0x376AFCu;
            // 0x376afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x376B00u;
        goto label_376b00;
    }
    ctx->pc = 0x376AF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376AF8u;
            // 0x376afc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376B00u;
label_376b00:
    // 0x376b00: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x376b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
label_376b04:
    // 0x376b04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376b08:
    // 0x376b08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x376b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_376b0c:
    // 0x376b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_376b10:
    // 0x376b10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_376b14:
    // 0x376b14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x376b14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_376b18:
    // 0x376b18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_376b1c:
    // 0x376b1c: 0x8c50e3e0  lw          $s0, -0x1C20($v0)
    ctx->pc = 0x376b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_376b20:
    // 0x376b20: 0xc0892d0  jal         func_224B40
label_376b24:
    if (ctx->pc == 0x376B24u) {
        ctx->pc = 0x376B24u;
            // 0x376b24: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x376B28u;
        goto label_376b28;
    }
    ctx->pc = 0x376B20u;
    SET_GPR_U32(ctx, 31, 0x376B28u);
    ctx->pc = 0x376B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B20u;
            // 0x376b24: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B28u; }
        if (ctx->pc != 0x376B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B28u; }
        if (ctx->pc != 0x376B28u) { return; }
    }
    ctx->pc = 0x376B28u;
label_376b28:
    // 0x376b28: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x376b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376b2c:
    // 0x376b2c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x376b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_376b30:
    // 0x376b30: 0xc6410014  lwc1        $f1, 0x14($s2)
    ctx->pc = 0x376b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376b34:
    // 0x376b34: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x376b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_376b38:
    // 0x376b38: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x376b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376b3c:
    // 0x376b3c: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x376b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_376b40:
    // 0x376b40: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x376b40u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_376b44:
    // 0x376b44: 0xe7a200e8  swc1        $f2, 0xE8($sp)
    ctx->pc = 0x376b44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_376b48:
    // 0x376b48: 0xafa000ec  sw          $zero, 0xEC($sp)
    ctx->pc = 0x376b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 0));
label_376b4c:
    // 0x376b4c: 0xc643002c  lwc1        $f3, 0x2C($s2)
    ctx->pc = 0x376b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376b50:
    // 0x376b50: 0xc6420028  lwc1        $f2, 0x28($s2)
    ctx->pc = 0x376b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376b54:
    // 0x376b54: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x376b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376b58:
    // 0x376b58: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x376b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376b5c:
    // 0x376b5c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x376b5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_376b60:
    // 0x376b60: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x376b60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_376b64:
    // 0x376b64: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x376b64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_376b68:
    // 0x376b68: 0xc0a3830  jal         func_28E0C0
label_376b6c:
    if (ctx->pc == 0x376B6Cu) {
        ctx->pc = 0x376B6Cu;
            // 0x376b6c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x376B70u;
        goto label_376b70;
    }
    ctx->pc = 0x376B68u;
    SET_GPR_U32(ctx, 31, 0x376B70u);
    ctx->pc = 0x376B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B68u;
            // 0x376b6c: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E0C0u;
    if (runtime->hasFunction(0x28E0C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E0C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B70u; }
        if (ctx->pc != 0x376B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E0C0_0x28e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B70u; }
        if (ctx->pc != 0x376B70u) { return; }
    }
    ctx->pc = 0x376B70u;
label_376b70:
    // 0x376b70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x376b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_376b74:
    // 0x376b74: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x376b74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_376b78:
    // 0x376b78: 0x8c426070  lw          $v0, 0x6070($v0)
    ctx->pc = 0x376b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24688)));
label_376b7c:
    // 0x376b7c: 0x8c510060  lw          $s1, 0x60($v0)
    ctx->pc = 0x376b7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_376b80:
    // 0x376b80: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x376b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_376b84:
    // 0x376b84: 0xc0b6e68  jal         func_2DB9A0
label_376b88:
    if (ctx->pc == 0x376B88u) {
        ctx->pc = 0x376B88u;
            // 0x376b88: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x376B8Cu;
        goto label_376b8c;
    }
    ctx->pc = 0x376B84u;
    SET_GPR_U32(ctx, 31, 0x376B8Cu);
    ctx->pc = 0x376B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B84u;
            // 0x376b88: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B8Cu; }
        if (ctx->pc != 0x376B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B8Cu; }
        if (ctx->pc != 0x376B8Cu) { return; }
    }
    ctx->pc = 0x376B8Cu;
label_376b8c:
    // 0x376b8c: 0xc0b6dac  jal         func_2DB6B0
label_376b90:
    if (ctx->pc == 0x376B90u) {
        ctx->pc = 0x376B90u;
            // 0x376b90: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x376B94u;
        goto label_376b94;
    }
    ctx->pc = 0x376B8Cu;
    SET_GPR_U32(ctx, 31, 0x376B94u);
    ctx->pc = 0x376B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B8Cu;
            // 0x376b90: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B94u; }
        if (ctx->pc != 0x376B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B94u; }
        if (ctx->pc != 0x376B94u) { return; }
    }
    ctx->pc = 0x376B94u;
label_376b94:
    // 0x376b94: 0xc0cac94  jal         func_32B250
label_376b98:
    if (ctx->pc == 0x376B98u) {
        ctx->pc = 0x376B98u;
            // 0x376b98: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x376B9Cu;
        goto label_376b9c;
    }
    ctx->pc = 0x376B94u;
    SET_GPR_U32(ctx, 31, 0x376B9Cu);
    ctx->pc = 0x376B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B94u;
            // 0x376b98: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B9Cu; }
        if (ctx->pc != 0x376B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376B9Cu; }
        if (ctx->pc != 0x376B9Cu) { return; }
    }
    ctx->pc = 0x376B9Cu;
label_376b9c:
    // 0x376b9c: 0xc0cac84  jal         func_32B210
label_376ba0:
    if (ctx->pc == 0x376BA0u) {
        ctx->pc = 0x376BA0u;
            // 0x376ba0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x376BA4u;
        goto label_376ba4;
    }
    ctx->pc = 0x376B9Cu;
    SET_GPR_U32(ctx, 31, 0x376BA4u);
    ctx->pc = 0x376BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376B9Cu;
            // 0x376ba0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376BA4u; }
        if (ctx->pc != 0x376BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376BA4u; }
        if (ctx->pc != 0x376BA4u) { return; }
    }
    ctx->pc = 0x376BA4u;
label_376ba4:
    // 0x376ba4: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x376ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_376ba8:
    // 0x376ba8: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x376ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_376bac:
    // 0x376bac: 0xc44dc928  lwc1        $f13, -0x36D8($v0)
    ctx->pc = 0x376bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_376bb0:
    // 0x376bb0: 0xc0a562c  jal         func_2958B0
label_376bb4:
    if (ctx->pc == 0x376BB4u) {
        ctx->pc = 0x376BB4u;
            // 0x376bb4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x376BB8u;
        goto label_376bb8;
    }
    ctx->pc = 0x376BB0u;
    SET_GPR_U32(ctx, 31, 0x376BB8u);
    ctx->pc = 0x376BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376BB0u;
            // 0x376bb4: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376BB8u; }
        if (ctx->pc != 0x376BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376BB8u; }
        if (ctx->pc != 0x376BB8u) { return; }
    }
    ctx->pc = 0x376BB8u;
label_376bb8:
    // 0x376bb8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x376bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_376bbc:
    // 0x376bbc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x376bbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376bc0:
    // 0x376bc0: 0x8c446070  lw          $a0, 0x6070($v0)
    ctx->pc = 0x376bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24688)));
label_376bc4:
    // 0x376bc4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x376bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376bc8:
    // 0x376bc8: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x376bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376bcc:
    // 0x376bcc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x376bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_376bd0:
    // 0x376bd0: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x376bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376bd4:
    // 0x376bd4: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x376bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_376bd8:
    // 0x376bd8: 0x8c890060  lw          $t1, 0x60($a0)
    ctx->pc = 0x376bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_376bdc:
    // 0x376bdc: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x376bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_376be0:
    // 0x376be0: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x376be0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_376be4:
    // 0x376be4: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x376be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_376be8:
    // 0x376be8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376bec:
    // 0x376bec: 0xafa900f4  sw          $t1, 0xF4($sp)
    ctx->pc = 0x376becu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 9));
label_376bf0:
    // 0x376bf0: 0xc7a70080  lwc1        $f7, 0x80($sp)
    ctx->pc = 0x376bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_376bf4:
    // 0x376bf4: 0xc64a0018  lwc1        $f10, 0x18($s2)
    ctx->pc = 0x376bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_376bf8:
    // 0x376bf8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x376bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_376bfc:
    // 0x376bfc: 0xc6490014  lwc1        $f9, 0x14($s2)
    ctx->pc = 0x376bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_376c00:
    // 0x376c00: 0xc6480010  lwc1        $f8, 0x10($s2)
    ctx->pc = 0x376c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_376c04:
    // 0x376c04: 0xc7a60084  lwc1        $f6, 0x84($sp)
    ctx->pc = 0x376c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_376c08:
    // 0x376c08: 0xc7a50088  lwc1        $f5, 0x88($sp)
    ctx->pc = 0x376c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_376c0c:
    // 0x376c0c: 0xe7a20154  swc1        $f2, 0x154($sp)
    ctx->pc = 0x376c0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_376c10:
    // 0x376c10: 0xa3a801a0  sb          $t0, 0x1A0($sp)
    ctx->pc = 0x376c10u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 416), (uint8_t)GPR_U32(ctx, 8));
label_376c14:
    // 0x376c14: 0xe7a10158  swc1        $f1, 0x158($sp)
    ctx->pc = 0x376c14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_376c18:
    // 0x376c18: 0xafa7019c  sw          $a3, 0x19C($sp)
    ctx->pc = 0x376c18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 7));
label_376c1c:
    // 0x376c1c: 0xe7a0015c  swc1        $f0, 0x15C($sp)
    ctx->pc = 0x376c1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 348), bits); }
label_376c20:
    // 0x376c20: 0xa3a301a2  sb          $v1, 0x1A2($sp)
    ctx->pc = 0x376c20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 418), (uint8_t)GPR_U32(ctx, 3));
label_376c24:
    // 0x376c24: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x376c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376c28:
    // 0x376c28: 0xafa0010c  sw          $zero, 0x10C($sp)
    ctx->pc = 0x376c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 0));
label_376c2c:
    // 0x376c2c: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x376c2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376c30:
    // 0x376c30: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x376c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_376c34:
    // 0x376c34: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x376c34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376c38:
    // 0x376c38: 0xe7a20160  swc1        $f2, 0x160($sp)
    ctx->pc = 0x376c38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_376c3c:
    // 0x376c3c: 0xe7a10164  swc1        $f1, 0x164($sp)
    ctx->pc = 0x376c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_376c40:
    // 0x376c40: 0xe7a00168  swc1        $f0, 0x168($sp)
    ctx->pc = 0x376c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
label_376c44:
    // 0x376c44: 0xc7a200ac  lwc1        $f2, 0xAC($sp)
    ctx->pc = 0x376c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376c48:
    // 0x376c48: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x376c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376c4c:
    // 0x376c4c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x376c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376c50:
    // 0x376c50: 0xe7a2016c  swc1        $f2, 0x16C($sp)
    ctx->pc = 0x376c50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_376c54:
    // 0x376c54: 0xe7a10170  swc1        $f1, 0x170($sp)
    ctx->pc = 0x376c54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_376c58:
    // 0x376c58: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x376c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_376c5c:
    // 0x376c5c: 0xc7a4008c  lwc1        $f4, 0x8C($sp)
    ctx->pc = 0x376c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_376c60:
    // 0x376c60: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x376c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_376c64:
    // 0x376c64: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x376c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_376c68:
    // 0x376c68: 0xc7a1007c  lwc1        $f1, 0x7C($sp)
    ctx->pc = 0x376c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376c6c:
    // 0x376c6c: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x376c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376c70:
    // 0x376c70: 0xe7a80100  swc1        $f8, 0x100($sp)
    ctx->pc = 0x376c70u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_376c74:
    // 0x376c74: 0xe7a90104  swc1        $f9, 0x104($sp)
    ctx->pc = 0x376c74u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_376c78:
    // 0x376c78: 0xe7aa0108  swc1        $f10, 0x108($sp)
    ctx->pc = 0x376c78u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_376c7c:
    // 0x376c7c: 0xe7a70140  swc1        $f7, 0x140($sp)
    ctx->pc = 0x376c7cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_376c80:
    // 0x376c80: 0xe7a60144  swc1        $f6, 0x144($sp)
    ctx->pc = 0x376c80u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_376c84:
    // 0x376c84: 0xe7a50148  swc1        $f5, 0x148($sp)
    ctx->pc = 0x376c84u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_376c88:
    // 0x376c88: 0xe7a4014c  swc1        $f4, 0x14C($sp)
    ctx->pc = 0x376c88u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_376c8c:
    // 0x376c8c: 0xe7a30150  swc1        $f3, 0x150($sp)
    ctx->pc = 0x376c8cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_376c90:
    // 0x376c90: 0xe7a20178  swc1        $f2, 0x178($sp)
    ctx->pc = 0x376c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_376c94:
    // 0x376c94: 0xe7a1017c  swc1        $f1, 0x17C($sp)
    ctx->pc = 0x376c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 380), bits); }
label_376c98:
    // 0x376c98: 0xc0a7a88  jal         func_29EA20
label_376c9c:
    if (ctx->pc == 0x376C9Cu) {
        ctx->pc = 0x376C9Cu;
            // 0x376c9c: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->pc = 0x376CA0u;
        goto label_376ca0;
    }
    ctx->pc = 0x376C98u;
    SET_GPR_U32(ctx, 31, 0x376CA0u);
    ctx->pc = 0x376C9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376C98u;
            // 0x376c9c: 0xe7a00180  swc1        $f0, 0x180($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CA0u; }
        if (ctx->pc != 0x376CA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CA0u; }
        if (ctx->pc != 0x376CA0u) { return; }
    }
    ctx->pc = 0x376CA0u;
label_376ca0:
    // 0x376ca0: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x376ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_376ca4:
    // 0x376ca4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x376ca4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376ca8:
    // 0x376ca8: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_376cac:
    if (ctx->pc == 0x376CACu) {
        ctx->pc = 0x376CACu;
            // 0x376cac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x376CB0u;
        goto label_376cb0;
    }
    ctx->pc = 0x376CA8u;
    {
        const bool branch_taken_0x376ca8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x376CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376CA8u;
            // 0x376cac: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376ca8) {
            ctx->pc = 0x376CF8u;
            goto label_376cf8;
        }
    }
    ctx->pc = 0x376CB0u;
label_376cb0:
    // 0x376cb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376cb4:
    // 0x376cb4: 0xc088ef4  jal         func_223BD0
label_376cb8:
    if (ctx->pc == 0x376CB8u) {
        ctx->pc = 0x376CB8u;
            // 0x376cb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x376CBCu;
        goto label_376cbc;
    }
    ctx->pc = 0x376CB4u;
    SET_GPR_U32(ctx, 31, 0x376CBCu);
    ctx->pc = 0x376CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376CB4u;
            // 0x376cb8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CBCu; }
        if (ctx->pc != 0x376CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CBCu; }
        if (ctx->pc != 0x376CBCu) { return; }
    }
    ctx->pc = 0x376CBCu;
label_376cbc:
    // 0x376cbc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x376cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_376cc0:
    // 0x376cc0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x376cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_376cc4:
    // 0x376cc4: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x376cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_376cc8:
    // 0x376cc8: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x376cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_376ccc:
    // 0x376ccc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x376cccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_376cd0:
    // 0x376cd0: 0xae200200  sw          $zero, 0x200($s1)
    ctx->pc = 0x376cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 512), GPR_U32(ctx, 0));
label_376cd4:
    // 0x376cd4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376cd8:
    // 0x376cd8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x376cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_376cdc:
    // 0x376cdc: 0xae200210  sw          $zero, 0x210($s1)
    ctx->pc = 0x376cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 0));
label_376ce0:
    // 0x376ce0: 0xae200214  sw          $zero, 0x214($s1)
    ctx->pc = 0x376ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 532), GPR_U32(ctx, 0));
label_376ce4:
    // 0x376ce4: 0xae32000c  sw          $s2, 0xC($s1)
    ctx->pc = 0x376ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 18));
label_376ce8:
    // 0x376ce8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x376ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_376cec:
    // 0x376cec: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x376cecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_376cf0:
    // 0x376cf0: 0xc088b38  jal         func_222CE0
label_376cf4:
    if (ctx->pc == 0x376CF4u) {
        ctx->pc = 0x376CF4u;
            // 0x376cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376CF8u;
        goto label_376cf8;
    }
    ctx->pc = 0x376CF0u;
    SET_GPR_U32(ctx, 31, 0x376CF8u);
    ctx->pc = 0x376CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376CF0u;
            // 0x376cf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CF8u; }
        if (ctx->pc != 0x376CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376CF8u; }
        if (ctx->pc != 0x376CF8u) { return; }
    }
    ctx->pc = 0x376CF8u;
label_376cf8:
    // 0x376cf8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x376cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_376cfc:
    // 0x376cfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x376cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376d00:
    // 0x376d00: 0xc08c164  jal         func_230590
label_376d04:
    if (ctx->pc == 0x376D04u) {
        ctx->pc = 0x376D04u;
            // 0x376d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x376D08u;
        goto label_376d08;
    }
    ctx->pc = 0x376D00u;
    SET_GPR_U32(ctx, 31, 0x376D08u);
    ctx->pc = 0x376D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D00u;
            // 0x376d04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D08u; }
        if (ctx->pc != 0x376D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D08u; }
        if (ctx->pc != 0x376D08u) { return; }
    }
    ctx->pc = 0x376D08u;
label_376d08:
    // 0x376d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376d0c:
    // 0x376d0c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x376d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_376d10:
    // 0x376d10: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x376d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376d14:
    // 0x376d14: 0xc08914c  jal         func_224530
label_376d18:
    if (ctx->pc == 0x376D18u) {
        ctx->pc = 0x376D18u;
            // 0x376d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376D1Cu;
        goto label_376d1c;
    }
    ctx->pc = 0x376D14u;
    SET_GPR_U32(ctx, 31, 0x376D1Cu);
    ctx->pc = 0x376D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D14u;
            // 0x376d18: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D1Cu; }
        if (ctx->pc != 0x376D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D1Cu; }
        if (ctx->pc != 0x376D1Cu) { return; }
    }
    ctx->pc = 0x376D1Cu;
label_376d1c:
    // 0x376d1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376d20:
    // 0x376d20: 0xc0892c0  jal         func_224B00
label_376d24:
    if (ctx->pc == 0x376D24u) {
        ctx->pc = 0x376D24u;
            // 0x376d24: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x376D28u;
        goto label_376d28;
    }
    ctx->pc = 0x376D20u;
    SET_GPR_U32(ctx, 31, 0x376D28u);
    ctx->pc = 0x376D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D20u;
            // 0x376d24: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B00u;
    if (runtime->hasFunction(0x224B00u)) {
        auto targetFn = runtime->lookupFunction(0x224B00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D28u; }
        if (ctx->pc != 0x376D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B00_0x224b00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D28u; }
        if (ctx->pc != 0x376D28u) { return; }
    }
    ctx->pc = 0x376D28u;
label_376d28:
    // 0x376d28: 0x3c02c000  lui         $v0, 0xC000
    ctx->pc = 0x376d28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49152 << 16));
label_376d2c:
    // 0x376d2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x376d2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376d30:
    // 0x376d30: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x376d30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
label_376d34:
    // 0x376d34: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x376d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_376d38:
    // 0x376d38: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x376d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_376d3c:
    // 0x376d3c: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x376d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_376d40:
    // 0x376d40: 0xc0891d8  jal         func_224760
label_376d44:
    if (ctx->pc == 0x376D44u) {
        ctx->pc = 0x376D44u;
            // 0x376d44: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->pc = 0x376D48u;
        goto label_376d48;
    }
    ctx->pc = 0x376D40u;
    SET_GPR_U32(ctx, 31, 0x376D48u);
    ctx->pc = 0x376D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D40u;
            // 0x376d44: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224760u;
    if (runtime->hasFunction(0x224760u)) {
        auto targetFn = runtime->lookupFunction(0x224760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D48u; }
        if (ctx->pc != 0x376D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224760_0x224760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D48u; }
        if (ctx->pc != 0x376D48u) { return; }
    }
    ctx->pc = 0x376D48u;
label_376d48:
    // 0x376d48: 0xae510050  sw          $s1, 0x50($s2)
    ctx->pc = 0x376d48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 17));
label_376d4c:
    // 0x376d4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376d50:
    // 0x376d50: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x376d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_376d54:
    // 0x376d54: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x376d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_376d58:
    // 0x376d58: 0xc0a7a88  jal         func_29EA20
label_376d5c:
    if (ctx->pc == 0x376D5Cu) {
        ctx->pc = 0x376D5Cu;
            // 0x376d5c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x376D60u;
        goto label_376d60;
    }
    ctx->pc = 0x376D58u;
    SET_GPR_U32(ctx, 31, 0x376D60u);
    ctx->pc = 0x376D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D58u;
            // 0x376d5c: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D60u; }
        if (ctx->pc != 0x376D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D60u; }
        if (ctx->pc != 0x376D60u) { return; }
    }
    ctx->pc = 0x376D60u;
label_376d60:
    // 0x376d60: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x376d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_376d64:
    // 0x376d64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376d64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376d68:
    // 0x376d68: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_376d6c:
    if (ctx->pc == 0x376D6Cu) {
        ctx->pc = 0x376D6Cu;
            // 0x376d6c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x376D70u;
        goto label_376d70;
    }
    ctx->pc = 0x376D68u;
    {
        const bool branch_taken_0x376d68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x376D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376D68u;
            // 0x376d6c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x376d68) {
            ctx->pc = 0x376D8Cu;
            goto label_376d8c;
        }
    }
    ctx->pc = 0x376D70u;
label_376d70:
    // 0x376d70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376d74:
    // 0x376d74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x376d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_376d78:
    // 0x376d78: 0xc0869d0  jal         func_21A740
label_376d7c:
    if (ctx->pc == 0x376D7Cu) {
        ctx->pc = 0x376D7Cu;
            // 0x376d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376D80u;
        goto label_376d80;
    }
    ctx->pc = 0x376D78u;
    SET_GPR_U32(ctx, 31, 0x376D80u);
    ctx->pc = 0x376D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D78u;
            // 0x376d7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D80u; }
        if (ctx->pc != 0x376D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376D80u; }
        if (ctx->pc != 0x376D80u) { return; }
    }
    ctx->pc = 0x376D80u;
label_376d80:
    // 0x376d80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x376d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_376d84:
    // 0x376d84: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x376d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_376d88:
    // 0x376d88: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x376d88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_376d8c:
    // 0x376d8c: 0xae300210  sw          $s0, 0x210($s1)
    ctx->pc = 0x376d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 528), GPR_U32(ctx, 16));
label_376d90:
    // 0x376d90: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376d94:
    // 0x376d94: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x376d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_376d98:
    // 0x376d98: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x376d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_376d9c:
    // 0x376d9c: 0xc08c650  jal         func_231940
label_376da0:
    if (ctx->pc == 0x376DA0u) {
        ctx->pc = 0x376DA0u;
            // 0x376da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376DA4u;
        goto label_376da4;
    }
    ctx->pc = 0x376D9Cu;
    SET_GPR_U32(ctx, 31, 0x376DA4u);
    ctx->pc = 0x376DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376D9Cu;
            // 0x376da0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376DA4u; }
        if (ctx->pc != 0x376DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376DA4u; }
        if (ctx->pc != 0x376DA4u) { return; }
    }
    ctx->pc = 0x376DA4u;
label_376da4:
    // 0x376da4: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x376da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_376da8:
    // 0x376da8: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x376da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_376dac:
    // 0x376dac: 0xc040180  jal         func_100600
label_376db0:
    if (ctx->pc == 0x376DB0u) {
        ctx->pc = 0x376DB0u;
            // 0x376db0: 0xe6400284  swc1        $f0, 0x284($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 644), bits); }
        ctx->pc = 0x376DB4u;
        goto label_376db4;
    }
    ctx->pc = 0x376DACu;
    SET_GPR_U32(ctx, 31, 0x376DB4u);
    ctx->pc = 0x376DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376DACu;
            // 0x376db0: 0xe6400284  swc1        $f0, 0x284($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 644), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376DB4u; }
        if (ctx->pc != 0x376DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376DB4u; }
        if (ctx->pc != 0x376DB4u) { return; }
    }
    ctx->pc = 0x376DB4u;
label_376db4:
    // 0x376db4: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_376db8:
    if (ctx->pc == 0x376DB8u) {
        ctx->pc = 0x376DB8u;
            // 0x376db8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x376DBCu;
        goto label_376dbc;
    }
    ctx->pc = 0x376DB4u;
    {
        const bool branch_taken_0x376db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x376db4) {
            ctx->pc = 0x376DB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376DB4u;
            // 0x376db8: 0xae4200a0  sw          $v0, 0xA0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376E04u;
            goto label_376e04;
        }
    }
    ctx->pc = 0x376DBCu;
label_376dbc:
    // 0x376dbc: 0x8e460050  lw          $a2, 0x50($s2)
    ctx->pc = 0x376dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
label_376dc0:
    // 0x376dc0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x376dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_376dc4:
    // 0x376dc4: 0x24a521e0  addiu       $a1, $a1, 0x21E0
    ctx->pc = 0x376dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
label_376dc8:
    // 0x376dc8: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x376dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_376dcc:
    // 0x376dcc: 0x3c04c000  lui         $a0, 0xC000
    ctx->pc = 0x376dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49152 << 16));
label_376dd0:
    // 0x376dd0: 0x24636020  addiu       $v1, $v1, 0x6020
    ctx->pc = 0x376dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24608));
label_376dd4:
    // 0x376dd4: 0xac450048  sw          $a1, 0x48($v0)
    ctx->pc = 0x376dd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 5));
label_376dd8:
    // 0x376dd8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x376dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_376ddc:
    // 0x376ddc: 0xac460024  sw          $a2, 0x24($v0)
    ctx->pc = 0x376ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 6));
label_376de0:
    // 0x376de0: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x376de0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
label_376de4:
    // 0x376de4: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x376de4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_376de8:
    // 0x376de8: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x376de8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
label_376dec:
    // 0x376dec: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x376decu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_376df0:
    // 0x376df0: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x376df0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_376df4:
    // 0x376df4: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x376df4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_376df8:
    // 0x376df8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x376df8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_376dfc:
    // 0x376dfc: 0xac400044  sw          $zero, 0x44($v0)
    ctx->pc = 0x376dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 0));
label_376e00:
    // 0x376e00: 0xae4200a0  sw          $v0, 0xA0($s2)
    ctx->pc = 0x376e00u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 2));
label_376e04:
    // 0x376e04: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x376e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_376e08:
    // 0x376e08: 0x8e4300b0  lw          $v1, 0xB0($s2)
    ctx->pc = 0x376e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_376e0c:
    // 0x376e0c: 0x2402ffbb  addiu       $v0, $zero, -0x45
    ctx->pc = 0x376e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967227));
label_376e10:
    // 0x376e10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x376e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_376e14:
    // 0x376e14: 0x34420044  ori         $v0, $v0, 0x44
    ctx->pc = 0x376e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)68);
label_376e18:
    // 0x376e18: 0xc040180  jal         func_100600
label_376e1c:
    if (ctx->pc == 0x376E1Cu) {
        ctx->pc = 0x376E1Cu;
            // 0x376e1c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x376E20u;
        goto label_376e20;
    }
    ctx->pc = 0x376E18u;
    SET_GPR_U32(ctx, 31, 0x376E20u);
    ctx->pc = 0x376E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376E18u;
            // 0x376e1c: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E20u; }
        if (ctx->pc != 0x376E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E20u; }
        if (ctx->pc != 0x376E20u) { return; }
    }
    ctx->pc = 0x376E20u;
label_376e20:
    // 0x376e20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x376e20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_376e24:
    // 0x376e24: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_376e28:
    if (ctx->pc == 0x376E28u) {
        ctx->pc = 0x376E28u;
            // 0x376e28: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->pc = 0x376E2Cu;
        goto label_376e2c;
    }
    ctx->pc = 0x376E24u;
    {
        const bool branch_taken_0x376e24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x376e24) {
            ctx->pc = 0x376E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376E24u;
            // 0x376e28: 0x3c02451c  lui         $v0, 0x451C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x376E64u;
            goto label_376e64;
        }
    }
    ctx->pc = 0x376E2Cu;
label_376e2c:
    // 0x376e2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x376e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_376e30:
    // 0x376e30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x376e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_376e34:
    // 0x376e34: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x376e34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_376e38:
    // 0x376e38: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x376e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_376e3c:
    // 0x376e3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x376e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_376e40:
    // 0x376e40: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x376e40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_376e44:
    // 0x376e44: 0xc040138  jal         func_1004E0
label_376e48:
    if (ctx->pc == 0x376E48u) {
        ctx->pc = 0x376E48u;
            // 0x376e48: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x376E4Cu;
        goto label_376e4c;
    }
    ctx->pc = 0x376E44u;
    SET_GPR_U32(ctx, 31, 0x376E4Cu);
    ctx->pc = 0x376E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376E44u;
            // 0x376e48: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E4Cu; }
        if (ctx->pc != 0x376E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E4Cu; }
        if (ctx->pc != 0x376E4Cu) { return; }
    }
    ctx->pc = 0x376E4Cu;
label_376e4c:
    // 0x376e4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x376e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_376e50:
    // 0x376e50: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x376e50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_376e54:
    // 0x376e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376e58:
    // 0x376e58: 0xc04a576  jal         func_1295D8
label_376e5c:
    if (ctx->pc == 0x376E5Cu) {
        ctx->pc = 0x376E5Cu;
            // 0x376e5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x376E60u;
        goto label_376e60;
    }
    ctx->pc = 0x376E58u;
    SET_GPR_U32(ctx, 31, 0x376E60u);
    ctx->pc = 0x376E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376E58u;
            // 0x376e5c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E60u; }
        if (ctx->pc != 0x376E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E60u; }
        if (ctx->pc != 0x376E60u) { return; }
    }
    ctx->pc = 0x376E60u;
label_376e60:
    // 0x376e60: 0x3c02451c  lui         $v0, 0x451C
    ctx->pc = 0x376e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17692 << 16));
label_376e64:
    // 0x376e64: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x376e64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_376e68:
    // 0x376e68: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x376e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_376e6c:
    // 0x376e6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x376e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_376e70:
    // 0x376e70: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x376e70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376e74:
    // 0x376e74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x376e74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376e78:
    // 0x376e78: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x376e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_376e7c:
    // 0x376e7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x376e7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376e80:
    // 0x376e80: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x376e80u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_376e84:
    // 0x376e84: 0x34460bae  ori         $a2, $v0, 0xBAE
    ctx->pc = 0x376e84u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
label_376e88:
    // 0x376e88: 0xc122cd8  jal         func_48B360
label_376e8c:
    if (ctx->pc == 0x376E8Cu) {
        ctx->pc = 0x376E8Cu;
            // 0x376e8c: 0xae5002bc  sw          $s0, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 16));
        ctx->pc = 0x376E90u;
        goto label_376e90;
    }
    ctx->pc = 0x376E88u;
    SET_GPR_U32(ctx, 31, 0x376E90u);
    ctx->pc = 0x376E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376E88u;
            // 0x376e8c: 0xae5002bc  sw          $s0, 0x2BC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 700), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E90u; }
        if (ctx->pc != 0x376E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376E90u; }
        if (ctx->pc != 0x376E90u) { return; }
    }
    ctx->pc = 0x376E90u;
label_376e90:
    // 0x376e90: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x376e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_376e94:
    // 0x376e94: 0x8e4402bc  lw          $a0, 0x2BC($s2)
    ctx->pc = 0x376e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 700)));
label_376e98:
    // 0x376e98: 0x34434000  ori         $v1, $v0, 0x4000
    ctx->pc = 0x376e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_376e9c:
    // 0x376e9c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x376e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376ea0:
    // 0x376ea0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x376ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_376ea4:
    // 0x376ea4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x376ea4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376ea8:
    // 0x376ea8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x376ea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_376eac:
    // 0x376eac: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x376eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_376eb0:
    // 0x376eb0: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x376eb0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_376eb4:
    // 0x376eb4: 0xc122cd8  jal         func_48B360
label_376eb8:
    if (ctx->pc == 0x376EB8u) {
        ctx->pc = 0x376EB8u;
            // 0x376eb8: 0x34460bae  ori         $a2, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->pc = 0x376EBCu;
        goto label_376ebc;
    }
    ctx->pc = 0x376EB4u;
    SET_GPR_U32(ctx, 31, 0x376EBCu);
    ctx->pc = 0x376EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376EB4u;
            // 0x376eb8: 0x34460bae  ori         $a2, $v0, 0xBAE (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2990);
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376EBCu; }
        if (ctx->pc != 0x376EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376EBCu; }
        if (ctx->pc != 0x376EBCu) { return; }
    }
    ctx->pc = 0x376EBCu;
label_376ebc:
    // 0x376ebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x376ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_376ec0:
    // 0x376ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x376ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_376ec4:
    // 0x376ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x376ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_376ec8:
    // 0x376ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x376ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_376ecc:
    // 0x376ecc: 0x3e00008  jr          $ra
label_376ed0:
    if (ctx->pc == 0x376ED0u) {
        ctx->pc = 0x376ED0u;
            // 0x376ed0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x376ED4u;
        goto label_376ed4;
    }
    ctx->pc = 0x376ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x376ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376ECCu;
            // 0x376ed0: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x376ED4u;
label_376ed4:
    // 0x376ed4: 0x0  nop
    ctx->pc = 0x376ed4u;
    // NOP
label_376ed8:
    // 0x376ed8: 0x0  nop
    ctx->pc = 0x376ed8u;
    // NOP
label_376edc:
    // 0x376edc: 0x0  nop
    ctx->pc = 0x376edcu;
    // NOP
label_376ee0:
    // 0x376ee0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x376ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_376ee4:
    // 0x376ee4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x376ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_376ee8:
    // 0x376ee8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x376ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_376eec:
    // 0x376eec: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x376eecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_376ef0:
    // 0x376ef0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x376ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_376ef4:
    // 0x376ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x376ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_376ef8:
    // 0x376ef8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x376ef8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_376efc:
    // 0x376efc: 0xac8000e0  sw          $zero, 0xE0($a0)
    ctx->pc = 0x376efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 224), GPR_U32(ctx, 0));
label_376f00:
    // 0x376f00: 0x263000f0  addiu       $s0, $s1, 0xF0
    ctx->pc = 0x376f00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
label_376f04:
    // 0x376f04: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x376f04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_376f08:
    // 0x376f08: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x376f08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_376f0c:
    // 0x376f0c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x376f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_376f10:
    // 0x376f10: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x376f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_376f14:
    // 0x376f14: 0x8c920050  lw          $s2, 0x50($a0)
    ctx->pc = 0x376f14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_376f18:
    // 0x376f18: 0xc088b74  jal         func_222DD0
label_376f1c:
    if (ctx->pc == 0x376F1Cu) {
        ctx->pc = 0x376F1Cu;
            // 0x376f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376F20u;
        goto label_376f20;
    }
    ctx->pc = 0x376F18u;
    SET_GPR_U32(ctx, 31, 0x376F20u);
    ctx->pc = 0x376F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376F18u;
            // 0x376f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F20u; }
        if (ctx->pc != 0x376F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F20u; }
        if (ctx->pc != 0x376F20u) { return; }
    }
    ctx->pc = 0x376F20u;
label_376f20:
    // 0x376f20: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x376f20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_376f24:
    // 0x376f24: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x376f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_376f28:
    // 0x376f28: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x376f28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_376f2c:
    // 0x376f2c: 0x320f809  jalr        $t9
label_376f30:
    if (ctx->pc == 0x376F30u) {
        ctx->pc = 0x376F30u;
            // 0x376f30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x376F34u;
        goto label_376f34;
    }
    ctx->pc = 0x376F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376F34u);
        ctx->pc = 0x376F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376F2Cu;
            // 0x376f30: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376F34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376F34u; }
            if (ctx->pc != 0x376F34u) { return; }
        }
        }
    }
    ctx->pc = 0x376F34u;
label_376f34:
    // 0x376f34: 0x8e320050  lw          $s2, 0x50($s1)
    ctx->pc = 0x376f34u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376f38:
    // 0x376f38: 0xc088b74  jal         func_222DD0
label_376f3c:
    if (ctx->pc == 0x376F3Cu) {
        ctx->pc = 0x376F3Cu;
            // 0x376f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376F40u;
        goto label_376f40;
    }
    ctx->pc = 0x376F38u;
    SET_GPR_U32(ctx, 31, 0x376F40u);
    ctx->pc = 0x376F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376F38u;
            // 0x376f3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F40u; }
        if (ctx->pc != 0x376F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F40u; }
        if (ctx->pc != 0x376F40u) { return; }
    }
    ctx->pc = 0x376F40u;
label_376f40:
    // 0x376f40: 0x8e5900a0  lw          $t9, 0xA0($s2)
    ctx->pc = 0x376f40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 160)));
label_376f44:
    // 0x376f44: 0x264400a0  addiu       $a0, $s2, 0xA0
    ctx->pc = 0x376f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 160));
label_376f48:
    // 0x376f48: 0x8f390048  lw          $t9, 0x48($t9)
    ctx->pc = 0x376f48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 72)));
label_376f4c:
    // 0x376f4c: 0x320f809  jalr        $t9
label_376f50:
    if (ctx->pc == 0x376F50u) {
        ctx->pc = 0x376F50u;
            // 0x376f50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x376F54u;
        goto label_376f54;
    }
    ctx->pc = 0x376F4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x376F54u);
        ctx->pc = 0x376F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376F4Cu;
            // 0x376f50: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x376F54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x376F54u; }
            if (ctx->pc != 0x376F54u) { return; }
        }
        }
    }
    ctx->pc = 0x376F54u;
label_376f54:
    // 0x376f54: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x376f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376f58:
    // 0x376f58: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x376f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_376f5c:
    // 0x376f5c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x376f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_376f60:
    // 0x376f60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x376f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_376f64:
    // 0x376f64: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x376f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_376f68:
    // 0x376f68: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x376f68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_376f6c:
    // 0x376f6c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x376f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_376f70:
    // 0x376f70: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x376f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_376f74:
    // 0x376f74: 0xc08bff0  jal         func_22FFC0
label_376f78:
    if (ctx->pc == 0x376F78u) {
        ctx->pc = 0x376F78u;
            // 0x376f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376F7Cu;
        goto label_376f7c;
    }
    ctx->pc = 0x376F74u;
    SET_GPR_U32(ctx, 31, 0x376F7Cu);
    ctx->pc = 0x376F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376F74u;
            // 0x376f78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F7Cu; }
        if (ctx->pc != 0x376F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F7Cu; }
        if (ctx->pc != 0x376F7Cu) { return; }
    }
    ctx->pc = 0x376F7Cu;
label_376f7c:
    // 0x376f7c: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x376f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376f80:
    // 0x376f80: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x376f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_376f84:
    // 0x376f84: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x376f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_376f88:
    // 0x376f88: 0xc08914c  jal         func_224530
label_376f8c:
    if (ctx->pc == 0x376F8Cu) {
        ctx->pc = 0x376F8Cu;
            // 0x376f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376F90u;
        goto label_376f90;
    }
    ctx->pc = 0x376F88u;
    SET_GPR_U32(ctx, 31, 0x376F90u);
    ctx->pc = 0x376F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376F88u;
            // 0x376f8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F90u; }
        if (ctx->pc != 0x376F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F90u; }
        if (ctx->pc != 0x376F90u) { return; }
    }
    ctx->pc = 0x376F90u;
label_376f90:
    // 0x376f90: 0xc0e393c  jal         func_38E4F0
label_376f94:
    if (ctx->pc == 0x376F94u) {
        ctx->pc = 0x376F94u;
            // 0x376f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x376F98u;
        goto label_376f98;
    }
    ctx->pc = 0x376F90u;
    SET_GPR_U32(ctx, 31, 0x376F98u);
    ctx->pc = 0x376F94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x376F90u;
            // 0x376f94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F98u; }
        if (ctx->pc != 0x376F98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x376F98u; }
        if (ctx->pc != 0x376F98u) { return; }
    }
    ctx->pc = 0x376F98u;
label_376f98:
    // 0x376f98: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x376f98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376f9c:
    // 0x376f9c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x376f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_376fa0:
    // 0x376fa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x376fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_376fa4:
    // 0x376fa4: 0x3c0443fa  lui         $a0, 0x43FA
    ctx->pc = 0x376fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17402 << 16));
label_376fa8:
    // 0x376fa8: 0x3c034348  lui         $v1, 0x4348
    ctx->pc = 0x376fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17224 << 16));
label_376fac:
    // 0x376fac: 0xaca0015c  sw          $zero, 0x15C($a1)
    ctx->pc = 0x376facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 348), GPR_U32(ctx, 0));
label_376fb0:
    // 0x376fb0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x376fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376fb4:
    // 0x376fb4: 0xac400160  sw          $zero, 0x160($v0)
    ctx->pc = 0x376fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 0));
label_376fb8:
    // 0x376fb8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x376fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376fbc:
    // 0x376fbc: 0xac440154  sw          $a0, 0x154($v0)
    ctx->pc = 0x376fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 4));
label_376fc0:
    // 0x376fc0: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x376fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_376fc4:
    // 0x376fc4: 0xac430158  sw          $v1, 0x158($v0)
    ctx->pc = 0x376fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 3));
label_376fc8:
    // 0x376fc8: 0xc6210030  lwc1        $f1, 0x30($s1)
    ctx->pc = 0x376fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_376fcc:
    // 0x376fcc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x376fccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_376fd0:
    // 0x376fd0: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_376fd4:
    if (ctx->pc == 0x376FD4u) {
        ctx->pc = 0x376FD4u;
            // 0x376fd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x376FD8u;
        goto label_376fd8;
    }
    ctx->pc = 0x376FD0u;
    {
        const bool branch_taken_0x376fd0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x376fd0) {
            ctx->pc = 0x376FD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x376FD0u;
            // 0x376fd4: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x376FE8u;
            goto label_376fe8;
        }
    }
    ctx->pc = 0x376FD8u;
label_376fd8:
    // 0x376fd8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376fd8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_376fdc:
    // 0x376fdc: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x376fdcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_376fe0:
    // 0x376fe0: 0x10000007  b           . + 4 + (0x7 << 2)
label_376fe4:
    if (ctx->pc == 0x376FE4u) {
        ctx->pc = 0x376FE4u;
            // 0x376fe4: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x376FE8u;
        goto label_376fe8;
    }
    ctx->pc = 0x376FE0u;
    {
        const bool branch_taken_0x376fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x376FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x376FE0u;
            // 0x376fe4: 0xc6210034  lwc1        $f1, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x376fe0) {
            ctx->pc = 0x377000u;
            goto label_377000;
        }
    }
    ctx->pc = 0x376FE8u;
label_376fe8:
    // 0x376fe8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x376fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_376fec:
    // 0x376fec: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x376fecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_376ff0:
    // 0x376ff0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x376ff0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_376ff4:
    // 0x376ff4: 0x0  nop
    ctx->pc = 0x376ff4u;
    // NOP
label_376ff8:
    // 0x376ff8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x376ff8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_376ffc:
    // 0x376ffc: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x376ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377000:
    // 0x377000: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x377000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_377004:
    // 0x377004: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x377004u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_377008:
    // 0x377008: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x377008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_37700c:
    // 0x37700c: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x37700cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_377010:
    // 0x377010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x377010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377014:
    // 0x377014: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x377014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_377018:
    // 0x377018: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x377018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37701c:
    // 0x37701c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37701cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_377020:
    // 0x377020: 0x0  nop
    ctx->pc = 0x377020u;
    // NOP
label_377024:
    // 0x377024: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x377024u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_377028:
    // 0x377028: 0xc62d0038  lwc1        $f13, 0x38($s1)
    ctx->pc = 0x377028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_37702c:
    // 0x37702c: 0xc62e0010  lwc1        $f14, 0x10($s1)
    ctx->pc = 0x37702cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_377030:
    // 0x377030: 0x0  nop
    ctx->pc = 0x377030u;
    // NOP
label_377034:
    // 0x377034: 0x0  nop
    ctx->pc = 0x377034u;
    // NOP
label_377038:
    // 0x377038: 0xc0d8aac  jal         func_362AB0
label_37703c:
    if (ctx->pc == 0x37703Cu) {
        ctx->pc = 0x377040u;
        goto label_377040;
    }
    ctx->pc = 0x377038u;
    SET_GPR_U32(ctx, 31, 0x377040u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377040u; }
        if (ctx->pc != 0x377040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377040u; }
        if (ctx->pc != 0x377040u) { return; }
    }
    ctx->pc = 0x377040u;
label_377040:
    // 0x377040: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x377040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_377044:
    // 0x377044: 0xc04cc04  jal         func_133010
label_377048:
    if (ctx->pc == 0x377048u) {
        ctx->pc = 0x377048u;
            // 0x377048: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->pc = 0x37704Cu;
        goto label_37704c;
    }
    ctx->pc = 0x377044u;
    SET_GPR_U32(ctx, 31, 0x37704Cu);
    ctx->pc = 0x377048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377044u;
            // 0x377048: 0x26050150  addiu       $a1, $s0, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37704Cu; }
        if (ctx->pc != 0x37704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37704Cu; }
        if (ctx->pc != 0x37704Cu) { return; }
    }
    ctx->pc = 0x37704Cu;
label_37704c:
    // 0x37704c: 0x26050134  addiu       $a1, $s0, 0x134
    ctx->pc = 0x37704cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 308));
label_377050:
    // 0x377050: 0xc04c720  jal         func_131C80
label_377054:
    if (ctx->pc == 0x377054u) {
        ctx->pc = 0x377054u;
            // 0x377054: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->pc = 0x377058u;
        goto label_377058;
    }
    ctx->pc = 0x377050u;
    SET_GPR_U32(ctx, 31, 0x377058u);
    ctx->pc = 0x377054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377050u;
            // 0x377054: 0x26240020  addiu       $a0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377058u; }
        if (ctx->pc != 0x377058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377058u; }
        if (ctx->pc != 0x377058u) { return; }
    }
    ctx->pc = 0x377058u;
label_377058:
    // 0x377058: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x377058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_37705c:
    // 0x37705c: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x37705cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_377060:
    // 0x377060: 0xae220280  sw          $v0, 0x280($s1)
    ctx->pc = 0x377060u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 2));
label_377064:
    // 0x377064: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x377064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_377068:
    // 0x377068: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x377068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_37706c:
    // 0x37706c: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x37706cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377070:
    // 0x377070: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x377070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377074:
    // 0x377074: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x377074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377078:
    // 0x377078: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x377078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_37707c:
    // 0x37707c: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x37707cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_377080:
    // 0x377080: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x377080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_377084:
    // 0x377084: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x377084u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_377088:
    // 0x377088: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x377088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_37708c:
    // 0x37708c: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x37708cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377090:
    // 0x377090: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x377090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377094:
    // 0x377094: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x377094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377098:
    // 0x377098: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x377098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_37709c:
    // 0x37709c: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x37709cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_3770a0:
    // 0x3770a0: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x3770a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_3770a4:
    // 0x3770a4: 0xc0892b0  jal         func_224AC0
label_3770a8:
    if (ctx->pc == 0x3770A8u) {
        ctx->pc = 0x3770A8u;
            // 0x3770a8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x3770ACu;
        goto label_3770ac;
    }
    ctx->pc = 0x3770A4u;
    SET_GPR_U32(ctx, 31, 0x3770ACu);
    ctx->pc = 0x3770A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3770A4u;
            // 0x3770a8: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3770ACu; }
        if (ctx->pc != 0x3770ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3770ACu; }
        if (ctx->pc != 0x3770ACu) { return; }
    }
    ctx->pc = 0x3770ACu;
label_3770ac:
    // 0x3770ac: 0x8e240288  lw          $a0, 0x288($s1)
    ctx->pc = 0x3770acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 648)));
label_3770b0:
    // 0x3770b0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3770b4:
    if (ctx->pc == 0x3770B4u) {
        ctx->pc = 0x3770B8u;
        goto label_3770b8;
    }
    ctx->pc = 0x3770B0u;
    {
        const bool branch_taken_0x3770b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3770b0) {
            ctx->pc = 0x3770C8u;
            goto label_3770c8;
        }
    }
    ctx->pc = 0x3770B8u;
label_3770b8:
    // 0x3770b8: 0x808311a3  lb          $v1, 0x11A3($a0)
    ctx->pc = 0x3770b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4515)));
label_3770bc:
    // 0x3770bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3770bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3770c0:
    // 0x3770c0: 0xa08311a3  sb          $v1, 0x11A3($a0)
    ctx->pc = 0x3770c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4515), (uint8_t)GPR_U32(ctx, 3));
label_3770c4:
    // 0x3770c4: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x3770c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
label_3770c8:
    // 0x3770c8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3770c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_3770cc:
    // 0x3770cc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x3770ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3770d0:
    // 0x3770d0: 0x8c7389e8  lw          $s3, -0x7618($v1)
    ctx->pc = 0x3770d0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_3770d4:
    // 0x3770d4: 0x263000d4  addiu       $s0, $s1, 0xD4
    ctx->pc = 0x3770d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 212));
label_3770d8:
    // 0x3770d8: 0x86050000  lh          $a1, 0x0($s0)
    ctx->pc = 0x3770d8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_3770dc:
    // 0x3770dc: 0x4a00008  bltz        $a1, . + 4 + (0x8 << 2)
label_3770e0:
    if (ctx->pc == 0x3770E0u) {
        ctx->pc = 0x3770E4u;
        goto label_3770e4;
    }
    ctx->pc = 0x3770DCu;
    {
        const bool branch_taken_0x3770dc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3770dc) {
            ctx->pc = 0x377100u;
            goto label_377100;
        }
    }
    ctx->pc = 0x3770E4u;
label_3770e4:
    // 0x3770e4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3770e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3770e8:
    // 0x3770e8: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3770e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3770ec:
    // 0x3770ec: 0x320f809  jalr        $t9
label_3770f0:
    if (ctx->pc == 0x3770F0u) {
        ctx->pc = 0x3770F0u;
            // 0x3770f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3770F4u;
        goto label_3770f4;
    }
    ctx->pc = 0x3770ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3770F4u);
        ctx->pc = 0x3770F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3770ECu;
            // 0x3770f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3770F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3770F4u; }
            if (ctx->pc != 0x3770F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3770F4u;
label_3770f4:
    // 0x3770f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3770f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3770f8:
    // 0x3770f8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x3770f8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_3770fc:
    // 0x3770fc: 0x0  nop
    ctx->pc = 0x3770fcu;
    // NOP
label_377100:
    // 0x377100: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x377100u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_377104:
    // 0x377104: 0x1640fff4  bnez        $s2, . + 4 + (-0xC << 2)
label_377108:
    if (ctx->pc == 0x377108u) {
        ctx->pc = 0x377108u;
            // 0x377108: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x37710Cu;
        goto label_37710c;
    }
    ctx->pc = 0x377104u;
    {
        const bool branch_taken_0x377104 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x377108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377104u;
            // 0x377108: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377104) {
            ctx->pc = 0x3770D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3770d8;
        }
    }
    ctx->pc = 0x37710Cu;
label_37710c:
    // 0x37710c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x37710cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_377110:
    // 0x377110: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x377110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_377114:
    // 0x377114: 0xa224004c  sb          $a0, 0x4C($s1)
    ctx->pc = 0x377114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 76), (uint8_t)GPR_U32(ctx, 4));
label_377118:
    // 0x377118: 0xa2230064  sb          $v1, 0x64($s1)
    ctx->pc = 0x377118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 3));
label_37711c:
    // 0x37711c: 0xa2200065  sb          $zero, 0x65($s1)
    ctx->pc = 0x37711cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 0));
label_377120:
    // 0x377120: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x377120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_377124:
    // 0x377124: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_377128:
    // 0x377128: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377128u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37712c:
    // 0x37712c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37712cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377130:
    // 0x377130: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377130u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377134:
    // 0x377134: 0x3e00008  jr          $ra
label_377138:
    if (ctx->pc == 0x377138u) {
        ctx->pc = 0x377138u;
            // 0x377138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x37713Cu;
        goto label_37713c;
    }
    ctx->pc = 0x377134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377134u;
            // 0x377138: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37713Cu;
label_37713c:
    // 0x37713c: 0x0  nop
    ctx->pc = 0x37713cu;
    // NOP
label_377140:
    // 0x377140: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x377140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_377144:
    // 0x377144: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x377144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_377148:
    // 0x377148: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x377148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_37714c:
    // 0x37714c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x37714cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_377150:
    // 0x377150: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_377154:
    // 0x377154: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_377158:
    // 0x377158: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37715c:
    // 0x37715c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37715cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377160:
    // 0x377160: 0xac8002b4  sw          $zero, 0x2B4($a0)
    ctx->pc = 0x377160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 692), GPR_U32(ctx, 0));
label_377164:
    // 0x377164: 0xc4810038  lwc1        $f1, 0x38($a0)
    ctx->pc = 0x377164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377168:
    // 0x377168: 0xe48102b0  swc1        $f1, 0x2B0($a0)
    ctx->pc = 0x377168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 688), bits); }
label_37716c:
    // 0x37716c: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x37716cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377170:
    // 0x377170: 0xe48102b8  swc1        $f1, 0x2B8($a0)
    ctx->pc = 0x377170u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 696), bits); }
label_377174:
    // 0x377174: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x377174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377178:
    // 0x377178: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x377178u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_37717c:
    // 0x37717c: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_377180:
    if (ctx->pc == 0x377180u) {
        ctx->pc = 0x377180u;
            // 0x377180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377184u;
        goto label_377184;
    }
    ctx->pc = 0x37717Cu;
    {
        const bool branch_taken_0x37717c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x377180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37717Cu;
            // 0x377180: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37717c) {
            ctx->pc = 0x377194u;
            goto label_377194;
        }
    }
    ctx->pc = 0x377184u;
label_377184:
    // 0x377184: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x377184u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_377188:
    // 0x377188: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x377188u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_37718c:
    // 0x37718c: 0x10000008  b           . + 4 + (0x8 << 2)
label_377190:
    if (ctx->pc == 0x377190u) {
        ctx->pc = 0x377190u;
            // 0x377190: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x377194u;
        goto label_377194;
    }
    ctx->pc = 0x37718Cu;
    {
        const bool branch_taken_0x37718c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37718Cu;
            // 0x377190: 0xc6010034  lwc1        $f1, 0x34($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x37718c) {
            ctx->pc = 0x3771B0u;
            goto label_3771b0;
        }
    }
    ctx->pc = 0x377194u;
label_377194:
    // 0x377194: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x377194u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_377198:
    // 0x377198: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x377198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_37719c:
    // 0x37719c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x37719cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3771a0:
    // 0x3771a0: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x3771a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_3771a4:
    // 0x3771a4: 0x0  nop
    ctx->pc = 0x3771a4u;
    // NOP
label_3771a8:
    // 0x3771a8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3771a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_3771ac:
    // 0x3771ac: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x3771acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3771b0:
    // 0x3771b0: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x3771b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_3771b4:
    // 0x3771b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3771b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3771b8:
    // 0x3771b8: 0x3c024852  lui         $v0, 0x4852
    ctx->pc = 0x3771b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18514 << 16));
label_3771bc:
    // 0x3771bc: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3771bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3771c0:
    // 0x3771c0: 0x260400f0  addiu       $a0, $s0, 0xF0
    ctx->pc = 0x3771c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
label_3771c4:
    // 0x3771c4: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x3771c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_3771c8:
    // 0x3771c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3771c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3771cc:
    // 0x3771cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3771ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3771d0:
    // 0x3771d0: 0x0  nop
    ctx->pc = 0x3771d0u;
    // NOP
label_3771d4:
    // 0x3771d4: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x3771d4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[12] = ctx->f[1] / ctx->f[0];
label_3771d8:
    // 0x3771d8: 0xc60d0038  lwc1        $f13, 0x38($s0)
    ctx->pc = 0x3771d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3771dc:
    // 0x3771dc: 0xc60e0010  lwc1        $f14, 0x10($s0)
    ctx->pc = 0x3771dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3771e0:
    // 0x3771e0: 0x0  nop
    ctx->pc = 0x3771e0u;
    // NOP
label_3771e4:
    // 0x3771e4: 0x0  nop
    ctx->pc = 0x3771e4u;
    // NOP
label_3771e8:
    // 0x3771e8: 0xc0d8aac  jal         func_362AB0
label_3771ec:
    if (ctx->pc == 0x3771ECu) {
        ctx->pc = 0x3771F0u;
        goto label_3771f0;
    }
    ctx->pc = 0x3771E8u;
    SET_GPR_U32(ctx, 31, 0x3771F0u);
    ctx->pc = 0x362AB0u;
    if (runtime->hasFunction(0x362AB0u)) {
        auto targetFn = runtime->lookupFunction(0x362AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3771F0u; }
        if (ctx->pc != 0x3771F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00362AB0_0x362ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3771F0u; }
        if (ctx->pc != 0x3771F0u) { return; }
    }
    ctx->pc = 0x3771F0u;
label_3771f0:
    // 0x3771f0: 0xc60c0240  lwc1        $f12, 0x240($s0)
    ctx->pc = 0x3771f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3771f4:
    // 0x3771f4: 0xc60d0244  lwc1        $f13, 0x244($s0)
    ctx->pc = 0x3771f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_3771f8:
    // 0x3771f8: 0xc60e0248  lwc1        $f14, 0x248($s0)
    ctx->pc = 0x3771f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_3771fc:
    // 0x3771fc: 0xc04cbd8  jal         func_132F60
label_377200:
    if (ctx->pc == 0x377200u) {
        ctx->pc = 0x377200u;
            // 0x377200: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x377204u;
        goto label_377204;
    }
    ctx->pc = 0x3771FCu;
    SET_GPR_U32(ctx, 31, 0x377204u);
    ctx->pc = 0x377200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3771FCu;
            // 0x377200: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377204u; }
        if (ctx->pc != 0x377204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377204u; }
        if (ctx->pc != 0x377204u) { return; }
    }
    ctx->pc = 0x377204u;
label_377204:
    // 0x377204: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x377204u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_377208:
    // 0x377208: 0xc04c720  jal         func_131C80
label_37720c:
    if (ctx->pc == 0x37720Cu) {
        ctx->pc = 0x37720Cu;
            // 0x37720c: 0x26050224  addiu       $a1, $s0, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
        ctx->pc = 0x377210u;
        goto label_377210;
    }
    ctx->pc = 0x377208u;
    SET_GPR_U32(ctx, 31, 0x377210u);
    ctx->pc = 0x37720Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377208u;
            // 0x37720c: 0x26050224  addiu       $a1, $s0, 0x224 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377210u; }
        if (ctx->pc != 0x377210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377210u; }
        if (ctx->pc != 0x377210u) { return; }
    }
    ctx->pc = 0x377210u;
label_377210:
    // 0x377210: 0xae0000e0  sw          $zero, 0xE0($s0)
    ctx->pc = 0x377210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 224), GPR_U32(ctx, 0));
label_377214:
    // 0x377214: 0x3c020125  lui         $v0, 0x125
    ctx->pc = 0x377214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)293 << 16));
label_377218:
    // 0x377218: 0x8e050050  lw          $a1, 0x50($s0)
    ctx->pc = 0x377218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_37721c:
    // 0x37721c: 0x34430120  ori         $v1, $v0, 0x120
    ctx->pc = 0x37721cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
label_377220:
    // 0x377220: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x377220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_377224:
    // 0x377224: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x377224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_377228:
    // 0x377228: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x377228u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_37722c:
    // 0x37722c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x37722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_377230:
    // 0x377230: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x377230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_377234:
    // 0x377234: 0xc08bff0  jal         func_22FFC0
label_377238:
    if (ctx->pc == 0x377238u) {
        ctx->pc = 0x377238u;
            // 0x377238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37723Cu;
        goto label_37723c;
    }
    ctx->pc = 0x377234u;
    SET_GPR_U32(ctx, 31, 0x37723Cu);
    ctx->pc = 0x377238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377234u;
            // 0x377238: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37723Cu; }
        if (ctx->pc != 0x37723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37723Cu; }
        if (ctx->pc != 0x37723Cu) { return; }
    }
    ctx->pc = 0x37723Cu;
label_37723c:
    // 0x37723c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x37723cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_377240:
    // 0x377240: 0xc6020018  lwc1        $f2, 0x18($s0)
    ctx->pc = 0x377240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_377244:
    // 0x377244: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x377244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377248:
    // 0x377248: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x377248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_37724c:
    // 0x37724c: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x37724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377250:
    // 0x377250: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x377250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_377254:
    // 0x377254: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x377254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_377258:
    // 0x377258: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x377258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_37725c:
    // 0x37725c: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x37725cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_377260:
    // 0x377260: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x377260u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_377264:
    // 0x377264: 0xc603002c  lwc1        $f3, 0x2C($s0)
    ctx->pc = 0x377264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_377268:
    // 0x377268: 0xc6020028  lwc1        $f2, 0x28($s0)
    ctx->pc = 0x377268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_37726c:
    // 0x37726c: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x37726cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377270:
    // 0x377270: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x377270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377274:
    // 0x377274: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x377274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_377278:
    // 0x377278: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x377278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_37727c:
    // 0x37727c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x37727cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_377280:
    // 0x377280: 0xc0892b0  jal         func_224AC0
label_377284:
    if (ctx->pc == 0x377284u) {
        ctx->pc = 0x377284u;
            // 0x377284: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->pc = 0x377288u;
        goto label_377288;
    }
    ctx->pc = 0x377280u;
    SET_GPR_U32(ctx, 31, 0x377288u);
    ctx->pc = 0x377284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377280u;
            // 0x377284: 0xe7a3005c  swc1        $f3, 0x5C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377288u; }
        if (ctx->pc != 0x377288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377288u; }
        if (ctx->pc != 0x377288u) { return; }
    }
    ctx->pc = 0x377288u;
label_377288:
    // 0x377288: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x377288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
label_37728c:
    // 0x37728c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x37728cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_377290:
    // 0x377290: 0x8c7389e8  lw          $s3, -0x7618($v1)
    ctx->pc = 0x377290u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937064)));
label_377294:
    // 0x377294: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x377294u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_377298:
    // 0x377298: 0x261100d4  addiu       $s1, $s0, 0xD4
    ctx->pc = 0x377298u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 212));
label_37729c:
    // 0x37729c: 0x86250000  lh          $a1, 0x0($s1)
    ctx->pc = 0x37729cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3772a0:
    // 0x3772a0: 0x4a00007  bltz        $a1, . + 4 + (0x7 << 2)
label_3772a4:
    if (ctx->pc == 0x3772A4u) {
        ctx->pc = 0x3772A8u;
        goto label_3772a8;
    }
    ctx->pc = 0x3772A0u;
    {
        const bool branch_taken_0x3772a0 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3772a0) {
            ctx->pc = 0x3772C0u;
            goto label_3772c0;
        }
    }
    ctx->pc = 0x3772A8u;
label_3772a8:
    // 0x3772a8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3772a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3772ac:
    // 0x3772ac: 0x8f390070  lw          $t9, 0x70($t9)
    ctx->pc = 0x3772acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 112)));
label_3772b0:
    // 0x3772b0: 0x320f809  jalr        $t9
label_3772b4:
    if (ctx->pc == 0x3772B4u) {
        ctx->pc = 0x3772B4u;
            // 0x3772b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3772B8u;
        goto label_3772b8;
    }
    ctx->pc = 0x3772B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3772B8u);
        ctx->pc = 0x3772B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3772B0u;
            // 0x3772b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3772B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3772B8u; }
            if (ctx->pc != 0x3772B8u) { return; }
        }
        }
    }
    ctx->pc = 0x3772B8u;
label_3772b8:
    // 0x3772b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3772b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3772bc:
    // 0x3772bc: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x3772bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
label_3772c0:
    // 0x3772c0: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x3772c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_3772c4:
    // 0x3772c4: 0x1640fff5  bnez        $s2, . + 4 + (-0xB << 2)
label_3772c8:
    if (ctx->pc == 0x3772C8u) {
        ctx->pc = 0x3772C8u;
            // 0x3772c8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x3772CCu;
        goto label_3772cc;
    }
    ctx->pc = 0x3772C4u;
    {
        const bool branch_taken_0x3772c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x3772C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3772C4u;
            // 0x3772c8: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3772c4) {
            ctx->pc = 0x37729Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_37729c;
        }
    }
    ctx->pc = 0x3772CCu;
label_3772cc:
    // 0x3772cc: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x3772ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_3772d0:
    // 0x3772d0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3772d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3772d4:
    // 0x3772d4: 0xa204004c  sb          $a0, 0x4C($s0)
    ctx->pc = 0x3772d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 4));
label_3772d8:
    // 0x3772d8: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x3772d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_3772dc:
    // 0x3772dc: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x3772dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_3772e0:
    // 0x3772e0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3772e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3772e4:
    // 0x3772e4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3772e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3772e8:
    // 0x3772e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3772e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3772ec:
    // 0x3772ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3772ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3772f0:
    // 0x3772f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3772f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3772f4:
    // 0x3772f4: 0x3e00008  jr          $ra
label_3772f8:
    if (ctx->pc == 0x3772F8u) {
        ctx->pc = 0x3772F8u;
            // 0x3772f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x3772FCu;
        goto label_3772fc;
    }
    ctx->pc = 0x3772F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3772F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3772F4u;
            // 0x3772f8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3772FCu;
label_3772fc:
    // 0x3772fc: 0x0  nop
    ctx->pc = 0x3772fcu;
    // NOP
label_377300:
    // 0x377300: 0x3e00008  jr          $ra
label_377304:
    if (ctx->pc == 0x377304u) {
        ctx->pc = 0x377304u;
            // 0x377304: 0x24022f12  addiu       $v0, $zero, 0x2F12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12050));
        ctx->pc = 0x377308u;
        goto label_377308;
    }
    ctx->pc = 0x377300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377300u;
            // 0x377304: 0x24022f12  addiu       $v0, $zero, 0x2F12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12050));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377308u;
label_377308:
    // 0x377308: 0x0  nop
    ctx->pc = 0x377308u;
    // NOP
label_37730c:
    // 0x37730c: 0x0  nop
    ctx->pc = 0x37730cu;
    // NOP
label_377310:
    // 0x377310: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x377310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_377314:
    // 0x377314: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x377314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_377318:
    // 0x377318: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37731c:
    // 0x37731c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_377320:
    // 0x377320: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x377320u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377324:
    // 0x377324: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_377328:
    // 0x377328: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37732c:
    // 0x37732c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37732cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377330:
    // 0x377330: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x377330u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_377334:
    // 0x377334: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_377338:
    if (ctx->pc == 0x377338u) {
        ctx->pc = 0x377338u;
            // 0x377338: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37733Cu;
        goto label_37733c;
    }
    ctx->pc = 0x377334u;
    {
        const bool branch_taken_0x377334 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377334u;
            // 0x377338: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377334) {
            ctx->pc = 0x377378u;
            goto label_377378;
        }
    }
    ctx->pc = 0x37733Cu;
label_37733c:
    // 0x37733c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x37733cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377340:
    // 0x377340: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x377340u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377344:
    // 0x377344: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x377344u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377348:
    // 0x377348: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x377348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_37734c:
    // 0x37734c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x37734cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_377350:
    // 0x377350: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x377350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377354:
    // 0x377354: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x377354u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_377358:
    // 0x377358: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x377358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_37735c:
    // 0x37735c: 0x320f809  jalr        $t9
label_377360:
    if (ctx->pc == 0x377360u) {
        ctx->pc = 0x377364u;
        goto label_377364;
    }
    ctx->pc = 0x37735Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x377364u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x377364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x377364u; }
            if (ctx->pc != 0x377364u) { return; }
        }
        }
    }
    ctx->pc = 0x377364u;
label_377364:
    // 0x377364: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x377364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_377368:
    // 0x377368: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x377368u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_37736c:
    // 0x37736c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x37736cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_377370:
    // 0x377370: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_377374:
    if (ctx->pc == 0x377374u) {
        ctx->pc = 0x377374u;
            // 0x377374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x377378u;
        goto label_377378;
    }
    ctx->pc = 0x377370u;
    {
        const bool branch_taken_0x377370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377370u;
            // 0x377374: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377370) {
            ctx->pc = 0x377348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_377348;
        }
    }
    ctx->pc = 0x377378u;
label_377378:
    // 0x377378: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x377378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_37737c:
    // 0x37737c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x37737cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_377380:
    // 0x377380: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377380u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_377384:
    // 0x377384: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377384u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_377388:
    // 0x377388: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377388u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37738c:
    // 0x37738c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37738cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377390:
    // 0x377390: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377394:
    // 0x377394: 0x3e00008  jr          $ra
label_377398:
    if (ctx->pc == 0x377398u) {
        ctx->pc = 0x377398u;
            // 0x377398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x37739Cu;
        goto label_37739c;
    }
    ctx->pc = 0x377394u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377394u;
            // 0x377398: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37739Cu;
label_37739c:
    // 0x37739c: 0x0  nop
    ctx->pc = 0x37739cu;
    // NOP
label_3773a0:
    // 0x3773a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3773a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3773a4:
    // 0x3773a4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3773a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3773a8:
    // 0x3773a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3773a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3773ac:
    // 0x3773ac: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x3773acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_3773b0:
    // 0x3773b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3773b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3773b4:
    // 0x3773b4: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x3773b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3773b8:
    // 0x3773b8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3773b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3773bc:
    // 0x3773bc: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x3773bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_3773c0:
    // 0x3773c0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3773c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3773c4:
    // 0x3773c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3773c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3773c8:
    // 0x3773c8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x3773c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_3773cc:
    // 0x3773cc: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x3773ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3773d0:
    // 0x3773d0: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x3773d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_3773d4:
    // 0x3773d4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3773d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3773d8:
    // 0x3773d8: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x3773d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_3773dc:
    // 0x3773dc: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x3773dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_3773e0:
    // 0x3773e0: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x3773e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_3773e4:
    // 0x3773e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3773e8:
    // 0x3773e8: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x3773e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_3773ec:
    // 0x3773ec: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x3773ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3773f0:
    // 0x3773f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x3773f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_3773f4:
    // 0x3773f4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3773f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3773f8:
    // 0x3773f8: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x3773f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3773fc:
    // 0x3773fc: 0xc0a997c  jal         func_2A65F0
label_377400:
    if (ctx->pc == 0x377400u) {
        ctx->pc = 0x377400u;
            // 0x377400: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x377404u;
        goto label_377404;
    }
    ctx->pc = 0x3773FCu;
    SET_GPR_U32(ctx, 31, 0x377404u);
    ctx->pc = 0x377400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3773FCu;
            // 0x377400: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377404u; }
        if (ctx->pc != 0x377404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377404u; }
        if (ctx->pc != 0x377404u) { return; }
    }
    ctx->pc = 0x377404u;
label_377404:
    // 0x377404: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x377404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_377408:
    // 0x377408: 0xc0d879c  jal         func_361E70
label_37740c:
    if (ctx->pc == 0x37740Cu) {
        ctx->pc = 0x37740Cu;
            // 0x37740c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377410u;
        goto label_377410;
    }
    ctx->pc = 0x377408u;
    SET_GPR_U32(ctx, 31, 0x377410u);
    ctx->pc = 0x37740Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377408u;
            // 0x37740c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377410u; }
        if (ctx->pc != 0x377410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377410u; }
        if (ctx->pc != 0x377410u) { return; }
    }
    ctx->pc = 0x377410u;
label_377410:
    // 0x377410: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_377414:
    // 0x377414: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377414u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377418:
    // 0x377418: 0x3e00008  jr          $ra
label_37741c:
    if (ctx->pc == 0x37741Cu) {
        ctx->pc = 0x37741Cu;
            // 0x37741c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x377420u;
        goto label_377420;
    }
    ctx->pc = 0x377418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37741Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377418u;
            // 0x37741c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377420u;
label_377420:
    // 0x377420: 0x80dd34c  j           func_374D30
label_377424:
    if (ctx->pc == 0x377424u) {
        ctx->pc = 0x377424u;
            // 0x377424: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x377428u;
        goto label_377428;
    }
    ctx->pc = 0x377420u;
    ctx->pc = 0x377424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377420u;
            // 0x377424: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374D30u;
    {
        auto targetFn = runtime->lookupFunction(0x374D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377428u;
label_377428:
    // 0x377428: 0x0  nop
    ctx->pc = 0x377428u;
    // NOP
label_37742c:
    // 0x37742c: 0x0  nop
    ctx->pc = 0x37742cu;
    // NOP
label_377430:
    // 0x377430: 0x80dd34c  j           func_374D30
label_377434:
    if (ctx->pc == 0x377434u) {
        ctx->pc = 0x377434u;
            // 0x377434: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->pc = 0x377438u;
        goto label_377438;
    }
    ctx->pc = 0x377430u;
    ctx->pc = 0x377434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377430u;
            // 0x377434: 0x2484ff30  addiu       $a0, $a0, -0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374D30u;
    {
        auto targetFn = runtime->lookupFunction(0x374D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377438u;
label_377438:
    // 0x377438: 0x0  nop
    ctx->pc = 0x377438u;
    // NOP
label_37743c:
    // 0x37743c: 0x0  nop
    ctx->pc = 0x37743cu;
    // NOP
label_377440:
    // 0x377440: 0x80dd5c4  j           func_375710
label_377444:
    if (ctx->pc == 0x377444u) {
        ctx->pc = 0x377444u;
            // 0x377444: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x377448u;
        goto label_377448;
    }
    ctx->pc = 0x377440u;
    ctx->pc = 0x377444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377440u;
            // 0x377444: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x375710u;
    {
        auto targetFn = runtime->lookupFunction(0x375710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377448u;
label_377448:
    // 0x377448: 0x0  nop
    ctx->pc = 0x377448u;
    // NOP
label_37744c:
    // 0x37744c: 0x0  nop
    ctx->pc = 0x37744cu;
    // NOP
label_377450:
    // 0x377450: 0x80dd2e4  j           func_374B90
label_377454:
    if (ctx->pc == 0x377454u) {
        ctx->pc = 0x377454u;
            // 0x377454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x377458u;
        goto label_377458;
    }
    ctx->pc = 0x377450u;
    ctx->pc = 0x377454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377450u;
            // 0x377454: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x374B90u;
    {
        auto targetFn = runtime->lookupFunction(0x374B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x377458u;
label_377458:
    // 0x377458: 0x0  nop
    ctx->pc = 0x377458u;
    // NOP
label_37745c:
    // 0x37745c: 0x0  nop
    ctx->pc = 0x37745cu;
    // NOP
label_377460:
    // 0x377460: 0x3e00008  jr          $ra
label_377464:
    if (ctx->pc == 0x377464u) {
        ctx->pc = 0x377464u;
            // 0x377464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377468u;
        goto label_377468;
    }
    ctx->pc = 0x377460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377460u;
            // 0x377464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377468u;
label_377468:
    // 0x377468: 0x0  nop
    ctx->pc = 0x377468u;
    // NOP
label_37746c:
    // 0x37746c: 0x0  nop
    ctx->pc = 0x37746cu;
    // NOP
label_377470:
    // 0x377470: 0x3e00008  jr          $ra
label_377474:
    if (ctx->pc == 0x377474u) {
        ctx->pc = 0x377474u;
            // 0x377474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377478u;
        goto label_377478;
    }
    ctx->pc = 0x377470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377470u;
            // 0x377474: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377478u;
label_377478:
    // 0x377478: 0x0  nop
    ctx->pc = 0x377478u;
    // NOP
label_37747c:
    // 0x37747c: 0x0  nop
    ctx->pc = 0x37747cu;
    // NOP
label_377480:
    // 0x377480: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377484:
    // 0x377484: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x377484u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_377488:
    // 0x377488: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37748c:
    // 0x37748c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37748cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377490:
    // 0x377490: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377490u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377494:
    // 0x377494: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_377498:
    if (ctx->pc == 0x377498u) {
        ctx->pc = 0x377498u;
            // 0x377498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37749Cu;
        goto label_37749c;
    }
    ctx->pc = 0x377494u;
    {
        const bool branch_taken_0x377494 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x377498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377494u;
            // 0x377498: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377494) {
            ctx->pc = 0x377534u;
            goto label_377534;
        }
    }
    ctx->pc = 0x37749Cu;
label_37749c:
    // 0x37749c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x37749cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3774a0:
    // 0x3774a0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3774a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3774a4:
    // 0x3774a4: 0x246370d0  addiu       $v1, $v1, 0x70D0
    ctx->pc = 0x3774a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28880));
label_3774a8:
    // 0x3774a8: 0x24427108  addiu       $v0, $v0, 0x7108
    ctx->pc = 0x3774a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28936));
label_3774ac:
    // 0x3774ac: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x3774acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_3774b0:
    // 0x3774b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3774b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3774b4:
    // 0x3774b4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x3774b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_3774b8:
    // 0x3774b8: 0x24637118  addiu       $v1, $v1, 0x7118
    ctx->pc = 0x3774b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 28952));
label_3774bc:
    // 0x3774bc: 0x262200a8  addiu       $v0, $s1, 0xA8
    ctx->pc = 0x3774bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 168));
label_3774c0:
    // 0x3774c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3774c4:
    if (ctx->pc == 0x3774C4u) {
        ctx->pc = 0x3774C4u;
            // 0x3774c4: 0xae2300a8  sw          $v1, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
        ctx->pc = 0x3774C8u;
        goto label_3774c8;
    }
    ctx->pc = 0x3774C0u;
    {
        const bool branch_taken_0x3774c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3774C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3774C0u;
            // 0x3774c4: 0xae2300a8  sw          $v1, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3774c0) {
            ctx->pc = 0x3774F0u;
            goto label_3774f0;
        }
    }
    ctx->pc = 0x3774C8u;
label_3774c8:
    // 0x3774c8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3774c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3774cc:
    // 0x3774cc: 0x24422720  addiu       $v0, $v0, 0x2720
    ctx->pc = 0x3774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10016));
label_3774d0:
    // 0x3774d0: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x3774d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_3774d4:
    // 0x3774d4: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x3774d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3774d8:
    // 0x3774d8: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_3774dc:
    if (ctx->pc == 0x3774DCu) {
        ctx->pc = 0x3774E0u;
        goto label_3774e0;
    }
    ctx->pc = 0x3774D8u;
    {
        const bool branch_taken_0x3774d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3774d8) {
            ctx->pc = 0x3774F0u;
            goto label_3774f0;
        }
    }
    ctx->pc = 0x3774E0u;
label_3774e0:
    // 0x3774e0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3774e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3774e4:
    // 0x3774e4: 0xc0fe48c  jal         func_3F9230
label_3774e8:
    if (ctx->pc == 0x3774E8u) {
        ctx->pc = 0x3774E8u;
            // 0x3774e8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->pc = 0x3774ECu;
        goto label_3774ec;
    }
    ctx->pc = 0x3774E4u;
    SET_GPR_U32(ctx, 31, 0x3774ECu);
    ctx->pc = 0x3774E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3774E4u;
            // 0x3774e8: 0x8c447378  lw          $a0, 0x7378($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 29560)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3774ECu; }
        if (ctx->pc != 0x3774ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3774ECu; }
        if (ctx->pc != 0x3774ECu) { return; }
    }
    ctx->pc = 0x3774ECu;
label_3774ec:
    // 0x3774ec: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3774ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
label_3774f0:
    // 0x3774f0: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
label_3774f4:
    if (ctx->pc == 0x3774F4u) {
        ctx->pc = 0x3774F4u;
            // 0x3774f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3774F8u;
        goto label_3774f8;
    }
    ctx->pc = 0x3774F0u;
    {
        const bool branch_taken_0x3774f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3774f0) {
            ctx->pc = 0x3774F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3774F0u;
            // 0x3774f4: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377520u;
            goto label_377520;
        }
    }
    ctx->pc = 0x3774F8u;
label_3774f8:
    // 0x3774f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x3774f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_3774fc:
    // 0x3774fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3774fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_377500:
    // 0x377500: 0x24632740  addiu       $v1, $v1, 0x2740
    ctx->pc = 0x377500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10048));
label_377504:
    // 0x377504: 0x24422778  addiu       $v0, $v0, 0x2778
    ctx->pc = 0x377504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10104));
label_377508:
    // 0x377508: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x377508u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37750c:
    // 0x37750c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x37750cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377510:
    // 0x377510: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x377510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_377514:
    // 0x377514: 0xc0ae594  jal         func_2B9650
label_377518:
    if (ctx->pc == 0x377518u) {
        ctx->pc = 0x377518u;
            // 0x377518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37751Cu;
        goto label_37751c;
    }
    ctx->pc = 0x377514u;
    SET_GPR_U32(ctx, 31, 0x37751Cu);
    ctx->pc = 0x377518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377514u;
            // 0x377518: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9650u;
    if (runtime->hasFunction(0x2B9650u)) {
        auto targetFn = runtime->lookupFunction(0x2B9650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37751Cu; }
        if (ctx->pc != 0x37751Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9650_0x2b9650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37751Cu; }
        if (ctx->pc != 0x37751Cu) { return; }
    }
    ctx->pc = 0x37751Cu;
label_37751c:
    // 0x37751c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x37751cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_377520:
    // 0x377520: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x377520u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_377524:
    // 0x377524: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_377528:
    if (ctx->pc == 0x377528u) {
        ctx->pc = 0x377528u;
            // 0x377528: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x37752Cu;
        goto label_37752c;
    }
    ctx->pc = 0x377524u;
    {
        const bool branch_taken_0x377524 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x377524) {
            ctx->pc = 0x377528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377524u;
            // 0x377528: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377538u;
            goto label_377538;
        }
    }
    ctx->pc = 0x37752Cu;
label_37752c:
    // 0x37752c: 0xc0400a8  jal         func_1002A0
label_377530:
    if (ctx->pc == 0x377530u) {
        ctx->pc = 0x377530u;
            // 0x377530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377534u;
        goto label_377534;
    }
    ctx->pc = 0x37752Cu;
    SET_GPR_U32(ctx, 31, 0x377534u);
    ctx->pc = 0x377530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x37752Cu;
            // 0x377530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377534u; }
        if (ctx->pc != 0x377534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377534u; }
        if (ctx->pc != 0x377534u) { return; }
    }
    ctx->pc = 0x377534u;
label_377534:
    // 0x377534: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x377534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_377538:
    // 0x377538: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x377538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_37753c:
    // 0x37753c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37753cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377540:
    // 0x377540: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377540u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377544:
    // 0x377544: 0x3e00008  jr          $ra
label_377548:
    if (ctx->pc == 0x377548u) {
        ctx->pc = 0x377548u;
            // 0x377548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x37754Cu;
        goto label_37754c;
    }
    ctx->pc = 0x377544u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377544u;
            // 0x377548: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37754Cu;
label_37754c:
    // 0x37754c: 0x0  nop
    ctx->pc = 0x37754cu;
    // NOP
label_377550:
    // 0x377550: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x377550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_377554:
    // 0x377554: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x377554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_377558:
    // 0x377558: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x377558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_37755c:
    // 0x37755c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x37755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_377560:
    // 0x377560: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x377560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_377564:
    // 0x377564: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x377564u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_377568:
    // 0x377568: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x377568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_37756c:
    // 0x37756c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x37756cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_377570:
    // 0x377570: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_377574:
    // 0x377574: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x377574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377578:
    // 0x377578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37757c:
    // 0x37757c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37757cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377580:
    // 0x377580: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x377580u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_377584:
    // 0x377584: 0x50830006  beql        $a0, $v1, . + 4 + (0x6 << 2)
label_377588:
    if (ctx->pc == 0x377588u) {
        ctx->pc = 0x377588u;
            // 0x377588: 0x8e740070  lw          $s4, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x37758Cu;
        goto label_37758c;
    }
    ctx->pc = 0x377584u;
    {
        const bool branch_taken_0x377584 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377584) {
            ctx->pc = 0x377588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377584u;
            // 0x377588: 0x8e740070  lw          $s4, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3775A0u;
            goto label_3775a0;
        }
    }
    ctx->pc = 0x37758Cu;
label_37758c:
    // 0x37758c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37758cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_377590:
    // 0x377590: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_377594:
    if (ctx->pc == 0x377594u) {
        ctx->pc = 0x377598u;
        goto label_377598;
    }
    ctx->pc = 0x377590u;
    {
        const bool branch_taken_0x377590 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377590) {
            ctx->pc = 0x377640u;
            goto label_377640;
        }
    }
    ctx->pc = 0x377598u;
label_377598:
    // 0x377598: 0x10000029  b           . + 4 + (0x29 << 2)
label_37759c:
    if (ctx->pc == 0x37759Cu) {
        ctx->pc = 0x3775A0u;
        goto label_3775a0;
    }
    ctx->pc = 0x377598u;
    {
        const bool branch_taken_0x377598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x377598) {
            ctx->pc = 0x377640u;
            goto label_377640;
        }
    }
    ctx->pc = 0x3775A0u;
label_3775a0:
    // 0x3775a0: 0x12800027  beqz        $s4, . + 4 + (0x27 << 2)
label_3775a4:
    if (ctx->pc == 0x3775A4u) {
        ctx->pc = 0x3775A8u;
        goto label_3775a8;
    }
    ctx->pc = 0x3775A0u;
    {
        const bool branch_taken_0x3775a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3775a0) {
            ctx->pc = 0x377640u;
            goto label_377640;
        }
    }
    ctx->pc = 0x3775A8u;
label_3775a8:
    // 0x3775a8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3775a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3775ac:
    // 0x3775ac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3775acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3775b0:
    // 0x3775b0: 0x8c72e378  lw          $s2, -0x1C88($v1)
    ctx->pc = 0x3775b0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3775b4:
    // 0x3775b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3775b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3775b8:
    // 0x3775b8: 0x8c45d130  lw          $a1, -0x2ED0($v0)
    ctx->pc = 0x3775b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3775bc:
    // 0x3775bc: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x3775bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_3775c0:
    // 0x3775c0: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3775c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3775c4:
    // 0x3775c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3775c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3775c8:
    // 0x3775c8: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3775c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3775cc:
    // 0x3775cc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3775ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3775d0:
    // 0x3775d0: 0x8c57e370  lw          $s7, -0x1C90($v0)
    ctx->pc = 0x3775d0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3775d4:
    // 0x3775d4: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x3775d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_3775d8:
    // 0x3775d8: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x3775d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3775dc:
    // 0x3775dc: 0x8e620084  lw          $v0, 0x84($s3)
    ctx->pc = 0x3775dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 132)));
label_3775e0:
    // 0x3775e0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3775e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3775e4:
    // 0x3775e4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3775e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3775e8:
    // 0x3775e8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x3775e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3775ec:
    // 0x3775ec: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3775ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_3775f0:
    // 0x3775f0: 0xc04e4a4  jal         func_139290
label_3775f4:
    if (ctx->pc == 0x3775F4u) {
        ctx->pc = 0x3775F4u;
            // 0x3775f4: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->pc = 0x3775F8u;
        goto label_3775f8;
    }
    ctx->pc = 0x3775F0u;
    SET_GPR_U32(ctx, 31, 0x3775F8u);
    ctx->pc = 0x3775F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3775F0u;
            // 0x3775f4: 0x24710010  addiu       $s1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3775F8u; }
        if (ctx->pc != 0x3775F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3775F8u; }
        if (ctx->pc != 0x3775F8u) { return; }
    }
    ctx->pc = 0x3775F8u;
label_3775f8:
    // 0x3775f8: 0xc04e738  jal         func_139CE0
label_3775fc:
    if (ctx->pc == 0x3775FCu) {
        ctx->pc = 0x3775FCu;
            // 0x3775fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x377600u;
        goto label_377600;
    }
    ctx->pc = 0x3775F8u;
    SET_GPR_U32(ctx, 31, 0x377600u);
    ctx->pc = 0x3775FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3775F8u;
            // 0x3775fc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377600u; }
        if (ctx->pc != 0x377600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377600u; }
        if (ctx->pc != 0x377600u) { return; }
    }
    ctx->pc = 0x377600u;
label_377600:
    // 0x377600: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x377600u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377604:
    // 0x377604: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x377604u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377608:
    // 0x377608: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x377608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_37760c:
    // 0x37760c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x37760cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_377610:
    // 0x377610: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x377610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_377614:
    // 0x377614: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x377614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_377618:
    // 0x377618: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x377618u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_37761c:
    // 0x37761c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x37761cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_377620:
    // 0x377620: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x377620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377624:
    // 0x377624: 0xc0dde80  jal         func_377A00
label_377628:
    if (ctx->pc == 0x377628u) {
        ctx->pc = 0x377628u;
            // 0x377628: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x37762Cu;
        goto label_37762c;
    }
    ctx->pc = 0x377624u;
    SET_GPR_U32(ctx, 31, 0x37762Cu);
    ctx->pc = 0x377628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377624u;
            // 0x377628: 0x27a90090  addiu       $t1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x377A00u;
    if (runtime->hasFunction(0x377A00u)) {
        auto targetFn = runtime->lookupFunction(0x377A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37762Cu; }
        if (ctx->pc != 0x37762Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00377A00_0x377a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37762Cu; }
        if (ctx->pc != 0x37762Cu) { return; }
    }
    ctx->pc = 0x37762Cu;
label_37762c:
    // 0x37762c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x37762cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_377630:
    // 0x377630: 0x2d4182b  sltu        $v1, $s6, $s4
    ctx->pc = 0x377630u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_377634:
    // 0x377634: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
label_377638:
    if (ctx->pc == 0x377638u) {
        ctx->pc = 0x377638u;
            // 0x377638: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x37763Cu;
        goto label_37763c;
    }
    ctx->pc = 0x377634u;
    {
        const bool branch_taken_0x377634 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x377638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377634u;
            // 0x377638: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377634) {
            ctx->pc = 0x377608u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_377608;
        }
    }
    ctx->pc = 0x37763Cu;
label_37763c:
    // 0x37763c: 0x0  nop
    ctx->pc = 0x37763cu;
    // NOP
label_377640:
    // 0x377640: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x377640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_377644:
    // 0x377644: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x377644u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_377648:
    // 0x377648: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x377648u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_37764c:
    // 0x37764c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x37764cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_377650:
    // 0x377650: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x377650u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_377654:
    // 0x377654: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x377654u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_377658:
    // 0x377658: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x377658u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_37765c:
    // 0x37765c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x37765cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_377660:
    // 0x377660: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x377660u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377664:
    // 0x377664: 0x3e00008  jr          $ra
label_377668:
    if (ctx->pc == 0x377668u) {
        ctx->pc = 0x377668u;
            // 0x377668: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x37766Cu;
        goto label_37766c;
    }
    ctx->pc = 0x377664u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377668u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377664u;
            // 0x377668: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x37766Cu;
label_37766c:
    // 0x37766c: 0x0  nop
    ctx->pc = 0x37766cu;
    // NOP
label_377670:
    // 0x377670: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x377670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_377674:
    // 0x377674: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x377674u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377678:
    // 0x377678: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x377678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_37767c:
    // 0x37767c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x37767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_377680:
    // 0x377680: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x377680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_377684:
    // 0x377684: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_377688:
    // 0x377688: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377688u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_37768c:
    // 0x37768c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x37768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377690:
    // 0x377690: 0x8c700e80  lw          $s0, 0xE80($v1)
    ctx->pc = 0x377690u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_377694:
    // 0x377694: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x377694u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_377698:
    // 0x377698: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x377698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_37769c:
    // 0x37769c: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_3776a0:
    if (ctx->pc == 0x3776A0u) {
        ctx->pc = 0x3776A0u;
            // 0x3776a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3776A4u;
        goto label_3776a4;
    }
    ctx->pc = 0x37769Cu;
    {
        const bool branch_taken_0x37769c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3776A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37769Cu;
            // 0x3776a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37769c) {
            ctx->pc = 0x3776FCu;
            goto label_3776fc;
        }
    }
    ctx->pc = 0x3776A4u;
label_3776a4:
    // 0x3776a4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3776a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3776a8:
    // 0x3776a8: 0x50a30011  beql        $a1, $v1, . + 4 + (0x11 << 2)
label_3776ac:
    if (ctx->pc == 0x3776ACu) {
        ctx->pc = 0x3776ACu;
            // 0x3776ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x3776B0u;
        goto label_3776b0;
    }
    ctx->pc = 0x3776A8u;
    {
        const bool branch_taken_0x3776a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3776a8) {
            ctx->pc = 0x3776ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3776A8u;
            // 0x3776ac: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3776F0u;
            goto label_3776f0;
        }
    }
    ctx->pc = 0x3776B0u;
label_3776b0:
    // 0x3776b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3776b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3776b4:
    // 0x3776b4: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_3776b8:
    if (ctx->pc == 0x3776B8u) {
        ctx->pc = 0x3776B8u;
            // 0x3776b8: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x3776BCu;
        goto label_3776bc;
    }
    ctx->pc = 0x3776B4u;
    {
        const bool branch_taken_0x3776b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3776b4) {
            ctx->pc = 0x3776B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3776B4u;
            // 0x3776b8: 0x8e650070  lw          $a1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3776C4u;
            goto label_3776c4;
        }
    }
    ctx->pc = 0x3776BCu;
label_3776bc:
    // 0x3776bc: 0x10000044  b           . + 4 + (0x44 << 2)
label_3776c0:
    if (ctx->pc == 0x3776C0u) {
        ctx->pc = 0x3776C4u;
        goto label_3776c4;
    }
    ctx->pc = 0x3776BCu;
    {
        const bool branch_taken_0x3776bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3776bc) {
            ctx->pc = 0x3777D0u;
            goto label_3777d0;
        }
    }
    ctx->pc = 0x3776C4u;
label_3776c4:
    // 0x3776c4: 0xc0db62c  jal         func_36D8B0
label_3776c8:
    if (ctx->pc == 0x3776C8u) {
        ctx->pc = 0x3776C8u;
            // 0x3776c8: 0x266400a8  addiu       $a0, $s3, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
        ctx->pc = 0x3776CCu;
        goto label_3776cc;
    }
    ctx->pc = 0x3776C4u;
    SET_GPR_U32(ctx, 31, 0x3776CCu);
    ctx->pc = 0x3776C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3776C4u;
            // 0x3776c8: 0x266400a8  addiu       $a0, $s3, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8B0u;
    if (runtime->hasFunction(0x36D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3776CCu; }
        if (ctx->pc != 0x3776CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8B0_0x36d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3776CCu; }
        if (ctx->pc != 0x3776CCu) { return; }
    }
    ctx->pc = 0x3776CCu;
label_3776cc:
    // 0x3776cc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x3776ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3776d0:
    // 0x3776d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3776d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3776d4:
    // 0x3776d4: 0x8e020cb4  lw          $v0, 0xCB4($s0)
    ctx->pc = 0x3776d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3252)));
label_3776d8:
    // 0x3776d8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3776d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3776dc:
    // 0x3776dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3776dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3776e0:
    // 0x3776e0: 0x320f809  jalr        $t9
label_3776e4:
    if (ctx->pc == 0x3776E4u) {
        ctx->pc = 0x3776E4u;
            // 0x3776e4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3776E8u;
        goto label_3776e8;
    }
    ctx->pc = 0x3776E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3776E8u);
        ctx->pc = 0x3776E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3776E0u;
            // 0x3776e4: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3776E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3776E8u; }
            if (ctx->pc != 0x3776E8u) { return; }
        }
        }
    }
    ctx->pc = 0x3776E8u;
label_3776e8:
    // 0x3776e8: 0x10000039  b           . + 4 + (0x39 << 2)
label_3776ec:
    if (ctx->pc == 0x3776ECu) {
        ctx->pc = 0x3776F0u;
        goto label_3776f0;
    }
    ctx->pc = 0x3776E8u;
    {
        const bool branch_taken_0x3776e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3776e8) {
            ctx->pc = 0x3777D0u;
            goto label_3777d0;
        }
    }
    ctx->pc = 0x3776F0u;
label_3776f0:
    // 0x3776f0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x3776f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_3776f4:
    // 0x3776f4: 0x320f809  jalr        $t9
label_3776f8:
    if (ctx->pc == 0x3776F8u) {
        ctx->pc = 0x3776FCu;
        goto label_3776fc;
    }
    ctx->pc = 0x3776F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3776FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3776FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3776FCu; }
            if (ctx->pc != 0x3776FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3776FCu;
label_3776fc:
    // 0x3776fc: 0x26630084  addiu       $v1, $s3, 0x84
    ctx->pc = 0x3776fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_377700:
    // 0x377700: 0x8e700070  lw          $s0, 0x70($s3)
    ctx->pc = 0x377700u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_377704:
    // 0x377704: 0x2466001c  addiu       $a2, $v1, 0x1C
    ctx->pc = 0x377704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 28));
label_377708:
    // 0x377708: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x377708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_37770c:
    // 0x37770c: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x37770cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_377710:
    // 0x377710: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x377710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377714:
    // 0x377714: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x377714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_377718:
    // 0x377718: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x377718u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_37771c:
    // 0x37771c: 0xe66000a0  swc1        $f0, 0xA0($s3)
    ctx->pc = 0x37771cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 160), bits); }
label_377720:
    // 0x377720: 0x8e630098  lw          $v1, 0x98($s3)
    ctx->pc = 0x377720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 152)));
label_377724:
    // 0x377724: 0xc66000a0  lwc1        $f0, 0xA0($s3)
    ctx->pc = 0x377724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_377728:
    // 0x377728: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x377728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_37772c:
    // 0x37772c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x37772cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_377730:
    // 0x377730: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_377734:
    if (ctx->pc == 0x377734u) {
        ctx->pc = 0x377734u;
            // 0x377734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x377738u;
        goto label_377738;
    }
    ctx->pc = 0x377730u;
    {
        const bool branch_taken_0x377730 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x377734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377730u;
            // 0x377734: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377730) {
            ctx->pc = 0x37773Cu;
            goto label_37773c;
        }
    }
    ctx->pc = 0x377738u;
label_377738:
    // 0x377738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x377738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37773c:
    // 0x37773c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_377740:
    if (ctx->pc == 0x377740u) {
        ctx->pc = 0x377740u;
            // 0x377740: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x377744u;
        goto label_377744;
    }
    ctx->pc = 0x37773Cu;
    {
        const bool branch_taken_0x37773c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x37773c) {
            ctx->pc = 0x377740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37773Cu;
            // 0x377740: 0x52042  srl         $a0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377750u;
            goto label_377750;
        }
    }
    ctx->pc = 0x377744u;
label_377744:
    // 0x377744: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x377744u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_377748:
    // 0x377748: 0x10000007  b           . + 4 + (0x7 << 2)
label_37774c:
    if (ctx->pc == 0x37774Cu) {
        ctx->pc = 0x37774Cu;
            // 0x37774c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x377750u;
        goto label_377750;
    }
    ctx->pc = 0x377748u;
    {
        const bool branch_taken_0x377748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377748u;
            // 0x37774c: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x377748) {
            ctx->pc = 0x377768u;
            goto label_377768;
        }
    }
    ctx->pc = 0x377750u;
label_377750:
    // 0x377750: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x377750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_377754:
    // 0x377754: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x377754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_377758:
    // 0x377758: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x377758u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_37775c:
    // 0x37775c: 0x0  nop
    ctx->pc = 0x37775cu;
    // NOP
label_377760:
    // 0x377760: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x377760u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_377764:
    // 0x377764: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x377764u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_377768:
    // 0x377768: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x377768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_37776c:
    // 0x37776c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37776cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_377770:
    // 0x377770: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_377774:
    if (ctx->pc == 0x377774u) {
        ctx->pc = 0x377774u;
            // 0x377774: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->pc = 0x377778u;
        goto label_377778;
    }
    ctx->pc = 0x377770u;
    {
        const bool branch_taken_0x377770 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x377774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377770u;
            // 0x377774: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x377770) {
            ctx->pc = 0x3777D0u;
            goto label_3777d0;
        }
    }
    ctx->pc = 0x377778u;
label_377778:
    // 0x377778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x377778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37777c:
    // 0x37777c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x37777cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377780:
    // 0x377780: 0x8e620074  lw          $v0, 0x74($s3)
    ctx->pc = 0x377780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 116)));
label_377784:
    // 0x377784: 0x266400a8  addiu       $a0, $s3, 0xA8
    ctx->pc = 0x377784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
label_377788:
    // 0x377788: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x377788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_37778c:
    // 0x37778c: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x37778cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_377790:
    // 0x377790: 0xc0db608  jal         func_36D820
label_377794:
    if (ctx->pc == 0x377794u) {
        ctx->pc = 0x377794u;
            // 0x377794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377798u;
        goto label_377798;
    }
    ctx->pc = 0x377790u;
    SET_GPR_U32(ctx, 31, 0x377798u);
    ctx->pc = 0x377794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377790u;
            // 0x377794: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D820u;
    if (runtime->hasFunction(0x36D820u)) {
        auto targetFn = runtime->lookupFunction(0x36D820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377798u; }
        if (ctx->pc != 0x377798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D820_0x36d820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377798u; }
        if (ctx->pc != 0x377798u) { return; }
    }
    ctx->pc = 0x377798u;
label_377798:
    // 0x377798: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_37779c:
    if (ctx->pc == 0x37779Cu) {
        ctx->pc = 0x3777A0u;
        goto label_3777a0;
    }
    ctx->pc = 0x377798u;
    {
        const bool branch_taken_0x377798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x377798) {
            ctx->pc = 0x3777C0u;
            goto label_3777c0;
        }
    }
    ctx->pc = 0x3777A0u;
label_3777a0:
    // 0x3777a0: 0x8e830060  lw          $v1, 0x60($s4)
    ctx->pc = 0x3777a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 96)));
label_3777a4:
    // 0x3777a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3777a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3777a8:
    // 0x3777a8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_3777ac:
    if (ctx->pc == 0x3777ACu) {
        ctx->pc = 0x3777B0u;
        goto label_3777b0;
    }
    ctx->pc = 0x3777A8u;
    {
        const bool branch_taken_0x3777a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3777a8) {
            ctx->pc = 0x3777C0u;
            goto label_3777c0;
        }
    }
    ctx->pc = 0x3777B0u;
label_3777b0:
    // 0x3777b0: 0x266400a8  addiu       $a0, $s3, 0xA8
    ctx->pc = 0x3777b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 168));
label_3777b4:
    // 0x3777b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3777b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3777b8:
    // 0x3777b8: 0xc0db628  jal         func_36D8A0
label_3777bc:
    if (ctx->pc == 0x3777BCu) {
        ctx->pc = 0x3777BCu;
            // 0x3777bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3777C0u;
        goto label_3777c0;
    }
    ctx->pc = 0x3777B8u;
    SET_GPR_U32(ctx, 31, 0x3777C0u);
    ctx->pc = 0x3777BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3777B8u;
            // 0x3777bc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D8A0u;
    if (runtime->hasFunction(0x36D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x36D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3777C0u; }
        if (ctx->pc != 0x3777C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0036D8A0_0x36d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3777C0u; }
        if (ctx->pc != 0x3777C0u) { return; }
    }
    ctx->pc = 0x3777C0u;
label_3777c0:
    // 0x3777c0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3777c0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3777c4:
    // 0x3777c4: 0x250182b  sltu        $v1, $s2, $s0
    ctx->pc = 0x3777c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_3777c8:
    // 0x3777c8: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_3777cc:
    if (ctx->pc == 0x3777CCu) {
        ctx->pc = 0x3777CCu;
            // 0x3777cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x3777D0u;
        goto label_3777d0;
    }
    ctx->pc = 0x3777C8u;
    {
        const bool branch_taken_0x3777c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3777CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3777C8u;
            // 0x3777cc: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3777c8) {
            ctx->pc = 0x377780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_377780;
        }
    }
    ctx->pc = 0x3777D0u;
label_3777d0:
    // 0x3777d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3777d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3777d4:
    // 0x3777d4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3777d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3777d8:
    // 0x3777d8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3777d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3777dc:
    // 0x3777dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3777dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3777e0:
    // 0x3777e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3777e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3777e4:
    // 0x3777e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3777e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3777e8:
    // 0x3777e8: 0x3e00008  jr          $ra
label_3777ec:
    if (ctx->pc == 0x3777ECu) {
        ctx->pc = 0x3777ECu;
            // 0x3777ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3777F0u;
        goto label_3777f0;
    }
    ctx->pc = 0x3777E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3777ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3777E8u;
            // 0x3777ec: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3777F0u;
label_3777f0:
    // 0x3777f0: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x3777f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_3777f4:
    // 0x3777f4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
label_3777f8:
    if (ctx->pc == 0x3777F8u) {
        ctx->pc = 0x3777FCu;
        goto label_3777fc;
    }
    ctx->pc = 0x3777F4u;
    {
        const bool branch_taken_0x3777f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3777f4) {
            ctx->pc = 0x377828u;
            goto label_377828;
        }
    }
    ctx->pc = 0x3777FCu;
label_3777fc:
    // 0x3777fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3777fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377800:
    // 0x377800: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x377800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_377804:
    // 0x377804: 0x8c830074  lw          $v1, 0x74($a0)
    ctx->pc = 0x377804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_377808:
    // 0x377808: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x377808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_37780c:
    // 0x37780c: 0xe5102b  sltu        $v0, $a3, $a1
    ctx->pc = 0x37780cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_377810:
    // 0x377810: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x377810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_377814:
    // 0x377814: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x377814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_377818:
    // 0x377818: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x377818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_37781c:
    // 0x37781c: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_377820:
    if (ctx->pc == 0x377820u) {
        ctx->pc = 0x377820u;
            // 0x377820: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->pc = 0x377824u;
        goto label_377824;
    }
    ctx->pc = 0x37781Cu;
    {
        const bool branch_taken_0x37781c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x377820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37781Cu;
            // 0x377820: 0xac600060  sw          $zero, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37781c) {
            ctx->pc = 0x377804u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_377804;
        }
    }
    ctx->pc = 0x377824u;
label_377824:
    // 0x377824: 0x0  nop
    ctx->pc = 0x377824u;
    // NOP
label_377828:
    // 0x377828: 0x80db61c  j           func_36D870
label_37782c:
    if (ctx->pc == 0x37782Cu) {
        ctx->pc = 0x37782Cu;
            // 0x37782c: 0x248400a8  addiu       $a0, $a0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
        ctx->pc = 0x377830u;
        goto label_377830;
    }
    ctx->pc = 0x377828u;
    ctx->pc = 0x37782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377828u;
            // 0x37782c: 0x248400a8  addiu       $a0, $a0, 0xA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x36D870u;
    if (runtime->hasFunction(0x36D870u)) {
        auto targetFn = runtime->lookupFunction(0x36D870u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0036D870_0x36d870(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x377830u;
label_377830:
    // 0x377830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x377830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_377834:
    // 0x377834: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x377834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_377838:
    // 0x377838: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_37783c:
    // 0x37783c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37783cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377840:
    // 0x377840: 0x8c840050  lw          $a0, 0x50($a0)
    ctx->pc = 0x377840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_377844:
    // 0x377844: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
label_377848:
    if (ctx->pc == 0x377848u) {
        ctx->pc = 0x377848u;
            // 0x377848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x37784Cu;
        goto label_37784c;
    }
    ctx->pc = 0x377844u;
    {
        const bool branch_taken_0x377844 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x377844) {
            ctx->pc = 0x377848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377844u;
            // 0x377848: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37786Cu;
            goto label_37786c;
        }
    }
    ctx->pc = 0x37784Cu;
label_37784c:
    // 0x37784c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_377850:
    if (ctx->pc == 0x377850u) {
        ctx->pc = 0x377850u;
            // 0x377850: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x377854u;
        goto label_377854;
    }
    ctx->pc = 0x37784Cu;
    {
        const bool branch_taken_0x37784c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x37784c) {
            ctx->pc = 0x377850u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37784Cu;
            // 0x377850: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377868u;
            goto label_377868;
        }
    }
    ctx->pc = 0x377854u;
label_377854:
    // 0x377854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x377854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_377858:
    // 0x377858: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x377858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_37785c:
    // 0x37785c: 0x320f809  jalr        $t9
label_377860:
    if (ctx->pc == 0x377860u) {
        ctx->pc = 0x377860u;
            // 0x377860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x377864u;
        goto label_377864;
    }
    ctx->pc = 0x37785Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x377864u);
        ctx->pc = 0x377860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37785Cu;
            // 0x377860: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x377864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x377864u; }
            if (ctx->pc != 0x377864u) { return; }
        }
        }
    }
    ctx->pc = 0x377864u;
label_377864:
    // 0x377864: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x377864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_377868:
    // 0x377868: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x377868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_37786c:
    // 0x37786c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x37786cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_377870:
    // 0x377870: 0x3e00008  jr          $ra
label_377874:
    if (ctx->pc == 0x377874u) {
        ctx->pc = 0x377874u;
            // 0x377874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x377878u;
        goto label_377878;
    }
    ctx->pc = 0x377870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x377870u;
            // 0x377874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x377878u;
label_377878:
    // 0x377878: 0x0  nop
    ctx->pc = 0x377878u;
    // NOP
label_37787c:
    // 0x37787c: 0x0  nop
    ctx->pc = 0x37787cu;
    // NOP
label_377880:
    // 0x377880: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x377880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_377884:
    // 0x377884: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x377884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_377888:
    // 0x377888: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x377888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_37788c:
    // 0x37788c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x37788cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377890:
    // 0x377890: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x377890u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_377894:
    // 0x377894: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x377894u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_377898:
    // 0x377898: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377898u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37789c:
    // 0x37789c: 0x8cc30e34  lw          $v1, 0xE34($a2)
    ctx->pc = 0x37789cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3636)));
label_3778a0:
    // 0x3778a0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3778a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3778a4:
    // 0x3778a4: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_3778a8:
    if (ctx->pc == 0x3778A8u) {
        ctx->pc = 0x3778A8u;
            // 0x3778a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3778ACu;
        goto label_3778ac;
    }
    ctx->pc = 0x3778A4u;
    {
        const bool branch_taken_0x3778a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x3778A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3778A4u;
            // 0x3778a8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3778a4) {
            ctx->pc = 0x3778BCu;
            goto label_3778bc;
        }
    }
    ctx->pc = 0x3778ACu;
label_3778ac:
    // 0x3778ac: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x3778acu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_3778b0:
    // 0x3778b0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_3778b4:
    if (ctx->pc == 0x3778B4u) {
        ctx->pc = 0x3778B8u;
        goto label_3778b8;
    }
    ctx->pc = 0x3778B0u;
    {
        const bool branch_taken_0x3778b0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3778b0) {
            ctx->pc = 0x3778BCu;
            goto label_3778bc;
        }
    }
    ctx->pc = 0x3778B8u;
label_3778b8:
    // 0x3778b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3778b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3778bc:
    // 0x3778bc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3778c0:
    if (ctx->pc == 0x3778C0u) {
        ctx->pc = 0x3778C4u;
        goto label_3778c4;
    }
    ctx->pc = 0x3778BCu;
    {
        const bool branch_taken_0x3778bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778bc) {
            ctx->pc = 0x3778D8u;
            goto label_3778d8;
        }
    }
    ctx->pc = 0x3778C4u;
label_3778c4:
    // 0x3778c4: 0xc075eb4  jal         func_1D7AD0
label_3778c8:
    if (ctx->pc == 0x3778C8u) {
        ctx->pc = 0x3778C8u;
            // 0x3778c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3778CCu;
        goto label_3778cc;
    }
    ctx->pc = 0x3778C4u;
    SET_GPR_U32(ctx, 31, 0x3778CCu);
    ctx->pc = 0x3778C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3778C4u;
            // 0x3778c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3778CCu; }
        if (ctx->pc != 0x3778CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3778CCu; }
        if (ctx->pc != 0x3778CCu) { return; }
    }
    ctx->pc = 0x3778CCu;
label_3778cc:
    // 0x3778cc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_3778d0:
    if (ctx->pc == 0x3778D0u) {
        ctx->pc = 0x3778D4u;
        goto label_3778d4;
    }
    ctx->pc = 0x3778CCu;
    {
        const bool branch_taken_0x3778cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778cc) {
            ctx->pc = 0x3778D8u;
            goto label_3778d8;
        }
    }
    ctx->pc = 0x3778D4u;
label_3778d4:
    // 0x3778d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3778d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3778d8:
    // 0x3778d8: 0x56400006  bnel        $s2, $zero, . + 4 + (0x6 << 2)
label_3778dc:
    if (ctx->pc == 0x3778DCu) {
        ctx->pc = 0x3778DCu;
            // 0x3778dc: 0x8e230060  lw          $v1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x3778E0u;
        goto label_3778e0;
    }
    ctx->pc = 0x3778D8u;
    {
        const bool branch_taken_0x3778d8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778d8) {
            ctx->pc = 0x3778DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3778D8u;
            // 0x3778dc: 0x8e230060  lw          $v1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3778F4u;
            goto label_3778f4;
        }
    }
    ctx->pc = 0x3778E0u;
label_3778e0:
    // 0x3778e0: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x3778e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_3778e4:
    // 0x3778e4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x3778e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3778e8:
    // 0x3778e8: 0x5483003e  bnel        $a0, $v1, . + 4 + (0x3E << 2)
label_3778ec:
    if (ctx->pc == 0x3778ECu) {
        ctx->pc = 0x3778ECu;
            // 0x3778ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x3778F0u;
        goto label_3778f0;
    }
    ctx->pc = 0x3778E8u;
    {
        const bool branch_taken_0x3778e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3778e8) {
            ctx->pc = 0x3778ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3778E8u;
            // 0x3778ec: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3779E4u;
            goto label_3779e4;
        }
    }
    ctx->pc = 0x3778F0u;
label_3778f0:
    // 0x3778f0: 0x8e230060  lw          $v1, 0x60($s1)
    ctx->pc = 0x3778f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_3778f4:
    // 0x3778f4: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
label_3778f8:
    if (ctx->pc == 0x3778F8u) {
        ctx->pc = 0x3778FCu;
        goto label_3778fc;
    }
    ctx->pc = 0x3778F4u;
    {
        const bool branch_taken_0x3778f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3778f4) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x3778FCu;
label_3778fc:
    // 0x3778fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3778fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_377900:
    // 0x377900: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x377900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_377904:
    // 0x377904: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x377904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_377908:
    // 0x377908: 0x90650ce4  lbu         $a1, 0xCE4($v1)
    ctx->pc = 0x377908u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 3300)));
label_37790c:
    // 0x37790c: 0x50a40030  beql        $a1, $a0, . + 4 + (0x30 << 2)
label_377910:
    if (ctx->pc == 0x377910u) {
        ctx->pc = 0x377910u;
            // 0x377910: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->pc = 0x377914u;
        goto label_377914;
    }
    ctx->pc = 0x37790Cu;
    {
        const bool branch_taken_0x37790c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x37790c) {
            ctx->pc = 0x377910u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x37790Cu;
            // 0x377910: 0x3c020017  lui         $v0, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)23 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3779D0u;
            goto label_3779d0;
        }
    }
    ctx->pc = 0x377914u;
label_377914:
    // 0x377914: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x377914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_377918:
    // 0x377918: 0x50a30016  beql        $a1, $v1, . + 4 + (0x16 << 2)
label_37791c:
    if (ctx->pc == 0x37791Cu) {
        ctx->pc = 0x37791Cu;
            // 0x37791c: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x377920u;
        goto label_377920;
    }
    ctx->pc = 0x377918u;
    {
        const bool branch_taken_0x377918 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x377918) {
            ctx->pc = 0x37791Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377918u;
            // 0x37791c: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377974u;
            goto label_377974;
        }
    }
    ctx->pc = 0x377920u;
label_377920:
    // 0x377920: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x377920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_377924:
    // 0x377924: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_377928:
    if (ctx->pc == 0x377928u) {
        ctx->pc = 0x377928u;
            // 0x377928: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x37792Cu;
        goto label_37792c;
    }
    ctx->pc = 0x377924u;
    {
        const bool branch_taken_0x377924 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x377924) {
            ctx->pc = 0x377928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377924u;
            // 0x377928: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x377934u;
            goto label_377934;
        }
    }
    ctx->pc = 0x37792Cu;
label_37792c:
    // 0x37792c: 0x1000002c  b           . + 4 + (0x2C << 2)
label_377930:
    if (ctx->pc == 0x377930u) {
        ctx->pc = 0x377934u;
        goto label_377934;
    }
    ctx->pc = 0x37792Cu;
    {
        const bool branch_taken_0x37792c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37792c) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x377934u;
label_377934:
    // 0x377934: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x377934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_377938:
    // 0x377938: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_37793c:
    if (ctx->pc == 0x37793Cu) {
        ctx->pc = 0x377940u;
        goto label_377940;
    }
    ctx->pc = 0x377938u;
    {
        const bool branch_taken_0x377938 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377938) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x377940u;
label_377940:
    // 0x377940: 0xc0ba364  jal         func_2E8D90
label_377944:
    if (ctx->pc == 0x377944u) {
        ctx->pc = 0x377944u;
            // 0x377944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x377948u;
        goto label_377948;
    }
    ctx->pc = 0x377940u;
    SET_GPR_U32(ctx, 31, 0x377948u);
    ctx->pc = 0x377944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377940u;
            // 0x377944: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377948u; }
        if (ctx->pc != 0x377948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377948u; }
        if (ctx->pc != 0x377948u) { return; }
    }
    ctx->pc = 0x377948u;
label_377948:
    // 0x377948: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x377948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_37794c:
    // 0x37794c: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x37794cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_377950:
    // 0x377950: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x377950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_377954:
    // 0x377954: 0xc0bb1ec  jal         func_2EC7B0
label_377958:
    if (ctx->pc == 0x377958u) {
        ctx->pc = 0x377958u;
            // 0x377958: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x37795Cu;
        goto label_37795c;
    }
    ctx->pc = 0x377954u;
    SET_GPR_U32(ctx, 31, 0x37795Cu);
    ctx->pc = 0x377958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377954u;
            // 0x377958: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37795Cu; }
        if (ctx->pc != 0x37795Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x37795Cu; }
        if (ctx->pc != 0x37795Cu) { return; }
    }
    ctx->pc = 0x37795Cu;
label_37795c:
    // 0x37795c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x37795cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_377960:
    // 0x377960: 0xc073234  jal         func_1CC8D0
label_377964:
    if (ctx->pc == 0x377964u) {
        ctx->pc = 0x377964u;
            // 0x377964: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x377968u;
        goto label_377968;
    }
    ctx->pc = 0x377960u;
    SET_GPR_U32(ctx, 31, 0x377968u);
    ctx->pc = 0x377964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x377960u;
            // 0x377964: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377968u; }
        if (ctx->pc != 0x377968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x377968u; }
        if (ctx->pc != 0x377968u) { return; }
    }
    ctx->pc = 0x377968u;
label_377968:
    // 0x377968: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x377968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_37796c:
    // 0x37796c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_377970:
    if (ctx->pc == 0x377970u) {
        ctx->pc = 0x377970u;
            // 0x377970: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x377974u;
        goto label_377974;
    }
    ctx->pc = 0x37796Cu;
    {
        const bool branch_taken_0x37796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x377970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x37796Cu;
            // 0x377970: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37796c) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x377974u;
label_377974:
    // 0x377974: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x377974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_377978:
    // 0x377978: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
label_37797c:
    if (ctx->pc == 0x37797Cu) {
        ctx->pc = 0x37797Cu;
            // 0x37797c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x377980u;
        goto label_377980;
    }
    ctx->pc = 0x377978u;
    {
        const bool branch_taken_0x377978 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377978) {
            ctx->pc = 0x37797Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x377978u;
            // 0x37797c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x37799Cu;
            goto label_37799c;
        }
    }
    ctx->pc = 0x377980u;
label_377980:
    // 0x377980: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x377980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_377984:
    // 0x377984: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_377988:
    if (ctx->pc == 0x377988u) {
        ctx->pc = 0x37798Cu;
        goto label_37798c;
    }
    ctx->pc = 0x377984u;
    {
        const bool branch_taken_0x377984 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x377984) {
            ctx->pc = 0x377998u;
            goto label_377998;
        }
    }
    ctx->pc = 0x37798Cu;
label_37798c:
    // 0x37798c: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x37798cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_377990:
    // 0x377990: 0x14830013  bne         $a0, $v1, . + 4 + (0x13 << 2)
label_377994:
    if (ctx->pc == 0x377994u) {
        ctx->pc = 0x377998u;
        goto label_377998;
    }
    ctx->pc = 0x377990u;
    {
        const bool branch_taken_0x377990 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x377990) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x377998u;
label_377998:
    // 0x377998: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x377998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_37799c:
    // 0x37799c: 0xc0ba364  jal         func_2E8D90
label_3779a0:
    if (ctx->pc == 0x3779A0u) {
        ctx->pc = 0x3779A4u;
        goto label_3779a4;
    }
    ctx->pc = 0x37799Cu;
    SET_GPR_U32(ctx, 31, 0x3779A4u);
    ctx->pc = 0x2E8D90u;
    if (runtime->hasFunction(0x2E8D90u)) {
        auto targetFn = runtime->lookupFunction(0x2E8D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779A4u; }
        if (ctx->pc != 0x3779A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E8D90_0x2e8d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779A4u; }
        if (ctx->pc != 0x3779A4u) { return; }
    }
    ctx->pc = 0x3779A4u;
label_3779a4:
    // 0x3779a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3779a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3779a8:
    // 0x3779a8: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x3779a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_3779ac:
    // 0x3779ac: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3779acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3779b0:
    // 0x3779b0: 0xc0bb1ec  jal         func_2EC7B0
label_3779b4:
    if (ctx->pc == 0x3779B4u) {
        ctx->pc = 0x3779B4u;
            // 0x3779b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x3779B8u;
        goto label_3779b8;
    }
    ctx->pc = 0x3779B0u;
    SET_GPR_U32(ctx, 31, 0x3779B8u);
    ctx->pc = 0x3779B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3779B0u;
            // 0x3779b4: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC7B0u;
    if (runtime->hasFunction(0x2EC7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779B8u; }
        if (ctx->pc != 0x3779B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC7B0_0x2ec7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779B8u; }
        if (ctx->pc != 0x3779B8u) { return; }
    }
    ctx->pc = 0x3779B8u;
label_3779b8:
    // 0x3779b8: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x3779b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_3779bc:
    // 0x3779bc: 0xc073234  jal         func_1CC8D0
label_3779c0:
    if (ctx->pc == 0x3779C0u) {
        ctx->pc = 0x3779C0u;
            // 0x3779c0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3779C4u;
        goto label_3779c4;
    }
    ctx->pc = 0x3779BCu;
    SET_GPR_U32(ctx, 31, 0x3779C4u);
    ctx->pc = 0x3779C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3779BCu;
            // 0x3779c0: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779C4u; }
        if (ctx->pc != 0x3779C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779C4u; }
        if (ctx->pc != 0x3779C4u) { return; }
    }
    ctx->pc = 0x3779C4u;
label_3779c4:
    // 0x3779c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3779c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3779c8:
    // 0x3779c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3779cc:
    if (ctx->pc == 0x3779CCu) {
        ctx->pc = 0x3779CCu;
            // 0x3779cc: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->pc = 0x3779D0u;
        goto label_3779d0;
    }
    ctx->pc = 0x3779C8u;
    {
        const bool branch_taken_0x3779c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3779CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3779C8u;
            // 0x3779cc: 0xae230060  sw          $v1, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3779c8) {
            ctx->pc = 0x3779E0u;
            goto label_3779e0;
        }
    }
    ctx->pc = 0x3779D0u;
label_3779d0:
    // 0x3779d0: 0xc073234  jal         func_1CC8D0
label_3779d4:
    if (ctx->pc == 0x3779D4u) {
        ctx->pc = 0x3779D4u;
            // 0x3779d4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x3779D8u;
        goto label_3779d8;
    }
    ctx->pc = 0x3779D0u;
    SET_GPR_U32(ctx, 31, 0x3779D8u);
    ctx->pc = 0x3779D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3779D0u;
            // 0x3779d4: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779D8u; }
        if (ctx->pc != 0x3779D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3779D8u; }
        if (ctx->pc != 0x3779D8u) { return; }
    }
    ctx->pc = 0x3779D8u;
label_3779d8:
    // 0x3779d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3779d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3779dc:
    // 0x3779dc: 0xae230060  sw          $v1, 0x60($s1)
    ctx->pc = 0x3779dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 3));
label_3779e0:
    // 0x3779e0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3779e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3779e4:
    // 0x3779e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3779e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3779e8:
    // 0x3779e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3779e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3779ec:
    // 0x3779ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3779ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3779f0:
    // 0x3779f0: 0x3e00008  jr          $ra
label_3779f4:
    if (ctx->pc == 0x3779F4u) {
        ctx->pc = 0x3779F4u;
            // 0x3779f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3779F8u;
        goto label_3779f8;
    }
    ctx->pc = 0x3779F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3779F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3779F0u;
            // 0x3779f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3779F8u;
label_3779f8:
    // 0x3779f8: 0x0  nop
    ctx->pc = 0x3779f8u;
    // NOP
label_3779fc:
    // 0x3779fc: 0x0  nop
    ctx->pc = 0x3779fcu;
    // NOP
}
