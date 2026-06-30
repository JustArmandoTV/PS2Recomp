#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00344800
// Address: 0x344800 - 0x345520
void sub_00344800_0x344800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00344800_0x344800");
#endif

    switch (ctx->pc) {
        case 0x344800u: goto label_344800;
        case 0x344804u: goto label_344804;
        case 0x344808u: goto label_344808;
        case 0x34480cu: goto label_34480c;
        case 0x344810u: goto label_344810;
        case 0x344814u: goto label_344814;
        case 0x344818u: goto label_344818;
        case 0x34481cu: goto label_34481c;
        case 0x344820u: goto label_344820;
        case 0x344824u: goto label_344824;
        case 0x344828u: goto label_344828;
        case 0x34482cu: goto label_34482c;
        case 0x344830u: goto label_344830;
        case 0x344834u: goto label_344834;
        case 0x344838u: goto label_344838;
        case 0x34483cu: goto label_34483c;
        case 0x344840u: goto label_344840;
        case 0x344844u: goto label_344844;
        case 0x344848u: goto label_344848;
        case 0x34484cu: goto label_34484c;
        case 0x344850u: goto label_344850;
        case 0x344854u: goto label_344854;
        case 0x344858u: goto label_344858;
        case 0x34485cu: goto label_34485c;
        case 0x344860u: goto label_344860;
        case 0x344864u: goto label_344864;
        case 0x344868u: goto label_344868;
        case 0x34486cu: goto label_34486c;
        case 0x344870u: goto label_344870;
        case 0x344874u: goto label_344874;
        case 0x344878u: goto label_344878;
        case 0x34487cu: goto label_34487c;
        case 0x344880u: goto label_344880;
        case 0x344884u: goto label_344884;
        case 0x344888u: goto label_344888;
        case 0x34488cu: goto label_34488c;
        case 0x344890u: goto label_344890;
        case 0x344894u: goto label_344894;
        case 0x344898u: goto label_344898;
        case 0x34489cu: goto label_34489c;
        case 0x3448a0u: goto label_3448a0;
        case 0x3448a4u: goto label_3448a4;
        case 0x3448a8u: goto label_3448a8;
        case 0x3448acu: goto label_3448ac;
        case 0x3448b0u: goto label_3448b0;
        case 0x3448b4u: goto label_3448b4;
        case 0x3448b8u: goto label_3448b8;
        case 0x3448bcu: goto label_3448bc;
        case 0x3448c0u: goto label_3448c0;
        case 0x3448c4u: goto label_3448c4;
        case 0x3448c8u: goto label_3448c8;
        case 0x3448ccu: goto label_3448cc;
        case 0x3448d0u: goto label_3448d0;
        case 0x3448d4u: goto label_3448d4;
        case 0x3448d8u: goto label_3448d8;
        case 0x3448dcu: goto label_3448dc;
        case 0x3448e0u: goto label_3448e0;
        case 0x3448e4u: goto label_3448e4;
        case 0x3448e8u: goto label_3448e8;
        case 0x3448ecu: goto label_3448ec;
        case 0x3448f0u: goto label_3448f0;
        case 0x3448f4u: goto label_3448f4;
        case 0x3448f8u: goto label_3448f8;
        case 0x3448fcu: goto label_3448fc;
        case 0x344900u: goto label_344900;
        case 0x344904u: goto label_344904;
        case 0x344908u: goto label_344908;
        case 0x34490cu: goto label_34490c;
        case 0x344910u: goto label_344910;
        case 0x344914u: goto label_344914;
        case 0x344918u: goto label_344918;
        case 0x34491cu: goto label_34491c;
        case 0x344920u: goto label_344920;
        case 0x344924u: goto label_344924;
        case 0x344928u: goto label_344928;
        case 0x34492cu: goto label_34492c;
        case 0x344930u: goto label_344930;
        case 0x344934u: goto label_344934;
        case 0x344938u: goto label_344938;
        case 0x34493cu: goto label_34493c;
        case 0x344940u: goto label_344940;
        case 0x344944u: goto label_344944;
        case 0x344948u: goto label_344948;
        case 0x34494cu: goto label_34494c;
        case 0x344950u: goto label_344950;
        case 0x344954u: goto label_344954;
        case 0x344958u: goto label_344958;
        case 0x34495cu: goto label_34495c;
        case 0x344960u: goto label_344960;
        case 0x344964u: goto label_344964;
        case 0x344968u: goto label_344968;
        case 0x34496cu: goto label_34496c;
        case 0x344970u: goto label_344970;
        case 0x344974u: goto label_344974;
        case 0x344978u: goto label_344978;
        case 0x34497cu: goto label_34497c;
        case 0x344980u: goto label_344980;
        case 0x344984u: goto label_344984;
        case 0x344988u: goto label_344988;
        case 0x34498cu: goto label_34498c;
        case 0x344990u: goto label_344990;
        case 0x344994u: goto label_344994;
        case 0x344998u: goto label_344998;
        case 0x34499cu: goto label_34499c;
        case 0x3449a0u: goto label_3449a0;
        case 0x3449a4u: goto label_3449a4;
        case 0x3449a8u: goto label_3449a8;
        case 0x3449acu: goto label_3449ac;
        case 0x3449b0u: goto label_3449b0;
        case 0x3449b4u: goto label_3449b4;
        case 0x3449b8u: goto label_3449b8;
        case 0x3449bcu: goto label_3449bc;
        case 0x3449c0u: goto label_3449c0;
        case 0x3449c4u: goto label_3449c4;
        case 0x3449c8u: goto label_3449c8;
        case 0x3449ccu: goto label_3449cc;
        case 0x3449d0u: goto label_3449d0;
        case 0x3449d4u: goto label_3449d4;
        case 0x3449d8u: goto label_3449d8;
        case 0x3449dcu: goto label_3449dc;
        case 0x3449e0u: goto label_3449e0;
        case 0x3449e4u: goto label_3449e4;
        case 0x3449e8u: goto label_3449e8;
        case 0x3449ecu: goto label_3449ec;
        case 0x3449f0u: goto label_3449f0;
        case 0x3449f4u: goto label_3449f4;
        case 0x3449f8u: goto label_3449f8;
        case 0x3449fcu: goto label_3449fc;
        case 0x344a00u: goto label_344a00;
        case 0x344a04u: goto label_344a04;
        case 0x344a08u: goto label_344a08;
        case 0x344a0cu: goto label_344a0c;
        case 0x344a10u: goto label_344a10;
        case 0x344a14u: goto label_344a14;
        case 0x344a18u: goto label_344a18;
        case 0x344a1cu: goto label_344a1c;
        case 0x344a20u: goto label_344a20;
        case 0x344a24u: goto label_344a24;
        case 0x344a28u: goto label_344a28;
        case 0x344a2cu: goto label_344a2c;
        case 0x344a30u: goto label_344a30;
        case 0x344a34u: goto label_344a34;
        case 0x344a38u: goto label_344a38;
        case 0x344a3cu: goto label_344a3c;
        case 0x344a40u: goto label_344a40;
        case 0x344a44u: goto label_344a44;
        case 0x344a48u: goto label_344a48;
        case 0x344a4cu: goto label_344a4c;
        case 0x344a50u: goto label_344a50;
        case 0x344a54u: goto label_344a54;
        case 0x344a58u: goto label_344a58;
        case 0x344a5cu: goto label_344a5c;
        case 0x344a60u: goto label_344a60;
        case 0x344a64u: goto label_344a64;
        case 0x344a68u: goto label_344a68;
        case 0x344a6cu: goto label_344a6c;
        case 0x344a70u: goto label_344a70;
        case 0x344a74u: goto label_344a74;
        case 0x344a78u: goto label_344a78;
        case 0x344a7cu: goto label_344a7c;
        case 0x344a80u: goto label_344a80;
        case 0x344a84u: goto label_344a84;
        case 0x344a88u: goto label_344a88;
        case 0x344a8cu: goto label_344a8c;
        case 0x344a90u: goto label_344a90;
        case 0x344a94u: goto label_344a94;
        case 0x344a98u: goto label_344a98;
        case 0x344a9cu: goto label_344a9c;
        case 0x344aa0u: goto label_344aa0;
        case 0x344aa4u: goto label_344aa4;
        case 0x344aa8u: goto label_344aa8;
        case 0x344aacu: goto label_344aac;
        case 0x344ab0u: goto label_344ab0;
        case 0x344ab4u: goto label_344ab4;
        case 0x344ab8u: goto label_344ab8;
        case 0x344abcu: goto label_344abc;
        case 0x344ac0u: goto label_344ac0;
        case 0x344ac4u: goto label_344ac4;
        case 0x344ac8u: goto label_344ac8;
        case 0x344accu: goto label_344acc;
        case 0x344ad0u: goto label_344ad0;
        case 0x344ad4u: goto label_344ad4;
        case 0x344ad8u: goto label_344ad8;
        case 0x344adcu: goto label_344adc;
        case 0x344ae0u: goto label_344ae0;
        case 0x344ae4u: goto label_344ae4;
        case 0x344ae8u: goto label_344ae8;
        case 0x344aecu: goto label_344aec;
        case 0x344af0u: goto label_344af0;
        case 0x344af4u: goto label_344af4;
        case 0x344af8u: goto label_344af8;
        case 0x344afcu: goto label_344afc;
        case 0x344b00u: goto label_344b00;
        case 0x344b04u: goto label_344b04;
        case 0x344b08u: goto label_344b08;
        case 0x344b0cu: goto label_344b0c;
        case 0x344b10u: goto label_344b10;
        case 0x344b14u: goto label_344b14;
        case 0x344b18u: goto label_344b18;
        case 0x344b1cu: goto label_344b1c;
        case 0x344b20u: goto label_344b20;
        case 0x344b24u: goto label_344b24;
        case 0x344b28u: goto label_344b28;
        case 0x344b2cu: goto label_344b2c;
        case 0x344b30u: goto label_344b30;
        case 0x344b34u: goto label_344b34;
        case 0x344b38u: goto label_344b38;
        case 0x344b3cu: goto label_344b3c;
        case 0x344b40u: goto label_344b40;
        case 0x344b44u: goto label_344b44;
        case 0x344b48u: goto label_344b48;
        case 0x344b4cu: goto label_344b4c;
        case 0x344b50u: goto label_344b50;
        case 0x344b54u: goto label_344b54;
        case 0x344b58u: goto label_344b58;
        case 0x344b5cu: goto label_344b5c;
        case 0x344b60u: goto label_344b60;
        case 0x344b64u: goto label_344b64;
        case 0x344b68u: goto label_344b68;
        case 0x344b6cu: goto label_344b6c;
        case 0x344b70u: goto label_344b70;
        case 0x344b74u: goto label_344b74;
        case 0x344b78u: goto label_344b78;
        case 0x344b7cu: goto label_344b7c;
        case 0x344b80u: goto label_344b80;
        case 0x344b84u: goto label_344b84;
        case 0x344b88u: goto label_344b88;
        case 0x344b8cu: goto label_344b8c;
        case 0x344b90u: goto label_344b90;
        case 0x344b94u: goto label_344b94;
        case 0x344b98u: goto label_344b98;
        case 0x344b9cu: goto label_344b9c;
        case 0x344ba0u: goto label_344ba0;
        case 0x344ba4u: goto label_344ba4;
        case 0x344ba8u: goto label_344ba8;
        case 0x344bacu: goto label_344bac;
        case 0x344bb0u: goto label_344bb0;
        case 0x344bb4u: goto label_344bb4;
        case 0x344bb8u: goto label_344bb8;
        case 0x344bbcu: goto label_344bbc;
        case 0x344bc0u: goto label_344bc0;
        case 0x344bc4u: goto label_344bc4;
        case 0x344bc8u: goto label_344bc8;
        case 0x344bccu: goto label_344bcc;
        case 0x344bd0u: goto label_344bd0;
        case 0x344bd4u: goto label_344bd4;
        case 0x344bd8u: goto label_344bd8;
        case 0x344bdcu: goto label_344bdc;
        case 0x344be0u: goto label_344be0;
        case 0x344be4u: goto label_344be4;
        case 0x344be8u: goto label_344be8;
        case 0x344becu: goto label_344bec;
        case 0x344bf0u: goto label_344bf0;
        case 0x344bf4u: goto label_344bf4;
        case 0x344bf8u: goto label_344bf8;
        case 0x344bfcu: goto label_344bfc;
        case 0x344c00u: goto label_344c00;
        case 0x344c04u: goto label_344c04;
        case 0x344c08u: goto label_344c08;
        case 0x344c0cu: goto label_344c0c;
        case 0x344c10u: goto label_344c10;
        case 0x344c14u: goto label_344c14;
        case 0x344c18u: goto label_344c18;
        case 0x344c1cu: goto label_344c1c;
        case 0x344c20u: goto label_344c20;
        case 0x344c24u: goto label_344c24;
        case 0x344c28u: goto label_344c28;
        case 0x344c2cu: goto label_344c2c;
        case 0x344c30u: goto label_344c30;
        case 0x344c34u: goto label_344c34;
        case 0x344c38u: goto label_344c38;
        case 0x344c3cu: goto label_344c3c;
        case 0x344c40u: goto label_344c40;
        case 0x344c44u: goto label_344c44;
        case 0x344c48u: goto label_344c48;
        case 0x344c4cu: goto label_344c4c;
        case 0x344c50u: goto label_344c50;
        case 0x344c54u: goto label_344c54;
        case 0x344c58u: goto label_344c58;
        case 0x344c5cu: goto label_344c5c;
        case 0x344c60u: goto label_344c60;
        case 0x344c64u: goto label_344c64;
        case 0x344c68u: goto label_344c68;
        case 0x344c6cu: goto label_344c6c;
        case 0x344c70u: goto label_344c70;
        case 0x344c74u: goto label_344c74;
        case 0x344c78u: goto label_344c78;
        case 0x344c7cu: goto label_344c7c;
        case 0x344c80u: goto label_344c80;
        case 0x344c84u: goto label_344c84;
        case 0x344c88u: goto label_344c88;
        case 0x344c8cu: goto label_344c8c;
        case 0x344c90u: goto label_344c90;
        case 0x344c94u: goto label_344c94;
        case 0x344c98u: goto label_344c98;
        case 0x344c9cu: goto label_344c9c;
        case 0x344ca0u: goto label_344ca0;
        case 0x344ca4u: goto label_344ca4;
        case 0x344ca8u: goto label_344ca8;
        case 0x344cacu: goto label_344cac;
        case 0x344cb0u: goto label_344cb0;
        case 0x344cb4u: goto label_344cb4;
        case 0x344cb8u: goto label_344cb8;
        case 0x344cbcu: goto label_344cbc;
        case 0x344cc0u: goto label_344cc0;
        case 0x344cc4u: goto label_344cc4;
        case 0x344cc8u: goto label_344cc8;
        case 0x344cccu: goto label_344ccc;
        case 0x344cd0u: goto label_344cd0;
        case 0x344cd4u: goto label_344cd4;
        case 0x344cd8u: goto label_344cd8;
        case 0x344cdcu: goto label_344cdc;
        case 0x344ce0u: goto label_344ce0;
        case 0x344ce4u: goto label_344ce4;
        case 0x344ce8u: goto label_344ce8;
        case 0x344cecu: goto label_344cec;
        case 0x344cf0u: goto label_344cf0;
        case 0x344cf4u: goto label_344cf4;
        case 0x344cf8u: goto label_344cf8;
        case 0x344cfcu: goto label_344cfc;
        case 0x344d00u: goto label_344d00;
        case 0x344d04u: goto label_344d04;
        case 0x344d08u: goto label_344d08;
        case 0x344d0cu: goto label_344d0c;
        case 0x344d10u: goto label_344d10;
        case 0x344d14u: goto label_344d14;
        case 0x344d18u: goto label_344d18;
        case 0x344d1cu: goto label_344d1c;
        case 0x344d20u: goto label_344d20;
        case 0x344d24u: goto label_344d24;
        case 0x344d28u: goto label_344d28;
        case 0x344d2cu: goto label_344d2c;
        case 0x344d30u: goto label_344d30;
        case 0x344d34u: goto label_344d34;
        case 0x344d38u: goto label_344d38;
        case 0x344d3cu: goto label_344d3c;
        case 0x344d40u: goto label_344d40;
        case 0x344d44u: goto label_344d44;
        case 0x344d48u: goto label_344d48;
        case 0x344d4cu: goto label_344d4c;
        case 0x344d50u: goto label_344d50;
        case 0x344d54u: goto label_344d54;
        case 0x344d58u: goto label_344d58;
        case 0x344d5cu: goto label_344d5c;
        case 0x344d60u: goto label_344d60;
        case 0x344d64u: goto label_344d64;
        case 0x344d68u: goto label_344d68;
        case 0x344d6cu: goto label_344d6c;
        case 0x344d70u: goto label_344d70;
        case 0x344d74u: goto label_344d74;
        case 0x344d78u: goto label_344d78;
        case 0x344d7cu: goto label_344d7c;
        case 0x344d80u: goto label_344d80;
        case 0x344d84u: goto label_344d84;
        case 0x344d88u: goto label_344d88;
        case 0x344d8cu: goto label_344d8c;
        case 0x344d90u: goto label_344d90;
        case 0x344d94u: goto label_344d94;
        case 0x344d98u: goto label_344d98;
        case 0x344d9cu: goto label_344d9c;
        case 0x344da0u: goto label_344da0;
        case 0x344da4u: goto label_344da4;
        case 0x344da8u: goto label_344da8;
        case 0x344dacu: goto label_344dac;
        case 0x344db0u: goto label_344db0;
        case 0x344db4u: goto label_344db4;
        case 0x344db8u: goto label_344db8;
        case 0x344dbcu: goto label_344dbc;
        case 0x344dc0u: goto label_344dc0;
        case 0x344dc4u: goto label_344dc4;
        case 0x344dc8u: goto label_344dc8;
        case 0x344dccu: goto label_344dcc;
        case 0x344dd0u: goto label_344dd0;
        case 0x344dd4u: goto label_344dd4;
        case 0x344dd8u: goto label_344dd8;
        case 0x344ddcu: goto label_344ddc;
        case 0x344de0u: goto label_344de0;
        case 0x344de4u: goto label_344de4;
        case 0x344de8u: goto label_344de8;
        case 0x344decu: goto label_344dec;
        case 0x344df0u: goto label_344df0;
        case 0x344df4u: goto label_344df4;
        case 0x344df8u: goto label_344df8;
        case 0x344dfcu: goto label_344dfc;
        case 0x344e00u: goto label_344e00;
        case 0x344e04u: goto label_344e04;
        case 0x344e08u: goto label_344e08;
        case 0x344e0cu: goto label_344e0c;
        case 0x344e10u: goto label_344e10;
        case 0x344e14u: goto label_344e14;
        case 0x344e18u: goto label_344e18;
        case 0x344e1cu: goto label_344e1c;
        case 0x344e20u: goto label_344e20;
        case 0x344e24u: goto label_344e24;
        case 0x344e28u: goto label_344e28;
        case 0x344e2cu: goto label_344e2c;
        case 0x344e30u: goto label_344e30;
        case 0x344e34u: goto label_344e34;
        case 0x344e38u: goto label_344e38;
        case 0x344e3cu: goto label_344e3c;
        case 0x344e40u: goto label_344e40;
        case 0x344e44u: goto label_344e44;
        case 0x344e48u: goto label_344e48;
        case 0x344e4cu: goto label_344e4c;
        case 0x344e50u: goto label_344e50;
        case 0x344e54u: goto label_344e54;
        case 0x344e58u: goto label_344e58;
        case 0x344e5cu: goto label_344e5c;
        case 0x344e60u: goto label_344e60;
        case 0x344e64u: goto label_344e64;
        case 0x344e68u: goto label_344e68;
        case 0x344e6cu: goto label_344e6c;
        case 0x344e70u: goto label_344e70;
        case 0x344e74u: goto label_344e74;
        case 0x344e78u: goto label_344e78;
        case 0x344e7cu: goto label_344e7c;
        case 0x344e80u: goto label_344e80;
        case 0x344e84u: goto label_344e84;
        case 0x344e88u: goto label_344e88;
        case 0x344e8cu: goto label_344e8c;
        case 0x344e90u: goto label_344e90;
        case 0x344e94u: goto label_344e94;
        case 0x344e98u: goto label_344e98;
        case 0x344e9cu: goto label_344e9c;
        case 0x344ea0u: goto label_344ea0;
        case 0x344ea4u: goto label_344ea4;
        case 0x344ea8u: goto label_344ea8;
        case 0x344eacu: goto label_344eac;
        case 0x344eb0u: goto label_344eb0;
        case 0x344eb4u: goto label_344eb4;
        case 0x344eb8u: goto label_344eb8;
        case 0x344ebcu: goto label_344ebc;
        case 0x344ec0u: goto label_344ec0;
        case 0x344ec4u: goto label_344ec4;
        case 0x344ec8u: goto label_344ec8;
        case 0x344eccu: goto label_344ecc;
        case 0x344ed0u: goto label_344ed0;
        case 0x344ed4u: goto label_344ed4;
        case 0x344ed8u: goto label_344ed8;
        case 0x344edcu: goto label_344edc;
        case 0x344ee0u: goto label_344ee0;
        case 0x344ee4u: goto label_344ee4;
        case 0x344ee8u: goto label_344ee8;
        case 0x344eecu: goto label_344eec;
        case 0x344ef0u: goto label_344ef0;
        case 0x344ef4u: goto label_344ef4;
        case 0x344ef8u: goto label_344ef8;
        case 0x344efcu: goto label_344efc;
        case 0x344f00u: goto label_344f00;
        case 0x344f04u: goto label_344f04;
        case 0x344f08u: goto label_344f08;
        case 0x344f0cu: goto label_344f0c;
        case 0x344f10u: goto label_344f10;
        case 0x344f14u: goto label_344f14;
        case 0x344f18u: goto label_344f18;
        case 0x344f1cu: goto label_344f1c;
        case 0x344f20u: goto label_344f20;
        case 0x344f24u: goto label_344f24;
        case 0x344f28u: goto label_344f28;
        case 0x344f2cu: goto label_344f2c;
        case 0x344f30u: goto label_344f30;
        case 0x344f34u: goto label_344f34;
        case 0x344f38u: goto label_344f38;
        case 0x344f3cu: goto label_344f3c;
        case 0x344f40u: goto label_344f40;
        case 0x344f44u: goto label_344f44;
        case 0x344f48u: goto label_344f48;
        case 0x344f4cu: goto label_344f4c;
        case 0x344f50u: goto label_344f50;
        case 0x344f54u: goto label_344f54;
        case 0x344f58u: goto label_344f58;
        case 0x344f5cu: goto label_344f5c;
        case 0x344f60u: goto label_344f60;
        case 0x344f64u: goto label_344f64;
        case 0x344f68u: goto label_344f68;
        case 0x344f6cu: goto label_344f6c;
        case 0x344f70u: goto label_344f70;
        case 0x344f74u: goto label_344f74;
        case 0x344f78u: goto label_344f78;
        case 0x344f7cu: goto label_344f7c;
        case 0x344f80u: goto label_344f80;
        case 0x344f84u: goto label_344f84;
        case 0x344f88u: goto label_344f88;
        case 0x344f8cu: goto label_344f8c;
        case 0x344f90u: goto label_344f90;
        case 0x344f94u: goto label_344f94;
        case 0x344f98u: goto label_344f98;
        case 0x344f9cu: goto label_344f9c;
        case 0x344fa0u: goto label_344fa0;
        case 0x344fa4u: goto label_344fa4;
        case 0x344fa8u: goto label_344fa8;
        case 0x344facu: goto label_344fac;
        case 0x344fb0u: goto label_344fb0;
        case 0x344fb4u: goto label_344fb4;
        case 0x344fb8u: goto label_344fb8;
        case 0x344fbcu: goto label_344fbc;
        case 0x344fc0u: goto label_344fc0;
        case 0x344fc4u: goto label_344fc4;
        case 0x344fc8u: goto label_344fc8;
        case 0x344fccu: goto label_344fcc;
        case 0x344fd0u: goto label_344fd0;
        case 0x344fd4u: goto label_344fd4;
        case 0x344fd8u: goto label_344fd8;
        case 0x344fdcu: goto label_344fdc;
        case 0x344fe0u: goto label_344fe0;
        case 0x344fe4u: goto label_344fe4;
        case 0x344fe8u: goto label_344fe8;
        case 0x344fecu: goto label_344fec;
        case 0x344ff0u: goto label_344ff0;
        case 0x344ff4u: goto label_344ff4;
        case 0x344ff8u: goto label_344ff8;
        case 0x344ffcu: goto label_344ffc;
        case 0x345000u: goto label_345000;
        case 0x345004u: goto label_345004;
        case 0x345008u: goto label_345008;
        case 0x34500cu: goto label_34500c;
        case 0x345010u: goto label_345010;
        case 0x345014u: goto label_345014;
        case 0x345018u: goto label_345018;
        case 0x34501cu: goto label_34501c;
        case 0x345020u: goto label_345020;
        case 0x345024u: goto label_345024;
        case 0x345028u: goto label_345028;
        case 0x34502cu: goto label_34502c;
        case 0x345030u: goto label_345030;
        case 0x345034u: goto label_345034;
        case 0x345038u: goto label_345038;
        case 0x34503cu: goto label_34503c;
        case 0x345040u: goto label_345040;
        case 0x345044u: goto label_345044;
        case 0x345048u: goto label_345048;
        case 0x34504cu: goto label_34504c;
        case 0x345050u: goto label_345050;
        case 0x345054u: goto label_345054;
        case 0x345058u: goto label_345058;
        case 0x34505cu: goto label_34505c;
        case 0x345060u: goto label_345060;
        case 0x345064u: goto label_345064;
        case 0x345068u: goto label_345068;
        case 0x34506cu: goto label_34506c;
        case 0x345070u: goto label_345070;
        case 0x345074u: goto label_345074;
        case 0x345078u: goto label_345078;
        case 0x34507cu: goto label_34507c;
        case 0x345080u: goto label_345080;
        case 0x345084u: goto label_345084;
        case 0x345088u: goto label_345088;
        case 0x34508cu: goto label_34508c;
        case 0x345090u: goto label_345090;
        case 0x345094u: goto label_345094;
        case 0x345098u: goto label_345098;
        case 0x34509cu: goto label_34509c;
        case 0x3450a0u: goto label_3450a0;
        case 0x3450a4u: goto label_3450a4;
        case 0x3450a8u: goto label_3450a8;
        case 0x3450acu: goto label_3450ac;
        case 0x3450b0u: goto label_3450b0;
        case 0x3450b4u: goto label_3450b4;
        case 0x3450b8u: goto label_3450b8;
        case 0x3450bcu: goto label_3450bc;
        case 0x3450c0u: goto label_3450c0;
        case 0x3450c4u: goto label_3450c4;
        case 0x3450c8u: goto label_3450c8;
        case 0x3450ccu: goto label_3450cc;
        case 0x3450d0u: goto label_3450d0;
        case 0x3450d4u: goto label_3450d4;
        case 0x3450d8u: goto label_3450d8;
        case 0x3450dcu: goto label_3450dc;
        case 0x3450e0u: goto label_3450e0;
        case 0x3450e4u: goto label_3450e4;
        case 0x3450e8u: goto label_3450e8;
        case 0x3450ecu: goto label_3450ec;
        case 0x3450f0u: goto label_3450f0;
        case 0x3450f4u: goto label_3450f4;
        case 0x3450f8u: goto label_3450f8;
        case 0x3450fcu: goto label_3450fc;
        case 0x345100u: goto label_345100;
        case 0x345104u: goto label_345104;
        case 0x345108u: goto label_345108;
        case 0x34510cu: goto label_34510c;
        case 0x345110u: goto label_345110;
        case 0x345114u: goto label_345114;
        case 0x345118u: goto label_345118;
        case 0x34511cu: goto label_34511c;
        case 0x345120u: goto label_345120;
        case 0x345124u: goto label_345124;
        case 0x345128u: goto label_345128;
        case 0x34512cu: goto label_34512c;
        case 0x345130u: goto label_345130;
        case 0x345134u: goto label_345134;
        case 0x345138u: goto label_345138;
        case 0x34513cu: goto label_34513c;
        case 0x345140u: goto label_345140;
        case 0x345144u: goto label_345144;
        case 0x345148u: goto label_345148;
        case 0x34514cu: goto label_34514c;
        case 0x345150u: goto label_345150;
        case 0x345154u: goto label_345154;
        case 0x345158u: goto label_345158;
        case 0x34515cu: goto label_34515c;
        case 0x345160u: goto label_345160;
        case 0x345164u: goto label_345164;
        case 0x345168u: goto label_345168;
        case 0x34516cu: goto label_34516c;
        case 0x345170u: goto label_345170;
        case 0x345174u: goto label_345174;
        case 0x345178u: goto label_345178;
        case 0x34517cu: goto label_34517c;
        case 0x345180u: goto label_345180;
        case 0x345184u: goto label_345184;
        case 0x345188u: goto label_345188;
        case 0x34518cu: goto label_34518c;
        case 0x345190u: goto label_345190;
        case 0x345194u: goto label_345194;
        case 0x345198u: goto label_345198;
        case 0x34519cu: goto label_34519c;
        case 0x3451a0u: goto label_3451a0;
        case 0x3451a4u: goto label_3451a4;
        case 0x3451a8u: goto label_3451a8;
        case 0x3451acu: goto label_3451ac;
        case 0x3451b0u: goto label_3451b0;
        case 0x3451b4u: goto label_3451b4;
        case 0x3451b8u: goto label_3451b8;
        case 0x3451bcu: goto label_3451bc;
        case 0x3451c0u: goto label_3451c0;
        case 0x3451c4u: goto label_3451c4;
        case 0x3451c8u: goto label_3451c8;
        case 0x3451ccu: goto label_3451cc;
        case 0x3451d0u: goto label_3451d0;
        case 0x3451d4u: goto label_3451d4;
        case 0x3451d8u: goto label_3451d8;
        case 0x3451dcu: goto label_3451dc;
        case 0x3451e0u: goto label_3451e0;
        case 0x3451e4u: goto label_3451e4;
        case 0x3451e8u: goto label_3451e8;
        case 0x3451ecu: goto label_3451ec;
        case 0x3451f0u: goto label_3451f0;
        case 0x3451f4u: goto label_3451f4;
        case 0x3451f8u: goto label_3451f8;
        case 0x3451fcu: goto label_3451fc;
        case 0x345200u: goto label_345200;
        case 0x345204u: goto label_345204;
        case 0x345208u: goto label_345208;
        case 0x34520cu: goto label_34520c;
        case 0x345210u: goto label_345210;
        case 0x345214u: goto label_345214;
        case 0x345218u: goto label_345218;
        case 0x34521cu: goto label_34521c;
        case 0x345220u: goto label_345220;
        case 0x345224u: goto label_345224;
        case 0x345228u: goto label_345228;
        case 0x34522cu: goto label_34522c;
        case 0x345230u: goto label_345230;
        case 0x345234u: goto label_345234;
        case 0x345238u: goto label_345238;
        case 0x34523cu: goto label_34523c;
        case 0x345240u: goto label_345240;
        case 0x345244u: goto label_345244;
        case 0x345248u: goto label_345248;
        case 0x34524cu: goto label_34524c;
        case 0x345250u: goto label_345250;
        case 0x345254u: goto label_345254;
        case 0x345258u: goto label_345258;
        case 0x34525cu: goto label_34525c;
        case 0x345260u: goto label_345260;
        case 0x345264u: goto label_345264;
        case 0x345268u: goto label_345268;
        case 0x34526cu: goto label_34526c;
        case 0x345270u: goto label_345270;
        case 0x345274u: goto label_345274;
        case 0x345278u: goto label_345278;
        case 0x34527cu: goto label_34527c;
        case 0x345280u: goto label_345280;
        case 0x345284u: goto label_345284;
        case 0x345288u: goto label_345288;
        case 0x34528cu: goto label_34528c;
        case 0x345290u: goto label_345290;
        case 0x345294u: goto label_345294;
        case 0x345298u: goto label_345298;
        case 0x34529cu: goto label_34529c;
        case 0x3452a0u: goto label_3452a0;
        case 0x3452a4u: goto label_3452a4;
        case 0x3452a8u: goto label_3452a8;
        case 0x3452acu: goto label_3452ac;
        case 0x3452b0u: goto label_3452b0;
        case 0x3452b4u: goto label_3452b4;
        case 0x3452b8u: goto label_3452b8;
        case 0x3452bcu: goto label_3452bc;
        case 0x3452c0u: goto label_3452c0;
        case 0x3452c4u: goto label_3452c4;
        case 0x3452c8u: goto label_3452c8;
        case 0x3452ccu: goto label_3452cc;
        case 0x3452d0u: goto label_3452d0;
        case 0x3452d4u: goto label_3452d4;
        case 0x3452d8u: goto label_3452d8;
        case 0x3452dcu: goto label_3452dc;
        case 0x3452e0u: goto label_3452e0;
        case 0x3452e4u: goto label_3452e4;
        case 0x3452e8u: goto label_3452e8;
        case 0x3452ecu: goto label_3452ec;
        case 0x3452f0u: goto label_3452f0;
        case 0x3452f4u: goto label_3452f4;
        case 0x3452f8u: goto label_3452f8;
        case 0x3452fcu: goto label_3452fc;
        case 0x345300u: goto label_345300;
        case 0x345304u: goto label_345304;
        case 0x345308u: goto label_345308;
        case 0x34530cu: goto label_34530c;
        case 0x345310u: goto label_345310;
        case 0x345314u: goto label_345314;
        case 0x345318u: goto label_345318;
        case 0x34531cu: goto label_34531c;
        case 0x345320u: goto label_345320;
        case 0x345324u: goto label_345324;
        case 0x345328u: goto label_345328;
        case 0x34532cu: goto label_34532c;
        case 0x345330u: goto label_345330;
        case 0x345334u: goto label_345334;
        case 0x345338u: goto label_345338;
        case 0x34533cu: goto label_34533c;
        case 0x345340u: goto label_345340;
        case 0x345344u: goto label_345344;
        case 0x345348u: goto label_345348;
        case 0x34534cu: goto label_34534c;
        case 0x345350u: goto label_345350;
        case 0x345354u: goto label_345354;
        case 0x345358u: goto label_345358;
        case 0x34535cu: goto label_34535c;
        case 0x345360u: goto label_345360;
        case 0x345364u: goto label_345364;
        case 0x345368u: goto label_345368;
        case 0x34536cu: goto label_34536c;
        case 0x345370u: goto label_345370;
        case 0x345374u: goto label_345374;
        case 0x345378u: goto label_345378;
        case 0x34537cu: goto label_34537c;
        case 0x345380u: goto label_345380;
        case 0x345384u: goto label_345384;
        case 0x345388u: goto label_345388;
        case 0x34538cu: goto label_34538c;
        case 0x345390u: goto label_345390;
        case 0x345394u: goto label_345394;
        case 0x345398u: goto label_345398;
        case 0x34539cu: goto label_34539c;
        case 0x3453a0u: goto label_3453a0;
        case 0x3453a4u: goto label_3453a4;
        case 0x3453a8u: goto label_3453a8;
        case 0x3453acu: goto label_3453ac;
        case 0x3453b0u: goto label_3453b0;
        case 0x3453b4u: goto label_3453b4;
        case 0x3453b8u: goto label_3453b8;
        case 0x3453bcu: goto label_3453bc;
        case 0x3453c0u: goto label_3453c0;
        case 0x3453c4u: goto label_3453c4;
        case 0x3453c8u: goto label_3453c8;
        case 0x3453ccu: goto label_3453cc;
        case 0x3453d0u: goto label_3453d0;
        case 0x3453d4u: goto label_3453d4;
        case 0x3453d8u: goto label_3453d8;
        case 0x3453dcu: goto label_3453dc;
        case 0x3453e0u: goto label_3453e0;
        case 0x3453e4u: goto label_3453e4;
        case 0x3453e8u: goto label_3453e8;
        case 0x3453ecu: goto label_3453ec;
        case 0x3453f0u: goto label_3453f0;
        case 0x3453f4u: goto label_3453f4;
        case 0x3453f8u: goto label_3453f8;
        case 0x3453fcu: goto label_3453fc;
        case 0x345400u: goto label_345400;
        case 0x345404u: goto label_345404;
        case 0x345408u: goto label_345408;
        case 0x34540cu: goto label_34540c;
        case 0x345410u: goto label_345410;
        case 0x345414u: goto label_345414;
        case 0x345418u: goto label_345418;
        case 0x34541cu: goto label_34541c;
        case 0x345420u: goto label_345420;
        case 0x345424u: goto label_345424;
        case 0x345428u: goto label_345428;
        case 0x34542cu: goto label_34542c;
        case 0x345430u: goto label_345430;
        case 0x345434u: goto label_345434;
        case 0x345438u: goto label_345438;
        case 0x34543cu: goto label_34543c;
        case 0x345440u: goto label_345440;
        case 0x345444u: goto label_345444;
        case 0x345448u: goto label_345448;
        case 0x34544cu: goto label_34544c;
        case 0x345450u: goto label_345450;
        case 0x345454u: goto label_345454;
        case 0x345458u: goto label_345458;
        case 0x34545cu: goto label_34545c;
        case 0x345460u: goto label_345460;
        case 0x345464u: goto label_345464;
        case 0x345468u: goto label_345468;
        case 0x34546cu: goto label_34546c;
        case 0x345470u: goto label_345470;
        case 0x345474u: goto label_345474;
        case 0x345478u: goto label_345478;
        case 0x34547cu: goto label_34547c;
        case 0x345480u: goto label_345480;
        case 0x345484u: goto label_345484;
        case 0x345488u: goto label_345488;
        case 0x34548cu: goto label_34548c;
        case 0x345490u: goto label_345490;
        case 0x345494u: goto label_345494;
        case 0x345498u: goto label_345498;
        case 0x34549cu: goto label_34549c;
        case 0x3454a0u: goto label_3454a0;
        case 0x3454a4u: goto label_3454a4;
        case 0x3454a8u: goto label_3454a8;
        case 0x3454acu: goto label_3454ac;
        case 0x3454b0u: goto label_3454b0;
        case 0x3454b4u: goto label_3454b4;
        case 0x3454b8u: goto label_3454b8;
        case 0x3454bcu: goto label_3454bc;
        case 0x3454c0u: goto label_3454c0;
        case 0x3454c4u: goto label_3454c4;
        case 0x3454c8u: goto label_3454c8;
        case 0x3454ccu: goto label_3454cc;
        case 0x3454d0u: goto label_3454d0;
        case 0x3454d4u: goto label_3454d4;
        case 0x3454d8u: goto label_3454d8;
        case 0x3454dcu: goto label_3454dc;
        case 0x3454e0u: goto label_3454e0;
        case 0x3454e4u: goto label_3454e4;
        case 0x3454e8u: goto label_3454e8;
        case 0x3454ecu: goto label_3454ec;
        case 0x3454f0u: goto label_3454f0;
        case 0x3454f4u: goto label_3454f4;
        case 0x3454f8u: goto label_3454f8;
        case 0x3454fcu: goto label_3454fc;
        case 0x345500u: goto label_345500;
        case 0x345504u: goto label_345504;
        case 0x345508u: goto label_345508;
        case 0x34550cu: goto label_34550c;
        case 0x345510u: goto label_345510;
        case 0x345514u: goto label_345514;
        case 0x345518u: goto label_345518;
        case 0x34551cu: goto label_34551c;
        default: break;
    }

    ctx->pc = 0x344800u;

