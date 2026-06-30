#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004E38A0
// Address: 0x4e38a0 - 0x4e3ec0
void sub_004E38A0_0x4e38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004E38A0_0x4e38a0");
#endif

    switch (ctx->pc) {
        case 0x4e38a0u: goto label_4e38a0;
        case 0x4e38a4u: goto label_4e38a4;
        case 0x4e38a8u: goto label_4e38a8;
        case 0x4e38acu: goto label_4e38ac;
        case 0x4e38b0u: goto label_4e38b0;
        case 0x4e38b4u: goto label_4e38b4;
        case 0x4e38b8u: goto label_4e38b8;
        case 0x4e38bcu: goto label_4e38bc;
        case 0x4e38c0u: goto label_4e38c0;
        case 0x4e38c4u: goto label_4e38c4;
        case 0x4e38c8u: goto label_4e38c8;
        case 0x4e38ccu: goto label_4e38cc;
        case 0x4e38d0u: goto label_4e38d0;
        case 0x4e38d4u: goto label_4e38d4;
        case 0x4e38d8u: goto label_4e38d8;
        case 0x4e38dcu: goto label_4e38dc;
        case 0x4e38e0u: goto label_4e38e0;
        case 0x4e38e4u: goto label_4e38e4;
        case 0x4e38e8u: goto label_4e38e8;
        case 0x4e38ecu: goto label_4e38ec;
        case 0x4e38f0u: goto label_4e38f0;
        case 0x4e38f4u: goto label_4e38f4;
        case 0x4e38f8u: goto label_4e38f8;
        case 0x4e38fcu: goto label_4e38fc;
        case 0x4e3900u: goto label_4e3900;
        case 0x4e3904u: goto label_4e3904;
        case 0x4e3908u: goto label_4e3908;
        case 0x4e390cu: goto label_4e390c;
        case 0x4e3910u: goto label_4e3910;
        case 0x4e3914u: goto label_4e3914;
        case 0x4e3918u: goto label_4e3918;
        case 0x4e391cu: goto label_4e391c;
        case 0x4e3920u: goto label_4e3920;
        case 0x4e3924u: goto label_4e3924;
        case 0x4e3928u: goto label_4e3928;
        case 0x4e392cu: goto label_4e392c;
        case 0x4e3930u: goto label_4e3930;
        case 0x4e3934u: goto label_4e3934;
        case 0x4e3938u: goto label_4e3938;
        case 0x4e393cu: goto label_4e393c;
        case 0x4e3940u: goto label_4e3940;
        case 0x4e3944u: goto label_4e3944;
        case 0x4e3948u: goto label_4e3948;
        case 0x4e394cu: goto label_4e394c;
        case 0x4e3950u: goto label_4e3950;
        case 0x4e3954u: goto label_4e3954;
        case 0x4e3958u: goto label_4e3958;
        case 0x4e395cu: goto label_4e395c;
        case 0x4e3960u: goto label_4e3960;
        case 0x4e3964u: goto label_4e3964;
        case 0x4e3968u: goto label_4e3968;
        case 0x4e396cu: goto label_4e396c;
        case 0x4e3970u: goto label_4e3970;
        case 0x4e3974u: goto label_4e3974;
        case 0x4e3978u: goto label_4e3978;
        case 0x4e397cu: goto label_4e397c;
        case 0x4e3980u: goto label_4e3980;
        case 0x4e3984u: goto label_4e3984;
        case 0x4e3988u: goto label_4e3988;
        case 0x4e398cu: goto label_4e398c;
        case 0x4e3990u: goto label_4e3990;
        case 0x4e3994u: goto label_4e3994;
        case 0x4e3998u: goto label_4e3998;
        case 0x4e399cu: goto label_4e399c;
        case 0x4e39a0u: goto label_4e39a0;
        case 0x4e39a4u: goto label_4e39a4;
        case 0x4e39a8u: goto label_4e39a8;
        case 0x4e39acu: goto label_4e39ac;
        case 0x4e39b0u: goto label_4e39b0;
        case 0x4e39b4u: goto label_4e39b4;
        case 0x4e39b8u: goto label_4e39b8;
        case 0x4e39bcu: goto label_4e39bc;
        case 0x4e39c0u: goto label_4e39c0;
        case 0x4e39c4u: goto label_4e39c4;
        case 0x4e39c8u: goto label_4e39c8;
        case 0x4e39ccu: goto label_4e39cc;
        case 0x4e39d0u: goto label_4e39d0;
        case 0x4e39d4u: goto label_4e39d4;
        case 0x4e39d8u: goto label_4e39d8;
        case 0x4e39dcu: goto label_4e39dc;
        case 0x4e39e0u: goto label_4e39e0;
        case 0x4e39e4u: goto label_4e39e4;
        case 0x4e39e8u: goto label_4e39e8;
        case 0x4e39ecu: goto label_4e39ec;
        case 0x4e39f0u: goto label_4e39f0;
        case 0x4e39f4u: goto label_4e39f4;
        case 0x4e39f8u: goto label_4e39f8;
        case 0x4e39fcu: goto label_4e39fc;
        case 0x4e3a00u: goto label_4e3a00;
        case 0x4e3a04u: goto label_4e3a04;
        case 0x4e3a08u: goto label_4e3a08;
        case 0x4e3a0cu: goto label_4e3a0c;
        case 0x4e3a10u: goto label_4e3a10;
        case 0x4e3a14u: goto label_4e3a14;
        case 0x4e3a18u: goto label_4e3a18;
        case 0x4e3a1cu: goto label_4e3a1c;
        case 0x4e3a20u: goto label_4e3a20;
        case 0x4e3a24u: goto label_4e3a24;
        case 0x4e3a28u: goto label_4e3a28;
        case 0x4e3a2cu: goto label_4e3a2c;
        case 0x4e3a30u: goto label_4e3a30;
        case 0x4e3a34u: goto label_4e3a34;
        case 0x4e3a38u: goto label_4e3a38;
        case 0x4e3a3cu: goto label_4e3a3c;
        case 0x4e3a40u: goto label_4e3a40;
        case 0x4e3a44u: goto label_4e3a44;
        case 0x4e3a48u: goto label_4e3a48;
        case 0x4e3a4cu: goto label_4e3a4c;
        case 0x4e3a50u: goto label_4e3a50;
        case 0x4e3a54u: goto label_4e3a54;
        case 0x4e3a58u: goto label_4e3a58;
        case 0x4e3a5cu: goto label_4e3a5c;
        case 0x4e3a60u: goto label_4e3a60;
        case 0x4e3a64u: goto label_4e3a64;
        case 0x4e3a68u: goto label_4e3a68;
        case 0x4e3a6cu: goto label_4e3a6c;
        case 0x4e3a70u: goto label_4e3a70;
        case 0x4e3a74u: goto label_4e3a74;
        case 0x4e3a78u: goto label_4e3a78;
        case 0x4e3a7cu: goto label_4e3a7c;
        case 0x4e3a80u: goto label_4e3a80;
        case 0x4e3a84u: goto label_4e3a84;
        case 0x4e3a88u: goto label_4e3a88;
        case 0x4e3a8cu: goto label_4e3a8c;
        case 0x4e3a90u: goto label_4e3a90;
        case 0x4e3a94u: goto label_4e3a94;
        case 0x4e3a98u: goto label_4e3a98;
        case 0x4e3a9cu: goto label_4e3a9c;
        case 0x4e3aa0u: goto label_4e3aa0;
        case 0x4e3aa4u: goto label_4e3aa4;
        case 0x4e3aa8u: goto label_4e3aa8;
        case 0x4e3aacu: goto label_4e3aac;
        case 0x4e3ab0u: goto label_4e3ab0;
        case 0x4e3ab4u: goto label_4e3ab4;
        case 0x4e3ab8u: goto label_4e3ab8;
        case 0x4e3abcu: goto label_4e3abc;
        case 0x4e3ac0u: goto label_4e3ac0;
        case 0x4e3ac4u: goto label_4e3ac4;
        case 0x4e3ac8u: goto label_4e3ac8;
        case 0x4e3accu: goto label_4e3acc;
        case 0x4e3ad0u: goto label_4e3ad0;
        case 0x4e3ad4u: goto label_4e3ad4;
        case 0x4e3ad8u: goto label_4e3ad8;
        case 0x4e3adcu: goto label_4e3adc;
        case 0x4e3ae0u: goto label_4e3ae0;
        case 0x4e3ae4u: goto label_4e3ae4;
        case 0x4e3ae8u: goto label_4e3ae8;
        case 0x4e3aecu: goto label_4e3aec;
        case 0x4e3af0u: goto label_4e3af0;
        case 0x4e3af4u: goto label_4e3af4;
        case 0x4e3af8u: goto label_4e3af8;
        case 0x4e3afcu: goto label_4e3afc;
        case 0x4e3b00u: goto label_4e3b00;
        case 0x4e3b04u: goto label_4e3b04;
        case 0x4e3b08u: goto label_4e3b08;
        case 0x4e3b0cu: goto label_4e3b0c;
        case 0x4e3b10u: goto label_4e3b10;
        case 0x4e3b14u: goto label_4e3b14;
        case 0x4e3b18u: goto label_4e3b18;
        case 0x4e3b1cu: goto label_4e3b1c;
        case 0x4e3b20u: goto label_4e3b20;
        case 0x4e3b24u: goto label_4e3b24;
        case 0x4e3b28u: goto label_4e3b28;
        case 0x4e3b2cu: goto label_4e3b2c;
        case 0x4e3b30u: goto label_4e3b30;
        case 0x4e3b34u: goto label_4e3b34;
        case 0x4e3b38u: goto label_4e3b38;
        case 0x4e3b3cu: goto label_4e3b3c;
        case 0x4e3b40u: goto label_4e3b40;
        case 0x4e3b44u: goto label_4e3b44;
        case 0x4e3b48u: goto label_4e3b48;
        case 0x4e3b4cu: goto label_4e3b4c;
        case 0x4e3b50u: goto label_4e3b50;
        case 0x4e3b54u: goto label_4e3b54;
        case 0x4e3b58u: goto label_4e3b58;
        case 0x4e3b5cu: goto label_4e3b5c;
        case 0x4e3b60u: goto label_4e3b60;
        case 0x4e3b64u: goto label_4e3b64;
        case 0x4e3b68u: goto label_4e3b68;
        case 0x4e3b6cu: goto label_4e3b6c;
        case 0x4e3b70u: goto label_4e3b70;
        case 0x4e3b74u: goto label_4e3b74;
        case 0x4e3b78u: goto label_4e3b78;
        case 0x4e3b7cu: goto label_4e3b7c;
        case 0x4e3b80u: goto label_4e3b80;
        case 0x4e3b84u: goto label_4e3b84;
        case 0x4e3b88u: goto label_4e3b88;
        case 0x4e3b8cu: goto label_4e3b8c;
        case 0x4e3b90u: goto label_4e3b90;
        case 0x4e3b94u: goto label_4e3b94;
        case 0x4e3b98u: goto label_4e3b98;
        case 0x4e3b9cu: goto label_4e3b9c;
        case 0x4e3ba0u: goto label_4e3ba0;
        case 0x4e3ba4u: goto label_4e3ba4;
        case 0x4e3ba8u: goto label_4e3ba8;
        case 0x4e3bacu: goto label_4e3bac;
        case 0x4e3bb0u: goto label_4e3bb0;
        case 0x4e3bb4u: goto label_4e3bb4;
        case 0x4e3bb8u: goto label_4e3bb8;
        case 0x4e3bbcu: goto label_4e3bbc;
        case 0x4e3bc0u: goto label_4e3bc0;
        case 0x4e3bc4u: goto label_4e3bc4;
        case 0x4e3bc8u: goto label_4e3bc8;
        case 0x4e3bccu: goto label_4e3bcc;
        case 0x4e3bd0u: goto label_4e3bd0;
        case 0x4e3bd4u: goto label_4e3bd4;
        case 0x4e3bd8u: goto label_4e3bd8;
        case 0x4e3bdcu: goto label_4e3bdc;
        case 0x4e3be0u: goto label_4e3be0;
        case 0x4e3be4u: goto label_4e3be4;
        case 0x4e3be8u: goto label_4e3be8;
        case 0x4e3becu: goto label_4e3bec;
        case 0x4e3bf0u: goto label_4e3bf0;
        case 0x4e3bf4u: goto label_4e3bf4;
        case 0x4e3bf8u: goto label_4e3bf8;
        case 0x4e3bfcu: goto label_4e3bfc;
        case 0x4e3c00u: goto label_4e3c00;
        case 0x4e3c04u: goto label_4e3c04;
        case 0x4e3c08u: goto label_4e3c08;
        case 0x4e3c0cu: goto label_4e3c0c;
        case 0x4e3c10u: goto label_4e3c10;
        case 0x4e3c14u: goto label_4e3c14;
        case 0x4e3c18u: goto label_4e3c18;
        case 0x4e3c1cu: goto label_4e3c1c;
        case 0x4e3c20u: goto label_4e3c20;
        case 0x4e3c24u: goto label_4e3c24;
        case 0x4e3c28u: goto label_4e3c28;
        case 0x4e3c2cu: goto label_4e3c2c;
        case 0x4e3c30u: goto label_4e3c30;
        case 0x4e3c34u: goto label_4e3c34;
        case 0x4e3c38u: goto label_4e3c38;
        case 0x4e3c3cu: goto label_4e3c3c;
        case 0x4e3c40u: goto label_4e3c40;
        case 0x4e3c44u: goto label_4e3c44;
        case 0x4e3c48u: goto label_4e3c48;
        case 0x4e3c4cu: goto label_4e3c4c;
        case 0x4e3c50u: goto label_4e3c50;
        case 0x4e3c54u: goto label_4e3c54;
        case 0x4e3c58u: goto label_4e3c58;
        case 0x4e3c5cu: goto label_4e3c5c;
        case 0x4e3c60u: goto label_4e3c60;
        case 0x4e3c64u: goto label_4e3c64;
        case 0x4e3c68u: goto label_4e3c68;
        case 0x4e3c6cu: goto label_4e3c6c;
        case 0x4e3c70u: goto label_4e3c70;
        case 0x4e3c74u: goto label_4e3c74;
        case 0x4e3c78u: goto label_4e3c78;
        case 0x4e3c7cu: goto label_4e3c7c;
        case 0x4e3c80u: goto label_4e3c80;
        case 0x4e3c84u: goto label_4e3c84;
        case 0x4e3c88u: goto label_4e3c88;
        case 0x4e3c8cu: goto label_4e3c8c;
        case 0x4e3c90u: goto label_4e3c90;
        case 0x4e3c94u: goto label_4e3c94;
        case 0x4e3c98u: goto label_4e3c98;
        case 0x4e3c9cu: goto label_4e3c9c;
        case 0x4e3ca0u: goto label_4e3ca0;
        case 0x4e3ca4u: goto label_4e3ca4;
        case 0x4e3ca8u: goto label_4e3ca8;
        case 0x4e3cacu: goto label_4e3cac;
        case 0x4e3cb0u: goto label_4e3cb0;
        case 0x4e3cb4u: goto label_4e3cb4;
        case 0x4e3cb8u: goto label_4e3cb8;
        case 0x4e3cbcu: goto label_4e3cbc;
        case 0x4e3cc0u: goto label_4e3cc0;
        case 0x4e3cc4u: goto label_4e3cc4;
        case 0x4e3cc8u: goto label_4e3cc8;
        case 0x4e3cccu: goto label_4e3ccc;
        case 0x4e3cd0u: goto label_4e3cd0;
        case 0x4e3cd4u: goto label_4e3cd4;
        case 0x4e3cd8u: goto label_4e3cd8;
        case 0x4e3cdcu: goto label_4e3cdc;
        case 0x4e3ce0u: goto label_4e3ce0;
        case 0x4e3ce4u: goto label_4e3ce4;
        case 0x4e3ce8u: goto label_4e3ce8;
        case 0x4e3cecu: goto label_4e3cec;
        case 0x4e3cf0u: goto label_4e3cf0;
        case 0x4e3cf4u: goto label_4e3cf4;
        case 0x4e3cf8u: goto label_4e3cf8;
        case 0x4e3cfcu: goto label_4e3cfc;
        case 0x4e3d00u: goto label_4e3d00;
        case 0x4e3d04u: goto label_4e3d04;
        case 0x4e3d08u: goto label_4e3d08;
        case 0x4e3d0cu: goto label_4e3d0c;
        case 0x4e3d10u: goto label_4e3d10;
        case 0x4e3d14u: goto label_4e3d14;
        case 0x4e3d18u: goto label_4e3d18;
        case 0x4e3d1cu: goto label_4e3d1c;
        case 0x4e3d20u: goto label_4e3d20;
        case 0x4e3d24u: goto label_4e3d24;
        case 0x4e3d28u: goto label_4e3d28;
        case 0x4e3d2cu: goto label_4e3d2c;
        case 0x4e3d30u: goto label_4e3d30;
        case 0x4e3d34u: goto label_4e3d34;
        case 0x4e3d38u: goto label_4e3d38;
        case 0x4e3d3cu: goto label_4e3d3c;
        case 0x4e3d40u: goto label_4e3d40;
        case 0x4e3d44u: goto label_4e3d44;
        case 0x4e3d48u: goto label_4e3d48;
        case 0x4e3d4cu: goto label_4e3d4c;
        case 0x4e3d50u: goto label_4e3d50;
        case 0x4e3d54u: goto label_4e3d54;
        case 0x4e3d58u: goto label_4e3d58;
        case 0x4e3d5cu: goto label_4e3d5c;
        case 0x4e3d60u: goto label_4e3d60;
        case 0x4e3d64u: goto label_4e3d64;
        case 0x4e3d68u: goto label_4e3d68;
        case 0x4e3d6cu: goto label_4e3d6c;
        case 0x4e3d70u: goto label_4e3d70;
        case 0x4e3d74u: goto label_4e3d74;
        case 0x4e3d78u: goto label_4e3d78;
        case 0x4e3d7cu: goto label_4e3d7c;
        case 0x4e3d80u: goto label_4e3d80;
        case 0x4e3d84u: goto label_4e3d84;
        case 0x4e3d88u: goto label_4e3d88;
        case 0x4e3d8cu: goto label_4e3d8c;
        case 0x4e3d90u: goto label_4e3d90;
        case 0x4e3d94u: goto label_4e3d94;
        case 0x4e3d98u: goto label_4e3d98;
        case 0x4e3d9cu: goto label_4e3d9c;
        case 0x4e3da0u: goto label_4e3da0;
        case 0x4e3da4u: goto label_4e3da4;
        case 0x4e3da8u: goto label_4e3da8;
        case 0x4e3dacu: goto label_4e3dac;
        case 0x4e3db0u: goto label_4e3db0;
        case 0x4e3db4u: goto label_4e3db4;
        case 0x4e3db8u: goto label_4e3db8;
        case 0x4e3dbcu: goto label_4e3dbc;
        case 0x4e3dc0u: goto label_4e3dc0;
        case 0x4e3dc4u: goto label_4e3dc4;
        case 0x4e3dc8u: goto label_4e3dc8;
        case 0x4e3dccu: goto label_4e3dcc;
        case 0x4e3dd0u: goto label_4e3dd0;
        case 0x4e3dd4u: goto label_4e3dd4;
        case 0x4e3dd8u: goto label_4e3dd8;
        case 0x4e3ddcu: goto label_4e3ddc;
        case 0x4e3de0u: goto label_4e3de0;
        case 0x4e3de4u: goto label_4e3de4;
        case 0x4e3de8u: goto label_4e3de8;
        case 0x4e3decu: goto label_4e3dec;
        case 0x4e3df0u: goto label_4e3df0;
        case 0x4e3df4u: goto label_4e3df4;
        case 0x4e3df8u: goto label_4e3df8;
        case 0x4e3dfcu: goto label_4e3dfc;
        case 0x4e3e00u: goto label_4e3e00;
        case 0x4e3e04u: goto label_4e3e04;
        case 0x4e3e08u: goto label_4e3e08;
        case 0x4e3e0cu: goto label_4e3e0c;
        case 0x4e3e10u: goto label_4e3e10;
        case 0x4e3e14u: goto label_4e3e14;
        case 0x4e3e18u: goto label_4e3e18;
        case 0x4e3e1cu: goto label_4e3e1c;
        case 0x4e3e20u: goto label_4e3e20;
        case 0x4e3e24u: goto label_4e3e24;
        case 0x4e3e28u: goto label_4e3e28;
        case 0x4e3e2cu: goto label_4e3e2c;
        case 0x4e3e30u: goto label_4e3e30;
        case 0x4e3e34u: goto label_4e3e34;
        case 0x4e3e38u: goto label_4e3e38;
        case 0x4e3e3cu: goto label_4e3e3c;
        case 0x4e3e40u: goto label_4e3e40;
        case 0x4e3e44u: goto label_4e3e44;
        case 0x4e3e48u: goto label_4e3e48;
        case 0x4e3e4cu: goto label_4e3e4c;
        case 0x4e3e50u: goto label_4e3e50;
        case 0x4e3e54u: goto label_4e3e54;
        case 0x4e3e58u: goto label_4e3e58;
        case 0x4e3e5cu: goto label_4e3e5c;
        case 0x4e3e60u: goto label_4e3e60;
        case 0x4e3e64u: goto label_4e3e64;
        case 0x4e3e68u: goto label_4e3e68;
        case 0x4e3e6cu: goto label_4e3e6c;
        case 0x4e3e70u: goto label_4e3e70;
        case 0x4e3e74u: goto label_4e3e74;
        case 0x4e3e78u: goto label_4e3e78;
        case 0x4e3e7cu: goto label_4e3e7c;
        case 0x4e3e80u: goto label_4e3e80;
        case 0x4e3e84u: goto label_4e3e84;
        case 0x4e3e88u: goto label_4e3e88;
        case 0x4e3e8cu: goto label_4e3e8c;
        case 0x4e3e90u: goto label_4e3e90;
        case 0x4e3e94u: goto label_4e3e94;
        case 0x4e3e98u: goto label_4e3e98;
        case 0x4e3e9cu: goto label_4e3e9c;
        case 0x4e3ea0u: goto label_4e3ea0;
        case 0x4e3ea4u: goto label_4e3ea4;
        case 0x4e3ea8u: goto label_4e3ea8;
        case 0x4e3eacu: goto label_4e3eac;
        case 0x4e3eb0u: goto label_4e3eb0;
        case 0x4e3eb4u: goto label_4e3eb4;
        case 0x4e3eb8u: goto label_4e3eb8;
        case 0x4e3ebcu: goto label_4e3ebc;
        default: break;
    }

    ctx->pc = 0x4e38a0u;

