#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00433880
// Address: 0x433880 - 0x434030
void sub_00433880_0x433880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00433880_0x433880");
#endif

    switch (ctx->pc) {
        case 0x433880u: goto label_433880;
        case 0x433884u: goto label_433884;
        case 0x433888u: goto label_433888;
        case 0x43388cu: goto label_43388c;
        case 0x433890u: goto label_433890;
        case 0x433894u: goto label_433894;
        case 0x433898u: goto label_433898;
        case 0x43389cu: goto label_43389c;
        case 0x4338a0u: goto label_4338a0;
        case 0x4338a4u: goto label_4338a4;
        case 0x4338a8u: goto label_4338a8;
        case 0x4338acu: goto label_4338ac;
        case 0x4338b0u: goto label_4338b0;
        case 0x4338b4u: goto label_4338b4;
        case 0x4338b8u: goto label_4338b8;
        case 0x4338bcu: goto label_4338bc;
        case 0x4338c0u: goto label_4338c0;
        case 0x4338c4u: goto label_4338c4;
        case 0x4338c8u: goto label_4338c8;
        case 0x4338ccu: goto label_4338cc;
        case 0x4338d0u: goto label_4338d0;
        case 0x4338d4u: goto label_4338d4;
        case 0x4338d8u: goto label_4338d8;
        case 0x4338dcu: goto label_4338dc;
        case 0x4338e0u: goto label_4338e0;
        case 0x4338e4u: goto label_4338e4;
        case 0x4338e8u: goto label_4338e8;
        case 0x4338ecu: goto label_4338ec;
        case 0x4338f0u: goto label_4338f0;
        case 0x4338f4u: goto label_4338f4;
        case 0x4338f8u: goto label_4338f8;
        case 0x4338fcu: goto label_4338fc;
        case 0x433900u: goto label_433900;
        case 0x433904u: goto label_433904;
        case 0x433908u: goto label_433908;
        case 0x43390cu: goto label_43390c;
        case 0x433910u: goto label_433910;
        case 0x433914u: goto label_433914;
        case 0x433918u: goto label_433918;
        case 0x43391cu: goto label_43391c;
        case 0x433920u: goto label_433920;
        case 0x433924u: goto label_433924;
        case 0x433928u: goto label_433928;
        case 0x43392cu: goto label_43392c;
        case 0x433930u: goto label_433930;
        case 0x433934u: goto label_433934;
        case 0x433938u: goto label_433938;
        case 0x43393cu: goto label_43393c;
        case 0x433940u: goto label_433940;
        case 0x433944u: goto label_433944;
        case 0x433948u: goto label_433948;
        case 0x43394cu: goto label_43394c;
        case 0x433950u: goto label_433950;
        case 0x433954u: goto label_433954;
        case 0x433958u: goto label_433958;
        case 0x43395cu: goto label_43395c;
        case 0x433960u: goto label_433960;
        case 0x433964u: goto label_433964;
        case 0x433968u: goto label_433968;
        case 0x43396cu: goto label_43396c;
        case 0x433970u: goto label_433970;
        case 0x433974u: goto label_433974;
        case 0x433978u: goto label_433978;
        case 0x43397cu: goto label_43397c;
        case 0x433980u: goto label_433980;
        case 0x433984u: goto label_433984;
        case 0x433988u: goto label_433988;
        case 0x43398cu: goto label_43398c;
        case 0x433990u: goto label_433990;
        case 0x433994u: goto label_433994;
        case 0x433998u: goto label_433998;
        case 0x43399cu: goto label_43399c;
        case 0x4339a0u: goto label_4339a0;
        case 0x4339a4u: goto label_4339a4;
        case 0x4339a8u: goto label_4339a8;
        case 0x4339acu: goto label_4339ac;
        case 0x4339b0u: goto label_4339b0;
        case 0x4339b4u: goto label_4339b4;
        case 0x4339b8u: goto label_4339b8;
        case 0x4339bcu: goto label_4339bc;
        case 0x4339c0u: goto label_4339c0;
        case 0x4339c4u: goto label_4339c4;
        case 0x4339c8u: goto label_4339c8;
        case 0x4339ccu: goto label_4339cc;
        case 0x4339d0u: goto label_4339d0;
        case 0x4339d4u: goto label_4339d4;
        case 0x4339d8u: goto label_4339d8;
        case 0x4339dcu: goto label_4339dc;
        case 0x4339e0u: goto label_4339e0;
        case 0x4339e4u: goto label_4339e4;
        case 0x4339e8u: goto label_4339e8;
        case 0x4339ecu: goto label_4339ec;
        case 0x4339f0u: goto label_4339f0;
        case 0x4339f4u: goto label_4339f4;
        case 0x4339f8u: goto label_4339f8;
        case 0x4339fcu: goto label_4339fc;
        case 0x433a00u: goto label_433a00;
        case 0x433a04u: goto label_433a04;
        case 0x433a08u: goto label_433a08;
        case 0x433a0cu: goto label_433a0c;
        case 0x433a10u: goto label_433a10;
        case 0x433a14u: goto label_433a14;
        case 0x433a18u: goto label_433a18;
        case 0x433a1cu: goto label_433a1c;
        case 0x433a20u: goto label_433a20;
        case 0x433a24u: goto label_433a24;
        case 0x433a28u: goto label_433a28;
        case 0x433a2cu: goto label_433a2c;
        case 0x433a30u: goto label_433a30;
        case 0x433a34u: goto label_433a34;
        case 0x433a38u: goto label_433a38;
        case 0x433a3cu: goto label_433a3c;
        case 0x433a40u: goto label_433a40;
        case 0x433a44u: goto label_433a44;
        case 0x433a48u: goto label_433a48;
        case 0x433a4cu: goto label_433a4c;
        case 0x433a50u: goto label_433a50;
        case 0x433a54u: goto label_433a54;
        case 0x433a58u: goto label_433a58;
        case 0x433a5cu: goto label_433a5c;
        case 0x433a60u: goto label_433a60;
        case 0x433a64u: goto label_433a64;
        case 0x433a68u: goto label_433a68;
        case 0x433a6cu: goto label_433a6c;
        case 0x433a70u: goto label_433a70;
        case 0x433a74u: goto label_433a74;
        case 0x433a78u: goto label_433a78;
        case 0x433a7cu: goto label_433a7c;
        case 0x433a80u: goto label_433a80;
        case 0x433a84u: goto label_433a84;
        case 0x433a88u: goto label_433a88;
        case 0x433a8cu: goto label_433a8c;
        case 0x433a90u: goto label_433a90;
        case 0x433a94u: goto label_433a94;
        case 0x433a98u: goto label_433a98;
        case 0x433a9cu: goto label_433a9c;
        case 0x433aa0u: goto label_433aa0;
        case 0x433aa4u: goto label_433aa4;
        case 0x433aa8u: goto label_433aa8;
        case 0x433aacu: goto label_433aac;
        case 0x433ab0u: goto label_433ab0;
        case 0x433ab4u: goto label_433ab4;
        case 0x433ab8u: goto label_433ab8;
        case 0x433abcu: goto label_433abc;
        case 0x433ac0u: goto label_433ac0;
        case 0x433ac4u: goto label_433ac4;
        case 0x433ac8u: goto label_433ac8;
        case 0x433accu: goto label_433acc;
        case 0x433ad0u: goto label_433ad0;
        case 0x433ad4u: goto label_433ad4;
        case 0x433ad8u: goto label_433ad8;
        case 0x433adcu: goto label_433adc;
        case 0x433ae0u: goto label_433ae0;
        case 0x433ae4u: goto label_433ae4;
        case 0x433ae8u: goto label_433ae8;
        case 0x433aecu: goto label_433aec;
        case 0x433af0u: goto label_433af0;
        case 0x433af4u: goto label_433af4;
        case 0x433af8u: goto label_433af8;
        case 0x433afcu: goto label_433afc;
        case 0x433b00u: goto label_433b00;
        case 0x433b04u: goto label_433b04;
        case 0x433b08u: goto label_433b08;
        case 0x433b0cu: goto label_433b0c;
        case 0x433b10u: goto label_433b10;
        case 0x433b14u: goto label_433b14;
        case 0x433b18u: goto label_433b18;
        case 0x433b1cu: goto label_433b1c;
        case 0x433b20u: goto label_433b20;
        case 0x433b24u: goto label_433b24;
        case 0x433b28u: goto label_433b28;
        case 0x433b2cu: goto label_433b2c;
        case 0x433b30u: goto label_433b30;
        case 0x433b34u: goto label_433b34;
        case 0x433b38u: goto label_433b38;
        case 0x433b3cu: goto label_433b3c;
        case 0x433b40u: goto label_433b40;
        case 0x433b44u: goto label_433b44;
        case 0x433b48u: goto label_433b48;
        case 0x433b4cu: goto label_433b4c;
        case 0x433b50u: goto label_433b50;
        case 0x433b54u: goto label_433b54;
        case 0x433b58u: goto label_433b58;
        case 0x433b5cu: goto label_433b5c;
        case 0x433b60u: goto label_433b60;
        case 0x433b64u: goto label_433b64;
        case 0x433b68u: goto label_433b68;
        case 0x433b6cu: goto label_433b6c;
        case 0x433b70u: goto label_433b70;
        case 0x433b74u: goto label_433b74;
        case 0x433b78u: goto label_433b78;
        case 0x433b7cu: goto label_433b7c;
        case 0x433b80u: goto label_433b80;
        case 0x433b84u: goto label_433b84;
        case 0x433b88u: goto label_433b88;
        case 0x433b8cu: goto label_433b8c;
        case 0x433b90u: goto label_433b90;
        case 0x433b94u: goto label_433b94;
        case 0x433b98u: goto label_433b98;
        case 0x433b9cu: goto label_433b9c;
        case 0x433ba0u: goto label_433ba0;
        case 0x433ba4u: goto label_433ba4;
        case 0x433ba8u: goto label_433ba8;
        case 0x433bacu: goto label_433bac;
        case 0x433bb0u: goto label_433bb0;
        case 0x433bb4u: goto label_433bb4;
        case 0x433bb8u: goto label_433bb8;
        case 0x433bbcu: goto label_433bbc;
        case 0x433bc0u: goto label_433bc0;
        case 0x433bc4u: goto label_433bc4;
        case 0x433bc8u: goto label_433bc8;
        case 0x433bccu: goto label_433bcc;
        case 0x433bd0u: goto label_433bd0;
        case 0x433bd4u: goto label_433bd4;
        case 0x433bd8u: goto label_433bd8;
        case 0x433bdcu: goto label_433bdc;
        case 0x433be0u: goto label_433be0;
        case 0x433be4u: goto label_433be4;
        case 0x433be8u: goto label_433be8;
        case 0x433becu: goto label_433bec;
        case 0x433bf0u: goto label_433bf0;
        case 0x433bf4u: goto label_433bf4;
        case 0x433bf8u: goto label_433bf8;
        case 0x433bfcu: goto label_433bfc;
        case 0x433c00u: goto label_433c00;
        case 0x433c04u: goto label_433c04;
        case 0x433c08u: goto label_433c08;
        case 0x433c0cu: goto label_433c0c;
        case 0x433c10u: goto label_433c10;
        case 0x433c14u: goto label_433c14;
        case 0x433c18u: goto label_433c18;
        case 0x433c1cu: goto label_433c1c;
        case 0x433c20u: goto label_433c20;
        case 0x433c24u: goto label_433c24;
        case 0x433c28u: goto label_433c28;
        case 0x433c2cu: goto label_433c2c;
        case 0x433c30u: goto label_433c30;
        case 0x433c34u: goto label_433c34;
        case 0x433c38u: goto label_433c38;
        case 0x433c3cu: goto label_433c3c;
        case 0x433c40u: goto label_433c40;
        case 0x433c44u: goto label_433c44;
        case 0x433c48u: goto label_433c48;
        case 0x433c4cu: goto label_433c4c;
        case 0x433c50u: goto label_433c50;
        case 0x433c54u: goto label_433c54;
        case 0x433c58u: goto label_433c58;
        case 0x433c5cu: goto label_433c5c;
        case 0x433c60u: goto label_433c60;
        case 0x433c64u: goto label_433c64;
        case 0x433c68u: goto label_433c68;
        case 0x433c6cu: goto label_433c6c;
        case 0x433c70u: goto label_433c70;
        case 0x433c74u: goto label_433c74;
        case 0x433c78u: goto label_433c78;
        case 0x433c7cu: goto label_433c7c;
        case 0x433c80u: goto label_433c80;
        case 0x433c84u: goto label_433c84;
        case 0x433c88u: goto label_433c88;
        case 0x433c8cu: goto label_433c8c;
        case 0x433c90u: goto label_433c90;
        case 0x433c94u: goto label_433c94;
        case 0x433c98u: goto label_433c98;
        case 0x433c9cu: goto label_433c9c;
        case 0x433ca0u: goto label_433ca0;
        case 0x433ca4u: goto label_433ca4;
        case 0x433ca8u: goto label_433ca8;
        case 0x433cacu: goto label_433cac;
        case 0x433cb0u: goto label_433cb0;
        case 0x433cb4u: goto label_433cb4;
        case 0x433cb8u: goto label_433cb8;
        case 0x433cbcu: goto label_433cbc;
        case 0x433cc0u: goto label_433cc0;
        case 0x433cc4u: goto label_433cc4;
        case 0x433cc8u: goto label_433cc8;
        case 0x433cccu: goto label_433ccc;
        case 0x433cd0u: goto label_433cd0;
        case 0x433cd4u: goto label_433cd4;
        case 0x433cd8u: goto label_433cd8;
        case 0x433cdcu: goto label_433cdc;
        case 0x433ce0u: goto label_433ce0;
        case 0x433ce4u: goto label_433ce4;
        case 0x433ce8u: goto label_433ce8;
        case 0x433cecu: goto label_433cec;
        case 0x433cf0u: goto label_433cf0;
        case 0x433cf4u: goto label_433cf4;
        case 0x433cf8u: goto label_433cf8;
        case 0x433cfcu: goto label_433cfc;
        case 0x433d00u: goto label_433d00;
        case 0x433d04u: goto label_433d04;
        case 0x433d08u: goto label_433d08;
        case 0x433d0cu: goto label_433d0c;
        case 0x433d10u: goto label_433d10;
        case 0x433d14u: goto label_433d14;
        case 0x433d18u: goto label_433d18;
        case 0x433d1cu: goto label_433d1c;
        case 0x433d20u: goto label_433d20;
        case 0x433d24u: goto label_433d24;
        case 0x433d28u: goto label_433d28;
        case 0x433d2cu: goto label_433d2c;
        case 0x433d30u: goto label_433d30;
        case 0x433d34u: goto label_433d34;
        case 0x433d38u: goto label_433d38;
        case 0x433d3cu: goto label_433d3c;
        case 0x433d40u: goto label_433d40;
        case 0x433d44u: goto label_433d44;
        case 0x433d48u: goto label_433d48;
        case 0x433d4cu: goto label_433d4c;
        case 0x433d50u: goto label_433d50;
        case 0x433d54u: goto label_433d54;
        case 0x433d58u: goto label_433d58;
        case 0x433d5cu: goto label_433d5c;
        case 0x433d60u: goto label_433d60;
        case 0x433d64u: goto label_433d64;
        case 0x433d68u: goto label_433d68;
        case 0x433d6cu: goto label_433d6c;
        case 0x433d70u: goto label_433d70;
        case 0x433d74u: goto label_433d74;
        case 0x433d78u: goto label_433d78;
        case 0x433d7cu: goto label_433d7c;
        case 0x433d80u: goto label_433d80;
        case 0x433d84u: goto label_433d84;
        case 0x433d88u: goto label_433d88;
        case 0x433d8cu: goto label_433d8c;
        case 0x433d90u: goto label_433d90;
        case 0x433d94u: goto label_433d94;
        case 0x433d98u: goto label_433d98;
        case 0x433d9cu: goto label_433d9c;
        case 0x433da0u: goto label_433da0;
        case 0x433da4u: goto label_433da4;
        case 0x433da8u: goto label_433da8;
        case 0x433dacu: goto label_433dac;
        case 0x433db0u: goto label_433db0;
        case 0x433db4u: goto label_433db4;
        case 0x433db8u: goto label_433db8;
        case 0x433dbcu: goto label_433dbc;
        case 0x433dc0u: goto label_433dc0;
        case 0x433dc4u: goto label_433dc4;
        case 0x433dc8u: goto label_433dc8;
        case 0x433dccu: goto label_433dcc;
        case 0x433dd0u: goto label_433dd0;
        case 0x433dd4u: goto label_433dd4;
        case 0x433dd8u: goto label_433dd8;
        case 0x433ddcu: goto label_433ddc;
        case 0x433de0u: goto label_433de0;
        case 0x433de4u: goto label_433de4;
        case 0x433de8u: goto label_433de8;
        case 0x433decu: goto label_433dec;
        case 0x433df0u: goto label_433df0;
        case 0x433df4u: goto label_433df4;
        case 0x433df8u: goto label_433df8;
        case 0x433dfcu: goto label_433dfc;
        case 0x433e00u: goto label_433e00;
        case 0x433e04u: goto label_433e04;
        case 0x433e08u: goto label_433e08;
        case 0x433e0cu: goto label_433e0c;
        case 0x433e10u: goto label_433e10;
        case 0x433e14u: goto label_433e14;
        case 0x433e18u: goto label_433e18;
        case 0x433e1cu: goto label_433e1c;
        case 0x433e20u: goto label_433e20;
        case 0x433e24u: goto label_433e24;
        case 0x433e28u: goto label_433e28;
        case 0x433e2cu: goto label_433e2c;
        case 0x433e30u: goto label_433e30;
        case 0x433e34u: goto label_433e34;
        case 0x433e38u: goto label_433e38;
        case 0x433e3cu: goto label_433e3c;
        case 0x433e40u: goto label_433e40;
        case 0x433e44u: goto label_433e44;
        case 0x433e48u: goto label_433e48;
        case 0x433e4cu: goto label_433e4c;
        case 0x433e50u: goto label_433e50;
        case 0x433e54u: goto label_433e54;
        case 0x433e58u: goto label_433e58;
        case 0x433e5cu: goto label_433e5c;
        case 0x433e60u: goto label_433e60;
        case 0x433e64u: goto label_433e64;
        case 0x433e68u: goto label_433e68;
        case 0x433e6cu: goto label_433e6c;
        case 0x433e70u: goto label_433e70;
        case 0x433e74u: goto label_433e74;
        case 0x433e78u: goto label_433e78;
        case 0x433e7cu: goto label_433e7c;
        case 0x433e80u: goto label_433e80;
        case 0x433e84u: goto label_433e84;
        case 0x433e88u: goto label_433e88;
        case 0x433e8cu: goto label_433e8c;
        case 0x433e90u: goto label_433e90;
        case 0x433e94u: goto label_433e94;
        case 0x433e98u: goto label_433e98;
        case 0x433e9cu: goto label_433e9c;
        case 0x433ea0u: goto label_433ea0;
        case 0x433ea4u: goto label_433ea4;
        case 0x433ea8u: goto label_433ea8;
        case 0x433eacu: goto label_433eac;
        case 0x433eb0u: goto label_433eb0;
        case 0x433eb4u: goto label_433eb4;
        case 0x433eb8u: goto label_433eb8;
        case 0x433ebcu: goto label_433ebc;
        case 0x433ec0u: goto label_433ec0;
        case 0x433ec4u: goto label_433ec4;
        case 0x433ec8u: goto label_433ec8;
        case 0x433eccu: goto label_433ecc;
        case 0x433ed0u: goto label_433ed0;
        case 0x433ed4u: goto label_433ed4;
        case 0x433ed8u: goto label_433ed8;
        case 0x433edcu: goto label_433edc;
        case 0x433ee0u: goto label_433ee0;
        case 0x433ee4u: goto label_433ee4;
        case 0x433ee8u: goto label_433ee8;
        case 0x433eecu: goto label_433eec;
        case 0x433ef0u: goto label_433ef0;
        case 0x433ef4u: goto label_433ef4;
        case 0x433ef8u: goto label_433ef8;
        case 0x433efcu: goto label_433efc;
        case 0x433f00u: goto label_433f00;
        case 0x433f04u: goto label_433f04;
        case 0x433f08u: goto label_433f08;
        case 0x433f0cu: goto label_433f0c;
        case 0x433f10u: goto label_433f10;
        case 0x433f14u: goto label_433f14;
        case 0x433f18u: goto label_433f18;
        case 0x433f1cu: goto label_433f1c;
        case 0x433f20u: goto label_433f20;
        case 0x433f24u: goto label_433f24;
        case 0x433f28u: goto label_433f28;
        case 0x433f2cu: goto label_433f2c;
        case 0x433f30u: goto label_433f30;
        case 0x433f34u: goto label_433f34;
        case 0x433f38u: goto label_433f38;
        case 0x433f3cu: goto label_433f3c;
        case 0x433f40u: goto label_433f40;
        case 0x433f44u: goto label_433f44;
        case 0x433f48u: goto label_433f48;
        case 0x433f4cu: goto label_433f4c;
        case 0x433f50u: goto label_433f50;
        case 0x433f54u: goto label_433f54;
        case 0x433f58u: goto label_433f58;
        case 0x433f5cu: goto label_433f5c;
        case 0x433f60u: goto label_433f60;
        case 0x433f64u: goto label_433f64;
        case 0x433f68u: goto label_433f68;
        case 0x433f6cu: goto label_433f6c;
        case 0x433f70u: goto label_433f70;
        case 0x433f74u: goto label_433f74;
        case 0x433f78u: goto label_433f78;
        case 0x433f7cu: goto label_433f7c;
        case 0x433f80u: goto label_433f80;
        case 0x433f84u: goto label_433f84;
        case 0x433f88u: goto label_433f88;
        case 0x433f8cu: goto label_433f8c;
        case 0x433f90u: goto label_433f90;
        case 0x433f94u: goto label_433f94;
        case 0x433f98u: goto label_433f98;
        case 0x433f9cu: goto label_433f9c;
        case 0x433fa0u: goto label_433fa0;
        case 0x433fa4u: goto label_433fa4;
        case 0x433fa8u: goto label_433fa8;
        case 0x433facu: goto label_433fac;
        case 0x433fb0u: goto label_433fb0;
        case 0x433fb4u: goto label_433fb4;
        case 0x433fb8u: goto label_433fb8;
        case 0x433fbcu: goto label_433fbc;
        case 0x433fc0u: goto label_433fc0;
        case 0x433fc4u: goto label_433fc4;
        case 0x433fc8u: goto label_433fc8;
        case 0x433fccu: goto label_433fcc;
        case 0x433fd0u: goto label_433fd0;
        case 0x433fd4u: goto label_433fd4;
        case 0x433fd8u: goto label_433fd8;
        case 0x433fdcu: goto label_433fdc;
        case 0x433fe0u: goto label_433fe0;
        case 0x433fe4u: goto label_433fe4;
        case 0x433fe8u: goto label_433fe8;
        case 0x433fecu: goto label_433fec;
        case 0x433ff0u: goto label_433ff0;
        case 0x433ff4u: goto label_433ff4;
        case 0x433ff8u: goto label_433ff8;
        case 0x433ffcu: goto label_433ffc;
        case 0x434000u: goto label_434000;
        case 0x434004u: goto label_434004;
        case 0x434008u: goto label_434008;
        case 0x43400cu: goto label_43400c;
        case 0x434010u: goto label_434010;
        case 0x434014u: goto label_434014;
        case 0x434018u: goto label_434018;
        case 0x43401cu: goto label_43401c;
        case 0x434020u: goto label_434020;
        case 0x434024u: goto label_434024;
        case 0x434028u: goto label_434028;
        case 0x43402cu: goto label_43402c;
        default: break;
    }

    ctx->pc = 0x433880u;

