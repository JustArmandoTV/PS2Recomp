#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E37F0
// Address: 0x1e37f0 - 0x1e3e60
void sub_001E37F0_0x1e37f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E37F0_0x1e37f0");
#endif

    switch (ctx->pc) {
        case 0x1e37f0u: goto label_1e37f0;
        case 0x1e37f4u: goto label_1e37f4;
        case 0x1e37f8u: goto label_1e37f8;
        case 0x1e37fcu: goto label_1e37fc;
        case 0x1e3800u: goto label_1e3800;
        case 0x1e3804u: goto label_1e3804;
        case 0x1e3808u: goto label_1e3808;
        case 0x1e380cu: goto label_1e380c;
        case 0x1e3810u: goto label_1e3810;
        case 0x1e3814u: goto label_1e3814;
        case 0x1e3818u: goto label_1e3818;
        case 0x1e381cu: goto label_1e381c;
        case 0x1e3820u: goto label_1e3820;
        case 0x1e3824u: goto label_1e3824;
        case 0x1e3828u: goto label_1e3828;
        case 0x1e382cu: goto label_1e382c;
        case 0x1e3830u: goto label_1e3830;
        case 0x1e3834u: goto label_1e3834;
        case 0x1e3838u: goto label_1e3838;
        case 0x1e383cu: goto label_1e383c;
        case 0x1e3840u: goto label_1e3840;
        case 0x1e3844u: goto label_1e3844;
        case 0x1e3848u: goto label_1e3848;
        case 0x1e384cu: goto label_1e384c;
        case 0x1e3850u: goto label_1e3850;
        case 0x1e3854u: goto label_1e3854;
        case 0x1e3858u: goto label_1e3858;
        case 0x1e385cu: goto label_1e385c;
        case 0x1e3860u: goto label_1e3860;
        case 0x1e3864u: goto label_1e3864;
        case 0x1e3868u: goto label_1e3868;
        case 0x1e386cu: goto label_1e386c;
        case 0x1e3870u: goto label_1e3870;
        case 0x1e3874u: goto label_1e3874;
        case 0x1e3878u: goto label_1e3878;
        case 0x1e387cu: goto label_1e387c;
        case 0x1e3880u: goto label_1e3880;
        case 0x1e3884u: goto label_1e3884;
        case 0x1e3888u: goto label_1e3888;
        case 0x1e388cu: goto label_1e388c;
        case 0x1e3890u: goto label_1e3890;
        case 0x1e3894u: goto label_1e3894;
        case 0x1e3898u: goto label_1e3898;
        case 0x1e389cu: goto label_1e389c;
        case 0x1e38a0u: goto label_1e38a0;
        case 0x1e38a4u: goto label_1e38a4;
        case 0x1e38a8u: goto label_1e38a8;
        case 0x1e38acu: goto label_1e38ac;
        case 0x1e38b0u: goto label_1e38b0;
        case 0x1e38b4u: goto label_1e38b4;
        case 0x1e38b8u: goto label_1e38b8;
        case 0x1e38bcu: goto label_1e38bc;
        case 0x1e38c0u: goto label_1e38c0;
        case 0x1e38c4u: goto label_1e38c4;
        case 0x1e38c8u: goto label_1e38c8;
        case 0x1e38ccu: goto label_1e38cc;
        case 0x1e38d0u: goto label_1e38d0;
        case 0x1e38d4u: goto label_1e38d4;
        case 0x1e38d8u: goto label_1e38d8;
        case 0x1e38dcu: goto label_1e38dc;
        case 0x1e38e0u: goto label_1e38e0;
        case 0x1e38e4u: goto label_1e38e4;
        case 0x1e38e8u: goto label_1e38e8;
        case 0x1e38ecu: goto label_1e38ec;
        case 0x1e38f0u: goto label_1e38f0;
        case 0x1e38f4u: goto label_1e38f4;
        case 0x1e38f8u: goto label_1e38f8;
        case 0x1e38fcu: goto label_1e38fc;
        case 0x1e3900u: goto label_1e3900;
        case 0x1e3904u: goto label_1e3904;
        case 0x1e3908u: goto label_1e3908;
        case 0x1e390cu: goto label_1e390c;
        case 0x1e3910u: goto label_1e3910;
        case 0x1e3914u: goto label_1e3914;
        case 0x1e3918u: goto label_1e3918;
        case 0x1e391cu: goto label_1e391c;
        case 0x1e3920u: goto label_1e3920;
        case 0x1e3924u: goto label_1e3924;
        case 0x1e3928u: goto label_1e3928;
        case 0x1e392cu: goto label_1e392c;
        case 0x1e3930u: goto label_1e3930;
        case 0x1e3934u: goto label_1e3934;
        case 0x1e3938u: goto label_1e3938;
        case 0x1e393cu: goto label_1e393c;
        case 0x1e3940u: goto label_1e3940;
        case 0x1e3944u: goto label_1e3944;
        case 0x1e3948u: goto label_1e3948;
        case 0x1e394cu: goto label_1e394c;
        case 0x1e3950u: goto label_1e3950;
        case 0x1e3954u: goto label_1e3954;
        case 0x1e3958u: goto label_1e3958;
        case 0x1e395cu: goto label_1e395c;
        case 0x1e3960u: goto label_1e3960;
        case 0x1e3964u: goto label_1e3964;
        case 0x1e3968u: goto label_1e3968;
        case 0x1e396cu: goto label_1e396c;
        case 0x1e3970u: goto label_1e3970;
        case 0x1e3974u: goto label_1e3974;
        case 0x1e3978u: goto label_1e3978;
        case 0x1e397cu: goto label_1e397c;
        case 0x1e3980u: goto label_1e3980;
        case 0x1e3984u: goto label_1e3984;
        case 0x1e3988u: goto label_1e3988;
        case 0x1e398cu: goto label_1e398c;
        case 0x1e3990u: goto label_1e3990;
        case 0x1e3994u: goto label_1e3994;
        case 0x1e3998u: goto label_1e3998;
        case 0x1e399cu: goto label_1e399c;
        case 0x1e39a0u: goto label_1e39a0;
        case 0x1e39a4u: goto label_1e39a4;
        case 0x1e39a8u: goto label_1e39a8;
        case 0x1e39acu: goto label_1e39ac;
        case 0x1e39b0u: goto label_1e39b0;
        case 0x1e39b4u: goto label_1e39b4;
        case 0x1e39b8u: goto label_1e39b8;
        case 0x1e39bcu: goto label_1e39bc;
        case 0x1e39c0u: goto label_1e39c0;
        case 0x1e39c4u: goto label_1e39c4;
        case 0x1e39c8u: goto label_1e39c8;
        case 0x1e39ccu: goto label_1e39cc;
        case 0x1e39d0u: goto label_1e39d0;
        case 0x1e39d4u: goto label_1e39d4;
        case 0x1e39d8u: goto label_1e39d8;
        case 0x1e39dcu: goto label_1e39dc;
        case 0x1e39e0u: goto label_1e39e0;
        case 0x1e39e4u: goto label_1e39e4;
        case 0x1e39e8u: goto label_1e39e8;
        case 0x1e39ecu: goto label_1e39ec;
        case 0x1e39f0u: goto label_1e39f0;
        case 0x1e39f4u: goto label_1e39f4;
        case 0x1e39f8u: goto label_1e39f8;
        case 0x1e39fcu: goto label_1e39fc;
        case 0x1e3a00u: goto label_1e3a00;
        case 0x1e3a04u: goto label_1e3a04;
        case 0x1e3a08u: goto label_1e3a08;
        case 0x1e3a0cu: goto label_1e3a0c;
        case 0x1e3a10u: goto label_1e3a10;
        case 0x1e3a14u: goto label_1e3a14;
        case 0x1e3a18u: goto label_1e3a18;
        case 0x1e3a1cu: goto label_1e3a1c;
        case 0x1e3a20u: goto label_1e3a20;
        case 0x1e3a24u: goto label_1e3a24;
        case 0x1e3a28u: goto label_1e3a28;
        case 0x1e3a2cu: goto label_1e3a2c;
        case 0x1e3a30u: goto label_1e3a30;
        case 0x1e3a34u: goto label_1e3a34;
        case 0x1e3a38u: goto label_1e3a38;
        case 0x1e3a3cu: goto label_1e3a3c;
        case 0x1e3a40u: goto label_1e3a40;
        case 0x1e3a44u: goto label_1e3a44;
        case 0x1e3a48u: goto label_1e3a48;
        case 0x1e3a4cu: goto label_1e3a4c;
        case 0x1e3a50u: goto label_1e3a50;
        case 0x1e3a54u: goto label_1e3a54;
        case 0x1e3a58u: goto label_1e3a58;
        case 0x1e3a5cu: goto label_1e3a5c;
        case 0x1e3a60u: goto label_1e3a60;
        case 0x1e3a64u: goto label_1e3a64;
        case 0x1e3a68u: goto label_1e3a68;
        case 0x1e3a6cu: goto label_1e3a6c;
        case 0x1e3a70u: goto label_1e3a70;
        case 0x1e3a74u: goto label_1e3a74;
        case 0x1e3a78u: goto label_1e3a78;
        case 0x1e3a7cu: goto label_1e3a7c;
        case 0x1e3a80u: goto label_1e3a80;
        case 0x1e3a84u: goto label_1e3a84;
        case 0x1e3a88u: goto label_1e3a88;
        case 0x1e3a8cu: goto label_1e3a8c;
        case 0x1e3a90u: goto label_1e3a90;
        case 0x1e3a94u: goto label_1e3a94;
        case 0x1e3a98u: goto label_1e3a98;
        case 0x1e3a9cu: goto label_1e3a9c;
        case 0x1e3aa0u: goto label_1e3aa0;
        case 0x1e3aa4u: goto label_1e3aa4;
        case 0x1e3aa8u: goto label_1e3aa8;
        case 0x1e3aacu: goto label_1e3aac;
        case 0x1e3ab0u: goto label_1e3ab0;
        case 0x1e3ab4u: goto label_1e3ab4;
        case 0x1e3ab8u: goto label_1e3ab8;
        case 0x1e3abcu: goto label_1e3abc;
        case 0x1e3ac0u: goto label_1e3ac0;
        case 0x1e3ac4u: goto label_1e3ac4;
        case 0x1e3ac8u: goto label_1e3ac8;
        case 0x1e3accu: goto label_1e3acc;
        case 0x1e3ad0u: goto label_1e3ad0;
        case 0x1e3ad4u: goto label_1e3ad4;
        case 0x1e3ad8u: goto label_1e3ad8;
        case 0x1e3adcu: goto label_1e3adc;
        case 0x1e3ae0u: goto label_1e3ae0;
        case 0x1e3ae4u: goto label_1e3ae4;
        case 0x1e3ae8u: goto label_1e3ae8;
        case 0x1e3aecu: goto label_1e3aec;
        case 0x1e3af0u: goto label_1e3af0;
        case 0x1e3af4u: goto label_1e3af4;
        case 0x1e3af8u: goto label_1e3af8;
        case 0x1e3afcu: goto label_1e3afc;
        case 0x1e3b00u: goto label_1e3b00;
        case 0x1e3b04u: goto label_1e3b04;
        case 0x1e3b08u: goto label_1e3b08;
        case 0x1e3b0cu: goto label_1e3b0c;
        case 0x1e3b10u: goto label_1e3b10;
        case 0x1e3b14u: goto label_1e3b14;
        case 0x1e3b18u: goto label_1e3b18;
        case 0x1e3b1cu: goto label_1e3b1c;
        case 0x1e3b20u: goto label_1e3b20;
        case 0x1e3b24u: goto label_1e3b24;
        case 0x1e3b28u: goto label_1e3b28;
        case 0x1e3b2cu: goto label_1e3b2c;
        case 0x1e3b30u: goto label_1e3b30;
        case 0x1e3b34u: goto label_1e3b34;
        case 0x1e3b38u: goto label_1e3b38;
        case 0x1e3b3cu: goto label_1e3b3c;
        case 0x1e3b40u: goto label_1e3b40;
        case 0x1e3b44u: goto label_1e3b44;
        case 0x1e3b48u: goto label_1e3b48;
        case 0x1e3b4cu: goto label_1e3b4c;
        case 0x1e3b50u: goto label_1e3b50;
        case 0x1e3b54u: goto label_1e3b54;
        case 0x1e3b58u: goto label_1e3b58;
        case 0x1e3b5cu: goto label_1e3b5c;
        case 0x1e3b60u: goto label_1e3b60;
        case 0x1e3b64u: goto label_1e3b64;
        case 0x1e3b68u: goto label_1e3b68;
        case 0x1e3b6cu: goto label_1e3b6c;
        case 0x1e3b70u: goto label_1e3b70;
        case 0x1e3b74u: goto label_1e3b74;
        case 0x1e3b78u: goto label_1e3b78;
        case 0x1e3b7cu: goto label_1e3b7c;
        case 0x1e3b80u: goto label_1e3b80;
        case 0x1e3b84u: goto label_1e3b84;
        case 0x1e3b88u: goto label_1e3b88;
        case 0x1e3b8cu: goto label_1e3b8c;
        case 0x1e3b90u: goto label_1e3b90;
        case 0x1e3b94u: goto label_1e3b94;
        case 0x1e3b98u: goto label_1e3b98;
        case 0x1e3b9cu: goto label_1e3b9c;
        case 0x1e3ba0u: goto label_1e3ba0;
        case 0x1e3ba4u: goto label_1e3ba4;
        case 0x1e3ba8u: goto label_1e3ba8;
        case 0x1e3bacu: goto label_1e3bac;
        case 0x1e3bb0u: goto label_1e3bb0;
        case 0x1e3bb4u: goto label_1e3bb4;
        case 0x1e3bb8u: goto label_1e3bb8;
        case 0x1e3bbcu: goto label_1e3bbc;
        case 0x1e3bc0u: goto label_1e3bc0;
        case 0x1e3bc4u: goto label_1e3bc4;
        case 0x1e3bc8u: goto label_1e3bc8;
        case 0x1e3bccu: goto label_1e3bcc;
        case 0x1e3bd0u: goto label_1e3bd0;
        case 0x1e3bd4u: goto label_1e3bd4;
        case 0x1e3bd8u: goto label_1e3bd8;
        case 0x1e3bdcu: goto label_1e3bdc;
        case 0x1e3be0u: goto label_1e3be0;
        case 0x1e3be4u: goto label_1e3be4;
        case 0x1e3be8u: goto label_1e3be8;
        case 0x1e3becu: goto label_1e3bec;
        case 0x1e3bf0u: goto label_1e3bf0;
        case 0x1e3bf4u: goto label_1e3bf4;
        case 0x1e3bf8u: goto label_1e3bf8;
        case 0x1e3bfcu: goto label_1e3bfc;
        case 0x1e3c00u: goto label_1e3c00;
        case 0x1e3c04u: goto label_1e3c04;
        case 0x1e3c08u: goto label_1e3c08;
        case 0x1e3c0cu: goto label_1e3c0c;
        case 0x1e3c10u: goto label_1e3c10;
        case 0x1e3c14u: goto label_1e3c14;
        case 0x1e3c18u: goto label_1e3c18;
        case 0x1e3c1cu: goto label_1e3c1c;
        case 0x1e3c20u: goto label_1e3c20;
        case 0x1e3c24u: goto label_1e3c24;
        case 0x1e3c28u: goto label_1e3c28;
        case 0x1e3c2cu: goto label_1e3c2c;
        case 0x1e3c30u: goto label_1e3c30;
        case 0x1e3c34u: goto label_1e3c34;
        case 0x1e3c38u: goto label_1e3c38;
        case 0x1e3c3cu: goto label_1e3c3c;
        case 0x1e3c40u: goto label_1e3c40;
        case 0x1e3c44u: goto label_1e3c44;
        case 0x1e3c48u: goto label_1e3c48;
        case 0x1e3c4cu: goto label_1e3c4c;
        case 0x1e3c50u: goto label_1e3c50;
        case 0x1e3c54u: goto label_1e3c54;
        case 0x1e3c58u: goto label_1e3c58;
        case 0x1e3c5cu: goto label_1e3c5c;
        case 0x1e3c60u: goto label_1e3c60;
        case 0x1e3c64u: goto label_1e3c64;
        case 0x1e3c68u: goto label_1e3c68;
        case 0x1e3c6cu: goto label_1e3c6c;
        case 0x1e3c70u: goto label_1e3c70;
        case 0x1e3c74u: goto label_1e3c74;
        case 0x1e3c78u: goto label_1e3c78;
        case 0x1e3c7cu: goto label_1e3c7c;
        case 0x1e3c80u: goto label_1e3c80;
        case 0x1e3c84u: goto label_1e3c84;
        case 0x1e3c88u: goto label_1e3c88;
        case 0x1e3c8cu: goto label_1e3c8c;
        case 0x1e3c90u: goto label_1e3c90;
        case 0x1e3c94u: goto label_1e3c94;
        case 0x1e3c98u: goto label_1e3c98;
        case 0x1e3c9cu: goto label_1e3c9c;
        case 0x1e3ca0u: goto label_1e3ca0;
        case 0x1e3ca4u: goto label_1e3ca4;
        case 0x1e3ca8u: goto label_1e3ca8;
        case 0x1e3cacu: goto label_1e3cac;
        case 0x1e3cb0u: goto label_1e3cb0;
        case 0x1e3cb4u: goto label_1e3cb4;
        case 0x1e3cb8u: goto label_1e3cb8;
        case 0x1e3cbcu: goto label_1e3cbc;
        case 0x1e3cc0u: goto label_1e3cc0;
        case 0x1e3cc4u: goto label_1e3cc4;
        case 0x1e3cc8u: goto label_1e3cc8;
        case 0x1e3cccu: goto label_1e3ccc;
        case 0x1e3cd0u: goto label_1e3cd0;
        case 0x1e3cd4u: goto label_1e3cd4;
        case 0x1e3cd8u: goto label_1e3cd8;
        case 0x1e3cdcu: goto label_1e3cdc;
        case 0x1e3ce0u: goto label_1e3ce0;
        case 0x1e3ce4u: goto label_1e3ce4;
        case 0x1e3ce8u: goto label_1e3ce8;
        case 0x1e3cecu: goto label_1e3cec;
        case 0x1e3cf0u: goto label_1e3cf0;
        case 0x1e3cf4u: goto label_1e3cf4;
        case 0x1e3cf8u: goto label_1e3cf8;
        case 0x1e3cfcu: goto label_1e3cfc;
        case 0x1e3d00u: goto label_1e3d00;
        case 0x1e3d04u: goto label_1e3d04;
        case 0x1e3d08u: goto label_1e3d08;
        case 0x1e3d0cu: goto label_1e3d0c;
        case 0x1e3d10u: goto label_1e3d10;
        case 0x1e3d14u: goto label_1e3d14;
        case 0x1e3d18u: goto label_1e3d18;
        case 0x1e3d1cu: goto label_1e3d1c;
        case 0x1e3d20u: goto label_1e3d20;
        case 0x1e3d24u: goto label_1e3d24;
        case 0x1e3d28u: goto label_1e3d28;
        case 0x1e3d2cu: goto label_1e3d2c;
        case 0x1e3d30u: goto label_1e3d30;
        case 0x1e3d34u: goto label_1e3d34;
        case 0x1e3d38u: goto label_1e3d38;
        case 0x1e3d3cu: goto label_1e3d3c;
        case 0x1e3d40u: goto label_1e3d40;
        case 0x1e3d44u: goto label_1e3d44;
        case 0x1e3d48u: goto label_1e3d48;
        case 0x1e3d4cu: goto label_1e3d4c;
        case 0x1e3d50u: goto label_1e3d50;
        case 0x1e3d54u: goto label_1e3d54;
        case 0x1e3d58u: goto label_1e3d58;
        case 0x1e3d5cu: goto label_1e3d5c;
        case 0x1e3d60u: goto label_1e3d60;
        case 0x1e3d64u: goto label_1e3d64;
        case 0x1e3d68u: goto label_1e3d68;
        case 0x1e3d6cu: goto label_1e3d6c;
        case 0x1e3d70u: goto label_1e3d70;
        case 0x1e3d74u: goto label_1e3d74;
        case 0x1e3d78u: goto label_1e3d78;
        case 0x1e3d7cu: goto label_1e3d7c;
        case 0x1e3d80u: goto label_1e3d80;
        case 0x1e3d84u: goto label_1e3d84;
        case 0x1e3d88u: goto label_1e3d88;
        case 0x1e3d8cu: goto label_1e3d8c;
        case 0x1e3d90u: goto label_1e3d90;
        case 0x1e3d94u: goto label_1e3d94;
        case 0x1e3d98u: goto label_1e3d98;
        case 0x1e3d9cu: goto label_1e3d9c;
        case 0x1e3da0u: goto label_1e3da0;
        case 0x1e3da4u: goto label_1e3da4;
        case 0x1e3da8u: goto label_1e3da8;
        case 0x1e3dacu: goto label_1e3dac;
        case 0x1e3db0u: goto label_1e3db0;
        case 0x1e3db4u: goto label_1e3db4;
        case 0x1e3db8u: goto label_1e3db8;
        case 0x1e3dbcu: goto label_1e3dbc;
        case 0x1e3dc0u: goto label_1e3dc0;
        case 0x1e3dc4u: goto label_1e3dc4;
        case 0x1e3dc8u: goto label_1e3dc8;
        case 0x1e3dccu: goto label_1e3dcc;
        case 0x1e3dd0u: goto label_1e3dd0;
        case 0x1e3dd4u: goto label_1e3dd4;
        case 0x1e3dd8u: goto label_1e3dd8;
        case 0x1e3ddcu: goto label_1e3ddc;
        case 0x1e3de0u: goto label_1e3de0;
        case 0x1e3de4u: goto label_1e3de4;
        case 0x1e3de8u: goto label_1e3de8;
        case 0x1e3decu: goto label_1e3dec;
        case 0x1e3df0u: goto label_1e3df0;
        case 0x1e3df4u: goto label_1e3df4;
        case 0x1e3df8u: goto label_1e3df8;
        case 0x1e3dfcu: goto label_1e3dfc;
        case 0x1e3e00u: goto label_1e3e00;
        case 0x1e3e04u: goto label_1e3e04;
        case 0x1e3e08u: goto label_1e3e08;
        case 0x1e3e0cu: goto label_1e3e0c;
        case 0x1e3e10u: goto label_1e3e10;
        case 0x1e3e14u: goto label_1e3e14;
        case 0x1e3e18u: goto label_1e3e18;
        case 0x1e3e1cu: goto label_1e3e1c;
        case 0x1e3e20u: goto label_1e3e20;
        case 0x1e3e24u: goto label_1e3e24;
        case 0x1e3e28u: goto label_1e3e28;
        case 0x1e3e2cu: goto label_1e3e2c;
        case 0x1e3e30u: goto label_1e3e30;
        case 0x1e3e34u: goto label_1e3e34;
        case 0x1e3e38u: goto label_1e3e38;
        case 0x1e3e3cu: goto label_1e3e3c;
        case 0x1e3e40u: goto label_1e3e40;
        case 0x1e3e44u: goto label_1e3e44;
        case 0x1e3e48u: goto label_1e3e48;
        case 0x1e3e4cu: goto label_1e3e4c;
        case 0x1e3e50u: goto label_1e3e50;
        case 0x1e3e54u: goto label_1e3e54;
        case 0x1e3e58u: goto label_1e3e58;
        case 0x1e3e5cu: goto label_1e3e5c;
        default: break;
    }

    ctx->pc = 0x1e37f0u;