label_344800:
    // 0x344800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x344800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_344804:
    // 0x344804: 0x3c0b0060  lui         $t3, 0x60
    ctx->pc = 0x344804u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)96 << 16));
label_344808:
    // 0x344808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x344808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_34480c:
    // 0x34480c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x34480cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_344810:
    // 0x344810: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x344810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_344814:
    // 0x344814: 0x256b1340  addiu       $t3, $t3, 0x1340
    ctx->pc = 0x344814u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4928));
label_344818:
    // 0x344818: 0x27aa0010  addiu       $t2, $sp, 0x10
    ctx->pc = 0x344818u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_34481c:
    // 0x34481c: 0x2409000d  addiu       $t1, $zero, 0xD
    ctx->pc = 0x34481cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_344820:
    // 0x344820: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x344820u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_344824:
    // 0x344824: 0x8c670004  lw          $a3, 0x4($v1)
    ctx->pc = 0x344824u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_344828:
    // 0x344828: 0x8c468a08  lw          $a2, -0x75F8($v0)
    ctx->pc = 0x344828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_34482c:
    // 0x34482c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x34482cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_344830:
    // 0x344830: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x344830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_344834:
    // 0x344834: 0x8cc80060  lw          $t0, 0x60($a2)
    ctx->pc = 0x344834u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 96)));