label_433880:
    // 0x433880: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x433880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_433884:
    // 0x433884: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x433884u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_433888:
    // 0x433888: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x433888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_43388c:
    // 0x43388c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x43388cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_433890:
    // 0x433890: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x433890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_433894:
    // 0x433894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x433894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433898:
    // 0x433898: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_43389c:
    // 0x43389c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x43389cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4338a0:
    // 0x4338a0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4338a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4338a4:
    // 0x4338a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x4338a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_4338a8:
    // 0x4338a8: 0xc10ca68  jal         func_4329A0
label_4338ac:
    if (ctx->pc == 0x4338ACu) {
        ctx->pc = 0x4338ACu;
            // 0x4338ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x4338B0u;
        goto label_4338b0;
    }
    ctx->pc = 0x4338A8u;
    SET_GPR_U32(ctx, 31, 0x4338B0u);
    ctx->pc = 0x4338ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4338A8u;
            // 0x4338ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4329A0u;
    if (runtime->hasFunction(0x4329A0u)) {
        auto targetFn = runtime->lookupFunction(0x4329A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4338B0u; }
        if (ctx->pc != 0x4338B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004329A0_0x4329a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4338B0u; }
        if (ctx->pc != 0x4338B0u) { return; }
    }
    ctx->pc = 0x4338B0u;