label_1e37f0:
    // 0x1e37f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1e37f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1e37f4:
    // 0x1e37f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e37f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e37f8:
    // 0x1e37f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e37f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e37fc:
    // 0x1e37fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e37fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3800:
    // 0x1e3800: 0xa3a00030  sb          $zero, 0x30($sp)
    ctx->pc = 0x1e3800u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 0));
label_1e3804:
    // 0x1e3804: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1e3804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e3808:
    // 0x1e3808: 0xc078dec  jal         func_1E37B0
label_1e380c:
    if (ctx->pc == 0x1E380Cu) {
        ctx->pc = 0x1E380Cu;
            // 0x1e380c: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1E3810u;
        goto label_1e3810;
    }
    ctx->pc = 0x1E3808u;
    SET_GPR_U32(ctx, 31, 0x1E3810u);
    ctx->pc = 0x1E380Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3808u;
            // 0x1e380c: 0xa3a00031  sb          $zero, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E37B0u;
    if (runtime->hasFunction(0x1E37B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E37B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3810u; }
        if (ctx->pc != 0x1E3810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E37B0_0x1e37b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3810u; }
        if (ctx->pc != 0x1E3810u) { return; }
    }
    ctx->pc = 0x1E3810u;
label_1e3810:
    // 0x1e3810: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1e3810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1e3814:
    // 0x1e3814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e3814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3818:
    // 0x1e3818: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1e3818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1e381c:
    // 0x1e381c: 0xc07ff48  jal         func_1FFD20