label_344838:
    // 0x344838: 0xc4401330  lwc1        $f0, 0x1330($v0)
    ctx->pc = 0x344838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_34483c:
    // 0x34483c: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34483cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_344840:
    // 0x344840: 0x8ca60050  lw          $a2, 0x50($a1)
    ctx->pc = 0x344840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_344844:
    // 0x344844: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x344844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_344848:
    // 0x344848: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x344848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_34484c:
    // 0x34484c: 0xc4601334  lwc1        $f0, 0x1334($v1)
    ctx->pc = 0x34484cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344850:
    // 0x344850: 0x8d050008  lw          $a1, 0x8($t0)
    ctx->pc = 0x344850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_344854:
    // 0x344854: 0xc4411338  lwc1        $f1, 0x1338($v0)
    ctx->pc = 0x344854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_344858:
    // 0x344858: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x344858u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_34485c:
    // 0x34485c: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x34485cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_344860:
    // 0x344860: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_344864:
    // 0x344864: 0xc440133c  lwc1        $f0, 0x133C($v0)
    ctx->pc = 0x344864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4924)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344868:
    // 0x344868: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x344868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_34486c:
    // 0x34486c: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x34486cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_344870:
    // 0x344870: 0x85680000  lh          $t0, 0x0($t3)
    ctx->pc = 0x344870u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
label_344874:
    // 0x344874: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x344874u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_344878:
    // 0x344878: 0x85620002  lh          $v0, 0x2($t3)
    ctx->pc = 0x344878u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 11), 2)));
label_34487c:
    // 0x34487c: 0xa5480000  sh          $t0, 0x0($t2)
    ctx->pc = 0x34487cu;
    WRITE16(ADD32(GPR_U32(ctx, 10), 0), (uint16_t)GPR_U32(ctx, 8));
label_344880:
    // 0x344880: 0xa5420002  sh          $v0, 0x2($t2)
    ctx->pc = 0x344880u;
    WRITE16(ADD32(GPR_U32(ctx, 10), 2), (uint16_t)GPR_U32(ctx, 2));
label_344884:
    // 0x344884: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x344884u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_344888:
    // 0x344888: 0x1d20fff9  bgtz        $t1, . + 4 + (-0x7 << 2)
label_34488c:
    if (ctx->pc == 0x34488Cu) {
        ctx->pc = 0x34488Cu;
            // 0x34488c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->pc = 0x344890u;
        goto label_344890;
    }
    ctx->pc = 0x344888u;
    {
        const bool branch_taken_0x344888 = (GPR_S32(ctx, 9) > 0);
        ctx->pc = 0x34488Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344888u;
            // 0x34488c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344888) {
            ctx->pc = 0x344870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344870;
        }
    }
    ctx->pc = 0x344890u;
label_344890:
    // 0x344890: 0x8cca0000  lw          $t2, 0x0($a2)
    ctx->pc = 0x344890u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_344894:
    // 0x344894: 0x11400023  beqz        $t2, . + 4 + (0x23 << 2)
label_344898:
    if (ctx->pc == 0x344898u) {
        ctx->pc = 0x34489Cu;
        goto label_34489c;
    }
    ctx->pc = 0x344894u;
    {
        const bool branch_taken_0x344894 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x344894) {
            ctx->pc = 0x344924u;
            goto label_344924;
        }
    }
    ctx->pc = 0x34489Cu;
label_34489c:
    // 0x34489c: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
label_3448a0:
    if (ctx->pc == 0x3448A0u) {
        ctx->pc = 0x3448A0u;
            // 0x3448a0: 0xa4042  srl         $t0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x3448A4u;
        goto label_3448a4;
    }
    ctx->pc = 0x34489Cu;
    {
        const bool branch_taken_0x34489c = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x34489c) {
            ctx->pc = 0x3448A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34489Cu;
            // 0x3448a0: 0xa4042  srl         $t0, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3448B0u;
            goto label_3448b0;
        }
    }
    ctx->pc = 0x3448A4u;
label_3448a4:
    // 0x3448a4: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x3448a4u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448a8:
    // 0x3448a8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3448ac:
    if (ctx->pc == 0x3448ACu) {
        ctx->pc = 0x3448ACu;
            // 0x3448ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3448B0u;
        goto label_3448b0;
    }
    ctx->pc = 0x3448A8u;
    {
        const bool branch_taken_0x3448a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3448ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3448A8u;
            // 0x3448ac: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448a8) {
            ctx->pc = 0x3448C8u;
            goto label_3448c8;
        }
    }
    ctx->pc = 0x3448B0u;
label_3448b0:
    // 0x3448b0: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x3448b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_3448b4:
    // 0x3448b4: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3448b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3448b8:
    // 0x3448b8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3448b8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448bc:
    // 0x3448bc: 0x0  nop
    ctx->pc = 0x3448bcu;
    // NOP
label_3448c0:
    // 0x3448c0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3448c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_3448c4:
    // 0x3448c4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3448c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_3448c8:
    // 0x3448c8: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3448cc:
    if (ctx->pc == 0x3448CCu) {
        ctx->pc = 0x3448CCu;
            // 0x3448cc: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3448D0u;
        goto label_3448d0;
    }
    ctx->pc = 0x3448C8u;
    {
        const bool branch_taken_0x3448c8 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3448c8) {
            ctx->pc = 0x3448CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3448C8u;
            // 0x3448cc: 0x54042  srl         $t0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3448DCu;
            goto label_3448dc;
        }
    }
    ctx->pc = 0x3448D0u;
label_3448d0:
    // 0x3448d0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3448d0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448d4:
    // 0x3448d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_3448d8:
    if (ctx->pc == 0x3448D8u) {
        ctx->pc = 0x3448D8u;
            // 0x3448d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3448DCu;
        goto label_3448dc;
    }
    ctx->pc = 0x3448D4u;
    {
        const bool branch_taken_0x3448d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3448D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3448D4u;
            // 0x3448d8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3448d4) {
            ctx->pc = 0x3448F4u;
            goto label_3448f4;
        }
    }
    ctx->pc = 0x3448DCu;
label_3448dc:
    // 0x3448dc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x3448dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3448e0:
    // 0x3448e0: 0x1024025  or          $t0, $t0, $v0
    ctx->pc = 0x3448e0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 2));
label_3448e4:
    // 0x3448e4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3448e4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3448e8:
    // 0x3448e8: 0x0  nop
    ctx->pc = 0x3448e8u;
    // NOP
label_3448ec:
    // 0x3448ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3448ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3448f0:
    // 0x3448f0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3448f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3448f4:
    // 0x3448f4: 0x0  nop
    ctx->pc = 0x3448f4u;
    // NOP
label_3448f8:
    // 0x3448f8: 0x0  nop
    ctx->pc = 0x3448f8u;
    // NOP
label_3448fc:
    // 0x3448fc: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x3448fcu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[2] = ctx->f[1] / ctx->f[0];
label_344900:
    // 0x344900: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x344900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_344904:
    // 0x344904: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x344904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_344908:
    // 0x344908: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x344908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_34490c:
    // 0x34490c: 0x4602001a  mula.s      $f0, $f2
    ctx->pc = 0x34490cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_344910:
    // 0x344910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344914:
    // 0x344914: 0x0  nop
    ctx->pc = 0x344914u;
    // NOP
label_344918:
    // 0x344918: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x344918u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_34491c:
    // 0x34491c: 0x10000002  b           . + 4 + (0x2 << 2)
label_344920:
    if (ctx->pc == 0x344920u) {
        ctx->pc = 0x344920u;
            // 0x344920: 0x4600085c  madd.s      $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->pc = 0x344924u;
        goto label_344924;
    }
    ctx->pc = 0x34491Cu;
    {
        const bool branch_taken_0x34491c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34491Cu;
            // 0x344920: 0x4600085c  madd.s      $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34491c) {
            ctx->pc = 0x344928u;
            goto label_344928;
        }
    }
    ctx->pc = 0x344924u;
label_344924:
    // 0x344924: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x344924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344928:
    // 0x344928: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x344928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_34492c:
    // 0x34492c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_344930:
    if (ctx->pc == 0x344930u) {
        ctx->pc = 0x344934u;
        goto label_344934;
    }
    ctx->pc = 0x34492Cu;
    {
        const bool branch_taken_0x34492c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34492c) {
            ctx->pc = 0x3449BCu;
            goto label_3449bc;
        }
    }
    ctx->pc = 0x344934u;
label_344934:
    // 0x344934: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344938:
    if (ctx->pc == 0x344938u) {
        ctx->pc = 0x344938u;
            // 0x344938: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x34493Cu;
        goto label_34493c;
    }
    ctx->pc = 0x344934u;
    {
        const bool branch_taken_0x344934 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344934) {
            ctx->pc = 0x344938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344934u;
            // 0x344938: 0x24842  srl         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344948u;
            goto label_344948;
        }
    }
    ctx->pc = 0x34493Cu;
label_34493c:
    // 0x34493c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x34493cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344940:
    // 0x344940: 0x10000007  b           . + 4 + (0x7 << 2)
label_344944:
    if (ctx->pc == 0x344944u) {
        ctx->pc = 0x344944u;
            // 0x344944: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344948u;
        goto label_344948;
    }
    ctx->pc = 0x344940u;
    {
        const bool branch_taken_0x344940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344940u;
            // 0x344944: 0x468000a0  cvt.s.w     $f2, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344940) {
            ctx->pc = 0x344960u;
            goto label_344960;
        }
    }
    ctx->pc = 0x344948u;
label_344948:
    // 0x344948: 0x30480001  andi        $t0, $v0, 0x1
    ctx->pc = 0x344948u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_34494c:
    // 0x34494c: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x34494cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_344950:
    // 0x344950: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x344950u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344954:
    // 0x344954: 0x0  nop
    ctx->pc = 0x344954u;
    // NOP
label_344958:
    // 0x344958: 0x468000a0  cvt.s.w     $f2, $f0
    ctx->pc = 0x344958u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_34495c:
    // 0x34495c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x34495cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344960:
    // 0x344960: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_344964:
    if (ctx->pc == 0x344964u) {
        ctx->pc = 0x344964u;
            // 0x344964: 0x34842  srl         $t1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x344968u;
        goto label_344968;
    }
    ctx->pc = 0x344960u;
    {
        const bool branch_taken_0x344960 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x344960) {
            ctx->pc = 0x344964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344960u;
            // 0x344964: 0x34842  srl         $t1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344974u;
            goto label_344974;
        }
    }
    ctx->pc = 0x344968u;
label_344968:
    // 0x344968: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344968u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34496c:
    // 0x34496c: 0x10000007  b           . + 4 + (0x7 << 2)
label_344970:
    if (ctx->pc == 0x344970u) {
        ctx->pc = 0x344970u;
            // 0x344970: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344974u;
        goto label_344974;
    }
    ctx->pc = 0x34496Cu;
    {
        const bool branch_taken_0x34496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34496Cu;
            // 0x344970: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x34496c) {
            ctx->pc = 0x34498Cu;
            goto label_34498c;
        }
    }
    ctx->pc = 0x344974u;
label_344974:
    // 0x344974: 0x30680001  andi        $t0, $v1, 0x1
    ctx->pc = 0x344974u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_344978:
    // 0x344978: 0x1284825  or          $t1, $t1, $t0
    ctx->pc = 0x344978u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 8));
label_34497c:
    // 0x34497c: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x34497cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344980:
    // 0x344980: 0x0  nop
    ctx->pc = 0x344980u;
    // NOP
label_344984:
    // 0x344984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x344984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_344988:
    // 0x344988: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x344988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34498c:
    // 0x34498c: 0x0  nop
    ctx->pc = 0x34498cu;
    // NOP
label_344990:
    // 0x344990: 0x0  nop
    ctx->pc = 0x344990u;
    // NOP
label_344994:
    // 0x344994: 0x460010c3  div.s       $f3, $f2, $f0
    ctx->pc = 0x344994u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[3] = ctx->f[2] / ctx->f[0];
label_344998:
    // 0x344998: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x344998u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
label_34499c:
    // 0x34499c: 0xc7a0005c  lwc1        $f0, 0x5C($sp)
    ctx->pc = 0x34499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3449a0:
    // 0x3449a0: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x3449a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_3449a4:
    // 0x3449a4: 0x4603001a  mula.s      $f0, $f3
    ctx->pc = 0x3449a4u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_3449a8:
    // 0x3449a8: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x3449a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3449ac:
    // 0x3449ac: 0x0  nop
    ctx->pc = 0x3449acu;
    // NOP
label_3449b0:
    // 0x3449b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3449b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_3449b4:
    // 0x3449b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3449b8:
    if (ctx->pc == 0x3449B8u) {
        ctx->pc = 0x3449B8u;
            // 0x3449b8: 0x4600101c  madd.s      $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->pc = 0x3449BCu;
        goto label_3449bc;
    }
    ctx->pc = 0x3449B4u;
    {
        const bool branch_taken_0x3449b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3449B4u;
            // 0x3449b8: 0x4600101c  madd.s      $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[0]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449b4) {
            ctx->pc = 0x3449C0u;
            goto label_3449c0;
        }
    }
    ctx->pc = 0x3449BCu;
label_3449bc:
    // 0x3449bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3449bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3449c0:
    // 0x3449c0: 0x1140001f  beqz        $t2, . + 4 + (0x1F << 2)
label_3449c4:
    if (ctx->pc == 0x3449C4u) {
        ctx->pc = 0x3449C4u;
            // 0x3449c4: 0x8ce80008  lw          $t0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->pc = 0x3449C8u;
        goto label_3449c8;
    }
    ctx->pc = 0x3449C0u;
    {
        const bool branch_taken_0x3449c0 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3449C0u;
            // 0x3449c4: 0x8ce80008  lw          $t0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449c0) {
            ctx->pc = 0x344A40u;
            goto label_344a40;
        }
    }
    ctx->pc = 0x3449C8u;
label_3449c8:
    // 0x3449c8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x3449c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_3449cc:
    // 0x3449cc: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_3449d0:
    if (ctx->pc == 0x3449D0u) {
        ctx->pc = 0x3449D0u;
            // 0x3449d0: 0x54842  srl         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3449D4u;
        goto label_3449d4;
    }
    ctx->pc = 0x3449CCu;
    {
        const bool branch_taken_0x3449cc = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x3449cc) {
            ctx->pc = 0x3449D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3449CCu;
            // 0x3449d0: 0x54842  srl         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3449E0u;
            goto label_3449e0;
        }
    }
    ctx->pc = 0x3449D4u;
label_3449d4:
    // 0x3449d4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3449d4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3449d8:
    // 0x3449d8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3449dc:
    if (ctx->pc == 0x3449DCu) {
        ctx->pc = 0x3449DCu;
            // 0x3449dc: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3449E0u;
        goto label_3449e0;
    }
    ctx->pc = 0x3449D8u;
    {
        const bool branch_taken_0x3449d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3449DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3449D8u;
            // 0x3449dc: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3449d8) {
            ctx->pc = 0x3449F8u;
            goto label_3449f8;
        }
    }
    ctx->pc = 0x3449E0u;
label_3449e0:
    // 0x3449e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3449e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_3449e4:
    // 0x3449e4: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x3449e4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_3449e8:
    // 0x3449e8: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x3449e8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3449ec:
    // 0x3449ec: 0x0  nop
    ctx->pc = 0x3449ecu;
    // NOP
label_3449f0:
    // 0x3449f0: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x3449f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_3449f4:
    // 0x3449f4: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3449f4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3449f8:
    // 0x3449f8: 0x5420004  bltzl       $t2, . + 4 + (0x4 << 2)