label_4338b0:
    // 0x4338b0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4338b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4338b4:
    // 0x4338b4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4338b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4338b8:
    // 0x4338b8: 0x2463ceb0  addiu       $v1, $v1, -0x3150
    ctx->pc = 0x4338b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954672));
label_4338bc:
    // 0x4338bc: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4338bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4338c0:
    // 0x4338c0: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x4338c0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_4338c4:
    // 0x4338c4: 0x27a40054  addiu       $a0, $sp, 0x54
    ctx->pc = 0x4338c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_4338c8:
    // 0x4338c8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4338c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4338cc:
    // 0x4338cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4338ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4338d0:
    // 0x4338d0: 0xae630054  sw          $v1, 0x54($s3)
    ctx->pc = 0x4338d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 84), GPR_U32(ctx, 3));
label_4338d4:
    // 0x4338d4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4338d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4338d8:
    // 0x4338d8: 0xae700058  sw          $s0, 0x58($s3)
    ctx->pc = 0x4338d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 16));
label_4338dc:
    // 0x4338dc: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4338dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_4338e0:
    // 0x4338e0: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x4338e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_4338e4:
    // 0x4338e4: 0x27a70058  addiu       $a3, $sp, 0x58
    ctx->pc = 0x4338e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_4338e8:
    // 0x4338e8: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x4338e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_4338ec:
    // 0x4338ec: 0x8c430e60  lw          $v1, 0xE60($v0)
    ctx->pc = 0x4338ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3680)));
label_4338f0:
    // 0x4338f0: 0xafb30058  sw          $s3, 0x58($sp)
    ctx->pc = 0x4338f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 19));
label_4338f4:
    // 0x4338f4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4338f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4338f8:
    // 0x4338f8: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x4338f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_4338fc:
    // 0x4338fc: 0xc0582cc  jal         func_160B30
label_433900:
    if (ctx->pc == 0x433900u) {
        ctx->pc = 0x433900u;
            // 0x433900: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x433904u;
        goto label_433904;
    }
    ctx->pc = 0x4338FCu;
    SET_GPR_U32(ctx, 31, 0x433904u);
    ctx->pc = 0x433900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4338FCu;
            // 0x433900: 0xafa20050  sw          $v0, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160B30u;
    if (runtime->hasFunction(0x160B30u)) {
        auto targetFn = runtime->lookupFunction(0x160B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433904u; }
        if (ctx->pc != 0x433904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160B30_0x160b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433904u; }
        if (ctx->pc != 0x433904u) { return; }
    }
    ctx->pc = 0x433904u;
label_433904:
    // 0x433904: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x433904u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_433908:
    // 0x433908: 0x26620064  addiu       $v0, $s3, 0x64
    ctx->pc = 0x433908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 100));
label_43390c:
    // 0x43390c: 0x2463caa0  addiu       $v1, $v1, -0x3560
    ctx->pc = 0x43390cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953632));
label_433910:
    // 0x433910: 0x2444ff9c  addiu       $a0, $v0, -0x64
    ctx->pc = 0x433910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967196));
label_433914:
    // 0x433914: 0xae630064  sw          $v1, 0x64($s3)
    ctx->pc = 0x433914u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 3));
label_433918:
    // 0x433918: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x433918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_43391c:
    // 0x43391c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x43391cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_433920:
    // 0x433920: 0xac446ed0  sw          $a0, 0x6ED0($v0)
    ctx->pc = 0x433920u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28368), GPR_U32(ctx, 4));
label_433924:
    // 0x433924: 0x2463cab0  addiu       $v1, $v1, -0x3550
    ctx->pc = 0x433924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953648));
label_433928:
    // 0x433928: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x433928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_43392c:
    // 0x43392c: 0x2442cae8  addiu       $v0, $v0, -0x3518
    ctx->pc = 0x43392cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953704));
label_433930:
    // 0x433930: 0xae630000  sw          $v1, 0x0($s3)
    ctx->pc = 0x433930u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
label_433934:
    // 0x433934: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x433934u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_433938:
    // 0x433938: 0xae600068  sw          $zero, 0x68($s3)
    ctx->pc = 0x433938u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 0));
label_43393c:
    // 0x43393c: 0xae60006c  sw          $zero, 0x6C($s3)
    ctx->pc = 0x43393cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 108), GPR_U32(ctx, 0));
label_433940:
    // 0x433940: 0xae600070  sw          $zero, 0x70($s3)
    ctx->pc = 0x433940u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 112), GPR_U32(ctx, 0));
label_433944:
    // 0x433944: 0xae600074  sw          $zero, 0x74($s3)
    ctx->pc = 0x433944u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 116), GPR_U32(ctx, 0));
label_433948:
    // 0x433948: 0xae600078  sw          $zero, 0x78($s3)
    ctx->pc = 0x433948u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 120), GPR_U32(ctx, 0));
label_43394c:
    // 0x43394c: 0xae60007c  sw          $zero, 0x7C($s3)
    ctx->pc = 0x43394cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 124), GPR_U32(ctx, 0));
label_433950:
    // 0x433950: 0xae600080  sw          $zero, 0x80($s3)
    ctx->pc = 0x433950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 0));
label_433954:
    // 0x433954: 0xae600084  sw          $zero, 0x84($s3)
    ctx->pc = 0x433954u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 132), GPR_U32(ctx, 0));
label_433958:
    // 0x433958: 0xae600088  sw          $zero, 0x88($s3)
    ctx->pc = 0x433958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 136), GPR_U32(ctx, 0));
label_43395c:
    // 0x43395c: 0xae60008c  sw          $zero, 0x8C($s3)
    ctx->pc = 0x43395cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 140), GPR_U32(ctx, 0));
label_433960:
    // 0x433960: 0x8e700058  lw          $s0, 0x58($s3)
    ctx->pc = 0x433960u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_433964:
    // 0x433964: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_433968:
    if (ctx->pc == 0x433968u) {
        ctx->pc = 0x43396Cu;
        goto label_43396c;
    }
    ctx->pc = 0x433964u;
    {
        const bool branch_taken_0x433964 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x433964) {
            ctx->pc = 0x433A00u;
            goto label_433a00;
        }
    }
    ctx->pc = 0x43396Cu;
label_43396c:
    // 0x43396c: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x43396cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_433970:
    // 0x433970: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x433970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_433974:
    // 0x433974: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x433974u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_433978:
    // 0x433978: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x433978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_43397c:
    // 0x43397c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x43397cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_433980:
    // 0x433980: 0xc040138  jal         func_1004E0
label_433984:
    if (ctx->pc == 0x433984u) {
        ctx->pc = 0x433984u;
            // 0x433984: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x433988u;
        goto label_433988;
    }
    ctx->pc = 0x433980u;
    SET_GPR_U32(ctx, 31, 0x433988u);
    ctx->pc = 0x433984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433980u;
            // 0x433984: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433988u; }
        if (ctx->pc != 0x433988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433988u; }
        if (ctx->pc != 0x433988u) { return; }
    }
    ctx->pc = 0x433988u;
label_433988:
    // 0x433988: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x433988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
label_43398c:
    // 0x43398c: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x43398cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
label_433990:
    // 0x433990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x433990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433994:
    // 0x433994: 0x24a53a20  addiu       $a1, $a1, 0x3A20
    ctx->pc = 0x433994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14880));
label_433998:
    // 0x433998: 0x24c62cf0  addiu       $a2, $a2, 0x2CF0
    ctx->pc = 0x433998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 11504));
label_43399c:
    // 0x43399c: 0x240701b0  addiu       $a3, $zero, 0x1B0
    ctx->pc = 0x43399cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 432));
label_4339a0:
    // 0x4339a0: 0xc040840  jal         func_102100
label_4339a4:
    if (ctx->pc == 0x4339A4u) {
        ctx->pc = 0x4339A4u;
            // 0x4339a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4339A8u;
        goto label_4339a8;
    }
    ctx->pc = 0x4339A0u;
    SET_GPR_U32(ctx, 31, 0x4339A8u);
    ctx->pc = 0x4339A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4339A0u;
            // 0x4339a4: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339A8u; }
        if (ctx->pc != 0x4339A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339A8u; }
        if (ctx->pc != 0x4339A8u) { return; }
    }
    ctx->pc = 0x4339A8u;
label_4339a8:
    // 0x4339a8: 0xae620068  sw          $v0, 0x68($s3)
    ctx->pc = 0x4339a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 104), GPR_U32(ctx, 2));
label_4339ac:
    // 0x4339ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4339acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4339b0:
    // 0x4339b0: 0x2664006c  addiu       $a0, $s3, 0x6C
    ctx->pc = 0x4339b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 108));
label_4339b4:
    // 0x4339b4: 0xc0788fc  jal         func_1E23F0
label_4339b8:
    if (ctx->pc == 0x4339B8u) {
        ctx->pc = 0x4339B8u;
            // 0x4339b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4339BCu;
        goto label_4339bc;
    }
    ctx->pc = 0x4339B4u;
    SET_GPR_U32(ctx, 31, 0x4339BCu);
    ctx->pc = 0x4339B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4339B4u;
            // 0x4339b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339BCu; }
        if (ctx->pc != 0x4339BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339BCu; }
        if (ctx->pc != 0x4339BCu) { return; }
    }
    ctx->pc = 0x4339BCu;
label_4339bc:
    // 0x4339bc: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4339bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4339c0:
    // 0x4339c0: 0xc0788fc  jal         func_1E23F0
label_4339c4:
    if (ctx->pc == 0x4339C4u) {
        ctx->pc = 0x4339C4u;
            // 0x4339c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4339C8u;
        goto label_4339c8;
    }
    ctx->pc = 0x4339C0u;
    SET_GPR_U32(ctx, 31, 0x4339C8u);
    ctx->pc = 0x4339C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4339C0u;
            // 0x4339c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339C8u; }
        if (ctx->pc != 0x4339C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339C8u; }
        if (ctx->pc != 0x4339C8u) { return; }
    }
    ctx->pc = 0x4339C8u;
label_4339c8:
    // 0x4339c8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4339c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4339cc:
    // 0x4339cc: 0xafb2005c  sw          $s2, 0x5C($sp)
    ctx->pc = 0x4339ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 18));