label_1e3820:
    if (ctx->pc == 0x1E3820u) {
        ctx->pc = 0x1E3820u;
            // 0x1e3820: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3824u;
        goto label_1e3824;
    }
    ctx->pc = 0x1E381Cu;
    SET_GPR_U32(ctx, 31, 0x1E3824u);
    ctx->pc = 0x1E3820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E381Cu;
            // 0x1e3820: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFD20u;
    if (runtime->hasFunction(0x1FFD20u)) {
        auto targetFn = runtime->lookupFunction(0x1FFD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3824u; }
        if (ctx->pc != 0x1E3824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FFD20_0x1ffd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3824u; }
        if (ctx->pc != 0x1E3824u) { return; }
    }
    ctx->pc = 0x1E3824u;
label_1e3824:
    // 0x1e3824: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3828:
    // 0x1e3828: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3828u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e382c:
    // 0x1e382c: 0x3e00008  jr          $ra
label_1e3830:
    if (ctx->pc == 0x1E3830u) {
        ctx->pc = 0x1E3830u;
            // 0x1e3830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1E3834u;
        goto label_1e3834;
    }
    ctx->pc = 0x1E382Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E382Cu;
            // 0x1e3830: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3834u;
label_1e3834:
    // 0x1e3834: 0x0  nop
    ctx->pc = 0x1e3834u;
    // NOP
label_1e3838:
    // 0x1e3838: 0x0  nop
    ctx->pc = 0x1e3838u;
    // NOP
label_1e383c:
    // 0x1e383c: 0x0  nop
    ctx->pc = 0x1e383cu;
    // NOP
label_1e3840:
    // 0x1e3840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e3840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e3844:
    // 0x1e3844: 0x3c023fff  lui         $v0, 0x3FFF
    ctx->pc = 0x1e3844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16383 << 16));
label_1e3848:
    // 0x1e3848: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1e3848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1e384c:
    // 0x1e384c: 0x3442df3b  ori         $v0, $v0, 0xDF3B
    ctx->pc = 0x1e384cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57147);
label_1e3850:
    // 0x1e3850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3854:
    // 0x1e3854: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e3854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1e3858:
    // 0x1e3858: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e385c:
    // 0x1e385c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e385cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e3860:
    // 0x1e3860: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e3860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3864:
    // 0x1e3864: 0xc4c20004  lwc1        $f2, 0x4($a2)
    ctx->pc = 0x1e3864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3868:
    // 0x1e3868: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x1e3868u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1e386c:
    // 0x1e386c: 0xc460002c  lwc1        $f0, 0x2C($v1)
    ctx->pc = 0x1e386cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3870:
    // 0x1e3870: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3870u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3874:
    // 0x1e3874: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e3874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e3878:
    // 0x1e3878: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1e387c:
    if (ctx->pc == 0x1E387Cu) {
        ctx->pc = 0x1E387Cu;
            // 0x1e387c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->pc = 0x1E3880u;
        goto label_1e3880;
    }
    ctx->pc = 0x1E3878u;
    {
        const bool branch_taken_0x1e3878 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E387Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3878u;
            // 0x1e387c: 0x24e70020  addiu       $a3, $a3, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3878) {
            ctx->pc = 0x1E3894u;
            goto label_1e3894;
        }
    }
    ctx->pc = 0x1E3880u;
label_1e3880:
    // 0x1e3880: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x1e3880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3884:
    // 0x1e3884: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1e3884u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1e3888:
    // 0x1e3888: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1e3888u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1e388c:
    // 0x1e388c: 0x45030005  bc1tl       . + 4 + (0x5 << 2)
label_1e3890:
    if (ctx->pc == 0x1E3890u) {
        ctx->pc = 0x1E3890u;
            // 0x1e3890: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->pc = 0x1E3894u;
        goto label_1e3894;
    }
    ctx->pc = 0x1E388Cu;
    {
        const bool branch_taken_0x1e388c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e388c) {
            ctx->pc = 0x1E3890u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E388Cu;
            // 0x1e3890: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E38A4u;
            goto label_1e38a4;
        }
    }
    ctx->pc = 0x1E3894u;
label_1e3894:
    // 0x1e3894: 0xc07be94  jal         func_1EFA50
label_1e3898:
    if (ctx->pc == 0x1E3898u) {
        ctx->pc = 0x1E3898u;
            // 0x1e3898: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E389Cu;
        goto label_1e389c;
    }
    ctx->pc = 0x1E3894u;
    SET_GPR_U32(ctx, 31, 0x1E389Cu);
    ctx->pc = 0x1E3898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3894u;
            // 0x1e3898: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1EFA50u;
    if (runtime->hasFunction(0x1EFA50u)) {
        auto targetFn = runtime->lookupFunction(0x1EFA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E389Cu; }
        if (ctx->pc != 0x1E389Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001EFA50_0x1efa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E389Cu; }
        if (ctx->pc != 0x1E389Cu) { return; }
    }
    ctx->pc = 0x1E389Cu;