label_4e38a0:
    // 0x4e38a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e38a4:
    // 0x4e38a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e38a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e38a8:
    // 0x4e38a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e38a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e38ac:
    // 0x4e38ac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e38acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e38b0:
    // 0x4e38b0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4e38b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e38b4:
    // 0x4e38b4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_4e38b8:
    if (ctx->pc == 0x4E38B8u) {
        ctx->pc = 0x4E38B8u;
            // 0x4e38b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E38BCu;
        goto label_4e38bc;
    }
    ctx->pc = 0x4E38B4u;
    {
        const bool branch_taken_0x4e38b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E38B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E38B4u;
            // 0x4e38b8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e38b4) {
            ctx->pc = 0x4E39E8u;
            goto label_4e39e8;
        }
    }
    ctx->pc = 0x4E38BCu;
label_4e38bc:
    // 0x4e38bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e38c0:
    // 0x4e38c0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e38c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e38c4:
    // 0x4e38c4: 0x24633890  addiu       $v1, $v1, 0x3890
    ctx->pc = 0x4e38c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14480));
label_4e38c8:
    // 0x4e38c8: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e38c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e38cc:
    // 0x4e38cc: 0x244238c8  addiu       $v0, $v0, 0x38C8
    ctx->pc = 0x4e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14536));