label_3449fc:
    if (ctx->pc == 0x3449FCu) {
        ctx->pc = 0x3449FCu;
            // 0x3449fc: 0xa4842  srl         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->pc = 0x344A00u;
        goto label_344a00;
    }
    ctx->pc = 0x3449F8u;
    {
        const bool branch_taken_0x3449f8 = (GPR_S32(ctx, 10) < 0);
        if (branch_taken_0x3449f8) {
            ctx->pc = 0x3449FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3449F8u;
            // 0x3449fc: 0xa4842  srl         $t1, $t2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344A0Cu;
            goto label_344a0c;
        }
    }
    ctx->pc = 0x344A00u;
label_344a00:
    // 0x344a00: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x344a00u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a04:
    // 0x344a04: 0x10000007  b           . + 4 + (0x7 << 2)
label_344a08:
    if (ctx->pc == 0x344A08u) {
        ctx->pc = 0x344A08u;
            // 0x344a08: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344A0Cu;
        goto label_344a0c;
    }
    ctx->pc = 0x344A04u;
    {
        const bool branch_taken_0x344a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344A04u;
            // 0x344a08: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a04) {
            ctx->pc = 0x344A24u;
            goto label_344a24;
        }
    }
    ctx->pc = 0x344A0Cu;
label_344a0c:
    // 0x344a0c: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x344a0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_344a10:
    // 0x344a10: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x344a10u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_344a14:
    // 0x344a14: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x344a14u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a18:
    // 0x344a18: 0x0  nop
    ctx->pc = 0x344a18u;
    // NOP
label_344a1c:
    // 0x344a1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344a1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_344a20:
    // 0x344a20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x344a20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344a24:
    // 0x344a24: 0x0  nop
    ctx->pc = 0x344a24u;
    // NOP
label_344a28:
    // 0x344a28: 0x0  nop
    ctx->pc = 0x344a28u;
    // NOP
label_344a2c:
    // 0x344a2c: 0x46031143  div.s       $f5, $f2, $f3
    ctx->pc = 0x344a2cu;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[5] = ctx->f[2] / ctx->f[3];
label_344a30:
    // 0x344a30: 0x0  nop
    ctx->pc = 0x344a30u;
    // NOP
label_344a34:
    // 0x344a34: 0x0  nop
    ctx->pc = 0x344a34u;
    // NOP
label_344a38:
    // 0x344a38: 0x1000001b  b           . + 4 + (0x1B << 2)
label_344a3c:
    if (ctx->pc == 0x344A3Cu) {
        ctx->pc = 0x344A40u;
        goto label_344a40;
    }
    ctx->pc = 0x344A38u;
    {
        const bool branch_taken_0x344a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344a38) {
            ctx->pc = 0x344AA8u;
            goto label_344aa8;
        }
    }
    ctx->pc = 0x344A40u;
label_344a40:
    // 0x344a40: 0x8cc90008  lw          $t1, 0x8($a2)
    ctx->pc = 0x344a40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_344a44:
    // 0x344a44: 0x5220004  bltzl       $t1, . + 4 + (0x4 << 2)
label_344a48:
    if (ctx->pc == 0x344A48u) {
        ctx->pc = 0x344A48u;
            // 0x344a48: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x344A4Cu;
        goto label_344a4c;
    }
    ctx->pc = 0x344A44u;
    {
        const bool branch_taken_0x344a44 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x344a44) {
            ctx->pc = 0x344A48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344A44u;
            // 0x344a48: 0x95042  srl         $t2, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344A58u;
            goto label_344a58;
        }
    }
    ctx->pc = 0x344A4Cu;
label_344a4c:
    // 0x344a4c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x344a4cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a50:
    // 0x344a50: 0x10000007  b           . + 4 + (0x7 << 2)
label_344a54:
    if (ctx->pc == 0x344A54u) {
        ctx->pc = 0x344A54u;
            // 0x344a54: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344A58u;
        goto label_344a58;
    }
    ctx->pc = 0x344A50u;
    {
        const bool branch_taken_0x344a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344A50u;
            // 0x344a54: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a50) {
            ctx->pc = 0x344A70u;
            goto label_344a70;
        }
    }
    ctx->pc = 0x344A58u;
label_344a58:
    // 0x344a58: 0x31290001  andi        $t1, $t1, 0x1
    ctx->pc = 0x344a58u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_344a5c:
    // 0x344a5c: 0x1495025  or          $t2, $t2, $t1
    ctx->pc = 0x344a5cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 9));
label_344a60:
    // 0x344a60: 0x448a1000  mtc1        $t2, $f2
    ctx->pc = 0x344a60u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a64:
    // 0x344a64: 0x0  nop
    ctx->pc = 0x344a64u;
    // NOP
label_344a68:
    // 0x344a68: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x344a68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_344a6c:
    // 0x344a6c: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x344a6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_344a70:
    // 0x344a70: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
label_344a74:
    if (ctx->pc == 0x344A74u) {
        ctx->pc = 0x344A74u;
            // 0x344a74: 0x54842  srl         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x344A78u;
        goto label_344a78;
    }
    ctx->pc = 0x344A70u;
    {
        const bool branch_taken_0x344a70 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x344a70) {
            ctx->pc = 0x344A74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344A70u;
            // 0x344a74: 0x54842  srl         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344A84u;
            goto label_344a84;
        }
    }
    ctx->pc = 0x344A78u;
label_344a78:
    // 0x344a78: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x344a78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a7c:
    // 0x344a7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_344a80:
    if (ctx->pc == 0x344A80u) {
        ctx->pc = 0x344A80u;
            // 0x344a80: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344A84u;
        goto label_344a84;
    }
    ctx->pc = 0x344A7Cu;
    {
        const bool branch_taken_0x344a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344A7Cu;
            // 0x344a80: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344a7c) {
            ctx->pc = 0x344A9Cu;
            goto label_344a9c;
        }
    }
    ctx->pc = 0x344A84u;
label_344a84:
    // 0x344a84: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x344a84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_344a88:
    // 0x344a88: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x344a88u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_344a8c:
    // 0x344a8c: 0x44891000  mtc1        $t1, $f2
    ctx->pc = 0x344a8cu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344a90:
    // 0x344a90: 0x0  nop
    ctx->pc = 0x344a90u;
    // NOP
label_344a94:
    // 0x344a94: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344a94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_344a98:
    // 0x344a98: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x344a98u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344a9c:
    // 0x344a9c: 0x0  nop
    ctx->pc = 0x344a9cu;
    // NOP
label_344aa0:
    // 0x344aa0: 0x0  nop
    ctx->pc = 0x344aa0u;
    // NOP
label_344aa4:
    // 0x344aa4: 0x46021943  div.s       $f5, $f3, $f2
    ctx->pc = 0x344aa4u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[5] = ctx->f[3] / ctx->f[2];
label_344aa8:
    // 0x344aa8: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
label_344aac:
    if (ctx->pc == 0x344AACu) {
        ctx->pc = 0x344AACu;
            // 0x344aac: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->pc = 0x344AB0u;
        goto label_344ab0;
    }
    ctx->pc = 0x344AA8u;
    {
        const bool branch_taken_0x344aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344aa8) {
            ctx->pc = 0x344AACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344AA8u;
            // 0x344aac: 0x8cc2000c  lw          $v0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344B28u;
            goto label_344b28;
        }
    }
    ctx->pc = 0x344AB0u;
label_344ab0:
    // 0x344ab0: 0x8cc3000c  lw          $v1, 0xC($a2)
    ctx->pc = 0x344ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_344ab4:
    // 0x344ab4: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_344ab8:
    if (ctx->pc == 0x344AB8u) {
        ctx->pc = 0x344AB8u;
            // 0x344ab8: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x344ABCu;
        goto label_344abc;
    }
    ctx->pc = 0x344AB4u;
    {
        const bool branch_taken_0x344ab4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x344ab4) {
            ctx->pc = 0x344AB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344AB4u;
            // 0x344ab8: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344AC8u;
            goto label_344ac8;
        }
    }
    ctx->pc = 0x344ABCu;
label_344abc:
    // 0x344abc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x344abcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344ac0:
    // 0x344ac0: 0x10000007  b           . + 4 + (0x7 << 2)
label_344ac4:
    if (ctx->pc == 0x344AC4u) {
        ctx->pc = 0x344AC4u;
            // 0x344ac4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344AC8u;
        goto label_344ac8;
    }
    ctx->pc = 0x344AC0u;
    {
        const bool branch_taken_0x344ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344AC0u;
            // 0x344ac4: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ac0) {
            ctx->pc = 0x344AE0u;
            goto label_344ae0;
        }
    }
    ctx->pc = 0x344AC8u;
label_344ac8:
    // 0x344ac8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x344ac8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_344acc:
    // 0x344acc: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x344accu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_344ad0:
    // 0x344ad0: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x344ad0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344ad4:
    // 0x344ad4: 0x0  nop
    ctx->pc = 0x344ad4u;
    // NOP
label_344ad8:
    // 0x344ad8: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x344ad8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_344adc:
    // 0x344adc: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x344adcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_344ae0:
    // 0x344ae0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344ae4:
    if (ctx->pc == 0x344AE4u) {
        ctx->pc = 0x344AE4u;
            // 0x344ae4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x344AE8u;
        goto label_344ae8;
    }
    ctx->pc = 0x344AE0u;
    {
        const bool branch_taken_0x344ae0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344ae0) {
            ctx->pc = 0x344AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344AE0u;
            // 0x344ae4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344AF4u;
            goto label_344af4;
        }
    }
    ctx->pc = 0x344AE8u;
label_344ae8:
    // 0x344ae8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x344ae8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344aec:
    // 0x344aec: 0x10000007  b           . + 4 + (0x7 << 2)
label_344af0:
    if (ctx->pc == 0x344AF0u) {
        ctx->pc = 0x344AF0u;
            // 0x344af0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344AF4u;
        goto label_344af4;
    }
    ctx->pc = 0x344AECu;
    {
        const bool branch_taken_0x344aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344AECu;
            // 0x344af0: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344aec) {
            ctx->pc = 0x344B0Cu;
            goto label_344b0c;
        }
    }
    ctx->pc = 0x344AF4u;
label_344af4:
    // 0x344af4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344af8:
    // 0x344af8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344af8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344afc:
    // 0x344afc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x344afcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344b00:
    // 0x344b00: 0x0  nop
    ctx->pc = 0x344b00u;
    // NOP
label_344b04:
    // 0x344b04: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344b04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_344b08:
    // 0x344b08: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x344b08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344b0c:
    // 0x344b0c: 0x0  nop
    ctx->pc = 0x344b0cu;
    // NOP
label_344b10:
    // 0x344b10: 0x0  nop
    ctx->pc = 0x344b10u;
    // NOP
label_344b14:
    // 0x344b14: 0x46031103  div.s       $f4, $f2, $f3
    ctx->pc = 0x344b14u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[4] = ctx->f[2] / ctx->f[3];
label_344b18:
    // 0x344b18: 0x0  nop
    ctx->pc = 0x344b18u;
    // NOP
label_344b1c:
    // 0x344b1c: 0x0  nop
    ctx->pc = 0x344b1cu;
    // NOP
label_344b20:
    // 0x344b20: 0x1000001a  b           . + 4 + (0x1A << 2)
label_344b24:
    if (ctx->pc == 0x344B24u) {
        ctx->pc = 0x344B28u;
        goto label_344b28;
    }
    ctx->pc = 0x344B20u;
    {
        const bool branch_taken_0x344b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x344b20) {
            ctx->pc = 0x344B8Cu;
            goto label_344b8c;
        }
    }
    ctx->pc = 0x344B28u;
label_344b28:
    // 0x344b28: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344b2c:
    if (ctx->pc == 0x344B2Cu) {
        ctx->pc = 0x344B2Cu;
            // 0x344b2c: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x344B30u;
        goto label_344b30;
    }
    ctx->pc = 0x344B28u;
    {
        const bool branch_taken_0x344b28 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344b28) {
            ctx->pc = 0x344B2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344B28u;
            // 0x344b2c: 0x22842  srl         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344B3Cu;
            goto label_344b3c;
        }
    }
    ctx->pc = 0x344B30u;
label_344b30:
    // 0x344b30: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x344b30u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344b34:
    // 0x344b34: 0x10000007  b           . + 4 + (0x7 << 2)
label_344b38:
    if (ctx->pc == 0x344B38u) {
        ctx->pc = 0x344B38u;
            // 0x344b38: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344B3Cu;
        goto label_344b3c;
    }
    ctx->pc = 0x344B34u;
    {
        const bool branch_taken_0x344b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344B34u;
            // 0x344b38: 0x468010e0  cvt.s.w     $f3, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b34) {
            ctx->pc = 0x344B54u;
            goto label_344b54;
        }
    }
    ctx->pc = 0x344B3Cu;
label_344b3c:
    // 0x344b3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344b40:
    // 0x344b40: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x344b40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_344b44:
    // 0x344b44: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x344b44u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344b48:
    // 0x344b48: 0x0  nop
    ctx->pc = 0x344b48u;
    // NOP
label_344b4c:
    // 0x344b4c: 0x468010e0  cvt.s.w     $f3, $f2
    ctx->pc = 0x344b4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_344b50:
    // 0x344b50: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x344b50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_344b54:
    // 0x344b54: 0x4620004  bltzl       $v1, . + 4 + (0x4 << 2)
label_344b58:
    if (ctx->pc == 0x344B58u) {
        ctx->pc = 0x344B58u;
            // 0x344b58: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x344B5Cu;
        goto label_344b5c;
    }
    ctx->pc = 0x344B54u;
    {
        const bool branch_taken_0x344b54 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x344b54) {
            ctx->pc = 0x344B58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344B54u;
            // 0x344b58: 0x32842  srl         $a1, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344B68u;
            goto label_344b68;
        }
    }
    ctx->pc = 0x344B5Cu;
label_344b5c:
    // 0x344b5c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x344b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344b60:
    // 0x344b60: 0x10000007  b           . + 4 + (0x7 << 2)
label_344b64:
    if (ctx->pc == 0x344B64u) {
        ctx->pc = 0x344B64u;
            // 0x344b64: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344B68u;
        goto label_344b68;
    }
    ctx->pc = 0x344B60u;
    {
        const bool branch_taken_0x344b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344B64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344B60u;
            // 0x344b64: 0x468010a0  cvt.s.w     $f2, $f2 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344b60) {
            ctx->pc = 0x344B80u;
            goto label_344b80;
        }
    }
    ctx->pc = 0x344B68u;
label_344b68:
    // 0x344b68: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x344b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_344b6c:
    // 0x344b6c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x344b6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_344b70:
    // 0x344b70: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x344b70u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_344b74:
    // 0x344b74: 0x0  nop
    ctx->pc = 0x344b74u;
    // NOP
label_344b78:
    // 0x344b78: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x344b78u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_344b7c:
    // 0x344b7c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x344b7cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_344b80:
    // 0x344b80: 0x0  nop
    ctx->pc = 0x344b80u;
    // NOP
label_344b84:
    // 0x344b84: 0x0  nop
    ctx->pc = 0x344b84u;
    // NOP
label_344b88:
    // 0x344b88: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x344b88u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[4] = ctx->f[3] / ctx->f[2];
label_344b8c:
    // 0x344b8c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x344b8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344b90:
    // 0x344b90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344b94:
    // 0x344b94: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x344b94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_344b98:
    // 0x344b98: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x344b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_344b9c:
    // 0x344b9c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x344b9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344ba0:
    // 0x344ba0: 0x94430010  lhu         $v1, 0x10($v0)
    ctx->pc = 0x344ba0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_344ba4:
    // 0x344ba4: 0x25080030  addiu       $t0, $t0, 0x30
    ctx->pc = 0x344ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
label_344ba8:
    // 0x344ba8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x344ba8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_344bac:
    // 0x344bac: 0xc5020020  lwc1        $f2, 0x20($t0)
    ctx->pc = 0x344bacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_344bb0:
    // 0x344bb0: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x344bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_344bb4:
    // 0x344bb4: 0x46011818  adda.s      $f3, $f1
    ctx->pc = 0x344bb4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_344bb8:
    // 0x344bb8: 0x4605109c  madd.s      $f2, $f2, $f5
    ctx->pc = 0x344bb8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[5]));
label_344bbc:
    // 0x344bbc: 0xe5020020  swc1        $f2, 0x20($t0)
    ctx->pc = 0x344bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 32), bits); }
label_344bc0:
    // 0x344bc0: 0xc5020024  lwc1        $f2, 0x24($t0)
    ctx->pc = 0x344bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_344bc4:
    // 0x344bc4: 0x46001818  adda.s      $f3, $f0
    ctx->pc = 0x344bc4u;
    ctx->f[31] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_344bc8:
    // 0x344bc8: 0x4604109c  madd.s      $f2, $f2, $f4
    ctx->pc = 0x344bc8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[4]));
label_344bcc:
    // 0x344bcc: 0xe5020024  swc1        $f2, 0x24($t0)
    ctx->pc = 0x344bccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_344bd0:
    // 0x344bd0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_344bd4:
    if (ctx->pc == 0x344BD4u) {
        ctx->pc = 0x344BD4u;
            // 0x344bd4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->pc = 0x344BD8u;
        goto label_344bd8;
    }
    ctx->pc = 0x344BD0u;
    {
        const bool branch_taken_0x344bd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344BD0u;
            // 0x344bd4: 0x25080030  addiu       $t0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344bd0) {
            ctx->pc = 0x344BA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344ba8;
        }
    }
    ctx->pc = 0x344BD8u;
label_344bd8:
    // 0x344bd8: 0x8ce2001c  lw          $v0, 0x1C($a3)
    ctx->pc = 0x344bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 28)));
label_344bdc:
    // 0x344bdc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x344bdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_344be0:
    // 0x344be0: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x344be0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_344be4:
    // 0x344be4: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x344be4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_344be8:
    // 0x344be8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_344bec:
    if (ctx->pc == 0x344BECu) {
        ctx->pc = 0x344BECu;
            // 0x344bec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x344BF0u;
        goto label_344bf0;
    }
    ctx->pc = 0x344BE8u;
    {
        const bool branch_taken_0x344be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344BE8u;
            // 0x344bec: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344be8) {
            ctx->pc = 0x344B98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344b98;
        }
    }
    ctx->pc = 0x344BF0u;
label_344bf0:
    // 0x344bf0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x344bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_344bf4:
    // 0x344bf4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x344bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_344bf8:
    // 0x344bf8: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x344bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_344bfc:
    // 0x344bfc: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x344bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_344c00:
    // 0x344c00: 0x8c660060  lw          $a2, 0x60($v1)
    ctx->pc = 0x344c00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_344c04:
    // 0x344c04: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x344c04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_344c08:
    // 0x344c08: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x344c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_344c0c:
    // 0x344c0c: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_344c10:
    if (ctx->pc == 0x344C10u) {
        ctx->pc = 0x344C10u;
            // 0x344c10: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x344C14u;
        goto label_344c14;
    }
    ctx->pc = 0x344C0Cu;
    {
        const bool branch_taken_0x344c0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x344C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344C0Cu;
            // 0x344c10: 0x8c650010  lw          $a1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c0c) {
            ctx->pc = 0x344C20u;
            goto label_344c20;
        }
    }
    ctx->pc = 0x344C14u;