label_1e389c:
    // 0x1e389c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e38a0:
    if (ctx->pc == 0x1E38A0u) {
        ctx->pc = 0x1E38A0u;
            // 0x1e38a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x1E38A4u;
        goto label_1e38a4;
    }
    ctx->pc = 0x1E389Cu;
    {
        const bool branch_taken_0x1e389c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E389Cu;
            // 0x1e38a0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e389c) {
            ctx->pc = 0x1E391Cu;
            goto label_1e391c;
        }
    }
    ctx->pc = 0x1E38A4u;
label_1e38a4:
    // 0x1e38a4: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x1e38a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e38a8:
    // 0x1e38a8: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e38a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e38ac:
    // 0x1e38ac: 0xc0a7a88  jal         func_29EA20
label_1e38b0:
    if (ctx->pc == 0x1E38B0u) {
        ctx->pc = 0x1E38B0u;
            // 0x1e38b0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E38B4u;
        goto label_1e38b4;
    }
    ctx->pc = 0x1E38ACu;
    SET_GPR_U32(ctx, 31, 0x1E38B4u);
    ctx->pc = 0x1E38B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38ACu;
            // 0x1e38b0: 0x2406001d  addiu       $a2, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EA20u;
    if (runtime->hasFunction(0x29EA20u)) {
        auto targetFn = runtime->lookupFunction(0x29EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38B4u; }
        if (ctx->pc != 0x1E38B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EA20_0x29ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E38B4u; }
        if (ctx->pc != 0x1E38B4u) { return; }
    }
    ctx->pc = 0x1E38B4u;
label_1e38b4:
    // 0x1e38b4: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1e38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1e38b8:
    // 0x1e38b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e38b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e38bc:
    // 0x1e38bc: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_1e38c0:
    if (ctx->pc == 0x1E38C0u) {
        ctx->pc = 0x1E38C0u;
            // 0x1e38c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1E38C4u;
        goto label_1e38c4;
    }
    ctx->pc = 0x1E38BCu;
    {
        const bool branch_taken_0x1e38bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E38C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E38BCu;
            // 0x1e38c0: 0xa4430004  sh          $v1, 0x4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e38bc) {
            ctx->pc = 0x1E3914u;
            goto label_1e3914;
        }
    }
    ctx->pc = 0x1E38C4u;
label_1e38c4:
    // 0x1e38c4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e38c8:
    // 0x1e38c8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1e38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1e38cc:
    // 0x1e38cc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e38ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e38d0:
    // 0x1e38d0: 0x2463da20  addiu       $v1, $v1, -0x25E0
    ctx->pc = 0x1e38d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957600));
label_1e38d4:
    // 0x1e38d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e38d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e38d8:
    // 0x1e38d8: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x1e38d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1e38dc:
    // 0x1e38dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e38dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e38e0:
    // 0x1e38e0: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e38e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e38e4:
    // 0x1e38e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e38e8:
    // 0x1e38e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e38e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e38ec:
    // 0x1e38ec: 0xa6020006  sh          $v0, 0x6($s0)
    ctx->pc = 0x1e38ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 2));
label_1e38f0:
    // 0x1e38f0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e38f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e38f4:
    // 0x1e38f4: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e38f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e38f8:
    // 0x1e38f8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e38f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e38fc:
    // 0x1e38fc: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x1e38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_1e3900:
    // 0x1e3900: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3904:
    // 0x1e3904: 0x2442d4a0  addiu       $v0, $v0, -0x2B60
    ctx->pc = 0x1e3904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956192));
label_1e3908:
    // 0x1e3908: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1e3908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1e390c:
    // 0x1e390c: 0xc079150  jal         func_1E4540
label_1e3910:
    if (ctx->pc == 0x1E3910u) {
        ctx->pc = 0x1E3910u;
            // 0x1e3910: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3914u;
        goto label_1e3914;
    }
    ctx->pc = 0x1E390Cu;
    SET_GPR_U32(ctx, 31, 0x1E3914u);
    ctx->pc = 0x1E3910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E390Cu;
            // 0x1e3910: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E4540u;
    if (runtime->hasFunction(0x1E4540u)) {
        auto targetFn = runtime->lookupFunction(0x1E4540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3914u; }
        if (ctx->pc != 0x1E3914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E4540_0x1e4540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3914u; }
        if (ctx->pc != 0x1E3914u) { return; }
    }
    ctx->pc = 0x1E3914u;
label_1e3914:
    // 0x1e3914: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3914u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3918:
    // 0x1e3918: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1e3918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e391c:
    // 0x1e391c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e391cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3920:
    // 0x1e3920: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3924:
    // 0x1e3924: 0x3e00008  jr          $ra
label_1e3928:
    if (ctx->pc == 0x1E3928u) {
        ctx->pc = 0x1E3928u;
            // 0x1e3928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1E392Cu;
        goto label_1e392c;
    }
    ctx->pc = 0x1E3924u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3924u;
            // 0x1e3928: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E392Cu;
label_1e392c:
    // 0x1e392c: 0x0  nop
    ctx->pc = 0x1e392cu;
    // NOP
label_1e3930:
    // 0x1e3930: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3934:
    // 0x1e3934: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3938:
    // 0x1e3938: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e393c:
    // 0x1e393c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e393cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3940:
    // 0x1e3940: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_1e3944:
    if (ctx->pc == 0x1E3944u) {
        ctx->pc = 0x1E3944u;
            // 0x1e3944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3948u;
        goto label_1e3948;
    }
    ctx->pc = 0x1E3940u;
    {
        const bool branch_taken_0x1e3940 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3940) {
            ctx->pc = 0x1E3944u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3940u;
            // 0x1e3944: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E39B0u;
            goto label_1e39b0;
        }
    }
    ctx->pc = 0x1E3948u;
label_1e3948:
    // 0x1e3948: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e394c:
    // 0x1e394c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1e394cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1e3950:
    // 0x1e3950: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1e3954:
    if (ctx->pc == 0x1E3954u) {
        ctx->pc = 0x1E3954u;
            // 0x1e3954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3958u;
        goto label_1e3958;
    }
    ctx->pc = 0x1E3950u;
    {
        const bool branch_taken_0x1e3950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3950u;
            // 0x1e3954: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3950) {
            ctx->pc = 0x1E3984u;
            goto label_1e3984;
        }
    }
    ctx->pc = 0x1E3958u;
label_1e3958:
    // 0x1e3958: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3958u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e395c:
    // 0x1e395c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e395cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e3960:
    // 0x1e3960: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e3964:
    if (ctx->pc == 0x1E3964u) {
        ctx->pc = 0x1E3964u;
            // 0x1e3964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3968u;
        goto label_1e3968;
    }
    ctx->pc = 0x1E3960u;
    {
        const bool branch_taken_0x1e3960 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3960u;
            // 0x1e3964: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3960) {
            ctx->pc = 0x1E3984u;
            goto label_1e3984;
        }
    }
    ctx->pc = 0x1E3968u;
label_1e3968:
    // 0x1e3968: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e396c:
    // 0x1e396c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e396cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e3970:
    // 0x1e3970: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e3974:
    if (ctx->pc == 0x1E3974u) {
        ctx->pc = 0x1E3974u;
            // 0x1e3974: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3978u;
        goto label_1e3978;
    }
    ctx->pc = 0x1E3970u;
    {
        const bool branch_taken_0x1e3970 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3970u;
            // 0x1e3974: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3970) {
            ctx->pc = 0x1E3984u;
            goto label_1e3984;
        }
    }
    ctx->pc = 0x1E3978u;
label_1e3978:
    // 0x1e3978: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e397c:
    // 0x1e397c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e3980:
    // 0x1e3980: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e3984:
    // 0x1e3984: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e3988:
    // 0x1e3988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e398c:
    // 0x1e398c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e3990:
    if (ctx->pc == 0x1E3990u) {
        ctx->pc = 0x1E3994u;
        goto label_1e3994;
    }
    ctx->pc = 0x1E398Cu;
    {
        const bool branch_taken_0x1e398c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e398c) {
            ctx->pc = 0x1E39ACu;
            goto label_1e39ac;
        }
    }
    ctx->pc = 0x1E3994u;
label_1e3994:
    // 0x1e3994: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3998:
    // 0x1e3998: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e3998u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e399c:
    // 0x1e399c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e399cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e39a0:
    // 0x1e39a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e39a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e39a4:
    // 0x1e39a4: 0xc0a7ab4  jal         func_29EAD0
label_1e39a8:
    if (ctx->pc == 0x1E39A8u) {
        ctx->pc = 0x1E39A8u;
            // 0x1e39a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E39ACu;
        goto label_1e39ac;
    }
    ctx->pc = 0x1E39A4u;
    SET_GPR_U32(ctx, 31, 0x1E39ACu);
    ctx->pc = 0x1E39A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39A4u;
            // 0x1e39a8: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39ACu; }
        if (ctx->pc != 0x1E39ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E39ACu; }
        if (ctx->pc != 0x1E39ACu) { return; }
    }
    ctx->pc = 0x1E39ACu;
label_1e39ac:
    // 0x1e39ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e39acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e39b0:
    // 0x1e39b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e39b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e39b4:
    // 0x1e39b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e39b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e39b8:
    // 0x1e39b8: 0x3e00008  jr          $ra
label_1e39bc:
    if (ctx->pc == 0x1E39BCu) {
        ctx->pc = 0x1E39BCu;
            // 0x1e39bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E39C0u;
        goto label_1e39c0;
    }
    ctx->pc = 0x1E39B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E39BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39B8u;
            // 0x1e39bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E39C0u;