label_4339d0:
    // 0x4339d0: 0x26640078  addiu       $a0, $s3, 0x78
    ctx->pc = 0x4339d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_4339d4:
    // 0x4339d4: 0x8e63007c  lw          $v1, 0x7C($s3)
    ctx->pc = 0x4339d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_4339d8:
    // 0x4339d8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4339d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4339dc:
    // 0x4339dc: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x4339dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
label_4339e0:
    // 0x4339e0: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x4339e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_4339e4:
    // 0x4339e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4339e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4339e8:
    // 0x4339e8: 0xc0a997c  jal         func_2A65F0
label_4339ec:
    if (ctx->pc == 0x4339ECu) {
        ctx->pc = 0x4339ECu;
            // 0x4339ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x4339F0u;
        goto label_4339f0;
    }
    ctx->pc = 0x4339E8u;
    SET_GPR_U32(ctx, 31, 0x4339F0u);
    ctx->pc = 0x4339ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4339E8u;
            // 0x4339ec: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339F0u; }
        if (ctx->pc != 0x4339F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4339F0u; }
        if (ctx->pc != 0x4339F0u) { return; }
    }
    ctx->pc = 0x4339F0u;
label_4339f0:
    // 0x4339f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x4339f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_4339f4:
    // 0x4339f4: 0x230102b  sltu        $v0, $s1, $s0
    ctx->pc = 0x4339f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_4339f8:
    // 0x4339f8: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_4339fc:
    if (ctx->pc == 0x4339FCu) {
        ctx->pc = 0x4339FCu;
            // 0x4339fc: 0x265201b0  addiu       $s2, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->pc = 0x433A00u;
        goto label_433a00;
    }
    ctx->pc = 0x4339F8u;
    {
        const bool branch_taken_0x4339f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4339FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4339F8u;
            // 0x4339fc: 0x265201b0  addiu       $s2, $s2, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4339f8) {
            ctx->pc = 0x4339CCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4339cc;
        }
    }
    ctx->pc = 0x433A00u;
label_433a00:
    // 0x433a00: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x433a00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_433a04:
    // 0x433a04: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x433a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_433a08:
    // 0x433a08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x433a08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_433a0c:
    // 0x433a0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x433a0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_433a10:
    // 0x433a10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433a10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_433a14:
    // 0x433a14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_433a18:
    // 0x433a18: 0x3e00008  jr          $ra
label_433a1c:
    if (ctx->pc == 0x433A1Cu) {
        ctx->pc = 0x433A1Cu;
            // 0x433a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x433A20u;
        goto label_433a20;
    }
    ctx->pc = 0x433A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433A18u;
            // 0x433a1c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433A20u;
label_433a20:
    // 0x433a20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433a24:
    // 0x433a24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_433a28:
    // 0x433a28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433a28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433a2c:
    // 0x433a2c: 0xc0aeebc  jal         func_2BBAF0
label_433a30:
    if (ctx->pc == 0x433A30u) {
        ctx->pc = 0x433A30u;
            // 0x433a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433A34u;
        goto label_433a34;
    }
    ctx->pc = 0x433A2Cu;
    SET_GPR_U32(ctx, 31, 0x433A34u);
    ctx->pc = 0x433A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433A2Cu;
            // 0x433a30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAF0u;
    if (runtime->hasFunction(0x2BBAF0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A34u; }
        if (ctx->pc != 0x433A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAF0_0x2bbaf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A34u; }
        if (ctx->pc != 0x433A34u) { return; }
    }
    ctx->pc = 0x433A34u;
label_433a34:
    // 0x433a34: 0xc0aeeb4  jal         func_2BBAD0
label_433a38:
    if (ctx->pc == 0x433A38u) {
        ctx->pc = 0x433A38u;
            // 0x433a38: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->pc = 0x433A3Cu;
        goto label_433a3c;
    }
    ctx->pc = 0x433A34u;
    SET_GPR_U32(ctx, 31, 0x433A3Cu);
    ctx->pc = 0x433A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433A34u;
            // 0x433a38: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBAD0u;
    if (runtime->hasFunction(0x2BBAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2BBAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A3Cu; }
        if (ctx->pc != 0x433A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBAD0_0x2bbad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A3Cu; }
        if (ctx->pc != 0x433A3Cu) { return; }
    }
    ctx->pc = 0x433A3Cu;
label_433a3c:
    // 0x433a3c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x433a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_433a40:
    // 0x433a40: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x433a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_433a44:
    // 0x433a44: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x433a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_433a48:
    // 0x433a48: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x433a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_433a4c:
    // 0x433a4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x433a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_433a50:
    // 0x433a50: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x433a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_433a54:
    // 0x433a54: 0xc0aeea4  jal         func_2BBA90
label_433a58:
    if (ctx->pc == 0x433A58u) {
        ctx->pc = 0x433A58u;
            // 0x433a58: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x433A5Cu;
        goto label_433a5c;
    }
    ctx->pc = 0x433A54u;
    SET_GPR_U32(ctx, 31, 0x433A5Cu);
    ctx->pc = 0x433A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433A54u;
            // 0x433a58: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA90u;
    if (runtime->hasFunction(0x2BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A5Cu; }
        if (ctx->pc != 0x433A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA90_0x2bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A5Cu; }
        if (ctx->pc != 0x433A5Cu) { return; }
    }
    ctx->pc = 0x433A5Cu;
label_433a5c:
    // 0x433a5c: 0xc0aee8c  jal         func_2BBA30
label_433a60:
    if (ctx->pc == 0x433A60u) {
        ctx->pc = 0x433A60u;
            // 0x433a60: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x433A64u;
        goto label_433a64;
    }
    ctx->pc = 0x433A5Cu;
    SET_GPR_U32(ctx, 31, 0x433A64u);
    ctx->pc = 0x433A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433A5Cu;
            // 0x433a60: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BBA30u;
    if (runtime->hasFunction(0x2BBA30u)) {
        auto targetFn = runtime->lookupFunction(0x2BBA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A64u; }
        if (ctx->pc != 0x433A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BBA30_0x2bba30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433A64u; }
        if (ctx->pc != 0x433A64u) { return; }
    }
    ctx->pc = 0x433A64u;
label_433a64:
    // 0x433a64: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x433a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_433a68:
    // 0x433a68: 0x24050073  addiu       $a1, $zero, 0x73
    ctx->pc = 0x433a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
label_433a6c:
    // 0x433a6c: 0xae0000a0  sw          $zero, 0xA0($s0)
    ctx->pc = 0x433a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
label_433a70:
    // 0x433a70: 0x3c0442b4  lui         $a0, 0x42B4
    ctx->pc = 0x433a70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17076 << 16));
label_433a74:
    // 0x433a74: 0xae0000a4  sw          $zero, 0xA4($s0)
    ctx->pc = 0x433a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 164), GPR_U32(ctx, 0));
label_433a78:
    // 0x433a78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433a7c:
    // 0x433a7c: 0xae0000a8  sw          $zero, 0xA8($s0)
    ctx->pc = 0x433a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 0));
label_433a80:
    // 0x433a80: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x433a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_433a84:
    // 0x433a84: 0xae0000ac  sw          $zero, 0xAC($s0)
    ctx->pc = 0x433a84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 172), GPR_U32(ctx, 0));
label_433a88:
    // 0x433a88: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x433a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_433a8c:
    // 0x433a8c: 0xae0000b4  sw          $zero, 0xB4($s0)
    ctx->pc = 0x433a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 0));
label_433a90:
    // 0x433a90: 0xae0000b8  sw          $zero, 0xB8($s0)
    ctx->pc = 0x433a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 184), GPR_U32(ctx, 0));
label_433a94:
    // 0x433a94: 0xae0000c0  sw          $zero, 0xC0($s0)
    ctx->pc = 0x433a94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 0));
label_433a98:
    // 0x433a98: 0xae0400c4  sw          $a0, 0xC4($s0)
    ctx->pc = 0x433a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 4));
label_433a9c:
    // 0x433a9c: 0xae0300c8  sw          $v1, 0xC8($s0)
    ctx->pc = 0x433a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 3));
label_433aa0:
    // 0x433aa0: 0xc0775b8  jal         func_1DD6E0
label_433aa4:
    if (ctx->pc == 0x433AA4u) {
        ctx->pc = 0x433AA4u;
            // 0x433aa4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x433AA8u;
        goto label_433aa8;
    }
    ctx->pc = 0x433AA0u;
    SET_GPR_U32(ctx, 31, 0x433AA8u);
    ctx->pc = 0x433AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433AA0u;
            // 0x433aa4: 0xa20200cc  sb          $v0, 0xCC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD6E0u;
    if (runtime->hasFunction(0x1DD6E0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433AA8u; }
        if (ctx->pc != 0x433AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DD6E0_0x1dd6e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433AA8u; }
        if (ctx->pc != 0x433AA8u) { return; }
    }
    ctx->pc = 0x433AA8u;
label_433aa8:
    // 0x433aa8: 0xc077314  jal         func_1DCC50
label_433aac:
    if (ctx->pc == 0x433AACu) {
        ctx->pc = 0x433AACu;
            // 0x433aac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x433AB0u;
        goto label_433ab0;
    }
    ctx->pc = 0x433AA8u;
    SET_GPR_U32(ctx, 31, 0x433AB0u);
    ctx->pc = 0x433AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433AA8u;
            // 0x433aac: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCC50u;
    if (runtime->hasFunction(0x1DCC50u)) {
        auto targetFn = runtime->lookupFunction(0x1DCC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433AB0u; }
        if (ctx->pc != 0x433AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DCC50_0x1dcc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433AB0u; }
        if (ctx->pc != 0x433AB0u) { return; }
    }
    ctx->pc = 0x433AB0u;
label_433ab0:
    // 0x433ab0: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x433ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
label_433ab4:
    // 0x433ab4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x433ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_433ab8:
    // 0x433ab8: 0x24635f60  addiu       $v1, $v1, 0x5F60
    ctx->pc = 0x433ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24416));
label_433abc:
    // 0x433abc: 0x8e0500c8  lw          $a1, 0xC8($s0)
    ctx->pc = 0x433abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_433ac0:
    // 0x433ac0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x433ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_433ac4:
    // 0x433ac4: 0x2484ca00  addiu       $a0, $a0, -0x3600
    ctx->pc = 0x433ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953472));
label_433ac8:
    // 0x433ac8: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x433ac8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_433acc:
    // 0x433acc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x433accu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_433ad0:
    // 0x433ad0: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x433ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_433ad4:
    // 0x433ad4: 0xa62818  mult        $a1, $a1, $a2
    ctx->pc = 0x433ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_433ad8:
    // 0x433ad8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x433ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_433adc:
    // 0x433adc: 0xae0500c8  sw          $a1, 0xC8($s0)
    ctx->pc = 0x433adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 5));
label_433ae0:
    // 0x433ae0: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x433ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_433ae4:
    // 0x433ae4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x433ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_433ae8:
    // 0x433ae8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x433ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_433aec:
    // 0x433aec: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x433aecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_433af0:
    // 0x433af0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x433af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_433af4:
    // 0x433af4: 0x8042007a  lb          $v0, 0x7A($v0)
    ctx->pc = 0x433af4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 122)));
label_433af8:
    // 0x433af8: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x433af8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_433afc:
    // 0x433afc: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_433b00:
    if (ctx->pc == 0x433B00u) {
        ctx->pc = 0x433B04u;
        goto label_433b04;
    }
    ctx->pc = 0x433AFCu;
    {
        const bool branch_taken_0x433afc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x433afc) {
            ctx->pc = 0x433B14u;
            goto label_433b14;
        }
    }
    ctx->pc = 0x433B04u;
label_433b04:
    // 0x433b04: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x433b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_433b08:
    // 0x433b08: 0xc440cd90  lwc1        $f0, -0x3270($v0)
    ctx->pc = 0x433b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433b0c:
    // 0x433b0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_433b10:
    if (ctx->pc == 0x433B10u) {
        ctx->pc = 0x433B10u;
            // 0x433b10: 0xe6000118  swc1        $f0, 0x118($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
        ctx->pc = 0x433B14u;
        goto label_433b14;
    }
    ctx->pc = 0x433B0Cu;
    {
        const bool branch_taken_0x433b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x433B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433B0Cu;
            // 0x433b10: 0xe6000118  swc1        $f0, 0x118($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x433b0c) {
            ctx->pc = 0x433B20u;
            goto label_433b20;
        }
    }
    ctx->pc = 0x433B14u;