label_344c14:
    // 0x344c14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c18:
    // 0x344c18: 0x10000008  b           . + 4 + (0x8 << 2)
label_344c1c:
    if (ctx->pc == 0x344C1Cu) {
        ctx->pc = 0x344C1Cu;
            // 0x344c1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344C20u;
        goto label_344c20;
    }
    ctx->pc = 0x344C18u;
    {
        const bool branch_taken_0x344c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344C18u;
            // 0x344c1c: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c18) {
            ctx->pc = 0x344C3Cu;
            goto label_344c3c;
        }
    }
    ctx->pc = 0x344C20u;
label_344c20:
    // 0x344c20: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x344c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_344c24:
    // 0x344c24: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344c28:
    // 0x344c28: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344c2c:
    // 0x344c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c30:
    // 0x344c30: 0x0  nop
    ctx->pc = 0x344c30u;
    // NOP
label_344c34:
    // 0x344c34: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x344c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_344c38:
    // 0x344c38: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x344c38u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_344c3c:
    // 0x344c3c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x344c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_344c40:
    // 0x344c40: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344c44:
    if (ctx->pc == 0x344C44u) {
        ctx->pc = 0x344C44u;
            // 0x344c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x344C48u;
        goto label_344c48;
    }
    ctx->pc = 0x344C40u;
    {
        const bool branch_taken_0x344c40 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344c40) {
            ctx->pc = 0x344C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344C40u;
            // 0x344c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344C54u;
            goto label_344c54;
        }
    }
    ctx->pc = 0x344C48u;
label_344c48:
    // 0x344c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c4c:
    // 0x344c4c: 0x10000007  b           . + 4 + (0x7 << 2)
label_344c50:
    if (ctx->pc == 0x344C50u) {
        ctx->pc = 0x344C50u;
            // 0x344c50: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344C54u;
        goto label_344c54;
    }
    ctx->pc = 0x344C4Cu;
    {
        const bool branch_taken_0x344c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344C4Cu;
            // 0x344c50: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c4c) {
            ctx->pc = 0x344C6Cu;
            goto label_344c6c;
        }
    }
    ctx->pc = 0x344C54u;
label_344c54:
    // 0x344c54: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344c58:
    // 0x344c58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344c58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344c5c:
    // 0x344c5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344c5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c60:
    // 0x344c60: 0x0  nop
    ctx->pc = 0x344c60u;
    // NOP
label_344c64:
    // 0x344c64: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x344c64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
label_344c68:
    // 0x344c68: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x344c68u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_344c6c:
    // 0x344c6c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x344c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_344c70:
    // 0x344c70: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344c74:
    if (ctx->pc == 0x344C74u) {
        ctx->pc = 0x344C74u;
            // 0x344c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x344C78u;
        goto label_344c78;
    }
    ctx->pc = 0x344C70u;
    {
        const bool branch_taken_0x344c70 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344c70) {
            ctx->pc = 0x344C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344C70u;
            // 0x344c74: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344C84u;
            goto label_344c84;
        }
    }
    ctx->pc = 0x344C78u;
label_344c78:
    // 0x344c78: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344c78u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c7c:
    // 0x344c7c: 0x10000007  b           . + 4 + (0x7 << 2)
label_344c80:
    if (ctx->pc == 0x344C80u) {
        ctx->pc = 0x344C80u;
            // 0x344c80: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344C84u;
        goto label_344c84;
    }
    ctx->pc = 0x344C7Cu;
    {
        const bool branch_taken_0x344c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344C7Cu;
            // 0x344c80: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344c7c) {
            ctx->pc = 0x344C9Cu;
            goto label_344c9c;
        }
    }
    ctx->pc = 0x344C84u;
label_344c84:
    // 0x344c84: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344c88:
    // 0x344c88: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344c8c:
    // 0x344c8c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344c8cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344c90:
    // 0x344c90: 0x0  nop
    ctx->pc = 0x344c90u;
    // NOP
label_344c94:
    // 0x344c94: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x344c94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_344c98:
    // 0x344c98: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x344c98u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_344c9c:
    // 0x344c9c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x344c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_344ca0:
    // 0x344ca0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_344ca4:
    if (ctx->pc == 0x344CA4u) {
        ctx->pc = 0x344CA4u;
            // 0x344ca4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x344CA8u;
        goto label_344ca8;
    }
    ctx->pc = 0x344CA0u;
    {
        const bool branch_taken_0x344ca0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x344ca0) {
            ctx->pc = 0x344CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344CA0u;
            // 0x344ca4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x344CB4u;
            goto label_344cb4;
        }
    }
    ctx->pc = 0x344CA8u;
label_344ca8:
    // 0x344ca8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344ca8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344cac:
    // 0x344cac: 0x10000007  b           . + 4 + (0x7 << 2)
label_344cb0:
    if (ctx->pc == 0x344CB0u) {
        ctx->pc = 0x344CB0u;
            // 0x344cb0: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344CB4u;
        goto label_344cb4;
    }
    ctx->pc = 0x344CACu;
    {
        const bool branch_taken_0x344cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344CACu;
            // 0x344cb0: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344cac) {
            ctx->pc = 0x344CCCu;
            goto label_344ccc;
        }
    }
    ctx->pc = 0x344CB4u;
label_344cb4:
    // 0x344cb4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344cb8:
    // 0x344cb8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344cb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344cbc:
    // 0x344cbc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344cbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344cc0:
    // 0x344cc0: 0x0  nop
    ctx->pc = 0x344cc0u;
    // NOP
label_344cc4:
    // 0x344cc4: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x344cc4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
label_344cc8:
    // 0x344cc8: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x344cc8u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_344ccc:
    // 0x344ccc: 0xc4b0019c  lwc1        $f16, 0x19C($a1)
    ctx->pc = 0x344cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_344cd0:
    // 0x344cd0: 0xc4b101a0  lwc1        $f17, 0x1A0($a1)
    ctx->pc = 0x344cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_344cd4:
    // 0x344cd4: 0xc04f468  jal         func_13D1A0
label_344cd8:
    if (ctx->pc == 0x344CD8u) {
        ctx->pc = 0x344CD8u;
            // 0x344cd8: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->pc = 0x344CDCu;
        goto label_344cdc;
    }
    ctx->pc = 0x344CD4u;
    SET_GPR_U32(ctx, 31, 0x344CDCu);
    ctx->pc = 0x344CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344CD4u;
            // 0x344cd8: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D1A0u;
    if (runtime->hasFunction(0x13D1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13D1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344CDCu; }
        if (ctx->pc != 0x344CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D1A0_0x13d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344CDCu; }
        if (ctx->pc != 0x344CDCu) { return; }
    }
    ctx->pc = 0x344CDCu;
label_344cdc:
    // 0x344cdc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x344cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_344ce0:
    // 0x344ce0: 0x3e00008  jr          $ra
label_344ce4:
    if (ctx->pc == 0x344CE4u) {
        ctx->pc = 0x344CE4u;
            // 0x344ce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x344CE8u;
        goto label_344ce8;
    }
    ctx->pc = 0x344CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344CE0u;
            // 0x344ce4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344CE8u;
label_344ce8:
    // 0x344ce8: 0x0  nop
    ctx->pc = 0x344ce8u;
    // NOP
label_344cec:
    // 0x344cec: 0x0  nop
    ctx->pc = 0x344cecu;
    // NOP
label_344cf0:
    // 0x344cf0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x344cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_344cf4:
    // 0x344cf4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x344cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_344cf8:
    // 0x344cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x344cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_344cfc:
    // 0x344cfc: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x344cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_344d00:
    // 0x344d00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x344d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_344d04:
    // 0x344d04: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x344d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_344d08:
    // 0x344d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x344d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_344d0c:
    // 0x344d0c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x344d0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344d10:
    // 0x344d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_344d14:
    // 0x344d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_344d18:
    // 0x344d18: 0x8c9200c4  lw          $s2, 0xC4($a0)
    ctx->pc = 0x344d18u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 196)));
label_344d1c:
    // 0x344d1c: 0x8c5089f0  lw          $s0, -0x7610($v0)
    ctx->pc = 0x344d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_344d20:
    // 0x344d20: 0xc05750c  jal         func_15D430
label_344d24:
    if (ctx->pc == 0x344D24u) {
        ctx->pc = 0x344D24u;
            // 0x344d24: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->pc = 0x344D28u;
        goto label_344d28;
    }
    ctx->pc = 0x344D20u;
    SET_GPR_U32(ctx, 31, 0x344D28u);
    ctx->pc = 0x344D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344D20u;
            // 0x344d24: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D28u; }
        if (ctx->pc != 0x344D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D28u; }
        if (ctx->pc != 0x344D28u) { return; }
    }
    ctx->pc = 0x344D28u;
label_344d28:
    // 0x344d28: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x344d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_344d2c:
    // 0x344d2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x344d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_344d30:
    // 0x344d30: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x344d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_344d34:
    // 0x344d34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_344d38:
    if (ctx->pc == 0x344D38u) {
        ctx->pc = 0x344D38u;
            // 0x344d38: 0xde460000  ld          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x344D3Cu;
        goto label_344d3c;
    }
    ctx->pc = 0x344D34u;
    {
        const bool branch_taken_0x344d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D34u;
            // 0x344d38: 0xde460000  ld          $a2, 0x0($s2) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d34) {
            ctx->pc = 0x344D50u;
            goto label_344d50;
        }
    }
    ctx->pc = 0x344D3Cu;
label_344d3c:
    // 0x344d3c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x344d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_344d40:
    // 0x344d40: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x344d40u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_344d44:
    // 0x344d44: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x344d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_344d48:
    // 0x344d48: 0x10000005  b           . + 4 + (0x5 << 2)
label_344d4c:
    if (ctx->pc == 0x344D4Cu) {
        ctx->pc = 0x344D4Cu;
            // 0x344d4c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x344D50u;
        goto label_344d50;
    }
    ctx->pc = 0x344D48u;
    {
        const bool branch_taken_0x344d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344D48u;
            // 0x344d4c: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344d48) {
            ctx->pc = 0x344D60u;
            goto label_344d60;
        }
    }
    ctx->pc = 0x344D50u;
label_344d50:
    // 0x344d50: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x344d50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_344d54:
    // 0x344d54: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x344d54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_344d58:
    // 0x344d58: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x344d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_344d5c:
    // 0x344d5c: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x344d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_344d60:
    // 0x344d60: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x344d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_344d64:
    // 0x344d64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344d68:
    // 0x344d68: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x344d68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_344d6c:
    // 0x344d6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x344d6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_344d70:
    // 0x344d70: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x344d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_344d74:
    // 0x344d74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x344d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344d78:
    // 0x344d78: 0xc057540  jal         func_15D500
label_344d7c:
    if (ctx->pc == 0x344D7Cu) {
        ctx->pc = 0x344D7Cu;
            // 0x344d7c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x344D80u;
        goto label_344d80;
    }
    ctx->pc = 0x344D78u;
    SET_GPR_U32(ctx, 31, 0x344D80u);
    ctx->pc = 0x344D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344D78u;
            // 0x344d7c: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D80u; }
        if (ctx->pc != 0x344D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D80u; }
        if (ctx->pc != 0x344D80u) { return; }
    }
    ctx->pc = 0x344D80u;
label_344d80:
    // 0x344d80: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x344d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344d84:
    // 0x344d84: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x344d84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_344d88:
    // 0x344d88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344d8c:
    // 0x344d8c: 0xde460000  ld          $a2, 0x0($s2)
    ctx->pc = 0x344d8cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_344d90:
    // 0x344d90: 0xde470008  ld          $a3, 0x8($s2)
    ctx->pc = 0x344d90u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 8)));
label_344d94:
    // 0x344d94: 0xc057540  jal         func_15D500
label_344d98:
    if (ctx->pc == 0x344D98u) {
        ctx->pc = 0x344D98u;
            // 0x344d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344D9Cu;
        goto label_344d9c;
    }
    ctx->pc = 0x344D94u;
    SET_GPR_U32(ctx, 31, 0x344D9Cu);
    ctx->pc = 0x344D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344D94u;
            // 0x344d98: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D9Cu; }
        if (ctx->pc != 0x344D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344D9Cu; }
        if (ctx->pc != 0x344D9Cu) { return; }
    }
    ctx->pc = 0x344D9Cu;
label_344d9c:
    // 0x344d9c: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x344d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_344da0:
    // 0x344da0: 0x2ca2000b  sltiu       $v0, $a1, 0xB
    ctx->pc = 0x344da0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
label_344da4:
    // 0x344da4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_344da8:
    if (ctx->pc == 0x344DA8u) {
        ctx->pc = 0x344DA8u;
            // 0x344da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344DACu;
        goto label_344dac;
    }
    ctx->pc = 0x344DA4u;
    {
        const bool branch_taken_0x344da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344DA4u;
            // 0x344da8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344da4) {
            ctx->pc = 0x344D84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344d84;
        }
    }
    ctx->pc = 0x344DACu;
label_344dac:
    // 0x344dac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x344dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_344db0:
    // 0x344db0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x344db0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_344db4:
    // 0x344db4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x344db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_344db8:
    // 0x344db8: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x344db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_344dbc:
    // 0x344dbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x344dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_344dc0:
    // 0x344dc0: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x344dc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_344dc4:
    // 0x344dc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344dc8:
    // 0x344dc8: 0xc057540  jal         func_15D500
label_344dcc:
    if (ctx->pc == 0x344DCCu) {
        ctx->pc = 0x344DCCu;
            // 0x344dcc: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x344DD0u;
        goto label_344dd0;
    }
    ctx->pc = 0x344DC8u;
    SET_GPR_U32(ctx, 31, 0x344DD0u);
    ctx->pc = 0x344DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344DC8u;
            // 0x344dcc: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DD0u; }
        if (ctx->pc != 0x344DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DD0u; }
        if (ctx->pc != 0x344DD0u) { return; }
    }
    ctx->pc = 0x344DD0u;
label_344dd0:
    // 0x344dd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344dd4:
    // 0x344dd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344dd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344dd8:
    // 0x344dd8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x344dd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344ddc:
    // 0x344ddc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x344ddcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_344de0:
    // 0x344de0: 0xc057540  jal         func_15D500
label_344de4:
    if (ctx->pc == 0x344DE4u) {
        ctx->pc = 0x344DE4u;
            // 0x344de4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x344DE8u;
        goto label_344de8;
    }
    ctx->pc = 0x344DE0u;
    SET_GPR_U32(ctx, 31, 0x344DE8u);
    ctx->pc = 0x344DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344DE0u;
            // 0x344de4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DE8u; }
        if (ctx->pc != 0x344DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344DE8u; }
        if (ctx->pc != 0x344DE8u) { return; }
    }
    ctx->pc = 0x344DE8u;
label_344de8:
    // 0x344de8: 0x3c027800  lui         $v0, 0x7800
    ctx->pc = 0x344de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)30720 << 16));
label_344dec:
    // 0x344dec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344df0:
    // 0x344df0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344df4:
    // 0x344df4: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x344df4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_344df8:
    // 0x344df8: 0x34477600  ori         $a3, $v0, 0x7600
    ctx->pc = 0x344df8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30208);
label_344dfc:
    // 0x344dfc: 0xc057540  jal         func_15D500
label_344e00:
    if (ctx->pc == 0x344E00u) {
        ctx->pc = 0x344E00u;
            // 0x344e00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x344E04u;
        goto label_344e04;
    }
    ctx->pc = 0x344DFCu;
    SET_GPR_U32(ctx, 31, 0x344E04u);
    ctx->pc = 0x344E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344DFCu;
            // 0x344e00: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E04u; }
        if (ctx->pc != 0x344E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E04u; }
        if (ctx->pc != 0x344E04u) { return; }
    }
    ctx->pc = 0x344E04u;
label_344e04:
    // 0x344e04: 0x9e6200c8  lwu         $v0, 0xC8($s3)
    ctx->pc = 0x344e04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_344e08:
    // 0x344e08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344e0c:
    // 0x344e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344e10:
    // 0x344e10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x344e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_344e14:
    // 0x344e14: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x344e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_344e18:
    // 0x344e18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x344e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_344e1c:
    // 0x344e1c: 0xc057540  jal         func_15D500
label_344e20:
    if (ctx->pc == 0x344E20u) {
        ctx->pc = 0x344E20u;
            // 0x344e20: 0x34472800  ori         $a3, $v0, 0x2800 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
        ctx->pc = 0x344E24u;
        goto label_344e24;
    }
    ctx->pc = 0x344E1Cu;
    SET_GPR_U32(ctx, 31, 0x344E24u);
    ctx->pc = 0x344E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344E1Cu;
            // 0x344e20: 0x34472800  ori         $a3, $v0, 0x2800 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)10240);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E24u; }
        if (ctx->pc != 0x344E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E24u; }
        if (ctx->pc != 0x344E24u) { return; }
    }
    ctx->pc = 0x344E24u;
label_344e24:
    // 0x344e24: 0x34028800  ori         $v0, $zero, 0x8800
    ctx->pc = 0x344e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
label_344e28:
    // 0x344e28: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x344e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_344e2c:
    // 0x344e2c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x344e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_344e30:
    // 0x344e30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x344e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_344e34:
    // 0x344e34: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x344e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_344e38:
    // 0x344e38: 0xc057540  jal         func_15D500
label_344e3c:
    if (ctx->pc == 0x344E3Cu) {
        ctx->pc = 0x344E3Cu;
            // 0x344e3c: 0x34478a00  ori         $a3, $v0, 0x8A00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35328);
        ctx->pc = 0x344E40u;
        goto label_344e40;
    }
    ctx->pc = 0x344E38u;
    SET_GPR_U32(ctx, 31, 0x344E40u);
    ctx->pc = 0x344E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344E38u;
            // 0x344e3c: 0x34478a00  ori         $a3, $v0, 0x8A00 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)35328);
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E40u; }
        if (ctx->pc != 0x344E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E40u; }
        if (ctx->pc != 0x344E40u) { return; }
    }
    ctx->pc = 0x344E40u;
label_344e40:
    // 0x344e40: 0xc057528  jal         func_15D4A0
label_344e44:
    if (ctx->pc == 0x344E44u) {
        ctx->pc = 0x344E44u;
            // 0x344e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x344E48u;
        goto label_344e48;
    }
    ctx->pc = 0x344E40u;
    SET_GPR_U32(ctx, 31, 0x344E48u);
    ctx->pc = 0x344E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x344E40u;
            // 0x344e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E48u; }
        if (ctx->pc != 0x344E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x344E48u; }
        if (ctx->pc != 0x344E48u) { return; }
    }
    ctx->pc = 0x344E48u;