label_1e39c0:
    // 0x1e39c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e39c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e39c4:
    // 0x1e39c4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e39c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e39c8:
    // 0x1e39c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e39c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e39cc:
    // 0x1e39cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e39ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e39d0:
    // 0x1e39d0: 0x52000017  beql        $s0, $zero, . + 4 + (0x17 << 2)
label_1e39d4:
    if (ctx->pc == 0x1E39D4u) {
        ctx->pc = 0x1E39D4u;
            // 0x1e39d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E39D8u;
        goto label_1e39d8;
    }
    ctx->pc = 0x1E39D0u;
    {
        const bool branch_taken_0x1e39d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e39d0) {
            ctx->pc = 0x1E39D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39D0u;
            // 0x1e39d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3A30u;
            goto label_1e3a30;
        }
    }
    ctx->pc = 0x1E39D8u;
label_1e39d8:
    // 0x1e39d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e39d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e39dc:
    // 0x1e39dc: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e39dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e39e0:
    // 0x1e39e0: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e39e4:
    if (ctx->pc == 0x1E39E4u) {
        ctx->pc = 0x1E39E4u;
            // 0x1e39e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E39E8u;
        goto label_1e39e8;
    }
    ctx->pc = 0x1E39E0u;
    {
        const bool branch_taken_0x1e39e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39E0u;
            // 0x1e39e4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39e0) {
            ctx->pc = 0x1E3A04u;
            goto label_1e3a04;
        }
    }
    ctx->pc = 0x1E39E8u;
label_1e39e8:
    // 0x1e39e8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e39e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e39ec:
    // 0x1e39ec: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e39ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e39f0:
    // 0x1e39f0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e39f4:
    if (ctx->pc == 0x1E39F4u) {
        ctx->pc = 0x1E39F4u;
            // 0x1e39f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E39F8u;
        goto label_1e39f8;
    }
    ctx->pc = 0x1E39F0u;
    {
        const bool branch_taken_0x1e39f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E39F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E39F0u;
            // 0x1e39f4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e39f0) {
            ctx->pc = 0x1E3A04u;
            goto label_1e3a04;
        }
    }
    ctx->pc = 0x1E39F8u;
label_1e39f8:
    // 0x1e39f8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e39f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e39fc:
    // 0x1e39fc: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e39fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e3a00:
    // 0x1e3a00: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3a00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e3a04:
    // 0x1e3a04: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e3a08:
    // 0x1e3a08: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3a08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e3a0c:
    // 0x1e3a0c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e3a10:
    if (ctx->pc == 0x1E3A10u) {
        ctx->pc = 0x1E3A14u;
        goto label_1e3a14;
    }
    ctx->pc = 0x1E3A0Cu;
    {
        const bool branch_taken_0x1e3a0c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e3a0c) {
            ctx->pc = 0x1E3A2Cu;
            goto label_1e3a2c;
        }
    }
    ctx->pc = 0x1E3A14u;
label_1e3a14:
    // 0x1e3a14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3a14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3a18:
    // 0x1e3a18: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e3a18u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e3a1c:
    // 0x1e3a1c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e3a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e3a20:
    // 0x1e3a20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3a20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a24:
    // 0x1e3a24: 0xc0a7ab4  jal         func_29EAD0
label_1e3a28:
    if (ctx->pc == 0x1E3A28u) {
        ctx->pc = 0x1E3A28u;
            // 0x1e3a28: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E3A2Cu;
        goto label_1e3a2c;
    }
    ctx->pc = 0x1E3A24u;
    SET_GPR_U32(ctx, 31, 0x1E3A2Cu);
    ctx->pc = 0x1E3A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A24u;
            // 0x1e3a28: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A2Cu; }
        if (ctx->pc != 0x1E3A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A2Cu; }
        if (ctx->pc != 0x1E3A2Cu) { return; }
    }
    ctx->pc = 0x1E3A2Cu;
label_1e3a2c:
    // 0x1e3a2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a30:
    // 0x1e3a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3a34:
    // 0x1e3a34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3a34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3a38:
    // 0x1e3a38: 0x3e00008  jr          $ra
label_1e3a3c:
    if (ctx->pc == 0x1E3A3Cu) {
        ctx->pc = 0x1E3A3Cu;
            // 0x1e3a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E3A40u;
        goto label_1e3a40;
    }
    ctx->pc = 0x1E3A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A38u;
            // 0x1e3a3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3A40u;
label_1e3a40:
    // 0x1e3a40: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1e3a44:
    // 0x1e3a44: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_1e3a48:
    // 0x1e3a48: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e3a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1e3a4c:
    // 0x1e3a4c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1e3a4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1e3a50:
    // 0x1e3a50: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e3a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e3a54:
    // 0x1e3a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1e3a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a58:
    // 0x1e3a58: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3a5c:
    // 0x1e3a5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1e3a5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a60:
    // 0x1e3a60: 0x90830031  lbu         $v1, 0x31($a0)
    ctx->pc = 0x1e3a60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 49)));
label_1e3a64:
    // 0x1e3a64: 0x1860000e  blez        $v1, . + 4 + (0xE << 2)
label_1e3a68:
    if (ctx->pc == 0x1E3A68u) {
        ctx->pc = 0x1E3A68u;
            // 0x1e3a68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A6Cu;
        goto label_1e3a6c;
    }
    ctx->pc = 0x1E3A64u;
    {
        const bool branch_taken_0x1e3a64 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1E3A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A64u;
            // 0x1e3a68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a64) {
            ctx->pc = 0x1E3AA0u;
            goto label_1e3aa0;
        }
    }
    ctx->pc = 0x1E3A6Cu;
label_1e3a6c:
    // 0x1e3a6c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x1e3a6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3a70:
    // 0x1e3a70: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x1e3a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3a74:
    // 0x1e3a74: 0x96650012  lhu         $a1, 0x12($s3)
    ctx->pc = 0x1e3a74u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_1e3a78:
    // 0x1e3a78: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e3a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e3a7c:
    // 0x1e3a7c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1e3a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1e3a80:
    // 0x1e3a80: 0x320f809  jalr        $t9
label_1e3a84:
    if (ctx->pc == 0x1E3A84u) {
        ctx->pc = 0x1E3A84u;
            // 0x1e3a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A88u;
        goto label_1e3a88;
    }
    ctx->pc = 0x1E3A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3A88u);
        ctx->pc = 0x1E3A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A80u;
            // 0x1e3a84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3A88u; }
            if (ctx->pc != 0x1E3A88u) { return; }
        }
        }
    }
    ctx->pc = 0x1E3A88u;
label_1e3a88:
    // 0x1e3a88: 0x92430031  lbu         $v1, 0x31($s2)
    ctx->pc = 0x1e3a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
label_1e3a8c:
    // 0x1e3a8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1e3a8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1e3a90:
    // 0x1e3a90: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1e3a90u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1e3a94:
    // 0x1e3a94: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_1e3a98:
    if (ctx->pc == 0x1E3A98u) {
        ctx->pc = 0x1E3A98u;
            // 0x1e3a98: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x1E3A9Cu;
        goto label_1e3a9c;
    }
    ctx->pc = 0x1E3A94u;
    {
        const bool branch_taken_0x1e3a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E3A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3A94u;
            // 0x1e3a98: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3a94) {
            ctx->pc = 0x1E3A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1e3a70;
        }
    }
    ctx->pc = 0x1E3A9Cu;
label_1e3a9c:
    // 0x1e3a9c: 0x0  nop
    ctx->pc = 0x1e3a9cu;
    // NOP
label_1e3aa0:
    // 0x1e3aa0: 0x52400007  beql        $s2, $zero, . + 4 + (0x7 << 2)
label_1e3aa4:
    if (ctx->pc == 0x1E3AA4u) {
        ctx->pc = 0x1E3AA4u;
            // 0x1e3aa4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x1E3AA8u;
        goto label_1e3aa8;
    }
    ctx->pc = 0x1E3AA0u;
    {
        const bool branch_taken_0x1e3aa0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3aa0) {
            ctx->pc = 0x1E3AA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AA0u;
            // 0x1e3aa4: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3AC0u;
            goto label_1e3ac0;
        }
    }
    ctx->pc = 0x1E3AA8u;
label_1e3aa8:
    // 0x1e3aa8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1e3aa8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3aac:
    // 0x1e3aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e3aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ab0:
    // 0x1e3ab0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1e3ab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1e3ab4:
    // 0x1e3ab4: 0x320f809  jalr        $t9
label_1e3ab8:
    if (ctx->pc == 0x1E3AB8u) {
        ctx->pc = 0x1E3AB8u;
            // 0x1e3ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1E3ABCu;
        goto label_1e3abc;
    }
    ctx->pc = 0x1E3AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E3ABCu);
        ctx->pc = 0x1E3AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AB4u;
            // 0x1e3ab8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E3ABCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E3ABCu; }
            if (ctx->pc != 0x1E3ABCu) { return; }
        }
        }
    }
    ctx->pc = 0x1E3ABCu;
label_1e3abc:
    // 0x1e3abc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e3abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3ac0:
    // 0x1e3ac0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e3ac0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3ac4:
    // 0x1e3ac4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1e3ac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1e3ac8:
    // 0x1e3ac8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1e3ac8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3acc:
    // 0x1e3acc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3ad0:
    // 0x1e3ad0: 0x3e00008  jr          $ra
label_1e3ad4:
    if (ctx->pc == 0x1E3AD4u) {
        ctx->pc = 0x1E3AD4u;
            // 0x1e3ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x1E3AD8u;
        goto label_1e3ad8;
    }
    ctx->pc = 0x1E3AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AD0u;
            // 0x1e3ad4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3AD8u;
label_1e3ad8:
    // 0x1e3ad8: 0x0  nop
    ctx->pc = 0x1e3ad8u;
    // NOP
label_1e3adc:
    // 0x1e3adc: 0x0  nop
    ctx->pc = 0x1e3adcu;
    // NOP