label_433b14:
    // 0x433b14: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x433b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_433b18:
    // 0x433b18: 0xc440cd88  lwc1        $f0, -0x3278($v0)
    ctx->pc = 0x433b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294954376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433b1c:
    // 0x433b1c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x433b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
label_433b20:
    // 0x433b20: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x433b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_433b24:
    // 0x433b24: 0x26040160  addiu       $a0, $s0, 0x160
    ctx->pc = 0x433b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
label_433b28:
    // 0x433b28: 0xc04cce8  jal         func_1333A0
label_433b2c:
    if (ctx->pc == 0x433B2Cu) {
        ctx->pc = 0x433B2Cu;
            // 0x433b2c: 0x24a5cdf0  addiu       $a1, $a1, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
        ctx->pc = 0x433B30u;
        goto label_433b30;
    }
    ctx->pc = 0x433B28u;
    SET_GPR_U32(ctx, 31, 0x433B30u);
    ctx->pc = 0x433B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433B28u;
            // 0x433b2c: 0x24a5cdf0  addiu       $a1, $a1, -0x3210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333A0u;
    if (runtime->hasFunction(0x1333A0u)) {
        auto targetFn = runtime->lookupFunction(0x1333A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433B30u; }
        if (ctx->pc != 0x433B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333A0_0x1333a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433B30u; }
        if (ctx->pc != 0x433B30u) { return; }
    }
    ctx->pc = 0x433B30u;
label_433b30:
    // 0x433b30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x433b30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433b34:
    // 0x433b34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x433b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_433b38:
    // 0x433b38: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433b38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_433b3c:
    // 0x433b3c: 0x3e00008  jr          $ra
label_433b40:
    if (ctx->pc == 0x433B40u) {
        ctx->pc = 0x433B40u;
            // 0x433b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x433B44u;
        goto label_433b44;
    }
    ctx->pc = 0x433B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433B3Cu;
            // 0x433b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433B44u;
label_433b44:
    // 0x433b44: 0x0  nop
    ctx->pc = 0x433b44u;
    // NOP
label_433b48:
    // 0x433b48: 0x0  nop
    ctx->pc = 0x433b48u;
    // NOP
label_433b4c:
    // 0x433b4c: 0x0  nop
    ctx->pc = 0x433b4cu;
    // NOP
label_433b50:
    // 0x433b50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433b54:
    // 0x433b54: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_433b58:
    // 0x433b58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433b5c:
    // 0x433b5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x433b5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433b60:
    // 0x433b60: 0x8c8400d0  lw          $a0, 0xD0($a0)
    ctx->pc = 0x433b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 208)));
label_433b64:
    // 0x433b64: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_433b68:
    if (ctx->pc == 0x433B68u) {
        ctx->pc = 0x433B68u;
            // 0x433b68: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->pc = 0x433B6Cu;
        goto label_433b6c;
    }
    ctx->pc = 0x433B64u;
    {
        const bool branch_taken_0x433b64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x433b64) {
            ctx->pc = 0x433B68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433B64u;
            // 0x433b68: 0xae0000d0  sw          $zero, 0xD0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433B80u;
            goto label_433b80;
        }
    }
    ctx->pc = 0x433B6Cu;
label_433b6c:
    // 0x433b6c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x433b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_433b70:
    // 0x433b70: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x433b70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_433b74:
    // 0x433b74: 0x320f809  jalr        $t9
label_433b78:
    if (ctx->pc == 0x433B78u) {
        ctx->pc = 0x433B78u;
            // 0x433b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x433B7Cu;
        goto label_433b7c;
    }
    ctx->pc = 0x433B74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433B7Cu);
        ctx->pc = 0x433B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433B74u;
            // 0x433b78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x433B7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433B7Cu; }
            if (ctx->pc != 0x433B7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x433B7Cu;
label_433b7c:
    // 0x433b7c: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x433b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_433b80:
    // 0x433b80: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x433b80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_433b84:
    // 0x433b84: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_433b88:
    if (ctx->pc == 0x433B88u) {
        ctx->pc = 0x433B88u;
            // 0x433b88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->pc = 0x433B8Cu;
        goto label_433b8c;
    }
    ctx->pc = 0x433B84u;
    {
        const bool branch_taken_0x433b84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x433b84) {
            ctx->pc = 0x433B88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433B84u;
            // 0x433b88: 0xae000050  sw          $zero, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433BA0u;
            goto label_433ba0;
        }
    }
    ctx->pc = 0x433B8Cu;
label_433b8c:
    // 0x433b8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x433b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_433b90:
    // 0x433b90: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x433b90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_433b94:
    // 0x433b94: 0x320f809  jalr        $t9
label_433b98:
    if (ctx->pc == 0x433B98u) {
        ctx->pc = 0x433B98u;
            // 0x433b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x433B9Cu;
        goto label_433b9c;
    }
    ctx->pc = 0x433B94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x433B9Cu);
        ctx->pc = 0x433B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433B94u;
            // 0x433b98: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x433B9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x433B9Cu; }
            if (ctx->pc != 0x433B9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x433B9Cu;
label_433b9c:
    // 0x433b9c: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x433b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
label_433ba0:
    // 0x433ba0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x433ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_433ba4:
    // 0x433ba4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433ba4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_433ba8:
    // 0x433ba8: 0x3e00008  jr          $ra
label_433bac:
    if (ctx->pc == 0x433BACu) {
        ctx->pc = 0x433BACu;
            // 0x433bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x433BB0u;
        goto label_433bb0;
    }
    ctx->pc = 0x433BA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433BACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433BA8u;
            // 0x433bac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433BB0u;
label_433bb0:
    // 0x433bb0: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x433bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_433bb4:
    // 0x433bb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x433bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_433bb8:
    // 0x433bb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x433bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_433bbc:
    // 0x433bbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x433bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_433bc0:
    // 0x433bc0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x433bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433bc4:
    // 0x433bc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433bc8:
    // 0x433bc8: 0xc0892d0  jal         func_224B40
label_433bcc:
    if (ctx->pc == 0x433BCCu) {
        ctx->pc = 0x433BCCu;
            // 0x433bcc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x433BD0u;
        goto label_433bd0;
    }
    ctx->pc = 0x433BC8u;
    SET_GPR_U32(ctx, 31, 0x433BD0u);
    ctx->pc = 0x433BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433BC8u;
            // 0x433bcc: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224B40u;
    if (runtime->hasFunction(0x224B40u)) {
        auto targetFn = runtime->lookupFunction(0x224B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BD0u; }
        if (ctx->pc != 0x433BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224B40_0x224b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BD0u; }
        if (ctx->pc != 0x433BD0u) { return; }
    }
    ctx->pc = 0x433BD0u;
label_433bd0:
    // 0x433bd0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x433bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_433bd4:
    // 0x433bd4: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x433bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_433bd8:
    // 0x433bd8: 0x8c426ed0  lw          $v0, 0x6ED0($v0)
    ctx->pc = 0x433bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28368)));
label_433bdc:
    // 0x433bdc: 0x8c500060  lw          $s0, 0x60($v0)
    ctx->pc = 0x433bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_433be0:
    // 0x433be0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x433be0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_433be4:
    // 0x433be4: 0xc0b6e68  jal         func_2DB9A0
label_433be8:
    if (ctx->pc == 0x433BE8u) {
        ctx->pc = 0x433BE8u;
            // 0x433be8: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->pc = 0x433BECu;
        goto label_433bec;
    }
    ctx->pc = 0x433BE4u;
    SET_GPR_U32(ctx, 31, 0x433BECu);
    ctx->pc = 0x433BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433BE4u;
            // 0x433be8: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB9A0u;
    if (runtime->hasFunction(0x2DB9A0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BECu; }
        if (ctx->pc != 0x433BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB9A0_0x2db9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BECu; }
        if (ctx->pc != 0x433BECu) { return; }
    }
    ctx->pc = 0x433BECu;
label_433bec:
    // 0x433bec: 0xc0b6dac  jal         func_2DB6B0
label_433bf0:
    if (ctx->pc == 0x433BF0u) {
        ctx->pc = 0x433BF0u;
            // 0x433bf0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x433BF4u;
        goto label_433bf4;
    }
    ctx->pc = 0x433BECu;
    SET_GPR_U32(ctx, 31, 0x433BF4u);
    ctx->pc = 0x433BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433BECu;
            // 0x433bf0: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (runtime->hasFunction(0x2DB6B0u)) {
        auto targetFn = runtime->lookupFunction(0x2DB6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BF4u; }
        if (ctx->pc != 0x433BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DB6B0_0x2db6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BF4u; }
        if (ctx->pc != 0x433BF4u) { return; }
    }
    ctx->pc = 0x433BF4u;
label_433bf4:
    // 0x433bf4: 0xc0cac94  jal         func_32B250
label_433bf8:
    if (ctx->pc == 0x433BF8u) {
        ctx->pc = 0x433BF8u;
            // 0x433bf8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x433BFCu;
        goto label_433bfc;
    }
    ctx->pc = 0x433BF4u;
    SET_GPR_U32(ctx, 31, 0x433BFCu);
    ctx->pc = 0x433BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433BF4u;
            // 0x433bf8: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B250u;
    if (runtime->hasFunction(0x32B250u)) {
        auto targetFn = runtime->lookupFunction(0x32B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BFCu; }
        if (ctx->pc != 0x433BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B250_0x32b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433BFCu; }
        if (ctx->pc != 0x433BFCu) { return; }
    }
    ctx->pc = 0x433BFCu;
label_433bfc:
    // 0x433bfc: 0xc0cac84  jal         func_32B210
label_433c00:
    if (ctx->pc == 0x433C00u) {
        ctx->pc = 0x433C00u;
            // 0x433c00: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x433C04u;
        goto label_433c04;
    }
    ctx->pc = 0x433BFCu;
    SET_GPR_U32(ctx, 31, 0x433C04u);
    ctx->pc = 0x433C00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433BFCu;
            // 0x433c00: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x32B210u;
    if (runtime->hasFunction(0x32B210u)) {
        auto targetFn = runtime->lookupFunction(0x32B210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433C04u; }
        if (ctx->pc != 0x433C04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0032B210_0x32b210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433C04u; }
        if (ctx->pc != 0x433C04u) { return; }
    }
    ctx->pc = 0x433C04u;
label_433c04:
    // 0x433c04: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x433c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_433c08:
    // 0x433c08: 0xc60c0010  lwc1        $f12, 0x10($s0)
    ctx->pc = 0x433c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_433c0c:
    // 0x433c0c: 0xc44dc910  lwc1        $f13, -0x36F0($v0)
    ctx->pc = 0x433c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294953232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_433c10:
    // 0x433c10: 0xc0a562c  jal         func_2958B0
label_433c14:
    if (ctx->pc == 0x433C14u) {
        ctx->pc = 0x433C14u;
            // 0x433c14: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x433C18u;
        goto label_433c18;
    }
    ctx->pc = 0x433C10u;
    SET_GPR_U32(ctx, 31, 0x433C18u);
    ctx->pc = 0x433C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433C10u;
            // 0x433c14: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2958B0u;
    if (runtime->hasFunction(0x2958B0u)) {
        auto targetFn = runtime->lookupFunction(0x2958B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433C18u; }
        if (ctx->pc != 0x433C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002958B0_0x2958b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433C18u; }
        if (ctx->pc != 0x433C18u) { return; }
    }
    ctx->pc = 0x433C18u;