label_344e48:
    // 0x344e48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x344e48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_344e4c:
    // 0x344e4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x344e4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_344e50:
    // 0x344e50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x344e50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_344e54:
    // 0x344e54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x344e54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_344e58:
    // 0x344e58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x344e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_344e5c:
    // 0x344e5c: 0x3e00008  jr          $ra
label_344e60:
    if (ctx->pc == 0x344E60u) {
        ctx->pc = 0x344E60u;
            // 0x344e60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x344E64u;
        goto label_344e64;
    }
    ctx->pc = 0x344E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x344E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344E5Cu;
            // 0x344e60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x344E64u;
label_344e64:
    // 0x344e64: 0x0  nop
    ctx->pc = 0x344e64u;
    // NOP
label_344e68:
    // 0x344e68: 0x0  nop
    ctx->pc = 0x344e68u;
    // NOP
label_344e6c:
    // 0x344e6c: 0x0  nop
    ctx->pc = 0x344e6cu;
    // NOP
label_344e70:
    // 0x344e70: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x344e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_344e74:
    // 0x344e74: 0x3c0342fe  lui         $v1, 0x42FE
    ctx->pc = 0x344e74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17150 << 16));
label_344e78:
    // 0x344e78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x344e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_344e7c:
    // 0x344e7c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344e7cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344e80:
    // 0x344e80: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x344e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_344e84:
    // 0x344e84: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x344e84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_344e88:
    // 0x344e88: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x344e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_344e8c:
    // 0x344e8c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x344e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_344e90:
    // 0x344e90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x344e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_344e94:
    // 0x344e94: 0x59080  sll         $s2, $a1, 2
    ctx->pc = 0x344e94u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_344e98:
    // 0x344e98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x344e98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_344e9c:
    // 0x344e9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x344e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_344ea0:
    // 0x344ea0: 0x2511821  addu        $v1, $s2, $s1
    ctx->pc = 0x344ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_344ea4:
    // 0x344ea4: 0xc46c00a0  lwc1        $f12, 0xA0($v1)
    ctx->pc = 0x344ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_344ea8:
    // 0x344ea8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x344ea8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344eac:
    // 0x344eac: 0x45020192  bc1fl       . + 4 + (0x192 << 2)
label_344eb0:
    if (ctx->pc == 0x344EB0u) {
        ctx->pc = 0x344EB0u;
            // 0x344eb0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x344EB4u;
        goto label_344eb4;
    }
    ctx->pc = 0x344EACu;
    {
        const bool branch_taken_0x344eac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x344eac) {
            ctx->pc = 0x344EB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344EACu;
            // 0x344eb0: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3454F8u;
            goto label_3454f8;
        }
    }
    ctx->pc = 0x344EB4u;
label_344eb4:
    // 0x344eb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x344eb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_344eb8:
    // 0x344eb8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x344eb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_344ebc:
    // 0x344ebc: 0x320f809  jalr        $t9
label_344ec0:
    if (ctx->pc == 0x344EC0u) {
        ctx->pc = 0x344EC4u;
        goto label_344ec4;
    }
    ctx->pc = 0x344EBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x344EC4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x344EC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x344EC4u; }
            if (ctx->pc != 0x344EC4u) { return; }
        }
        }
    }
    ctx->pc = 0x344EC4u;
label_344ec4:
    // 0x344ec4: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x344ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_344ec8:
    // 0x344ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x344ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344ecc:
    // 0x344ecc: 0x0  nop
    ctx->pc = 0x344eccu;
    // NOP
label_344ed0:
    // 0x344ed0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x344ed0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344ed4:
    // 0x344ed4: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_344ed8:
    if (ctx->pc == 0x344ED8u) {
        ctx->pc = 0x344ED8u;
            // 0x344ed8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x344EDCu;
        goto label_344edc;
    }
    ctx->pc = 0x344ED4u;
    {
        const bool branch_taken_0x344ed4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344ed4) {
            ctx->pc = 0x344ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344ED4u;
            // 0x344ed8: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x344EF0u;
            goto label_344ef0;
        }
    }
    ctx->pc = 0x344EDCu;
label_344edc:
    // 0x344edc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344edcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_344ee0:
    // 0x344ee0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x344ee0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_344ee4:
    // 0x344ee4: 0x10000008  b           . + 4 + (0x8 << 2)
label_344ee8:
    if (ctx->pc == 0x344EE8u) {
        ctx->pc = 0x344EE8u;
            // 0x344ee8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x344EECu;
        goto label_344eec;
    }
    ctx->pc = 0x344EE4u;
    {
        const bool branch_taken_0x344ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344EE4u;
            // 0x344ee8: 0x306300ff  andi        $v1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x344ee4) {
            ctx->pc = 0x344F08u;
            goto label_344f08;
        }
    }
    ctx->pc = 0x344EECu;
label_344eec:
    // 0x344eec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x344eecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_344ef0:
    // 0x344ef0: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x344ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_344ef4:
    // 0x344ef4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344ef4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_344ef8:
    // 0x344ef8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x344ef8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_344efc:
    // 0x344efc: 0x0  nop
    ctx->pc = 0x344efcu;
    // NOP
label_344f00:
    // 0x344f00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344f04:
    // 0x344f04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x344f04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_344f08:
    // 0x344f08: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x344f08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_344f0c:
    // 0x344f0c: 0x41e00  sll         $v1, $a0, 24
    ctx->pc = 0x344f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_344f10:
    // 0x344f10: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x344f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_344f14:
    // 0x344f14: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344f18:
    // 0x344f18: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x344f18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_344f1c:
    // 0x344f1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x344f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_344f20:
    // 0x344f20: 0x345000ff  ori         $s0, $v0, 0xFF
    ctx->pc = 0x344f20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
label_344f24:
    // 0x344f24: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x344f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_344f28:
    // 0x344f28: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x344f28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_344f2c:
    // 0x344f2c: 0x8c428a08  lw          $v0, -0x75F8($v0)
    ctx->pc = 0x344f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_344f30:
    // 0x344f30: 0x24c612d0  addiu       $a2, $a2, 0x12D0
    ctx->pc = 0x344f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4816));
label_344f34:
    // 0x344f34: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x344f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_344f38:
    // 0x344f38: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x344f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_344f3c:
    // 0x344f3c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x344f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_344f40:
    // 0x344f40: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x344f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_344f44:
    // 0x344f44: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x344f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_344f48:
    // 0x344f48: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x344f48u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344f4c:
    // 0x344f4c: 0x8c4b0004  lw          $t3, 0x4($v0)
    ctx->pc = 0x344f4cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_344f50:
    // 0x344f50: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x344f50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_344f54:
    // 0x344f54: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x344f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_344f58:
    // 0x344f58: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x344f58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_344f5c:
    // 0x344f5c: 0x84c30000  lh          $v1, 0x0($a2)
    ctx->pc = 0x344f5cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
label_344f60:
    // 0x344f60: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x344f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_344f64:
    // 0x344f64: 0x84c20002  lh          $v0, 0x2($a2)
    ctx->pc = 0x344f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_344f68:
    // 0x344f68: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x344f68u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_344f6c:
    // 0x344f6c: 0xa4a20002  sh          $v0, 0x2($a1)
    ctx->pc = 0x344f6cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 2), (uint16_t)GPR_U32(ctx, 2));
label_344f70:
    // 0x344f70: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x344f70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_344f74:
    // 0x344f74: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_344f78:
    if (ctx->pc == 0x344F78u) {
        ctx->pc = 0x344F78u;
            // 0x344f78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x344F7Cu;
        goto label_344f7c;
    }
    ctx->pc = 0x344F74u;
    {
        const bool branch_taken_0x344f74 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x344F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344F74u;
            // 0x344f78: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f74) {
            ctx->pc = 0x344F5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_344f5c;
        }
    }
    ctx->pc = 0x344F7Cu;
label_344f7c:
    // 0x344f7c: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x344f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_344f80:
    // 0x344f80: 0xb3900  sll         $a3, $t3, 4
    ctx->pc = 0x344f80u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 11), 4));
label_344f84:
    // 0x344f84: 0x24486bf8  addiu       $t0, $v0, 0x6BF8
    ctx->pc = 0x344f84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 27640));
label_344f88:
    // 0x344f88: 0x24e471f8  addiu       $a0, $a3, 0x71F8
    ctx->pc = 0x344f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 29176));
label_344f8c:
    // 0x344f8c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x344f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_344f90:
    // 0x344f90: 0xa7a800a0  sh          $t0, 0xA0($sp)
    ctx->pc = 0x344f90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 8));
label_344f94:
    // 0x344f94: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x344f94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_344f98:
    // 0x344f98: 0x5800004  bltz        $t4, . + 4 + (0x4 << 2)
label_344f9c:
    if (ctx->pc == 0x344F9Cu) {
        ctx->pc = 0x344F9Cu;
            // 0x344f9c: 0xa7a400a2  sh          $a0, 0xA2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x344FA0u;
        goto label_344fa0;
    }
    ctx->pc = 0x344F98u;
    {
        const bool branch_taken_0x344f98 = (GPR_S32(ctx, 12) < 0);
        ctx->pc = 0x344F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344F98u;
            // 0x344f9c: 0xa7a400a2  sh          $a0, 0xA2($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344f98) {
            ctx->pc = 0x344FACu;
            goto label_344fac;
        }
    }
    ctx->pc = 0x344FA0u;
label_344fa0:
    // 0x344fa0: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x344fa0u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344fa4:
    // 0x344fa4: 0x10000008  b           . + 4 + (0x8 << 2)
label_344fa8:
    if (ctx->pc == 0x344FA8u) {
        ctx->pc = 0x344FA8u;
            // 0x344fa8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x344FACu;
        goto label_344fac;
    }
    ctx->pc = 0x344FA4u;
    {
        const bool branch_taken_0x344fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344FA4u;
            // 0x344fa8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fa4) {
            ctx->pc = 0x344FC8u;
            goto label_344fc8;
        }
    }
    ctx->pc = 0x344FACu;
label_344fac:
    // 0x344fac: 0xc1842  srl         $v1, $t4, 1
    ctx->pc = 0x344facu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 12), 1));
label_344fb0:
    // 0x344fb0: 0x31820001  andi        $v0, $t4, 0x1
    ctx->pc = 0x344fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1);
label_344fb4:
    // 0x344fb4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x344fb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_344fb8:
    // 0x344fb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x344fb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344fbc:
    // 0x344fbc: 0x0  nop
    ctx->pc = 0x344fbcu;
    // NOP
label_344fc0:
    // 0x344fc0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x344fc0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_344fc4:
    // 0x344fc4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x344fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_344fc8:
    // 0x344fc8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x344fc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_344fcc:
    // 0x344fcc: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x344fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_344fd0:
    // 0x344fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x344fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_344fd4:
    // 0x344fd4: 0x0  nop
    ctx->pc = 0x344fd4u;
    // NOP
label_344fd8:
    // 0x344fd8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x344fd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_344fdc:
    // 0x344fdc: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_344fe0:
    if (ctx->pc == 0x344FE0u) {
        ctx->pc = 0x344FE0u;
            // 0x344fe0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x344FE4u;
        goto label_344fe4;
    }
    ctx->pc = 0x344FDCu;
    {
        const bool branch_taken_0x344fdc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x344fdc) {
            ctx->pc = 0x344FE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x344FDCu;
            // 0x344fe0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x344FF8u;
            goto label_344ff8;
        }
    }
    ctx->pc = 0x344FE4u;
label_344fe4:
    // 0x344fe4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344fe4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_344fe8:
    // 0x344fe8: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x344fe8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_344fec:
    // 0x344fec: 0x10000008  b           . + 4 + (0x8 << 2)
label_344ff0:
    if (ctx->pc == 0x344FF0u) {
        ctx->pc = 0x344FF0u;
            // 0x344ff0: 0x3c023f12  lui         $v0, 0x3F12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16146 << 16));
        ctx->pc = 0x344FF4u;
        goto label_344ff4;
    }
    ctx->pc = 0x344FECu;
    {
        const bool branch_taken_0x344fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x344FECu;
            // 0x344ff0: 0x3c023f12  lui         $v0, 0x3F12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16146 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344fec) {
            ctx->pc = 0x345010u;
            goto label_345010;
        }
    }
    ctx->pc = 0x344FF4u;
label_344ff4:
    // 0x344ff4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x344ff4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_344ff8:
    // 0x344ff8: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x344ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_344ffc:
    // 0x344ffc: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x344ffcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345000:
    // 0x345000: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x345000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_345004:
    // 0x345004: 0x0  nop
    ctx->pc = 0x345004u;
    // NOP
label_345008:
    // 0x345008: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34500c:
    // 0x34500c: 0x3c023f12  lui         $v0, 0x3F12
    ctx->pc = 0x34500cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16146 << 16));
label_345010:
    // 0x345010: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x345010u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_345014:
    // 0x345014: 0x34424925  ori         $v0, $v0, 0x4925
    ctx->pc = 0x345014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)18725);
label_345018:
    // 0x345018: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x345018u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_34501c:
    // 0x34501c: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
label_345020:
    if (ctx->pc == 0x345020u) {
        ctx->pc = 0x345020u;
            // 0x345020: 0xa7a600a4  sh          $a2, 0xA4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x345024u;
        goto label_345024;
    }
    ctx->pc = 0x34501Cu;
    {
        const bool branch_taken_0x34501c = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x345020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34501Cu;
            // 0x345020: 0xa7a600a4  sh          $a2, 0xA4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34501c) {
            ctx->pc = 0x345030u;
            goto label_345030;
        }
    }
    ctx->pc = 0x345024u;
label_345024:
    // 0x345024: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x345024u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345028:
    // 0x345028: 0x10000008  b           . + 4 + (0x8 << 2)
label_34502c:
    if (ctx->pc == 0x34502Cu) {
        ctx->pc = 0x34502Cu;
            // 0x34502c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x345030u;
        goto label_345030;
    }
    ctx->pc = 0x345028u;
    {
        const bool branch_taken_0x345028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345028u;
            // 0x34502c: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345028) {
            ctx->pc = 0x34504Cu;
            goto label_34504c;
        }
    }
    ctx->pc = 0x345030u;
label_345030:
    // 0x345030: 0xb1842  srl         $v1, $t3, 1
    ctx->pc = 0x345030u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_345034:
    // 0x345034: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x345034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_345038:
    // 0x345038: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x345038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_34503c:
    // 0x34503c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34503cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345040:
    // 0x345040: 0x0  nop
    ctx->pc = 0x345040u;
    // NOP
label_345044:
    // 0x345044: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_345048:
    // 0x345048: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345048u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_34504c:
    // 0x34504c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x34504cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_345050:
    // 0x345050: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x345050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_345054:
    // 0x345054: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x345054u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345058:
    // 0x345058: 0x0  nop
    ctx->pc = 0x345058u;
    // NOP
label_34505c:
    // 0x34505c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x34505cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_345060:
    // 0x345060: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_345064:
    if (ctx->pc == 0x345064u) {
        ctx->pc = 0x345064u;
            // 0x345064: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x345068u;
        goto label_345068;
    }
    ctx->pc = 0x345060u;
    {
        const bool branch_taken_0x345060 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345060) {
            ctx->pc = 0x345064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345060u;
            // 0x345064: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x34507Cu;
            goto label_34507c;
        }
    }
    ctx->pc = 0x345068u;
label_345068:
    // 0x345068: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345068u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34506c:
    // 0x34506c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x34506cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_345070:
    // 0x345070: 0x10000008  b           . + 4 + (0x8 << 2)
label_345074:
    if (ctx->pc == 0x345074u) {
        ctx->pc = 0x345074u;
            // 0x345074: 0x92900  sll         $a1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->pc = 0x345078u;
        goto label_345078;
    }
    ctx->pc = 0x345070u;
    {
        const bool branch_taken_0x345070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345070u;
            // 0x345074: 0x92900  sll         $a1, $t1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345070) {
            ctx->pc = 0x345094u;
            goto label_345094;
        }
    }
    ctx->pc = 0x345078u;
label_345078:
    // 0x345078: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x345078u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_34507c:
    // 0x34507c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x34507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_345080:
    // 0x345080: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345080u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345084:
    // 0x345084: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x345084u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_345088:
    // 0x345088: 0x0  nop
    ctx->pc = 0x345088u;
    // NOP
label_34508c:
    // 0x34508c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x34508cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_345090:
    // 0x345090: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x345090u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
label_345094:
    // 0x345094: 0x3c0c3f12  lui         $t4, 0x3F12
    ctx->pc = 0x345094u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16146 << 16));
label_345098:
    // 0x345098: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x345098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_34509c:
    // 0x34509c: 0x24a271f8  addiu       $v0, $a1, 0x71F8
    ctx->pc = 0x34509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 29176));
label_3450a0:
    // 0x3450a0: 0x358c4925  ori         $t4, $t4, 0x4925
    ctx->pc = 0x3450a0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)18725);
label_3450a4:
    // 0x3450a4: 0xa7a800aa  sh          $t0, 0xAA($sp)
    ctx->pc = 0x3450a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 170), (uint16_t)GPR_U32(ctx, 8));
label_3450a8:
    // 0x3450a8: 0xa7a300a6  sh          $v1, 0xA6($sp)
    ctx->pc = 0x3450a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 3));
label_3450ac:
    // 0x3450ac: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x3450acu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3450b0:
    // 0x3450b0: 0xa7a600ae  sh          $a2, 0xAE($sp)
    ctx->pc = 0x3450b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 174), (uint16_t)GPR_U32(ctx, 6));
label_3450b4:
    // 0x3450b4: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_3450b8:
    if (ctx->pc == 0x3450B8u) {
        ctx->pc = 0x3450B8u;
            // 0x3450b8: 0xa7a200ac  sh          $v0, 0xAC($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x3450BCu;
        goto label_3450bc;
    }
    ctx->pc = 0x3450B4u;
    {
        const bool branch_taken_0x3450b4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x3450B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3450B4u;
            // 0x3450b8: 0xa7a200ac  sh          $v0, 0xAC($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 172), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450b4) {
            ctx->pc = 0x3450C8u;
            goto label_3450c8;
        }
    }
    ctx->pc = 0x3450BCu;
label_3450bc:
    // 0x3450bc: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3450bcu;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3450c0:
    // 0x3450c0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3450c4:
    if (ctx->pc == 0x3450C4u) {
        ctx->pc = 0x3450C4u;
            // 0x3450c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3450C8u;
        goto label_3450c8;
    }
    ctx->pc = 0x3450C0u;
    {
        const bool branch_taken_0x3450c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3450C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3450C0u;
            // 0x3450c4: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3450c0) {
            ctx->pc = 0x3450E4u;
            goto label_3450e4;
        }
    }
    ctx->pc = 0x3450C8u;
label_3450c8:
    // 0x3450c8: 0x96842  srl         $t5, $t1, 1
    ctx->pc = 0x3450c8u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_3450cc:
    // 0x3450cc: 0x312c0001  andi        $t4, $t1, 0x1
    ctx->pc = 0x3450ccu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_3450d0:
    // 0x3450d0: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x3450d0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_3450d4:
    // 0x3450d4: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x3450d4u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3450d8:
    // 0x3450d8: 0x0  nop
    ctx->pc = 0x3450d8u;
    // NOP
