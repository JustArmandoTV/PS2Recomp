#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004A3790
// Address: 0x4a3790 - 0x4a4ff0
void sub_004A3790_0x4a3790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A3790_0x4a3790");
#endif

    switch (ctx->pc) {
        case 0x4a3790u: goto label_4a3790;
        case 0x4a3794u: goto label_4a3794;
        case 0x4a3798u: goto label_4a3798;
        case 0x4a379cu: goto label_4a379c;
        case 0x4a37a0u: goto label_4a37a0;
        case 0x4a37a4u: goto label_4a37a4;
        case 0x4a37a8u: goto label_4a37a8;
        case 0x4a37acu: goto label_4a37ac;
        case 0x4a37b0u: goto label_4a37b0;
        case 0x4a37b4u: goto label_4a37b4;
        case 0x4a37b8u: goto label_4a37b8;
        case 0x4a37bcu: goto label_4a37bc;
        case 0x4a37c0u: goto label_4a37c0;
        case 0x4a37c4u: goto label_4a37c4;
        case 0x4a37c8u: goto label_4a37c8;
        case 0x4a37ccu: goto label_4a37cc;
        case 0x4a37d0u: goto label_4a37d0;
        case 0x4a37d4u: goto label_4a37d4;
        case 0x4a37d8u: goto label_4a37d8;
        case 0x4a37dcu: goto label_4a37dc;
        case 0x4a37e0u: goto label_4a37e0;
        case 0x4a37e4u: goto label_4a37e4;
        case 0x4a37e8u: goto label_4a37e8;
        case 0x4a37ecu: goto label_4a37ec;
        case 0x4a37f0u: goto label_4a37f0;
        case 0x4a37f4u: goto label_4a37f4;
        case 0x4a37f8u: goto label_4a37f8;
        case 0x4a37fcu: goto label_4a37fc;
        case 0x4a3800u: goto label_4a3800;
        case 0x4a3804u: goto label_4a3804;
        case 0x4a3808u: goto label_4a3808;
        case 0x4a380cu: goto label_4a380c;
        case 0x4a3810u: goto label_4a3810;
        case 0x4a3814u: goto label_4a3814;
        case 0x4a3818u: goto label_4a3818;
        case 0x4a381cu: goto label_4a381c;
        case 0x4a3820u: goto label_4a3820;
        case 0x4a3824u: goto label_4a3824;
        case 0x4a3828u: goto label_4a3828;
        case 0x4a382cu: goto label_4a382c;
        case 0x4a3830u: goto label_4a3830;
        case 0x4a3834u: goto label_4a3834;
        case 0x4a3838u: goto label_4a3838;
        case 0x4a383cu: goto label_4a383c;
        case 0x4a3840u: goto label_4a3840;
        case 0x4a3844u: goto label_4a3844;
        case 0x4a3848u: goto label_4a3848;
        case 0x4a384cu: goto label_4a384c;
        case 0x4a3850u: goto label_4a3850;
        case 0x4a3854u: goto label_4a3854;
        case 0x4a3858u: goto label_4a3858;
        case 0x4a385cu: goto label_4a385c;
        case 0x4a3860u: goto label_4a3860;
        case 0x4a3864u: goto label_4a3864;
        case 0x4a3868u: goto label_4a3868;
        case 0x4a386cu: goto label_4a386c;
        case 0x4a3870u: goto label_4a3870;
        case 0x4a3874u: goto label_4a3874;
        case 0x4a3878u: goto label_4a3878;
        case 0x4a387cu: goto label_4a387c;
        case 0x4a3880u: goto label_4a3880;
        case 0x4a3884u: goto label_4a3884;
        case 0x4a3888u: goto label_4a3888;
        case 0x4a388cu: goto label_4a388c;
        case 0x4a3890u: goto label_4a3890;
        case 0x4a3894u: goto label_4a3894;
        case 0x4a3898u: goto label_4a3898;
        case 0x4a389cu: goto label_4a389c;
        case 0x4a38a0u: goto label_4a38a0;
        case 0x4a38a4u: goto label_4a38a4;
        case 0x4a38a8u: goto label_4a38a8;
        case 0x4a38acu: goto label_4a38ac;
        case 0x4a38b0u: goto label_4a38b0;
        case 0x4a38b4u: goto label_4a38b4;
        case 0x4a38b8u: goto label_4a38b8;
        case 0x4a38bcu: goto label_4a38bc;
        case 0x4a38c0u: goto label_4a38c0;
        case 0x4a38c4u: goto label_4a38c4;
        case 0x4a38c8u: goto label_4a38c8;
        case 0x4a38ccu: goto label_4a38cc;
        case 0x4a38d0u: goto label_4a38d0;
        case 0x4a38d4u: goto label_4a38d4;
        case 0x4a38d8u: goto label_4a38d8;
        case 0x4a38dcu: goto label_4a38dc;
        case 0x4a38e0u: goto label_4a38e0;
        case 0x4a38e4u: goto label_4a38e4;
        case 0x4a38e8u: goto label_4a38e8;
        case 0x4a38ecu: goto label_4a38ec;
        case 0x4a38f0u: goto label_4a38f0;
        case 0x4a38f4u: goto label_4a38f4;
        case 0x4a38f8u: goto label_4a38f8;
        case 0x4a38fcu: goto label_4a38fc;
        case 0x4a3900u: goto label_4a3900;
        case 0x4a3904u: goto label_4a3904;
        case 0x4a3908u: goto label_4a3908;
        case 0x4a390cu: goto label_4a390c;
        case 0x4a3910u: goto label_4a3910;
        case 0x4a3914u: goto label_4a3914;
        case 0x4a3918u: goto label_4a3918;
        case 0x4a391cu: goto label_4a391c;
        case 0x4a3920u: goto label_4a3920;
        case 0x4a3924u: goto label_4a3924;
        case 0x4a3928u: goto label_4a3928;
        case 0x4a392cu: goto label_4a392c;
        case 0x4a3930u: goto label_4a3930;
        case 0x4a3934u: goto label_4a3934;
        case 0x4a3938u: goto label_4a3938;
        case 0x4a393cu: goto label_4a393c;
        case 0x4a3940u: goto label_4a3940;
        case 0x4a3944u: goto label_4a3944;
        case 0x4a3948u: goto label_4a3948;
        case 0x4a394cu: goto label_4a394c;
        case 0x4a3950u: goto label_4a3950;
        case 0x4a3954u: goto label_4a3954;
        case 0x4a3958u: goto label_4a3958;
        case 0x4a395cu: goto label_4a395c;
        case 0x4a3960u: goto label_4a3960;
        case 0x4a3964u: goto label_4a3964;
        case 0x4a3968u: goto label_4a3968;
        case 0x4a396cu: goto label_4a396c;
        case 0x4a3970u: goto label_4a3970;
        case 0x4a3974u: goto label_4a3974;
        case 0x4a3978u: goto label_4a3978;
        case 0x4a397cu: goto label_4a397c;
        case 0x4a3980u: goto label_4a3980;
        case 0x4a3984u: goto label_4a3984;
        case 0x4a3988u: goto label_4a3988;
        case 0x4a398cu: goto label_4a398c;
        case 0x4a3990u: goto label_4a3990;
        case 0x4a3994u: goto label_4a3994;
        case 0x4a3998u: goto label_4a3998;
        case 0x4a399cu: goto label_4a399c;
        case 0x4a39a0u: goto label_4a39a0;
        case 0x4a39a4u: goto label_4a39a4;
        case 0x4a39a8u: goto label_4a39a8;
        case 0x4a39acu: goto label_4a39ac;
        case 0x4a39b0u: goto label_4a39b0;
        case 0x4a39b4u: goto label_4a39b4;
        case 0x4a39b8u: goto label_4a39b8;
        case 0x4a39bcu: goto label_4a39bc;
        case 0x4a39c0u: goto label_4a39c0;
        case 0x4a39c4u: goto label_4a39c4;
        case 0x4a39c8u: goto label_4a39c8;
        case 0x4a39ccu: goto label_4a39cc;
        case 0x4a39d0u: goto label_4a39d0;
        case 0x4a39d4u: goto label_4a39d4;
        case 0x4a39d8u: goto label_4a39d8;
        case 0x4a39dcu: goto label_4a39dc;
        case 0x4a39e0u: goto label_4a39e0;
        case 0x4a39e4u: goto label_4a39e4;
        case 0x4a39e8u: goto label_4a39e8;
        case 0x4a39ecu: goto label_4a39ec;
        case 0x4a39f0u: goto label_4a39f0;
        case 0x4a39f4u: goto label_4a39f4;
        case 0x4a39f8u: goto label_4a39f8;
        case 0x4a39fcu: goto label_4a39fc;
        case 0x4a3a00u: goto label_4a3a00;
        case 0x4a3a04u: goto label_4a3a04;
        case 0x4a3a08u: goto label_4a3a08;
        case 0x4a3a0cu: goto label_4a3a0c;
        case 0x4a3a10u: goto label_4a3a10;
        case 0x4a3a14u: goto label_4a3a14;
        case 0x4a3a18u: goto label_4a3a18;
        case 0x4a3a1cu: goto label_4a3a1c;
        case 0x4a3a20u: goto label_4a3a20;
        case 0x4a3a24u: goto label_4a3a24;
        case 0x4a3a28u: goto label_4a3a28;
        case 0x4a3a2cu: goto label_4a3a2c;
        case 0x4a3a30u: goto label_4a3a30;
        case 0x4a3a34u: goto label_4a3a34;
        case 0x4a3a38u: goto label_4a3a38;
        case 0x4a3a3cu: goto label_4a3a3c;
        case 0x4a3a40u: goto label_4a3a40;
        case 0x4a3a44u: goto label_4a3a44;
        case 0x4a3a48u: goto label_4a3a48;
        case 0x4a3a4cu: goto label_4a3a4c;
        case 0x4a3a50u: goto label_4a3a50;
        case 0x4a3a54u: goto label_4a3a54;
        case 0x4a3a58u: goto label_4a3a58;
        case 0x4a3a5cu: goto label_4a3a5c;
        case 0x4a3a60u: goto label_4a3a60;
        case 0x4a3a64u: goto label_4a3a64;
        case 0x4a3a68u: goto label_4a3a68;
        case 0x4a3a6cu: goto label_4a3a6c;
        case 0x4a3a70u: goto label_4a3a70;
        case 0x4a3a74u: goto label_4a3a74;
        case 0x4a3a78u: goto label_4a3a78;
        case 0x4a3a7cu: goto label_4a3a7c;
        case 0x4a3a80u: goto label_4a3a80;
        case 0x4a3a84u: goto label_4a3a84;
        case 0x4a3a88u: goto label_4a3a88;
        case 0x4a3a8cu: goto label_4a3a8c;
        case 0x4a3a90u: goto label_4a3a90;
        case 0x4a3a94u: goto label_4a3a94;
        case 0x4a3a98u: goto label_4a3a98;
        case 0x4a3a9cu: goto label_4a3a9c;
        case 0x4a3aa0u: goto label_4a3aa0;
        case 0x4a3aa4u: goto label_4a3aa4;
        case 0x4a3aa8u: goto label_4a3aa8;
        case 0x4a3aacu: goto label_4a3aac;
        case 0x4a3ab0u: goto label_4a3ab0;
        case 0x4a3ab4u: goto label_4a3ab4;
        case 0x4a3ab8u: goto label_4a3ab8;
        case 0x4a3abcu: goto label_4a3abc;
        case 0x4a3ac0u: goto label_4a3ac0;
        case 0x4a3ac4u: goto label_4a3ac4;
        case 0x4a3ac8u: goto label_4a3ac8;
        case 0x4a3accu: goto label_4a3acc;
        case 0x4a3ad0u: goto label_4a3ad0;
        case 0x4a3ad4u: goto label_4a3ad4;
        case 0x4a3ad8u: goto label_4a3ad8;
        case 0x4a3adcu: goto label_4a3adc;
        case 0x4a3ae0u: goto label_4a3ae0;
        case 0x4a3ae4u: goto label_4a3ae4;
        case 0x4a3ae8u: goto label_4a3ae8;
        case 0x4a3aecu: goto label_4a3aec;
        case 0x4a3af0u: goto label_4a3af0;
        case 0x4a3af4u: goto label_4a3af4;
        case 0x4a3af8u: goto label_4a3af8;
        case 0x4a3afcu: goto label_4a3afc;
        case 0x4a3b00u: goto label_4a3b00;
        case 0x4a3b04u: goto label_4a3b04;
        case 0x4a3b08u: goto label_4a3b08;
        case 0x4a3b0cu: goto label_4a3b0c;
        case 0x4a3b10u: goto label_4a3b10;
        case 0x4a3b14u: goto label_4a3b14;
        case 0x4a3b18u: goto label_4a3b18;
        case 0x4a3b1cu: goto label_4a3b1c;
        case 0x4a3b20u: goto label_4a3b20;
        case 0x4a3b24u: goto label_4a3b24;
        case 0x4a3b28u: goto label_4a3b28;
        case 0x4a3b2cu: goto label_4a3b2c;
        case 0x4a3b30u: goto label_4a3b30;
        case 0x4a3b34u: goto label_4a3b34;
        case 0x4a3b38u: goto label_4a3b38;
        case 0x4a3b3cu: goto label_4a3b3c;
        case 0x4a3b40u: goto label_4a3b40;
        case 0x4a3b44u: goto label_4a3b44;
        case 0x4a3b48u: goto label_4a3b48;
        case 0x4a3b4cu: goto label_4a3b4c;
        case 0x4a3b50u: goto label_4a3b50;
        case 0x4a3b54u: goto label_4a3b54;
        case 0x4a3b58u: goto label_4a3b58;
        case 0x4a3b5cu: goto label_4a3b5c;
        case 0x4a3b60u: goto label_4a3b60;
        case 0x4a3b64u: goto label_4a3b64;
        case 0x4a3b68u: goto label_4a3b68;
        case 0x4a3b6cu: goto label_4a3b6c;
        case 0x4a3b70u: goto label_4a3b70;
        case 0x4a3b74u: goto label_4a3b74;
        case 0x4a3b78u: goto label_4a3b78;
        case 0x4a3b7cu: goto label_4a3b7c;
        case 0x4a3b80u: goto label_4a3b80;
        case 0x4a3b84u: goto label_4a3b84;
        case 0x4a3b88u: goto label_4a3b88;
        case 0x4a3b8cu: goto label_4a3b8c;
        case 0x4a3b90u: goto label_4a3b90;
        case 0x4a3b94u: goto label_4a3b94;
        case 0x4a3b98u: goto label_4a3b98;
        case 0x4a3b9cu: goto label_4a3b9c;
        case 0x4a3ba0u: goto label_4a3ba0;
        case 0x4a3ba4u: goto label_4a3ba4;
        case 0x4a3ba8u: goto label_4a3ba8;
        case 0x4a3bacu: goto label_4a3bac;
        case 0x4a3bb0u: goto label_4a3bb0;
        case 0x4a3bb4u: goto label_4a3bb4;
        case 0x4a3bb8u: goto label_4a3bb8;
        case 0x4a3bbcu: goto label_4a3bbc;
        case 0x4a3bc0u: goto label_4a3bc0;
        case 0x4a3bc4u: goto label_4a3bc4;
        case 0x4a3bc8u: goto label_4a3bc8;
        case 0x4a3bccu: goto label_4a3bcc;
        case 0x4a3bd0u: goto label_4a3bd0;
        case 0x4a3bd4u: goto label_4a3bd4;
        case 0x4a3bd8u: goto label_4a3bd8;
        case 0x4a3bdcu: goto label_4a3bdc;
        case 0x4a3be0u: goto label_4a3be0;
        case 0x4a3be4u: goto label_4a3be4;
        case 0x4a3be8u: goto label_4a3be8;
        case 0x4a3becu: goto label_4a3bec;
        case 0x4a3bf0u: goto label_4a3bf0;
        case 0x4a3bf4u: goto label_4a3bf4;
        case 0x4a3bf8u: goto label_4a3bf8;
        case 0x4a3bfcu: goto label_4a3bfc;
        case 0x4a3c00u: goto label_4a3c00;
        case 0x4a3c04u: goto label_4a3c04;
        case 0x4a3c08u: goto label_4a3c08;
        case 0x4a3c0cu: goto label_4a3c0c;
        case 0x4a3c10u: goto label_4a3c10;
        case 0x4a3c14u: goto label_4a3c14;
        case 0x4a3c18u: goto label_4a3c18;
        case 0x4a3c1cu: goto label_4a3c1c;
        case 0x4a3c20u: goto label_4a3c20;
        case 0x4a3c24u: goto label_4a3c24;
        case 0x4a3c28u: goto label_4a3c28;
        case 0x4a3c2cu: goto label_4a3c2c;
        case 0x4a3c30u: goto label_4a3c30;
        case 0x4a3c34u: goto label_4a3c34;
        case 0x4a3c38u: goto label_4a3c38;
        case 0x4a3c3cu: goto label_4a3c3c;
        case 0x4a3c40u: goto label_4a3c40;
        case 0x4a3c44u: goto label_4a3c44;
        case 0x4a3c48u: goto label_4a3c48;
        case 0x4a3c4cu: goto label_4a3c4c;
        case 0x4a3c50u: goto label_4a3c50;
        case 0x4a3c54u: goto label_4a3c54;
        case 0x4a3c58u: goto label_4a3c58;
        case 0x4a3c5cu: goto label_4a3c5c;
        case 0x4a3c60u: goto label_4a3c60;
        case 0x4a3c64u: goto label_4a3c64;
        case 0x4a3c68u: goto label_4a3c68;
        case 0x4a3c6cu: goto label_4a3c6c;
        case 0x4a3c70u: goto label_4a3c70;
        case 0x4a3c74u: goto label_4a3c74;
        case 0x4a3c78u: goto label_4a3c78;
        case 0x4a3c7cu: goto label_4a3c7c;
        case 0x4a3c80u: goto label_4a3c80;
        case 0x4a3c84u: goto label_4a3c84;
        case 0x4a3c88u: goto label_4a3c88;
        case 0x4a3c8cu: goto label_4a3c8c;
        case 0x4a3c90u: goto label_4a3c90;
        case 0x4a3c94u: goto label_4a3c94;
        case 0x4a3c98u: goto label_4a3c98;
        case 0x4a3c9cu: goto label_4a3c9c;
        case 0x4a3ca0u: goto label_4a3ca0;
        case 0x4a3ca4u: goto label_4a3ca4;
        case 0x4a3ca8u: goto label_4a3ca8;
        case 0x4a3cacu: goto label_4a3cac;
        case 0x4a3cb0u: goto label_4a3cb0;
        case 0x4a3cb4u: goto label_4a3cb4;
        case 0x4a3cb8u: goto label_4a3cb8;
        case 0x4a3cbcu: goto label_4a3cbc;
        case 0x4a3cc0u: goto label_4a3cc0;
        case 0x4a3cc4u: goto label_4a3cc4;
        case 0x4a3cc8u: goto label_4a3cc8;
        case 0x4a3cccu: goto label_4a3ccc;
        case 0x4a3cd0u: goto label_4a3cd0;
        case 0x4a3cd4u: goto label_4a3cd4;
        case 0x4a3cd8u: goto label_4a3cd8;
        case 0x4a3cdcu: goto label_4a3cdc;
        case 0x4a3ce0u: goto label_4a3ce0;
        case 0x4a3ce4u: goto label_4a3ce4;
        case 0x4a3ce8u: goto label_4a3ce8;
        case 0x4a3cecu: goto label_4a3cec;
        case 0x4a3cf0u: goto label_4a3cf0;
        case 0x4a3cf4u: goto label_4a3cf4;
        case 0x4a3cf8u: goto label_4a3cf8;
        case 0x4a3cfcu: goto label_4a3cfc;
        case 0x4a3d00u: goto label_4a3d00;
        case 0x4a3d04u: goto label_4a3d04;
        case 0x4a3d08u: goto label_4a3d08;
        case 0x4a3d0cu: goto label_4a3d0c;
        case 0x4a3d10u: goto label_4a3d10;
        case 0x4a3d14u: goto label_4a3d14;
        case 0x4a3d18u: goto label_4a3d18;
        case 0x4a3d1cu: goto label_4a3d1c;
        case 0x4a3d20u: goto label_4a3d20;
        case 0x4a3d24u: goto label_4a3d24;
        case 0x4a3d28u: goto label_4a3d28;
        case 0x4a3d2cu: goto label_4a3d2c;
        case 0x4a3d30u: goto label_4a3d30;
        case 0x4a3d34u: goto label_4a3d34;
        case 0x4a3d38u: goto label_4a3d38;
        case 0x4a3d3cu: goto label_4a3d3c;
        case 0x4a3d40u: goto label_4a3d40;
        case 0x4a3d44u: goto label_4a3d44;
        case 0x4a3d48u: goto label_4a3d48;
        case 0x4a3d4cu: goto label_4a3d4c;
        case 0x4a3d50u: goto label_4a3d50;
        case 0x4a3d54u: goto label_4a3d54;
        case 0x4a3d58u: goto label_4a3d58;
        case 0x4a3d5cu: goto label_4a3d5c;
        case 0x4a3d60u: goto label_4a3d60;
        case 0x4a3d64u: goto label_4a3d64;
        case 0x4a3d68u: goto label_4a3d68;
        case 0x4a3d6cu: goto label_4a3d6c;
        case 0x4a3d70u: goto label_4a3d70;
        case 0x4a3d74u: goto label_4a3d74;
        case 0x4a3d78u: goto label_4a3d78;
        case 0x4a3d7cu: goto label_4a3d7c;
        case 0x4a3d80u: goto label_4a3d80;
        case 0x4a3d84u: goto label_4a3d84;
        case 0x4a3d88u: goto label_4a3d88;
        case 0x4a3d8cu: goto label_4a3d8c;
        case 0x4a3d90u: goto label_4a3d90;
        case 0x4a3d94u: goto label_4a3d94;
        case 0x4a3d98u: goto label_4a3d98;
        case 0x4a3d9cu: goto label_4a3d9c;
        case 0x4a3da0u: goto label_4a3da0;
        case 0x4a3da4u: goto label_4a3da4;
        case 0x4a3da8u: goto label_4a3da8;
        case 0x4a3dacu: goto label_4a3dac;
        case 0x4a3db0u: goto label_4a3db0;
        case 0x4a3db4u: goto label_4a3db4;
        case 0x4a3db8u: goto label_4a3db8;
        case 0x4a3dbcu: goto label_4a3dbc;
        case 0x4a3dc0u: goto label_4a3dc0;
        case 0x4a3dc4u: goto label_4a3dc4;
        case 0x4a3dc8u: goto label_4a3dc8;
        case 0x4a3dccu: goto label_4a3dcc;
        case 0x4a3dd0u: goto label_4a3dd0;
        case 0x4a3dd4u: goto label_4a3dd4;
        case 0x4a3dd8u: goto label_4a3dd8;
        case 0x4a3ddcu: goto label_4a3ddc;
        case 0x4a3de0u: goto label_4a3de0;
        case 0x4a3de4u: goto label_4a3de4;
        case 0x4a3de8u: goto label_4a3de8;
        case 0x4a3decu: goto label_4a3dec;
        case 0x4a3df0u: goto label_4a3df0;
        case 0x4a3df4u: goto label_4a3df4;
        case 0x4a3df8u: goto label_4a3df8;
        case 0x4a3dfcu: goto label_4a3dfc;
        case 0x4a3e00u: goto label_4a3e00;
        case 0x4a3e04u: goto label_4a3e04;
        case 0x4a3e08u: goto label_4a3e08;
        case 0x4a3e0cu: goto label_4a3e0c;
        case 0x4a3e10u: goto label_4a3e10;
        case 0x4a3e14u: goto label_4a3e14;
        case 0x4a3e18u: goto label_4a3e18;
        case 0x4a3e1cu: goto label_4a3e1c;
        case 0x4a3e20u: goto label_4a3e20;
        case 0x4a3e24u: goto label_4a3e24;
        case 0x4a3e28u: goto label_4a3e28;
        case 0x4a3e2cu: goto label_4a3e2c;
        case 0x4a3e30u: goto label_4a3e30;
        case 0x4a3e34u: goto label_4a3e34;
        case 0x4a3e38u: goto label_4a3e38;
        case 0x4a3e3cu: goto label_4a3e3c;
        case 0x4a3e40u: goto label_4a3e40;
        case 0x4a3e44u: goto label_4a3e44;
        case 0x4a3e48u: goto label_4a3e48;
        case 0x4a3e4cu: goto label_4a3e4c;
        case 0x4a3e50u: goto label_4a3e50;
        case 0x4a3e54u: goto label_4a3e54;
        case 0x4a3e58u: goto label_4a3e58;
        case 0x4a3e5cu: goto label_4a3e5c;
        case 0x4a3e60u: goto label_4a3e60;
        case 0x4a3e64u: goto label_4a3e64;
        case 0x4a3e68u: goto label_4a3e68;
        case 0x4a3e6cu: goto label_4a3e6c;
        case 0x4a3e70u: goto label_4a3e70;
        case 0x4a3e74u: goto label_4a3e74;
        case 0x4a3e78u: goto label_4a3e78;
        case 0x4a3e7cu: goto label_4a3e7c;
        case 0x4a3e80u: goto label_4a3e80;
        case 0x4a3e84u: goto label_4a3e84;
        case 0x4a3e88u: goto label_4a3e88;
        case 0x4a3e8cu: goto label_4a3e8c;
        case 0x4a3e90u: goto label_4a3e90;
        case 0x4a3e94u: goto label_4a3e94;
        case 0x4a3e98u: goto label_4a3e98;
        case 0x4a3e9cu: goto label_4a3e9c;
        case 0x4a3ea0u: goto label_4a3ea0;
        case 0x4a3ea4u: goto label_4a3ea4;
        case 0x4a3ea8u: goto label_4a3ea8;
        case 0x4a3eacu: goto label_4a3eac;
        case 0x4a3eb0u: goto label_4a3eb0;
        case 0x4a3eb4u: goto label_4a3eb4;
        case 0x4a3eb8u: goto label_4a3eb8;
        case 0x4a3ebcu: goto label_4a3ebc;
        case 0x4a3ec0u: goto label_4a3ec0;
        case 0x4a3ec4u: goto label_4a3ec4;
        case 0x4a3ec8u: goto label_4a3ec8;
        case 0x4a3eccu: goto label_4a3ecc;
        case 0x4a3ed0u: goto label_4a3ed0;
        case 0x4a3ed4u: goto label_4a3ed4;
        case 0x4a3ed8u: goto label_4a3ed8;
        case 0x4a3edcu: goto label_4a3edc;
        case 0x4a3ee0u: goto label_4a3ee0;
        case 0x4a3ee4u: goto label_4a3ee4;
        case 0x4a3ee8u: goto label_4a3ee8;
        case 0x4a3eecu: goto label_4a3eec;
        case 0x4a3ef0u: goto label_4a3ef0;
        case 0x4a3ef4u: goto label_4a3ef4;
        case 0x4a3ef8u: goto label_4a3ef8;
        case 0x4a3efcu: goto label_4a3efc;
        case 0x4a3f00u: goto label_4a3f00;
        case 0x4a3f04u: goto label_4a3f04;
        case 0x4a3f08u: goto label_4a3f08;
        case 0x4a3f0cu: goto label_4a3f0c;
        case 0x4a3f10u: goto label_4a3f10;
        case 0x4a3f14u: goto label_4a3f14;
        case 0x4a3f18u: goto label_4a3f18;
        case 0x4a3f1cu: goto label_4a3f1c;
        case 0x4a3f20u: goto label_4a3f20;
        case 0x4a3f24u: goto label_4a3f24;
        case 0x4a3f28u: goto label_4a3f28;
        case 0x4a3f2cu: goto label_4a3f2c;
        case 0x4a3f30u: goto label_4a3f30;
        case 0x4a3f34u: goto label_4a3f34;
        case 0x4a3f38u: goto label_4a3f38;
        case 0x4a3f3cu: goto label_4a3f3c;
        case 0x4a3f40u: goto label_4a3f40;
        case 0x4a3f44u: goto label_4a3f44;
        case 0x4a3f48u: goto label_4a3f48;
        case 0x4a3f4cu: goto label_4a3f4c;
        case 0x4a3f50u: goto label_4a3f50;
        case 0x4a3f54u: goto label_4a3f54;
        case 0x4a3f58u: goto label_4a3f58;
        case 0x4a3f5cu: goto label_4a3f5c;
        case 0x4a3f60u: goto label_4a3f60;
        case 0x4a3f64u: goto label_4a3f64;
        case 0x4a3f68u: goto label_4a3f68;
        case 0x4a3f6cu: goto label_4a3f6c;
        case 0x4a3f70u: goto label_4a3f70;
        case 0x4a3f74u: goto label_4a3f74;
        case 0x4a3f78u: goto label_4a3f78;
        case 0x4a3f7cu: goto label_4a3f7c;
        case 0x4a3f80u: goto label_4a3f80;
        case 0x4a3f84u: goto label_4a3f84;
        case 0x4a3f88u: goto label_4a3f88;
        case 0x4a3f8cu: goto label_4a3f8c;
        case 0x4a3f90u: goto label_4a3f90;
        case 0x4a3f94u: goto label_4a3f94;
        case 0x4a3f98u: goto label_4a3f98;
        case 0x4a3f9cu: goto label_4a3f9c;
        case 0x4a3fa0u: goto label_4a3fa0;
        case 0x4a3fa4u: goto label_4a3fa4;
        case 0x4a3fa8u: goto label_4a3fa8;
        case 0x4a3facu: goto label_4a3fac;
        case 0x4a3fb0u: goto label_4a3fb0;
        case 0x4a3fb4u: goto label_4a3fb4;
        case 0x4a3fb8u: goto label_4a3fb8;
        case 0x4a3fbcu: goto label_4a3fbc;
        case 0x4a3fc0u: goto label_4a3fc0;
        case 0x4a3fc4u: goto label_4a3fc4;
        case 0x4a3fc8u: goto label_4a3fc8;
        case 0x4a3fccu: goto label_4a3fcc;
        case 0x4a3fd0u: goto label_4a3fd0;
        case 0x4a3fd4u: goto label_4a3fd4;
        case 0x4a3fd8u: goto label_4a3fd8;
        case 0x4a3fdcu: goto label_4a3fdc;
        case 0x4a3fe0u: goto label_4a3fe0;
        case 0x4a3fe4u: goto label_4a3fe4;
        case 0x4a3fe8u: goto label_4a3fe8;
        case 0x4a3fecu: goto label_4a3fec;
        case 0x4a3ff0u: goto label_4a3ff0;
        case 0x4a3ff4u: goto label_4a3ff4;
        case 0x4a3ff8u: goto label_4a3ff8;
        case 0x4a3ffcu: goto label_4a3ffc;
        case 0x4a4000u: goto label_4a4000;
        case 0x4a4004u: goto label_4a4004;
        case 0x4a4008u: goto label_4a4008;
        case 0x4a400cu: goto label_4a400c;
        case 0x4a4010u: goto label_4a4010;
        case 0x4a4014u: goto label_4a4014;
        case 0x4a4018u: goto label_4a4018;
        case 0x4a401cu: goto label_4a401c;
        case 0x4a4020u: goto label_4a4020;
        case 0x4a4024u: goto label_4a4024;
        case 0x4a4028u: goto label_4a4028;
        case 0x4a402cu: goto label_4a402c;
        case 0x4a4030u: goto label_4a4030;
        case 0x4a4034u: goto label_4a4034;
        case 0x4a4038u: goto label_4a4038;
        case 0x4a403cu: goto label_4a403c;
        case 0x4a4040u: goto label_4a4040;
        case 0x4a4044u: goto label_4a4044;
        case 0x4a4048u: goto label_4a4048;
        case 0x4a404cu: goto label_4a404c;
        case 0x4a4050u: goto label_4a4050;
        case 0x4a4054u: goto label_4a4054;
        case 0x4a4058u: goto label_4a4058;
        case 0x4a405cu: goto label_4a405c;
        case 0x4a4060u: goto label_4a4060;
        case 0x4a4064u: goto label_4a4064;
        case 0x4a4068u: goto label_4a4068;
        case 0x4a406cu: goto label_4a406c;
        case 0x4a4070u: goto label_4a4070;
        case 0x4a4074u: goto label_4a4074;
        case 0x4a4078u: goto label_4a4078;
        case 0x4a407cu: goto label_4a407c;
        case 0x4a4080u: goto label_4a4080;
        case 0x4a4084u: goto label_4a4084;
        case 0x4a4088u: goto label_4a4088;
        case 0x4a408cu: goto label_4a408c;
        case 0x4a4090u: goto label_4a4090;
        case 0x4a4094u: goto label_4a4094;
        case 0x4a4098u: goto label_4a4098;
        case 0x4a409cu: goto label_4a409c;
        case 0x4a40a0u: goto label_4a40a0;
        case 0x4a40a4u: goto label_4a40a4;
        case 0x4a40a8u: goto label_4a40a8;
        case 0x4a40acu: goto label_4a40ac;
        case 0x4a40b0u: goto label_4a40b0;
        case 0x4a40b4u: goto label_4a40b4;
        case 0x4a40b8u: goto label_4a40b8;
        case 0x4a40bcu: goto label_4a40bc;
        case 0x4a40c0u: goto label_4a40c0;
        case 0x4a40c4u: goto label_4a40c4;
        case 0x4a40c8u: goto label_4a40c8;
        case 0x4a40ccu: goto label_4a40cc;
        case 0x4a40d0u: goto label_4a40d0;
        case 0x4a40d4u: goto label_4a40d4;
        case 0x4a40d8u: goto label_4a40d8;
        case 0x4a40dcu: goto label_4a40dc;
        case 0x4a40e0u: goto label_4a40e0;
        case 0x4a40e4u: goto label_4a40e4;
        case 0x4a40e8u: goto label_4a40e8;
        case 0x4a40ecu: goto label_4a40ec;
        case 0x4a40f0u: goto label_4a40f0;
        case 0x4a40f4u: goto label_4a40f4;
        case 0x4a40f8u: goto label_4a40f8;
        case 0x4a40fcu: goto label_4a40fc;
        case 0x4a4100u: goto label_4a4100;
        case 0x4a4104u: goto label_4a4104;
        case 0x4a4108u: goto label_4a4108;
        case 0x4a410cu: goto label_4a410c;
        case 0x4a4110u: goto label_4a4110;
        case 0x4a4114u: goto label_4a4114;
        case 0x4a4118u: goto label_4a4118;
        case 0x4a411cu: goto label_4a411c;
        case 0x4a4120u: goto label_4a4120;
        case 0x4a4124u: goto label_4a4124;
        case 0x4a4128u: goto label_4a4128;
        case 0x4a412cu: goto label_4a412c;
        case 0x4a4130u: goto label_4a4130;
        case 0x4a4134u: goto label_4a4134;
        case 0x4a4138u: goto label_4a4138;
        case 0x4a413cu: goto label_4a413c;
        case 0x4a4140u: goto label_4a4140;
        case 0x4a4144u: goto label_4a4144;
        case 0x4a4148u: goto label_4a4148;
        case 0x4a414cu: goto label_4a414c;
        case 0x4a4150u: goto label_4a4150;
        case 0x4a4154u: goto label_4a4154;
        case 0x4a4158u: goto label_4a4158;
        case 0x4a415cu: goto label_4a415c;
        case 0x4a4160u: goto label_4a4160;
        case 0x4a4164u: goto label_4a4164;
        case 0x4a4168u: goto label_4a4168;
        case 0x4a416cu: goto label_4a416c;
        case 0x4a4170u: goto label_4a4170;
        case 0x4a4174u: goto label_4a4174;
        case 0x4a4178u: goto label_4a4178;
        case 0x4a417cu: goto label_4a417c;
        case 0x4a4180u: goto label_4a4180;
        case 0x4a4184u: goto label_4a4184;
        case 0x4a4188u: goto label_4a4188;
        case 0x4a418cu: goto label_4a418c;
        case 0x4a4190u: goto label_4a4190;
        case 0x4a4194u: goto label_4a4194;
        case 0x4a4198u: goto label_4a4198;
        case 0x4a419cu: goto label_4a419c;
        case 0x4a41a0u: goto label_4a41a0;
        case 0x4a41a4u: goto label_4a41a4;
        case 0x4a41a8u: goto label_4a41a8;
        case 0x4a41acu: goto label_4a41ac;
        case 0x4a41b0u: goto label_4a41b0;
        case 0x4a41b4u: goto label_4a41b4;
        case 0x4a41b8u: goto label_4a41b8;
        case 0x4a41bcu: goto label_4a41bc;
        case 0x4a41c0u: goto label_4a41c0;
        case 0x4a41c4u: goto label_4a41c4;
        case 0x4a41c8u: goto label_4a41c8;
        case 0x4a41ccu: goto label_4a41cc;
        case 0x4a41d0u: goto label_4a41d0;
        case 0x4a41d4u: goto label_4a41d4;
        case 0x4a41d8u: goto label_4a41d8;
        case 0x4a41dcu: goto label_4a41dc;
        case 0x4a41e0u: goto label_4a41e0;
        case 0x4a41e4u: goto label_4a41e4;
        case 0x4a41e8u: goto label_4a41e8;
        case 0x4a41ecu: goto label_4a41ec;
        case 0x4a41f0u: goto label_4a41f0;
        case 0x4a41f4u: goto label_4a41f4;
        case 0x4a41f8u: goto label_4a41f8;
        case 0x4a41fcu: goto label_4a41fc;
        case 0x4a4200u: goto label_4a4200;
        case 0x4a4204u: goto label_4a4204;
        case 0x4a4208u: goto label_4a4208;
        case 0x4a420cu: goto label_4a420c;
        case 0x4a4210u: goto label_4a4210;
        case 0x4a4214u: goto label_4a4214;
        case 0x4a4218u: goto label_4a4218;
        case 0x4a421cu: goto label_4a421c;
        case 0x4a4220u: goto label_4a4220;
        case 0x4a4224u: goto label_4a4224;
        case 0x4a4228u: goto label_4a4228;
        case 0x4a422cu: goto label_4a422c;
        case 0x4a4230u: goto label_4a4230;
        case 0x4a4234u: goto label_4a4234;
        case 0x4a4238u: goto label_4a4238;
        case 0x4a423cu: goto label_4a423c;
        case 0x4a4240u: goto label_4a4240;
        case 0x4a4244u: goto label_4a4244;
        case 0x4a4248u: goto label_4a4248;
        case 0x4a424cu: goto label_4a424c;
        case 0x4a4250u: goto label_4a4250;
        case 0x4a4254u: goto label_4a4254;
        case 0x4a4258u: goto label_4a4258;
        case 0x4a425cu: goto label_4a425c;
        case 0x4a4260u: goto label_4a4260;
        case 0x4a4264u: goto label_4a4264;
        case 0x4a4268u: goto label_4a4268;
        case 0x4a426cu: goto label_4a426c;
        case 0x4a4270u: goto label_4a4270;
        case 0x4a4274u: goto label_4a4274;
        case 0x4a4278u: goto label_4a4278;
        case 0x4a427cu: goto label_4a427c;
        case 0x4a4280u: goto label_4a4280;
        case 0x4a4284u: goto label_4a4284;
        case 0x4a4288u: goto label_4a4288;
        case 0x4a428cu: goto label_4a428c;
        case 0x4a4290u: goto label_4a4290;
        case 0x4a4294u: goto label_4a4294;
        case 0x4a4298u: goto label_4a4298;
        case 0x4a429cu: goto label_4a429c;
        case 0x4a42a0u: goto label_4a42a0;
        case 0x4a42a4u: goto label_4a42a4;
        case 0x4a42a8u: goto label_4a42a8;
        case 0x4a42acu: goto label_4a42ac;
        case 0x4a42b0u: goto label_4a42b0;
        case 0x4a42b4u: goto label_4a42b4;
        case 0x4a42b8u: goto label_4a42b8;
        case 0x4a42bcu: goto label_4a42bc;
        case 0x4a42c0u: goto label_4a42c0;
        case 0x4a42c4u: goto label_4a42c4;
        case 0x4a42c8u: goto label_4a42c8;
        case 0x4a42ccu: goto label_4a42cc;
        case 0x4a42d0u: goto label_4a42d0;
        case 0x4a42d4u: goto label_4a42d4;
        case 0x4a42d8u: goto label_4a42d8;
        case 0x4a42dcu: goto label_4a42dc;
        case 0x4a42e0u: goto label_4a42e0;
        case 0x4a42e4u: goto label_4a42e4;
        case 0x4a42e8u: goto label_4a42e8;
        case 0x4a42ecu: goto label_4a42ec;
        case 0x4a42f0u: goto label_4a42f0;
        case 0x4a42f4u: goto label_4a42f4;
        case 0x4a42f8u: goto label_4a42f8;
        case 0x4a42fcu: goto label_4a42fc;
        case 0x4a4300u: goto label_4a4300;
        case 0x4a4304u: goto label_4a4304;
        case 0x4a4308u: goto label_4a4308;
        case 0x4a430cu: goto label_4a430c;
        case 0x4a4310u: goto label_4a4310;
        case 0x4a4314u: goto label_4a4314;
        case 0x4a4318u: goto label_4a4318;
        case 0x4a431cu: goto label_4a431c;
        case 0x4a4320u: goto label_4a4320;
        case 0x4a4324u: goto label_4a4324;
        case 0x4a4328u: goto label_4a4328;
        case 0x4a432cu: goto label_4a432c;
        case 0x4a4330u: goto label_4a4330;
        case 0x4a4334u: goto label_4a4334;
        case 0x4a4338u: goto label_4a4338;
        case 0x4a433cu: goto label_4a433c;
        case 0x4a4340u: goto label_4a4340;
        case 0x4a4344u: goto label_4a4344;
        case 0x4a4348u: goto label_4a4348;
        case 0x4a434cu: goto label_4a434c;
        case 0x4a4350u: goto label_4a4350;
        case 0x4a4354u: goto label_4a4354;
        case 0x4a4358u: goto label_4a4358;
        case 0x4a435cu: goto label_4a435c;
        case 0x4a4360u: goto label_4a4360;
        case 0x4a4364u: goto label_4a4364;
        case 0x4a4368u: goto label_4a4368;
        case 0x4a436cu: goto label_4a436c;
        case 0x4a4370u: goto label_4a4370;
        case 0x4a4374u: goto label_4a4374;
        case 0x4a4378u: goto label_4a4378;
        case 0x4a437cu: goto label_4a437c;
        case 0x4a4380u: goto label_4a4380;
        case 0x4a4384u: goto label_4a4384;
        case 0x4a4388u: goto label_4a4388;
        case 0x4a438cu: goto label_4a438c;
        case 0x4a4390u: goto label_4a4390;
        case 0x4a4394u: goto label_4a4394;
        case 0x4a4398u: goto label_4a4398;
        case 0x4a439cu: goto label_4a439c;
        case 0x4a43a0u: goto label_4a43a0;
        case 0x4a43a4u: goto label_4a43a4;
        case 0x4a43a8u: goto label_4a43a8;
        case 0x4a43acu: goto label_4a43ac;
        case 0x4a43b0u: goto label_4a43b0;
        case 0x4a43b4u: goto label_4a43b4;
        case 0x4a43b8u: goto label_4a43b8;
        case 0x4a43bcu: goto label_4a43bc;
        case 0x4a43c0u: goto label_4a43c0;
        case 0x4a43c4u: goto label_4a43c4;
        case 0x4a43c8u: goto label_4a43c8;
        case 0x4a43ccu: goto label_4a43cc;
        case 0x4a43d0u: goto label_4a43d0;
        case 0x4a43d4u: goto label_4a43d4;
        case 0x4a43d8u: goto label_4a43d8;
        case 0x4a43dcu: goto label_4a43dc;
        case 0x4a43e0u: goto label_4a43e0;
        case 0x4a43e4u: goto label_4a43e4;
        case 0x4a43e8u: goto label_4a43e8;
        case 0x4a43ecu: goto label_4a43ec;
        case 0x4a43f0u: goto label_4a43f0;
        case 0x4a43f4u: goto label_4a43f4;
        case 0x4a43f8u: goto label_4a43f8;
        case 0x4a43fcu: goto label_4a43fc;
        case 0x4a4400u: goto label_4a4400;
        case 0x4a4404u: goto label_4a4404;
        case 0x4a4408u: goto label_4a4408;
        case 0x4a440cu: goto label_4a440c;
        case 0x4a4410u: goto label_4a4410;
        case 0x4a4414u: goto label_4a4414;
        case 0x4a4418u: goto label_4a4418;
        case 0x4a441cu: goto label_4a441c;
        case 0x4a4420u: goto label_4a4420;
        case 0x4a4424u: goto label_4a4424;
        case 0x4a4428u: goto label_4a4428;
        case 0x4a442cu: goto label_4a442c;
        case 0x4a4430u: goto label_4a4430;
        case 0x4a4434u: goto label_4a4434;
        case 0x4a4438u: goto label_4a4438;
        case 0x4a443cu: goto label_4a443c;
        case 0x4a4440u: goto label_4a4440;
        case 0x4a4444u: goto label_4a4444;
        case 0x4a4448u: goto label_4a4448;
        case 0x4a444cu: goto label_4a444c;
        case 0x4a4450u: goto label_4a4450;
        case 0x4a4454u: goto label_4a4454;
        case 0x4a4458u: goto label_4a4458;
        case 0x4a445cu: goto label_4a445c;
        case 0x4a4460u: goto label_4a4460;
        case 0x4a4464u: goto label_4a4464;
        case 0x4a4468u: goto label_4a4468;
        case 0x4a446cu: goto label_4a446c;
        case 0x4a4470u: goto label_4a4470;
        case 0x4a4474u: goto label_4a4474;
        case 0x4a4478u: goto label_4a4478;
        case 0x4a447cu: goto label_4a447c;
        case 0x4a4480u: goto label_4a4480;
        case 0x4a4484u: goto label_4a4484;
        case 0x4a4488u: goto label_4a4488;
        case 0x4a448cu: goto label_4a448c;
        case 0x4a4490u: goto label_4a4490;
        case 0x4a4494u: goto label_4a4494;
        case 0x4a4498u: goto label_4a4498;
        case 0x4a449cu: goto label_4a449c;
        case 0x4a44a0u: goto label_4a44a0;
        case 0x4a44a4u: goto label_4a44a4;
        case 0x4a44a8u: goto label_4a44a8;
        case 0x4a44acu: goto label_4a44ac;
        case 0x4a44b0u: goto label_4a44b0;
        case 0x4a44b4u: goto label_4a44b4;
        case 0x4a44b8u: goto label_4a44b8;
        case 0x4a44bcu: goto label_4a44bc;
        case 0x4a44c0u: goto label_4a44c0;
        case 0x4a44c4u: goto label_4a44c4;
        case 0x4a44c8u: goto label_4a44c8;
        case 0x4a44ccu: goto label_4a44cc;
        case 0x4a44d0u: goto label_4a44d0;
        case 0x4a44d4u: goto label_4a44d4;
        case 0x4a44d8u: goto label_4a44d8;
        case 0x4a44dcu: goto label_4a44dc;
        case 0x4a44e0u: goto label_4a44e0;
        case 0x4a44e4u: goto label_4a44e4;
        case 0x4a44e8u: goto label_4a44e8;
        case 0x4a44ecu: goto label_4a44ec;
        case 0x4a44f0u: goto label_4a44f0;
        case 0x4a44f4u: goto label_4a44f4;
        case 0x4a44f8u: goto label_4a44f8;
        case 0x4a44fcu: goto label_4a44fc;
        case 0x4a4500u: goto label_4a4500;
        case 0x4a4504u: goto label_4a4504;
        case 0x4a4508u: goto label_4a4508;
        case 0x4a450cu: goto label_4a450c;
        case 0x4a4510u: goto label_4a4510;
        case 0x4a4514u: goto label_4a4514;
        case 0x4a4518u: goto label_4a4518;
        case 0x4a451cu: goto label_4a451c;
        case 0x4a4520u: goto label_4a4520;
        case 0x4a4524u: goto label_4a4524;
        case 0x4a4528u: goto label_4a4528;
        case 0x4a452cu: goto label_4a452c;
        case 0x4a4530u: goto label_4a4530;
        case 0x4a4534u: goto label_4a4534;
        case 0x4a4538u: goto label_4a4538;
        case 0x4a453cu: goto label_4a453c;
        case 0x4a4540u: goto label_4a4540;
        case 0x4a4544u: goto label_4a4544;
        case 0x4a4548u: goto label_4a4548;
        case 0x4a454cu: goto label_4a454c;
        case 0x4a4550u: goto label_4a4550;
        case 0x4a4554u: goto label_4a4554;
        case 0x4a4558u: goto label_4a4558;
        case 0x4a455cu: goto label_4a455c;
        case 0x4a4560u: goto label_4a4560;
        case 0x4a4564u: goto label_4a4564;
        case 0x4a4568u: goto label_4a4568;
        case 0x4a456cu: goto label_4a456c;
        case 0x4a4570u: goto label_4a4570;
        case 0x4a4574u: goto label_4a4574;
        case 0x4a4578u: goto label_4a4578;
        case 0x4a457cu: goto label_4a457c;
        case 0x4a4580u: goto label_4a4580;
        case 0x4a4584u: goto label_4a4584;
        case 0x4a4588u: goto label_4a4588;
        case 0x4a458cu: goto label_4a458c;
        case 0x4a4590u: goto label_4a4590;
        case 0x4a4594u: goto label_4a4594;
        case 0x4a4598u: goto label_4a4598;
        case 0x4a459cu: goto label_4a459c;
        case 0x4a45a0u: goto label_4a45a0;
        case 0x4a45a4u: goto label_4a45a4;
        case 0x4a45a8u: goto label_4a45a8;
        case 0x4a45acu: goto label_4a45ac;
        case 0x4a45b0u: goto label_4a45b0;
        case 0x4a45b4u: goto label_4a45b4;
        case 0x4a45b8u: goto label_4a45b8;
        case 0x4a45bcu: goto label_4a45bc;
        case 0x4a45c0u: goto label_4a45c0;
        case 0x4a45c4u: goto label_4a45c4;
        case 0x4a45c8u: goto label_4a45c8;
        case 0x4a45ccu: goto label_4a45cc;
        case 0x4a45d0u: goto label_4a45d0;
        case 0x4a45d4u: goto label_4a45d4;
        case 0x4a45d8u: goto label_4a45d8;
        case 0x4a45dcu: goto label_4a45dc;
        case 0x4a45e0u: goto label_4a45e0;
        case 0x4a45e4u: goto label_4a45e4;
        case 0x4a45e8u: goto label_4a45e8;
        case 0x4a45ecu: goto label_4a45ec;
        case 0x4a45f0u: goto label_4a45f0;
        case 0x4a45f4u: goto label_4a45f4;
        case 0x4a45f8u: goto label_4a45f8;
        case 0x4a45fcu: goto label_4a45fc;
        case 0x4a4600u: goto label_4a4600;
        case 0x4a4604u: goto label_4a4604;
        case 0x4a4608u: goto label_4a4608;
        case 0x4a460cu: goto label_4a460c;
        case 0x4a4610u: goto label_4a4610;
        case 0x4a4614u: goto label_4a4614;
        case 0x4a4618u: goto label_4a4618;
        case 0x4a461cu: goto label_4a461c;
        case 0x4a4620u: goto label_4a4620;
        case 0x4a4624u: goto label_4a4624;
        case 0x4a4628u: goto label_4a4628;
        case 0x4a462cu: goto label_4a462c;
        case 0x4a4630u: goto label_4a4630;
        case 0x4a4634u: goto label_4a4634;
        case 0x4a4638u: goto label_4a4638;
        case 0x4a463cu: goto label_4a463c;
        case 0x4a4640u: goto label_4a4640;
        case 0x4a4644u: goto label_4a4644;
        case 0x4a4648u: goto label_4a4648;
        case 0x4a464cu: goto label_4a464c;
        case 0x4a4650u: goto label_4a4650;
        case 0x4a4654u: goto label_4a4654;
        case 0x4a4658u: goto label_4a4658;
        case 0x4a465cu: goto label_4a465c;
        case 0x4a4660u: goto label_4a4660;
        case 0x4a4664u: goto label_4a4664;
        case 0x4a4668u: goto label_4a4668;
        case 0x4a466cu: goto label_4a466c;
        case 0x4a4670u: goto label_4a4670;
        case 0x4a4674u: goto label_4a4674;
        case 0x4a4678u: goto label_4a4678;
        case 0x4a467cu: goto label_4a467c;
        case 0x4a4680u: goto label_4a4680;
        case 0x4a4684u: goto label_4a4684;
        case 0x4a4688u: goto label_4a4688;
        case 0x4a468cu: goto label_4a468c;
        case 0x4a4690u: goto label_4a4690;
        case 0x4a4694u: goto label_4a4694;
        case 0x4a4698u: goto label_4a4698;
        case 0x4a469cu: goto label_4a469c;
        case 0x4a46a0u: goto label_4a46a0;
        case 0x4a46a4u: goto label_4a46a4;
        case 0x4a46a8u: goto label_4a46a8;
        case 0x4a46acu: goto label_4a46ac;
        case 0x4a46b0u: goto label_4a46b0;
        case 0x4a46b4u: goto label_4a46b4;
        case 0x4a46b8u: goto label_4a46b8;
        case 0x4a46bcu: goto label_4a46bc;
        case 0x4a46c0u: goto label_4a46c0;
        case 0x4a46c4u: goto label_4a46c4;
        case 0x4a46c8u: goto label_4a46c8;
        case 0x4a46ccu: goto label_4a46cc;
        case 0x4a46d0u: goto label_4a46d0;
        case 0x4a46d4u: goto label_4a46d4;
        case 0x4a46d8u: goto label_4a46d8;
        case 0x4a46dcu: goto label_4a46dc;
        case 0x4a46e0u: goto label_4a46e0;
        case 0x4a46e4u: goto label_4a46e4;
        case 0x4a46e8u: goto label_4a46e8;
        case 0x4a46ecu: goto label_4a46ec;
        case 0x4a46f0u: goto label_4a46f0;
        case 0x4a46f4u: goto label_4a46f4;
        case 0x4a46f8u: goto label_4a46f8;
        case 0x4a46fcu: goto label_4a46fc;
        case 0x4a4700u: goto label_4a4700;
        case 0x4a4704u: goto label_4a4704;
        case 0x4a4708u: goto label_4a4708;
        case 0x4a470cu: goto label_4a470c;
        case 0x4a4710u: goto label_4a4710;
        case 0x4a4714u: goto label_4a4714;
        case 0x4a4718u: goto label_4a4718;
        case 0x4a471cu: goto label_4a471c;
        case 0x4a4720u: goto label_4a4720;
        case 0x4a4724u: goto label_4a4724;
        case 0x4a4728u: goto label_4a4728;
        case 0x4a472cu: goto label_4a472c;
        case 0x4a4730u: goto label_4a4730;
        case 0x4a4734u: goto label_4a4734;
        case 0x4a4738u: goto label_4a4738;
        case 0x4a473cu: goto label_4a473c;
        case 0x4a4740u: goto label_4a4740;
        case 0x4a4744u: goto label_4a4744;
        case 0x4a4748u: goto label_4a4748;
        case 0x4a474cu: goto label_4a474c;
        case 0x4a4750u: goto label_4a4750;
        case 0x4a4754u: goto label_4a4754;
        case 0x4a4758u: goto label_4a4758;
        case 0x4a475cu: goto label_4a475c;
        case 0x4a4760u: goto label_4a4760;
        case 0x4a4764u: goto label_4a4764;
        case 0x4a4768u: goto label_4a4768;
        case 0x4a476cu: goto label_4a476c;
        case 0x4a4770u: goto label_4a4770;
        case 0x4a4774u: goto label_4a4774;
        case 0x4a4778u: goto label_4a4778;
        case 0x4a477cu: goto label_4a477c;
        case 0x4a4780u: goto label_4a4780;
        case 0x4a4784u: goto label_4a4784;
        case 0x4a4788u: goto label_4a4788;
        case 0x4a478cu: goto label_4a478c;
        case 0x4a4790u: goto label_4a4790;
        case 0x4a4794u: goto label_4a4794;
        case 0x4a4798u: goto label_4a4798;
        case 0x4a479cu: goto label_4a479c;
        case 0x4a47a0u: goto label_4a47a0;
        case 0x4a47a4u: goto label_4a47a4;
        case 0x4a47a8u: goto label_4a47a8;
        case 0x4a47acu: goto label_4a47ac;
        case 0x4a47b0u: goto label_4a47b0;
        case 0x4a47b4u: goto label_4a47b4;
        case 0x4a47b8u: goto label_4a47b8;
        case 0x4a47bcu: goto label_4a47bc;
        case 0x4a47c0u: goto label_4a47c0;
        case 0x4a47c4u: goto label_4a47c4;
        case 0x4a47c8u: goto label_4a47c8;
        case 0x4a47ccu: goto label_4a47cc;
        case 0x4a47d0u: goto label_4a47d0;
        case 0x4a47d4u: goto label_4a47d4;
        case 0x4a47d8u: goto label_4a47d8;
        case 0x4a47dcu: goto label_4a47dc;
        case 0x4a47e0u: goto label_4a47e0;
        case 0x4a47e4u: goto label_4a47e4;
        case 0x4a47e8u: goto label_4a47e8;
        case 0x4a47ecu: goto label_4a47ec;
        case 0x4a47f0u: goto label_4a47f0;
        case 0x4a47f4u: goto label_4a47f4;
        case 0x4a47f8u: goto label_4a47f8;
        case 0x4a47fcu: goto label_4a47fc;
        case 0x4a4800u: goto label_4a4800;
        case 0x4a4804u: goto label_4a4804;
        case 0x4a4808u: goto label_4a4808;
        case 0x4a480cu: goto label_4a480c;
        case 0x4a4810u: goto label_4a4810;
        case 0x4a4814u: goto label_4a4814;
        case 0x4a4818u: goto label_4a4818;
        case 0x4a481cu: goto label_4a481c;
        case 0x4a4820u: goto label_4a4820;
        case 0x4a4824u: goto label_4a4824;
        case 0x4a4828u: goto label_4a4828;
        case 0x4a482cu: goto label_4a482c;
        case 0x4a4830u: goto label_4a4830;
        case 0x4a4834u: goto label_4a4834;
        case 0x4a4838u: goto label_4a4838;
        case 0x4a483cu: goto label_4a483c;
        case 0x4a4840u: goto label_4a4840;
        case 0x4a4844u: goto label_4a4844;
        case 0x4a4848u: goto label_4a4848;
        case 0x4a484cu: goto label_4a484c;
        case 0x4a4850u: goto label_4a4850;
        case 0x4a4854u: goto label_4a4854;
        case 0x4a4858u: goto label_4a4858;
        case 0x4a485cu: goto label_4a485c;
        case 0x4a4860u: goto label_4a4860;
        case 0x4a4864u: goto label_4a4864;
        case 0x4a4868u: goto label_4a4868;
        case 0x4a486cu: goto label_4a486c;
        case 0x4a4870u: goto label_4a4870;
        case 0x4a4874u: goto label_4a4874;
        case 0x4a4878u: goto label_4a4878;
        case 0x4a487cu: goto label_4a487c;
        case 0x4a4880u: goto label_4a4880;
        case 0x4a4884u: goto label_4a4884;
        case 0x4a4888u: goto label_4a4888;
        case 0x4a488cu: goto label_4a488c;
        case 0x4a4890u: goto label_4a4890;
        case 0x4a4894u: goto label_4a4894;
        case 0x4a4898u: goto label_4a4898;
        case 0x4a489cu: goto label_4a489c;
        case 0x4a48a0u: goto label_4a48a0;
        case 0x4a48a4u: goto label_4a48a4;
        case 0x4a48a8u: goto label_4a48a8;
        case 0x4a48acu: goto label_4a48ac;
        case 0x4a48b0u: goto label_4a48b0;
        case 0x4a48b4u: goto label_4a48b4;
        case 0x4a48b8u: goto label_4a48b8;
        case 0x4a48bcu: goto label_4a48bc;
        case 0x4a48c0u: goto label_4a48c0;
        case 0x4a48c4u: goto label_4a48c4;
        case 0x4a48c8u: goto label_4a48c8;
        case 0x4a48ccu: goto label_4a48cc;
        case 0x4a48d0u: goto label_4a48d0;
        case 0x4a48d4u: goto label_4a48d4;
        case 0x4a48d8u: goto label_4a48d8;
        case 0x4a48dcu: goto label_4a48dc;
        case 0x4a48e0u: goto label_4a48e0;
        case 0x4a48e4u: goto label_4a48e4;
        case 0x4a48e8u: goto label_4a48e8;
        case 0x4a48ecu: goto label_4a48ec;
        case 0x4a48f0u: goto label_4a48f0;
        case 0x4a48f4u: goto label_4a48f4;
        case 0x4a48f8u: goto label_4a48f8;
        case 0x4a48fcu: goto label_4a48fc;
        case 0x4a4900u: goto label_4a4900;
        case 0x4a4904u: goto label_4a4904;
        case 0x4a4908u: goto label_4a4908;
        case 0x4a490cu: goto label_4a490c;
        case 0x4a4910u: goto label_4a4910;
        case 0x4a4914u: goto label_4a4914;
        case 0x4a4918u: goto label_4a4918;
        case 0x4a491cu: goto label_4a491c;
        case 0x4a4920u: goto label_4a4920;
        case 0x4a4924u: goto label_4a4924;
        case 0x4a4928u: goto label_4a4928;
        case 0x4a492cu: goto label_4a492c;
        case 0x4a4930u: goto label_4a4930;
        case 0x4a4934u: goto label_4a4934;
        case 0x4a4938u: goto label_4a4938;
        case 0x4a493cu: goto label_4a493c;
        case 0x4a4940u: goto label_4a4940;
        case 0x4a4944u: goto label_4a4944;
        case 0x4a4948u: goto label_4a4948;
        case 0x4a494cu: goto label_4a494c;
        case 0x4a4950u: goto label_4a4950;
        case 0x4a4954u: goto label_4a4954;
        case 0x4a4958u: goto label_4a4958;
        case 0x4a495cu: goto label_4a495c;
        case 0x4a4960u: goto label_4a4960;
        case 0x4a4964u: goto label_4a4964;
        case 0x4a4968u: goto label_4a4968;
        case 0x4a496cu: goto label_4a496c;
        case 0x4a4970u: goto label_4a4970;
        case 0x4a4974u: goto label_4a4974;
        case 0x4a4978u: goto label_4a4978;
        case 0x4a497cu: goto label_4a497c;
        case 0x4a4980u: goto label_4a4980;
        case 0x4a4984u: goto label_4a4984;
        case 0x4a4988u: goto label_4a4988;
        case 0x4a498cu: goto label_4a498c;
        case 0x4a4990u: goto label_4a4990;
        case 0x4a4994u: goto label_4a4994;
        case 0x4a4998u: goto label_4a4998;
        case 0x4a499cu: goto label_4a499c;
        case 0x4a49a0u: goto label_4a49a0;
        case 0x4a49a4u: goto label_4a49a4;
        case 0x4a49a8u: goto label_4a49a8;
        case 0x4a49acu: goto label_4a49ac;
        case 0x4a49b0u: goto label_4a49b0;
        case 0x4a49b4u: goto label_4a49b4;
        case 0x4a49b8u: goto label_4a49b8;
        case 0x4a49bcu: goto label_4a49bc;
        case 0x4a49c0u: goto label_4a49c0;
        case 0x4a49c4u: goto label_4a49c4;
        case 0x4a49c8u: goto label_4a49c8;
        case 0x4a49ccu: goto label_4a49cc;
        case 0x4a49d0u: goto label_4a49d0;
        case 0x4a49d4u: goto label_4a49d4;
        case 0x4a49d8u: goto label_4a49d8;
        case 0x4a49dcu: goto label_4a49dc;
        case 0x4a49e0u: goto label_4a49e0;
        case 0x4a49e4u: goto label_4a49e4;
        case 0x4a49e8u: goto label_4a49e8;
        case 0x4a49ecu: goto label_4a49ec;
        case 0x4a49f0u: goto label_4a49f0;
        case 0x4a49f4u: goto label_4a49f4;
        case 0x4a49f8u: goto label_4a49f8;
        case 0x4a49fcu: goto label_4a49fc;
        case 0x4a4a00u: goto label_4a4a00;
        case 0x4a4a04u: goto label_4a4a04;
        case 0x4a4a08u: goto label_4a4a08;
        case 0x4a4a0cu: goto label_4a4a0c;
        case 0x4a4a10u: goto label_4a4a10;
        case 0x4a4a14u: goto label_4a4a14;
        case 0x4a4a18u: goto label_4a4a18;
        case 0x4a4a1cu: goto label_4a4a1c;
        case 0x4a4a20u: goto label_4a4a20;
        case 0x4a4a24u: goto label_4a4a24;
        case 0x4a4a28u: goto label_4a4a28;
        case 0x4a4a2cu: goto label_4a4a2c;
        case 0x4a4a30u: goto label_4a4a30;
        case 0x4a4a34u: goto label_4a4a34;
        case 0x4a4a38u: goto label_4a4a38;
        case 0x4a4a3cu: goto label_4a4a3c;
        case 0x4a4a40u: goto label_4a4a40;
        case 0x4a4a44u: goto label_4a4a44;
        case 0x4a4a48u: goto label_4a4a48;
        case 0x4a4a4cu: goto label_4a4a4c;
        case 0x4a4a50u: goto label_4a4a50;
        case 0x4a4a54u: goto label_4a4a54;
        case 0x4a4a58u: goto label_4a4a58;
        case 0x4a4a5cu: goto label_4a4a5c;
        case 0x4a4a60u: goto label_4a4a60;
        case 0x4a4a64u: goto label_4a4a64;
        case 0x4a4a68u: goto label_4a4a68;
        case 0x4a4a6cu: goto label_4a4a6c;
        case 0x4a4a70u: goto label_4a4a70;
        case 0x4a4a74u: goto label_4a4a74;
        case 0x4a4a78u: goto label_4a4a78;
        case 0x4a4a7cu: goto label_4a4a7c;
        case 0x4a4a80u: goto label_4a4a80;
        case 0x4a4a84u: goto label_4a4a84;
        case 0x4a4a88u: goto label_4a4a88;
        case 0x4a4a8cu: goto label_4a4a8c;
        case 0x4a4a90u: goto label_4a4a90;
        case 0x4a4a94u: goto label_4a4a94;
        case 0x4a4a98u: goto label_4a4a98;
        case 0x4a4a9cu: goto label_4a4a9c;
        case 0x4a4aa0u: goto label_4a4aa0;
        case 0x4a4aa4u: goto label_4a4aa4;
        case 0x4a4aa8u: goto label_4a4aa8;
        case 0x4a4aacu: goto label_4a4aac;
        case 0x4a4ab0u: goto label_4a4ab0;
        case 0x4a4ab4u: goto label_4a4ab4;
        case 0x4a4ab8u: goto label_4a4ab8;
        case 0x4a4abcu: goto label_4a4abc;
        case 0x4a4ac0u: goto label_4a4ac0;
        case 0x4a4ac4u: goto label_4a4ac4;
        case 0x4a4ac8u: goto label_4a4ac8;
        case 0x4a4accu: goto label_4a4acc;
        case 0x4a4ad0u: goto label_4a4ad0;
        case 0x4a4ad4u: goto label_4a4ad4;
        case 0x4a4ad8u: goto label_4a4ad8;
        case 0x4a4adcu: goto label_4a4adc;
        case 0x4a4ae0u: goto label_4a4ae0;
        case 0x4a4ae4u: goto label_4a4ae4;
        case 0x4a4ae8u: goto label_4a4ae8;
        case 0x4a4aecu: goto label_4a4aec;
        case 0x4a4af0u: goto label_4a4af0;
        case 0x4a4af4u: goto label_4a4af4;
        case 0x4a4af8u: goto label_4a4af8;
        case 0x4a4afcu: goto label_4a4afc;
        case 0x4a4b00u: goto label_4a4b00;
        case 0x4a4b04u: goto label_4a4b04;
        case 0x4a4b08u: goto label_4a4b08;
        case 0x4a4b0cu: goto label_4a4b0c;
        case 0x4a4b10u: goto label_4a4b10;
        case 0x4a4b14u: goto label_4a4b14;
        case 0x4a4b18u: goto label_4a4b18;
        case 0x4a4b1cu: goto label_4a4b1c;
        case 0x4a4b20u: goto label_4a4b20;
        case 0x4a4b24u: goto label_4a4b24;
        case 0x4a4b28u: goto label_4a4b28;
        case 0x4a4b2cu: goto label_4a4b2c;
        case 0x4a4b30u: goto label_4a4b30;
        case 0x4a4b34u: goto label_4a4b34;
        case 0x4a4b38u: goto label_4a4b38;
        case 0x4a4b3cu: goto label_4a4b3c;
        case 0x4a4b40u: goto label_4a4b40;
        case 0x4a4b44u: goto label_4a4b44;
        case 0x4a4b48u: goto label_4a4b48;
        case 0x4a4b4cu: goto label_4a4b4c;
        case 0x4a4b50u: goto label_4a4b50;
        case 0x4a4b54u: goto label_4a4b54;
        case 0x4a4b58u: goto label_4a4b58;
        case 0x4a4b5cu: goto label_4a4b5c;
        case 0x4a4b60u: goto label_4a4b60;
        case 0x4a4b64u: goto label_4a4b64;
        case 0x4a4b68u: goto label_4a4b68;
        case 0x4a4b6cu: goto label_4a4b6c;
        case 0x4a4b70u: goto label_4a4b70;
        case 0x4a4b74u: goto label_4a4b74;
        case 0x4a4b78u: goto label_4a4b78;
        case 0x4a4b7cu: goto label_4a4b7c;
        case 0x4a4b80u: goto label_4a4b80;
        case 0x4a4b84u: goto label_4a4b84;
        case 0x4a4b88u: goto label_4a4b88;
        case 0x4a4b8cu: goto label_4a4b8c;
        case 0x4a4b90u: goto label_4a4b90;
        case 0x4a4b94u: goto label_4a4b94;
        case 0x4a4b98u: goto label_4a4b98;
        case 0x4a4b9cu: goto label_4a4b9c;
        case 0x4a4ba0u: goto label_4a4ba0;
        case 0x4a4ba4u: goto label_4a4ba4;
        case 0x4a4ba8u: goto label_4a4ba8;
        case 0x4a4bacu: goto label_4a4bac;
        case 0x4a4bb0u: goto label_4a4bb0;
        case 0x4a4bb4u: goto label_4a4bb4;
        case 0x4a4bb8u: goto label_4a4bb8;
        case 0x4a4bbcu: goto label_4a4bbc;
        case 0x4a4bc0u: goto label_4a4bc0;
        case 0x4a4bc4u: goto label_4a4bc4;
        case 0x4a4bc8u: goto label_4a4bc8;
        case 0x4a4bccu: goto label_4a4bcc;
        case 0x4a4bd0u: goto label_4a4bd0;
        case 0x4a4bd4u: goto label_4a4bd4;
        case 0x4a4bd8u: goto label_4a4bd8;
        case 0x4a4bdcu: goto label_4a4bdc;
        case 0x4a4be0u: goto label_4a4be0;
        case 0x4a4be4u: goto label_4a4be4;
        case 0x4a4be8u: goto label_4a4be8;
        case 0x4a4becu: goto label_4a4bec;
        case 0x4a4bf0u: goto label_4a4bf0;
        case 0x4a4bf4u: goto label_4a4bf4;
        case 0x4a4bf8u: goto label_4a4bf8;
        case 0x4a4bfcu: goto label_4a4bfc;
        case 0x4a4c00u: goto label_4a4c00;
        case 0x4a4c04u: goto label_4a4c04;
        case 0x4a4c08u: goto label_4a4c08;
        case 0x4a4c0cu: goto label_4a4c0c;
        case 0x4a4c10u: goto label_4a4c10;
        case 0x4a4c14u: goto label_4a4c14;
        case 0x4a4c18u: goto label_4a4c18;
        case 0x4a4c1cu: goto label_4a4c1c;
        case 0x4a4c20u: goto label_4a4c20;
        case 0x4a4c24u: goto label_4a4c24;
        case 0x4a4c28u: goto label_4a4c28;
        case 0x4a4c2cu: goto label_4a4c2c;
        case 0x4a4c30u: goto label_4a4c30;
        case 0x4a4c34u: goto label_4a4c34;
        case 0x4a4c38u: goto label_4a4c38;
        case 0x4a4c3cu: goto label_4a4c3c;
        case 0x4a4c40u: goto label_4a4c40;
        case 0x4a4c44u: goto label_4a4c44;
        case 0x4a4c48u: goto label_4a4c48;
        case 0x4a4c4cu: goto label_4a4c4c;
        case 0x4a4c50u: goto label_4a4c50;
        case 0x4a4c54u: goto label_4a4c54;
        case 0x4a4c58u: goto label_4a4c58;
        case 0x4a4c5cu: goto label_4a4c5c;
        case 0x4a4c60u: goto label_4a4c60;
        case 0x4a4c64u: goto label_4a4c64;
        case 0x4a4c68u: goto label_4a4c68;
        case 0x4a4c6cu: goto label_4a4c6c;
        case 0x4a4c70u: goto label_4a4c70;
        case 0x4a4c74u: goto label_4a4c74;
        case 0x4a4c78u: goto label_4a4c78;
        case 0x4a4c7cu: goto label_4a4c7c;
        case 0x4a4c80u: goto label_4a4c80;
        case 0x4a4c84u: goto label_4a4c84;
        case 0x4a4c88u: goto label_4a4c88;
        case 0x4a4c8cu: goto label_4a4c8c;
        case 0x4a4c90u: goto label_4a4c90;
        case 0x4a4c94u: goto label_4a4c94;
        case 0x4a4c98u: goto label_4a4c98;
        case 0x4a4c9cu: goto label_4a4c9c;
        case 0x4a4ca0u: goto label_4a4ca0;
        case 0x4a4ca4u: goto label_4a4ca4;
        case 0x4a4ca8u: goto label_4a4ca8;
        case 0x4a4cacu: goto label_4a4cac;
        case 0x4a4cb0u: goto label_4a4cb0;
        case 0x4a4cb4u: goto label_4a4cb4;
        case 0x4a4cb8u: goto label_4a4cb8;
        case 0x4a4cbcu: goto label_4a4cbc;
        case 0x4a4cc0u: goto label_4a4cc0;
        case 0x4a4cc4u: goto label_4a4cc4;
        case 0x4a4cc8u: goto label_4a4cc8;
        case 0x4a4cccu: goto label_4a4ccc;
        case 0x4a4cd0u: goto label_4a4cd0;
        case 0x4a4cd4u: goto label_4a4cd4;
        case 0x4a4cd8u: goto label_4a4cd8;
        case 0x4a4cdcu: goto label_4a4cdc;
        case 0x4a4ce0u: goto label_4a4ce0;
        case 0x4a4ce4u: goto label_4a4ce4;
        case 0x4a4ce8u: goto label_4a4ce8;
        case 0x4a4cecu: goto label_4a4cec;
        case 0x4a4cf0u: goto label_4a4cf0;
        case 0x4a4cf4u: goto label_4a4cf4;
        case 0x4a4cf8u: goto label_4a4cf8;
        case 0x4a4cfcu: goto label_4a4cfc;
        case 0x4a4d00u: goto label_4a4d00;
        case 0x4a4d04u: goto label_4a4d04;
        case 0x4a4d08u: goto label_4a4d08;
        case 0x4a4d0cu: goto label_4a4d0c;
        case 0x4a4d10u: goto label_4a4d10;
        case 0x4a4d14u: goto label_4a4d14;
        case 0x4a4d18u: goto label_4a4d18;
        case 0x4a4d1cu: goto label_4a4d1c;
        case 0x4a4d20u: goto label_4a4d20;
        case 0x4a4d24u: goto label_4a4d24;
        case 0x4a4d28u: goto label_4a4d28;
        case 0x4a4d2cu: goto label_4a4d2c;
        case 0x4a4d30u: goto label_4a4d30;
        case 0x4a4d34u: goto label_4a4d34;
        case 0x4a4d38u: goto label_4a4d38;
        case 0x4a4d3cu: goto label_4a4d3c;
        case 0x4a4d40u: goto label_4a4d40;
        case 0x4a4d44u: goto label_4a4d44;
        case 0x4a4d48u: goto label_4a4d48;
        case 0x4a4d4cu: goto label_4a4d4c;
        case 0x4a4d50u: goto label_4a4d50;
        case 0x4a4d54u: goto label_4a4d54;
        case 0x4a4d58u: goto label_4a4d58;
        case 0x4a4d5cu: goto label_4a4d5c;
        case 0x4a4d60u: goto label_4a4d60;
        case 0x4a4d64u: goto label_4a4d64;
        case 0x4a4d68u: goto label_4a4d68;
        case 0x4a4d6cu: goto label_4a4d6c;
        case 0x4a4d70u: goto label_4a4d70;
        case 0x4a4d74u: goto label_4a4d74;
        case 0x4a4d78u: goto label_4a4d78;
        case 0x4a4d7cu: goto label_4a4d7c;
        case 0x4a4d80u: goto label_4a4d80;
        case 0x4a4d84u: goto label_4a4d84;
        case 0x4a4d88u: goto label_4a4d88;
        case 0x4a4d8cu: goto label_4a4d8c;
        case 0x4a4d90u: goto label_4a4d90;
        case 0x4a4d94u: goto label_4a4d94;
        case 0x4a4d98u: goto label_4a4d98;
        case 0x4a4d9cu: goto label_4a4d9c;
        case 0x4a4da0u: goto label_4a4da0;
        case 0x4a4da4u: goto label_4a4da4;
        case 0x4a4da8u: goto label_4a4da8;
        case 0x4a4dacu: goto label_4a4dac;
        case 0x4a4db0u: goto label_4a4db0;
        case 0x4a4db4u: goto label_4a4db4;
        case 0x4a4db8u: goto label_4a4db8;
        case 0x4a4dbcu: goto label_4a4dbc;
        case 0x4a4dc0u: goto label_4a4dc0;
        case 0x4a4dc4u: goto label_4a4dc4;
        case 0x4a4dc8u: goto label_4a4dc8;
        case 0x4a4dccu: goto label_4a4dcc;
        case 0x4a4dd0u: goto label_4a4dd0;
        case 0x4a4dd4u: goto label_4a4dd4;
        case 0x4a4dd8u: goto label_4a4dd8;
        case 0x4a4ddcu: goto label_4a4ddc;
        case 0x4a4de0u: goto label_4a4de0;
        case 0x4a4de4u: goto label_4a4de4;
        case 0x4a4de8u: goto label_4a4de8;
        case 0x4a4decu: goto label_4a4dec;
        case 0x4a4df0u: goto label_4a4df0;
        case 0x4a4df4u: goto label_4a4df4;
        case 0x4a4df8u: goto label_4a4df8;
        case 0x4a4dfcu: goto label_4a4dfc;
        case 0x4a4e00u: goto label_4a4e00;
        case 0x4a4e04u: goto label_4a4e04;
        case 0x4a4e08u: goto label_4a4e08;
        case 0x4a4e0cu: goto label_4a4e0c;
        case 0x4a4e10u: goto label_4a4e10;
        case 0x4a4e14u: goto label_4a4e14;
        case 0x4a4e18u: goto label_4a4e18;
        case 0x4a4e1cu: goto label_4a4e1c;
        case 0x4a4e20u: goto label_4a4e20;
        case 0x4a4e24u: goto label_4a4e24;
        case 0x4a4e28u: goto label_4a4e28;
        case 0x4a4e2cu: goto label_4a4e2c;
        case 0x4a4e30u: goto label_4a4e30;
        case 0x4a4e34u: goto label_4a4e34;
        case 0x4a4e38u: goto label_4a4e38;
        case 0x4a4e3cu: goto label_4a4e3c;
        case 0x4a4e40u: goto label_4a4e40;
        case 0x4a4e44u: goto label_4a4e44;
        case 0x4a4e48u: goto label_4a4e48;
        case 0x4a4e4cu: goto label_4a4e4c;
        case 0x4a4e50u: goto label_4a4e50;
        case 0x4a4e54u: goto label_4a4e54;
        case 0x4a4e58u: goto label_4a4e58;
        case 0x4a4e5cu: goto label_4a4e5c;
        case 0x4a4e60u: goto label_4a4e60;
        case 0x4a4e64u: goto label_4a4e64;
        case 0x4a4e68u: goto label_4a4e68;
        case 0x4a4e6cu: goto label_4a4e6c;
        case 0x4a4e70u: goto label_4a4e70;
        case 0x4a4e74u: goto label_4a4e74;
        case 0x4a4e78u: goto label_4a4e78;
        case 0x4a4e7cu: goto label_4a4e7c;
        case 0x4a4e80u: goto label_4a4e80;
        case 0x4a4e84u: goto label_4a4e84;
        case 0x4a4e88u: goto label_4a4e88;
        case 0x4a4e8cu: goto label_4a4e8c;
        case 0x4a4e90u: goto label_4a4e90;
        case 0x4a4e94u: goto label_4a4e94;
        case 0x4a4e98u: goto label_4a4e98;
        case 0x4a4e9cu: goto label_4a4e9c;
        case 0x4a4ea0u: goto label_4a4ea0;
        case 0x4a4ea4u: goto label_4a4ea4;
        case 0x4a4ea8u: goto label_4a4ea8;
        case 0x4a4eacu: goto label_4a4eac;
        case 0x4a4eb0u: goto label_4a4eb0;
        case 0x4a4eb4u: goto label_4a4eb4;
        case 0x4a4eb8u: goto label_4a4eb8;
        case 0x4a4ebcu: goto label_4a4ebc;
        case 0x4a4ec0u: goto label_4a4ec0;
        case 0x4a4ec4u: goto label_4a4ec4;
        case 0x4a4ec8u: goto label_4a4ec8;
        case 0x4a4eccu: goto label_4a4ecc;
        case 0x4a4ed0u: goto label_4a4ed0;
        case 0x4a4ed4u: goto label_4a4ed4;
        case 0x4a4ed8u: goto label_4a4ed8;
        case 0x4a4edcu: goto label_4a4edc;
        case 0x4a4ee0u: goto label_4a4ee0;
        case 0x4a4ee4u: goto label_4a4ee4;
        case 0x4a4ee8u: goto label_4a4ee8;
        case 0x4a4eecu: goto label_4a4eec;
        case 0x4a4ef0u: goto label_4a4ef0;
        case 0x4a4ef4u: goto label_4a4ef4;
        case 0x4a4ef8u: goto label_4a4ef8;
        case 0x4a4efcu: goto label_4a4efc;
        case 0x4a4f00u: goto label_4a4f00;
        case 0x4a4f04u: goto label_4a4f04;
        case 0x4a4f08u: goto label_4a4f08;
        case 0x4a4f0cu: goto label_4a4f0c;
        case 0x4a4f10u: goto label_4a4f10;
        case 0x4a4f14u: goto label_4a4f14;
        case 0x4a4f18u: goto label_4a4f18;
        case 0x4a4f1cu: goto label_4a4f1c;
        case 0x4a4f20u: goto label_4a4f20;
        case 0x4a4f24u: goto label_4a4f24;
        case 0x4a4f28u: goto label_4a4f28;
        case 0x4a4f2cu: goto label_4a4f2c;
        case 0x4a4f30u: goto label_4a4f30;
        case 0x4a4f34u: goto label_4a4f34;
        case 0x4a4f38u: goto label_4a4f38;
        case 0x4a4f3cu: goto label_4a4f3c;
        case 0x4a4f40u: goto label_4a4f40;
        case 0x4a4f44u: goto label_4a4f44;
        case 0x4a4f48u: goto label_4a4f48;
        case 0x4a4f4cu: goto label_4a4f4c;
        case 0x4a4f50u: goto label_4a4f50;
        case 0x4a4f54u: goto label_4a4f54;
        case 0x4a4f58u: goto label_4a4f58;
        case 0x4a4f5cu: goto label_4a4f5c;
        case 0x4a4f60u: goto label_4a4f60;
        case 0x4a4f64u: goto label_4a4f64;
        case 0x4a4f68u: goto label_4a4f68;
        case 0x4a4f6cu: goto label_4a4f6c;
        case 0x4a4f70u: goto label_4a4f70;
        case 0x4a4f74u: goto label_4a4f74;
        case 0x4a4f78u: goto label_4a4f78;
        case 0x4a4f7cu: goto label_4a4f7c;
        case 0x4a4f80u: goto label_4a4f80;
        case 0x4a4f84u: goto label_4a4f84;
        case 0x4a4f88u: goto label_4a4f88;
        case 0x4a4f8cu: goto label_4a4f8c;
        case 0x4a4f90u: goto label_4a4f90;
        case 0x4a4f94u: goto label_4a4f94;
        case 0x4a4f98u: goto label_4a4f98;
        case 0x4a4f9cu: goto label_4a4f9c;
        case 0x4a4fa0u: goto label_4a4fa0;
        case 0x4a4fa4u: goto label_4a4fa4;
        case 0x4a4fa8u: goto label_4a4fa8;
        case 0x4a4facu: goto label_4a4fac;
        case 0x4a4fb0u: goto label_4a4fb0;
        case 0x4a4fb4u: goto label_4a4fb4;
        case 0x4a4fb8u: goto label_4a4fb8;
        case 0x4a4fbcu: goto label_4a4fbc;
        case 0x4a4fc0u: goto label_4a4fc0;
        case 0x4a4fc4u: goto label_4a4fc4;
        case 0x4a4fc8u: goto label_4a4fc8;
        case 0x4a4fccu: goto label_4a4fcc;
        case 0x4a4fd0u: goto label_4a4fd0;
        case 0x4a4fd4u: goto label_4a4fd4;
        case 0x4a4fd8u: goto label_4a4fd8;
        case 0x4a4fdcu: goto label_4a4fdc;
        case 0x4a4fe0u: goto label_4a4fe0;
        case 0x4a4fe4u: goto label_4a4fe4;
        case 0x4a4fe8u: goto label_4a4fe8;
        case 0x4a4fecu: goto label_4a4fec;
        default: break;
    }

    ctx->pc = 0x4a3790u;

label_4a3790:
    // 0x4a3790: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a3790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a3794:
    // 0x4a3794: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a3794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a3798:
    // 0x4a3798: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a3798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a379c:
    // 0x4a379c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a379cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a37a0:
    // 0x4a37a0: 0x8c450eac  lw          $a1, 0xEAC($v0)
    ctx->pc = 0x4a37a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3756)));
label_4a37a4:
    // 0x4a37a4: 0x8ca20088  lw          $v0, 0x88($a1)
    ctx->pc = 0x4a37a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 136)));
label_4a37a8:
    // 0x4a37a8: 0x8ca8008c  lw          $t0, 0x8C($a1)
    ctx->pc = 0x4a37a8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_4a37ac:
    // 0x4a37ac: 0x90a70090  lbu         $a3, 0x90($a1)
    ctx->pc = 0x4a37acu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 144)));
label_4a37b0:
    // 0x4a37b0: 0x8ca60084  lw          $a2, 0x84($a1)
    ctx->pc = 0x4a37b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 132)));
label_4a37b4:
    // 0x4a37b4: 0x8ca50110  lw          $a1, 0x110($a1)
    ctx->pc = 0x4a37b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 272)));
label_4a37b8:
    // 0x4a37b8: 0x10a30024  beq         $a1, $v1, . + 4 + (0x24 << 2)
label_4a37bc:
    if (ctx->pc == 0x4A37BCu) {
        ctx->pc = 0x4A37BCu;
            // 0x4a37bc: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->pc = 0x4A37C0u;
        goto label_4a37c0;
    }
    ctx->pc = 0x4A37B8u;
    {
        const bool branch_taken_0x4a37b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x4A37BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A37B8u;
            // 0x4a37bc: 0xac850054  sw          $a1, 0x54($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a37b8) {
            ctx->pc = 0x4A384Cu;
            goto label_4a384c;
        }
    }
    ctx->pc = 0x4A37C0u;
label_4a37c0:
    // 0x4a37c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a37c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a37c4:
    // 0x4a37c4: 0x50a30022  beql        $a1, $v1, . + 4 + (0x22 << 2)
label_4a37c8:
    if (ctx->pc == 0x4A37C8u) {
        ctx->pc = 0x4A37C8u;
            // 0x4a37c8: 0xc72823  subu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x4A37CCu;
        goto label_4a37cc;
    }
    ctx->pc = 0x4A37C4u;
    {
        const bool branch_taken_0x4a37c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a37c4) {
            ctx->pc = 0x4A37C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A37C4u;
            // 0x4a37c8: 0xc72823  subu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3850u;
            goto label_4a3850;
        }
    }
    ctx->pc = 0x4A37CCu;
label_4a37cc:
    // 0x4a37cc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a37ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a37d0:
    // 0x4a37d0: 0x50a3000e  beql        $a1, $v1, . + 4 + (0xE << 2)
label_4a37d4:
    if (ctx->pc == 0x4A37D4u) {
        ctx->pc = 0x4A37D4u;
            // 0x4a37d4: 0xc72823  subu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->pc = 0x4A37D8u;
        goto label_4a37d8;
    }
    ctx->pc = 0x4A37D0u;
    {
        const bool branch_taken_0x4a37d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a37d0) {
            ctx->pc = 0x4A37D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A37D0u;
            // 0x4a37d4: 0xc72823  subu        $a1, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A380Cu;
            goto label_4a380c;
        }
    }
    ctx->pc = 0x4A37D8u;
label_4a37d8:
    // 0x4a37d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a37d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a37dc:
    // 0x4a37dc: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
label_4a37e0:
    if (ctx->pc == 0x4A37E0u) {
        ctx->pc = 0x4A37E0u;
            // 0x4a37e0: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x4A37E4u;
        goto label_4a37e4;
    }
    ctx->pc = 0x4A37DCu;
    {
        const bool branch_taken_0x4a37dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a37dc) {
            ctx->pc = 0x4A37E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A37DCu;
            // 0x4a37e0: 0xa4820058  sh          $v0, 0x58($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A37ECu;
            goto label_4a37ec;
        }
    }
    ctx->pc = 0x4A37E4u;
label_4a37e4:
    // 0x4a37e4: 0x10000031  b           . + 4 + (0x31 << 2)
label_4a37e8:
    if (ctx->pc == 0x4A37E8u) {
        ctx->pc = 0x4A37E8u;
            // 0x4a37e8: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->pc = 0x4A37ECu;
        goto label_4a37ec;
    }
    ctx->pc = 0x4A37E4u;
    {
        const bool branch_taken_0x4a37e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A37E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A37E4u;
            // 0x4a37e8: 0x3c023f66  lui         $v0, 0x3F66 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a37e4) {
            ctx->pc = 0x4A38ACu;
            goto label_4a38ac;
        }
    }
    ctx->pc = 0x4A37ECu;
label_4a37ec:
    // 0x4a37ec: 0x2502ffec  addiu       $v0, $t0, -0x14
    ctx->pc = 0x4a37ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_4a37f0:
    // 0x4a37f0: 0xa4820060  sh          $v0, 0x60($a0)
    ctx->pc = 0x4a37f0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 2));
label_4a37f4:
    // 0x4a37f4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4a37f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4a37f8:
    // 0x4a37f8: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x4a37f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_4a37fc:
    // 0x4a37fc: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x4a37fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_4a3800:
    // 0x4a3800: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4a3800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4a3804:
    // 0x4a3804: 0x10000028  b           . + 4 + (0x28 << 2)
label_4a3808:
    if (ctx->pc == 0x4A3808u) {
        ctx->pc = 0x4A3808u;
            // 0x4a3808: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x4A380Cu;
        goto label_4a380c;
    }
    ctx->pc = 0x4A3804u;
    {
        const bool branch_taken_0x4a3804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3804u;
            // 0x4a3808: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3804) {
            ctx->pc = 0x4A38A8u;
            goto label_4a38a8;
        }
    }
    ctx->pc = 0x4A380Cu;
label_4a380c:
    // 0x4a380c: 0xa4820058  sh          $v0, 0x58($a0)
    ctx->pc = 0x4a380cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 2));
label_4a3810:
    // 0x4a3810: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x4a3810u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_4a3814:
    // 0x4a3814: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x4a3814u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4a3818:
    // 0x4a3818: 0x24c6ffd8  addiu       $a2, $a2, -0x28
    ctx->pc = 0x4a3818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967256));
label_4a381c:
    // 0x4a381c: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x4a381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4a3820:
    // 0x4a3820: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4a3820u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_4a3824:
    // 0x4a3824: 0xa4860060  sh          $a2, 0x60($a0)
    ctx->pc = 0x4a3824u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 6));
label_4a3828:
    // 0x4a3828: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a3828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a382c:
    // 0x4a382c: 0xa482005a  sh          $v0, 0x5A($a0)
    ctx->pc = 0x4a382cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 2));
label_4a3830:
    // 0x4a3830: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x4a3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_4a3834:
    // 0x4a3834: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x4a3834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_4a3838:
    // 0x4a3838: 0xa4830062  sh          $v1, 0x62($a0)
    ctx->pc = 0x4a3838u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 3));
label_4a383c:
    // 0x4a383c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4a383cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4a3840:
    // 0x4a3840: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x4a3840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_4a3844:
    // 0x4a3844: 0x10000018  b           . + 4 + (0x18 << 2)
label_4a3848:
    if (ctx->pc == 0x4A3848u) {
        ctx->pc = 0x4A3848u;
            // 0x4a3848: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->pc = 0x4A384Cu;
        goto label_4a384c;
    }
    ctx->pc = 0x4A3844u;
    {
        const bool branch_taken_0x4a3844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3844u;
            // 0x4a3848: 0xac820078  sw          $v0, 0x78($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3844) {
            ctx->pc = 0x4A38A8u;
            goto label_4a38a8;
        }
    }
    ctx->pc = 0x4A384Cu;
label_4a384c:
    // 0x4a384c: 0xc72823  subu        $a1, $a2, $a3
    ctx->pc = 0x4a384cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_4a3850:
    // 0x4a3850: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x4a3850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_4a3854:
    // 0x4a3854: 0xa82823  subu        $a1, $a1, $t0
    ctx->pc = 0x4a3854u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_4a3858:
    // 0x4a3858: 0x83043  sra         $a2, $t0, 1
    ctx->pc = 0x4a3858u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 8), 1));
label_4a385c:
    // 0x4a385c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x4a385cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
label_4a3860:
    // 0x4a3860: 0x23843  sra         $a3, $v0, 1
    ctx->pc = 0x4a3860u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 1));
label_4a3864:
    // 0x4a3864: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4a3864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a3868:
    // 0x4a3868: 0x24c6ffd8  addiu       $a2, $a2, -0x28
    ctx->pc = 0x4a3868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967256));
label_4a386c:
    // 0x4a386c: 0xa4870058  sh          $a3, 0x58($a0)
    ctx->pc = 0x4a386cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 7));
label_4a3870:
    // 0x4a3870: 0x472821  addu        $a1, $v0, $a3
    ctx->pc = 0x4a3870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_4a3874:
    // 0x4a3874: 0xa4860060  sh          $a2, 0x60($a0)
    ctx->pc = 0x4a3874u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 6));
label_4a3878:
    // 0x4a3878: 0x3c023f8c  lui         $v0, 0x3F8C
    ctx->pc = 0x4a3878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16268 << 16));
label_4a387c:
    // 0x4a387c: 0xa485005a  sh          $a1, 0x5A($a0)
    ctx->pc = 0x4a387cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 5));
label_4a3880:
    // 0x4a3880: 0x2463ffd8  addiu       $v1, $v1, -0x28
    ctx->pc = 0x4a3880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
label_4a3884:
    // 0x4a3884: 0xa4860062  sh          $a2, 0x62($a0)
    ctx->pc = 0x4a3884u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 98), (uint16_t)GPR_U32(ctx, 6));
label_4a3888:
    // 0x4a3888: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x4a3888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_4a388c:
    // 0x4a388c: 0xa487005c  sh          $a3, 0x5C($a0)
    ctx->pc = 0x4a388cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 7));
label_4a3890:
    // 0x4a3890: 0xa4830064  sh          $v1, 0x64($a0)
    ctx->pc = 0x4a3890u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 100), (uint16_t)GPR_U32(ctx, 3));
label_4a3894:
    // 0x4a3894: 0xa485005e  sh          $a1, 0x5E($a0)
    ctx->pc = 0x4a3894u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 94), (uint16_t)GPR_U32(ctx, 5));
label_4a3898:
    // 0x4a3898: 0x84830064  lh          $v1, 0x64($a0)
    ctx->pc = 0x4a3898u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 100)));
label_4a389c:
    // 0x4a389c: 0xa4830066  sh          $v1, 0x66($a0)
    ctx->pc = 0x4a389cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 102), (uint16_t)GPR_U32(ctx, 3));
label_4a38a0:
    // 0x4a38a0: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x4a38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
label_4a38a4:
    // 0x4a38a4: 0xac820078  sw          $v0, 0x78($a0)
    ctx->pc = 0x4a38a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 2));
label_4a38a8:
    // 0x4a38a8: 0x3c023f66  lui         $v0, 0x3F66
    ctx->pc = 0x4a38a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16230 << 16));
label_4a38ac:
    // 0x4a38ac: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x4a38acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4a38b0:
    // 0x4a38b0: 0x34456666  ori         $a1, $v0, 0x6666
    ctx->pc = 0x4a38b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_4a38b4:
    // 0x4a38b4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a38b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a38b8:
    // 0x4a38b8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_4a38bc:
    if (ctx->pc == 0x4A38BCu) {
        ctx->pc = 0x4A38BCu;
            // 0x4a38bc: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->pc = 0x4A38C0u;
        goto label_4a38c0;
    }
    ctx->pc = 0x4A38B8u;
    {
        const bool branch_taken_0x4a38b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A38BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A38B8u;
            // 0x4a38bc: 0xac85007c  sw          $a1, 0x7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a38b8) {
            ctx->pc = 0x4A38DCu;
            goto label_4a38dc;
        }
    }
    ctx->pc = 0x4A38C0u;
label_4a38c0:
    // 0x4a38c0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x4a38c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_4a38c4:
    // 0x4a38c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a38c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_4a38c8:
    // 0x4a38c8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4a38c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_4a38cc:
    // 0x4a38cc: 0x0  nop
    ctx->pc = 0x4a38ccu;
    // NOP
label_4a38d0:
    // 0x4a38d0: 0x0  nop
    ctx->pc = 0x4a38d0u;
    // NOP
label_4a38d4:
    // 0x4a38d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_4a38d8:
    if (ctx->pc == 0x4A38D8u) {
        ctx->pc = 0x4A38DCu;
        goto label_4a38dc;
    }
    ctx->pc = 0x4A38D4u;
    {
        const bool branch_taken_0x4a38d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a38d4) {
            ctx->pc = 0x4A38C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a38c0;
        }
    }
    ctx->pc = 0x4A38DCu;
label_4a38dc:
    // 0x4a38dc: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x4a38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4a38e0:
    // 0x4a38e0: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_4a38e4:
    if (ctx->pc == 0x4A38E4u) {
        ctx->pc = 0x4A38E4u;
            // 0x4a38e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A38E8u;
        goto label_4a38e8;
    }
    ctx->pc = 0x4A38E0u;
    {
        const bool branch_taken_0x4a38e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A38E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A38E0u;
            // 0x4a38e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a38e0) {
            ctx->pc = 0x4A3960u;
            goto label_4a3960;
        }
    }
    ctx->pc = 0x4A38E8u;
label_4a38e8:
    // 0x4a38e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x4a38e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a38ec:
    // 0x4a38ec: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x4a38ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4a38f0:
    // 0x4a38f0: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_4a38f4:
    if (ctx->pc == 0x4A38F4u) {
        ctx->pc = 0x4A38F4u;
            // 0x4a38f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A38F8u;
        goto label_4a38f8;
    }
    ctx->pc = 0x4A38F0u;
    {
        const bool branch_taken_0x4a38f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A38F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A38F0u;
            // 0x4a38f4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a38f0) {
            ctx->pc = 0x4A3948u;
            goto label_4a3948;
        }
    }
    ctx->pc = 0x4A38F8u;
label_4a38f8:
    // 0x4a38f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a38f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a38fc:
    // 0x4a38fc: 0x0  nop
    ctx->pc = 0x4a38fcu;
    // NOP
label_4a3900:
    // 0x4a3900: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x4a3900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_4a3904:
    // 0x4a3904: 0xe21821  addu        $v1, $a3, $v0
    ctx->pc = 0x4a3904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_4a3908:
    // 0x4a3908: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4a3908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_4a390c:
    // 0x4a390c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a390cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a3910:
    // 0x4a3910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a3910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a3914:
    // 0x4a3914: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x4a3914u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4a3918:
    // 0x4a3918: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_4a391c:
    if (ctx->pc == 0x4A391Cu) {
        ctx->pc = 0x4A3920u;
        goto label_4a3920;
    }
    ctx->pc = 0x4A3918u;
    {
        const bool branch_taken_0x4a3918 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3918) {
            ctx->pc = 0x4A3930u;
            goto label_4a3930;
        }
    }
    ctx->pc = 0x4A3920u;
label_4a3920:
    // 0x4a3920: 0x84c20000  lh          $v0, 0x0($a2)
    ctx->pc = 0x4a3920u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_4a3924:
    // 0x4a3924: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x4a3924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_4a3928:
    // 0x4a3928: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x4a3928u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_4a392c:
    // 0x4a392c: 0x0  nop
    ctx->pc = 0x4a392cu;
    // NOP
label_4a3930:
    // 0x4a3930: 0x8c830054  lw          $v1, 0x54($a0)
    ctx->pc = 0x4a3930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_4a3934:
    // 0x4a3934: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4a3934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_4a3938:
    // 0x4a3938: 0x103102b  sltu        $v0, $t0, $v1
    ctx->pc = 0x4a3938u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a393c:
    // 0x4a393c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_4a3940:
    if (ctx->pc == 0x4A3940u) {
        ctx->pc = 0x4A3940u;
            // 0x4a3940: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x4A3944u;
        goto label_4a3944;
    }
    ctx->pc = 0x4A393Cu;
    {
        const bool branch_taken_0x4a393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A393Cu;
            // 0x4a3940: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a393c) {
            ctx->pc = 0x4A3900u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a3900;
        }
    }
    ctx->pc = 0x4A3944u;
label_4a3944:
    // 0x4a3944: 0x0  nop
    ctx->pc = 0x4a3944u;
    // NOP
label_4a3948:
    // 0x4a3948: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x4a3948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_4a394c:
    // 0x4a394c: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x4a394cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_4a3950:
    // 0x4a3950: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x4a3950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_4a3954:
    // 0x4a3954: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_4a3958:
    if (ctx->pc == 0x4A3958u) {
        ctx->pc = 0x4A3958u;
            // 0x4a3958: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x4A395Cu;
        goto label_4a395c;
    }
    ctx->pc = 0x4A3954u;
    {
        const bool branch_taken_0x4a3954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3954u;
            // 0x4a3958: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3954) {
            ctx->pc = 0x4A38F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4a38f0;
        }
    }
    ctx->pc = 0x4A395Cu;
label_4a395c:
    // 0x4a395c: 0x0  nop
    ctx->pc = 0x4a395cu;
    // NOP
label_4a3960:
    // 0x4a3960: 0x24840068  addiu       $a0, $a0, 0x68
    ctx->pc = 0x4a3960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 104));
label_4a3964:
    // 0x4a3964: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x4a3964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_4a3968:
    // 0x4a3968: 0xc04a508  jal         func_129420
label_4a396c:
    if (ctx->pc == 0x4A396Cu) {
        ctx->pc = 0x4A396Cu;
            // 0x4a396c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x4A3970u;
        goto label_4a3970;
    }
    ctx->pc = 0x4A3968u;
    SET_GPR_U32(ctx, 31, 0x4A3970u);
    ctx->pc = 0x4A396Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3968u;
            // 0x4a396c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3970u; }
        if (ctx->pc != 0x4A3970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3970u; }
        if (ctx->pc != 0x4A3970u) { return; }
    }
    ctx->pc = 0x4A3970u;
label_4a3970:
    // 0x4a3970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a3970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a3974:
    // 0x4a3974: 0x3e00008  jr          $ra
label_4a3978:
    if (ctx->pc == 0x4A3978u) {
        ctx->pc = 0x4A3978u;
            // 0x4a3978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x4A397Cu;
        goto label_4a397c;
    }
    ctx->pc = 0x4A3974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A3978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3974u;
            // 0x4a3978: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A397Cu;
label_4a397c:
    // 0x4a397c: 0x0  nop
    ctx->pc = 0x4a397cu;
    // NOP
label_4a3980:
    // 0x4a3980: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4a3980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_4a3984:
    // 0x4a3984: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x4a3984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_4a3988:
    // 0x4a3988: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x4a3988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_4a398c:
    // 0x4a398c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x4a398cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_4a3990:
    // 0x4a3990: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x4a3990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_4a3994:
    // 0x4a3994: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x4a3994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_4a3998:
    // 0x4a3998: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4a3998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_4a399c:
    // 0x4a399c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4a399cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_4a39a0:
    // 0x4a39a0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4a39a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_4a39a4:
    // 0x4a39a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4a39a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_4a39a8:
    // 0x4a39a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4a39a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_4a39ac:
    // 0x4a39ac: 0x8c930550  lw          $s3, 0x550($a0)
    ctx->pc = 0x4a39acu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1360)));
label_4a39b0:
    // 0x4a39b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4a39b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a39b4:
    // 0x4a39b4: 0xc0be258  jal         func_2F8960
label_4a39b8:
    if (ctx->pc == 0x4A39B8u) {
        ctx->pc = 0x4A39B8u;
            // 0x4a39b8: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x4A39BCu;
        goto label_4a39bc;
    }
    ctx->pc = 0x4A39B4u;
    SET_GPR_U32(ctx, 31, 0x4A39BCu);
    ctx->pc = 0x4A39B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A39B4u;
            // 0x4a39b8: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F8960u;
    if (runtime->hasFunction(0x2F8960u)) {
        auto targetFn = runtime->lookupFunction(0x2F8960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A39BCu; }
        if (ctx->pc != 0x4A39BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F8960_0x2f8960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A39BCu; }
        if (ctx->pc != 0x4A39BCu) { return; }
    }
    ctx->pc = 0x4A39BCu;
label_4a39bc:
    // 0x4a39bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a39bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a39c0:
    // 0x4a39c0: 0xc0754b4  jal         func_1D52D0
label_4a39c4:
    if (ctx->pc == 0x4A39C4u) {
        ctx->pc = 0x4A39C4u;
            // 0x4a39c4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->pc = 0x4A39C8u;
        goto label_4a39c8;
    }
    ctx->pc = 0x4A39C0u;
    SET_GPR_U32(ctx, 31, 0x4A39C8u);
    ctx->pc = 0x4A39C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A39C0u;
            // 0x4a39c4: 0x26040440  addiu       $a0, $s0, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52D0u;
    if (runtime->hasFunction(0x1D52D0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A39C8u; }
        if (ctx->pc != 0x4A39C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D52D0_0x1d52d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A39C8u; }
        if (ctx->pc != 0x4A39C8u) { return; }
    }
    ctx->pc = 0x4A39C8u;
label_4a39c8:
    // 0x4a39c8: 0xc6010e1c  lwc1        $f1, 0xE1C($s0)
    ctx->pc = 0x4a39c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a39cc:
    // 0x4a39cc: 0x3c034f00  lui         $v1, 0x4F00
    ctx->pc = 0x4a39ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20224 << 16));
label_4a39d0:
    // 0x4a39d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a39d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a39d4:
    // 0x4a39d4: 0x0  nop
    ctx->pc = 0x4a39d4u;
    // NOP
label_4a39d8:
    // 0x4a39d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x4a39d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a39dc:
    // 0x4a39dc: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_4a39e0:
    if (ctx->pc == 0x4A39E0u) {
        ctx->pc = 0x4A39E0u;
            // 0x4a39e0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A39E4u;
        goto label_4a39e4;
    }
    ctx->pc = 0x4A39DCu;
    {
        const bool branch_taken_0x4a39dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A39E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A39DCu;
            // 0x4a39e0: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a39dc) {
            ctx->pc = 0x4A39F4u;
            goto label_4a39f4;
        }
    }
    ctx->pc = 0x4A39E4u;
label_4a39e4:
    // 0x4a39e4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a39e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a39e8:
    // 0x4a39e8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a39e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4a39ec:
    // 0x4a39ec: 0x10000008  b           . + 4 + (0x8 << 2)
label_4a39f0:
    if (ctx->pc == 0x4A39F0u) {
        ctx->pc = 0x4A39F0u;
            // 0x4a39f0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A39F4u;
        goto label_4a39f4;
    }
    ctx->pc = 0x4A39ECu;
    {
        const bool branch_taken_0x4a39ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A39F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A39ECu;
            // 0x4a39f0: 0x308400ff  andi        $a0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a39ec) {
            ctx->pc = 0x4A3A10u;
            goto label_4a3a10;
        }
    }
    ctx->pc = 0x4A39F4u;
label_4a39f4:
    // 0x4a39f4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a39f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a39f8:
    // 0x4a39f8: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x4a39f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
label_4a39fc:
    // 0x4a39fc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a39fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_4a3a00:
    // 0x4a3a00: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x4a3a00u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_4a3a04:
    // 0x4a3a04: 0x0  nop
    ctx->pc = 0x4a3a04u;
    // NOP
label_4a3a08:
    // 0x4a3a08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a3a08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a3a0c:
    // 0x4a3a0c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4a3a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4a3a10:
    // 0x4a3a10: 0x8e030e30  lw          $v1, 0xE30($s0)
    ctx->pc = 0x4a3a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3632)));
label_4a3a14:
    // 0x4a3a14: 0x2c610008  sltiu       $at, $v1, 0x8
    ctx->pc = 0x4a3a14u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_4a3a18:
    // 0x4a3a18: 0x10200567  beqz        $at, . + 4 + (0x567 << 2)
label_4a3a1c:
    if (ctx->pc == 0x4A3A1Cu) {
        ctx->pc = 0x4A3A1Cu;
            // 0x4a3a1c: 0x309500ff  andi        $s5, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A3A20u;
        goto label_4a3a20;
    }
    ctx->pc = 0x4A3A18u;
    {
        const bool branch_taken_0x4a3a18 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3A18u;
            // 0x4a3a1c: 0x309500ff  andi        $s5, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a18) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A3A20u;
label_4a3a20:
    // 0x4a3a20: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x4a3a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
label_4a3a24:
    // 0x4a3a24: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a3a24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a3a28:
    // 0x4a3a28: 0x24841420  addiu       $a0, $a0, 0x1420
    ctx->pc = 0x4a3a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5152));
label_4a3a2c:
    // 0x4a3a2c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a3a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a3a30:
    // 0x4a3a30: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a3a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a3a34:
    // 0x4a3a34: 0x600008  jr          $v1
label_4a3a38:
    if (ctx->pc == 0x4A3A38u) {
        ctx->pc = 0x4A3A3Cu;
        goto label_4a3a3c;
    }
    ctx->pc = 0x4A3A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A3A3Cu: goto label_4a3a3c;
            case 0x4A3A58u: goto label_4a3a58;
            case 0x4A3AE8u: goto label_4a3ae8;
            case 0x4A3CE4u: goto label_4a3ce4;
            case 0x4A46F8u: goto label_4a46f8;
            case 0x4A4D60u: goto label_4a4d60;
            case 0x4A4D80u: goto label_4a4d80;
            case 0x4A4E50u: goto label_4a4e50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4A3A3Cu;
label_4a3a3c:
    // 0x4a3a3c: 0x8e050db8  lw          $a1, 0xDB8($s0)
    ctx->pc = 0x4a3a3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3512)));
label_4a3a40:
    // 0x4a3a40: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x4a3a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_4a3a44:
    // 0x4a3a44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a3a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a3a48:
    // 0x4a3a48: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4a3a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4a3a4c:
    // 0x4a3a4c: 0xae040db8  sw          $a0, 0xDB8($s0)
    ctx->pc = 0x4a3a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 4));
label_4a3a50:
    // 0x4a3a50: 0x10000559  b           . + 4 + (0x559 << 2)
label_4a3a54:
    if (ctx->pc == 0x4A3A54u) {
        ctx->pc = 0x4A3A54u;
            // 0x4a3a54: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4A3A58u;
        goto label_4a3a58;
    }
    ctx->pc = 0x4A3A50u;
    {
        const bool branch_taken_0x4a3a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3A50u;
            // 0x4a3a54: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3a50) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A3A58u;
label_4a3a58:
    // 0x4a3a58: 0x3c043e0e  lui         $a0, 0x3E0E
    ctx->pc = 0x4a3a58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15886 << 16));
label_4a3a5c:
    // 0x4a3a5c: 0x2403ffd0  addiu       $v1, $zero, -0x30
    ctx->pc = 0x4a3a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
label_4a3a60:
    // 0x4a3a60: 0x348438e4  ori         $a0, $a0, 0x38E4
    ctx->pc = 0x4a3a60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)14564);
label_4a3a64:
    // 0x4a3a64: 0xae040de0  sw          $a0, 0xDE0($s0)
    ctx->pc = 0x4a3a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3552), GPR_U32(ctx, 4));
label_4a3a68:
    // 0x4a3a68: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a3a68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a3a6c:
    // 0x4a3a6c: 0x8e040db8  lw          $a0, 0xDB8($s0)
    ctx->pc = 0x4a3a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3512)));
label_4a3a70:
    // 0x4a3a70: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x4a3a70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_4a3a74:
    // 0x4a3a74: 0xae030db8  sw          $v1, 0xDB8($s0)
    ctx->pc = 0x4a3a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 3));
label_4a3a78:
    // 0x4a3a78: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x4a3a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
label_4a3a7c:
    // 0x4a3a7c: 0xae030db8  sw          $v1, 0xDB8($s0)
    ctx->pc = 0x4a3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 3));
label_4a3a80:
    // 0x4a3a80: 0xc6010e20  lwc1        $f1, 0xE20($s0)
    ctx->pc = 0x4a3a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a3a84:
    // 0x4a3a84: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a3a84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a3a88:
    // 0x4a3a88: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
label_4a3a8c:
    if (ctx->pc == 0x4A3A8Cu) {
        ctx->pc = 0x4A3A8Cu;
            // 0x4a3a8c: 0x32a400ff  andi        $a0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A3A90u;
        goto label_4a3a90;
    }
    ctx->pc = 0x4A3A88u;
    {
        const bool branch_taken_0x4a3a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a3a88) {
            ctx->pc = 0x4A3A8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3A88u;
            // 0x4a3a8c: 0x32a400ff  andi        $a0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3AB0u;
            goto label_4a3ab0;
        }
    }
    ctx->pc = 0x4A3A90u;
label_4a3a90:
    // 0x4a3a90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x4a3a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a3a94:
    // 0x4a3a94: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a3a98:
    // 0x4a3a98: 0xae030e30  sw          $v1, 0xE30($s0)
    ctx->pc = 0x4a3a98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
label_4a3a9c:
    // 0x4a3a9c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a3a9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a3aa0:
    // 0x4a3aa0: 0xc0781cc  jal         func_1E0730
label_4a3aa4:
    if (ctx->pc == 0x4A3AA4u) {
        ctx->pc = 0x4A3AA4u;
            // 0x4a3aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3AA8u;
        goto label_4a3aa8;
    }
    ctx->pc = 0x4A3AA0u;
    SET_GPR_U32(ctx, 31, 0x4A3AA8u);
    ctx->pc = 0x4A3AA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3AA0u;
            // 0x4a3aa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E0730u;
    if (runtime->hasFunction(0x1E0730u)) {
        auto targetFn = runtime->lookupFunction(0x1E0730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3AA8u; }
        if (ctx->pc != 0x4A3AA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E0730_0x1e0730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3AA8u; }
        if (ctx->pc != 0x4A3AA8u) { return; }
    }
    ctx->pc = 0x4A3AA8u;
label_4a3aa8:
    // 0x4a3aa8: 0x10000544  b           . + 4 + (0x544 << 2)
label_4a3aac:
    if (ctx->pc == 0x4A3AACu) {
        ctx->pc = 0x4A3AACu;
            // 0x4a3aac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x4A3AB0u;
        goto label_4a3ab0;
    }
    ctx->pc = 0x4A3AA8u;
    {
        const bool branch_taken_0x4a3aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3AA8u;
            // 0x4a3aac: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3aa8) {
            ctx->pc = 0x4A4FBCu;
            goto label_4a4fbc;
        }
    }
    ctx->pc = 0x4A3AB0u;
label_4a3ab0:
    // 0x4a3ab0: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a3ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a3ab4:
    // 0x4a3ab4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a3ab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a3ab8:
    // 0x4a3ab8: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4a3ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4a3abc:
    // 0x4a3abc: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4a3abcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4a3ac0:
    // 0x4a3ac0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4a3ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a3ac4:
    // 0x4a3ac4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4a3ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a3ac8:
    // 0x4a3ac8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x4a3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4a3acc:
    // 0x4a3acc: 0x8c630d74  lw          $v1, 0xD74($v1)
    ctx->pc = 0x4a3accu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3444)));
label_4a3ad0:
    // 0x4a3ad0: 0x906302c4  lbu         $v1, 0x2C4($v1)
    ctx->pc = 0x4a3ad0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 708)));
label_4a3ad4:
    // 0x4a3ad4: 0x14600538  bnez        $v1, . + 4 + (0x538 << 2)
label_4a3ad8:
    if (ctx->pc == 0x4A3AD8u) {
        ctx->pc = 0x4A3ADCu;
        goto label_4a3adc;
    }
    ctx->pc = 0x4A3AD4u;
    {
        const bool branch_taken_0x4a3ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3ad4) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A3ADCu;
label_4a3adc:
    // 0x4a3adc: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a3adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3ae0:
    // 0x4a3ae0: 0x10000535  b           . + 4 + (0x535 << 2)
label_4a3ae4:
    if (ctx->pc == 0x4A3AE4u) {
        ctx->pc = 0x4A3AE4u;
            // 0x4a3ae4: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4A3AE8u;
        goto label_4a3ae8;
    }
    ctx->pc = 0x4A3AE0u;
    {
        const bool branch_taken_0x4a3ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3AE0u;
            // 0x4a3ae4: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ae0) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A3AE8u;
label_4a3ae8:
    // 0x4a3ae8: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a3ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3aec:
    // 0x4a3aec: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4a3aecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a3af0:
    // 0x4a3af0: 0x64130001  daddiu      $s3, $zero, 0x1
    ctx->pc = 0x4a3af0u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3af4:
    // 0x4a3af4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a3af4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3af8:
    // 0x4a3af8: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4a3afc:
    if (ctx->pc == 0x4A3AFCu) {
        ctx->pc = 0x4A3AFCu;
            // 0x4a3afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B00u;
        goto label_4a3b00;
    }
    ctx->pc = 0x4A3AF8u;
    {
        const bool branch_taken_0x4a3af8 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A3AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3AF8u;
            // 0x4a3afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3af8) {
            ctx->pc = 0x4A3B10u;
            goto label_4a3b10;
        }
    }
    ctx->pc = 0x4A3B00u;
label_4a3b00:
    // 0x4a3b00: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4a3b00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3b04:
    // 0x4a3b04: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3b08:
    if (ctx->pc == 0x4A3B08u) {
        ctx->pc = 0x4A3B0Cu;
        goto label_4a3b0c;
    }
    ctx->pc = 0x4A3B04u;
    {
        const bool branch_taken_0x4a3b04 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b04) {
            ctx->pc = 0x4A3B10u;
            goto label_4a3b10;
        }
    }
    ctx->pc = 0x4A3B0Cu;
label_4a3b0c:
    // 0x4a3b0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b10:
    // 0x4a3b10: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4a3b14:
    if (ctx->pc == 0x4A3B14u) {
        ctx->pc = 0x4A3B18u;
        goto label_4a3b18;
    }
    ctx->pc = 0x4A3B10u;
    {
        const bool branch_taken_0x4a3b10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b10) {
            ctx->pc = 0x4A3B2Cu;
            goto label_4a3b2c;
        }
    }
    ctx->pc = 0x4A3B18u;
label_4a3b18:
    // 0x4a3b18: 0xc075eb4  jal         func_1D7AD0
label_4a3b1c:
    if (ctx->pc == 0x4A3B1Cu) {
        ctx->pc = 0x4A3B1Cu;
            // 0x4a3b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B20u;
        goto label_4a3b20;
    }
    ctx->pc = 0x4A3B18u;
    SET_GPR_U32(ctx, 31, 0x4A3B20u);
    ctx->pc = 0x4A3B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3B18u;
            // 0x4a3b1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3B20u; }
        if (ctx->pc != 0x4A3B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3B20u; }
        if (ctx->pc != 0x4A3B20u) { return; }
    }
    ctx->pc = 0x4A3B20u;
label_4a3b20:
    // 0x4a3b20: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3b24:
    if (ctx->pc == 0x4A3B24u) {
        ctx->pc = 0x4A3B28u;
        goto label_4a3b28;
    }
    ctx->pc = 0x4A3B20u;
    {
        const bool branch_taken_0x4a3b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b20) {
            ctx->pc = 0x4A3B2Cu;
            goto label_4a3b2c;
        }
    }
    ctx->pc = 0x4A3B28u;
label_4a3b28:
    // 0x4a3b28: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x4a3b28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b2c:
    // 0x4a3b2c: 0x56600006  bnel        $s3, $zero, . + 4 + (0x6 << 2)
label_4a3b30:
    if (ctx->pc == 0x4A3B30u) {
        ctx->pc = 0x4A3B30u;
            // 0x4a3b30: 0x821211aa  lb          $s2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x4A3B34u;
        goto label_4a3b34;
    }
    ctx->pc = 0x4A3B2Cu;
    {
        const bool branch_taken_0x4a3b2c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b2c) {
            ctx->pc = 0x4A3B30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3B2Cu;
            // 0x4a3b30: 0x821211aa  lb          $s2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3B48u;
            goto label_4a3b48;
        }
    }
    ctx->pc = 0x4A3B34u;
label_4a3b34:
    // 0x4a3b34: 0x8e040e34  lw          $a0, 0xE34($s0)
    ctx->pc = 0x4a3b34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3b38:
    // 0x4a3b38: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a3b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3b3c:
    // 0x4a3b3c: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
label_4a3b40:
    if (ctx->pc == 0x4A3B40u) {
        ctx->pc = 0x4A3B40u;
            // 0x4a3b40: 0x32a400ff  andi        $a0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A3B44u;
        goto label_4a3b44;
    }
    ctx->pc = 0x4A3B3Cu;
    {
        const bool branch_taken_0x4a3b3c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a3b3c) {
            ctx->pc = 0x4A3B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3B3Cu;
            // 0x4a3b40: 0x32a400ff  andi        $a0, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3B4Cu;
            goto label_4a3b4c;
        }
    }
    ctx->pc = 0x4A3B44u;
label_4a3b44:
    // 0x4a3b44: 0x821211aa  lb          $s2, 0x11AA($s0)
    ctx->pc = 0x4a3b44u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4a3b48:
    // 0x4a3b48: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x4a3b48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a3b4c:
    // 0x4a3b4c: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a3b50:
    // 0x4a3b50: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x4a3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_4a3b54:
    // 0x4a3b54: 0x24630e84  addiu       $v1, $v1, 0xE84
    ctx->pc = 0x4a3b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3716));
label_4a3b58:
    // 0x4a3b58: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x4a3b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_4a3b5c:
    // 0x4a3b5c: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4a3b5cu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3b60:
    // 0x4a3b60: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4a3b60u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_4a3b64:
    // 0x4a3b64: 0x649821  addu        $s3, $v1, $a0
    ctx->pc = 0x4a3b64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_4a3b68:
    // 0x4a3b68: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x4a3b68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a3b6c:
    // 0x4a3b6c: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4a3b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4a3b70:
    // 0x4a3b70: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4a3b74:
    if (ctx->pc == 0x4A3B74u) {
        ctx->pc = 0x4A3B74u;
            // 0x4a3b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3B78u;
        goto label_4a3b78;
    }
    ctx->pc = 0x4A3B70u;
    {
        const bool branch_taken_0x4a3b70 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A3B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3B70u;
            // 0x4a3b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3b70) {
            ctx->pc = 0x4A3B88u;
            goto label_4a3b88;
        }
    }
    ctx->pc = 0x4A3B78u;
label_4a3b78:
    // 0x4a3b78: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4a3b78u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3b7c:
    // 0x4a3b7c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3b80:
    if (ctx->pc == 0x4A3B80u) {
        ctx->pc = 0x4A3B84u;
        goto label_4a3b84;
    }
    ctx->pc = 0x4A3B7Cu;
    {
        const bool branch_taken_0x4a3b7c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b7c) {
            ctx->pc = 0x4A3B88u;
            goto label_4a3b88;
        }
    }
    ctx->pc = 0x4A3B84u;
label_4a3b84:
    // 0x4a3b84: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a3b84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a3b88:
    // 0x4a3b88: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4a3b8c:
    if (ctx->pc == 0x4A3B8Cu) {
        ctx->pc = 0x4A3B90u;
        goto label_4a3b90;
    }
    ctx->pc = 0x4A3B88u;
    {
        const bool branch_taken_0x4a3b88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b88) {
            ctx->pc = 0x4A3BA4u;
            goto label_4a3ba4;
        }
    }
    ctx->pc = 0x4A3B90u;
label_4a3b90:
    // 0x4a3b90: 0xc075eb4  jal         func_1D7AD0
label_4a3b94:
    if (ctx->pc == 0x4A3B94u) {
        ctx->pc = 0x4A3B98u;
        goto label_4a3b98;
    }
    ctx->pc = 0x4A3B90u;
    SET_GPR_U32(ctx, 31, 0x4A3B98u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3B98u; }
        if (ctx->pc != 0x4A3B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3B98u; }
        if (ctx->pc != 0x4A3B98u) { return; }
    }
    ctx->pc = 0x4A3B98u;
label_4a3b98:
    // 0x4a3b98: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3b9c:
    if (ctx->pc == 0x4A3B9Cu) {
        ctx->pc = 0x4A3BA0u;
        goto label_4a3ba0;
    }
    ctx->pc = 0x4A3B98u;
    {
        const bool branch_taken_0x4a3b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3b98) {
            ctx->pc = 0x4A3BA4u;
            goto label_4a3ba4;
        }
    }
    ctx->pc = 0x4A3BA0u;
label_4a3ba0:
    // 0x4a3ba0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a3ba0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3ba4:
    // 0x4a3ba4: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
label_4a3ba8:
    if (ctx->pc == 0x4A3BA8u) {
        ctx->pc = 0x4A3BA8u;
            // 0x4a3ba8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x4A3BACu;
        goto label_4a3bac;
    }
    ctx->pc = 0x4A3BA4u;
    {
        const bool branch_taken_0x4a3ba4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3ba4) {
            ctx->pc = 0x4A3BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3BA4u;
            // 0x4a3ba8: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3BC4u;
            goto label_4a3bc4;
        }
    }
    ctx->pc = 0x4A3BACu;
label_4a3bac:
    // 0x4a3bac: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a3bacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a3bb0:
    // 0x4a3bb0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a3bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3bb4:
    // 0x4a3bb4: 0x8ca40e34  lw          $a0, 0xE34($a1)
    ctx->pc = 0x4a3bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3636)));
label_4a3bb8:
    // 0x4a3bb8: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_4a3bbc:
    if (ctx->pc == 0x4A3BBCu) {
        ctx->pc = 0x4A3BBCu;
            // 0x4a3bbc: 0x8ca40d6c  lw          $a0, 0xD6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
        ctx->pc = 0x4A3BC0u;
        goto label_4a3bc0;
    }
    ctx->pc = 0x4A3BB8u;
    {
        const bool branch_taken_0x4a3bb8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a3bb8) {
            ctx->pc = 0x4A3BBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3BB8u;
            // 0x4a3bbc: 0x8ca40d6c  lw          $a0, 0xD6C($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3BCCu;
            goto label_4a3bcc;
        }
    }
    ctx->pc = 0x4A3BC0u;
label_4a3bc0:
    // 0x4a3bc0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x4a3bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a3bc4:
    // 0x4a3bc4: 0x80b111aa  lb          $s1, 0x11AA($a1)
    ctx->pc = 0x4a3bc4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 4522)));
label_4a3bc8:
    // 0x4a3bc8: 0x8ca40d6c  lw          $a0, 0xD6C($a1)
    ctx->pc = 0x4a3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 3436)));
label_4a3bcc:
    // 0x4a3bcc: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x4a3bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_4a3bd0:
    // 0x4a3bd0: 0x90840010  lbu         $a0, 0x10($a0)
    ctx->pc = 0x4a3bd0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_4a3bd4:
    // 0x4a3bd4: 0x50830005  beql        $a0, $v1, . + 4 + (0x5 << 2)
label_4a3bd8:
    if (ctx->pc == 0x4A3BD8u) {
        ctx->pc = 0x4A3BD8u;
            // 0x4a3bd8: 0x121e3c  dsll32      $v1, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
        ctx->pc = 0x4A3BDCu;
        goto label_4a3bdc;
    }
    ctx->pc = 0x4A3BD4u;
    {
        const bool branch_taken_0x4a3bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a3bd4) {
            ctx->pc = 0x4A3BD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3BD4u;
            // 0x4a3bd8: 0x121e3c  dsll32      $v1, $s2, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3BECu;
            goto label_4a3bec;
        }
    }
    ctx->pc = 0x4A3BDCu;
label_4a3bdc:
    // 0x4a3bdc: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x4a3bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_4a3be0:
    // 0x4a3be0: 0x5483003e  bnel        $a0, $v1, . + 4 + (0x3E << 2)
label_4a3be4:
    if (ctx->pc == 0x4A3BE4u) {
        ctx->pc = 0x4A3BE4u;
            // 0x4a3be4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A3BE8u;
        goto label_4a3be8;
    }
    ctx->pc = 0x4A3BE0u;
    {
        const bool branch_taken_0x4a3be0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a3be0) {
            ctx->pc = 0x4A3BE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3BE0u;
            // 0x4a3be4: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3CDCu;
            goto label_4a3cdc;
        }
    }
    ctx->pc = 0x4A3BE8u;
label_4a3be8:
    // 0x4a3be8: 0x121e3c  dsll32      $v1, $s2, 24
    ctx->pc = 0x4a3be8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) << (32 + 24));
label_4a3bec:
    // 0x4a3bec: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4a3becu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4a3bf0:
    // 0x4a3bf0: 0x4620007  bltzl       $v1, . + 4 + (0x7 << 2)
label_4a3bf4:
    if (ctx->pc == 0x4A3BF4u) {
        ctx->pc = 0x4A3BF4u;
            // 0x4a3bf4: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->pc = 0x4A3BF8u;
        goto label_4a3bf8;
    }
    ctx->pc = 0x4A3BF0u;
    {
        const bool branch_taken_0x4a3bf0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4a3bf0) {
            ctx->pc = 0x4A3BF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3BF0u;
            // 0x4a3bf4: 0x111e3c  dsll32      $v1, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C10u;
            goto label_4a3c10;
        }
    }
    ctx->pc = 0x4A3BF8u;
label_4a3bf8:
    // 0x4a3bf8: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x4a3bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
label_4a3bfc:
    // 0x4a3bfc: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x4a3bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a3c00:
    // 0x4a3c00: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x4a3c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4a3c04:
    // 0x4a3c04: 0xc0bb2e8  jal         func_2ECBA0
label_4a3c08:
    if (ctx->pc == 0x4A3C08u) {
        ctx->pc = 0x4A3C08u;
            // 0x4a3c08: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A3C0Cu;
        goto label_4a3c0c;
    }
    ctx->pc = 0x4A3C04u;
    SET_GPR_U32(ctx, 31, 0x4A3C0Cu);
    ctx->pc = 0x4A3C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C04u;
            // 0x4a3c08: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C0Cu; }
        if (ctx->pc != 0x4A3C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C0Cu; }
        if (ctx->pc != 0x4A3C0Cu) { return; }
    }
    ctx->pc = 0x4A3C0Cu;
label_4a3c0c:
    // 0x4a3c0c: 0x111e3c  dsll32      $v1, $s1, 24
    ctx->pc = 0x4a3c0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) << (32 + 24));
label_4a3c10:
    // 0x4a3c10: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x4a3c10u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_4a3c14:
    // 0x4a3c14: 0x4620007  bltzl       $v1, . + 4 + (0x7 << 2)
label_4a3c18:
    if (ctx->pc == 0x4A3C18u) {
        ctx->pc = 0x4A3C18u;
            // 0x4a3c18: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x4A3C1Cu;
        goto label_4a3c1c;
    }
    ctx->pc = 0x4A3C14u;
    {
        const bool branch_taken_0x4a3c14 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x4a3c14) {
            ctx->pc = 0x4A3C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C14u;
            // 0x4a3c18: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3C34u;
            goto label_4a3c34;
        }
    }
    ctx->pc = 0x4A3C1Cu;
label_4a3c1c:
    // 0x4a3c1c: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x4a3c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_4a3c20:
    // 0x4a3c20: 0x24050034  addiu       $a1, $zero, 0x34
    ctx->pc = 0x4a3c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_4a3c24:
    // 0x4a3c24: 0x260602c0  addiu       $a2, $s0, 0x2C0
    ctx->pc = 0x4a3c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
label_4a3c28:
    // 0x4a3c28: 0xc0bb2e8  jal         func_2ECBA0
label_4a3c2c:
    if (ctx->pc == 0x4A3C2Cu) {
        ctx->pc = 0x4A3C2Cu;
            // 0x4a3c2c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A3C30u;
        goto label_4a3c30;
    }
    ctx->pc = 0x4A3C28u;
    SET_GPR_U32(ctx, 31, 0x4A3C30u);
    ctx->pc = 0x4A3C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C28u;
            // 0x4a3c2c: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ECBA0u;
    if (runtime->hasFunction(0x2ECBA0u)) {
        auto targetFn = runtime->lookupFunction(0x2ECBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C30u; }
        if (ctx->pc != 0x4A3C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002ECBA0_0x2ecba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C30u; }
        if (ctx->pc != 0x4A3C30u) { return; }
    }
    ctx->pc = 0x4A3C30u;
label_4a3c30:
    // 0x4a3c30: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a3c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3c34:
    // 0x4a3c34: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4a3c34u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3c38:
    // 0x4a3c38: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x4a3c38u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a3c3c:
    // 0x4a3c3c: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4a3c40:
    if (ctx->pc == 0x4A3C40u) {
        ctx->pc = 0x4A3C40u;
            // 0x4a3c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C44u;
        goto label_4a3c44;
    }
    ctx->pc = 0x4A3C3Cu;
    {
        const bool branch_taken_0x4a3c3c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A3C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C3Cu;
            // 0x4a3c40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c3c) {
            ctx->pc = 0x4A3C54u;
            goto label_4a3c54;
        }
    }
    ctx->pc = 0x4A3C44u;
label_4a3c44:
    // 0x4a3c44: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4a3c44u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3c48:
    // 0x4a3c48: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3c4c:
    if (ctx->pc == 0x4A3C4Cu) {
        ctx->pc = 0x4A3C50u;
        goto label_4a3c50;
    }
    ctx->pc = 0x4A3C48u;
    {
        const bool branch_taken_0x4a3c48 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c48) {
            ctx->pc = 0x4A3C54u;
            goto label_4a3c54;
        }
    }
    ctx->pc = 0x4A3C50u;
label_4a3c50:
    // 0x4a3c50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a3c50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3c54:
    // 0x4a3c54: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4a3c58:
    if (ctx->pc == 0x4A3C58u) {
        ctx->pc = 0x4A3C5Cu;
        goto label_4a3c5c;
    }
    ctx->pc = 0x4A3C54u;
    {
        const bool branch_taken_0x4a3c54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c54) {
            ctx->pc = 0x4A3C70u;
            goto label_4a3c70;
        }
    }
    ctx->pc = 0x4A3C5Cu;
label_4a3c5c:
    // 0x4a3c5c: 0xc075eb4  jal         func_1D7AD0
label_4a3c60:
    if (ctx->pc == 0x4A3C60u) {
        ctx->pc = 0x4A3C60u;
            // 0x4a3c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C64u;
        goto label_4a3c64;
    }
    ctx->pc = 0x4A3C5Cu;
    SET_GPR_U32(ctx, 31, 0x4A3C64u);
    ctx->pc = 0x4A3C60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C5Cu;
            // 0x4a3c60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C64u; }
        if (ctx->pc != 0x4A3C64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3C64u; }
        if (ctx->pc != 0x4A3C64u) { return; }
    }
    ctx->pc = 0x4A3C64u;
label_4a3c64:
    // 0x4a3c64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3c68:
    if (ctx->pc == 0x4A3C68u) {
        ctx->pc = 0x4A3C6Cu;
        goto label_4a3c6c;
    }
    ctx->pc = 0x4A3C64u;
    {
        const bool branch_taken_0x4a3c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c64) {
            ctx->pc = 0x4A3C70u;
            goto label_4a3c70;
        }
    }
    ctx->pc = 0x4A3C6Cu;
label_4a3c6c:
    // 0x4a3c6c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a3c6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3c70:
    // 0x4a3c70: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
label_4a3c74:
    if (ctx->pc == 0x4A3C74u) {
        ctx->pc = 0x4A3C78u;
        goto label_4a3c78;
    }
    ctx->pc = 0x4A3C70u;
    {
        const bool branch_taken_0x4a3c70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c70) {
            ctx->pc = 0x4A3CBCu;
            goto label_4a3cbc;
        }
    }
    ctx->pc = 0x4A3C78u;
label_4a3c78:
    // 0x4a3c78: 0x8e230e34  lw          $v1, 0xE34($s1)
    ctx->pc = 0x4a3c78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3636)));
label_4a3c7c:
    // 0x4a3c7c: 0x64120001  daddiu      $s2, $zero, 0x1
    ctx->pc = 0x4a3c7cu;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3c80:
    // 0x4a3c80: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
label_4a3c84:
    if (ctx->pc == 0x4A3C84u) {
        ctx->pc = 0x4A3C84u;
            // 0x4a3c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3C88u;
        goto label_4a3c88;
    }
    ctx->pc = 0x4A3C80u;
    {
        const bool branch_taken_0x4a3c80 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x4A3C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3C80u;
            // 0x4a3c84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3c80) {
            ctx->pc = 0x4A3C98u;
            goto label_4a3c98;
        }
    }
    ctx->pc = 0x4A3C88u;
label_4a3c88:
    // 0x4a3c88: 0x28610004  slti        $at, $v1, 0x4
    ctx->pc = 0x4a3c88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3c8c:
    // 0x4a3c8c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3c90:
    if (ctx->pc == 0x4A3C90u) {
        ctx->pc = 0x4A3C94u;
        goto label_4a3c94;
    }
    ctx->pc = 0x4A3C8Cu;
    {
        const bool branch_taken_0x4a3c8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c8c) {
            ctx->pc = 0x4A3C98u;
            goto label_4a3c98;
        }
    }
    ctx->pc = 0x4A3C94u;
label_4a3c94:
    // 0x4a3c94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4a3c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3c98:
    // 0x4a3c98: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4a3c9c:
    if (ctx->pc == 0x4A3C9Cu) {
        ctx->pc = 0x4A3CA0u;
        goto label_4a3ca0;
    }
    ctx->pc = 0x4A3C98u;
    {
        const bool branch_taken_0x4a3c98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3c98) {
            ctx->pc = 0x4A3CB4u;
            goto label_4a3cb4;
        }
    }
    ctx->pc = 0x4A3CA0u;
label_4a3ca0:
    // 0x4a3ca0: 0xc075eb4  jal         func_1D7AD0
label_4a3ca4:
    if (ctx->pc == 0x4A3CA4u) {
        ctx->pc = 0x4A3CA4u;
            // 0x4a3ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CA8u;
        goto label_4a3ca8;
    }
    ctx->pc = 0x4A3CA0u;
    SET_GPR_U32(ctx, 31, 0x4A3CA8u);
    ctx->pc = 0x4A3CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3CA0u;
            // 0x4a3ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3CA8u; }
        if (ctx->pc != 0x4A3CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3CA8u; }
        if (ctx->pc != 0x4A3CA8u) { return; }
    }
    ctx->pc = 0x4A3CA8u;
label_4a3ca8:
    // 0x4a3ca8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3cac:
    if (ctx->pc == 0x4A3CACu) {
        ctx->pc = 0x4A3CB0u;
        goto label_4a3cb0;
    }
    ctx->pc = 0x4A3CA8u;
    {
        const bool branch_taken_0x4a3ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3ca8) {
            ctx->pc = 0x4A3CB4u;
            goto label_4a3cb4;
        }
    }
    ctx->pc = 0x4A3CB0u;
label_4a3cb0:
    // 0x4a3cb0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a3cb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3cb4:
    // 0x4a3cb4: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_4a3cb8:
    if (ctx->pc == 0x4A3CB8u) {
        ctx->pc = 0x4A3CBCu;
        goto label_4a3cbc;
    }
    ctx->pc = 0x4A3CB4u;
    {
        const bool branch_taken_0x4a3cb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3cb4) {
            ctx->pc = 0x4A3CD8u;
            goto label_4a3cd8;
        }
    }
    ctx->pc = 0x4A3CBCu;
label_4a3cbc:
    // 0x4a3cbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a3cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a3cc0:
    // 0x4a3cc0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x4a3cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_4a3cc4:
    // 0x4a3cc4: 0x8c4489e8  lw          $a0, -0x7618($v0)
    ctx->pc = 0x4a3cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a3cc8:
    // 0x4a3cc8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x4a3cc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a3ccc:
    // 0x4a3ccc: 0x8f39006c  lw          $t9, 0x6C($t9)
    ctx->pc = 0x4a3cccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 108)));
label_4a3cd0:
    // 0x4a3cd0: 0x320f809  jalr        $t9
label_4a3cd4:
    if (ctx->pc == 0x4A3CD4u) {
        ctx->pc = 0x4A3CD4u;
            // 0x4a3cd4: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->pc = 0x4A3CD8u;
        goto label_4a3cd8;
    }
    ctx->pc = 0x4A3CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A3CD8u);
        ctx->pc = 0x4A3CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3CD0u;
            // 0x4a3cd4: 0x346501ae  ori         $a1, $v1, 0x1AE (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)430);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A3CD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A3CD8u; }
            if (ctx->pc != 0x4A3CD8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A3CD8u;
label_4a3cd8:
    // 0x4a3cd8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4a3cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_4a3cdc:
    // 0x4a3cdc: 0x100004b6  b           . + 4 + (0x4B6 << 2)
label_4a3ce0:
    if (ctx->pc == 0x4A3CE0u) {
        ctx->pc = 0x4A3CE0u;
            // 0x4a3ce0: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4A3CE4u;
        goto label_4a3ce4;
    }
    ctx->pc = 0x4A3CDCu;
    {
        const bool branch_taken_0x4a3cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3CDCu;
            // 0x4a3ce0: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3cdc) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A3CE4u;
label_4a3ce4:
    // 0x4a3ce4: 0x8e020d74  lw          $v0, 0xD74($s0)
    ctx->pc = 0x4a3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a3ce8:
    // 0x4a3ce8: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x4a3ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a3cec:
    // 0x4a3cec: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x4a3cecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a3cf0:
    // 0x4a3cf0: 0x8e050db8  lw          $a1, 0xDB8($s0)
    ctx->pc = 0x4a3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3512)));
label_4a3cf4:
    // 0x4a3cf4: 0x2404ffd0  addiu       $a0, $zero, -0x30
    ctx->pc = 0x4a3cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967248));
label_4a3cf8:
    // 0x4a3cf8: 0x26170580  addiu       $s7, $s0, 0x580
    ctx->pc = 0x4a3cf8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 1408));
label_4a3cfc:
    // 0x4a3cfc: 0x7fa200b0  sq          $v0, 0xB0($sp)
    ctx->pc = 0x4a3cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
label_4a3d00:
    // 0x4a3d00: 0x2a0a02d  daddu       $s4, $s5, $zero
    ctx->pc = 0x4a3d00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a3d04:
    // 0x4a3d04: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x4a3d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a3d08:
    // 0x4a3d08: 0xa42024  and         $a0, $a1, $a0
    ctx->pc = 0x4a3d08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
label_4a3d0c:
    // 0x4a3d0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x4a3d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_4a3d10:
    // 0x4a3d10: 0xae040db8  sw          $a0, 0xDB8($s0)
    ctx->pc = 0x4a3d10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 4));
label_4a3d14:
    // 0x4a3d14: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x4a3d14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a3d18:
    // 0x4a3d18: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4a3d18u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3d1c:
    // 0x4a3d1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a3d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a3d20:
    // 0x4a3d20: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4a3d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4a3d24:
    // 0x4a3d24: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x4a3d24u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a3d28:
    // 0x4a3d28: 0x34820008  ori         $v0, $a0, 0x8
    ctx->pc = 0x4a3d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8);
label_4a3d2c:
    // 0x4a3d2c: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x4a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_4a3d30:
    // 0x4a3d30: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a3d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a3d34:
    // 0x4a3d34: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4a3d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3d38:
    // 0x4a3d38: 0x8c630d6c  lw          $v1, 0xD6C($v1)
    ctx->pc = 0x4a3d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3436)));
label_4a3d3c:
    // 0x4a3d3c: 0x90760010  lbu         $s6, 0x10($v1)
    ctx->pc = 0x4a3d3cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_4a3d40:
    // 0x4a3d40: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a3d44:
    if (ctx->pc == 0x4A3D44u) {
        ctx->pc = 0x4A3D44u;
            // 0x4a3d44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D48u;
        goto label_4a3d48;
    }
    ctx->pc = 0x4A3D40u;
    {
        const bool branch_taken_0x4a3d40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3D40u;
            // 0x4a3d44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d40) {
            ctx->pc = 0x4A3D58u;
            goto label_4a3d58;
        }
    }
    ctx->pc = 0x4A3D48u;
label_4a3d48:
    // 0x4a3d48: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a3d48u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3d4c:
    // 0x4a3d4c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3d50:
    if (ctx->pc == 0x4A3D50u) {
        ctx->pc = 0x4A3D54u;
        goto label_4a3d54;
    }
    ctx->pc = 0x4A3D4Cu;
    {
        const bool branch_taken_0x4a3d4c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3d4c) {
            ctx->pc = 0x4A3D58u;
            goto label_4a3d58;
        }
    }
    ctx->pc = 0x4A3D54u;
label_4a3d54:
    // 0x4a3d54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4a3d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a3d58:
    // 0x4a3d58: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_4a3d5c:
    if (ctx->pc == 0x4A3D5Cu) {
        ctx->pc = 0x4A3D60u;
        goto label_4a3d60;
    }
    ctx->pc = 0x4A3D58u;
    {
        const bool branch_taken_0x4a3d58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3d58) {
            ctx->pc = 0x4A3D74u;
            goto label_4a3d74;
        }
    }
    ctx->pc = 0x4A3D60u;
label_4a3d60:
    // 0x4a3d60: 0xc075eb4  jal         func_1D7AD0
label_4a3d64:
    if (ctx->pc == 0x4A3D64u) {
        ctx->pc = 0x4A3D64u;
            // 0x4a3d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3D68u;
        goto label_4a3d68;
    }
    ctx->pc = 0x4A3D60u;
    SET_GPR_U32(ctx, 31, 0x4A3D68u);
    ctx->pc = 0x4A3D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3D60u;
            // 0x4a3d64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3D68u; }
        if (ctx->pc != 0x4A3D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3D68u; }
        if (ctx->pc != 0x4A3D68u) { return; }
    }
    ctx->pc = 0x4A3D68u;
label_4a3d68:
    // 0x4a3d68: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3d6c:
    if (ctx->pc == 0x4A3D6Cu) {
        ctx->pc = 0x4A3D70u;
        goto label_4a3d70;
    }
    ctx->pc = 0x4A3D68u;
    {
        const bool branch_taken_0x4a3d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3d68) {
            ctx->pc = 0x4A3D74u;
            goto label_4a3d74;
        }
    }
    ctx->pc = 0x4A3D70u;
label_4a3d70:
    // 0x4a3d70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a3d70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3d74:
    // 0x4a3d74: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
label_4a3d78:
    if (ctx->pc == 0x4A3D78u) {
        ctx->pc = 0x4A3D78u;
            // 0x4a3d78: 0x821511aa  lb          $s5, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x4A3D7Cu;
        goto label_4a3d7c;
    }
    ctx->pc = 0x4A3D74u;
    {
        const bool branch_taken_0x4a3d74 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3d74) {
            ctx->pc = 0x4A3D78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3D74u;
            // 0x4a3d78: 0x821511aa  lb          $s5, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3D90u;
            goto label_4a3d90;
        }
    }
    ctx->pc = 0x4A3D7Cu;
label_4a3d7c:
    // 0x4a3d7c: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a3d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3d80:
    // 0x4a3d80: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3d84:
    // 0x4a3d84: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_4a3d88:
    if (ctx->pc == 0x4A3D88u) {
        ctx->pc = 0x4A3D88u;
            // 0x4a3d88: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4A3D8Cu;
        goto label_4a3d8c;
    }
    ctx->pc = 0x4A3D84u;
    {
        const bool branch_taken_0x4a3d84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a3d84) {
            ctx->pc = 0x4A3D88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3D84u;
            // 0x4a3d88: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3D94u;
            goto label_4a3d94;
        }
    }
    ctx->pc = 0x4A3D8Cu;
label_4a3d8c:
    // 0x4a3d8c: 0x821511aa  lb          $s5, 0x11AA($s0)
    ctx->pc = 0x4a3d8cu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4a3d90:
    // 0x4a3d90: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x4a3d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a3d94:
    // 0x4a3d94: 0x64110001  daddiu      $s1, $zero, 0x1
    ctx->pc = 0x4a3d94u;
    SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3d98:
    // 0x4a3d98: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x4a3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4a3d9c:
    // 0x4a3d9c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a3da0:
    if (ctx->pc == 0x4A3DA0u) {
        ctx->pc = 0x4A3DA0u;
            // 0x4a3da0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3DA4u;
        goto label_4a3da4;
    }
    ctx->pc = 0x4A3D9Cu;
    {
        const bool branch_taken_0x4a3d9c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3D9Cu;
            // 0x4a3da0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3d9c) {
            ctx->pc = 0x4A3DB4u;
            goto label_4a3db4;
        }
    }
    ctx->pc = 0x4A3DA4u;
label_4a3da4:
    // 0x4a3da4: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a3da4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3da8:
    // 0x4a3da8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3dac:
    if (ctx->pc == 0x4A3DACu) {
        ctx->pc = 0x4A3DB0u;
        goto label_4a3db0;
    }
    ctx->pc = 0x4A3DA8u;
    {
        const bool branch_taken_0x4a3da8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3da8) {
            ctx->pc = 0x4A3DB4u;
            goto label_4a3db4;
        }
    }
    ctx->pc = 0x4A3DB0u;
label_4a3db0:
    // 0x4a3db0: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x4a3db0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a3db4:
    // 0x4a3db4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a3db8:
    if (ctx->pc == 0x4A3DB8u) {
        ctx->pc = 0x4A3DBCu;
        goto label_4a3dbc;
    }
    ctx->pc = 0x4A3DB4u;
    {
        const bool branch_taken_0x4a3db4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3db4) {
            ctx->pc = 0x4A3DD0u;
            goto label_4a3dd0;
        }
    }
    ctx->pc = 0x4A3DBCu;
label_4a3dbc:
    // 0x4a3dbc: 0xc075eb4  jal         func_1D7AD0
label_4a3dc0:
    if (ctx->pc == 0x4A3DC0u) {
        ctx->pc = 0x4A3DC4u;
        goto label_4a3dc4;
    }
    ctx->pc = 0x4A3DBCu;
    SET_GPR_U32(ctx, 31, 0x4A3DC4u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3DC4u; }
        if (ctx->pc != 0x4A3DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3DC4u; }
        if (ctx->pc != 0x4A3DC4u) { return; }
    }
    ctx->pc = 0x4A3DC4u;
label_4a3dc4:
    // 0x4a3dc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3dc8:
    if (ctx->pc == 0x4A3DC8u) {
        ctx->pc = 0x4A3DCCu;
        goto label_4a3dcc;
    }
    ctx->pc = 0x4A3DC4u;
    {
        const bool branch_taken_0x4a3dc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3dc4) {
            ctx->pc = 0x4A3DD0u;
            goto label_4a3dd0;
        }
    }
    ctx->pc = 0x4A3DCCu;
label_4a3dcc:
    // 0x4a3dcc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x4a3dccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3dd0:
    // 0x4a3dd0: 0x56200007  bnel        $s1, $zero, . + 4 + (0x7 << 2)
label_4a3dd4:
    if (ctx->pc == 0x4A3DD4u) {
        ctx->pc = 0x4A3DD4u;
            // 0x4a3dd4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4A3DD8u;
        goto label_4a3dd8;
    }
    ctx->pc = 0x4A3DD0u;
    {
        const bool branch_taken_0x4a3dd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3dd0) {
            ctx->pc = 0x4A3DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3DD0u;
            // 0x4a3dd4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3DF0u;
            goto label_4a3df0;
        }
    }
    ctx->pc = 0x4A3DD8u;
label_4a3dd8:
    // 0x4a3dd8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4a3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a3ddc:
    // 0x4a3ddc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a3ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3de0:
    // 0x4a3de0: 0x8c630e34  lw          $v1, 0xE34($v1)
    ctx->pc = 0x4a3de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3636)));
label_4a3de4:
    // 0x4a3de4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_4a3de8:
    if (ctx->pc == 0x4A3DE8u) {
        ctx->pc = 0x4A3DE8u;
            // 0x4a3de8: 0x32d100ff  andi        $s1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A3DECu;
        goto label_4a3dec;
    }
    ctx->pc = 0x4A3DE4u;
    {
        const bool branch_taken_0x4a3de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a3de4) {
            ctx->pc = 0x4A3DE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3DE4u;
            // 0x4a3de8: 0x32d100ff  andi        $s1, $s6, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3DF8u;
            goto label_4a3df8;
        }
    }
    ctx->pc = 0x4A3DECu;
label_4a3dec:
    // 0x4a3dec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x4a3decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a3df0:
    // 0x4a3df0: 0x805411aa  lb          $s4, 0x11AA($v0)
    ctx->pc = 0x4a3df0u;
    SET_GPR_S32(ctx, 20, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4522)));
label_4a3df4:
    // 0x4a3df4: 0x32d100ff  andi        $s1, $s6, 0xFF
    ctx->pc = 0x4a3df4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_4a3df8:
    // 0x4a3df8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x4a3df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a3dfc:
    // 0x4a3dfc: 0x5222016b  beql        $s1, $v0, . + 4 + (0x16B << 2)
label_4a3e00:
    if (ctx->pc == 0x4A3E00u) {
        ctx->pc = 0x4A3E00u;
            // 0x4a3e00: 0x15163c  dsll32      $v0, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
        ctx->pc = 0x4A3E04u;
        goto label_4a3e04;
    }
    ctx->pc = 0x4A3DFCu;
    {
        const bool branch_taken_0x4a3dfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3dfc) {
            ctx->pc = 0x4A3E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3DFCu;
            // 0x4a3e00: 0x15163c  dsll32      $v0, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A43ACu;
            goto label_4a43ac;
        }
    }
    ctx->pc = 0x4A3E04u;
label_4a3e04:
    // 0x4a3e04: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x4a3e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_4a3e08:
    // 0x4a3e08: 0x52220146  beql        $s1, $v0, . + 4 + (0x146 << 2)
label_4a3e0c:
    if (ctx->pc == 0x4A3E0Cu) {
        ctx->pc = 0x4A3E0Cu;
            // 0x4a3e0c: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x4A3E10u;
        goto label_4a3e10;
    }
    ctx->pc = 0x4A3E08u;
    {
        const bool branch_taken_0x4a3e08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e08) {
            ctx->pc = 0x4A3E0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E08u;
            // 0x4a3e0c: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4324u;
            goto label_4a4324;
        }
    }
    ctx->pc = 0x4A3E10u;
label_4a3e10:
    // 0x4a3e10: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x4a3e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4a3e14:
    // 0x4a3e14: 0x52220121  beql        $s1, $v0, . + 4 + (0x121 << 2)
label_4a3e18:
    if (ctx->pc == 0x4A3E18u) {
        ctx->pc = 0x4A3E18u;
            // 0x4a3e18: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x4A3E1Cu;
        goto label_4a3e1c;
    }
    ctx->pc = 0x4A3E14u;
    {
        const bool branch_taken_0x4a3e14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e14) {
            ctx->pc = 0x4A3E18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E14u;
            // 0x4a3e18: 0x8e030e34  lw          $v1, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A429Cu;
            goto label_4a429c;
        }
    }
    ctx->pc = 0x4A3E1Cu;
label_4a3e1c:
    // 0x4a3e1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x4a3e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a3e20:
    // 0x4a3e20: 0x52260105  beql        $s1, $a2, . + 4 + (0x105 << 2)
label_4a3e24:
    if (ctx->pc == 0x4A3E24u) {
        ctx->pc = 0x4A3E24u;
            // 0x4a3e24: 0x8263010c  lb          $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A3E28u;
        goto label_4a3e28;
    }
    ctx->pc = 0x4A3E20u;
    {
        const bool branch_taken_0x4a3e20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 6));
        if (branch_taken_0x4a3e20) {
            ctx->pc = 0x4A3E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E20u;
            // 0x4a3e24: 0x8263010c  lb          $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4238u;
            goto label_4a4238;
        }
    }
    ctx->pc = 0x4A3E28u;
label_4a3e28:
    // 0x4a3e28: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x4a3e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_4a3e2c:
    // 0x4a3e2c: 0x52220096  beql        $s1, $v0, . + 4 + (0x96 << 2)
label_4a3e30:
    if (ctx->pc == 0x4A3E30u) {
        ctx->pc = 0x4A3E30u;
            // 0x4a3e30: 0x15163c  dsll32      $v0, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
        ctx->pc = 0x4A3E34u;
        goto label_4a3e34;
    }
    ctx->pc = 0x4A3E2Cu;
    {
        const bool branch_taken_0x4a3e2c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e2c) {
            ctx->pc = 0x4A3E30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E2Cu;
            // 0x4a3e30: 0x15163c  dsll32      $v0, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4088u;
            goto label_4a4088;
        }
    }
    ctx->pc = 0x4A3E34u;
label_4a3e34:
    // 0x4a3e34: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4a3e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a3e38:
    // 0x4a3e38: 0x12270092  beq         $s1, $a3, . + 4 + (0x92 << 2)
label_4a3e3c:
    if (ctx->pc == 0x4A3E3Cu) {
        ctx->pc = 0x4A3E40u;
        goto label_4a3e40;
    }
    ctx->pc = 0x4A3E38u;
    {
        const bool branch_taken_0x4a3e38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a3e38) {
            ctx->pc = 0x4A4084u;
            goto label_4a4084;
        }
    }
    ctx->pc = 0x4A3E40u;
label_4a3e40:
    // 0x4a3e40: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x4a3e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_4a3e44:
    // 0x4a3e44: 0x1222008f  beq         $s1, $v0, . + 4 + (0x8F << 2)
label_4a3e48:
    if (ctx->pc == 0x4A3E48u) {
        ctx->pc = 0x4A3E4Cu;
        goto label_4a3e4c;
    }
    ctx->pc = 0x4A3E44u;
    {
        const bool branch_taken_0x4a3e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e44) {
            ctx->pc = 0x4A4084u;
            goto label_4a4084;
        }
    }
    ctx->pc = 0x4A3E4Cu;
label_4a3e4c:
    // 0x4a3e4c: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x4a3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4a3e50:
    // 0x4a3e50: 0x52220009  beql        $s1, $v0, . + 4 + (0x9 << 2)
label_4a3e54:
    if (ctx->pc == 0x4A3E54u) {
        ctx->pc = 0x4A3E54u;
            // 0x4a3e54: 0x15b63c  dsll32      $s6, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 24));
        ctx->pc = 0x4A3E58u;
        goto label_4a3e58;
    }
    ctx->pc = 0x4A3E50u;
    {
        const bool branch_taken_0x4a3e50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e50) {
            ctx->pc = 0x4A3E54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E50u;
            // 0x4a3e54: 0x15b63c  dsll32      $s6, $s5, 24 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3E78u;
            goto label_4a3e78;
        }
    }
    ctx->pc = 0x4A3E58u;
label_4a3e58:
    // 0x4a3e58: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a3e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a3e5c:
    // 0x4a3e5c: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
label_4a3e60:
    if (ctx->pc == 0x4A3E60u) {
        ctx->pc = 0x4A3E64u;
        goto label_4a3e64;
    }
    ctx->pc = 0x4A3E5Cu;
    {
        const bool branch_taken_0x4a3e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a3e5c) {
            ctx->pc = 0x4A3E74u;
            goto label_4a3e74;
        }
    }
    ctx->pc = 0x4A3E64u;
label_4a3e64:
    // 0x4a3e64: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4a3e68:
    if (ctx->pc == 0x4A3E68u) {
        ctx->pc = 0x4A3E6Cu;
        goto label_4a3e6c;
    }
    ctx->pc = 0x4A3E64u;
    {
        const bool branch_taken_0x4a3e64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3e64) {
            ctx->pc = 0x4A3E74u;
            goto label_4a3e74;
        }
    }
    ctx->pc = 0x4A3E6Cu;
label_4a3e6c:
    // 0x4a3e6c: 0x10000183  b           . + 4 + (0x183 << 2)
label_4a3e70:
    if (ctx->pc == 0x4A3E70u) {
        ctx->pc = 0x4A3E70u;
            // 0x4a3e70: 0x8263010c  lb          $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A3E74u;
        goto label_4a3e74;
    }
    ctx->pc = 0x4A3E6Cu;
    {
        const bool branch_taken_0x4a3e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3E70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E6Cu;
            // 0x4a3e70: 0x8263010c  lb          $v1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3e6c) {
            ctx->pc = 0x4A447Cu;
            goto label_4a447c;
        }
    }
    ctx->pc = 0x4A3E74u;
label_4a3e74:
    // 0x4a3e74: 0x15b63c  dsll32      $s6, $s5, 24
    ctx->pc = 0x4a3e74u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 21) << (32 + 24));
label_4a3e78:
    // 0x4a3e78: 0x16b63f  dsra32      $s6, $s6, 24
    ctx->pc = 0x4a3e78u;
    SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 24));
label_4a3e7c:
    // 0x4a3e7c: 0x6c20012  bltzl       $s6, . + 4 + (0x12 << 2)
label_4a3e80:
    if (ctx->pc == 0x4A3E80u) {
        ctx->pc = 0x4A3E80u;
            // 0x4a3e80: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->pc = 0x4A3E84u;
        goto label_4a3e84;
    }
    ctx->pc = 0x4A3E7Cu;
    {
        const bool branch_taken_0x4a3e7c = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x4a3e7c) {
            ctx->pc = 0x4A3E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E7Cu;
            // 0x4a3e80: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3EC8u;
            goto label_4a3ec8;
        }
    }
    ctx->pc = 0x4A3E84u;
label_4a3e84:
    // 0x4a3e84: 0xc040180  jal         func_100600
label_4a3e88:
    if (ctx->pc == 0x4A3E88u) {
        ctx->pc = 0x4A3E88u;
            // 0x4a3e88: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A3E8Cu;
        goto label_4a3e8c;
    }
    ctx->pc = 0x4A3E84u;
    SET_GPR_U32(ctx, 31, 0x4A3E8Cu);
    ctx->pc = 0x4A3E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3E84u;
            // 0x4a3e88: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3E8Cu; }
        if (ctx->pc != 0x4A3E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3E8Cu; }
        if (ctx->pc != 0x4A3E8Cu) { return; }
    }
    ctx->pc = 0x4A3E8Cu;
label_4a3e8c:
    // 0x4a3e8c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_4a3e90:
    if (ctx->pc == 0x4A3E90u) {
        ctx->pc = 0x4A3E94u;
        goto label_4a3e94;
    }
    ctx->pc = 0x4A3E8Cu;
    {
        const bool branch_taken_0x4a3e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3e8c) {
            ctx->pc = 0x4A3EC4u;
            goto label_4a3ec4;
        }
    }
    ctx->pc = 0x4A3E94u;
label_4a3e94:
    // 0x4a3e94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a3e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3e98:
    // 0x4a3e98: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a3e98u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a3e9c:
    // 0x4a3e9c: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a3e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a3ea0:
    // 0x4a3ea0: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a3ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a3ea4:
    // 0x4a3ea4: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x4a3ea4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a3ea8:
    // 0x4a3ea8: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a3ea8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a3eac:
    // 0x4a3eac: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a3eacu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a3eb0:
    // 0x4a3eb0: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a3eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3eb4:
    // 0x4a3eb4: 0x24e7f590  addiu       $a3, $a3, -0xA70
    ctx->pc = 0x4a3eb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964624));
label_4a3eb8:
    // 0x4a3eb8: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a3eb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a3ebc:
    // 0x4a3ebc: 0xc0b9404  jal         func_2E5010
label_4a3ec0:
    if (ctx->pc == 0x4A3EC0u) {
        ctx->pc = 0x4A3EC0u;
            // 0x4a3ec0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A3EC4u;
        goto label_4a3ec4;
    }
    ctx->pc = 0x4A3EBCu;
    SET_GPR_U32(ctx, 31, 0x4A3EC4u);
    ctx->pc = 0x4A3EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3EBCu;
            // 0x4a3ec0: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3EC4u; }
        if (ctx->pc != 0x4A3EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3EC4u; }
        if (ctx->pc != 0x4A3EC4u) { return; }
    }
    ctx->pc = 0x4A3EC4u;
label_4a3ec4:
    // 0x4a3ec4: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x4a3ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_4a3ec8:
    // 0x4a3ec8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a3ec8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a3ecc:
    // 0x4a3ecc: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_4a3ed0:
    if (ctx->pc == 0x4A3ED0u) {
        ctx->pc = 0x4A3ED0u;
            // 0x4a3ed0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->pc = 0x4A3ED4u;
        goto label_4a3ed4;
    }
    ctx->pc = 0x4A3ECCu;
    {
        const bool branch_taken_0x4a3ecc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3ECCu;
            // 0x4a3ed0: 0x7fa200a0  sq          $v0, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3ecc) {
            ctx->pc = 0x4A3F18u;
            goto label_4a3f18;
        }
    }
    ctx->pc = 0x4A3ED4u;
label_4a3ed4:
    // 0x4a3ed4: 0xc040180  jal         func_100600
label_4a3ed8:
    if (ctx->pc == 0x4A3ED8u) {
        ctx->pc = 0x4A3ED8u;
            // 0x4a3ed8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A3EDCu;
        goto label_4a3edc;
    }
    ctx->pc = 0x4A3ED4u;
    SET_GPR_U32(ctx, 31, 0x4A3EDCu);
    ctx->pc = 0x4A3ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3ED4u;
            // 0x4a3ed8: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3EDCu; }
        if (ctx->pc != 0x4A3EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3EDCu; }
        if (ctx->pc != 0x4A3EDCu) { return; }
    }
    ctx->pc = 0x4A3EDCu;
label_4a3edc:
    // 0x4a3edc: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4a3ee0:
    if (ctx->pc == 0x4A3EE0u) {
        ctx->pc = 0x4A3EE0u;
            // 0x4a3ee0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x4A3EE4u;
        goto label_4a3ee4;
    }
    ctx->pc = 0x4A3EDCu;
    {
        const bool branch_taken_0x4a3edc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3edc) {
            ctx->pc = 0x4A3EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3EDCu;
            // 0x4a3ee0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3F1Cu;
            goto label_4a3f1c;
        }
    }
    ctx->pc = 0x4A3EE4u;
label_4a3ee4:
    // 0x4a3ee4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a3ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a3ee8:
    // 0x4a3ee8: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a3ee8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a3eec:
    // 0x4a3eec: 0x144e3c  dsll32      $t1, $s4, 24
    ctx->pc = 0x4a3eecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 24));
label_4a3ef0:
    // 0x4a3ef0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a3ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a3ef4:
    // 0x4a3ef4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a3ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a3ef8:
    // 0x4a3ef8: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a3ef8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a3efc:
    // 0x4a3efc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a3efcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a3f00:
    // 0x4a3f00: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a3f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a3f04:
    // 0x4a3f04: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a3f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a3f08:
    // 0x4a3f08: 0x24e7f590  addiu       $a3, $a3, -0xA70
    ctx->pc = 0x4a3f08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964624));
label_4a3f0c:
    // 0x4a3f0c: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a3f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a3f10:
    // 0x4a3f10: 0xc0b9404  jal         func_2E5010
label_4a3f14:
    if (ctx->pc == 0x4A3F14u) {
        ctx->pc = 0x4A3F14u;
            // 0x4a3f14: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x4A3F18u;
        goto label_4a3f18;
    }
    ctx->pc = 0x4A3F10u;
    SET_GPR_U32(ctx, 31, 0x4A3F18u);
    ctx->pc = 0x4A3F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F10u;
            // 0x4a3f14: 0x240b0002  addiu       $t3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F18u; }
        if (ctx->pc != 0x4A3F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F18u; }
        if (ctx->pc != 0x4A3F18u) { return; }
    }
    ctx->pc = 0x4A3F18u;
label_4a3f18:
    // 0x4a3f18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4a3f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_4a3f1c:
    // 0x4a3f1c: 0x56220019  bnel        $s1, $v0, . + 4 + (0x19 << 2)
label_4a3f20:
    if (ctx->pc == 0x4A3F20u) {
        ctx->pc = 0x4A3F20u;
            // 0x4a3f20: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->pc = 0x4A3F24u;
        goto label_4a3f24;
    }
    ctx->pc = 0x4A3F1Cu;
    {
        const bool branch_taken_0x4a3f1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a3f1c) {
            ctx->pc = 0x4A3F20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F1Cu;
            // 0x4a3f20: 0x8e020e34  lw          $v0, 0xE34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3F84u;
            goto label_4a3f84;
        }
    }
    ctx->pc = 0x4A3F24u;
label_4a3f24:
    // 0x4a3f24: 0x6c2000b  bltzl       $s6, . + 4 + (0xB << 2)
label_4a3f28:
    if (ctx->pc == 0x4A3F28u) {
        ctx->pc = 0x4A3F28u;
            // 0x4a3f28: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x4A3F2Cu;
        goto label_4a3f2c;
    }
    ctx->pc = 0x4A3F24u;
    {
        const bool branch_taken_0x4a3f24 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x4a3f24) {
            ctx->pc = 0x4A3F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F24u;
            // 0x4a3f28: 0x7ba200a0  lq          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A3F54u;
            goto label_4a3f54;
        }
    }
    ctx->pc = 0x4A3F2Cu;
label_4a3f2c:
    // 0x4a3f2c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a3f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a3f30:
    // 0x4a3f30: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x4a3f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a3f34:
    // 0x4a3f34: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4a3f34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4a3f38:
    // 0x4a3f38: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4a3f38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4a3f3c:
    // 0x4a3f3c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x4a3f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4a3f40:
    // 0x4a3f40: 0x26070ec0  addiu       $a3, $s0, 0xEC0
    ctx->pc = 0x4a3f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_4a3f44:
    // 0x4a3f44: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a3f44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3f48:
    // 0x4a3f48: 0xc0bb0e8  jal         func_2EC3A0
label_4a3f4c:
    if (ctx->pc == 0x4A3F4Cu) {
        ctx->pc = 0x4A3F4Cu;
            // 0x4a3f4c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A3F50u;
        goto label_4a3f50;
    }
    ctx->pc = 0x4A3F48u;
    SET_GPR_U32(ctx, 31, 0x4A3F50u);
    ctx->pc = 0x4A3F4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F48u;
            // 0x4a3f4c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F50u; }
        if (ctx->pc != 0x4A3F50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F50u; }
        if (ctx->pc != 0x4A3F50u) { return; }
    }
    ctx->pc = 0x4A3F50u;
label_4a3f50:
    // 0x4a3f50: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x4a3f50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_4a3f54:
    // 0x4a3f54: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_4a3f58:
    if (ctx->pc == 0x4A3F58u) {
        ctx->pc = 0x4A3F5Cu;
        goto label_4a3f5c;
    }
    ctx->pc = 0x4A3F54u;
    {
        const bool branch_taken_0x4a3f54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a3f54) {
            ctx->pc = 0x4A3F80u;
            goto label_4a3f80;
        }
    }
    ctx->pc = 0x4A3F5Cu;
label_4a3f5c:
    // 0x4a3f5c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a3f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a3f60:
    // 0x4a3f60: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x4a3f60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4a3f64:
    // 0x4a3f64: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4a3f64u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4a3f68:
    // 0x4a3f68: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x4a3f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_4a3f6c:
    // 0x4a3f6c: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x4a3f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4a3f70:
    // 0x4a3f70: 0x26070ec0  addiu       $a3, $s0, 0xEC0
    ctx->pc = 0x4a3f70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_4a3f74:
    // 0x4a3f74: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a3f74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3f78:
    // 0x4a3f78: 0xc0bb0e8  jal         func_2EC3A0
label_4a3f7c:
    if (ctx->pc == 0x4A3F7Cu) {
        ctx->pc = 0x4A3F7Cu;
            // 0x4a3f7c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A3F80u;
        goto label_4a3f80;
    }
    ctx->pc = 0x4A3F78u;
    SET_GPR_U32(ctx, 31, 0x4A3F80u);
    ctx->pc = 0x4A3F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F78u;
            // 0x4a3f7c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F80u; }
        if (ctx->pc != 0x4A3F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3F80u; }
        if (ctx->pc != 0x4A3F80u) { return; }
    }
    ctx->pc = 0x4A3F80u;
label_4a3f80:
    // 0x4a3f80: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4a3f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a3f84:
    // 0x4a3f84: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4a3f84u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3f88:
    // 0x4a3f88: 0x8e550000  lw          $s5, 0x0($s2)
    ctx->pc = 0x4a3f88u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a3f8c:
    // 0x4a3f8c: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a3f90:
    if (ctx->pc == 0x4A3F90u) {
        ctx->pc = 0x4A3F90u;
            // 0x4a3f90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3F94u;
        goto label_4a3f94;
    }
    ctx->pc = 0x4A3F8Cu;
    {
        const bool branch_taken_0x4a3f8c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3F8Cu;
            // 0x4a3f90: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3f8c) {
            ctx->pc = 0x4A3FA4u;
            goto label_4a3fa4;
        }
    }
    ctx->pc = 0x4A3F94u;
label_4a3f94:
    // 0x4a3f94: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a3f94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3f98:
    // 0x4a3f98: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3f9c:
    if (ctx->pc == 0x4A3F9Cu) {
        ctx->pc = 0x4A3FA0u;
        goto label_4a3fa0;
    }
    ctx->pc = 0x4A3F98u;
    {
        const bool branch_taken_0x4a3f98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3f98) {
            ctx->pc = 0x4A3FA4u;
            goto label_4a3fa4;
        }
    }
    ctx->pc = 0x4A3FA0u;
label_4a3fa0:
    // 0x4a3fa0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4a3fa0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a3fa4:
    // 0x4a3fa4: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a3fa8:
    if (ctx->pc == 0x4A3FA8u) {
        ctx->pc = 0x4A3FACu;
        goto label_4a3fac;
    }
    ctx->pc = 0x4A3FA4u;
    {
        const bool branch_taken_0x4a3fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fa4) {
            ctx->pc = 0x4A3FC0u;
            goto label_4a3fc0;
        }
    }
    ctx->pc = 0x4A3FACu;
label_4a3fac:
    // 0x4a3fac: 0xc075eb4  jal         func_1D7AD0
label_4a3fb0:
    if (ctx->pc == 0x4A3FB0u) {
        ctx->pc = 0x4A3FB0u;
            // 0x4a3fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3FB4u;
        goto label_4a3fb4;
    }
    ctx->pc = 0x4A3FACu;
    SET_GPR_U32(ctx, 31, 0x4A3FB4u);
    ctx->pc = 0x4A3FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3FACu;
            // 0x4a3fb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3FB4u; }
        if (ctx->pc != 0x4A3FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3FB4u; }
        if (ctx->pc != 0x4A3FB4u) { return; }
    }
    ctx->pc = 0x4A3FB4u;
label_4a3fb4:
    // 0x4a3fb4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3fb8:
    if (ctx->pc == 0x4A3FB8u) {
        ctx->pc = 0x4A3FBCu;
        goto label_4a3fbc;
    }
    ctx->pc = 0x4A3FB4u;
    {
        const bool branch_taken_0x4a3fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fb4) {
            ctx->pc = 0x4A3FC0u;
            goto label_4a3fc0;
        }
    }
    ctx->pc = 0x4A3FBCu;
label_4a3fbc:
    // 0x4a3fbc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a3fbcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a3fc0:
    // 0x4a3fc0: 0x56800013  bnel        $s4, $zero, . + 4 + (0x13 << 2)
label_4a3fc4:
    if (ctx->pc == 0x4A3FC4u) {
        ctx->pc = 0x4A3FC4u;
            // 0x4a3fc4: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->pc = 0x4A3FC8u;
        goto label_4a3fc8;
    }
    ctx->pc = 0x4A3FC0u;
    {
        const bool branch_taken_0x4a3fc0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fc0) {
            ctx->pc = 0x4A3FC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3FC0u;
            // 0x4a3fc4: 0x3c020006  lui         $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4010u;
            goto label_4a4010;
        }
    }
    ctx->pc = 0x4A3FC8u;
label_4a3fc8:
    // 0x4a3fc8: 0x8ea20e34  lw          $v0, 0xE34($s5)
    ctx->pc = 0x4a3fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3636)));
label_4a3fcc:
    // 0x4a3fcc: 0x64140001  daddiu      $s4, $zero, 0x1
    ctx->pc = 0x4a3fccu;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a3fd0:
    // 0x4a3fd0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a3fd4:
    if (ctx->pc == 0x4A3FD4u) {
        ctx->pc = 0x4A3FD4u;
            // 0x4a3fd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3FD8u;
        goto label_4a3fd8;
    }
    ctx->pc = 0x4A3FD0u;
    {
        const bool branch_taken_0x4a3fd0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3FD0u;
            // 0x4a3fd4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3fd0) {
            ctx->pc = 0x4A3FE8u;
            goto label_4a3fe8;
        }
    }
    ctx->pc = 0x4A3FD8u;
label_4a3fd8:
    // 0x4a3fd8: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a3fd8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a3fdc:
    // 0x4a3fdc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a3fe0:
    if (ctx->pc == 0x4A3FE0u) {
        ctx->pc = 0x4A3FE4u;
        goto label_4a3fe4;
    }
    ctx->pc = 0x4A3FDCu;
    {
        const bool branch_taken_0x4a3fdc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fdc) {
            ctx->pc = 0x4A3FE8u;
            goto label_4a3fe8;
        }
    }
    ctx->pc = 0x4A3FE4u;
label_4a3fe4:
    // 0x4a3fe4: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4a3fe4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a3fe8:
    // 0x4a3fe8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a3fec:
    if (ctx->pc == 0x4A3FECu) {
        ctx->pc = 0x4A3FF0u;
        goto label_4a3ff0;
    }
    ctx->pc = 0x4A3FE8u;
    {
        const bool branch_taken_0x4a3fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3fe8) {
            ctx->pc = 0x4A4004u;
            goto label_4a4004;
        }
    }
    ctx->pc = 0x4A3FF0u;
label_4a3ff0:
    // 0x4a3ff0: 0xc075eb4  jal         func_1D7AD0
label_4a3ff4:
    if (ctx->pc == 0x4A3FF4u) {
        ctx->pc = 0x4A3FF4u;
            // 0x4a3ff4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A3FF8u;
        goto label_4a3ff8;
    }
    ctx->pc = 0x4A3FF0u;
    SET_GPR_U32(ctx, 31, 0x4A3FF8u);
    ctx->pc = 0x4A3FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A3FF0u;
            // 0x4a3ff4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3FF8u; }
        if (ctx->pc != 0x4A3FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A3FF8u; }
        if (ctx->pc != 0x4A3FF8u) { return; }
    }
    ctx->pc = 0x4A3FF8u;
label_4a3ff8:
    // 0x4a3ff8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a3ffc:
    if (ctx->pc == 0x4A3FFCu) {
        ctx->pc = 0x4A4000u;
        goto label_4a4000;
    }
    ctx->pc = 0x4A3FF8u;
    {
        const bool branch_taken_0x4a3ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a3ff8) {
            ctx->pc = 0x4A4004u;
            goto label_4a4004;
        }
    }
    ctx->pc = 0x4A4000u;
label_4a4000:
    // 0x4a4000: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4a4000u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4004:
    // 0x4a4004: 0x52800005  beql        $s4, $zero, . + 4 + (0x5 << 2)
label_4a4008:
    if (ctx->pc == 0x4A4008u) {
        ctx->pc = 0x4A4008u;
            // 0x4a4008: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A400Cu;
        goto label_4a400c;
    }
    ctx->pc = 0x4A4004u;
    {
        const bool branch_taken_0x4a4004 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4004) {
            ctx->pc = 0x4A4008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4004u;
            // 0x4a4008: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A401Cu;
            goto label_4a401c;
        }
    }
    ctx->pc = 0x4A400Cu;
label_4a400c:
    // 0x4a400c: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x4a400cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_4a4010:
    // 0x4a4010: 0xc073234  jal         func_1CC8D0
label_4a4014:
    if (ctx->pc == 0x4A4014u) {
        ctx->pc = 0x4A4014u;
            // 0x4a4014: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->pc = 0x4A4018u;
        goto label_4a4018;
    }
    ctx->pc = 0x4A4010u;
    SET_GPR_U32(ctx, 31, 0x4A4018u);
    ctx->pc = 0x4A4014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4010u;
            // 0x4a4014: 0x344401a9  ori         $a0, $v0, 0x1A9 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)425);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC8D0u;
    if (runtime->hasFunction(0x1CC8D0u)) {
        auto targetFn = runtime->lookupFunction(0x1CC8D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4018u; }
        if (ctx->pc != 0x4A4018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CC8D0_0x1cc8d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4018u; }
        if (ctx->pc != 0x4A4018u) { return; }
    }
    ctx->pc = 0x4A4018u;
label_4a4018:
    // 0x4a4018: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4018u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a401c:
    // 0x4a401c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a401cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4020:
    // 0x4a4020: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4024:
    // 0x4a4024: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a4024u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4028:
    // 0x4a4028: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4028u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a402c:
    // 0x4a402c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a402cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4030:
    // 0x4a4030: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a4034:
    // 0x4a4034: 0x24060033  addiu       $a2, $zero, 0x33
    ctx->pc = 0x4a4034u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_4a4038:
    // 0x4a4038: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a403c:
    // 0x4a403c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a403cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4040:
    // 0x4a4040: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4044:
    // 0x4a4044: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4048:
    // 0x4a4048: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a404c:
    // 0x4a404c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a404cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4050:
    // 0x4a4050: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4054:
    // 0x4a4054: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4054u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4058:
    // 0x4a4058: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a405c:
    // 0x4a405c: 0x320f809  jalr        $t9
label_4a4060:
    if (ctx->pc == 0x4A4060u) {
        ctx->pc = 0x4A4060u;
            // 0x4a4060: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4064u;
        goto label_4a4064;
    }
    ctx->pc = 0x4A405Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4064u);
        ctx->pc = 0x4A4060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A405Cu;
            // 0x4a4060: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4064u; }
            if (ctx->pc != 0x4A4064u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4064u;
label_4a4064:
    // 0x4a4064: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4068:
    // 0x4a4068: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4068u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a406c:
    // 0x4a406c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a406cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4070:
    // 0x4a4070: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4074:
    // 0x4a4074: 0x320f809  jalr        $t9
label_4a4078:
    if (ctx->pc == 0x4A4078u) {
        ctx->pc = 0x4A4078u;
            // 0x4a4078: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A407Cu;
        goto label_4a407c;
    }
    ctx->pc = 0x4A4074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A407Cu);
        ctx->pc = 0x4A4078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4074u;
            // 0x4a4078: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A407Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A407Cu; }
            if (ctx->pc != 0x4A407Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A407Cu;
label_4a407c:
    // 0x4a407c: 0x10000116  b           . + 4 + (0x116 << 2)
label_4a4080:
    if (ctx->pc == 0x4A4080u) {
        ctx->pc = 0x4A4080u;
            // 0x4a4080: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->pc = 0x4A4084u;
        goto label_4a4084;
    }
    ctx->pc = 0x4A407Cu;
    {
        const bool branch_taken_0x4a407c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A407Cu;
            // 0x4a4080: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a407c) {
            ctx->pc = 0x4A44D8u;
            goto label_4a44d8;
        }
    }
    ctx->pc = 0x4A4084u;
label_4a4084:
    // 0x4a4084: 0x15163c  dsll32      $v0, $s5, 24
    ctx->pc = 0x4a4084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 24));
label_4a4088:
    // 0x4a4088: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a4088u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a408c:
    // 0x4a408c: 0x4420027  bltzl       $v0, . + 4 + (0x27 << 2)
label_4a4090:
    if (ctx->pc == 0x4A4090u) {
        ctx->pc = 0x4A4090u;
            // 0x4a4090: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->pc = 0x4A4094u;
        goto label_4a4094;
    }
    ctx->pc = 0x4A408Cu;
    {
        const bool branch_taken_0x4a408c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a408c) {
            ctx->pc = 0x4A4090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A408Cu;
            // 0x4a4090: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A412Cu;
            goto label_4a412c;
        }
    }
    ctx->pc = 0x4A4094u;
label_4a4094:
    // 0x4a4094: 0xc040180  jal         func_100600
label_4a4098:
    if (ctx->pc == 0x4A4098u) {
        ctx->pc = 0x4A4098u;
            // 0x4a4098: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x4A409Cu;
        goto label_4a409c;
    }
    ctx->pc = 0x4A4094u;
    SET_GPR_U32(ctx, 31, 0x4A409Cu);
    ctx->pc = 0x4A4098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4094u;
            // 0x4a4098: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A409Cu; }
        if (ctx->pc != 0x4A409Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A409Cu; }
        if (ctx->pc != 0x4A409Cu) { return; }
    }
    ctx->pc = 0x4A409Cu;
label_4a409c:
    // 0x4a409c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4a40a0:
    if (ctx->pc == 0x4A40A0u) {
        ctx->pc = 0x4A40A0u;
            // 0x4a40a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A40A4u;
        goto label_4a40a4;
    }
    ctx->pc = 0x4A409Cu;
    {
        const bool branch_taken_0x4a409c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A40A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A409Cu;
            // 0x4a40a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a409c) {
            ctx->pc = 0x4A4128u;
            goto label_4a4128;
        }
    }
    ctx->pc = 0x4A40A4u;
label_4a40a4:
    // 0x4a40a4: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a40a4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a40a8:
    // 0x4a40a8: 0x154e3c  dsll32      $t1, $s5, 24
    ctx->pc = 0x4a40a8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 21) << (32 + 24));
label_4a40ac:
    // 0x4a40ac: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a40acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a40b0:
    // 0x4a40b0: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a40b0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a40b4:
    // 0x4a40b4: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a40b4u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a40b8:
    // 0x4a40b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x4a40b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a40bc:
    // 0x4a40bc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a40bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a40c0:
    // 0x4a40c0: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a40c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a40c4:
    // 0x4a40c4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a40c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a40c8:
    // 0x4a40c8: 0x24e7f5b8  addiu       $a3, $a3, -0xA48
    ctx->pc = 0x4a40c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964664));
label_4a40cc:
    // 0x4a40cc: 0x2408404b  addiu       $t0, $zero, 0x404B
    ctx->pc = 0x4a40ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16459));
label_4a40d0:
    // 0x4a40d0: 0xc0b9404  jal         func_2E5010
label_4a40d4:
    if (ctx->pc == 0x4A40D4u) {
        ctx->pc = 0x4A40D4u;
            // 0x4a40d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A40D8u;
        goto label_4a40d8;
    }
    ctx->pc = 0x4A40D0u;
    SET_GPR_U32(ctx, 31, 0x4A40D8u);
    ctx->pc = 0x4A40D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A40D0u;
            // 0x4a40d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A40D8u; }
        if (ctx->pc != 0x4A40D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A40D8u; }
        if (ctx->pc != 0x4A40D8u) { return; }
    }
    ctx->pc = 0x4A40D8u;
label_4a40d8:
    // 0x4a40d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a40dc:
    // 0x4a40dc: 0x26c400d0  addiu       $a0, $s6, 0xD0
    ctx->pc = 0x4a40dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 208));
label_4a40e0:
    // 0x4a40e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a40e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a40e4:
    // 0x4a40e4: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x4a40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
label_4a40e8:
    // 0x4a40e8: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x4a40e8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_4a40ec:
    // 0x4a40ec: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a40ecu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a40f0:
    // 0x4a40f0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a40f0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a40f4:
    // 0x4a40f4: 0xc04cbd8  jal         func_132F60
label_4a40f8:
    if (ctx->pc == 0x4A40F8u) {
        ctx->pc = 0x4A40F8u;
            // 0x4a40f8: 0xaec000e4  sw          $zero, 0xE4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4A40FCu;
        goto label_4a40fc;
    }
    ctx->pc = 0x4A40F4u;
    SET_GPR_U32(ctx, 31, 0x4A40FCu);
    ctx->pc = 0x4A40F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A40F4u;
            // 0x4a40f8: 0xaec000e4  sw          $zero, 0xE4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A40FCu; }
        if (ctx->pc != 0x4A40FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A40FCu; }
        if (ctx->pc != 0x4A40FCu) { return; }
    }
    ctx->pc = 0x4A40FCu;
label_4a40fc:
    // 0x4a40fc: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4a40fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4a4100:
    // 0x4a4100: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a4100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a4104:
    // 0x4a4104: 0xaec300e0  sw          $v1, 0xE0($s6)
    ctx->pc = 0x4a4104u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 224), GPR_U32(ctx, 3));
label_4a4108:
    // 0x4a4108: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4a4108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a410c:
    // 0x4a410c: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x4a410cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_4a4110:
    // 0x4a4110: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x4a4110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_4a4114:
    // 0x4a4114: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4a4114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a4118:
    // 0x4a4118: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4a4118u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4a411c:
    // 0x4a411c: 0x320f809  jalr        $t9
label_4a4120:
    if (ctx->pc == 0x4A4120u) {
        ctx->pc = 0x4A4120u;
            // 0x4a4120: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4124u;
        goto label_4a4124;
    }
    ctx->pc = 0x4A411Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4124u);
        ctx->pc = 0x4A4120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A411Cu;
            // 0x4a4120: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4124u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4124u; }
            if (ctx->pc != 0x4A4124u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4124u;
label_4a4124:
    // 0x4a4124: 0xaec200e4  sw          $v0, 0xE4($s6)
    ctx->pc = 0x4a4124u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 228), GPR_U32(ctx, 2));
label_4a4128:
    // 0x4a4128: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x4a4128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_4a412c:
    // 0x4a412c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a412cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a4130:
    // 0x4a4130: 0x4420027  bltzl       $v0, . + 4 + (0x27 << 2)
label_4a4134:
    if (ctx->pc == 0x4A4134u) {
        ctx->pc = 0x4A4134u;
            // 0x4a4134: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A4138u;
        goto label_4a4138;
    }
    ctx->pc = 0x4A4130u;
    {
        const bool branch_taken_0x4a4130 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a4130) {
            ctx->pc = 0x4A4134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4130u;
            // 0x4a4134: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A41D0u;
            goto label_4a41d0;
        }
    }
    ctx->pc = 0x4A4138u;
label_4a4138:
    // 0x4a4138: 0xc040180  jal         func_100600
label_4a413c:
    if (ctx->pc == 0x4A413Cu) {
        ctx->pc = 0x4A413Cu;
            // 0x4a413c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x4A4140u;
        goto label_4a4140;
    }
    ctx->pc = 0x4A4138u;
    SET_GPR_U32(ctx, 31, 0x4A4140u);
    ctx->pc = 0x4A413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4138u;
            // 0x4a413c: 0x240400f0  addiu       $a0, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4140u; }
        if (ctx->pc != 0x4A4140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4140u; }
        if (ctx->pc != 0x4A4140u) { return; }
    }
    ctx->pc = 0x4A4140u;
label_4a4140:
    // 0x4a4140: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_4a4144:
    if (ctx->pc == 0x4A4144u) {
        ctx->pc = 0x4A4144u;
            // 0x4a4144: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4148u;
        goto label_4a4148;
    }
    ctx->pc = 0x4A4140u;
    {
        const bool branch_taken_0x4a4140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4140u;
            // 0x4a4144: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4140) {
            ctx->pc = 0x4A41CCu;
            goto label_4a41cc;
        }
    }
    ctx->pc = 0x4A4148u;
label_4a4148:
    // 0x4a4148: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a4148u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a414c:
    // 0x4a414c: 0x144e3c  dsll32      $t1, $s4, 24
    ctx->pc = 0x4a414cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 20) << (32 + 24));
label_4a4150:
    // 0x4a4150: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a4150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a4154:
    // 0x4a4154: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a4154u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a4158:
    // 0x4a4158: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a4158u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a415c:
    // 0x4a415c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x4a415cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_4a4160:
    // 0x4a4160: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4160u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4164:
    // 0x4a4164: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a4164u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a4168:
    // 0x4a4168: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a4168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a416c:
    // 0x4a416c: 0x24e7f5b8  addiu       $a3, $a3, -0xA48
    ctx->pc = 0x4a416cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964664));
label_4a4170:
    // 0x4a4170: 0x2408404b  addiu       $t0, $zero, 0x404B
    ctx->pc = 0x4a4170u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16459));
label_4a4174:
    // 0x4a4174: 0xc0b9404  jal         func_2E5010
label_4a4178:
    if (ctx->pc == 0x4A4178u) {
        ctx->pc = 0x4A4178u;
            // 0x4a4178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A417Cu;
        goto label_4a417c;
    }
    ctx->pc = 0x4A4174u;
    SET_GPR_U32(ctx, 31, 0x4A417Cu);
    ctx->pc = 0x4A4178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4174u;
            // 0x4a4178: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A417Cu; }
        if (ctx->pc != 0x4A417Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A417Cu; }
        if (ctx->pc != 0x4A417Cu) { return; }
    }
    ctx->pc = 0x4A417Cu;
label_4a417c:
    // 0x4a417c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x4a417cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_4a4180:
    // 0x4a4180: 0x26a400d0  addiu       $a0, $s5, 0xD0
    ctx->pc = 0x4a4180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 208));
label_4a4184:
    // 0x4a4184: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4188:
    // 0x4a4188: 0x24420380  addiu       $v0, $v0, 0x380
    ctx->pc = 0x4a4188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 896));
label_4a418c:
    // 0x4a418c: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4a418cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_4a4190:
    // 0x4a4190: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a4190u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a4194:
    // 0x4a4194: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a4194u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a4198:
    // 0x4a4198: 0xc04cbd8  jal         func_132F60
label_4a419c:
    if (ctx->pc == 0x4A419Cu) {
        ctx->pc = 0x4A419Cu;
            // 0x4a419c: 0xaea000e4  sw          $zero, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
        ctx->pc = 0x4A41A0u;
        goto label_4a41a0;
    }
    ctx->pc = 0x4A4198u;
    SET_GPR_U32(ctx, 31, 0x4A41A0u);
    ctx->pc = 0x4A419Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4198u;
            // 0x4a419c: 0xaea000e4  sw          $zero, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A41A0u; }
        if (ctx->pc != 0x4A41A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A41A0u; }
        if (ctx->pc != 0x4A41A0u) { return; }
    }
    ctx->pc = 0x4A41A0u;
label_4a41a0:
    // 0x4a41a0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x4a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_4a41a4:
    // 0x4a41a4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a41a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a41a8:
    // 0x4a41a8: 0xaea300e0  sw          $v1, 0xE0($s5)
    ctx->pc = 0x4a41a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 3));
label_4a41ac:
    // 0x4a41ac: 0x8c4289e8  lw          $v0, -0x7618($v0)
    ctx->pc = 0x4a41acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937064)));
label_4a41b0:
    // 0x4a41b0: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x4a41b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_4a41b4:
    // 0x4a41b4: 0x346501a9  ori         $a1, $v1, 0x1A9
    ctx->pc = 0x4a41b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)425);
label_4a41b8:
    // 0x4a41b8: 0x8c590004  lw          $t9, 0x4($v0)
    ctx->pc = 0x4a41b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a41bc:
    // 0x4a41bc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x4a41bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_4a41c0:
    // 0x4a41c0: 0x320f809  jalr        $t9
label_4a41c4:
    if (ctx->pc == 0x4A41C4u) {
        ctx->pc = 0x4A41C4u;
            // 0x4a41c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A41C8u;
        goto label_4a41c8;
    }
    ctx->pc = 0x4A41C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A41C8u);
        ctx->pc = 0x4A41C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A41C0u;
            // 0x4a41c4: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A41C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A41C8u; }
            if (ctx->pc != 0x4A41C8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A41C8u;
label_4a41c8:
    // 0x4a41c8: 0xaea200e4  sw          $v0, 0xE4($s5)
    ctx->pc = 0x4a41c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 2));
label_4a41cc:
    // 0x4a41cc: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a41ccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a41d0:
    // 0x4a41d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a41d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a41d4:
    // 0x4a41d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a41d8:
    // 0x4a41d8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a41d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a41dc:
    // 0x4a41dc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a41dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a41e0:
    // 0x4a41e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a41e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a41e4:
    // 0x4a41e4: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a41e8:
    // 0x4a41e8: 0x24060035  addiu       $a2, $zero, 0x35
    ctx->pc = 0x4a41e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_4a41ec:
    // 0x4a41ec: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a41ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a41f0:
    // 0x4a41f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a41f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a41f4:
    // 0x4a41f4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a41f8:
    // 0x4a41f8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a41f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a41fc:
    // 0x4a41fc: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a41fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4200:
    // 0x4a4200: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4200u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4204:
    // 0x4a4204: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4208:
    // 0x4a4208: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4208u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a420c:
    // 0x4a420c: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a420cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4210:
    // 0x4a4210: 0x320f809  jalr        $t9
label_4a4214:
    if (ctx->pc == 0x4A4214u) {
        ctx->pc = 0x4A4214u;
            // 0x4a4214: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4218u;
        goto label_4a4218;
    }
    ctx->pc = 0x4A4210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4218u);
        ctx->pc = 0x4A4214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4210u;
            // 0x4a4214: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4218u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4218u; }
            if (ctx->pc != 0x4A4218u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4218u;
label_4a4218:
    // 0x4a4218: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a421c:
    // 0x4a421c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4220:
    // 0x4a4220: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4224:
    // 0x4a4224: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4224u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4228:
    // 0x4a4228: 0x320f809  jalr        $t9
label_4a422c:
    if (ctx->pc == 0x4A422Cu) {
        ctx->pc = 0x4A422Cu;
            // 0x4a422c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A4230u;
        goto label_4a4230;
    }
    ctx->pc = 0x4A4228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4230u);
        ctx->pc = 0x4A422Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4228u;
            // 0x4a422c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4230u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4230u; }
            if (ctx->pc != 0x4A4230u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4230u;
label_4a4230:
    // 0x4a4230: 0x100000a8  b           . + 4 + (0xA8 << 2)
label_4a4234:
    if (ctx->pc == 0x4A4234u) {
        ctx->pc = 0x4A4238u;
        goto label_4a4238;
    }
    ctx->pc = 0x4A4230u;
    {
        const bool branch_taken_0x4a4230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4230) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A4238u;
label_4a4238:
    // 0x4a4238: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a423c:
    // 0x4a423c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a423cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4240:
    // 0x4a4240: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4a4240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4244:
    // 0x4a4244: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4248:
    // 0x4a4248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a424c:
    // 0x4a424c: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4a424cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4a4250:
    // 0x4a4250: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x4a4250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a4254:
    // 0x4a4254: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4254u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4258:
    // 0x4a4258: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a425c:
    // 0x4a425c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4260:
    // 0x4a4260: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4264:
    // 0x4a4264: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4a4264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4a4268:
    // 0x4a4268: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4268u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a426c:
    // 0x4a426c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a426cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4270:
    // 0x4a4270: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4270u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4274:
    // 0x4a4274: 0x320f809  jalr        $t9
label_4a4278:
    if (ctx->pc == 0x4A4278u) {
        ctx->pc = 0x4A4278u;
            // 0x4a4278: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->pc = 0x4A427Cu;
        goto label_4a427c;
    }
    ctx->pc = 0x4A4274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A427Cu);
        ctx->pc = 0x4A4278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4274u;
            // 0x4a4278: 0x24060035  addiu       $a2, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A427Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A427Cu; }
            if (ctx->pc != 0x4A427Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A427Cu;
label_4a427c:
    // 0x4a427c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a427cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4280:
    // 0x4a4280: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4284:
    // 0x4a4284: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4288:
    // 0x4a4288: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4288u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a428c:
    // 0x4a428c: 0x320f809  jalr        $t9
label_4a4290:
    if (ctx->pc == 0x4A4290u) {
        ctx->pc = 0x4A4290u;
            // 0x4a4290: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A4294u;
        goto label_4a4294;
    }
    ctx->pc = 0x4A428Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4294u);
        ctx->pc = 0x4A4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A428Cu;
            // 0x4a4290: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4294u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4294u; }
            if (ctx->pc != 0x4A4294u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4294u;
label_4a4294:
    // 0x4a4294: 0x1000008f  b           . + 4 + (0x8F << 2)
label_4a4298:
    if (ctx->pc == 0x4A4298u) {
        ctx->pc = 0x4A429Cu;
        goto label_4a429c;
    }
    ctx->pc = 0x4A4294u;
    {
        const bool branch_taken_0x4a4294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4294) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A429Cu;
label_4a429c:
    // 0x4a429c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a42a0:
    // 0x4a42a0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_4a42a4:
    if (ctx->pc == 0x4A42A4u) {
        ctx->pc = 0x4A42A4u;
            // 0x4a42a4: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A42A8u;
        goto label_4a42a8;
    }
    ctx->pc = 0x4A42A0u;
    {
        const bool branch_taken_0x4a42a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a42a0) {
            ctx->pc = 0x4A42A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A42A0u;
            // 0x4a42a4: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A42BCu;
            goto label_4a42bc;
        }
    }
    ctx->pc = 0x4A42A8u;
label_4a42a8:
    // 0x4a42a8: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x4a42a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_4a42ac:
    // 0x4a42ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a42acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a42b0:
    // 0x4a42b0: 0xc078070  jal         func_1E01C0
label_4a42b4:
    if (ctx->pc == 0x4A42B4u) {
        ctx->pc = 0x4A42B4u;
            // 0x4a42b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A42B8u;
        goto label_4a42b8;
    }
    ctx->pc = 0x4A42B0u;
    SET_GPR_U32(ctx, 31, 0x4A42B8u);
    ctx->pc = 0x4A42B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A42B0u;
            // 0x4a42b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E01C0u;
    if (runtime->hasFunction(0x1E01C0u)) {
        auto targetFn = runtime->lookupFunction(0x1E01C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A42B8u; }
        if (ctx->pc != 0x4A42B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E01C0_0x1e01c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A42B8u; }
        if (ctx->pc != 0x4A42B8u) { return; }
    }
    ctx->pc = 0x4A42B8u;
label_4a42b8:
    // 0x4a42b8: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a42b8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a42bc:
    // 0x4a42bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a42bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a42c0:
    // 0x4a42c0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a42c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a42c4:
    // 0x4a42c4: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a42c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a42c8:
    // 0x4a42c8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a42c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a42cc:
    // 0x4a42cc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a42ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a42d0:
    // 0x4a42d0: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a42d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a42d4:
    // 0x4a42d4: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x4a42d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4a42d8:
    // 0x4a42d8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a42dc:
    // 0x4a42dc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a42e0:
    // 0x4a42e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a42e4:
    // 0x4a42e4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a42e8:
    // 0x4a42e8: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a42e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a42ec:
    // 0x4a42ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a42ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a42f0:
    // 0x4a42f0: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a42f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a42f4:
    // 0x4a42f4: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a42f4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a42f8:
    // 0x4a42f8: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a42f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a42fc:
    // 0x4a42fc: 0x320f809  jalr        $t9
label_4a4300:
    if (ctx->pc == 0x4A4300u) {
        ctx->pc = 0x4A4300u;
            // 0x4a4300: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4304u;
        goto label_4a4304;
    }
    ctx->pc = 0x4A42FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4304u);
        ctx->pc = 0x4A4300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A42FCu;
            // 0x4a4300: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4304u; }
            if (ctx->pc != 0x4A4304u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4304u;
label_4a4304:
    // 0x4a4304: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4308:
    // 0x4a4308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a430c:
    // 0x4a430c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a430cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4310:
    // 0x4a4310: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4314:
    // 0x4a4314: 0x320f809  jalr        $t9
label_4a4318:
    if (ctx->pc == 0x4A4318u) {
        ctx->pc = 0x4A4318u;
            // 0x4a4318: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A431Cu;
        goto label_4a431c;
    }
    ctx->pc = 0x4A4314u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A431Cu);
        ctx->pc = 0x4A4318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4314u;
            // 0x4a4318: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A431Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A431Cu; }
            if (ctx->pc != 0x4A431Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A431Cu;
label_4a431c:
    // 0x4a431c: 0x1000006d  b           . + 4 + (0x6D << 2)
label_4a4320:
    if (ctx->pc == 0x4A4320u) {
        ctx->pc = 0x4A4324u;
        goto label_4a4324;
    }
    ctx->pc = 0x4A431Cu;
    {
        const bool branch_taken_0x4a431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a431c) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A4324u;
label_4a4324:
    // 0x4a4324: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a4324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4328:
    // 0x4a4328: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_4a432c:
    if (ctx->pc == 0x4A432Cu) {
        ctx->pc = 0x4A432Cu;
            // 0x4a432c: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A4330u;
        goto label_4a4330;
    }
    ctx->pc = 0x4A4328u;
    {
        const bool branch_taken_0x4a4328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a4328) {
            ctx->pc = 0x4A432Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4328u;
            // 0x4a432c: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4344u;
            goto label_4a4344;
        }
    }
    ctx->pc = 0x4A4330u;
label_4a4330:
    // 0x4a4330: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x4a4330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_4a4334:
    // 0x4a4334: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a4334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4338:
    // 0x4a4338: 0xc07802c  jal         func_1E00B0
label_4a433c:
    if (ctx->pc == 0x4A433Cu) {
        ctx->pc = 0x4A433Cu;
            // 0x4a433c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4340u;
        goto label_4a4340;
    }
    ctx->pc = 0x4A4338u;
    SET_GPR_U32(ctx, 31, 0x4A4340u);
    ctx->pc = 0x4A433Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4338u;
            // 0x4a433c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E00B0u;
    if (runtime->hasFunction(0x1E00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1E00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4340u; }
        if (ctx->pc != 0x4A4340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E00B0_0x1e00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4340u; }
        if (ctx->pc != 0x4A4340u) { return; }
    }
    ctx->pc = 0x4A4340u;
label_4a4340:
    // 0x4a4340: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4340u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4344:
    // 0x4a4344: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4348:
    // 0x4a4348: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a434c:
    // 0x4a434c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a434cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4350:
    // 0x4a4350: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4354:
    // 0x4a4354: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4358:
    // 0x4a4358: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4358u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a435c:
    // 0x4a435c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x4a435cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4a4360:
    // 0x4a4360: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4364:
    // 0x4a4364: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4368:
    // 0x4a4368: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4368u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a436c:
    // 0x4a436c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4370:
    // 0x4a4370: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4374:
    // 0x4a4374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4378:
    // 0x4a4378: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a437c:
    // 0x4a437c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a437cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4380:
    // 0x4a4380: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4380u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4384:
    // 0x4a4384: 0x320f809  jalr        $t9
label_4a4388:
    if (ctx->pc == 0x4A4388u) {
        ctx->pc = 0x4A4388u;
            // 0x4a4388: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A438Cu;
        goto label_4a438c;
    }
    ctx->pc = 0x4A4384u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A438Cu);
        ctx->pc = 0x4A4388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4384u;
            // 0x4a4388: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A438Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A438Cu; }
            if (ctx->pc != 0x4A438Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A438Cu;
label_4a438c:
    // 0x4a438c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a438cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4390:
    // 0x4a4390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4394:
    // 0x4a4394: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4398:
    // 0x4a4398: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4398u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a439c:
    // 0x4a439c: 0x320f809  jalr        $t9
label_4a43a0:
    if (ctx->pc == 0x4A43A0u) {
        ctx->pc = 0x4A43A0u;
            // 0x4a43a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A43A4u;
        goto label_4a43a4;
    }
    ctx->pc = 0x4A439Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A43A4u);
        ctx->pc = 0x4A43A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A439Cu;
            // 0x4a43a0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A43A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A43A4u; }
            if (ctx->pc != 0x4A43A4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A43A4u;
label_4a43a4:
    // 0x4a43a4: 0x1000004b  b           . + 4 + (0x4B << 2)
label_4a43a8:
    if (ctx->pc == 0x4A43A8u) {
        ctx->pc = 0x4A43ACu;
        goto label_4a43ac;
    }
    ctx->pc = 0x4A43A4u;
    {
        const bool branch_taken_0x4a43a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a43a4) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A43ACu;
label_4a43ac:
    // 0x4a43ac: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a43acu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a43b0:
    // 0x4a43b0: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
label_4a43b4:
    if (ctx->pc == 0x4A43B4u) {
        ctx->pc = 0x4A43B4u;
            // 0x4a43b4: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->pc = 0x4A43B8u;
        goto label_4a43b8;
    }
    ctx->pc = 0x4A43B0u;
    {
        const bool branch_taken_0x4a43b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a43b0) {
            ctx->pc = 0x4A43B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A43B0u;
            // 0x4a43b4: 0x14163c  dsll32      $v0, $s4, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A43E0u;
            goto label_4a43e0;
        }
    }
    ctx->pc = 0x4A43B8u;
label_4a43b8:
    // 0x4a43b8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a43bc:
    // 0x4a43bc: 0x32a400ff  andi        $a0, $s5, 0xFF
    ctx->pc = 0x4a43bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a43c0:
    // 0x4a43c0: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4a43c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4a43c4:
    // 0x4a43c4: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x4a43c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4a43c8:
    // 0x4a43c8: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x4a43c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4a43cc:
    // 0x4a43cc: 0x26070ec0  addiu       $a3, $s0, 0xEC0
    ctx->pc = 0x4a43ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_4a43d0:
    // 0x4a43d0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a43d0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a43d4:
    // 0x4a43d4: 0xc0bb0e8  jal         func_2EC3A0
label_4a43d8:
    if (ctx->pc == 0x4A43D8u) {
        ctx->pc = 0x4A43D8u;
            // 0x4a43d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A43DCu;
        goto label_4a43dc;
    }
    ctx->pc = 0x4A43D4u;
    SET_GPR_U32(ctx, 31, 0x4A43DCu);
    ctx->pc = 0x4A43D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A43D4u;
            // 0x4a43d8: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A43DCu; }
        if (ctx->pc != 0x4A43DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A43DCu; }
        if (ctx->pc != 0x4A43DCu) { return; }
    }
    ctx->pc = 0x4A43DCu;
label_4a43dc:
    // 0x4a43dc: 0x14163c  dsll32      $v0, $s4, 24
    ctx->pc = 0x4a43dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 24));
label_4a43e0:
    // 0x4a43e0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a43e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a43e4:
    // 0x4a43e4: 0x442000b  bltzl       $v0, . + 4 + (0xB << 2)
label_4a43e8:
    if (ctx->pc == 0x4A43E8u) {
        ctx->pc = 0x4A43E8u;
            // 0x4a43e8: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A43ECu;
        goto label_4a43ec;
    }
    ctx->pc = 0x4A43E4u;
    {
        const bool branch_taken_0x4a43e4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a43e4) {
            ctx->pc = 0x4A43E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A43E4u;
            // 0x4a43e8: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4414u;
            goto label_4a4414;
        }
    }
    ctx->pc = 0x4A43ECu;
label_4a43ec:
    // 0x4a43ec: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a43ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a43f0:
    // 0x4a43f0: 0x328400ff  andi        $a0, $s4, 0xFF
    ctx->pc = 0x4a43f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)255);
label_4a43f4:
    // 0x4a43f4: 0x8c4814d8  lw          $t0, 0x14D8($v0)
    ctx->pc = 0x4a43f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5336)));
label_4a43f8:
    // 0x4a43f8: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x4a43f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_4a43fc:
    // 0x4a43fc: 0x26060890  addiu       $a2, $s0, 0x890
    ctx->pc = 0x4a43fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 2192));
label_4a4400:
    // 0x4a4400: 0x26070ec0  addiu       $a3, $s0, 0xEC0
    ctx->pc = 0x4a4400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 3776));
label_4a4404:
    // 0x4a4404: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4a4404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a4408:
    // 0x4a4408: 0xc0bb0e8  jal         func_2EC3A0
label_4a440c:
    if (ctx->pc == 0x4A440Cu) {
        ctx->pc = 0x4A440Cu;
            // 0x4a440c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x4A4410u;
        goto label_4a4410;
    }
    ctx->pc = 0x4A4408u;
    SET_GPR_U32(ctx, 31, 0x4A4410u);
    ctx->pc = 0x4A440Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4408u;
            // 0x4a440c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC3A0u;
    if (runtime->hasFunction(0x2EC3A0u)) {
        auto targetFn = runtime->lookupFunction(0x2EC3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4410u; }
        if (ctx->pc != 0x4A4410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002EC3A0_0x2ec3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4410u; }
        if (ctx->pc != 0x4A4410u) { return; }
    }
    ctx->pc = 0x4A4410u;
label_4a4410:
    // 0x4a4410: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4410u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4414:
    // 0x4a4414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4418:
    // 0x4a4418: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a441c:
    // 0x4a441c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a441cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4420:
    // 0x4a4420: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4420u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4424:
    // 0x4a4424: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4428:
    // 0x4a4428: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4428u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a442c:
    // 0x4a442c: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x4a442cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_4a4430:
    // 0x4a4430: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4430u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4434:
    // 0x4a4434: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4438:
    // 0x4a4438: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4438u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a443c:
    // 0x4a443c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a443cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4440:
    // 0x4a4440: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4440u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4444:
    // 0x4a4444: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4448:
    // 0x4a4448: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a444c:
    // 0x4a444c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a444cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4450:
    // 0x4a4450: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4450u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4454:
    // 0x4a4454: 0x320f809  jalr        $t9
label_4a4458:
    if (ctx->pc == 0x4A4458u) {
        ctx->pc = 0x4A4458u;
            // 0x4a4458: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A445Cu;
        goto label_4a445c;
    }
    ctx->pc = 0x4A4454u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A445Cu);
        ctx->pc = 0x4A4458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4454u;
            // 0x4a4458: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A445Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A445Cu; }
            if (ctx->pc != 0x4A445Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A445Cu;
label_4a445c:
    // 0x4a445c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a445cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4460:
    // 0x4a4460: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4464:
    // 0x4a4464: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4468:
    // 0x4a4468: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4468u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a446c:
    // 0x4a446c: 0x320f809  jalr        $t9
label_4a4470:
    if (ctx->pc == 0x4A4470u) {
        ctx->pc = 0x4A4470u;
            // 0x4a4470: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A4474u;
        goto label_4a4474;
    }
    ctx->pc = 0x4A446Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4474u);
        ctx->pc = 0x4A4470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A446Cu;
            // 0x4a4470: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4474u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4474u; }
            if (ctx->pc != 0x4A4474u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4474u;
label_4a4474:
    // 0x4a4474: 0x10000017  b           . + 4 + (0x17 << 2)
label_4a4478:
    if (ctx->pc == 0x4A4478u) {
        ctx->pc = 0x4A447Cu;
        goto label_4a447c;
    }
    ctx->pc = 0x4A4474u;
    {
        const bool branch_taken_0x4a4474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4474) {
            ctx->pc = 0x4A44D4u;
            goto label_4a44d4;
        }
    }
    ctx->pc = 0x4A447Cu;
label_4a447c:
    // 0x4a447c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4480:
    // 0x4a4480: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4484:
    // 0x4a4484: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4a4484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4488:
    // 0x4a4488: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a448c:
    // 0x4a448c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a448cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4490:
    // 0x4a4490: 0xc31823  subu        $v1, $a2, $v1
    ctx->pc = 0x4a4490u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_4a4494:
    // 0x4a4494: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4494u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4498:
    // 0x4a4498: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a449c:
    // 0x4a449c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a449cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a44a0:
    // 0x4a44a0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a44a4:
    // 0x4a44a4: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4a44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4a44a8:
    // 0x4a44a8: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a44a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a44ac:
    // 0x4a44ac: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a44acu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a44b0:
    // 0x4a44b0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a44b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a44b4:
    // 0x4a44b4: 0x320f809  jalr        $t9
label_4a44b8:
    if (ctx->pc == 0x4A44B8u) {
        ctx->pc = 0x4A44B8u;
            // 0x4a44b8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x4A44BCu;
        goto label_4a44bc;
    }
    ctx->pc = 0x4A44B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A44BCu);
        ctx->pc = 0x4A44B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A44B4u;
            // 0x4a44b8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A44BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A44BCu; }
            if (ctx->pc != 0x4A44BCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A44BCu;
label_4a44bc:
    // 0x4a44bc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a44bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a44c0:
    // 0x4a44c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a44c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a44c4:
    // 0x4a44c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a44c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a44c8:
    // 0x4a44c8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a44c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a44cc:
    // 0x4a44cc: 0x320f809  jalr        $t9
label_4a44d0:
    if (ctx->pc == 0x4A44D0u) {
        ctx->pc = 0x4A44D0u;
            // 0x4a44d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x4A44D4u;
        goto label_4a44d4;
    }
    ctx->pc = 0x4A44CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A44D4u);
        ctx->pc = 0x4A44D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A44CCu;
            // 0x4a44d0: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A44D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A44D4u; }
            if (ctx->pc != 0x4A44D4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A44D4u;
label_4a44d4:
    // 0x4a44d4: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x4a44d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_4a44d8:
    // 0x4a44d8: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x4a44d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
label_4a44dc:
    // 0x4a44dc: 0x26040340  addiu       $a0, $s0, 0x340
    ctx->pc = 0x4a44dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 832));
label_4a44e0:
    // 0x4a44e0: 0xae020db8  sw          $v0, 0xDB8($s0)
    ctx->pc = 0x4a44e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
label_4a44e4:
    // 0x4a44e4: 0xc04cc04  jal         func_133010
label_4a44e8:
    if (ctx->pc == 0x4A44E8u) {
        ctx->pc = 0x4A44E8u;
            // 0x4a44e8: 0x24a51480  addiu       $a1, $a1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
        ctx->pc = 0x4A44ECu;
        goto label_4a44ec;
    }
    ctx->pc = 0x4A44E4u;
    SET_GPR_U32(ctx, 31, 0x4A44ECu);
    ctx->pc = 0x4A44E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A44E4u;
            // 0x4a44e8: 0x24a51480  addiu       $a1, $a1, 0x1480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A44ECu; }
        if (ctx->pc != 0x4A44ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A44ECu; }
        if (ctx->pc != 0x4A44ECu) { return; }
    }
    ctx->pc = 0x4A44ECu;
label_4a44ec:
    // 0x4a44ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a44ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a44f0:
    // 0x4a44f0: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x4a44f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_4a44f4:
    // 0x4a44f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a44f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a44f8:
    // 0x4a44f8: 0xc04cbd8  jal         func_132F60
label_4a44fc:
    if (ctx->pc == 0x4A44FCu) {
        ctx->pc = 0x4A44FCu;
            // 0x4a44fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x4A4500u;
        goto label_4a4500;
    }
    ctx->pc = 0x4A44F8u;
    SET_GPR_U32(ctx, 31, 0x4A4500u);
    ctx->pc = 0x4A44FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A44F8u;
            // 0x4a44fc: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4500u; }
        if (ctx->pc != 0x4A4500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4500u; }
        if (ctx->pc != 0x4A4500u) { return; }
    }
    ctx->pc = 0x4A4500u;
label_4a4500:
    // 0x4a4500: 0x3c020064  lui         $v0, 0x64
    ctx->pc = 0x4a4500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)100 << 16));
label_4a4504:
    // 0x4a4504: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x4a4504u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_4a4508:
    // 0x4a4508: 0xc440c6b8  lwc1        $f0, -0x3948($v0)
    ctx->pc = 0x4a4508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952632)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a450c:
    // 0x4a450c: 0xae030dbc  sw          $v1, 0xDBC($s0)
    ctx->pc = 0x4a450cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3516), GPR_U32(ctx, 3));
label_4a4510:
    // 0x4a4510: 0xae030694  sw          $v1, 0x694($s0)
    ctx->pc = 0x4a4510u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1684), GPR_U32(ctx, 3));
label_4a4514:
    // 0x4a4514: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a4518:
    // 0x4a4518: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a4518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a451c:
    // 0x4a451c: 0x8e020550  lw          $v0, 0x550($s0)
    ctx->pc = 0x4a451cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1360)));
label_4a4520:
    // 0x4a4520: 0xac43002c  sw          $v1, 0x2C($v0)
    ctx->pc = 0x4a4520u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 3));
label_4a4524:
    // 0x4a4524: 0xc7c10008  lwc1        $f1, 0x8($fp)
    ctx->pc = 0x4a4524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a4528:
    // 0x4a4528: 0xe6010de0  swc1        $f1, 0xDE0($s0)
    ctx->pc = 0x4a4528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3552), bits); }
label_4a452c:
    // 0x4a452c: 0xe6000ddc  swc1        $f0, 0xDDC($s0)
    ctx->pc = 0x4a452cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3548), bits); }
label_4a4530:
    // 0x4a4530: 0xc077fb0  jal         func_1DFEC0
label_4a4534:
    if (ctx->pc == 0x4A4534u) {
        ctx->pc = 0x4A4534u;
            // 0x4a4534: 0xaee00118  sw          $zero, 0x118($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 280), GPR_U32(ctx, 0));
        ctx->pc = 0x4A4538u;
        goto label_4a4538;
    }
    ctx->pc = 0x4A4530u;
    SET_GPR_U32(ctx, 31, 0x4A4538u);
    ctx->pc = 0x4A4534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4530u;
            // 0x4a4534: 0xaee00118  sw          $zero, 0x118($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 280), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DFEC0u;
    if (runtime->hasFunction(0x1DFEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DFEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4538u; }
        if (ctx->pc != 0x4A4538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DFEC0_0x1dfec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4538u; }
        if (ctx->pc != 0x4A4538u) { return; }
    }
    ctx->pc = 0x4A4538u;
label_4a4538:
    // 0x4a4538: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x4a4538u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4a453c:
    // 0x4a453c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a453cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4540:
    // 0x4a4540: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x4a4540u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
label_4a4544:
    // 0x4a4544: 0x260402e0  addiu       $a0, $s0, 0x2E0
    ctx->pc = 0x4a4544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 736));
label_4a4548:
    // 0x4a4548: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x4a4548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_4a454c:
    // 0x4a454c: 0x24c61470  addiu       $a2, $a2, 0x1470
    ctx->pc = 0x4a454cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5232));
label_4a4550:
    // 0x4a4550: 0xc04cca0  jal         func_133280
label_4a4554:
    if (ctx->pc == 0x4A4554u) {
        ctx->pc = 0x4A4554u;
            // 0x4a4554: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->pc = 0x4A4558u;
        goto label_4a4558;
    }
    ctx->pc = 0x4A4550u;
    SET_GPR_U32(ctx, 31, 0x4A4558u);
    ctx->pc = 0x4A4554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4550u;
            // 0x4a4554: 0xac4302b0  sw          $v1, 0x2B0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4558u; }
        if (ctx->pc != 0x4A4558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4558u; }
        if (ctx->pc != 0x4A4558u) { return; }
    }
    ctx->pc = 0x4A4558u;
label_4a4558:
    // 0x4a4558: 0xc7c00024  lwc1        $f0, 0x24($fp)
    ctx->pc = 0x4a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a455c:
    // 0x4a455c: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x4a455cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_4a4560:
    // 0x4a4560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a4560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a4564:
    // 0x4a4564: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x4a4564u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_4a4568:
    // 0x4a4568: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4568u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a456c:
    // 0x4a456c: 0x46010343  div.s       $f13, $f0, $f1
    ctx->pc = 0x4a456cu;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[13] = ctx->f[0] / ctx->f[1];
label_4a4570:
    // 0x4a4570: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a4570u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a4574:
    // 0x4a4574: 0x0  nop
    ctx->pc = 0x4a4574u;
    // NOP
label_4a4578:
    // 0x4a4578: 0x0  nop
    ctx->pc = 0x4a4578u;
    // NOP
label_4a457c:
    // 0x4a457c: 0xc04cbd8  jal         func_132F60
label_4a4580:
    if (ctx->pc == 0x4A4580u) {
        ctx->pc = 0x4A4584u;
        goto label_4a4584;
    }
    ctx->pc = 0x4A457Cu;
    SET_GPR_U32(ctx, 31, 0x4A4584u);
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4584u; }
        if (ctx->pc != 0x4A4584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4584u; }
        if (ctx->pc != 0x4A4584u) { return; }
    }
    ctx->pc = 0x4A4584u;
label_4a4584:
    // 0x4a4584: 0x26040320  addiu       $a0, $s0, 0x320
    ctx->pc = 0x4a4584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
label_4a4588:
    // 0x4a4588: 0x260507e0  addiu       $a1, $s0, 0x7E0
    ctx->pc = 0x4a4588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 2016));
label_4a458c:
    // 0x4a458c: 0xc04cca0  jal         func_133280
label_4a4590:
    if (ctx->pc == 0x4A4590u) {
        ctx->pc = 0x4A4590u;
            // 0x4a4590: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x4A4594u;
        goto label_4a4594;
    }
    ctx->pc = 0x4A458Cu;
    SET_GPR_U32(ctx, 31, 0x4A4594u);
    ctx->pc = 0x4A4590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A458Cu;
            // 0x4a4590: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4594u; }
        if (ctx->pc != 0x4A4594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4594u; }
        if (ctx->pc != 0x4A4594u) { return; }
    }
    ctx->pc = 0x4A4594u;
label_4a4594:
    // 0x4a4594: 0x3c033d3d  lui         $v1, 0x3D3D
    ctx->pc = 0x4a4594u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15677 << 16));
label_4a4598:
    // 0x4a4598: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x4a4598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
label_4a459c:
    // 0x4a459c: 0x3464a12f  ori         $a0, $v1, 0xA12F
    ctx->pc = 0x4a459cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41263);
label_4a45a0:
    // 0x4a45a0: 0xaee4010c  sw          $a0, 0x10C($s7)
    ctx->pc = 0x4a45a0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 268), GPR_U32(ctx, 4));
label_4a45a4:
    // 0x4a45a4: 0x3443ffff  ori         $v1, $v0, 0xFFFF
    ctx->pc = 0x4a45a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_4a45a8:
    // 0x4a45a8: 0xc7c00028  lwc1        $f0, 0x28($fp)
    ctx->pc = 0x4a45a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a45ac:
    // 0x4a45ac: 0xe6e00110  swc1        $f0, 0x110($s7)
    ctx->pc = 0x4a45acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 272), bits); }
label_4a45b0:
    // 0x4a45b0: 0x8e130d74  lw          $s3, 0xD74($s0)
    ctx->pc = 0x4a45b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a45b4:
    // 0x4a45b4: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4a45b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a45b8:
    // 0x4a45b8: 0x8e6202c8  lw          $v0, 0x2C8($s3)
    ctx->pc = 0x4a45b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_4a45bc:
    // 0x4a45bc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a45bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_4a45c0:
    // 0x4a45c0: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x4a45c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4a45c4:
    // 0x4a45c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x4a45c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_4a45c8:
    // 0x4a45c8: 0xc0a545c  jal         func_295170
label_4a45cc:
    if (ctx->pc == 0x4A45CCu) {
        ctx->pc = 0x4A45CCu;
            // 0x4a45cc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4A45D0u;
        goto label_4a45d0;
    }
    ctx->pc = 0x4A45C8u;
    SET_GPR_U32(ctx, 31, 0x4A45D0u);
    ctx->pc = 0x4A45CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A45C8u;
            // 0x4a45cc: 0x62a024  and         $s4, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A45D0u; }
        if (ctx->pc != 0x4A45D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A45D0u; }
        if (ctx->pc != 0x4A45D0u) { return; }
    }
    ctx->pc = 0x4A45D0u;
label_4a45d0:
    // 0x4a45d0: 0xac54002c  sw          $s4, 0x2C($v0)
    ctx->pc = 0x4a45d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 20));
label_4a45d4:
    // 0x4a45d4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a45d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a45d8:
    // 0x4a45d8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4a45d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_4a45dc:
    // 0x4a45dc: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a45dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a45e0:
    // 0x4a45e0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a45e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a45e4:
    // 0x4a45e4: 0xc08bf20  jal         func_22FC80
label_4a45e8:
    if (ctx->pc == 0x4A45E8u) {
        ctx->pc = 0x4A45E8u;
            // 0x4a45e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A45ECu;
        goto label_4a45ec;
    }
    ctx->pc = 0x4A45E4u;
    SET_GPR_U32(ctx, 31, 0x4A45ECu);
    ctx->pc = 0x4A45E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A45E4u;
            // 0x4a45e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A45ECu; }
        if (ctx->pc != 0x4A45ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A45ECu; }
        if (ctx->pc != 0x4A45ECu) { return; }
    }
    ctx->pc = 0x4A45ECu;
label_4a45ec:
    // 0x4a45ec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4a45ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
label_4a45f0:
    // 0x4a45f0: 0x8c640e48  lw          $a0, 0xE48($v1)
    ctx->pc = 0x4a45f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3656)));
label_4a45f4:
    // 0x4a45f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_4a45f8:
    if (ctx->pc == 0x4A45F8u) {
        ctx->pc = 0x4A45F8u;
            // 0x4a45f8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x4A45FCu;
        goto label_4a45fc;
    }
    ctx->pc = 0x4A45F4u;
    {
        const bool branch_taken_0x4a45f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a45f4) {
            ctx->pc = 0x4A45F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A45F4u;
            // 0x4a45f8: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4608u;
            goto label_4a4608;
        }
    }
    ctx->pc = 0x4A45FCu;
label_4a45fc:
    // 0x4a45fc: 0xc0d68b4  jal         func_35A2D0
label_4a4600:
    if (ctx->pc == 0x4A4600u) {
        ctx->pc = 0x4A4600u;
            // 0x4a4600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4604u;
        goto label_4a4604;
    }
    ctx->pc = 0x4A45FCu;
    SET_GPR_U32(ctx, 31, 0x4A4604u);
    ctx->pc = 0x4A4600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A45FCu;
            // 0x4a4600: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x35A2D0u;
    if (runtime->hasFunction(0x35A2D0u)) {
        auto targetFn = runtime->lookupFunction(0x35A2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4604u; }
        if (ctx->pc != 0x4A4604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0035A2D0_0x35a2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4604u; }
        if (ctx->pc != 0x4A4604u) { return; }
    }
    ctx->pc = 0x4A4604u;
label_4a4604:
    // 0x4a4604: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x4a4604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_4a4608:
    // 0x4a4608: 0x5223000f  beql        $s1, $v1, . + 4 + (0xF << 2)
label_4a460c:
    if (ctx->pc == 0x4A460Cu) {
        ctx->pc = 0x4A460Cu;
            // 0x4a460c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4A4610u;
        goto label_4a4610;
    }
    ctx->pc = 0x4A4608u;
    {
        const bool branch_taken_0x4a4608 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a4608) {
            ctx->pc = 0x4A460Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4608u;
            // 0x4a460c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4648u;
            goto label_4a4648;
        }
    }
    ctx->pc = 0x4A4610u;
label_4a4610:
    // 0x4a4610: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4a4610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_4a4614:
    // 0x4a4614: 0x1223000b  beq         $s1, $v1, . + 4 + (0xB << 2)
label_4a4618:
    if (ctx->pc == 0x4A4618u) {
        ctx->pc = 0x4A461Cu;
        goto label_4a461c;
    }
    ctx->pc = 0x4A4614u;
    {
        const bool branch_taken_0x4a4614 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a4614) {
            ctx->pc = 0x4A4644u;
            goto label_4a4644;
        }
    }
    ctx->pc = 0x4A461Cu;
label_4a461c:
    // 0x4a461c: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4a461cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4a4620:
    // 0x4a4620: 0x12230008  beq         $s1, $v1, . + 4 + (0x8 << 2)
label_4a4624:
    if (ctx->pc == 0x4A4624u) {
        ctx->pc = 0x4A4628u;
        goto label_4a4628;
    }
    ctx->pc = 0x4A4620u;
    {
        const bool branch_taken_0x4a4620 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a4620) {
            ctx->pc = 0x4A4644u;
            goto label_4a4644;
        }
    }
    ctx->pc = 0x4A4628u;
label_4a4628:
    // 0x4a4628: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a462c:
    // 0x4a462c: 0x12230005  beq         $s1, $v1, . + 4 + (0x5 << 2)
label_4a4630:
    if (ctx->pc == 0x4A4630u) {
        ctx->pc = 0x4A4634u;
        goto label_4a4634;
    }
    ctx->pc = 0x4A462Cu;
    {
        const bool branch_taken_0x4a462c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a462c) {
            ctx->pc = 0x4A4644u;
            goto label_4a4644;
        }
    }
    ctx->pc = 0x4A4634u;
label_4a4634:
    // 0x4a4634: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_4a4638:
    if (ctx->pc == 0x4A4638u) {
        ctx->pc = 0x4A463Cu;
        goto label_4a463c;
    }
    ctx->pc = 0x4A4634u;
    {
        const bool branch_taken_0x4a4634 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4634) {
            ctx->pc = 0x4A4644u;
            goto label_4a4644;
        }
    }
    ctx->pc = 0x4A463Cu;
label_4a463c:
    // 0x4a463c: 0x1000000f  b           . + 4 + (0xF << 2)
label_4a4640:
    if (ctx->pc == 0x4A4640u) {
        ctx->pc = 0x4A4640u;
            // 0x4a4640: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x4A4644u;
        goto label_4a4644;
    }
    ctx->pc = 0x4A463Cu;
    {
        const bool branch_taken_0x4a463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A463Cu;
            // 0x4a4640: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a463c) {
            ctx->pc = 0x4A467Cu;
            goto label_4a467c;
        }
    }
    ctx->pc = 0x4A4644u;
label_4a4644:
    // 0x4a4644: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x4a4644u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_4a4648:
    // 0x4a4648: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4a4648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4a464c:
    // 0x4a464c: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x4a464cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4a4650:
    // 0x4a4650: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4a4650u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4a4654:
    // 0x4a4654: 0xc4a20de4  lwc1        $f2, 0xDE4($a1)
    ctx->pc = 0x4a4654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 3556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a4658:
    // 0x4a4658: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4a4658u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a465c:
    // 0x4a465c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a465cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a4660:
    // 0x4a4660: 0x0  nop
    ctx->pc = 0x4a4660u;
    // NOP
label_4a4664:
    // 0x4a4664: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4a4664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4a4668:
    // 0x4a4668: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x4a4668u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_4a466c:
    // 0x4a466c: 0x0  nop
    ctx->pc = 0x4a466cu;
    // NOP
label_4a4670:
    // 0x4a4670: 0x0  nop
    ctx->pc = 0x4a4670u;
    // NOP
label_4a4674:
    // 0x4a4674: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a4678:
    if (ctx->pc == 0x4A4678u) {
        ctx->pc = 0x4A467Cu;
        goto label_4a467c;
    }
    ctx->pc = 0x4A4674u;
    {
        const bool branch_taken_0x4a4674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4674) {
            ctx->pc = 0x4A46A0u;
            goto label_4a46a0;
        }
    }
    ctx->pc = 0x4A467Cu;
label_4a467c:
    // 0x4a467c: 0x3c034852  lui         $v1, 0x4852
    ctx->pc = 0x4a467cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)18514 << 16));
label_4a4680:
    // 0x4a4680: 0x3464f000  ori         $a0, $v1, 0xF000
    ctx->pc = 0x4a4680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
label_4a4684:
    // 0x4a4684: 0x3c03447a  lui         $v1, 0x447A
    ctx->pc = 0x4a4684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17530 << 16));
label_4a4688:
    // 0x4a4688: 0xc4a211b0  lwc1        $f2, 0x11B0($a1)
    ctx->pc = 0x4a4688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_4a468c:
    // 0x4a468c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x4a468cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a4690:
    // 0x4a4690: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a4690u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a4694:
    // 0x4a4694: 0x0  nop
    ctx->pc = 0x4a4694u;
    // NOP
label_4a4698:
    // 0x4a4698: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x4a4698u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_4a469c:
    // 0x4a469c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x4a469cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_4a46a0:
    // 0x4a46a0: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x4a46a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_4a46a4:
    // 0x4a46a4: 0x3c0342a0  lui         $v1, 0x42A0
    ctx->pc = 0x4a46a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17056 << 16));
label_4a46a8:
    // 0x4a46a8: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a46a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a46ac:
    // 0x4a46ac: 0x0  nop
    ctx->pc = 0x4a46acu;
    // NOP
label_4a46b0:
    // 0x4a46b0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a46b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_4a46b4:
    // 0x4a46b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x4a46b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a46b8:
    // 0x4a46b8: 0x0  nop
    ctx->pc = 0x4a46b8u;
    // NOP
label_4a46bc:
    // 0x4a46bc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x4a46bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_4a46c0:
    // 0x4a46c0: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a46c4:
    // 0x4a46c4: 0xc4603f98  lwc1        $f0, 0x3F98($v1)
    ctx->pc = 0x4a46c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a46c8:
    // 0x4a46c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x4a46c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a46cc:
    // 0x4a46cc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_4a46d0:
    if (ctx->pc == 0x4A46D0u) {
        ctx->pc = 0x4A46D0u;
            // 0x4a46d0: 0xe7a100dc  swc1        $f1, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->pc = 0x4A46D4u;
        goto label_4a46d4;
    }
    ctx->pc = 0x4A46CCu;
    {
        const bool branch_taken_0x4a46cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x4A46D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A46CCu;
            // 0x4a46d0: 0xe7a100dc  swc1        $f1, 0xDC($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a46cc) {
            ctx->pc = 0x4A46DCu;
            goto label_4a46dc;
        }
    }
    ctx->pc = 0x4A46D4u;
label_4a46d4:
    // 0x4a46d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_4a46d8:
    if (ctx->pc == 0x4A46D8u) {
        ctx->pc = 0x4A46D8u;
            // 0x4a46d8: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->pc = 0x4A46DCu;
        goto label_4a46dc;
    }
    ctx->pc = 0x4A46D4u;
    {
        const bool branch_taken_0x4a46d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A46D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A46D4u;
            // 0x4a46d8: 0x27a300dc  addiu       $v1, $sp, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a46d4) {
            ctx->pc = 0x4A46E4u;
            goto label_4a46e4;
        }
    }
    ctx->pc = 0x4A46DCu;
label_4a46dc:
    // 0x4a46dc: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x4a46dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
label_4a46e0:
    // 0x4a46e0: 0x24633f98  addiu       $v1, $v1, 0x3F98
    ctx->pc = 0x4a46e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16280));
label_4a46e4:
    // 0x4a46e4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x4a46e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a46e8:
    // 0x4a46e8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x4a46e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4a46ec:
    // 0x4a46ec: 0xe6000de8  swc1        $f0, 0xDE8($s0)
    ctx->pc = 0x4a46ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3560), bits); }
label_4a46f0:
    // 0x4a46f0: 0x10000231  b           . + 4 + (0x231 << 2)
label_4a46f4:
    if (ctx->pc == 0x4A46F4u) {
        ctx->pc = 0x4A46F4u;
            // 0x4a46f4: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->pc = 0x4A46F8u;
        goto label_4a46f8;
    }
    ctx->pc = 0x4A46F0u;
    {
        const bool branch_taken_0x4a46f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A46F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A46F0u;
            // 0x4a46f4: 0xae030e30  sw          $v1, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a46f0) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A46F8u;
label_4a46f8:
    // 0x4a46f8: 0x8e020e34  lw          $v0, 0xE34($s0)
    ctx->pc = 0x4a46f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a46fc:
    // 0x4a46fc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x4a46fcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4700:
    // 0x4a4700: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x4a4700u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a4704:
    // 0x4a4704: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a4704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a4708:
    // 0x4a4708: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a470c:
    if (ctx->pc == 0x4A470Cu) {
        ctx->pc = 0x4A470Cu;
            // 0x4a470c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4710u;
        goto label_4a4710;
    }
    ctx->pc = 0x4A4708u;
    {
        const bool branch_taken_0x4a4708 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A470Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4708u;
            // 0x4a470c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4708) {
            ctx->pc = 0x4A4720u;
            goto label_4a4720;
        }
    }
    ctx->pc = 0x4A4710u;
label_4a4710:
    // 0x4a4710: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a4710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a4714:
    // 0x4a4714: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a4718:
    if (ctx->pc == 0x4A4718u) {
        ctx->pc = 0x4A471Cu;
        goto label_4a471c;
    }
    ctx->pc = 0x4A4714u;
    {
        const bool branch_taken_0x4a4714 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4714) {
            ctx->pc = 0x4A4720u;
            goto label_4a4720;
        }
    }
    ctx->pc = 0x4A471Cu;
label_4a471c:
    // 0x4a471c: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x4a471cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a4720:
    // 0x4a4720: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_4a4724:
    if (ctx->pc == 0x4A4724u) {
        ctx->pc = 0x4A4728u;
        goto label_4a4728;
    }
    ctx->pc = 0x4A4720u;
    {
        const bool branch_taken_0x4a4720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4720) {
            ctx->pc = 0x4A473Cu;
            goto label_4a473c;
        }
    }
    ctx->pc = 0x4A4728u;
label_4a4728:
    // 0x4a4728: 0xc075eb4  jal         func_1D7AD0
label_4a472c:
    if (ctx->pc == 0x4A472Cu) {
        ctx->pc = 0x4A472Cu;
            // 0x4a472c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4730u;
        goto label_4a4730;
    }
    ctx->pc = 0x4A4728u;
    SET_GPR_U32(ctx, 31, 0x4A4730u);
    ctx->pc = 0x4A472Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4728u;
            // 0x4a472c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4730u; }
        if (ctx->pc != 0x4A4730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4730u; }
        if (ctx->pc != 0x4A4730u) { return; }
    }
    ctx->pc = 0x4A4730u;
label_4a4730:
    // 0x4a4730: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a4734:
    if (ctx->pc == 0x4A4734u) {
        ctx->pc = 0x4A4738u;
        goto label_4a4738;
    }
    ctx->pc = 0x4A4730u;
    {
        const bool branch_taken_0x4a4730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4730) {
            ctx->pc = 0x4A473Cu;
            goto label_4a473c;
        }
    }
    ctx->pc = 0x4A4738u;
label_4a4738:
    // 0x4a4738: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a4738u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a473c:
    // 0x4a473c: 0x56c00006  bnel        $s6, $zero, . + 4 + (0x6 << 2)
label_4a4740:
    if (ctx->pc == 0x4A4740u) {
        ctx->pc = 0x4A4740u;
            // 0x4a4740: 0x821211aa  lb          $s2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->pc = 0x4A4744u;
        goto label_4a4744;
    }
    ctx->pc = 0x4A473Cu;
    {
        const bool branch_taken_0x4a473c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a473c) {
            ctx->pc = 0x4A4740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A473Cu;
            // 0x4a4740: 0x821211aa  lb          $s2, 0x11AA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4758u;
            goto label_4a4758;
        }
    }
    ctx->pc = 0x4A4744u;
label_4a4744:
    // 0x4a4744: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a4744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a4748:
    // 0x4a4748: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a474c:
    // 0x4a474c: 0x54620003  bnel        $v1, $v0, . + 4 + (0x3 << 2)
label_4a4750:
    if (ctx->pc == 0x4A4750u) {
        ctx->pc = 0x4A4750u;
            // 0x4a4750: 0x32a300ff  andi        $v1, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x4A4754u;
        goto label_4a4754;
    }
    ctx->pc = 0x4A474Cu;
    {
        const bool branch_taken_0x4a474c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a474c) {
            ctx->pc = 0x4A4750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A474Cu;
            // 0x4a4750: 0x32a300ff  andi        $v1, $s5, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A475Cu;
            goto label_4a475c;
        }
    }
    ctx->pc = 0x4A4754u;
label_4a4754:
    // 0x4a4754: 0x821211aa  lb          $s2, 0x11AA($s0)
    ctx->pc = 0x4a4754u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 4522)));
label_4a4758:
    // 0x4a4758: 0x32a300ff  andi        $v1, $s5, 0xFF
    ctx->pc = 0x4a4758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)255);
label_4a475c:
    // 0x4a475c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a475cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a4760:
    // 0x4a4760: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x4a4760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_4a4764:
    // 0x4a4764: 0x24420e84  addiu       $v0, $v0, 0xE84
    ctx->pc = 0x4a4764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3716));
label_4a4768:
    // 0x4a4768: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x4a4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_4a476c:
    // 0x4a476c: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x4a476cu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_4a4770:
    // 0x4a4770: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x4a4770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_4a4774:
    // 0x4a4774: 0x43a821  addu        $s5, $v0, $v1
    ctx->pc = 0x4a4774u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4778:
    // 0x4a4778: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4a4778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a477c:
    // 0x4a477c: 0x8c820e34  lw          $v0, 0xE34($a0)
    ctx->pc = 0x4a477cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4a4780:
    // 0x4a4780: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_4a4784:
    if (ctx->pc == 0x4A4784u) {
        ctx->pc = 0x4A4784u;
            // 0x4a4784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4788u;
        goto label_4a4788;
    }
    ctx->pc = 0x4A4780u;
    {
        const bool branch_taken_0x4a4780 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A4784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4780u;
            // 0x4a4784: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4780) {
            ctx->pc = 0x4A4798u;
            goto label_4a4798;
        }
    }
    ctx->pc = 0x4A4788u;
label_4a4788:
    // 0x4a4788: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x4a4788u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_4a478c:
    // 0x4a478c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_4a4790:
    if (ctx->pc == 0x4A4790u) {
        ctx->pc = 0x4A4794u;
        goto label_4a4794;
    }
    ctx->pc = 0x4A478Cu;
    {
        const bool branch_taken_0x4a478c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a478c) {
            ctx->pc = 0x4A4798u;
            goto label_4a4798;
        }
    }
    ctx->pc = 0x4A4794u;
label_4a4794:
    // 0x4a4794: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a4794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_4a4798:
    // 0x4a4798: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_4a479c:
    if (ctx->pc == 0x4A479Cu) {
        ctx->pc = 0x4A47A0u;
        goto label_4a47a0;
    }
    ctx->pc = 0x4A4798u;
    {
        const bool branch_taken_0x4a4798 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a4798) {
            ctx->pc = 0x4A47B4u;
            goto label_4a47b4;
        }
    }
    ctx->pc = 0x4A47A0u;
label_4a47a0:
    // 0x4a47a0: 0xc075eb4  jal         func_1D7AD0
label_4a47a4:
    if (ctx->pc == 0x4A47A4u) {
        ctx->pc = 0x4A47A8u;
        goto label_4a47a8;
    }
    ctx->pc = 0x4A47A0u;
    SET_GPR_U32(ctx, 31, 0x4A47A8u);
    ctx->pc = 0x1D7AD0u;
    if (runtime->hasFunction(0x1D7AD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D7AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A47A8u; }
        if (ctx->pc != 0x4A47A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D7AD0_0x1d7ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A47A8u; }
        if (ctx->pc != 0x4A47A8u) { return; }
    }
    ctx->pc = 0x4A47A8u;
label_4a47a8:
    // 0x4a47a8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_4a47ac:
    if (ctx->pc == 0x4A47ACu) {
        ctx->pc = 0x4A47B0u;
        goto label_4a47b0;
    }
    ctx->pc = 0x4A47A8u;
    {
        const bool branch_taken_0x4a47a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a47a8) {
            ctx->pc = 0x4A47B4u;
            goto label_4a47b4;
        }
    }
    ctx->pc = 0x4A47B0u;
label_4a47b0:
    // 0x4a47b0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x4a47b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a47b4:
    // 0x4a47b4: 0x56c00007  bnel        $s6, $zero, . + 4 + (0x7 << 2)
label_4a47b8:
    if (ctx->pc == 0x4A47B8u) {
        ctx->pc = 0x4A47B8u;
            // 0x4a47b8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x4A47BCu;
        goto label_4a47bc;
    }
    ctx->pc = 0x4A47B4u;
    {
        const bool branch_taken_0x4a47b4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a47b4) {
            ctx->pc = 0x4A47B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A47B4u;
            // 0x4a47b8: 0x8ea40000  lw          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A47D4u;
            goto label_4a47d4;
        }
    }
    ctx->pc = 0x4A47BCu;
label_4a47bc:
    // 0x4a47bc: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4a47bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a47c0:
    // 0x4a47c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a47c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a47c4:
    // 0x4a47c4: 0x8c830e34  lw          $v1, 0xE34($a0)
    ctx->pc = 0x4a47c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3636)));
label_4a47c8:
    // 0x4a47c8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_4a47cc:
    if (ctx->pc == 0x4A47CCu) {
        ctx->pc = 0x4A47CCu;
            // 0x4a47cc: 0x8e020da0  lw          $v0, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->pc = 0x4A47D0u;
        goto label_4a47d0;
    }
    ctx->pc = 0x4A47C8u;
    {
        const bool branch_taken_0x4a47c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a47c8) {
            ctx->pc = 0x4A47CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A47C8u;
            // 0x4a47cc: 0x8e020da0  lw          $v0, 0xDA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A47DCu;
            goto label_4a47dc;
        }
    }
    ctx->pc = 0x4A47D0u;
label_4a47d0:
    // 0x4a47d0: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4a47d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_4a47d4:
    // 0x4a47d4: 0x809111aa  lb          $s1, 0x11AA($a0)
    ctx->pc = 0x4a47d4u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4522)));
label_4a47d8:
    // 0x4a47d8: 0x8e020da0  lw          $v0, 0xDA0($s0)
    ctx->pc = 0x4a47d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3488)));
label_4a47dc:
    // 0x4a47dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a47dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_4a47e0:
    // 0x4a47e0: 0x50400153  beql        $v0, $zero, . + 4 + (0x153 << 2)
label_4a47e4:
    if (ctx->pc == 0x4A47E4u) {
        ctx->pc = 0x4A47E4u;
            // 0x4a47e4: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x4A47E8u;
        goto label_4a47e8;
    }
    ctx->pc = 0x4A47E0u;
    {
        const bool branch_taken_0x4a47e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a47e0) {
            ctx->pc = 0x4A47E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A47E0u;
            // 0x4a47e4: 0x8e990000  lw          $t9, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4D30u;
            goto label_4a4d30;
        }
    }
    ctx->pc = 0x4A47E8u;
label_4a47e8:
    // 0x4a47e8: 0x8c820d6c  lw          $v0, 0xD6C($a0)
    ctx->pc = 0x4a47e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3436)));
label_4a47ec:
    // 0x4a47ec: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x4a47ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_4a47f0:
    // 0x4a47f0: 0x2c410013  sltiu       $at, $v0, 0x13
    ctx->pc = 0x4a47f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_4a47f4:
    // 0x4a47f4: 0x10200149  beqz        $at, . + 4 + (0x149 << 2)
label_4a47f8:
    if (ctx->pc == 0x4A47F8u) {
        ctx->pc = 0x4A47F8u;
            // 0x4a47f8: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4A47FCu;
        goto label_4a47fc;
    }
    ctx->pc = 0x4A47F4u;
    {
        const bool branch_taken_0x4a47f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A47F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A47F4u;
            // 0x4a47f8: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a47f4) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A47FCu;
label_4a47fc:
    // 0x4a47fc: 0x3c030066  lui         $v1, 0x66
    ctx->pc = 0x4a47fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)102 << 16));
label_4a4800:
    // 0x4a4800: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4a4800u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_4a4804:
    // 0x4a4804: 0x246313d0  addiu       $v1, $v1, 0x13D0
    ctx->pc = 0x4a4804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5072));
label_4a4808:
    // 0x4a4808: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a480c:
    // 0x4a480c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4a480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_4a4810:
    // 0x4a4810: 0x400008  jr          $v0
label_4a4814:
    if (ctx->pc == 0x4A4814u) {
        ctx->pc = 0x4A4818u;
        goto label_4a4818;
    }
    ctx->pc = 0x4A4810u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x4A4818u: goto label_4a4818;
            case 0x4A4824u: goto label_4a4824;
            case 0x4A4874u: goto label_4a4874;
            case 0x4A49F0u: goto label_4a49f0;
            case 0x4A4A64u: goto label_4a4a64;
            case 0x4A4BC4u: goto label_4a4bc4;
            case 0x4A4BD0u: goto label_4a4bd0;
            case 0x4A4C40u: goto label_4a4c40;
            case 0x4A4CB0u: goto label_4a4cb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x4A4818u;
label_4a4818:
    // 0x4a4818: 0xae000e24  sw          $zero, 0xE24($s0)
    ctx->pc = 0x4a4818u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
label_4a481c:
    // 0x4a481c: 0x1000013f  b           . + 4 + (0x13F << 2)
label_4a4820:
    if (ctx->pc == 0x4A4820u) {
        ctx->pc = 0x4A4820u;
            // 0x4a4820: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x4A4824u;
        goto label_4a4824;
    }
    ctx->pc = 0x4A481Cu;
    {
        const bool branch_taken_0x4a481c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A481Cu;
            // 0x4a4820: 0x24140007  addiu       $s4, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a481c) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4824u;
label_4a4824:
    // 0x4a4824: 0x8e030e34  lw          $v1, 0xE34($s0)
    ctx->pc = 0x4a4824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3636)));
label_4a4828:
    // 0x4a4828: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x4a4828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a482c:
    // 0x4a482c: 0x5062013b  beql        $v1, $v0, . + 4 + (0x13B << 2)
label_4a4830:
    if (ctx->pc == 0x4A4830u) {
        ctx->pc = 0x4A4830u;
            // 0x4a4830: 0xae000e24  sw          $zero, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
        ctx->pc = 0x4A4834u;
        goto label_4a4834;
    }
    ctx->pc = 0x4A482Cu;
    {
        const bool branch_taken_0x4a482c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a482c) {
            ctx->pc = 0x4A4830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A482Cu;
            // 0x4a4830: 0xae000e24  sw          $zero, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4834u;
label_4a4834:
    // 0x4a4834: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x4a4834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
label_4a4838:
    // 0x4a4838: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a4838u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a483c:
    // 0x4a483c: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_4a4840:
    if (ctx->pc == 0x4A4840u) {
        ctx->pc = 0x4A4844u;
        goto label_4a4844;
    }
    ctx->pc = 0x4A483Cu;
    {
        const bool branch_taken_0x4a483c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a483c) {
            ctx->pc = 0x4A4868u;
            goto label_4a4868;
        }
    }
    ctx->pc = 0x4A4844u;
label_4a4844:
    // 0x4a4844: 0xc040180  jal         func_100600
label_4a4848:
    if (ctx->pc == 0x4A4848u) {
        ctx->pc = 0x4A4848u;
            // 0x4a4848: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->pc = 0x4A484Cu;
        goto label_4a484c;
    }
    ctx->pc = 0x4A4844u;
    SET_GPR_U32(ctx, 31, 0x4A484Cu);
    ctx->pc = 0x4A4848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4844u;
            // 0x4a4848: 0x24040070  addiu       $a0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A484Cu; }
        if (ctx->pc != 0x4A484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A484Cu; }
        if (ctx->pc != 0x4A484Cu) { return; }
    }
    ctx->pc = 0x4A484Cu;
label_4a484c:
    // 0x4a484c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_4a4850:
    if (ctx->pc == 0x4A4850u) {
        ctx->pc = 0x4A4854u;
        goto label_4a4854;
    }
    ctx->pc = 0x4A484Cu;
    {
        const bool branch_taken_0x4a484c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a484c) {
            ctx->pc = 0x4A4868u;
            goto label_4a4868;
        }
    }
    ctx->pc = 0x4A4854u;
label_4a4854:
    // 0x4a4854: 0x8e060d98  lw          $a2, 0xD98($s0)
    ctx->pc = 0x4a4854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a4858:
    // 0x4a4858: 0x122e3c  dsll32      $a1, $s2, 24
    ctx->pc = 0x4a4858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) << (32 + 24));
label_4a485c:
    // 0x4a485c: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x4a485cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
label_4a4860:
    // 0x4a4860: 0xc0c430c  jal         func_310C30
label_4a4864:
    if (ctx->pc == 0x4A4864u) {
        ctx->pc = 0x4A4864u;
            // 0x4a4864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4868u;
        goto label_4a4868;
    }
    ctx->pc = 0x4A4860u;
    SET_GPR_U32(ctx, 31, 0x4A4868u);
    ctx->pc = 0x4A4864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4860u;
            // 0x4a4864: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x310C30u;
    if (runtime->hasFunction(0x310C30u)) {
        auto targetFn = runtime->lookupFunction(0x310C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4868u; }
        if (ctx->pc != 0x4A4868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00310C30_0x310c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4868u; }
        if (ctx->pc != 0x4A4868u) { return; }
    }
    ctx->pc = 0x4A4868u;
label_4a4868:
    // 0x4a4868: 0xae000e24  sw          $zero, 0xE24($s0)
    ctx->pc = 0x4a4868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
label_4a486c:
    // 0x4a486c: 0x1000012b  b           . + 4 + (0x12B << 2)
label_4a4870:
    if (ctx->pc == 0x4A4870u) {
        ctx->pc = 0x4A4874u;
        goto label_4a4874;
    }
    ctx->pc = 0x4A486Cu;
    {
        const bool branch_taken_0x4a486c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a486c) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4874u;
label_4a4874:
    // 0x4a4874: 0x12ae3c  dsll32      $s5, $s2, 24
    ctx->pc = 0x4a4874u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << (32 + 24));
label_4a4878:
    // 0x4a4878: 0x15ae3f  dsra32      $s5, $s5, 24
    ctx->pc = 0x4a4878u;
    SET_GPR_S64(ctx, 21, GPR_S64(ctx, 21) >> (32 + 24));
label_4a487c:
    // 0x4a487c: 0x6a2001e  bltzl       $s5, . + 4 + (0x1E << 2)
label_4a4880:
    if (ctx->pc == 0x4A4880u) {
        ctx->pc = 0x4A4880u;
            // 0x4a4880: 0x11163c  dsll32      $v0, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
        ctx->pc = 0x4A4884u;
        goto label_4a4884;
    }
    ctx->pc = 0x4A487Cu;
    {
        const bool branch_taken_0x4a487c = (GPR_S32(ctx, 21) < 0);
        if (branch_taken_0x4a487c) {
            ctx->pc = 0x4A4880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A487Cu;
            // 0x4a4880: 0x11163c  dsll32      $v0, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A48F8u;
            goto label_4a48f8;
        }
    }
    ctx->pc = 0x4A4884u;
label_4a4884:
    // 0x4a4884: 0x8e0511c4  lw          $a1, 0x11C4($s0)
    ctx->pc = 0x4a4884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4548)));
label_4a4888:
    // 0x4a4888: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4a488c:
    if (ctx->pc == 0x4A488Cu) {
        ctx->pc = 0x4A488Cu;
            // 0x4a488c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A4890u;
        goto label_4a4890;
    }
    ctx->pc = 0x4A4888u;
    {
        const bool branch_taken_0x4a4888 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4888) {
            ctx->pc = 0x4A488Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4888u;
            // 0x4a488c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A48A4u;
            goto label_4a48a4;
        }
    }
    ctx->pc = 0x4A4890u;
label_4a4890:
    // 0x4a4890: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4894:
    // 0x4a4894: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4898:
    // 0x4a4898: 0xc057b7c  jal         func_15EDF0
label_4a489c:
    if (ctx->pc == 0x4A489Cu) {
        ctx->pc = 0x4A489Cu;
            // 0x4a489c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A48A0u;
        goto label_4a48a0;
    }
    ctx->pc = 0x4A4898u;
    SET_GPR_U32(ctx, 31, 0x4A48A0u);
    ctx->pc = 0x4A489Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4898u;
            // 0x4a489c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48A0u; }
        if (ctx->pc != 0x4A48A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48A0u; }
        if (ctx->pc != 0x4A48A0u) { return; }
    }
    ctx->pc = 0x4A48A0u;
label_4a48a0:
    // 0x4a48a0: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4a48a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4a48a4:
    // 0x4a48a4: 0xc040180  jal         func_100600
label_4a48a8:
    if (ctx->pc == 0x4A48A8u) {
        ctx->pc = 0x4A48ACu;
        goto label_4a48ac;
    }
    ctx->pc = 0x4A48A4u;
    SET_GPR_U32(ctx, 31, 0x4A48ACu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48ACu; }
        if (ctx->pc != 0x4A48ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48ACu; }
        if (ctx->pc != 0x4A48ACu) { return; }
    }
    ctx->pc = 0x4A48ACu;
label_4a48ac:
    // 0x4a48ac: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4a48b0:
    if (ctx->pc == 0x4A48B0u) {
        ctx->pc = 0x4A48B0u;
            // 0x4a48b0: 0xae0211c4  sw          $v0, 0x11C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
        ctx->pc = 0x4A48B4u;
        goto label_4a48b4;
    }
    ctx->pc = 0x4A48ACu;
    {
        const bool branch_taken_0x4a48ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a48ac) {
            ctx->pc = 0x4A48B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A48ACu;
            // 0x4a48b0: 0xae0211c4  sw          $v0, 0x11C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A48ECu;
            goto label_4a48ec;
        }
    }
    ctx->pc = 0x4A48B4u;
label_4a48b4:
    // 0x4a48b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a48b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a48b8:
    // 0x4a48b8: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a48b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a48bc:
    // 0x4a48bc: 0x124e3c  dsll32      $t1, $s2, 24
    ctx->pc = 0x4a48bcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 24));
label_4a48c0:
    // 0x4a48c0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a48c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a48c4:
    // 0x4a48c4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a48c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a48c8:
    // 0x4a48c8: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a48c8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a48cc:
    // 0x4a48cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a48ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a48d0:
    // 0x4a48d0: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a48d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a48d4:
    // 0x4a48d4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a48d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a48d8:
    // 0x4a48d8: 0x24e7f620  addiu       $a3, $a3, -0x9E0
    ctx->pc = 0x4a48d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964768));
label_4a48dc:
    // 0x4a48dc: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a48dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a48e0:
    // 0x4a48e0: 0xc0b9404  jal         func_2E5010
label_4a48e4:
    if (ctx->pc == 0x4A48E4u) {
        ctx->pc = 0x4A48E4u;
            // 0x4a48e4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4A48E8u;
        goto label_4a48e8;
    }
    ctx->pc = 0x4A48E0u;
    SET_GPR_U32(ctx, 31, 0x4A48E8u);
    ctx->pc = 0x4A48E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A48E0u;
            // 0x4a48e4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48E8u; }
        if (ctx->pc != 0x4A48E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48E8u; }
        if (ctx->pc != 0x4A48E8u) { return; }
    }
    ctx->pc = 0x4A48E8u;
label_4a48e8:
    // 0x4a48e8: 0xae0211c4  sw          $v0, 0x11C4($s0)
    ctx->pc = 0x4a48e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
label_4a48ec:
    // 0x4a48ec: 0xc072a56  jal         func_1CA958
label_4a48f0:
    if (ctx->pc == 0x4A48F0u) {
        ctx->pc = 0x4A48F0u;
            // 0x4a48f0: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x4A48F4u;
        goto label_4a48f4;
    }
    ctx->pc = 0x4A48ECu;
    SET_GPR_U32(ctx, 31, 0x4A48F4u);
    ctx->pc = 0x4A48F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A48ECu;
            // 0x4a48f0: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48F4u; }
        if (ctx->pc != 0x4A48F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A48F4u; }
        if (ctx->pc != 0x4A48F4u) { return; }
    }
    ctx->pc = 0x4A48F4u;
label_4a48f4:
    // 0x4a48f4: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x4a48f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
label_4a48f8:
    // 0x4a48f8: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a48f8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a48fc:
    // 0x4a48fc: 0x4420021  bltzl       $v0, . + 4 + (0x21 << 2)
label_4a4900:
    if (ctx->pc == 0x4A4900u) {
        ctx->pc = 0x4A4900u;
            // 0x4a4900: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A4904u;
        goto label_4a4904;
    }
    ctx->pc = 0x4A48FCu;
    {
        const bool branch_taken_0x4a48fc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a48fc) {
            ctx->pc = 0x4A4900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A48FCu;
            // 0x4a4900: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4984u;
            goto label_4a4984;
        }
    }
    ctx->pc = 0x4A4904u;
label_4a4904:
    // 0x4a4904: 0x8e0511c8  lw          $a1, 0x11C8($s0)
    ctx->pc = 0x4a4904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4552)));
label_4a4908:
    // 0x4a4908: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4a490c:
    if (ctx->pc == 0x4A490Cu) {
        ctx->pc = 0x4A490Cu;
            // 0x4a490c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A4910u;
        goto label_4a4910;
    }
    ctx->pc = 0x4A4908u;
    {
        const bool branch_taken_0x4a4908 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4908) {
            ctx->pc = 0x4A490Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4908u;
            // 0x4a490c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4924u;
            goto label_4a4924;
        }
    }
    ctx->pc = 0x4A4910u;
label_4a4910:
    // 0x4a4910: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4914:
    // 0x4a4914: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4918:
    // 0x4a4918: 0xc057b7c  jal         func_15EDF0
label_4a491c:
    if (ctx->pc == 0x4A491Cu) {
        ctx->pc = 0x4A491Cu;
            // 0x4a491c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4920u;
        goto label_4a4920;
    }
    ctx->pc = 0x4A4918u;
    SET_GPR_U32(ctx, 31, 0x4A4920u);
    ctx->pc = 0x4A491Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4918u;
            // 0x4a491c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4920u; }
        if (ctx->pc != 0x4A4920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4920u; }
        if (ctx->pc != 0x4A4920u) { return; }
    }
    ctx->pc = 0x4A4920u;
label_4a4920:
    // 0x4a4920: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4a4920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4a4924:
    // 0x4a4924: 0xc040180  jal         func_100600
label_4a4928:
    if (ctx->pc == 0x4A4928u) {
        ctx->pc = 0x4A492Cu;
        goto label_4a492c;
    }
    ctx->pc = 0x4A4924u;
    SET_GPR_U32(ctx, 31, 0x4A492Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A492Cu; }
        if (ctx->pc != 0x4A492Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A492Cu; }
        if (ctx->pc != 0x4A492Cu) { return; }
    }
    ctx->pc = 0x4A492Cu;
label_4a492c:
    // 0x4a492c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4a4930:
    if (ctx->pc == 0x4A4930u) {
        ctx->pc = 0x4A4930u;
            // 0x4a4930: 0xae0211c8  sw          $v0, 0x11C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4934u;
        goto label_4a4934;
    }
    ctx->pc = 0x4A492Cu;
    {
        const bool branch_taken_0x4a492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a492c) {
            ctx->pc = 0x4A4930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A492Cu;
            // 0x4a4930: 0xae0211c8  sw          $v0, 0x11C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A496Cu;
            goto label_4a496c;
        }
    }
    ctx->pc = 0x4A4934u;
label_4a4934:
    // 0x4a4934: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a4934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a4938:
    // 0x4a4938: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a4938u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a493c:
    // 0x4a493c: 0x114e3c  dsll32      $t1, $s1, 24
    ctx->pc = 0x4a493cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 24));
label_4a4940:
    // 0x4a4940: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a4940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a4944:
    // 0x4a4944: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a4944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a4948:
    // 0x4a4948: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a4948u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a494c:
    // 0x4a494c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a494cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4950:
    // 0x4a4950: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a4950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a4954:
    // 0x4a4954: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a4954u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4958:
    // 0x4a4958: 0x24e7f620  addiu       $a3, $a3, -0x9E0
    ctx->pc = 0x4a4958u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294964768));
label_4a495c:
    // 0x4a495c: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a495cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a4960:
    // 0x4a4960: 0xc0b9404  jal         func_2E5010
label_4a4964:
    if (ctx->pc == 0x4A4964u) {
        ctx->pc = 0x4A4964u;
            // 0x4a4964: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4A4968u;
        goto label_4a4968;
    }
    ctx->pc = 0x4A4960u;
    SET_GPR_U32(ctx, 31, 0x4A4968u);
    ctx->pc = 0x4A4964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4960u;
            // 0x4a4964: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4968u; }
        if (ctx->pc != 0x4A4968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4968u; }
        if (ctx->pc != 0x4A4968u) { return; }
    }
    ctx->pc = 0x4A4968u;
label_4a4968:
    // 0x4a4968: 0xae0211c8  sw          $v0, 0x11C8($s0)
    ctx->pc = 0x4a4968u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
label_4a496c:
    // 0x4a496c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x4a496cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4970:
    // 0x4a4970: 0x16a20003  bne         $s5, $v0, . + 4 + (0x3 << 2)
label_4a4974:
    if (ctx->pc == 0x4A4974u) {
        ctx->pc = 0x4A4978u;
        goto label_4a4978;
    }
    ctx->pc = 0x4A4970u;
    {
        const bool branch_taken_0x4a4970 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a4970) {
            ctx->pc = 0x4A4980u;
            goto label_4a4980;
        }
    }
    ctx->pc = 0x4A4978u;
label_4a4978:
    // 0x4a4978: 0xc072a56  jal         func_1CA958
label_4a497c:
    if (ctx->pc == 0x4A497Cu) {
        ctx->pc = 0x4A497Cu;
            // 0x4a497c: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x4A4980u;
        goto label_4a4980;
    }
    ctx->pc = 0x4A4978u;
    SET_GPR_U32(ctx, 31, 0x4A4980u);
    ctx->pc = 0x4A497Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4978u;
            // 0x4a497c: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA958u;
    if (runtime->hasFunction(0x1CA958u)) {
        auto targetFn = runtime->lookupFunction(0x1CA958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4980u; }
        if (ctx->pc != 0x4A4980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA958_0x1ca958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4980u; }
        if (ctx->pc != 0x4A4980u) { return; }
    }
    ctx->pc = 0x4A4980u;
label_4a4980:
    // 0x4a4980: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4980u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4984:
    // 0x4a4984: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4988:
    // 0x4a4988: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a498c:
    // 0x4a498c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a498cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4990:
    // 0x4a4990: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4994:
    // 0x4a4994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4998:
    // 0x4a4998: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4998u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a499c:
    // 0x4a499c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a499cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a49a0:
    // 0x4a49a0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a49a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a49a4:
    // 0x4a49a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a49a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a49a8:
    // 0x4a49a8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a49a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a49ac:
    // 0x4a49ac: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a49acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a49b0:
    // 0x4a49b0: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a49b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a49b4:
    // 0x4a49b4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a49b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a49b8:
    // 0x4a49b8: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a49b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a49bc:
    // 0x4a49bc: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a49bcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a49c0:
    // 0x4a49c0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a49c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a49c4:
    // 0x4a49c4: 0x320f809  jalr        $t9
label_4a49c8:
    if (ctx->pc == 0x4A49C8u) {
        ctx->pc = 0x4A49C8u;
            // 0x4a49c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A49CCu;
        goto label_4a49cc;
    }
    ctx->pc = 0x4A49C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A49CCu);
        ctx->pc = 0x4A49C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A49C4u;
            // 0x4a49c8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A49CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A49CCu; }
            if (ctx->pc != 0x4A49CCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A49CCu;
label_4a49cc:
    // 0x4a49cc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a49ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a49d0:
    // 0x4a49d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a49d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a49d4:
    // 0x4a49d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a49d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a49d8:
    // 0x4a49d8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a49d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a49dc:
    // 0x4a49dc: 0x320f809  jalr        $t9
label_4a49e0:
    if (ctx->pc == 0x4A49E0u) {
        ctx->pc = 0x4A49E0u;
            // 0x4a49e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A49E4u;
        goto label_4a49e4;
    }
    ctx->pc = 0x4A49DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A49E4u);
        ctx->pc = 0x4A49E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A49DCu;
            // 0x4a49e0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A49E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A49E4u; }
            if (ctx->pc != 0x4A49E4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A49E4u;
label_4a49e4:
    // 0x4a49e4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a49e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a49e8:
    // 0x4a49e8: 0x100000cc  b           . + 4 + (0xCC << 2)
label_4a49ec:
    if (ctx->pc == 0x4A49ECu) {
        ctx->pc = 0x4A49ECu;
            // 0x4a49ec: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A49F0u;
        goto label_4a49f0;
    }
    ctx->pc = 0x4A49E8u;
    {
        const bool branch_taken_0x4a49e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A49ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A49E8u;
            // 0x4a49ec: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a49e8) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A49F0u;
label_4a49f0:
    // 0x4a49f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x4a49f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a49f4:
    // 0x4a49f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a49f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a49f8:
    // 0x4a49f8: 0xa20811cc  sb          $t0, 0x11CC($s0)
    ctx->pc = 0x4a49f8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4556), (uint8_t)GPR_U32(ctx, 8));
label_4a49fc:
    // 0x4a49fc: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a49fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4a00:
    // 0x4a4a00: 0x8263010c  lb          $v1, 0x10C($s3)
    ctx->pc = 0x4a4a00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4a04:
    // 0x4a4a04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x4a4a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4a08:
    // 0x4a4a08: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4a08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4a0c:
    // 0x4a4a0c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4a10:
    // 0x4a4a10: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a4a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a4a14:
    // 0x4a4a14: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x4a4a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_4a4a18:
    // 0x4a4a18: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4a18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4a1c:
    // 0x4a4a1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4a20:
    // 0x4a4a20: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4a20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4a24:
    // 0x4a4a24: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4a28:
    // 0x4a4a28: 0xac450080  sw          $a1, 0x80($v0)
    ctx->pc = 0x4a4a28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 5));
label_4a4a2c:
    // 0x4a4a2c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4a2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4a30:
    // 0x4a4a30: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4a30u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4a34:
    // 0x4a4a34: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4a34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4a38:
    // 0x4a4a38: 0x320f809  jalr        $t9
label_4a4a3c:
    if (ctx->pc == 0x4A4A3Cu) {
        ctx->pc = 0x4A4A3Cu;
            // 0x4a4a3c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4A40u;
        goto label_4a4a40;
    }
    ctx->pc = 0x4A4A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4A40u);
        ctx->pc = 0x4A4A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A38u;
            // 0x4a4a3c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4A40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A40u; }
            if (ctx->pc != 0x4A4A40u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4A40u;
label_4a4a40:
    // 0x4a4a40: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4a40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4a44:
    // 0x4a4a44: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4a48:
    // 0x4a4a48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4a4c:
    // 0x4a4a4c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4a4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4a50:
    // 0x4a4a50: 0x320f809  jalr        $t9
label_4a4a54:
    if (ctx->pc == 0x4A4A54u) {
        ctx->pc = 0x4A4A54u;
            // 0x4a4a54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A58u;
        goto label_4a4a58;
    }
    ctx->pc = 0x4A4A50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4A58u);
        ctx->pc = 0x4A4A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A50u;
            // 0x4a4a54: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4A58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A58u; }
            if (ctx->pc != 0x4A4A58u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4A58u;
label_4a4a58:
    // 0x4a4a58: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4a5c:
    // 0x4a4a5c: 0x100000af  b           . + 4 + (0xAF << 2)
label_4a4a60:
    if (ctx->pc == 0x4A4A60u) {
        ctx->pc = 0x4A4A60u;
            // 0x4a4a60: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4A64u;
        goto label_4a4a64;
    }
    ctx->pc = 0x4A4A5Cu;
    {
        const bool branch_taken_0x4a4a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A5Cu;
            // 0x4a4a60: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4a5c) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4A64u;
label_4a4a64:
    // 0x4a4a64: 0x12163c  dsll32      $v0, $s2, 24
    ctx->pc = 0x4a4a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 24));
label_4a4a68:
    // 0x4a4a68: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a4a68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a4a6c:
    // 0x4a4a6c: 0x442001c  bltzl       $v0, . + 4 + (0x1C << 2)
label_4a4a70:
    if (ctx->pc == 0x4A4A70u) {
        ctx->pc = 0x4A4A70u;
            // 0x4a4a70: 0x11163c  dsll32      $v0, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
        ctx->pc = 0x4A4A74u;
        goto label_4a4a74;
    }
    ctx->pc = 0x4A4A6Cu;
    {
        const bool branch_taken_0x4a4a6c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a4a6c) {
            ctx->pc = 0x4A4A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A6Cu;
            // 0x4a4a70: 0x11163c  dsll32      $v0, $s1, 24 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4AE0u;
            goto label_4a4ae0;
        }
    }
    ctx->pc = 0x4A4A74u;
label_4a4a74:
    // 0x4a4a74: 0x8e0511c4  lw          $a1, 0x11C4($s0)
    ctx->pc = 0x4a4a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4548)));
label_4a4a78:
    // 0x4a4a78: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4a4a7c:
    if (ctx->pc == 0x4A4A7Cu) {
        ctx->pc = 0x4A4A7Cu;
            // 0x4a4a7c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A4A80u;
        goto label_4a4a80;
    }
    ctx->pc = 0x4A4A78u;
    {
        const bool branch_taken_0x4a4a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4a78) {
            ctx->pc = 0x4A4A7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A78u;
            // 0x4a4a7c: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4A94u;
            goto label_4a4a94;
        }
    }
    ctx->pc = 0x4A4A80u;
label_4a4a80:
    // 0x4a4a80: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4a80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4a84:
    // 0x4a4a84: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4a88:
    // 0x4a4a88: 0xc057b7c  jal         func_15EDF0
label_4a4a8c:
    if (ctx->pc == 0x4A4A8Cu) {
        ctx->pc = 0x4A4A8Cu;
            // 0x4a4a8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4A90u;
        goto label_4a4a90;
    }
    ctx->pc = 0x4A4A88u;
    SET_GPR_U32(ctx, 31, 0x4A4A90u);
    ctx->pc = 0x4A4A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A88u;
            // 0x4a4a8c: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A90u; }
        if (ctx->pc != 0x4A4A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A90u; }
        if (ctx->pc != 0x4A4A90u) { return; }
    }
    ctx->pc = 0x4A4A90u;
label_4a4a90:
    // 0x4a4a90: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4a4a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4a4a94:
    // 0x4a4a94: 0xc040180  jal         func_100600
label_4a4a98:
    if (ctx->pc == 0x4A4A98u) {
        ctx->pc = 0x4A4A9Cu;
        goto label_4a4a9c;
    }
    ctx->pc = 0x4A4A94u;
    SET_GPR_U32(ctx, 31, 0x4A4A9Cu);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A9Cu; }
        if (ctx->pc != 0x4A4A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4A9Cu; }
        if (ctx->pc != 0x4A4A9Cu) { return; }
    }
    ctx->pc = 0x4A4A9Cu;
label_4a4a9c:
    // 0x4a4a9c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4a4aa0:
    if (ctx->pc == 0x4A4AA0u) {
        ctx->pc = 0x4A4AA0u;
            // 0x4a4aa0: 0xae0211c4  sw          $v0, 0x11C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4AA4u;
        goto label_4a4aa4;
    }
    ctx->pc = 0x4A4A9Cu;
    {
        const bool branch_taken_0x4a4a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4a9c) {
            ctx->pc = 0x4A4AA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4A9Cu;
            // 0x4a4aa0: 0xae0211c4  sw          $v0, 0x11C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4ADCu;
            goto label_4a4adc;
        }
    }
    ctx->pc = 0x4A4AA4u;
label_4a4aa4:
    // 0x4a4aa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a4aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a4aa8:
    // 0x4a4aa8: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a4aa8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a4aac:
    // 0x4a4aac: 0x124e3c  dsll32      $t1, $s2, 24
    ctx->pc = 0x4a4aacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 18) << (32 + 24));
label_4a4ab0:
    // 0x4a4ab0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a4ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a4ab4:
    // 0x4a4ab4: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a4ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a4ab8:
    // 0x4a4ab8: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a4ab8u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a4abc:
    // 0x4a4abc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4abcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4ac0:
    // 0x4a4ac0: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a4ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a4ac4:
    // 0x4a4ac4: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a4ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4ac8:
    // 0x4a4ac8: 0x24e7f860  addiu       $a3, $a3, -0x7A0
    ctx->pc = 0x4a4ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965344));
label_4a4acc:
    // 0x4a4acc: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a4accu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a4ad0:
    // 0x4a4ad0: 0xc0b9404  jal         func_2E5010
label_4a4ad4:
    if (ctx->pc == 0x4A4AD4u) {
        ctx->pc = 0x4A4AD4u;
            // 0x4a4ad4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4A4AD8u;
        goto label_4a4ad8;
    }
    ctx->pc = 0x4A4AD0u;
    SET_GPR_U32(ctx, 31, 0x4A4AD8u);
    ctx->pc = 0x4A4AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4AD0u;
            // 0x4a4ad4: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4AD8u; }
        if (ctx->pc != 0x4A4AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4AD8u; }
        if (ctx->pc != 0x4A4AD8u) { return; }
    }
    ctx->pc = 0x4A4AD8u;
label_4a4ad8:
    // 0x4a4ad8: 0xae0211c4  sw          $v0, 0x11C4($s0)
    ctx->pc = 0x4a4ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 2));
label_4a4adc:
    // 0x4a4adc: 0x11163c  dsll32      $v0, $s1, 24
    ctx->pc = 0x4a4adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 24));
label_4a4ae0:
    // 0x4a4ae0: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x4a4ae0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_4a4ae4:
    // 0x4a4ae4: 0x442001c  bltzl       $v0, . + 4 + (0x1C << 2)
label_4a4ae8:
    if (ctx->pc == 0x4A4AE8u) {
        ctx->pc = 0x4A4AE8u;
            // 0x4a4ae8: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->pc = 0x4A4AECu;
        goto label_4a4aec;
    }
    ctx->pc = 0x4A4AE4u;
    {
        const bool branch_taken_0x4a4ae4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x4a4ae4) {
            ctx->pc = 0x4A4AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4AE4u;
            // 0x4a4ae8: 0x8265010c  lb          $a1, 0x10C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4B58u;
            goto label_4a4b58;
        }
    }
    ctx->pc = 0x4A4AECu;
label_4a4aec:
    // 0x4a4aec: 0x8e0511c8  lw          $a1, 0x11C8($s0)
    ctx->pc = 0x4a4aecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4552)));
label_4a4af0:
    // 0x4a4af0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_4a4af4:
    if (ctx->pc == 0x4A4AF4u) {
        ctx->pc = 0x4A4AF4u;
            // 0x4a4af4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->pc = 0x4A4AF8u;
        goto label_4a4af8;
    }
    ctx->pc = 0x4A4AF0u;
    {
        const bool branch_taken_0x4a4af0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4af0) {
            ctx->pc = 0x4A4AF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4AF0u;
            // 0x4a4af4: 0x240400d0  addiu       $a0, $zero, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4B0Cu;
            goto label_4a4b0c;
        }
    }
    ctx->pc = 0x4A4AF8u;
label_4a4af8:
    // 0x4a4af8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4afc:
    // 0x4a4afc: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4b00:
    // 0x4a4b00: 0xc057b7c  jal         func_15EDF0
label_4a4b04:
    if (ctx->pc == 0x4A4B04u) {
        ctx->pc = 0x4A4B04u;
            // 0x4a4b04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4B08u;
        goto label_4a4b08;
    }
    ctx->pc = 0x4A4B00u;
    SET_GPR_U32(ctx, 31, 0x4A4B08u);
    ctx->pc = 0x4A4B04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4B00u;
            // 0x4a4b04: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B08u; }
        if (ctx->pc != 0x4A4B08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B08u; }
        if (ctx->pc != 0x4A4B08u) { return; }
    }
    ctx->pc = 0x4A4B08u;
label_4a4b08:
    // 0x4a4b08: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x4a4b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_4a4b0c:
    // 0x4a4b0c: 0xc040180  jal         func_100600
label_4a4b10:
    if (ctx->pc == 0x4A4B10u) {
        ctx->pc = 0x4A4B14u;
        goto label_4a4b14;
    }
    ctx->pc = 0x4A4B0Cu;
    SET_GPR_U32(ctx, 31, 0x4A4B14u);
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B14u; }
        if (ctx->pc != 0x4A4B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B14u; }
        if (ctx->pc != 0x4A4B14u) { return; }
    }
    ctx->pc = 0x4A4B14u;
label_4a4b14:
    // 0x4a4b14: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_4a4b18:
    if (ctx->pc == 0x4A4B18u) {
        ctx->pc = 0x4A4B18u;
            // 0x4a4b18: 0xae0211c8  sw          $v0, 0x11C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4B1Cu;
        goto label_4a4b1c;
    }
    ctx->pc = 0x4A4B14u;
    {
        const bool branch_taken_0x4a4b14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4b14) {
            ctx->pc = 0x4A4B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4B14u;
            // 0x4a4b18: 0xae0211c8  sw          $v0, 0x11C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4B54u;
            goto label_4a4b54;
        }
    }
    ctx->pc = 0x4A4B1Cu;
label_4a4b1c:
    // 0x4a4b1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a4b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a4b20:
    // 0x4a4b20: 0x8e0a0d98  lw          $t2, 0xD98($s0)
    ctx->pc = 0x4a4b20u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3480)));
label_4a4b24:
    // 0x4a4b24: 0x114e3c  dsll32      $t1, $s1, 24
    ctx->pc = 0x4a4b24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) << (32 + 24));
label_4a4b28:
    // 0x4a4b28: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x4a4b28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_4a4b2c:
    // 0x4a4b2c: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x4a4b2cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
label_4a4b30:
    // 0x4a4b30: 0x94e3f  dsra32      $t1, $t1, 24
    ctx->pc = 0x4a4b30u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 24));
label_4a4b34:
    // 0x4a4b34: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4b34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4b38:
    // 0x4a4b38: 0x34459444  ori         $a1, $v0, 0x9444
    ctx->pc = 0x4a4b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)37956);
label_4a4b3c:
    // 0x4a4b3c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x4a4b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4b40:
    // 0x4a4b40: 0x24e7f860  addiu       $a3, $a3, -0x7A0
    ctx->pc = 0x4a4b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965344));
label_4a4b44:
    // 0x4a4b44: 0x24080082  addiu       $t0, $zero, 0x82
    ctx->pc = 0x4a4b44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_4a4b48:
    // 0x4a4b48: 0xc0b9404  jal         func_2E5010
label_4a4b4c:
    if (ctx->pc == 0x4A4B4Cu) {
        ctx->pc = 0x4A4B4Cu;
            // 0x4a4b4c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x4A4B50u;
        goto label_4a4b50;
    }
    ctx->pc = 0x4A4B48u;
    SET_GPR_U32(ctx, 31, 0x4A4B50u);
    ctx->pc = 0x4A4B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4B48u;
            // 0x4a4b4c: 0x240b0006  addiu       $t3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E5010u;
    if (runtime->hasFunction(0x2E5010u)) {
        auto targetFn = runtime->lookupFunction(0x2E5010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B50u; }
        if (ctx->pc != 0x4A4B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E5010_0x2e5010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4B50u; }
        if (ctx->pc != 0x4A4B50u) { return; }
    }
    ctx->pc = 0x4A4B50u;
label_4a4b50:
    // 0x4a4b50: 0xae0211c8  sw          $v0, 0x11C8($s0)
    ctx->pc = 0x4a4b50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 2));
label_4a4b54:
    // 0x4a4b54: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4b54u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4b58:
    // 0x4a4b58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4b5c:
    // 0x4a4b5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4b60:
    // 0x4a4b60: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a4b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4b64:
    // 0x4a4b64: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4b64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4b68:
    // 0x4a4b68: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4b6c:
    // 0x4a4b6c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a4b70:
    // 0x4a4b70: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a4b70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a4b74:
    // 0x4a4b74: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4b74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4b78:
    // 0x4a4b78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4b7c:
    // 0x4a4b7c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4b80:
    // 0x4a4b80: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4b84:
    // 0x4a4b84: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4b88:
    // 0x4a4b88: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4b88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4b8c:
    // 0x4a4b8c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4b8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4b90:
    // 0x4a4b90: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4b90u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4b94:
    // 0x4a4b94: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4b94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4b98:
    // 0x4a4b98: 0x320f809  jalr        $t9
label_4a4b9c:
    if (ctx->pc == 0x4A4B9Cu) {
        ctx->pc = 0x4A4B9Cu;
            // 0x4a4b9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4BA0u;
        goto label_4a4ba0;
    }
    ctx->pc = 0x4A4B98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4BA0u);
        ctx->pc = 0x4A4B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4B98u;
            // 0x4a4b9c: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4BA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4BA0u; }
            if (ctx->pc != 0x4A4BA0u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4BA0u;
label_4a4ba0:
    // 0x4a4ba0: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4ba4:
    // 0x4a4ba4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4ba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4ba8:
    // 0x4a4ba8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4bac:
    // 0x4a4bac: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4bacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4bb0:
    // 0x4a4bb0: 0x320f809  jalr        $t9
label_4a4bb4:
    if (ctx->pc == 0x4A4BB4u) {
        ctx->pc = 0x4A4BB4u;
            // 0x4a4bb4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BB8u;
        goto label_4a4bb8;
    }
    ctx->pc = 0x4A4BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4BB8u);
        ctx->pc = 0x4A4BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4BB0u;
            // 0x4a4bb4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4BB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4BB8u; }
            if (ctx->pc != 0x4A4BB8u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4BB8u;
label_4a4bb8:
    // 0x4a4bb8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4bbc:
    // 0x4a4bbc: 0x10000057  b           . + 4 + (0x57 << 2)
label_4a4bc0:
    if (ctx->pc == 0x4A4BC0u) {
        ctx->pc = 0x4A4BC0u;
            // 0x4a4bc0: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4BC4u;
        goto label_4a4bc4;
    }
    ctx->pc = 0x4A4BBCu;
    {
        const bool branch_taken_0x4a4bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4BBCu;
            // 0x4a4bc0: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bbc) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4BC4u;
label_4a4bc4:
    // 0x4a4bc4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4bc8:
    // 0x4a4bc8: 0x10000054  b           . + 4 + (0x54 << 2)
label_4a4bcc:
    if (ctx->pc == 0x4A4BCCu) {
        ctx->pc = 0x4A4BCCu;
            // 0x4a4bcc: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4BD0u;
        goto label_4a4bd0;
    }
    ctx->pc = 0x4A4BC8u;
    {
        const bool branch_taken_0x4a4bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4BC8u;
            // 0x4a4bcc: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4bc8) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4BD0u;
label_4a4bd0:
    // 0x4a4bd0: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4bd0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4bd4:
    // 0x4a4bd4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4bd8:
    // 0x4a4bd8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4bdc:
    // 0x4a4bdc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a4bdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4be0:
    // 0x4a4be0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4be0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4be4:
    // 0x4a4be4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4be8:
    // 0x4a4be8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4be8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a4bec:
    // 0x4a4bec: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a4becu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a4bf0:
    // 0x4a4bf0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4bf4:
    // 0x4a4bf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4bf8:
    // 0x4a4bf8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4bfc:
    // 0x4a4bfc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4c00:
    // 0x4a4c00: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4c00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4c04:
    // 0x4a4c04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4c08:
    // 0x4a4c08: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4c08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4c0c:
    // 0x4a4c0c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4c0cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4c10:
    // 0x4a4c10: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4c10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4c14:
    // 0x4a4c14: 0x320f809  jalr        $t9
label_4a4c18:
    if (ctx->pc == 0x4A4C18u) {
        ctx->pc = 0x4A4C18u;
            // 0x4a4c18: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4C1Cu;
        goto label_4a4c1c;
    }
    ctx->pc = 0x4A4C14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4C1Cu);
        ctx->pc = 0x4A4C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4C14u;
            // 0x4a4c18: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4C1Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4C1Cu; }
            if (ctx->pc != 0x4A4C1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A4C1Cu;
label_4a4c1c:
    // 0x4a4c1c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4c1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4c20:
    // 0x4a4c20: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4c24:
    // 0x4a4c24: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4c28:
    // 0x4a4c28: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4c28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4c2c:
    // 0x4a4c2c: 0x320f809  jalr        $t9
label_4a4c30:
    if (ctx->pc == 0x4A4C30u) {
        ctx->pc = 0x4A4C30u;
            // 0x4a4c30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C34u;
        goto label_4a4c34;
    }
    ctx->pc = 0x4A4C2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4C34u);
        ctx->pc = 0x4A4C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4C2Cu;
            // 0x4a4c30: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4C34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4C34u; }
            if (ctx->pc != 0x4A4C34u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4C34u;
label_4a4c34:
    // 0x4a4c34: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4c34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4c38:
    // 0x4a4c38: 0x10000038  b           . + 4 + (0x38 << 2)
label_4a4c3c:
    if (ctx->pc == 0x4A4C3Cu) {
        ctx->pc = 0x4A4C3Cu;
            // 0x4a4c3c: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4C40u;
        goto label_4a4c40;
    }
    ctx->pc = 0x4A4C38u;
    {
        const bool branch_taken_0x4a4c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4C38u;
            // 0x4a4c3c: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4c38) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4C40u;
label_4a4c40:
    // 0x4a4c40: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4c40u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4c44:
    // 0x4a4c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4c48:
    // 0x4a4c48: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4c4c:
    // 0x4a4c4c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a4c4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4c50:
    // 0x4a4c50: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4c50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4c54:
    // 0x4a4c54: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4c58:
    // 0x4a4c58: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a4c5c:
    // 0x4a4c5c: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a4c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a4c60:
    // 0x4a4c60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4c64:
    // 0x4a4c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4c68:
    // 0x4a4c68: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4c68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4c6c:
    // 0x4a4c6c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4c70:
    // 0x4a4c70: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4c74:
    // 0x4a4c74: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4c74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4c78:
    // 0x4a4c78: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4c78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4c7c:
    // 0x4a4c7c: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4c7cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4c80:
    // 0x4a4c80: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4c80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4c84:
    // 0x4a4c84: 0x320f809  jalr        $t9
label_4a4c88:
    if (ctx->pc == 0x4A4C88u) {
        ctx->pc = 0x4A4C88u;
            // 0x4a4c88: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4C8Cu;
        goto label_4a4c8c;
    }
    ctx->pc = 0x4A4C84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4C8Cu);
        ctx->pc = 0x4A4C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4C84u;
            // 0x4a4c88: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4C8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4C8Cu; }
            if (ctx->pc != 0x4A4C8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A4C8Cu;
label_4a4c8c:
    // 0x4a4c8c: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4c8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4c90:
    // 0x4a4c90: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4c94:
    // 0x4a4c94: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4c98:
    // 0x4a4c98: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4c9c:
    // 0x4a4c9c: 0x320f809  jalr        $t9
label_4a4ca0:
    if (ctx->pc == 0x4A4CA0u) {
        ctx->pc = 0x4A4CA0u;
            // 0x4a4ca0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CA4u;
        goto label_4a4ca4;
    }
    ctx->pc = 0x4A4C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4CA4u);
        ctx->pc = 0x4A4CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4C9Cu;
            // 0x4a4ca0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4CA4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4CA4u; }
            if (ctx->pc != 0x4A4CA4u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4CA4u;
label_4a4ca4:
    // 0x4a4ca4: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4ca8:
    // 0x4a4ca8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_4a4cac:
    if (ctx->pc == 0x4A4CACu) {
        ctx->pc = 0x4A4CACu;
            // 0x4a4cac: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4CB0u;
        goto label_4a4cb0;
    }
    ctx->pc = 0x4A4CA8u;
    {
        const bool branch_taken_0x4a4ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4CA8u;
            // 0x4a4cac: 0xae020e24  sw          $v0, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4ca8) {
            ctx->pc = 0x4A4D1Cu;
            goto label_4a4d1c;
        }
    }
    ctx->pc = 0x4A4CB0u;
label_4a4cb0:
    // 0x4a4cb0: 0x8265010c  lb          $a1, 0x10C($s3)
    ctx->pc = 0x4a4cb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 268)));
label_4a4cb4:
    // 0x4a4cb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x4a4cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4a4cb8:
    // 0x4a4cb8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x4a4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_4a4cbc:
    // 0x4a4cbc: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x4a4cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4cc0:
    // 0x4a4cc0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x4a4cc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_4a4cc4:
    // 0x4a4cc4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4cc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4cc8:
    // 0x4a4cc8: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x4a4cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4a4ccc:
    // 0x4a4ccc: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x4a4cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4a4cd0:
    // 0x4a4cd0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x4a4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_4a4cd4:
    // 0x4a4cd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a4cd8:
    // 0x4a4cd8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a4cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_4a4cdc:
    // 0x4a4cdc: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x4a4cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_4a4ce0:
    // 0x4a4ce0: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x4a4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_4a4ce4:
    // 0x4a4ce4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4ce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4ce8:
    // 0x4a4ce8: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4ce8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4cec:
    // 0x4a4cec: 0x8265010d  lb          $a1, 0x10D($s3)
    ctx->pc = 0x4a4cecu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 269)));
label_4a4cf0:
    // 0x4a4cf0: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x4a4cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_4a4cf4:
    // 0x4a4cf4: 0x320f809  jalr        $t9
label_4a4cf8:
    if (ctx->pc == 0x4A4CF8u) {
        ctx->pc = 0x4A4CF8u;
            // 0x4a4cf8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x4A4CFCu;
        goto label_4a4cfc;
    }
    ctx->pc = 0x4A4CF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4CFCu);
        ctx->pc = 0x4A4CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4CF4u;
            // 0x4a4cf8: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4CFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4CFCu; }
            if (ctx->pc != 0x4A4CFCu) { return; }
        }
        }
    }
    ctx->pc = 0x4A4CFCu;
label_4a4cfc:
    // 0x4a4cfc: 0x8e790058  lw          $t9, 0x58($s3)
    ctx->pc = 0x4a4cfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
label_4a4d00:
    // 0x4a4d00: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x4a4d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4d04:
    // 0x4a4d04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a4d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_4a4d08:
    // 0x4a4d08: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x4a4d08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_4a4d0c:
    // 0x4a4d0c: 0x320f809  jalr        $t9
label_4a4d10:
    if (ctx->pc == 0x4A4D10u) {
        ctx->pc = 0x4A4D10u;
            // 0x4a4d10: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D14u;
        goto label_4a4d14;
    }
    ctx->pc = 0x4A4D0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4D14u);
        ctx->pc = 0x4A4D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D0Cu;
            // 0x4a4d10: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4D14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D14u; }
            if (ctx->pc != 0x4A4D14u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4D14u;
label_4a4d14:
    // 0x4a4d14: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x4a4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_4a4d18:
    // 0x4a4d18: 0xae020e24  sw          $v0, 0xE24($s0)
    ctx->pc = 0x4a4d18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 2));
label_4a4d1c:
    // 0x4a4d1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4d1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a4d20:
    // 0x4a4d20: 0xc0c15dc  jal         func_305770
label_4a4d24:
    if (ctx->pc == 0x4A4D24u) {
        ctx->pc = 0x4A4D24u;
            // 0x4a4d24: 0xae140e30  sw          $s4, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 20));
        ctx->pc = 0x4A4D28u;
        goto label_4a4d28;
    }
    ctx->pc = 0x4A4D20u;
    SET_GPR_U32(ctx, 31, 0x4A4D28u);
    ctx->pc = 0x4A4D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D20u;
            // 0x4a4d24: 0xae140e30  sw          $s4, 0xE30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305770u;
    if (runtime->hasFunction(0x305770u)) {
        auto targetFn = runtime->lookupFunction(0x305770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D28u; }
        if (ctx->pc != 0x4A4D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305770_0x305770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D28u; }
        if (ctx->pc != 0x4A4D28u) { return; }
    }
    ctx->pc = 0x4A4D28u;
label_4a4d28:
    // 0x4a4d28: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_4a4d2c:
    if (ctx->pc == 0x4A4D2Cu) {
        ctx->pc = 0x4A4D30u;
        goto label_4a4d30;
    }
    ctx->pc = 0x4A4D28u;
    {
        const bool branch_taken_0x4a4d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d28) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A4D30u;
label_4a4d30:
    // 0x4a4d30: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x4a4d30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_4a4d34:
    // 0x4a4d34: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a4d34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4d38:
    // 0x4a4d38: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x4a4d38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_4a4d3c:
    // 0x4a4d3c: 0x320f809  jalr        $t9
label_4a4d40:
    if (ctx->pc == 0x4A4D40u) {
        ctx->pc = 0x4A4D40u;
            // 0x4a4d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D44u;
        goto label_4a4d44;
    }
    ctx->pc = 0x4A4D3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4D44u);
        ctx->pc = 0x4A4D40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D3Cu;
            // 0x4a4d40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4D44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D44u; }
            if (ctx->pc != 0x4A4D44u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4D44u;
label_4a4d44:
    // 0x4a4d44: 0xc0c1560  jal         func_305580
label_4a4d48:
    if (ctx->pc == 0x4A4D48u) {
        ctx->pc = 0x4A4D48u;
            // 0x4a4d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D4Cu;
        goto label_4a4d4c;
    }
    ctx->pc = 0x4A4D44u;
    SET_GPR_U32(ctx, 31, 0x4A4D4Cu);
    ctx->pc = 0x4A4D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D44u;
            // 0x4a4d48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305580u;
    if (runtime->hasFunction(0x305580u)) {
        auto targetFn = runtime->lookupFunction(0x305580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D4Cu; }
        if (ctx->pc != 0x4A4D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305580_0x305580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D4Cu; }
        if (ctx->pc != 0x4A4D4Cu) { return; }
    }
    ctx->pc = 0x4A4D4Cu;
label_4a4d4c:
    // 0x4a4d4c: 0xc7cc0028  lwc1        $f12, 0x28($fp)
    ctx->pc = 0x4a4d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_4a4d50:
    // 0x4a4d50: 0xc0c1540  jal         func_305500
label_4a4d54:
    if (ctx->pc == 0x4A4D54u) {
        ctx->pc = 0x4A4D54u;
            // 0x4a4d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D58u;
        goto label_4a4d58;
    }
    ctx->pc = 0x4A4D50u;
    SET_GPR_U32(ctx, 31, 0x4A4D58u);
    ctx->pc = 0x4A4D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D50u;
            // 0x4a4d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x305500u;
    if (runtime->hasFunction(0x305500u)) {
        auto targetFn = runtime->lookupFunction(0x305500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D58u; }
        if (ctx->pc != 0x4A4D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00305500_0x305500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4D58u; }
        if (ctx->pc != 0x4A4D58u) { return; }
    }
    ctx->pc = 0x4A4D58u;
label_4a4d58:
    // 0x4a4d58: 0x10000097  b           . + 4 + (0x97 << 2)
label_4a4d5c:
    if (ctx->pc == 0x4A4D5Cu) {
        ctx->pc = 0x4A4D60u;
        goto label_4a4d60;
    }
    ctx->pc = 0x4A4D58u;
    {
        const bool branch_taken_0x4a4d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d58) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A4D60u;
label_4a4d60:
    // 0x4a4d60: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x4a4d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_4a4d64:
    // 0x4a4d64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a4d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_4a4d68:
    // 0x4a4d68: 0x50600093  beql        $v1, $zero, . + 4 + (0x93 << 2)
label_4a4d6c:
    if (ctx->pc == 0x4A4D6Cu) {
        ctx->pc = 0x4A4D6Cu;
            // 0x4a4d6c: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->pc = 0x4A4D70u;
        goto label_4a4d70;
    }
    ctx->pc = 0x4A4D68u;
    {
        const bool branch_taken_0x4a4d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4d68) {
            ctx->pc = 0x4A4D6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D68u;
            // 0x4a4d6c: 0xae000de4  sw          $zero, 0xDE4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A4D70u;
label_4a4d70:
    // 0x4a4d70: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a4d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4d74:
    // 0x4a4d74: 0xae030e30  sw          $v1, 0xE30($s0)
    ctx->pc = 0x4a4d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
label_4a4d78:
    // 0x4a4d78: 0x1000008f  b           . + 4 + (0x8F << 2)
label_4a4d7c:
    if (ctx->pc == 0x4A4D7Cu) {
        ctx->pc = 0x4A4D7Cu;
            // 0x4a4d7c: 0xae000e24  sw          $zero, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
        ctx->pc = 0x4A4D80u;
        goto label_4a4d80;
    }
    ctx->pc = 0x4A4D78u;
    {
        const bool branch_taken_0x4a4d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4D78u;
            // 0x4a4d7c: 0xae000e24  sw          $zero, 0xE24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4d78) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A4D80u;
label_4a4d80:
    // 0x4a4d80: 0xc6010e24  lwc1        $f1, 0xE24($s0)
    ctx->pc = 0x4a4d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 3620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_4a4d84:
    // 0x4a4d84: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x4a4d84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_4a4d88:
    // 0x4a4d88: 0x0  nop
    ctx->pc = 0x4a4d88u;
    // NOP
label_4a4d8c:
    // 0x4a4d8c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x4a4d8cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_4a4d90:
    // 0x4a4d90: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_4a4d94:
    if (ctx->pc == 0x4A4D94u) {
        ctx->pc = 0x4A4D98u;
        goto label_4a4d98;
    }
    ctx->pc = 0x4A4D90u;
    {
        const bool branch_taken_0x4a4d90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x4a4d90) {
            ctx->pc = 0x4A4DA8u;
            goto label_4a4da8;
        }
    }
    ctx->pc = 0x4A4D98u;
label_4a4d98:
    // 0x4a4d98: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x4a4d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_4a4d9c:
    // 0x4a4d9c: 0xae030e30  sw          $v1, 0xE30($s0)
    ctx->pc = 0x4a4d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3632), GPR_U32(ctx, 3));
label_4a4da0:
    // 0x4a4da0: 0x10000027  b           . + 4 + (0x27 << 2)
label_4a4da4:
    if (ctx->pc == 0x4A4DA4u) {
        ctx->pc = 0x4A4DA4u;
            // 0x4a4da4: 0xe6000e24  swc1        $f0, 0xE24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3620), bits); }
        ctx->pc = 0x4A4DA8u;
        goto label_4a4da8;
    }
    ctx->pc = 0x4A4DA0u;
    {
        const bool branch_taken_0x4a4da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4DA0u;
            // 0x4a4da4: 0xe6000e24  swc1        $f0, 0xE24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3620), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4da0) {
            ctx->pc = 0x4A4E40u;
            goto label_4a4e40;
        }
    }
    ctx->pc = 0x4A4DA8u;
label_4a4da8:
    // 0x4a4da8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a4da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a4dac:
    // 0x4a4dac: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x4a4dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_4a4db0:
    // 0x4a4db0: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x4a4db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_4a4db4:
    // 0x4a4db4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x4a4db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_4a4db8:
    // 0x4a4db8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x4a4db8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_4a4dbc:
    // 0x4a4dbc: 0xe6000e24  swc1        $f0, 0xE24($s0)
    ctx->pc = 0x4a4dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 3620), bits); }
label_4a4dc0:
    // 0x4a4dc0: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x4a4dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a4dc4:
    // 0x4a4dc4: 0x908202c5  lbu         $v0, 0x2C5($a0)
    ctx->pc = 0x4a4dc4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_4a4dc8:
    // 0x4a4dc8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x4a4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_4a4dcc:
    // 0x4a4dcc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4a4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_4a4dd0:
    // 0x4a4dd0: 0x90420281  lbu         $v0, 0x281($v0)
    ctx->pc = 0x4a4dd0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 641)));
label_4a4dd4:
    // 0x4a4dd4: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_4a4dd8:
    if (ctx->pc == 0x4A4DD8u) {
        ctx->pc = 0x4A4DD8u;
            // 0x4a4dd8: 0x3c033e8e  lui         $v1, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
        ctx->pc = 0x4A4DDCu;
        goto label_4a4ddc;
    }
    ctx->pc = 0x4A4DD4u;
    {
        const bool branch_taken_0x4a4dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a4dd4) {
            ctx->pc = 0x4A4DD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4DD4u;
            // 0x4a4dd8: 0x3c033e8e  lui         $v1, 0x3E8E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16014 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4DECu;
            goto label_4a4dec;
        }
    }
    ctx->pc = 0x4A4DDCu;
label_4a4ddc:
    // 0x4a4ddc: 0xc0c1334  jal         func_304CD0
label_4a4de0:
    if (ctx->pc == 0x4A4DE0u) {
        ctx->pc = 0x4A4DE0u;
            // 0x4a4de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4DE4u;
        goto label_4a4de4;
    }
    ctx->pc = 0x4A4DDCu;
    SET_GPR_U32(ctx, 31, 0x4A4DE4u);
    ctx->pc = 0x4A4DE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4DDCu;
            // 0x4a4de0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x304CD0u;
    if (runtime->hasFunction(0x304CD0u)) {
        auto targetFn = runtime->lookupFunction(0x304CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4DE4u; }
        if (ctx->pc != 0x4A4DE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304CD0_0x304cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4DE4u; }
        if (ctx->pc != 0x4A4DE4u) { return; }
    }
    ctx->pc = 0x4A4DE4u;
label_4a4de4:
    // 0x4a4de4: 0x10000017  b           . + 4 + (0x17 << 2)
label_4a4de8:
    if (ctx->pc == 0x4A4DE8u) {
        ctx->pc = 0x4A4DE8u;
            // 0x4a4de8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x4A4DECu;
        goto label_4a4dec;
    }
    ctx->pc = 0x4A4DE4u;
    {
        const bool branch_taken_0x4a4de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A4DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4DE4u;
            // 0x4a4de8: 0x8e040db0  lw          $a0, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a4de4) {
            ctx->pc = 0x4A4E44u;
            goto label_4a4e44;
        }
    }
    ctx->pc = 0x4A4DECu;
label_4a4dec:
    // 0x4a4dec: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x4a4decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_4a4df0:
    // 0x4a4df0: 0x346338e4  ori         $v1, $v1, 0x38E4
    ctx->pc = 0x4a4df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14564);
label_4a4df4:
    // 0x4a4df4: 0xae030de4  sw          $v1, 0xDE4($s0)
    ctx->pc = 0x4a4df4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3556), GPR_U32(ctx, 3));
label_4a4df8:
    // 0x4a4df8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x4a4df8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4dfc:
    // 0x4a4dfc: 0x8e990000  lw          $t9, 0x0($s4)
    ctx->pc = 0x4a4dfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_4a4e00:
    // 0x4a4e00: 0x8f390068  lw          $t9, 0x68($t9)
    ctx->pc = 0x4a4e00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 104)));
label_4a4e04:
    // 0x4a4e04: 0x320f809  jalr        $t9
label_4a4e08:
    if (ctx->pc == 0x4A4E08u) {
        ctx->pc = 0x4A4E08u;
            // 0x4a4e08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4E0Cu;
        goto label_4a4e0c;
    }
    ctx->pc = 0x4A4E04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4E0Cu);
        ctx->pc = 0x4A4E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E04u;
            // 0x4a4e08: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4E0Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E0Cu; }
            if (ctx->pc != 0x4A4E0Cu) { return; }
        }
        }
    }
    ctx->pc = 0x4A4E0Cu;
label_4a4e0c:
    // 0x4a4e0c: 0x8e040d74  lw          $a0, 0xD74($s0)
    ctx->pc = 0x4a4e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a4e10:
    // 0x4a4e10: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x4a4e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_4a4e14:
    // 0x4a4e14: 0x908302c5  lbu         $v1, 0x2C5($a0)
    ctx->pc = 0x4a4e14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 709)));
label_4a4e18:
    // 0x4a4e18: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x4a4e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_4a4e1c:
    // 0x4a4e1c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x4a4e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_4a4e20:
    // 0x4a4e20: 0x90630281  lbu         $v1, 0x281($v1)
    ctx->pc = 0x4a4e20u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 641)));
label_4a4e24:
    // 0x4a4e24: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
label_4a4e28:
    if (ctx->pc == 0x4A4E28u) {
        ctx->pc = 0x4A4E28u;
            // 0x4a4e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4E2Cu;
        goto label_4a4e2c;
    }
    ctx->pc = 0x4A4E24u;
    {
        const bool branch_taken_0x4a4e24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a4e24) {
            ctx->pc = 0x4A4E28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E24u;
            // 0x4a4e28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4E38u;
            goto label_4a4e38;
        }
    }
    ctx->pc = 0x4A4E2Cu;
label_4a4e2c:
    // 0x4a4e2c: 0xc0c1530  jal         func_3054C0
label_4a4e30:
    if (ctx->pc == 0x4A4E30u) {
        ctx->pc = 0x4A4E30u;
            // 0x4a4e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4E34u;
        goto label_4a4e34;
    }
    ctx->pc = 0x4A4E2Cu;
    SET_GPR_U32(ctx, 31, 0x4A4E34u);
    ctx->pc = 0x4A4E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E2Cu;
            // 0x4a4e30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3054C0u;
    if (runtime->hasFunction(0x3054C0u)) {
        auto targetFn = runtime->lookupFunction(0x3054C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E34u; }
        if (ctx->pc != 0x4A4E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003054C0_0x3054c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E34u; }
        if (ctx->pc != 0x4A4E34u) { return; }
    }
    ctx->pc = 0x4A4E34u;
label_4a4e34:
    // 0x4a4e34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a4e38:
    // 0x4a4e38: 0xc0c13c8  jal         func_304F20
label_4a4e3c:
    if (ctx->pc == 0x4A4E3Cu) {
        ctx->pc = 0x4A4E40u;
        goto label_4a4e40;
    }
    ctx->pc = 0x4A4E38u;
    SET_GPR_U32(ctx, 31, 0x4A4E40u);
    ctx->pc = 0x304F20u;
    if (runtime->hasFunction(0x304F20u)) {
        auto targetFn = runtime->lookupFunction(0x304F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E40u; }
        if (ctx->pc != 0x4A4E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00304F20_0x304f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E40u; }
        if (ctx->pc != 0x4A4E40u) { return; }
    }
    ctx->pc = 0x4A4E40u;
label_4a4e40:
    // 0x4a4e40: 0x8e040db0  lw          $a0, 0xDB0($s0)
    ctx->pc = 0x4a4e40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4a4e44:
    // 0x4a4e44: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x4a4e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4a4e48:
    // 0x4a4e48: 0x1083005b  beq         $a0, $v1, . + 4 + (0x5B << 2)
label_4a4e4c:
    if (ctx->pc == 0x4A4E4Cu) {
        ctx->pc = 0x4A4E50u;
        goto label_4a4e50;
    }
    ctx->pc = 0x4A4E48u;
    {
        const bool branch_taken_0x4a4e48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x4a4e48) {
            ctx->pc = 0x4A4FB8u;
            goto label_4a4fb8;
        }
    }
    ctx->pc = 0x4A4E50u;
label_4a4e50:
    // 0x4a4e50: 0xae000e1c  sw          $zero, 0xE1C($s0)
    ctx->pc = 0x4a4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3612), GPR_U32(ctx, 0));
label_4a4e54:
    // 0x4a4e54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x4a4e54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_4a4e58:
    // 0x4a4e58: 0xae000e20  sw          $zero, 0xE20($s0)
    ctx->pc = 0x4a4e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3616), GPR_U32(ctx, 0));
label_4a4e5c:
    // 0x4a4e5c: 0x26040330  addiu       $a0, $s0, 0x330
    ctx->pc = 0x4a4e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
label_4a4e60:
    // 0x4a4e60: 0xae000e24  sw          $zero, 0xE24($s0)
    ctx->pc = 0x4a4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3620), GPR_U32(ctx, 0));
label_4a4e64:
    // 0x4a4e64: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x4a4e64u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_4a4e68:
    // 0x4a4e68: 0xa20011cc  sb          $zero, 0x11CC($s0)
    ctx->pc = 0x4a4e68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4556), (uint8_t)GPR_U32(ctx, 0));
label_4a4e6c:
    // 0x4a4e6c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x4a4e6cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_4a4e70:
    // 0x4a4e70: 0x8e020db8  lw          $v0, 0xDB8($s0)
    ctx->pc = 0x4a4e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3512)));
label_4a4e74:
    // 0x4a4e74: 0x3442002f  ori         $v0, $v0, 0x2F
    ctx->pc = 0x4a4e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47);
label_4a4e78:
    // 0x4a4e78: 0xc04cbd8  jal         func_132F60
label_4a4e7c:
    if (ctx->pc == 0x4A4E7Cu) {
        ctx->pc = 0x4A4E7Cu;
            // 0x4a4e7c: 0xae020db8  sw          $v0, 0xDB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
        ctx->pc = 0x4A4E80u;
        goto label_4a4e80;
    }
    ctx->pc = 0x4A4E78u;
    SET_GPR_U32(ctx, 31, 0x4A4E80u);
    ctx->pc = 0x4A4E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E78u;
            // 0x4a4e7c: 0xae020db8  sw          $v0, 0xDB8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E80u; }
        if (ctx->pc != 0x4A4E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E80u; }
        if (ctx->pc != 0x4A4E80u) { return; }
    }
    ctx->pc = 0x4A4E80u;
label_4a4e80:
    // 0x4a4e80: 0x8e0511c4  lw          $a1, 0x11C4($s0)
    ctx->pc = 0x4a4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4548)));
label_4a4e84:
    // 0x4a4e84: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_4a4e88:
    if (ctx->pc == 0x4A4E88u) {
        ctx->pc = 0x4A4E88u;
            // 0x4a4e88: 0x8e0511c8  lw          $a1, 0x11C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4552)));
        ctx->pc = 0x4A4E8Cu;
        goto label_4a4e8c;
    }
    ctx->pc = 0x4A4E84u;
    {
        const bool branch_taken_0x4a4e84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4e84) {
            ctx->pc = 0x4A4E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E84u;
            // 0x4a4e88: 0x8e0511c8  lw          $a1, 0x11C8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4EA4u;
            goto label_4a4ea4;
        }
    }
    ctx->pc = 0x4A4E8Cu;
label_4a4e8c:
    // 0x4a4e8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4e90:
    // 0x4a4e90: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4e94:
    // 0x4a4e94: 0xc057b7c  jal         func_15EDF0
label_4a4e98:
    if (ctx->pc == 0x4A4E98u) {
        ctx->pc = 0x4A4E98u;
            // 0x4a4e98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4E9Cu;
        goto label_4a4e9c;
    }
    ctx->pc = 0x4A4E94u;
    SET_GPR_U32(ctx, 31, 0x4A4E9Cu);
    ctx->pc = 0x4A4E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4E94u;
            // 0x4a4e98: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E9Cu; }
        if (ctx->pc != 0x4A4E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4E9Cu; }
        if (ctx->pc != 0x4A4E9Cu) { return; }
    }
    ctx->pc = 0x4A4E9Cu;
label_4a4e9c:
    // 0x4a4e9c: 0xae0011c4  sw          $zero, 0x11C4($s0)
    ctx->pc = 0x4a4e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4548), GPR_U32(ctx, 0));
label_4a4ea0:
    // 0x4a4ea0: 0x8e0511c8  lw          $a1, 0x11C8($s0)
    ctx->pc = 0x4a4ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4552)));
label_4a4ea4:
    // 0x4a4ea4: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_4a4ea8:
    if (ctx->pc == 0x4A4EA8u) {
        ctx->pc = 0x4A4EACu;
        goto label_4a4eac;
    }
    ctx->pc = 0x4A4EA4u;
    {
        const bool branch_taken_0x4a4ea4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4ea4) {
            ctx->pc = 0x4A4EC0u;
            goto label_4a4ec0;
        }
    }
    ctx->pc = 0x4A4EACu;
label_4a4eac:
    // 0x4a4eac: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x4a4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_4a4eb0:
    // 0x4a4eb0: 0x8c42d130  lw          $v0, -0x2ED0($v0)
    ctx->pc = 0x4a4eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_4a4eb4:
    // 0x4a4eb4: 0xc057b7c  jal         func_15EDF0
label_4a4eb8:
    if (ctx->pc == 0x4A4EB8u) {
        ctx->pc = 0x4A4EB8u;
            // 0x4a4eb8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x4A4EBCu;
        goto label_4a4ebc;
    }
    ctx->pc = 0x4A4EB4u;
    SET_GPR_U32(ctx, 31, 0x4A4EBCu);
    ctx->pc = 0x4A4EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4EB4u;
            // 0x4a4eb8: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EDF0u;
    if (runtime->hasFunction(0x15EDF0u)) {
        auto targetFn = runtime->lookupFunction(0x15EDF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4EBCu; }
        if (ctx->pc != 0x4A4EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EDF0_0x15edf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4EBCu; }
        if (ctx->pc != 0x4A4EBCu) { return; }
    }
    ctx->pc = 0x4A4EBCu;
label_4a4ebc:
    // 0x4a4ebc: 0xae0011c8  sw          $zero, 0x11C8($s0)
    ctx->pc = 0x4a4ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4552), GPR_U32(ctx, 0));
label_4a4ec0:
    // 0x4a4ec0: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x4a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_4a4ec4:
    // 0x4a4ec4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x4a4ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_4a4ec8:
    // 0x4a4ec8: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x4a4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
label_4a4ecc:
    // 0x4a4ecc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x4a4eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_4a4ed0:
    // 0x4a4ed0: 0x5443001a  bnel        $v0, $v1, . + 4 + (0x1A << 2)
label_4a4ed4:
    if (ctx->pc == 0x4A4ED4u) {
        ctx->pc = 0x4A4ED4u;
            // 0x4a4ed4: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x4A4ED8u;
        goto label_4a4ed8;
    }
    ctx->pc = 0x4A4ED0u;
    {
        const bool branch_taken_0x4a4ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a4ed0) {
            ctx->pc = 0x4A4ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4ED0u;
            // 0x4a4ed4: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4F3Cu;
            goto label_4a4f3c;
        }
    }
    ctx->pc = 0x4A4ED8u;
label_4a4ed8:
    // 0x4a4ed8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x4a4ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_4a4edc:
    // 0x4a4edc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x4a4edcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_4a4ee0:
    // 0x4a4ee0: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x4a4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_4a4ee4:
    // 0x4a4ee4: 0x90420ce4  lbu         $v0, 0xCE4($v0)
    ctx->pc = 0x4a4ee4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3300)));
label_4a4ee8:
    // 0x4a4ee8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_4a4eec:
    if (ctx->pc == 0x4A4EECu) {
        ctx->pc = 0x4A4EF0u;
        goto label_4a4ef0;
    }
    ctx->pc = 0x4A4EE8u;
    {
        const bool branch_taken_0x4a4ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x4a4ee8) {
            ctx->pc = 0x4A4F38u;
            goto label_4a4f38;
        }
    }
    ctx->pc = 0x4A4EF0u;
label_4a4ef0:
    // 0x4a4ef0: 0xa20011a1  sb          $zero, 0x11A1($s0)
    ctx->pc = 0x4a4ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4513), (uint8_t)GPR_U32(ctx, 0));
label_4a4ef4:
    // 0x4a4ef4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x4a4ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_4a4ef8:
    // 0x4a4ef8: 0x8e110d74  lw          $s1, 0xD74($s0)
    ctx->pc = 0x4a4ef8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a4efc:
    // 0x4a4efc: 0x8e2302c8  lw          $v1, 0x2C8($s1)
    ctx->pc = 0x4a4efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
label_4a4f00:
    // 0x4a4f00: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x4a4f00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_4a4f04:
    // 0x4a4f04: 0xc0a545c  jal         func_295170
label_4a4f08:
    if (ctx->pc == 0x4A4F08u) {
        ctx->pc = 0x4A4F08u;
            // 0x4a4f08: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4A4F0Cu;
        goto label_4a4f0c;
    }
    ctx->pc = 0x4A4F04u;
    SET_GPR_U32(ctx, 31, 0x4A4F0Cu);
    ctx->pc = 0x4A4F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F04u;
            // 0x4a4f08: 0x629024  and         $s2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F0Cu; }
        if (ctx->pc != 0x4A4F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F0Cu; }
        if (ctx->pc != 0x4A4F0Cu) { return; }
    }
    ctx->pc = 0x4A4F0Cu;
label_4a4f0c:
    // 0x4a4f0c: 0xac52002c  sw          $s2, 0x2C($v0)
    ctx->pc = 0x4a4f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 18));
label_4a4f10:
    // 0x4a4f10: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a4f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a4f14:
    // 0x4a4f14: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4a4f14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a4f18:
    // 0x4a4f18: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a4f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a4f1c:
    // 0x4a4f1c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a4f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a4f20:
    // 0x4a4f20: 0xc08bf20  jal         func_22FC80
label_4a4f24:
    if (ctx->pc == 0x4A4F24u) {
        ctx->pc = 0x4A4F24u;
            // 0x4a4f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4F28u;
        goto label_4a4f28;
    }
    ctx->pc = 0x4A4F20u;
    SET_GPR_U32(ctx, 31, 0x4A4F28u);
    ctx->pc = 0x4A4F24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F20u;
            // 0x4a4f24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F28u; }
        if (ctx->pc != 0x4A4F28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F28u; }
        if (ctx->pc != 0x4A4F28u) { return; }
    }
    ctx->pc = 0x4A4F28u;
label_4a4f28:
    // 0x4a4f28: 0xae000db8  sw          $zero, 0xDB8($s0)
    ctx->pc = 0x4a4f28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3512), GPR_U32(ctx, 0));
label_4a4f2c:
    // 0x4a4f2c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x4a4f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4a4f30:
    // 0x4a4f30: 0x8e020d60  lw          $v0, 0xD60($s0)
    ctx->pc = 0x4a4f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3424)));
label_4a4f34:
    // 0x4a4f34: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x4a4f34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_4a4f38:
    // 0x4a4f38: 0x92040094  lbu         $a0, 0x94($s0)
    ctx->pc = 0x4a4f38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
label_4a4f3c:
    // 0x4a4f3c: 0xc072b78  jal         func_1CADE0
label_4a4f40:
    if (ctx->pc == 0x4A4F40u) {
        ctx->pc = 0x4A4F44u;
        goto label_4a4f44;
    }
    ctx->pc = 0x4A4F3Cu;
    SET_GPR_U32(ctx, 31, 0x4A4F44u);
    ctx->pc = 0x1CADE0u;
    if (runtime->hasFunction(0x1CADE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F44u; }
        if (ctx->pc != 0x4A4F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CADE0_0x1cade0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F44u; }
        if (ctx->pc != 0x4A4F44u) { return; }
    }
    ctx->pc = 0x4A4F44u;
label_4a4f44:
    // 0x4a4f44: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_4a4f48:
    if (ctx->pc == 0x4A4F48u) {
        ctx->pc = 0x4A4F48u;
            // 0x4a4f48: 0x8e030db0  lw          $v1, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->pc = 0x4A4F4Cu;
        goto label_4a4f4c;
    }
    ctx->pc = 0x4A4F44u;
    {
        const bool branch_taken_0x4a4f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a4f44) {
            ctx->pc = 0x4A4F48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F44u;
            // 0x4a4f48: 0x8e030db0  lw          $v1, 0xDB0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4F58u;
            goto label_4a4f58;
        }
    }
    ctx->pc = 0x4A4F4Cu;
label_4a4f4c:
    // 0x4a4f4c: 0xc072aaa  jal         func_1CAAA8
label_4a4f50:
    if (ctx->pc == 0x4A4F50u) {
        ctx->pc = 0x4A4F50u;
            // 0x4a4f50: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->pc = 0x4A4F54u;
        goto label_4a4f54;
    }
    ctx->pc = 0x4A4F4Cu;
    SET_GPR_U32(ctx, 31, 0x4A4F54u);
    ctx->pc = 0x4A4F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F4Cu;
            // 0x4a4f50: 0x92040094  lbu         $a0, 0x94($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 148)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAA8u;
    if (runtime->hasFunction(0x1CAAA8u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F54u; }
        if (ctx->pc != 0x4A4F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CAAA8_0x1caaa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F54u; }
        if (ctx->pc != 0x4A4F54u) { return; }
    }
    ctx->pc = 0x4A4F54u;
label_4a4f54:
    // 0x4a4f54: 0x8e030db0  lw          $v1, 0xDB0($s0)
    ctx->pc = 0x4a4f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3504)));
label_4a4f58:
    // 0x4a4f58: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x4a4f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_4a4f5c:
    // 0x4a4f5c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_4a4f60:
    if (ctx->pc == 0x4A4F60u) {
        ctx->pc = 0x4A4F60u;
            // 0x4a4f60: 0x8e100d74  lw          $s0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->pc = 0x4A4F64u;
        goto label_4a4f64;
    }
    ctx->pc = 0x4A4F5Cu;
    {
        const bool branch_taken_0x4a4f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a4f5c) {
            ctx->pc = 0x4A4F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F5Cu;
            // 0x4a4f60: 0x8e100d74  lw          $s0, 0xD74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x4A4F7Cu;
            goto label_4a4f7c;
        }
    }
    ctx->pc = 0x4A4F64u;
label_4a4f64:
    // 0x4a4f64: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x4a4f64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4a4f68:
    // 0x4a4f68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a4f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a4f6c:
    // 0x4a4f6c: 0x8f39005c  lw          $t9, 0x5C($t9)
    ctx->pc = 0x4a4f6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
label_4a4f70:
    // 0x4a4f70: 0x320f809  jalr        $t9
label_4a4f74:
    if (ctx->pc == 0x4A4F74u) {
        ctx->pc = 0x4A4F74u;
            // 0x4a4f74: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x4A4F78u;
        goto label_4a4f78;
    }
    ctx->pc = 0x4A4F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x4A4F78u);
        ctx->pc = 0x4A4F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F70u;
            // 0x4a4f74: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x4A4F78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F78u; }
            if (ctx->pc != 0x4A4F78u) { return; }
        }
        }
    }
    ctx->pc = 0x4A4F78u;
label_4a4f78:
    // 0x4a4f78: 0x8e100d74  lw          $s0, 0xD74($s0)
    ctx->pc = 0x4a4f78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3444)));
label_4a4f7c:
    // 0x4a4f7c: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x4a4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
label_4a4f80:
    // 0x4a4f80: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4a4f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a4f84:
    // 0x4a4f84: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x4a4f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_4a4f88:
    // 0x4a4f88: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x4a4f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4a4f8c:
    // 0x4a4f8c: 0x8ca5002c  lw          $a1, 0x2C($a1)
    ctx->pc = 0x4a4f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
label_4a4f90:
    // 0x4a4f90: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x4a4f90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_4a4f94:
    // 0x4a4f94: 0xc0a545c  jal         func_295170
label_4a4f98:
    if (ctx->pc == 0x4A4F98u) {
        ctx->pc = 0x4A4F98u;
            // 0x4a4f98: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->pc = 0x4A4F9Cu;
        goto label_4a4f9c;
    }
    ctx->pc = 0x4A4F94u;
    SET_GPR_U32(ctx, 31, 0x4A4F9Cu);
    ctx->pc = 0x4A4F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4F94u;
            // 0x4a4f98: 0x628824  and         $s1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295170u;
    if (runtime->hasFunction(0x295170u)) {
        auto targetFn = runtime->lookupFunction(0x295170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F9Cu; }
        if (ctx->pc != 0x4A4F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295170_0x295170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4F9Cu; }
        if (ctx->pc != 0x4A4F9Cu) { return; }
    }
    ctx->pc = 0x4A4F9Cu;
label_4a4f9c:
    // 0x4a4f9c: 0xac51002c  sw          $s1, 0x2C($v0)
    ctx->pc = 0x4a4f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 17));
label_4a4fa0:
    // 0x4a4fa0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x4a4fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_4a4fa4:
    // 0x4a4fa4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x4a4fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_4a4fa8:
    // 0x4a4fa8: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x4a4fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_4a4fac:
    // 0x4a4fac: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x4a4facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_4a4fb0:
    // 0x4a4fb0: 0xc08bf20  jal         func_22FC80
label_4a4fb4:
    if (ctx->pc == 0x4A4FB4u) {
        ctx->pc = 0x4A4FB4u;
            // 0x4a4fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x4A4FB8u;
        goto label_4a4fb8;
    }
    ctx->pc = 0x4A4FB0u;
    SET_GPR_U32(ctx, 31, 0x4A4FB8u);
    ctx->pc = 0x4A4FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4FB0u;
            // 0x4a4fb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FC80u;
    if (runtime->hasFunction(0x22FC80u)) {
        auto targetFn = runtime->lookupFunction(0x22FC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4FB8u; }
        if (ctx->pc != 0x4A4FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FC80_0x22fc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x4A4FB8u; }
        if (ctx->pc != 0x4A4FB8u) { return; }
    }
    ctx->pc = 0x4A4FB8u;
label_4a4fb8:
    // 0x4a4fb8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x4a4fb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_4a4fbc:
    // 0x4a4fbc: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x4a4fbcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_4a4fc0:
    // 0x4a4fc0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x4a4fc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_4a4fc4:
    // 0x4a4fc4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4a4fc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_4a4fc8:
    // 0x4a4fc8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4a4fc8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a4fcc:
    // 0x4a4fcc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4a4fccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a4fd0:
    // 0x4a4fd0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4a4fd0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a4fd4:
    // 0x4a4fd4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4a4fd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a4fd8:
    // 0x4a4fd8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4a4fd8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a4fdc:
    // 0x4a4fdc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4a4fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_4a4fe0:
    // 0x4a4fe0: 0x3e00008  jr          $ra
label_4a4fe4:
    if (ctx->pc == 0x4A4FE4u) {
        ctx->pc = 0x4A4FE4u;
            // 0x4a4fe4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x4A4FE8u;
        goto label_4a4fe8;
    }
    ctx->pc = 0x4A4FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A4FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4A4FE0u;
            // 0x4a4fe4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4A4FE8u;
label_4a4fe8:
    // 0x4a4fe8: 0x0  nop
    ctx->pc = 0x4a4fe8u;
    // NOP
label_4a4fec:
    // 0x4a4fec: 0x0  nop
    ctx->pc = 0x4a4fecu;
    // NOP
}