label_433c18:
    // 0x433c18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x433c18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_433c1c:
    // 0x433c1c: 0x3c0b42c8  lui         $t3, 0x42C8
    ctx->pc = 0x433c1cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)17096 << 16));
label_433c20:
    // 0x433c20: 0x8c436ed0  lw          $v1, 0x6ED0($v0)
    ctx->pc = 0x433c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28368)));
label_433c24:
    // 0x433c24: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x433c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433c28:
    // 0x433c28: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x433c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433c2c:
    // 0x433c2c: 0x3c0a43af  lui         $t2, 0x43AF
    ctx->pc = 0x433c2cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17327 << 16));
label_433c30:
    // 0x433c30: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x433c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433c34:
    // 0x433c34: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x433c34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433c38:
    // 0x433c38: 0x8c640060  lw          $a0, 0x60($v1)
    ctx->pc = 0x433c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_433c3c:
    // 0x433c3c: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x433c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_433c40:
    // 0x433c40: 0x3448d70a  ori         $t0, $v0, 0xD70A
    ctx->pc = 0x433c40u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_433c44:
    // 0x433c44: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x433c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_433c48:
    // 0x433c48: 0xc7a60080  lwc1        $f6, 0x80($sp)
    ctx->pc = 0x433c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_433c4c:
    // 0x433c4c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433c50:
    // 0x433c50: 0xafa400b4  sw          $a0, 0xB4($sp)
    ctx->pc = 0x433c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 4));
label_433c54:
    // 0x433c54: 0xc7a50084  lwc1        $f5, 0x84($sp)
    ctx->pc = 0x433c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_433c58:
    // 0x433c58: 0xc6290018  lwc1        $f9, 0x18($s1)
    ctx->pc = 0x433c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_433c5c:
    // 0x433c5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x433c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_433c60:
    // 0x433c60: 0xc6280014  lwc1        $f8, 0x14($s1)
    ctx->pc = 0x433c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_433c64:
    // 0x433c64: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x433c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
label_433c68:
    // 0x433c68: 0xc6270010  lwc1        $f7, 0x10($s1)
    ctx->pc = 0x433c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_433c6c:
    // 0x433c6c: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x433c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_433c70:
    // 0x433c70: 0xc7a40088  lwc1        $f4, 0x88($sp)
    ctx->pc = 0x433c70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_433c74:
    // 0x433c74: 0x2406002b  addiu       $a2, $zero, 0x2B
    ctx->pc = 0x433c74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_433c78:
    // 0x433c78: 0xc7a3008c  lwc1        $f3, 0x8C($sp)
    ctx->pc = 0x433c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_433c7c:
    // 0x433c7c: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x433c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_433c80:
    // 0x433c80: 0xafab0158  sw          $t3, 0x158($sp)
    ctx->pc = 0x433c80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 11));
label_433c84:
    // 0x433c84: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x433c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433c88:
    // 0x433c88: 0xafaa0154  sw          $t2, 0x154($sp)
    ctx->pc = 0x433c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 10));
label_433c8c:
    // 0x433c8c: 0xe7a20110  swc1        $f2, 0x110($sp)
    ctx->pc = 0x433c8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_433c90:
    // 0x433c90: 0xa3a90160  sb          $t1, 0x160($sp)
    ctx->pc = 0x433c90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 352), (uint8_t)GPR_U32(ctx, 9));
label_433c94:
    // 0x433c94: 0xe7a10114  swc1        $f1, 0x114($sp)
    ctx->pc = 0x433c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_433c98:
    // 0x433c98: 0xafa8015c  sw          $t0, 0x15C($sp)
    ctx->pc = 0x433c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
label_433c9c:
    // 0x433c9c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x433c9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_433ca0:
    // 0x433ca0: 0xa3a70162  sb          $a3, 0x162($sp)
    ctx->pc = 0x433ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 354), (uint8_t)GPR_U32(ctx, 7));
label_433ca4:
    // 0x433ca4: 0xc7a2009c  lwc1        $f2, 0x9C($sp)
    ctx->pc = 0x433ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433ca8:
    // 0x433ca8: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x433ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
label_433cac:
    // 0x433cac: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x433cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433cb0:
    // 0x433cb0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x433cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_433cb4:
    // 0x433cb4: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x433cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433cb8:
    // 0x433cb8: 0xe7a2011c  swc1        $f2, 0x11C($sp)
    ctx->pc = 0x433cb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_433cbc:
    // 0x433cbc: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x433cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_433cc0:
    // 0x433cc0: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x433cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_433cc4:
    // 0x433cc4: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x433cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433cc8:
    // 0x433cc8: 0xc7a100ac  lwc1        $f1, 0xAC($sp)
    ctx->pc = 0x433cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433ccc:
    // 0x433ccc: 0xc7a0007c  lwc1        $f0, 0x7C($sp)
    ctx->pc = 0x433cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433cd0:
    // 0x433cd0: 0xe7a20128  swc1        $f2, 0x128($sp)
    ctx->pc = 0x433cd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_433cd4:
    // 0x433cd4: 0xe7a1012c  swc1        $f1, 0x12C($sp)
    ctx->pc = 0x433cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_433cd8:
    // 0x433cd8: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x433cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_433cdc:
    // 0x433cdc: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x433cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433ce0:
    // 0x433ce0: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x433ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433ce4:
    // 0x433ce4: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x433ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433ce8:
    // 0x433ce8: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x433ce8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_433cec:
    // 0x433cec: 0xe7a800c4  swc1        $f8, 0xC4($sp)
    ctx->pc = 0x433cecu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_433cf0:
    // 0x433cf0: 0xe7a900c8  swc1        $f9, 0xC8($sp)
    ctx->pc = 0x433cf0u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_433cf4:
    // 0x433cf4: 0xe7a60100  swc1        $f6, 0x100($sp)
    ctx->pc = 0x433cf4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_433cf8:
    // 0x433cf8: 0xe7a50104  swc1        $f5, 0x104($sp)
    ctx->pc = 0x433cf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_433cfc:
    // 0x433cfc: 0xe7a40108  swc1        $f4, 0x108($sp)
    ctx->pc = 0x433cfcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_433d00:
    // 0x433d00: 0xe7a3010c  swc1        $f3, 0x10C($sp)
    ctx->pc = 0x433d00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_433d04:
    // 0x433d04: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x433d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_433d08:
    // 0x433d08: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x433d08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_433d0c:
    // 0x433d0c: 0xc0a7a88  jal         func_29EA20
label_433d10:
    if (ctx->pc == 0x433D10u) {
        ctx->pc = 0x433D10u;
            // 0x433d10: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->pc = 0x433D14u;
        goto label_433d14;
    }
    ctx->pc = 0x433D0Cu;
    SET_GPR_U32(ctx, 31, 0x433D14u);
    ctx->pc = 0x433D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433D0Cu;
            // 0x433d10: 0xe7a00140  swc1        $f0, 0x140($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D14u; }
        if (ctx->pc != 0x433D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D14u; }
        if (ctx->pc != 0x433D14u) { return; }
    }
    ctx->pc = 0x433D14u;
label_433d14:
    // 0x433d14: 0x24030220  addiu       $v1, $zero, 0x220
    ctx->pc = 0x433d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_433d18:
    // 0x433d18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x433d18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433d1c:
    // 0x433d1c: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_433d20:
    if (ctx->pc == 0x433D20u) {
        ctx->pc = 0x433D20u;
            // 0x433d20: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x433D24u;
        goto label_433d24;
    }
    ctx->pc = 0x433D1Cu;
    {
        const bool branch_taken_0x433d1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x433D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433D1Cu;
            // 0x433d20: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433d1c) {
            ctx->pc = 0x433D6Cu;
            goto label_433d6c;
        }
    }
    ctx->pc = 0x433D24u;
label_433d24:
    // 0x433d24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433d28:
    // 0x433d28: 0xc088ef4  jal         func_223BD0
label_433d2c:
    if (ctx->pc == 0x433D2Cu) {
        ctx->pc = 0x433D2Cu;
            // 0x433d2c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x433D30u;
        goto label_433d30;
    }
    ctx->pc = 0x433D28u;
    SET_GPR_U32(ctx, 31, 0x433D30u);
    ctx->pc = 0x433D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433D28u;
            // 0x433d2c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223BD0u;
    if (runtime->hasFunction(0x223BD0u)) {
        auto targetFn = runtime->lookupFunction(0x223BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D30u; }
        if (ctx->pc != 0x433D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00223BD0_0x223bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D30u; }
        if (ctx->pc != 0x433D30u) { return; }
    }
    ctx->pc = 0x433D30u;
label_433d30:
    // 0x433d30: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x433d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_433d34:
    // 0x433d34: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x433d34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_433d38:
    // 0x433d38: 0x24422240  addiu       $v0, $v0, 0x2240
    ctx->pc = 0x433d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8768));
label_433d3c:
    // 0x433d3c: 0x24632260  addiu       $v1, $v1, 0x2260
    ctx->pc = 0x433d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8800));
label_433d40:
    // 0x433d40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x433d40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_433d44:
    // 0x433d44: 0xae000200  sw          $zero, 0x200($s0)
    ctx->pc = 0x433d44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
label_433d48:
    // 0x433d48: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433d4c:
    // 0x433d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x433d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_433d50:
    // 0x433d50: 0xae000210  sw          $zero, 0x210($s0)
    ctx->pc = 0x433d50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 0));
label_433d54:
    // 0x433d54: 0xae000214  sw          $zero, 0x214($s0)
    ctx->pc = 0x433d54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 532), GPR_U32(ctx, 0));
label_433d58:
    // 0x433d58: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x433d58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_433d5c:
    // 0x433d5c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x433d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_433d60:
    // 0x433d60: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x433d60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_433d64:
    // 0x433d64: 0xc088b38  jal         func_222CE0
label_433d68:
    if (ctx->pc == 0x433D68u) {
        ctx->pc = 0x433D68u;
            // 0x433d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433D6Cu;
        goto label_433d6c;
    }
    ctx->pc = 0x433D64u;
    SET_GPR_U32(ctx, 31, 0x433D6Cu);
    ctx->pc = 0x433D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433D64u;
            // 0x433d68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222CE0u;
    if (runtime->hasFunction(0x222CE0u)) {
        auto targetFn = runtime->lookupFunction(0x222CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D6Cu; }
        if (ctx->pc != 0x433D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222CE0_0x222ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D6Cu; }
        if (ctx->pc != 0x433D6Cu) { return; }
    }
    ctx->pc = 0x433D6Cu;
label_433d6c:
    // 0x433d6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433d70:
    // 0x433d70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x433d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_433d74:
    // 0x433d74: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x433d74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433d78:
    // 0x433d78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x433d78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433d7c:
    // 0x433d7c: 0xc08914c  jal         func_224530
label_433d80:
    if (ctx->pc == 0x433D80u) {
        ctx->pc = 0x433D80u;
            // 0x433d80: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->pc = 0x433D84u;
        goto label_433d84;
    }
    ctx->pc = 0x433D7Cu;
    SET_GPR_U32(ctx, 31, 0x433D84u);
    ctx->pc = 0x433D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433D7Cu;
            // 0x433d80: 0xae000200  sw          $zero, 0x200($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D84u; }
        if (ctx->pc != 0x433D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433D84u; }
        if (ctx->pc != 0x433D84u) { return; }
    }
    ctx->pc = 0x433D84u;
label_433d84:
    // 0x433d84: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x433d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433d88:
    // 0x433d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433d8c:
    // 0x433d8c: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x433d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433d90:
    // 0x433d90: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x433d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_433d94:
    // 0x433d94: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x433d94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433d98:
    // 0x433d98: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x433d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_433d9c:
    // 0x433d9c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x433d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_433da0:
    // 0x433da0: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x433da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
