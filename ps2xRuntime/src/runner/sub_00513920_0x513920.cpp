#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00513920
// Address: 0x513920 - 0x5160b0
void sub_00513920_0x513920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00513920_0x513920");
#endif

    switch (ctx->pc) {
        case 0x513920u: goto label_513920;
        case 0x513924u: goto label_513924;
        case 0x513928u: goto label_513928;
        case 0x51392cu: goto label_51392c;
        case 0x513930u: goto label_513930;
        case 0x513934u: goto label_513934;
        case 0x513938u: goto label_513938;
        case 0x51393cu: goto label_51393c;
        case 0x513940u: goto label_513940;
        case 0x513944u: goto label_513944;
        case 0x513948u: goto label_513948;
        case 0x51394cu: goto label_51394c;
        case 0x513950u: goto label_513950;
        case 0x513954u: goto label_513954;
        case 0x513958u: goto label_513958;
        case 0x51395cu: goto label_51395c;
        case 0x513960u: goto label_513960;
        case 0x513964u: goto label_513964;
        case 0x513968u: goto label_513968;
        case 0x51396cu: goto label_51396c;
        case 0x513970u: goto label_513970;
        case 0x513974u: goto label_513974;
        case 0x513978u: goto label_513978;
        case 0x51397cu: goto label_51397c;
        case 0x513980u: goto label_513980;
        case 0x513984u: goto label_513984;
        case 0x513988u: goto label_513988;
        case 0x51398cu: goto label_51398c;
        case 0x513990u: goto label_513990;
        case 0x513994u: goto label_513994;
        case 0x513998u: goto label_513998;
        case 0x51399cu: goto label_51399c;
        case 0x5139a0u: goto label_5139a0;
        case 0x5139a4u: goto label_5139a4;
        case 0x5139a8u: goto label_5139a8;
        case 0x5139acu: goto label_5139ac;
        case 0x5139b0u: goto label_5139b0;
        case 0x5139b4u: goto label_5139b4;
        case 0x5139b8u: goto label_5139b8;
        case 0x5139bcu: goto label_5139bc;
        case 0x5139c0u: goto label_5139c0;
        case 0x5139c4u: goto label_5139c4;
        case 0x5139c8u: goto label_5139c8;
        case 0x5139ccu: goto label_5139cc;
        case 0x5139d0u: goto label_5139d0;
        case 0x5139d4u: goto label_5139d4;
        case 0x5139d8u: goto label_5139d8;
        case 0x5139dcu: goto label_5139dc;
        case 0x5139e0u: goto label_5139e0;
        case 0x5139e4u: goto label_5139e4;
        case 0x5139e8u: goto label_5139e8;
        case 0x5139ecu: goto label_5139ec;
        case 0x5139f0u: goto label_5139f0;
        case 0x5139f4u: goto label_5139f4;
        case 0x5139f8u: goto label_5139f8;
        case 0x5139fcu: goto label_5139fc;
        case 0x513a00u: goto label_513a00;
        case 0x513a04u: goto label_513a04;
        case 0x513a08u: goto label_513a08;
        case 0x513a0cu: goto label_513a0c;
        case 0x513a10u: goto label_513a10;
        case 0x513a14u: goto label_513a14;
        case 0x513a18u: goto label_513a18;
        case 0x513a1cu: goto label_513a1c;
        case 0x513a20u: goto label_513a20;
        case 0x513a24u: goto label_513a24;
        case 0x513a28u: goto label_513a28;
        case 0x513a2cu: goto label_513a2c;
        case 0x513a30u: goto label_513a30;
        case 0x513a34u: goto label_513a34;
        case 0x513a38u: goto label_513a38;
        case 0x513a3cu: goto label_513a3c;
        case 0x513a40u: goto label_513a40;
        case 0x513a44u: goto label_513a44;
        case 0x513a48u: goto label_513a48;
        case 0x513a4cu: goto label_513a4c;
        case 0x513a50u: goto label_513a50;
        case 0x513a54u: goto label_513a54;
        case 0x513a58u: goto label_513a58;
        case 0x513a5cu: goto label_513a5c;
        case 0x513a60u: goto label_513a60;
        case 0x513a64u: goto label_513a64;
        case 0x513a68u: goto label_513a68;
        case 0x513a6cu: goto label_513a6c;
        case 0x513a70u: goto label_513a70;
        case 0x513a74u: goto label_513a74;
        case 0x513a78u: goto label_513a78;
        case 0x513a7cu: goto label_513a7c;
        case 0x513a80u: goto label_513a80;
        case 0x513a84u: goto label_513a84;
        case 0x513a88u: goto label_513a88;
        case 0x513a8cu: goto label_513a8c;
        case 0x513a90u: goto label_513a90;
        case 0x513a94u: goto label_513a94;
        case 0x513a98u: goto label_513a98;
        case 0x513a9cu: goto label_513a9c;
        case 0x513aa0u: goto label_513aa0;
        case 0x513aa4u: goto label_513aa4;
        case 0x513aa8u: goto label_513aa8;
        case 0x513aacu: goto label_513aac;
        case 0x513ab0u: goto label_513ab0;
        case 0x513ab4u: goto label_513ab4;
        case 0x513ab8u: goto label_513ab8;
        case 0x513abcu: goto label_513abc;
        case 0x513ac0u: goto label_513ac0;
        case 0x513ac4u: goto label_513ac4;
        case 0x513ac8u: goto label_513ac8;
        case 0x513accu: goto label_513acc;
        case 0x513ad0u: goto label_513ad0;
        case 0x513ad4u: goto label_513ad4;
        case 0x513ad8u: goto label_513ad8;
        case 0x513adcu: goto label_513adc;
        case 0x513ae0u: goto label_513ae0;
        case 0x513ae4u: goto label_513ae4;
        case 0x513ae8u: goto label_513ae8;
        case 0x513aecu: goto label_513aec;
        case 0x513af0u: goto label_513af0;
        case 0x513af4u: goto label_513af4;
        case 0x513af8u: goto label_513af8;
        case 0x513afcu: goto label_513afc;
        case 0x513b00u: goto label_513b00;
        case 0x513b04u: goto label_513b04;
        case 0x513b08u: goto label_513b08;
        case 0x513b0cu: goto label_513b0c;
        case 0x513b10u: goto label_513b10;
        case 0x513b14u: goto label_513b14;
        case 0x513b18u: goto label_513b18;
        case 0x513b1cu: goto label_513b1c;
        case 0x513b20u: goto label_513b20;
        case 0x513b24u: goto label_513b24;
        case 0x513b28u: goto label_513b28;
        case 0x513b2cu: goto label_513b2c;
        case 0x513b30u: goto label_513b30;
        case 0x513b34u: goto label_513b34;
        case 0x513b38u: goto label_513b38;
        case 0x513b3cu: goto label_513b3c;
        case 0x513b40u: goto label_513b40;
        case 0x513b44u: goto label_513b44;
        case 0x513b48u: goto label_513b48;
        case 0x513b4cu: goto label_513b4c;
        case 0x513b50u: goto label_513b50;
        case 0x513b54u: goto label_513b54;
        case 0x513b58u: goto label_513b58;
        case 0x513b5cu: goto label_513b5c;
        case 0x513b60u: goto label_513b60;
        case 0x513b64u: goto label_513b64;
        case 0x513b68u: goto label_513b68;
        case 0x513b6cu: goto label_513b6c;
        case 0x513b70u: goto label_513b70;
        case 0x513b74u: goto label_513b74;
        case 0x513b78u: goto label_513b78;
        case 0x513b7cu: goto label_513b7c;
        case 0x513b80u: goto label_513b80;
        case 0x513b84u: goto label_513b84;
        case 0x513b88u: goto label_513b88;
        case 0x513b8cu: goto label_513b8c;
        case 0x513b90u: goto label_513b90;
        case 0x513b94u: goto label_513b94;
        case 0x513b98u: goto label_513b98;
        case 0x513b9cu: goto label_513b9c;
        case 0x513ba0u: goto label_513ba0;
        case 0x513ba4u: goto label_513ba4;
        case 0x513ba8u: goto label_513ba8;
        case 0x513bacu: goto label_513bac;
        case 0x513bb0u: goto label_513bb0;
        case 0x513bb4u: goto label_513bb4;
        case 0x513bb8u: goto label_513bb8;
        case 0x513bbcu: goto label_513bbc;
        case 0x513bc0u: goto label_513bc0;
        case 0x513bc4u: goto label_513bc4;
        case 0x513bc8u: goto label_513bc8;
        case 0x513bccu: goto label_513bcc;
        case 0x513bd0u: goto label_513bd0;
        case 0x513bd4u: goto label_513bd4;
        case 0x513bd8u: goto label_513bd8;
        case 0x513bdcu: goto label_513bdc;
        case 0x513be0u: goto label_513be0;
        case 0x513be4u: goto label_513be4;
        case 0x513be8u: goto label_513be8;
        case 0x513becu: goto label_513bec;
        case 0x513bf0u: goto label_513bf0;
        case 0x513bf4u: goto label_513bf4;
        case 0x513bf8u: goto label_513bf8;
        case 0x513bfcu: goto label_513bfc;
        case 0x513c00u: goto label_513c00;
        case 0x513c04u: goto label_513c04;
        case 0x513c08u: goto label_513c08;
        case 0x513c0cu: goto label_513c0c;
        case 0x513c10u: goto label_513c10;
        case 0x513c14u: goto label_513c14;
        case 0x513c18u: goto label_513c18;
        case 0x513c1cu: goto label_513c1c;
        case 0x513c20u: goto label_513c20;
        case 0x513c24u: goto label_513c24;
        case 0x513c28u: goto label_513c28;
        case 0x513c2cu: goto label_513c2c;
        case 0x513c30u: goto label_513c30;
        case 0x513c34u: goto label_513c34;
        case 0x513c38u: goto label_513c38;
        case 0x513c3cu: goto label_513c3c;
        case 0x513c40u: goto label_513c40;
        case 0x513c44u: goto label_513c44;
        case 0x513c48u: goto label_513c48;
        case 0x513c4cu: goto label_513c4c;
        case 0x513c50u: goto label_513c50;
        case 0x513c54u: goto label_513c54;
        case 0x513c58u: goto label_513c58;
        case 0x513c5cu: goto label_513c5c;
        case 0x513c60u: goto label_513c60;
        case 0x513c64u: goto label_513c64;
        case 0x513c68u: goto label_513c68;
        case 0x513c6cu: goto label_513c6c;
        case 0x513c70u: goto label_513c70;
        case 0x513c74u: goto label_513c74;
        case 0x513c78u: goto label_513c78;
        case 0x513c7cu: goto label_513c7c;
        case 0x513c80u: goto label_513c80;
        case 0x513c84u: goto label_513c84;
        case 0x513c88u: goto label_513c88;
        case 0x513c8cu: goto label_513c8c;
        case 0x513c90u: goto label_513c90;
        case 0x513c94u: goto label_513c94;
        case 0x513c98u: goto label_513c98;
        case 0x513c9cu: goto label_513c9c;
        case 0x513ca0u: goto label_513ca0;
        case 0x513ca4u: goto label_513ca4;
        case 0x513ca8u: goto label_513ca8;
        case 0x513cacu: goto label_513cac;
        case 0x513cb0u: goto label_513cb0;
        case 0x513cb4u: goto label_513cb4;
        case 0x513cb8u: goto label_513cb8;
        case 0x513cbcu: goto label_513cbc;
        case 0x513cc0u: goto label_513cc0;
        case 0x513cc4u: goto label_513cc4;
        case 0x513cc8u: goto label_513cc8;
        case 0x513cccu: goto label_513ccc;
        case 0x513cd0u: goto label_513cd0;
        case 0x513cd4u: goto label_513cd4;
        case 0x513cd8u: goto label_513cd8;
        case 0x513cdcu: goto label_513cdc;
        case 0x513ce0u: goto label_513ce0;
        case 0x513ce4u: goto label_513ce4;
        case 0x513ce8u: goto label_513ce8;
        case 0x513cecu: goto label_513cec;
        case 0x513cf0u: goto label_513cf0;
        case 0x513cf4u: goto label_513cf4;
        case 0x513cf8u: goto label_513cf8;
        case 0x513cfcu: goto label_513cfc;
        case 0x513d00u: goto label_513d00;
        case 0x513d04u: goto label_513d04;
        case 0x513d08u: goto label_513d08;
        case 0x513d0cu: goto label_513d0c;
        case 0x513d10u: goto label_513d10;
        case 0x513d14u: goto label_513d14;
        case 0x513d18u: goto label_513d18;
        case 0x513d1cu: goto label_513d1c;
        case 0x513d20u: goto label_513d20;
        case 0x513d24u: goto label_513d24;
        case 0x513d28u: goto label_513d28;
        case 0x513d2cu: goto label_513d2c;
        case 0x513d30u: goto label_513d30;
        case 0x513d34u: goto label_513d34;
        case 0x513d38u: goto label_513d38;
        case 0x513d3cu: goto label_513d3c;
        case 0x513d40u: goto label_513d40;
        case 0x513d44u: goto label_513d44;
        case 0x513d48u: goto label_513d48;
        case 0x513d4cu: goto label_513d4c;
        case 0x513d50u: goto label_513d50;
        case 0x513d54u: goto label_513d54;
        case 0x513d58u: goto label_513d58;
        case 0x513d5cu: goto label_513d5c;
        case 0x513d60u: goto label_513d60;
        case 0x513d64u: goto label_513d64;
        case 0x513d68u: goto label_513d68;
        case 0x513d6cu: goto label_513d6c;
        case 0x513d70u: goto label_513d70;
        case 0x513d74u: goto label_513d74;
        case 0x513d78u: goto label_513d78;
        case 0x513d7cu: goto label_513d7c;
        case 0x513d80u: goto label_513d80;
        case 0x513d84u: goto label_513d84;
        case 0x513d88u: goto label_513d88;
        case 0x513d8cu: goto label_513d8c;
        case 0x513d90u: goto label_513d90;
        case 0x513d94u: goto label_513d94;
        case 0x513d98u: goto label_513d98;
        case 0x513d9cu: goto label_513d9c;
        case 0x513da0u: goto label_513da0;
        case 0x513da4u: goto label_513da4;
        case 0x513da8u: goto label_513da8;
        case 0x513dacu: goto label_513dac;
        case 0x513db0u: goto label_513db0;
        case 0x513db4u: goto label_513db4;
        case 0x513db8u: goto label_513db8;
        case 0x513dbcu: goto label_513dbc;
        case 0x513dc0u: goto label_513dc0;
        case 0x513dc4u: goto label_513dc4;
        case 0x513dc8u: goto label_513dc8;
        case 0x513dccu: goto label_513dcc;
        case 0x513dd0u: goto label_513dd0;
        case 0x513dd4u: goto label_513dd4;
        case 0x513dd8u: goto label_513dd8;
        case 0x513ddcu: goto label_513ddc;
        case 0x513de0u: goto label_513de0;
        case 0x513de4u: goto label_513de4;
        case 0x513de8u: goto label_513de8;
        case 0x513decu: goto label_513dec;
        case 0x513df0u: goto label_513df0;
        case 0x513df4u: goto label_513df4;
        case 0x513df8u: goto label_513df8;
        case 0x513dfcu: goto label_513dfc;
        case 0x513e00u: goto label_513e00;
        case 0x513e04u: goto label_513e04;
        case 0x513e08u: goto label_513e08;
        case 0x513e0cu: goto label_513e0c;
        case 0x513e10u: goto label_513e10;
        case 0x513e14u: goto label_513e14;
        case 0x513e18u: goto label_513e18;
        case 0x513e1cu: goto label_513e1c;
        case 0x513e20u: goto label_513e20;
        case 0x513e24u: goto label_513e24;
        case 0x513e28u: goto label_513e28;
        case 0x513e2cu: goto label_513e2c;
        case 0x513e30u: goto label_513e30;
        case 0x513e34u: goto label_513e34;
        case 0x513e38u: goto label_513e38;
        case 0x513e3cu: goto label_513e3c;
        case 0x513e40u: goto label_513e40;
        case 0x513e44u: goto label_513e44;
        case 0x513e48u: goto label_513e48;
        case 0x513e4cu: goto label_513e4c;
        case 0x513e50u: goto label_513e50;
        case 0x513e54u: goto label_513e54;
        case 0x513e58u: goto label_513e58;
        case 0x513e5cu: goto label_513e5c;
        case 0x513e60u: goto label_513e60;
        case 0x513e64u: goto label_513e64;
        case 0x513e68u: goto label_513e68;
        case 0x513e6cu: goto label_513e6c;
        case 0x513e70u: goto label_513e70;
        case 0x513e74u: goto label_513e74;
        case 0x513e78u: goto label_513e78;
        case 0x513e7cu: goto label_513e7c;
        case 0x513e80u: goto label_513e80;
        case 0x513e84u: goto label_513e84;
        case 0x513e88u: goto label_513e88;
        case 0x513e8cu: goto label_513e8c;
        case 0x513e90u: goto label_513e90;
        case 0x513e94u: goto label_513e94;
        case 0x513e98u: goto label_513e98;
        case 0x513e9cu: goto label_513e9c;
        case 0x513ea0u: goto label_513ea0;
        case 0x513ea4u: goto label_513ea4;
        case 0x513ea8u: goto label_513ea8;
        case 0x513eacu: goto label_513eac;
        case 0x513eb0u: goto label_513eb0;
        case 0x513eb4u: goto label_513eb4;
        case 0x513eb8u: goto label_513eb8;
        case 0x513ebcu: goto label_513ebc;
        case 0x513ec0u: goto label_513ec0;
        case 0x513ec4u: goto label_513ec4;
        case 0x513ec8u: goto label_513ec8;
        case 0x513eccu: goto label_513ecc;
        case 0x513ed0u: goto label_513ed0;
        case 0x513ed4u: goto label_513ed4;
        case 0x513ed8u: goto label_513ed8;
        case 0x513edcu: goto label_513edc;
        case 0x513ee0u: goto label_513ee0;
        case 0x513ee4u: goto label_513ee4;
        case 0x513ee8u: goto label_513ee8;
        case 0x513eecu: goto label_513eec;
        case 0x513ef0u: goto label_513ef0;
        case 0x513ef4u: goto label_513ef4;
        case 0x513ef8u: goto label_513ef8;
        case 0x513efcu: goto label_513efc;
        case 0x513f00u: goto label_513f00;
        case 0x513f04u: goto label_513f04;
        case 0x513f08u: goto label_513f08;
        case 0x513f0cu: goto label_513f0c;
        case 0x513f10u: goto label_513f10;
        case 0x513f14u: goto label_513f14;
        case 0x513f18u: goto label_513f18;
        case 0x513f1cu: goto label_513f1c;
        case 0x513f20u: goto label_513f20;
        case 0x513f24u: goto label_513f24;
        case 0x513f28u: goto label_513f28;
        case 0x513f2cu: goto label_513f2c;
        case 0x513f30u: goto label_513f30;
        case 0x513f34u: goto label_513f34;
        case 0x513f38u: goto label_513f38;
        case 0x513f3cu: goto label_513f3c;
        case 0x513f40u: goto label_513f40;
        case 0x513f44u: goto label_513f44;
        case 0x513f48u: goto label_513f48;
        case 0x513f4cu: goto label_513f4c;
        case 0x513f50u: goto label_513f50;
        case 0x513f54u: goto label_513f54;
        case 0x513f58u: goto label_513f58;
        case 0x513f5cu: goto label_513f5c;
        case 0x513f60u: goto label_513f60;
        case 0x513f64u: goto label_513f64;
        case 0x513f68u: goto label_513f68;
        case 0x513f6cu: goto label_513f6c;
        case 0x513f70u: goto label_513f70;
        case 0x513f74u: goto label_513f74;
        case 0x513f78u: goto label_513f78;
        case 0x513f7cu: goto label_513f7c;
        case 0x513f80u: goto label_513f80;
        case 0x513f84u: goto label_513f84;
        case 0x513f88u: goto label_513f88;
        case 0x513f8cu: goto label_513f8c;
        case 0x513f90u: goto label_513f90;
        case 0x513f94u: goto label_513f94;
        case 0x513f98u: goto label_513f98;
        case 0x513f9cu: goto label_513f9c;
        case 0x513fa0u: goto label_513fa0;
        case 0x513fa4u: goto label_513fa4;
        case 0x513fa8u: goto label_513fa8;
        case 0x513facu: goto label_513fac;
        case 0x513fb0u: goto label_513fb0;
        case 0x513fb4u: goto label_513fb4;
        case 0x513fb8u: goto label_513fb8;
        case 0x513fbcu: goto label_513fbc;
        case 0x513fc0u: goto label_513fc0;
        case 0x513fc4u: goto label_513fc4;
        case 0x513fc8u: goto label_513fc8;
        case 0x513fccu: goto label_513fcc;
        case 0x513fd0u: goto label_513fd0;
        case 0x513fd4u: goto label_513fd4;
        case 0x513fd8u: goto label_513fd8;
        case 0x513fdcu: goto label_513fdc;
        case 0x513fe0u: goto label_513fe0;
        case 0x513fe4u: goto label_513fe4;
        case 0x513fe8u: goto label_513fe8;
        case 0x513fecu: goto label_513fec;
        case 0x513ff0u: goto label_513ff0;
        case 0x513ff4u: goto label_513ff4;
        case 0x513ff8u: goto label_513ff8;
        case 0x513ffcu: goto label_513ffc;
        case 0x514000u: goto label_514000;
        case 0x514004u: goto label_514004;
        case 0x514008u: goto label_514008;
        case 0x51400cu: goto label_51400c;
        case 0x514010u: goto label_514010;
        case 0x514014u: goto label_514014;
        case 0x514018u: goto label_514018;
        case 0x51401cu: goto label_51401c;
        case 0x514020u: goto label_514020;
        case 0x514024u: goto label_514024;
        case 0x514028u: goto label_514028;
        case 0x51402cu: goto label_51402c;
        case 0x514030u: goto label_514030;
        case 0x514034u: goto label_514034;
        case 0x514038u: goto label_514038;
        case 0x51403cu: goto label_51403c;
        case 0x514040u: goto label_514040;
        case 0x514044u: goto label_514044;
        case 0x514048u: goto label_514048;
        case 0x51404cu: goto label_51404c;
        case 0x514050u: goto label_514050;
        case 0x514054u: goto label_514054;
        case 0x514058u: goto label_514058;
        case 0x51405cu: goto label_51405c;
        case 0x514060u: goto label_514060;
        case 0x514064u: goto label_514064;
        case 0x514068u: goto label_514068;
        case 0x51406cu: goto label_51406c;
        case 0x514070u: goto label_514070;
        case 0x514074u: goto label_514074;
        case 0x514078u: goto label_514078;
        case 0x51407cu: goto label_51407c;
        case 0x514080u: goto label_514080;
        case 0x514084u: goto label_514084;
        case 0x514088u: goto label_514088;
        case 0x51408cu: goto label_51408c;
        case 0x514090u: goto label_514090;
        case 0x514094u: goto label_514094;
        case 0x514098u: goto label_514098;
        case 0x51409cu: goto label_51409c;
        case 0x5140a0u: goto label_5140a0;
        case 0x5140a4u: goto label_5140a4;
        case 0x5140a8u: goto label_5140a8;
        case 0x5140acu: goto label_5140ac;
        case 0x5140b0u: goto label_5140b0;
        case 0x5140b4u: goto label_5140b4;
        case 0x5140b8u: goto label_5140b8;
        case 0x5140bcu: goto label_5140bc;
        case 0x5140c0u: goto label_5140c0;
        case 0x5140c4u: goto label_5140c4;
        case 0x5140c8u: goto label_5140c8;
        case 0x5140ccu: goto label_5140cc;
        case 0x5140d0u: goto label_5140d0;
        case 0x5140d4u: goto label_5140d4;
        case 0x5140d8u: goto label_5140d8;
        case 0x5140dcu: goto label_5140dc;
        case 0x5140e0u: goto label_5140e0;
        case 0x5140e4u: goto label_5140e4;
        case 0x5140e8u: goto label_5140e8;
        case 0x5140ecu: goto label_5140ec;
        case 0x5140f0u: goto label_5140f0;
        case 0x5140f4u: goto label_5140f4;
        case 0x5140f8u: goto label_5140f8;
        case 0x5140fcu: goto label_5140fc;
        case 0x514100u: goto label_514100;
        case 0x514104u: goto label_514104;
        case 0x514108u: goto label_514108;
        case 0x51410cu: goto label_51410c;
        case 0x514110u: goto label_514110;
        case 0x514114u: goto label_514114;
        case 0x514118u: goto label_514118;
        case 0x51411cu: goto label_51411c;
        case 0x514120u: goto label_514120;
        case 0x514124u: goto label_514124;
        case 0x514128u: goto label_514128;
        case 0x51412cu: goto label_51412c;
        case 0x514130u: goto label_514130;
        case 0x514134u: goto label_514134;
        case 0x514138u: goto label_514138;
        case 0x51413cu: goto label_51413c;
        case 0x514140u: goto label_514140;
        case 0x514144u: goto label_514144;
        case 0x514148u: goto label_514148;
        case 0x51414cu: goto label_51414c;
        case 0x514150u: goto label_514150;
        case 0x514154u: goto label_514154;
        case 0x514158u: goto label_514158;
        case 0x51415cu: goto label_51415c;
        case 0x514160u: goto label_514160;
        case 0x514164u: goto label_514164;
        case 0x514168u: goto label_514168;
        case 0x51416cu: goto label_51416c;
        case 0x514170u: goto label_514170;
        case 0x514174u: goto label_514174;
        case 0x514178u: goto label_514178;
        case 0x51417cu: goto label_51417c;
        case 0x514180u: goto label_514180;
        case 0x514184u: goto label_514184;
        case 0x514188u: goto label_514188;
        case 0x51418cu: goto label_51418c;
        case 0x514190u: goto label_514190;
        case 0x514194u: goto label_514194;
        case 0x514198u: goto label_514198;
        case 0x51419cu: goto label_51419c;
        case 0x5141a0u: goto label_5141a0;
        case 0x5141a4u: goto label_5141a4;
        case 0x5141a8u: goto label_5141a8;
        case 0x5141acu: goto label_5141ac;
        case 0x5141b0u: goto label_5141b0;
        case 0x5141b4u: goto label_5141b4;
        case 0x5141b8u: goto label_5141b8;
        case 0x5141bcu: goto label_5141bc;
        case 0x5141c0u: goto label_5141c0;
        case 0x5141c4u: goto label_5141c4;
        case 0x5141c8u: goto label_5141c8;
        case 0x5141ccu: goto label_5141cc;
        case 0x5141d0u: goto label_5141d0;
        case 0x5141d4u: goto label_5141d4;
        case 0x5141d8u: goto label_5141d8;
        case 0x5141dcu: goto label_5141dc;
        case 0x5141e0u: goto label_5141e0;
        case 0x5141e4u: goto label_5141e4;
        case 0x5141e8u: goto label_5141e8;
        case 0x5141ecu: goto label_5141ec;
        case 0x5141f0u: goto label_5141f0;
        case 0x5141f4u: goto label_5141f4;
        case 0x5141f8u: goto label_5141f8;
        case 0x5141fcu: goto label_5141fc;
        case 0x514200u: goto label_514200;
        case 0x514204u: goto label_514204;
        case 0x514208u: goto label_514208;
        case 0x51420cu: goto label_51420c;
        case 0x514210u: goto label_514210;
        case 0x514214u: goto label_514214;
        case 0x514218u: goto label_514218;
        case 0x51421cu: goto label_51421c;
        case 0x514220u: goto label_514220;
        case 0x514224u: goto label_514224;
        case 0x514228u: goto label_514228;
        case 0x51422cu: goto label_51422c;
        case 0x514230u: goto label_514230;
        case 0x514234u: goto label_514234;
        case 0x514238u: goto label_514238;
        case 0x51423cu: goto label_51423c;
        case 0x514240u: goto label_514240;
        case 0x514244u: goto label_514244;
        case 0x514248u: goto label_514248;
        case 0x51424cu: goto label_51424c;
        case 0x514250u: goto label_514250;
        case 0x514254u: goto label_514254;
        case 0x514258u: goto label_514258;
        case 0x51425cu: goto label_51425c;
        case 0x514260u: goto label_514260;
        case 0x514264u: goto label_514264;
        case 0x514268u: goto label_514268;
        case 0x51426cu: goto label_51426c;
        case 0x514270u: goto label_514270;
        case 0x514274u: goto label_514274;
        case 0x514278u: goto label_514278;
        case 0x51427cu: goto label_51427c;
        case 0x514280u: goto label_514280;
        case 0x514284u: goto label_514284;
        case 0x514288u: goto label_514288;
        case 0x51428cu: goto label_51428c;
        case 0x514290u: goto label_514290;
        case 0x514294u: goto label_514294;
        case 0x514298u: goto label_514298;
        case 0x51429cu: goto label_51429c;
        case 0x5142a0u: goto label_5142a0;
        case 0x5142a4u: goto label_5142a4;
        case 0x5142a8u: goto label_5142a8;
        case 0x5142acu: goto label_5142ac;
        case 0x5142b0u: goto label_5142b0;
        case 0x5142b4u: goto label_5142b4;
        case 0x5142b8u: goto label_5142b8;
        case 0x5142bcu: goto label_5142bc;
        case 0x5142c0u: goto label_5142c0;
        case 0x5142c4u: goto label_5142c4;
        case 0x5142c8u: goto label_5142c8;
        case 0x5142ccu: goto label_5142cc;
        case 0x5142d0u: goto label_5142d0;
        case 0x5142d4u: goto label_5142d4;
        case 0x5142d8u: goto label_5142d8;
        case 0x5142dcu: goto label_5142dc;
        case 0x5142e0u: goto label_5142e0;
        case 0x5142e4u: goto label_5142e4;
        case 0x5142e8u: goto label_5142e8;
        case 0x5142ecu: goto label_5142ec;
        case 0x5142f0u: goto label_5142f0;
        case 0x5142f4u: goto label_5142f4;
        case 0x5142f8u: goto label_5142f8;
        case 0x5142fcu: goto label_5142fc;
        case 0x514300u: goto label_514300;
        case 0x514304u: goto label_514304;
        case 0x514308u: goto label_514308;
        case 0x51430cu: goto label_51430c;
        case 0x514310u: goto label_514310;
        case 0x514314u: goto label_514314;
        case 0x514318u: goto label_514318;
        case 0x51431cu: goto label_51431c;
        case 0x514320u: goto label_514320;
        case 0x514324u: goto label_514324;
        case 0x514328u: goto label_514328;
        case 0x51432cu: goto label_51432c;
        case 0x514330u: goto label_514330;
        case 0x514334u: goto label_514334;
        case 0x514338u: goto label_514338;
        case 0x51433cu: goto label_51433c;
        case 0x514340u: goto label_514340;
        case 0x514344u: goto label_514344;
        case 0x514348u: goto label_514348;
        case 0x51434cu: goto label_51434c;
        case 0x514350u: goto label_514350;
        case 0x514354u: goto label_514354;
        case 0x514358u: goto label_514358;
        case 0x51435cu: goto label_51435c;
        case 0x514360u: goto label_514360;
        case 0x514364u: goto label_514364;
        case 0x514368u: goto label_514368;
        case 0x51436cu: goto label_51436c;
        case 0x514370u: goto label_514370;
        case 0x514374u: goto label_514374;
        case 0x514378u: goto label_514378;
        case 0x51437cu: goto label_51437c;
        case 0x514380u: goto label_514380;
        case 0x514384u: goto label_514384;
        case 0x514388u: goto label_514388;
        case 0x51438cu: goto label_51438c;
        case 0x514390u: goto label_514390;
        case 0x514394u: goto label_514394;
        case 0x514398u: goto label_514398;
        case 0x51439cu: goto label_51439c;
        case 0x5143a0u: goto label_5143a0;
        case 0x5143a4u: goto label_5143a4;
        case 0x5143a8u: goto label_5143a8;
        case 0x5143acu: goto label_5143ac;
        case 0x5143b0u: goto label_5143b0;
        case 0x5143b4u: goto label_5143b4;
        case 0x5143b8u: goto label_5143b8;
        case 0x5143bcu: goto label_5143bc;
        case 0x5143c0u: goto label_5143c0;
        case 0x5143c4u: goto label_5143c4;
        case 0x5143c8u: goto label_5143c8;
        case 0x5143ccu: goto label_5143cc;
        case 0x5143d0u: goto label_5143d0;
        case 0x5143d4u: goto label_5143d4;
        case 0x5143d8u: goto label_5143d8;
        case 0x5143dcu: goto label_5143dc;
        case 0x5143e0u: goto label_5143e0;
        case 0x5143e4u: goto label_5143e4;
        case 0x5143e8u: goto label_5143e8;
        case 0x5143ecu: goto label_5143ec;
        case 0x5143f0u: goto label_5143f0;
        case 0x5143f4u: goto label_5143f4;
        case 0x5143f8u: goto label_5143f8;
        case 0x5143fcu: goto label_5143fc;
        case 0x514400u: goto label_514400;
        case 0x514404u: goto label_514404;
        case 0x514408u: goto label_514408;
        case 0x51440cu: goto label_51440c;
        case 0x514410u: goto label_514410;
        case 0x514414u: goto label_514414;
        case 0x514418u: goto label_514418;
        case 0x51441cu: goto label_51441c;
        case 0x514420u: goto label_514420;
        case 0x514424u: goto label_514424;
        case 0x514428u: goto label_514428;
        case 0x51442cu: goto label_51442c;
        case 0x514430u: goto label_514430;
        case 0x514434u: goto label_514434;
        case 0x514438u: goto label_514438;
        case 0x51443cu: goto label_51443c;
        case 0x514440u: goto label_514440;
        case 0x514444u: goto label_514444;
        case 0x514448u: goto label_514448;
        case 0x51444cu: goto label_51444c;
        case 0x514450u: goto label_514450;
        case 0x514454u: goto label_514454;
        case 0x514458u: goto label_514458;
        case 0x51445cu: goto label_51445c;
        case 0x514460u: goto label_514460;
        case 0x514464u: goto label_514464;
        case 0x514468u: goto label_514468;
        case 0x51446cu: goto label_51446c;
        case 0x514470u: goto label_514470;
        case 0x514474u: goto label_514474;
        case 0x514478u: goto label_514478;
        case 0x51447cu: goto label_51447c;
        case 0x514480u: goto label_514480;
        case 0x514484u: goto label_514484;
        case 0x514488u: goto label_514488;
        case 0x51448cu: goto label_51448c;
        case 0x514490u: goto label_514490;
        case 0x514494u: goto label_514494;
        case 0x514498u: goto label_514498;
        case 0x51449cu: goto label_51449c;
        case 0x5144a0u: goto label_5144a0;
        case 0x5144a4u: goto label_5144a4;
        case 0x5144a8u: goto label_5144a8;
        case 0x5144acu: goto label_5144ac;
        case 0x5144b0u: goto label_5144b0;
        case 0x5144b4u: goto label_5144b4;
        case 0x5144b8u: goto label_5144b8;
        case 0x5144bcu: goto label_5144bc;
        case 0x5144c0u: goto label_5144c0;
        case 0x5144c4u: goto label_5144c4;
        case 0x5144c8u: goto label_5144c8;
        case 0x5144ccu: goto label_5144cc;
        case 0x5144d0u: goto label_5144d0;
        case 0x5144d4u: goto label_5144d4;
        case 0x5144d8u: goto label_5144d8;
        case 0x5144dcu: goto label_5144dc;
        case 0x5144e0u: goto label_5144e0;
        case 0x5144e4u: goto label_5144e4;
        case 0x5144e8u: goto label_5144e8;
        case 0x5144ecu: goto label_5144ec;
        case 0x5144f0u: goto label_5144f0;
        case 0x5144f4u: goto label_5144f4;
        case 0x5144f8u: goto label_5144f8;
        case 0x5144fcu: goto label_5144fc;
        case 0x514500u: goto label_514500;
        case 0x514504u: goto label_514504;
        case 0x514508u: goto label_514508;
        case 0x51450cu: goto label_51450c;
        case 0x514510u: goto label_514510;
        case 0x514514u: goto label_514514;
        case 0x514518u: goto label_514518;
        case 0x51451cu: goto label_51451c;
        case 0x514520u: goto label_514520;
        case 0x514524u: goto label_514524;
        case 0x514528u: goto label_514528;
        case 0x51452cu: goto label_51452c;
        case 0x514530u: goto label_514530;
        case 0x514534u: goto label_514534;
        case 0x514538u: goto label_514538;
        case 0x51453cu: goto label_51453c;
        case 0x514540u: goto label_514540;
        case 0x514544u: goto label_514544;
        case 0x514548u: goto label_514548;
        case 0x51454cu: goto label_51454c;
        case 0x514550u: goto label_514550;
        case 0x514554u: goto label_514554;
        case 0x514558u: goto label_514558;
        case 0x51455cu: goto label_51455c;
        case 0x514560u: goto label_514560;
        case 0x514564u: goto label_514564;
        case 0x514568u: goto label_514568;
        case 0x51456cu: goto label_51456c;
        case 0x514570u: goto label_514570;
        case 0x514574u: goto label_514574;
        case 0x514578u: goto label_514578;
        case 0x51457cu: goto label_51457c;
        case 0x514580u: goto label_514580;
        case 0x514584u: goto label_514584;
        case 0x514588u: goto label_514588;
        case 0x51458cu: goto label_51458c;
        case 0x514590u: goto label_514590;
        case 0x514594u: goto label_514594;
        case 0x514598u: goto label_514598;
        case 0x51459cu: goto label_51459c;
        case 0x5145a0u: goto label_5145a0;
        case 0x5145a4u: goto label_5145a4;
        case 0x5145a8u: goto label_5145a8;
        case 0x5145acu: goto label_5145ac;
        case 0x5145b0u: goto label_5145b0;
        case 0x5145b4u: goto label_5145b4;
        case 0x5145b8u: goto label_5145b8;
        case 0x5145bcu: goto label_5145bc;
        case 0x5145c0u: goto label_5145c0;
        case 0x5145c4u: goto label_5145c4;
        case 0x5145c8u: goto label_5145c8;
        case 0x5145ccu: goto label_5145cc;
        case 0x5145d0u: goto label_5145d0;
        case 0x5145d4u: goto label_5145d4;
        case 0x5145d8u: goto label_5145d8;
        case 0x5145dcu: goto label_5145dc;
        case 0x5145e0u: goto label_5145e0;
        case 0x5145e4u: goto label_5145e4;
        case 0x5145e8u: goto label_5145e8;
        case 0x5145ecu: goto label_5145ec;
        case 0x5145f0u: goto label_5145f0;
        case 0x5145f4u: goto label_5145f4;
        case 0x5145f8u: goto label_5145f8;
        case 0x5145fcu: goto label_5145fc;
        case 0x514600u: goto label_514600;
        case 0x514604u: goto label_514604;
        case 0x514608u: goto label_514608;
        case 0x51460cu: goto label_51460c;
        case 0x514610u: goto label_514610;
        case 0x514614u: goto label_514614;
        case 0x514618u: goto label_514618;
        case 0x51461cu: goto label_51461c;
        case 0x514620u: goto label_514620;
        case 0x514624u: goto label_514624;
        case 0x514628u: goto label_514628;
        case 0x51462cu: goto label_51462c;
        case 0x514630u: goto label_514630;
        case 0x514634u: goto label_514634;
        case 0x514638u: goto label_514638;
        case 0x51463cu: goto label_51463c;
        case 0x514640u: goto label_514640;
        case 0x514644u: goto label_514644;
        case 0x514648u: goto label_514648;
        case 0x51464cu: goto label_51464c;
        case 0x514650u: goto label_514650;
        case 0x514654u: goto label_514654;
        case 0x514658u: goto label_514658;
        case 0x51465cu: goto label_51465c;
        case 0x514660u: goto label_514660;
        case 0x514664u: goto label_514664;
        case 0x514668u: goto label_514668;
        case 0x51466cu: goto label_51466c;
        case 0x514670u: goto label_514670;
        case 0x514674u: goto label_514674;
        case 0x514678u: goto label_514678;
        case 0x51467cu: goto label_51467c;
        case 0x514680u: goto label_514680;
        case 0x514684u: goto label_514684;
        case 0x514688u: goto label_514688;
        case 0x51468cu: goto label_51468c;
        case 0x514690u: goto label_514690;
        case 0x514694u: goto label_514694;
        case 0x514698u: goto label_514698;
        case 0x51469cu: goto label_51469c;
        case 0x5146a0u: goto label_5146a0;
        case 0x5146a4u: goto label_5146a4;
        case 0x5146a8u: goto label_5146a8;
        case 0x5146acu: goto label_5146ac;
        case 0x5146b0u: goto label_5146b0;
        case 0x5146b4u: goto label_5146b4;
        case 0x5146b8u: goto label_5146b8;
        case 0x5146bcu: goto label_5146bc;
        case 0x5146c0u: goto label_5146c0;
        case 0x5146c4u: goto label_5146c4;
        case 0x5146c8u: goto label_5146c8;
        case 0x5146ccu: goto label_5146cc;
        case 0x5146d0u: goto label_5146d0;
        case 0x5146d4u: goto label_5146d4;
        case 0x5146d8u: goto label_5146d8;
        case 0x5146dcu: goto label_5146dc;
        case 0x5146e0u: goto label_5146e0;
        case 0x5146e4u: goto label_5146e4;
        case 0x5146e8u: goto label_5146e8;
        case 0x5146ecu: goto label_5146ec;
        case 0x5146f0u: goto label_5146f0;
        case 0x5146f4u: goto label_5146f4;
        case 0x5146f8u: goto label_5146f8;
        case 0x5146fcu: goto label_5146fc;
        case 0x514700u: goto label_514700;
        case 0x514704u: goto label_514704;
        case 0x514708u: goto label_514708;
        case 0x51470cu: goto label_51470c;
        case 0x514710u: goto label_514710;
        case 0x514714u: goto label_514714;
        case 0x514718u: goto label_514718;
        case 0x51471cu: goto label_51471c;
        case 0x514720u: goto label_514720;
        case 0x514724u: goto label_514724;
        case 0x514728u: goto label_514728;
        case 0x51472cu: goto label_51472c;
        case 0x514730u: goto label_514730;
        case 0x514734u: goto label_514734;
        case 0x514738u: goto label_514738;
        case 0x51473cu: goto label_51473c;
        case 0x514740u: goto label_514740;
        case 0x514744u: goto label_514744;
        case 0x514748u: goto label_514748;
        case 0x51474cu: goto label_51474c;
        case 0x514750u: goto label_514750;
        case 0x514754u: goto label_514754;
        case 0x514758u: goto label_514758;
        case 0x51475cu: goto label_51475c;
        case 0x514760u: goto label_514760;
        case 0x514764u: goto label_514764;
        case 0x514768u: goto label_514768;
        case 0x51476cu: goto label_51476c;
        case 0x514770u: goto label_514770;
        case 0x514774u: goto label_514774;
        case 0x514778u: goto label_514778;
        case 0x51477cu: goto label_51477c;
        case 0x514780u: goto label_514780;
        case 0x514784u: goto label_514784;
        case 0x514788u: goto label_514788;
        case 0x51478cu: goto label_51478c;
        case 0x514790u: goto label_514790;
        case 0x514794u: goto label_514794;
        case 0x514798u: goto label_514798;
        case 0x51479cu: goto label_51479c;
        case 0x5147a0u: goto label_5147a0;
        case 0x5147a4u: goto label_5147a4;
        case 0x5147a8u: goto label_5147a8;
        case 0x5147acu: goto label_5147ac;
        case 0x5147b0u: goto label_5147b0;
        case 0x5147b4u: goto label_5147b4;
        case 0x5147b8u: goto label_5147b8;
        case 0x5147bcu: goto label_5147bc;
        case 0x5147c0u: goto label_5147c0;
        case 0x5147c4u: goto label_5147c4;
        case 0x5147c8u: goto label_5147c8;
        case 0x5147ccu: goto label_5147cc;
        case 0x5147d0u: goto label_5147d0;
        case 0x5147d4u: goto label_5147d4;
        case 0x5147d8u: goto label_5147d8;
        case 0x5147dcu: goto label_5147dc;
        case 0x5147e0u: goto label_5147e0;
        case 0x5147e4u: goto label_5147e4;
        case 0x5147e8u: goto label_5147e8;
        case 0x5147ecu: goto label_5147ec;
        case 0x5147f0u: goto label_5147f0;
        case 0x5147f4u: goto label_5147f4;
        case 0x5147f8u: goto label_5147f8;
        case 0x5147fcu: goto label_5147fc;
        case 0x514800u: goto label_514800;
        case 0x514804u: goto label_514804;
        case 0x514808u: goto label_514808;
        case 0x51480cu: goto label_51480c;
        case 0x514810u: goto label_514810;
        case 0x514814u: goto label_514814;
        case 0x514818u: goto label_514818;
        case 0x51481cu: goto label_51481c;
        case 0x514820u: goto label_514820;
        case 0x514824u: goto label_514824;
        case 0x514828u: goto label_514828;
        case 0x51482cu: goto label_51482c;
        case 0x514830u: goto label_514830;
        case 0x514834u: goto label_514834;
        case 0x514838u: goto label_514838;
        case 0x51483cu: goto label_51483c;
        case 0x514840u: goto label_514840;
        case 0x514844u: goto label_514844;
        case 0x514848u: goto label_514848;
        case 0x51484cu: goto label_51484c;
        case 0x514850u: goto label_514850;
        case 0x514854u: goto label_514854;
        case 0x514858u: goto label_514858;
        case 0x51485cu: goto label_51485c;
        case 0x514860u: goto label_514860;
        case 0x514864u: goto label_514864;
        case 0x514868u: goto label_514868;
        case 0x51486cu: goto label_51486c;
        case 0x514870u: goto label_514870;
        case 0x514874u: goto label_514874;
        case 0x514878u: goto label_514878;
        case 0x51487cu: goto label_51487c;
        case 0x514880u: goto label_514880;
        case 0x514884u: goto label_514884;
        case 0x514888u: goto label_514888;
        case 0x51488cu: goto label_51488c;
        case 0x514890u: goto label_514890;
        case 0x514894u: goto label_514894;
        case 0x514898u: goto label_514898;
        case 0x51489cu: goto label_51489c;
        case 0x5148a0u: goto label_5148a0;
        case 0x5148a4u: goto label_5148a4;
        case 0x5148a8u: goto label_5148a8;
        case 0x5148acu: goto label_5148ac;
        case 0x5148b0u: goto label_5148b0;
        case 0x5148b4u: goto label_5148b4;
        case 0x5148b8u: goto label_5148b8;
        case 0x5148bcu: goto label_5148bc;
        case 0x5148c0u: goto label_5148c0;
        case 0x5148c4u: goto label_5148c4;
        case 0x5148c8u: goto label_5148c8;
        case 0x5148ccu: goto label_5148cc;
        case 0x5148d0u: goto label_5148d0;
        case 0x5148d4u: goto label_5148d4;
        case 0x5148d8u: goto label_5148d8;
        case 0x5148dcu: goto label_5148dc;
        case 0x5148e0u: goto label_5148e0;
        case 0x5148e4u: goto label_5148e4;
        case 0x5148e8u: goto label_5148e8;
        case 0x5148ecu: goto label_5148ec;
        case 0x5148f0u: goto label_5148f0;
        case 0x5148f4u: goto label_5148f4;
        case 0x5148f8u: goto label_5148f8;
        case 0x5148fcu: goto label_5148fc;
        case 0x514900u: goto label_514900;
        case 0x514904u: goto label_514904;
        case 0x514908u: goto label_514908;
        case 0x51490cu: goto label_51490c;
        case 0x514910u: goto label_514910;
        case 0x514914u: goto label_514914;
        case 0x514918u: goto label_514918;
        case 0x51491cu: goto label_51491c;
        case 0x514920u: goto label_514920;
        case 0x514924u: goto label_514924;
        case 0x514928u: goto label_514928;
        case 0x51492cu: goto label_51492c;
        case 0x514930u: goto label_514930;
        case 0x514934u: goto label_514934;
        case 0x514938u: goto label_514938;
        case 0x51493cu: goto label_51493c;
        case 0x514940u: goto label_514940;
        case 0x514944u: goto label_514944;
        case 0x514948u: goto label_514948;
        case 0x51494cu: goto label_51494c;
        case 0x514950u: goto label_514950;
        case 0x514954u: goto label_514954;
        case 0x514958u: goto label_514958;
        case 0x51495cu: goto label_51495c;
        case 0x514960u: goto label_514960;
        case 0x514964u: goto label_514964;
        case 0x514968u: goto label_514968;
        case 0x51496cu: goto label_51496c;
        case 0x514970u: goto label_514970;
        case 0x514974u: goto label_514974;
        case 0x514978u: goto label_514978;
        case 0x51497cu: goto label_51497c;
        case 0x514980u: goto label_514980;
        case 0x514984u: goto label_514984;
        case 0x514988u: goto label_514988;
        case 0x51498cu: goto label_51498c;
        case 0x514990u: goto label_514990;
        case 0x514994u: goto label_514994;
        case 0x514998u: goto label_514998;
        case 0x51499cu: goto label_51499c;
        case 0x5149a0u: goto label_5149a0;
        case 0x5149a4u: goto label_5149a4;
        case 0x5149a8u: goto label_5149a8;
        case 0x5149acu: goto label_5149ac;
        case 0x5149b0u: goto label_5149b0;
        case 0x5149b4u: goto label_5149b4;
        case 0x5149b8u: goto label_5149b8;
        case 0x5149bcu: goto label_5149bc;
        case 0x5149c0u: goto label_5149c0;
        case 0x5149c4u: goto label_5149c4;
        case 0x5149c8u: goto label_5149c8;
        case 0x5149ccu: goto label_5149cc;
        case 0x5149d0u: goto label_5149d0;
        case 0x5149d4u: goto label_5149d4;
        case 0x5149d8u: goto label_5149d8;
        case 0x5149dcu: goto label_5149dc;
        case 0x5149e0u: goto label_5149e0;
        case 0x5149e4u: goto label_5149e4;
        case 0x5149e8u: goto label_5149e8;
        case 0x5149ecu: goto label_5149ec;
        case 0x5149f0u: goto label_5149f0;
        case 0x5149f4u: goto label_5149f4;
        case 0x5149f8u: goto label_5149f8;
        case 0x5149fcu: goto label_5149fc;
        case 0x514a00u: goto label_514a00;
        case 0x514a04u: goto label_514a04;
        case 0x514a08u: goto label_514a08;
        case 0x514a0cu: goto label_514a0c;
        case 0x514a10u: goto label_514a10;
        case 0x514a14u: goto label_514a14;
        case 0x514a18u: goto label_514a18;
        case 0x514a1cu: goto label_514a1c;
        case 0x514a20u: goto label_514a20;
        case 0x514a24u: goto label_514a24;
        case 0x514a28u: goto label_514a28;
        case 0x514a2cu: goto label_514a2c;
        case 0x514a30u: goto label_514a30;
        case 0x514a34u: goto label_514a34;
        case 0x514a38u: goto label_514a38;
        case 0x514a3cu: goto label_514a3c;
        case 0x514a40u: goto label_514a40;
        case 0x514a44u: goto label_514a44;
        case 0x514a48u: goto label_514a48;
        case 0x514a4cu: goto label_514a4c;
        case 0x514a50u: goto label_514a50;
        case 0x514a54u: goto label_514a54;
        case 0x514a58u: goto label_514a58;
        case 0x514a5cu: goto label_514a5c;
        case 0x514a60u: goto label_514a60;
        case 0x514a64u: goto label_514a64;
        case 0x514a68u: goto label_514a68;
        case 0x514a6cu: goto label_514a6c;
        case 0x514a70u: goto label_514a70;
        case 0x514a74u: goto label_514a74;
        case 0x514a78u: goto label_514a78;
        case 0x514a7cu: goto label_514a7c;
        case 0x514a80u: goto label_514a80;
        case 0x514a84u: goto label_514a84;
        case 0x514a88u: goto label_514a88;
        case 0x514a8cu: goto label_514a8c;
        case 0x514a90u: goto label_514a90;
        case 0x514a94u: goto label_514a94;
        case 0x514a98u: goto label_514a98;
        case 0x514a9cu: goto label_514a9c;
        case 0x514aa0u: goto label_514aa0;
        case 0x514aa4u: goto label_514aa4;
        case 0x514aa8u: goto label_514aa8;
        case 0x514aacu: goto label_514aac;
        case 0x514ab0u: goto label_514ab0;
        case 0x514ab4u: goto label_514ab4;
        case 0x514ab8u: goto label_514ab8;
        case 0x514abcu: goto label_514abc;
        case 0x514ac0u: goto label_514ac0;
        case 0x514ac4u: goto label_514ac4;
        case 0x514ac8u: goto label_514ac8;
        case 0x514accu: goto label_514acc;
        case 0x514ad0u: goto label_514ad0;
        case 0x514ad4u: goto label_514ad4;
        case 0x514ad8u: goto label_514ad8;
        case 0x514adcu: goto label_514adc;
        case 0x514ae0u: goto label_514ae0;
        case 0x514ae4u: goto label_514ae4;
        case 0x514ae8u: goto label_514ae8;
        case 0x514aecu: goto label_514aec;
        case 0x514af0u: goto label_514af0;
        case 0x514af4u: goto label_514af4;
        case 0x514af8u: goto label_514af8;
        case 0x514afcu: goto label_514afc;
        case 0x514b00u: goto label_514b00;
        case 0x514b04u: goto label_514b04;
        case 0x514b08u: goto label_514b08;
        case 0x514b0cu: goto label_514b0c;
        case 0x514b10u: goto label_514b10;
        case 0x514b14u: goto label_514b14;
        case 0x514b18u: goto label_514b18;
        case 0x514b1cu: goto label_514b1c;
        case 0x514b20u: goto label_514b20;
        case 0x514b24u: goto label_514b24;
        case 0x514b28u: goto label_514b28;
        case 0x514b2cu: goto label_514b2c;
        case 0x514b30u: goto label_514b30;
        case 0x514b34u: goto label_514b34;
        case 0x514b38u: goto label_514b38;
        case 0x514b3cu: goto label_514b3c;
        case 0x514b40u: goto label_514b40;
        case 0x514b44u: goto label_514b44;
        case 0x514b48u: goto label_514b48;
        case 0x514b4cu: goto label_514b4c;
        case 0x514b50u: goto label_514b50;
        case 0x514b54u: goto label_514b54;
        case 0x514b58u: goto label_514b58;
        case 0x514b5cu: goto label_514b5c;
        case 0x514b60u: goto label_514b60;
        case 0x514b64u: goto label_514b64;
        case 0x514b68u: goto label_514b68;
        case 0x514b6cu: goto label_514b6c;
        case 0x514b70u: goto label_514b70;
        case 0x514b74u: goto label_514b74;
        case 0x514b78u: goto label_514b78;
        case 0x514b7cu: goto label_514b7c;
        case 0x514b80u: goto label_514b80;
        case 0x514b84u: goto label_514b84;
        case 0x514b88u: goto label_514b88;
        case 0x514b8cu: goto label_514b8c;
        case 0x514b90u: goto label_514b90;
        case 0x514b94u: goto label_514b94;
        case 0x514b98u: goto label_514b98;
        case 0x514b9cu: goto label_514b9c;
        case 0x514ba0u: goto label_514ba0;
        case 0x514ba4u: goto label_514ba4;
        case 0x514ba8u: goto label_514ba8;
        case 0x514bacu: goto label_514bac;
        case 0x514bb0u: goto label_514bb0;
        case 0x514bb4u: goto label_514bb4;
        case 0x514bb8u: goto label_514bb8;
        case 0x514bbcu: goto label_514bbc;
        case 0x514bc0u: goto label_514bc0;
        case 0x514bc4u: goto label_514bc4;
        case 0x514bc8u: goto label_514bc8;
        case 0x514bccu: goto label_514bcc;
        case 0x514bd0u: goto label_514bd0;
        case 0x514bd4u: goto label_514bd4;
        case 0x514bd8u: goto label_514bd8;
        case 0x514bdcu: goto label_514bdc;
        case 0x514be0u: goto label_514be0;
        case 0x514be4u: goto label_514be4;
        case 0x514be8u: goto label_514be8;
        case 0x514becu: goto label_514bec;
        case 0x514bf0u: goto label_514bf0;
        case 0x514bf4u: goto label_514bf4;
        case 0x514bf8u: goto label_514bf8;
        case 0x514bfcu: goto label_514bfc;
        case 0x514c00u: goto label_514c00;
        case 0x514c04u: goto label_514c04;
        case 0x514c08u: goto label_514c08;
        case 0x514c0cu: goto label_514c0c;
        case 0x514c10u: goto label_514c10;
        case 0x514c14u: goto label_514c14;
        case 0x514c18u: goto label_514c18;
        case 0x514c1cu: goto label_514c1c;
        case 0x514c20u: goto label_514c20;
        case 0x514c24u: goto label_514c24;
        case 0x514c28u: goto label_514c28;
        case 0x514c2cu: goto label_514c2c;
        case 0x514c30u: goto label_514c30;
        case 0x514c34u: goto label_514c34;
        case 0x514c38u: goto label_514c38;
        case 0x514c3cu: goto label_514c3c;
        case 0x514c40u: goto label_514c40;
        case 0x514c44u: goto label_514c44;
        case 0x514c48u: goto label_514c48;
        case 0x514c4cu: goto label_514c4c;
        case 0x514c50u: goto label_514c50;
        case 0x514c54u: goto label_514c54;
        case 0x514c58u: goto label_514c58;
        case 0x514c5cu: goto label_514c5c;
        case 0x514c60u: goto label_514c60;
        case 0x514c64u: goto label_514c64;
        case 0x514c68u: goto label_514c68;
        case 0x514c6cu: goto label_514c6c;
        case 0x514c70u: goto label_514c70;
        case 0x514c74u: goto label_514c74;
        case 0x514c78u: goto label_514c78;
        case 0x514c7cu: goto label_514c7c;
        case 0x514c80u: goto label_514c80;
        case 0x514c84u: goto label_514c84;
        case 0x514c88u: goto label_514c88;
        case 0x514c8cu: goto label_514c8c;
        case 0x514c90u: goto label_514c90;
        case 0x514c94u: goto label_514c94;
        case 0x514c98u: goto label_514c98;
        case 0x514c9cu: goto label_514c9c;
        case 0x514ca0u: goto label_514ca0;
        case 0x514ca4u: goto label_514ca4;
        case 0x514ca8u: goto label_514ca8;
        case 0x514cacu: goto label_514cac;
        case 0x514cb0u: goto label_514cb0;
        case 0x514cb4u: goto label_514cb4;
        case 0x514cb8u: goto label_514cb8;
        case 0x514cbcu: goto label_514cbc;
        case 0x514cc0u: goto label_514cc0;
        case 0x514cc4u: goto label_514cc4;
        case 0x514cc8u: goto label_514cc8;
        case 0x514cccu: goto label_514ccc;
        case 0x514cd0u: goto label_514cd0;
        case 0x514cd4u: goto label_514cd4;
        case 0x514cd8u: goto label_514cd8;
        case 0x514cdcu: goto label_514cdc;
        case 0x514ce0u: goto label_514ce0;
        case 0x514ce4u: goto label_514ce4;
        case 0x514ce8u: goto label_514ce8;
        case 0x514cecu: goto label_514cec;
        case 0x514cf0u: goto label_514cf0;
        case 0x514cf4u: goto label_514cf4;
        case 0x514cf8u: goto label_514cf8;
        case 0x514cfcu: goto label_514cfc;
        case 0x514d00u: goto label_514d00;
        case 0x514d04u: goto label_514d04;
        case 0x514d08u: goto label_514d08;
        case 0x514d0cu: goto label_514d0c;
        case 0x514d10u: goto label_514d10;
        case 0x514d14u: goto label_514d14;
        case 0x514d18u: goto label_514d18;
        case 0x514d1cu: goto label_514d1c;
        case 0x514d20u: goto label_514d20;
        case 0x514d24u: goto label_514d24;
        case 0x514d28u: goto label_514d28;
        case 0x514d2cu: goto label_514d2c;
        case 0x514d30u: goto label_514d30;
        case 0x514d34u: goto label_514d34;
        case 0x514d38u: goto label_514d38;
        case 0x514d3cu: goto label_514d3c;
        case 0x514d40u: goto label_514d40;
        case 0x514d44u: goto label_514d44;
        case 0x514d48u: goto label_514d48;
        case 0x514d4cu: goto label_514d4c;
        case 0x514d50u: goto label_514d50;
        case 0x514d54u: goto label_514d54;
        case 0x514d58u: goto label_514d58;
        case 0x514d5cu: goto label_514d5c;
        case 0x514d60u: goto label_514d60;
        case 0x514d64u: goto label_514d64;
        case 0x514d68u: goto label_514d68;
        case 0x514d6cu: goto label_514d6c;
        case 0x514d70u: goto label_514d70;
        case 0x514d74u: goto label_514d74;
        case 0x514d78u: goto label_514d78;
        case 0x514d7cu: goto label_514d7c;
        case 0x514d80u: goto label_514d80;
        case 0x514d84u: goto label_514d84;
        case 0x514d88u: goto label_514d88;
        case 0x514d8cu: goto label_514d8c;
        case 0x514d90u: goto label_514d90;
        case 0x514d94u: goto label_514d94;
        case 0x514d98u: goto label_514d98;
        case 0x514d9cu: goto label_514d9c;
        case 0x514da0u: goto label_514da0;
        case 0x514da4u: goto label_514da4;
        case 0x514da8u: goto label_514da8;
        case 0x514dacu: goto label_514dac;
        case 0x514db0u: goto label_514db0;
        case 0x514db4u: goto label_514db4;
        case 0x514db8u: goto label_514db8;
        case 0x514dbcu: goto label_514dbc;
        case 0x514dc0u: goto label_514dc0;
        case 0x514dc4u: goto label_514dc4;
        case 0x514dc8u: goto label_514dc8;
        case 0x514dccu: goto label_514dcc;
        case 0x514dd0u: goto label_514dd0;
        case 0x514dd4u: goto label_514dd4;
        case 0x514dd8u: goto label_514dd8;
        case 0x514ddcu: goto label_514ddc;
        case 0x514de0u: goto label_514de0;
        case 0x514de4u: goto label_514de4;
        case 0x514de8u: goto label_514de8;
        case 0x514decu: goto label_514dec;
        case 0x514df0u: goto label_514df0;
        case 0x514df4u: goto label_514df4;
        case 0x514df8u: goto label_514df8;
        case 0x514dfcu: goto label_514dfc;
        case 0x514e00u: goto label_514e00;
        case 0x514e04u: goto label_514e04;
        case 0x514e08u: goto label_514e08;
        case 0x514e0cu: goto label_514e0c;
        case 0x514e10u: goto label_514e10;
        case 0x514e14u: goto label_514e14;
        case 0x514e18u: goto label_514e18;
        case 0x514e1cu: goto label_514e1c;
        case 0x514e20u: goto label_514e20;
        case 0x514e24u: goto label_514e24;
        case 0x514e28u: goto label_514e28;
        case 0x514e2cu: goto label_514e2c;
        case 0x514e30u: goto label_514e30;
        case 0x514e34u: goto label_514e34;
        case 0x514e38u: goto label_514e38;
        case 0x514e3cu: goto label_514e3c;
        case 0x514e40u: goto label_514e40;
        case 0x514e44u: goto label_514e44;
        case 0x514e48u: goto label_514e48;
        case 0x514e4cu: goto label_514e4c;
        case 0x514e50u: goto label_514e50;
        case 0x514e54u: goto label_514e54;
        case 0x514e58u: goto label_514e58;
        case 0x514e5cu: goto label_514e5c;
        case 0x514e60u: goto label_514e60;
        case 0x514e64u: goto label_514e64;
        case 0x514e68u: goto label_514e68;
        case 0x514e6cu: goto label_514e6c;
        case 0x514e70u: goto label_514e70;
        case 0x514e74u: goto label_514e74;
        case 0x514e78u: goto label_514e78;
        case 0x514e7cu: goto label_514e7c;
        case 0x514e80u: goto label_514e80;
        case 0x514e84u: goto label_514e84;
        case 0x514e88u: goto label_514e88;
        case 0x514e8cu: goto label_514e8c;
        case 0x514e90u: goto label_514e90;
        case 0x514e94u: goto label_514e94;
        case 0x514e98u: goto label_514e98;
        case 0x514e9cu: goto label_514e9c;
        case 0x514ea0u: goto label_514ea0;
        case 0x514ea4u: goto label_514ea4;
        case 0x514ea8u: goto label_514ea8;
        case 0x514eacu: goto label_514eac;
        case 0x514eb0u: goto label_514eb0;
        case 0x514eb4u: goto label_514eb4;
        case 0x514eb8u: goto label_514eb8;
        case 0x514ebcu: goto label_514ebc;
        case 0x514ec0u: goto label_514ec0;
        case 0x514ec4u: goto label_514ec4;
        case 0x514ec8u: goto label_514ec8;
        case 0x514eccu: goto label_514ecc;
        case 0x514ed0u: goto label_514ed0;
        case 0x514ed4u: goto label_514ed4;
        case 0x514ed8u: goto label_514ed8;
        case 0x514edcu: goto label_514edc;
        case 0x514ee0u: goto label_514ee0;
        case 0x514ee4u: goto label_514ee4;
        case 0x514ee8u: goto label_514ee8;
        case 0x514eecu: goto label_514eec;
        case 0x514ef0u: goto label_514ef0;
        case 0x514ef4u: goto label_514ef4;
        case 0x514ef8u: goto label_514ef8;
        case 0x514efcu: goto label_514efc;
        case 0x514f00u: goto label_514f00;
        case 0x514f04u: goto label_514f04;
        case 0x514f08u: goto label_514f08;
        case 0x514f0cu: goto label_514f0c;
        case 0x514f10u: goto label_514f10;
        case 0x514f14u: goto label_514f14;
        case 0x514f18u: goto label_514f18;
        case 0x514f1cu: goto label_514f1c;
        case 0x514f20u: goto label_514f20;
        case 0x514f24u: goto label_514f24;
        case 0x514f28u: goto label_514f28;
        case 0x514f2cu: goto label_514f2c;
        case 0x514f30u: goto label_514f30;
        case 0x514f34u: goto label_514f34;
        case 0x514f38u: goto label_514f38;
        case 0x514f3cu: goto label_514f3c;
        case 0x514f40u: goto label_514f40;
        case 0x514f44u: goto label_514f44;
        case 0x514f48u: goto label_514f48;
        case 0x514f4cu: goto label_514f4c;
        case 0x514f50u: goto label_514f50;
        case 0x514f54u: goto label_514f54;
        case 0x514f58u: goto label_514f58;
        case 0x514f5cu: goto label_514f5c;
        case 0x514f60u: goto label_514f60;
        case 0x514f64u: goto label_514f64;
        case 0x514f68u: goto label_514f68;
        case 0x514f6cu: goto label_514f6c;
        case 0x514f70u: goto label_514f70;
        case 0x514f74u: goto label_514f74;
        case 0x514f78u: goto label_514f78;
        case 0x514f7cu: goto label_514f7c;
        case 0x514f80u: goto label_514f80;
        case 0x514f84u: goto label_514f84;
        case 0x514f88u: goto label_514f88;
        case 0x514f8cu: goto label_514f8c;
        case 0x514f90u: goto label_514f90;
        case 0x514f94u: goto label_514f94;
        case 0x514f98u: goto label_514f98;
        case 0x514f9cu: goto label_514f9c;
        case 0x514fa0u: goto label_514fa0;
        case 0x514fa4u: goto label_514fa4;
        case 0x514fa8u: goto label_514fa8;
        case 0x514facu: goto label_514fac;
        case 0x514fb0u: goto label_514fb0;
        case 0x514fb4u: goto label_514fb4;
        case 0x514fb8u: goto label_514fb8;
        case 0x514fbcu: goto label_514fbc;
        case 0x514fc0u: goto label_514fc0;
        case 0x514fc4u: goto label_514fc4;
        case 0x514fc8u: goto label_514fc8;
        case 0x514fccu: goto label_514fcc;
        case 0x514fd0u: goto label_514fd0;
        case 0x514fd4u: goto label_514fd4;
        case 0x514fd8u: goto label_514fd8;
        case 0x514fdcu: goto label_514fdc;
        case 0x514fe0u: goto label_514fe0;
        case 0x514fe4u: goto label_514fe4;
        case 0x514fe8u: goto label_514fe8;
        case 0x514fecu: goto label_514fec;
        case 0x514ff0u: goto label_514ff0;
        case 0x514ff4u: goto label_514ff4;
        case 0x514ff8u: goto label_514ff8;
        case 0x514ffcu: goto label_514ffc;
        case 0x515000u: goto label_515000;
        case 0x515004u: goto label_515004;
        case 0x515008u: goto label_515008;
        case 0x51500cu: goto label_51500c;
        case 0x515010u: goto label_515010;
        case 0x515014u: goto label_515014;
        case 0x515018u: goto label_515018;
        case 0x51501cu: goto label_51501c;
        case 0x515020u: goto label_515020;
        case 0x515024u: goto label_515024;
        case 0x515028u: goto label_515028;
        case 0x51502cu: goto label_51502c;
        case 0x515030u: goto label_515030;
        case 0x515034u: goto label_515034;
        case 0x515038u: goto label_515038;
        case 0x51503cu: goto label_51503c;
        case 0x515040u: goto label_515040;
        case 0x515044u: goto label_515044;
        case 0x515048u: goto label_515048;
        case 0x51504cu: goto label_51504c;
        case 0x515050u: goto label_515050;
        case 0x515054u: goto label_515054;
        case 0x515058u: goto label_515058;
        case 0x51505cu: goto label_51505c;
        case 0x515060u: goto label_515060;
        case 0x515064u: goto label_515064;
        case 0x515068u: goto label_515068;
        case 0x51506cu: goto label_51506c;
        case 0x515070u: goto label_515070;
        case 0x515074u: goto label_515074;
        case 0x515078u: goto label_515078;
        case 0x51507cu: goto label_51507c;
        case 0x515080u: goto label_515080;
        case 0x515084u: goto label_515084;
        case 0x515088u: goto label_515088;
        case 0x51508cu: goto label_51508c;
        case 0x515090u: goto label_515090;
        case 0x515094u: goto label_515094;
        case 0x515098u: goto label_515098;
        case 0x51509cu: goto label_51509c;
        case 0x5150a0u: goto label_5150a0;
        case 0x5150a4u: goto label_5150a4;
        case 0x5150a8u: goto label_5150a8;
        case 0x5150acu: goto label_5150ac;
        case 0x5150b0u: goto label_5150b0;
        case 0x5150b4u: goto label_5150b4;
        case 0x5150b8u: goto label_5150b8;
        case 0x5150bcu: goto label_5150bc;
        case 0x5150c0u: goto label_5150c0;
        case 0x5150c4u: goto label_5150c4;
        case 0x5150c8u: goto label_5150c8;
        case 0x5150ccu: goto label_5150cc;
        case 0x5150d0u: goto label_5150d0;
        case 0x5150d4u: goto label_5150d4;
        case 0x5150d8u: goto label_5150d8;
        case 0x5150dcu: goto label_5150dc;
        case 0x5150e0u: goto label_5150e0;
        case 0x5150e4u: goto label_5150e4;
        case 0x5150e8u: goto label_5150e8;
        case 0x5150ecu: goto label_5150ec;
        case 0x5150f0u: goto label_5150f0;
        case 0x5150f4u: goto label_5150f4;
        case 0x5150f8u: goto label_5150f8;
        case 0x5150fcu: goto label_5150fc;
        case 0x515100u: goto label_515100;
        case 0x515104u: goto label_515104;
        case 0x515108u: goto label_515108;
        case 0x51510cu: goto label_51510c;
        case 0x515110u: goto label_515110;
        case 0x515114u: goto label_515114;
        case 0x515118u: goto label_515118;
        case 0x51511cu: goto label_51511c;
        case 0x515120u: goto label_515120;
        case 0x515124u: goto label_515124;
        case 0x515128u: goto label_515128;
        case 0x51512cu: goto label_51512c;
        case 0x515130u: goto label_515130;
        case 0x515134u: goto label_515134;
        case 0x515138u: goto label_515138;
        case 0x51513cu: goto label_51513c;
        case 0x515140u: goto label_515140;
        case 0x515144u: goto label_515144;
        case 0x515148u: goto label_515148;
        case 0x51514cu: goto label_51514c;
        case 0x515150u: goto label_515150;
        case 0x515154u: goto label_515154;
        case 0x515158u: goto label_515158;
        case 0x51515cu: goto label_51515c;
        case 0x515160u: goto label_515160;
        case 0x515164u: goto label_515164;
        case 0x515168u: goto label_515168;
        case 0x51516cu: goto label_51516c;
        case 0x515170u: goto label_515170;
        case 0x515174u: goto label_515174;
        case 0x515178u: goto label_515178;
        case 0x51517cu: goto label_51517c;
        case 0x515180u: goto label_515180;
        case 0x515184u: goto label_515184;
        case 0x515188u: goto label_515188;
        case 0x51518cu: goto label_51518c;
        case 0x515190u: goto label_515190;
        case 0x515194u: goto label_515194;
        case 0x515198u: goto label_515198;
        case 0x51519cu: goto label_51519c;
        case 0x5151a0u: goto label_5151a0;
        case 0x5151a4u: goto label_5151a4;
        case 0x5151a8u: goto label_5151a8;
        case 0x5151acu: goto label_5151ac;
        case 0x5151b0u: goto label_5151b0;
        case 0x5151b4u: goto label_5151b4;
        case 0x5151b8u: goto label_5151b8;
        case 0x5151bcu: goto label_5151bc;
        case 0x5151c0u: goto label_5151c0;
        case 0x5151c4u: goto label_5151c4;
        case 0x5151c8u: goto label_5151c8;
        case 0x5151ccu: goto label_5151cc;
        case 0x5151d0u: goto label_5151d0;
        case 0x5151d4u: goto label_5151d4;
        case 0x5151d8u: goto label_5151d8;
        case 0x5151dcu: goto label_5151dc;
        case 0x5151e0u: goto label_5151e0;
        case 0x5151e4u: goto label_5151e4;
        case 0x5151e8u: goto label_5151e8;
        case 0x5151ecu: goto label_5151ec;
        case 0x5151f0u: goto label_5151f0;
        case 0x5151f4u: goto label_5151f4;
        case 0x5151f8u: goto label_5151f8;
        case 0x5151fcu: goto label_5151fc;
        case 0x515200u: goto label_515200;
        case 0x515204u: goto label_515204;
        case 0x515208u: goto label_515208;
        case 0x51520cu: goto label_51520c;
        case 0x515210u: goto label_515210;
        case 0x515214u: goto label_515214;
        case 0x515218u: goto label_515218;
        case 0x51521cu: goto label_51521c;
        case 0x515220u: goto label_515220;
        case 0x515224u: goto label_515224;
        case 0x515228u: goto label_515228;
        case 0x51522cu: goto label_51522c;
        case 0x515230u: goto label_515230;
        case 0x515234u: goto label_515234;
        case 0x515238u: goto label_515238;
        case 0x51523cu: goto label_51523c;
        case 0x515240u: goto label_515240;
        case 0x515244u: goto label_515244;
        case 0x515248u: goto label_515248;
        case 0x51524cu: goto label_51524c;
        case 0x515250u: goto label_515250;
        case 0x515254u: goto label_515254;
        case 0x515258u: goto label_515258;
        case 0x51525cu: goto label_51525c;
        case 0x515260u: goto label_515260;
        case 0x515264u: goto label_515264;
        case 0x515268u: goto label_515268;
        case 0x51526cu: goto label_51526c;
        case 0x515270u: goto label_515270;
        case 0x515274u: goto label_515274;
        case 0x515278u: goto label_515278;
        case 0x51527cu: goto label_51527c;
        case 0x515280u: goto label_515280;
        case 0x515284u: goto label_515284;
        case 0x515288u: goto label_515288;
        case 0x51528cu: goto label_51528c;
        case 0x515290u: goto label_515290;
        case 0x515294u: goto label_515294;
        case 0x515298u: goto label_515298;
        case 0x51529cu: goto label_51529c;
        case 0x5152a0u: goto label_5152a0;
        case 0x5152a4u: goto label_5152a4;
        case 0x5152a8u: goto label_5152a8;
        case 0x5152acu: goto label_5152ac;
        case 0x5152b0u: goto label_5152b0;
        case 0x5152b4u: goto label_5152b4;
        case 0x5152b8u: goto label_5152b8;
        case 0x5152bcu: goto label_5152bc;
        case 0x5152c0u: goto label_5152c0;
        case 0x5152c4u: goto label_5152c4;
        case 0x5152c8u: goto label_5152c8;
        case 0x5152ccu: goto label_5152cc;
        case 0x5152d0u: goto label_5152d0;
        case 0x5152d4u: goto label_5152d4;
        case 0x5152d8u: goto label_5152d8;
        case 0x5152dcu: goto label_5152dc;
        case 0x5152e0u: goto label_5152e0;
        case 0x5152e4u: goto label_5152e4;
        case 0x5152e8u: goto label_5152e8;
        case 0x5152ecu: goto label_5152ec;
        case 0x5152f0u: goto label_5152f0;
        case 0x5152f4u: goto label_5152f4;
        case 0x5152f8u: goto label_5152f8;
        case 0x5152fcu: goto label_5152fc;
        case 0x515300u: goto label_515300;
        case 0x515304u: goto label_515304;
        case 0x515308u: goto label_515308;
        case 0x51530cu: goto label_51530c;
        case 0x515310u: goto label_515310;
        case 0x515314u: goto label_515314;
        case 0x515318u: goto label_515318;
        case 0x51531cu: goto label_51531c;
        case 0x515320u: goto label_515320;
        case 0x515324u: goto label_515324;
        case 0x515328u: goto label_515328;
        case 0x51532cu: goto label_51532c;
        case 0x515330u: goto label_515330;
        case 0x515334u: goto label_515334;
        case 0x515338u: goto label_515338;
        case 0x51533cu: goto label_51533c;
        case 0x515340u: goto label_515340;
        case 0x515344u: goto label_515344;
        case 0x515348u: goto label_515348;
        case 0x51534cu: goto label_51534c;
        case 0x515350u: goto label_515350;
        case 0x515354u: goto label_515354;
        case 0x515358u: goto label_515358;
        case 0x51535cu: goto label_51535c;
        case 0x515360u: goto label_515360;
        case 0x515364u: goto label_515364;
        case 0x515368u: goto label_515368;
        case 0x51536cu: goto label_51536c;
        case 0x515370u: goto label_515370;
        case 0x515374u: goto label_515374;
        case 0x515378u: goto label_515378;
        case 0x51537cu: goto label_51537c;
        case 0x515380u: goto label_515380;
        case 0x515384u: goto label_515384;
        case 0x515388u: goto label_515388;
        case 0x51538cu: goto label_51538c;
        case 0x515390u: goto label_515390;
        case 0x515394u: goto label_515394;
        case 0x515398u: goto label_515398;
        case 0x51539cu: goto label_51539c;
        case 0x5153a0u: goto label_5153a0;
        case 0x5153a4u: goto label_5153a4;
        case 0x5153a8u: goto label_5153a8;
        case 0x5153acu: goto label_5153ac;
        case 0x5153b0u: goto label_5153b0;
        case 0x5153b4u: goto label_5153b4;
        case 0x5153b8u: goto label_5153b8;
        case 0x5153bcu: goto label_5153bc;
        case 0x5153c0u: goto label_5153c0;
        case 0x5153c4u: goto label_5153c4;
        case 0x5153c8u: goto label_5153c8;
        case 0x5153ccu: goto label_5153cc;
        case 0x5153d0u: goto label_5153d0;
        case 0x5153d4u: goto label_5153d4;
        case 0x5153d8u: goto label_5153d8;
        case 0x5153dcu: goto label_5153dc;
        case 0x5153e0u: goto label_5153e0;
        case 0x5153e4u: goto label_5153e4;
        case 0x5153e8u: goto label_5153e8;
        case 0x5153ecu: goto label_5153ec;
        case 0x5153f0u: goto label_5153f0;
        case 0x5153f4u: goto label_5153f4;
        case 0x5153f8u: goto label_5153f8;
        case 0x5153fcu: goto label_5153fc;
        case 0x515400u: goto label_515400;
        case 0x515404u: goto label_515404;
        case 0x515408u: goto label_515408;
        case 0x51540cu: goto label_51540c;
        case 0x515410u: goto label_515410;
        case 0x515414u: goto label_515414;
        case 0x515418u: goto label_515418;
        case 0x51541cu: goto label_51541c;
        case 0x515420u: goto label_515420;
        case 0x515424u: goto label_515424;
        case 0x515428u: goto label_515428;
        case 0x51542cu: goto label_51542c;
        case 0x515430u: goto label_515430;
        case 0x515434u: goto label_515434;
        case 0x515438u: goto label_515438;
        case 0x51543cu: goto label_51543c;
        case 0x515440u: goto label_515440;
        case 0x515444u: goto label_515444;
        case 0x515448u: goto label_515448;
        case 0x51544cu: goto label_51544c;
        case 0x515450u: goto label_515450;
        case 0x515454u: goto label_515454;
        case 0x515458u: goto label_515458;
        case 0x51545cu: goto label_51545c;
        case 0x515460u: goto label_515460;
        case 0x515464u: goto label_515464;
        case 0x515468u: goto label_515468;
        case 0x51546cu: goto label_51546c;
        case 0x515470u: goto label_515470;
        case 0x515474u: goto label_515474;
        case 0x515478u: goto label_515478;
        case 0x51547cu: goto label_51547c;
        case 0x515480u: goto label_515480;
        case 0x515484u: goto label_515484;
        case 0x515488u: goto label_515488;
        case 0x51548cu: goto label_51548c;
        case 0x515490u: goto label_515490;
        case 0x515494u: goto label_515494;
        case 0x515498u: goto label_515498;
        case 0x51549cu: goto label_51549c;
        case 0x5154a0u: goto label_5154a0;
        case 0x5154a4u: goto label_5154a4;
        case 0x5154a8u: goto label_5154a8;
        case 0x5154acu: goto label_5154ac;
        case 0x5154b0u: goto label_5154b0;
        case 0x5154b4u: goto label_5154b4;
        case 0x5154b8u: goto label_5154b8;
        case 0x5154bcu: goto label_5154bc;
        case 0x5154c0u: goto label_5154c0;
        case 0x5154c4u: goto label_5154c4;
        case 0x5154c8u: goto label_5154c8;
        case 0x5154ccu: goto label_5154cc;
        case 0x5154d0u: goto label_5154d0;
        case 0x5154d4u: goto label_5154d4;
        case 0x5154d8u: goto label_5154d8;
        case 0x5154dcu: goto label_5154dc;
        case 0x5154e0u: goto label_5154e0;
        case 0x5154e4u: goto label_5154e4;
        case 0x5154e8u: goto label_5154e8;
        case 0x5154ecu: goto label_5154ec;
        case 0x5154f0u: goto label_5154f0;
        case 0x5154f4u: goto label_5154f4;
        case 0x5154f8u: goto label_5154f8;
        case 0x5154fcu: goto label_5154fc;
        case 0x515500u: goto label_515500;
        case 0x515504u: goto label_515504;
        case 0x515508u: goto label_515508;
        case 0x51550cu: goto label_51550c;
        case 0x515510u: goto label_515510;
        case 0x515514u: goto label_515514;
        case 0x515518u: goto label_515518;
        case 0x51551cu: goto label_51551c;
        case 0x515520u: goto label_515520;
        case 0x515524u: goto label_515524;
        case 0x515528u: goto label_515528;
        case 0x51552cu: goto label_51552c;
        case 0x515530u: goto label_515530;
        case 0x515534u: goto label_515534;
        case 0x515538u: goto label_515538;
        case 0x51553cu: goto label_51553c;
        case 0x515540u: goto label_515540;
        case 0x515544u: goto label_515544;
        case 0x515548u: goto label_515548;
        case 0x51554cu: goto label_51554c;
        case 0x515550u: goto label_515550;
        case 0x515554u: goto label_515554;
        case 0x515558u: goto label_515558;
        case 0x51555cu: goto label_51555c;
        case 0x515560u: goto label_515560;
        case 0x515564u: goto label_515564;
        case 0x515568u: goto label_515568;
        case 0x51556cu: goto label_51556c;
        case 0x515570u: goto label_515570;
        case 0x515574u: goto label_515574;
        case 0x515578u: goto label_515578;
        case 0x51557cu: goto label_51557c;
        case 0x515580u: goto label_515580;
        case 0x515584u: goto label_515584;
        case 0x515588u: goto label_515588;
        case 0x51558cu: goto label_51558c;
        case 0x515590u: goto label_515590;
        case 0x515594u: goto label_515594;
        case 0x515598u: goto label_515598;
        case 0x51559cu: goto label_51559c;
        case 0x5155a0u: goto label_5155a0;
        case 0x5155a4u: goto label_5155a4;
        case 0x5155a8u: goto label_5155a8;
        case 0x5155acu: goto label_5155ac;
        case 0x5155b0u: goto label_5155b0;
        case 0x5155b4u: goto label_5155b4;
        case 0x5155b8u: goto label_5155b8;
        case 0x5155bcu: goto label_5155bc;
        case 0x5155c0u: goto label_5155c0;
        case 0x5155c4u: goto label_5155c4;
        case 0x5155c8u: goto label_5155c8;
        case 0x5155ccu: goto label_5155cc;
        case 0x5155d0u: goto label_5155d0;
        case 0x5155d4u: goto label_5155d4;
        case 0x5155d8u: goto label_5155d8;
        case 0x5155dcu: goto label_5155dc;
        case 0x5155e0u: goto label_5155e0;
        case 0x5155e4u: goto label_5155e4;
        case 0x5155e8u: goto label_5155e8;
        case 0x5155ecu: goto label_5155ec;
        case 0x5155f0u: goto label_5155f0;
        case 0x5155f4u: goto label_5155f4;
        case 0x5155f8u: goto label_5155f8;
        case 0x5155fcu: goto label_5155fc;
        case 0x515600u: goto label_515600;
        case 0x515604u: goto label_515604;
        case 0x515608u: goto label_515608;
        case 0x51560cu: goto label_51560c;
        case 0x515610u: goto label_515610;
        case 0x515614u: goto label_515614;
        case 0x515618u: goto label_515618;
        case 0x51561cu: goto label_51561c;
        case 0x515620u: goto label_515620;
        case 0x515624u: goto label_515624;
        case 0x515628u: goto label_515628;
        case 0x51562cu: goto label_51562c;
        case 0x515630u: goto label_515630;
        case 0x515634u: goto label_515634;
        case 0x515638u: goto label_515638;
        case 0x51563cu: goto label_51563c;
        case 0x515640u: goto label_515640;
        case 0x515644u: goto label_515644;
        case 0x515648u: goto label_515648;
        case 0x51564cu: goto label_51564c;
        case 0x515650u: goto label_515650;
        case 0x515654u: goto label_515654;
        case 0x515658u: goto label_515658;
        case 0x51565cu: goto label_51565c;
        case 0x515660u: goto label_515660;
        case 0x515664u: goto label_515664;
        case 0x515668u: goto label_515668;
        case 0x51566cu: goto label_51566c;
        case 0x515670u: goto label_515670;
        case 0x515674u: goto label_515674;
        case 0x515678u: goto label_515678;
        case 0x51567cu: goto label_51567c;
        case 0x515680u: goto label_515680;
        case 0x515684u: goto label_515684;
        case 0x515688u: goto label_515688;
        case 0x51568cu: goto label_51568c;
        case 0x515690u: goto label_515690;
        case 0x515694u: goto label_515694;
        case 0x515698u: goto label_515698;
        case 0x51569cu: goto label_51569c;
        case 0x5156a0u: goto label_5156a0;
        case 0x5156a4u: goto label_5156a4;
        case 0x5156a8u: goto label_5156a8;
        case 0x5156acu: goto label_5156ac;
        case 0x5156b0u: goto label_5156b0;
        case 0x5156b4u: goto label_5156b4;
        case 0x5156b8u: goto label_5156b8;
        case 0x5156bcu: goto label_5156bc;
        case 0x5156c0u: goto label_5156c0;
        case 0x5156c4u: goto label_5156c4;
        case 0x5156c8u: goto label_5156c8;
        case 0x5156ccu: goto label_5156cc;
        case 0x5156d0u: goto label_5156d0;
        case 0x5156d4u: goto label_5156d4;
        case 0x5156d8u: goto label_5156d8;
        case 0x5156dcu: goto label_5156dc;
        case 0x5156e0u: goto label_5156e0;
        case 0x5156e4u: goto label_5156e4;
        case 0x5156e8u: goto label_5156e8;
        case 0x5156ecu: goto label_5156ec;
        case 0x5156f0u: goto label_5156f0;
        case 0x5156f4u: goto label_5156f4;
        case 0x5156f8u: goto label_5156f8;
        case 0x5156fcu: goto label_5156fc;
        case 0x515700u: goto label_515700;
        case 0x515704u: goto label_515704;
        case 0x515708u: goto label_515708;
        case 0x51570cu: goto label_51570c;
        case 0x515710u: goto label_515710;
        case 0x515714u: goto label_515714;
        case 0x515718u: goto label_515718;
        case 0x51571cu: goto label_51571c;
        case 0x515720u: goto label_515720;
        case 0x515724u: goto label_515724;
        case 0x515728u: goto label_515728;
        case 0x51572cu: goto label_51572c;
        case 0x515730u: goto label_515730;
        case 0x515734u: goto label_515734;
        case 0x515738u: goto label_515738;
        case 0x51573cu: goto label_51573c;
        case 0x515740u: goto label_515740;
        case 0x515744u: goto label_515744;
        case 0x515748u: goto label_515748;
        case 0x51574cu: goto label_51574c;
        case 0x515750u: goto label_515750;
        case 0x515754u: goto label_515754;
        case 0x515758u: goto label_515758;
        case 0x51575cu: goto label_51575c;
        case 0x515760u: goto label_515760;
        case 0x515764u: goto label_515764;
        case 0x515768u: goto label_515768;
        case 0x51576cu: goto label_51576c;
        case 0x515770u: goto label_515770;
        case 0x515774u: goto label_515774;
        case 0x515778u: goto label_515778;
        case 0x51577cu: goto label_51577c;
        case 0x515780u: goto label_515780;
        case 0x515784u: goto label_515784;
        case 0x515788u: goto label_515788;
        case 0x51578cu: goto label_51578c;
        case 0x515790u: goto label_515790;
        case 0x515794u: goto label_515794;
        case 0x515798u: goto label_515798;
        case 0x51579cu: goto label_51579c;
        case 0x5157a0u: goto label_5157a0;
        case 0x5157a4u: goto label_5157a4;
        case 0x5157a8u: goto label_5157a8;
        case 0x5157acu: goto label_5157ac;
        case 0x5157b0u: goto label_5157b0;
        case 0x5157b4u: goto label_5157b4;
        case 0x5157b8u: goto label_5157b8;
        case 0x5157bcu: goto label_5157bc;
        case 0x5157c0u: goto label_5157c0;
        case 0x5157c4u: goto label_5157c4;
        case 0x5157c8u: goto label_5157c8;
        case 0x5157ccu: goto label_5157cc;
        case 0x5157d0u: goto label_5157d0;
        case 0x5157d4u: goto label_5157d4;
        case 0x5157d8u: goto label_5157d8;
        case 0x5157dcu: goto label_5157dc;
        case 0x5157e0u: goto label_5157e0;
        case 0x5157e4u: goto label_5157e4;
        case 0x5157e8u: goto label_5157e8;
        case 0x5157ecu: goto label_5157ec;
        case 0x5157f0u: goto label_5157f0;
        case 0x5157f4u: goto label_5157f4;
        case 0x5157f8u: goto label_5157f8;
        case 0x5157fcu: goto label_5157fc;
        case 0x515800u: goto label_515800;
        case 0x515804u: goto label_515804;
        case 0x515808u: goto label_515808;
        case 0x51580cu: goto label_51580c;
        case 0x515810u: goto label_515810;
        case 0x515814u: goto label_515814;
        case 0x515818u: goto label_515818;
        case 0x51581cu: goto label_51581c;
        case 0x515820u: goto label_515820;
        case 0x515824u: goto label_515824;
        case 0x515828u: goto label_515828;
        case 0x51582cu: goto label_51582c;
        case 0x515830u: goto label_515830;
        case 0x515834u: goto label_515834;
        case 0x515838u: goto label_515838;
        case 0x51583cu: goto label_51583c;
        case 0x515840u: goto label_515840;
        case 0x515844u: goto label_515844;
        case 0x515848u: goto label_515848;
        case 0x51584cu: goto label_51584c;
        case 0x515850u: goto label_515850;
        case 0x515854u: goto label_515854;
        case 0x515858u: goto label_515858;
        case 0x51585cu: goto label_51585c;
        case 0x515860u: goto label_515860;
        case 0x515864u: goto label_515864;
        case 0x515868u: goto label_515868;
        case 0x51586cu: goto label_51586c;
        case 0x515870u: goto label_515870;
        case 0x515874u: goto label_515874;
        case 0x515878u: goto label_515878;
        case 0x51587cu: goto label_51587c;
        case 0x515880u: goto label_515880;
        case 0x515884u: goto label_515884;
        case 0x515888u: goto label_515888;
        case 0x51588cu: goto label_51588c;
        case 0x515890u: goto label_515890;
        case 0x515894u: goto label_515894;
        case 0x515898u: goto label_515898;
        case 0x51589cu: goto label_51589c;
        case 0x5158a0u: goto label_5158a0;
        case 0x5158a4u: goto label_5158a4;
        case 0x5158a8u: goto label_5158a8;
        case 0x5158acu: goto label_5158ac;
        case 0x5158b0u: goto label_5158b0;
        case 0x5158b4u: goto label_5158b4;
        case 0x5158b8u: goto label_5158b8;
        case 0x5158bcu: goto label_5158bc;
        case 0x5158c0u: goto label_5158c0;
        case 0x5158c4u: goto label_5158c4;
        case 0x5158c8u: goto label_5158c8;
        case 0x5158ccu: goto label_5158cc;
        case 0x5158d0u: goto label_5158d0;
        case 0x5158d4u: goto label_5158d4;
        case 0x5158d8u: goto label_5158d8;
        case 0x5158dcu: goto label_5158dc;
        case 0x5158e0u: goto label_5158e0;
        case 0x5158e4u: goto label_5158e4;
        case 0x5158e8u: goto label_5158e8;
        case 0x5158ecu: goto label_5158ec;
        case 0x5158f0u: goto label_5158f0;
        case 0x5158f4u: goto label_5158f4;
        case 0x5158f8u: goto label_5158f8;
        case 0x5158fcu: goto label_5158fc;
        case 0x515900u: goto label_515900;
        case 0x515904u: goto label_515904;
        case 0x515908u: goto label_515908;
        case 0x51590cu: goto label_51590c;
        case 0x515910u: goto label_515910;
        case 0x515914u: goto label_515914;
        case 0x515918u: goto label_515918;
        case 0x51591cu: goto label_51591c;
        case 0x515920u: goto label_515920;
        case 0x515924u: goto label_515924;
        case 0x515928u: goto label_515928;
        case 0x51592cu: goto label_51592c;
        case 0x515930u: goto label_515930;
        case 0x515934u: goto label_515934;
        case 0x515938u: goto label_515938;
        case 0x51593cu: goto label_51593c;
        case 0x515940u: goto label_515940;
        case 0x515944u: goto label_515944;
        case 0x515948u: goto label_515948;
        case 0x51594cu: goto label_51594c;
        case 0x515950u: goto label_515950;
        case 0x515954u: goto label_515954;
        case 0x515958u: goto label_515958;
        case 0x51595cu: goto label_51595c;
        case 0x515960u: goto label_515960;
        case 0x515964u: goto label_515964;
        case 0x515968u: goto label_515968;
        case 0x51596cu: goto label_51596c;
        case 0x515970u: goto label_515970;
        case 0x515974u: goto label_515974;
        case 0x515978u: goto label_515978;
        case 0x51597cu: goto label_51597c;
        case 0x515980u: goto label_515980;
        case 0x515984u: goto label_515984;
        case 0x515988u: goto label_515988;
        case 0x51598cu: goto label_51598c;
        case 0x515990u: goto label_515990;
        case 0x515994u: goto label_515994;
        case 0x515998u: goto label_515998;
        case 0x51599cu: goto label_51599c;
        case 0x5159a0u: goto label_5159a0;
        case 0x5159a4u: goto label_5159a4;
        case 0x5159a8u: goto label_5159a8;
        case 0x5159acu: goto label_5159ac;
        case 0x5159b0u: goto label_5159b0;
        case 0x5159b4u: goto label_5159b4;
        case 0x5159b8u: goto label_5159b8;
        case 0x5159bcu: goto label_5159bc;
        case 0x5159c0u: goto label_5159c0;
        case 0x5159c4u: goto label_5159c4;
        case 0x5159c8u: goto label_5159c8;
        case 0x5159ccu: goto label_5159cc;
        case 0x5159d0u: goto label_5159d0;
        case 0x5159d4u: goto label_5159d4;
        case 0x5159d8u: goto label_5159d8;
        case 0x5159dcu: goto label_5159dc;
        case 0x5159e0u: goto label_5159e0;
        case 0x5159e4u: goto label_5159e4;
        case 0x5159e8u: goto label_5159e8;
        case 0x5159ecu: goto label_5159ec;
        case 0x5159f0u: goto label_5159f0;
        case 0x5159f4u: goto label_5159f4;
        case 0x5159f8u: goto label_5159f8;
        case 0x5159fcu: goto label_5159fc;
        case 0x515a00u: goto label_515a00;
        case 0x515a04u: goto label_515a04;
        case 0x515a08u: goto label_515a08;
        case 0x515a0cu: goto label_515a0c;
        case 0x515a10u: goto label_515a10;
        case 0x515a14u: goto label_515a14;
        case 0x515a18u: goto label_515a18;
        case 0x515a1cu: goto label_515a1c;
        case 0x515a20u: goto label_515a20;
        case 0x515a24u: goto label_515a24;
        case 0x515a28u: goto label_515a28;
        case 0x515a2cu: goto label_515a2c;
        case 0x515a30u: goto label_515a30;
        case 0x515a34u: goto label_515a34;
        case 0x515a38u: goto label_515a38;
        case 0x515a3cu: goto label_515a3c;
        case 0x515a40u: goto label_515a40;
        case 0x515a44u: goto label_515a44;
        case 0x515a48u: goto label_515a48;
        case 0x515a4cu: goto label_515a4c;
        case 0x515a50u: goto label_515a50;
        case 0x515a54u: goto label_515a54;
        case 0x515a58u: goto label_515a58;
        case 0x515a5cu: goto label_515a5c;
        case 0x515a60u: goto label_515a60;
        case 0x515a64u: goto label_515a64;
        case 0x515a68u: goto label_515a68;
        case 0x515a6cu: goto label_515a6c;
        case 0x515a70u: goto label_515a70;
        case 0x515a74u: goto label_515a74;
        case 0x515a78u: goto label_515a78;
        case 0x515a7cu: goto label_515a7c;
        case 0x515a80u: goto label_515a80;
        case 0x515a84u: goto label_515a84;
        case 0x515a88u: goto label_515a88;
        case 0x515a8cu: goto label_515a8c;
        case 0x515a90u: goto label_515a90;
        case 0x515a94u: goto label_515a94;
        case 0x515a98u: goto label_515a98;
        case 0x515a9cu: goto label_515a9c;
        case 0x515aa0u: goto label_515aa0;
        case 0x515aa4u: goto label_515aa4;
        case 0x515aa8u: goto label_515aa8;
        case 0x515aacu: goto label_515aac;
        case 0x515ab0u: goto label_515ab0;
        case 0x515ab4u: goto label_515ab4;
        case 0x515ab8u: goto label_515ab8;
        case 0x515abcu: goto label_515abc;
        case 0x515ac0u: goto label_515ac0;
        case 0x515ac4u: goto label_515ac4;
        case 0x515ac8u: goto label_515ac8;
        case 0x515accu: goto label_515acc;
        case 0x515ad0u: goto label_515ad0;
        case 0x515ad4u: goto label_515ad4;
        case 0x515ad8u: goto label_515ad8;
        case 0x515adcu: goto label_515adc;
        case 0x515ae0u: goto label_515ae0;
        case 0x515ae4u: goto label_515ae4;
        case 0x515ae8u: goto label_515ae8;
        case 0x515aecu: goto label_515aec;
        case 0x515af0u: goto label_515af0;
        case 0x515af4u: goto label_515af4;
        case 0x515af8u: goto label_515af8;
        case 0x515afcu: goto label_515afc;
        case 0x515b00u: goto label_515b00;
        case 0x515b04u: goto label_515b04;
        case 0x515b08u: goto label_515b08;
        case 0x515b0cu: goto label_515b0c;
        case 0x515b10u: goto label_515b10;
        case 0x515b14u: goto label_515b14;
        case 0x515b18u: goto label_515b18;
        case 0x515b1cu: goto label_515b1c;
        case 0x515b20u: goto label_515b20;
        case 0x515b24u: goto label_515b24;
        case 0x515b28u: goto label_515b28;
        case 0x515b2cu: goto label_515b2c;
        case 0x515b30u: goto label_515b30;
        case 0x515b34u: goto label_515b34;
        case 0x515b38u: goto label_515b38;
        case 0x515b3cu: goto label_515b3c;
        case 0x515b40u: goto label_515b40;
        case 0x515b44u: goto label_515b44;
        case 0x515b48u: goto label_515b48;
        case 0x515b4cu: goto label_515b4c;
        case 0x515b50u: goto label_515b50;
        case 0x515b54u: goto label_515b54;
        case 0x515b58u: goto label_515b58;
        case 0x515b5cu: goto label_515b5c;
        case 0x515b60u: goto label_515b60;
        case 0x515b64u: goto label_515b64;
        case 0x515b68u: goto label_515b68;
        case 0x515b6cu: goto label_515b6c;
        case 0x515b70u: goto label_515b70;
        case 0x515b74u: goto label_515b74;
        case 0x515b78u: goto label_515b78;
        case 0x515b7cu: goto label_515b7c;
        case 0x515b80u: goto label_515b80;
        case 0x515b84u: goto label_515b84;
        case 0x515b88u: goto label_515b88;
        case 0x515b8cu: goto label_515b8c;
        case 0x515b90u: goto label_515b90;
        case 0x515b94u: goto label_515b94;
        case 0x515b98u: goto label_515b98;
        case 0x515b9cu: goto label_515b9c;
        case 0x515ba0u: goto label_515ba0;
        case 0x515ba4u: goto label_515ba4;
        case 0x515ba8u: goto label_515ba8;
        case 0x515bacu: goto label_515bac;
        case 0x515bb0u: goto label_515bb0;
        case 0x515bb4u: goto label_515bb4;
        case 0x515bb8u: goto label_515bb8;
        case 0x515bbcu: goto label_515bbc;
        case 0x515bc0u: goto label_515bc0;
        case 0x515bc4u: goto label_515bc4;
        case 0x515bc8u: goto label_515bc8;
        case 0x515bccu: goto label_515bcc;
        case 0x515bd0u: goto label_515bd0;
        case 0x515bd4u: goto label_515bd4;
        case 0x515bd8u: goto label_515bd8;
        case 0x515bdcu: goto label_515bdc;
        case 0x515be0u: goto label_515be0;
        case 0x515be4u: goto label_515be4;
        case 0x515be8u: goto label_515be8;
        case 0x515becu: goto label_515bec;
        case 0x515bf0u: goto label_515bf0;
        case 0x515bf4u: goto label_515bf4;
        case 0x515bf8u: goto label_515bf8;
        case 0x515bfcu: goto label_515bfc;
        case 0x515c00u: goto label_515c00;
        case 0x515c04u: goto label_515c04;
        case 0x515c08u: goto label_515c08;
        case 0x515c0cu: goto label_515c0c;
        case 0x515c10u: goto label_515c10;
        case 0x515c14u: goto label_515c14;
        case 0x515c18u: goto label_515c18;
        case 0x515c1cu: goto label_515c1c;
        case 0x515c20u: goto label_515c20;
        case 0x515c24u: goto label_515c24;
        case 0x515c28u: goto label_515c28;
        case 0x515c2cu: goto label_515c2c;
        case 0x515c30u: goto label_515c30;
        case 0x515c34u: goto label_515c34;
        case 0x515c38u: goto label_515c38;
        case 0x515c3cu: goto label_515c3c;
        case 0x515c40u: goto label_515c40;
        case 0x515c44u: goto label_515c44;
        case 0x515c48u: goto label_515c48;
        case 0x515c4cu: goto label_515c4c;
        case 0x515c50u: goto label_515c50;
        case 0x515c54u: goto label_515c54;
        case 0x515c58u: goto label_515c58;
        case 0x515c5cu: goto label_515c5c;
        case 0x515c60u: goto label_515c60;
        case 0x515c64u: goto label_515c64;
        case 0x515c68u: goto label_515c68;
        case 0x515c6cu: goto label_515c6c;
        case 0x515c70u: goto label_515c70;
        case 0x515c74u: goto label_515c74;
        case 0x515c78u: goto label_515c78;
        case 0x515c7cu: goto label_515c7c;
        case 0x515c80u: goto label_515c80;
        case 0x515c84u: goto label_515c84;
        case 0x515c88u: goto label_515c88;
        case 0x515c8cu: goto label_515c8c;
        case 0x515c90u: goto label_515c90;
        case 0x515c94u: goto label_515c94;
        case 0x515c98u: goto label_515c98;
        case 0x515c9cu: goto label_515c9c;
        case 0x515ca0u: goto label_515ca0;
        case 0x515ca4u: goto label_515ca4;
        case 0x515ca8u: goto label_515ca8;
        case 0x515cacu: goto label_515cac;
        case 0x515cb0u: goto label_515cb0;
        case 0x515cb4u: goto label_515cb4;
        case 0x515cb8u: goto label_515cb8;
        case 0x515cbcu: goto label_515cbc;
        case 0x515cc0u: goto label_515cc0;
        case 0x515cc4u: goto label_515cc4;
        case 0x515cc8u: goto label_515cc8;
        case 0x515cccu: goto label_515ccc;
        case 0x515cd0u: goto label_515cd0;
        case 0x515cd4u: goto label_515cd4;
        case 0x515cd8u: goto label_515cd8;
        case 0x515cdcu: goto label_515cdc;
        case 0x515ce0u: goto label_515ce0;
        case 0x515ce4u: goto label_515ce4;
        case 0x515ce8u: goto label_515ce8;
        case 0x515cecu: goto label_515cec;
        case 0x515cf0u: goto label_515cf0;
        case 0x515cf4u: goto label_515cf4;
        case 0x515cf8u: goto label_515cf8;
        case 0x515cfcu: goto label_515cfc;
        case 0x515d00u: goto label_515d00;
        case 0x515d04u: goto label_515d04;
        case 0x515d08u: goto label_515d08;
        case 0x515d0cu: goto label_515d0c;
        case 0x515d10u: goto label_515d10;
        case 0x515d14u: goto label_515d14;
        case 0x515d18u: goto label_515d18;
        case 0x515d1cu: goto label_515d1c;
        case 0x515d20u: goto label_515d20;
        case 0x515d24u: goto label_515d24;
        case 0x515d28u: goto label_515d28;
        case 0x515d2cu: goto label_515d2c;
        case 0x515d30u: goto label_515d30;
        case 0x515d34u: goto label_515d34;
        case 0x515d38u: goto label_515d38;
        case 0x515d3cu: goto label_515d3c;
        case 0x515d40u: goto label_515d40;
        case 0x515d44u: goto label_515d44;
        case 0x515d48u: goto label_515d48;
        case 0x515d4cu: goto label_515d4c;
        case 0x515d50u: goto label_515d50;
        case 0x515d54u: goto label_515d54;
        case 0x515d58u: goto label_515d58;
        case 0x515d5cu: goto label_515d5c;
        case 0x515d60u: goto label_515d60;
        case 0x515d64u: goto label_515d64;
        case 0x515d68u: goto label_515d68;
        case 0x515d6cu: goto label_515d6c;
        case 0x515d70u: goto label_515d70;
        case 0x515d74u: goto label_515d74;
        case 0x515d78u: goto label_515d78;
        case 0x515d7cu: goto label_515d7c;
        case 0x515d80u: goto label_515d80;
        case 0x515d84u: goto label_515d84;
        case 0x515d88u: goto label_515d88;
        case 0x515d8cu: goto label_515d8c;
        case 0x515d90u: goto label_515d90;
        case 0x515d94u: goto label_515d94;
        case 0x515d98u: goto label_515d98;
        case 0x515d9cu: goto label_515d9c;
        case 0x515da0u: goto label_515da0;
        case 0x515da4u: goto label_515da4;
        case 0x515da8u: goto label_515da8;
        case 0x515dacu: goto label_515dac;
        case 0x515db0u: goto label_515db0;
        case 0x515db4u: goto label_515db4;
        case 0x515db8u: goto label_515db8;
        case 0x515dbcu: goto label_515dbc;
        case 0x515dc0u: goto label_515dc0;
        case 0x515dc4u: goto label_515dc4;
        case 0x515dc8u: goto label_515dc8;
        case 0x515dccu: goto label_515dcc;
        case 0x515dd0u: goto label_515dd0;
        case 0x515dd4u: goto label_515dd4;
        case 0x515dd8u: goto label_515dd8;
        case 0x515ddcu: goto label_515ddc;
        case 0x515de0u: goto label_515de0;
        case 0x515de4u: goto label_515de4;
        case 0x515de8u: goto label_515de8;
        case 0x515decu: goto label_515dec;
        case 0x515df0u: goto label_515df0;
        case 0x515df4u: goto label_515df4;
        case 0x515df8u: goto label_515df8;
        case 0x515dfcu: goto label_515dfc;
        case 0x515e00u: goto label_515e00;
        case 0x515e04u: goto label_515e04;
        case 0x515e08u: goto label_515e08;
        case 0x515e0cu: goto label_515e0c;
        case 0x515e10u: goto label_515e10;
        case 0x515e14u: goto label_515e14;
        case 0x515e18u: goto label_515e18;
        case 0x515e1cu: goto label_515e1c;
        case 0x515e20u: goto label_515e20;
        case 0x515e24u: goto label_515e24;
        case 0x515e28u: goto label_515e28;
        case 0x515e2cu: goto label_515e2c;
        case 0x515e30u: goto label_515e30;
        case 0x515e34u: goto label_515e34;
        case 0x515e38u: goto label_515e38;
        case 0x515e3cu: goto label_515e3c;
        case 0x515e40u: goto label_515e40;
        case 0x515e44u: goto label_515e44;
        case 0x515e48u: goto label_515e48;
        case 0x515e4cu: goto label_515e4c;
        case 0x515e50u: goto label_515e50;
        case 0x515e54u: goto label_515e54;
        case 0x515e58u: goto label_515e58;
        case 0x515e5cu: goto label_515e5c;
        case 0x515e60u: goto label_515e60;
        case 0x515e64u: goto label_515e64;
        case 0x515e68u: goto label_515e68;
        case 0x515e6cu: goto label_515e6c;
        case 0x515e70u: goto label_515e70;
        case 0x515e74u: goto label_515e74;
        case 0x515e78u: goto label_515e78;
        case 0x515e7cu: goto label_515e7c;
        case 0x515e80u: goto label_515e80;
        case 0x515e84u: goto label_515e84;
        case 0x515e88u: goto label_515e88;
        case 0x515e8cu: goto label_515e8c;
        case 0x515e90u: goto label_515e90;
        case 0x515e94u: goto label_515e94;
        case 0x515e98u: goto label_515e98;
        case 0x515e9cu: goto label_515e9c;
        case 0x515ea0u: goto label_515ea0;
        case 0x515ea4u: goto label_515ea4;
        case 0x515ea8u: goto label_515ea8;
        case 0x515eacu: goto label_515eac;
        case 0x515eb0u: goto label_515eb0;
        case 0x515eb4u: goto label_515eb4;
        case 0x515eb8u: goto label_515eb8;
        case 0x515ebcu: goto label_515ebc;
        case 0x515ec0u: goto label_515ec0;
        case 0x515ec4u: goto label_515ec4;
        case 0x515ec8u: goto label_515ec8;
        case 0x515eccu: goto label_515ecc;
        case 0x515ed0u: goto label_515ed0;
        case 0x515ed4u: goto label_515ed4;
        case 0x515ed8u: goto label_515ed8;
        case 0x515edcu: goto label_515edc;
        case 0x515ee0u: goto label_515ee0;
        case 0x515ee4u: goto label_515ee4;
        case 0x515ee8u: goto label_515ee8;
        case 0x515eecu: goto label_515eec;
        case 0x515ef0u: goto label_515ef0;
        case 0x515ef4u: goto label_515ef4;
        case 0x515ef8u: goto label_515ef8;
        case 0x515efcu: goto label_515efc;
        case 0x515f00u: goto label_515f00;
        case 0x515f04u: goto label_515f04;
        case 0x515f08u: goto label_515f08;
        case 0x515f0cu: goto label_515f0c;
        case 0x515f10u: goto label_515f10;
        case 0x515f14u: goto label_515f14;
        case 0x515f18u: goto label_515f18;
        case 0x515f1cu: goto label_515f1c;
        case 0x515f20u: goto label_515f20;
        case 0x515f24u: goto label_515f24;
        case 0x515f28u: goto label_515f28;
        case 0x515f2cu: goto label_515f2c;
        case 0x515f30u: goto label_515f30;
        case 0x515f34u: goto label_515f34;
        case 0x515f38u: goto label_515f38;
        case 0x515f3cu: goto label_515f3c;
        case 0x515f40u: goto label_515f40;
        case 0x515f44u: goto label_515f44;
        case 0x515f48u: goto label_515f48;
        case 0x515f4cu: goto label_515f4c;
        case 0x515f50u: goto label_515f50;
        case 0x515f54u: goto label_515f54;
        case 0x515f58u: goto label_515f58;
        case 0x515f5cu: goto label_515f5c;
        case 0x515f60u: goto label_515f60;
        case 0x515f64u: goto label_515f64;
        case 0x515f68u: goto label_515f68;
        case 0x515f6cu: goto label_515f6c;
        case 0x515f70u: goto label_515f70;
        case 0x515f74u: goto label_515f74;
        case 0x515f78u: goto label_515f78;
        case 0x515f7cu: goto label_515f7c;
        case 0x515f80u: goto label_515f80;
        case 0x515f84u: goto label_515f84;
        case 0x515f88u: goto label_515f88;
        case 0x515f8cu: goto label_515f8c;
        case 0x515f90u: goto label_515f90;
        case 0x515f94u: goto label_515f94;
        case 0x515f98u: goto label_515f98;
        case 0x515f9cu: goto label_515f9c;
        case 0x515fa0u: goto label_515fa0;
        case 0x515fa4u: goto label_515fa4;
        case 0x515fa8u: goto label_515fa8;
        case 0x515facu: goto label_515fac;
        case 0x515fb0u: goto label_515fb0;
        case 0x515fb4u: goto label_515fb4;
        case 0x515fb8u: goto label_515fb8;
        case 0x515fbcu: goto label_515fbc;
        case 0x515fc0u: goto label_515fc0;
        case 0x515fc4u: goto label_515fc4;
        case 0x515fc8u: goto label_515fc8;
        case 0x515fccu: goto label_515fcc;
        case 0x515fd0u: goto label_515fd0;
        case 0x515fd4u: goto label_515fd4;
        case 0x515fd8u: goto label_515fd8;
        case 0x515fdcu: goto label_515fdc;
        case 0x515fe0u: goto label_515fe0;
        case 0x515fe4u: goto label_515fe4;
        case 0x515fe8u: goto label_515fe8;
        case 0x515fecu: goto label_515fec;
        case 0x515ff0u: goto label_515ff0;
        case 0x515ff4u: goto label_515ff4;
        case 0x515ff8u: goto label_515ff8;
        case 0x515ffcu: goto label_515ffc;
        case 0x516000u: goto label_516000;
        case 0x516004u: goto label_516004;
        case 0x516008u: goto label_516008;
        case 0x51600cu: goto label_51600c;
        case 0x516010u: goto label_516010;
        case 0x516014u: goto label_516014;
        case 0x516018u: goto label_516018;
        case 0x51601cu: goto label_51601c;
        case 0x516020u: goto label_516020;
        case 0x516024u: goto label_516024;
        case 0x516028u: goto label_516028;
        case 0x51602cu: goto label_51602c;
        case 0x516030u: goto label_516030;
        case 0x516034u: goto label_516034;
        case 0x516038u: goto label_516038;
        case 0x51603cu: goto label_51603c;
        case 0x516040u: goto label_516040;
        case 0x516044u: goto label_516044;
        case 0x516048u: goto label_516048;
        case 0x51604cu: goto label_51604c;
        case 0x516050u: goto label_516050;
        case 0x516054u: goto label_516054;
        case 0x516058u: goto label_516058;
        case 0x51605cu: goto label_51605c;
        case 0x516060u: goto label_516060;
        case 0x516064u: goto label_516064;
        case 0x516068u: goto label_516068;
        case 0x51606cu: goto label_51606c;
        case 0x516070u: goto label_516070;
        case 0x516074u: goto label_516074;
        case 0x516078u: goto label_516078;
        case 0x51607cu: goto label_51607c;
        case 0x516080u: goto label_516080;
        case 0x516084u: goto label_516084;
        case 0x516088u: goto label_516088;
        case 0x51608cu: goto label_51608c;
        case 0x516090u: goto label_516090;
        case 0x516094u: goto label_516094;
        case 0x516098u: goto label_516098;
        case 0x51609cu: goto label_51609c;
        case 0x5160a0u: goto label_5160a0;
        case 0x5160a4u: goto label_5160a4;
        case 0x5160a8u: goto label_5160a8;
        case 0x5160acu: goto label_5160ac;
        default: break;
    }

    ctx->pc = 0x513920u;

label_513920:
    // 0x513920: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x513920u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_513924:
    // 0x513924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513928:
    // 0x513928: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
label_51392c:
    if (ctx->pc == 0x51392Cu) {
        ctx->pc = 0x513930u;
        goto label_513930;
    }
    ctx->pc = 0x513928u;
    {
        const bool branch_taken_0x513928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x513928) {
            ctx->pc = 0x513954u;
            goto label_513954;
        }
    }
    ctx->pc = 0x513930u;
label_513930:
    // 0x513930: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_513934:
    if (ctx->pc == 0x513934u) {
        ctx->pc = 0x513938u;
        goto label_513938;
    }
    ctx->pc = 0x513930u;
    {
        const bool branch_taken_0x513930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x513930) {
            ctx->pc = 0x513940u;
            goto label_513940;
        }
    }
    ctx->pc = 0x513938u;
label_513938:
    // 0x513938: 0x1000000a  b           . + 4 + (0xA << 2)
label_51393c:
    if (ctx->pc == 0x51393Cu) {
        ctx->pc = 0x513940u;
        goto label_513940;
    }
    ctx->pc = 0x513938u;
    {
        const bool branch_taken_0x513938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513938) {
            ctx->pc = 0x513964u;
            goto label_513964;
        }
    }
    ctx->pc = 0x513940u;
label_513940:
    // 0x513940: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x513940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_513944:
    // 0x513944: 0x8c630e80  lw          $v1, 0xE80($v1)
    ctx->pc = 0x513944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_513948:
    // 0x513948: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x513948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_51394c:
    // 0x51394c: 0x10000005  b           . + 4 + (0x5 << 2)
label_513950:
    if (ctx->pc == 0x513950u) {
        ctx->pc = 0x513950u;
            // 0x513950: 0xac830104  sw          $v1, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
        ctx->pc = 0x513954u;
        goto label_513954;
    }
    ctx->pc = 0x51394Cu;
    {
        const bool branch_taken_0x51394c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51394Cu;
            // 0x513950: 0xac830104  sw          $v1, 0x104($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51394c) {
            ctx->pc = 0x513964u;
            goto label_513964;
        }
    }
    ctx->pc = 0x513954u;
label_513954:
    // 0x513954: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x513954u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_513958:
    // 0x513958: 0x8c630ea8  lw          $v1, 0xEA8($v1)
    ctx->pc = 0x513958u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3752)));
label_51395c:
    // 0x51395c: 0x8c630054  lw          $v1, 0x54($v1)
    ctx->pc = 0x51395cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_513960:
    // 0x513960: 0xac830104  sw          $v1, 0x104($a0)
    ctx->pc = 0x513960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 3));
label_513964:
    // 0x513964: 0x3e00008  jr          $ra
label_513968:
    if (ctx->pc == 0x513968u) {
        ctx->pc = 0x51396Cu;
        goto label_51396c;
    }
    ctx->pc = 0x513964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51396Cu;
label_51396c:
    // 0x51396c: 0x0  nop
    ctx->pc = 0x51396cu;
    // NOP
label_513970:
    // 0x513970: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x513970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_513974:
    // 0x513974: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x513974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_513978:
    // 0x513978: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x513978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_51397c:
    // 0x51397c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x51397cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_513980:
    // 0x513980: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x513980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_513984:
    // 0x513984: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x513984u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_513988:
    // 0x513988: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x513988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51398c:
    // 0x51398c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_513990:
    // 0x513990: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x513990u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_513994:
    // 0x513994: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x513994u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_513998:
    // 0x513998: 0x8e220e30  lw          $v0, 0xE30($s1)
    ctx->pc = 0x513998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_51399c:
    // 0x51399c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_5139a0:
    if (ctx->pc == 0x5139A0u) {
        ctx->pc = 0x5139A0u;
            // 0x5139a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5139A4u;
        goto label_5139a4;
    }
    ctx->pc = 0x51399Cu;
    {
        const bool branch_taken_0x51399c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5139A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51399Cu;
            // 0x5139a0: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51399c) {
            ctx->pc = 0x5139ACu;
            goto label_5139ac;
        }
    }
    ctx->pc = 0x5139A4u;
label_5139a4:
    // 0x5139a4: 0x10000010  b           . + 4 + (0x10 << 2)
label_5139a8:
    if (ctx->pc == 0x5139A8u) {
        ctx->pc = 0x5139A8u;
            // 0x5139a8: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x5139ACu;
        goto label_5139ac;
    }
    ctx->pc = 0x5139A4u;
    {
        const bool branch_taken_0x5139a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5139A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5139A4u;
            // 0x5139a8: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5139a4) {
            ctx->pc = 0x5139E8u;
            goto label_5139e8;
        }
    }
    ctx->pc = 0x5139ACu;
label_5139ac:
    // 0x5139ac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5139acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5139b0:
    // 0x5139b0: 0xc04cc44  jal         func_133110
label_5139b4:
    if (ctx->pc == 0x5139B4u) {
        ctx->pc = 0x5139B4u;
            // 0x5139b4: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x5139B8u;
        goto label_5139b8;
    }
    ctx->pc = 0x5139B0u;
    SET_GPR_U32(ctx, 31, 0x5139B8u);
    ctx->pc = 0x5139B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5139B0u;
            // 0x5139b4: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139B8u; }
        if (ctx->pc != 0x5139B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139B8u; }
        if (ctx->pc != 0x5139B8u) { return; }
    }
    ctx->pc = 0x5139B8u;
label_5139b8:
    // 0x5139b8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x5139b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_5139bc:
    // 0x5139bc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x5139bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5139c0:
    // 0x5139c0: 0xc075378  jal         func_1D4DE0
label_5139c4:
    if (ctx->pc == 0x5139C4u) {
        ctx->pc = 0x5139C4u;
            // 0x5139c4: 0x26260910  addiu       $a2, $s1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
        ctx->pc = 0x5139C8u;
        goto label_5139c8;
    }
    ctx->pc = 0x5139C0u;
    SET_GPR_U32(ctx, 31, 0x5139C8u);
    ctx->pc = 0x5139C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5139C0u;
            // 0x5139c4: 0x26260910  addiu       $a2, $s1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139C8u; }
        if (ctx->pc != 0x5139C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139C8u; }
        if (ctx->pc != 0x5139C8u) { return; }
    }
    ctx->pc = 0x5139C8u;
label_5139c8:
    // 0x5139c8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x5139c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5139cc:
    // 0x5139cc: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x5139ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_5139d0:
    // 0x5139d0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x5139d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_5139d4:
    // 0x5139d4: 0xc0c753c  jal         func_31D4F0
label_5139d8:
    if (ctx->pc == 0x5139D8u) {
        ctx->pc = 0x5139D8u;
            // 0x5139d8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x5139DCu;
        goto label_5139dc;
    }
    ctx->pc = 0x5139D4u;
    SET_GPR_U32(ctx, 31, 0x5139DCu);
    ctx->pc = 0x5139D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5139D4u;
            // 0x5139d8: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139DCu; }
        if (ctx->pc != 0x5139DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139DCu; }
        if (ctx->pc != 0x5139DCu) { return; }
    }
    ctx->pc = 0x5139DCu;
label_5139dc:
    // 0x5139dc: 0xc0b9210  jal         func_2E4840
label_5139e0:
    if (ctx->pc == 0x5139E0u) {
        ctx->pc = 0x5139E0u;
            // 0x5139e0: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x5139E4u;
        goto label_5139e4;
    }
    ctx->pc = 0x5139DCu;
    SET_GPR_U32(ctx, 31, 0x5139E4u);
    ctx->pc = 0x5139E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5139DCu;
            // 0x5139e0: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139E4u; }
        if (ctx->pc != 0x5139E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5139E4u; }
        if (ctx->pc != 0x5139E4u) { return; }
    }
    ctx->pc = 0x5139E4u;
label_5139e4:
    // 0x5139e4: 0x82450074  lb          $a1, 0x74($s2)
    ctx->pc = 0x5139e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5139e8:
    // 0x5139e8: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5139e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_5139ec:
    // 0x5139ec: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x5139ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_5139f0:
    // 0x5139f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x5139f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_5139f4:
    // 0x5139f4: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x5139f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5139f8:
    // 0x5139f8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5139f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5139fc:
    // 0x5139fc: 0x10a200cf  beq         $a1, $v0, . + 4 + (0xCF << 2)
label_513a00:
    if (ctx->pc == 0x513A00u) {
        ctx->pc = 0x513A00u;
            // 0x513a00: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x513A04u;
        goto label_513a04;
    }
    ctx->pc = 0x5139FCu;
    {
        const bool branch_taken_0x5139fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x513A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5139FCu;
            // 0x513a00: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5139fc) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513A04u;
label_513a04:
    // 0x513a04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x513a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_513a08:
    // 0x513a08: 0x50a20086  beql        $a1, $v0, . + 4 + (0x86 << 2)
label_513a0c:
    if (ctx->pc == 0x513A0Cu) {
        ctx->pc = 0x513A0Cu;
            // 0x513a0c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x513A10u;
        goto label_513a10;
    }
    ctx->pc = 0x513A08u;
    {
        const bool branch_taken_0x513a08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x513a08) {
            ctx->pc = 0x513A0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513A08u;
            // 0x513a0c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x513C24u;
            goto label_513c24;
        }
    }
    ctx->pc = 0x513A10u;
label_513a10:
    // 0x513a10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513a10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513a14:
    // 0x513a14: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_513a18:
    if (ctx->pc == 0x513A18u) {
        ctx->pc = 0x513A18u;
            // 0x513a18: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x513A1Cu;
        goto label_513a1c;
    }
    ctx->pc = 0x513A14u;
    {
        const bool branch_taken_0x513a14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x513a14) {
            ctx->pc = 0x513A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513A14u;
            // 0x513a18: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x513B34u;
            goto label_513b34;
        }
    }
    ctx->pc = 0x513A1Cu;
label_513a1c:
    // 0x513a1c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_513a20:
    if (ctx->pc == 0x513A20u) {
        ctx->pc = 0x513A24u;
        goto label_513a24;
    }
    ctx->pc = 0x513A1Cu;
    {
        const bool branch_taken_0x513a1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a1c) {
            ctx->pc = 0x513A2Cu;
            goto label_513a2c;
        }
    }
    ctx->pc = 0x513A24u;
label_513a24:
    // 0x513a24: 0x100000c6  b           . + 4 + (0xC6 << 2)
label_513a28:
    if (ctx->pc == 0x513A28u) {
        ctx->pc = 0x513A28u;
            // 0x513a28: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x513A2Cu;
        goto label_513a2c;
    }
    ctx->pc = 0x513A24u;
    {
        const bool branch_taken_0x513a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513A24u;
            // 0x513a28: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513a24) {
            ctx->pc = 0x513D40u;
            goto label_513d40;
        }
    }
    ctx->pc = 0x513A2Cu;
label_513a2c:
    // 0x513a2c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x513a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_513a30:
    // 0x513a30: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x513a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_513a34:
    // 0x513a34: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x513a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513a38:
    // 0x513a38: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x513a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513a3c:
    // 0x513a3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x513a3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_513a40:
    // 0x513a40: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x513a40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513a44:
    // 0x513a44: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_513a48:
    if (ctx->pc == 0x513A48u) {
        ctx->pc = 0x513A48u;
            // 0x513a48: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x513A4Cu;
        goto label_513a4c;
    }
    ctx->pc = 0x513A44u;
    {
        const bool branch_taken_0x513a44 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x513A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513A44u;
            // 0x513a48: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513a44) {
            ctx->pc = 0x513A64u;
            goto label_513a64;
        }
    }
    ctx->pc = 0x513A4Cu;
label_513a4c:
    // 0x513a4c: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x513a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_513a50:
    // 0x513a50: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x513a50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_513a54:
    // 0x513a54: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x513a54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513a58:
    // 0x513a58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x513a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_513a5c:
    // 0x513a5c: 0x10000002  b           . + 4 + (0x2 << 2)
label_513a60:
    if (ctx->pc == 0x513A60u) {
        ctx->pc = 0x513A60u;
            // 0x513a60: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x513A64u;
        goto label_513a64;
    }
    ctx->pc = 0x513A5Cu;
    {
        const bool branch_taken_0x513a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513A5Cu;
            // 0x513a60: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513a5c) {
            ctx->pc = 0x513A68u;
            goto label_513a68;
        }
    }
    ctx->pc = 0x513A64u;
label_513a64:
    // 0x513a64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x513a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513a68:
    // 0x513a68: 0x106000b4  beqz        $v1, . + 4 + (0xB4 << 2)
label_513a6c:
    if (ctx->pc == 0x513A6Cu) {
        ctx->pc = 0x513A70u;
        goto label_513a70;
    }
    ctx->pc = 0x513A68u;
    {
        const bool branch_taken_0x513a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x513a68) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513A70u;
label_513a70:
    // 0x513a70: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x513a70u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513a74:
    // 0x513a74: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x513a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_513a78:
    // 0x513a78: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x513a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_513a7c:
    // 0x513a7c: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x513a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_513a80:
    // 0x513a80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513a84:
    // 0x513a84: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513a84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513a88:
    // 0x513a88: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x513a88u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_513a8c:
    // 0x513a8c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x513a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_513a90:
    // 0x513a90: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x513a90u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_513a94:
    // 0x513a94: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x513a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513a98:
    // 0x513a98: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x513a98u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_513a9c:
    // 0x513a9c: 0xc1425e0  jal         func_509780
label_513aa0:
    if (ctx->pc == 0x513AA0u) {
        ctx->pc = 0x513AA0u;
            // 0x513aa0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x513AA4u;
        goto label_513aa4;
    }
    ctx->pc = 0x513A9Cu;
    SET_GPR_U32(ctx, 31, 0x513AA4u);
    ctx->pc = 0x513AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513A9Cu;
            // 0x513aa0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513AA4u; }
        if (ctx->pc != 0x513AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513AA4u; }
        if (ctx->pc != 0x513AA4u) { return; }
    }
    ctx->pc = 0x513AA4u;
label_513aa4:
    // 0x513aa4: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x513aa4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513aa8:
    // 0x513aa8: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x513aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_513aac:
    // 0x513aac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x513aacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_513ab0:
    // 0x513ab0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x513ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_513ab4:
    // 0x513ab4: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x513ab4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_513ab8:
    // 0x513ab8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x513ab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_513abc:
    // 0x513abc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_513ac0:
    if (ctx->pc == 0x513AC0u) {
        ctx->pc = 0x513AC0u;
            // 0x513ac0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x513AC4u;
        goto label_513ac4;
    }
    ctx->pc = 0x513ABCu;
    {
        const bool branch_taken_0x513abc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513abc) {
            ctx->pc = 0x513AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513ABCu;
            // 0x513ac0: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513AD0u;
            goto label_513ad0;
        }
    }
    ctx->pc = 0x513AC4u;
label_513ac4:
    // 0x513ac4: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x513ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_513ac8:
    // 0x513ac8: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x513ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513acc:
    // 0x513acc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x513accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_513ad0:
    // 0x513ad0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513ad4:
    // 0x513ad4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513ad8:
    // 0x513ad8: 0x0  nop
    ctx->pc = 0x513ad8u;
    // NOP
label_513adc:
    // 0x513adc: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x513adcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_513ae0:
    // 0x513ae0: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x513ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513ae4:
    // 0x513ae4: 0x0  nop
    ctx->pc = 0x513ae4u;
    // NOP
label_513ae8:
    // 0x513ae8: 0x0  nop
    ctx->pc = 0x513ae8u;
    // NOP
label_513aec:
    // 0x513aec: 0xc1425a8  jal         func_5096A0
label_513af0:
    if (ctx->pc == 0x513AF0u) {
        ctx->pc = 0x513AF0u;
            // 0x513af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513AF4u;
        goto label_513af4;
    }
    ctx->pc = 0x513AECu;
    SET_GPR_U32(ctx, 31, 0x513AF4u);
    ctx->pc = 0x513AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513AECu;
            // 0x513af0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513AF4u; }
        if (ctx->pc != 0x513AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513AF4u; }
        if (ctx->pc != 0x513AF4u) { return; }
    }
    ctx->pc = 0x513AF4u;
label_513af4:
    // 0x513af4: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x513af4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_513af8:
    // 0x513af8: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x513af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_513afc:
    // 0x513afc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x513afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_513b00:
    // 0x513b00: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x513b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_513b04:
    // 0x513b04: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x513b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_513b08:
    // 0x513b08: 0xc0a545c  jal         func_295170
label_513b0c:
    if (ctx->pc == 0x513B0Cu) {
        ctx->pc = 0x513B0Cu;
            // 0x513b0c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x513B10u;
        goto label_513b10;
    }
    ctx->pc = 0x513B08u;
    SET_GPR_U32(ctx, 31, 0x513B10u);
    ctx->pc = 0x513B0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513B08u;
            // 0x513b0c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B10u; }
        if (ctx->pc != 0x513B10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B10u; }
        if (ctx->pc != 0x513B10u) { return; }
    }
    ctx->pc = 0x513B10u;
label_513b10:
    // 0x513b10: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x513b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_513b14:
    // 0x513b14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x513b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_513b18:
    // 0x513b18: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x513b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_513b1c:
    // 0x513b1c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x513b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_513b20:
    // 0x513b20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x513b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_513b24:
    // 0x513b24: 0xc08bf20  jal         func_22FC80
label_513b28:
    if (ctx->pc == 0x513B28u) {
        ctx->pc = 0x513B28u;
            // 0x513b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513B2Cu;
        goto label_513b2c;
    }
    ctx->pc = 0x513B24u;
    SET_GPR_U32(ctx, 31, 0x513B2Cu);
    ctx->pc = 0x513B28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513B24u;
            // 0x513b28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B2Cu; }
        if (ctx->pc != 0x513B2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B2Cu; }
        if (ctx->pc != 0x513B2Cu) { return; }
    }
    ctx->pc = 0x513B2Cu;
label_513b2c:
    // 0x513b2c: 0x10000083  b           . + 4 + (0x83 << 2)
label_513b30:
    if (ctx->pc == 0x513B30u) {
        ctx->pc = 0x513B34u;
        goto label_513b34;
    }
    ctx->pc = 0x513B2Cu;
    {
        const bool branch_taken_0x513b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513b2c) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513B34u;
label_513b34:
    // 0x513b34: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513b34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513b38:
    // 0x513b38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513b3c:
    // 0x513b3c: 0xc142520  jal         func_509480
label_513b40:
    if (ctx->pc == 0x513B40u) {
        ctx->pc = 0x513B40u;
            // 0x513b40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x513B44u;
        goto label_513b44;
    }
    ctx->pc = 0x513B3Cu;
    SET_GPR_U32(ctx, 31, 0x513B44u);
    ctx->pc = 0x513B40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513B3Cu;
            // 0x513b40: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B44u; }
        if (ctx->pc != 0x513B44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513B44u; }
        if (ctx->pc != 0x513B44u) { return; }
    }
    ctx->pc = 0x513B44u;
label_513b44:
    // 0x513b44: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x513b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_513b48:
    // 0x513b48: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x513b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_513b4c:
    // 0x513b4c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x513b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513b50:
    // 0x513b50: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x513b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513b54:
    // 0x513b54: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x513b54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_513b58:
    // 0x513b58: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x513b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513b5c:
    // 0x513b5c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_513b60:
    if (ctx->pc == 0x513B60u) {
        ctx->pc = 0x513B60u;
            // 0x513b60: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x513B64u;
        goto label_513b64;
    }
    ctx->pc = 0x513B5Cu;
    {
        const bool branch_taken_0x513b5c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x513B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513B5Cu;
            // 0x513b60: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513b5c) {
            ctx->pc = 0x513B7Cu;
            goto label_513b7c;
        }
    }
    ctx->pc = 0x513B64u;
label_513b64:
    // 0x513b64: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x513b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_513b68:
    // 0x513b68: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x513b68u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_513b6c:
    // 0x513b6c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x513b6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513b70:
    // 0x513b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x513b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_513b74:
    // 0x513b74: 0x10000002  b           . + 4 + (0x2 << 2)
label_513b78:
    if (ctx->pc == 0x513B78u) {
        ctx->pc = 0x513B78u;
            // 0x513b78: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x513B7Cu;
        goto label_513b7c;
    }
    ctx->pc = 0x513B74u;
    {
        const bool branch_taken_0x513b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513B74u;
            // 0x513b78: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513b74) {
            ctx->pc = 0x513B80u;
            goto label_513b80;
        }
    }
    ctx->pc = 0x513B7Cu;
label_513b7c:
    // 0x513b7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x513b7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513b80:
    // 0x513b80: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_513b84:
    if (ctx->pc == 0x513B84u) {
        ctx->pc = 0x513B88u;
        goto label_513b88;
    }
    ctx->pc = 0x513B80u;
    {
        const bool branch_taken_0x513b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x513b80) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513B88u;
label_513b88:
    // 0x513b88: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x513b88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513b8c:
    // 0x513b8c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x513b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_513b90:
    // 0x513b90: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x513b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_513b94:
    // 0x513b94: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x513b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_513b98:
    // 0x513b98: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513b98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513b9c:
    // 0x513b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513ba0:
    // 0x513ba0: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x513ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_513ba4:
    // 0x513ba4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x513ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_513ba8:
    // 0x513ba8: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x513ba8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_513bac:
    // 0x513bac: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x513bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513bb0:
    // 0x513bb0: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x513bb0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_513bb4:
    // 0x513bb4: 0xc1425e0  jal         func_509780
label_513bb8:
    if (ctx->pc == 0x513BB8u) {
        ctx->pc = 0x513BB8u;
            // 0x513bb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x513BBCu;
        goto label_513bbc;
    }
    ctx->pc = 0x513BB4u;
    SET_GPR_U32(ctx, 31, 0x513BBCu);
    ctx->pc = 0x513BB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513BB4u;
            // 0x513bb8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513BBCu; }
        if (ctx->pc != 0x513BBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513BBCu; }
        if (ctx->pc != 0x513BBCu) { return; }
    }
    ctx->pc = 0x513BBCu;
label_513bbc:
    // 0x513bbc: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x513bbcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513bc0:
    // 0x513bc0: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x513bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_513bc4:
    // 0x513bc4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x513bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_513bc8:
    // 0x513bc8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x513bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_513bcc:
    // 0x513bcc: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x513bccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
label_513bd0:
    // 0x513bd0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x513bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_513bd4:
    // 0x513bd4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_513bd8:
    if (ctx->pc == 0x513BD8u) {
        ctx->pc = 0x513BDCu;
        goto label_513bdc;
    }
    ctx->pc = 0x513BD4u;
    {
        const bool branch_taken_0x513bd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x513bd4) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513BDCu;
label_513bdc:
    // 0x513bdc: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x513bdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_513be0:
    // 0x513be0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x513be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_513be4:
    // 0x513be4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_513be8:
    if (ctx->pc == 0x513BE8u) {
        ctx->pc = 0x513BE8u;
            // 0x513be8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x513BECu;
        goto label_513bec;
    }
    ctx->pc = 0x513BE4u;
    {
        const bool branch_taken_0x513be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513be4) {
            ctx->pc = 0x513BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513BE4u;
            // 0x513be8: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513BF8u;
            goto label_513bf8;
        }
    }
    ctx->pc = 0x513BECu;
label_513bec:
    // 0x513bec: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x513becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_513bf0:
    // 0x513bf0: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x513bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513bf4:
    // 0x513bf4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x513bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_513bf8:
    // 0x513bf8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513bf8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513bfc:
    // 0x513bfc: 0x0  nop
    ctx->pc = 0x513bfcu;
    // NOP
label_513c00:
    // 0x513c00: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x513c00u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_513c04:
    // 0x513c04: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x513c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513c08:
    // 0x513c08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513c08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513c0c:
    // 0x513c0c: 0x0  nop
    ctx->pc = 0x513c0cu;
    // NOP
label_513c10:
    // 0x513c10: 0x0  nop
    ctx->pc = 0x513c10u;
    // NOP
label_513c14:
    // 0x513c14: 0xc1425a8  jal         func_5096A0
label_513c18:
    if (ctx->pc == 0x513C18u) {
        ctx->pc = 0x513C18u;
            // 0x513c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513C1Cu;
        goto label_513c1c;
    }
    ctx->pc = 0x513C14u;
    SET_GPR_U32(ctx, 31, 0x513C1Cu);
    ctx->pc = 0x513C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513C14u;
            // 0x513c18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C1Cu; }
        if (ctx->pc != 0x513C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C1Cu; }
        if (ctx->pc != 0x513C1Cu) { return; }
    }
    ctx->pc = 0x513C1Cu;
label_513c1c:
    // 0x513c1c: 0x10000047  b           . + 4 + (0x47 << 2)
label_513c20:
    if (ctx->pc == 0x513C20u) {
        ctx->pc = 0x513C24u;
        goto label_513c24;
    }
    ctx->pc = 0x513C1Cu;
    {
        const bool branch_taken_0x513c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x513c1c) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513C24u;
label_513c24:
    // 0x513c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513c28:
    // 0x513c28: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513c2c:
    // 0x513c2c: 0xc142520  jal         func_509480
label_513c30:
    if (ctx->pc == 0x513C30u) {
        ctx->pc = 0x513C30u;
            // 0x513c30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x513C34u;
        goto label_513c34;
    }
    ctx->pc = 0x513C2Cu;
    SET_GPR_U32(ctx, 31, 0x513C34u);
    ctx->pc = 0x513C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513C2Cu;
            // 0x513c30: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C34u; }
        if (ctx->pc != 0x513C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C34u; }
        if (ctx->pc != 0x513C34u) { return; }
    }
    ctx->pc = 0x513C34u;
label_513c34:
    // 0x513c34: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x513c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_513c38:
    // 0x513c38: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x513c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_513c3c:
    // 0x513c3c: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x513c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513c40:
    // 0x513c40: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x513c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513c44:
    // 0x513c44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x513c44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_513c48:
    // 0x513c48: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x513c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513c4c:
    // 0x513c4c: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_513c50:
    if (ctx->pc == 0x513C50u) {
        ctx->pc = 0x513C50u;
            // 0x513c50: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x513C54u;
        goto label_513c54;
    }
    ctx->pc = 0x513C4Cu;
    {
        const bool branch_taken_0x513c4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x513C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513C4Cu;
            // 0x513c50: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x513c4c) {
            ctx->pc = 0x513C6Cu;
            goto label_513c6c;
        }
    }
    ctx->pc = 0x513C54u;
label_513c54:
    // 0x513c54: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x513c54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_513c58:
    // 0x513c58: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x513c58u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_513c5c:
    // 0x513c5c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x513c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_513c60:
    // 0x513c60: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x513c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_513c64:
    // 0x513c64: 0x10000002  b           . + 4 + (0x2 << 2)
label_513c68:
    if (ctx->pc == 0x513C68u) {
        ctx->pc = 0x513C68u;
            // 0x513c68: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x513C6Cu;
        goto label_513c6c;
    }
    ctx->pc = 0x513C64u;
    {
        const bool branch_taken_0x513c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513C64u;
            // 0x513c68: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513c64) {
            ctx->pc = 0x513C70u;
            goto label_513c70;
        }
    }
    ctx->pc = 0x513C6Cu;
label_513c6c:
    // 0x513c6c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x513c6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513c70:
    // 0x513c70: 0x10600032  beqz        $v1, . + 4 + (0x32 << 2)
label_513c74:
    if (ctx->pc == 0x513C74u) {
        ctx->pc = 0x513C78u;
        goto label_513c78;
    }
    ctx->pc = 0x513C70u;
    {
        const bool branch_taken_0x513c70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x513c70) {
            ctx->pc = 0x513D3Cu;
            goto label_513d3c;
        }
    }
    ctx->pc = 0x513C78u;
label_513c78:
    // 0x513c78: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513c7c:
    // 0x513c7c: 0xc142584  jal         func_509610
label_513c80:
    if (ctx->pc == 0x513C80u) {
        ctx->pc = 0x513C80u;
            // 0x513c80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513C84u;
        goto label_513c84;
    }
    ctx->pc = 0x513C7Cu;
    SET_GPR_U32(ctx, 31, 0x513C84u);
    ctx->pc = 0x513C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513C7Cu;
            // 0x513c80: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C84u; }
        if (ctx->pc != 0x513C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513C84u; }
        if (ctx->pc != 0x513C84u) { return; }
    }
    ctx->pc = 0x513C84u;
label_513c84:
    // 0x513c84: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x513c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_513c88:
    // 0x513c88: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x513c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_513c8c:
    // 0x513c8c: 0xc454ad80  lwc1        $f20, -0x5280($v0)
    ctx->pc = 0x513c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513c90:
    // 0x513c90: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x513c90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_513c94:
    // 0x513c94: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x513c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_513c98:
    // 0x513c98: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x513c98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_513c9c:
    // 0x513c9c: 0xc44cad80  lwc1        $f12, -0x5280($v0)
    ctx->pc = 0x513c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513ca0:
    // 0x513ca0: 0xc0c6250  jal         func_318940
label_513ca4:
    if (ctx->pc == 0x513CA4u) {
        ctx->pc = 0x513CA4u;
            // 0x513ca4: 0x26260860  addiu       $a2, $s1, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2144));
        ctx->pc = 0x513CA8u;
        goto label_513ca8;
    }
    ctx->pc = 0x513CA0u;
    SET_GPR_U32(ctx, 31, 0x513CA8u);
    ctx->pc = 0x513CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513CA0u;
            // 0x513ca4: 0x26260860  addiu       $a2, $s1, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513CA8u; }
        if (ctx->pc != 0x513CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513CA8u; }
        if (ctx->pc != 0x513CA8u) { return; }
    }
    ctx->pc = 0x513CA8u;
label_513ca8:
    // 0x513ca8: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x513ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_513cac:
    // 0x513cac: 0x3c02411d  lui         $v0, 0x411D
    ctx->pc = 0x513cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16669 << 16));
label_513cb0:
    // 0x513cb0: 0xc6210930  lwc1        $f1, 0x930($s1)
    ctx->pc = 0x513cb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513cb4:
    // 0x513cb4: 0x3442e9e7  ori         $v0, $v0, 0xE9E7
    ctx->pc = 0x513cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59879);
label_513cb8:
    // 0x513cb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x513cb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513cbc:
    // 0x513cbc: 0x0  nop
    ctx->pc = 0x513cbcu;
    // NOP
label_513cc0:
    // 0x513cc0: 0x46016881  sub.s       $f2, $f13, $f1
    ctx->pc = 0x513cc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_513cc4:
    // 0x513cc4: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x513cc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_513cc8:
    // 0x513cc8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x513cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513ccc:
    // 0x513ccc: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_513cd0:
    if (ctx->pc == 0x513CD0u) {
        ctx->pc = 0x513CD4u;
        goto label_513cd4;
    }
    ctx->pc = 0x513CCCu;
    {
        const bool branch_taken_0x513ccc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x513ccc) {
            ctx->pc = 0x513D20u;
            goto label_513d20;
        }
    }
    ctx->pc = 0x513CD4u;
label_513cd4:
    // 0x513cd4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x513cd4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513cd8:
    // 0x513cd8: 0x0  nop
    ctx->pc = 0x513cd8u;
    // NOP
label_513cdc:
    // 0x513cdc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x513cdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_513ce0:
    // 0x513ce0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_513ce4:
    if (ctx->pc == 0x513CE4u) {
        ctx->pc = 0x513CE4u;
            // 0x513ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x513CE8u;
        goto label_513ce8;
    }
    ctx->pc = 0x513CE0u;
    {
        const bool branch_taken_0x513ce0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x513CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513CE0u;
            // 0x513ce4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513ce0) {
            ctx->pc = 0x513CECu;
            goto label_513cec;
        }
    }
    ctx->pc = 0x513CE8u;
label_513ce8:
    // 0x513ce8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x513ce8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_513cec:
    // 0x513cec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x513cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_513cf0:
    // 0x513cf0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x513cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513cf4:
    // 0x513cf4: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x513cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_513cf8:
    // 0x513cf8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x513cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_513cfc:
    // 0x513cfc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x513cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_513d00:
    // 0x513d00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x513d00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513d04:
    // 0x513d04: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x513d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_513d08:
    // 0x513d08: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x513d08u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_513d0c:
    // 0x513d0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x513d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_513d10:
    // 0x513d10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x513d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_513d14:
    // 0x513d14: 0x0  nop
    ctx->pc = 0x513d14u;
    // NOP
label_513d18:
    // 0x513d18: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x513d18u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_513d1c:
    // 0x513d1c: 0x46020b5d  msub.s      $f13, $f1, $f2
    ctx->pc = 0x513d1cu;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_513d20:
    // 0x513d20: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x513d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513d24:
    // 0x513d24: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x513d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_513d28:
    // 0x513d28: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x513d28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_513d2c:
    // 0x513d2c: 0xc0c753c  jal         func_31D4F0
label_513d30:
    if (ctx->pc == 0x513D30u) {
        ctx->pc = 0x513D30u;
            // 0x513d30: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->pc = 0x513D34u;
        goto label_513d34;
    }
    ctx->pc = 0x513D2Cu;
    SET_GPR_U32(ctx, 31, 0x513D34u);
    ctx->pc = 0x513D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513D2Cu;
            // 0x513d30: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D34u; }
        if (ctx->pc != 0x513D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D34u; }
        if (ctx->pc != 0x513D34u) { return; }
    }
    ctx->pc = 0x513D34u;
label_513d34:
    // 0x513d34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x513d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513d38:
    // 0x513d38: 0xae220e30  sw          $v0, 0xE30($s1)
    ctx->pc = 0x513d38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
label_513d3c:
    // 0x513d3c: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x513d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_513d40:
    // 0x513d40: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x513d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_513d44:
    // 0x513d44: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_513d48:
    if (ctx->pc == 0x513D48u) {
        ctx->pc = 0x513D48u;
            // 0x513d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513D4Cu;
        goto label_513d4c;
    }
    ctx->pc = 0x513D44u;
    {
        const bool branch_taken_0x513d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513d44) {
            ctx->pc = 0x513D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513D44u;
            // 0x513d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513D9Cu;
            goto label_513d9c;
        }
    }
    ctx->pc = 0x513D4Cu;
label_513d4c:
    // 0x513d4c: 0xae200e30  sw          $zero, 0xE30($s1)
    ctx->pc = 0x513d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
label_513d50:
    // 0x513d50: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x513d50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_513d54:
    // 0x513d54: 0xc62c0880  lwc1        $f12, 0x880($s1)
    ctx->pc = 0x513d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513d58:
    // 0x513d58: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x513d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_513d5c:
    // 0x513d5c: 0xc0c753c  jal         func_31D4F0
label_513d60:
    if (ctx->pc == 0x513D60u) {
        ctx->pc = 0x513D60u;
            // 0x513d60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x513D64u;
        goto label_513d64;
    }
    ctx->pc = 0x513D5Cu;
    SET_GPR_U32(ctx, 31, 0x513D64u);
    ctx->pc = 0x513D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513D5Cu;
            // 0x513d60: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D64u; }
        if (ctx->pc != 0x513D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D64u; }
        if (ctx->pc != 0x513D64u) { return; }
    }
    ctx->pc = 0x513D64u;
label_513d64:
    // 0x513d64: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x513d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_513d68:
    // 0x513d68: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x513d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_513d6c:
    // 0x513d6c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513d6cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513d70:
    // 0x513d70: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x513d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_513d74:
    // 0x513d74: 0xc0c6250  jal         func_318940
label_513d78:
    if (ctx->pc == 0x513D78u) {
        ctx->pc = 0x513D78u;
            // 0x513d78: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x513D7Cu;
        goto label_513d7c;
    }
    ctx->pc = 0x513D74u;
    SET_GPR_U32(ctx, 31, 0x513D7Cu);
    ctx->pc = 0x513D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513D74u;
            // 0x513d78: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D7Cu; }
        if (ctx->pc != 0x513D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D7Cu; }
        if (ctx->pc != 0x513D7Cu) { return; }
    }
    ctx->pc = 0x513D7Cu;
label_513d7c:
    // 0x513d7c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x513d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_513d80:
    // 0x513d80: 0xc142654  jal         func_509950
label_513d84:
    if (ctx->pc == 0x513D84u) {
        ctx->pc = 0x513D84u;
            // 0x513d84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513D88u;
        goto label_513d88;
    }
    ctx->pc = 0x513D80u;
    SET_GPR_U32(ctx, 31, 0x513D88u);
    ctx->pc = 0x513D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513D80u;
            // 0x513d84: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D88u; }
        if (ctx->pc != 0x513D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D88u; }
        if (ctx->pc != 0x513D88u) { return; }
    }
    ctx->pc = 0x513D88u;
label_513d88:
    // 0x513d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x513d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_513d8c:
    // 0x513d8c: 0xc07649c  jal         func_1D9270
label_513d90:
    if (ctx->pc == 0x513D90u) {
        ctx->pc = 0x513D90u;
            // 0x513d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513D94u;
        goto label_513d94;
    }
    ctx->pc = 0x513D8Cu;
    SET_GPR_U32(ctx, 31, 0x513D94u);
    ctx->pc = 0x513D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513D8Cu;
            // 0x513d90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D94u; }
        if (ctx->pc != 0x513D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513D94u; }
        if (ctx->pc != 0x513D94u) { return; }
    }
    ctx->pc = 0x513D94u;
label_513d94:
    // 0x513d94: 0x10000004  b           . + 4 + (0x4 << 2)
label_513d98:
    if (ctx->pc == 0x513D98u) {
        ctx->pc = 0x513D98u;
            // 0x513d98: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x513D9Cu;
        goto label_513d9c;
    }
    ctx->pc = 0x513D94u;
    {
        const bool branch_taken_0x513d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513D98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513D94u;
            // 0x513d98: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513d94) {
            ctx->pc = 0x513DA8u;
            goto label_513da8;
        }
    }
    ctx->pc = 0x513D9Cu;
label_513d9c:
    // 0x513d9c: 0xc0c1418  jal         func_305060
label_513da0:
    if (ctx->pc == 0x513DA0u) {
        ctx->pc = 0x513DA4u;
        goto label_513da4;
    }
    ctx->pc = 0x513D9Cu;
    SET_GPR_U32(ctx, 31, 0x513DA4u);
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513DA4u; }
        if (ctx->pc != 0x513DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513DA4u; }
        if (ctx->pc != 0x513DA4u) { return; }
    }
    ctx->pc = 0x513DA4u;
label_513da4:
    // 0x513da4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x513da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_513da8:
    // 0x513da8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x513da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_513dac:
    // 0x513dac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x513dacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_513db0:
    // 0x513db0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x513db0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_513db4:
    // 0x513db4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x513db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_513db8:
    // 0x513db8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x513db8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_513dbc:
    // 0x513dbc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x513dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_513dc0:
    // 0x513dc0: 0x3e00008  jr          $ra
label_513dc4:
    if (ctx->pc == 0x513DC4u) {
        ctx->pc = 0x513DC4u;
            // 0x513dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x513DC8u;
        goto label_513dc8;
    }
    ctx->pc = 0x513DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x513DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513DC0u;
            // 0x513dc4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x513DC8u;
label_513dc8:
    // 0x513dc8: 0x0  nop
    ctx->pc = 0x513dc8u;
    // NOP
label_513dcc:
    // 0x513dcc: 0x0  nop
    ctx->pc = 0x513dccu;
    // NOP
label_513dd0:
    // 0x513dd0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x513dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_513dd4:
    // 0x513dd4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x513dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_513dd8:
    // 0x513dd8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x513dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_513ddc:
    // 0x513ddc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513ddcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513de0:
    // 0x513de0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x513de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_513de4:
    // 0x513de4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x513de4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_513de8:
    // 0x513de8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x513de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_513dec:
    // 0x513dec: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x513decu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_513df0:
    // 0x513df0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x513df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_513df4:
    // 0x513df4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x513df4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_513df8:
    // 0x513df8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x513df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_513dfc:
    // 0x513dfc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x513dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_513e00:
    // 0x513e00: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x513e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_513e04:
    // 0x513e04: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x513e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_513e08:
    // 0x513e08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x513e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_513e0c:
    // 0x513e0c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x513e0cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_513e10:
    // 0x513e10: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x513e10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_513e14:
    // 0x513e14: 0xa7a20104  sh          $v0, 0x104($sp)
    ctx->pc = 0x513e14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 260), (uint16_t)GPR_U32(ctx, 2));
label_513e18:
    // 0x513e18: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x513e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_513e1c:
    // 0x513e1c: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x513e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_513e20:
    // 0x513e20: 0xafa000f8  sw          $zero, 0xF8($sp)
    ctx->pc = 0x513e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 0));
label_513e24:
    // 0x513e24: 0xa7a00100  sh          $zero, 0x100($sp)
    ctx->pc = 0x513e24u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 256), (uint16_t)GPR_U32(ctx, 0));
label_513e28:
    // 0x513e28: 0xa7a00102  sh          $zero, 0x102($sp)
    ctx->pc = 0x513e28u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 258), (uint16_t)GPR_U32(ctx, 0));
label_513e2c:
    // 0x513e2c: 0xc04cbd8  jal         func_132F60
label_513e30:
    if (ctx->pc == 0x513E30u) {
        ctx->pc = 0x513E30u;
            // 0x513e30: 0xa7a00106  sh          $zero, 0x106($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x513E34u;
        goto label_513e34;
    }
    ctx->pc = 0x513E2Cu;
    SET_GPR_U32(ctx, 31, 0x513E34u);
    ctx->pc = 0x513E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513E2Cu;
            // 0x513e30: 0xa7a00106  sh          $zero, 0x106($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 262), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E34u; }
        if (ctx->pc != 0x513E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E34u; }
        if (ctx->pc != 0x513E34u) { return; }
    }
    ctx->pc = 0x513E34u;
label_513e34:
    // 0x513e34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513e34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513e38:
    // 0x513e38: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x513e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_513e3c:
    // 0x513e3c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x513e3cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_513e40:
    // 0x513e40: 0xc04cbd8  jal         func_132F60
label_513e44:
    if (ctx->pc == 0x513E44u) {
        ctx->pc = 0x513E44u;
            // 0x513e44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x513E48u;
        goto label_513e48;
    }
    ctx->pc = 0x513E40u;
    SET_GPR_U32(ctx, 31, 0x513E48u);
    ctx->pc = 0x513E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513E40u;
            // 0x513e44: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E48u; }
        if (ctx->pc != 0x513E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E48u; }
        if (ctx->pc != 0x513E48u) { return; }
    }
    ctx->pc = 0x513E48u;
label_513e48:
    // 0x513e48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513e48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513e4c:
    // 0x513e4c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x513e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_513e50:
    // 0x513e50: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x513e50u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_513e54:
    // 0x513e54: 0xc04cbd8  jal         func_132F60
label_513e58:
    if (ctx->pc == 0x513E58u) {
        ctx->pc = 0x513E58u;
            // 0x513e58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x513E5Cu;
        goto label_513e5c;
    }
    ctx->pc = 0x513E54u;
    SET_GPR_U32(ctx, 31, 0x513E5Cu);
    ctx->pc = 0x513E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513E54u;
            // 0x513e58: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E5Cu; }
        if (ctx->pc != 0x513E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E5Cu; }
        if (ctx->pc != 0x513E5Cu) { return; }
    }
    ctx->pc = 0x513E5Cu;
label_513e5c:
    // 0x513e5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513e60:
    // 0x513e60: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x513e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_513e64:
    // 0x513e64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x513e64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_513e68:
    // 0x513e68: 0xc04cbd8  jal         func_132F60
label_513e6c:
    if (ctx->pc == 0x513E6Cu) {
        ctx->pc = 0x513E6Cu;
            // 0x513e6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x513E70u;
        goto label_513e70;
    }
    ctx->pc = 0x513E68u;
    SET_GPR_U32(ctx, 31, 0x513E70u);
    ctx->pc = 0x513E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513E68u;
            // 0x513e6c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E70u; }
        if (ctx->pc != 0x513E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E70u; }
        if (ctx->pc != 0x513E70u) { return; }
    }
    ctx->pc = 0x513E70u;
label_513e70:
    // 0x513e70: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x513e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_513e74:
    // 0x513e74: 0x8e70002c  lw          $s0, 0x2C($s3)
    ctx->pc = 0x513e74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_513e78:
    // 0x513e78: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x513e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_513e7c:
    // 0x513e7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x513e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_513e80:
    // 0x513e80: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x513e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_513e84:
    // 0x513e84: 0xc142760  jal         func_509D80
label_513e88:
    if (ctx->pc == 0x513E88u) {
        ctx->pc = 0x513E88u;
            // 0x513e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513E8Cu;
        goto label_513e8c;
    }
    ctx->pc = 0x513E84u;
    SET_GPR_U32(ctx, 31, 0x513E8Cu);
    ctx->pc = 0x513E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513E84u;
            // 0x513e88: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509D80u;
    if (runtime->hasFunction(0x509D80u)) {
        auto targetFn = runtime->lookupFunction(0x509D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E8Cu; }
        if (ctx->pc != 0x513E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509D80_0x509d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513E8Cu; }
        if (ctx->pc != 0x513E8Cu) { return; }
    }
    ctx->pc = 0x513E8Cu;
label_513e8c:
    // 0x513e8c: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x513e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_513e90:
    // 0x513e90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x513e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_513e94:
    // 0x513e94: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_513e98:
    if (ctx->pc == 0x513E98u) {
        ctx->pc = 0x513E98u;
            // 0x513e98: 0x92060006  lbu         $a2, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->pc = 0x513E9Cu;
        goto label_513e9c;
    }
    ctx->pc = 0x513E94u;
    {
        const bool branch_taken_0x513e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x513e94) {
            ctx->pc = 0x513E98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513E94u;
            // 0x513e98: 0x92060006  lbu         $a2, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513EE8u;
            goto label_513ee8;
        }
    }
    ctx->pc = 0x513E9Cu;
label_513e9c:
    // 0x513e9c: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x513e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_513ea0:
    // 0x513ea0: 0xc04cc04  jal         func_133010
label_513ea4:
    if (ctx->pc == 0x513EA4u) {
        ctx->pc = 0x513EA4u;
            // 0x513ea4: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x513EA8u;
        goto label_513ea8;
    }
    ctx->pc = 0x513EA0u;
    SET_GPR_U32(ctx, 31, 0x513EA8u);
    ctx->pc = 0x513EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513EA0u;
            // 0x513ea4: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513EA8u; }
        if (ctx->pc != 0x513EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513EA8u; }
        if (ctx->pc != 0x513EA8u) { return; }
    }
    ctx->pc = 0x513EA8u;
label_513ea8:
    // 0x513ea8: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x513ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_513eac:
    // 0x513eac: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x513eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_513eb0:
    // 0x513eb0: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x513eb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_513eb4:
    // 0x513eb4: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x513eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513eb8:
    // 0x513eb8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x513eb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_513ebc:
    // 0x513ebc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x513ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_513ec0:
    // 0x513ec0: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x513ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_513ec4:
    // 0x513ec4: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x513ec4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_513ec8:
    // 0x513ec8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x513ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_513ecc:
    // 0x513ecc: 0xc0a5444  jal         func_295110
label_513ed0:
    if (ctx->pc == 0x513ED0u) {
        ctx->pc = 0x513ED0u;
            // 0x513ed0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x513ED4u;
        goto label_513ed4;
    }
    ctx->pc = 0x513ECCu;
    SET_GPR_U32(ctx, 31, 0x513ED4u);
    ctx->pc = 0x513ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513ECCu;
            // 0x513ed0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513ED4u; }
        if (ctx->pc != 0x513ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513ED4u; }
        if (ctx->pc != 0x513ED4u) { return; }
    }
    ctx->pc = 0x513ED4u;
label_513ed4:
    // 0x513ed4: 0xaea002d0  sw          $zero, 0x2D0($s5)
    ctx->pc = 0x513ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 720), GPR_U32(ctx, 0));
label_513ed8:
    // 0x513ed8: 0xaea002d4  sw          $zero, 0x2D4($s5)
    ctx->pc = 0x513ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 724), GPR_U32(ctx, 0));
label_513edc:
    // 0x513edc: 0xaea002d8  sw          $zero, 0x2D8($s5)
    ctx->pc = 0x513edcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 728), GPR_U32(ctx, 0));
label_513ee0:
    // 0x513ee0: 0xaea002dc  sw          $zero, 0x2DC($s5)
    ctx->pc = 0x513ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 732), GPR_U32(ctx, 0));
label_513ee4:
    // 0x513ee4: 0x92060006  lbu         $a2, 0x6($s0)
    ctx->pc = 0x513ee4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_513ee8:
    // 0x513ee8: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x513ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_513eec:
    // 0x513eec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x513eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_513ef0:
    // 0x513ef0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x513ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_513ef4:
    // 0x513ef4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x513ef4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513ef8:
    // 0x513ef8: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x513ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_513efc:
    // 0x513efc: 0x26280820  addiu       $t0, $s1, 0x820
    ctx->pc = 0x513efcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_513f00:
    // 0x513f00: 0xc0b849c  jal         func_2E1270
label_513f04:
    if (ctx->pc == 0x513F04u) {
        ctx->pc = 0x513F04u;
            // 0x513f04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x513F08u;
        goto label_513f08;
    }
    ctx->pc = 0x513F00u;
    SET_GPR_U32(ctx, 31, 0x513F08u);
    ctx->pc = 0x513F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513F00u;
            // 0x513f04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (runtime->hasFunction(0x2E1270u)) {
        auto targetFn = runtime->lookupFunction(0x2E1270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513F08u; }
        if (ctx->pc != 0x513F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1270_0x2e1270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513F08u; }
        if (ctx->pc != 0x513F08u) { return; }
    }
    ctx->pc = 0x513F08u;
label_513f08:
    // 0x513f08: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x513f08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_513f0c:
    // 0x513f0c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_513f10:
    if (ctx->pc == 0x513F10u) {
        ctx->pc = 0x513F10u;
            // 0x513f10: 0x8e650064  lw          $a1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x513F14u;
        goto label_513f14;
    }
    ctx->pc = 0x513F0Cu;
    {
        const bool branch_taken_0x513f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x513f0c) {
            ctx->pc = 0x513F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x513F0Cu;
            // 0x513f10: 0x8e650064  lw          $a1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x513F54u;
            goto label_513f54;
        }
    }
    ctx->pc = 0x513F14u;
label_513f14:
    // 0x513f14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x513f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_513f18:
    // 0x513f18: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x513f18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_513f1c:
    // 0x513f1c: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x513f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_513f20:
    // 0x513f20: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x513f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_513f24:
    // 0x513f24: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x513f24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_513f28:
    // 0x513f28: 0x24842070  addiu       $a0, $a0, 0x2070
    ctx->pc = 0x513f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8304));
label_513f2c:
    // 0x513f2c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x513f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_513f30:
    // 0x513f30: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x513f30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_513f34:
    // 0x513f34: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x513f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_513f38:
    // 0x513f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x513f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_513f3c:
    // 0x513f3c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x513f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_513f40:
    // 0x513f40: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x513f40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_513f44:
    // 0x513f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x513f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_513f48:
    // 0x513f48: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x513f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_513f4c:
    // 0x513f4c: 0x1000000e  b           . + 4 + (0xE << 2)
label_513f50:
    if (ctx->pc == 0x513F50u) {
        ctx->pc = 0x513F50u;
            // 0x513f50: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x513F54u;
        goto label_513f54;
    }
    ctx->pc = 0x513F4Cu;
    {
        const bool branch_taken_0x513f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x513F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x513F4Cu;
            // 0x513f50: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x513f4c) {
            ctx->pc = 0x513F88u;
            goto label_513f88;
        }
    }
    ctx->pc = 0x513F54u;
label_513f54:
    // 0x513f54: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x513f54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_513f58:
    // 0x513f58: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x513f58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_513f5c:
    // 0x513f5c: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x513f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
label_513f60:
    // 0x513f60: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x513f60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_513f64:
    // 0x513f64: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x513f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_513f68:
    // 0x513f68: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x513f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_513f6c:
    // 0x513f6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x513f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_513f70:
    // 0x513f70: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x513f70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_513f74:
    // 0x513f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x513f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_513f78:
    // 0x513f78: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x513f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_513f7c:
    // 0x513f7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x513f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_513f80:
    // 0x513f80: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x513f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_513f84:
    // 0x513f84: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x513f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_513f88:
    // 0x513f88: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x513f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513f8c:
    // 0x513f8c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x513f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_513f90:
    // 0x513f90: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x513f90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_513f94:
    // 0x513f94: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x513f94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_513f98:
    // 0x513f98: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x513f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513f9c:
    // 0x513f9c: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x513f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_513fa0:
    // 0x513fa0: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x513fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_513fa4:
    // 0x513fa4: 0xc04cbd8  jal         func_132F60
label_513fa8:
    if (ctx->pc == 0x513FA8u) {
        ctx->pc = 0x513FA8u;
            // 0x513fa8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x513FACu;
        goto label_513fac;
    }
    ctx->pc = 0x513FA4u;
    SET_GPR_U32(ctx, 31, 0x513FACu);
    ctx->pc = 0x513FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513FA4u;
            // 0x513fa8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FACu; }
        if (ctx->pc != 0x513FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FACu; }
        if (ctx->pc != 0x513FACu) { return; }
    }
    ctx->pc = 0x513FACu;
label_513fac:
    // 0x513fac: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x513facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_513fb0:
    // 0x513fb0: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x513fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_513fb4:
    // 0x513fb4: 0xc04cca0  jal         func_133280
label_513fb8:
    if (ctx->pc == 0x513FB8u) {
        ctx->pc = 0x513FB8u;
            // 0x513fb8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x513FBCu;
        goto label_513fbc;
    }
    ctx->pc = 0x513FB4u;
    SET_GPR_U32(ctx, 31, 0x513FBCu);
    ctx->pc = 0x513FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513FB4u;
            // 0x513fb8: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FBCu; }
        if (ctx->pc != 0x513FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FBCu; }
        if (ctx->pc != 0x513FBCu) { return; }
    }
    ctx->pc = 0x513FBCu;
label_513fbc:
    // 0x513fbc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x513fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_513fc0:
    // 0x513fc0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x513fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_513fc4:
    // 0x513fc4: 0x24421b50  addiu       $v0, $v0, 0x1B50
    ctx->pc = 0x513fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6992));
label_513fc8:
    // 0x513fc8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x513fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_513fcc:
    // 0x513fcc: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x513fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_513fd0:
    // 0x513fd0: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x513fd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_513fd4:
    // 0x513fd4: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x513fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_513fd8:
    // 0x513fd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x513fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_513fdc:
    // 0x513fdc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x513fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_513fe0:
    // 0x513fe0: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x513fe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_513fe4:
    // 0x513fe4: 0xc0b8084  jal         func_2E0210
label_513fe8:
    if (ctx->pc == 0x513FE8u) {
        ctx->pc = 0x513FE8u;
            // 0x513fe8: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x513FECu;
        goto label_513fec;
    }
    ctx->pc = 0x513FE4u;
    SET_GPR_U32(ctx, 31, 0x513FECu);
    ctx->pc = 0x513FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513FE4u;
            // 0x513fe8: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0210u;
    if (runtime->hasFunction(0x2E0210u)) {
        auto targetFn = runtime->lookupFunction(0x2E0210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FECu; }
        if (ctx->pc != 0x513FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0210_0x2e0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FECu; }
        if (ctx->pc != 0x513FECu) { return; }
    }
    ctx->pc = 0x513FECu;
label_513fec:
    // 0x513fec: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x513fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_513ff0:
    // 0x513ff0: 0xc075318  jal         func_1D4C60
label_513ff4:
    if (ctx->pc == 0x513FF4u) {
        ctx->pc = 0x513FF4u;
            // 0x513ff4: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->pc = 0x513FF8u;
        goto label_513ff8;
    }
    ctx->pc = 0x513FF0u;
    SET_GPR_U32(ctx, 31, 0x513FF8u);
    ctx->pc = 0x513FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x513FF0u;
            // 0x513ff4: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FF8u; }
        if (ctx->pc != 0x513FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x513FF8u; }
        if (ctx->pc != 0x513FF8u) { return; }
    }
    ctx->pc = 0x513FF8u;
label_513ff8:
    // 0x513ff8: 0x26250560  addiu       $a1, $s1, 0x560
    ctx->pc = 0x513ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_513ffc:
    // 0x513ffc: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x513ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_514000:
    // 0x514000: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x514000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514004:
    // 0x514004: 0xc0c6250  jal         func_318940
label_514008:
    if (ctx->pc == 0x514008u) {
        ctx->pc = 0x514008u;
            // 0x514008: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51400Cu;
        goto label_51400c;
    }
    ctx->pc = 0x514004u;
    SET_GPR_U32(ctx, 31, 0x51400Cu);
    ctx->pc = 0x514008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514004u;
            // 0x514008: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51400Cu; }
        if (ctx->pc != 0x51400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51400Cu; }
        if (ctx->pc != 0x51400Cu) { return; }
    }
    ctx->pc = 0x51400Cu;
label_51400c:
    // 0x51400c: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x51400cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_514010:
    // 0x514010: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x514010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_514014:
    // 0x514014: 0xc075378  jal         func_1D4DE0
label_514018:
    if (ctx->pc == 0x514018u) {
        ctx->pc = 0x514018u;
            // 0x514018: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51401Cu;
        goto label_51401c;
    }
    ctx->pc = 0x514014u;
    SET_GPR_U32(ctx, 31, 0x51401Cu);
    ctx->pc = 0x514018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514014u;
            // 0x514018: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51401Cu; }
        if (ctx->pc != 0x51401Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51401Cu; }
        if (ctx->pc != 0x51401Cu) { return; }
    }
    ctx->pc = 0x51401Cu;
label_51401c:
    // 0x51401c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51401cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_514020:
    // 0x514020: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x514020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_514024:
    // 0x514024: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x514024u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_514028:
    // 0x514028: 0x24a5bed0  addiu       $a1, $a1, -0x4130
    ctx->pc = 0x514028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950608));
label_51402c:
    // 0x51402c: 0xc0bc684  jal         func_2F1A10
label_514030:
    if (ctx->pc == 0x514030u) {
        ctx->pc = 0x514030u;
            // 0x514030: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x514034u;
        goto label_514034;
    }
    ctx->pc = 0x51402Cu;
    SET_GPR_U32(ctx, 31, 0x514034u);
    ctx->pc = 0x514030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51402Cu;
            // 0x514030: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A10u;
    if (runtime->hasFunction(0x2F1A10u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514034u; }
        if (ctx->pc != 0x514034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F1A10_0x2f1a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514034u; }
        if (ctx->pc != 0x514034u) { return; }
    }
    ctx->pc = 0x514034u;
label_514034:
    // 0x514034: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x514034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_514038:
    // 0x514038: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x514038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_51403c:
    // 0x51403c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x51403cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514040:
    // 0x514040: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x514040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_514044:
    // 0x514044: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x514044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_514048:
    // 0x514048: 0xc0c6250  jal         func_318940
label_51404c:
    if (ctx->pc == 0x51404Cu) {
        ctx->pc = 0x51404Cu;
            // 0x51404c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x514050u;
        goto label_514050;
    }
    ctx->pc = 0x514048u;
    SET_GPR_U32(ctx, 31, 0x514050u);
    ctx->pc = 0x51404Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514048u;
            // 0x51404c: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514050u; }
        if (ctx->pc != 0x514050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514050u; }
        if (ctx->pc != 0x514050u) { return; }
    }
    ctx->pc = 0x514050u;
label_514050:
    // 0x514050: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x514050u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_514054:
    // 0x514054: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x514054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_514058:
    // 0x514058: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x514058u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_51405c:
    // 0x51405c: 0xc0c753c  jal         func_31D4F0
label_514060:
    if (ctx->pc == 0x514060u) {
        ctx->pc = 0x514060u;
            // 0x514060: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514064u;
        goto label_514064;
    }
    ctx->pc = 0x51405Cu;
    SET_GPR_U32(ctx, 31, 0x514064u);
    ctx->pc = 0x514060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51405Cu;
            // 0x514060: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514064u; }
        if (ctx->pc != 0x514064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514064u; }
        if (ctx->pc != 0x514064u) { return; }
    }
    ctx->pc = 0x514064u;
label_514064:
    // 0x514064: 0xc0b9210  jal         func_2E4840
label_514068:
    if (ctx->pc == 0x514068u) {
        ctx->pc = 0x514068u;
            // 0x514068: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x51406Cu;
        goto label_51406c;
    }
    ctx->pc = 0x514064u;
    SET_GPR_U32(ctx, 31, 0x51406Cu);
    ctx->pc = 0x514068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514064u;
            // 0x514068: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51406Cu; }
        if (ctx->pc != 0x51406Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51406Cu; }
        if (ctx->pc != 0x51406Cu) { return; }
    }
    ctx->pc = 0x51406Cu;
label_51406c:
    // 0x51406c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51406cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_514070:
    // 0x514070: 0xc1427ac  jal         func_509EB0
label_514074:
    if (ctx->pc == 0x514074u) {
        ctx->pc = 0x514074u;
            // 0x514074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514078u;
        goto label_514078;
    }
    ctx->pc = 0x514070u;
    SET_GPR_U32(ctx, 31, 0x514078u);
    ctx->pc = 0x514074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514070u;
            // 0x514074: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509EB0u;
    if (runtime->hasFunction(0x509EB0u)) {
        auto targetFn = runtime->lookupFunction(0x509EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514078u; }
        if (ctx->pc != 0x514078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509EB0_0x509eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514078u; }
        if (ctx->pc != 0x514078u) { return; }
    }
    ctx->pc = 0x514078u;
label_514078:
    // 0x514078: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x514078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51407c:
    // 0x51407c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x51407cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_514080:
    // 0x514080: 0xc142504  jal         func_509410
label_514084:
    if (ctx->pc == 0x514084u) {
        ctx->pc = 0x514084u;
            // 0x514084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514088u;
        goto label_514088;
    }
    ctx->pc = 0x514080u;
    SET_GPR_U32(ctx, 31, 0x514088u);
    ctx->pc = 0x514084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514080u;
            // 0x514084: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514088u; }
        if (ctx->pc != 0x514088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514088u; }
        if (ctx->pc != 0x514088u) { return; }
    }
    ctx->pc = 0x514088u;
label_514088:
    // 0x514088: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x514088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_51408c:
    // 0x51408c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x51408cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_514090:
    // 0x514090: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_514094:
    if (ctx->pc == 0x514094u) {
        ctx->pc = 0x514094u;
            // 0x514094: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x514098u;
        goto label_514098;
    }
    ctx->pc = 0x514090u;
    {
        const bool branch_taken_0x514090 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x514090) {
            ctx->pc = 0x514094u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514090u;
            // 0x514094: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5140A8u;
            goto label_5140a8;
        }
    }
    ctx->pc = 0x514098u;
label_514098:
    // 0x514098: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_51409c:
    // 0x51409c: 0x2463b100  addiu       $v1, $v1, -0x4F00
    ctx->pc = 0x51409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947072));
label_5140a0:
    // 0x5140a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_5140a4:
    if (ctx->pc == 0x5140A4u) {
        ctx->pc = 0x5140A4u;
            // 0x5140a4: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x5140A8u;
        goto label_5140a8;
    }
    ctx->pc = 0x5140A0u;
    {
        const bool branch_taken_0x5140a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5140A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5140A0u;
            // 0x5140a4: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5140a0) {
            ctx->pc = 0x5140C8u;
            goto label_5140c8;
        }
    }
    ctx->pc = 0x5140A8u;
label_5140a8:
    // 0x5140a8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x5140a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_5140ac:
    // 0x5140ac: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x5140acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_5140b0:
    // 0x5140b0: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x5140b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_5140b4:
    // 0x5140b4: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x5140b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_5140b8:
    // 0x5140b8: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x5140b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
label_5140bc:
    // 0x5140bc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x5140bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_5140c0:
    // 0x5140c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5140c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5140c4:
    // 0x5140c4: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x5140c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_5140c8:
    // 0x5140c8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x5140c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_5140cc:
    // 0x5140cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5140ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5140d0:
    // 0x5140d0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x5140d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_5140d4:
    // 0x5140d4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x5140d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_5140d8:
    // 0x5140d8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x5140d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_5140dc:
    // 0x5140dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x5140dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_5140e0:
    // 0x5140e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5140e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5140e4:
    // 0x5140e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5140e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5140e8:
    // 0x5140e8: 0x3e00008  jr          $ra
label_5140ec:
    if (ctx->pc == 0x5140ECu) {
        ctx->pc = 0x5140ECu;
            // 0x5140ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x5140F0u;
        goto label_5140f0;
    }
    ctx->pc = 0x5140E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5140ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5140E8u;
            // 0x5140ec: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5140F0u;
label_5140f0:
    // 0x5140f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x5140f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_5140f4:
    // 0x5140f4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x5140f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_5140f8:
    // 0x5140f8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x5140f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_5140fc:
    // 0x5140fc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5140fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_514100:
    // 0x514100: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x514100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_514104:
    // 0x514104: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x514104u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_514108:
    // 0x514108: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x514108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_51410c:
    // 0x51410c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x51410cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_514110:
    // 0x514110: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x514110u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_514114:
    // 0x514114: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x514114u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_514118:
    // 0x514118: 0x8e220e30  lw          $v0, 0xE30($s1)
    ctx->pc = 0x514118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_51411c:
    // 0x51411c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_514120:
    if (ctx->pc == 0x514120u) {
        ctx->pc = 0x514120u;
            // 0x514120: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514124u;
        goto label_514124;
    }
    ctx->pc = 0x51411Cu;
    {
        const bool branch_taken_0x51411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x514120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51411Cu;
            // 0x514120: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51411c) {
            ctx->pc = 0x51412Cu;
            goto label_51412c;
        }
    }
    ctx->pc = 0x514124u;
label_514124:
    // 0x514124: 0x10000010  b           . + 4 + (0x10 << 2)
label_514128:
    if (ctx->pc == 0x514128u) {
        ctx->pc = 0x514128u;
            // 0x514128: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x51412Cu;
        goto label_51412c;
    }
    ctx->pc = 0x514124u;
    {
        const bool branch_taken_0x514124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514124u;
            // 0x514128: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514124) {
            ctx->pc = 0x514168u;
            goto label_514168;
        }
    }
    ctx->pc = 0x51412Cu;
label_51412c:
    // 0x51412c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x51412cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_514130:
    // 0x514130: 0xc04cc44  jal         func_133110
label_514134:
    if (ctx->pc == 0x514134u) {
        ctx->pc = 0x514134u;
            // 0x514134: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->pc = 0x514138u;
        goto label_514138;
    }
    ctx->pc = 0x514130u;
    SET_GPR_U32(ctx, 31, 0x514138u);
    ctx->pc = 0x514134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514130u;
            // 0x514134: 0x26250300  addiu       $a1, $s1, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514138u; }
        if (ctx->pc != 0x514138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514138u; }
        if (ctx->pc != 0x514138u) { return; }
    }
    ctx->pc = 0x514138u;
label_514138:
    // 0x514138: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x514138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_51413c:
    // 0x51413c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x51413cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_514140:
    // 0x514140: 0xc075378  jal         func_1D4DE0
label_514144:
    if (ctx->pc == 0x514144u) {
        ctx->pc = 0x514144u;
            // 0x514144: 0x26260910  addiu       $a2, $s1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
        ctx->pc = 0x514148u;
        goto label_514148;
    }
    ctx->pc = 0x514140u;
    SET_GPR_U32(ctx, 31, 0x514148u);
    ctx->pc = 0x514144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514140u;
            // 0x514144: 0x26260910  addiu       $a2, $s1, 0x910 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514148u; }
        if (ctx->pc != 0x514148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514148u; }
        if (ctx->pc != 0x514148u) { return; }
    }
    ctx->pc = 0x514148u;
label_514148:
    // 0x514148: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x514148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51414c:
    // 0x51414c: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x51414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_514150:
    // 0x514150: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x514150u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_514154:
    // 0x514154: 0xc0c753c  jal         func_31D4F0
label_514158:
    if (ctx->pc == 0x514158u) {
        ctx->pc = 0x514158u;
            // 0x514158: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x51415Cu;
        goto label_51415c;
    }
    ctx->pc = 0x514154u;
    SET_GPR_U32(ctx, 31, 0x51415Cu);
    ctx->pc = 0x514158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514154u;
            // 0x514158: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51415Cu; }
        if (ctx->pc != 0x51415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51415Cu; }
        if (ctx->pc != 0x51415Cu) { return; }
    }
    ctx->pc = 0x51415Cu;
label_51415c:
    // 0x51415c: 0xc0b9210  jal         func_2E4840
label_514160:
    if (ctx->pc == 0x514160u) {
        ctx->pc = 0x514160u;
            // 0x514160: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x514164u;
        goto label_514164;
    }
    ctx->pc = 0x51415Cu;
    SET_GPR_U32(ctx, 31, 0x514164u);
    ctx->pc = 0x514160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51415Cu;
            // 0x514160: 0x26240890  addiu       $a0, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514164u; }
        if (ctx->pc != 0x514164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514164u; }
        if (ctx->pc != 0x514164u) { return; }
    }
    ctx->pc = 0x514164u;
label_514164:
    // 0x514164: 0x82450074  lb          $a1, 0x74($s2)
    ctx->pc = 0x514164u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514168:
    // 0x514168: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_51416c:
    // 0x51416c: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x51416cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_514170:
    // 0x514170: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x514170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_514174:
    // 0x514174: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x514174u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_514178:
    // 0x514178: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x514178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_51417c:
    // 0x51417c: 0x10a200e0  beq         $a1, $v0, . + 4 + (0xE0 << 2)
label_514180:
    if (ctx->pc == 0x514180u) {
        ctx->pc = 0x514180u;
            // 0x514180: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x514184u;
        goto label_514184;
    }
    ctx->pc = 0x51417Cu;
    {
        const bool branch_taken_0x51417c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x514180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51417Cu;
            // 0x514180: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x51417c) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x514184u;
label_514184:
    // 0x514184: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x514184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_514188:
    // 0x514188: 0x50a20086  beql        $a1, $v0, . + 4 + (0x86 << 2)
label_51418c:
    if (ctx->pc == 0x51418Cu) {
        ctx->pc = 0x51418Cu;
            // 0x51418c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x514190u;
        goto label_514190;
    }
    ctx->pc = 0x514188u;
    {
        const bool branch_taken_0x514188 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x514188) {
            ctx->pc = 0x51418Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514188u;
            // 0x51418c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5143A4u;
            goto label_5143a4;
        }
    }
    ctx->pc = 0x514190u;
label_514190:
    // 0x514190: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x514190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_514194:
    // 0x514194: 0x50a30047  beql        $a1, $v1, . + 4 + (0x47 << 2)
label_514198:
    if (ctx->pc == 0x514198u) {
        ctx->pc = 0x514198u;
            // 0x514198: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x51419Cu;
        goto label_51419c;
    }
    ctx->pc = 0x514194u;
    {
        const bool branch_taken_0x514194 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x514194) {
            ctx->pc = 0x514198u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514194u;
            // 0x514198: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5142B4u;
            goto label_5142b4;
        }
    }
    ctx->pc = 0x51419Cu;
label_51419c:
    // 0x51419c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_5141a0:
    if (ctx->pc == 0x5141A0u) {
        ctx->pc = 0x5141A4u;
        goto label_5141a4;
    }
    ctx->pc = 0x51419Cu;
    {
        const bool branch_taken_0x51419c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x51419c) {
            ctx->pc = 0x5141ACu;
            goto label_5141ac;
        }
    }
    ctx->pc = 0x5141A4u;
label_5141a4:
    // 0x5141a4: 0x100000d7  b           . + 4 + (0xD7 << 2)
label_5141a8:
    if (ctx->pc == 0x5141A8u) {
        ctx->pc = 0x5141A8u;
            // 0x5141a8: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x5141ACu;
        goto label_5141ac;
    }
    ctx->pc = 0x5141A4u;
    {
        const bool branch_taken_0x5141a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5141A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5141A4u;
            // 0x5141a8: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5141a4) {
            ctx->pc = 0x514504u;
            goto label_514504;
        }
    }
    ctx->pc = 0x5141ACu;
label_5141ac:
    // 0x5141ac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5141acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5141b0:
    // 0x5141b0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5141b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5141b4:
    // 0x5141b4: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x5141b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5141b8:
    // 0x5141b8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x5141b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5141bc:
    // 0x5141bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5141bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5141c0:
    // 0x5141c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x5141c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5141c4:
    // 0x5141c4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_5141c8:
    if (ctx->pc == 0x5141C8u) {
        ctx->pc = 0x5141C8u;
            // 0x5141c8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x5141CCu;
        goto label_5141cc;
    }
    ctx->pc = 0x5141C4u;
    {
        const bool branch_taken_0x5141c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5141C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5141C4u;
            // 0x5141c8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5141c4) {
            ctx->pc = 0x5141E4u;
            goto label_5141e4;
        }
    }
    ctx->pc = 0x5141CCu;
label_5141cc:
    // 0x5141cc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x5141ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_5141d0:
    // 0x5141d0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x5141d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5141d4:
    // 0x5141d4: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x5141d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5141d8:
    // 0x5141d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5141d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5141dc:
    // 0x5141dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_5141e0:
    if (ctx->pc == 0x5141E0u) {
        ctx->pc = 0x5141E0u;
            // 0x5141e0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5141E4u;
        goto label_5141e4;
    }
    ctx->pc = 0x5141DCu;
    {
        const bool branch_taken_0x5141dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5141E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5141DCu;
            // 0x5141e0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5141dc) {
            ctx->pc = 0x5141E8u;
            goto label_5141e8;
        }
    }
    ctx->pc = 0x5141E4u;
label_5141e4:
    // 0x5141e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5141e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5141e8:
    // 0x5141e8: 0x106000c5  beqz        $v1, . + 4 + (0xC5 << 2)
label_5141ec:
    if (ctx->pc == 0x5141ECu) {
        ctx->pc = 0x5141F0u;
        goto label_5141f0;
    }
    ctx->pc = 0x5141E8u;
    {
        const bool branch_taken_0x5141e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5141e8) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x5141F0u;
label_5141f0:
    // 0x5141f0: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x5141f0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5141f4:
    // 0x5141f4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5141f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_5141f8:
    // 0x5141f8: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x5141f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_5141fc:
    // 0x5141fc: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x5141fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_514200:
    // 0x514200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514204:
    // 0x514204: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514208:
    // 0x514208: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x514208u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_51420c:
    // 0x51420c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x51420cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_514210:
    // 0x514210: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x514210u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_514214:
    // 0x514214: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x514214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514218:
    // 0x514218: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x514218u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_51421c:
    // 0x51421c: 0xc1425e0  jal         func_509780
label_514220:
    if (ctx->pc == 0x514220u) {
        ctx->pc = 0x514220u;
            // 0x514220: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514224u;
        goto label_514224;
    }
    ctx->pc = 0x51421Cu;
    SET_GPR_U32(ctx, 31, 0x514224u);
    ctx->pc = 0x514220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51421Cu;
            // 0x514220: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514224u; }
        if (ctx->pc != 0x514224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514224u; }
        if (ctx->pc != 0x514224u) { return; }
    }
    ctx->pc = 0x514224u;
label_514224:
    // 0x514224: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514228:
    // 0x514228: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x514228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_51422c:
    // 0x51422c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x51422cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_514230:
    // 0x514230: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x514230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_514234:
    // 0x514234: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x514234u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_514238:
    // 0x514238: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_51423c:
    // 0x51423c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_514240:
    if (ctx->pc == 0x514240u) {
        ctx->pc = 0x514240u;
            // 0x514240: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x514244u;
        goto label_514244;
    }
    ctx->pc = 0x51423Cu;
    {
        const bool branch_taken_0x51423c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51423c) {
            ctx->pc = 0x514240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51423Cu;
            // 0x514240: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514250u;
            goto label_514250;
        }
    }
    ctx->pc = 0x514244u;
label_514244:
    // 0x514244: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x514244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_514248:
    // 0x514248: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x514248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51424c:
    // 0x51424c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x51424cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_514250:
    // 0x514250: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514254:
    // 0x514254: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514254u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514258:
    // 0x514258: 0x0  nop
    ctx->pc = 0x514258u;
    // NOP
label_51425c:
    // 0x51425c: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x51425cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_514260:
    // 0x514260: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x514260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514264:
    // 0x514264: 0x0  nop
    ctx->pc = 0x514264u;
    // NOP
label_514268:
    // 0x514268: 0x0  nop
    ctx->pc = 0x514268u;
    // NOP
label_51426c:
    // 0x51426c: 0xc1425a8  jal         func_5096A0
label_514270:
    if (ctx->pc == 0x514270u) {
        ctx->pc = 0x514270u;
            // 0x514270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514274u;
        goto label_514274;
    }
    ctx->pc = 0x51426Cu;
    SET_GPR_U32(ctx, 31, 0x514274u);
    ctx->pc = 0x514270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51426Cu;
            // 0x514270: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514274u; }
        if (ctx->pc != 0x514274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514274u; }
        if (ctx->pc != 0x514274u) { return; }
    }
    ctx->pc = 0x514274u;
label_514274:
    // 0x514274: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x514274u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_514278:
    // 0x514278: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x514278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_51427c:
    // 0x51427c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x51427cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_514280:
    // 0x514280: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x514280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_514284:
    // 0x514284: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x514284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_514288:
    // 0x514288: 0xc0a545c  jal         func_295170
label_51428c:
    if (ctx->pc == 0x51428Cu) {
        ctx->pc = 0x51428Cu;
            // 0x51428c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x514290u;
        goto label_514290;
    }
    ctx->pc = 0x514288u;
    SET_GPR_U32(ctx, 31, 0x514290u);
    ctx->pc = 0x51428Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514288u;
            // 0x51428c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514290u; }
        if (ctx->pc != 0x514290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514290u; }
        if (ctx->pc != 0x514290u) { return; }
    }
    ctx->pc = 0x514290u;
label_514290:
    // 0x514290: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x514290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_514294:
    // 0x514294: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x514294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_514298:
    // 0x514298: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x514298u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_51429c:
    // 0x51429c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x51429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5142a0:
    // 0x5142a0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5142a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5142a4:
    // 0x5142a4: 0xc08bf20  jal         func_22FC80
label_5142a8:
    if (ctx->pc == 0x5142A8u) {
        ctx->pc = 0x5142A8u;
            // 0x5142a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5142ACu;
        goto label_5142ac;
    }
    ctx->pc = 0x5142A4u;
    SET_GPR_U32(ctx, 31, 0x5142ACu);
    ctx->pc = 0x5142A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5142A4u;
            // 0x5142a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5142ACu; }
        if (ctx->pc != 0x5142ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5142ACu; }
        if (ctx->pc != 0x5142ACu) { return; }
    }
    ctx->pc = 0x5142ACu;
label_5142ac:
    // 0x5142ac: 0x10000094  b           . + 4 + (0x94 << 2)
label_5142b0:
    if (ctx->pc == 0x5142B0u) {
        ctx->pc = 0x5142B4u;
        goto label_5142b4;
    }
    ctx->pc = 0x5142ACu;
    {
        const bool branch_taken_0x5142ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5142ac) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x5142B4u;
label_5142b4:
    // 0x5142b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5142b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5142b8:
    // 0x5142b8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5142b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5142bc:
    // 0x5142bc: 0xc142520  jal         func_509480
label_5142c0:
    if (ctx->pc == 0x5142C0u) {
        ctx->pc = 0x5142C0u;
            // 0x5142c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5142C4u;
        goto label_5142c4;
    }
    ctx->pc = 0x5142BCu;
    SET_GPR_U32(ctx, 31, 0x5142C4u);
    ctx->pc = 0x5142C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5142BCu;
            // 0x5142c0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5142C4u; }
        if (ctx->pc != 0x5142C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5142C4u; }
        if (ctx->pc != 0x5142C4u) { return; }
    }
    ctx->pc = 0x5142C4u;
label_5142c4:
    // 0x5142c4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5142c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5142c8:
    // 0x5142c8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5142c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5142cc:
    // 0x5142cc: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x5142ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5142d0:
    // 0x5142d0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x5142d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5142d4:
    // 0x5142d4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5142d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5142d8:
    // 0x5142d8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x5142d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5142dc:
    // 0x5142dc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_5142e0:
    if (ctx->pc == 0x5142E0u) {
        ctx->pc = 0x5142E0u;
            // 0x5142e0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x5142E4u;
        goto label_5142e4;
    }
    ctx->pc = 0x5142DCu;
    {
        const bool branch_taken_0x5142dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5142E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5142DCu;
            // 0x5142e0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5142dc) {
            ctx->pc = 0x5142FCu;
            goto label_5142fc;
        }
    }
    ctx->pc = 0x5142E4u;
label_5142e4:
    // 0x5142e4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x5142e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_5142e8:
    // 0x5142e8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x5142e8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5142ec:
    // 0x5142ec: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x5142ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5142f0:
    // 0x5142f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5142f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5142f4:
    // 0x5142f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_5142f8:
    if (ctx->pc == 0x5142F8u) {
        ctx->pc = 0x5142F8u;
            // 0x5142f8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5142FCu;
        goto label_5142fc;
    }
    ctx->pc = 0x5142F4u;
    {
        const bool branch_taken_0x5142f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5142F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5142F4u;
            // 0x5142f8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5142f4) {
            ctx->pc = 0x514300u;
            goto label_514300;
        }
    }
    ctx->pc = 0x5142FCu;
label_5142fc:
    // 0x5142fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5142fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514300:
    // 0x514300: 0x1060007f  beqz        $v1, . + 4 + (0x7F << 2)
label_514304:
    if (ctx->pc == 0x514304u) {
        ctx->pc = 0x514308u;
        goto label_514308;
    }
    ctx->pc = 0x514300u;
    {
        const bool branch_taken_0x514300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x514300) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x514308u;
label_514308:
    // 0x514308: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x514308u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_51430c:
    // 0x51430c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x51430cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_514310:
    // 0x514310: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x514310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514314:
    // 0x514314: 0x2463ad88  addiu       $v1, $v1, -0x5278
    ctx->pc = 0x514314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946184));
label_514318:
    // 0x514318: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51431c:
    // 0x51431c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51431cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514320:
    // 0x514320: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x514320u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_514324:
    // 0x514324: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x514324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_514328:
    // 0x514328: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x514328u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_51432c:
    // 0x51432c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x51432cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514330:
    // 0x514330: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x514330u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_514334:
    // 0x514334: 0xc1425e0  jal         func_509780
label_514338:
    if (ctx->pc == 0x514338u) {
        ctx->pc = 0x514338u;
            // 0x514338: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x51433Cu;
        goto label_51433c;
    }
    ctx->pc = 0x514334u;
    SET_GPR_U32(ctx, 31, 0x51433Cu);
    ctx->pc = 0x514338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514334u;
            // 0x514338: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51433Cu; }
        if (ctx->pc != 0x51433Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51433Cu; }
        if (ctx->pc != 0x51433Cu) { return; }
    }
    ctx->pc = 0x51433Cu;
label_51433c:
    // 0x51433c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x51433cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514340:
    // 0x514340: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x514340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514344:
    // 0x514344: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x514344u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_514348:
    // 0x514348: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x514348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_51434c:
    // 0x51434c: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x51434cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
label_514350:
    // 0x514350: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_514354:
    // 0x514354: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_514358:
    if (ctx->pc == 0x514358u) {
        ctx->pc = 0x51435Cu;
        goto label_51435c;
    }
    ctx->pc = 0x514354u;
    {
        const bool branch_taken_0x514354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x514354) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x51435Cu;
label_51435c:
    // 0x51435c: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x51435cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_514360:
    // 0x514360: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_514364:
    // 0x514364: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_514368:
    if (ctx->pc == 0x514368u) {
        ctx->pc = 0x514368u;
            // 0x514368: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x51436Cu;
        goto label_51436c;
    }
    ctx->pc = 0x514364u;
    {
        const bool branch_taken_0x514364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514364) {
            ctx->pc = 0x514368u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514364u;
            // 0x514368: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514378u;
            goto label_514378;
        }
    }
    ctx->pc = 0x51436Cu;
label_51436c:
    // 0x51436c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x51436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_514370:
    // 0x514370: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x514370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514374:
    // 0x514374: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x514374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_514378:
    // 0x514378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51437c:
    // 0x51437c: 0x0  nop
    ctx->pc = 0x51437cu;
    // NOP
label_514380:
    // 0x514380: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x514380u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_514384:
    // 0x514384: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x514384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514388:
    // 0x514388: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_51438c:
    // 0x51438c: 0x0  nop
    ctx->pc = 0x51438cu;
    // NOP
label_514390:
    // 0x514390: 0x0  nop
    ctx->pc = 0x514390u;
    // NOP
label_514394:
    // 0x514394: 0xc1425a8  jal         func_5096A0
label_514398:
    if (ctx->pc == 0x514398u) {
        ctx->pc = 0x514398u;
            // 0x514398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51439Cu;
        goto label_51439c;
    }
    ctx->pc = 0x514394u;
    SET_GPR_U32(ctx, 31, 0x51439Cu);
    ctx->pc = 0x514398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514394u;
            // 0x514398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51439Cu; }
        if (ctx->pc != 0x51439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51439Cu; }
        if (ctx->pc != 0x51439Cu) { return; }
    }
    ctx->pc = 0x51439Cu;
label_51439c:
    // 0x51439c: 0x10000058  b           . + 4 + (0x58 << 2)
label_5143a0:
    if (ctx->pc == 0x5143A0u) {
        ctx->pc = 0x5143A4u;
        goto label_5143a4;
    }
    ctx->pc = 0x51439Cu;
    {
        const bool branch_taken_0x51439c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x51439c) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x5143A4u;
label_5143a4:
    // 0x5143a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5143a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5143a8:
    // 0x5143a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x5143a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5143ac:
    // 0x5143ac: 0xc142520  jal         func_509480
label_5143b0:
    if (ctx->pc == 0x5143B0u) {
        ctx->pc = 0x5143B0u;
            // 0x5143b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x5143B4u;
        goto label_5143b4;
    }
    ctx->pc = 0x5143ACu;
    SET_GPR_U32(ctx, 31, 0x5143B4u);
    ctx->pc = 0x5143B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5143ACu;
            // 0x5143b0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5143B4u; }
        if (ctx->pc != 0x5143B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5143B4u; }
        if (ctx->pc != 0x5143B4u) { return; }
    }
    ctx->pc = 0x5143B4u;
label_5143b4:
    // 0x5143b4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5143b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5143b8:
    // 0x5143b8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x5143b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5143bc:
    // 0x5143bc: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x5143bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5143c0:
    // 0x5143c0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x5143c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5143c4:
    // 0x5143c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x5143c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5143c8:
    // 0x5143c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x5143c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5143cc:
    // 0x5143cc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_5143d0:
    if (ctx->pc == 0x5143D0u) {
        ctx->pc = 0x5143D0u;
            // 0x5143d0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x5143D4u;
        goto label_5143d4;
    }
    ctx->pc = 0x5143CCu;
    {
        const bool branch_taken_0x5143cc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5143D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5143CCu;
            // 0x5143d0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x5143cc) {
            ctx->pc = 0x5143ECu;
            goto label_5143ec;
        }
    }
    ctx->pc = 0x5143D4u;
label_5143d4:
    // 0x5143d4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x5143d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_5143d8:
    // 0x5143d8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x5143d8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_5143dc:
    // 0x5143dc: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x5143dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5143e0:
    // 0x5143e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x5143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_5143e4:
    // 0x5143e4: 0x10000002  b           . + 4 + (0x2 << 2)
label_5143e8:
    if (ctx->pc == 0x5143E8u) {
        ctx->pc = 0x5143E8u;
            // 0x5143e8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x5143ECu;
        goto label_5143ec;
    }
    ctx->pc = 0x5143E4u;
    {
        const bool branch_taken_0x5143e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5143E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5143E4u;
            // 0x5143e8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5143e4) {
            ctx->pc = 0x5143F0u;
            goto label_5143f0;
        }
    }
    ctx->pc = 0x5143ECu;
label_5143ec:
    // 0x5143ec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x5143ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5143f0:
    // 0x5143f0: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
label_5143f4:
    if (ctx->pc == 0x5143F4u) {
        ctx->pc = 0x5143F8u;
        goto label_5143f8;
    }
    ctx->pc = 0x5143F0u;
    {
        const bool branch_taken_0x5143f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5143f0) {
            ctx->pc = 0x514500u;
            goto label_514500;
        }
    }
    ctx->pc = 0x5143F8u;
label_5143f8:
    // 0x5143f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5143f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5143fc:
    // 0x5143fc: 0xc142584  jal         func_509610
label_514400:
    if (ctx->pc == 0x514400u) {
        ctx->pc = 0x514400u;
            // 0x514400: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514404u;
        goto label_514404;
    }
    ctx->pc = 0x5143FCu;
    SET_GPR_U32(ctx, 31, 0x514404u);
    ctx->pc = 0x514400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5143FCu;
            // 0x514400: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514404u; }
        if (ctx->pc != 0x514404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514404u; }
        if (ctx->pc != 0x514404u) { return; }
    }
    ctx->pc = 0x514404u;
label_514404:
    // 0x514404: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x514404u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_514408:
    // 0x514408: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x514408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_51440c:
    // 0x51440c: 0xc454ad80  lwc1        $f20, -0x5280($v0)
    ctx->pc = 0x51440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514410:
    // 0x514410: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x514410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_514414:
    // 0x514414: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x514414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_514418:
    // 0x514418: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x514418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_51441c:
    // 0x51441c: 0xc44cad80  lwc1        $f12, -0x5280($v0)
    ctx->pc = 0x51441cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294946176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514420:
    // 0x514420: 0xc0c6250  jal         func_318940
label_514424:
    if (ctx->pc == 0x514424u) {
        ctx->pc = 0x514424u;
            // 0x514424: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x514428u;
        goto label_514428;
    }
    ctx->pc = 0x514420u;
    SET_GPR_U32(ctx, 31, 0x514428u);
    ctx->pc = 0x514424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514420u;
            // 0x514424: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514428u; }
        if (ctx->pc != 0x514428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514428u; }
        if (ctx->pc != 0x514428u) { return; }
    }
    ctx->pc = 0x514428u;
label_514428:
    // 0x514428: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x514428u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_51442c:
    // 0x51442c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51442cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_514430:
    // 0x514430: 0x3443f983  ori         $v1, $v0, 0xF983
    ctx->pc = 0x514430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
label_514434:
    // 0x514434: 0xc6210930  lwc1        $f1, 0x930($s1)
    ctx->pc = 0x514434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514438:
    // 0x514438: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x514438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51443c:
    // 0x51443c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x51443cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514440:
    // 0x514440: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x514440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514444:
    // 0x514444: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x514444u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_514448:
    // 0x514448: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x514448u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_51444c:
    // 0x51444c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x51444cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_514450:
    // 0x514450: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x514450u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_514454:
    // 0x514454: 0xc04c970  jal         func_1325C0
label_514458:
    if (ctx->pc == 0x514458u) {
        ctx->pc = 0x514458u;
            // 0x514458: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51445Cu;
        goto label_51445c;
    }
    ctx->pc = 0x514454u;
    SET_GPR_U32(ctx, 31, 0x51445Cu);
    ctx->pc = 0x514458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514454u;
            // 0x514458: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325C0u;
    if (runtime->hasFunction(0x1325C0u)) {
        auto targetFn = runtime->lookupFunction(0x1325C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51445Cu; }
        if (ctx->pc != 0x51445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325C0_0x1325c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51445Cu; }
        if (ctx->pc != 0x51445Cu) { return; }
    }
    ctx->pc = 0x51445Cu;
label_51445c:
    // 0x51445c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x51445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_514460:
    // 0x514460: 0x26250830  addiu       $a1, $s1, 0x830
    ctx->pc = 0x514460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
label_514464:
    // 0x514464: 0xc04c72c  jal         func_131CB0
label_514468:
    if (ctx->pc == 0x514468u) {
        ctx->pc = 0x514468u;
            // 0x514468: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51446Cu;
        goto label_51446c;
    }
    ctx->pc = 0x514464u;
    SET_GPR_U32(ctx, 31, 0x51446Cu);
    ctx->pc = 0x514468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514464u;
            // 0x514468: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131CB0u;
    if (runtime->hasFunction(0x131CB0u)) {
        auto targetFn = runtime->lookupFunction(0x131CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51446Cu; }
        if (ctx->pc != 0x51446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131CB0_0x131cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51446Cu; }
        if (ctx->pc != 0x51446Cu) { return; }
    }
    ctx->pc = 0x51446Cu;
label_51446c:
    // 0x51446c: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x51446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_514470:
    // 0x514470: 0x3c02411d  lui         $v0, 0x411D
    ctx->pc = 0x514470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16669 << 16));
label_514474:
    // 0x514474: 0xc6210930  lwc1        $f1, 0x930($s1)
    ctx->pc = 0x514474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514478:
    // 0x514478: 0x3442e9e7  ori         $v0, $v0, 0xE9E7
    ctx->pc = 0x514478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59879);
label_51447c:
    // 0x51447c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51447cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514480:
    // 0x514480: 0x0  nop
    ctx->pc = 0x514480u;
    // NOP
label_514484:
    // 0x514484: 0x46016881  sub.s       $f2, $f13, $f1
    ctx->pc = 0x514484u;
    ctx->f[2] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
label_514488:
    // 0x514488: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x514488u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_51448c:
    // 0x51448c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x51448cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514490:
    // 0x514490: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_514494:
    if (ctx->pc == 0x514494u) {
        ctx->pc = 0x514498u;
        goto label_514498;
    }
    ctx->pc = 0x514490u;
    {
        const bool branch_taken_0x514490 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x514490) {
            ctx->pc = 0x5144E4u;
            goto label_5144e4;
        }
    }
    ctx->pc = 0x514498u;
label_514498:
    // 0x514498: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x514498u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51449c:
    // 0x51449c: 0x0  nop
    ctx->pc = 0x51449cu;
    // NOP
label_5144a0:
    // 0x5144a0: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x5144a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5144a4:
    // 0x5144a4: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_5144a8:
    if (ctx->pc == 0x5144A8u) {
        ctx->pc = 0x5144A8u;
            // 0x5144a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5144ACu;
        goto label_5144ac;
    }
    ctx->pc = 0x5144A4u;
    {
        const bool branch_taken_0x5144a4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x5144A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5144A4u;
            // 0x5144a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5144a4) {
            ctx->pc = 0x5144B0u;
            goto label_5144b0;
        }
    }
    ctx->pc = 0x5144ACu;
label_5144ac:
    // 0x5144ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x5144acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5144b0:
    // 0x5144b0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x5144b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_5144b4:
    // 0x5144b4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5144b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5144b8:
    // 0x5144b8: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x5144b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_5144bc:
    // 0x5144bc: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x5144bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5144c0:
    // 0x5144c0: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x5144c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_5144c4:
    // 0x5144c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5144c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5144c8:
    // 0x5144c8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x5144c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_5144cc:
    // 0x5144cc: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x5144ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_5144d0:
    // 0x5144d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x5144d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5144d4:
    // 0x5144d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5144d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5144d8:
    // 0x5144d8: 0x0  nop
    ctx->pc = 0x5144d8u;
    // NOP
label_5144dc:
    // 0x5144dc: 0x460d0018  adda.s      $f0, $f13
    ctx->pc = 0x5144dcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
label_5144e0:
    // 0x5144e0: 0x46020b5d  msub.s      $f13, $f1, $f2
    ctx->pc = 0x5144e0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[2]));
label_5144e4:
    // 0x5144e4: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x5144e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5144e8:
    // 0x5144e8: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x5144e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_5144ec:
    // 0x5144ec: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x5144ecu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
label_5144f0:
    // 0x5144f0: 0xc0c753c  jal         func_31D4F0
label_5144f4:
    if (ctx->pc == 0x5144F4u) {
        ctx->pc = 0x5144F4u;
            // 0x5144f4: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->pc = 0x5144F8u;
        goto label_5144f8;
    }
    ctx->pc = 0x5144F0u;
    SET_GPR_U32(ctx, 31, 0x5144F8u);
    ctx->pc = 0x5144F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5144F0u;
            // 0x5144f4: 0x2444009c  addiu       $a0, $v0, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5144F8u; }
        if (ctx->pc != 0x5144F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5144F8u; }
        if (ctx->pc != 0x5144F8u) { return; }
    }
    ctx->pc = 0x5144F8u;
label_5144f8:
    // 0x5144f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5144f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5144fc:
    // 0x5144fc: 0xae220e30  sw          $v0, 0xE30($s1)
    ctx->pc = 0x5144fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
label_514500:
    // 0x514500: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x514500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_514504:
    // 0x514504: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x514504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_514508:
    // 0x514508: 0x50400051  beql        $v0, $zero, . + 4 + (0x51 << 2)
label_51450c:
    if (ctx->pc == 0x51450Cu) {
        ctx->pc = 0x51450Cu;
            // 0x51450c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514510u;
        goto label_514510;
    }
    ctx->pc = 0x514508u;
    {
        const bool branch_taken_0x514508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514508) {
            ctx->pc = 0x51450Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514508u;
            // 0x51450c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514650u;
            goto label_514650;
        }
    }
    ctx->pc = 0x514510u;
label_514510:
    // 0x514510: 0xae200e30  sw          $zero, 0xE30($s1)
    ctx->pc = 0x514510u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 0));
label_514514:
    // 0x514514: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x514514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_514518:
    // 0x514518: 0x8c430ea4  lw          $v1, 0xEA4($v0)
    ctx->pc = 0x514518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_51451c:
    // 0x51451c: 0x8c64012c  lw          $a0, 0x12C($v1)
    ctx->pc = 0x51451cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 300)));
label_514520:
    // 0x514520: 0x96220c7e  lhu         $v0, 0xC7E($s1)
    ctx->pc = 0x514520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3198)));
label_514524:
    // 0x514524: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x514524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_514528:
    // 0x514528: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x514528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_51452c:
    // 0x51452c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x51452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_514530:
    // 0x514530: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x514530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_514534:
    // 0x514534: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x514534u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_514538:
    // 0x514538: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x514538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_51453c:
    // 0x51453c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_514540:
    if (ctx->pc == 0x514540u) {
        ctx->pc = 0x514540u;
            // 0x514540: 0x94a30002  lhu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->pc = 0x514544u;
        goto label_514544;
    }
    ctx->pc = 0x51453Cu;
    {
        const bool branch_taken_0x51453c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51453c) {
            ctx->pc = 0x514540u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51453Cu;
            // 0x514540: 0x94a30002  lhu         $v1, 0x2($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514568u;
            goto label_514568;
        }
    }
    ctx->pc = 0x514544u;
label_514544:
    // 0x514544: 0x26220890  addiu       $v0, $s1, 0x890
    ctx->pc = 0x514544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_514548:
    // 0x514548: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x514548u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_51454c:
    // 0x51454c: 0xc6340880  lwc1        $f20, 0x880($s1)
    ctx->pc = 0x51454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514550:
    // 0x514550: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x514550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_514554:
    // 0x514554: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x514554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514558:
    // 0x514558: 0xc0c6250  jal         func_318940
label_51455c:
    if (ctx->pc == 0x51455Cu) {
        ctx->pc = 0x51455Cu;
            // 0x51455c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x514560u;
        goto label_514560;
    }
    ctx->pc = 0x514558u;
    SET_GPR_U32(ctx, 31, 0x514560u);
    ctx->pc = 0x51455Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514558u;
            // 0x51455c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514560u; }
        if (ctx->pc != 0x514560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514560u; }
        if (ctx->pc != 0x514560u) { return; }
    }
    ctx->pc = 0x514560u;
label_514560:
    // 0x514560: 0x1000001f  b           . + 4 + (0x1F << 2)
label_514564:
    if (ctx->pc == 0x514564u) {
        ctx->pc = 0x514564u;
            // 0x514564: 0x3c023c8e  lui         $v0, 0x3C8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
        ctx->pc = 0x514568u;
        goto label_514568;
    }
    ctx->pc = 0x514560u;
    {
        const bool branch_taken_0x514560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514560u;
            // 0x514564: 0x3c023c8e  lui         $v0, 0x3C8E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514560) {
            ctx->pc = 0x5145E0u;
            goto label_5145e0;
        }
    }
    ctx->pc = 0x514568u;
label_514568:
    // 0x514568: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x514568u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_51456c:
    // 0x51456c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x51456cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_514570:
    // 0x514570: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x514570u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_514574:
    // 0x514574: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x514574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_514578:
    // 0x514578: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x514578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_51457c:
    // 0x51457c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x51457cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_514580:
    // 0x514580: 0xc04cc90  jal         func_133240
label_514584:
    if (ctx->pc == 0x514584u) {
        ctx->pc = 0x514584u;
            // 0x514584: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x514588u;
        goto label_514588;
    }
    ctx->pc = 0x514580u;
    SET_GPR_U32(ctx, 31, 0x514588u);
    ctx->pc = 0x514584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514580u;
            // 0x514584: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514588u; }
        if (ctx->pc != 0x514588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514588u; }
        if (ctx->pc != 0x514588u) { return; }
    }
    ctx->pc = 0x514588u;
label_514588:
    // 0x514588: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x514588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_51458c:
    // 0x51458c: 0xc04cc44  jal         func_133110
label_514590:
    if (ctx->pc == 0x514590u) {
        ctx->pc = 0x514590u;
            // 0x514590: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514594u;
        goto label_514594;
    }
    ctx->pc = 0x51458Cu;
    SET_GPR_U32(ctx, 31, 0x514594u);
    ctx->pc = 0x514590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51458Cu;
            // 0x514590: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514594u; }
        if (ctx->pc != 0x514594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514594u; }
        if (ctx->pc != 0x514594u) { return; }
    }
    ctx->pc = 0x514594u;
label_514594:
    // 0x514594: 0x26240820  addiu       $a0, $s1, 0x820
    ctx->pc = 0x514594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_514598:
    // 0x514598: 0xc04cc08  jal         func_133020
label_51459c:
    if (ctx->pc == 0x51459Cu) {
        ctx->pc = 0x51459Cu;
            // 0x51459c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x5145A0u;
        goto label_5145a0;
    }
    ctx->pc = 0x514598u;
    SET_GPR_U32(ctx, 31, 0x5145A0u);
    ctx->pc = 0x51459Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514598u;
            // 0x51459c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145A0u; }
        if (ctx->pc != 0x5145A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145A0u; }
        if (ctx->pc != 0x5145A0u) { return; }
    }
    ctx->pc = 0x5145A0u;
label_5145a0:
    // 0x5145a0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x5145a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5145a4:
    // 0x5145a4: 0x0  nop
    ctx->pc = 0x5145a4u;
    // NOP
label_5145a8:
    // 0x5145a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x5145a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5145ac:
    // 0x5145ac: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
label_5145b0:
    if (ctx->pc == 0x5145B0u) {
        ctx->pc = 0x5145B0u;
            // 0x5145b0: 0x26240560  addiu       $a0, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x5145B4u;
        goto label_5145b4;
    }
    ctx->pc = 0x5145ACu;
    {
        const bool branch_taken_0x5145ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x5145ac) {
            ctx->pc = 0x5145B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5145ACu;
            // 0x5145b0: 0x26240560  addiu       $a0, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5145CCu;
            goto label_5145cc;
        }
    }
    ctx->pc = 0x5145B4u;
label_5145b4:
    // 0x5145b4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x5145b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_5145b8:
    // 0x5145b8: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x5145b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5145bc:
    // 0x5145bc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5145bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5145c0:
    // 0x5145c0: 0xc04cc70  jal         func_1331C0
label_5145c4:
    if (ctx->pc == 0x5145C4u) {
        ctx->pc = 0x5145C4u;
            // 0x5145c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5145C8u;
        goto label_5145c8;
    }
    ctx->pc = 0x5145C0u;
    SET_GPR_U32(ctx, 31, 0x5145C8u);
    ctx->pc = 0x5145C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5145C0u;
            // 0x5145c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145C8u; }
        if (ctx->pc != 0x5145C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145C8u; }
        if (ctx->pc != 0x5145C8u) { return; }
    }
    ctx->pc = 0x5145C8u;
label_5145c8:
    // 0x5145c8: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x5145c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_5145cc:
    // 0x5145cc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x5145ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_5145d0:
    // 0x5145d0: 0xc075378  jal         func_1D4DE0
label_5145d4:
    if (ctx->pc == 0x5145D4u) {
        ctx->pc = 0x5145D4u;
            // 0x5145d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5145D8u;
        goto label_5145d8;
    }
    ctx->pc = 0x5145D0u;
    SET_GPR_U32(ctx, 31, 0x5145D8u);
    ctx->pc = 0x5145D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5145D0u;
            // 0x5145d4: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145D8u; }
        if (ctx->pc != 0x5145D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5145D8u; }
        if (ctx->pc != 0x5145D8u) { return; }
    }
    ctx->pc = 0x5145D8u;
label_5145d8:
    // 0x5145d8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x5145d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_5145dc:
    // 0x5145dc: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x5145dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_5145e0:
    // 0x5145e0: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x5145e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_5145e4:
    // 0x5145e4: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x5145e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_5145e8:
    // 0x5145e8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x5145e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5145ec:
    // 0x5145ec: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x5145ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5145f0:
    // 0x5145f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5145f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5145f4:
    // 0x5145f4: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x5145f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_5145f8:
    // 0x5145f8: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x5145f8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_5145fc:
    // 0x5145fc: 0xc0c753c  jal         func_31D4F0
label_514600:
    if (ctx->pc == 0x514600u) {
        ctx->pc = 0x514600u;
            // 0x514600: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x514604u;
        goto label_514604;
    }
    ctx->pc = 0x5145FCu;
    SET_GPR_U32(ctx, 31, 0x514604u);
    ctx->pc = 0x514600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5145FCu;
            // 0x514600: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514604u; }
        if (ctx->pc != 0x514604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514604u; }
        if (ctx->pc != 0x514604u) { return; }
    }
    ctx->pc = 0x514604u;
label_514604:
    // 0x514604: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x514604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_514608:
    // 0x514608: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x514608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_51460c:
    // 0x51460c: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x51460cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_514610:
    // 0x514610: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x514610u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_514614:
    // 0x514614: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x514614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514618:
    // 0x514618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51461c:
    // 0x51461c: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x51461cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_514620:
    // 0x514620: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x514620u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_514624:
    // 0x514624: 0xc0c753c  jal         func_31D4F0
label_514628:
    if (ctx->pc == 0x514628u) {
        ctx->pc = 0x514628u;
            // 0x514628: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51462Cu;
        goto label_51462c;
    }
    ctx->pc = 0x514624u;
    SET_GPR_U32(ctx, 31, 0x51462Cu);
    ctx->pc = 0x514628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514624u;
            // 0x514628: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51462Cu; }
        if (ctx->pc != 0x51462Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51462Cu; }
        if (ctx->pc != 0x51462Cu) { return; }
    }
    ctx->pc = 0x51462Cu;
label_51462c:
    // 0x51462c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x51462cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514630:
    // 0x514630: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514630u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514634:
    // 0x514634: 0xc142654  jal         func_509950
label_514638:
    if (ctx->pc == 0x514638u) {
        ctx->pc = 0x514638u;
            // 0x514638: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->pc = 0x51463Cu;
        goto label_51463c;
    }
    ctx->pc = 0x514634u;
    SET_GPR_U32(ctx, 31, 0x51463Cu);
    ctx->pc = 0x514638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514634u;
            // 0x514638: 0xae200e1c  sw          $zero, 0xE1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51463Cu; }
        if (ctx->pc != 0x51463Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51463Cu; }
        if (ctx->pc != 0x51463Cu) { return; }
    }
    ctx->pc = 0x51463Cu;
label_51463c:
    // 0x51463c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x51463cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_514640:
    // 0x514640: 0xc07649c  jal         func_1D9270
label_514644:
    if (ctx->pc == 0x514644u) {
        ctx->pc = 0x514644u;
            // 0x514644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514648u;
        goto label_514648;
    }
    ctx->pc = 0x514640u;
    SET_GPR_U32(ctx, 31, 0x514648u);
    ctx->pc = 0x514644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514640u;
            // 0x514644: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514648u; }
        if (ctx->pc != 0x514648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514648u; }
        if (ctx->pc != 0x514648u) { return; }
    }
    ctx->pc = 0x514648u;
label_514648:
    // 0x514648: 0x10000004  b           . + 4 + (0x4 << 2)
label_51464c:
    if (ctx->pc == 0x51464Cu) {
        ctx->pc = 0x51464Cu;
            // 0x51464c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x514650u;
        goto label_514650;
    }
    ctx->pc = 0x514648u;
    {
        const bool branch_taken_0x514648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51464Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514648u;
            // 0x51464c: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514648) {
            ctx->pc = 0x51465Cu;
            goto label_51465c;
        }
    }
    ctx->pc = 0x514650u;
label_514650:
    // 0x514650: 0xc0c1418  jal         func_305060
label_514654:
    if (ctx->pc == 0x514654u) {
        ctx->pc = 0x514658u;
        goto label_514658;
    }
    ctx->pc = 0x514650u;
    SET_GPR_U32(ctx, 31, 0x514658u);
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514658u; }
        if (ctx->pc != 0x514658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514658u; }
        if (ctx->pc != 0x514658u) { return; }
    }
    ctx->pc = 0x514658u;
label_514658:
    // 0x514658: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x514658u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_51465c:
    // 0x51465c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514660:
    // 0x514660: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x514660u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_514664:
    // 0x514664: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x514664u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_514668:
    // 0x514668: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x514668u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51466c:
    // 0x51466c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x51466cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_514670:
    // 0x514670: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x514670u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_514674:
    // 0x514674: 0x3e00008  jr          $ra
label_514678:
    if (ctx->pc == 0x514678u) {
        ctx->pc = 0x514678u;
            // 0x514678: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x51467Cu;
        goto label_51467c;
    }
    ctx->pc = 0x514674u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514674u;
            // 0x514678: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51467Cu;
label_51467c:
    // 0x51467c: 0x0  nop
    ctx->pc = 0x51467cu;
    // NOP
label_514680:
    // 0x514680: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x514680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_514684:
    // 0x514684: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x514684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_514688:
    // 0x514688: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x514688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_51468c:
    // 0x51468c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51468cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514690:
    // 0x514690: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x514690u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_514694:
    // 0x514694: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x514694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_514698:
    // 0x514698: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x514698u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_51469c:
    // 0x51469c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x51469cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_5146a0:
    // 0x5146a0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x5146a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_5146a4:
    // 0x5146a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x5146a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_5146a8:
    // 0x5146a8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x5146a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_5146ac:
    // 0x5146ac: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x5146acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_5146b0:
    // 0x5146b0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5146b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5146b4:
    // 0x5146b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x5146b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5146b8:
    // 0x5146b8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5146b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5146bc:
    // 0x5146bc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5146bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5146c0:
    // 0x5146c0: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x5146c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_5146c4:
    // 0x5146c4: 0xa7a20164  sh          $v0, 0x164($sp)
    ctx->pc = 0x5146c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 356), (uint16_t)GPR_U32(ctx, 2));
label_5146c8:
    // 0x5146c8: 0xafa00150  sw          $zero, 0x150($sp)
    ctx->pc = 0x5146c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 0));
label_5146cc:
    // 0x5146cc: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x5146ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
label_5146d0:
    // 0x5146d0: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x5146d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_5146d4:
    // 0x5146d4: 0xa7a00160  sh          $zero, 0x160($sp)
    ctx->pc = 0x5146d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 352), (uint16_t)GPR_U32(ctx, 0));
label_5146d8:
    // 0x5146d8: 0xa7a00162  sh          $zero, 0x162($sp)
    ctx->pc = 0x5146d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 354), (uint16_t)GPR_U32(ctx, 0));
label_5146dc:
    // 0x5146dc: 0xc04cbd8  jal         func_132F60
label_5146e0:
    if (ctx->pc == 0x5146E0u) {
        ctx->pc = 0x5146E0u;
            // 0x5146e0: 0xa7a00166  sh          $zero, 0x166($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 358), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x5146E4u;
        goto label_5146e4;
    }
    ctx->pc = 0x5146DCu;
    SET_GPR_U32(ctx, 31, 0x5146E4u);
    ctx->pc = 0x5146E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5146DCu;
            // 0x5146e0: 0xa7a00166  sh          $zero, 0x166($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 358), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5146E4u; }
        if (ctx->pc != 0x5146E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5146E4u; }
        if (ctx->pc != 0x5146E4u) { return; }
    }
    ctx->pc = 0x5146E4u;
label_5146e4:
    // 0x5146e4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5146e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5146e8:
    // 0x5146e8: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x5146e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_5146ec:
    // 0x5146ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x5146ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_5146f0:
    // 0x5146f0: 0xc04cbd8  jal         func_132F60
label_5146f4:
    if (ctx->pc == 0x5146F4u) {
        ctx->pc = 0x5146F4u;
            // 0x5146f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5146F8u;
        goto label_5146f8;
    }
    ctx->pc = 0x5146F0u;
    SET_GPR_U32(ctx, 31, 0x5146F8u);
    ctx->pc = 0x5146F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5146F0u;
            // 0x5146f4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5146F8u; }
        if (ctx->pc != 0x5146F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5146F8u; }
        if (ctx->pc != 0x5146F8u) { return; }
    }
    ctx->pc = 0x5146F8u;
label_5146f8:
    // 0x5146f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5146f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5146fc:
    // 0x5146fc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x5146fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_514700:
    // 0x514700: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x514700u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_514704:
    // 0x514704: 0xc04cbd8  jal         func_132F60
label_514708:
    if (ctx->pc == 0x514708u) {
        ctx->pc = 0x514708u;
            // 0x514708: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51470Cu;
        goto label_51470c;
    }
    ctx->pc = 0x514704u;
    SET_GPR_U32(ctx, 31, 0x51470Cu);
    ctx->pc = 0x514708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514704u;
            // 0x514708: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51470Cu; }
        if (ctx->pc != 0x51470Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51470Cu; }
        if (ctx->pc != 0x51470Cu) { return; }
    }
    ctx->pc = 0x51470Cu;
label_51470c:
    // 0x51470c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51470cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514710:
    // 0x514710: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x514710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_514714:
    // 0x514714: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x514714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_514718:
    // 0x514718: 0xc04cbd8  jal         func_132F60
label_51471c:
    if (ctx->pc == 0x51471Cu) {
        ctx->pc = 0x51471Cu;
            // 0x51471c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x514720u;
        goto label_514720;
    }
    ctx->pc = 0x514718u;
    SET_GPR_U32(ctx, 31, 0x514720u);
    ctx->pc = 0x51471Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514718u;
            // 0x51471c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514720u; }
        if (ctx->pc != 0x514720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514720u; }
        if (ctx->pc != 0x514720u) { return; }
    }
    ctx->pc = 0x514720u;
label_514720:
    // 0x514720: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x514720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_514724:
    // 0x514724: 0x8e70002c  lw          $s0, 0x2C($s3)
    ctx->pc = 0x514724u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
label_514728:
    // 0x514728: 0x8c420c78  lw          $v0, 0xC78($v0)
    ctx->pc = 0x514728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3192)));
label_51472c:
    // 0x51472c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x51472cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_514730:
    // 0x514730: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x514730u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_514734:
    // 0x514734: 0xc142760  jal         func_509D80
label_514738:
    if (ctx->pc == 0x514738u) {
        ctx->pc = 0x514738u;
            // 0x514738: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51473Cu;
        goto label_51473c;
    }
    ctx->pc = 0x514734u;
    SET_GPR_U32(ctx, 31, 0x51473Cu);
    ctx->pc = 0x514738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514734u;
            // 0x514738: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509D80u;
    if (runtime->hasFunction(0x509D80u)) {
        auto targetFn = runtime->lookupFunction(0x509D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51473Cu; }
        if (ctx->pc != 0x51473Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509D80_0x509d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51473Cu; }
        if (ctx->pc != 0x51473Cu) { return; }
    }
    ctx->pc = 0x51473Cu;
label_51473c:
    // 0x51473c: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x51473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_514740:
    // 0x514740: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x514740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_514744:
    // 0x514744: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_514748:
    if (ctx->pc == 0x514748u) {
        ctx->pc = 0x514748u;
            // 0x514748: 0x92060006  lbu         $a2, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->pc = 0x51474Cu;
        goto label_51474c;
    }
    ctx->pc = 0x514744u;
    {
        const bool branch_taken_0x514744 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x514744) {
            ctx->pc = 0x514748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514744u;
            // 0x514748: 0x92060006  lbu         $a2, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514798u;
            goto label_514798;
        }
    }
    ctx->pc = 0x51474Cu;
label_51474c:
    // 0x51474c: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x51474cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_514750:
    // 0x514750: 0xc04cc04  jal         func_133010
label_514754:
    if (ctx->pc == 0x514754u) {
        ctx->pc = 0x514754u;
            // 0x514754: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x514758u;
        goto label_514758;
    }
    ctx->pc = 0x514750u;
    SET_GPR_U32(ctx, 31, 0x514758u);
    ctx->pc = 0x514754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514750u;
            // 0x514754: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514758u; }
        if (ctx->pc != 0x514758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514758u; }
        if (ctx->pc != 0x514758u) { return; }
    }
    ctx->pc = 0x514758u;
label_514758:
    // 0x514758: 0x8e350d74  lw          $s5, 0xD74($s1)
    ctx->pc = 0x514758u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_51475c:
    // 0x51475c: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x51475cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_514760:
    // 0x514760: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x514760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514764:
    // 0x514764: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x514764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514768:
    // 0x514768: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x514768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_51476c:
    // 0x51476c: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x51476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_514770:
    // 0x514770: 0xe7a10084  swc1        $f1, 0x84($sp)
    ctx->pc = 0x514770u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_514774:
    // 0x514774: 0xe7a20088  swc1        $f2, 0x88($sp)
    ctx->pc = 0x514774u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_514778:
    // 0x514778: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x514778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_51477c:
    // 0x51477c: 0xc0a5444  jal         func_295110
label_514780:
    if (ctx->pc == 0x514780u) {
        ctx->pc = 0x514780u;
            // 0x514780: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x514784u;
        goto label_514784;
    }
    ctx->pc = 0x51477Cu;
    SET_GPR_U32(ctx, 31, 0x514784u);
    ctx->pc = 0x514780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51477Cu;
            // 0x514780: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514784u; }
        if (ctx->pc != 0x514784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514784u; }
        if (ctx->pc != 0x514784u) { return; }
    }
    ctx->pc = 0x514784u;
label_514784:
    // 0x514784: 0xaea002d0  sw          $zero, 0x2D0($s5)
    ctx->pc = 0x514784u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 720), GPR_U32(ctx, 0));
label_514788:
    // 0x514788: 0xaea002d4  sw          $zero, 0x2D4($s5)
    ctx->pc = 0x514788u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 724), GPR_U32(ctx, 0));
label_51478c:
    // 0x51478c: 0xaea002d8  sw          $zero, 0x2D8($s5)
    ctx->pc = 0x51478cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 728), GPR_U32(ctx, 0));
label_514790:
    // 0x514790: 0xaea002dc  sw          $zero, 0x2DC($s5)
    ctx->pc = 0x514790u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 732), GPR_U32(ctx, 0));
label_514794:
    // 0x514794: 0x92060006  lbu         $a2, 0x6($s0)
    ctx->pc = 0x514794u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_514798:
    // 0x514798: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x514798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_51479c:
    // 0x51479c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x51479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5147a0:
    // 0x5147a0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x5147a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_5147a4:
    // 0x5147a4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5147a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5147a8:
    // 0x5147a8: 0x262702c0  addiu       $a3, $s1, 0x2C0
    ctx->pc = 0x5147a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_5147ac:
    // 0x5147ac: 0x26280820  addiu       $t0, $s1, 0x820
    ctx->pc = 0x5147acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 2080));
label_5147b0:
    // 0x5147b0: 0xc0b849c  jal         func_2E1270
label_5147b4:
    if (ctx->pc == 0x5147B4u) {
        ctx->pc = 0x5147B4u;
            // 0x5147b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5147B8u;
        goto label_5147b8;
    }
    ctx->pc = 0x5147B0u;
    SET_GPR_U32(ctx, 31, 0x5147B8u);
    ctx->pc = 0x5147B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5147B0u;
            // 0x5147b4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1270u;
    if (runtime->hasFunction(0x2E1270u)) {
        auto targetFn = runtime->lookupFunction(0x2E1270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5147B8u; }
        if (ctx->pc != 0x5147B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E1270_0x2e1270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5147B8u; }
        if (ctx->pc != 0x5147B8u) { return; }
    }
    ctx->pc = 0x5147B8u;
label_5147b8:
    // 0x5147b8: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x5147b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_5147bc:
    // 0x5147bc: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_5147c0:
    if (ctx->pc == 0x5147C0u) {
        ctx->pc = 0x5147C0u;
            // 0x5147c0: 0x8e650064  lw          $a1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->pc = 0x5147C4u;
        goto label_5147c4;
    }
    ctx->pc = 0x5147BCu;
    {
        const bool branch_taken_0x5147bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x5147bc) {
            ctx->pc = 0x5147C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5147BCu;
            // 0x5147c0: 0x8e650064  lw          $a1, 0x64($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514804u;
            goto label_514804;
        }
    }
    ctx->pc = 0x5147C4u;
label_5147c4:
    // 0x5147c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x5147c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_5147c8:
    // 0x5147c8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x5147c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_5147cc:
    // 0x5147cc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x5147ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_5147d0:
    // 0x5147d0: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x5147d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_5147d4:
    // 0x5147d4: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x5147d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_5147d8:
    // 0x5147d8: 0x24842070  addiu       $a0, $a0, 0x2070
    ctx->pc = 0x5147d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8304));
label_5147dc:
    // 0x5147dc: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x5147dcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_5147e0:
    // 0x5147e0: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x5147e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_5147e4:
    // 0x5147e4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x5147e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_5147e8:
    // 0x5147e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5147e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5147ec:
    // 0x5147ec: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x5147ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_5147f0:
    // 0x5147f0: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x5147f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_5147f4:
    // 0x5147f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x5147f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_5147f8:
    // 0x5147f8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x5147f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_5147fc:
    // 0x5147fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_514800:
    if (ctx->pc == 0x514800u) {
        ctx->pc = 0x514800u;
            // 0x514800: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x514804u;
        goto label_514804;
    }
    ctx->pc = 0x5147FCu;
    {
        const bool branch_taken_0x5147fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5147FCu;
            // 0x514800: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5147fc) {
            ctx->pc = 0x514838u;
            goto label_514838;
        }
    }
    ctx->pc = 0x514804u;
label_514804:
    // 0x514804: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x514804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_514808:
    // 0x514808: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x514808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_51480c:
    // 0x51480c: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x51480cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
label_514810:
    // 0x514810: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x514810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_514814:
    // 0x514814: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x514814u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_514818:
    // 0x514818: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x514818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_51481c:
    // 0x51481c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51481cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_514820:
    // 0x514820: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x514820u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_514824:
    // 0x514824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x514824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_514828:
    // 0x514828: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x514828u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_51482c:
    // 0x51482c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51482cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_514830:
    // 0x514830: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x514830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_514834:
    // 0x514834: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x514834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_514838:
    // 0x514838: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x514838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51483c:
    // 0x51483c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x51483cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_514840:
    // 0x514840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x514840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514844:
    // 0x514844: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x514844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_514848:
    // 0x514848: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x514848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51484c:
    // 0x51484c: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x51484cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_514850:
    // 0x514850: 0xc64d0008  lwc1        $f13, 0x8($s2)
    ctx->pc = 0x514850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_514854:
    // 0x514854: 0xc04cbd8  jal         func_132F60
label_514858:
    if (ctx->pc == 0x514858u) {
        ctx->pc = 0x514858u;
            // 0x514858: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51485Cu;
        goto label_51485c;
    }
    ctx->pc = 0x514854u;
    SET_GPR_U32(ctx, 31, 0x51485Cu);
    ctx->pc = 0x514858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514854u;
            // 0x514858: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51485Cu; }
        if (ctx->pc != 0x51485Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51485Cu; }
        if (ctx->pc != 0x51485Cu) { return; }
    }
    ctx->pc = 0x51485Cu;
label_51485c:
    // 0x51485c: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x51485cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_514860:
    // 0x514860: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x514860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_514864:
    // 0x514864: 0xc04cca0  jal         func_133280
label_514868:
    if (ctx->pc == 0x514868u) {
        ctx->pc = 0x514868u;
            // 0x514868: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x51486Cu;
        goto label_51486c;
    }
    ctx->pc = 0x514864u;
    SET_GPR_U32(ctx, 31, 0x51486Cu);
    ctx->pc = 0x514868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514864u;
            // 0x514868: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51486Cu; }
        if (ctx->pc != 0x51486Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51486Cu; }
        if (ctx->pc != 0x51486Cu) { return; }
    }
    ctx->pc = 0x51486Cu;
label_51486c:
    // 0x51486c: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x51486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514870:
    // 0x514870: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x514870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_514874:
    // 0x514874: 0x24421b70  addiu       $v0, $v0, 0x1B70
    ctx->pc = 0x514874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7024));
label_514878:
    // 0x514878: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x514878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_51487c:
    // 0x51487c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x51487cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_514880:
    // 0x514880: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x514880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_514884:
    // 0x514884: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x514884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_514888:
    // 0x514888: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x514888u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_51488c:
    // 0x51488c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51488cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_514890:
    // 0x514890: 0xc44c0000  lwc1        $f12, 0x0($v0)
    ctx->pc = 0x514890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514894:
    // 0x514894: 0xc0b8084  jal         func_2E0210
label_514898:
    if (ctx->pc == 0x514898u) {
        ctx->pc = 0x514898u;
            // 0x514898: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->pc = 0x51489Cu;
        goto label_51489c;
    }
    ctx->pc = 0x514894u;
    SET_GPR_U32(ctx, 31, 0x51489Cu);
    ctx->pc = 0x514898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514894u;
            // 0x514898: 0x262602e0  addiu       $a2, $s1, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0210u;
    if (runtime->hasFunction(0x2E0210u)) {
        auto targetFn = runtime->lookupFunction(0x2E0210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51489Cu; }
        if (ctx->pc != 0x51489Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E0210_0x2e0210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51489Cu; }
        if (ctx->pc != 0x51489Cu) { return; }
    }
    ctx->pc = 0x51489Cu;
label_51489c:
    // 0x51489c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x51489cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5148a0:
    // 0x5148a0: 0xc04c720  jal         func_131C80
label_5148a4:
    if (ctx->pc == 0x5148A4u) {
        ctx->pc = 0x5148A4u;
            // 0x5148a4: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x5148A8u;
        goto label_5148a8;
    }
    ctx->pc = 0x5148A0u;
    SET_GPR_U32(ctx, 31, 0x5148A8u);
    ctx->pc = 0x5148A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148A0u;
            // 0x5148a4: 0x26250560  addiu       $a1, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131C80u;
    if (runtime->hasFunction(0x131C80u)) {
        auto targetFn = runtime->lookupFunction(0x131C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148A8u; }
        if (ctx->pc != 0x5148A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131C80_0x131c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148A8u; }
        if (ctx->pc != 0x5148A8u) { return; }
    }
    ctx->pc = 0x5148A8u;
label_5148a8:
    // 0x5148a8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x5148a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_5148ac:
    // 0x5148ac: 0xc04cc04  jal         func_133010
label_5148b0:
    if (ctx->pc == 0x5148B0u) {
        ctx->pc = 0x5148B0u;
            // 0x5148b0: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->pc = 0x5148B4u;
        goto label_5148b4;
    }
    ctx->pc = 0x5148ACu;
    SET_GPR_U32(ctx, 31, 0x5148B4u);
    ctx->pc = 0x5148B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148ACu;
            // 0x5148b0: 0x26250570  addiu       $a1, $s1, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148B4u; }
        if (ctx->pc != 0x5148B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148B4u; }
        if (ctx->pc != 0x5148B4u) { return; }
    }
    ctx->pc = 0x5148B4u;
label_5148b4:
    // 0x5148b4: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x5148b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_5148b8:
    // 0x5148b8: 0xc075318  jal         func_1D4C60
label_5148bc:
    if (ctx->pc == 0x5148BCu) {
        ctx->pc = 0x5148BCu;
            // 0x5148bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x5148C0u;
        goto label_5148c0;
    }
    ctx->pc = 0x5148B8u;
    SET_GPR_U32(ctx, 31, 0x5148C0u);
    ctx->pc = 0x5148BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148B8u;
            // 0x5148bc: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148C0u; }
        if (ctx->pc != 0x5148C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148C0u; }
        if (ctx->pc != 0x5148C0u) { return; }
    }
    ctx->pc = 0x5148C0u;
label_5148c0:
    // 0x5148c0: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x5148c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_5148c4:
    // 0x5148c4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x5148c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_5148c8:
    // 0x5148c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5148c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5148cc:
    // 0x5148cc: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x5148ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_5148d0:
    // 0x5148d0: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x5148d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_5148d4:
    // 0x5148d4: 0xc0c6250  jal         func_318940
label_5148d8:
    if (ctx->pc == 0x5148D8u) {
        ctx->pc = 0x5148D8u;
            // 0x5148d8: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x5148DCu;
        goto label_5148dc;
    }
    ctx->pc = 0x5148D4u;
    SET_GPR_U32(ctx, 31, 0x5148DCu);
    ctx->pc = 0x5148D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148D4u;
            // 0x5148d8: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148DCu; }
        if (ctx->pc != 0x5148DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148DCu; }
        if (ctx->pc != 0x5148DCu) { return; }
    }
    ctx->pc = 0x5148DCu;
label_5148dc:
    // 0x5148dc: 0x26320560  addiu       $s2, $s1, 0x560
    ctx->pc = 0x5148dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_5148e0:
    // 0x5148e0: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x5148e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_5148e4:
    // 0x5148e4: 0xc04c74c  jal         func_131D30
label_5148e8:
    if (ctx->pc == 0x5148E8u) {
        ctx->pc = 0x5148E8u;
            // 0x5148e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5148ECu;
        goto label_5148ec;
    }
    ctx->pc = 0x5148E4u;
    SET_GPR_U32(ctx, 31, 0x5148ECu);
    ctx->pc = 0x5148E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148E4u;
            // 0x5148e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131D30u;
    if (runtime->hasFunction(0x131D30u)) {
        auto targetFn = runtime->lookupFunction(0x131D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148ECu; }
        if (ctx->pc != 0x5148ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131D30_0x131d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148ECu; }
        if (ctx->pc != 0x5148ECu) { return; }
    }
    ctx->pc = 0x5148ECu;
label_5148ec:
    // 0x5148ec: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x5148ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_5148f0:
    // 0x5148f0: 0xc04cc04  jal         func_133010
label_5148f4:
    if (ctx->pc == 0x5148F4u) {
        ctx->pc = 0x5148F4u;
            // 0x5148f4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x5148F8u;
        goto label_5148f8;
    }
    ctx->pc = 0x5148F0u;
    SET_GPR_U32(ctx, 31, 0x5148F8u);
    ctx->pc = 0x5148F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148F0u;
            // 0x5148f4: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148F8u; }
        if (ctx->pc != 0x5148F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5148F8u; }
        if (ctx->pc != 0x5148F8u) { return; }
    }
    ctx->pc = 0x5148F8u;
label_5148f8:
    // 0x5148f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5148f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5148fc:
    // 0x5148fc: 0xc075318  jal         func_1D4C60
label_514900:
    if (ctx->pc == 0x514900u) {
        ctx->pc = 0x514900u;
            // 0x514900: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->pc = 0x514904u;
        goto label_514904;
    }
    ctx->pc = 0x5148FCu;
    SET_GPR_U32(ctx, 31, 0x514904u);
    ctx->pc = 0x514900u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5148FCu;
            // 0x514900: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514904u; }
        if (ctx->pc != 0x514904u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514904u; }
        if (ctx->pc != 0x514904u) { return; }
    }
    ctx->pc = 0x514904u;
label_514904:
    // 0x514904: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514908:
    // 0x514908: 0x26240840  addiu       $a0, $s1, 0x840
    ctx->pc = 0x514908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2112));
label_51490c:
    // 0x51490c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51490cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_514910:
    // 0x514910: 0xc0c6250  jal         func_318940
label_514914:
    if (ctx->pc == 0x514914u) {
        ctx->pc = 0x514914u;
            // 0x514914: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514918u;
        goto label_514918;
    }
    ctx->pc = 0x514910u;
    SET_GPR_U32(ctx, 31, 0x514918u);
    ctx->pc = 0x514914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514910u;
            // 0x514914: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514918u; }
        if (ctx->pc != 0x514918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514918u; }
        if (ctx->pc != 0x514918u) { return; }
    }
    ctx->pc = 0x514918u;
label_514918:
    // 0x514918: 0xc0b9210  jal         func_2E4840
label_51491c:
    if (ctx->pc == 0x51491Cu) {
        ctx->pc = 0x51491Cu;
            // 0x51491c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x514920u;
        goto label_514920;
    }
    ctx->pc = 0x514918u;
    SET_GPR_U32(ctx, 31, 0x514920u);
    ctx->pc = 0x51491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514918u;
            // 0x51491c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514920u; }
        if (ctx->pc != 0x514920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514920u; }
        if (ctx->pc != 0x514920u) { return; }
    }
    ctx->pc = 0x514920u;
label_514920:
    // 0x514920: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x514920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514924:
    // 0x514924: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x514924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_514928:
    // 0x514928: 0xc075378  jal         func_1D4DE0
label_51492c:
    if (ctx->pc == 0x51492Cu) {
        ctx->pc = 0x51492Cu;
            // 0x51492c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x514930u;
        goto label_514930;
    }
    ctx->pc = 0x514928u;
    SET_GPR_U32(ctx, 31, 0x514930u);
    ctx->pc = 0x51492Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514928u;
            // 0x51492c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514930u; }
        if (ctx->pc != 0x514930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514930u; }
        if (ctx->pc != 0x514930u) { return; }
    }
    ctx->pc = 0x514930u;
label_514930:
    // 0x514930: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x514930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514934:
    // 0x514934: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x514934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_514938:
    // 0x514938: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x514938u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51493c:
    // 0x51493c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x51493cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514940:
    // 0x514940: 0xc0c753c  jal         func_31D4F0
label_514944:
    if (ctx->pc == 0x514944u) {
        ctx->pc = 0x514944u;
            // 0x514944: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x514948u;
        goto label_514948;
    }
    ctx->pc = 0x514940u;
    SET_GPR_U32(ctx, 31, 0x514948u);
    ctx->pc = 0x514944u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514940u;
            // 0x514944: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514948u; }
        if (ctx->pc != 0x514948u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514948u; }
        if (ctx->pc != 0x514948u) { return; }
    }
    ctx->pc = 0x514948u;
label_514948:
    // 0x514948: 0xc0b9210  jal         func_2E4840
label_51494c:
    if (ctx->pc == 0x51494Cu) {
        ctx->pc = 0x51494Cu;
            // 0x51494c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x514950u;
        goto label_514950;
    }
    ctx->pc = 0x514948u;
    SET_GPR_U32(ctx, 31, 0x514950u);
    ctx->pc = 0x51494Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514948u;
            // 0x51494c: 0x262407e0  addiu       $a0, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514950u; }
        if (ctx->pc != 0x514950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514950u; }
        if (ctx->pc != 0x514950u) { return; }
    }
    ctx->pc = 0x514950u;
label_514950:
    // 0x514950: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x514950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_514954:
    // 0x514954: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x514954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_514958:
    // 0x514958: 0xc4540830  lwc1        $f20, 0x830($v0)
    ctx->pc = 0x514958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 2096)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_51495c:
    // 0x51495c: 0xc04ccf4  jal         func_1333D0
label_514960:
    if (ctx->pc == 0x514960u) {
        ctx->pc = 0x514960u;
            // 0x514960: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->pc = 0x514964u;
        goto label_514964;
    }
    ctx->pc = 0x51495Cu;
    SET_GPR_U32(ctx, 31, 0x514964u);
    ctx->pc = 0x514960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51495Cu;
            // 0x514960: 0x262507e0  addiu       $a1, $s1, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1333D0u;
    if (runtime->hasFunction(0x1333D0u)) {
        auto targetFn = runtime->lookupFunction(0x1333D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514964u; }
        if (ctx->pc != 0x514964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001333D0_0x1333d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514964u; }
        if (ctx->pc != 0x514964u) { return; }
    }
    ctx->pc = 0x514964u;
label_514964:
    // 0x514964: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x514964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_514968:
    // 0x514968: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x514968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_51496c:
    // 0x51496c: 0xc04cca0  jal         func_133280
label_514970:
    if (ctx->pc == 0x514970u) {
        ctx->pc = 0x514970u;
            // 0x514970: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x514974u;
        goto label_514974;
    }
    ctx->pc = 0x51496Cu;
    SET_GPR_U32(ctx, 31, 0x514974u);
    ctx->pc = 0x514970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51496Cu;
            // 0x514970: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514974u; }
        if (ctx->pc != 0x514974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514974u; }
        if (ctx->pc != 0x514974u) { return; }
    }
    ctx->pc = 0x514974u;
label_514974:
    // 0x514974: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x514974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514978:
    // 0x514978: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x514978u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_51497c:
    // 0x51497c: 0x0  nop
    ctx->pc = 0x51497cu;
    // NOP
label_514980:
    // 0x514980: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x514980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514984:
    // 0x514984: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
label_514988:
    if (ctx->pc == 0x514988u) {
        ctx->pc = 0x514988u;
            // 0x514988: 0xc6200880  lwc1        $f0, 0x880($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x51498Cu;
        goto label_51498c;
    }
    ctx->pc = 0x514984u;
    {
        const bool branch_taken_0x514984 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x514984) {
            ctx->pc = 0x514988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514984u;
            // 0x514988: 0xc6200880  lwc1        $f0, 0x880($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5149A0u;
            goto label_5149a0;
        }
    }
    ctx->pc = 0x51498Cu;
label_51498c:
    // 0x51498c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x51498cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_514990:
    // 0x514990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514994:
    // 0x514994: 0x0  nop
    ctx->pc = 0x514994u;
    // NOP
label_514998:
    // 0x514998: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x514998u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_51499c:
    // 0x51499c: 0xc6200880  lwc1        $f0, 0x880($s1)
    ctx->pc = 0x51499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5149a0:
    // 0x5149a0: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x5149a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_5149a4:
    // 0x5149a4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x5149a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_5149a8:
    // 0x5149a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5149a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5149ac:
    // 0x5149ac: 0x0  nop
    ctx->pc = 0x5149acu;
    // NOP
label_5149b0:
    // 0x5149b0: 0x4600a300  add.s       $f12, $f20, $f0
    ctx->pc = 0x5149b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_5149b4:
    // 0x5149b4: 0x46016036  c.le.s      $f12, $f1
    ctx->pc = 0x5149b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5149b8:
    // 0x5149b8: 0x4503002c  bc1tl       . + 4 + (0x2C << 2)
label_5149bc:
    if (ctx->pc == 0x5149BCu) {
        ctx->pc = 0x5149BCu;
            // 0x5149bc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->pc = 0x5149C0u;
        goto label_5149c0;
    }
    ctx->pc = 0x5149B8u;
    {
        const bool branch_taken_0x5149b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5149b8) {
            ctx->pc = 0x5149BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5149B8u;
            // 0x5149bc: 0x3c02c049  lui         $v0, 0xC049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514A6Cu;
            goto label_514a6c;
        }
    }
    ctx->pc = 0x5149C0u;
label_5149c0:
    // 0x5149c0: 0x46016041  sub.s       $f1, $f12, $f1
    ctx->pc = 0x5149c0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_5149c4:
    // 0x5149c4: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x5149c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_5149c8:
    // 0x5149c8: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x5149c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_5149cc:
    // 0x5149cc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x5149ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_5149d0:
    // 0x5149d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x5149d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5149d4:
    // 0x5149d4: 0x0  nop
    ctx->pc = 0x5149d4u;
    // NOP
label_5149d8:
    // 0x5149d8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x5149d8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
label_5149dc:
    // 0x5149dc: 0x0  nop
    ctx->pc = 0x5149dcu;
    // NOP
label_5149e0:
    // 0x5149e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5149e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5149e4:
    // 0x5149e4: 0x0  nop
    ctx->pc = 0x5149e4u;
    // NOP
label_5149e8:
    // 0x5149e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x5149e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_5149ec:
    // 0x5149ec: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_5149f0:
    if (ctx->pc == 0x5149F0u) {
        ctx->pc = 0x5149F0u;
            // 0x5149f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x5149F4u;
        goto label_5149f4;
    }
    ctx->pc = 0x5149ECu;
    {
        const bool branch_taken_0x5149ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x5149ec) {
            ctx->pc = 0x5149F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5149ECu;
            // 0x5149f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x514A04u;
            goto label_514a04;
        }
    }
    ctx->pc = 0x5149F4u;
label_5149f4:
    // 0x5149f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x5149f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_5149f8:
    // 0x5149f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x5149f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_5149fc:
    // 0x5149fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_514a00:
    if (ctx->pc == 0x514A00u) {
        ctx->pc = 0x514A04u;
        goto label_514a04;
    }
    ctx->pc = 0x5149FCu;
    {
        const bool branch_taken_0x5149fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5149fc) {
            ctx->pc = 0x514A18u;
            goto label_514a18;
        }
    }
    ctx->pc = 0x514A04u;
label_514a04:
    // 0x514a04: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x514a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_514a08:
    // 0x514a08: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x514a08u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_514a0c:
    // 0x514a0c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x514a0cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_514a10:
    // 0x514a10: 0x0  nop
    ctx->pc = 0x514a10u;
    // NOP
label_514a14:
    // 0x514a14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x514a14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_514a18:
    // 0x514a18: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_514a1c:
    if (ctx->pc == 0x514A1Cu) {
        ctx->pc = 0x514A1Cu;
            // 0x514a1c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x514A20u;
        goto label_514a20;
    }
    ctx->pc = 0x514A18u;
    {
        const bool branch_taken_0x514a18 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x514a18) {
            ctx->pc = 0x514A1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514A18u;
            // 0x514a1c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514A2Cu;
            goto label_514a2c;
        }
    }
    ctx->pc = 0x514A20u;
label_514a20:
    // 0x514a20: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x514a20u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514a24:
    // 0x514a24: 0x10000007  b           . + 4 + (0x7 << 2)
label_514a28:
    if (ctx->pc == 0x514A28u) {
        ctx->pc = 0x514A28u;
            // 0x514a28: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x514A2Cu;
        goto label_514a2c;
    }
    ctx->pc = 0x514A24u;
    {
        const bool branch_taken_0x514a24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514A24u;
            // 0x514a28: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514a24) {
            ctx->pc = 0x514A44u;
            goto label_514a44;
        }
    }
    ctx->pc = 0x514A2Cu;
label_514a2c:
    // 0x514a2c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x514a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_514a30:
    // 0x514a30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x514a30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_514a34:
    // 0x514a34: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x514a34u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514a38:
    // 0x514a38: 0x0  nop
    ctx->pc = 0x514a38u;
    // NOP
label_514a3c:
    // 0x514a3c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x514a3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_514a40:
    // 0x514a40: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x514a40u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_514a44:
    // 0x514a44: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x514a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_514a48:
    // 0x514a48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x514a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_514a4c:
    // 0x514a4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x514a4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_514a50:
    // 0x514a50: 0x0  nop
    ctx->pc = 0x514a50u;
    // NOP
label_514a54:
    // 0x514a54: 0x46026041  sub.s       $f1, $f12, $f2
    ctx->pc = 0x514a54u;
    ctx->f[1] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
label_514a58:
    // 0x514a58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x514a58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514a5c:
    // 0x514a5c: 0x0  nop
    ctx->pc = 0x514a5cu;
    // NOP
label_514a60:
    // 0x514a60: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x514a60u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514a64:
    // 0x514a64: 0x1000004c  b           . + 4 + (0x4C << 2)
label_514a68:
    if (ctx->pc == 0x514A68u) {
        ctx->pc = 0x514A68u;
            // 0x514a68: 0x4603131d  msub.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->pc = 0x514A6Cu;
        goto label_514a6c;
    }
    ctx->pc = 0x514A64u;
    {
        const bool branch_taken_0x514a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514A64u;
            // 0x514a68: 0x4603131d  msub.s      $f12, $f2, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514a64) {
            ctx->pc = 0x514B98u;
            goto label_514b98;
        }
    }
    ctx->pc = 0x514A6Cu;
label_514a6c:
    // 0x514a6c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x514a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_514a70:
    // 0x514a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514a74:
    // 0x514a74: 0x0  nop
    ctx->pc = 0x514a74u;
    // NOP
label_514a78:
    // 0x514a78: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x514a78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514a7c:
    // 0x514a7c: 0x45000046  bc1f        . + 4 + (0x46 << 2)
label_514a80:
    if (ctx->pc == 0x514A80u) {
        ctx->pc = 0x514A84u;
        goto label_514a84;
    }
    ctx->pc = 0x514A7Cu;
    {
        const bool branch_taken_0x514a7c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x514a7c) {
            ctx->pc = 0x514B98u;
            goto label_514b98;
        }
    }
    ctx->pc = 0x514A84u;
label_514a84:
    // 0x514a84: 0x460c0840  add.s       $f1, $f1, $f12
    ctx->pc = 0x514a84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[12]);
label_514a88:
    // 0x514a88: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x514a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_514a8c:
    // 0x514a8c: 0x34430fdb  ori         $v1, $v0, 0xFDB
    ctx->pc = 0x514a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_514a90:
    // 0x514a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x514a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_514a94:
    // 0x514a94: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x514a94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514a98:
    // 0x514a98: 0x0  nop
    ctx->pc = 0x514a98u;
    // NOP
label_514a9c:
    // 0x514a9c: 0x46000943  div.s       $f5, $f1, $f0
    ctx->pc = 0x514a9cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[5] = ctx->f[1] / ctx->f[0];
label_514aa0:
    // 0x514aa0: 0x0  nop
    ctx->pc = 0x514aa0u;
    // NOP
label_514aa4:
    // 0x514aa4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x514aa4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514aa8:
    // 0x514aa8: 0x0  nop
    ctx->pc = 0x514aa8u;
    // NOP
label_514aac:
    // 0x514aac: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x514aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514ab0:
    // 0x514ab0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_514ab4:
    if (ctx->pc == 0x514AB4u) {
        ctx->pc = 0x514AB8u;
        goto label_514ab8;
    }
    ctx->pc = 0x514AB0u;
    {
        const bool branch_taken_0x514ab0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x514ab0) {
            ctx->pc = 0x514ABCu;
            goto label_514abc;
        }
    }
    ctx->pc = 0x514AB8u;
label_514ab8:
    // 0x514ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x514ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514abc:
    // 0x514abc: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_514ac0:
    if (ctx->pc == 0x514AC0u) {
        ctx->pc = 0x514AC0u;
            // 0x514ac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x514AC4u;
        goto label_514ac4;
    }
    ctx->pc = 0x514ABCu;
    {
        const bool branch_taken_0x514abc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x514abc) {
            ctx->pc = 0x514AC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514ABCu;
            // 0x514ac0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514AD0u;
            goto label_514ad0;
        }
    }
    ctx->pc = 0x514AC4u;
label_514ac4:
    // 0x514ac4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514ac4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514ac8:
    // 0x514ac8: 0x10000007  b           . + 4 + (0x7 << 2)
label_514acc:
    if (ctx->pc == 0x514ACCu) {
        ctx->pc = 0x514ACCu;
            // 0x514acc: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x514AD0u;
        goto label_514ad0;
    }
    ctx->pc = 0x514AC8u;
    {
        const bool branch_taken_0x514ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514AC8u;
            // 0x514acc: 0x46800120  cvt.s.w     $f4, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ac8) {
            ctx->pc = 0x514AE8u;
            goto label_514ae8;
        }
    }
    ctx->pc = 0x514AD0u;
label_514ad0:
    // 0x514ad0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x514ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_514ad4:
    // 0x514ad4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x514ad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_514ad8:
    // 0x514ad8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x514ad8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514adc:
    // 0x514adc: 0x0  nop
    ctx->pc = 0x514adcu;
    // NOP
label_514ae0:
    // 0x514ae0: 0x46800120  cvt.s.w     $f4, $f0
    ctx->pc = 0x514ae0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_514ae4:
    // 0x514ae4: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x514ae4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_514ae8:
    // 0x514ae8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x514ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_514aec:
    // 0x514aec: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x514aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_514af0:
    // 0x514af0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x514af0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_514af4:
    // 0x514af4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x514af4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_514af8:
    // 0x514af8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x514af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_514afc:
    // 0x514afc: 0x0  nop
    ctx->pc = 0x514afcu;
    // NOP
label_514b00:
    // 0x514b00: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x514b00u;
    ctx->f[31] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_514b04:
    // 0x514b04: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x514b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_514b08:
    // 0x514b08: 0x4604185d  msub.s      $f1, $f3, $f4
    ctx->pc = 0x514b08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[4]));
label_514b0c:
    // 0x514b0c: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x514b0cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_514b10:
    // 0x514b10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514b10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514b14:
    // 0x514b14: 0x0  nop
    ctx->pc = 0x514b14u;
    // NOP
label_514b18:
    // 0x514b18: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x514b18u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514b1c:
    // 0x514b1c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_514b20:
    if (ctx->pc == 0x514B20u) {
        ctx->pc = 0x514B20u;
            // 0x514b20: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x514B24u;
        goto label_514b24;
    }
    ctx->pc = 0x514B1Cu;
    {
        const bool branch_taken_0x514b1c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x514b1c) {
            ctx->pc = 0x514B20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514B1Cu;
            // 0x514b20: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x514B34u;
            goto label_514b34;
        }
    }
    ctx->pc = 0x514B24u;
label_514b24:
    // 0x514b24: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x514b24u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_514b28:
    // 0x514b28: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x514b28u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_514b2c:
    // 0x514b2c: 0x10000006  b           . + 4 + (0x6 << 2)
label_514b30:
    if (ctx->pc == 0x514B30u) {
        ctx->pc = 0x514B34u;
        goto label_514b34;
    }
    ctx->pc = 0x514B2Cu;
    {
        const bool branch_taken_0x514b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x514b2c) {
            ctx->pc = 0x514B48u;
            goto label_514b48;
        }
    }
    ctx->pc = 0x514B34u;
label_514b34:
    // 0x514b34: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x514b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_514b38:
    // 0x514b38: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x514b38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_514b3c:
    // 0x514b3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x514b3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_514b40:
    // 0x514b40: 0x0  nop
    ctx->pc = 0x514b40u;
    // NOP
label_514b44:
    // 0x514b44: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x514b44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_514b48:
    // 0x514b48: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
label_514b4c:
    if (ctx->pc == 0x514B4Cu) {
        ctx->pc = 0x514B4Cu;
            // 0x514b4c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x514B50u;
        goto label_514b50;
    }
    ctx->pc = 0x514B48u;
    {
        const bool branch_taken_0x514b48 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x514b48) {
            ctx->pc = 0x514B4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514B48u;
            // 0x514b4c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514B5Cu;
            goto label_514b5c;
        }
    }
    ctx->pc = 0x514B50u;
label_514b50:
    // 0x514b50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x514b50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514b54:
    // 0x514b54: 0x10000007  b           . + 4 + (0x7 << 2)
label_514b58:
    if (ctx->pc == 0x514B58u) {
        ctx->pc = 0x514B58u;
            // 0x514b58: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x514B5Cu;
        goto label_514b5c;
    }
    ctx->pc = 0x514B54u;
    {
        const bool branch_taken_0x514b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514B54u;
            // 0x514b58: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514b54) {
            ctx->pc = 0x514B74u;
            goto label_514b74;
        }
    }
    ctx->pc = 0x514B5Cu;
label_514b5c:
    // 0x514b5c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x514b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_514b60:
    // 0x514b60: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x514b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_514b64:
    // 0x514b64: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x514b64u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514b68:
    // 0x514b68: 0x0  nop
    ctx->pc = 0x514b68u;
    // NOP
label_514b6c:
    // 0x514b6c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x514b6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_514b70:
    // 0x514b70: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x514b70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_514b74:
    // 0x514b74: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x514b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_514b78:
    // 0x514b78: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x514b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_514b7c:
    // 0x514b7c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x514b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_514b80:
    // 0x514b80: 0x0  nop
    ctx->pc = 0x514b80u;
    // NOP
label_514b84:
    // 0x514b84: 0x460c1040  add.s       $f1, $f2, $f12
    ctx->pc = 0x514b84u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[12]);
label_514b88:
    // 0x514b88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x514b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514b8c:
    // 0x514b8c: 0x0  nop
    ctx->pc = 0x514b8cu;
    // NOP
label_514b90:
    // 0x514b90: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x514b90u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514b94:
    // 0x514b94: 0x4603131c  madd.s      $f12, $f2, $f3
    ctx->pc = 0x514b94u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_514b98:
    // 0x514b98: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x514b98u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_514b9c:
    // 0x514b9c: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x514b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_514ba0:
    // 0x514ba0: 0xc0c753c  jal         func_31D4F0
label_514ba4:
    if (ctx->pc == 0x514BA4u) {
        ctx->pc = 0x514BA4u;
            // 0x514ba4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x514BA8u;
        goto label_514ba8;
    }
    ctx->pc = 0x514BA0u;
    SET_GPR_U32(ctx, 31, 0x514BA8u);
    ctx->pc = 0x514BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514BA0u;
            // 0x514ba4: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BA8u; }
        if (ctx->pc != 0x514BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BA8u; }
        if (ctx->pc != 0x514BA8u) { return; }
    }
    ctx->pc = 0x514BA8u;
label_514ba8:
    // 0x514ba8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x514ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_514bac:
    // 0x514bac: 0xc1427ac  jal         func_509EB0
label_514bb0:
    if (ctx->pc == 0x514BB0u) {
        ctx->pc = 0x514BB0u;
            // 0x514bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514BB4u;
        goto label_514bb4;
    }
    ctx->pc = 0x514BACu;
    SET_GPR_U32(ctx, 31, 0x514BB4u);
    ctx->pc = 0x514BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514BACu;
            // 0x514bb0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509EB0u;
    if (runtime->hasFunction(0x509EB0u)) {
        auto targetFn = runtime->lookupFunction(0x509EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BB4u; }
        if (ctx->pc != 0x514BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509EB0_0x509eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BB4u; }
        if (ctx->pc != 0x514BB4u) { return; }
    }
    ctx->pc = 0x514BB4u;
label_514bb4:
    // 0x514bb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x514bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_514bb8:
    // 0x514bb8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x514bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_514bbc:
    // 0x514bbc: 0xc142504  jal         func_509410
label_514bc0:
    if (ctx->pc == 0x514BC0u) {
        ctx->pc = 0x514BC0u;
            // 0x514bc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514BC4u;
        goto label_514bc4;
    }
    ctx->pc = 0x514BBCu;
    SET_GPR_U32(ctx, 31, 0x514BC4u);
    ctx->pc = 0x514BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514BBCu;
            // 0x514bc0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BC4u; }
        if (ctx->pc != 0x514BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514BC4u; }
        if (ctx->pc != 0x514BC4u) { return; }
    }
    ctx->pc = 0x514BC4u;
label_514bc4:
    // 0x514bc4: 0x8e650070  lw          $a1, 0x70($s3)
    ctx->pc = 0x514bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_514bc8:
    // 0x514bc8: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x514bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_514bcc:
    // 0x514bcc: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_514bd0:
    if (ctx->pc == 0x514BD0u) {
        ctx->pc = 0x514BD0u;
            // 0x514bd0: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x514BD4u;
        goto label_514bd4;
    }
    ctx->pc = 0x514BCCu;
    {
        const bool branch_taken_0x514bcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x514bcc) {
            ctx->pc = 0x514BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514BCCu;
            // 0x514bd0: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514BE4u;
            goto label_514be4;
        }
    }
    ctx->pc = 0x514BD4u;
label_514bd4:
    // 0x514bd4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_514bd8:
    // 0x514bd8: 0x2463b100  addiu       $v1, $v1, -0x4F00
    ctx->pc = 0x514bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947072));
label_514bdc:
    // 0x514bdc: 0x10000009  b           . + 4 + (0x9 << 2)
label_514be0:
    if (ctx->pc == 0x514BE0u) {
        ctx->pc = 0x514BE0u;
            // 0x514be0: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x514BE4u;
        goto label_514be4;
    }
    ctx->pc = 0x514BDCu;
    {
        const bool branch_taken_0x514bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514BDCu;
            // 0x514be0: 0xae630028  sw          $v1, 0x28($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514bdc) {
            ctx->pc = 0x514C04u;
            goto label_514c04;
        }
    }
    ctx->pc = 0x514BE4u;
label_514be4:
    // 0x514be4: 0x121900  sll         $v1, $s2, 4
    ctx->pc = 0x514be4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_514be8:
    // 0x514be8: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x514be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_514bec:
    // 0x514bec: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x514becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_514bf0:
    // 0x514bf0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x514bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_514bf4:
    // 0x514bf4: 0x2484ada0  addiu       $a0, $a0, -0x5260
    ctx->pc = 0x514bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946208));
label_514bf8:
    // 0x514bf8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x514bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_514bfc:
    // 0x514bfc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x514bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_514c00:
    // 0x514c00: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x514c00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_514c04:
    // 0x514c04: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x514c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514c08:
    // 0x514c08: 0xe6200e1c  swc1        $f0, 0xE1C($s1)
    ctx->pc = 0x514c08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3612), bits); }
label_514c0c:
    // 0x514c0c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x514c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_514c10:
    // 0x514c10: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x514c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514c14:
    // 0x514c14: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x514c14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_514c18:
    // 0x514c18: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x514c18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_514c1c:
    // 0x514c1c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x514c1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_514c20:
    // 0x514c20: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x514c20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_514c24:
    // 0x514c24: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x514c24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_514c28:
    // 0x514c28: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x514c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_514c2c:
    // 0x514c2c: 0x3e00008  jr          $ra
label_514c30:
    if (ctx->pc == 0x514C30u) {
        ctx->pc = 0x514C30u;
            // 0x514c30: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x514C34u;
        goto label_514c34;
    }
    ctx->pc = 0x514C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514C2Cu;
            // 0x514c30: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x514C34u;
label_514c34:
    // 0x514c34: 0x0  nop
    ctx->pc = 0x514c34u;
    // NOP
label_514c38:
    // 0x514c38: 0x0  nop
    ctx->pc = 0x514c38u;
    // NOP
label_514c3c:
    // 0x514c3c: 0x0  nop
    ctx->pc = 0x514c3cu;
    // NOP
label_514c40:
    // 0x514c40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x514c40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_514c44:
    // 0x514c44: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_514c48:
    // 0x514c48: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x514c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_514c4c:
    // 0x514c4c: 0x2463a9e0  addiu       $v1, $v1, -0x5620
    ctx->pc = 0x514c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945248));
label_514c50:
    // 0x514c50: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x514c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_514c54:
    // 0x514c54: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x514c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_514c58:
    // 0x514c58: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x514c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_514c5c:
    // 0x514c5c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x514c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_514c60:
    // 0x514c60: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x514c60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_514c64:
    // 0x514c64: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x514c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_514c68:
    // 0x514c68: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x514c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_514c6c:
    // 0x514c6c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x514c6cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_514c70:
    // 0x514c70: 0x80a70074  lb          $a3, 0x74($a1)
    ctx->pc = 0x514c70u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 116)));
label_514c74:
    // 0x514c74: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x514c74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_514c78:
    // 0x514c78: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x514c78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_514c7c:
    // 0x514c7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x514c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_514c80:
    // 0x514c80: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x514c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514c84:
    // 0x514c84: 0x10e2009d  beq         $a3, $v0, . + 4 + (0x9D << 2)
label_514c88:
    if (ctx->pc == 0x514C88u) {
        ctx->pc = 0x514C88u;
            // 0x514c88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514C8Cu;
        goto label_514c8c;
    }
    ctx->pc = 0x514C84u;
    {
        const bool branch_taken_0x514c84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x514C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514C84u;
            // 0x514c88: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514c84) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514C8Cu;
label_514c8c:
    // 0x514c8c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x514c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_514c90:
    // 0x514c90: 0x50e20084  beql        $a3, $v0, . + 4 + (0x84 << 2)
label_514c94:
    if (ctx->pc == 0x514C94u) {
        ctx->pc = 0x514C94u;
            // 0x514c94: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x514C98u;
        goto label_514c98;
    }
    ctx->pc = 0x514C90u;
    {
        const bool branch_taken_0x514c90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x514c90) {
            ctx->pc = 0x514C94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514C90u;
            // 0x514c94: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x514EA4u;
            goto label_514ea4;
        }
    }
    ctx->pc = 0x514C98u;
label_514c98:
    // 0x514c98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x514c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_514c9c:
    // 0x514c9c: 0x50e30047  beql        $a3, $v1, . + 4 + (0x47 << 2)
label_514ca0:
    if (ctx->pc == 0x514CA0u) {
        ctx->pc = 0x514CA0u;
            // 0x514ca0: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x514CA4u;
        goto label_514ca4;
    }
    ctx->pc = 0x514C9Cu;
    {
        const bool branch_taken_0x514c9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x514c9c) {
            ctx->pc = 0x514CA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514C9Cu;
            // 0x514ca0: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x514DBCu;
            goto label_514dbc;
        }
    }
    ctx->pc = 0x514CA4u;
label_514ca4:
    // 0x514ca4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
label_514ca8:
    if (ctx->pc == 0x514CA8u) {
        ctx->pc = 0x514CACu;
        goto label_514cac;
    }
    ctx->pc = 0x514CA4u;
    {
        const bool branch_taken_0x514ca4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x514ca4) {
            ctx->pc = 0x514CB4u;
            goto label_514cb4;
        }
    }
    ctx->pc = 0x514CACu;
label_514cac:
    // 0x514cac: 0x10000094  b           . + 4 + (0x94 << 2)
label_514cb0:
    if (ctx->pc == 0x514CB0u) {
        ctx->pc = 0x514CB0u;
            // 0x514cb0: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x514CB4u;
        goto label_514cb4;
    }
    ctx->pc = 0x514CACu;
    {
        const bool branch_taken_0x514cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514CACu;
            // 0x514cb0: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514cac) {
            ctx->pc = 0x514F00u;
            goto label_514f00;
        }
    }
    ctx->pc = 0x514CB4u;
label_514cb4:
    // 0x514cb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x514cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_514cb8:
    // 0x514cb8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x514cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_514cbc:
    // 0x514cbc: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x514cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514cc0:
    // 0x514cc0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x514cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514cc4:
    // 0x514cc4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x514cc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514cc8:
    // 0x514cc8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x514cc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514ccc:
    // 0x514ccc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_514cd0:
    if (ctx->pc == 0x514CD0u) {
        ctx->pc = 0x514CD0u;
            // 0x514cd0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x514CD4u;
        goto label_514cd4;
    }
    ctx->pc = 0x514CCCu;
    {
        const bool branch_taken_0x514ccc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x514CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514CCCu;
            // 0x514cd0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ccc) {
            ctx->pc = 0x514CECu;
            goto label_514cec;
        }
    }
    ctx->pc = 0x514CD4u;
label_514cd4:
    // 0x514cd4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x514cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_514cd8:
    // 0x514cd8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x514cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_514cdc:
    // 0x514cdc: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514ce0:
    // 0x514ce0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x514ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_514ce4:
    // 0x514ce4: 0x10000002  b           . + 4 + (0x2 << 2)
label_514ce8:
    if (ctx->pc == 0x514CE8u) {
        ctx->pc = 0x514CE8u;
            // 0x514ce8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x514CECu;
        goto label_514cec;
    }
    ctx->pc = 0x514CE4u;
    {
        const bool branch_taken_0x514ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514CE4u;
            // 0x514ce8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ce4) {
            ctx->pc = 0x514CF0u;
            goto label_514cf0;
        }
    }
    ctx->pc = 0x514CECu;
label_514cec:
    // 0x514cec: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x514cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514cf0:
    // 0x514cf0: 0x10600082  beqz        $v1, . + 4 + (0x82 << 2)
label_514cf4:
    if (ctx->pc == 0x514CF4u) {
        ctx->pc = 0x514CF8u;
        goto label_514cf8;
    }
    ctx->pc = 0x514CF0u;
    {
        const bool branch_taken_0x514cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x514cf0) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514CF8u;
label_514cf8:
    // 0x514cf8: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x514cf8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514cfc:
    // 0x514cfc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_514d00:
    // 0x514d00: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x514d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514d04:
    // 0x514d04: 0x2463a9e0  addiu       $v1, $v1, -0x5620
    ctx->pc = 0x514d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945248));
label_514d08:
    // 0x514d08: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514d0c:
    // 0x514d0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514d10:
    // 0x514d10: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x514d10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_514d14:
    // 0x514d14: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x514d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_514d18:
    // 0x514d18: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x514d18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_514d1c:
    // 0x514d1c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x514d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514d20:
    // 0x514d20: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x514d20u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_514d24:
    // 0x514d24: 0xc1425e0  jal         func_509780
label_514d28:
    if (ctx->pc == 0x514D28u) {
        ctx->pc = 0x514D28u;
            // 0x514d28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514D2Cu;
        goto label_514d2c;
    }
    ctx->pc = 0x514D24u;
    SET_GPR_U32(ctx, 31, 0x514D2Cu);
    ctx->pc = 0x514D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514D24u;
            // 0x514d28: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D2Cu; }
        if (ctx->pc != 0x514D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D2Cu; }
        if (ctx->pc != 0x514D2Cu) { return; }
    }
    ctx->pc = 0x514D2Cu;
label_514d2c:
    // 0x514d2c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514d2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514d30:
    // 0x514d30: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x514d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514d34:
    // 0x514d34: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x514d34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_514d38:
    // 0x514d38: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x514d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_514d3c:
    // 0x514d3c: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x514d3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_514d40:
    // 0x514d40: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_514d44:
    // 0x514d44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_514d48:
    if (ctx->pc == 0x514D48u) {
        ctx->pc = 0x514D48u;
            // 0x514d48: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x514D4Cu;
        goto label_514d4c;
    }
    ctx->pc = 0x514D44u;
    {
        const bool branch_taken_0x514d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514d44) {
            ctx->pc = 0x514D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514D44u;
            // 0x514d48: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514D58u;
            goto label_514d58;
        }
    }
    ctx->pc = 0x514D4Cu;
label_514d4c:
    // 0x514d4c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x514d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_514d50:
    // 0x514d50: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x514d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514d54:
    // 0x514d54: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x514d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_514d58:
    // 0x514d58: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514d58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514d5c:
    // 0x514d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514d60:
    // 0x514d60: 0x0  nop
    ctx->pc = 0x514d60u;
    // NOP
label_514d64:
    // 0x514d64: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x514d64u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_514d68:
    // 0x514d68: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x514d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514d6c:
    // 0x514d6c: 0x0  nop
    ctx->pc = 0x514d6cu;
    // NOP
label_514d70:
    // 0x514d70: 0x0  nop
    ctx->pc = 0x514d70u;
    // NOP
label_514d74:
    // 0x514d74: 0xc1425a8  jal         func_5096A0
label_514d78:
    if (ctx->pc == 0x514D78u) {
        ctx->pc = 0x514D78u;
            // 0x514d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514D7Cu;
        goto label_514d7c;
    }
    ctx->pc = 0x514D74u;
    SET_GPR_U32(ctx, 31, 0x514D7Cu);
    ctx->pc = 0x514D78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514D74u;
            // 0x514d78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D7Cu; }
        if (ctx->pc != 0x514D7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D7Cu; }
        if (ctx->pc != 0x514D7Cu) { return; }
    }
    ctx->pc = 0x514D7Cu;
label_514d7c:
    // 0x514d7c: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x514d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_514d80:
    // 0x514d80: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x514d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_514d84:
    // 0x514d84: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x514d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_514d88:
    // 0x514d88: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x514d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_514d8c:
    // 0x514d8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x514d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_514d90:
    // 0x514d90: 0xc0a545c  jal         func_295170
label_514d94:
    if (ctx->pc == 0x514D94u) {
        ctx->pc = 0x514D94u;
            // 0x514d94: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x514D98u;
        goto label_514d98;
    }
    ctx->pc = 0x514D90u;
    SET_GPR_U32(ctx, 31, 0x514D98u);
    ctx->pc = 0x514D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514D90u;
            // 0x514d94: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D98u; }
        if (ctx->pc != 0x514D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514D98u; }
        if (ctx->pc != 0x514D98u) { return; }
    }
    ctx->pc = 0x514D98u;
label_514d98:
    // 0x514d98: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x514d98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_514d9c:
    // 0x514d9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x514d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_514da0:
    // 0x514da0: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x514da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_514da4:
    // 0x514da4: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x514da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_514da8:
    // 0x514da8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x514da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_514dac:
    // 0x514dac: 0xc08bf20  jal         func_22FC80
label_514db0:
    if (ctx->pc == 0x514DB0u) {
        ctx->pc = 0x514DB0u;
            // 0x514db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514DB4u;
        goto label_514db4;
    }
    ctx->pc = 0x514DACu;
    SET_GPR_U32(ctx, 31, 0x514DB4u);
    ctx->pc = 0x514DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514DACu;
            // 0x514db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514DB4u; }
        if (ctx->pc != 0x514DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514DB4u; }
        if (ctx->pc != 0x514DB4u) { return; }
    }
    ctx->pc = 0x514DB4u;
label_514db4:
    // 0x514db4: 0x10000051  b           . + 4 + (0x51 << 2)
label_514db8:
    if (ctx->pc == 0x514DB8u) {
        ctx->pc = 0x514DBCu;
        goto label_514dbc;
    }
    ctx->pc = 0x514DB4u;
    {
        const bool branch_taken_0x514db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x514db4) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514DBCu;
label_514dbc:
    // 0x514dbc: 0xc142520  jal         func_509480
label_514dc0:
    if (ctx->pc == 0x514DC0u) {
        ctx->pc = 0x514DC0u;
            // 0x514dc0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514DC4u;
        goto label_514dc4;
    }
    ctx->pc = 0x514DBCu;
    SET_GPR_U32(ctx, 31, 0x514DC4u);
    ctx->pc = 0x514DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514DBCu;
            // 0x514dc0: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514DC4u; }
        if (ctx->pc != 0x514DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514DC4u; }
        if (ctx->pc != 0x514DC4u) { return; }
    }
    ctx->pc = 0x514DC4u;
label_514dc4:
    // 0x514dc4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x514dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_514dc8:
    // 0x514dc8: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x514dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_514dcc:
    // 0x514dcc: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x514dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514dd0:
    // 0x514dd0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x514dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514dd4:
    // 0x514dd4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x514dd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514dd8:
    // 0x514dd8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x514dd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514ddc:
    // 0x514ddc: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_514de0:
    if (ctx->pc == 0x514DE0u) {
        ctx->pc = 0x514DE0u;
            // 0x514de0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x514DE4u;
        goto label_514de4;
    }
    ctx->pc = 0x514DDCu;
    {
        const bool branch_taken_0x514ddc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x514DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514DDCu;
            // 0x514de0: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ddc) {
            ctx->pc = 0x514DFCu;
            goto label_514dfc;
        }
    }
    ctx->pc = 0x514DE4u;
label_514de4:
    // 0x514de4: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x514de4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_514de8:
    // 0x514de8: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x514de8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_514dec:
    // 0x514dec: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514decu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514df0:
    // 0x514df0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x514df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_514df4:
    // 0x514df4: 0x10000002  b           . + 4 + (0x2 << 2)
label_514df8:
    if (ctx->pc == 0x514DF8u) {
        ctx->pc = 0x514DF8u;
            // 0x514df8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x514DFCu;
        goto label_514dfc;
    }
    ctx->pc = 0x514DF4u;
    {
        const bool branch_taken_0x514df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514DF4u;
            // 0x514df8: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514df4) {
            ctx->pc = 0x514E00u;
            goto label_514e00;
        }
    }
    ctx->pc = 0x514DFCu;
label_514dfc:
    // 0x514dfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x514dfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514e00:
    // 0x514e00: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_514e04:
    if (ctx->pc == 0x514E04u) {
        ctx->pc = 0x514E08u;
        goto label_514e08;
    }
    ctx->pc = 0x514E00u;
    {
        const bool branch_taken_0x514e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x514e00) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514E08u;
label_514e08:
    // 0x514e08: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x514e08u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514e0c:
    // 0x514e0c: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x514e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_514e10:
    // 0x514e10: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x514e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514e14:
    // 0x514e14: 0x2463a9e0  addiu       $v1, $v1, -0x5620
    ctx->pc = 0x514e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945248));
label_514e18:
    // 0x514e18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514e1c:
    // 0x514e1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x514e1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_514e20:
    // 0x514e20: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x514e20u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_514e24:
    // 0x514e24: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x514e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_514e28:
    // 0x514e28: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x514e28u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_514e2c:
    // 0x514e2c: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x514e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514e30:
    // 0x514e30: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x514e30u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_514e34:
    // 0x514e34: 0xc1425e0  jal         func_509780
label_514e38:
    if (ctx->pc == 0x514E38u) {
        ctx->pc = 0x514E38u;
            // 0x514e38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514E3Cu;
        goto label_514e3c;
    }
    ctx->pc = 0x514E34u;
    SET_GPR_U32(ctx, 31, 0x514E3Cu);
    ctx->pc = 0x514E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514E34u;
            // 0x514e38: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514E3Cu; }
        if (ctx->pc != 0x514E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514E3Cu; }
        if (ctx->pc != 0x514E3Cu) { return; }
    }
    ctx->pc = 0x514E3Cu;
label_514e3c:
    // 0x514e3c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514e3cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514e40:
    // 0x514e40: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x514e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_514e44:
    // 0x514e44: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x514e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_514e48:
    // 0x514e48: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x514e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_514e4c:
    // 0x514e4c: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x514e4cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
label_514e50:
    // 0x514e50: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_514e54:
    // 0x514e54: 0x14400029  bnez        $v0, . + 4 + (0x29 << 2)
label_514e58:
    if (ctx->pc == 0x514E58u) {
        ctx->pc = 0x514E5Cu;
        goto label_514e5c;
    }
    ctx->pc = 0x514E54u;
    {
        const bool branch_taken_0x514e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x514e54) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514E5Cu;
label_514e5c:
    // 0x514e5c: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x514e5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_514e60:
    // 0x514e60: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x514e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_514e64:
    // 0x514e64: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_514e68:
    if (ctx->pc == 0x514E68u) {
        ctx->pc = 0x514E68u;
            // 0x514e68: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x514E6Cu;
        goto label_514e6c;
    }
    ctx->pc = 0x514E64u;
    {
        const bool branch_taken_0x514e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514e64) {
            ctx->pc = 0x514E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514E64u;
            // 0x514e68: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514E78u;
            goto label_514e78;
        }
    }
    ctx->pc = 0x514E6Cu;
label_514e6c:
    // 0x514e6c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x514e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_514e70:
    // 0x514e70: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x514e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514e74:
    // 0x514e74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x514e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_514e78:
    // 0x514e78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x514e78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_514e7c:
    // 0x514e7c: 0x0  nop
    ctx->pc = 0x514e7cu;
    // NOP
label_514e80:
    // 0x514e80: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x514e80u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_514e84:
    // 0x514e84: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x514e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_514e88:
    // 0x514e88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514e88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514e8c:
    // 0x514e8c: 0x0  nop
    ctx->pc = 0x514e8cu;
    // NOP
label_514e90:
    // 0x514e90: 0x0  nop
    ctx->pc = 0x514e90u;
    // NOP
label_514e94:
    // 0x514e94: 0xc1425a8  jal         func_5096A0
label_514e98:
    if (ctx->pc == 0x514E98u) {
        ctx->pc = 0x514E98u;
            // 0x514e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514E9Cu;
        goto label_514e9c;
    }
    ctx->pc = 0x514E94u;
    SET_GPR_U32(ctx, 31, 0x514E9Cu);
    ctx->pc = 0x514E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514E94u;
            // 0x514e98: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514E9Cu; }
        if (ctx->pc != 0x514E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514E9Cu; }
        if (ctx->pc != 0x514E9Cu) { return; }
    }
    ctx->pc = 0x514E9Cu;
label_514e9c:
    // 0x514e9c: 0x10000017  b           . + 4 + (0x17 << 2)
label_514ea0:
    if (ctx->pc == 0x514EA0u) {
        ctx->pc = 0x514EA4u;
        goto label_514ea4;
    }
    ctx->pc = 0x514E9Cu;
    {
        const bool branch_taken_0x514e9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x514e9c) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514EA4u;
label_514ea4:
    // 0x514ea4: 0xc142520  jal         func_509480
label_514ea8:
    if (ctx->pc == 0x514EA8u) {
        ctx->pc = 0x514EA8u;
            // 0x514ea8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x514EACu;
        goto label_514eac;
    }
    ctx->pc = 0x514EA4u;
    SET_GPR_U32(ctx, 31, 0x514EACu);
    ctx->pc = 0x514EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514EA4u;
            // 0x514ea8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514EACu; }
        if (ctx->pc != 0x514EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514EACu; }
        if (ctx->pc != 0x514EACu) { return; }
    }
    ctx->pc = 0x514EACu;
label_514eac:
    // 0x514eac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x514eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_514eb0:
    // 0x514eb0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x514eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_514eb4:
    // 0x514eb4: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x514eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514eb8:
    // 0x514eb8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x514eb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514ebc:
    // 0x514ebc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x514ebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_514ec0:
    // 0x514ec0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x514ec0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_514ec4:
    // 0x514ec4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_514ec8:
    if (ctx->pc == 0x514EC8u) {
        ctx->pc = 0x514EC8u;
            // 0x514ec8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x514ECCu;
        goto label_514ecc;
    }
    ctx->pc = 0x514EC4u;
    {
        const bool branch_taken_0x514ec4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x514EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514EC4u;
            // 0x514ec8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x514ec4) {
            ctx->pc = 0x514EE4u;
            goto label_514ee4;
        }
    }
    ctx->pc = 0x514ECCu;
label_514ecc:
    // 0x514ecc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x514eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_514ed0:
    // 0x514ed0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x514ed0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_514ed4:
    // 0x514ed4: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x514ed4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_514ed8:
    // 0x514ed8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x514ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_514edc:
    // 0x514edc: 0x10000002  b           . + 4 + (0x2 << 2)
label_514ee0:
    if (ctx->pc == 0x514EE0u) {
        ctx->pc = 0x514EE0u;
            // 0x514ee0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x514EE4u;
        goto label_514ee4;
    }
    ctx->pc = 0x514EDCu;
    {
        const bool branch_taken_0x514edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514EDCu;
            // 0x514ee0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514edc) {
            ctx->pc = 0x514EE8u;
            goto label_514ee8;
        }
    }
    ctx->pc = 0x514EE4u;
label_514ee4:
    // 0x514ee4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x514ee4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_514ee8:
    // 0x514ee8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_514eec:
    if (ctx->pc == 0x514EECu) {
        ctx->pc = 0x514EF0u;
        goto label_514ef0;
    }
    ctx->pc = 0x514EE8u;
    {
        const bool branch_taken_0x514ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x514ee8) {
            ctx->pc = 0x514EFCu;
            goto label_514efc;
        }
    }
    ctx->pc = 0x514EF0u;
label_514ef0:
    // 0x514ef0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514ef4:
    // 0x514ef4: 0xc142584  jal         func_509610
label_514ef8:
    if (ctx->pc == 0x514EF8u) {
        ctx->pc = 0x514EF8u;
            // 0x514ef8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514EFCu;
        goto label_514efc;
    }
    ctx->pc = 0x514EF4u;
    SET_GPR_U32(ctx, 31, 0x514EFCu);
    ctx->pc = 0x514EF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514EF4u;
            // 0x514ef8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514EFCu; }
        if (ctx->pc != 0x514EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514EFCu; }
        if (ctx->pc != 0x514EFCu) { return; }
    }
    ctx->pc = 0x514EFCu;
label_514efc:
    // 0x514efc: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x514efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_514f00:
    // 0x514f00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x514f00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_514f04:
    // 0x514f04: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_514f08:
    if (ctx->pc == 0x514F08u) {
        ctx->pc = 0x514F08u;
            // 0x514f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514F0Cu;
        goto label_514f0c;
    }
    ctx->pc = 0x514F04u;
    {
        const bool branch_taken_0x514f04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514f04) {
            ctx->pc = 0x514F08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514F04u;
            // 0x514f08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514F2Cu;
            goto label_514f2c;
        }
    }
    ctx->pc = 0x514F0Cu;
label_514f0c:
    // 0x514f0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x514f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_514f10:
    // 0x514f10: 0xc142654  jal         func_509950
label_514f14:
    if (ctx->pc == 0x514F14u) {
        ctx->pc = 0x514F14u;
            // 0x514f14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514F18u;
        goto label_514f18;
    }
    ctx->pc = 0x514F10u;
    SET_GPR_U32(ctx, 31, 0x514F18u);
    ctx->pc = 0x514F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514F10u;
            // 0x514f14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F18u; }
        if (ctx->pc != 0x514F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F18u; }
        if (ctx->pc != 0x514F18u) { return; }
    }
    ctx->pc = 0x514F18u;
label_514f18:
    // 0x514f18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x514f18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_514f1c:
    // 0x514f1c: 0xc07649c  jal         func_1D9270
label_514f20:
    if (ctx->pc == 0x514F20u) {
        ctx->pc = 0x514F20u;
            // 0x514f20: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x514F24u;
        goto label_514f24;
    }
    ctx->pc = 0x514F1Cu;
    SET_GPR_U32(ctx, 31, 0x514F24u);
    ctx->pc = 0x514F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514F1Cu;
            // 0x514f20: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F24u; }
        if (ctx->pc != 0x514F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F24u; }
        if (ctx->pc != 0x514F24u) { return; }
    }
    ctx->pc = 0x514F24u;
label_514f24:
    // 0x514f24: 0x10000004  b           . + 4 + (0x4 << 2)
label_514f28:
    if (ctx->pc == 0x514F28u) {
        ctx->pc = 0x514F28u;
            // 0x514f28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x514F2Cu;
        goto label_514f2c;
    }
    ctx->pc = 0x514F24u;
    {
        const bool branch_taken_0x514f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x514F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514F24u;
            // 0x514f28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x514f24) {
            ctx->pc = 0x514F38u;
            goto label_514f38;
        }
    }
    ctx->pc = 0x514F2Cu;
label_514f2c:
    // 0x514f2c: 0xc0c1418  jal         func_305060
label_514f30:
    if (ctx->pc == 0x514F30u) {
        ctx->pc = 0x514F34u;
        goto label_514f34;
    }
    ctx->pc = 0x514F2Cu;
    SET_GPR_U32(ctx, 31, 0x514F34u);
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F34u; }
        if (ctx->pc != 0x514F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F34u; }
        if (ctx->pc != 0x514F34u) { return; }
    }
    ctx->pc = 0x514F34u;
label_514f34:
    // 0x514f34: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x514f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_514f38:
    // 0x514f38: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x514f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_514f3c:
    // 0x514f3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x514f3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_514f40:
    // 0x514f40: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x514f40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_514f44:
    // 0x514f44: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x514f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_514f48:
    // 0x514f48: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x514f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_514f4c:
    // 0x514f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x514f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_514f50:
    // 0x514f50: 0x3e00008  jr          $ra
label_514f54:
    if (ctx->pc == 0x514F54u) {
        ctx->pc = 0x514F54u;
            // 0x514f54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x514F58u;
        goto label_514f58;
    }
    ctx->pc = 0x514F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x514F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x514F50u;
            // 0x514f54: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x514F58u;
label_514f58:
    // 0x514f58: 0x0  nop
    ctx->pc = 0x514f58u;
    // NOP
label_514f5c:
    // 0x514f5c: 0x0  nop
    ctx->pc = 0x514f5cu;
    // NOP
label_514f60:
    // 0x514f60: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x514f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_514f64:
    // 0x514f64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x514f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_514f68:
    // 0x514f68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x514f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_514f6c:
    // 0x514f6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x514f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_514f70:
    // 0x514f70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x514f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_514f74:
    // 0x514f74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x514f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_514f78:
    // 0x514f78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x514f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_514f7c:
    // 0x514f7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x514f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_514f80:
    // 0x514f80: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x514f80u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_514f84:
    // 0x514f84: 0x8cb0002c  lw          $s0, 0x2C($a1)
    ctx->pc = 0x514f84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_514f88:
    // 0x514f88: 0xc142760  jal         func_509D80
label_514f8c:
    if (ctx->pc == 0x514F8Cu) {
        ctx->pc = 0x514F8Cu;
            // 0x514f8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x514F90u;
        goto label_514f90;
    }
    ctx->pc = 0x514F88u;
    SET_GPR_U32(ctx, 31, 0x514F90u);
    ctx->pc = 0x514F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514F88u;
            // 0x514f8c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509D80u;
    if (runtime->hasFunction(0x509D80u)) {
        auto targetFn = runtime->lookupFunction(0x509D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F90u; }
        if (ctx->pc != 0x514F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509D80_0x509d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514F90u; }
        if (ctx->pc != 0x514F90u) { return; }
    }
    ctx->pc = 0x514F90u;
label_514f90:
    // 0x514f90: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x514f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
label_514f94:
    // 0x514f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x514f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_514f98:
    // 0x514f98: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_514f9c:
    if (ctx->pc == 0x514F9Cu) {
        ctx->pc = 0x514F9Cu;
            // 0x514f9c: 0x92020007  lbu         $v0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x514FA0u;
        goto label_514fa0;
    }
    ctx->pc = 0x514F98u;
    {
        const bool branch_taken_0x514f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x514f98) {
            ctx->pc = 0x514F9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514F98u;
            // 0x514f9c: 0x92020007  lbu         $v0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x514FECu;
            goto label_514fec;
        }
    }
    ctx->pc = 0x514FA0u;
label_514fa0:
    // 0x514fa0: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x514fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_514fa4:
    // 0x514fa4: 0xc04cc04  jal         func_133010
label_514fa8:
    if (ctx->pc == 0x514FA8u) {
        ctx->pc = 0x514FA8u;
            // 0x514fa8: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x514FACu;
        goto label_514fac;
    }
    ctx->pc = 0x514FA4u;
    SET_GPR_U32(ctx, 31, 0x514FACu);
    ctx->pc = 0x514FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514FA4u;
            // 0x514fa8: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514FACu; }
        if (ctx->pc != 0x514FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514FACu; }
        if (ctx->pc != 0x514FACu) { return; }
    }
    ctx->pc = 0x514FACu;
label_514fac:
    // 0x514fac: 0x8e340d74  lw          $s4, 0xD74($s1)
    ctx->pc = 0x514facu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_514fb0:
    // 0x514fb0: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x514fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_514fb4:
    // 0x514fb4: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x514fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_514fb8:
    // 0x514fb8: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x514fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_514fbc:
    // 0x514fbc: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x514fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_514fc0:
    // 0x514fc0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x514fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_514fc4:
    // 0x514fc4: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x514fc4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_514fc8:
    // 0x514fc8: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x514fc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_514fcc:
    // 0x514fcc: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x514fccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_514fd0:
    // 0x514fd0: 0xc0a5444  jal         func_295110
label_514fd4:
    if (ctx->pc == 0x514FD4u) {
        ctx->pc = 0x514FD4u;
            // 0x514fd4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x514FD8u;
        goto label_514fd8;
    }
    ctx->pc = 0x514FD0u;
    SET_GPR_U32(ctx, 31, 0x514FD8u);
    ctx->pc = 0x514FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x514FD0u;
            // 0x514fd4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514FD8u; }
        if (ctx->pc != 0x514FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x514FD8u; }
        if (ctx->pc != 0x514FD8u) { return; }
    }
    ctx->pc = 0x514FD8u;
label_514fd8:
    // 0x514fd8: 0xae8002d0  sw          $zero, 0x2D0($s4)
    ctx->pc = 0x514fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 0));
label_514fdc:
    // 0x514fdc: 0xae8002d4  sw          $zero, 0x2D4($s4)
    ctx->pc = 0x514fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 0));
label_514fe0:
    // 0x514fe0: 0xae8002d8  sw          $zero, 0x2D8($s4)
    ctx->pc = 0x514fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 728), GPR_U32(ctx, 0));
label_514fe4:
    // 0x514fe4: 0xae8002dc  sw          $zero, 0x2DC($s4)
    ctx->pc = 0x514fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 732), GPR_U32(ctx, 0));
label_514fe8:
    // 0x514fe8: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x514fe8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_514fec:
    // 0x514fec: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_514ff0:
    if (ctx->pc == 0x514FF0u) {
        ctx->pc = 0x514FF0u;
            // 0x514ff0: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->pc = 0x514FF4u;
        goto label_514ff4;
    }
    ctx->pc = 0x514FECu;
    {
        const bool branch_taken_0x514fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x514fec) {
            ctx->pc = 0x514FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x514FECu;
            // 0x514ff0: 0x8e450064  lw          $a1, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515034u;
            goto label_515034;
        }
    }
    ctx->pc = 0x514FF4u;
label_514ff4:
    // 0x514ff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x514ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_514ff8:
    // 0x514ff8: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x514ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_514ffc:
    // 0x514ffc: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x514ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_515000:
    // 0x515000: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x515000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_515004:
    // 0x515004: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x515004u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_515008:
    // 0x515008: 0x24842070  addiu       $a0, $a0, 0x2070
    ctx->pc = 0x515008u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8304));
label_51500c:
    // 0x51500c: 0x453023  subu        $a2, $v0, $a1
    ctx->pc = 0x51500cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_515010:
    // 0x515010: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x515010u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_515014:
    // 0x515014: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x515014u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_515018:
    // 0x515018: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x515018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_51501c:
    // 0x51501c: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x51501cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_515020:
    // 0x515020: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x515020u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_515024:
    // 0x515024: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x515024u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_515028:
    // 0x515028: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x515028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_51502c:
    // 0x51502c: 0x1000000e  b           . + 4 + (0xE << 2)
label_515030:
    if (ctx->pc == 0x515030u) {
        ctx->pc = 0x515030u;
            // 0x515030: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x515034u;
        goto label_515034;
    }
    ctx->pc = 0x51502Cu;
    {
        const bool branch_taken_0x51502c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51502Cu;
            // 0x515030: 0x43a021  addu        $s4, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x51502c) {
            ctx->pc = 0x515068u;
            goto label_515068;
        }
    }
    ctx->pc = 0x515034u;
label_515034:
    // 0x515034: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x515034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
label_515038:
    // 0x515038: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x515038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_51503c:
    // 0x51503c: 0x24841d70  addiu       $a0, $a0, 0x1D70
    ctx->pc = 0x51503cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7536));
label_515040:
    // 0x515040: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x515040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_515044:
    // 0x515044: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x515044u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_515048:
    // 0x515048: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x515048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_51504c:
    // 0x51504c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51504cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515050:
    // 0x515050: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x515050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_515054:
    // 0x515054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x515054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_515058:
    // 0x515058: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x515058u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_51505c:
    // 0x51505c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x51505cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_515060:
    // 0x515060: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x515060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_515064:
    // 0x515064: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x515064u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515068:
    // 0x515068: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x515068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51506c:
    // 0x51506c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x51506cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_515070:
    // 0x515070: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x515070u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515074:
    // 0x515074: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x515074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_515078:
    // 0x515078: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x515078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51507c:
    // 0x51507c: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x51507cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_515080:
    // 0x515080: 0xc68d0008  lwc1        $f13, 0x8($s4)
    ctx->pc = 0x515080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_515084:
    // 0x515084: 0xc04cbd8  jal         func_132F60
label_515088:
    if (ctx->pc == 0x515088u) {
        ctx->pc = 0x515088u;
            // 0x515088: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x51508Cu;
        goto label_51508c;
    }
    ctx->pc = 0x515084u;
    SET_GPR_U32(ctx, 31, 0x51508Cu);
    ctx->pc = 0x515088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515084u;
            // 0x515088: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51508Cu; }
        if (ctx->pc != 0x51508Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51508Cu; }
        if (ctx->pc != 0x51508Cu) { return; }
    }
    ctx->pc = 0x51508Cu;
label_51508c:
    // 0x51508c: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x51508cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_515090:
    // 0x515090: 0x26250580  addiu       $a1, $s1, 0x580
    ctx->pc = 0x515090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_515094:
    // 0x515094: 0xc04cca0  jal         func_133280
label_515098:
    if (ctx->pc == 0x515098u) {
        ctx->pc = 0x515098u;
            // 0x515098: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x51509Cu;
        goto label_51509c;
    }
    ctx->pc = 0x515094u;
    SET_GPR_U32(ctx, 31, 0x51509Cu);
    ctx->pc = 0x515098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515094u;
            // 0x515098: 0x27a60070  addiu       $a2, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51509Cu; }
        if (ctx->pc != 0x51509Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51509Cu; }
        if (ctx->pc != 0x51509Cu) { return; }
    }
    ctx->pc = 0x51509Cu;
label_51509c:
    // 0x51509c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x51509cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5150a0:
    // 0x5150a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5150a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5150a4:
    // 0x5150a4: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x5150a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_5150a8:
    // 0x5150a8: 0x92030007  lbu         $v1, 0x7($s0)
    ctx->pc = 0x5150a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_5150ac:
    // 0x5150ac: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_5150b0:
    if (ctx->pc == 0x5150B0u) {
        ctx->pc = 0x5150B0u;
            // 0x5150b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5150B4u;
        goto label_5150b4;
    }
    ctx->pc = 0x5150ACu;
    {
        const bool branch_taken_0x5150ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5150ac) {
            ctx->pc = 0x5150B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5150ACu;
            // 0x5150b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5150BCu;
            goto label_5150bc;
        }
    }
    ctx->pc = 0x5150B4u;
label_5150b4:
    // 0x5150b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_5150b8:
    if (ctx->pc == 0x5150B8u) {
        ctx->pc = 0x5150B8u;
            // 0x5150b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5150BCu;
        goto label_5150bc;
    }
    ctx->pc = 0x5150B4u;
    {
        const bool branch_taken_0x5150b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5150B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5150B4u;
            // 0x5150b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5150b4) {
            ctx->pc = 0x5150CCu;
            goto label_5150cc;
        }
    }
    ctx->pc = 0x5150BCu;
label_5150bc:
    // 0x5150bc: 0xc07649c  jal         func_1D9270
label_5150c0:
    if (ctx->pc == 0x5150C0u) {
        ctx->pc = 0x5150C0u;
            // 0x5150c0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x5150C4u;
        goto label_5150c4;
    }
    ctx->pc = 0x5150BCu;
    SET_GPR_U32(ctx, 31, 0x5150C4u);
    ctx->pc = 0x5150C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5150BCu;
            // 0x5150c0: 0x24050022  addiu       $a1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150C4u; }
        if (ctx->pc != 0x5150C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150C4u; }
        if (ctx->pc != 0x5150C4u) { return; }
    }
    ctx->pc = 0x5150C4u;
label_5150c4:
    // 0x5150c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_5150c8:
    if (ctx->pc == 0x5150C8u) {
        ctx->pc = 0x5150C8u;
            // 0x5150c8: 0x26230890  addiu       $v1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->pc = 0x5150CCu;
        goto label_5150cc;
    }
    ctx->pc = 0x5150C4u;
    {
        const bool branch_taken_0x5150c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x5150C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5150C4u;
            // 0x5150c8: 0x26230890  addiu       $v1, $s1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5150c4) {
            ctx->pc = 0x5150D8u;
            goto label_5150d8;
        }
    }
    ctx->pc = 0x5150CCu;
label_5150cc:
    // 0x5150cc: 0xc07649c  jal         func_1D9270
label_5150d0:
    if (ctx->pc == 0x5150D0u) {
        ctx->pc = 0x5150D0u;
            // 0x5150d0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x5150D4u;
        goto label_5150d4;
    }
    ctx->pc = 0x5150CCu;
    SET_GPR_U32(ctx, 31, 0x5150D4u);
    ctx->pc = 0x5150D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5150CCu;
            // 0x5150d0: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150D4u; }
        if (ctx->pc != 0x5150D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150D4u; }
        if (ctx->pc != 0x5150D4u) { return; }
    }
    ctx->pc = 0x5150D4u;
label_5150d4:
    // 0x5150d4: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x5150d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_5150d8:
    // 0x5150d8: 0x3c0241c8  lui         $v0, 0x41C8
    ctx->pc = 0x5150d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16840 << 16));
label_5150dc:
    // 0x5150dc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x5150dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5150e0:
    // 0x5150e0: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x5150e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_5150e4:
    // 0x5150e4: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x5150e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_5150e8:
    // 0x5150e8: 0xc0c6250  jal         func_318940
label_5150ec:
    if (ctx->pc == 0x5150ECu) {
        ctx->pc = 0x5150ECu;
            // 0x5150ec: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x5150F0u;
        goto label_5150f0;
    }
    ctx->pc = 0x5150E8u;
    SET_GPR_U32(ctx, 31, 0x5150F0u);
    ctx->pc = 0x5150ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5150E8u;
            // 0x5150ec: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150F0u; }
        if (ctx->pc != 0x5150F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5150F0u; }
        if (ctx->pc != 0x5150F0u) { return; }
    }
    ctx->pc = 0x5150F0u;
label_5150f0:
    // 0x5150f0: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x5150f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_5150f4:
    // 0x5150f4: 0x26450010  addiu       $a1, $s2, 0x10
    ctx->pc = 0x5150f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_5150f8:
    // 0x5150f8: 0xc075378  jal         func_1D4DE0
label_5150fc:
    if (ctx->pc == 0x5150FCu) {
        ctx->pc = 0x5150FCu;
            // 0x5150fc: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x515100u;
        goto label_515100;
    }
    ctx->pc = 0x5150F8u;
    SET_GPR_U32(ctx, 31, 0x515100u);
    ctx->pc = 0x5150FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5150F8u;
            // 0x5150fc: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515100u; }
        if (ctx->pc != 0x515100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515100u; }
        if (ctx->pc != 0x515100u) { return; }
    }
    ctx->pc = 0x515100u;
label_515100:
    // 0x515100: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x515100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515104:
    // 0x515104: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x515104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_515108:
    // 0x515108: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x515108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_51510c:
    // 0x51510c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x51510cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515110:
    // 0x515110: 0xc0c753c  jal         func_31D4F0
label_515114:
    if (ctx->pc == 0x515114u) {
        ctx->pc = 0x515114u;
            // 0x515114: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x515118u;
        goto label_515118;
    }
    ctx->pc = 0x515110u;
    SET_GPR_U32(ctx, 31, 0x515118u);
    ctx->pc = 0x515114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515110u;
            // 0x515114: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515118u; }
        if (ctx->pc != 0x515118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515118u; }
        if (ctx->pc != 0x515118u) { return; }
    }
    ctx->pc = 0x515118u;
label_515118:
    // 0x515118: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x515118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_51511c:
    // 0x51511c: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x51511cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_515120:
    // 0x515120: 0xc44ea488  lwc1        $f14, -0x5B78($v0)
    ctx->pc = 0x515120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_515124:
    // 0x515124: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x515124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515128:
    // 0x515128: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x515128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_51512c:
    // 0x51512c: 0xc0c753c  jal         func_31D4F0
label_515130:
    if (ctx->pc == 0x515130u) {
        ctx->pc = 0x515130u;
            // 0x515130: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x515134u;
        goto label_515134;
    }
    ctx->pc = 0x51512Cu;
    SET_GPR_U32(ctx, 31, 0x515134u);
    ctx->pc = 0x515130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51512Cu;
            // 0x515130: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515134u; }
        if (ctx->pc != 0x515134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515134u; }
        if (ctx->pc != 0x515134u) { return; }
    }
    ctx->pc = 0x515134u;
label_515134:
    // 0x515134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515138:
    // 0x515138: 0xc1427ac  jal         func_509EB0
label_51513c:
    if (ctx->pc == 0x51513Cu) {
        ctx->pc = 0x51513Cu;
            // 0x51513c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515140u;
        goto label_515140;
    }
    ctx->pc = 0x515138u;
    SET_GPR_U32(ctx, 31, 0x515140u);
    ctx->pc = 0x51513Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515138u;
            // 0x51513c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509EB0u;
    if (runtime->hasFunction(0x509EB0u)) {
        auto targetFn = runtime->lookupFunction(0x509EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515140u; }
        if (ctx->pc != 0x515140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509EB0_0x509eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515140u; }
        if (ctx->pc != 0x515140u) { return; }
    }
    ctx->pc = 0x515140u;
label_515140:
    // 0x515140: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515144:
    // 0x515144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x515144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_515148:
    // 0x515148: 0xc142504  jal         func_509410
label_51514c:
    if (ctx->pc == 0x51514Cu) {
        ctx->pc = 0x51514Cu;
            // 0x51514c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515150u;
        goto label_515150;
    }
    ctx->pc = 0x515148u;
    SET_GPR_U32(ctx, 31, 0x515150u);
    ctx->pc = 0x51514Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515148u;
            // 0x51514c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515150u; }
        if (ctx->pc != 0x515150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515150u; }
        if (ctx->pc != 0x515150u) { return; }
    }
    ctx->pc = 0x515150u;
label_515150:
    // 0x515150: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x515150u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_515154:
    // 0x515154: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x515154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_515158:
    // 0x515158: 0x54a30005  bnel        $a1, $v1, . + 4 + (0x5 << 2)
label_51515c:
    if (ctx->pc == 0x51515Cu) {
        ctx->pc = 0x51515Cu;
            // 0x51515c: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->pc = 0x515160u;
        goto label_515160;
    }
    ctx->pc = 0x515158u;
    {
        const bool branch_taken_0x515158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x515158) {
            ctx->pc = 0x51515Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515158u;
            // 0x51515c: 0x520c0  sll         $a0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515170u;
            goto label_515170;
        }
    }
    ctx->pc = 0x515160u;
label_515160:
    // 0x515160: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x515160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_515164:
    // 0x515164: 0x2463ad50  addiu       $v1, $v1, -0x52B0
    ctx->pc = 0x515164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
label_515168:
    // 0x515168: 0x10000009  b           . + 4 + (0x9 << 2)
label_51516c:
    if (ctx->pc == 0x51516Cu) {
        ctx->pc = 0x51516Cu;
            // 0x51516c: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x515170u;
        goto label_515170;
    }
    ctx->pc = 0x515168u;
    {
        const bool branch_taken_0x515168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51516Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515168u;
            // 0x51516c: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515168) {
            ctx->pc = 0x515190u;
            goto label_515190;
        }
    }
    ctx->pc = 0x515170u;
label_515170:
    // 0x515170: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x515170u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_515174:
    // 0x515174: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x515174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_515178:
    // 0x515178: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x515178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_51517c:
    // 0x51517c: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x51517cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_515180:
    // 0x515180: 0x2484a9f0  addiu       $a0, $a0, -0x5610
    ctx->pc = 0x515180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945264));
label_515184:
    // 0x515184: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x515184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_515188:
    // 0x515188: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x515188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_51518c:
    // 0x51518c: 0xae430028  sw          $v1, 0x28($s2)
    ctx->pc = 0x51518cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
label_515190:
    // 0x515190: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x515190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_515194:
    // 0x515194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x515194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_515198:
    // 0x515198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x515198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_51519c:
    // 0x51519c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x51519cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5151a0:
    // 0x5151a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5151a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5151a4:
    // 0x5151a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5151a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_5151a8:
    // 0x5151a8: 0x3e00008  jr          $ra
label_5151ac:
    if (ctx->pc == 0x5151ACu) {
        ctx->pc = 0x5151ACu;
            // 0x5151ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5151B0u;
        goto label_5151b0;
    }
    ctx->pc = 0x5151A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5151ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5151A8u;
            // 0x5151ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5151B0u;
label_5151b0:
    // 0x5151b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x5151b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_5151b4:
    // 0x5151b4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x5151b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_5151b8:
    // 0x5151b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x5151b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_5151bc:
    // 0x5151bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x5151bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_5151c0:
    // 0x5151c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x5151c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_5151c4:
    // 0x5151c4: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x5151c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_5151c8:
    // 0x5151c8: 0xc0754b4  jal         func_1D52D0
label_5151cc:
    if (ctx->pc == 0x5151CCu) {
        ctx->pc = 0x5151CCu;
            // 0x5151cc: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->pc = 0x5151D0u;
        goto label_5151d0;
    }
    ctx->pc = 0x5151C8u;
    SET_GPR_U32(ctx, 31, 0x5151D0u);
    ctx->pc = 0x5151CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5151C8u;
            // 0x5151cc: 0x26240440  addiu       $a0, $s1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151D0u; }
        if (ctx->pc != 0x5151D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151D0u; }
        if (ctx->pc != 0x5151D0u) { return; }
    }
    ctx->pc = 0x5151D0u;
label_5151d0:
    // 0x5151d0: 0xc0be258  jal         func_2F8960
label_5151d4:
    if (ctx->pc == 0x5151D4u) {
        ctx->pc = 0x5151D4u;
            // 0x5151d4: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->pc = 0x5151D8u;
        goto label_5151d8;
    }
    ctx->pc = 0x5151D0u;
    SET_GPR_U32(ctx, 31, 0x5151D8u);
    ctx->pc = 0x5151D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5151D0u;
            // 0x5151d4: 0x8e240d70  lw          $a0, 0xD70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151D8u; }
        if (ctx->pc != 0x5151D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151D8u; }
        if (ctx->pc != 0x5151D8u) { return; }
    }
    ctx->pc = 0x5151D8u;
label_5151d8:
    // 0x5151d8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x5151d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_5151dc:
    // 0x5151dc: 0x3c033ccc  lui         $v1, 0x3CCC
    ctx->pc = 0x5151dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15564 << 16));
label_5151e0:
    // 0x5151e0: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x5151e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_5151e4:
    // 0x5151e4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x5151e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5151e8:
    // 0x5151e8: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x5151e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_5151ec:
    // 0x5151ec: 0x320f809  jalr        $t9
label_5151f0:
    if (ctx->pc == 0x5151F0u) {
        ctx->pc = 0x5151F0u;
            // 0x5151f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5151F4u;
        goto label_5151f4;
    }
    ctx->pc = 0x5151ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5151F4u);
        ctx->pc = 0x5151F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5151ECu;
            // 0x5151f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5151F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5151F4u; }
            if (ctx->pc != 0x5151F4u) { return; }
        }
        }
    }
    ctx->pc = 0x5151F4u;
label_5151f4:
    // 0x5151f4: 0xc0c13e4  jal         func_304F90
label_5151f8:
    if (ctx->pc == 0x5151F8u) {
        ctx->pc = 0x5151F8u;
            // 0x5151f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5151FCu;
        goto label_5151fc;
    }
    ctx->pc = 0x5151F4u;
    SET_GPR_U32(ctx, 31, 0x5151FCu);
    ctx->pc = 0x5151F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5151F4u;
            // 0x5151f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304F90u;
    if (runtime->hasFunction(0x304F90u)) {
        auto targetFn = runtime->lookupFunction(0x304F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151FCu; }
        if (ctx->pc != 0x5151FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F90_0x304f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5151FCu; }
        if (ctx->pc != 0x5151FCu) { return; }
    }
    ctx->pc = 0x5151FCu;
label_5151fc:
    // 0x5151fc: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x5151fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_515200:
    // 0x515200: 0xc075318  jal         func_1D4C60
label_515204:
    if (ctx->pc == 0x515204u) {
        ctx->pc = 0x515204u;
            // 0x515204: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->pc = 0x515208u;
        goto label_515208;
    }
    ctx->pc = 0x515200u;
    SET_GPR_U32(ctx, 31, 0x515208u);
    ctx->pc = 0x515204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515200u;
            // 0x515204: 0x262505d0  addiu       $a1, $s1, 0x5D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 1488));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515208u; }
        if (ctx->pc != 0x515208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515208u; }
        if (ctx->pc != 0x515208u) { return; }
    }
    ctx->pc = 0x515208u;
label_515208:
    // 0x515208: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x515208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_51520c:
    // 0x51520c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x51520cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_515210:
    // 0x515210: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x515210u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515214:
    // 0x515214: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x515214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_515218:
    // 0x515218: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x515218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_51521c:
    // 0x51521c: 0xc0c6250  jal         func_318940
label_515220:
    if (ctx->pc == 0x515220u) {
        ctx->pc = 0x515220u;
            // 0x515220: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->pc = 0x515224u;
        goto label_515224;
    }
    ctx->pc = 0x51521Cu;
    SET_GPR_U32(ctx, 31, 0x515224u);
    ctx->pc = 0x515220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51521Cu;
            // 0x515220: 0x26260560  addiu       $a2, $s1, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515224u; }
        if (ctx->pc != 0x515224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515224u; }
        if (ctx->pc != 0x515224u) { return; }
    }
    ctx->pc = 0x515224u;
label_515224:
    // 0x515224: 0x8e230da0  lw          $v1, 0xDA0($s1)
    ctx->pc = 0x515224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_515228:
    // 0x515228: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x515228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_51522c:
    // 0x51522c: 0x50600069  beql        $v1, $zero, . + 4 + (0x69 << 2)
label_515230:
    if (ctx->pc == 0x515230u) {
        ctx->pc = 0x515230u;
            // 0x515230: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x515234u;
        goto label_515234;
    }
    ctx->pc = 0x51522Cu;
    {
        const bool branch_taken_0x51522c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51522c) {
            ctx->pc = 0x515230u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51522Cu;
            // 0x515230: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5153D4u;
            goto label_5153d4;
        }
    }
    ctx->pc = 0x515234u;
label_515234:
    // 0x515234: 0x8e220d9c  lw          $v0, 0xD9C($s1)
    ctx->pc = 0x515234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3484)));
label_515238:
    // 0x515238: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x515238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_51523c:
    // 0x51523c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x51523cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_515240:
    // 0x515240: 0xae220d9c  sw          $v0, 0xD9C($s1)
    ctx->pc = 0x515240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3484), GPR_U32(ctx, 2));
label_515244:
    // 0x515244: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x515244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_515248:
    // 0x515248: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x515248u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_51524c:
    // 0x51524c: 0x320f809  jalr        $t9
label_515250:
    if (ctx->pc == 0x515250u) {
        ctx->pc = 0x515250u;
            // 0x515250: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x515254u;
        goto label_515254;
    }
    ctx->pc = 0x51524Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515254u);
        ctx->pc = 0x515250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51524Cu;
            // 0x515250: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515254u; }
            if (ctx->pc != 0x515254u) { return; }
        }
        }
    }
    ctx->pc = 0x515254u;
label_515254:
    // 0x515254: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x515254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_515258:
    // 0x515258: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x515258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51525c:
    // 0x51525c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x51525cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_515260:
    // 0x515260: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x515260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515264:
    // 0x515264: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x515264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_515268:
    // 0x515268: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x515268u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51526c:
    // 0x51526c: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x51526cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_515270:
    // 0x515270: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x515270u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515274:
    // 0x515274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x515274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_515278:
    // 0x515278: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x515278u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_51527c:
    // 0x51527c: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x51527cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_515280:
    // 0x515280: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x515280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515284:
    // 0x515284: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x515284u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515288:
    // 0x515288: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x515288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_51528c:
    // 0x51528c: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x51528cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_515290:
    // 0x515290: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x515290u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_515294:
    // 0x515294: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x515294u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_515298:
    // 0x515298: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x515298u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_51529c:
    // 0x51529c: 0x320f809  jalr        $t9
label_5152a0:
    if (ctx->pc == 0x5152A0u) {
        ctx->pc = 0x5152A0u;
            // 0x5152a0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5152A4u;
        goto label_5152a4;
    }
    ctx->pc = 0x51529Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5152A4u);
        ctx->pc = 0x5152A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51529Cu;
            // 0x5152a0: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5152A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5152A4u; }
            if (ctx->pc != 0x5152A4u) { return; }
        }
        }
    }
    ctx->pc = 0x5152A4u;
label_5152a4:
    // 0x5152a4: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x5152a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5152a8:
    // 0x5152a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x5152a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_5152ac:
    // 0x5152ac: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x5152acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_5152b0:
    // 0x5152b0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5152b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5152b4:
    // 0x5152b4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5152b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5152b8:
    // 0x5152b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5152b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5152bc:
    // 0x5152bc: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x5152bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_5152c0:
    // 0x5152c0: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x5152c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_5152c4:
    // 0x5152c4: 0x320f809  jalr        $t9
label_5152c8:
    if (ctx->pc == 0x5152C8u) {
        ctx->pc = 0x5152C8u;
            // 0x5152c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x5152CCu;
        goto label_5152cc;
    }
    ctx->pc = 0x5152C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5152CCu);
        ctx->pc = 0x5152C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5152C4u;
            // 0x5152c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5152CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5152CCu; }
            if (ctx->pc != 0x5152CCu) { return; }
        }
        }
    }
    ctx->pc = 0x5152CCu;
label_5152cc:
    // 0x5152cc: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x5152ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_5152d0:
    // 0x5152d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5152d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5152d4:
    // 0x5152d4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x5152d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5152d8:
    // 0x5152d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x5152d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_5152dc:
    // 0x5152dc: 0x320f809  jalr        $t9
label_5152e0:
    if (ctx->pc == 0x5152E0u) {
        ctx->pc = 0x5152E0u;
            // 0x5152e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x5152E4u;
        goto label_5152e4;
    }
    ctx->pc = 0x5152DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x5152E4u);
        ctx->pc = 0x5152E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5152DCu;
            // 0x5152e0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x5152E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x5152E4u; }
            if (ctx->pc != 0x5152E4u) { return; }
        }
        }
    }
    ctx->pc = 0x5152E4u;
label_5152e4:
    // 0x5152e4: 0xc0c1590  jal         func_305640
label_5152e8:
    if (ctx->pc == 0x5152E8u) {
        ctx->pc = 0x5152E8u;
            // 0x5152e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5152ECu;
        goto label_5152ec;
    }
    ctx->pc = 0x5152E4u;
    SET_GPR_U32(ctx, 31, 0x5152ECu);
    ctx->pc = 0x5152E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5152E4u;
            // 0x5152e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305640u;
    if (runtime->hasFunction(0x305640u)) {
        auto targetFn = runtime->lookupFunction(0x305640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5152ECu; }
        if (ctx->pc != 0x5152ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305640_0x305640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5152ECu; }
        if (ctx->pc != 0x5152ECu) { return; }
    }
    ctx->pc = 0x5152ECu;
label_5152ec:
    // 0x5152ec: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x5152ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_5152f0:
    // 0x5152f0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x5152f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_5152f4:
    // 0x5152f4: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x5152f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_5152f8:
    // 0x5152f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x5152f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_5152fc:
    // 0x5152fc: 0x320f809  jalr        $t9
label_515300:
    if (ctx->pc == 0x515300u) {
        ctx->pc = 0x515300u;
            // 0x515300: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x515304u;
        goto label_515304;
    }
    ctx->pc = 0x5152FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515304u);
        ctx->pc = 0x515300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5152FCu;
            // 0x515300: 0x344501a9  ori         $a1, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515304u; }
            if (ctx->pc != 0x515304u) { return; }
        }
        }
    }
    ctx->pc = 0x515304u;
label_515304:
    // 0x515304: 0x8e240d60  lw          $a0, 0xD60($s1)
    ctx->pc = 0x515304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3424)));
label_515308:
    // 0x515308: 0x8c990030  lw          $t9, 0x30($a0)
    ctx->pc = 0x515308u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_51530c:
    // 0x51530c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x51530cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_515310:
    // 0x515310: 0x320f809  jalr        $t9
label_515314:
    if (ctx->pc == 0x515314u) {
        ctx->pc = 0x515314u;
            // 0x515314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x515318u;
        goto label_515318;
    }
    ctx->pc = 0x515310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515318u);
        ctx->pc = 0x515314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515310u;
            // 0x515314: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515318u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515318u; }
            if (ctx->pc != 0x515318u) { return; }
        }
        }
    }
    ctx->pc = 0x515318u;
label_515318:
    // 0x515318: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x515318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_51531c:
    // 0x51531c: 0x96230c7e  lhu         $v1, 0xC7E($s1)
    ctx->pc = 0x51531cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 3198)));
label_515320:
    // 0x515320: 0x8c450ea4  lw          $a1, 0xEA4($v0)
    ctx->pc = 0x515320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_515324:
    // 0x515324: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x515324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_515328:
    // 0x515328: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x515328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_51532c:
    // 0x51532c: 0x8ca3012c  lw          $v1, 0x12C($a1)
    ctx->pc = 0x51532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 300)));
label_515330:
    // 0x515330: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x515330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_515334:
    // 0x515334: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x515334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_515338:
    // 0x515338: 0x8ca60008  lw          $a2, 0x8($a1)
    ctx->pc = 0x515338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_51533c:
    // 0x51533c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x51533cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515340:
    // 0x515340: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x515340u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_515344:
    // 0x515344: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x515344u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_515348:
    // 0x515348: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x515348u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_51534c:
    // 0x51534c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x51534cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_515350:
    // 0x515350: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x515350u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_515354:
    // 0x515354: 0xc04cc90  jal         func_133240
label_515358:
    if (ctx->pc == 0x515358u) {
        ctx->pc = 0x515358u;
            // 0x515358: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x51535Cu;
        goto label_51535c;
    }
    ctx->pc = 0x515354u;
    SET_GPR_U32(ctx, 31, 0x51535Cu);
    ctx->pc = 0x515358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515354u;
            // 0x515358: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133240u;
    if (runtime->hasFunction(0x133240u)) {
        auto targetFn = runtime->lookupFunction(0x133240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51535Cu; }
        if (ctx->pc != 0x51535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133240_0x133240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51535Cu; }
        if (ctx->pc != 0x51535Cu) { return; }
    }
    ctx->pc = 0x51535Cu;
label_51535c:
    // 0x51535c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x51535cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_515360:
    // 0x515360: 0xc04cc44  jal         func_133110
label_515364:
    if (ctx->pc == 0x515364u) {
        ctx->pc = 0x515364u;
            // 0x515364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515368u;
        goto label_515368;
    }
    ctx->pc = 0x515360u;
    SET_GPR_U32(ctx, 31, 0x515368u);
    ctx->pc = 0x515364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515360u;
            // 0x515364: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515368u; }
        if (ctx->pc != 0x515368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515368u; }
        if (ctx->pc != 0x515368u) { return; }
    }
    ctx->pc = 0x515368u;
label_515368:
    // 0x515368: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x515368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_51536c:
    // 0x51536c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x51536cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_515370:
    // 0x515370: 0xc075378  jal         func_1D4DE0
label_515374:
    if (ctx->pc == 0x515374u) {
        ctx->pc = 0x515374u;
            // 0x515374: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515378u;
        goto label_515378;
    }
    ctx->pc = 0x515370u;
    SET_GPR_U32(ctx, 31, 0x515378u);
    ctx->pc = 0x515374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515370u;
            // 0x515374: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515378u; }
        if (ctx->pc != 0x515378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515378u; }
        if (ctx->pc != 0x515378u) { return; }
    }
    ctx->pc = 0x515378u;
label_515378:
    // 0x515378: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x515378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_51537c:
    // 0x51537c: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x51537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_515380:
    // 0x515380: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x515380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515384:
    // 0x515384: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x515384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_515388:
    // 0x515388: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x515388u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_51538c:
    // 0x51538c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x51538cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_515390:
    // 0x515390: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x515390u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_515394:
    // 0x515394: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x515394u;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_515398:
    // 0x515398: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x515398u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_51539c:
    // 0x51539c: 0xc0c753c  jal         func_31D4F0
label_5153a0:
    if (ctx->pc == 0x5153A0u) {
        ctx->pc = 0x5153A0u;
            // 0x5153a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5153A4u;
        goto label_5153a4;
    }
    ctx->pc = 0x51539Cu;
    SET_GPR_U32(ctx, 31, 0x5153A4u);
    ctx->pc = 0x5153A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51539Cu;
            // 0x5153a0: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5153A4u; }
        if (ctx->pc != 0x5153A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5153A4u; }
        if (ctx->pc != 0x5153A4u) { return; }
    }
    ctx->pc = 0x5153A4u;
label_5153a4:
    // 0x5153a4: 0x3c023c8e  lui         $v0, 0x3C8E
    ctx->pc = 0x5153a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15502 << 16));
label_5153a8:
    // 0x5153a8: 0x2624092c  addiu       $a0, $s1, 0x92C
    ctx->pc = 0x5153a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2348));
label_5153ac:
    // 0x5153ac: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x5153acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_5153b0:
    // 0x5153b0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x5153b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5153b4:
    // 0x5153b4: 0xc6210e1c  lwc1        $f1, 0xE1C($s1)
    ctx->pc = 0x5153b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5153b8:
    // 0x5153b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x5153b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_5153bc:
    // 0x5153bc: 0x46147018  adda.s      $f14, $f20
    ctx->pc = 0x5153bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[14], ctx->f[20]);
label_5153c0:
    // 0x5153c0: 0x4601031c  madd.s      $f12, $f0, $f1
    ctx->pc = 0x5153c0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[0], ctx->f[1]));
label_5153c4:
    // 0x5153c4: 0xc0c753c  jal         func_31D4F0
label_5153c8:
    if (ctx->pc == 0x5153C8u) {
        ctx->pc = 0x5153C8u;
            // 0x5153c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5153CCu;
        goto label_5153cc;
    }
    ctx->pc = 0x5153C4u;
    SET_GPR_U32(ctx, 31, 0x5153CCu);
    ctx->pc = 0x5153C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5153C4u;
            // 0x5153c8: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5153CCu; }
        if (ctx->pc != 0x5153CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5153CCu; }
        if (ctx->pc != 0x5153CCu) { return; }
    }
    ctx->pc = 0x5153CCu;
label_5153cc:
    // 0x5153cc: 0xae200e1c  sw          $zero, 0xE1C($s1)
    ctx->pc = 0x5153ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3612), GPR_U32(ctx, 0));
label_5153d0:
    // 0x5153d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x5153d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_5153d4:
    // 0x5153d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x5153d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_5153d8:
    // 0x5153d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x5153d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_5153dc:
    // 0x5153dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x5153dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5153e0:
    // 0x5153e0: 0x3e00008  jr          $ra
label_5153e4:
    if (ctx->pc == 0x5153E4u) {
        ctx->pc = 0x5153E4u;
            // 0x5153e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x5153E8u;
        goto label_5153e8;
    }
    ctx->pc = 0x5153E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5153E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5153E0u;
            // 0x5153e4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5153E8u;
label_5153e8:
    // 0x5153e8: 0x0  nop
    ctx->pc = 0x5153e8u;
    // NOP
label_5153ec:
    // 0x5153ec: 0x0  nop
    ctx->pc = 0x5153ecu;
    // NOP
label_5153f0:
    // 0x5153f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x5153f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_5153f4:
    // 0x5153f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x5153f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_5153f8:
    // 0x5153f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x5153f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_5153fc:
    // 0x5153fc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x5153fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_515400:
    // 0x515400: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x515400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_515404:
    // 0x515404: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x515404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_515408:
    // 0x515408: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x515408u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_51540c:
    // 0x51540c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x51540cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_515410:
    // 0x515410: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x515410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_515414:
    // 0x515414: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x515414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_515418:
    // 0x515418: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x515418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_51541c:
    // 0x51541c: 0x8cb40024  lw          $s4, 0x24($a1)
    ctx->pc = 0x51541cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_515420:
    // 0x515420: 0x8e930550  lw          $s3, 0x550($s4)
    ctx->pc = 0x515420u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1360)));
label_515424:
    // 0x515424: 0x26840440  addiu       $a0, $s4, 0x440
    ctx->pc = 0x515424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1088));
label_515428:
    // 0x515428: 0x8e960d74  lw          $s6, 0xD74($s4)
    ctx->pc = 0x515428u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_51542c:
    // 0x51542c: 0xc0754b4  jal         func_1D52D0
label_515430:
    if (ctx->pc == 0x515430u) {
        ctx->pc = 0x515430u;
            // 0x515430: 0x26920580  addiu       $s2, $s4, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
        ctx->pc = 0x515434u;
        goto label_515434;
    }
    ctx->pc = 0x51542Cu;
    SET_GPR_U32(ctx, 31, 0x515434u);
    ctx->pc = 0x515430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51542Cu;
            // 0x515430: 0x26920580  addiu       $s2, $s4, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515434u; }
        if (ctx->pc != 0x515434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515434u; }
        if (ctx->pc != 0x515434u) { return; }
    }
    ctx->pc = 0x515434u;
label_515434:
    // 0x515434: 0x8ea30068  lw          $v1, 0x68($s5)
    ctx->pc = 0x515434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
label_515438:
    // 0x515438: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x515438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_51543c:
    // 0x51543c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x51543cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515440:
    // 0x515440: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_515444:
    if (ctx->pc == 0x515444u) {
        ctx->pc = 0x515444u;
            // 0x515444: 0x8eb7002c  lw          $s7, 0x2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
        ctx->pc = 0x515448u;
        goto label_515448;
    }
    ctx->pc = 0x515440u;
    {
        const bool branch_taken_0x515440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x515444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515440u;
            // 0x515444: 0x8eb7002c  lw          $s7, 0x2C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515440) {
            ctx->pc = 0x515490u;
            goto label_515490;
        }
    }
    ctx->pc = 0x515448u;
label_515448:
    // 0x515448: 0x268402c0  addiu       $a0, $s4, 0x2C0
    ctx->pc = 0x515448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 704));
label_51544c:
    // 0x51544c: 0xc04cc04  jal         func_133010
label_515450:
    if (ctx->pc == 0x515450u) {
        ctx->pc = 0x515450u;
            // 0x515450: 0x268502d0  addiu       $a1, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->pc = 0x515454u;
        goto label_515454;
    }
    ctx->pc = 0x51544Cu;
    SET_GPR_U32(ctx, 31, 0x515454u);
    ctx->pc = 0x515450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51544Cu;
            // 0x515450: 0x268502d0  addiu       $a1, $s4, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515454u; }
        if (ctx->pc != 0x515454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515454u; }
        if (ctx->pc != 0x515454u) { return; }
    }
    ctx->pc = 0x515454u;
label_515454:
    // 0x515454: 0x8e900d74  lw          $s0, 0xD74($s4)
    ctx->pc = 0x515454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3444)));
label_515458:
    // 0x515458: 0xc68202c8  lwc1        $f2, 0x2C8($s4)
    ctx->pc = 0x515458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51545c:
    // 0x51545c: 0xc68102c4  lwc1        $f1, 0x2C4($s4)
    ctx->pc = 0x51545cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515460:
    // 0x515460: 0xc68002c0  lwc1        $f0, 0x2C0($s4)
    ctx->pc = 0x515460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515464:
    // 0x515464: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x515464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_515468:
    // 0x515468: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x515468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_51546c:
    // 0x51546c: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x51546cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_515470:
    // 0x515470: 0xe7a20098  swc1        $f2, 0x98($sp)
    ctx->pc = 0x515470u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_515474:
    // 0x515474: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x515474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_515478:
    // 0x515478: 0xc0a5444  jal         func_295110
label_51547c:
    if (ctx->pc == 0x51547Cu) {
        ctx->pc = 0x51547Cu;
            // 0x51547c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x515480u;
        goto label_515480;
    }
    ctx->pc = 0x515478u;
    SET_GPR_U32(ctx, 31, 0x515480u);
    ctx->pc = 0x51547Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515478u;
            // 0x51547c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515480u; }
        if (ctx->pc != 0x515480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515480u; }
        if (ctx->pc != 0x515480u) { return; }
    }
    ctx->pc = 0x515480u;
label_515480:
    // 0x515480: 0xae0002d0  sw          $zero, 0x2D0($s0)
    ctx->pc = 0x515480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 720), GPR_U32(ctx, 0));
label_515484:
    // 0x515484: 0xae0002d4  sw          $zero, 0x2D4($s0)
    ctx->pc = 0x515484u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 724), GPR_U32(ctx, 0));
label_515488:
    // 0x515488: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x515488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
label_51548c:
    // 0x51548c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x51548cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
label_515490:
    // 0x515490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x515490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515494:
    // 0x515494: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x515494u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_515498:
    // 0x515498: 0xaec202b0  sw          $v0, 0x2B0($s6)
    ctx->pc = 0x515498u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 688), GPR_U32(ctx, 2));
label_51549c:
    // 0x51549c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51549cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5154a0:
    // 0x5154a0: 0xc62d0024  lwc1        $f13, 0x24($s1)
    ctx->pc = 0x5154a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5154a4:
    // 0x5154a4: 0xc04cbd8  jal         func_132F60
label_5154a8:
    if (ctx->pc == 0x5154A8u) {
        ctx->pc = 0x5154A8u;
            // 0x5154a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5154ACu;
        goto label_5154ac;
    }
    ctx->pc = 0x5154A4u;
    SET_GPR_U32(ctx, 31, 0x5154ACu);
    ctx->pc = 0x5154A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5154A4u;
            // 0x5154a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5154ACu; }
        if (ctx->pc != 0x5154ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5154ACu; }
        if (ctx->pc != 0x5154ACu) { return; }
    }
    ctx->pc = 0x5154ACu;
label_5154ac:
    // 0x5154ac: 0x26840320  addiu       $a0, $s4, 0x320
    ctx->pc = 0x5154acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 800));
label_5154b0:
    // 0x5154b0: 0x268507e0  addiu       $a1, $s4, 0x7E0
    ctx->pc = 0x5154b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
label_5154b4:
    // 0x5154b4: 0xc04cca0  jal         func_133280
label_5154b8:
    if (ctx->pc == 0x5154B8u) {
        ctx->pc = 0x5154B8u;
            // 0x5154b8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x5154BCu;
        goto label_5154bc;
    }
    ctx->pc = 0x5154B4u;
    SET_GPR_U32(ctx, 31, 0x5154BCu);
    ctx->pc = 0x5154B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5154B4u;
            // 0x5154b8: 0x27a600a0  addiu       $a2, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5154BCu; }
        if (ctx->pc != 0x5154BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5154BCu; }
        if (ctx->pc != 0x5154BCu) { return; }
    }
    ctx->pc = 0x5154BCu;
label_5154bc:
    // 0x5154bc: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x5154bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5154c0:
    // 0x5154c0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5154c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_5154c4:
    // 0x5154c4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5154c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5154c8:
    // 0x5154c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5154c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5154cc:
    // 0x5154cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5154ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5154d0:
    // 0x5154d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x5154d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_5154d4:
    // 0x5154d4: 0xe6400110  swc1        $f0, 0x110($s2)
    ctx->pc = 0x5154d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 272), bits); }
label_5154d8:
    // 0x5154d8: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x5154d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_5154dc:
    // 0x5154dc: 0x8262010c  lb          $v0, 0x10C($s3)
    ctx->pc = 0x5154dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_5154e0:
    // 0x5154e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5154e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5154e4:
    // 0x5154e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x5154e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5154e8:
    // 0x5154e8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x5154e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_5154ec:
    // 0x5154ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5154ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5154f0:
    // 0x5154f0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x5154f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_5154f4:
    // 0x5154f4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x5154f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_5154f8:
    // 0x5154f8: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x5154f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_5154fc:
    // 0x5154fc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x5154fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_515500:
    // 0x515500: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x515500u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_515504:
    // 0x515504: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x515504u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_515508:
    // 0x515508: 0x320f809  jalr        $t9
label_51550c:
    if (ctx->pc == 0x51550Cu) {
        ctx->pc = 0x51550Cu;
            // 0x51550c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x515510u;
        goto label_515510;
    }
    ctx->pc = 0x515508u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515510u);
        ctx->pc = 0x51550Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515508u;
            // 0x51550c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515510u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515510u; }
            if (ctx->pc != 0x515510u) { return; }
        }
        }
    }
    ctx->pc = 0x515510u;
label_515510:
    // 0x515510: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x515510u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_515514:
    // 0x515514: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x515514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_515518:
    // 0x515518: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x515518u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_51551c:
    // 0x51551c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x51551cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515520:
    // 0x515520: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x515520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_515524:
    // 0x515524: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515528:
    // 0x515528: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x515528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_51552c:
    // 0x51552c: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x51552cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_515530:
    // 0x515530: 0x320f809  jalr        $t9
label_515534:
    if (ctx->pc == 0x515534u) {
        ctx->pc = 0x515534u;
            // 0x515534: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x515538u;
        goto label_515538;
    }
    ctx->pc = 0x515530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515538u);
        ctx->pc = 0x515534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515530u;
            // 0x515534: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515538u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515538u; }
            if (ctx->pc != 0x515538u) { return; }
        }
        }
    }
    ctx->pc = 0x515538u;
label_515538:
    // 0x515538: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x515538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_51553c:
    // 0x51553c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x51553cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_515540:
    // 0x515540: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515544:
    // 0x515544: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x515544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_515548:
    // 0x515548: 0x320f809  jalr        $t9
label_51554c:
    if (ctx->pc == 0x51554Cu) {
        ctx->pc = 0x51554Cu;
            // 0x51554c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515550u;
        goto label_515550;
    }
    ctx->pc = 0x515548u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515550u);
        ctx->pc = 0x51554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515548u;
            // 0x51554c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515550u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515550u; }
            if (ctx->pc != 0x515550u) { return; }
        }
        }
    }
    ctx->pc = 0x515550u;
label_515550:
    // 0x515550: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515554:
    // 0x515554: 0x26a50010  addiu       $a1, $s5, 0x10
    ctx->pc = 0x515554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_515558:
    // 0x515558: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x515558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_51555c:
    // 0x51555c: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x51555cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_515560:
    // 0x515560: 0x26860830  addiu       $a2, $s4, 0x830
    ctx->pc = 0x515560u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 2096));
label_515564:
    // 0x515564: 0x3c0244e3  lui         $v0, 0x44E3
    ctx->pc = 0x515564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17635 << 16));
label_515568:
    // 0x515568: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x515568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_51556c:
    // 0x51556c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x51556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515570:
    // 0x515570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x515570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_515574:
    // 0x515574: 0x0  nop
    ctx->pc = 0x515574u;
    // NOP
label_515578:
    // 0x515578: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x515578u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_51557c:
    // 0x51557c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x51557cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_515580:
    // 0x515580: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x515580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_515584:
    // 0x515584: 0x0  nop
    ctx->pc = 0x515584u;
    // NOP
label_515588:
    // 0x515588: 0xae820afc  sw          $v0, 0xAFC($s4)
    ctx->pc = 0x515588u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2812), GPR_U32(ctx, 2));
label_51558c:
    // 0x51558c: 0xc6e00008  lwc1        $f0, 0x8($s7)
    ctx->pc = 0x51558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515590:
    // 0x515590: 0xc075378  jal         func_1D4DE0
label_515594:
    if (ctx->pc == 0x515594u) {
        ctx->pc = 0x515594u;
            // 0x515594: 0xe6800e1c  swc1        $f0, 0xE1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3612), bits); }
        ctx->pc = 0x515598u;
        goto label_515598;
    }
    ctx->pc = 0x515590u;
    SET_GPR_U32(ctx, 31, 0x515598u);
    ctx->pc = 0x515594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515590u;
            // 0x515594: 0xe6800e1c  swc1        $f0, 0xE1C($s4) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 3612), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515598u; }
        if (ctx->pc != 0x515598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515598u; }
        if (ctx->pc != 0x515598u) { return; }
    }
    ctx->pc = 0x515598u;
label_515598:
    // 0x515598: 0xc6810880  lwc1        $f1, 0x880($s4)
    ctx->pc = 0x515598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_51559c:
    // 0x51559c: 0x2684087c  addiu       $a0, $s4, 0x87C
    ctx->pc = 0x51559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2172));
label_5155a0:
    // 0x5155a0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x5155a0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_5155a4:
    // 0x5155a4: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x5155a4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_5155a8:
    // 0x5155a8: 0xc0c753c  jal         func_31D4F0
label_5155ac:
    if (ctx->pc == 0x5155ACu) {
        ctx->pc = 0x5155ACu;
            // 0x5155ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x5155B0u;
        goto label_5155b0;
    }
    ctx->pc = 0x5155A8u;
    SET_GPR_U32(ctx, 31, 0x5155B0u);
    ctx->pc = 0x5155ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5155A8u;
            // 0x5155ac: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155B0u; }
        if (ctx->pc != 0x5155B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155B0u; }
        if (ctx->pc != 0x5155B0u) { return; }
    }
    ctx->pc = 0x5155B0u;
label_5155b0:
    // 0x5155b0: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x5155b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_5155b4:
    // 0x5155b4: 0x26830890  addiu       $v1, $s4, 0x890
    ctx->pc = 0x5155b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_5155b8:
    // 0x5155b8: 0xc44ea488  lwc1        $f14, -0x5B78($v0)
    ctx->pc = 0x5155b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_5155bc:
    // 0x5155bc: 0xc68c0930  lwc1        $f12, 0x930($s4)
    ctx->pc = 0x5155bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_5155c0:
    // 0x5155c0: 0xc68d0880  lwc1        $f13, 0x880($s4)
    ctx->pc = 0x5155c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_5155c4:
    // 0x5155c4: 0xc0c753c  jal         func_31D4F0
label_5155c8:
    if (ctx->pc == 0x5155C8u) {
        ctx->pc = 0x5155C8u;
            // 0x5155c8: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x5155CCu;
        goto label_5155cc;
    }
    ctx->pc = 0x5155C4u;
    SET_GPR_U32(ctx, 31, 0x5155CCu);
    ctx->pc = 0x5155C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5155C4u;
            // 0x5155c8: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155CCu; }
        if (ctx->pc != 0x5155CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155CCu; }
        if (ctx->pc != 0x5155CCu) { return; }
    }
    ctx->pc = 0x5155CCu;
label_5155cc:
    // 0x5155cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x5155ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_5155d0:
    // 0x5155d0: 0xc0ab808  jal         func_2AE020
label_5155d4:
    if (ctx->pc == 0x5155D4u) {
        ctx->pc = 0x5155D4u;
            // 0x5155d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x5155D8u;
        goto label_5155d8;
    }
    ctx->pc = 0x5155D0u;
    SET_GPR_U32(ctx, 31, 0x5155D8u);
    ctx->pc = 0x5155D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5155D0u;
            // 0x5155d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155D8u; }
        if (ctx->pc != 0x5155D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155D8u; }
        if (ctx->pc != 0x5155D8u) { return; }
    }
    ctx->pc = 0x5155D8u;
label_5155d8:
    // 0x5155d8: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5155d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5155dc:
    // 0x5155dc: 0x268402e0  addiu       $a0, $s4, 0x2E0
    ctx->pc = 0x5155dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
label_5155e0:
    // 0x5155e0: 0xc04cc04  jal         func_133010
label_5155e4:
    if (ctx->pc == 0x5155E4u) {
        ctx->pc = 0x5155E4u;
            // 0x5155e4: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
        ctx->pc = 0x5155E8u;
        goto label_5155e8;
    }
    ctx->pc = 0x5155E0u;
    SET_GPR_U32(ctx, 31, 0x5155E8u);
    ctx->pc = 0x5155E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5155E0u;
            // 0x5155e4: 0x24a5bf40  addiu       $a1, $a1, -0x40C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155E8u; }
        if (ctx->pc != 0x5155E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155E8u; }
        if (ctx->pc != 0x5155E8u) { return; }
    }
    ctx->pc = 0x5155E8u;
label_5155e8:
    // 0x5155e8: 0x26840560  addiu       $a0, $s4, 0x560
    ctx->pc = 0x5155e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_5155ec:
    // 0x5155ec: 0xc075318  jal         func_1D4C60
label_5155f0:
    if (ctx->pc == 0x5155F0u) {
        ctx->pc = 0x5155F0u;
            // 0x5155f0: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->pc = 0x5155F4u;
        goto label_5155f4;
    }
    ctx->pc = 0x5155ECu;
    SET_GPR_U32(ctx, 31, 0x5155F4u);
    ctx->pc = 0x5155F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5155ECu;
            // 0x5155f0: 0x268502e0  addiu       $a1, $s4, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155F4u; }
        if (ctx->pc != 0x5155F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5155F4u; }
        if (ctx->pc != 0x5155F4u) { return; }
    }
    ctx->pc = 0x5155F4u;
label_5155f4:
    // 0x5155f4: 0x26850560  addiu       $a1, $s4, 0x560
    ctx->pc = 0x5155f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
label_5155f8:
    // 0x5155f8: 0x26840840  addiu       $a0, $s4, 0x840
    ctx->pc = 0x5155f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2112));
label_5155fc:
    // 0x5155fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5155fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515600:
    // 0x515600: 0xc0c6250  jal         func_318940
label_515604:
    if (ctx->pc == 0x515604u) {
        ctx->pc = 0x515604u;
            // 0x515604: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515608u;
        goto label_515608;
    }
    ctx->pc = 0x515600u;
    SET_GPR_U32(ctx, 31, 0x515608u);
    ctx->pc = 0x515604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515600u;
            // 0x515604: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515608u; }
        if (ctx->pc != 0x515608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515608u; }
        if (ctx->pc != 0x515608u) { return; }
    }
    ctx->pc = 0x515608u;
label_515608:
    // 0x515608: 0x26830890  addiu       $v1, $s4, 0x890
    ctx->pc = 0x515608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
label_51560c:
    // 0x51560c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x51560cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_515610:
    // 0x515610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x515610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515614:
    // 0x515614: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x515614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_515618:
    // 0x515618: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x515618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_51561c:
    // 0x51561c: 0xc0c6250  jal         func_318940
label_515620:
    if (ctx->pc == 0x515620u) {
        ctx->pc = 0x515620u;
            // 0x515620: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->pc = 0x515624u;
        goto label_515624;
    }
    ctx->pc = 0x51561Cu;
    SET_GPR_U32(ctx, 31, 0x515624u);
    ctx->pc = 0x515620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51561Cu;
            // 0x515620: 0x26860560  addiu       $a2, $s4, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515624u; }
        if (ctx->pc != 0x515624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515624u; }
        if (ctx->pc != 0x515624u) { return; }
    }
    ctx->pc = 0x515624u;
label_515624:
    // 0x515624: 0xc0b9210  jal         func_2E4840
label_515628:
    if (ctx->pc == 0x515628u) {
        ctx->pc = 0x515628u;
            // 0x515628: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->pc = 0x51562Cu;
        goto label_51562c;
    }
    ctx->pc = 0x515624u;
    SET_GPR_U32(ctx, 31, 0x51562Cu);
    ctx->pc = 0x515628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515624u;
            // 0x515628: 0x268407e0  addiu       $a0, $s4, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51562Cu; }
        if (ctx->pc != 0x51562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51562Cu; }
        if (ctx->pc != 0x51562Cu) { return; }
    }
    ctx->pc = 0x51562Cu;
label_51562c:
    // 0x51562c: 0xc0b9210  jal         func_2E4840
label_515630:
    if (ctx->pc == 0x515630u) {
        ctx->pc = 0x515630u;
            // 0x515630: 0x26840890  addiu       $a0, $s4, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
        ctx->pc = 0x515634u;
        goto label_515634;
    }
    ctx->pc = 0x51562Cu;
    SET_GPR_U32(ctx, 31, 0x515634u);
    ctx->pc = 0x515630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51562Cu;
            // 0x515630: 0x26840890  addiu       $a0, $s4, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 2192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E4840u;
    if (runtime->hasFunction(0x2E4840u)) {
        auto targetFn = runtime->lookupFunction(0x2E4840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515634u; }
        if (ctx->pc != 0x515634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E4840_0x2e4840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515634u; }
        if (ctx->pc != 0x515634u) { return; }
    }
    ctx->pc = 0x515634u;
label_515634:
    // 0x515634: 0x3c023f55  lui         $v0, 0x3F55
    ctx->pc = 0x515634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16213 << 16));
label_515638:
    // 0x515638: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x515638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_51563c:
    // 0x51563c: 0x34425555  ori         $v0, $v0, 0x5555
    ctx->pc = 0x51563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21845);
label_515640:
    // 0x515640: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x515640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_515644:
    // 0x515644: 0xc07649c  jal         func_1D9270
label_515648:
    if (ctx->pc == 0x515648u) {
        ctx->pc = 0x515648u;
            // 0x515648: 0xae820de4  sw          $v0, 0xDE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 2));
        ctx->pc = 0x51564Cu;
        goto label_51564c;
    }
    ctx->pc = 0x515644u;
    SET_GPR_U32(ctx, 31, 0x51564Cu);
    ctx->pc = 0x515648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515644u;
            // 0x515648: 0xae820de4  sw          $v0, 0xDE4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3556), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51564Cu; }
        if (ctx->pc != 0x51564Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51564Cu; }
        if (ctx->pc != 0x51564Cu) { return; }
    }
    ctx->pc = 0x51564Cu;
label_51564c:
    // 0x51564c: 0x8e830e34  lw          $v1, 0xE34($s4)
    ctx->pc = 0x51564cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3636)));
label_515650:
    // 0x515650: 0x64100001  daddiu      $s0, $zero, 0x1
    ctx->pc = 0x515650u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_515654:
    // 0x515654: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_515658:
    if (ctx->pc == 0x515658u) {
        ctx->pc = 0x515658u;
            // 0x515658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51565Cu;
        goto label_51565c;
    }
    ctx->pc = 0x515654u;
    {
        const bool branch_taken_0x515654 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x515658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515654u;
            // 0x515658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515654) {
            ctx->pc = 0x51566Cu;
            goto label_51566c;
        }
    }
    ctx->pc = 0x51565Cu;
label_51565c:
    // 0x51565c: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x51565cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_515660:
    // 0x515660: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_515664:
    if (ctx->pc == 0x515664u) {
        ctx->pc = 0x515668u;
        goto label_515668;
    }
    ctx->pc = 0x515660u;
    {
        const bool branch_taken_0x515660 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x515660) {
            ctx->pc = 0x51566Cu;
            goto label_51566c;
        }
    }
    ctx->pc = 0x515668u;
label_515668:
    // 0x515668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x515668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_51566c:
    // 0x51566c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_515670:
    if (ctx->pc == 0x515670u) {
        ctx->pc = 0x515674u;
        goto label_515674;
    }
    ctx->pc = 0x51566Cu;
    {
        const bool branch_taken_0x51566c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x51566c) {
            ctx->pc = 0x515688u;
            goto label_515688;
        }
    }
    ctx->pc = 0x515674u;
label_515674:
    // 0x515674: 0xc075eb4  jal         func_1D7AD0
label_515678:
    if (ctx->pc == 0x515678u) {
        ctx->pc = 0x515678u;
            // 0x515678: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x51567Cu;
        goto label_51567c;
    }
    ctx->pc = 0x515674u;
    SET_GPR_U32(ctx, 31, 0x51567Cu);
    ctx->pc = 0x515678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515674u;
            // 0x515678: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51567Cu; }
        if (ctx->pc != 0x51567Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51567Cu; }
        if (ctx->pc != 0x51567Cu) { return; }
    }
    ctx->pc = 0x51567Cu;
label_51567c:
    // 0x51567c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_515680:
    if (ctx->pc == 0x515680u) {
        ctx->pc = 0x515684u;
        goto label_515684;
    }
    ctx->pc = 0x51567Cu;
    {
        const bool branch_taken_0x51567c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x51567c) {
            ctx->pc = 0x515688u;
            goto label_515688;
        }
    }
    ctx->pc = 0x515684u;
label_515684:
    // 0x515684: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x515684u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_515688:
    // 0x515688: 0x52000022  beql        $s0, $zero, . + 4 + (0x22 << 2)
label_51568c:
    if (ctx->pc == 0x51568Cu) {
        ctx->pc = 0x51568Cu;
            // 0x51568c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->pc = 0x515690u;
        goto label_515690;
    }
    ctx->pc = 0x515688u;
    {
        const bool branch_taken_0x515688 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x515688) {
            ctx->pc = 0x51568Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515688u;
            // 0x51568c: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515714u;
            goto label_515714;
        }
    }
    ctx->pc = 0x515690u;
label_515690:
    // 0x515690: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x515690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_515694:
    // 0x515694: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x515694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_515698:
    // 0x515698: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x515698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_51569c:
    // 0x51569c: 0x245102b8  addiu       $s1, $v0, 0x2B8
    ctx->pc = 0x51569cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 696));
label_5156a0:
    // 0x5156a0: 0x8c4202c0  lw          $v0, 0x2C0($v0)
    ctx->pc = 0x5156a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 704)));
label_5156a4:
    // 0x5156a4: 0xc040180  jal         func_100600
label_5156a8:
    if (ctx->pc == 0x5156A8u) {
        ctx->pc = 0x5156A8u;
            // 0x5156a8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x5156ACu;
        goto label_5156ac;
    }
    ctx->pc = 0x5156A4u;
    SET_GPR_U32(ctx, 31, 0x5156ACu);
    ctx->pc = 0x5156A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5156A4u;
            // 0x5156a8: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5156ACu; }
        if (ctx->pc != 0x5156ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5156ACu; }
        if (ctx->pc != 0x5156ACu) { return; }
    }
    ctx->pc = 0x5156ACu;
label_5156ac:
    // 0x5156ac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_5156b0:
    if (ctx->pc == 0x5156B0u) {
        ctx->pc = 0x5156B0u;
            // 0x5156b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5156B4u;
        goto label_5156b4;
    }
    ctx->pc = 0x5156ACu;
    {
        const bool branch_taken_0x5156ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x5156B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5156ACu;
            // 0x5156b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5156ac) {
            ctx->pc = 0x515710u;
            goto label_515710;
        }
    }
    ctx->pc = 0x5156B4u;
label_5156b4:
    // 0x5156b4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x5156b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5156b8:
    // 0x5156b8: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x5156b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_5156bc:
    // 0x5156bc: 0x8e910d98  lw          $s1, 0xD98($s4)
    ctx->pc = 0x5156bcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3480)));
label_5156c0:
    // 0x5156c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5156c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5156c4:
    // 0x5156c4: 0x828911aa  lb          $t1, 0x11AA($s4)
    ctx->pc = 0x5156c4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 4522)));
label_5156c8:
    // 0x5156c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5156c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5156cc:
    // 0x5156cc: 0x344594a8  ori         $a1, $v0, 0x94A8
    ctx->pc = 0x5156ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)38056);
label_5156d0:
    // 0x5156d0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x5156d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_5156d4:
    // 0x5156d4: 0x24080821  addiu       $t0, $zero, 0x821
    ctx->pc = 0x5156d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2081));
label_5156d8:
    // 0x5156d8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x5156d8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_5156dc:
    // 0x5156dc: 0xc0b9404  jal         func_2E5010
label_5156e0:
    if (ctx->pc == 0x5156E0u) {
        ctx->pc = 0x5156E0u;
            // 0x5156e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5156E4u;
        goto label_5156e4;
    }
    ctx->pc = 0x5156DCu;
    SET_GPR_U32(ctx, 31, 0x5156E4u);
    ctx->pc = 0x5156E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5156DCu;
            // 0x5156e0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5156E4u; }
        if (ctx->pc != 0x5156E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5156E4u; }
        if (ctx->pc != 0x5156E4u) { return; }
    }
    ctx->pc = 0x5156E4u;
label_5156e4:
    // 0x5156e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5156e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5156e8:
    // 0x5156e8: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x5156e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_5156ec:
    // 0x5156ec: 0x2231804  sllv        $v1, $v1, $s1
    ctx->pc = 0x5156ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 17) & 0x1F));
label_5156f0:
    // 0x5156f0: 0x24844160  addiu       $a0, $a0, 0x4160
    ctx->pc = 0x5156f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16736));
label_5156f4:
    // 0x5156f4: 0x306500ff  andi        $a1, $v1, 0xFF
    ctx->pc = 0x5156f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_5156f8:
    // 0x5156f8: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x5156f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_5156fc:
    // 0x5156fc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x5156fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_515700:
    // 0x515700: 0x90643db0  lbu         $a0, 0x3DB0($v1)
    ctx->pc = 0x515700u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 15792)));
label_515704:
    // 0x515704: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x515704u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_515708:
    // 0x515708: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x515708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_51570c:
    // 0x51570c: 0xa0643db0  sb          $a0, 0x3DB0($v1)
    ctx->pc = 0x51570cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 15792), (uint8_t)GPR_U32(ctx, 4));
label_515710:
    // 0x515710: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x515710u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_515714:
    // 0x515714: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x515714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_515718:
    // 0x515718: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x515718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_51571c:
    // 0x51571c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x51571cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_515720:
    // 0x515720: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x515720u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_515724:
    // 0x515724: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x515724u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_515728:
    // 0x515728: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x515728u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51572c:
    // 0x51572c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x51572cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_515730:
    // 0x515730: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x515730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_515734:
    // 0x515734: 0x3e00008  jr          $ra
label_515738:
    if (ctx->pc == 0x515738u) {
        ctx->pc = 0x515738u;
            // 0x515738: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x51573Cu;
        goto label_51573c;
    }
    ctx->pc = 0x515734u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515734u;
            // 0x515738: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51573Cu;
label_51573c:
    // 0x51573c: 0x0  nop
    ctx->pc = 0x51573cu;
    // NOP
label_515740:
    // 0x515740: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x515740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_515744:
    // 0x515744: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515748:
    // 0x515748: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x515748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_51574c:
    // 0x51574c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x51574cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_515750:
    // 0x515750: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x515750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_515754:
    // 0x515754: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x515754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_515758:
    // 0x515758: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x515758u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_51575c:
    // 0x51575c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x51575cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_515760:
    // 0x515760: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x515760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_515764:
    // 0x515764: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x515764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_515768:
    // 0x515768: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x515768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_51576c:
    // 0x51576c: 0x8ca4002c  lw          $a0, 0x2C($a1)
    ctx->pc = 0x51576cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_515770:
    // 0x515770: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x515770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_515774:
    // 0x515774: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x515774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_515778:
    // 0x515778: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x515778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_51577c:
    // 0x51577c: 0x90900007  lbu         $s0, 0x7($a0)
    ctx->pc = 0x51577cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 7)));
label_515780:
    // 0x515780: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_515784:
    if (ctx->pc == 0x515784u) {
        ctx->pc = 0x515784u;
            // 0x515784: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515788u;
        goto label_515788;
    }
    ctx->pc = 0x515780u;
    {
        const bool branch_taken_0x515780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x515784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515780u;
            // 0x515784: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515780) {
            ctx->pc = 0x515798u;
            goto label_515798;
        }
    }
    ctx->pc = 0x515788u;
label_515788:
    // 0x515788: 0x90820006  lbu         $v0, 0x6($a0)
    ctx->pc = 0x515788u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 6)));
label_51578c:
    // 0x51578c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_515790:
    if (ctx->pc == 0x515790u) {
        ctx->pc = 0x515790u;
            // 0x515790: 0x8e230e30  lw          $v1, 0xE30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
        ctx->pc = 0x515794u;
        goto label_515794;
    }
    ctx->pc = 0x51578Cu;
    {
        const bool branch_taken_0x51578c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x51578c) {
            ctx->pc = 0x515790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51578Cu;
            // 0x515790: 0x8e230e30  lw          $v1, 0xE30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51579Cu;
            goto label_51579c;
        }
    }
    ctx->pc = 0x515794u;
label_515794:
    // 0x515794: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x515794u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_515798:
    // 0x515798: 0x8e230e30  lw          $v1, 0xE30($s1)
    ctx->pc = 0x515798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3632)));
label_51579c:
    // 0x51579c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x51579cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5157a0:
    // 0x5157a0: 0x50620053  beql        $v1, $v0, . + 4 + (0x53 << 2)
label_5157a4:
    if (ctx->pc == 0x5157A4u) {
        ctx->pc = 0x5157A4u;
            // 0x5157a4: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x5157A8u;
        goto label_5157a8;
    }
    ctx->pc = 0x5157A0u;
    {
        const bool branch_taken_0x5157a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5157a0) {
            ctx->pc = 0x5157A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5157A0u;
            // 0x5157a4: 0x82450074  lb          $a1, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5158F0u;
            goto label_5158f0;
        }
    }
    ctx->pc = 0x5157A8u;
label_5157a8:
    // 0x5157a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x5157a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5157ac:
    // 0x5157ac: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_5157b0:
    if (ctx->pc == 0x5157B0u) {
        ctx->pc = 0x5157B0u;
            // 0x5157b0: 0xc6220690  lwc1        $f2, 0x690($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->pc = 0x5157B4u;
        goto label_5157b4;
    }
    ctx->pc = 0x5157ACu;
    {
        const bool branch_taken_0x5157ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x5157ac) {
            ctx->pc = 0x5157B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5157ACu;
            // 0x5157b0: 0xc6220690  lwc1        $f2, 0x690($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x5157C4u;
            goto label_5157c4;
        }
    }
    ctx->pc = 0x5157B4u;
label_5157b4:
    // 0x5157b4: 0x5060004d  beql        $v1, $zero, . + 4 + (0x4D << 2)
label_5157b8:
    if (ctx->pc == 0x5157B8u) {
        ctx->pc = 0x5157B8u;
            // 0x5157b8: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->pc = 0x5157BCu;
        goto label_5157bc;
    }
    ctx->pc = 0x5157B4u;
    {
        const bool branch_taken_0x5157b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x5157b4) {
            ctx->pc = 0x5157B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5157B4u;
            // 0x5157b8: 0xae220e30  sw          $v0, 0xE30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x5158ECu;
            goto label_5158ec;
        }
    }
    ctx->pc = 0x5157BCu;
label_5157bc:
    // 0x5157bc: 0x1000004b  b           . + 4 + (0x4B << 2)
label_5157c0:
    if (ctx->pc == 0x5157C0u) {
        ctx->pc = 0x5157C4u;
        goto label_5157c4;
    }
    ctx->pc = 0x5157BCu;
    {
        const bool branch_taken_0x5157bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x5157bc) {
            ctx->pc = 0x5158ECu;
            goto label_5158ec;
        }
    }
    ctx->pc = 0x5157C4u;
label_5157c4:
    // 0x5157c4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x5157c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_5157c8:
    // 0x5157c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x5157c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_5157cc:
    // 0x5157cc: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x5157ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_5157d0:
    // 0x5157d0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5157d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5157d4:
    // 0x5157d4: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x5157d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_5157d8:
    // 0x5157d8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x5157d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_5157dc:
    // 0x5157dc: 0x8c438a08  lw          $v1, -0x75F8($v0)
    ctx->pc = 0x5157dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_5157e0:
    // 0x5157e0: 0x24a5bf70  addiu       $a1, $a1, -0x4090
    ctx->pc = 0x5157e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
label_5157e4:
    // 0x5157e4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x5157e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_5157e8:
    // 0x5157e8: 0xc6200324  lwc1        $f0, 0x324($s1)
    ctx->pc = 0x5157e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5157ec:
    // 0x5157ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x5157ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_5157f0:
    // 0x5157f0: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x5157f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_5157f4:
    // 0x5157f4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x5157f4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_5157f8:
    // 0x5157f8: 0x4601101d  msub.s      $f0, $f2, $f1
    ctx->pc = 0x5157f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_5157fc:
    // 0x5157fc: 0xe6200324  swc1        $f0, 0x324($s1)
    ctx->pc = 0x5157fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 804), bits); }
label_515800:
    // 0x515800: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x515800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_515804:
    // 0x515804: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x515804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515808:
    // 0x515808: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x515808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_51580c:
    // 0x51580c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x51580cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515810:
    // 0x515810: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x515810u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_515814:
    // 0x515814: 0x4601131d  msub.s      $f12, $f2, $f1
    ctx->pc = 0x515814u;
    ctx->f[12] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[1]));
label_515818:
    // 0x515818: 0xc04cc70  jal         func_1331C0
label_51581c:
    if (ctx->pc == 0x51581Cu) {
        ctx->pc = 0x51581Cu;
            // 0x51581c: 0xe62c0de4  swc1        $f12, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->pc = 0x515820u;
        goto label_515820;
    }
    ctx->pc = 0x515818u;
    SET_GPR_U32(ctx, 31, 0x515820u);
    ctx->pc = 0x51581Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515818u;
            // 0x51581c: 0xe62c0de4  swc1        $f12, 0xDE4($s1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515820u; }
        if (ctx->pc != 0x515820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515820u; }
        if (ctx->pc != 0x515820u) { return; }
    }
    ctx->pc = 0x515820u;
label_515820:
    // 0x515820: 0xc62c0324  lwc1        $f12, 0x324($s1)
    ctx->pc = 0x515820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515824:
    // 0x515824: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x515824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_515828:
    // 0x515828: 0x26660010  addiu       $a2, $s3, 0x10
    ctx->pc = 0x515828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_51582c:
    // 0x51582c: 0xc04cc7c  jal         func_1331F0
label_515830:
    if (ctx->pc == 0x515830u) {
        ctx->pc = 0x515830u;
            // 0x515830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515834u;
        goto label_515834;
    }
    ctx->pc = 0x51582Cu;
    SET_GPR_U32(ctx, 31, 0x515834u);
    ctx->pc = 0x515830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51582Cu;
            // 0x515830: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515834u; }
        if (ctx->pc != 0x515834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515834u; }
        if (ctx->pc != 0x515834u) { return; }
    }
    ctx->pc = 0x515834u;
label_515834:
    // 0x515834: 0xc6210920  lwc1        $f1, 0x920($s1)
    ctx->pc = 0x515834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515838:
    // 0x515838: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x515838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_51583c:
    // 0x51583c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x51583cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_515840:
    // 0x515840: 0x0  nop
    ctx->pc = 0x515840u;
    // NOP
label_515844:
    // 0x515844: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x515844u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_515848:
    // 0x515848: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_51584c:
    if (ctx->pc == 0x51584Cu) {
        ctx->pc = 0x515850u;
        goto label_515850;
    }
    ctx->pc = 0x515848u;
    {
        const bool branch_taken_0x515848 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x515848) {
            ctx->pc = 0x5158ECu;
            goto label_5158ec;
        }
    }
    ctx->pc = 0x515850u;
label_515850:
    // 0x515850: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x515850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_515854:
    // 0x515854: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x515854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_515858:
    // 0x515858: 0xc04cc04  jal         func_133010
label_51585c:
    if (ctx->pc == 0x51585Cu) {
        ctx->pc = 0x51585Cu;
            // 0x51585c: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
        ctx->pc = 0x515860u;
        goto label_515860;
    }
    ctx->pc = 0x515858u;
    SET_GPR_U32(ctx, 31, 0x515860u);
    ctx->pc = 0x51585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515858u;
            // 0x51585c: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515860u; }
        if (ctx->pc != 0x515860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515860u; }
        if (ctx->pc != 0x515860u) { return; }
    }
    ctx->pc = 0x515860u;
label_515860:
    // 0x515860: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x515860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515864:
    // 0x515864: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x515864u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
label_515868:
    // 0x515868: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x515868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_51586c:
    // 0x51586c: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x51586cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_515870:
    // 0x515870: 0xae220db8  sw          $v0, 0xDB8($s1)
    ctx->pc = 0x515870u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
label_515874:
    // 0x515874: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x515874u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_515878:
    // 0x515878: 0xc04cbd8  jal         func_132F60
label_51587c:
    if (ctx->pc == 0x51587Cu) {
        ctx->pc = 0x51587Cu;
            // 0x51587c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x515880u;
        goto label_515880;
    }
    ctx->pc = 0x515878u;
    SET_GPR_U32(ctx, 31, 0x515880u);
    ctx->pc = 0x51587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515878u;
            // 0x51587c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515880u; }
        if (ctx->pc != 0x515880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515880u; }
        if (ctx->pc != 0x515880u) { return; }
    }
    ctx->pc = 0x515880u;
label_515880:
    // 0x515880: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x515880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_515884:
    // 0x515884: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x515884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_515888:
    // 0x515888: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_51588c:
    if (ctx->pc == 0x51588Cu) {
        ctx->pc = 0x515890u;
        goto label_515890;
    }
    ctx->pc = 0x515888u;
    {
        const bool branch_taken_0x515888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x515888) {
            ctx->pc = 0x515894u;
            goto label_515894;
        }
    }
    ctx->pc = 0x515890u;
label_515890:
    // 0x515890: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x515890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_515894:
    // 0x515894: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x515894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_515898:
    // 0x515898: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x515898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_51589c:
    // 0x51589c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_5158a0:
    if (ctx->pc == 0x5158A0u) {
        ctx->pc = 0x5158A0u;
            // 0x5158a0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x5158A4u;
        goto label_5158a4;
    }
    ctx->pc = 0x51589Cu;
    {
        const bool branch_taken_0x51589c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x5158A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51589Cu;
            // 0x5158a0: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x51589c) {
            ctx->pc = 0x5158A8u;
            goto label_5158a8;
        }
    }
    ctx->pc = 0x5158A4u;
label_5158a4:
    // 0x5158a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x5158a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_5158a8:
    // 0x5158a8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x5158a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_5158ac:
    // 0x5158ac: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x5158acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_5158b0:
    // 0x5158b0: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x5158b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_5158b4:
    // 0x5158b4: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x5158b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_5158b8:
    // 0x5158b8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x5158b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_5158bc:
    // 0x5158bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x5158bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_5158c0:
    // 0x5158c0: 0x246308a0  addiu       $v1, $v1, 0x8A0
    ctx->pc = 0x5158c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2208));
label_5158c4:
    // 0x5158c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x5158c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_5158c8:
    // 0x5158c8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x5158c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_5158cc:
    // 0x5158cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x5158ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_5158d0:
    // 0x5158d0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x5158d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5158d4:
    // 0x5158d4: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x5158d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_5158d8:
    // 0x5158d8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x5158d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5158dc:
    // 0x5158dc: 0xe6200de8  swc1        $f0, 0xDE8($s1)
    ctx->pc = 0x5158dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
label_5158e0:
    // 0x5158e0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x5158e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_5158e4:
    // 0x5158e4: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x5158e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_5158e8:
    // 0x5158e8: 0xae220e30  sw          $v0, 0xE30($s1)
    ctx->pc = 0x5158e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3632), GPR_U32(ctx, 2));
label_5158ec:
    // 0x5158ec: 0x82450074  lb          $a1, 0x74($s2)
    ctx->pc = 0x5158ecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_5158f0:
    // 0x5158f0: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x5158f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_5158f4:
    // 0x5158f4: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x5158f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_5158f8:
    // 0x5158f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x5158f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_5158fc:
    // 0x5158fc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x5158fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_515900:
    // 0x515900: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x515900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_515904:
    // 0x515904: 0x10a200fd  beq         $a1, $v0, . + 4 + (0xFD << 2)
label_515908:
    if (ctx->pc == 0x515908u) {
        ctx->pc = 0x515908u;
            // 0x515908: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->pc = 0x51590Cu;
        goto label_51590c;
    }
    ctx->pc = 0x515904u;
    {
        const bool branch_taken_0x515904 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x515908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515904u;
            // 0x515908: 0xc4740000  lwc1        $f20, 0x0($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x515904) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x51590Cu;
label_51590c:
    // 0x51590c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x51590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_515910:
    // 0x515910: 0x50a200e2  beql        $a1, $v0, . + 4 + (0xE2 << 2)
label_515914:
    if (ctx->pc == 0x515914u) {
        ctx->pc = 0x515914u;
            // 0x515914: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x515918u;
        goto label_515918;
    }
    ctx->pc = 0x515910u;
    {
        const bool branch_taken_0x515910 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x515910) {
            ctx->pc = 0x515914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515910u;
            // 0x515914: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x515C9Cu;
            goto label_515c9c;
        }
    }
    ctx->pc = 0x515918u;
label_515918:
    // 0x515918: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x515918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_51591c:
    // 0x51591c: 0x50a200aa  beql        $a1, $v0, . + 4 + (0xAA << 2)
label_515920:
    if (ctx->pc == 0x515920u) {
        ctx->pc = 0x515920u;
            // 0x515920: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x515924u;
        goto label_515924;
    }
    ctx->pc = 0x51591Cu;
    {
        const bool branch_taken_0x51591c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x51591c) {
            ctx->pc = 0x515920u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51591Cu;
            // 0x515920: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x515BC8u;
            goto label_515bc8;
        }
    }
    ctx->pc = 0x515924u;
label_515924:
    // 0x515924: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x515924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515928:
    // 0x515928: 0x50a30067  beql        $a1, $v1, . + 4 + (0x67 << 2)
label_51592c:
    if (ctx->pc == 0x51592Cu) {
        ctx->pc = 0x51592Cu;
            // 0x51592c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x515930u;
        goto label_515930;
    }
    ctx->pc = 0x515928u;
    {
        const bool branch_taken_0x515928 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x515928) {
            ctx->pc = 0x51592Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515928u;
            // 0x51592c: 0xc64c005c  lwc1        $f12, 0x5C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x515AC8u;
            goto label_515ac8;
        }
    }
    ctx->pc = 0x515930u;
label_515930:
    // 0x515930: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_515934:
    if (ctx->pc == 0x515934u) {
        ctx->pc = 0x515938u;
        goto label_515938;
    }
    ctx->pc = 0x515930u;
    {
        const bool branch_taken_0x515930 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x515930) {
            ctx->pc = 0x515940u;
            goto label_515940;
        }
    }
    ctx->pc = 0x515938u;
label_515938:
    // 0x515938: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_51593c:
    if (ctx->pc == 0x51593Cu) {
        ctx->pc = 0x51593Cu;
            // 0x51593c: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->pc = 0x515940u;
        goto label_515940;
    }
    ctx->pc = 0x515938u;
    {
        const bool branch_taken_0x515938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x51593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515938u;
            // 0x51593c: 0x8e220da0  lw          $v0, 0xDA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515938) {
            ctx->pc = 0x515D00u;
            goto label_515d00;
        }
    }
    ctx->pc = 0x515940u;
label_515940:
    // 0x515940: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515944:
    // 0x515944: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x515944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_515948:
    // 0x515948: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x515948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_51594c:
    // 0x51594c: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x51594cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515950:
    // 0x515950: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x515950u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515954:
    // 0x515954: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x515954u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_515958:
    // 0x515958: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_51595c:
    if (ctx->pc == 0x51595Cu) {
        ctx->pc = 0x51595Cu;
            // 0x51595c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x515960u;
        goto label_515960;
    }
    ctx->pc = 0x515958u;
    {
        const bool branch_taken_0x515958 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x51595Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515958u;
            // 0x51595c: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x515958) {
            ctx->pc = 0x515978u;
            goto label_515978;
        }
    }
    ctx->pc = 0x515960u;
label_515960:
    // 0x515960: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x515960u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_515964:
    // 0x515964: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x515964u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_515968:
    // 0x515968: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515968u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_51596c:
    // 0x51596c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x51596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_515970:
    // 0x515970: 0x10000002  b           . + 4 + (0x2 << 2)
label_515974:
    if (ctx->pc == 0x515974u) {
        ctx->pc = 0x515974u;
            // 0x515974: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x515978u;
        goto label_515978;
    }
    ctx->pc = 0x515970u;
    {
        const bool branch_taken_0x515970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515970u;
            // 0x515974: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515970) {
            ctx->pc = 0x51597Cu;
            goto label_51597c;
        }
    }
    ctx->pc = 0x515978u;
label_515978:
    // 0x515978: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x515978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_51597c:
    // 0x51597c: 0x106000df  beqz        $v1, . + 4 + (0xDF << 2)
label_515980:
    if (ctx->pc == 0x515980u) {
        ctx->pc = 0x515984u;
        goto label_515984;
    }
    ctx->pc = 0x51597Cu;
    {
        const bool branch_taken_0x51597c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x51597c) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515984u;
label_515984:
    // 0x515984: 0x8e300d74  lw          $s0, 0xD74($s1)
    ctx->pc = 0x515984u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_515988:
    // 0x515988: 0x3c0274ff  lui         $v0, 0x74FF
    ctx->pc = 0x515988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29951 << 16));
label_51598c:
    // 0x51598c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x51598cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_515990:
    // 0x515990: 0x8e0302c8  lw          $v1, 0x2C8($s0)
    ctx->pc = 0x515990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_515994:
    // 0x515994: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x515994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_515998:
    // 0x515998: 0xc0a545c  jal         func_295170
label_51599c:
    if (ctx->pc == 0x51599Cu) {
        ctx->pc = 0x51599Cu;
            // 0x51599c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x5159A0u;
        goto label_5159a0;
    }
    ctx->pc = 0x515998u;
    SET_GPR_U32(ctx, 31, 0x5159A0u);
    ctx->pc = 0x51599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515998u;
            // 0x51599c: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5159A0u; }
        if (ctx->pc != 0x5159A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5159A0u; }
        if (ctx->pc != 0x5159A0u) { return; }
    }
    ctx->pc = 0x5159A0u;
label_5159a0:
    // 0x5159a0: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x5159a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_5159a4:
    // 0x5159a4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x5159a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_5159a8:
    // 0x5159a8: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x5159a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_5159ac:
    // 0x5159ac: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x5159acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_5159b0:
    // 0x5159b0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x5159b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_5159b4:
    // 0x5159b4: 0xc08bf20  jal         func_22FC80
label_5159b8:
    if (ctx->pc == 0x5159B8u) {
        ctx->pc = 0x5159B8u;
            // 0x5159b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x5159BCu;
        goto label_5159bc;
    }
    ctx->pc = 0x5159B4u;
    SET_GPR_U32(ctx, 31, 0x5159BCu);
    ctx->pc = 0x5159B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x5159B4u;
            // 0x5159b8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5159BCu; }
        if (ctx->pc != 0x5159BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x5159BCu; }
        if (ctx->pc != 0x5159BCu) { return; }
    }
    ctx->pc = 0x5159BCu;
label_5159bc:
    // 0x5159bc: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x5159bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_5159c0:
    // 0x5159c0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x5159c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_5159c4:
    // 0x5159c4: 0x5462001e  bnel        $v1, $v0, . + 4 + (0x1E << 2)
label_5159c8:
    if (ctx->pc == 0x5159C8u) {
        ctx->pc = 0x5159C8u;
            // 0x5159c8: 0x82460074  lb          $a2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->pc = 0x5159CCu;
        goto label_5159cc;
    }
    ctx->pc = 0x5159C4u;
    {
        const bool branch_taken_0x5159c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x5159c4) {
            ctx->pc = 0x5159C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x5159C4u;
            // 0x5159c8: 0x82460074  lb          $a2, 0x74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515A40u;
            goto label_515a40;
        }
    }
    ctx->pc = 0x5159CCu;
label_5159cc:
    // 0x5159cc: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x5159ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_5159d0:
    // 0x5159d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x5159d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_5159d4:
    // 0x5159d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x5159d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_5159d8:
    // 0x5159d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x5159d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_5159dc:
    // 0x5159dc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x5159dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_5159e0:
    // 0x5159e0: 0x2406003a  addiu       $a2, $zero, 0x3A
    ctx->pc = 0x5159e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_5159e4:
    // 0x5159e4: 0x8202010c  lb          $v0, 0x10C($s0)
    ctx->pc = 0x5159e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_5159e8:
    // 0x5159e8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x5159e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_5159ec:
    // 0x5159ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x5159ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_5159f0:
    // 0x5159f0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x5159f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_5159f4:
    // 0x5159f4: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x5159f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_5159f8:
    // 0x5159f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x5159f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_5159fc:
    // 0x5159fc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x5159fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515a00:
    // 0x515a00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x515a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_515a04:
    // 0x515a04: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x515a04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_515a08:
    // 0x515a08: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x515a08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_515a0c:
    // 0x515a0c: 0x8205010d  lb          $a1, 0x10D($s0)
    ctx->pc = 0x515a0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_515a10:
    // 0x515a10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x515a10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_515a14:
    // 0x515a14: 0x320f809  jalr        $t9
label_515a18:
    if (ctx->pc == 0x515A18u) {
        ctx->pc = 0x515A18u;
            // 0x515a18: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x515A1Cu;
        goto label_515a1c;
    }
    ctx->pc = 0x515A14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515A1Cu);
        ctx->pc = 0x515A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515A14u;
            // 0x515a18: 0x24070018  addiu       $a3, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515A1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515A1Cu; }
            if (ctx->pc != 0x515A1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x515A1Cu;
label_515a1c:
    // 0x515a1c: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x515a1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_515a20:
    // 0x515a20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x515a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_515a24:
    // 0x515a24: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x515a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_515a28:
    // 0x515a28: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x515a28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_515a2c:
    // 0x515a2c: 0x320f809  jalr        $t9
label_515a30:
    if (ctx->pc == 0x515A30u) {
        ctx->pc = 0x515A30u;
            // 0x515a30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x515A34u;
        goto label_515a34;
    }
    ctx->pc = 0x515A2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x515A34u);
        ctx->pc = 0x515A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515A2Cu;
            // 0x515a30: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x515A34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x515A34u; }
            if (ctx->pc != 0x515A34u) { return; }
        }
        }
    }
    ctx->pc = 0x515A34u;
label_515a34:
    // 0x515a34: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x515a34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_515a38:
    // 0x515a38: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_515a3c:
    if (ctx->pc == 0x515A3Cu) {
        ctx->pc = 0x515A3Cu;
            // 0x515a3c: 0xa2400075  sb          $zero, 0x75($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x515A40u;
        goto label_515a40;
    }
    ctx->pc = 0x515A38u;
    {
        const bool branch_taken_0x515a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515A38u;
            // 0x515a3c: 0xa2400075  sb          $zero, 0x75($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515a38) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515A40u;
label_515a40:
    // 0x515a40: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x515a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_515a44:
    // 0x515a44: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x515a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515a48:
    // 0x515a48: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x515a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_515a4c:
    // 0x515a4c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515a50:
    // 0x515a50: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515a50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_515a54:
    // 0x515a54: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x515a54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_515a58:
    // 0x515a58: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x515a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_515a5c:
    // 0x515a5c: 0x80470006  lb          $a3, 0x6($v0)
    ctx->pc = 0x515a5cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 6)));
label_515a60:
    // 0x515a60: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x515a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515a64:
    // 0x515a64: 0x84460004  lh          $a2, 0x4($v0)
    ctx->pc = 0x515a64u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_515a68:
    // 0x515a68: 0xc1425e0  jal         func_509780
label_515a6c:
    if (ctx->pc == 0x515A6Cu) {
        ctx->pc = 0x515A6Cu;
            // 0x515a6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515A70u;
        goto label_515a70;
    }
    ctx->pc = 0x515A68u;
    SET_GPR_U32(ctx, 31, 0x515A70u);
    ctx->pc = 0x515A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515A68u;
            // 0x515a6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515A70u; }
        if (ctx->pc != 0x515A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515A70u; }
        if (ctx->pc != 0x515A70u) { return; }
    }
    ctx->pc = 0x515A70u;
label_515a70:
    // 0x515a70: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515a70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515a74:
    // 0x515a74: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x515a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515a78:
    // 0x515a78: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x515a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515a7c:
    // 0x515a7c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x515a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_515a80:
    // 0x515a80: 0x8042ffff  lb          $v0, -0x1($v0)
    ctx->pc = 0x515a80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
label_515a84:
    // 0x515a84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x515a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_515a88:
    // 0x515a88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_515a8c:
    if (ctx->pc == 0x515A8Cu) {
        ctx->pc = 0x515A8Cu;
            // 0x515a8c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x515A90u;
        goto label_515a90;
    }
    ctx->pc = 0x515A88u;
    {
        const bool branch_taken_0x515a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x515a88) {
            ctx->pc = 0x515A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515A88u;
            // 0x515a8c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515A9Cu;
            goto label_515a9c;
        }
    }
    ctx->pc = 0x515A90u;
label_515a90:
    // 0x515a90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x515a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_515a94:
    // 0x515a94: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x515a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515a98:
    // 0x515a98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x515a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_515a9c:
    // 0x515a9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515aa0:
    // 0x515aa0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x515aa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_515aa4:
    // 0x515aa4: 0x0  nop
    ctx->pc = 0x515aa4u;
    // NOP
label_515aa8:
    // 0x515aa8: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x515aa8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_515aac:
    // 0x515aac: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x515aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515ab0:
    // 0x515ab0: 0x0  nop
    ctx->pc = 0x515ab0u;
    // NOP
label_515ab4:
    // 0x515ab4: 0x0  nop
    ctx->pc = 0x515ab4u;
    // NOP
label_515ab8:
    // 0x515ab8: 0xc1425a8  jal         func_5096A0
label_515abc:
    if (ctx->pc == 0x515ABCu) {
        ctx->pc = 0x515ABCu;
            // 0x515abc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515AC0u;
        goto label_515ac0;
    }
    ctx->pc = 0x515AB8u;
    SET_GPR_U32(ctx, 31, 0x515AC0u);
    ctx->pc = 0x515ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515AB8u;
            // 0x515abc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515AC0u; }
        if (ctx->pc != 0x515AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515AC0u; }
        if (ctx->pc != 0x515AC0u) { return; }
    }
    ctx->pc = 0x515AC0u;
label_515ac0:
    // 0x515ac0: 0x1000008e  b           . + 4 + (0x8E << 2)
label_515ac4:
    if (ctx->pc == 0x515AC4u) {
        ctx->pc = 0x515AC8u;
        goto label_515ac8;
    }
    ctx->pc = 0x515AC0u;
    {
        const bool branch_taken_0x515ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x515ac0) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515AC8u;
label_515ac8:
    // 0x515ac8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515acc:
    // 0x515acc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515accu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_515ad0:
    // 0x515ad0: 0xc142520  jal         func_509480
label_515ad4:
    if (ctx->pc == 0x515AD4u) {
        ctx->pc = 0x515AD4u;
            // 0x515ad4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515AD8u;
        goto label_515ad8;
    }
    ctx->pc = 0x515AD0u;
    SET_GPR_U32(ctx, 31, 0x515AD8u);
    ctx->pc = 0x515AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515AD0u;
            // 0x515ad4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515AD8u; }
        if (ctx->pc != 0x515AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515AD8u; }
        if (ctx->pc != 0x515AD8u) { return; }
    }
    ctx->pc = 0x515AD8u;
label_515ad8:
    // 0x515ad8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515adc:
    // 0x515adc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x515adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_515ae0:
    // 0x515ae0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x515ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515ae4:
    // 0x515ae4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x515ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515ae8:
    // 0x515ae8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x515ae8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515aec:
    // 0x515aec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x515aecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_515af0:
    // 0x515af0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_515af4:
    if (ctx->pc == 0x515AF4u) {
        ctx->pc = 0x515AF4u;
            // 0x515af4: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x515AF8u;
        goto label_515af8;
    }
    ctx->pc = 0x515AF0u;
    {
        const bool branch_taken_0x515af0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x515AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515AF0u;
            // 0x515af4: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x515af0) {
            ctx->pc = 0x515B10u;
            goto label_515b10;
        }
    }
    ctx->pc = 0x515AF8u;
label_515af8:
    // 0x515af8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x515af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_515afc:
    // 0x515afc: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x515afcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_515b00:
    // 0x515b00: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515b00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515b04:
    // 0x515b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x515b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_515b08:
    // 0x515b08: 0x10000002  b           . + 4 + (0x2 << 2)
label_515b0c:
    if (ctx->pc == 0x515B0Cu) {
        ctx->pc = 0x515B0Cu;
            // 0x515b0c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x515B10u;
        goto label_515b10;
    }
    ctx->pc = 0x515B08u;
    {
        const bool branch_taken_0x515b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515B08u;
            // 0x515b0c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515b08) {
            ctx->pc = 0x515B14u;
            goto label_515b14;
        }
    }
    ctx->pc = 0x515B10u;
label_515b10:
    // 0x515b10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x515b10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_515b14:
    // 0x515b14: 0x10600079  beqz        $v1, . + 4 + (0x79 << 2)
label_515b18:
    if (ctx->pc == 0x515B18u) {
        ctx->pc = 0x515B1Cu;
        goto label_515b1c;
    }
    ctx->pc = 0x515B14u;
    {
        const bool branch_taken_0x515b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x515b14) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515B1Cu;
label_515b1c:
    // 0x515b1c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x515b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_515b20:
    // 0x515b20: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x515b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_515b24:
    // 0x515b24: 0x10620075  beq         $v1, $v0, . + 4 + (0x75 << 2)
label_515b28:
    if (ctx->pc == 0x515B28u) {
        ctx->pc = 0x515B2Cu;
        goto label_515b2c;
    }
    ctx->pc = 0x515B24u;
    {
        const bool branch_taken_0x515b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x515b24) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515B2Cu;
label_515b2c:
    // 0x515b2c: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x515b2cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515b30:
    // 0x515b30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x515b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_515b34:
    // 0x515b34: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x515b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515b38:
    // 0x515b38: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x515b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_515b3c:
    // 0x515b3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515b3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515b40:
    // 0x515b40: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515b40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_515b44:
    // 0x515b44: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x515b44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_515b48:
    // 0x515b48: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x515b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_515b4c:
    // 0x515b4c: 0x8047000e  lb          $a3, 0xE($v0)
    ctx->pc = 0x515b4cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 14)));
label_515b50:
    // 0x515b50: 0xc4740000  lwc1        $f20, 0x0($v1)
    ctx->pc = 0x515b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515b54:
    // 0x515b54: 0x8446000c  lh          $a2, 0xC($v0)
    ctx->pc = 0x515b54u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
label_515b58:
    // 0x515b58: 0xc1425e0  jal         func_509780
label_515b5c:
    if (ctx->pc == 0x515B5Cu) {
        ctx->pc = 0x515B5Cu;
            // 0x515b5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515B60u;
        goto label_515b60;
    }
    ctx->pc = 0x515B58u;
    SET_GPR_U32(ctx, 31, 0x515B60u);
    ctx->pc = 0x515B5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515B58u;
            // 0x515b5c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515B60u; }
        if (ctx->pc != 0x515B60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515B60u; }
        if (ctx->pc != 0x515B60u) { return; }
    }
    ctx->pc = 0x515B60u;
label_515b60:
    // 0x515b60: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515b60u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515b64:
    // 0x515b64: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x515b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515b68:
    // 0x515b68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x515b68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515b6c:
    // 0x515b6c: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x515b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_515b70:
    // 0x515b70: 0x8062fff7  lb          $v0, -0x9($v1)
    ctx->pc = 0x515b70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967287)));
label_515b74:
    // 0x515b74: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x515b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_515b78:
    // 0x515b78: 0x14400060  bnez        $v0, . + 4 + (0x60 << 2)
label_515b7c:
    if (ctx->pc == 0x515B7Cu) {
        ctx->pc = 0x515B80u;
        goto label_515b80;
    }
    ctx->pc = 0x515B78u;
    {
        const bool branch_taken_0x515b78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x515b78) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515B80u;
label_515b80:
    // 0x515b80: 0x8062ffff  lb          $v0, -0x1($v1)
    ctx->pc = 0x515b80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967295)));
label_515b84:
    // 0x515b84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x515b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_515b88:
    // 0x515b88: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_515b8c:
    if (ctx->pc == 0x515B8Cu) {
        ctx->pc = 0x515B8Cu;
            // 0x515b8c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->pc = 0x515B90u;
        goto label_515b90;
    }
    ctx->pc = 0x515B88u;
    {
        const bool branch_taken_0x515b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x515b88) {
            ctx->pc = 0x515B8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515B88u;
            // 0x515b8c: 0x3c024000  lui         $v0, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515B9Cu;
            goto label_515b9c;
        }
    }
    ctx->pc = 0x515B90u;
label_515b90:
    // 0x515b90: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x515b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_515b94:
    // 0x515b94: 0xc454a470  lwc1        $f20, -0x5B90($v0)
    ctx->pc = 0x515b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943856)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515b98:
    // 0x515b98: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x515b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_515b9c:
    // 0x515b9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x515b9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_515ba0:
    // 0x515ba0: 0x0  nop
    ctx->pc = 0x515ba0u;
    // NOP
label_515ba4:
    // 0x515ba4: 0x4600a343  div.s       $f13, $f20, $f0
    ctx->pc = 0x515ba4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[13] = ctx->f[20] / ctx->f[0];
label_515ba8:
    // 0x515ba8: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x515ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515bac:
    // 0x515bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515bb0:
    // 0x515bb0: 0x0  nop
    ctx->pc = 0x515bb0u;
    // NOP
label_515bb4:
    // 0x515bb4: 0x0  nop
    ctx->pc = 0x515bb4u;
    // NOP
label_515bb8:
    // 0x515bb8: 0xc1425a8  jal         func_5096A0
label_515bbc:
    if (ctx->pc == 0x515BBCu) {
        ctx->pc = 0x515BBCu;
            // 0x515bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515BC0u;
        goto label_515bc0;
    }
    ctx->pc = 0x515BB8u;
    SET_GPR_U32(ctx, 31, 0x515BC0u);
    ctx->pc = 0x515BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515BB8u;
            // 0x515bbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515BC0u; }
        if (ctx->pc != 0x515BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515BC0u; }
        if (ctx->pc != 0x515BC0u) { return; }
    }
    ctx->pc = 0x515BC0u;
label_515bc0:
    // 0x515bc0: 0x1000004e  b           . + 4 + (0x4E << 2)
label_515bc4:
    if (ctx->pc == 0x515BC4u) {
        ctx->pc = 0x515BC8u;
        goto label_515bc8;
    }
    ctx->pc = 0x515BC0u;
    {
        const bool branch_taken_0x515bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x515bc0) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515BC8u;
label_515bc8:
    // 0x515bc8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515bcc:
    // 0x515bcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_515bd0:
    // 0x515bd0: 0xc142520  jal         func_509480
label_515bd4:
    if (ctx->pc == 0x515BD4u) {
        ctx->pc = 0x515BD4u;
            // 0x515bd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515BD8u;
        goto label_515bd8;
    }
    ctx->pc = 0x515BD0u;
    SET_GPR_U32(ctx, 31, 0x515BD8u);
    ctx->pc = 0x515BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515BD0u;
            // 0x515bd4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515BD8u; }
        if (ctx->pc != 0x515BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515BD8u; }
        if (ctx->pc != 0x515BD8u) { return; }
    }
    ctx->pc = 0x515BD8u;
label_515bd8:
    // 0x515bd8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515bdc:
    // 0x515bdc: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x515bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_515be0:
    // 0x515be0: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x515be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515be4:
    // 0x515be4: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x515be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515be8:
    // 0x515be8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x515be8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515bec:
    // 0x515bec: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x515becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_515bf0:
    // 0x515bf0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_515bf4:
    if (ctx->pc == 0x515BF4u) {
        ctx->pc = 0x515BF4u;
            // 0x515bf4: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x515BF8u;
        goto label_515bf8;
    }
    ctx->pc = 0x515BF0u;
    {
        const bool branch_taken_0x515bf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x515BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515BF0u;
            // 0x515bf4: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x515bf0) {
            ctx->pc = 0x515C10u;
            goto label_515c10;
        }
    }
    ctx->pc = 0x515BF8u;
label_515bf8:
    // 0x515bf8: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x515bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_515bfc:
    // 0x515bfc: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x515bfcu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_515c00:
    // 0x515c00: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515c00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515c04:
    // 0x515c04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x515c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_515c08:
    // 0x515c08: 0x10000002  b           . + 4 + (0x2 << 2)
label_515c0c:
    if (ctx->pc == 0x515C0Cu) {
        ctx->pc = 0x515C0Cu;
            // 0x515c0c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x515C10u;
        goto label_515c10;
    }
    ctx->pc = 0x515C08u;
    {
        const bool branch_taken_0x515c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515C08u;
            // 0x515c0c: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515c08) {
            ctx->pc = 0x515C14u;
            goto label_515c14;
        }
    }
    ctx->pc = 0x515C10u;
label_515c10:
    // 0x515c10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x515c10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_515c14:
    // 0x515c14: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_515c18:
    if (ctx->pc == 0x515C18u) {
        ctx->pc = 0x515C1Cu;
        goto label_515c1c;
    }
    ctx->pc = 0x515C14u;
    {
        const bool branch_taken_0x515c14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x515c14) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515C1Cu;
label_515c1c:
    // 0x515c1c: 0x8e430070  lw          $v1, 0x70($s2)
    ctx->pc = 0x515c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
label_515c20:
    // 0x515c20: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x515c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_515c24:
    // 0x515c24: 0x10620035  beq         $v1, $v0, . + 4 + (0x35 << 2)
label_515c28:
    if (ctx->pc == 0x515C28u) {
        ctx->pc = 0x515C2Cu;
        goto label_515c2c;
    }
    ctx->pc = 0x515C24u;
    {
        const bool branch_taken_0x515c24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x515c24) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515C2Cu;
label_515c2c:
    // 0x515c2c: 0x82460074  lb          $a2, 0x74($s2)
    ctx->pc = 0x515c2cu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515c30:
    // 0x515c30: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x515c30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_515c34:
    // 0x515c34: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x515c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515c38:
    // 0x515c38: 0x2463a4a0  addiu       $v1, $v1, -0x5B60
    ctx->pc = 0x515c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943904));
label_515c3c:
    // 0x515c3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515c40:
    // 0x515c40: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x515c40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_515c44:
    // 0x515c44: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x515c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_515c48:
    // 0x515c48: 0x80470016  lb          $a3, 0x16($v0)
    ctx->pc = 0x515c48u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
label_515c4c:
    // 0x515c4c: 0x84460014  lh          $a2, 0x14($v0)
    ctx->pc = 0x515c4cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
label_515c50:
    // 0x515c50: 0xc46c0000  lwc1        $f12, 0x0($v1)
    ctx->pc = 0x515c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515c54:
    // 0x515c54: 0xc1425e0  jal         func_509780
label_515c58:
    if (ctx->pc == 0x515C58u) {
        ctx->pc = 0x515C58u;
            // 0x515c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515C5Cu;
        goto label_515c5c;
    }
    ctx->pc = 0x515C54u;
    SET_GPR_U32(ctx, 31, 0x515C5Cu);
    ctx->pc = 0x515C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515C54u;
            // 0x515c58: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509780u;
    if (runtime->hasFunction(0x509780u)) {
        auto targetFn = runtime->lookupFunction(0x509780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515C5Cu; }
        if (ctx->pc != 0x515C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509780_0x509780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515C5Cu; }
        if (ctx->pc != 0x515C5Cu) { return; }
    }
    ctx->pc = 0x515C5Cu;
label_515c5c:
    // 0x515c5c: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515c5cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515c60:
    // 0x515c60: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x515c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_515c64:
    // 0x515c64: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x515c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515c68:
    // 0x515c68: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x515c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_515c6c:
    // 0x515c6c: 0x8042fff7  lb          $v0, -0x9($v0)
    ctx->pc = 0x515c6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967287)));
label_515c70:
    // 0x515c70: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x515c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_515c74:
    // 0x515c74: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
label_515c78:
    if (ctx->pc == 0x515C78u) {
        ctx->pc = 0x515C7Cu;
        goto label_515c7c;
    }
    ctx->pc = 0x515C74u;
    {
        const bool branch_taken_0x515c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x515c74) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515C7Cu;
label_515c7c:
    // 0x515c7c: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x515c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_515c80:
    // 0x515c80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515c80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515c84:
    // 0x515c84: 0xc46c0010  lwc1        $f12, 0x10($v1)
    ctx->pc = 0x515c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515c88:
    // 0x515c88: 0xc44da478  lwc1        $f13, -0x5B88($v0)
    ctx->pc = 0x515c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_515c8c:
    // 0x515c8c: 0xc1425a8  jal         func_5096A0
label_515c90:
    if (ctx->pc == 0x515C90u) {
        ctx->pc = 0x515C90u;
            // 0x515c90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515C94u;
        goto label_515c94;
    }
    ctx->pc = 0x515C8Cu;
    SET_GPR_U32(ctx, 31, 0x515C94u);
    ctx->pc = 0x515C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515C8Cu;
            // 0x515c90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x5096A0u;
    if (runtime->hasFunction(0x5096A0u)) {
        auto targetFn = runtime->lookupFunction(0x5096A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515C94u; }
        if (ctx->pc != 0x515C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_005096A0_0x5096a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515C94u; }
        if (ctx->pc != 0x515C94u) { return; }
    }
    ctx->pc = 0x515C94u;
label_515c94:
    // 0x515c94: 0x10000019  b           . + 4 + (0x19 << 2)
label_515c98:
    if (ctx->pc == 0x515C98u) {
        ctx->pc = 0x515C9Cu;
        goto label_515c9c;
    }
    ctx->pc = 0x515C94u;
    {
        const bool branch_taken_0x515c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x515c94) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515C9Cu;
label_515c9c:
    // 0x515c9c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515c9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515ca0:
    // 0x515ca0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x515ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_515ca4:
    // 0x515ca4: 0xc142520  jal         func_509480
label_515ca8:
    if (ctx->pc == 0x515CA8u) {
        ctx->pc = 0x515CA8u;
            // 0x515ca8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515CACu;
        goto label_515cac;
    }
    ctx->pc = 0x515CA4u;
    SET_GPR_U32(ctx, 31, 0x515CACu);
    ctx->pc = 0x515CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515CA4u;
            // 0x515ca8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x509480u;
    if (runtime->hasFunction(0x509480u)) {
        auto targetFn = runtime->lookupFunction(0x509480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515CACu; }
        if (ctx->pc != 0x515CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509480_0x509480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515CACu; }
        if (ctx->pc != 0x515CACu) { return; }
    }
    ctx->pc = 0x515CACu;
label_515cac:
    // 0x515cac: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515cb0:
    // 0x515cb0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x515cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_515cb4:
    // 0x515cb4: 0xc640005c  lwc1        $f0, 0x5C($s2)
    ctx->pc = 0x515cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515cb8:
    // 0x515cb8: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x515cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515cbc:
    // 0x515cbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x515cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515cc0:
    // 0x515cc0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x515cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_515cc4:
    // 0x515cc4: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_515cc8:
    if (ctx->pc == 0x515CC8u) {
        ctx->pc = 0x515CC8u;
            // 0x515cc8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->pc = 0x515CCCu;
        goto label_515ccc;
    }
    ctx->pc = 0x515CC4u;
    {
        const bool branch_taken_0x515cc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x515CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515CC4u;
            // 0x515cc8: 0xe640005c  swc1        $f0, 0x5C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x515cc4) {
            ctx->pc = 0x515CE4u;
            goto label_515ce4;
        }
    }
    ctx->pc = 0x515CCCu;
label_515ccc:
    // 0x515ccc: 0xae40005c  sw          $zero, 0x5C($s2)
    ctx->pc = 0x515cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 92), GPR_U32(ctx, 0));
label_515cd0:
    // 0x515cd0: 0x64030001  daddiu      $v1, $zero, 0x1
    ctx->pc = 0x515cd0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_515cd4:
    // 0x515cd4: 0x82420074  lb          $v0, 0x74($s2)
    ctx->pc = 0x515cd4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 116)));
label_515cd8:
    // 0x515cd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x515cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_515cdc:
    // 0x515cdc: 0x10000002  b           . + 4 + (0x2 << 2)
label_515ce0:
    if (ctx->pc == 0x515CE0u) {
        ctx->pc = 0x515CE0u;
            // 0x515ce0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x515CE4u;
        goto label_515ce4;
    }
    ctx->pc = 0x515CDCu;
    {
        const bool branch_taken_0x515cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515CDCu;
            // 0x515ce0: 0xa2420074  sb          $v0, 0x74($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515cdc) {
            ctx->pc = 0x515CE8u;
            goto label_515ce8;
        }
    }
    ctx->pc = 0x515CE4u;
label_515ce4:
    // 0x515ce4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x515ce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_515ce8:
    // 0x515ce8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_515cec:
    if (ctx->pc == 0x515CECu) {
        ctx->pc = 0x515CF0u;
        goto label_515cf0;
    }
    ctx->pc = 0x515CE8u;
    {
        const bool branch_taken_0x515ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x515ce8) {
            ctx->pc = 0x515CFCu;
            goto label_515cfc;
        }
    }
    ctx->pc = 0x515CF0u;
label_515cf0:
    // 0x515cf0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515cf4:
    // 0x515cf4: 0xc142584  jal         func_509610
label_515cf8:
    if (ctx->pc == 0x515CF8u) {
        ctx->pc = 0x515CF8u;
            // 0x515cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515CFCu;
        goto label_515cfc;
    }
    ctx->pc = 0x515CF4u;
    SET_GPR_U32(ctx, 31, 0x515CFCu);
    ctx->pc = 0x515CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515CF4u;
            // 0x515cf8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509610u;
    if (runtime->hasFunction(0x509610u)) {
        auto targetFn = runtime->lookupFunction(0x509610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515CFCu; }
        if (ctx->pc != 0x515CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509610_0x509610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515CFCu; }
        if (ctx->pc != 0x515CFCu) { return; }
    }
    ctx->pc = 0x515CFCu;
label_515cfc:
    // 0x515cfc: 0x8e220da0  lw          $v0, 0xDA0($s1)
    ctx->pc = 0x515cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3488)));
label_515d00:
    // 0x515d00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x515d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_515d04:
    // 0x515d04: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_515d08:
    if (ctx->pc == 0x515D08u) {
        ctx->pc = 0x515D08u;
            // 0x515d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515D0Cu;
        goto label_515d0c;
    }
    ctx->pc = 0x515D04u;
    {
        const bool branch_taken_0x515d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x515d04) {
            ctx->pc = 0x515D08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515D04u;
            // 0x515d08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515D2Cu;
            goto label_515d2c;
        }
    }
    ctx->pc = 0x515D0Cu;
label_515d0c:
    // 0x515d0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x515d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_515d10:
    // 0x515d10: 0xc142654  jal         func_509950
label_515d14:
    if (ctx->pc == 0x515D14u) {
        ctx->pc = 0x515D14u;
            // 0x515d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515D18u;
        goto label_515d18;
    }
    ctx->pc = 0x515D10u;
    SET_GPR_U32(ctx, 31, 0x515D18u);
    ctx->pc = 0x515D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515D10u;
            // 0x515d14: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509950u;
    if (runtime->hasFunction(0x509950u)) {
        auto targetFn = runtime->lookupFunction(0x509950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D18u; }
        if (ctx->pc != 0x515D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509950_0x509950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D18u; }
        if (ctx->pc != 0x515D18u) { return; }
    }
    ctx->pc = 0x515D18u;
label_515d18:
    // 0x515d18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x515d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_515d1c:
    // 0x515d1c: 0xc07649c  jal         func_1D9270
label_515d20:
    if (ctx->pc == 0x515D20u) {
        ctx->pc = 0x515D20u;
            // 0x515d20: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x515D24u;
        goto label_515d24;
    }
    ctx->pc = 0x515D1Cu;
    SET_GPR_U32(ctx, 31, 0x515D24u);
    ctx->pc = 0x515D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515D1Cu;
            // 0x515d20: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D9270u;
    if (runtime->hasFunction(0x1D9270u)) {
        auto targetFn = runtime->lookupFunction(0x1D9270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D24u; }
        if (ctx->pc != 0x515D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D9270_0x1d9270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D24u; }
        if (ctx->pc != 0x515D24u) { return; }
    }
    ctx->pc = 0x515D24u;
label_515d24:
    // 0x515d24: 0x10000018  b           . + 4 + (0x18 << 2)
label_515d28:
    if (ctx->pc == 0x515D28u) {
        ctx->pc = 0x515D28u;
            // 0x515d28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x515D2Cu;
        goto label_515d2c;
    }
    ctx->pc = 0x515D24u;
    {
        const bool branch_taken_0x515d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515D24u;
            // 0x515d28: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515d24) {
            ctx->pc = 0x515D88u;
            goto label_515d88;
        }
    }
    ctx->pc = 0x515D2Cu;
label_515d2c:
    // 0x515d2c: 0xc0c1418  jal         func_305060
label_515d30:
    if (ctx->pc == 0x515D30u) {
        ctx->pc = 0x515D34u;
        goto label_515d34;
    }
    ctx->pc = 0x515D2Cu;
    SET_GPR_U32(ctx, 31, 0x515D34u);
    ctx->pc = 0x305060u;
    if (runtime->hasFunction(0x305060u)) {
        auto targetFn = runtime->lookupFunction(0x305060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D34u; }
        if (ctx->pc != 0x515D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305060_0x305060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D34u; }
        if (ctx->pc != 0x515D34u) { return; }
    }
    ctx->pc = 0x515D34u;
label_515d34:
    // 0x515d34: 0x8e240db0  lw          $a0, 0xDB0($s1)
    ctx->pc = 0x515d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3504)));
label_515d38:
    // 0x515d38: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x515d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_515d3c:
    // 0x515d3c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_515d40:
    if (ctx->pc == 0x515D40u) {
        ctx->pc = 0x515D44u;
        goto label_515d44;
    }
    ctx->pc = 0x515D3Cu;
    {
        const bool branch_taken_0x515d3c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x515d3c) {
            ctx->pc = 0x515D50u;
            goto label_515d50;
        }
    }
    ctx->pc = 0x515D44u;
label_515d44:
    // 0x515d44: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x515d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_515d48:
    // 0x515d48: 0x1483000e  bne         $a0, $v1, . + 4 + (0xE << 2)
label_515d4c:
    if (ctx->pc == 0x515D4Cu) {
        ctx->pc = 0x515D50u;
        goto label_515d50;
    }
    ctx->pc = 0x515D48u;
    {
        const bool branch_taken_0x515d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x515d48) {
            ctx->pc = 0x515D84u;
            goto label_515d84;
        }
    }
    ctx->pc = 0x515D50u;
label_515d50:
    // 0x515d50: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x515d50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_515d54:
    // 0x515d54: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x515d54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_515d58:
    // 0x515d58: 0xc04cc04  jal         func_133010
label_515d5c:
    if (ctx->pc == 0x515D5Cu) {
        ctx->pc = 0x515D5Cu;
            // 0x515d5c: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
        ctx->pc = 0x515D60u;
        goto label_515d60;
    }
    ctx->pc = 0x515D58u;
    SET_GPR_U32(ctx, 31, 0x515D60u);
    ctx->pc = 0x515D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515D58u;
            // 0x515d5c: 0x24a5bf80  addiu       $a1, $a1, -0x4080 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950784));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D60u; }
        if (ctx->pc != 0x515D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515D60u; }
        if (ctx->pc != 0x515D60u) { return; }
    }
    ctx->pc = 0x515D60u;
label_515d60:
    // 0x515d60: 0xae200698  sw          $zero, 0x698($s1)
    ctx->pc = 0x515d60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 0));
label_515d64:
    // 0x515d64: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x515d64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_515d68:
    // 0x515d68: 0xae230db8  sw          $v1, 0xDB8($s1)
    ctx->pc = 0x515d68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 3));
label_515d6c:
    // 0x515d6c: 0x8e230af0  lw          $v1, 0xAF0($s1)
    ctx->pc = 0x515d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2800)));
label_515d70:
    // 0x515d70: 0xae230afc  sw          $v1, 0xAFC($s1)
    ctx->pc = 0x515d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2812), GPR_U32(ctx, 3));
label_515d74:
    // 0x515d74: 0x8e230af4  lw          $v1, 0xAF4($s1)
    ctx->pc = 0x515d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2804)));
label_515d78:
    // 0x515d78: 0xae230b00  sw          $v1, 0xB00($s1)
    ctx->pc = 0x515d78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2816), GPR_U32(ctx, 3));
label_515d7c:
    // 0x515d7c: 0x8e230af8  lw          $v1, 0xAF8($s1)
    ctx->pc = 0x515d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2808)));
label_515d80:
    // 0x515d80: 0xae230b04  sw          $v1, 0xB04($s1)
    ctx->pc = 0x515d80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2820), GPR_U32(ctx, 3));
label_515d84:
    // 0x515d84: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x515d84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_515d88:
    // 0x515d88: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x515d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515d8c:
    // 0x515d8c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x515d8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_515d90:
    // 0x515d90: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x515d90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_515d94:
    // 0x515d94: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x515d94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_515d98:
    // 0x515d98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x515d98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_515d9c:
    // 0x515d9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x515d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_515da0:
    // 0x515da0: 0x3e00008  jr          $ra
label_515da4:
    if (ctx->pc == 0x515DA4u) {
        ctx->pc = 0x515DA4u;
            // 0x515da4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x515DA8u;
        goto label_515da8;
    }
    ctx->pc = 0x515DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x515DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515DA0u;
            // 0x515da4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x515DA8u;
label_515da8:
    // 0x515da8: 0x0  nop
    ctx->pc = 0x515da8u;
    // NOP
label_515dac:
    // 0x515dac: 0x0  nop
    ctx->pc = 0x515dacu;
    // NOP
label_515db0:
    // 0x515db0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x515db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_515db4:
    // 0x515db4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x515db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_515db8:
    // 0x515db8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x515db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_515dbc:
    // 0x515dbc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x515dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_515dc0:
    // 0x515dc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x515dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_515dc4:
    // 0x515dc4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x515dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_515dc8:
    // 0x515dc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x515dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_515dcc:
    // 0x515dcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x515dccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_515dd0:
    // 0x515dd0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x515dd0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_515dd4:
    // 0x515dd4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x515dd4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_515dd8:
    // 0x515dd8: 0x8cb10024  lw          $s1, 0x24($a1)
    ctx->pc = 0x515dd8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
label_515ddc:
    // 0x515ddc: 0x8cb0002c  lw          $s0, 0x2C($a1)
    ctx->pc = 0x515ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_515de0:
    // 0x515de0: 0xc142760  jal         func_509D80
label_515de4:
    if (ctx->pc == 0x515DE4u) {
        ctx->pc = 0x515DE4u;
            // 0x515de4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515DE8u;
        goto label_515de8;
    }
    ctx->pc = 0x515DE0u;
    SET_GPR_U32(ctx, 31, 0x515DE8u);
    ctx->pc = 0x515DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515DE0u;
            // 0x515de4: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509D80u;
    if (runtime->hasFunction(0x509D80u)) {
        auto targetFn = runtime->lookupFunction(0x509D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515DE8u; }
        if (ctx->pc != 0x515DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509D80_0x509d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515DE8u; }
        if (ctx->pc != 0x515DE8u) { return; }
    }
    ctx->pc = 0x515DE8u;
label_515de8:
    // 0x515de8: 0x8e630068  lw          $v1, 0x68($s3)
    ctx->pc = 0x515de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
label_515dec:
    // 0x515dec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x515decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515df0:
    // 0x515df0: 0x54620014  bnel        $v1, $v0, . + 4 + (0x14 << 2)
label_515df4:
    if (ctx->pc == 0x515DF4u) {
        ctx->pc = 0x515DF4u;
            // 0x515df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515DF8u;
        goto label_515df8;
    }
    ctx->pc = 0x515DF0u;
    {
        const bool branch_taken_0x515df0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x515df0) {
            ctx->pc = 0x515DF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515DF0u;
            // 0x515df4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515E44u;
            goto label_515e44;
        }
    }
    ctx->pc = 0x515DF8u;
label_515df8:
    // 0x515df8: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x515df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_515dfc:
    // 0x515dfc: 0xc04cc04  jal         func_133010
label_515e00:
    if (ctx->pc == 0x515E00u) {
        ctx->pc = 0x515E00u;
            // 0x515e00: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->pc = 0x515E04u;
        goto label_515e04;
    }
    ctx->pc = 0x515DFCu;
    SET_GPR_U32(ctx, 31, 0x515E04u);
    ctx->pc = 0x515E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515DFCu;
            // 0x515e00: 0x262502d0  addiu       $a1, $s1, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E04u; }
        if (ctx->pc != 0x515E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E04u; }
        if (ctx->pc != 0x515E04u) { return; }
    }
    ctx->pc = 0x515E04u;
label_515e04:
    // 0x515e04: 0x8e320d74  lw          $s2, 0xD74($s1)
    ctx->pc = 0x515e04u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3444)));
label_515e08:
    // 0x515e08: 0xc62202c8  lwc1        $f2, 0x2C8($s1)
    ctx->pc = 0x515e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_515e0c:
    // 0x515e0c: 0xc62102c4  lwc1        $f1, 0x2C4($s1)
    ctx->pc = 0x515e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515e10:
    // 0x515e10: 0xc62002c0  lwc1        $f0, 0x2C0($s1)
    ctx->pc = 0x515e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515e14:
    // 0x515e14: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x515e14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_515e18:
    // 0x515e18: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x515e18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
label_515e1c:
    // 0x515e1c: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x515e1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_515e20:
    // 0x515e20: 0xe7a20078  swc1        $f2, 0x78($sp)
    ctx->pc = 0x515e20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_515e24:
    // 0x515e24: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x515e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_515e28:
    // 0x515e28: 0xc0a5444  jal         func_295110
label_515e2c:
    if (ctx->pc == 0x515E2Cu) {
        ctx->pc = 0x515E2Cu;
            // 0x515e2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x515E30u;
        goto label_515e30;
    }
    ctx->pc = 0x515E28u;
    SET_GPR_U32(ctx, 31, 0x515E30u);
    ctx->pc = 0x515E2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515E28u;
            // 0x515e2c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295110u;
    if (runtime->hasFunction(0x295110u)) {
        auto targetFn = runtime->lookupFunction(0x295110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E30u; }
        if (ctx->pc != 0x515E30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295110_0x295110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E30u; }
        if (ctx->pc != 0x515E30u) { return; }
    }
    ctx->pc = 0x515E30u;
label_515e30:
    // 0x515e30: 0xae4002d0  sw          $zero, 0x2D0($s2)
    ctx->pc = 0x515e30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 720), GPR_U32(ctx, 0));
label_515e34:
    // 0x515e34: 0xae4002d4  sw          $zero, 0x2D4($s2)
    ctx->pc = 0x515e34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 724), GPR_U32(ctx, 0));
label_515e38:
    // 0x515e38: 0xae4002d8  sw          $zero, 0x2D8($s2)
    ctx->pc = 0x515e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 728), GPR_U32(ctx, 0));
label_515e3c:
    // 0x515e3c: 0xae4002dc  sw          $zero, 0x2DC($s2)
    ctx->pc = 0x515e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 732), GPR_U32(ctx, 0));
label_515e40:
    // 0x515e40: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x515e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_515e44:
    // 0x515e44: 0xc1427ac  jal         func_509EB0
label_515e48:
    if (ctx->pc == 0x515E48u) {
        ctx->pc = 0x515E48u;
            // 0x515e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515E4Cu;
        goto label_515e4c;
    }
    ctx->pc = 0x515E44u;
    SET_GPR_U32(ctx, 31, 0x515E4Cu);
    ctx->pc = 0x515E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515E44u;
            // 0x515e48: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509EB0u;
    if (runtime->hasFunction(0x509EB0u)) {
        auto targetFn = runtime->lookupFunction(0x509EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E4Cu; }
        if (ctx->pc != 0x515E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509EB0_0x509eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E4Cu; }
        if (ctx->pc != 0x515E4Cu) { return; }
    }
    ctx->pc = 0x515E4Cu;
label_515e4c:
    // 0x515e4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x515e4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_515e50:
    // 0x515e50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x515e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_515e54:
    // 0x515e54: 0xc142504  jal         func_509410
label_515e58:
    if (ctx->pc == 0x515E58u) {
        ctx->pc = 0x515E58u;
            // 0x515e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x515E5Cu;
        goto label_515e5c;
    }
    ctx->pc = 0x515E54u;
    SET_GPR_U32(ctx, 31, 0x515E5Cu);
    ctx->pc = 0x515E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515E54u;
            // 0x515e58: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x509410u;
    if (runtime->hasFunction(0x509410u)) {
        auto targetFn = runtime->lookupFunction(0x509410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E5Cu; }
        if (ctx->pc != 0x515E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00509410_0x509410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515E5Cu; }
        if (ctx->pc != 0x515E5Cu) { return; }
    }
    ctx->pc = 0x515E5Cu;
label_515e5c:
    // 0x515e5c: 0x8e640070  lw          $a0, 0x70($s3)
    ctx->pc = 0x515e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_515e60:
    // 0x515e60: 0x28810006  slti        $at, $a0, 0x6
    ctx->pc = 0x515e60u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_515e64:
    // 0x515e64: 0x5020001c  beql        $at, $zero, . + 4 + (0x1C << 2)
label_515e68:
    if (ctx->pc == 0x515E68u) {
        ctx->pc = 0x515E68u;
            // 0x515e68: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->pc = 0x515E6Cu;
        goto label_515e6c;
    }
    ctx->pc = 0x515E64u;
    {
        const bool branch_taken_0x515e64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x515e64) {
            ctx->pc = 0x515E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515E64u;
            // 0x515e68: 0x26240580  addiu       $a0, $s1, 0x580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515ED8u;
            goto label_515ed8;
        }
    }
    ctx->pc = 0x515E6Cu;
label_515e6c:
    // 0x515e6c: 0x8e220d6c  lw          $v0, 0xD6C($s1)
    ctx->pc = 0x515e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_515e70:
    // 0x515e70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x515e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_515e74:
    // 0x515e74: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x515e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_515e78:
    // 0x515e78: 0x90420008  lbu         $v0, 0x8($v0)
    ctx->pc = 0x515e78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
label_515e7c:
    // 0x515e7c: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_515e80:
    if (ctx->pc == 0x515E80u) {
        ctx->pc = 0x515E80u;
            // 0x515e80: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->pc = 0x515E84u;
        goto label_515e84;
    }
    ctx->pc = 0x515E7Cu;
    {
        const bool branch_taken_0x515e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x515e7c) {
            ctx->pc = 0x515E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515E7Cu;
            // 0x515e80: 0x410c0  sll         $v0, $a0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515EA4u;
            goto label_515ea4;
        }
    }
    ctx->pc = 0x515E84u;
label_515e84:
    // 0x515e84: 0x56430003  bnel        $s2, $v1, . + 4 + (0x3 << 2)
label_515e88:
    if (ctx->pc == 0x515E88u) {
        ctx->pc = 0x515E88u;
            // 0x515e88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x515E8Cu;
        goto label_515e8c;
    }
    ctx->pc = 0x515E84u;
    {
        const bool branch_taken_0x515e84 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x515e84) {
            ctx->pc = 0x515E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515E84u;
            // 0x515e88: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515E94u;
            goto label_515e94;
        }
    }
    ctx->pc = 0x515E8Cu;
label_515e8c:
    // 0x515e8c: 0x10000004  b           . + 4 + (0x4 << 2)
label_515e90:
    if (ctx->pc == 0x515E90u) {
        ctx->pc = 0x515E90u;
            // 0x515e90: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x515E94u;
        goto label_515e94;
    }
    ctx->pc = 0x515E8Cu;
    {
        const bool branch_taken_0x515e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x515E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515E8Cu;
            // 0x515e90: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515e8c) {
            ctx->pc = 0x515EA0u;
            goto label_515ea0;
        }
    }
    ctx->pc = 0x515E94u;
label_515e94:
    // 0x515e94: 0x16420002  bne         $s2, $v0, . + 4 + (0x2 << 2)
label_515e98:
    if (ctx->pc == 0x515E98u) {
        ctx->pc = 0x515E9Cu;
        goto label_515e9c;
    }
    ctx->pc = 0x515E94u;
    {
        const bool branch_taken_0x515e94 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x515e94) {
            ctx->pc = 0x515EA0u;
            goto label_515ea0;
        }
    }
    ctx->pc = 0x515E9Cu;
label_515e9c:
    // 0x515e9c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x515e9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_515ea0:
    // 0x515ea0: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x515ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_515ea4:
    // 0x515ea4: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x515ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_515ea8:
    // 0x515ea8: 0x442821  addu        $a1, $v0, $a0
    ctx->pc = 0x515ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_515eac:
    // 0x515eac: 0x2463a4b0  addiu       $v1, $v1, -0x5B50
    ctx->pc = 0x515eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943920));
label_515eb0:
    // 0x515eb0: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x515eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_515eb4:
    // 0x515eb4: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x515eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_515eb8:
    // 0x515eb8: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x515eb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_515ebc:
    // 0x515ebc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x515ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_515ec0:
    // 0x515ec0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x515ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_515ec4:
    // 0x515ec4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x515ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_515ec8:
    // 0x515ec8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x515ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_515ecc:
    // 0x515ecc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x515eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515ed0:
    // 0x515ed0: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x515ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
label_515ed4:
    // 0x515ed4: 0x26240580  addiu       $a0, $s1, 0x580
    ctx->pc = 0x515ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1408));
label_515ed8:
    // 0x515ed8: 0xc0ab808  jal         func_2AE020
label_515edc:
    if (ctx->pc == 0x515EDCu) {
        ctx->pc = 0x515EDCu;
            // 0x515edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x515EE0u;
        goto label_515ee0;
    }
    ctx->pc = 0x515ED8u;
    SET_GPR_U32(ctx, 31, 0x515EE0u);
    ctx->pc = 0x515EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515ED8u;
            // 0x515edc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE020u;
    if (runtime->hasFunction(0x2AE020u)) {
        auto targetFn = runtime->lookupFunction(0x2AE020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515EE0u; }
        if (ctx->pc != 0x515EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE020_0x2ae020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515EE0u; }
        if (ctx->pc != 0x515EE0u) { return; }
    }
    ctx->pc = 0x515EE0u;
label_515ee0:
    // 0x515ee0: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x515ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_515ee4:
    // 0x515ee4: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x515ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_515ee8:
    // 0x515ee8: 0xc075318  jal         func_1D4C60
label_515eec:
    if (ctx->pc == 0x515EECu) {
        ctx->pc = 0x515EECu;
            // 0x515eec: 0x24a5bf70  addiu       $a1, $a1, -0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
        ctx->pc = 0x515EF0u;
        goto label_515ef0;
    }
    ctx->pc = 0x515EE8u;
    SET_GPR_U32(ctx, 31, 0x515EF0u);
    ctx->pc = 0x515EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515EE8u;
            // 0x515eec: 0x24a5bf70  addiu       $a1, $a1, -0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4C60u;
    if (runtime->hasFunction(0x1D4C60u)) {
        auto targetFn = runtime->lookupFunction(0x1D4C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515EF0u; }
        if (ctx->pc != 0x515EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4C60_0x1d4c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515EF0u; }
        if (ctx->pc != 0x515EF0u) { return; }
    }
    ctx->pc = 0x515EF0u;
label_515ef0:
    // 0x515ef0: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x515ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_515ef4:
    // 0x515ef4: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x515ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_515ef8:
    // 0x515ef8: 0xc45503b8  lwc1        $f21, 0x3B8($v0)
    ctx->pc = 0x515ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_515efc:
    // 0x515efc: 0x24640060  addiu       $a0, $v1, 0x60
    ctx->pc = 0x515efcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_515f00:
    // 0x515f00: 0x24650080  addiu       $a1, $v1, 0x80
    ctx->pc = 0x515f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
label_515f04:
    // 0x515f04: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x515f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_515f08:
    // 0x515f08: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x515f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_515f0c:
    // 0x515f0c: 0xc45403b8  lwc1        $f20, 0x3B8($v0)
    ctx->pc = 0x515f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_515f10:
    // 0x515f10: 0xc0c6250  jal         func_318940
label_515f14:
    if (ctx->pc == 0x515F14u) {
        ctx->pc = 0x515F14u;
            // 0x515f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x515F18u;
        goto label_515f18;
    }
    ctx->pc = 0x515F10u;
    SET_GPR_U32(ctx, 31, 0x515F18u);
    ctx->pc = 0x515F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515F10u;
            // 0x515f14: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F18u; }
        if (ctx->pc != 0x515F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F18u; }
        if (ctx->pc != 0x515F18u) { return; }
    }
    ctx->pc = 0x515F18u;
label_515f18:
    // 0x515f18: 0x262207e0  addiu       $v0, $s1, 0x7E0
    ctx->pc = 0x515f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2016));
label_515f1c:
    // 0x515f1c: 0x26260560  addiu       $a2, $s1, 0x560
    ctx->pc = 0x515f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_515f20:
    // 0x515f20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x515f20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_515f24:
    // 0x515f24: 0x24440060  addiu       $a0, $v0, 0x60
    ctx->pc = 0x515f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_515f28:
    // 0x515f28: 0xc0c6250  jal         func_318940
label_515f2c:
    if (ctx->pc == 0x515F2Cu) {
        ctx->pc = 0x515F2Cu;
            // 0x515f2c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->pc = 0x515F30u;
        goto label_515f30;
    }
    ctx->pc = 0x515F28u;
    SET_GPR_U32(ctx, 31, 0x515F30u);
    ctx->pc = 0x515F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515F28u;
            // 0x515f2c: 0x24450080  addiu       $a1, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318940u;
    if (runtime->hasFunction(0x318940u)) {
        auto targetFn = runtime->lookupFunction(0x318940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F30u; }
        if (ctx->pc != 0x515F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318940_0x318940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F30u; }
        if (ctx->pc != 0x515F30u) { return; }
    }
    ctx->pc = 0x515F30u;
label_515f30:
    // 0x515f30: 0x26240560  addiu       $a0, $s1, 0x560
    ctx->pc = 0x515f30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1376));
label_515f34:
    // 0x515f34: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x515f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_515f38:
    // 0x515f38: 0xc075378  jal         func_1D4DE0
label_515f3c:
    if (ctx->pc == 0x515F3Cu) {
        ctx->pc = 0x515F3Cu;
            // 0x515f3c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->pc = 0x515F40u;
        goto label_515f40;
    }
    ctx->pc = 0x515F38u;
    SET_GPR_U32(ctx, 31, 0x515F40u);
    ctx->pc = 0x515F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515F38u;
            // 0x515f3c: 0x26260830  addiu       $a2, $s1, 0x830 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 2096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4DE0u;
    if (runtime->hasFunction(0x1D4DE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F40u; }
        if (ctx->pc != 0x515F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D4DE0_0x1d4de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F40u; }
        if (ctx->pc != 0x515F40u) { return; }
    }
    ctx->pc = 0x515F40u;
label_515f40:
    // 0x515f40: 0xc6210880  lwc1        $f1, 0x880($s1)
    ctx->pc = 0x515f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_515f44:
    // 0x515f44: 0x2624087c  addiu       $a0, $s1, 0x87C
    ctx->pc = 0x515f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2172));
label_515f48:
    // 0x515f48: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x515f48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_515f4c:
    // 0x515f4c: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x515f4cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_515f50:
    // 0x515f50: 0xc0c753c  jal         func_31D4F0
label_515f54:
    if (ctx->pc == 0x515F54u) {
        ctx->pc = 0x515F54u;
            // 0x515f54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x515F58u;
        goto label_515f58;
    }
    ctx->pc = 0x515F50u;
    SET_GPR_U32(ctx, 31, 0x515F58u);
    ctx->pc = 0x515F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515F50u;
            // 0x515f54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F58u; }
        if (ctx->pc != 0x515F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F58u; }
        if (ctx->pc != 0x515F58u) { return; }
    }
    ctx->pc = 0x515F58u;
label_515f58:
    // 0x515f58: 0x3c020066  lui         $v0, 0x66
    ctx->pc = 0x515f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)102 << 16));
label_515f5c:
    // 0x515f5c: 0x26230890  addiu       $v1, $s1, 0x890
    ctx->pc = 0x515f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2192));
label_515f60:
    // 0x515f60: 0xc44ea488  lwc1        $f14, -0x5B78($v0)
    ctx->pc = 0x515f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294943880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_515f64:
    // 0x515f64: 0xc62c0930  lwc1        $f12, 0x930($s1)
    ctx->pc = 0x515f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_515f68:
    // 0x515f68: 0xc62d0880  lwc1        $f13, 0x880($s1)
    ctx->pc = 0x515f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 2176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_515f6c:
    // 0x515f6c: 0xc0c753c  jal         func_31D4F0
label_515f70:
    if (ctx->pc == 0x515F70u) {
        ctx->pc = 0x515F70u;
            // 0x515f70: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->pc = 0x515F74u;
        goto label_515f74;
    }
    ctx->pc = 0x515F6Cu;
    SET_GPR_U32(ctx, 31, 0x515F74u);
    ctx->pc = 0x515F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x515F6Cu;
            // 0x515f70: 0x2464009c  addiu       $a0, $v1, 0x9C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 156));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D4F0u;
    if (runtime->hasFunction(0x31D4F0u)) {
        auto targetFn = runtime->lookupFunction(0x31D4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F74u; }
        if (ctx->pc != 0x515F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031D4F0_0x31d4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x515F74u; }
        if (ctx->pc != 0x515F74u) { return; }
    }
    ctx->pc = 0x515F74u;
label_515f74:
    // 0x515f74: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x515f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_515f78:
    // 0x515f78: 0x8c4389d0  lw          $v1, -0x7630($v0)
    ctx->pc = 0x515f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_515f7c:
    // 0x515f7c: 0x8c630084  lw          $v1, 0x84($v1)
    ctx->pc = 0x515f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_515f80:
    // 0x515f80: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x515f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_515f84:
    // 0x515f84: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_515f88:
    if (ctx->pc == 0x515F88u) {
        ctx->pc = 0x515F88u;
            // 0x515f88: 0x92050007  lbu         $a1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->pc = 0x515F8Cu;
        goto label_515f8c;
    }
    ctx->pc = 0x515F84u;
    {
        const bool branch_taken_0x515f84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x515F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515F84u;
            // 0x515f88: 0x92050007  lbu         $a1, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x515f84) {
            ctx->pc = 0x515F9Cu;
            goto label_515f9c;
        }
    }
    ctx->pc = 0x515F8Cu;
label_515f8c:
    // 0x515f8c: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x515f8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_515f90:
    // 0x515f90: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_515f94:
    if (ctx->pc == 0x515F94u) {
        ctx->pc = 0x515F94u;
            // 0x515f94: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->pc = 0x515F98u;
        goto label_515f98;
    }
    ctx->pc = 0x515F90u;
    {
        const bool branch_taken_0x515f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x515f90) {
            ctx->pc = 0x515F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x515F90u;
            // 0x515f94: 0x8e630070  lw          $v1, 0x70($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x515FA0u;
            goto label_515fa0;
        }
    }
    ctx->pc = 0x515F98u;
label_515f98:
    // 0x515f98: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x515f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_515f9c:
    // 0x515f9c: 0x8e630070  lw          $v1, 0x70($s3)
    ctx->pc = 0x515f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_515fa0:
    // 0x515fa0: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x515fa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_515fa4:
    // 0x515fa4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_515fa8:
    if (ctx->pc == 0x515FA8u) {
        ctx->pc = 0x515FACu;
        goto label_515fac;
    }
    ctx->pc = 0x515FA4u;
    {
        const bool branch_taken_0x515fa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x515fa4) {
            ctx->pc = 0x515FB0u;
            goto label_515fb0;
        }
    }
    ctx->pc = 0x515FACu;
label_515fac:
    // 0x515fac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x515facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_515fb0:
    // 0x515fb0: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x515fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_515fb4:
    // 0x515fb4: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x515fb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_515fb8:
    // 0x515fb8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_515fbc:
    if (ctx->pc == 0x515FBCu) {
        ctx->pc = 0x515FBCu;
            // 0x515fbc: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x515FC0u;
        goto label_515fc0;
    }
    ctx->pc = 0x515FB8u;
    {
        const bool branch_taken_0x515fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x515FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x515FB8u;
            // 0x515fbc: 0x306400ff  andi        $a0, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x515fb8) {
            ctx->pc = 0x515FC4u;
            goto label_515fc4;
        }
    }
    ctx->pc = 0x515FC0u;
label_515fc0:
    // 0x515fc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x515fc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_515fc4:
    // 0x515fc4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x515fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_515fc8:
    // 0x515fc8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x515fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_515fcc:
    // 0x515fcc: 0x32880  sll         $a1, $v1, 2
    ctx->pc = 0x515fccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_515fd0:
    // 0x515fd0: 0x26240320  addiu       $a0, $s1, 0x320
    ctx->pc = 0x515fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_515fd4:
    // 0x515fd4: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x515fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_515fd8:
    // 0x515fd8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x515fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_515fdc:
    // 0x515fdc: 0x244208a0  addiu       $v0, $v0, 0x8A0
    ctx->pc = 0x515fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2208));
label_515fe0:
    // 0x515fe0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x515fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_515fe4:
    // 0x515fe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x515fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_515fe8:
    // 0x515fe8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x515fe8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_515fec:
    // 0x515fec: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x515fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_515ff0:
    // 0x515ff0: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x515ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515ff4:
    // 0x515ff4: 0xe6200de0  swc1        $f0, 0xDE0($s1)
    ctx->pc = 0x515ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3552), bits); }
label_515ff8:
    // 0x515ff8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x515ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_515ffc:
    // 0x515ffc: 0xe6200de4  swc1        $f0, 0xDE4($s1)
    ctx->pc = 0x515ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3556), bits); }
label_516000:
    // 0x516000: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x516000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_516004:
    // 0x516004: 0xe6200de8  swc1        $f0, 0xDE8($s1)
    ctx->pc = 0x516004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3560), bits); }
label_516008:
    // 0x516008: 0xc60d0010  lwc1        $f13, 0x10($s0)
    ctx->pc = 0x516008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_51600c:
    // 0x51600c: 0xc04cbd8  jal         func_132F60
label_516010:
    if (ctx->pc == 0x516010u) {
        ctx->pc = 0x516010u;
            // 0x516010: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x516014u;
        goto label_516014;
    }
    ctx->pc = 0x51600Cu;
    SET_GPR_U32(ctx, 31, 0x516014u);
    ctx->pc = 0x516010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51600Cu;
            // 0x516010: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516014u; }
        if (ctx->pc != 0x516014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516014u; }
        if (ctx->pc != 0x516014u) { return; }
    }
    ctx->pc = 0x516014u;
label_516014:
    // 0x516014: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x516014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_516018:
    // 0x516018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x516018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_51601c:
    // 0x51601c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x51601cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_516020:
    // 0x516020: 0x26650010  addiu       $a1, $s3, 0x10
    ctx->pc = 0x516020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_516024:
    // 0x516024: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x516024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_516028:
    // 0x516028: 0xe6200690  swc1        $f0, 0x690($s1)
    ctx->pc = 0x516028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1680), bits); }
label_51602c:
    // 0x51602c: 0xae230698  sw          $v1, 0x698($s1)
    ctx->pc = 0x51602cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1688), GPR_U32(ctx, 3));
label_516030:
    // 0x516030: 0xc04cc04  jal         func_133010
label_516034:
    if (ctx->pc == 0x516034u) {
        ctx->pc = 0x516034u;
            // 0x516034: 0xae220db8  sw          $v0, 0xDB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x516038u;
        goto label_516038;
    }
    ctx->pc = 0x516030u;
    SET_GPR_U32(ctx, 31, 0x516038u);
    ctx->pc = 0x516034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516030u;
            // 0x516034: 0xae220db8  sw          $v0, 0xDB8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516038u; }
        if (ctx->pc != 0x516038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516038u; }
        if (ctx->pc != 0x516038u) { return; }
    }
    ctx->pc = 0x516038u;
label_516038:
    // 0x516038: 0x26840010  addiu       $a0, $s4, 0x10
    ctx->pc = 0x516038u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_51603c:
    // 0x51603c: 0xae800014  sw          $zero, 0x14($s4)
    ctx->pc = 0x51603cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 0));
label_516040:
    // 0x516040: 0xc04cc44  jal         func_133110
label_516044:
    if (ctx->pc == 0x516044u) {
        ctx->pc = 0x516044u;
            // 0x516044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x516048u;
        goto label_516048;
    }
    ctx->pc = 0x516040u;
    SET_GPR_U32(ctx, 31, 0x516048u);
    ctx->pc = 0x516044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516040u;
            // 0x516044: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133110u;
    if (runtime->hasFunction(0x133110u)) {
        auto targetFn = runtime->lookupFunction(0x133110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516048u; }
        if (ctx->pc != 0x516048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133110_0x133110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516048u; }
        if (ctx->pc != 0x516048u) { return; }
    }
    ctx->pc = 0x516048u;
label_516048:
    // 0x516048: 0xc62c0de4  lwc1        $f12, 0xDE4($s1)
    ctx->pc = 0x516048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_51604c:
    // 0x51604c: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x51604cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
label_516050:
    // 0x516050: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x516050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_516054:
    // 0x516054: 0xc04cc70  jal         func_1331C0
label_516058:
    if (ctx->pc == 0x516058u) {
        ctx->pc = 0x516058u;
            // 0x516058: 0x24a5bf70  addiu       $a1, $a1, -0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
        ctx->pc = 0x51605Cu;
        goto label_51605c;
    }
    ctx->pc = 0x516054u;
    SET_GPR_U32(ctx, 31, 0x51605Cu);
    ctx->pc = 0x516058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516054u;
            // 0x516058: 0x24a5bf70  addiu       $a1, $a1, -0x4090 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331C0u;
    if (runtime->hasFunction(0x1331C0u)) {
        auto targetFn = runtime->lookupFunction(0x1331C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51605Cu; }
        if (ctx->pc != 0x51605Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331C0_0x1331c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51605Cu; }
        if (ctx->pc != 0x51605Cu) { return; }
    }
    ctx->pc = 0x51605Cu;
label_51605c:
    // 0x51605c: 0xc62c0324  lwc1        $f12, 0x324($s1)
    ctx->pc = 0x51605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 804)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_516060:
    // 0x516060: 0x26240330  addiu       $a0, $s1, 0x330
    ctx->pc = 0x516060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 816));
label_516064:
    // 0x516064: 0x26860010  addiu       $a2, $s4, 0x10
    ctx->pc = 0x516064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_516068:
    // 0x516068: 0xc04cc7c  jal         func_1331F0
label_51606c:
    if (ctx->pc == 0x51606Cu) {
        ctx->pc = 0x51606Cu;
            // 0x51606c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x516070u;
        goto label_516070;
    }
    ctx->pc = 0x516068u;
    SET_GPR_U32(ctx, 31, 0x516070u);
    ctx->pc = 0x51606Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x516068u;
            // 0x51606c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1331F0u;
    if (runtime->hasFunction(0x1331F0u)) {
        auto targetFn = runtime->lookupFunction(0x1331F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516070u; }
        if (ctx->pc != 0x516070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001331F0_0x1331f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x516070u; }
        if (ctx->pc != 0x516070u) { return; }
    }
    ctx->pc = 0x516070u;
label_516070:
    // 0x516070: 0xc6200de4  lwc1        $f0, 0xDE4($s1)
    ctx->pc = 0x516070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_516074:
    // 0x516074: 0x0  nop
    ctx->pc = 0x516074u;
    // NOP
label_516078:
    // 0x516078: 0x46150003  div.s       $f0, $f0, $f21
    ctx->pc = 0x516078u;
    if (ctx->f[21] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[21];
label_51607c:
    // 0x51607c: 0xe6800020  swc1        $f0, 0x20($s4)
    ctx->pc = 0x51607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 32), bits); }
label_516080:
    // 0x516080: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x516080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_516084:
    // 0x516084: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x516084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_516088:
    // 0x516088: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x516088u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_51608c:
    // 0x51608c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x51608cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_516090:
    // 0x516090: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x516090u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_516094:
    // 0x516094: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x516094u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_516098:
    // 0x516098: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x516098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_51609c:
    // 0x51609c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x51609cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_5160a0:
    // 0x5160a0: 0x3e00008  jr          $ra
label_5160a4:
    if (ctx->pc == 0x5160A4u) {
        ctx->pc = 0x5160A4u;
            // 0x5160a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x5160A8u;
        goto label_5160a8;
    }
    ctx->pc = 0x5160A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5160A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5160A0u;
            // 0x5160a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5160A8u;
label_5160a8:
    // 0x5160a8: 0x0  nop
    ctx->pc = 0x5160a8u;
    // NOP
label_5160ac:
    // 0x5160ac: 0x0  nop
    ctx->pc = 0x5160acu;
    // NOP
}