label_4e38d0:
    // 0x4e38d0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x4e38d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_4e38d4:
    // 0x4e38d4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x4e38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_4e38d8:
    // 0x4e38d8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x4e38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_4e38dc:
    // 0x4e38dc: 0xc0407c0  jal         func_101F00
label_4e38e0:
    if (ctx->pc == 0x4E38E0u) {
        ctx->pc = 0x4E38E0u;
            // 0x4e38e0: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->pc = 0x4E38E4u;
        goto label_4e38e4;
    }
    ctx->pc = 0x4E38DCu;
    SET_GPR_U32(ctx, 31, 0x4E38E4u);
    ctx->pc = 0x4E38E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E38DCu;
            // 0x4e38e0: 0x24a53a00  addiu       $a1, $a1, 0x3A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E38E4u; }
        if (ctx->pc != 0x4E38E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E38E4u; }
        if (ctx->pc != 0x4E38E4u) { return; }
    }
    ctx->pc = 0x4E38E4u;
label_4e38e4:
    // 0x4e38e4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x4e38e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_4e38e8:
    // 0x4e38e8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4e38ec:
    if (ctx->pc == 0x4E38ECu) {
        ctx->pc = 0x4E38ECu;
            // 0x4e38ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x4E38F0u;
        goto label_4e38f0;
    }
    ctx->pc = 0x4E38E8u;
    {
        const bool branch_taken_0x4e38e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e38e8) {
            ctx->pc = 0x4E38ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E38E8u;
            // 0x4e38ec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E38FCu;
            goto label_4e38fc;
        }
    }
    ctx->pc = 0x4E38F0u;
label_4e38f0:
    // 0x4e38f0: 0xc07507c  jal         func_1D41F0
label_4e38f4:
    if (ctx->pc == 0x4E38F4u) {
        ctx->pc = 0x4E38F4u;
            // 0x4e38f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x4E38F8u;
        goto label_4e38f8;
    }
    ctx->pc = 0x4E38F0u;
    SET_GPR_U32(ctx, 31, 0x4E38F8u);
    ctx->pc = 0x4E38F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E38F0u;
            // 0x4e38f4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E38F8u; }
        if (ctx->pc != 0x4E38F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E38F8u; }
        if (ctx->pc != 0x4E38F8u) { return; }
    }
    ctx->pc = 0x4E38F8u;
label_4e38f8:
    // 0x4e38f8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x4e38f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_4e38fc:
    // 0x4e38fc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e3900:
    if (ctx->pc == 0x4E3900u) {
        ctx->pc = 0x4E3900u;
            // 0x4e3900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x4E3904u;
        goto label_4e3904;
    }
    ctx->pc = 0x4E38FCu;
    {
        const bool branch_taken_0x4e38fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e38fc) {
            ctx->pc = 0x4E3900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E38FCu;
            // 0x4e3900: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E392Cu;
            goto label_4e392c;
        }
    }
    ctx->pc = 0x4E3904u;
label_4e3904:
    // 0x4e3904: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e3908:
    if (ctx->pc == 0x4E3908u) {
        ctx->pc = 0x4E390Cu;
        goto label_4e390c;
    }
    ctx->pc = 0x4E3904u;
    {
        const bool branch_taken_0x4e3904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3904) {
            ctx->pc = 0x4E3928u;
            goto label_4e3928;
        }
    }
    ctx->pc = 0x4E390Cu;
label_4e390c:
    // 0x4e390c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e3910:
    if (ctx->pc == 0x4E3910u) {
        ctx->pc = 0x4E3914u;
        goto label_4e3914;
    }
    ctx->pc = 0x4E390Cu;
    {
        const bool branch_taken_0x4e390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e390c) {
            ctx->pc = 0x4E3928u;
            goto label_4e3928;
        }
    }
    ctx->pc = 0x4E3914u;
label_4e3914:
    // 0x4e3914: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x4e3914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_4e3918:
    // 0x4e3918: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e391c:
    if (ctx->pc == 0x4E391Cu) {
        ctx->pc = 0x4E3920u;
        goto label_4e3920;
    }
    ctx->pc = 0x4E3918u;
    {
        const bool branch_taken_0x4e3918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3918) {
            ctx->pc = 0x4E3928u;
            goto label_4e3928;
        }
    }
    ctx->pc = 0x4E3920u;
label_4e3920:
    // 0x4e3920: 0xc0400a8  jal         func_1002A0
label_4e3924:
    if (ctx->pc == 0x4E3924u) {
        ctx->pc = 0x4E3928u;
        goto label_4e3928;
    }
    ctx->pc = 0x4E3920u;
    SET_GPR_U32(ctx, 31, 0x4E3928u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3928u; }
        if (ctx->pc != 0x4E3928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3928u; }
        if (ctx->pc != 0x4E3928u) { return; }
    }
    ctx->pc = 0x4E3928u;
label_4e3928:
    // 0x4e3928: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x4e3928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_4e392c:
    // 0x4e392c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_4e3930:
    if (ctx->pc == 0x4E3930u) {
        ctx->pc = 0x4E3930u;
            // 0x4e3930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x4E3934u;
        goto label_4e3934;
    }
    ctx->pc = 0x4E392Cu;
    {
        const bool branch_taken_0x4e392c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e392c) {
            ctx->pc = 0x4E3930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E392Cu;
            // 0x4e3930: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E395Cu;
            goto label_4e395c;
        }
    }
    ctx->pc = 0x4E3934u;
label_4e3934:
    // 0x4e3934: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_4e3938:
    if (ctx->pc == 0x4E3938u) {
        ctx->pc = 0x4E393Cu;
        goto label_4e393c;
    }
    ctx->pc = 0x4E3934u;
    {
        const bool branch_taken_0x4e3934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3934) {
            ctx->pc = 0x4E3958u;
            goto label_4e3958;
        }
    }
    ctx->pc = 0x4E393Cu;
label_4e393c:
    // 0x4e393c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e3940:
    if (ctx->pc == 0x4E3940u) {
        ctx->pc = 0x4E3944u;
        goto label_4e3944;
    }
    ctx->pc = 0x4E393Cu;
    {
        const bool branch_taken_0x4e393c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e393c) {
            ctx->pc = 0x4E3958u;
            goto label_4e3958;
        }
    }
    ctx->pc = 0x4E3944u;
label_4e3944:
    // 0x4e3944: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x4e3944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_4e3948:
    // 0x4e3948: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_4e394c:
    if (ctx->pc == 0x4E394Cu) {
        ctx->pc = 0x4E3950u;
        goto label_4e3950;
    }
    ctx->pc = 0x4E3948u;
    {
        const bool branch_taken_0x4e3948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3948) {
            ctx->pc = 0x4E3958u;
            goto label_4e3958;
        }
    }
    ctx->pc = 0x4E3950u;
label_4e3950:
    // 0x4e3950: 0xc0400a8  jal         func_1002A0
label_4e3954:
    if (ctx->pc == 0x4E3954u) {
        ctx->pc = 0x4E3958u;
        goto label_4e3958;
    }
    ctx->pc = 0x4E3950u;
    SET_GPR_U32(ctx, 31, 0x4E3958u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3958u; }
        if (ctx->pc != 0x4E3958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3958u; }
        if (ctx->pc != 0x4E3958u) { return; }
    }
    ctx->pc = 0x4E3958u;
label_4e3958:
    // 0x4e3958: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x4e3958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_4e395c:
    // 0x4e395c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4e3960:
    if (ctx->pc == 0x4E3960u) {
        ctx->pc = 0x4E3964u;
        goto label_4e3964;
    }
    ctx->pc = 0x4E395Cu;
    {
        const bool branch_taken_0x4e395c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e395c) {
            ctx->pc = 0x4E3978u;
            goto label_4e3978;
        }
    }
    ctx->pc = 0x4E3964u;
label_4e3964:
    // 0x4e3964: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e3964u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e3968:
    // 0x4e3968: 0x3c0200be  lui         $v0, 0xBE
    ctx->pc = 0x4e3968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)190 << 16));
label_4e396c:
    // 0x4e396c: 0x24633880  addiu       $v1, $v1, 0x3880
    ctx->pc = 0x4e396cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14464));
label_4e3970:
    // 0x4e3970: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x4e3970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_4e3974:
    // 0x4e3974: 0xac40aa98  sw          $zero, -0x5568($v0)
    ctx->pc = 0x4e3974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294945432), GPR_U32(ctx, 0));
label_4e3978:
    // 0x4e3978: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_4e397c:
    if (ctx->pc == 0x4E397Cu) {
        ctx->pc = 0x4E397Cu;
            // 0x4e397c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x4E3980u;
        goto label_4e3980;
    }
    ctx->pc = 0x4E3978u;
    {
        const bool branch_taken_0x4e3978 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3978) {
            ctx->pc = 0x4E397Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3978u;
            // 0x4e397c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E39D4u;
            goto label_4e39d4;
        }
    }
    ctx->pc = 0x4E3980u;
label_4e3980:
    // 0x4e3980: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e3984:
    // 0x4e3984: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x4e3984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_4e3988:
    // 0x4e3988: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x4e3988u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_4e398c:
    // 0x4e398c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x4e398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_4e3990:
    // 0x4e3990: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e3994:
    if (ctx->pc == 0x4E3994u) {
        ctx->pc = 0x4E3994u;
            // 0x4e3994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x4E3998u;
        goto label_4e3998;
    }
    ctx->pc = 0x4E3990u;
    {
        const bool branch_taken_0x4e3990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3990) {
            ctx->pc = 0x4E3994u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3990u;
            // 0x4e3994: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E39ACu;
            goto label_4e39ac;
        }
    }
    ctx->pc = 0x4E3998u;
label_4e3998:
    // 0x4e3998: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e3998u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e399c:
    // 0x4e399c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e399cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e39a0:
    // 0x4e39a0: 0x320f809  jalr        $t9
label_4e39a4:
    if (ctx->pc == 0x4E39A4u) {
        ctx->pc = 0x4E39A4u;
            // 0x4e39a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E39A8u;
        goto label_4e39a8;
    }
    ctx->pc = 0x4E39A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E39A8u);
        ctx->pc = 0x4E39A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39A0u;
            // 0x4e39a4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E39A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E39A8u; }
            if (ctx->pc != 0x4E39A8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E39A8u;
label_4e39a8:
    // 0x4e39a8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x4e39a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_4e39ac:
    // 0x4e39ac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e39b0:
    if (ctx->pc == 0x4E39B0u) {
        ctx->pc = 0x4E39B0u;
            // 0x4e39b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E39B4u;
        goto label_4e39b4;
    }
    ctx->pc = 0x4E39ACu;
    {
        const bool branch_taken_0x4e39ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e39ac) {
            ctx->pc = 0x4E39B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39ACu;
            // 0x4e39b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E39C8u;
            goto label_4e39c8;
        }
    }
    ctx->pc = 0x4E39B4u;