label_1e3ae0:
    // 0x1e3ae0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e3ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1e3ae4:
    // 0x1e3ae4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e3ae4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1e3ae8:
    // 0x1e3ae8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1e3ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1e3aec:
    // 0x1e3aec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e3aecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3af0:
    // 0x1e3af0: 0x5200001f  beql        $s0, $zero, . + 4 + (0x1F << 2)
label_1e3af4:
    if (ctx->pc == 0x1E3AF4u) {
        ctx->pc = 0x1E3AF4u;
            // 0x1e3af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E3AF8u;
        goto label_1e3af8;
    }
    ctx->pc = 0x1E3AF0u;
    {
        const bool branch_taken_0x1e3af0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e3af0) {
            ctx->pc = 0x1E3AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3AF0u;
            // 0x1e3af4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E3B70u;
            goto label_1e3b70;
        }
    }
    ctx->pc = 0x1E3AF8u;
label_1e3af8:
    // 0x1e3af8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3afc:
    // 0x1e3afc: 0x2442d4a0  addiu       $v0, $v0, -0x2B60
    ctx->pc = 0x1e3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956192));
label_1e3b00:
    // 0x1e3b00: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_1e3b04:
    if (ctx->pc == 0x1E3B04u) {
        ctx->pc = 0x1E3B04u;
            // 0x1e3b04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3B08u;
        goto label_1e3b08;
    }
    ctx->pc = 0x1E3B00u;
    {
        const bool branch_taken_0x1e3b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B00u;
            // 0x1e3b04: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b00) {
            ctx->pc = 0x1E3B44u;
            goto label_1e3b44;
        }
    }
    ctx->pc = 0x1E3B08u;
label_1e3b08:
    // 0x1e3b08: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3b0c:
    // 0x1e3b0c: 0x2442da20  addiu       $v0, $v0, -0x25E0
    ctx->pc = 0x1e3b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957600));
label_1e3b10:
    // 0x1e3b10: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_1e3b14:
    if (ctx->pc == 0x1E3B14u) {
        ctx->pc = 0x1E3B14u;
            // 0x1e3b14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3B18u;
        goto label_1e3b18;
    }
    ctx->pc = 0x1E3B10u;
    {
        const bool branch_taken_0x1e3b10 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B10u;
            // 0x1e3b14: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b10) {
            ctx->pc = 0x1E3B44u;
            goto label_1e3b44;
        }
    }
    ctx->pc = 0x1E3B18u;
label_1e3b18:
    // 0x1e3b18: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3b1c:
    // 0x1e3b1c: 0x2442d9e0  addiu       $v0, $v0, -0x2620
    ctx->pc = 0x1e3b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_1e3b20:
    // 0x1e3b20: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1e3b24:
    if (ctx->pc == 0x1E3B24u) {
        ctx->pc = 0x1E3B24u;
            // 0x1e3b24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3B28u;
        goto label_1e3b28;
    }
    ctx->pc = 0x1E3B20u;
    {
        const bool branch_taken_0x1e3b20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B20u;
            // 0x1e3b24: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b20) {
            ctx->pc = 0x1E3B44u;
            goto label_1e3b44;
        }
    }
    ctx->pc = 0x1E3B28u;
label_1e3b28:
    // 0x1e3b28: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3b2c:
    // 0x1e3b2c: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x1e3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
label_1e3b30:
    // 0x1e3b30: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1e3b34:
    if (ctx->pc == 0x1E3B34u) {
        ctx->pc = 0x1E3B34u;
            // 0x1e3b34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1E3B38u;
        goto label_1e3b38;
    }
    ctx->pc = 0x1E3B30u;
    {
        const bool branch_taken_0x1e3b30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B30u;
            // 0x1e3b34: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3b30) {
            ctx->pc = 0x1E3B44u;
            goto label_1e3b44;
        }
    }
    ctx->pc = 0x1E3B38u;
label_1e3b38:
    // 0x1e3b38: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e3b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1e3b3c:
    // 0x1e3b3c: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1e3b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
label_1e3b40:
    // 0x1e3b40: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e3b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1e3b44:
    // 0x1e3b44: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x1e3b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_1e3b48:
    // 0x1e3b48: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1e3b48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1e3b4c:
    // 0x1e3b4c: 0x18400007  blez        $v0, . + 4 + (0x7 << 2)
label_1e3b50:
    if (ctx->pc == 0x1E3B50u) {
        ctx->pc = 0x1E3B54u;
        goto label_1e3b54;
    }
    ctx->pc = 0x1E3B4Cu;
    {
        const bool branch_taken_0x1e3b4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1e3b4c) {
            ctx->pc = 0x1E3B6Cu;
            goto label_1e3b6c;
        }
    }
    ctx->pc = 0x1E3B54u;
label_1e3b54:
    // 0x1e3b54: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3b58:
    // 0x1e3b58: 0x96060004  lhu         $a2, 0x4($s0)
    ctx->pc = 0x1e3b58u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1e3b5c:
    // 0x1e3b5c: 0x8c44ea40  lw          $a0, -0x15C0($v0)
    ctx->pc = 0x1e3b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961728)));
label_1e3b60:
    // 0x1e3b60: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e3b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b64:
    // 0x1e3b64: 0xc0a7ab4  jal         func_29EAD0
label_1e3b68:
    if (ctx->pc == 0x1E3B68u) {
        ctx->pc = 0x1E3B68u;
            // 0x1e3b68: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x1E3B6Cu;
        goto label_1e3b6c;
    }
    ctx->pc = 0x1E3B64u;
    SET_GPR_U32(ctx, 31, 0x1E3B6Cu);
    ctx->pc = 0x1E3B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B64u;
            // 0x1e3b68: 0x2407001d  addiu       $a3, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29EAD0u;
    if (runtime->hasFunction(0x29EAD0u)) {
        auto targetFn = runtime->lookupFunction(0x29EAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B6Cu; }
        if (ctx->pc != 0x1E3B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029EAD0_0x29ead0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3B6Cu; }
        if (ctx->pc != 0x1E3B6Cu) { return; }
    }
    ctx->pc = 0x1E3B6Cu;
label_1e3b6c:
    // 0x1e3b6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e3b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b70:
    // 0x1e3b70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e3b70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1e3b74:
    // 0x1e3b74: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1e3b74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1e3b78:
    // 0x1e3b78: 0x3e00008  jr          $ra
label_1e3b7c:
    if (ctx->pc == 0x1E3B7Cu) {
        ctx->pc = 0x1E3B7Cu;
            // 0x1e3b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1E3B80u;
        goto label_1e3b80;
    }
    ctx->pc = 0x1E3B78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3B78u;
            // 0x1e3b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3B80u;
label_1e3b80:
    // 0x1e3b80: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x1e3b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_1e3b84:
    // 0x1e3b84: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3b84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3b88:
    // 0x1e3b88: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1e3b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_1e3b8c:
    // 0x1e3b8c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1e3b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_1e3b90:
    // 0x1e3b90: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1e3b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1e3b94:
    // 0x1e3b94: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e3b94u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e3b98:
    // 0x1e3b98: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1e3b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1e3b9c:
    // 0x1e3b9c: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x1e3b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_1e3ba0:
    // 0x1e3ba0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1e3ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1e3ba4:
    // 0x1e3ba4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1e3ba4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1e3ba8:
    // 0x1e3ba8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1e3ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1e3bac:
    // 0x1e3bac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1e3bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bb0:
    // 0x1e3bb0: 0xe7bf002c  swc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e3bb0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_1e3bb4:
    // 0x1e3bb4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1e3bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bb8:
    // 0x1e3bb8: 0xe7be0028  swc1        $f30, 0x28($sp)
    ctx->pc = 0x1e3bb8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1e3bbc:
    // 0x1e3bbc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x1e3bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1e3bc0:
    // 0x1e3bc0: 0xe7bd0024  swc1        $f29, 0x24($sp)
    ctx->pc = 0x1e3bc0u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1e3bc4:
    // 0x1e3bc4: 0xe7bc0020  swc1        $f28, 0x20($sp)
    ctx->pc = 0x1e3bc4u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_1e3bc8:
    // 0x1e3bc8: 0xe7bb001c  swc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e3bc8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1e3bcc:
    // 0x1e3bcc: 0xe7ba0018  swc1        $f26, 0x18($sp)
    ctx->pc = 0x1e3bccu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1e3bd0:
    // 0x1e3bd0: 0xe7b90014  swc1        $f25, 0x14($sp)
    ctx->pc = 0x1e3bd0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1e3bd4:
    // 0x1e3bd4: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x1e3bd4u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1e3bd8:
    // 0x1e3bd8: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x1e3bd8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1e3bdc:
    // 0x1e3bdc: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3bdcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1e3be0:
    // 0x1e3be0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3be0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1e3be4:
    // 0x1e3be4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3be4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1e3be8:
    // 0x1e3be8: 0x8c43ea64  lw          $v1, -0x159C($v0)
    ctx->pc = 0x1e3be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961764)));
label_1e3bec:
    // 0x1e3bec: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x1e3becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_1e3bf0:
    // 0x1e3bf0: 0x8c42ea6c  lw          $v0, -0x1594($v0)
    ctx->pc = 0x1e3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961772)));
label_1e3bf4:
    // 0x1e3bf4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1e3bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1e3bf8:
    // 0x1e3bf8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1e3bfc:
    if (ctx->pc == 0x1E3BFCu) {
        ctx->pc = 0x1E3BFCu;
            // 0x1e3bfc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->pc = 0x1E3C00u;
        goto label_1e3c00;
    }
    ctx->pc = 0x1E3BF8u;
    {
        const bool branch_taken_0x1e3bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3BF8u;
            // 0x1e3bfc: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3bf8) {
            ctx->pc = 0x1E3C28u;
            goto label_1e3c28;
        }
    }
    ctx->pc = 0x1E3C00u;
label_1e3c00:
    // 0x1e3c00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1e3c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1e3c04:
    // 0x1e3c04: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1e3c04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_1e3c08:
    // 0x1e3c08: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x1e3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
label_1e3c0c:
    // 0x1e3c0c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1e3c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1e3c10:
    // 0x1e3c10: 0x4002c801  .word       0x4002C801                   # mfc0        $v0, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_perf);