label_433da4:
    // 0x433da4: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x433da4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_433da8:
    // 0x433da8: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x433da8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_433dac:
    // 0x433dac: 0xc623002c  lwc1        $f3, 0x2C($s1)
    ctx->pc = 0x433dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_433db0:
    // 0x433db0: 0xc6220028  lwc1        $f2, 0x28($s1)
    ctx->pc = 0x433db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_433db4:
    // 0x433db4: 0xc6210024  lwc1        $f1, 0x24($s1)
    ctx->pc = 0x433db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_433db8:
    // 0x433db8: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x433db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_433dbc:
    // 0x433dbc: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x433dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_433dc0:
    // 0x433dc0: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x433dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_433dc4:
    // 0x433dc4: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x433dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_433dc8:
    // 0x433dc8: 0xc0892b0  jal         func_224AC0
label_433dcc:
    if (ctx->pc == 0x433DCCu) {
        ctx->pc = 0x433DCCu;
            // 0x433dcc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->pc = 0x433DD0u;
        goto label_433dd0;
    }
    ctx->pc = 0x433DC8u;
    SET_GPR_U32(ctx, 31, 0x433DD0u);
    ctx->pc = 0x433DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433DC8u;
            // 0x433dcc: 0xe7a3004c  swc1        $f3, 0x4C($sp) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x224AC0u;
    if (runtime->hasFunction(0x224AC0u)) {
        auto targetFn = runtime->lookupFunction(0x224AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433DD0u; }
        if (ctx->pc != 0x433DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224AC0_0x224ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433DD0u; }
        if (ctx->pc != 0x433DD0u) { return; }
    }
    ctx->pc = 0x433DD0u;
label_433dd0:
    // 0x433dd0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433dd4:
    // 0x433dd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x433dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433dd8:
    // 0x433dd8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x433dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_433ddc:
    // 0x433ddc: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x433ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_433de0:
    // 0x433de0: 0xc08c164  jal         func_230590
label_433de4:
    if (ctx->pc == 0x433DE4u) {
        ctx->pc = 0x433DE4u;
            // 0x433de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x433DE8u;
        goto label_433de8;
    }
    ctx->pc = 0x433DE0u;
    SET_GPR_U32(ctx, 31, 0x433DE8u);
    ctx->pc = 0x433DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433DE0u;
            // 0x433de4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x230590u;
    if (runtime->hasFunction(0x230590u)) {
        auto targetFn = runtime->lookupFunction(0x230590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433DE8u; }
        if (ctx->pc != 0x433DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00230590_0x230590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433DE8u; }
        if (ctx->pc != 0x433DE8u) { return; }
    }
    ctx->pc = 0x433DE8u;
label_433de8:
    // 0x433de8: 0xae300050  sw          $s0, 0x50($s1)
    ctx->pc = 0x433de8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 16));
label_433dec:
    // 0x433dec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433df0:
    // 0x433df0: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x433df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_433df4:
    // 0x433df4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x433df4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_433df8:
    // 0x433df8: 0xc0a7a88  jal         func_29EA20
label_433dfc:
    if (ctx->pc == 0x433DFCu) {
        ctx->pc = 0x433DFCu;
            // 0x433dfc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x433E00u;
        goto label_433e00;
    }
    ctx->pc = 0x433DF8u;
    SET_GPR_U32(ctx, 31, 0x433E00u);
    ctx->pc = 0x433DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433DF8u;
            // 0x433dfc: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E00u; }
        if (ctx->pc != 0x433E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E00u; }
        if (ctx->pc != 0x433E00u) { return; }
    }
    ctx->pc = 0x433E00u;
label_433e00:
    // 0x433e00: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x433e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_433e04:
    // 0x433e04: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x433e04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433e08:
    // 0x433e08: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_433e0c:
    if (ctx->pc == 0x433E0Cu) {
        ctx->pc = 0x433E0Cu;
            // 0x433e0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x433E10u;
        goto label_433e10;
    }
    ctx->pc = 0x433E08u;
    {
        const bool branch_taken_0x433e08 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x433E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433E08u;
            // 0x433e0c: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x433e08) {
            ctx->pc = 0x433E2Cu;
            goto label_433e2c;
        }
    }
    ctx->pc = 0x433E10u;
label_433e10:
    // 0x433e10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x433e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_433e14:
    // 0x433e14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x433e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433e18:
    // 0x433e18: 0xc0869d0  jal         func_21A740
label_433e1c:
    if (ctx->pc == 0x433E1Cu) {
        ctx->pc = 0x433E1Cu;
            // 0x433e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433E20u;
        goto label_433e20;
    }
    ctx->pc = 0x433E18u;
    SET_GPR_U32(ctx, 31, 0x433E20u);
    ctx->pc = 0x433E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433E18u;
            // 0x433e1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A740u;
    if (runtime->hasFunction(0x21A740u)) {
        auto targetFn = runtime->lookupFunction(0x21A740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E20u; }
        if (ctx->pc != 0x433E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021A740_0x21a740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E20u; }
        if (ctx->pc != 0x433E20u) { return; }
    }
    ctx->pc = 0x433E20u;
label_433e20:
    // 0x433e20: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x433e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_433e24:
    // 0x433e24: 0x24422210  addiu       $v0, $v0, 0x2210
    ctx->pc = 0x433e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8720));
label_433e28:
    // 0x433e28: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x433e28u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_433e2c:
    // 0x433e2c: 0xae120210  sw          $s2, 0x210($s0)
    ctx->pc = 0x433e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 528), GPR_U32(ctx, 18));
label_433e30:
    // 0x433e30: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x433e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_433e34:
    // 0x433e34: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x433e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_433e38:
    // 0x433e38: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x433e38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_433e3c:
    // 0x433e3c: 0xc08c650  jal         func_231940
label_433e40:
    if (ctx->pc == 0x433E40u) {
        ctx->pc = 0x433E40u;
            // 0x433e40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433E44u;
        goto label_433e44;
    }
    ctx->pc = 0x433E3Cu;
    SET_GPR_U32(ctx, 31, 0x433E44u);
    ctx->pc = 0x433E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433E3Cu;
            // 0x433e40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231940u;
    if (runtime->hasFunction(0x231940u)) {
        auto targetFn = runtime->lookupFunction(0x231940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E44u; }
        if (ctx->pc != 0x433E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231940_0x231940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E44u; }
        if (ctx->pc != 0x433E44u) { return; }
    }
    ctx->pc = 0x433E44u;
label_433e44:
    // 0x433e44: 0x8e2400b0  lw          $a0, 0xB0($s1)
    ctx->pc = 0x433e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_433e48:
    // 0x433e48: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x433e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_433e4c:
    // 0x433e4c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x433e4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_433e50:
    // 0x433e50: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x433e50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_433e54:
    // 0x433e54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x433e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433e58:
    // 0x433e58: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x433e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_433e5c:
    // 0x433e5c: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x433e5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_433e60:
    // 0x433e60: 0xae2400b0  sw          $a0, 0xB0($s1)
    ctx->pc = 0x433e60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 4));
label_433e64:
    // 0x433e64: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x433e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_433e68:
    // 0x433e68: 0xa2270064  sb          $a3, 0x64($s1)
    ctx->pc = 0x433e68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 100), (uint8_t)GPR_U32(ctx, 7));
label_433e6c:
    // 0x433e6c: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x433e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_433e70:
    // 0x433e70: 0xa2260065  sb          $a2, 0x65($s1)
    ctx->pc = 0x433e70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 101), (uint8_t)GPR_U32(ctx, 6));
label_433e74:
    // 0x433e74: 0xae25008c  sw          $a1, 0x8C($s1)
    ctx->pc = 0x433e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 5));
label_433e78:
    // 0x433e78: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x433e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
label_433e7c:
    // 0x433e7c: 0xae220078  sw          $v0, 0x78($s1)
    ctx->pc = 0x433e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 2));
label_433e80:
    // 0x433e80: 0xc040180  jal         func_100600
label_433e84:
    if (ctx->pc == 0x433E84u) {
        ctx->pc = 0x433E84u;
            // 0x433e84: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x433E88u;
        goto label_433e88;
    }
    ctx->pc = 0x433E80u;
    SET_GPR_U32(ctx, 31, 0x433E88u);
    ctx->pc = 0x433E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433E80u;
            // 0x433e84: 0xae200080  sw          $zero, 0x80($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E88u; }
        if (ctx->pc != 0x433E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433E88u; }
        if (ctx->pc != 0x433E88u) { return; }
    }
    ctx->pc = 0x433E88u;
label_433e88:
    // 0x433e88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x433e88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_433e8c:
    // 0x433e8c: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
label_433e90:
    if (ctx->pc == 0x433E90u) {
        ctx->pc = 0x433E90u;
            // 0x433e90: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->pc = 0x433E94u;
        goto label_433e94;
    }
    ctx->pc = 0x433E8Cu;
    {
        const bool branch_taken_0x433e8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x433e8c) {
            ctx->pc = 0x433E90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433E8Cu;
            // 0x433e90: 0x3c024845  lui         $v0, 0x4845 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x433ECCu;
            goto label_433ecc;
        }
    }
    ctx->pc = 0x433E94u;
label_433e94:
    // 0x433e94: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x433e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_433e98:
    // 0x433e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x433e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433e9c:
    // 0x433e9c: 0x24632db8  addiu       $v1, $v1, 0x2DB8
    ctx->pc = 0x433e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11704));
label_433ea0:
    // 0x433ea0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x433ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_433ea4:
    // 0x433ea4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x433ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_433ea8:
    // 0x433ea8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x433ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_433eac:
    // 0x433eac: 0xc040138  jal         func_1004E0
label_433eb0:
    if (ctx->pc == 0x433EB0u) {
        ctx->pc = 0x433EB0u;
            // 0x433eb0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x433EB4u;
        goto label_433eb4;
    }
    ctx->pc = 0x433EACu;
    SET_GPR_U32(ctx, 31, 0x433EB4u);
    ctx->pc = 0x433EB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433EACu;
            // 0x433eb0: 0xa2020008  sb          $v0, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EB4u; }
        if (ctx->pc != 0x433EB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EB4u; }
        if (ctx->pc != 0x433EB4u) { return; }
    }
    ctx->pc = 0x433EB4u;
label_433eb4:
    // 0x433eb4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x433eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_433eb8:
    // 0x433eb8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x433eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_433ebc:
    // 0x433ebc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433ebcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433ec0:
    // 0x433ec0: 0xc04a576  jal         func_1295D8
label_433ec4:
    if (ctx->pc == 0x433EC4u) {
        ctx->pc = 0x433EC4u;
            // 0x433ec4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x433EC8u;
        goto label_433ec8;
    }
    ctx->pc = 0x433EC0u;
    SET_GPR_U32(ctx, 31, 0x433EC8u);
    ctx->pc = 0x433EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433EC0u;
            // 0x433ec4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EC8u; }
        if (ctx->pc != 0x433EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EC8u; }
        if (ctx->pc != 0x433EC8u) { return; }
    }
    ctx->pc = 0x433EC8u;
label_433ec8:
    // 0x433ec8: 0x3c024845  lui         $v0, 0x4845
    ctx->pc = 0x433ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18501 << 16));
label_433ecc:
    // 0x433ecc: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x433eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_433ed0:
    // 0x433ed0: 0x3442c100  ori         $v0, $v0, 0xC100
    ctx->pc = 0x433ed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49408);
label_433ed4:
    // 0x433ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x433ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_433ed8:
    // 0x433ed8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x433ed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_433edc:
    // 0x433edc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433ee0:
    // 0x433ee0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x433ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_433ee4:
    // 0x433ee4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x433ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433ee8:
    // 0x433ee8: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x433ee8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_433eec:
    // 0x433eec: 0x344601ae  ori         $a2, $v0, 0x1AE
    ctx->pc = 0x433eecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)430);
label_433ef0:
    // 0x433ef0: 0xc122cd8  jal         func_48B360