label_4e39b4:
    // 0x4e39b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e39b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e39b8:
    // 0x4e39b8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e39b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e39bc:
    // 0x4e39bc: 0x320f809  jalr        $t9
label_4e39c0:
    if (ctx->pc == 0x4E39C0u) {
        ctx->pc = 0x4E39C0u;
            // 0x4e39c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E39C4u;
        goto label_4e39c4;
    }
    ctx->pc = 0x4E39BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E39C4u);
        ctx->pc = 0x4E39C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39BCu;
            // 0x4e39c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E39C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E39C4u; }
            if (ctx->pc != 0x4E39C4u) { return; }
        }
        }
    }
    ctx->pc = 0x4E39C4u;
label_4e39c4:
    // 0x4e39c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4e39c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e39c8:
    // 0x4e39c8: 0xc075bf8  jal         func_1D6FE0
label_4e39cc:
    if (ctx->pc == 0x4E39CCu) {
        ctx->pc = 0x4E39CCu;
            // 0x4e39cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E39D0u;
        goto label_4e39d0;
    }
    ctx->pc = 0x4E39C8u;
    SET_GPR_U32(ctx, 31, 0x4E39D0u);
    ctx->pc = 0x4E39CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39C8u;
            // 0x4e39cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E39D0u; }
        if (ctx->pc != 0x4E39D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E39D0u; }
        if (ctx->pc != 0x4E39D0u) { return; }
    }
    ctx->pc = 0x4E39D0u;
label_4e39d0:
    // 0x4e39d0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x4e39d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_4e39d4:
    // 0x4e39d4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e39d4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e39d8:
    // 0x4e39d8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e39dc:
    if (ctx->pc == 0x4E39DCu) {
        ctx->pc = 0x4E39DCu;
            // 0x4e39dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E39E0u;
        goto label_4e39e0;
    }
    ctx->pc = 0x4E39D8u;
    {
        const bool branch_taken_0x4e39d8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e39d8) {
            ctx->pc = 0x4E39DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39D8u;
            // 0x4e39dc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E39ECu;
            goto label_4e39ec;
        }
    }
    ctx->pc = 0x4E39E0u;
label_4e39e0:
    // 0x4e39e0: 0xc0400a8  jal         func_1002A0
label_4e39e4:
    if (ctx->pc == 0x4E39E4u) {
        ctx->pc = 0x4E39E4u;
            // 0x4e39e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E39E8u;
        goto label_4e39e8;
    }
    ctx->pc = 0x4E39E0u;
    SET_GPR_U32(ctx, 31, 0x4E39E8u);
    ctx->pc = 0x4E39E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39E0u;
            // 0x4e39e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E39E8u; }
        if (ctx->pc != 0x4E39E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E39E8u; }
        if (ctx->pc != 0x4E39E8u) { return; }
    }
    ctx->pc = 0x4E39E8u;
label_4e39e8:
    // 0x4e39e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4e39e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4e39ec:
    // 0x4e39ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e39ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e39f0:
    // 0x4e39f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e39f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e39f4:
    // 0x4e39f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e39f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e39f8:
    // 0x4e39f8: 0x3e00008  jr          $ra
label_4e39fc:
    if (ctx->pc == 0x4E39FCu) {
        ctx->pc = 0x4E39FCu;
            // 0x4e39fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E3A00u;
        goto label_4e3a00;
    }
    ctx->pc = 0x4E39F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E39FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E39F8u;
            // 0x4e39fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3A00u;
label_4e3a00:
    // 0x4e3a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e3a04:
    // 0x4e3a04: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e3a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e3a08:
    // 0x4e3a08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3a08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e3a0c:
    // 0x4e3a0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e3a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3a10:
    // 0x4e3a10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3a10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3a14:
    // 0x4e3a14: 0x12000037  beqz        $s0, . + 4 + (0x37 << 2)
label_4e3a18:
    if (ctx->pc == 0x4E3A18u) {
        ctx->pc = 0x4E3A18u;
            // 0x4e3a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3A1Cu;
        goto label_4e3a1c;
    }
    ctx->pc = 0x4E3A14u;
    {
        const bool branch_taken_0x4e3a14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3A14u;
            // 0x4e3a18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3a14) {
            ctx->pc = 0x4E3AF4u;
            goto label_4e3af4;
        }
    }
    ctx->pc = 0x4E3A1Cu;
label_4e3a1c:
    // 0x4e3a1c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e3a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e3a20:
    // 0x4e3a20: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e3a24:
    // 0x4e3a24: 0x246337e0  addiu       $v1, $v1, 0x37E0
    ctx->pc = 0x4e3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14304));
label_4e3a28:
    // 0x4e3a28: 0x24423820  addiu       $v0, $v0, 0x3820
    ctx->pc = 0x4e3a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14368));
label_4e3a2c:
    // 0x4e3a2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3a30:
    // 0x4e3a30: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e3a30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e3a34:
    // 0x4e3a34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4e3a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e3a38:
    // 0x4e3a38: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x4e3a38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_4e3a3c:
    // 0x4e3a3c: 0x320f809  jalr        $t9
label_4e3a40:
    if (ctx->pc == 0x4E3A40u) {
        ctx->pc = 0x4E3A44u;
        goto label_4e3a44;
    }
    ctx->pc = 0x4E3A3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3A44u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3A44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3A44u; }
            if (ctx->pc != 0x4E3A44u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3A44u;
label_4e3a44:
    // 0x4e3a44: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x4e3a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_4e3a48:
    // 0x4e3a48: 0x26040130  addiu       $a0, $s0, 0x130
    ctx->pc = 0x4e3a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
label_4e3a4c:
    // 0x4e3a4c: 0x24a53b10  addiu       $a1, $a1, 0x3B10
    ctx->pc = 0x4e3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 15120));
label_4e3a50:
    // 0x4e3a50: 0x24060120  addiu       $a2, $zero, 0x120
    ctx->pc = 0x4e3a50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
label_4e3a54:
    // 0x4e3a54: 0xc0407e8  jal         func_101FA0
label_4e3a58:
    if (ctx->pc == 0x4E3A58u) {
        ctx->pc = 0x4E3A58u;
            // 0x4e3a58: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x4E3A5Cu;
        goto label_4e3a5c;
    }
    ctx->pc = 0x4E3A54u;
    SET_GPR_U32(ctx, 31, 0x4E3A5Cu);
    ctx->pc = 0x4E3A58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3A54u;
            // 0x4e3a58: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101FA0u;
    if (runtime->hasFunction(0x101FA0u)) {
        auto targetFn = runtime->lookupFunction(0x101FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3A5Cu; }
        if (ctx->pc != 0x4E3A5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101FA0_0x101fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3A5Cu; }
        if (ctx->pc != 0x4E3A5Cu) { return; }
    }
    ctx->pc = 0x4E3A5Cu;
label_4e3a5c:
    // 0x4e3a5c: 0x52000020  beql        $s0, $zero, . + 4 + (0x20 << 2)
label_4e3a60:
    if (ctx->pc == 0x4E3A60u) {
        ctx->pc = 0x4E3A60u;
            // 0x4e3a60: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x4E3A64u;
        goto label_4e3a64;
    }
    ctx->pc = 0x4E3A5Cu;
    {
        const bool branch_taken_0x4e3a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3a5c) {
            ctx->pc = 0x4E3A60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3A5Cu;
            // 0x4e3a60: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3AE0u;
            goto label_4e3ae0;
        }
    }
    ctx->pc = 0x4E3A64u;
label_4e3a64:
    // 0x4e3a64: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e3a64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3a68:
    // 0x4e3a68: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e3a68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e3a6c:
    // 0x4e3a6c: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e3a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4e3a70:
    // 0x4e3a70: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e3a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4e3a74:
    // 0x4e3a74: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3a78:
    // 0x4e3a78: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e3a7c:
    // 0x4e3a7c: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4e3a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4e3a80:
    // 0x4e3a80: 0xc0aecc4  jal         func_2BB310
label_4e3a84:
    if (ctx->pc == 0x4E3A84u) {
        ctx->pc = 0x4E3A84u;
            // 0x4e3a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E3A88u;
        goto label_4e3a88;
    }
    ctx->pc = 0x4E3A80u;
    SET_GPR_U32(ctx, 31, 0x4E3A88u);
    ctx->pc = 0x4E3A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3A80u;
            // 0x4e3a84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3A88u; }
        if (ctx->pc != 0x4E3A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3A88u; }
        if (ctx->pc != 0x4E3A88u) { return; }
    }
    ctx->pc = 0x4E3A88u;
label_4e3a88:
    // 0x4e3a88: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e3a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4e3a8c:
    // 0x4e3a8c: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4e3a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4e3a90:
    // 0x4e3a90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e3a94:
    if (ctx->pc == 0x4E3A94u) {
        ctx->pc = 0x4E3A94u;
            // 0x4e3a94: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4E3A98u;
        goto label_4e3a98;
    }
    ctx->pc = 0x4E3A90u;
    {
        const bool branch_taken_0x4e3a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3a90) {
            ctx->pc = 0x4E3A94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3A90u;
            // 0x4e3a94: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3AACu;
            goto label_4e3aac;
        }
    }
    ctx->pc = 0x4E3A98u;
label_4e3a98:
    // 0x4e3a98: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4e3a98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4e3a9c:
    // 0x4e3a9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e3a9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e3aa0:
    // 0x4e3aa0: 0x320f809  jalr        $t9
label_4e3aa4:
    if (ctx->pc == 0x4E3AA4u) {
        ctx->pc = 0x4E3AA4u;
            // 0x4e3aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E3AA8u;
        goto label_4e3aa8;
    }
    ctx->pc = 0x4E3AA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3AA8u);
        ctx->pc = 0x4E3AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AA0u;
            // 0x4e3aa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3AA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AA8u; }
            if (ctx->pc != 0x4E3AA8u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3AA8u;
label_4e3aa8:
    // 0x4e3aa8: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e3aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4e3aac:
    // 0x4e3aac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e3aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e3ab0:
    // 0x4e3ab0: 0xc0aec9c  jal         func_2BB270
label_4e3ab4:
    if (ctx->pc == 0x4E3AB4u) {
        ctx->pc = 0x4E3AB4u;
            // 0x4e3ab4: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4E3AB8u;
        goto label_4e3ab8;
    }
    ctx->pc = 0x4E3AB0u;
    SET_GPR_U32(ctx, 31, 0x4E3AB8u);
    ctx->pc = 0x4E3AB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AB0u;
            // 0x4e3ab4: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AB8u; }
        if (ctx->pc != 0x4E3AB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AB8u; }
        if (ctx->pc != 0x4E3AB8u) { return; }
    }
    ctx->pc = 0x4E3AB8u;
label_4e3ab8:
    // 0x4e3ab8: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e3ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4e3abc:
    // 0x4e3abc: 0xc0aec88  jal         func_2BB220
label_4e3ac0:
    if (ctx->pc == 0x4E3AC0u) {
        ctx->pc = 0x4E3AC0u;
            // 0x4e3ac0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E3AC4u;
        goto label_4e3ac4;
    }
    ctx->pc = 0x4E3ABCu;
    SET_GPR_U32(ctx, 31, 0x4E3AC4u);
    ctx->pc = 0x4E3AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3ABCu;
            // 0x4e3ac0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AC4u; }
        if (ctx->pc != 0x4E3AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AC4u; }
        if (ctx->pc != 0x4E3AC4u) { return; }
    }
    ctx->pc = 0x4E3AC4u;
label_4e3ac4:
    // 0x4e3ac4: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4e3ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4e3ac8:
    // 0x4e3ac8: 0xc0aec0c  jal         func_2BB030