label_3450dc:
    // 0x3450dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3450dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3450e0:
    // 0x3450e0: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3450e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3450e4:
    // 0x3450e4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3450e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3450e8:
    // 0x3450e8: 0x3c0c4f00  lui         $t4, 0x4F00
    ctx->pc = 0x3450e8u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)20224 << 16));
label_3450ec:
    // 0x3450ec: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x3450ecu;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3450f0:
    // 0x3450f0: 0x0  nop
    ctx->pc = 0x3450f0u;
    // NOP
label_3450f4:
    // 0x3450f4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3450f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3450f8:
    // 0x3450f8: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3450fc:
    if (ctx->pc == 0x3450FCu) {
        ctx->pc = 0x3450FCu;
            // 0x3450fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x345100u;
        goto label_345100;
    }
    ctx->pc = 0x3450F8u;
    {
        const bool branch_taken_0x3450f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3450f8) {
            ctx->pc = 0x3450FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3450F8u;
            // 0x3450fc: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x345114u;
            goto label_345114;
        }
    }
    ctx->pc = 0x345100u;
label_345100:
    // 0x345100: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345104:
    // 0x345104: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x345104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
label_345108:
    // 0x345108: 0x10000008  b           . + 4 + (0x8 << 2)
label_34510c:
    if (ctx->pc == 0x34510Cu) {
        ctx->pc = 0x34510Cu;
            // 0x34510c: 0xa7a400b6  sh          $a0, 0xB6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 182), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x345110u;
        goto label_345110;
    }
    ctx->pc = 0x345108u;
    {
        const bool branch_taken_0x345108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345108u;
            // 0x34510c: 0xa7a400b6  sh          $a0, 0xB6($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 182), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345108) {
            ctx->pc = 0x34512Cu;
            goto label_34512c;
        }
    }
    ctx->pc = 0x345110u;
label_345110:
    // 0x345110: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x345110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_345114:
    // 0x345114: 0x3c0c8000  lui         $t4, 0x8000
    ctx->pc = 0x345114u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32768 << 16));
label_345118:
    // 0x345118: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345118u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_34511c:
    // 0x34511c: 0x440d0000  mfc1        $t5, $f0
    ctx->pc = 0x34511cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 13, bits); }
label_345120:
    // 0x345120: 0x0  nop
    ctx->pc = 0x345120u;
    // NOP
label_345124:
    // 0x345124: 0x1ac6825  or          $t5, $t5, $t4
    ctx->pc = 0x345124u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 12));
label_345128:
    // 0x345128: 0xa7a400b6  sh          $a0, 0xB6($sp)
    ctx->pc = 0x345128u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 182), (uint16_t)GPR_U32(ctx, 4));
label_34512c:
    // 0x34512c: 0xd6900  sll         $t5, $t5, 4
    ctx->pc = 0x34512cu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 4));
label_345130:
    // 0x345130: 0xa2100  sll         $a0, $t2, 4
    ctx->pc = 0x345130u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_345134:
    // 0x345134: 0x3c0c3f00  lui         $t4, 0x3F00
    ctx->pc = 0x345134u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)16128 << 16));
label_345138:
    // 0x345138: 0x24846bf8  addiu       $a0, $a0, 0x6BF8
    ctx->pc = 0x345138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27640));
label_34513c:
    // 0x34513c: 0xa7ad00b0  sh          $t5, 0xB0($sp)
    ctx->pc = 0x34513cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 176), (uint16_t)GPR_U32(ctx, 13));
label_345140:
    // 0x345140: 0x448c0800  mtc1        $t4, $f1
    ctx->pc = 0x345140u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_345144:
    // 0x345144: 0x5400004  bltz        $t2, . + 4 + (0x4 << 2)
label_345148:
    if (ctx->pc == 0x345148u) {
        ctx->pc = 0x345148u;
            // 0x345148: 0xa7a400b4  sh          $a0, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 4));
        ctx->pc = 0x34514Cu;
        goto label_34514c;
    }
    ctx->pc = 0x345144u;
    {
        const bool branch_taken_0x345144 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x345148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345144u;
            // 0x345148: 0xa7a400b4  sh          $a0, 0xB4($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 180), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345144) {
            ctx->pc = 0x345158u;
            goto label_345158;
        }
    }
    ctx->pc = 0x34514Cu;
label_34514c:
    // 0x34514c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x34514cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345150:
    // 0x345150: 0x10000008  b           . + 4 + (0x8 << 2)
label_345154:
    if (ctx->pc == 0x345154u) {
        ctx->pc = 0x345154u;
            // 0x345154: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x345158u;
        goto label_345158;
    }
    ctx->pc = 0x345150u;
    {
        const bool branch_taken_0x345150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345150u;
            // 0x345154: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345150) {
            ctx->pc = 0x345174u;
            goto label_345174;
        }
    }
    ctx->pc = 0x345158u;
label_345158:
    // 0x345158: 0xa6042  srl         $t4, $t2, 1
    ctx->pc = 0x345158u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
label_34515c:
    // 0x34515c: 0x314a0001  andi        $t2, $t2, 0x1
    ctx->pc = 0x34515cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
label_345160:
    // 0x345160: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x345160u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
label_345164:
    // 0x345164: 0x448c0000  mtc1        $t4, $f0
    ctx->pc = 0x345164u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345168:
    // 0x345168: 0x0  nop
    ctx->pc = 0x345168u;
    // NOP
label_34516c:
    // 0x34516c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x34516cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_345170:
    // 0x345170: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345170u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_345174:
    // 0x345174: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345174u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_345178:
    // 0x345178: 0x3c0a4f00  lui         $t2, 0x4F00
    ctx->pc = 0x345178u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)20224 << 16));
label_34517c:
    // 0x34517c: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x34517cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345180:
    // 0x345180: 0x0  nop
    ctx->pc = 0x345180u;
    // NOP
label_345184:
    // 0x345184: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x345184u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_345188:
    // 0x345188: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_34518c:
    if (ctx->pc == 0x34518Cu) {
        ctx->pc = 0x34518Cu;
            // 0x34518c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x345190u;
        goto label_345190;
    }
    ctx->pc = 0x345188u;
    {
        const bool branch_taken_0x345188 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x345188) {
            ctx->pc = 0x34518Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345188u;
            // 0x34518c: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3451A4u;
            goto label_3451a4;
        }
    }
    ctx->pc = 0x345190u;
label_345190:
    // 0x345190: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345190u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345194:
    // 0x345194: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x345194u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_345198:
    // 0x345198: 0x10000008  b           . + 4 + (0x8 << 2)
label_34519c:
    if (ctx->pc == 0x34519Cu) {
        ctx->pc = 0x34519Cu;
            // 0x34519c: 0xa7a300ba  sh          $v1, 0xBA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3451A0u;
        goto label_3451a0;
    }
    ctx->pc = 0x345198u;
    {
        const bool branch_taken_0x345198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345198u;
            // 0x34519c: 0xa7a300ba  sh          $v1, 0xBA($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345198) {
            ctx->pc = 0x3451BCu;
            goto label_3451bc;
        }
    }
    ctx->pc = 0x3451A0u;
label_3451a0:
    // 0x3451a0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x3451a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_3451a4:
    // 0x3451a4: 0x3c0a8000  lui         $t2, 0x8000
    ctx->pc = 0x3451a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32768 << 16));
label_3451a8:
    // 0x3451a8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3451a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3451ac:
    // 0x3451ac: 0x440c0000  mfc1        $t4, $f0
    ctx->pc = 0x3451acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
label_3451b0:
    // 0x3451b0: 0x0  nop
    ctx->pc = 0x3451b0u;
    // NOP
label_3451b4:
    // 0x3451b4: 0x18a6025  or          $t4, $t4, $t2
    ctx->pc = 0x3451b4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 10));
label_3451b8:
    // 0x3451b8: 0xa7a300ba  sh          $v1, 0xBA($sp)
    ctx->pc = 0x3451b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 186), (uint16_t)GPR_U32(ctx, 3));
label_3451bc:
    // 0x3451bc: 0x3c0e0060  lui         $t6, 0x60
    ctx->pc = 0x3451bcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)96 << 16));
label_3451c0:
    // 0x3451c0: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x3451c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
label_3451c4:
    // 0x3451c4: 0xa7ad00c4  sh          $t5, 0xC4($sp)
    ctx->pc = 0x3451c4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 196), (uint16_t)GPR_U32(ctx, 13));
label_3451c8:
    // 0x3451c8: 0xa7a200c0  sh          $v0, 0xC0($sp)
    ctx->pc = 0x3451c8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 192), (uint16_t)GPR_U32(ctx, 2));
label_3451cc:
    // 0x3451cc: 0x25ce1300  addiu       $t6, $t6, 0x1300
    ctx->pc = 0x3451ccu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4864));
label_3451d0:
    // 0x3451d0: 0x27ad0070  addiu       $t5, $sp, 0x70
    ctx->pc = 0x3451d0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_3451d4:
    // 0x3451d4: 0xa7a300b8  sh          $v1, 0xB8($sp)
    ctx->pc = 0x3451d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 184), (uint16_t)GPR_U32(ctx, 3));
label_3451d8:
    // 0x3451d8: 0x240c000a  addiu       $t4, $zero, 0xA
    ctx->pc = 0x3451d8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3451dc:
    // 0x3451dc: 0xa7a400be  sh          $a0, 0xBE($sp)
    ctx->pc = 0x3451dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 190), (uint16_t)GPR_U32(ctx, 4));
label_3451e0:
    // 0x3451e0: 0xa7a300c2  sh          $v1, 0xC2($sp)
    ctx->pc = 0x3451e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 194), (uint16_t)GPR_U32(ctx, 3));
label_3451e4:
    // 0x3451e4: 0x85ca0000  lh          $t2, 0x0($t6)
    ctx->pc = 0x3451e4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
label_3451e8:
    // 0x3451e8: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x3451e8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_3451ec:
    // 0x3451ec: 0x85c20002  lh          $v0, 0x2($t6)
    ctx->pc = 0x3451ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
label_3451f0:
    // 0x3451f0: 0xa5aa0000  sh          $t2, 0x0($t5)
    ctx->pc = 0x3451f0u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 10));
label_3451f4:
    // 0x3451f4: 0xa5a20002  sh          $v0, 0x2($t5)
    ctx->pc = 0x3451f4u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 2), (uint16_t)GPR_U32(ctx, 2));
label_3451f8:
    // 0x3451f8: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x3451f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
label_3451fc:
    // 0x3451fc: 0x1d80fff9  bgtz        $t4, . + 4 + (-0x7 << 2)
label_345200:
    if (ctx->pc == 0x345200u) {
        ctx->pc = 0x345200u;
            // 0x345200: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->pc = 0x345204u;
        goto label_345204;
    }
    ctx->pc = 0x3451FCu;
    {
        const bool branch_taken_0x3451fc = (GPR_S32(ctx, 12) > 0);
        ctx->pc = 0x345200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3451FCu;
            // 0x345200: 0x25ad0004  addiu       $t5, $t5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3451fc) {
            ctx->pc = 0x3451E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3451e4;
        }
    }
    ctx->pc = 0x345204u;
label_345204:
    // 0x345204: 0x24e26ff8  addiu       $v0, $a3, 0x6FF8
    ctx->pc = 0x345204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 28664));
label_345208:
    // 0x345208: 0xa7a80070  sh          $t0, 0x70($sp)
    ctx->pc = 0x345208u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 112), (uint16_t)GPR_U32(ctx, 8));
label_34520c:
    // 0x34520c: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x34520cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
label_345210:
    // 0x345210: 0xa7a20072  sh          $v0, 0x72($sp)
    ctx->pc = 0x345210u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 114), (uint16_t)GPR_U32(ctx, 2));
label_345214:
    // 0x345214: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x345214u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_345218:
    // 0x345218: 0x5600004  bltz        $t3, . + 4 + (0x4 << 2)
label_34521c:
    if (ctx->pc == 0x34521Cu) {
        ctx->pc = 0x34521Cu;
            // 0x34521c: 0xa7a60074  sh          $a2, 0x74($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 6));
        ctx->pc = 0x345220u;
        goto label_345220;
    }
    ctx->pc = 0x345218u;
    {
        const bool branch_taken_0x345218 = (GPR_S32(ctx, 11) < 0);
        ctx->pc = 0x34521Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345218u;
            // 0x34521c: 0xa7a60074  sh          $a2, 0x74($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 116), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345218) {
            ctx->pc = 0x34522Cu;
            goto label_34522c;
        }
    }
    ctx->pc = 0x345220u;
label_345220:
    // 0x345220: 0x448b0000  mtc1        $t3, $f0
    ctx->pc = 0x345220u;
    { uint32_t bits = GPR_U32(ctx, 11); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345224:
    // 0x345224: 0x10000008  b           . + 4 + (0x8 << 2)
label_345228:
    if (ctx->pc == 0x345228u) {
        ctx->pc = 0x345228u;
            // 0x345228: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x34522Cu;
        goto label_34522c;
    }
    ctx->pc = 0x345224u;
    {
        const bool branch_taken_0x345224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345224u;
            // 0x345228: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x345224) {
            ctx->pc = 0x345248u;
            goto label_345248;
        }
    }
    ctx->pc = 0x34522Cu;
label_34522c:
    // 0x34522c: 0xb5042  srl         $t2, $t3, 1
    ctx->pc = 0x34522cu;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 11), 1));
label_345230:
    // 0x345230: 0x31670001  andi        $a3, $t3, 0x1
    ctx->pc = 0x345230u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
label_345234:
    // 0x345234: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x345234u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_345238:
    // 0x345238: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x345238u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_34523c:
    // 0x34523c: 0x0  nop
    ctx->pc = 0x34523cu;
    // NOP
label_345240:
    // 0x345240: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x345240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_345244:
    // 0x345244: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x345244u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_345248:
    // 0x345248: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x345248u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_34524c:
    // 0x34524c: 0x3c074f00  lui         $a3, 0x4F00
    ctx->pc = 0x34524cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20224 << 16));
label_345250:
    // 0x345250: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x345250u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_345254:
    // 0x345254: 0x0  nop
    ctx->pc = 0x345254u;
    // NOP
label_345258:
    // 0x345258: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x345258u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_34525c:
    // 0x34525c: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_345260:
    if (ctx->pc == 0x345260u) {
        ctx->pc = 0x345260u;
            // 0x345260: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x345264u;
        goto label_345264;
    }
    ctx->pc = 0x34525Cu;
    {
        const bool branch_taken_0x34525c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34525c) {
            ctx->pc = 0x345260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x34525Cu;
            // 0x345260: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x345278u;
            goto label_345278;
        }
    }
    ctx->pc = 0x345264u;
label_345264:
    // 0x345264: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x345264u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345268:
    // 0x345268: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x345268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_34526c:
    // 0x34526c: 0x10000008  b           . + 4 + (0x8 << 2)
label_345270:
    if (ctx->pc == 0x345270u) {
        ctx->pc = 0x345270u;
            // 0x345270: 0x24a76ff8  addiu       $a3, $a1, 0x6FF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 28664));
        ctx->pc = 0x345274u;
        goto label_345274;
    }
    ctx->pc = 0x34526Cu;
    {
        const bool branch_taken_0x34526c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x34526Cu;
            // 0x345270: 0x24a76ff8  addiu       $a3, $a1, 0x6FF8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 28664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34526c) {
            ctx->pc = 0x345290u;
            goto label_345290;
        }
    }
    ctx->pc = 0x345274u;
label_345274:
    // 0x345274: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x345274u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_345278:
    // 0x345278: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x345278u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_34527c:
    // 0x34527c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34527cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345280:
    // 0x345280: 0x440a0000  mfc1        $t2, $f0
    ctx->pc = 0x345280u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 10, bits); }
label_345284:
    // 0x345284: 0x0  nop
    ctx->pc = 0x345284u;
    // NOP
label_345288:
    // 0x345288: 0x1475025  or          $t2, $t2, $a3
    ctx->pc = 0x345288u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 7));
label_34528c:
    // 0x34528c: 0x24a76ff8  addiu       $a3, $a1, 0x6FF8
    ctx->pc = 0x34528cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 28664));
label_345290:
    // 0x345290: 0xa7a8007a  sh          $t0, 0x7A($sp)
    ctx->pc = 0x345290u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 122), (uint16_t)GPR_U32(ctx, 8));
label_345294:
    // 0x345294: 0xa4100  sll         $t0, $t2, 4
    ctx->pc = 0x345294u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
label_345298:
    // 0x345298: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x345298u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_34529c:
    // 0x34529c: 0xa7a6007e  sh          $a2, 0x7E($sp)
    ctx->pc = 0x34529cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 126), (uint16_t)GPR_U32(ctx, 6));
label_3452a0:
    // 0x3452a0: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3452a0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3452a4:
    // 0x3452a4: 0xa7a80076  sh          $t0, 0x76($sp)
    ctx->pc = 0x3452a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 118), (uint16_t)GPR_U32(ctx, 8));
label_3452a8:
    // 0x3452a8: 0x5200004  bltz        $t1, . + 4 + (0x4 << 2)
label_3452ac:
    if (ctx->pc == 0x3452ACu) {
        ctx->pc = 0x3452ACu;
            // 0x3452ac: 0xa7a7007c  sh          $a3, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 7));
        ctx->pc = 0x3452B0u;
        goto label_3452b0;
    }
    ctx->pc = 0x3452A8u;
    {
        const bool branch_taken_0x3452a8 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x3452ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3452A8u;
            // 0x3452ac: 0xa7a7007c  sh          $a3, 0x7C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 124), (uint16_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452a8) {
            ctx->pc = 0x3452BCu;
            goto label_3452bc;
        }
    }
    ctx->pc = 0x3452B0u;
label_3452b0:
    // 0x3452b0: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x3452b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3452b4:
    // 0x3452b4: 0x10000008  b           . + 4 + (0x8 << 2)
label_3452b8:
    if (ctx->pc == 0x3452B8u) {
        ctx->pc = 0x3452B8u;
            // 0x3452b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x3452BCu;
        goto label_3452bc;
    }
    ctx->pc = 0x3452B4u;
    {
        const bool branch_taken_0x3452b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3452B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3452B4u;
            // 0x3452b8: 0x46800020  cvt.s.w     $f0, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452b4) {
            ctx->pc = 0x3452D8u;
            goto label_3452d8;
        }
    }
    ctx->pc = 0x3452BCu;
label_3452bc:
    // 0x3452bc: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x3452bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
label_3452c0:
    // 0x3452c0: 0x31250001  andi        $a1, $t1, 0x1
    ctx->pc = 0x3452c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_3452c4:
    // 0x3452c4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3452c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_3452c8:
    // 0x3452c8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x3452c8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3452cc:
    // 0x3452cc: 0x0  nop
    ctx->pc = 0x3452ccu;
    // NOP