label_433ef4:
    if (ctx->pc == 0x433EF4u) {
        ctx->pc = 0x433EF4u;
            // 0x433ef4: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->pc = 0x433EF8u;
        goto label_433ef8;
    }
    ctx->pc = 0x433EF0u;
    SET_GPR_U32(ctx, 31, 0x433EF8u);
    ctx->pc = 0x433EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433EF0u;
            // 0x433ef4: 0xae3000d0  sw          $s0, 0xD0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 208), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B360u;
    if (runtime->hasFunction(0x48B360u)) {
        auto targetFn = runtime->lookupFunction(0x48B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EF8u; }
        if (ctx->pc != 0x433EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B360_0x48b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433EF8u; }
        if (ctx->pc != 0x433EF8u) { return; }
    }
    ctx->pc = 0x433EF8u;
label_433ef8:
    // 0x433ef8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x433ef8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_433efc:
    // 0x433efc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x433efcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_433f00:
    // 0x433f00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x433f00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_433f04:
    // 0x433f04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_433f08:
    // 0x433f08: 0x3e00008  jr          $ra
label_433f0c:
    if (ctx->pc == 0x433F0Cu) {
        ctx->pc = 0x433F0Cu;
            // 0x433f0c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x433F10u;
        goto label_433f10;
    }
    ctx->pc = 0x433F08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433F08u;
            // 0x433f0c: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433F10u;
label_433f10:
    // 0x433f10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433f14:
    // 0x433f14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_433f18:
    // 0x433f18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433f1c:
    // 0x433f1c: 0xc0e3580  jal         func_38D600
label_433f20:
    if (ctx->pc == 0x433F20u) {
        ctx->pc = 0x433F20u;
            // 0x433f20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x433F24u;
        goto label_433f24;
    }
    ctx->pc = 0x433F1Cu;
    SET_GPR_U32(ctx, 31, 0x433F24u);
    ctx->pc = 0x433F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433F1Cu;
            // 0x433f20: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38D600u;
    if (runtime->hasFunction(0x38D600u)) {
        auto targetFn = runtime->lookupFunction(0x38D600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433F24u; }
        if (ctx->pc != 0x433F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038D600_0x38d600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433F24u; }
        if (ctx->pc != 0x433F24u) { return; }
    }
    ctx->pc = 0x433F24u;
label_433f24:
    // 0x433f24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x433f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_433f28:
    // 0x433f28: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x433f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_433f2c:
    // 0x433f2c: 0xae03008c  sw          $v1, 0x8C($s0)
    ctx->pc = 0x433f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
label_433f30:
    // 0x433f30: 0x2405f9ff  addiu       $a1, $zero, -0x601
    ctx->pc = 0x433f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965759));
label_433f34:
    // 0x433f34: 0xae040070  sw          $a0, 0x70($s0)
    ctx->pc = 0x433f34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 4));
label_433f38:
    // 0x433f38: 0x3c034416  lui         $v1, 0x4416
    ctx->pc = 0x433f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17430 << 16));
label_433f3c:
    // 0x433f3c: 0xae030078  sw          $v1, 0x78($s0)
    ctx->pc = 0x433f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 3));
label_433f40:
    // 0x433f40: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x433f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_433f44:
    // 0x433f44: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x433f44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
label_433f48:
    // 0x433f48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x433f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_433f4c:
    // 0x433f4c: 0x8e0600b0  lw          $a2, 0xB0($s0)
    ctx->pc = 0x433f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_433f50:
    // 0x433f50: 0xc52824  and         $a1, $a2, $a1
    ctx->pc = 0x433f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_433f54:
    // 0x433f54: 0x34a50600  ori         $a1, $a1, 0x600
    ctx->pc = 0x433f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1536);
label_433f58:
    // 0x433f58: 0xae0500b0  sw          $a1, 0xB0($s0)
    ctx->pc = 0x433f58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 5));
label_433f5c:
    // 0x433f5c: 0xa2040064  sb          $a0, 0x64($s0)
    ctx->pc = 0x433f5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 4));
label_433f60:
    // 0x433f60: 0xa2030065  sb          $v1, 0x65($s0)
    ctx->pc = 0x433f60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 3));
label_433f64:
    // 0x433f64: 0xa2030066  sb          $v1, 0x66($s0)
    ctx->pc = 0x433f64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 3));
label_433f68:
    // 0x433f68: 0xa2030067  sb          $v1, 0x67($s0)
    ctx->pc = 0x433f68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 3));
label_433f6c:
    // 0x433f6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x433f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_433f70:
    // 0x433f70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x433f70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_433f74:
    // 0x433f74: 0x3e00008  jr          $ra
label_433f78:
    if (ctx->pc == 0x433F78u) {
        ctx->pc = 0x433F78u;
            // 0x433f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x433F7Cu;
        goto label_433f7c;
    }
    ctx->pc = 0x433F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433F74u;
            // 0x433f78: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433F7Cu;
label_433f7c:
    // 0x433f7c: 0x0  nop
    ctx->pc = 0x433f7cu;
    // NOP
label_433f80:
    // 0x433f80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433f84:
    // 0x433f84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x433f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_433f88:
    // 0x433f88: 0xc4ac0000  lwc1        $f12, 0x0($a1)
    ctx->pc = 0x433f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_433f8c:
    // 0x433f8c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x433f8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_433f90:
    // 0x433f90: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x433f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_433f94:
    // 0x433f94: 0xc04cbd8  jal         func_132F60
label_433f98:
    if (ctx->pc == 0x433F98u) {
        ctx->pc = 0x433F98u;
            // 0x433f98: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x433F9Cu;
        goto label_433f9c;
    }
    ctx->pc = 0x433F94u;
    SET_GPR_U32(ctx, 31, 0x433F9Cu);
    ctx->pc = 0x433F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433F94u;
            // 0x433f98: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433F9Cu; }
        if (ctx->pc != 0x433F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433F9Cu; }
        if (ctx->pc != 0x433F9Cu) { return; }
    }
    ctx->pc = 0x433F9Cu;
label_433f9c:
    // 0x433f9c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x433f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
label_433fa0:
    // 0x433fa0: 0xc073234  jal         func_1CC8D0
label_433fa4:
    if (ctx->pc == 0x433FA4u) {
        ctx->pc = 0x433FA4u;
            // 0x433fa4: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->pc = 0x433FA8u;
        goto label_433fa8;
    }
    ctx->pc = 0x433FA0u;
    SET_GPR_U32(ctx, 31, 0x433FA8u);
    ctx->pc = 0x433FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433FA0u;
            // 0x433fa4: 0x344418a9  ori         $a0, $v0, 0x18A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6313);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433FA8u; }
        if (ctx->pc != 0x433FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433FA8u; }
        if (ctx->pc != 0x433FA8u) { return; }
    }
    ctx->pc = 0x433FA8u;
label_433fa8:
    // 0x433fa8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x433fa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_433fac:
    // 0x433fac: 0x3e00008  jr          $ra
label_433fb0:
    if (ctx->pc == 0x433FB0u) {
        ctx->pc = 0x433FB0u;
            // 0x433fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x433FB4u;
        goto label_433fb4;
    }
    ctx->pc = 0x433FACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x433FACu;
            // 0x433fb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433FB4u;
label_433fb4:
    // 0x433fb4: 0x0  nop
    ctx->pc = 0x433fb4u;
    // NOP
label_433fb8:
    // 0x433fb8: 0x0  nop
    ctx->pc = 0x433fb8u;
    // NOP
label_433fbc:
    // 0x433fbc: 0x0  nop
    ctx->pc = 0x433fbcu;
    // NOP
label_433fc0:
    // 0x433fc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x433fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_433fc4:
    // 0x433fc4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x433fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_433fc8:
    // 0x433fc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x433fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_433fcc:
    // 0x433fcc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x433fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_433fd0:
    // 0x433fd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x433fd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_433fd4:
    // 0x433fd4: 0xc0baaa0  jal         func_2EAA80
label_433fd8:
    if (ctx->pc == 0x433FD8u) {
        ctx->pc = 0x433FD8u;
            // 0x433fd8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x433FDCu;
        goto label_433fdc;
    }
    ctx->pc = 0x433FD4u;
    SET_GPR_U32(ctx, 31, 0x433FDCu);
    ctx->pc = 0x433FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433FD4u;
            // 0x433fd8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EAA80u;
    if (runtime->hasFunction(0x2EAA80u)) {
        auto targetFn = runtime->lookupFunction(0x2EAA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433FDCu; }
        if (ctx->pc != 0x433FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EAA80_0x2eaa80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x433FDCu; }
        if (ctx->pc != 0x433FDCu) { return; }
    }
    ctx->pc = 0x433FDCu;
label_433fdc:
    // 0x433fdc: 0x8e0201a0  lw          $v0, 0x1A0($s0)
    ctx->pc = 0x433fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_433fe0:
    // 0x433fe0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_433fe4:
    if (ctx->pc == 0x433FE4u) {
        ctx->pc = 0x433FE4u;
            // 0x433fe4: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->pc = 0x433FE8u;
        goto label_433fe8;
    }
    ctx->pc = 0x433FE0u;
    {
        const bool branch_taken_0x433fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x433fe0) {
            ctx->pc = 0x433FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x433FE0u;
            // 0x433fe4: 0x8e0400d0  lw          $a0, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x434008u;
            goto label_434008;
        }
    }
    ctx->pc = 0x433FE8u;
label_433fe8:
    // 0x433fe8: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x433fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
label_433fec:
    // 0x433fec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x433fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_433ff0:
    // 0x433ff0: 0x8e0501a0  lw          $a1, 0x1A0($s0)
    ctx->pc = 0x433ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
label_433ff4:
    // 0x433ff4: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x433ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_433ff8:
    // 0x433ff8: 0xc057b7c  jal         func_15EDF0
label_433ffc:
    if (ctx->pc == 0x433FFCu) {
        ctx->pc = 0x433FFCu;
            // 0x433ffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x434000u;
        goto label_434000;
    }
    ctx->pc = 0x433FF8u;
    SET_GPR_U32(ctx, 31, 0x434000u);
    ctx->pc = 0x433FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x433FF8u;
            // 0x433ffc: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434000u; }
        if (ctx->pc != 0x434000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434000u; }
        if (ctx->pc != 0x434000u) { return; }
    }
    ctx->pc = 0x434000u;
label_434000:
    // 0x434000: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x434000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
label_434004:
    // 0x434004: 0x8e0400d0  lw          $a0, 0xD0($s0)
    ctx->pc = 0x434004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_434008:
    // 0x434008: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x434008u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_43400c:
    // 0x43400c: 0xc122d2c  jal         func_48B4B0
label_434010:
    if (ctx->pc == 0x434010u) {
        ctx->pc = 0x434010u;
            // 0x434010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x434014u;
        goto label_434014;
    }
    ctx->pc = 0x43400Cu;
    SET_GPR_U32(ctx, 31, 0x434014u);
    ctx->pc = 0x434010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x43400Cu;
            // 0x434010: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B4B0u;
    if (runtime->hasFunction(0x48B4B0u)) {
        auto targetFn = runtime->lookupFunction(0x48B4B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434014u; }
        if (ctx->pc != 0x434014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B4B0_0x48b4b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x434014u; }
        if (ctx->pc != 0x434014u) { return; }
    }
    ctx->pc = 0x434014u;
label_434014:
    // 0x434014: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x434014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_434018:
    // 0x434018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x434018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_43401c:
    // 0x43401c: 0x3e00008  jr          $ra
label_434020:
    if (ctx->pc == 0x434020u) {
        ctx->pc = 0x434020u;
            // 0x434020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x434024u;
        goto label_434024;
    }
    ctx->pc = 0x43401Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x434020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43401Cu;
            // 0x434020: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x434024u;
label_434024:
    // 0x434024: 0x0  nop
    ctx->pc = 0x434024u;
    // NOP
label_434028:
    // 0x434028: 0x0  nop
    ctx->pc = 0x434028u;
    // NOP
label_43402c:
    // 0x43402c: 0x0  nop
    ctx->pc = 0x43402cu;
    // NOP
}