label_4e3acc:
    if (ctx->pc == 0x4E3ACCu) {
        ctx->pc = 0x4E3ACCu;
            // 0x4e3acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3AD0u;
        goto label_4e3ad0;
    }
    ctx->pc = 0x4E3AC8u;
    SET_GPR_U32(ctx, 31, 0x4E3AD0u);
    ctx->pc = 0x4E3ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AC8u;
            // 0x4e3acc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AD0u; }
        if (ctx->pc != 0x4E3AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AD0u; }
        if (ctx->pc != 0x4E3AD0u) { return; }
    }
    ctx->pc = 0x4E3AD0u;
label_4e3ad0:
    // 0x4e3ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ad4:
    // 0x4e3ad4: 0xc0aeaa8  jal         func_2BAAA0
label_4e3ad8:
    if (ctx->pc == 0x4E3AD8u) {
        ctx->pc = 0x4E3AD8u;
            // 0x4e3ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3ADCu;
        goto label_4e3adc;
    }
    ctx->pc = 0x4E3AD4u;
    SET_GPR_U32(ctx, 31, 0x4E3ADCu);
    ctx->pc = 0x4E3AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AD4u;
            // 0x4e3ad8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3ADCu; }
        if (ctx->pc != 0x4E3ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3ADCu; }
        if (ctx->pc != 0x4E3ADCu) { return; }
    }
    ctx->pc = 0x4E3ADCu;
label_4e3adc:
    // 0x4e3adc: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e3adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e3ae0:
    // 0x4e3ae0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e3ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e3ae4:
    // 0x4e3ae4: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e3ae8:
    if (ctx->pc == 0x4E3AE8u) {
        ctx->pc = 0x4E3AE8u;
            // 0x4e3ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3AECu;
        goto label_4e3aec;
    }
    ctx->pc = 0x4E3AE4u;
    {
        const bool branch_taken_0x4e3ae4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e3ae4) {
            ctx->pc = 0x4E3AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AE4u;
            // 0x4e3ae8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3AF8u;
            goto label_4e3af8;
        }
    }
    ctx->pc = 0x4E3AECu;
label_4e3aec:
    // 0x4e3aec: 0xc0400a8  jal         func_1002A0
label_4e3af0:
    if (ctx->pc == 0x4E3AF0u) {
        ctx->pc = 0x4E3AF0u;
            // 0x4e3af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3AF4u;
        goto label_4e3af4;
    }
    ctx->pc = 0x4E3AECu;
    SET_GPR_U32(ctx, 31, 0x4E3AF4u);
    ctx->pc = 0x4E3AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3AECu;
            // 0x4e3af0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AF4u; }
        if (ctx->pc != 0x4E3AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3AF4u; }
        if (ctx->pc != 0x4E3AF4u) { return; }
    }
    ctx->pc = 0x4E3AF4u;
label_4e3af4:
    // 0x4e3af4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e3af4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3af8:
    // 0x4e3af8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e3af8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3afc:
    // 0x4e3afc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3afcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3b00:
    // 0x4e3b00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e3b00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3b04:
    // 0x4e3b04: 0x3e00008  jr          $ra
label_4e3b08:
    if (ctx->pc == 0x4E3B08u) {
        ctx->pc = 0x4E3B08u;
            // 0x4e3b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E3B0Cu;
        goto label_4e3b0c;
    }
    ctx->pc = 0x4E3B04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B04u;
            // 0x4e3b08: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3B0Cu;
label_4e3b0c:
    // 0x4e3b0c: 0x0  nop
    ctx->pc = 0x4e3b0cu;
    // NOP
label_4e3b10:
    // 0x4e3b10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4e3b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4e3b14:
    // 0x4e3b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4e3b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_4e3b18:
    // 0x4e3b18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4e3b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4e3b1c:
    // 0x4e3b1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4e3b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4e3b20:
    // 0x4e3b20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4e3b20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4e3b24:
    // 0x4e3b24: 0x1200002c  beqz        $s0, . + 4 + (0x2C << 2)
label_4e3b28:
    if (ctx->pc == 0x4E3B28u) {
        ctx->pc = 0x4E3B28u;
            // 0x4e3b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B2Cu;
        goto label_4e3b2c;
    }
    ctx->pc = 0x4E3B24u;
    {
        const bool branch_taken_0x4e3b24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B24u;
            // 0x4e3b28: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b24) {
            ctx->pc = 0x4E3BD8u;
            goto label_4e3bd8;
        }
    }
    ctx->pc = 0x4E3B2Cu;
label_4e3b2c:
    // 0x4e3b2c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x4e3b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_4e3b30:
    // 0x4e3b30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4e3b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4e3b34:
    // 0x4e3b34: 0x24633930  addiu       $v1, $v1, 0x3930
    ctx->pc = 0x4e3b34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14640));
label_4e3b38:
    // 0x4e3b38: 0x24423970  addiu       $v0, $v0, 0x3970
    ctx->pc = 0x4e3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14704));
label_4e3b3c:
    // 0x4e3b3c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3b40:
    // 0x4e3b40: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_4e3b44:
    if (ctx->pc == 0x4E3B44u) {
        ctx->pc = 0x4E3B44u;
            // 0x4e3b44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->pc = 0x4E3B48u;
        goto label_4e3b48;
    }
    ctx->pc = 0x4E3B40u;
    {
        const bool branch_taken_0x4e3b40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B40u;
            // 0x4e3b44: 0xae020054  sw          $v0, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3b40) {
            ctx->pc = 0x4E3BC0u;
            goto label_4e3bc0;
        }
    }
    ctx->pc = 0x4E3B48u;
label_4e3b48:
    // 0x4e3b48: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x4e3b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_4e3b4c:
    // 0x4e3b4c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4e3b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_4e3b50:
    // 0x4e3b50: 0x24632290  addiu       $v1, $v1, 0x2290
    ctx->pc = 0x4e3b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8848));
label_4e3b54:
    // 0x4e3b54: 0x244222d0  addiu       $v0, $v0, 0x22D0
    ctx->pc = 0x4e3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8912));
label_4e3b58:
    // 0x4e3b58: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x4e3b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_4e3b5c:
    // 0x4e3b5c: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x4e3b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_4e3b60:
    // 0x4e3b60: 0x8e04009c  lw          $a0, 0x9C($s0)
    ctx->pc = 0x4e3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
label_4e3b64:
    // 0x4e3b64: 0xc0aecc4  jal         func_2BB310
label_4e3b68:
    if (ctx->pc == 0x4E3B68u) {
        ctx->pc = 0x4E3B68u;
            // 0x4e3b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E3B6Cu;
        goto label_4e3b6c;
    }
    ctx->pc = 0x4E3B64u;
    SET_GPR_U32(ctx, 31, 0x4E3B6Cu);
    ctx->pc = 0x4E3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B64u;
            // 0x4e3b68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB310u;
    if (runtime->hasFunction(0x2BB310u)) {
        auto targetFn = runtime->lookupFunction(0x2BB310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3B6Cu; }
        if (ctx->pc != 0x4E3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB310_0x2bb310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3B6Cu; }
        if (ctx->pc != 0x4E3B6Cu) { return; }
    }
    ctx->pc = 0x4E3B6Cu;
label_4e3b6c:
    // 0x4e3b6c: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x4e3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_4e3b70:
    // 0x4e3b70: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x4e3b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_4e3b74:
    // 0x4e3b74: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_4e3b78:
    if (ctx->pc == 0x4E3B78u) {
        ctx->pc = 0x4E3B78u;
            // 0x4e3b78: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->pc = 0x4E3B7Cu;
        goto label_4e3b7c;
    }
    ctx->pc = 0x4E3B74u;
    {
        const bool branch_taken_0x4e3b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3b74) {
            ctx->pc = 0x4E3B78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B74u;
            // 0x4e3b78: 0x2604006c  addiu       $a0, $s0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3B90u;
            goto label_4e3b90;
        }
    }
    ctx->pc = 0x4E3B7Cu;
label_4e3b7c:
    // 0x4e3b7c: 0x8c990048  lw          $t9, 0x48($a0)
    ctx->pc = 0x4e3b7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_4e3b80:
    // 0x4e3b80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x4e3b80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_4e3b84:
    // 0x4e3b84: 0x320f809  jalr        $t9
label_4e3b88:
    if (ctx->pc == 0x4E3B88u) {
        ctx->pc = 0x4E3B88u;
            // 0x4e3b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4E3B8Cu;
        goto label_4e3b8c;
    }
    ctx->pc = 0x4E3B84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3B8Cu);
        ctx->pc = 0x4E3B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B84u;
            // 0x4e3b88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3B8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3B8Cu; }
            if (ctx->pc != 0x4E3B8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E3B8Cu;
label_4e3b8c:
    // 0x4e3b8c: 0x2604006c  addiu       $a0, $s0, 0x6C
    ctx->pc = 0x4e3b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_4e3b90:
    // 0x4e3b90: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4e3b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4e3b94:
    // 0x4e3b94: 0xc0aec9c  jal         func_2BB270
label_4e3b98:
    if (ctx->pc == 0x4E3B98u) {
        ctx->pc = 0x4E3B98u;
            // 0x4e3b98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->pc = 0x4E3B9Cu;
        goto label_4e3b9c;
    }
    ctx->pc = 0x4E3B94u;
    SET_GPR_U32(ctx, 31, 0x4E3B9Cu);
    ctx->pc = 0x4E3B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3B94u;
            // 0x4e3b98: 0xae0000a0  sw          $zero, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB270u;
    if (runtime->hasFunction(0x2BB270u)) {
        auto targetFn = runtime->lookupFunction(0x2BB270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3B9Cu; }
        if (ctx->pc != 0x4E3B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB270_0x2bb270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3B9Cu; }
        if (ctx->pc != 0x4E3B9Cu) { return; }
    }
    ctx->pc = 0x4E3B9Cu;
label_4e3b9c:
    // 0x4e3b9c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x4e3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
label_4e3ba0:
    // 0x4e3ba0: 0xc0aec88  jal         func_2BB220
label_4e3ba4:
    if (ctx->pc == 0x4E3BA4u) {
        ctx->pc = 0x4E3BA4u;
            // 0x4e3ba4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x4E3BA8u;
        goto label_4e3ba8;
    }
    ctx->pc = 0x4E3BA0u;
    SET_GPR_U32(ctx, 31, 0x4E3BA8u);
    ctx->pc = 0x4E3BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BA0u;
            // 0x4e3ba4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB220u;
    if (runtime->hasFunction(0x2BB220u)) {
        auto targetFn = runtime->lookupFunction(0x2BB220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BA8u; }
        if (ctx->pc != 0x4E3BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB220_0x2bb220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BA8u; }
        if (ctx->pc != 0x4E3BA8u) { return; }
    }
    ctx->pc = 0x4E3BA8u;
label_4e3ba8:
    // 0x4e3ba8: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x4e3ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_4e3bac:
    // 0x4e3bac: 0xc0aec0c  jal         func_2BB030
label_4e3bb0:
    if (ctx->pc == 0x4E3BB0u) {
        ctx->pc = 0x4E3BB0u;
            // 0x4e3bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3BB4u;
        goto label_4e3bb4;
    }
    ctx->pc = 0x4E3BACu;
    SET_GPR_U32(ctx, 31, 0x4E3BB4u);
    ctx->pc = 0x4E3BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BACu;
            // 0x4e3bb0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB030u;
    if (runtime->hasFunction(0x2BB030u)) {
        auto targetFn = runtime->lookupFunction(0x2BB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BB4u; }
        if (ctx->pc != 0x4E3BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BB030_0x2bb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BB4u; }
        if (ctx->pc != 0x4E3BB4u) { return; }
    }
    ctx->pc = 0x4E3BB4u;
label_4e3bb4:
    // 0x4e3bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3bb8:
    // 0x4e3bb8: 0xc0aeaa8  jal         func_2BAAA0
label_4e3bbc:
    if (ctx->pc == 0x4E3BBCu) {
        ctx->pc = 0x4E3BBCu;
            // 0x4e3bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3BC0u;
        goto label_4e3bc0;
    }
    ctx->pc = 0x4E3BB8u;
    SET_GPR_U32(ctx, 31, 0x4E3BC0u);
    ctx->pc = 0x4E3BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BB8u;
            // 0x4e3bbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BAAA0u;
    if (runtime->hasFunction(0x2BAAA0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAAA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BC0u; }
        if (ctx->pc != 0x4E3BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002BAAA0_0x2baaa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BC0u; }
        if (ctx->pc != 0x4E3BC0u) { return; }
    }
    ctx->pc = 0x4E3BC0u;
label_4e3bc0:
    // 0x4e3bc0: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x4e3bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_4e3bc4:
    // 0x4e3bc4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x4e3bc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_4e3bc8:
    // 0x4e3bc8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_4e3bcc:
    if (ctx->pc == 0x4E3BCCu) {
        ctx->pc = 0x4E3BCCu;
            // 0x4e3bcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3BD0u;
        goto label_4e3bd0;
    }
    ctx->pc = 0x4E3BC8u;
    {
        const bool branch_taken_0x4e3bc8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x4e3bc8) {
            ctx->pc = 0x4E3BCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BC8u;
            // 0x4e3bcc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3BDCu;
            goto label_4e3bdc;
        }
    }
    ctx->pc = 0x4E3BD0u;