label_3452d0:
    // 0x3452d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3452d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_3452d4:
    // 0x3452d4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3452d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_3452d8:
    // 0x3452d8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3452d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_3452dc:
    // 0x3452dc: 0x3c054f00  lui         $a1, 0x4F00
    ctx->pc = 0x3452dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20224 << 16));
label_3452e0:
    // 0x3452e0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3452e0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3452e4:
    // 0x3452e4: 0x0  nop
    ctx->pc = 0x3452e4u;
    // NOP
label_3452e8:
    // 0x3452e8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x3452e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3452ec:
    // 0x3452ec: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
label_3452f0:
    if (ctx->pc == 0x3452F0u) {
        ctx->pc = 0x3452F0u;
            // 0x3452f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x3452F4u;
        goto label_3452f4;
    }
    ctx->pc = 0x3452ECu;
    {
        const bool branch_taken_0x3452ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3452ec) {
            ctx->pc = 0x3452F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3452ECu;
            // 0x3452f0: 0x46000801  sub.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x345308u;
            goto label_345308;
        }
    }
    ctx->pc = 0x3452F4u;
label_3452f4:
    // 0x3452f4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3452f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_3452f8:
    // 0x3452f8: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3452f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_3452fc:
    // 0x3452fc: 0x10000008  b           . + 4 + (0x8 << 2)
label_345300:
    if (ctx->pc == 0x345300u) {
        ctx->pc = 0x345300u;
            // 0x345300: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x345304u;
        goto label_345304;
    }
    ctx->pc = 0x3452FCu;
    {
        const bool branch_taken_0x3452fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x345300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3452FCu;
            // 0x345300: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3452fc) {
            ctx->pc = 0x345320u;
            goto label_345320;
        }
    }
    ctx->pc = 0x345304u;
label_345304:
    // 0x345304: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x345304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_345308:
    // 0x345308: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x345308u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
label_34530c:
    // 0x34530c: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x34530cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_345310:
    // 0x345310: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x345310u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
label_345314:
    // 0x345314: 0x0  nop
    ctx->pc = 0x345314u;
    // NOP
label_345318:
    // 0x345318: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x345318u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
label_34531c:
    // 0x34531c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x34531cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_345320:
    // 0x345320: 0xa7a20086  sh          $v0, 0x86($sp)
    ctx->pc = 0x345320u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 134), (uint16_t)GPR_U32(ctx, 2));
label_345324:
    // 0x345324: 0x27a500c8  addiu       $a1, $sp, 0xC8
    ctx->pc = 0x345324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_345328:
    // 0x345328: 0xa7a8008a  sh          $t0, 0x8A($sp)
    ctx->pc = 0x345328u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 138), (uint16_t)GPR_U32(ctx, 8));
label_34532c:
    // 0x34532c: 0xa7a70090  sh          $a3, 0x90($sp)
    ctx->pc = 0x34532cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 144), (uint16_t)GPR_U32(ctx, 7));
label_345330:
    // 0x345330: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x345330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_345334:
    // 0x345334: 0xa7a60080  sh          $a2, 0x80($sp)
    ctx->pc = 0x345334u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 6));
label_345338:
    // 0x345338: 0xa7a60094  sh          $a2, 0x94($sp)
    ctx->pc = 0x345338u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 148), (uint16_t)GPR_U32(ctx, 6));
label_34533c:
    // 0x34533c: 0xa7a40084  sh          $a0, 0x84($sp)
    ctx->pc = 0x34533cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 132), (uint16_t)GPR_U32(ctx, 4));
label_345340:
    // 0x345340: 0xa7a4008e  sh          $a0, 0x8E($sp)
    ctx->pc = 0x345340u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 142), (uint16_t)GPR_U32(ctx, 4));
label_345344:
    // 0x345344: 0xa7a30088  sh          $v1, 0x88($sp)
    ctx->pc = 0x345344u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 136), (uint16_t)GPR_U32(ctx, 3));
label_345348:
    // 0x345348: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_34534c:
    if (ctx->pc == 0x34534Cu) {
        ctx->pc = 0x34534Cu;
            // 0x34534c: 0xa7a30092  sh          $v1, 0x92($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x345350u;
        goto label_345350;
    }
    ctx->pc = 0x345348u;
    {
        const bool branch_taken_0x345348 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x34534Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345348u;
            // 0x34534c: 0xa7a30092  sh          $v1, 0x92($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 146), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x345348) {
            ctx->pc = 0x34536Cu;
            goto label_34536c;
        }
    }
    ctx->pc = 0x345350u;
label_345350:
    // 0x345350: 0xa0a00000  sb          $zero, 0x0($a1)
    ctx->pc = 0x345350u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 0));
label_345354:
    // 0x345354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x345354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_345358:
    // 0x345358: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x345358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_34535c:
    // 0x34535c: 0x0  nop
    ctx->pc = 0x34535cu;
    // NOP
label_345360:
    // 0x345360: 0x0  nop
    ctx->pc = 0x345360u;
    // NOP
label_345364:
    // 0x345364: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_345368:
    if (ctx->pc == 0x345368u) {
        ctx->pc = 0x34536Cu;
        goto label_34536c;
    }
    ctx->pc = 0x345364u;
    {
        const bool branch_taken_0x345364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345364) {
            ctx->pc = 0x345350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345350;
        }
    }
    ctx->pc = 0x34536Cu;
label_34536c:
    // 0x34536c: 0x27a200a0  addiu       $v0, $sp, 0xA0
    ctx->pc = 0x34536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_345370:
    // 0x345370: 0x8e3500c0  lw          $s5, 0xC0($s1)
    ctx->pc = 0x345370u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_345374:
    // 0x345374: 0xafa200c8  sw          $v0, 0xC8($sp)
    ctx->pc = 0x345374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
label_345378:
    // 0x345378: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x345378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
label_34537c:
    // 0x34537c: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x34537cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_345380:
    // 0x345380: 0x24050160  addiu       $a1, $zero, 0x160
    ctx->pc = 0x345380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_345384:
    // 0x345384: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x345384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_345388:
    // 0x345388: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x345388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_34538c:
    // 0x34538c: 0x8c5389f0  lw          $s3, -0x7610($v0)
    ctx->pc = 0x34538cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_345390:
    // 0x345390: 0x92620029  lbu         $v0, 0x29($s3)
    ctx->pc = 0x345390u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
label_345394:
    // 0x345394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x345394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_345398:
    // 0x345398: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x345398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_34539c:
    // 0x34539c: 0x8c5200c8  lw          $s2, 0xC8($v0)
    ctx->pc = 0x34539cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 200)));
label_3453a0:
    // 0x3453a0: 0xc05750c  jal         func_15D430
label_3453a4:
    if (ctx->pc == 0x3453A4u) {
        ctx->pc = 0x3453A4u;
            // 0x3453a4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x3453A8u;
        goto label_3453a8;
    }
    ctx->pc = 0x3453A0u;
    SET_GPR_U32(ctx, 31, 0x3453A8u);
    ctx->pc = 0x3453A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3453A0u;
            // 0x3453a4: 0x24060015  addiu       $a2, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D430u;
    if (runtime->hasFunction(0x15D430u)) {
        auto targetFn = runtime->lookupFunction(0x15D430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453A8u; }
        if (ctx->pc != 0x3453A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D430_0x15d430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3453A8u; }
        if (ctx->pc != 0x3453A8u) { return; }
    }
    ctx->pc = 0x3453A8u;
label_3453a8:
    // 0x3453a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3453a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3453ac:
    // 0x3453ac: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3453acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3453b0:
    // 0x3453b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3453b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3453b4:
    // 0x3453b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3453b8:
    if (ctx->pc == 0x3453B8u) {
        ctx->pc = 0x3453B8u;
            // 0x3453b8: 0xdea60000  ld          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->pc = 0x3453BCu;
        goto label_3453bc;
    }
    ctx->pc = 0x3453B4u;
    {
        const bool branch_taken_0x3453b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3453B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3453B4u;
            // 0x3453b8: 0xdea60000  ld          $a2, 0x0($s5) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3453b4) {
            ctx->pc = 0x3453D0u;
            goto label_3453d0;
        }
    }
    ctx->pc = 0x3453BCu;
label_3453bc:
    // 0x3453bc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3453bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3453c0:
    // 0x3453c0: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3453c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
label_3453c4:
    // 0x3453c4: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3453c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3453c8:
    // 0x3453c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3453cc:
    if (ctx->pc == 0x3453CCu) {
        ctx->pc = 0x3453CCu;
            // 0x3453cc: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->pc = 0x3453D0u;
        goto label_3453d0;
    }
    ctx->pc = 0x3453C8u;
    {
        const bool branch_taken_0x3453c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3453CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3453C8u;
            // 0x3453cc: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3453c8) {
            ctx->pc = 0x3453E0u;
            goto label_3453e0;
        }
    }
    ctx->pc = 0x3453D0u;
label_3453d0:
    // 0x3453d0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3453d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3453d4:
    // 0x3453d4: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3453d4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
label_3453d8:
    // 0x3453d8: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3453d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_3453dc:
    // 0x3453dc: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3453dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3453e0:
    // 0x3453e0: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3453e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
label_3453e4:
    // 0x3453e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3453e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3453e8:
    // 0x3453e8: 0xdea20008  ld          $v0, 0x8($s5)
    ctx->pc = 0x3453e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_3453ec:
    // 0x3453ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3453ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3453f0:
    // 0x3453f0: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3453f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_3453f4:
    // 0x3453f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3453f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3453f8:
    // 0x3453f8: 0xc057540  jal         func_15D500
label_3453fc:
    if (ctx->pc == 0x3453FCu) {
        ctx->pc = 0x3453FCu;
            // 0x3453fc: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->pc = 0x345400u;
        goto label_345400;
    }
    ctx->pc = 0x3453F8u;
    SET_GPR_U32(ctx, 31, 0x345400u);
    ctx->pc = 0x3453FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3453F8u;
            // 0x3453fc: 0x433825  or          $a3, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345400u; }
        if (ctx->pc != 0x345400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345400u; }
        if (ctx->pc != 0x345400u) { return; }
    }
    ctx->pc = 0x345400u;
label_345400:
    // 0x345400: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x345400u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_345404:
    // 0x345404: 0x26b50010  addiu       $s5, $s5, 0x10
    ctx->pc = 0x345404u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
label_345408:
    // 0x345408: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_34540c:
    // 0x34540c: 0xdea60000  ld          $a2, 0x0($s5)
    ctx->pc = 0x34540cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_345410:
    // 0x345410: 0xdea70008  ld          $a3, 0x8($s5)
    ctx->pc = 0x345410u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 21), 8)));
label_345414:
    // 0x345414: 0xc057540  jal         func_15D500
label_345418:
    if (ctx->pc == 0x345418u) {
        ctx->pc = 0x345418u;
            // 0x345418: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x34541Cu;
        goto label_34541c;
    }
    ctx->pc = 0x345414u;
    SET_GPR_U32(ctx, 31, 0x34541Cu);
    ctx->pc = 0x345418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345414u;
            // 0x345418: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34541Cu; }
        if (ctx->pc != 0x34541Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x34541Cu; }
        if (ctx->pc != 0x34541Cu) { return; }
    }
    ctx->pc = 0x34541Cu;
label_34541c:
    // 0x34541c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34541cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_345420:
    // 0x345420: 0x2e820009  sltiu       $v0, $s4, 0x9
    ctx->pc = 0x345420u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_345424:
    // 0x345424: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_345428:
    if (ctx->pc == 0x345428u) {
        ctx->pc = 0x345428u;
            // 0x345428: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->pc = 0x34542Cu;
        goto label_34542c;
    }
    ctx->pc = 0x345424u;
    {
        const bool branch_taken_0x345424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x345424) {
            ctx->pc = 0x345428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x345424u;
            // 0x345428: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x345408u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345408;
        }
    }
    ctx->pc = 0x34542Cu;
label_34542c:
    // 0x34542c: 0x101602  srl         $v0, $s0, 24
    ctx->pc = 0x34542cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 24));
label_345430:
    // 0x345430: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x345430u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_345434:
    // 0x345434: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x345434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_345438:
    // 0x345438: 0x101402  srl         $v0, $s0, 16
    ctx->pc = 0x345438u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
label_34543c:
    // 0x34543c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x34543cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_345440:
    // 0x345440: 0x101202  srl         $v0, $s0, 8
    ctx->pc = 0x345440u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_345444:
    // 0x345444: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x345444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_345448:
    // 0x345448: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x345448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34544c:
    // 0x34544c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x34544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_345450:
    // 0x345450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_345454:
    // 0x345454: 0x432025  or          $a0, $v0, $v1
    ctx->pc = 0x345454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_345458:
    // 0x345458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x345458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34545c:
    // 0x34545c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x34545cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
label_345460:
    // 0x345460: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x345460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_345464:
    // 0x345464: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x345464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_345468:
    // 0x345468: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x345468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_34546c:
    // 0x34546c: 0x828025  or          $s0, $a0, $v0
    ctx->pc = 0x34546cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_345470:
    // 0x345470: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x345470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_345474:
    // 0x345474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345478:
    // 0x345478: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x345478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_34547c:
    // 0x34547c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x34547cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_345480:
    // 0x345480: 0xc057540  jal         func_15D500
label_345484:
    if (ctx->pc == 0x345484u) {
        ctx->pc = 0x345484u;
            // 0x345484: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x345488u;
        goto label_345488;
    }
    ctx->pc = 0x345480u;
    SET_GPR_U32(ctx, 31, 0x345488u);
    ctx->pc = 0x345484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x345480u;
            // 0x345484: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345488u; }
        if (ctx->pc != 0x345488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x345488u; }
        if (ctx->pc != 0x345488u) { return; }
    }
    ctx->pc = 0x345488u;
label_345488:
    // 0x345488: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x345488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_34548c:
    // 0x34548c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x34548cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_345490:
    // 0x345490: 0x96430004  lhu         $v1, 0x4($s2)
    ctx->pc = 0x345490u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_345494:
    // 0x345494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x345494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_345498:
    // 0x345498: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x345498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_34549c:
    // 0x34549c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x34549cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3454a0:
    // 0x3454a0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3454a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_3454a4:
    // 0x3454a4: 0xc057540  jal         func_15D500
label_3454a8:
    if (ctx->pc == 0x3454A8u) {
        ctx->pc = 0x3454A8u;
            // 0x3454a8: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->pc = 0x3454ACu;
        goto label_3454ac;
    }
    ctx->pc = 0x3454A4u;
    SET_GPR_U32(ctx, 31, 0x3454ACu);
    ctx->pc = 0x3454A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3454A4u;
            // 0x3454a8: 0x623825  or          $a3, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454ACu; }
        if (ctx->pc != 0x3454ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454ACu; }
        if (ctx->pc != 0x3454ACu) { return; }
    }
    ctx->pc = 0x3454ACu;
label_3454ac:
    // 0x3454ac: 0x96470002  lhu         $a3, 0x2($s2)
    ctx->pc = 0x3454acu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_3454b0:
    // 0x3454b0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3454b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_3454b4:
    // 0x3454b4: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x3454b4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_3454b8:
    // 0x3454b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3454b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3454bc:
    // 0x3454bc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3454bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3454c0:
    // 0x3454c0: 0x92460008  lbu         $a2, 0x8($s2)
    ctx->pc = 0x3454c0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_3454c4:
    // 0x3454c4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x3454c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_3454c8:
    // 0x3454c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3454c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_3454cc:
    // 0x3454cc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x3454ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_3454d0:
    // 0x3454d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3454d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3454d4:
    // 0x3454d4: 0x623825  or          $a3, $v1, $v0
    ctx->pc = 0x3454d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_3454d8:
    // 0x3454d8: 0xc057540  jal         func_15D500
label_3454dc:
    if (ctx->pc == 0x3454DCu) {
        ctx->pc = 0x3454DCu;
            // 0x3454dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->pc = 0x3454E0u;
        goto label_3454e0;
    }
    ctx->pc = 0x3454D8u;
    SET_GPR_U32(ctx, 31, 0x3454E0u);
    ctx->pc = 0x3454DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3454D8u;
            // 0x3454dc: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D500u;
    if (runtime->hasFunction(0x15D500u)) {
        auto targetFn = runtime->lookupFunction(0x15D500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454E0u; }
        if (ctx->pc != 0x3454E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D500_0x15d500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454E0u; }
        if (ctx->pc != 0x3454E0u) { return; }
    }
    ctx->pc = 0x3454E0u;
label_3454e0:
    // 0x3454e0: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3454e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3454e4:
    // 0x3454e4: 0x1660ffe2  bnez        $s3, . + 4 + (-0x1E << 2)
label_3454e8:
    if (ctx->pc == 0x3454E8u) {
        ctx->pc = 0x3454E8u;
            // 0x3454e8: 0x2652000a  addiu       $s2, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->pc = 0x3454ECu;
        goto label_3454ec;
    }
    ctx->pc = 0x3454E4u;
    {
        const bool branch_taken_0x3454e4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3454E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3454E4u;
            // 0x3454e8: 0x2652000a  addiu       $s2, $s2, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3454e4) {
            ctx->pc = 0x345470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_345470;
        }
    }
    ctx->pc = 0x3454ECu;
label_3454ec:
    // 0x3454ec: 0xc057528  jal         func_15D4A0
label_3454f0:
    if (ctx->pc == 0x3454F0u) {
        ctx->pc = 0x3454F0u;
            // 0x3454f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3454F4u;
        goto label_3454f4;
    }
    ctx->pc = 0x3454ECu;
    SET_GPR_U32(ctx, 31, 0x3454F4u);
    ctx->pc = 0x3454F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3454ECu;
            // 0x3454f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D4A0u;
    if (runtime->hasFunction(0x15D4A0u)) {
        auto targetFn = runtime->lookupFunction(0x15D4A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454F4u; }
        if (ctx->pc != 0x3454F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D4A0_0x15d4a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3454F4u; }
        if (ctx->pc != 0x3454F4u) { return; }
    }
    ctx->pc = 0x3454F4u;
label_3454f4:
    // 0x3454f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3454f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3454f8:
    // 0x3454f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3454f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3454fc:
    // 0x3454fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3454fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_345500:
    // 0x345500: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x345500u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_345504:
    // 0x345504: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x345504u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_345508:
    // 0x345508: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x345508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_34550c:
    // 0x34550c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34550cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_345510:
    // 0x345510: 0x3e00008  jr          $ra
label_345514:
    if (ctx->pc == 0x345514u) {
        ctx->pc = 0x345514u;
            // 0x345514: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x345518u;
        goto label_345518;
    }
    ctx->pc = 0x345510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x345514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x345510u;
            // 0x345514: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x345518u;
label_345518:
    // 0x345518: 0x0  nop
    ctx->pc = 0x345518u;
    // NOP
label_34551c:
    // 0x34551c: 0x0  nop
    ctx->pc = 0x34551cu;
    // NOP
}