label_1e3c14:
    // 0x1e3c14: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1e3c14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1e3c18:
    // 0x1e3c18: 0x4005c803  .word       0x4005C803                   # mfc0        $a1, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_perf);
label_1e3c1c:
    // 0x1e3c1c: 0x2462000c  addiu       $v0, $v1, 0xC
    ctx->pc = 0x1e3c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_1e3c20:
    // 0x1e3c20: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x1e3c20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
label_1e3c24:
    // 0x1e3c24: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1e3c24u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1e3c28:
    // 0x1e3c28: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1e3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1e3c2c:
    // 0x1e3c2c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x1e3c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_1e3c30:
    // 0x1e3c30: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1e3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1e3c34:
    // 0x1e3c34: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1e3c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e3c38:
    // 0x1e3c38: 0xc4640010  lwc1        $f4, 0x10($v1)
    ctx->pc = 0x1e3c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1e3c3c:
    // 0x1e3c3c: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1e3c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3c40:
    // 0x1e3c40: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1e3c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c44:
    // 0x1e3c44: 0xc4600028  lwc1        $f0, 0x28($v1)
    ctx->pc = 0x1e3c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c48:
    // 0x1e3c48: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x1e3c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3c4c:
    // 0x1e3c4c: 0x46040e40  add.s       $f25, $f1, $f4
    ctx->pc = 0x1e3c4cu;
    ctx->f[25] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e3c50:
    // 0x1e3c50: 0x46040680  add.s       $f26, $f0, $f4
    ctx->pc = 0x1e3c50u;
    ctx->f[26] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1e3c54:
    // 0x1e3c54: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x1e3c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c58:
    // 0x1e3c58: 0x46041600  add.s       $f24, $f2, $f4
    ctx->pc = 0x1e3c58u;
    ctx->f[24] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1e3c5c:
    // 0x1e3c5c: 0x46040ec0  add.s       $f27, $f1, $f4
    ctx->pc = 0x1e3c5cu;
    ctx->f[27] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
label_1e3c60:
    // 0x1e3c60: 0xc4430010  lwc1        $f3, 0x10($v0)
    ctx->pc = 0x1e3c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1e3c64:
    // 0x1e3c64: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e3c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c68:
    // 0x1e3c68: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x1e3c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1e3c6c:
    // 0x1e3c6c: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x1e3c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c70:
    // 0x1e3c70: 0x46030500  add.s       $f20, $f0, $f3
    ctx->pc = 0x1e3c70u;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_1e3c74:
    // 0x1e3c74: 0xc440002c  lwc1        $f0, 0x2C($v0)
    ctx->pc = 0x1e3c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c78:
    // 0x1e3c78: 0x46031540  add.s       $f21, $f2, $f3
    ctx->pc = 0x1e3c78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1e3c7c:
    // 0x1e3c7c: 0x46030d80  add.s       $f22, $f1, $f3
    ctx->pc = 0x1e3c7cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1e3c80:
    // 0x1e3c80: 0xc0a45a0  jal         func_291680
label_1e3c84:
    if (ctx->pc == 0x1E3C84u) {
        ctx->pc = 0x1E3C84u;
            // 0x1e3c84: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->pc = 0x1E3C88u;
        goto label_1e3c88;
    }
    ctx->pc = 0x1E3C80u;
    SET_GPR_U32(ctx, 31, 0x1E3C88u);
    ctx->pc = 0x1E3C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3C80u;
            // 0x1e3c84: 0x460305c0  add.s       $f23, $f0, $f3 (Delay Slot)
        ctx->f[23] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C88u; }
        if (ctx->pc != 0x1E3C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3C88u; }
        if (ctx->pc != 0x1E3C88u) { return; }
    }
    ctx->pc = 0x1E3C88u;
label_1e3c88:
    // 0x1e3c88: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x1e3c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1e3c8c:
    // 0x1e3c8c: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1e3c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1e3c90:
    // 0x1e3c90: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x1e3c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1e3c94:
    // 0x1e3c94: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x1e3c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1e3c98:
    // 0x1e3c98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1e3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1e3c9c:
    // 0x1e3c9c: 0xc7bf01c4  lwc1        $f31, 0x1C4($sp)
    ctx->pc = 0x1e3c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e3ca0:
    // 0x1e3ca0: 0xc7be01c8  lwc1        $f30, 0x1C8($sp)
    ctx->pc = 0x1e3ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e3ca4:
    // 0x1e3ca4: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1e3ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1e3ca8:
    // 0x1e3ca8: 0xc7bd01cc  lwc1        $f29, 0x1CC($sp)
    ctx->pc = 0x1e3ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e3cac:
    // 0x1e3cac: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1e3cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1e3cb0:
    // 0x1e3cb0: 0xafb30090  sw          $s3, 0x90($sp)
    ctx->pc = 0x1e3cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 19));
label_1e3cb4:
    // 0x1e3cb4: 0xc7bc01d0  lwc1        $f28, 0x1D0($sp)
    ctx->pc = 0x1e3cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e3cb8:
    // 0x1e3cb8: 0xafb20094  sw          $s2, 0x94($sp)
    ctx->pc = 0x1e3cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 18));
label_1e3cbc:
    // 0x1e3cbc: 0xc7b301d4  lwc1        $f19, 0x1D4($sp)
    ctx->pc = 0x1e3cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
label_1e3cc0:
    // 0x1e3cc0: 0xafb10098  sw          $s1, 0x98($sp)
    ctx->pc = 0x1e3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 17));
label_1e3cc4:
    // 0x1e3cc4: 0xc7b201d8  lwc1        $f18, 0x1D8($sp)
    ctx->pc = 0x1e3cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_1e3cc8:
    // 0x1e3cc8: 0xafa3009c  sw          $v1, 0x9C($sp)
    ctx->pc = 0x1e3cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 3));
label_1e3ccc:
    // 0x1e3ccc: 0xc7b101dc  lwc1        $f17, 0x1DC($sp)
    ctx->pc = 0x1e3cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1e3cd0:
    // 0x1e3cd0: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x1e3cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_1e3cd4:
    // 0x1e3cd4: 0xc7b001e0  lwc1        $f16, 0x1E0($sp)
    ctx->pc = 0x1e3cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1e3cd8:
    // 0x1e3cd8: 0xafa600a4  sw          $a2, 0xA4($sp)
    ctx->pc = 0x1e3cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 6));
label_1e3cdc:
    // 0x1e3cdc: 0xc7af01e4  lwc1        $f15, 0x1E4($sp)
    ctx->pc = 0x1e3cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1e3ce0:
    // 0x1e3ce0: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x1e3ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
label_1e3ce4:
    // 0x1e3ce4: 0xc7ae01e8  lwc1        $f14, 0x1E8($sp)
    ctx->pc = 0x1e3ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1e3ce8:
    // 0x1e3ce8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x1e3ce8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1e3cec:
    // 0x1e3cec: 0x26850010  addiu       $a1, $s4, 0x10
    ctx->pc = 0x1e3cecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
label_1e3cf0:
    // 0x1e3cf0: 0xe7bf00b4  swc1        $f31, 0xB4($sp)
    ctx->pc = 0x1e3cf0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_1e3cf4:
    // 0x1e3cf4: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1e3cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1e3cf8:
    // 0x1e3cf8: 0xe7be00b8  swc1        $f30, 0xB8($sp)
    ctx->pc = 0x1e3cf8u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_1e3cfc:
    // 0x1e3cfc: 0xe7bd00bc  swc1        $f29, 0xBC($sp)
    ctx->pc = 0x1e3cfcu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_1e3d00:
    // 0x1e3d00: 0xe7bc00c0  swc1        $f28, 0xC0($sp)
    ctx->pc = 0x1e3d00u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1e3d04:
    // 0x1e3d04: 0xe7b300c4  swc1        $f19, 0xC4($sp)
    ctx->pc = 0x1e3d04u;
    { float f = ctx->f[19]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1e3d08:
    // 0x1e3d08: 0xe7b200c8  swc1        $f18, 0xC8($sp)
    ctx->pc = 0x1e3d08u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1e3d0c:
    // 0x1e3d0c: 0xe7b100cc  swc1        $f17, 0xCC($sp)
    ctx->pc = 0x1e3d0cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_1e3d10:
    // 0x1e3d10: 0xe7b000d0  swc1        $f16, 0xD0($sp)
    ctx->pc = 0x1e3d10u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1e3d14:
    // 0x1e3d14: 0xe7af00d4  swc1        $f15, 0xD4($sp)
    ctx->pc = 0x1e3d14u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1e3d18:
    // 0x1e3d18: 0xc7ad01ec  lwc1        $f13, 0x1EC($sp)
    ctx->pc = 0x1e3d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1e3d1c:
    // 0x1e3d1c: 0xe7ae00d8  swc1        $f14, 0xD8($sp)
    ctx->pc = 0x1e3d1cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1e3d20:
    // 0x1e3d20: 0xc7ac01f0  lwc1        $f12, 0x1F0($sp)
    ctx->pc = 0x1e3d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1e3d24:
    // 0x1e3d24: 0xe7ad00dc  swc1        $f13, 0xDC($sp)
    ctx->pc = 0x1e3d24u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1e3d28:
    // 0x1e3d28: 0xc7ab01f4  lwc1        $f11, 0x1F4($sp)
    ctx->pc = 0x1e3d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
label_1e3d2c:
    // 0x1e3d2c: 0xe7ac00e0  swc1        $f12, 0xE0($sp)
    ctx->pc = 0x1e3d2cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1e3d30:
    // 0x1e3d30: 0xc7aa01f8  lwc1        $f10, 0x1F8($sp)
    ctx->pc = 0x1e3d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_1e3d34:
    // 0x1e3d34: 0xe7ab00e4  swc1        $f11, 0xE4($sp)
    ctx->pc = 0x1e3d34u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1e3d38:
    // 0x1e3d38: 0x46180200  add.s       $f8, $f0, $f24
    ctx->pc = 0x1e3d38u;
    ctx->f[8] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_1e3d3c:
    // 0x1e3d3c: 0x461901c0  add.s       $f7, $f0, $f25
    ctx->pc = 0x1e3d3cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[0], ctx->f[25]);