label_4e3bd0:
    // 0x4e3bd0: 0xc0400a8  jal         func_1002A0
label_4e3bd4:
    if (ctx->pc == 0x4E3BD4u) {
        ctx->pc = 0x4E3BD4u;
            // 0x4e3bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3BD8u;
        goto label_4e3bd8;
    }
    ctx->pc = 0x4E3BD0u;
    SET_GPR_U32(ctx, 31, 0x4E3BD8u);
    ctx->pc = 0x4E3BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BD0u;
            // 0x4e3bd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BD8u; }
        if (ctx->pc != 0x4E3BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3BD8u; }
        if (ctx->pc != 0x4E3BD8u) { return; }
    }
    ctx->pc = 0x4E3BD8u;
label_4e3bd8:
    // 0x4e3bd8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4e3bd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3bdc:
    // 0x4e3bdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4e3bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3be0:
    // 0x4e3be0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4e3be0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3be4:
    // 0x4e3be4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4e3be4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4e3be8:
    // 0x4e3be8: 0x3e00008  jr          $ra
label_4e3bec:
    if (ctx->pc == 0x4E3BECu) {
        ctx->pc = 0x4E3BECu;
            // 0x4e3bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x4E3BF0u;
        goto label_4e3bf0;
    }
    ctx->pc = 0x4E3BE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3BE8u;
            // 0x4e3bec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3BF0u;
label_4e3bf0:
    // 0x4e3bf0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x4e3bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_4e3bf4:
    // 0x4e3bf4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4e3bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4e3bf8:
    // 0x4e3bf8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x4e3bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_4e3bfc:
    // 0x4e3bfc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x4e3bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_4e3c00:
    // 0x4e3c00: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x4e3c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_4e3c04:
    // 0x4e3c04: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4e3c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_4e3c08:
    // 0x4e3c08: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4e3c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_4e3c0c:
    // 0x4e3c0c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x4e3c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_4e3c10:
    // 0x4e3c10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4e3c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_4e3c14:
    // 0x4e3c14: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4e3c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4e3c18:
    // 0x4e3c18: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4e3c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_4e3c1c:
    // 0x4e3c1c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4e3c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4e3c20:
    // 0x4e3c20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x4e3c20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_4e3c24:
    // 0x4e3c24: 0x8c660e80  lw          $a2, 0xE80($v1)
    ctx->pc = 0x4e3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3712)));
label_4e3c28:
    // 0x4e3c28: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x4e3c28u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4e3c2c:
    // 0x4e3c2c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4e3c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4e3c30:
    // 0x4e3c30: 0x10a30010  beq         $a1, $v1, . + 4 + (0x10 << 2)
label_4e3c34:
    if (ctx->pc == 0x4E3C34u) {
        ctx->pc = 0x4E3C34u;
            // 0x4e3c34: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3C38u;
        goto label_4e3c38;
    }
    ctx->pc = 0x4E3C30u;
    {
        const bool branch_taken_0x4e3c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4E3C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3C30u;
            // 0x4e3c34: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3c30) {
            ctx->pc = 0x4E3C74u;
            goto label_4e3c74;
        }
    }
    ctx->pc = 0x4E3C38u;
label_4e3c38:
    // 0x4e3c38: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4e3c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4e3c3c:
    // 0x4e3c3c: 0x50a30093  beql        $a1, $v1, . + 4 + (0x93 << 2)
label_4e3c40:
    if (ctx->pc == 0x4E3C40u) {
        ctx->pc = 0x4E3C40u;
            // 0x4e3c40: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4E3C44u;
        goto label_4e3c44;
    }
    ctx->pc = 0x4E3C3Cu;
    {
        const bool branch_taken_0x4e3c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3c3c) {
            ctx->pc = 0x4E3C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3C3Cu;
            // 0x4e3c40: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3E8Cu;
            goto label_4e3e8c;
        }
    }
    ctx->pc = 0x4E3C44u;
label_4e3c44:
    // 0x4e3c44: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4e3c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4e3c48:
    // 0x4e3c48: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4e3c4c:
    if (ctx->pc == 0x4E3C4Cu) {
        ctx->pc = 0x4E3C4Cu;
            // 0x4e3c4c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x4E3C50u;
        goto label_4e3c50;
    }
    ctx->pc = 0x4E3C48u;
    {
        const bool branch_taken_0x4e3c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4e3c48) {
            ctx->pc = 0x4E3C4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3C48u;
            // 0x4e3c4c: 0x8c990000  lw          $t9, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4E3C58u;
            goto label_4e3c58;
        }
    }
    ctx->pc = 0x4E3C50u;
label_4e3c50:
    // 0x4e3c50: 0x1000008d  b           . + 4 + (0x8D << 2)
label_4e3c54:
    if (ctx->pc == 0x4E3C54u) {
        ctx->pc = 0x4E3C58u;
        goto label_4e3c58;
    }
    ctx->pc = 0x4E3C50u;
    {
        const bool branch_taken_0x4e3c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3c50) {
            ctx->pc = 0x4E3E88u;
            goto label_4e3e88;
        }
    }
    ctx->pc = 0x4E3C58u;
label_4e3c58:
    // 0x4e3c58: 0x8cc20cb4  lw          $v0, 0xCB4($a2)
    ctx->pc = 0x4e3c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3252)));
label_4e3c5c:
    // 0x4e3c5c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x4e3c5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_4e3c60:
    // 0x4e3c60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x4e3c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_4e3c64:
    // 0x4e3c64: 0x320f809  jalr        $t9
label_4e3c68:
    if (ctx->pc == 0x4E3C68u) {
        ctx->pc = 0x4E3C68u;
            // 0x4e3c68: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x4E3C6Cu;
        goto label_4e3c6c;
    }
    ctx->pc = 0x4E3C64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3C6Cu);
        ctx->pc = 0x4E3C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3C64u;
            // 0x4e3c68: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3C6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3C6Cu; }
            if (ctx->pc != 0x4E3C6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4E3C6Cu;
label_4e3c6c:
    // 0x4e3c6c: 0x10000086  b           . + 4 + (0x86 << 2)
label_4e3c70:
    if (ctx->pc == 0x4E3C70u) {
        ctx->pc = 0x4E3C74u;
        goto label_4e3c74;
    }
    ctx->pc = 0x4E3C6Cu;
    {
        const bool branch_taken_0x4e3c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3c6c) {
            ctx->pc = 0x4E3E88u;
            goto label_4e3e88;
        }
    }
    ctx->pc = 0x4E3C74u;
label_4e3c74:
    // 0x4e3c74: 0x8ef10070  lw          $s1, 0x70($s7)
    ctx->pc = 0x4e3c74u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 112)));
label_4e3c78:
    // 0x4e3c78: 0x12200083  beqz        $s1, . + 4 + (0x83 << 2)
label_4e3c7c:
    if (ctx->pc == 0x4E3C7Cu) {
        ctx->pc = 0x4E3C80u;
        goto label_4e3c80;
    }
    ctx->pc = 0x4E3C78u;
    {
        const bool branch_taken_0x4e3c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4e3c78) {
            ctx->pc = 0x4E3E88u;
            goto label_4e3e88;
        }
    }
    ctx->pc = 0x4E3C80u;
label_4e3c80:
    // 0x4e3c80: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x4e3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_4e3c84:
    // 0x4e3c84: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4e3c84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4e3c88:
    // 0x4e3c88: 0x8c65d130  lw          $a1, -0x2ED0($v1)
    ctx->pc = 0x4e3c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955312)));
label_4e3c8c:
    // 0x4e3c8c: 0x8c44d120  lw          $a0, -0x2EE0($v0)
    ctx->pc = 0x4e3c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_4e3c90:
    // 0x4e3c90: 0x8ca50130  lw          $a1, 0x130($a1)
    ctx->pc = 0x4e3c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
label_4e3c94:
    // 0x4e3c94: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3c98:
    // 0x4e3c98: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x4e3c98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_4e3c9c:
    // 0x4e3c9c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3ca0:
    // 0x4e3ca0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x4e3ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_4e3ca4:
    // 0x4e3ca4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x4e3ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_4e3ca8:
    // 0x4e3ca8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x4e3ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4e3cac:
    // 0x4e3cac: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4e3cacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4e3cb0:
    // 0x4e3cb0: 0x249e0010  addiu       $fp, $a0, 0x10
    ctx->pc = 0x4e3cb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_4e3cb4:
    // 0x4e3cb4: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4e3cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4e3cb8:
    // 0x4e3cb8: 0x8ee40088  lw          $a0, 0x88($s7)
    ctx->pc = 0x4e3cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 136)));
label_4e3cbc:
    // 0x4e3cbc: 0xc04e738  jal         func_139CE0
label_4e3cc0:
    if (ctx->pc == 0x4E3CC0u) {
        ctx->pc = 0x4E3CC0u;
            // 0x4e3cc0: 0x26f40084  addiu       $s4, $s7, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
        ctx->pc = 0x4E3CC4u;
        goto label_4e3cc4;
    }
    ctx->pc = 0x4E3CBCu;
    SET_GPR_U32(ctx, 31, 0x4E3CC4u);
    ctx->pc = 0x4E3CC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3CBCu;
            // 0x4e3cc0: 0x26f40084  addiu       $s4, $s7, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3CC4u; }
        if (ctx->pc != 0x4E3CC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3CC4u; }
        if (ctx->pc != 0x4E3CC4u) { return; }
    }
    ctx->pc = 0x4E3CC4u;
label_4e3cc4:
    // 0x4e3cc4: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x4e3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
label_4e3cc8:
    // 0x4e3cc8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x4e3cc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3ccc:
    // 0x4e3ccc: 0xc45481e0  lwc1        $f20, -0x7E20($v0)
    ctx->pc = 0x4e3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294935008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e3cd0:
    // 0x4e3cd0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4e3cd0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3cd4:
    // 0x4e3cd4: 0x27a3018c  addiu       $v1, $sp, 0x18C
    ctx->pc = 0x4e3cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_4e3cd8:
    // 0x4e3cd8: 0x27a20140  addiu       $v0, $sp, 0x140
    ctx->pc = 0x4e3cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_4e3cdc:
    // 0x4e3cdc: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x4e3cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_4e3ce0:
    // 0x4e3ce0: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x4e3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_4e3ce4:
    // 0x4e3ce4: 0x8ee20074  lw          $v0, 0x74($s7)
    ctx->pc = 0x4e3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 116)));
label_4e3ce8:
    // 0x4e3ce8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x4e3ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_4e3cec:
    // 0x4e3cec: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x4e3cecu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4e3cf0:
    // 0x4e3cf0: 0xc138fd8  jal         func_4E3F60
label_4e3cf4:
    if (ctx->pc == 0x4E3CF4u) {
        ctx->pc = 0x4E3CF4u;
            // 0x4e3cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3CF8u;
        goto label_4e3cf8;
    }
    ctx->pc = 0x4E3CF0u;
    SET_GPR_U32(ctx, 31, 0x4E3CF8u);
    ctx->pc = 0x4E3CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3CF0u;
            // 0x4e3cf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3F60u;
    if (runtime->hasFunction(0x4E3F60u)) {
        auto targetFn = runtime->lookupFunction(0x4E3F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3CF8u; }
        if (ctx->pc != 0x4E3CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E3F60_0x4e3f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3CF8u; }
        if (ctx->pc != 0x4E3CF8u) { return; }
    }
    ctx->pc = 0x4E3CF8u;
label_4e3cf8:
    // 0x4e3cf8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4e3cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4e3cfc:
    // 0x4e3cfc: 0x1443003a  bne         $v0, $v1, . + 4 + (0x3A << 2)
label_4e3d00:
    if (ctx->pc == 0x4E3D00u) {
        ctx->pc = 0x4E3D04u;
        goto label_4e3d04;
    }
    ctx->pc = 0x4E3CFCu;
    {
        const bool branch_taken_0x4e3cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4e3cfc) {
            ctx->pc = 0x4E3DE8u;
            goto label_4e3de8;
        }
    }
    ctx->pc = 0x4E3D04u;
label_4e3d04:
    // 0x4e3d04: 0xc0d1c14  jal         func_347050
label_4e3d08:
    if (ctx->pc == 0x4E3D08u) {
        ctx->pc = 0x4E3D08u;
            // 0x4e3d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D0Cu;
        goto label_4e3d0c;
    }
    ctx->pc = 0x4E3D04u;
    SET_GPR_U32(ctx, 31, 0x4E3D0Cu);
    ctx->pc = 0x4E3D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D04u;
            // 0x4e3d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D0Cu; }
        if (ctx->pc != 0x4E3D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D0Cu; }
        if (ctx->pc != 0x4E3D0Cu) { return; }
    }
    ctx->pc = 0x4E3D0Cu;
label_4e3d0c:
    // 0x4e3d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e3d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d10:
    // 0x4e3d10: 0xc04f278  jal         func_13C9E0
label_4e3d14:
    if (ctx->pc == 0x4E3D14u) {
        ctx->pc = 0x4E3D14u;
            // 0x4e3d14: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E3D18u;
        goto label_4e3d18;
    }
    ctx->pc = 0x4E3D10u;
    SET_GPR_U32(ctx, 31, 0x4E3D18u);
    ctx->pc = 0x4E3D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D10u;
            // 0x4e3d14: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D18u; }
        if (ctx->pc != 0x4E3D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D18u; }
        if (ctx->pc != 0x4E3D18u) { return; }
    }
    ctx->pc = 0x4E3D18u;
label_4e3d18:
    // 0x4e3d18: 0xc0d1c10  jal         func_347040
label_4e3d1c:
    if (ctx->pc == 0x4E3D1Cu) {
        ctx->pc = 0x4E3D1Cu;
            // 0x4e3d1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D20u;
        goto label_4e3d20;
    }
    ctx->pc = 0x4E3D18u;
    SET_GPR_U32(ctx, 31, 0x4E3D20u);
    ctx->pc = 0x4E3D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D18u;
            // 0x4e3d1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D20u; }
        if (ctx->pc != 0x4E3D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D20u; }
        if (ctx->pc != 0x4E3D20u) { return; }
    }
    ctx->pc = 0x4E3D20u;
label_4e3d20:
    // 0x4e3d20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x4e3d20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d24:
    // 0x4e3d24: 0xc04ce80  jal         func_133A00
label_4e3d28:
    if (ctx->pc == 0x4E3D28u) {
        ctx->pc = 0x4E3D28u;
            // 0x4e3d28: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E3D2Cu;
        goto label_4e3d2c;
    }
    ctx->pc = 0x4E3D24u;
    SET_GPR_U32(ctx, 31, 0x4E3D2Cu);
    ctx->pc = 0x4E3D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D24u;
            // 0x4e3d28: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D2Cu; }
        if (ctx->pc != 0x4E3D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D2Cu; }
        if (ctx->pc != 0x4E3D2Cu) { return; }
    }
    ctx->pc = 0x4E3D2Cu;
label_4e3d2c:
    // 0x4e3d2c: 0xc0d4108  jal         func_350420
label_4e3d30:
    if (ctx->pc == 0x4E3D30u) {
        ctx->pc = 0x4E3D34u;
        goto label_4e3d34;
    }
    ctx->pc = 0x4E3D2Cu;
    SET_GPR_U32(ctx, 31, 0x4E3D34u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D34u; }
        if (ctx->pc != 0x4E3D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D34u; }
        if (ctx->pc != 0x4E3D34u) { return; }
    }
    ctx->pc = 0x4E3D34u;
label_4e3d34:
    // 0x4e3d34: 0xc0b36b4  jal         func_2CDAD0
label_4e3d38:
    if (ctx->pc == 0x4E3D38u) {
        ctx->pc = 0x4E3D38u;
            // 0x4e3d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D3Cu;
        goto label_4e3d3c;
    }
    ctx->pc = 0x4E3D34u;
    SET_GPR_U32(ctx, 31, 0x4E3D3Cu);
    ctx->pc = 0x4E3D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D34u;
            // 0x4e3d38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D3Cu; }
        if (ctx->pc != 0x4E3D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D3Cu; }
        if (ctx->pc != 0x4E3D3Cu) { return; }
    }
    ctx->pc = 0x4E3D3Cu;
label_4e3d3c:
    // 0x4e3d3c: 0xc0b9c64  jal         func_2E7190
label_4e3d40:
    if (ctx->pc == 0x4E3D40u) {
        ctx->pc = 0x4E3D40u;
            // 0x4e3d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D44u;
        goto label_4e3d44;
    }
    ctx->pc = 0x4E3D3Cu;
    SET_GPR_U32(ctx, 31, 0x4E3D44u);
    ctx->pc = 0x4E3D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D3Cu;
            // 0x4e3d40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D44u; }
        if (ctx->pc != 0x4E3D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D44u; }
        if (ctx->pc != 0x4E3D44u) { return; }
    }
    ctx->pc = 0x4E3D44u;
label_4e3d44:
    // 0x4e3d44: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4e3d44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d48:
    // 0x4e3d48: 0xc0d4104  jal         func_350410
label_4e3d4c:
    if (ctx->pc == 0x4E3D4Cu) {
        ctx->pc = 0x4E3D4Cu;
            // 0x4e3d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D50u;
        goto label_4e3d50;
    }
    ctx->pc = 0x4E3D48u;
    SET_GPR_U32(ctx, 31, 0x4E3D50u);
    ctx->pc = 0x4E3D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D48u;
            // 0x4e3d4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D50u; }
        if (ctx->pc != 0x4E3D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D50u; }
        if (ctx->pc != 0x4E3D50u) { return; }
    }
    ctx->pc = 0x4E3D50u;
label_4e3d50:
    // 0x4e3d50: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e3d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e3d54:
    // 0x4e3d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4e3d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d58:
    // 0x4e3d58: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4e3d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d5c:
    // 0x4e3d5c: 0x27a70100  addiu       $a3, $sp, 0x100
    ctx->pc = 0x4e3d5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_4e3d60:
    // 0x4e3d60: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x4e3d60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d64:
    // 0x4e3d64: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4e3d64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d68:
    // 0x4e3d68: 0xc0d40ac  jal         func_3502B0
label_4e3d6c:
    if (ctx->pc == 0x4E3D6Cu) {
        ctx->pc = 0x4E3D6Cu;
            // 0x4e3d6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x4E3D70u;
        goto label_4e3d70;
    }
    ctx->pc = 0x4E3D68u;
    SET_GPR_U32(ctx, 31, 0x4E3D70u);
    ctx->pc = 0x4E3D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D68u;
            // 0x4e3d6c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D70u; }
        if (ctx->pc != 0x4E3D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D70u; }
        if (ctx->pc != 0x4E3D70u) { return; }
    }
    ctx->pc = 0x4E3D70u;
label_4e3d70:
    // 0x4e3d70: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x4e3d70u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_4e3d74:
    // 0x4e3d74: 0x1020001c  beqz        $at, . + 4 + (0x1C << 2)
label_4e3d78:
    if (ctx->pc == 0x4E3D78u) {
        ctx->pc = 0x4E3D78u;
            // 0x4e3d78: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x4E3D7Cu;
        goto label_4e3d7c;
    }
    ctx->pc = 0x4E3D74u;
    {
        const bool branch_taken_0x4e3d74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4E3D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D74u;
            // 0x4e3d78: 0xae620044  sw          $v0, 0x44($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3d74) {
            ctx->pc = 0x4E3DE8u;
            goto label_4e3de8;
        }
    }
    ctx->pc = 0x4E3D7Cu;
label_4e3d7c:
    // 0x4e3d7c: 0x8e840000  lw          $a0, 0x0($s4)
    ctx->pc = 0x4e3d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e3d80:
    // 0x4e3d80: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x4e3d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_4e3d84:
    // 0x4e3d84: 0xc138fb0  jal         func_4E3EC0
label_4e3d88:
    if (ctx->pc == 0x4E3D88u) {
        ctx->pc = 0x4E3D88u;
            // 0x4e3d88: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->pc = 0x4E3D8Cu;
        goto label_4e3d8c;
    }
    ctx->pc = 0x4E3D84u;
    SET_GPR_U32(ctx, 31, 0x4E3D8Cu);
    ctx->pc = 0x4E3D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D84u;
            // 0x4e3d88: 0x27a60188  addiu       $a2, $sp, 0x188 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x4E3EC0u;
    if (runtime->hasFunction(0x4E3EC0u)) {
        auto targetFn = runtime->lookupFunction(0x4E3EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D8Cu; }
        if (ctx->pc != 0x4E3D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_004E3EC0_0x4e3ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D8Cu; }
        if (ctx->pc != 0x4E3D8Cu) { return; }
    }
    ctx->pc = 0x4E3D8Cu;
label_4e3d8c:
    // 0x4e3d8c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x4e3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e3d90:
    // 0x4e3d90: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x4e3d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_4e3d94:
    // 0x4e3d94: 0xc04cd60  jal         func_133580
label_4e3d98:
    if (ctx->pc == 0x4E3D98u) {
        ctx->pc = 0x4E3D98u;
            // 0x4e3d98: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x4E3D9Cu;
        goto label_4e3d9c;
    }
    ctx->pc = 0x4E3D94u;
    SET_GPR_U32(ctx, 31, 0x4E3D9Cu);
    ctx->pc = 0x4E3D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3D94u;
            // 0x4e3d98: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D9Cu; }
        if (ctx->pc != 0x4E3D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3D9Cu; }
        if (ctx->pc != 0x4E3D9Cu) { return; }
    }
    ctx->pc = 0x4E3D9Cu;
label_4e3d9c:
    // 0x4e3d9c: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x4e3d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e3da0:
    // 0x4e3da0: 0x8fa40188  lw          $a0, 0x188($sp)
    ctx->pc = 0x4e3da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e3da4:
    // 0x4e3da4: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x4e3da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_4e3da8:
    // 0x4e3da8: 0xc04e4a4  jal         func_139290