label_1e3d40:
    // 0x1e3d40: 0x461a0180  add.s       $f6, $f0, $f26
    ctx->pc = 0x1e3d40u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
label_1e3d44:
    // 0x1e3d44: 0x461b0140  add.s       $f5, $f0, $f27
    ctx->pc = 0x1e3d44u;
    ctx->f[5] = FPU_ADD_S(ctx->f[0], ctx->f[27]);
label_1e3d48:
    // 0x1e3d48: 0x46140100  add.s       $f4, $f0, $f20
    ctx->pc = 0x1e3d48u;
    ctx->f[4] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1e3d4c:
    // 0x1e3d4c: 0xc7a901fc  lwc1        $f9, 0x1FC($sp)
    ctx->pc = 0x1e3d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_1e3d50:
    // 0x1e3d50: 0xe7aa00e8  swc1        $f10, 0xE8($sp)
    ctx->pc = 0x1e3d50u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1e3d54:
    // 0x1e3d54: 0x461500c0  add.s       $f3, $f0, $f21
    ctx->pc = 0x1e3d54u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1e3d58:
    // 0x1e3d58: 0xe7a900ec  swc1        $f9, 0xEC($sp)
    ctx->pc = 0x1e3d58u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_1e3d5c:
    // 0x1e3d5c: 0x46160080  add.s       $f2, $f0, $f22
    ctx->pc = 0x1e3d5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_1e3d60:
    // 0x1e3d60: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x1e3d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_1e3d64:
    // 0x1e3d64: 0x46170040  add.s       $f1, $f0, $f23
    ctx->pc = 0x1e3d64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_1e3d68:
    // 0x1e3d68: 0xe7a80120  swc1        $f8, 0x120($sp)
    ctx->pc = 0x1e3d68u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1e3d6c:
    // 0x1e3d6c: 0xe7a70124  swc1        $f7, 0x124($sp)
    ctx->pc = 0x1e3d6cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1e3d70:
    // 0x1e3d70: 0xe7a60128  swc1        $f6, 0x128($sp)
    ctx->pc = 0x1e3d70u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1e3d74:
    // 0x1e3d74: 0xe7a5012c  swc1        $f5, 0x12C($sp)
    ctx->pc = 0x1e3d74u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1e3d78:
    // 0x1e3d78: 0xe7a40130  swc1        $f4, 0x130($sp)
    ctx->pc = 0x1e3d78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1e3d7c:
    // 0x1e3d7c: 0xe7a30134  swc1        $f3, 0x134($sp)
    ctx->pc = 0x1e3d7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1e3d80:
    // 0x1e3d80: 0xe7a20138  swc1        $f2, 0x138($sp)
    ctx->pc = 0x1e3d80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1e3d84:
    // 0x1e3d84: 0xe7a1013c  swc1        $f1, 0x13C($sp)
    ctx->pc = 0x1e3d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1e3d88:
    // 0x1e3d88: 0xe7a00140  swc1        $f0, 0x140($sp)
    ctx->pc = 0x1e3d88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1e3d8c:
    // 0x1e3d8c: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x1e3d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
label_1e3d90:
    // 0x1e3d90: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x1e3d90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
label_1e3d94:
    // 0x1e3d94: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x1e3d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
label_1e3d98:
    // 0x1e3d98: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x1e3d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
label_1e3d9c:
    // 0x1e3d9c: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x1e3d9cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1e3da0:
    // 0x1e3da0: 0xe7b900f4  swc1        $f25, 0xF4($sp)
    ctx->pc = 0x1e3da0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1e3da4:
    // 0x1e3da4: 0xe7ba00f8  swc1        $f26, 0xF8($sp)
    ctx->pc = 0x1e3da4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_1e3da8:
    // 0x1e3da8: 0xe7bb00fc  swc1        $f27, 0xFC($sp)
    ctx->pc = 0x1e3da8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_1e3dac:
    // 0x1e3dac: 0xe7b40100  swc1        $f20, 0x100($sp)
    ctx->pc = 0x1e3dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1e3db0:
    // 0x1e3db0: 0xe7b50104  swc1        $f21, 0x104($sp)
    ctx->pc = 0x1e3db0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1e3db4:
    // 0x1e3db4: 0xe7b60108  swc1        $f22, 0x108($sp)
    ctx->pc = 0x1e3db4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1e3db8:
    // 0x1e3db8: 0xc093648  jal         func_24D920
label_1e3dbc:
    if (ctx->pc == 0x1E3DBCu) {
        ctx->pc = 0x1E3DBCu;
            // 0x1e3dbc: 0xe7b7010c  swc1        $f23, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->pc = 0x1E3DC0u;
        goto label_1e3dc0;
    }
    ctx->pc = 0x1E3DB8u;
    SET_GPR_U32(ctx, 31, 0x1E3DC0u);
    ctx->pc = 0x1E3DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DB8u;
            // 0x1e3dbc: 0xe7b7010c  swc1        $f23, 0x10C($sp) (Delay Slot)
        { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D920u;
    if (runtime->hasFunction(0x24D920u)) {
        auto targetFn = runtime->lookupFunction(0x24D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DC0u; }
        if (ctx->pc != 0x1E3DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0024D920_0x24d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E3DC0u; }
        if (ctx->pc != 0x1E3DC0u) { return; }
    }
    ctx->pc = 0x1E3DC0u;
label_1e3dc0:
    // 0x1e3dc0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e3dc4:
    // 0x1e3dc4: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x1e3dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
label_1e3dc8:
    // 0x1e3dc8: 0x8c64ea64  lw          $a0, -0x159C($v1)
    ctx->pc = 0x1e3dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
label_1e3dcc:
    // 0x1e3dcc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x1e3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_1e3dd0:
    // 0x1e3dd0: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x1e3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
label_1e3dd4:
    // 0x1e3dd4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x1e3dd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1e3dd8:
    // 0x1e3dd8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1e3ddc:
    if (ctx->pc == 0x1E3DDCu) {
        ctx->pc = 0x1E3DDCu;
            // 0x1e3ddc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->pc = 0x1E3DE0u;
        goto label_1e3de0;
    }
    ctx->pc = 0x1E3DD8u;
    {
        const bool branch_taken_0x1e3dd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E3DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3DD8u;
            // 0x1e3ddc: 0x24a5ea60  addiu       $a1, $a1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3dd8) {
            ctx->pc = 0x1E3E08u;
            goto label_1e3e08;
        }
    }
    ctx->pc = 0x1E3DE0u;
label_1e3de0:
    // 0x1e3de0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x1e3de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1e3de4:
    // 0x1e3de4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1e3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_1e3de8:
    // 0x1e3de8: 0x2463a8b0  addiu       $v1, $v1, -0x5750
    ctx->pc = 0x1e3de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944944));
label_1e3dec:
    // 0x1e3dec: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1e3decu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1e3df0:
    // 0x1e3df0: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
label_1e3df4:
    // 0x1e3df4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1e3df4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_1e3df8:
    // 0x1e3df8: 0x4006c803  .word       0x4006C803                   # mfc0        $a2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x1e3df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_perf);
label_1e3dfc:
    // 0x1e3dfc: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x1e3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_1e3e00:
    // 0x1e3e00: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1e3e00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
label_1e3e04:
    // 0x1e3e04: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x1e3e04u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
label_1e3e08:
    // 0x1e3e08: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1e3e08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1e3e0c:
    // 0x1e3e0c: 0xc7bf002c  lwc1        $f31, 0x2C($sp)
    ctx->pc = 0x1e3e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_1e3e10:
    // 0x1e3e10: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1e3e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1e3e14:
    // 0x1e3e14: 0xc7be0028  lwc1        $f30, 0x28($sp)
    ctx->pc = 0x1e3e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_1e3e18:
    // 0x1e3e18: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1e3e18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e3e1c:
    // 0x1e3e1c: 0xc7bd0024  lwc1        $f29, 0x24($sp)
    ctx->pc = 0x1e3e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_1e3e20:
    // 0x1e3e20: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1e3e20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1e3e24:
    // 0x1e3e24: 0xc7bc0020  lwc1        $f28, 0x20($sp)
    ctx->pc = 0x1e3e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_1e3e28:
    // 0x1e3e28: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1e3e28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1e3e2c:
    // 0x1e3e2c: 0xc7bb001c  lwc1        $f27, 0x1C($sp)
    ctx->pc = 0x1e3e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_1e3e30:
    // 0x1e3e30: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1e3e30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1e3e34:
    // 0x1e3e34: 0xc7ba0018  lwc1        $f26, 0x18($sp)
    ctx->pc = 0x1e3e34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_1e3e38:
    // 0x1e3e38: 0xc7b90014  lwc1        $f25, 0x14($sp)
    ctx->pc = 0x1e3e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_1e3e3c:
    // 0x1e3e3c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x1e3e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_1e3e40:
    // 0x1e3e40: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x1e3e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1e3e44:
    // 0x1e3e44: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x1e3e44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1e3e48:
    // 0x1e3e48: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1e3e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1e3e4c:
    // 0x1e3e4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1e3e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1e3e50:
    // 0x1e3e50: 0x3e00008  jr          $ra
label_1e3e54:
    if (ctx->pc == 0x1E3E54u) {
        ctx->pc = 0x1E3E54u;
            // 0x1e3e54: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1E3E58u;
        goto label_1e3e58;
    }
    ctx->pc = 0x1E3E50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E3E50u;
            // 0x1e3e54: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1E3E58u;
label_1e3e58:
    // 0x1e3e58: 0x0  nop
    ctx->pc = 0x1e3e58u;
    // NOP
label_1e3e5c:
    // 0x1e3e5c: 0x0  nop
    ctx->pc = 0x1e3e5cu;
    // NOP
}