label_4e3dac:
    if (ctx->pc == 0x4E3DACu) {
        ctx->pc = 0x4E3DACu;
            // 0x4e3dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3DB0u;
        goto label_4e3db0;
    }
    ctx->pc = 0x4E3DA8u;
    SET_GPR_U32(ctx, 31, 0x4E3DB0u);
    ctx->pc = 0x4E3DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3DA8u;
            // 0x4e3dac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3DB0u; }
        if (ctx->pc != 0x4E3DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3DB0u; }
        if (ctx->pc != 0x4E3DB0u) { return; }
    }
    ctx->pc = 0x4E3DB0u;
label_4e3db0:
    // 0x4e3db0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x4e3db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4e3db4:
    // 0x4e3db4: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x4e3db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_4e3db8:
    // 0x4e3db8: 0x320f809  jalr        $t9
label_4e3dbc:
    if (ctx->pc == 0x4E3DBCu) {
        ctx->pc = 0x4E3DBCu;
            // 0x4e3dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3DC0u;
        goto label_4e3dc0;
    }
    ctx->pc = 0x4E3DB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4E3DC0u);
        ctx->pc = 0x4E3DBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3DB8u;
            // 0x4e3dbc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4E3DC0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4E3DC0u; }
            if (ctx->pc != 0x4E3DC0u) { return; }
        }
        }
    }
    ctx->pc = 0x4E3DC0u;
label_4e3dc0:
    // 0x4e3dc0: 0xc66c0120  lwc1        $f12, 0x120($s3)
    ctx->pc = 0x4e3dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4e3dc4:
    // 0x4e3dc4: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x4e3dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_4e3dc8:
    // 0x4e3dc8: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4e3dc8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_4e3dcc:
    // 0x4e3dcc: 0x8fa50188  lw          $a1, 0x188($sp)
    ctx->pc = 0x4e3dccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_4e3dd0:
    // 0x4e3dd0: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x4e3dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4e3dd4:
    // 0x4e3dd4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x4e3dd4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4e3dd8:
    // 0x4e3dd8: 0x8e870008  lw          $a3, 0x8($s4)
    ctx->pc = 0x4e3dd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_4e3ddc:
    // 0x4e3ddc: 0x27a800b0  addiu       $t0, $sp, 0xB0
    ctx->pc = 0x4e3ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_4e3de0:
    // 0x4e3de0: 0xc04cff4  jal         func_133FD0
label_4e3de4:
    if (ctx->pc == 0x4E3DE4u) {
        ctx->pc = 0x4E3DE4u;
            // 0x4e3de4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x4E3DE8u;
        goto label_4e3de8;
    }
    ctx->pc = 0x4E3DE0u;
    SET_GPR_U32(ctx, 31, 0x4E3DE8u);
    ctx->pc = 0x4E3DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3DE0u;
            // 0x4e3de4: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3DE8u; }
        if (ctx->pc != 0x4E3DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3DE8u; }
        if (ctx->pc != 0x4E3DE8u) { return; }
    }
    ctx->pc = 0x4E3DE8u;
label_4e3de8:
    // 0x4e3de8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x4e3de8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_4e3dec:
    // 0x4e3dec: 0x2b1102b  sltu        $v0, $s5, $s1
    ctx->pc = 0x4e3decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e3df0:
    // 0x4e3df0: 0x1440ffb8  bnez        $v0, . + 4 + (-0x48 << 2)
label_4e3df4:
    if (ctx->pc == 0x4E3DF4u) {
        ctx->pc = 0x4E3DF4u;
            // 0x4e3df4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x4E3DF8u;
        goto label_4e3df8;
    }
    ctx->pc = 0x4E3DF0u;
    {
        const bool branch_taken_0x4e3df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4E3DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3DF0u;
            // 0x4e3df4: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3df0) {
            ctx->pc = 0x4E3CD4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e3cd4;
        }
    }
    ctx->pc = 0x4E3DF8u;
label_4e3df8:
    // 0x4e3df8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3dfc:
    // 0x4e3dfc: 0x8c49e3c0  lw          $t1, -0x1C40($v0)
    ctx->pc = 0x4e3dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960064)));
label_4e3e00:
    // 0x4e3e00: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4e3e04:
    if (ctx->pc == 0x4E3E04u) {
        ctx->pc = 0x4E3E04u;
            // 0x4e3e04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4E3E08u;
        goto label_4e3e08;
    }
    ctx->pc = 0x4E3E00u;
    {
        const bool branch_taken_0x4e3e00 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4E3E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3E00u;
            // 0x4e3e04: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3e00) {
            ctx->pc = 0x4E3E24u;
            goto label_4e3e24;
        }
    }
    ctx->pc = 0x4E3E08u;
label_4e3e08:
    // 0x4e3e08: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3e08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3e0c:
    // 0x4e3e0c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3e10:
    // 0x4e3e10: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4e3e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e3e14:
    // 0x4e3e14: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e3e14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e3e18:
    // 0x4e3e18: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e3e18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e3e1c:
    // 0x4e3e1c: 0xc055990  jal         func_156640
label_4e3e20:
    if (ctx->pc == 0x4E3E20u) {
        ctx->pc = 0x4E3E20u;
            // 0x4e3e20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3E24u;
        goto label_4e3e24;
    }
    ctx->pc = 0x4E3E1Cu;
    SET_GPR_U32(ctx, 31, 0x4E3E24u);
    ctx->pc = 0x4E3E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3E1Cu;
            // 0x4e3e20: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E24u; }
        if (ctx->pc != 0x4E3E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E24u; }
        if (ctx->pc != 0x4E3E24u) { return; }
    }
    ctx->pc = 0x4E3E24u;
label_4e3e24:
    // 0x4e3e24: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3e28:
    // 0x4e3e28: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3e2c:
    // 0x4e3e2c: 0xac60e3d8  sw          $zero, -0x1C28($v1)
    ctx->pc = 0x4e3e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960088), GPR_U32(ctx, 0));
label_4e3e30:
    // 0x4e3e30: 0xac40e3c0  sw          $zero, -0x1C40($v0)
    ctx->pc = 0x4e3e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960064), GPR_U32(ctx, 0));
label_4e3e34:
    // 0x4e3e34: 0xc04e738  jal         func_139CE0
label_4e3e38:
    if (ctx->pc == 0x4E3E38u) {
        ctx->pc = 0x4E3E38u;
            // 0x4e3e38: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x4E3E3Cu;
        goto label_4e3e3c;
    }
    ctx->pc = 0x4E3E34u;
    SET_GPR_U32(ctx, 31, 0x4E3E3Cu);
    ctx->pc = 0x4E3E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3E34u;
            // 0x4e3e38: 0x8e840004  lw          $a0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E3Cu; }
        if (ctx->pc != 0x4E3E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E3Cu; }
        if (ctx->pc != 0x4E3E3Cu) { return; }
    }
    ctx->pc = 0x4E3E3Cu;
label_4e3e3c:
    // 0x4e3e3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x4e3e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4e3e40:
    // 0x4e3e40: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4e3e40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_4e3e44:
    // 0x4e3e44: 0x91182b  sltu        $v1, $a0, $s1
    ctx->pc = 0x4e3e44u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_4e3e48:
    // 0x4e3e48: 0x0  nop
    ctx->pc = 0x4e3e48u;
    // NOP
label_4e3e4c:
    // 0x4e3e4c: 0x0  nop
    ctx->pc = 0x4e3e4cu;
    // NOP
label_4e3e50:
    // 0x4e3e50: 0x0  nop
    ctx->pc = 0x4e3e50u;
    // NOP
label_4e3e54:
    // 0x4e3e54: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_4e3e58:
    if (ctx->pc == 0x4E3E58u) {
        ctx->pc = 0x4E3E5Cu;
        goto label_4e3e5c;
    }
    ctx->pc = 0x4E3E54u;
    {
        const bool branch_taken_0x4e3e54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4e3e54) {
            ctx->pc = 0x4E3E40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4e3e40;
        }
    }
    ctx->pc = 0x4E3E5Cu;
label_4e3e5c:
    // 0x4e3e5c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3e60:
    // 0x4e3e60: 0x8c69e3c0  lw          $t1, -0x1C40($v1)
    ctx->pc = 0x4e3e60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
label_4e3e64:
    // 0x4e3e64: 0x19200008  blez        $t1, . + 4 + (0x8 << 2)
label_4e3e68:
    if (ctx->pc == 0x4E3E68u) {
        ctx->pc = 0x4E3E68u;
            // 0x4e3e68: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4E3E6Cu;
        goto label_4e3e6c;
    }
    ctx->pc = 0x4E3E64u;
    {
        const bool branch_taken_0x4e3e64 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x4E3E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3E64u;
            // 0x4e3e68: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4e3e64) {
            ctx->pc = 0x4E3E88u;
            goto label_4e3e88;
        }
    }
    ctx->pc = 0x4E3E6Cu;
label_4e3e6c:
    // 0x4e3e6c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4e3e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_4e3e70:
    // 0x4e3e70: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4e3e70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4e3e74:
    // 0x4e3e74: 0x8c65e3b0  lw          $a1, -0x1C50($v1)
    ctx->pc = 0x4e3e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
label_4e3e78:
    // 0x4e3e78: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x4e3e78u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_4e3e7c:
    // 0x4e3e7c: 0x8c46e3b8  lw          $a2, -0x1C48($v0)
    ctx->pc = 0x4e3e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960056)));
label_4e3e80:
    // 0x4e3e80: 0xc055990  jal         func_156640
label_4e3e84:
    if (ctx->pc == 0x4E3E84u) {
        ctx->pc = 0x4E3E84u;
            // 0x4e3e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4E3E88u;
        goto label_4e3e88;
    }
    ctx->pc = 0x4E3E80u;
    SET_GPR_U32(ctx, 31, 0x4E3E88u);
    ctx->pc = 0x4E3E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3E80u;
            // 0x4e3e84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156640u;
    if (runtime->hasFunction(0x156640u)) {
        auto targetFn = runtime->lookupFunction(0x156640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E88u; }
        if (ctx->pc != 0x4E3E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156640_0x156640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4E3E88u; }
        if (ctx->pc != 0x4E3E88u) { return; }
    }
    ctx->pc = 0x4E3E88u;
label_4e3e88:
    // 0x4e3e88: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x4e3e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_4e3e8c:
    // 0x4e3e8c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x4e3e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_4e3e90:
    // 0x4e3e90: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x4e3e90u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_4e3e94:
    // 0x4e3e94: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x4e3e94u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4e3e98:
    // 0x4e3e98: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4e3e98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4e3e9c:
    // 0x4e3e9c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4e3e9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4e3ea0:
    // 0x4e3ea0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x4e3ea0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4e3ea4:
    // 0x4e3ea4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4e3ea4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4e3ea8:
    // 0x4e3ea8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4e3ea8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4e3eac:
    // 0x4e3eac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4e3eacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4e3eb0:
    // 0x4e3eb0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4e3eb0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4e3eb4:
    // 0x4e3eb4: 0x3e00008  jr          $ra
label_4e3eb8:
    if (ctx->pc == 0x4E3EB8u) {
        ctx->pc = 0x4E3EB8u;
            // 0x4e3eb8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x4E3EBCu;
        goto label_4e3ebc;
    }
    ctx->pc = 0x4E3EB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4E3EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4E3EB4u;
            // 0x4e3eb8: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4E3EBCu;
label_4e3ebc:
    // 0x4e3ebc: 0x0  nop
    ctx->pc = 0x4e3ebcu;
    // NOP
}
